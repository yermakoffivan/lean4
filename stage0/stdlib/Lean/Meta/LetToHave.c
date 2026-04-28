// Lean compiler output
// Module: Lean.Meta.LetToHave
// Imports: public import Lean.Meta.Check public import Lean.ReservedNameAction public import Lean.AddDecl public import Lean.Meta.Transform public import Lean.Util.CollectFVars public import Lean.Util.CollectMVars import Init.Data.Range.Polymorphic.Iterators import Init.While
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
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_collectFVars(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_isLetVar___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addZetaDeltaFVarId___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* lean_expr_instantiate_rev_range(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_findDecl_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_FVarId_throwUnknown___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_findDecl_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_getFVar_x21(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
lean_object* l_Lean_Meta_throwUnknownMVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instantiateTypeLevelParams___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
uint32_t l_Lean_Expr_approxDepth(lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwAppTypeMismatch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwFunctionExpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_LocalContext_mkForall(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
uint8_t l_Lean_Expr_isSort(lean_object*);
lean_object* l_Lean_Meta_throwTypeExpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sortLevel_x21(lean_object*);
lean_object* l_Lean_mkLevelIMax_x27(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Literal_type(lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Meta_mkHasTypeButIsExpectedMsg___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_expr_abstract_range(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
lean_object* lean_expr_lower_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getZetaDeltaFVarIds___redArg(lean_object*, lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_div(double, double);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Lean_TraceResult_toEmoji(uint8_t);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
uint8_t l_Lean_Meta_instDecidableEqProjReductionKind(uint8_t, uint8_t);
uint8_t l_Lean_Meta_instBEqEtaStructMode_beq(uint8_t, uint8_t);
uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t, uint8_t);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___lam__0___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___closed__0;
LEAN_EXPORT uint8_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_canSkip(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_canSkip___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__0;
static lean_once_cell_t l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__1;
static lean_once_cell_t l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__2;
static lean_once_cell_t l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_LetToHave_instInhabitedResult_default;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instInhabitedResult;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr___lam__0___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_whenCheck(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_whenCheck___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_withLetFVars___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_withLetFVars___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_withLetFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_withLetFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__0;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__1;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__2;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__3;
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__0;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__1;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__2;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__3;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__4;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__5;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__6;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__7;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__8;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__9;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__10;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__11;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__12;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__13;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__14;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__15;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__16;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__17;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__18;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__2;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__1;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__2;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_ensureType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_ensureType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp_spec__0(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__0;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__1;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__2;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___closed__0;
static lean_once_cell_t l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__1(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__1;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__2;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__4;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__5;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__6;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__7;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__8;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__9;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__10;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__11;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__12;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__13;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__14;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__15;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__1;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__2;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__0;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__1;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__2;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__3;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__4;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__0;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__1;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__2;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13(lean_object*);
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14_spec__16(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__15___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__16___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__3;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__0;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__1;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__2;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__3;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__4;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___closed__0;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___closed__0;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__0;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__1;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__2;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__3;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__4;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__5;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__6;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__0;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__1;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__2;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__3;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__4;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__5;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__6;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__0;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__1;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__2;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letToHave___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letToHave___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_letToHave___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_letToHave___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_letToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letToHave___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___lam__0(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 8)
{
uint8_t v_nondep_2_; 
v_nondep_2_ = lean_ctor_get_uint8(v_x_1_, sizeof(void*)*4 + 8);
if (v_nondep_2_ == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 1;
return v___x_3_;
}
else
{
uint8_t v___x_4_; 
v___x_4_ = 0;
return v___x_4_;
}
}
else
{
uint8_t v___x_5_; 
v___x_5_ = 0;
return v___x_5_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___lam__0___boxed(lean_object* v_x_6_){
_start:
{
uint8_t v_res_7_; lean_object* v_r_8_; 
v_res_7_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___lam__0(v_x_6_);
lean_dec_ref(v_x_6_);
v_r_8_ = lean_box(v_res_7_);
return v_r_8_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___closed__0(void){
_start:
{
lean_object* v___f_9_; 
v___f_9_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___lam__0___boxed), 1, 0);
return v___f_9_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet(lean_object* v_e_10_){
_start:
{
lean_object* v___f_11_; lean_object* v___x_12_; 
v___f_11_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___closed__0);
v___x_12_ = lean_find_expr(v___f_11_, v_e_10_);
if (lean_obj_tag(v___x_12_) == 0)
{
uint8_t v___x_13_; 
v___x_13_ = 0;
return v___x_13_;
}
else
{
uint8_t v___x_14_; 
lean_dec_ref(v___x_12_);
v___x_14_ = 1;
return v___x_14_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___boxed(lean_object* v_e_15_){
_start:
{
uint8_t v_res_16_; lean_object* v_r_17_; 
v_res_16_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet(v_e_15_);
lean_dec_ref(v_e_15_);
v_r_17_ = lean_box(v_res_16_);
return v_r_17_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_canSkip(lean_object* v_e_18_, uint32_t v_maxDepth_19_){
_start:
{
uint8_t v___x_20_; 
v___x_20_ = l_Lean_Expr_hasFVar(v_e_18_);
if (v___x_20_ == 0)
{
uint8_t v___x_21_; 
v___x_21_ = l_Lean_Expr_hasExprMVar(v_e_18_);
if (v___x_21_ == 0)
{
uint32_t v___x_22_; uint8_t v___x_23_; 
v___x_22_ = l_Lean_Expr_approxDepth(v_e_18_);
v___x_23_ = lean_uint32_dec_le(v___x_22_, v_maxDepth_19_);
if (v___x_23_ == 0)
{
return v___x_23_;
}
else
{
uint8_t v___x_24_; 
v___x_24_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet(v_e_18_);
if (v___x_24_ == 0)
{
return v___x_23_;
}
else
{
return v___x_21_;
}
}
}
else
{
return v___x_20_;
}
}
else
{
uint8_t v___x_25_; 
v___x_25_ = 0;
return v___x_25_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_canSkip___boxed(lean_object* v_e_26_, lean_object* v_maxDepth_27_){
_start:
{
uint32_t v_maxDepth_boxed_28_; uint8_t v_res_29_; lean_object* v_r_30_; 
v_maxDepth_boxed_28_ = lean_unbox_uint32(v_maxDepth_27_);
lean_dec(v_maxDepth_27_);
v_res_29_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_canSkip(v_e_26_, v_maxDepth_boxed_28_);
lean_dec_ref(v_e_26_);
v_r_30_ = lean_box(v_res_29_);
return v_r_30_;
}
}
static lean_object* _init_l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__0(void){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = lean_mk_string_unchecked("_inhabitedExprDummy", 19, 19);
return v___x_31_;
}
}
static lean_object* _init_l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__1(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = lean_obj_once(&l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__0, &l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__0_once, _init_l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__0);
v___x_33_ = l_Lean_Name_mkStr1(v___x_32_);
return v___x_33_;
}
}
static lean_object* _init_l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__2(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_34_ = lean_box(0);
v___x_35_ = lean_obj_once(&l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__1, &l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__1_once, _init_l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__1);
v___x_36_ = l_Lean_Expr_const___override(v___x_35_, v___x_34_);
return v___x_36_;
}
}
static lean_object* _init_l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__3(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_37_ = lean_box(0);
v___x_38_ = lean_obj_once(&l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__2, &l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__2_once, _init_l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__2);
v___x_39_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_39_, 0, v___x_38_);
lean_ctor_set(v___x_39_, 1, v___x_37_);
return v___x_39_;
}
}
static lean_object* _init_l_Lean_Meta_LetToHave_instInhabitedResult_default(void){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = lean_obj_once(&l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__3, &l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__3_once, _init_l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__3);
return v___x_40_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instInhabitedResult(void){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_Meta_LetToHave_instInhabitedResult_default;
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr___lam__0(lean_object* v_self_42_){
_start:
{
lean_object* v_expr_43_; 
v_expr_43_ = lean_ctor_get(v_self_42_, 0);
lean_inc_ref(v_expr_43_);
return v_expr_43_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr___lam__0___boxed(lean_object* v_self_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr___lam__0(v_self_44_);
lean_dec_ref(v_self_44_);
return v_res_45_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr___closed__0(void){
_start:
{
lean_object* v___f_46_; 
v___f_46_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr___lam__0___boxed), 1, 0);
return v___f_46_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr(void){
_start:
{
lean_object* v___f_47_; 
v___f_47_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr___closed__0);
return v___f_47_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__2___redArg(lean_object* v_a_48_, lean_object* v_b_49_, lean_object* v_x_50_){
_start:
{
if (lean_obj_tag(v_x_50_) == 0)
{
lean_dec(v_b_49_);
lean_dec_ref(v_a_48_);
return v_x_50_;
}
else
{
lean_object* v_key_51_; lean_object* v_value_52_; lean_object* v_tail_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_65_; 
v_key_51_ = lean_ctor_get(v_x_50_, 0);
v_value_52_ = lean_ctor_get(v_x_50_, 1);
v_tail_53_ = lean_ctor_get(v_x_50_, 2);
v_isSharedCheck_65_ = !lean_is_exclusive(v_x_50_);
if (v_isSharedCheck_65_ == 0)
{
v___x_55_ = v_x_50_;
v_isShared_56_ = v_isSharedCheck_65_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_tail_53_);
lean_inc(v_value_52_);
lean_inc(v_key_51_);
lean_dec(v_x_50_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_65_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
uint8_t v___x_57_; 
v___x_57_ = l_Lean_ExprStructEq_beq(v_key_51_, v_a_48_);
if (v___x_57_ == 0)
{
lean_object* v___x_58_; lean_object* v___x_60_; 
v___x_58_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__2___redArg(v_a_48_, v_b_49_, v_tail_53_);
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 2, v___x_58_);
v___x_60_ = v___x_55_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_61_; 
v_reuseFailAlloc_61_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_61_, 0, v_key_51_);
lean_ctor_set(v_reuseFailAlloc_61_, 1, v_value_52_);
lean_ctor_set(v_reuseFailAlloc_61_, 2, v___x_58_);
v___x_60_ = v_reuseFailAlloc_61_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
return v___x_60_;
}
}
else
{
lean_object* v___x_63_; 
lean_dec(v_value_52_);
lean_dec(v_key_51_);
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 1, v_b_49_);
lean_ctor_set(v___x_55_, 0, v_a_48_);
v___x_63_ = v___x_55_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v_a_48_);
lean_ctor_set(v_reuseFailAlloc_64_, 1, v_b_49_);
lean_ctor_set(v_reuseFailAlloc_64_, 2, v_tail_53_);
v___x_63_ = v_reuseFailAlloc_64_;
goto v_reusejp_62_;
}
v_reusejp_62_:
{
return v___x_63_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_66_, lean_object* v_x_67_){
_start:
{
if (lean_obj_tag(v_x_67_) == 0)
{
return v_x_66_;
}
else
{
lean_object* v_key_68_; lean_object* v_value_69_; lean_object* v_tail_70_; lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_93_; 
v_key_68_ = lean_ctor_get(v_x_67_, 0);
v_value_69_ = lean_ctor_get(v_x_67_, 1);
v_tail_70_ = lean_ctor_get(v_x_67_, 2);
v_isSharedCheck_93_ = !lean_is_exclusive(v_x_67_);
if (v_isSharedCheck_93_ == 0)
{
v___x_72_ = v_x_67_;
v_isShared_73_ = v_isSharedCheck_93_;
goto v_resetjp_71_;
}
else
{
lean_inc(v_tail_70_);
lean_inc(v_value_69_);
lean_inc(v_key_68_);
lean_dec(v_x_67_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_93_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
lean_object* v___x_74_; uint64_t v___x_75_; uint64_t v___x_76_; uint64_t v___x_77_; uint64_t v_fold_78_; uint64_t v___x_79_; uint64_t v___x_80_; uint64_t v___x_81_; size_t v___x_82_; size_t v___x_83_; size_t v___x_84_; size_t v___x_85_; size_t v___x_86_; lean_object* v___x_87_; lean_object* v___x_89_; 
v___x_74_ = lean_array_get_size(v_x_66_);
v___x_75_ = l_Lean_ExprStructEq_hash(v_key_68_);
v___x_76_ = 32ULL;
v___x_77_ = lean_uint64_shift_right(v___x_75_, v___x_76_);
v_fold_78_ = lean_uint64_xor(v___x_75_, v___x_77_);
v___x_79_ = 16ULL;
v___x_80_ = lean_uint64_shift_right(v_fold_78_, v___x_79_);
v___x_81_ = lean_uint64_xor(v_fold_78_, v___x_80_);
v___x_82_ = lean_uint64_to_usize(v___x_81_);
v___x_83_ = lean_usize_of_nat(v___x_74_);
v___x_84_ = ((size_t)1ULL);
v___x_85_ = lean_usize_sub(v___x_83_, v___x_84_);
v___x_86_ = lean_usize_land(v___x_82_, v___x_85_);
v___x_87_ = lean_array_uget_borrowed(v_x_66_, v___x_86_);
lean_inc(v___x_87_);
if (v_isShared_73_ == 0)
{
lean_ctor_set(v___x_72_, 2, v___x_87_);
v___x_89_ = v___x_72_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v_key_68_);
lean_ctor_set(v_reuseFailAlloc_92_, 1, v_value_69_);
lean_ctor_set(v_reuseFailAlloc_92_, 2, v___x_87_);
v___x_89_ = v_reuseFailAlloc_92_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
lean_object* v___x_90_; 
v___x_90_ = lean_array_uset(v_x_66_, v___x_86_, v___x_89_);
v_x_66_ = v___x_90_;
v_x_67_ = v_tail_70_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2___redArg(lean_object* v_i_94_, lean_object* v_source_95_, lean_object* v_target_96_){
_start:
{
lean_object* v___x_97_; uint8_t v___x_98_; 
v___x_97_ = lean_array_get_size(v_source_95_);
v___x_98_ = lean_nat_dec_lt(v_i_94_, v___x_97_);
if (v___x_98_ == 0)
{
lean_dec_ref(v_source_95_);
lean_dec(v_i_94_);
return v_target_96_;
}
else
{
lean_object* v_es_99_; lean_object* v___x_100_; lean_object* v_source_101_; lean_object* v_target_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v_es_99_ = lean_array_fget(v_source_95_, v_i_94_);
v___x_100_ = lean_box(0);
v_source_101_ = lean_array_fset(v_source_95_, v_i_94_, v___x_100_);
v_target_102_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2_spec__3___redArg(v_target_96_, v_es_99_);
v___x_103_ = lean_unsigned_to_nat(1u);
v___x_104_ = lean_nat_add(v_i_94_, v___x_103_);
lean_dec(v_i_94_);
v_i_94_ = v___x_104_;
v_source_95_ = v_source_101_;
v_target_96_ = v_target_102_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1___redArg(lean_object* v_data_106_){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v_nbuckets_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_107_ = lean_array_get_size(v_data_106_);
v___x_108_ = lean_unsigned_to_nat(2u);
v_nbuckets_109_ = lean_nat_mul(v___x_107_, v___x_108_);
v___x_110_ = lean_unsigned_to_nat(0u);
v___x_111_ = lean_box(0);
v___x_112_ = lean_mk_array(v_nbuckets_109_, v___x_111_);
v___x_113_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2___redArg(v___x_110_, v_data_106_, v___x_112_);
return v___x_113_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0___redArg(lean_object* v_a_114_, lean_object* v_x_115_){
_start:
{
if (lean_obj_tag(v_x_115_) == 0)
{
uint8_t v___x_116_; 
v___x_116_ = 0;
return v___x_116_;
}
else
{
lean_object* v_key_117_; lean_object* v_tail_118_; uint8_t v___x_119_; 
v_key_117_ = lean_ctor_get(v_x_115_, 0);
v_tail_118_ = lean_ctor_get(v_x_115_, 2);
v___x_119_ = l_Lean_ExprStructEq_beq(v_key_117_, v_a_114_);
if (v___x_119_ == 0)
{
v_x_115_ = v_tail_118_;
goto _start;
}
else
{
return v___x_119_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0___redArg___boxed(lean_object* v_a_121_, lean_object* v_x_122_){
_start:
{
uint8_t v_res_123_; lean_object* v_r_124_; 
v_res_123_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0___redArg(v_a_121_, v_x_122_);
lean_dec(v_x_122_);
lean_dec_ref(v_a_121_);
v_r_124_ = lean_box(v_res_123_);
return v_r_124_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0___redArg(lean_object* v_m_125_, lean_object* v_a_126_, lean_object* v_b_127_){
_start:
{
lean_object* v_size_128_; lean_object* v_buckets_129_; lean_object* v___x_131_; uint8_t v_isShared_132_; uint8_t v_isSharedCheck_172_; 
v_size_128_ = lean_ctor_get(v_m_125_, 0);
v_buckets_129_ = lean_ctor_get(v_m_125_, 1);
v_isSharedCheck_172_ = !lean_is_exclusive(v_m_125_);
if (v_isSharedCheck_172_ == 0)
{
v___x_131_ = v_m_125_;
v_isShared_132_ = v_isSharedCheck_172_;
goto v_resetjp_130_;
}
else
{
lean_inc(v_buckets_129_);
lean_inc(v_size_128_);
lean_dec(v_m_125_);
v___x_131_ = lean_box(0);
v_isShared_132_ = v_isSharedCheck_172_;
goto v_resetjp_130_;
}
v_resetjp_130_:
{
lean_object* v___x_133_; uint64_t v___x_134_; uint64_t v___x_135_; uint64_t v___x_136_; uint64_t v_fold_137_; uint64_t v___x_138_; uint64_t v___x_139_; uint64_t v___x_140_; size_t v___x_141_; size_t v___x_142_; size_t v___x_143_; size_t v___x_144_; size_t v___x_145_; lean_object* v_bkt_146_; uint8_t v___x_147_; 
v___x_133_ = lean_array_get_size(v_buckets_129_);
v___x_134_ = l_Lean_ExprStructEq_hash(v_a_126_);
v___x_135_ = 32ULL;
v___x_136_ = lean_uint64_shift_right(v___x_134_, v___x_135_);
v_fold_137_ = lean_uint64_xor(v___x_134_, v___x_136_);
v___x_138_ = 16ULL;
v___x_139_ = lean_uint64_shift_right(v_fold_137_, v___x_138_);
v___x_140_ = lean_uint64_xor(v_fold_137_, v___x_139_);
v___x_141_ = lean_uint64_to_usize(v___x_140_);
v___x_142_ = lean_usize_of_nat(v___x_133_);
v___x_143_ = ((size_t)1ULL);
v___x_144_ = lean_usize_sub(v___x_142_, v___x_143_);
v___x_145_ = lean_usize_land(v___x_141_, v___x_144_);
v_bkt_146_ = lean_array_uget_borrowed(v_buckets_129_, v___x_145_);
v___x_147_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0___redArg(v_a_126_, v_bkt_146_);
if (v___x_147_ == 0)
{
lean_object* v___x_148_; lean_object* v_size_x27_149_; lean_object* v___x_150_; lean_object* v_buckets_x27_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; uint8_t v___x_157_; 
v___x_148_ = lean_unsigned_to_nat(1u);
v_size_x27_149_ = lean_nat_add(v_size_128_, v___x_148_);
lean_dec(v_size_128_);
lean_inc(v_bkt_146_);
v___x_150_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_150_, 0, v_a_126_);
lean_ctor_set(v___x_150_, 1, v_b_127_);
lean_ctor_set(v___x_150_, 2, v_bkt_146_);
v_buckets_x27_151_ = lean_array_uset(v_buckets_129_, v___x_145_, v___x_150_);
v___x_152_ = lean_unsigned_to_nat(4u);
v___x_153_ = lean_nat_mul(v_size_x27_149_, v___x_152_);
v___x_154_ = lean_unsigned_to_nat(3u);
v___x_155_ = lean_nat_div(v___x_153_, v___x_154_);
lean_dec(v___x_153_);
v___x_156_ = lean_array_get_size(v_buckets_x27_151_);
v___x_157_ = lean_nat_dec_le(v___x_155_, v___x_156_);
lean_dec(v___x_155_);
if (v___x_157_ == 0)
{
lean_object* v_val_158_; lean_object* v___x_160_; 
v_val_158_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1___redArg(v_buckets_x27_151_);
if (v_isShared_132_ == 0)
{
lean_ctor_set(v___x_131_, 1, v_val_158_);
lean_ctor_set(v___x_131_, 0, v_size_x27_149_);
v___x_160_ = v___x_131_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v_size_x27_149_);
lean_ctor_set(v_reuseFailAlloc_161_, 1, v_val_158_);
v___x_160_ = v_reuseFailAlloc_161_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
return v___x_160_;
}
}
else
{
lean_object* v___x_163_; 
if (v_isShared_132_ == 0)
{
lean_ctor_set(v___x_131_, 1, v_buckets_x27_151_);
lean_ctor_set(v___x_131_, 0, v_size_x27_149_);
v___x_163_ = v___x_131_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v_size_x27_149_);
lean_ctor_set(v_reuseFailAlloc_164_, 1, v_buckets_x27_151_);
v___x_163_ = v_reuseFailAlloc_164_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
return v___x_163_;
}
}
}
else
{
lean_object* v___x_165_; lean_object* v_buckets_x27_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_170_; 
lean_inc(v_bkt_146_);
v___x_165_ = lean_box(0);
v_buckets_x27_166_ = lean_array_uset(v_buckets_129_, v___x_145_, v___x_165_);
v___x_167_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__2___redArg(v_a_126_, v_b_127_, v_bkt_146_);
v___x_168_ = lean_array_uset(v_buckets_x27_166_, v___x_145_, v___x_167_);
if (v_isShared_132_ == 0)
{
lean_ctor_set(v___x_131_, 1, v___x_168_);
v___x_170_ = v___x_131_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v_size_128_);
lean_ctor_set(v_reuseFailAlloc_171_, 1, v___x_168_);
v___x_170_ = v_reuseFailAlloc_171_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
return v___x_170_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg(lean_object* v_r_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_){
_start:
{
lean_object* v_type_x3f_180_; 
v_type_x3f_180_ = lean_ctor_get(v_r_173_, 1);
lean_inc(v_type_x3f_180_);
if (lean_obj_tag(v_type_x3f_180_) == 1)
{
lean_object* v_val_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_188_; 
lean_dec_ref(v_r_173_);
v_val_181_ = lean_ctor_get(v_type_x3f_180_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v_type_x3f_180_);
if (v_isSharedCheck_188_ == 0)
{
v___x_183_ = v_type_x3f_180_;
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_val_181_);
lean_dec(v_type_x3f_180_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_186_; 
if (v_isShared_184_ == 0)
{
lean_ctor_set_tag(v___x_183_, 0);
v___x_186_ = v___x_183_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_val_181_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
else
{
lean_object* v_expr_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_219_; 
lean_dec(v_type_x3f_180_);
v_expr_189_ = lean_ctor_get(v_r_173_, 0);
v_isSharedCheck_219_ = !lean_is_exclusive(v_r_173_);
if (v_isSharedCheck_219_ == 0)
{
lean_object* v_unused_220_; 
v_unused_220_ = lean_ctor_get(v_r_173_, 1);
lean_dec(v_unused_220_);
v___x_191_ = v_r_173_;
v_isShared_192_ = v_isSharedCheck_219_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_expr_189_);
lean_dec(v_r_173_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_219_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_193_; 
lean_inc(v_a_178_);
lean_inc_ref(v_a_177_);
lean_inc(v_a_176_);
lean_inc_ref(v_a_175_);
lean_inc_ref(v_expr_189_);
v___x_193_ = lean_infer_type(v_expr_189_, v_a_175_, v_a_176_, v_a_177_, v_a_178_);
if (lean_obj_tag(v___x_193_) == 0)
{
lean_object* v_a_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_218_; 
v_a_194_ = lean_ctor_get(v___x_193_, 0);
v_isSharedCheck_218_ = !lean_is_exclusive(v___x_193_);
if (v_isSharedCheck_218_ == 0)
{
v___x_196_ = v___x_193_;
v_isShared_197_ = v_isSharedCheck_218_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_a_194_);
lean_dec(v___x_193_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_218_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v_count_200_; lean_object* v_results_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_217_; 
v___x_198_ = lean_st_ref_get(v_a_178_);
lean_dec(v___x_198_);
v___x_199_ = lean_st_ref_take(v_a_174_);
v_count_200_ = lean_ctor_get(v___x_199_, 0);
v_results_201_ = lean_ctor_get(v___x_199_, 1);
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_199_);
if (v_isSharedCheck_217_ == 0)
{
v___x_203_ = v___x_199_;
v_isShared_204_ = v_isSharedCheck_217_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_results_201_);
lean_inc(v_count_200_);
lean_dec(v___x_199_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_217_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___x_205_; lean_object* v___x_207_; 
lean_inc(v_a_194_);
v___x_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_205_, 0, v_a_194_);
lean_inc_ref(v_expr_189_);
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 1, v___x_205_);
v___x_207_ = v___x_191_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v_expr_189_);
lean_ctor_set(v_reuseFailAlloc_216_, 1, v___x_205_);
v___x_207_ = v_reuseFailAlloc_216_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
lean_object* v___x_208_; lean_object* v___x_210_; 
v___x_208_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0___redArg(v_results_201_, v_expr_189_, v___x_207_);
if (v_isShared_204_ == 0)
{
lean_ctor_set(v___x_203_, 1, v___x_208_);
v___x_210_ = v___x_203_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v_count_200_);
lean_ctor_set(v_reuseFailAlloc_215_, 1, v___x_208_);
v___x_210_ = v_reuseFailAlloc_215_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
lean_object* v___x_211_; lean_object* v___x_213_; 
v___x_211_ = lean_st_ref_set(v_a_174_, v___x_210_);
if (v_isShared_197_ == 0)
{
v___x_213_ = v___x_196_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v_a_194_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_191_);
lean_dec_ref(v_expr_189_);
return v___x_193_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg___boxed(lean_object* v_r_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg(v_r_221_, v_a_222_, v_a_223_, v_a_224_, v_a_225_, v_a_226_);
lean_dec(v_a_226_);
lean_dec_ref(v_a_225_);
lean_dec(v_a_224_);
lean_dec_ref(v_a_223_);
lean_dec(v_a_222_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type(lean_object* v_r_229_, lean_object* v_a_230_, lean_object* v_a_231_, lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg(v_r_229_, v_a_231_, v_a_232_, v_a_233_, v_a_234_, v_a_235_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___boxed(lean_object* v_r_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type(v_r_238_, v_a_239_, v_a_240_, v_a_241_, v_a_242_, v_a_243_, v_a_244_);
lean_dec(v_a_244_);
lean_dec_ref(v_a_243_);
lean_dec(v_a_242_);
lean_dec_ref(v_a_241_);
lean_dec(v_a_240_);
lean_dec(v_a_239_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0(lean_object* v_00_u03b2_247_, lean_object* v_m_248_, lean_object* v_a_249_, lean_object* v_b_250_){
_start:
{
lean_object* v___x_251_; 
v___x_251_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0___redArg(v_m_248_, v_a_249_, v_b_250_);
return v___x_251_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0(lean_object* v_00_u03b2_252_, lean_object* v_a_253_, lean_object* v_x_254_){
_start:
{
uint8_t v___x_255_; 
v___x_255_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0___redArg(v_a_253_, v_x_254_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0___boxed(lean_object* v_00_u03b2_256_, lean_object* v_a_257_, lean_object* v_x_258_){
_start:
{
uint8_t v_res_259_; lean_object* v_r_260_; 
v_res_259_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0(v_00_u03b2_256_, v_a_257_, v_x_258_);
lean_dec(v_x_258_);
lean_dec_ref(v_a_257_);
v_r_260_ = lean_box(v_res_259_);
return v_r_260_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1(lean_object* v_00_u03b2_261_, lean_object* v_data_262_){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1___redArg(v_data_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__2(lean_object* v_00_u03b2_264_, lean_object* v_a_265_, lean_object* v_b_266_, lean_object* v_x_267_){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__2___redArg(v_a_265_, v_b_266_, v_x_267_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_269_, lean_object* v_i_270_, lean_object* v_source_271_, lean_object* v_target_272_){
_start:
{
lean_object* v___x_273_; 
v___x_273_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2___redArg(v_i_270_, v_source_271_, v_target_272_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_274_, lean_object* v_x_275_, lean_object* v_x_276_){
_start:
{
lean_object* v___x_277_; 
v___x_277_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2_spec__3___redArg(v_x_275_, v_x_276_);
return v___x_277_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check(lean_object* v_ctx_278_){
_start:
{
uint8_t v___x_279_; 
v___x_279_ = l_List_isEmpty___redArg(v_ctx_278_);
if (v___x_279_ == 0)
{
uint8_t v___x_280_; 
v___x_280_ = 1;
return v___x_280_;
}
else
{
uint8_t v___x_281_; 
v___x_281_ = 0;
return v___x_281_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check___boxed(lean_object* v_ctx_282_){
_start:
{
uint8_t v_res_283_; lean_object* v_r_284_; 
v_res_283_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check(v_ctx_282_);
lean_dec(v_ctx_282_);
v_r_284_ = lean_box(v_res_283_);
return v_r_284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_whenCheck(lean_object* v_e_285_, lean_object* v_m_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_){
_start:
{
uint8_t v___x_294_; 
v___x_294_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check(v_a_287_);
if (v___x_294_ == 0)
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
lean_dec_ref(v_m_286_);
v___x_295_ = lean_box(0);
v___x_296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_296_, 0, v_e_285_);
lean_ctor_set(v___x_296_, 1, v___x_295_);
v___x_297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
return v___x_297_;
}
else
{
lean_object* v___x_298_; 
lean_dec_ref(v_e_285_);
lean_inc(v_a_292_);
lean_inc_ref(v_a_291_);
lean_inc(v_a_290_);
lean_inc_ref(v_a_289_);
lean_inc(v_a_288_);
lean_inc(v_a_287_);
v___x_298_ = lean_apply_7(v_m_286_, v_a_287_, v_a_288_, v_a_289_, v_a_290_, v_a_291_, v_a_292_, lean_box(0));
return v___x_298_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_whenCheck___boxed(lean_object* v_e_299_, lean_object* v_m_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_whenCheck(v_e_299_, v_m_300_, v_a_301_, v_a_302_, v_a_303_, v_a_304_, v_a_305_, v_a_306_);
lean_dec(v_a_306_);
lean_dec_ref(v_a_305_);
lean_dec(v_a_304_);
lean_dec_ref(v_a_303_);
lean_dec(v_a_302_);
lean_dec(v_a_301_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_withLetFVars___redArg(lean_object* v_fvars_309_, lean_object* v_m_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_){
_start:
{
lean_object* v___x_317_; 
lean_inc(v_a_315_);
lean_inc_ref(v_a_314_);
lean_inc(v_a_313_);
lean_inc_ref(v_a_312_);
lean_inc(v_a_311_);
v___x_317_ = lean_apply_7(v_m_310_, v_fvars_309_, v_a_311_, v_a_312_, v_a_313_, v_a_314_, v_a_315_, lean_box(0));
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_withLetFVars___redArg___boxed(lean_object* v_fvars_318_, lean_object* v_m_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_withLetFVars___redArg(v_fvars_318_, v_m_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_, v_a_324_);
lean_dec(v_a_324_);
lean_dec_ref(v_a_323_);
lean_dec(v_a_322_);
lean_dec_ref(v_a_321_);
lean_dec(v_a_320_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_withLetFVars(lean_object* v_00_u03b1_327_, lean_object* v_fvars_328_, lean_object* v_m_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_){
_start:
{
lean_object* v___x_337_; 
lean_inc(v_a_335_);
lean_inc_ref(v_a_334_);
lean_inc(v_a_333_);
lean_inc_ref(v_a_332_);
lean_inc(v_a_331_);
v___x_337_ = lean_apply_7(v_m_329_, v_fvars_328_, v_a_331_, v_a_332_, v_a_333_, v_a_334_, v_a_335_, lean_box(0));
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_withLetFVars___boxed(lean_object* v_00_u03b1_338_, lean_object* v_fvars_339_, lean_object* v_m_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_withLetFVars(v_00_u03b1_338_, v_fvars_339_, v_m_340_, v_a_341_, v_a_342_, v_a_343_, v_a_344_, v_a_345_, v_a_346_);
lean_dec(v_a_346_);
lean_dec_ref(v_a_345_);
lean_dec(v_a_344_);
lean_dec_ref(v_a_343_);
lean_dec(v_a_342_);
lean_dec(v_a_341_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount___redArg(lean_object* v_a_349_, lean_object* v_a_350_){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v_count_354_; lean_object* v_results_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_367_; 
v___x_352_ = lean_st_ref_get(v_a_350_);
lean_dec(v___x_352_);
v___x_353_ = lean_st_ref_take(v_a_349_);
v_count_354_ = lean_ctor_get(v___x_353_, 0);
v_results_355_ = lean_ctor_get(v___x_353_, 1);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_353_);
if (v_isSharedCheck_367_ == 0)
{
v___x_357_ = v___x_353_;
v_isShared_358_ = v_isSharedCheck_367_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_results_355_);
lean_inc(v_count_354_);
lean_dec(v___x_353_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_367_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_362_; 
v___x_359_ = lean_unsigned_to_nat(1u);
v___x_360_ = lean_nat_add(v_count_354_, v___x_359_);
lean_dec(v_count_354_);
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 0, v___x_360_);
v___x_362_ = v___x_357_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v___x_360_);
lean_ctor_set(v_reuseFailAlloc_366_, 1, v_results_355_);
v___x_362_ = v_reuseFailAlloc_366_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_363_ = lean_st_ref_set(v_a_349_, v___x_362_);
v___x_364_ = lean_box(0);
v___x_365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_365_, 0, v___x_364_);
return v___x_365_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount___redArg___boxed(lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount___redArg(v_a_368_, v_a_369_);
lean_dec(v_a_369_);
lean_dec(v_a_368_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount(lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_, lean_object* v_a_377_){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount___redArg(v_a_373_, v_a_377_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount___boxed(lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_){
_start:
{
lean_object* v_res_387_; 
v_res_387_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount(v_a_380_, v_a_381_, v_a_382_, v_a_383_, v_a_384_, v_a_385_);
lean_dec(v_a_385_);
lean_dec_ref(v_a_384_);
lean_dec(v_a_383_);
lean_dec_ref(v_a_382_);
lean_dec(v_a_381_);
lean_dec(v_a_380_);
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0___redArg(lean_object* v_a_388_, lean_object* v_x_389_){
_start:
{
if (lean_obj_tag(v_x_389_) == 0)
{
lean_object* v___x_390_; 
v___x_390_ = lean_box(0);
return v___x_390_;
}
else
{
lean_object* v_key_391_; lean_object* v_value_392_; lean_object* v_tail_393_; uint8_t v___x_394_; 
v_key_391_ = lean_ctor_get(v_x_389_, 0);
v_value_392_ = lean_ctor_get(v_x_389_, 1);
v_tail_393_ = lean_ctor_get(v_x_389_, 2);
v___x_394_ = l_Lean_ExprStructEq_beq(v_key_391_, v_a_388_);
if (v___x_394_ == 0)
{
v_x_389_ = v_tail_393_;
goto _start;
}
else
{
lean_object* v___x_396_; 
lean_inc(v_value_392_);
v___x_396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_396_, 0, v_value_392_);
return v___x_396_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_a_397_, lean_object* v_x_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0___redArg(v_a_397_, v_x_398_);
lean_dec(v_x_398_);
lean_dec_ref(v_a_397_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0___redArg(lean_object* v_m_400_, lean_object* v_a_401_){
_start:
{
lean_object* v_buckets_402_; lean_object* v___x_403_; uint64_t v___x_404_; uint64_t v___x_405_; uint64_t v___x_406_; uint64_t v_fold_407_; uint64_t v___x_408_; uint64_t v___x_409_; uint64_t v___x_410_; size_t v___x_411_; size_t v___x_412_; size_t v___x_413_; size_t v___x_414_; size_t v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v_buckets_402_ = lean_ctor_get(v_m_400_, 1);
v___x_403_ = lean_array_get_size(v_buckets_402_);
v___x_404_ = l_Lean_ExprStructEq_hash(v_a_401_);
v___x_405_ = 32ULL;
v___x_406_ = lean_uint64_shift_right(v___x_404_, v___x_405_);
v_fold_407_ = lean_uint64_xor(v___x_404_, v___x_406_);
v___x_408_ = 16ULL;
v___x_409_ = lean_uint64_shift_right(v_fold_407_, v___x_408_);
v___x_410_ = lean_uint64_xor(v_fold_407_, v___x_409_);
v___x_411_ = lean_uint64_to_usize(v___x_410_);
v___x_412_ = lean_usize_of_nat(v___x_403_);
v___x_413_ = ((size_t)1ULL);
v___x_414_ = lean_usize_sub(v___x_412_, v___x_413_);
v___x_415_ = lean_usize_land(v___x_411_, v___x_414_);
v___x_416_ = lean_array_uget_borrowed(v_buckets_402_, v___x_415_);
v___x_417_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0___redArg(v_a_401_, v___x_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0___redArg___boxed(lean_object* v_m_418_, lean_object* v_a_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0___redArg(v_m_418_, v_a_419_);
lean_dec_ref(v_a_419_);
lean_dec_ref(v_m_418_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f___redArg(lean_object* v_e_421_, lean_object* v_a_422_, lean_object* v_a_423_){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v_results_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_425_ = lean_st_ref_get(v_a_423_);
lean_dec(v___x_425_);
v___x_426_ = lean_st_ref_get(v_a_422_);
v_results_427_ = lean_ctor_get(v___x_426_, 1);
lean_inc_ref(v_results_427_);
lean_dec(v___x_426_);
v___x_428_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0___redArg(v_results_427_, v_e_421_);
lean_dec_ref(v_results_427_);
v___x_429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f___redArg___boxed(lean_object* v_e_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f___redArg(v_e_430_, v_a_431_, v_a_432_);
lean_dec(v_a_432_);
lean_dec(v_a_431_);
lean_dec_ref(v_e_430_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f(lean_object* v_e_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_){
_start:
{
lean_object* v___x_443_; 
v___x_443_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f___redArg(v_e_435_, v_a_437_, v_a_441_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f___boxed(lean_object* v_e_444_, lean_object* v_a_445_, lean_object* v_a_446_, lean_object* v_a_447_, lean_object* v_a_448_, lean_object* v_a_449_, lean_object* v_a_450_, lean_object* v_a_451_){
_start:
{
lean_object* v_res_452_; 
v_res_452_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f(v_e_444_, v_a_445_, v_a_446_, v_a_447_, v_a_448_, v_a_449_, v_a_450_);
lean_dec(v_a_450_);
lean_dec_ref(v_a_449_);
lean_dec(v_a_448_);
lean_dec_ref(v_a_447_);
lean_dec(v_a_446_);
lean_dec(v_a_445_);
lean_dec_ref(v_e_444_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0(lean_object* v_00_u03b2_453_, lean_object* v_m_454_, lean_object* v_a_455_){
_start:
{
lean_object* v___x_456_; 
v___x_456_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0___redArg(v_m_454_, v_a_455_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0___boxed(lean_object* v_00_u03b2_457_, lean_object* v_m_458_, lean_object* v_a_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0(v_00_u03b2_457_, v_m_458_, v_a_459_);
lean_dec_ref(v_a_459_);
lean_dec_ref(v_m_458_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0(lean_object* v_00_u03b2_461_, lean_object* v_a_462_, lean_object* v_x_463_){
_start:
{
lean_object* v___x_464_; 
v___x_464_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0___redArg(v_a_462_, v_x_463_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_465_, lean_object* v_a_466_, lean_object* v_x_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0(v_00_u03b2_465_, v_a_466_, v_x_467_);
lean_dec(v_x_467_);
lean_dec_ref(v_a_466_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkCache(lean_object* v_e_469_, lean_object* v_m_470_, lean_object* v_a_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_){
_start:
{
lean_object* v_r_479_; lean_object* v___y_480_; lean_object* v___y_481_; lean_object* v___x_496_; lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_511_; 
v___x_496_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f___redArg(v_e_469_, v_a_472_, v_a_476_);
v_a_497_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_511_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_511_ == 0)
{
v___x_499_ = v___x_496_;
v_isShared_500_ = v_isSharedCheck_511_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v___x_496_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_511_;
goto v_resetjp_498_;
}
v___jp_478_:
{
lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v_count_484_; lean_object* v_results_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_495_; 
v___x_482_ = lean_st_ref_get(v___y_481_);
lean_dec(v___x_482_);
v___x_483_ = lean_st_ref_take(v___y_480_);
v_count_484_ = lean_ctor_get(v___x_483_, 0);
v_results_485_ = lean_ctor_get(v___x_483_, 1);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_495_ == 0)
{
v___x_487_ = v___x_483_;
v_isShared_488_ = v_isSharedCheck_495_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_results_485_);
lean_inc(v_count_484_);
lean_dec(v___x_483_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_495_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_489_; lean_object* v___x_491_; 
lean_inc_ref(v_r_479_);
v___x_489_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0___redArg(v_results_485_, v_e_469_, v_r_479_);
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 1, v___x_489_);
v___x_491_ = v___x_487_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_count_484_);
lean_ctor_set(v_reuseFailAlloc_494_, 1, v___x_489_);
v___x_491_ = v_reuseFailAlloc_494_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = lean_st_ref_set(v___y_480_, v___x_491_);
v___x_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_493_, 0, v_r_479_);
return v___x_493_;
}
}
}
v_resetjp_498_:
{
if (lean_obj_tag(v_a_497_) == 1)
{
lean_object* v_val_501_; lean_object* v___x_503_; 
lean_dec_ref(v_m_470_);
lean_dec_ref(v_e_469_);
v_val_501_ = lean_ctor_get(v_a_497_, 0);
lean_inc(v_val_501_);
lean_dec_ref(v_a_497_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v_val_501_);
v___x_503_ = v___x_499_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v_val_501_);
v___x_503_ = v_reuseFailAlloc_504_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
return v___x_503_;
}
}
else
{
uint32_t v___x_505_; uint8_t v___x_506_; 
lean_del_object(v___x_499_);
lean_dec(v_a_497_);
v___x_505_ = 2;
v___x_506_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_canSkip(v_e_469_, v___x_505_);
if (v___x_506_ == 0)
{
lean_object* v___x_507_; 
lean_inc(v_a_476_);
lean_inc_ref(v_a_475_);
lean_inc(v_a_474_);
lean_inc_ref(v_a_473_);
lean_inc(v_a_472_);
lean_inc(v_a_471_);
v___x_507_ = lean_apply_7(v_m_470_, v_a_471_, v_a_472_, v_a_473_, v_a_474_, v_a_475_, v_a_476_, lean_box(0));
if (lean_obj_tag(v___x_507_) == 0)
{
lean_object* v_a_508_; 
v_a_508_ = lean_ctor_get(v___x_507_, 0);
lean_inc(v_a_508_);
lean_dec_ref(v___x_507_);
v_r_479_ = v_a_508_;
v___y_480_ = v_a_472_;
v___y_481_ = v_a_476_;
goto v___jp_478_;
}
else
{
lean_dec_ref(v_e_469_);
return v___x_507_;
}
}
else
{
lean_object* v___x_509_; lean_object* v___x_510_; 
lean_dec_ref(v_m_470_);
v___x_509_ = lean_box(0);
lean_inc_ref(v_e_469_);
v___x_510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_510_, 0, v_e_469_);
lean_ctor_set(v___x_510_, 1, v___x_509_);
v_r_479_ = v___x_510_;
v___y_480_ = v_a_472_;
v___y_481_ = v_a_476_;
goto v___jp_478_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkCache___boxed(lean_object* v_e_512_, lean_object* v_m_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkCache(v_e_512_, v_m_513_, v_a_514_, v_a_515_, v_a_516_, v_a_517_, v_a_518_, v_a_519_);
lean_dec(v_a_519_);
lean_dec_ref(v_a_518_);
lean_dec(v_a_517_);
lean_dec_ref(v_a_516_);
lean_dec(v_a_515_);
lean_dec(v_a_514_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f___redArg(lean_object* v_e_522_, lean_object* v_a_523_, lean_object* v_a_524_){
_start:
{
uint8_t v___x_526_; 
v___x_526_ = l_Lean_Expr_hasLooseBVars(v_e_522_);
if (v___x_526_ == 0)
{
lean_object* v___x_527_; 
v___x_527_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f___redArg(v_e_522_, v_a_523_, v_a_524_);
return v___x_527_;
}
else
{
lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_528_ = lean_box(0);
v___x_529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_529_, 0, v___x_528_);
return v___x_529_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f___redArg___boxed(lean_object* v_e_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f___redArg(v_e_530_, v_a_531_, v_a_532_);
lean_dec(v_a_532_);
lean_dec(v_a_531_);
lean_dec_ref(v_e_530_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f(lean_object* v_e_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_){
_start:
{
lean_object* v___x_543_; 
v___x_543_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f___redArg(v_e_535_, v_a_537_, v_a_541_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f___boxed(lean_object* v_e_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f(v_e_544_, v_a_545_, v_a_546_, v_a_547_, v_a_548_, v_a_549_, v_a_550_);
lean_dec(v_a_550_);
lean_dec_ref(v_a_549_);
lean_dec(v_a_548_);
lean_dec_ref(v_a_547_);
lean_dec(v_a_546_);
lean_dec(v_a_545_);
lean_dec_ref(v_e_544_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar___redArg(lean_object* v_e_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_){
_start:
{
lean_object* v___x_558_; lean_object* v___x_559_; 
v___x_558_ = l_Lean_Expr_fvarId_x21(v_e_553_);
lean_inc(v___x_558_);
v___x_559_ = l_Lean_FVarId_findDecl_x3f___redArg(v___x_558_, v_a_554_);
if (lean_obj_tag(v___x_559_) == 0)
{
lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_578_; 
v_a_560_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_578_ == 0)
{
v___x_562_ = v___x_559_;
v_isShared_563_ = v_isSharedCheck_578_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___x_559_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_578_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
if (lean_obj_tag(v_a_560_) == 1)
{
lean_object* v_val_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_576_; 
lean_dec(v___x_558_);
v_val_564_ = lean_ctor_get(v_a_560_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v_a_560_);
if (v_isSharedCheck_576_ == 0)
{
v___x_566_ = v_a_560_;
v_isShared_567_ = v_isSharedCheck_576_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_val_564_);
lean_dec(v_a_560_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_576_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_568_; lean_object* v___x_570_; 
v___x_568_ = l_Lean_LocalDecl_type(v_val_564_);
lean_dec(v_val_564_);
if (v_isShared_567_ == 0)
{
lean_ctor_set(v___x_566_, 0, v___x_568_);
v___x_570_ = v___x_566_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v___x_568_);
v___x_570_ = v_reuseFailAlloc_575_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
lean_object* v___x_571_; lean_object* v___x_573_; 
v___x_571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_571_, 0, v_e_553_);
lean_ctor_set(v___x_571_, 1, v___x_570_);
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 0, v___x_571_);
v___x_573_ = v___x_562_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v___x_571_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
}
}
else
{
lean_object* v___x_577_; 
lean_del_object(v___x_562_);
lean_dec(v_a_560_);
lean_dec_ref(v_e_553_);
v___x_577_ = l_Lean_FVarId_throwUnknown___redArg(v___x_558_, v_a_555_, v_a_556_);
return v___x_577_;
}
}
}
else
{
lean_object* v_a_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_586_; 
lean_dec(v___x_558_);
lean_dec_ref(v_e_553_);
v_a_579_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_586_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_586_ == 0)
{
v___x_581_ = v___x_559_;
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_a_579_);
lean_dec(v___x_559_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_584_; 
if (v_isShared_582_ == 0)
{
v___x_584_ = v___x_581_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v_a_579_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
return v___x_584_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar___redArg___boxed(lean_object* v_e_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar___redArg(v_e_587_, v_a_588_, v_a_589_, v_a_590_);
lean_dec(v_a_590_);
lean_dec_ref(v_a_589_);
lean_dec_ref(v_a_588_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar(lean_object* v_e_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar___redArg(v_e_593_, v_a_594_, v_a_596_, v_a_597_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar___boxed(lean_object* v_e_600_, lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar(v_e_600_, v_a_601_, v_a_602_, v_a_603_, v_a_604_);
lean_dec(v_a_604_);
lean_dec_ref(v_a_603_);
lean_dec(v_a_602_);
lean_dec_ref(v_a_601_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1___redArg(lean_object* v_e_607_, lean_object* v___y_608_, lean_object* v___y_609_){
_start:
{
uint8_t v___x_611_; 
v___x_611_ = l_Lean_Expr_hasMVar(v_e_607_);
if (v___x_611_ == 0)
{
lean_object* v___x_612_; 
v___x_612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_612_, 0, v_e_607_);
return v___x_612_;
}
else
{
lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v_mctx_615_; lean_object* v___x_616_; lean_object* v_fst_617_; lean_object* v_snd_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v_cache_621_; lean_object* v_zetaDeltaFVarIds_622_; lean_object* v_postponed_623_; lean_object* v_diag_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_633_; 
v___x_613_ = lean_st_ref_get(v___y_609_);
lean_dec(v___x_613_);
v___x_614_ = lean_st_ref_get(v___y_608_);
v_mctx_615_ = lean_ctor_get(v___x_614_, 0);
lean_inc_ref(v_mctx_615_);
lean_dec(v___x_614_);
v___x_616_ = l_Lean_instantiateMVarsCore(v_mctx_615_, v_e_607_);
v_fst_617_ = lean_ctor_get(v___x_616_, 0);
lean_inc(v_fst_617_);
v_snd_618_ = lean_ctor_get(v___x_616_, 1);
lean_inc(v_snd_618_);
lean_dec_ref(v___x_616_);
v___x_619_ = lean_st_ref_get(v___y_609_);
lean_dec(v___x_619_);
v___x_620_ = lean_st_ref_take(v___y_608_);
v_cache_621_ = lean_ctor_get(v___x_620_, 1);
v_zetaDeltaFVarIds_622_ = lean_ctor_get(v___x_620_, 2);
v_postponed_623_ = lean_ctor_get(v___x_620_, 3);
v_diag_624_ = lean_ctor_get(v___x_620_, 4);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_633_ == 0)
{
lean_object* v_unused_634_; 
v_unused_634_ = lean_ctor_get(v___x_620_, 0);
lean_dec(v_unused_634_);
v___x_626_ = v___x_620_;
v_isShared_627_ = v_isSharedCheck_633_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_diag_624_);
lean_inc(v_postponed_623_);
lean_inc(v_zetaDeltaFVarIds_622_);
lean_inc(v_cache_621_);
lean_dec(v___x_620_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_633_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_629_; 
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 0, v_snd_618_);
v___x_629_ = v___x_626_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_snd_618_);
lean_ctor_set(v_reuseFailAlloc_632_, 1, v_cache_621_);
lean_ctor_set(v_reuseFailAlloc_632_, 2, v_zetaDeltaFVarIds_622_);
lean_ctor_set(v_reuseFailAlloc_632_, 3, v_postponed_623_);
lean_ctor_set(v_reuseFailAlloc_632_, 4, v_diag_624_);
v___x_629_ = v_reuseFailAlloc_632_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
lean_object* v___x_630_; lean_object* v___x_631_; 
v___x_630_ = lean_st_ref_set(v___y_608_, v___x_629_);
v___x_631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_631_, 0, v_fst_617_);
return v___x_631_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1___redArg___boxed(lean_object* v_e_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1___redArg(v_e_635_, v___y_636_, v___y_637_);
lean_dec(v___y_637_);
lean_dec(v___y_636_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1(lean_object* v_e_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_){
_start:
{
lean_object* v___x_648_; 
v___x_648_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1___redArg(v_e_640_, v___y_644_, v___y_646_);
return v___x_648_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1___boxed(lean_object* v_e_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1(v_e_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
lean_dec(v___y_655_);
lean_dec_ref(v___y_654_);
lean_dec(v___y_653_);
lean_dec_ref(v___y_652_);
lean_dec(v___y_651_);
lean_dec(v___y_650_);
return v_res_657_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0___redArg(lean_object* v_k_658_, lean_object* v_t_659_){
_start:
{
if (lean_obj_tag(v_t_659_) == 0)
{
lean_object* v_k_660_; lean_object* v_l_661_; lean_object* v_r_662_; uint8_t v___x_663_; 
v_k_660_ = lean_ctor_get(v_t_659_, 1);
v_l_661_ = lean_ctor_get(v_t_659_, 3);
v_r_662_ = lean_ctor_get(v_t_659_, 4);
v___x_663_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_658_, v_k_660_);
switch(v___x_663_)
{
case 0:
{
v_t_659_ = v_l_661_;
goto _start;
}
case 1:
{
uint8_t v___x_665_; 
v___x_665_ = 1;
return v___x_665_;
}
default: 
{
v_t_659_ = v_r_662_;
goto _start;
}
}
}
else
{
uint8_t v___x_667_; 
v___x_667_ = 0;
return v___x_667_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0___redArg___boxed(lean_object* v_k_668_, lean_object* v_t_669_){
_start:
{
uint8_t v_res_670_; lean_object* v_r_671_; 
v_res_670_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0___redArg(v_k_668_, v_t_669_);
lean_dec(v_t_669_);
lean_dec(v_k_668_);
v_r_671_ = lean_box(v_res_670_);
return v_r_671_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg(lean_object* v_as_672_, size_t v_sz_673_, size_t v_i_674_, lean_object* v_b_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_){
_start:
{
lean_object* v_a_682_; uint8_t v___x_686_; 
v___x_686_ = lean_usize_dec_lt(v_i_674_, v_sz_673_);
if (v___x_686_ == 0)
{
lean_object* v___x_687_; 
v___x_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_687_, 0, v_b_675_);
return v___x_687_;
}
else
{
lean_object* v_fst_688_; lean_object* v_snd_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_737_; 
v_fst_688_ = lean_ctor_get(v_b_675_, 0);
v_snd_689_ = lean_ctor_get(v_b_675_, 1);
v_isSharedCheck_737_ = !lean_is_exclusive(v_b_675_);
if (v_isSharedCheck_737_ == 0)
{
v___x_691_ = v_b_675_;
v_isShared_692_ = v_isSharedCheck_737_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_snd_689_);
lean_inc(v_fst_688_);
lean_dec(v_b_675_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_737_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
lean_object* v_a_693_; uint8_t v___x_694_; 
v_a_693_ = lean_array_uget_borrowed(v_as_672_, v_i_674_);
v___x_694_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0___redArg(v_a_693_, v_fst_688_);
if (v___x_694_ == 0)
{
lean_object* v___x_695_; lean_object* v___y_697_; lean_object* v___y_698_; lean_object* v___y_699_; lean_object* v___x_714_; 
lean_inc_n(v_a_693_, 2);
v___x_695_ = l_Lean_FVarIdSet_insert(v_fst_688_, v_a_693_);
v___x_714_ = l_Lean_FVarId_isLetVar___redArg(v_a_693_, v___x_694_, v___y_676_, v___y_678_, v___y_679_);
if (lean_obj_tag(v___x_714_) == 0)
{
lean_object* v_a_715_; uint8_t v___x_716_; 
v_a_715_ = lean_ctor_get(v___x_714_, 0);
lean_inc(v_a_715_);
lean_dec_ref(v___x_714_);
v___x_716_ = lean_unbox(v_a_715_);
lean_dec(v_a_715_);
if (v___x_716_ == 0)
{
v___y_697_ = v___y_676_;
v___y_698_ = v___y_678_;
v___y_699_ = v___y_679_;
goto v___jp_696_;
}
else
{
lean_object* v___x_717_; 
lean_inc(v_a_693_);
v___x_717_ = l_Lean_Meta_addZetaDeltaFVarId___redArg(v_a_693_, v___y_677_, v___y_679_);
if (lean_obj_tag(v___x_717_) == 0)
{
lean_dec_ref(v___x_717_);
v___y_697_ = v___y_676_;
v___y_698_ = v___y_678_;
v___y_699_ = v___y_679_;
goto v___jp_696_;
}
else
{
lean_object* v_a_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_725_; 
lean_dec(v___x_695_);
lean_del_object(v___x_691_);
lean_dec(v_snd_689_);
v_a_718_ = lean_ctor_get(v___x_717_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v___x_717_);
if (v_isSharedCheck_725_ == 0)
{
v___x_720_ = v___x_717_;
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_a_718_);
lean_dec(v___x_717_);
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
}
else
{
lean_object* v_a_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_733_; 
lean_dec(v___x_695_);
lean_del_object(v___x_691_);
lean_dec(v_snd_689_);
v_a_726_ = lean_ctor_get(v___x_714_, 0);
v_isSharedCheck_733_ = !lean_is_exclusive(v___x_714_);
if (v_isSharedCheck_733_ == 0)
{
v___x_728_ = v___x_714_;
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_a_726_);
lean_dec(v___x_714_);
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
v___jp_696_:
{
lean_object* v___x_700_; 
lean_inc(v_a_693_);
v___x_700_ = l_Lean_FVarId_getType___redArg(v_a_693_, v___y_697_, v___y_698_, v___y_699_);
if (lean_obj_tag(v___x_700_) == 0)
{
lean_object* v_a_701_; lean_object* v___x_702_; lean_object* v___x_704_; 
v_a_701_ = lean_ctor_get(v___x_700_, 0);
lean_inc(v_a_701_);
lean_dec_ref(v___x_700_);
v___x_702_ = lean_array_push(v_snd_689_, v_a_701_);
if (v_isShared_692_ == 0)
{
lean_ctor_set(v___x_691_, 1, v___x_702_);
lean_ctor_set(v___x_691_, 0, v___x_695_);
v___x_704_ = v___x_691_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v___x_695_);
lean_ctor_set(v_reuseFailAlloc_705_, 1, v___x_702_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
v_a_682_ = v___x_704_;
goto v___jp_681_;
}
}
else
{
lean_object* v_a_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_713_; 
lean_dec(v___x_695_);
lean_del_object(v___x_691_);
lean_dec(v_snd_689_);
v_a_706_ = lean_ctor_get(v___x_700_, 0);
v_isSharedCheck_713_ = !lean_is_exclusive(v___x_700_);
if (v_isSharedCheck_713_ == 0)
{
v___x_708_ = v___x_700_;
v_isShared_709_ = v_isSharedCheck_713_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_a_706_);
lean_dec(v___x_700_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_713_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v___x_711_; 
if (v_isShared_709_ == 0)
{
v___x_711_ = v___x_708_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v_a_706_);
v___x_711_ = v_reuseFailAlloc_712_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
return v___x_711_;
}
}
}
}
}
else
{
lean_object* v___x_735_; 
if (v_isShared_692_ == 0)
{
v___x_735_ = v___x_691_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_fst_688_);
lean_ctor_set(v_reuseFailAlloc_736_, 1, v_snd_689_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
v_a_682_ = v___x_735_;
goto v___jp_681_;
}
}
}
}
v___jp_681_:
{
size_t v___x_683_; size_t v___x_684_; 
v___x_683_ = ((size_t)1ULL);
v___x_684_ = lean_usize_add(v_i_674_, v___x_683_);
v_i_674_ = v___x_684_;
v_b_675_ = v_a_682_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___boxed(lean_object* v_as_738_, lean_object* v_sz_739_, lean_object* v_i_740_, lean_object* v_b_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_){
_start:
{
size_t v_sz_boxed_747_; size_t v_i_boxed_748_; lean_object* v_res_749_; 
v_sz_boxed_747_ = lean_unbox_usize(v_sz_739_);
lean_dec(v_sz_739_);
v_i_boxed_748_ = lean_unbox_usize(v_i_740_);
lean_dec(v_i_740_);
v_res_749_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg(v_as_738_, v_sz_boxed_747_, v_i_boxed_748_, v_b_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_);
lean_dec(v___y_745_);
lean_dec_ref(v___y_744_);
lean_dec(v___y_743_);
lean_dec_ref(v___y_742_);
lean_dec_ref(v_as_738_);
return v_res_749_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__0(void){
_start:
{
lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_750_ = lean_box(0);
v___x_751_ = lean_unsigned_to_nat(16u);
v___x_752_ = lean_mk_array(v___x_751_, v___x_750_);
return v___x_752_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__1(void){
_start:
{
lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_753_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__0, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__0_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__0);
v___x_754_ = lean_unsigned_to_nat(0u);
v___x_755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_755_, 0, v___x_754_);
lean_ctor_set(v___x_755_, 1, v___x_753_);
return v___x_755_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__2(void){
_start:
{
lean_object* v___x_756_; lean_object* v___x_757_; 
v___x_756_ = lean_unsigned_to_nat(0u);
v___x_757_ = lean_mk_empty_array_with_capacity(v___x_756_);
return v___x_757_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__3(void){
_start:
{
lean_object* v___x_758_; lean_object* v_visited_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
v___x_758_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__2, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__2_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__2);
v_visited_759_ = lean_box(1);
v___x_760_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__1, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__1_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__1);
v___x_761_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_761_, 0, v___x_760_);
lean_ctor_set(v___x_761_, 1, v_visited_759_);
lean_ctor_set(v___x_761_, 2, v___x_758_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3(lean_object* v_b_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_){
_start:
{
lean_object* v_fst_770_; lean_object* v_snd_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_817_; 
v_fst_770_ = lean_ctor_get(v_b_762_, 0);
v_snd_771_ = lean_ctor_get(v_b_762_, 1);
v_isSharedCheck_817_ = !lean_is_exclusive(v_b_762_);
if (v_isSharedCheck_817_ == 0)
{
v___x_773_ = v_b_762_;
v_isShared_774_ = v_isSharedCheck_817_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_snd_771_);
lean_inc(v_fst_770_);
lean_dec(v_b_762_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_817_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_775_; lean_object* v___x_776_; uint8_t v___x_777_; 
v___x_775_ = lean_array_get_size(v_snd_771_);
v___x_776_ = lean_unsigned_to_nat(0u);
v___x_777_ = lean_nat_dec_eq(v___x_775_, v___x_776_);
if (v___x_777_ == 0)
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_778_ = l_Lean_instInhabitedExpr;
v___x_779_ = lean_unsigned_to_nat(1u);
v___x_780_ = lean_nat_sub(v___x_775_, v___x_779_);
v___x_781_ = lean_array_get_borrowed(v___x_778_, v_snd_771_, v___x_780_);
lean_dec(v___x_780_);
lean_inc(v___x_781_);
v___x_782_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1___redArg(v___x_781_, v___y_766_, v___y_768_);
if (lean_obj_tag(v___x_782_) == 0)
{
lean_object* v_a_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v_fvarIds_786_; lean_object* v___x_787_; lean_object* v___x_789_; 
v_a_783_ = lean_ctor_get(v___x_782_, 0);
lean_inc(v_a_783_);
lean_dec_ref(v___x_782_);
v___x_784_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__3, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__3_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__3);
v___x_785_ = l_Lean_collectFVars(v___x_784_, v_a_783_);
v_fvarIds_786_ = lean_ctor_get(v___x_785_, 2);
lean_inc_ref(v_fvarIds_786_);
lean_dec_ref(v___x_785_);
v___x_787_ = lean_array_pop(v_snd_771_);
if (v_isShared_774_ == 0)
{
lean_ctor_set(v___x_773_, 1, v___x_787_);
v___x_789_ = v___x_773_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v_fst_770_);
lean_ctor_set(v_reuseFailAlloc_804_, 1, v___x_787_);
v___x_789_ = v_reuseFailAlloc_804_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
size_t v_sz_790_; size_t v___x_791_; lean_object* v___x_792_; 
v_sz_790_ = lean_array_size(v_fvarIds_786_);
v___x_791_ = ((size_t)0ULL);
v___x_792_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg(v_fvarIds_786_, v_sz_790_, v___x_791_, v___x_789_, v___y_765_, v___y_766_, v___y_767_, v___y_768_);
lean_dec_ref(v_fvarIds_786_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v_a_793_; lean_object* v_fst_794_; lean_object* v_snd_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_803_; 
v_a_793_ = lean_ctor_get(v___x_792_, 0);
lean_inc(v_a_793_);
lean_dec_ref(v___x_792_);
v_fst_794_ = lean_ctor_get(v_a_793_, 0);
v_snd_795_ = lean_ctor_get(v_a_793_, 1);
v_isSharedCheck_803_ = !lean_is_exclusive(v_a_793_);
if (v_isSharedCheck_803_ == 0)
{
v___x_797_ = v_a_793_;
v_isShared_798_ = v_isSharedCheck_803_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_snd_795_);
lean_inc(v_fst_794_);
lean_dec(v_a_793_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_803_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_800_; 
if (v_isShared_798_ == 0)
{
v___x_800_ = v___x_797_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v_fst_794_);
lean_ctor_set(v_reuseFailAlloc_802_, 1, v_snd_795_);
v___x_800_ = v_reuseFailAlloc_802_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
v_b_762_ = v___x_800_;
goto _start;
}
}
}
else
{
return v___x_792_;
}
}
}
else
{
lean_object* v_a_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_812_; 
lean_del_object(v___x_773_);
lean_dec(v_snd_771_);
lean_dec(v_fst_770_);
v_a_805_ = lean_ctor_get(v___x_782_, 0);
v_isSharedCheck_812_ = !lean_is_exclusive(v___x_782_);
if (v_isSharedCheck_812_ == 0)
{
v___x_807_ = v___x_782_;
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_a_805_);
lean_dec(v___x_782_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
lean_object* v___x_810_; 
if (v_isShared_808_ == 0)
{
v___x_810_ = v___x_807_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v_a_805_);
v___x_810_ = v_reuseFailAlloc_811_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
return v___x_810_;
}
}
}
}
else
{
lean_object* v___x_814_; 
if (v_isShared_774_ == 0)
{
v___x_814_ = v___x_773_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_fst_770_);
lean_ctor_set(v_reuseFailAlloc_816_, 1, v_snd_771_);
v___x_814_ = v_reuseFailAlloc_816_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
lean_object* v___x_815_; 
v___x_815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_815_, 0, v___x_814_);
return v___x_815_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___boxed(lean_object* v_b_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_){
_start:
{
lean_object* v_res_826_; 
v_res_826_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3(v_b_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
lean_dec(v___y_824_);
lean_dec_ref(v___y_823_);
lean_dec(v___y_822_);
lean_dec_ref(v___y_821_);
lean_dec(v___y_820_);
lean_dec(v___y_819_);
return v_res_826_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr(lean_object* v_e_827_, lean_object* v_a_828_, lean_object* v_a_829_, lean_object* v_a_830_, lean_object* v_a_831_, lean_object* v_a_832_, lean_object* v_a_833_){
_start:
{
lean_object* v_visited_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v_worklist_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v_visited_835_ = lean_box(1);
v___x_836_ = lean_unsigned_to_nat(1u);
v___x_837_ = lean_mk_empty_array_with_capacity(v___x_836_);
v_worklist_838_ = lean_array_push(v___x_837_, v_e_827_);
v___x_839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_839_, 0, v_visited_835_);
lean_ctor_set(v___x_839_, 1, v_worklist_838_);
v___x_840_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3(v___x_839_, v_a_828_, v_a_829_, v_a_830_, v_a_831_, v_a_832_, v_a_833_);
if (lean_obj_tag(v___x_840_) == 0)
{
lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_848_; 
v_isSharedCheck_848_ = !lean_is_exclusive(v___x_840_);
if (v_isSharedCheck_848_ == 0)
{
lean_object* v_unused_849_; 
v_unused_849_ = lean_ctor_get(v___x_840_, 0);
lean_dec(v_unused_849_);
v___x_842_ = v___x_840_;
v_isShared_843_ = v_isSharedCheck_848_;
goto v_resetjp_841_;
}
else
{
lean_dec(v___x_840_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_848_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_844_; lean_object* v___x_846_; 
v___x_844_ = lean_box(0);
if (v_isShared_843_ == 0)
{
lean_ctor_set(v___x_842_, 0, v___x_844_);
v___x_846_ = v___x_842_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v___x_844_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
else
{
lean_object* v_a_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_857_; 
v_a_850_ = lean_ctor_get(v___x_840_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_840_);
if (v_isSharedCheck_857_ == 0)
{
v___x_852_ = v___x_840_;
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_a_850_);
lean_dec(v___x_840_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr___boxed(lean_object* v_e_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_){
_start:
{
lean_object* v_res_866_; 
v_res_866_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr(v_e_858_, v_a_859_, v_a_860_, v_a_861_, v_a_862_, v_a_863_, v_a_864_);
lean_dec(v_a_864_);
lean_dec_ref(v_a_863_);
lean_dec(v_a_862_);
lean_dec_ref(v_a_861_);
lean_dec(v_a_860_);
lean_dec(v_a_859_);
return v_res_866_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0(lean_object* v_00_u03b2_867_, lean_object* v_k_868_, lean_object* v_t_869_){
_start:
{
uint8_t v___x_870_; 
v___x_870_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0___redArg(v_k_868_, v_t_869_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0___boxed(lean_object* v_00_u03b2_871_, lean_object* v_k_872_, lean_object* v_t_873_){
_start:
{
uint8_t v_res_874_; lean_object* v_r_875_; 
v_res_874_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0(v_00_u03b2_871_, v_k_872_, v_t_873_);
lean_dec(v_t_873_);
lean_dec(v_k_872_);
v_r_875_ = lean_box(v_res_874_);
return v_r_875_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2(lean_object* v_as_876_, size_t v_sz_877_, size_t v_i_878_, lean_object* v_b_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_){
_start:
{
lean_object* v___x_887_; 
v___x_887_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg(v_as_876_, v_sz_877_, v_i_878_, v_b_879_, v___y_882_, v___y_883_, v___y_884_, v___y_885_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___boxed(lean_object* v_as_888_, lean_object* v_sz_889_, lean_object* v_i_890_, lean_object* v_b_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_){
_start:
{
size_t v_sz_boxed_899_; size_t v_i_boxed_900_; lean_object* v_res_901_; 
v_sz_boxed_899_ = lean_unbox_usize(v_sz_889_);
lean_dec(v_sz_889_);
v_i_boxed_900_ = lean_unbox_usize(v_i_890_);
lean_dec(v_i_890_);
v_res_901_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2(v_as_888_, v_sz_boxed_899_, v_i_boxed_900_, v_b_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_, v___y_896_, v___y_897_);
lean_dec(v___y_897_);
lean_dec_ref(v___y_896_);
lean_dec(v___y_895_);
lean_dec_ref(v___y_894_);
lean_dec(v___y_893_);
lean_dec(v___y_892_);
lean_dec_ref(v_as_888_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0___redArg(lean_object* v_mvarId_902_, lean_object* v___y_903_, lean_object* v___y_904_){
_start:
{
lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v_mctx_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_906_ = lean_st_ref_get(v___y_904_);
lean_dec(v___x_906_);
v___x_907_ = lean_st_ref_get(v___y_903_);
v_mctx_908_ = lean_ctor_get(v___x_907_, 0);
lean_inc_ref(v_mctx_908_);
lean_dec(v___x_907_);
v___x_909_ = l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(v_mctx_908_, v_mvarId_902_);
lean_dec_ref(v_mctx_908_);
v___x_910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_910_, 0, v___x_909_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0___redArg___boxed(lean_object* v_mvarId_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_){
_start:
{
lean_object* v_res_915_; 
v_res_915_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0___redArg(v_mvarId_911_, v___y_912_, v___y_913_);
lean_dec(v___y_913_);
lean_dec(v___y_912_);
lean_dec(v_mvarId_911_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0(lean_object* v_mvarId_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_){
_start:
{
lean_object* v___x_924_; 
v___x_924_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0___redArg(v_mvarId_916_, v___y_920_, v___y_922_);
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0___boxed(lean_object* v_mvarId_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_){
_start:
{
lean_object* v_res_933_; 
v_res_933_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0(v_mvarId_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_);
lean_dec(v___y_931_);
lean_dec_ref(v___y_930_);
lean_dec(v___y_929_);
lean_dec_ref(v___y_928_);
lean_dec(v___y_927_);
lean_dec(v___y_926_);
lean_dec(v_mvarId_925_);
return v_res_933_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__2(lean_object* v_a_934_, lean_object* v_as_935_, size_t v_sz_936_, size_t v_i_937_, lean_object* v_b_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_){
_start:
{
lean_object* v_a_947_; uint8_t v___x_951_; 
v___x_951_ = lean_usize_dec_lt(v_i_937_, v_sz_936_);
if (v___x_951_ == 0)
{
lean_object* v___x_952_; 
lean_dec_ref(v_a_934_);
v___x_952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_952_, 0, v_b_938_);
return v___x_952_;
}
else
{
lean_object* v_array_953_; lean_object* v_start_954_; lean_object* v_stop_955_; uint8_t v___x_956_; 
v_array_953_ = lean_ctor_get(v_b_938_, 0);
v_start_954_ = lean_ctor_get(v_b_938_, 1);
v_stop_955_ = lean_ctor_get(v_b_938_, 2);
v___x_956_ = lean_nat_dec_lt(v_start_954_, v_stop_955_);
if (v___x_956_ == 0)
{
lean_object* v___x_957_; 
lean_dec_ref(v_a_934_);
v___x_957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_957_, 0, v_b_938_);
return v___x_957_;
}
else
{
lean_object* v___x_959_; uint8_t v_isShared_960_; uint8_t v_isSharedCheck_981_; 
lean_inc(v_stop_955_);
lean_inc(v_start_954_);
lean_inc_ref(v_array_953_);
v_isSharedCheck_981_ = !lean_is_exclusive(v_b_938_);
if (v_isSharedCheck_981_ == 0)
{
lean_object* v_unused_982_; lean_object* v_unused_983_; lean_object* v_unused_984_; 
v_unused_982_ = lean_ctor_get(v_b_938_, 2);
lean_dec(v_unused_982_);
v_unused_983_ = lean_ctor_get(v_b_938_, 1);
lean_dec(v_unused_983_);
v_unused_984_ = lean_ctor_get(v_b_938_, 0);
lean_dec(v_unused_984_);
v___x_959_ = v_b_938_;
v_isShared_960_ = v_isSharedCheck_981_;
goto v_resetjp_958_;
}
else
{
lean_dec(v_b_938_);
v___x_959_ = lean_box(0);
v_isShared_960_ = v_isSharedCheck_981_;
goto v_resetjp_958_;
}
v_resetjp_958_:
{
lean_object* v_lctx_961_; lean_object* v___x_962_; lean_object* v_a_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_967_; 
v_lctx_961_ = lean_ctor_get(v_a_934_, 1);
v___x_962_ = lean_array_fget(v_array_953_, v_start_954_);
v_a_963_ = lean_array_uget_borrowed(v_as_935_, v_i_937_);
v___x_964_ = lean_unsigned_to_nat(1u);
v___x_965_ = lean_nat_add(v_start_954_, v___x_964_);
lean_dec(v_start_954_);
if (v_isShared_960_ == 0)
{
lean_ctor_set(v___x_959_, 1, v___x_965_);
v___x_967_ = v___x_959_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v_array_953_);
lean_ctor_set(v_reuseFailAlloc_980_, 1, v___x_965_);
lean_ctor_set(v_reuseFailAlloc_980_, 2, v_stop_955_);
v___x_967_ = v_reuseFailAlloc_980_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
lean_object* v___x_968_; uint8_t v___x_969_; uint8_t v___x_970_; 
lean_inc_ref(v_lctx_961_);
v___x_968_ = l_Lean_LocalContext_getFVar_x21(v_lctx_961_, v_a_963_);
v___x_969_ = 0;
v___x_970_ = l_Lean_LocalDecl_isLet(v___x_968_, v___x_969_);
lean_dec_ref(v___x_968_);
if (v___x_970_ == 0)
{
lean_dec(v___x_962_);
v_a_947_ = v___x_967_;
goto v___jp_946_;
}
else
{
lean_object* v___x_971_; 
v___x_971_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr(v___x_962_, v___y_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_);
if (lean_obj_tag(v___x_971_) == 0)
{
lean_dec_ref(v___x_971_);
v_a_947_ = v___x_967_;
goto v___jp_946_;
}
else
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_979_; 
lean_dec_ref(v___x_967_);
lean_dec_ref(v_a_934_);
v_a_972_ = lean_ctor_get(v___x_971_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v___x_971_);
if (v_isSharedCheck_979_ == 0)
{
v___x_974_ = v___x_971_;
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v___x_971_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_977_; 
if (v_isShared_975_ == 0)
{
v___x_977_ = v___x_974_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_a_972_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
}
}
}
}
}
}
v___jp_946_:
{
size_t v___x_948_; size_t v___x_949_; 
v___x_948_ = ((size_t)1ULL);
v___x_949_ = lean_usize_add(v_i_937_, v___x_948_);
v_i_937_ = v___x_949_;
v_b_938_ = v_a_947_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__2___boxed(lean_object* v_a_985_, lean_object* v_as_986_, lean_object* v_sz_987_, lean_object* v_i_988_, lean_object* v_b_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_){
_start:
{
size_t v_sz_boxed_997_; size_t v_i_boxed_998_; lean_object* v_res_999_; 
v_sz_boxed_997_ = lean_unbox_usize(v_sz_987_);
lean_dec(v_sz_987_);
v_i_boxed_998_ = lean_unbox_usize(v_i_988_);
lean_dec(v_i_988_);
v_res_999_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__2(v_a_985_, v_as_986_, v_sz_boxed_997_, v_i_boxed_998_, v_b_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_);
lean_dec(v___y_995_);
lean_dec_ref(v___y_994_);
lean_dec(v___y_993_);
lean_dec_ref(v___y_992_);
lean_dec(v___y_991_);
lean_dec(v___y_990_);
lean_dec_ref(v_as_986_);
return v_res_999_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1___redArg(lean_object* v_as_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_){
_start:
{
if (lean_obj_tag(v_as_1000_) == 0)
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1004_ = lean_box(0);
v___x_1005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1004_);
return v___x_1005_;
}
else
{
lean_object* v_head_1006_; lean_object* v_tail_1007_; lean_object* v___x_1008_; 
v_head_1006_ = lean_ctor_get(v_as_1000_, 0);
lean_inc(v_head_1006_);
v_tail_1007_ = lean_ctor_get(v_as_1000_, 1);
lean_inc(v_tail_1007_);
lean_dec_ref(v_as_1000_);
v___x_1008_ = l_Lean_Meta_addZetaDeltaFVarId___redArg(v_head_1006_, v___y_1001_, v___y_1002_);
if (lean_obj_tag(v___x_1008_) == 0)
{
lean_dec_ref(v___x_1008_);
v_as_1000_ = v_tail_1007_;
goto _start;
}
else
{
lean_dec(v_tail_1007_);
return v___x_1008_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1___redArg___boxed(lean_object* v_as_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_){
_start:
{
lean_object* v_res_1014_; 
v_res_1014_ = l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1___redArg(v_as_1010_, v___y_1011_, v___y_1012_);
lean_dec(v___y_1012_);
lean_dec(v___y_1011_);
return v_res_1014_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar(lean_object* v_mvarId_1015_, lean_object* v_args_1016_, lean_object* v_a_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_){
_start:
{
lean_object* v___x_1024_; lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1081_; 
v___x_1024_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0___redArg(v_mvarId_1015_, v_a_1020_, v_a_1022_);
v_a_1025_ = lean_ctor_get(v___x_1024_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v___x_1024_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1027_ = v___x_1024_;
v_isShared_1028_ = v_isSharedCheck_1081_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_1024_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1081_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
if (lean_obj_tag(v_a_1025_) == 1)
{
lean_object* v_val_1029_; lean_object* v_fvars_1030_; lean_object* v_mvarIdPending_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; uint8_t v___x_1034_; 
lean_del_object(v___x_1027_);
v_val_1029_ = lean_ctor_get(v_a_1025_, 0);
lean_inc(v_val_1029_);
lean_dec_ref(v_a_1025_);
v_fvars_1030_ = lean_ctor_get(v_val_1029_, 0);
lean_inc_ref(v_fvars_1030_);
v_mvarIdPending_1031_ = lean_ctor_get(v_val_1029_, 1);
lean_inc(v_mvarIdPending_1031_);
lean_dec(v_val_1029_);
v___x_1032_ = lean_array_get_size(v_fvars_1030_);
v___x_1033_ = lean_array_get_size(v_args_1016_);
v___x_1034_ = lean_nat_dec_le(v___x_1032_, v___x_1033_);
if (v___x_1034_ == 0)
{
lean_object* v___x_1035_; 
lean_dec(v_mvarIdPending_1031_);
lean_dec_ref(v_fvars_1030_);
lean_dec_ref(v_args_1016_);
lean_inc(v_a_1017_);
v___x_1035_ = l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1___redArg(v_a_1017_, v_a_1020_, v_a_1022_);
if (lean_obj_tag(v___x_1035_) == 0)
{
lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1043_; 
v_isSharedCheck_1043_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1043_ == 0)
{
lean_object* v_unused_1044_; 
v_unused_1044_ = lean_ctor_get(v___x_1035_, 0);
lean_dec(v_unused_1044_);
v___x_1037_ = v___x_1035_;
v_isShared_1038_ = v_isSharedCheck_1043_;
goto v_resetjp_1036_;
}
else
{
lean_dec(v___x_1035_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1043_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1039_; lean_object* v___x_1041_; 
v___x_1039_ = lean_box(0);
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 0, v___x_1039_);
v___x_1041_ = v___x_1037_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v___x_1039_);
v___x_1041_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
return v___x_1041_;
}
}
}
else
{
return v___x_1035_;
}
}
else
{
lean_object* v___x_1045_; 
v___x_1045_ = l_Lean_MVarId_getDecl(v_mvarIdPending_1031_, v_a_1019_, v_a_1020_, v_a_1021_, v_a_1022_);
if (lean_obj_tag(v___x_1045_) == 0)
{
lean_object* v_a_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; size_t v_sz_1049_; size_t v___x_1050_; lean_object* v___x_1051_; 
v_a_1046_ = lean_ctor_get(v___x_1045_, 0);
lean_inc(v_a_1046_);
lean_dec_ref(v___x_1045_);
v___x_1047_ = lean_unsigned_to_nat(0u);
v___x_1048_ = l_Array_toSubarray___redArg(v_args_1016_, v___x_1047_, v___x_1033_);
v_sz_1049_ = lean_array_size(v_fvars_1030_);
v___x_1050_ = ((size_t)0ULL);
v___x_1051_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__2(v_a_1046_, v_fvars_1030_, v_sz_1049_, v___x_1050_, v___x_1048_, v_a_1017_, v_a_1018_, v_a_1019_, v_a_1020_, v_a_1021_, v_a_1022_);
lean_dec_ref(v_fvars_1030_);
if (lean_obj_tag(v___x_1051_) == 0)
{
lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1059_; 
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1059_ == 0)
{
lean_object* v_unused_1060_; 
v_unused_1060_ = lean_ctor_get(v___x_1051_, 0);
lean_dec(v_unused_1060_);
v___x_1053_ = v___x_1051_;
v_isShared_1054_ = v_isSharedCheck_1059_;
goto v_resetjp_1052_;
}
else
{
lean_dec(v___x_1051_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1059_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1055_; lean_object* v___x_1057_; 
v___x_1055_ = lean_box(0);
if (v_isShared_1054_ == 0)
{
lean_ctor_set(v___x_1053_, 0, v___x_1055_);
v___x_1057_ = v___x_1053_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1068_; 
v_a_1061_ = lean_ctor_get(v___x_1051_, 0);
v_isSharedCheck_1068_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1063_ = v___x_1051_;
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_a_1061_);
lean_dec(v___x_1051_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v___x_1066_; 
if (v_isShared_1064_ == 0)
{
v___x_1066_ = v___x_1063_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v_a_1061_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
return v___x_1066_;
}
}
}
}
else
{
lean_object* v_a_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1076_; 
lean_dec_ref(v_fvars_1030_);
lean_dec_ref(v_args_1016_);
v_a_1069_ = lean_ctor_get(v___x_1045_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1045_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1071_ = v___x_1045_;
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_a_1069_);
lean_dec(v___x_1045_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1074_; 
if (v_isShared_1072_ == 0)
{
v___x_1074_ = v___x_1071_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_a_1069_);
v___x_1074_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
return v___x_1074_;
}
}
}
}
}
else
{
lean_object* v___x_1077_; lean_object* v___x_1079_; 
lean_dec(v_a_1025_);
lean_dec_ref(v_args_1016_);
v___x_1077_ = lean_box(0);
if (v_isShared_1028_ == 0)
{
lean_ctor_set(v___x_1027_, 0, v___x_1077_);
v___x_1079_ = v___x_1027_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v___x_1077_);
v___x_1079_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
return v___x_1079_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar___boxed(lean_object* v_mvarId_1082_, lean_object* v_args_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_, lean_object* v_a_1086_, lean_object* v_a_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_){
_start:
{
lean_object* v_res_1091_; 
v_res_1091_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar(v_mvarId_1082_, v_args_1083_, v_a_1084_, v_a_1085_, v_a_1086_, v_a_1087_, v_a_1088_, v_a_1089_);
lean_dec(v_a_1089_);
lean_dec_ref(v_a_1088_);
lean_dec(v_a_1087_);
lean_dec_ref(v_a_1086_);
lean_dec(v_a_1085_);
lean_dec(v_a_1084_);
lean_dec(v_mvarId_1082_);
return v_res_1091_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1(lean_object* v_as_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_){
_start:
{
lean_object* v___x_1100_; 
v___x_1100_ = l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1___redArg(v_as_1092_, v___y_1096_, v___y_1098_);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1___boxed(lean_object* v_as_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_){
_start:
{
lean_object* v_res_1109_; 
v_res_1109_ = l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1(v_as_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
lean_dec(v___y_1107_);
lean_dec_ref(v___y_1106_);
lean_dec(v___y_1105_);
lean_dec_ref(v___y_1104_);
lean_dec(v___y_1103_);
lean_dec(v___y_1102_);
return v_res_1109_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0(void){
_start:
{
lean_object* v___x_1110_; lean_object* v___x_1111_; 
v___x_1110_ = lean_unsigned_to_nat(0u);
v___x_1111_ = lean_mk_empty_array_with_capacity(v___x_1110_);
return v___x_1111_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar(lean_object* v_e_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_){
_start:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1120_ = l_Lean_Expr_mvarId_x21(v_e_1112_);
v___x_1121_ = l_Lean_MVarId_findDecl_x3f___redArg(v___x_1120_, v_a_1116_, v_a_1118_);
if (lean_obj_tag(v___x_1121_) == 0)
{
lean_object* v_a_1122_; lean_object* v___x_1124_; uint8_t v_isShared_1125_; uint8_t v_isSharedCheck_1152_; 
v_a_1122_ = lean_ctor_get(v___x_1121_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1121_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1124_ = v___x_1121_;
v_isShared_1125_ = v_isSharedCheck_1152_;
goto v_resetjp_1123_;
}
else
{
lean_inc(v_a_1122_);
lean_dec(v___x_1121_);
v___x_1124_ = lean_box(0);
v_isShared_1125_ = v_isSharedCheck_1152_;
goto v_resetjp_1123_;
}
v_resetjp_1123_:
{
if (lean_obj_tag(v_a_1122_) == 1)
{
lean_object* v_val_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1150_; 
v_val_1126_ = lean_ctor_get(v_a_1122_, 0);
v_isSharedCheck_1150_ = !lean_is_exclusive(v_a_1122_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1128_ = v_a_1122_;
v_isShared_1129_ = v_isSharedCheck_1150_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_val_1126_);
lean_dec(v_a_1122_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1150_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
uint8_t v___x_1139_; 
v___x_1139_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check(v_a_1113_);
if (v___x_1139_ == 0)
{
lean_dec(v___x_1120_);
goto v___jp_1130_;
}
else
{
lean_object* v___x_1140_; lean_object* v___x_1141_; 
v___x_1140_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0);
v___x_1141_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar(v___x_1120_, v___x_1140_, v_a_1113_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_, v_a_1118_);
lean_dec(v___x_1120_);
if (lean_obj_tag(v___x_1141_) == 0)
{
lean_dec_ref(v___x_1141_);
goto v___jp_1130_;
}
else
{
lean_object* v_a_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1149_; 
lean_del_object(v___x_1128_);
lean_dec(v_val_1126_);
lean_del_object(v___x_1124_);
lean_dec_ref(v_e_1112_);
v_a_1142_ = lean_ctor_get(v___x_1141_, 0);
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1149_ == 0)
{
v___x_1144_ = v___x_1141_;
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_a_1142_);
lean_dec(v___x_1141_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1147_; 
if (v_isShared_1145_ == 0)
{
v___x_1147_ = v___x_1144_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v_a_1142_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
}
}
v___jp_1130_:
{
lean_object* v_type_1131_; lean_object* v___x_1133_; 
v_type_1131_ = lean_ctor_get(v_val_1126_, 2);
lean_inc_ref(v_type_1131_);
lean_dec(v_val_1126_);
if (v_isShared_1129_ == 0)
{
lean_ctor_set(v___x_1128_, 0, v_type_1131_);
v___x_1133_ = v___x_1128_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v_type_1131_);
v___x_1133_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
lean_object* v___x_1134_; lean_object* v___x_1136_; 
v___x_1134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1134_, 0, v_e_1112_);
lean_ctor_set(v___x_1134_, 1, v___x_1133_);
if (v_isShared_1125_ == 0)
{
lean_ctor_set(v___x_1124_, 0, v___x_1134_);
v___x_1136_ = v___x_1124_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v___x_1134_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
return v___x_1136_;
}
}
}
}
}
else
{
lean_object* v___x_1151_; 
lean_del_object(v___x_1124_);
lean_dec(v_a_1122_);
lean_dec_ref(v_e_1112_);
v___x_1151_ = l_Lean_Meta_throwUnknownMVar___redArg(v___x_1120_, v_a_1115_, v_a_1116_, v_a_1117_, v_a_1118_);
return v___x_1151_;
}
}
}
else
{
lean_object* v_a_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1160_; 
lean_dec(v___x_1120_);
lean_dec_ref(v_e_1112_);
v_a_1153_ = lean_ctor_get(v___x_1121_, 0);
v_isSharedCheck_1160_ = !lean_is_exclusive(v___x_1121_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1155_ = v___x_1121_;
v_isShared_1156_ = v_isSharedCheck_1160_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_a_1153_);
lean_dec(v___x_1121_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1160_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1158_; 
if (v_isShared_1156_ == 0)
{
v___x_1158_ = v___x_1155_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v_a_1153_);
v___x_1158_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
return v___x_1158_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___boxed(lean_object* v_e_1161_, lean_object* v_a_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_){
_start:
{
lean_object* v_res_1169_; 
v_res_1169_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar(v_e_1161_, v_a_1162_, v_a_1163_, v_a_1164_, v_a_1165_, v_a_1166_, v_a_1167_);
lean_dec(v_a_1167_);
lean_dec_ref(v_a_1166_);
lean_dec(v_a_1165_);
lean_dec_ref(v_a_1164_);
lean_dec(v_a_1163_);
lean_dec(v_a_1162_);
return v_res_1169_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1170_; 
v___x_1170_ = l_instMonadEIO(lean_box(0));
return v___x_1170_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__1(void){
_start:
{
lean_object* v___f_1171_; 
v___f_1171_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_1171_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__2(void){
_start:
{
lean_object* v___f_1172_; 
v___f_1172_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_1172_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__3(void){
_start:
{
lean_object* v___f_1173_; 
v___f_1173_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__0___boxed), 7, 0);
return v___f_1173_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__4(void){
_start:
{
lean_object* v___f_1174_; 
v___f_1174_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__1___boxed), 9, 0);
return v___f_1174_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1(lean_object* v_msg_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_){
_start:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v_toApplicative_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1248_; 
v___x_1183_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__0, &l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__0);
v___x_1184_ = l_StateRefT_x27_instMonad___redArg(v___x_1183_);
v_toApplicative_1185_ = lean_ctor_get(v___x_1184_, 0);
v_isSharedCheck_1248_ = !lean_is_exclusive(v___x_1184_);
if (v_isSharedCheck_1248_ == 0)
{
lean_object* v_unused_1249_; 
v_unused_1249_ = lean_ctor_get(v___x_1184_, 1);
lean_dec(v_unused_1249_);
v___x_1187_ = v___x_1184_;
v_isShared_1188_ = v_isSharedCheck_1248_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_toApplicative_1185_);
lean_dec(v___x_1184_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1248_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v_toFunctor_1189_; lean_object* v_toSeq_1190_; lean_object* v_toSeqLeft_1191_; lean_object* v_toSeqRight_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1246_; 
v_toFunctor_1189_ = lean_ctor_get(v_toApplicative_1185_, 0);
v_toSeq_1190_ = lean_ctor_get(v_toApplicative_1185_, 2);
v_toSeqLeft_1191_ = lean_ctor_get(v_toApplicative_1185_, 3);
v_toSeqRight_1192_ = lean_ctor_get(v_toApplicative_1185_, 4);
v_isSharedCheck_1246_ = !lean_is_exclusive(v_toApplicative_1185_);
if (v_isSharedCheck_1246_ == 0)
{
lean_object* v_unused_1247_; 
v_unused_1247_ = lean_ctor_get(v_toApplicative_1185_, 1);
lean_dec(v_unused_1247_);
v___x_1194_ = v_toApplicative_1185_;
v_isShared_1195_ = v_isSharedCheck_1246_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_toSeqRight_1192_);
lean_inc(v_toSeqLeft_1191_);
lean_inc(v_toSeq_1190_);
lean_inc(v_toFunctor_1189_);
lean_dec(v_toApplicative_1185_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1246_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___f_1196_; lean_object* v___f_1197_; lean_object* v___f_1198_; lean_object* v___f_1199_; lean_object* v___x_1200_; lean_object* v___f_1201_; lean_object* v___f_1202_; lean_object* v___f_1203_; lean_object* v___x_1205_; 
v___f_1196_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__1, &l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__1_once, _init_l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__1);
v___f_1197_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__2, &l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__2_once, _init_l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__2);
lean_inc_ref(v_toFunctor_1189_);
v___f_1198_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1198_, 0, v_toFunctor_1189_);
v___f_1199_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1199_, 0, v_toFunctor_1189_);
v___x_1200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1200_, 0, v___f_1198_);
lean_ctor_set(v___x_1200_, 1, v___f_1199_);
v___f_1201_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1201_, 0, v_toSeqRight_1192_);
v___f_1202_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1202_, 0, v_toSeqLeft_1191_);
v___f_1203_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1203_, 0, v_toSeq_1190_);
if (v_isShared_1195_ == 0)
{
lean_ctor_set(v___x_1194_, 4, v___f_1201_);
lean_ctor_set(v___x_1194_, 3, v___f_1202_);
lean_ctor_set(v___x_1194_, 2, v___f_1203_);
lean_ctor_set(v___x_1194_, 1, v___f_1196_);
lean_ctor_set(v___x_1194_, 0, v___x_1200_);
v___x_1205_ = v___x_1194_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v___x_1200_);
lean_ctor_set(v_reuseFailAlloc_1245_, 1, v___f_1196_);
lean_ctor_set(v_reuseFailAlloc_1245_, 2, v___f_1203_);
lean_ctor_set(v_reuseFailAlloc_1245_, 3, v___f_1202_);
lean_ctor_set(v_reuseFailAlloc_1245_, 4, v___f_1201_);
v___x_1205_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
lean_object* v___x_1207_; 
if (v_isShared_1188_ == 0)
{
lean_ctor_set(v___x_1187_, 1, v___f_1197_);
lean_ctor_set(v___x_1187_, 0, v___x_1205_);
v___x_1207_ = v___x_1187_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v___x_1205_);
lean_ctor_set(v_reuseFailAlloc_1244_, 1, v___f_1197_);
v___x_1207_ = v_reuseFailAlloc_1244_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
lean_object* v___x_1208_; lean_object* v_toApplicative_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1242_; 
v___x_1208_ = l_StateRefT_x27_instMonad___redArg(v___x_1207_);
v_toApplicative_1209_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1242_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1242_ == 0)
{
lean_object* v_unused_1243_; 
v_unused_1243_ = lean_ctor_get(v___x_1208_, 1);
lean_dec(v_unused_1243_);
v___x_1211_ = v___x_1208_;
v_isShared_1212_ = v_isSharedCheck_1242_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_toApplicative_1209_);
lean_dec(v___x_1208_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1242_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v_toFunctor_1213_; lean_object* v_toSeq_1214_; lean_object* v_toSeqLeft_1215_; lean_object* v_toSeqRight_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1240_; 
v_toFunctor_1213_ = lean_ctor_get(v_toApplicative_1209_, 0);
v_toSeq_1214_ = lean_ctor_get(v_toApplicative_1209_, 2);
v_toSeqLeft_1215_ = lean_ctor_get(v_toApplicative_1209_, 3);
v_toSeqRight_1216_ = lean_ctor_get(v_toApplicative_1209_, 4);
v_isSharedCheck_1240_ = !lean_is_exclusive(v_toApplicative_1209_);
if (v_isSharedCheck_1240_ == 0)
{
lean_object* v_unused_1241_; 
v_unused_1241_ = lean_ctor_get(v_toApplicative_1209_, 1);
lean_dec(v_unused_1241_);
v___x_1218_ = v_toApplicative_1209_;
v_isShared_1219_ = v_isSharedCheck_1240_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_toSeqRight_1216_);
lean_inc(v_toSeqLeft_1215_);
lean_inc(v_toSeq_1214_);
lean_inc(v_toFunctor_1213_);
lean_dec(v_toApplicative_1209_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1240_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v___f_1220_; lean_object* v___f_1221_; lean_object* v___f_1222_; lean_object* v___f_1223_; lean_object* v___x_1224_; lean_object* v___f_1225_; lean_object* v___f_1226_; lean_object* v___f_1227_; lean_object* v___x_1229_; 
v___f_1220_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__3, &l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__3_once, _init_l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__3);
v___f_1221_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__4, &l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__4_once, _init_l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__4);
lean_inc_ref(v_toFunctor_1213_);
v___f_1222_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1222_, 0, v_toFunctor_1213_);
v___f_1223_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1223_, 0, v_toFunctor_1213_);
v___x_1224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1224_, 0, v___f_1222_);
lean_ctor_set(v___x_1224_, 1, v___f_1223_);
v___f_1225_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1225_, 0, v_toSeqRight_1216_);
v___f_1226_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1226_, 0, v_toSeqLeft_1215_);
v___f_1227_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1227_, 0, v_toSeq_1214_);
if (v_isShared_1219_ == 0)
{
lean_ctor_set(v___x_1218_, 4, v___f_1225_);
lean_ctor_set(v___x_1218_, 3, v___f_1226_);
lean_ctor_set(v___x_1218_, 2, v___f_1227_);
lean_ctor_set(v___x_1218_, 1, v___f_1220_);
lean_ctor_set(v___x_1218_, 0, v___x_1224_);
v___x_1229_ = v___x_1218_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v___x_1224_);
lean_ctor_set(v_reuseFailAlloc_1239_, 1, v___f_1220_);
lean_ctor_set(v_reuseFailAlloc_1239_, 2, v___f_1227_);
lean_ctor_set(v_reuseFailAlloc_1239_, 3, v___f_1226_);
lean_ctor_set(v_reuseFailAlloc_1239_, 4, v___f_1225_);
v___x_1229_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
lean_object* v___x_1231_; 
if (v_isShared_1212_ == 0)
{
lean_ctor_set(v___x_1211_, 1, v___f_1221_);
lean_ctor_set(v___x_1211_, 0, v___x_1229_);
v___x_1231_ = v___x_1211_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v___x_1229_);
lean_ctor_set(v_reuseFailAlloc_1238_, 1, v___f_1221_);
v___x_1231_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___f_1235_; lean_object* v___x_1522__overap_1236_; lean_object* v___x_1237_; 
v___x_1232_ = l_StateRefT_x27_instMonad___redArg(v___x_1231_);
v___x_1233_ = l_Lean_Meta_LetToHave_instInhabitedResult_default;
v___x_1234_ = l_instInhabitedOfMonad___redArg(v___x_1232_, v___x_1233_);
v___f_1235_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1235_, 0, v___x_1234_);
v___x_1522__overap_1236_ = lean_panic_fn_borrowed(v___f_1235_, v_msg_1175_);
lean_dec_ref(v___f_1235_);
lean_inc(v___y_1181_);
lean_inc_ref(v___y_1180_);
lean_inc(v___y_1179_);
lean_inc_ref(v___y_1178_);
lean_inc(v___y_1177_);
lean_inc(v___y_1176_);
v___x_1237_ = lean_apply_7(v___x_1522__overap_1236_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_, lean_box(0));
return v___x_1237_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___boxed(lean_object* v_msg_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_){
_start:
{
lean_object* v_res_1258_; 
v_res_1258_ = l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1(v_msg_1250_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_);
lean_dec(v___y_1256_);
lean_dec_ref(v___y_1255_);
lean_dec(v___y_1254_);
lean_dec_ref(v___y_1253_);
lean_dec(v___y_1252_);
lean_dec(v___y_1251_);
return v_res_1258_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7_spec__8(lean_object* v_msgData_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_){
_start:
{
lean_object* v___x_1265_; lean_object* v_env_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v_mctx_1269_; lean_object* v_lctx_1270_; lean_object* v_options_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1265_ = lean_st_ref_get(v___y_1263_);
v_env_1266_ = lean_ctor_get(v___x_1265_, 0);
lean_inc_ref(v_env_1266_);
lean_dec(v___x_1265_);
v___x_1267_ = lean_st_ref_get(v___y_1263_);
lean_dec(v___x_1267_);
v___x_1268_ = lean_st_ref_get(v___y_1261_);
v_mctx_1269_ = lean_ctor_get(v___x_1268_, 0);
lean_inc_ref(v_mctx_1269_);
lean_dec(v___x_1268_);
v_lctx_1270_ = lean_ctor_get(v___y_1260_, 2);
v_options_1271_ = lean_ctor_get(v___y_1262_, 2);
lean_inc_ref(v_options_1271_);
lean_inc_ref(v_lctx_1270_);
v___x_1272_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1272_, 0, v_env_1266_);
lean_ctor_set(v___x_1272_, 1, v_mctx_1269_);
lean_ctor_set(v___x_1272_, 2, v_lctx_1270_);
lean_ctor_set(v___x_1272_, 3, v_options_1271_);
v___x_1273_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1272_);
lean_ctor_set(v___x_1273_, 1, v_msgData_1259_);
v___x_1274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1274_, 0, v___x_1273_);
return v___x_1274_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7_spec__8___boxed(lean_object* v_msgData_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_){
_start:
{
lean_object* v_res_1281_; 
v_res_1281_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7_spec__8(v_msgData_1275_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_);
lean_dec(v___y_1279_);
lean_dec_ref(v___y_1278_);
lean_dec(v___y_1277_);
lean_dec_ref(v___y_1276_);
return v_res_1281_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___redArg(lean_object* v_msg_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_){
_start:
{
lean_object* v_ref_1288_; lean_object* v___x_1289_; lean_object* v_a_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1298_; 
v_ref_1288_ = lean_ctor_get(v___y_1285_, 5);
v___x_1289_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7_spec__8(v_msg_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_);
v_a_1290_ = lean_ctor_get(v___x_1289_, 0);
v_isSharedCheck_1298_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1292_ = v___x_1289_;
v_isShared_1293_ = v_isSharedCheck_1298_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_a_1290_);
lean_dec(v___x_1289_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1298_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v___x_1294_; lean_object* v___x_1296_; 
lean_inc(v_ref_1288_);
v___x_1294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1294_, 0, v_ref_1288_);
lean_ctor_set(v___x_1294_, 1, v_a_1290_);
if (v_isShared_1293_ == 0)
{
lean_ctor_set_tag(v___x_1292_, 1);
lean_ctor_set(v___x_1292_, 0, v___x_1294_);
v___x_1296_ = v___x_1292_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v___x_1294_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___redArg___boxed(lean_object* v_msg_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
lean_object* v_res_1305_; 
v_res_1305_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___redArg(v_msg_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_);
lean_dec(v___y_1303_);
lean_dec_ref(v___y_1302_);
lean_dec(v___y_1301_);
lean_dec_ref(v___y_1300_);
return v_res_1305_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5___redArg(lean_object* v_ref_1306_, lean_object* v_msg_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_){
_start:
{
lean_object* v_fileName_1315_; lean_object* v_fileMap_1316_; lean_object* v_options_1317_; lean_object* v_currRecDepth_1318_; lean_object* v_maxRecDepth_1319_; lean_object* v_ref_1320_; lean_object* v_currNamespace_1321_; lean_object* v_openDecls_1322_; lean_object* v_initHeartbeats_1323_; lean_object* v_maxHeartbeats_1324_; lean_object* v_quotContext_1325_; lean_object* v_currMacroScope_1326_; uint8_t v_diag_1327_; lean_object* v_cancelTk_x3f_1328_; uint8_t v_suppressElabErrors_1329_; lean_object* v_inheritedTraceOptions_1330_; lean_object* v_ref_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
v_fileName_1315_ = lean_ctor_get(v___y_1312_, 0);
v_fileMap_1316_ = lean_ctor_get(v___y_1312_, 1);
v_options_1317_ = lean_ctor_get(v___y_1312_, 2);
v_currRecDepth_1318_ = lean_ctor_get(v___y_1312_, 3);
v_maxRecDepth_1319_ = lean_ctor_get(v___y_1312_, 4);
v_ref_1320_ = lean_ctor_get(v___y_1312_, 5);
v_currNamespace_1321_ = lean_ctor_get(v___y_1312_, 6);
v_openDecls_1322_ = lean_ctor_get(v___y_1312_, 7);
v_initHeartbeats_1323_ = lean_ctor_get(v___y_1312_, 8);
v_maxHeartbeats_1324_ = lean_ctor_get(v___y_1312_, 9);
v_quotContext_1325_ = lean_ctor_get(v___y_1312_, 10);
v_currMacroScope_1326_ = lean_ctor_get(v___y_1312_, 11);
v_diag_1327_ = lean_ctor_get_uint8(v___y_1312_, sizeof(void*)*14);
v_cancelTk_x3f_1328_ = lean_ctor_get(v___y_1312_, 12);
v_suppressElabErrors_1329_ = lean_ctor_get_uint8(v___y_1312_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1330_ = lean_ctor_get(v___y_1312_, 13);
v_ref_1331_ = l_Lean_replaceRef(v_ref_1306_, v_ref_1320_);
lean_inc_ref(v_inheritedTraceOptions_1330_);
lean_inc(v_cancelTk_x3f_1328_);
lean_inc(v_currMacroScope_1326_);
lean_inc(v_quotContext_1325_);
lean_inc(v_maxHeartbeats_1324_);
lean_inc(v_initHeartbeats_1323_);
lean_inc(v_openDecls_1322_);
lean_inc(v_currNamespace_1321_);
lean_inc(v_maxRecDepth_1319_);
lean_inc(v_currRecDepth_1318_);
lean_inc_ref(v_options_1317_);
lean_inc_ref(v_fileMap_1316_);
lean_inc_ref(v_fileName_1315_);
v___x_1332_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_1332_, 0, v_fileName_1315_);
lean_ctor_set(v___x_1332_, 1, v_fileMap_1316_);
lean_ctor_set(v___x_1332_, 2, v_options_1317_);
lean_ctor_set(v___x_1332_, 3, v_currRecDepth_1318_);
lean_ctor_set(v___x_1332_, 4, v_maxRecDepth_1319_);
lean_ctor_set(v___x_1332_, 5, v_ref_1331_);
lean_ctor_set(v___x_1332_, 6, v_currNamespace_1321_);
lean_ctor_set(v___x_1332_, 7, v_openDecls_1322_);
lean_ctor_set(v___x_1332_, 8, v_initHeartbeats_1323_);
lean_ctor_set(v___x_1332_, 9, v_maxHeartbeats_1324_);
lean_ctor_set(v___x_1332_, 10, v_quotContext_1325_);
lean_ctor_set(v___x_1332_, 11, v_currMacroScope_1326_);
lean_ctor_set(v___x_1332_, 12, v_cancelTk_x3f_1328_);
lean_ctor_set(v___x_1332_, 13, v_inheritedTraceOptions_1330_);
lean_ctor_set_uint8(v___x_1332_, sizeof(void*)*14, v_diag_1327_);
lean_ctor_set_uint8(v___x_1332_, sizeof(void*)*14 + 1, v_suppressElabErrors_1329_);
v___x_1333_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___redArg(v_msg_1307_, v___y_1310_, v___y_1311_, v___x_1332_, v___y_1313_);
lean_dec_ref(v___x_1332_);
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v_ref_1334_, lean_object* v_msg_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_){
_start:
{
lean_object* v_res_1343_; 
v_res_1343_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5___redArg(v_ref_1334_, v_msg_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_);
lean_dec(v___y_1341_);
lean_dec_ref(v___y_1340_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
lean_dec(v___y_1337_);
lean_dec(v___y_1336_);
lean_dec(v_ref_1334_);
return v_res_1343_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_1344_; 
v___x_1344_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1344_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; 
v___x_1345_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__0);
v___x_1346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1345_);
return v___x_1346_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; 
v___x_1347_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__1);
v___x_1348_ = lean_unsigned_to_nat(0u);
v___x_1349_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1348_);
lean_ctor_set(v___x_1349_, 1, v___x_1348_);
lean_ctor_set(v___x_1349_, 2, v___x_1348_);
lean_ctor_set(v___x_1349_, 3, v___x_1348_);
lean_ctor_set(v___x_1349_, 4, v___x_1347_);
lean_ctor_set(v___x_1349_, 5, v___x_1347_);
lean_ctor_set(v___x_1349_, 6, v___x_1347_);
lean_ctor_set(v___x_1349_, 7, v___x_1347_);
lean_ctor_set(v___x_1349_, 8, v___x_1347_);
lean_ctor_set(v___x_1349_, 9, v___x_1347_);
return v___x_1349_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; 
v___x_1350_ = lean_unsigned_to_nat(32u);
v___x_1351_ = lean_mk_empty_array_with_capacity(v___x_1350_);
v___x_1352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1351_);
return v___x_1352_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__4(void){
_start:
{
size_t v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1353_ = ((size_t)5ULL);
v___x_1354_ = lean_unsigned_to_nat(0u);
v___x_1355_ = lean_unsigned_to_nat(32u);
v___x_1356_ = lean_mk_empty_array_with_capacity(v___x_1355_);
v___x_1357_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__3);
v___x_1358_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1358_, 0, v___x_1357_);
lean_ctor_set(v___x_1358_, 1, v___x_1356_);
lean_ctor_set(v___x_1358_, 2, v___x_1354_);
lean_ctor_set(v___x_1358_, 3, v___x_1354_);
lean_ctor_set_usize(v___x_1358_, 4, v___x_1353_);
return v___x_1358_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__5(void){
_start:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1359_ = lean_box(1);
v___x_1360_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__4);
v___x_1361_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__1);
v___x_1362_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1361_);
lean_ctor_set(v___x_1362_, 1, v___x_1360_);
lean_ctor_set(v___x_1362_, 2, v___x_1359_);
return v___x_1362_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__6(void){
_start:
{
lean_object* v___x_1363_; 
v___x_1363_ = lean_mk_string_unchecked("A private declaration `", 23, 23);
return v___x_1363_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__7(void){
_start:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1364_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__6);
v___x_1365_ = l_Lean_stringToMessageData(v___x_1364_);
return v___x_1365_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__8(void){
_start:
{
lean_object* v___x_1366_; 
v___x_1366_ = lean_mk_string_unchecked("` (from the current module) exists but would need to be public to access here.", 78, 78);
return v___x_1366_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__9(void){
_start:
{
lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1367_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__8);
v___x_1368_ = l_Lean_stringToMessageData(v___x_1367_);
return v___x_1368_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__10(void){
_start:
{
lean_object* v___x_1369_; 
v___x_1369_ = lean_mk_string_unchecked("A public declaration `", 22, 22);
return v___x_1369_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__11(void){
_start:
{
lean_object* v___x_1370_; lean_object* v___x_1371_; 
v___x_1370_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__10);
v___x_1371_ = l_Lean_stringToMessageData(v___x_1370_);
return v___x_1371_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__12(void){
_start:
{
lean_object* v___x_1372_; 
v___x_1372_ = lean_mk_string_unchecked("` exists but is imported privately; consider adding `public import ", 67, 67);
return v___x_1372_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__13(void){
_start:
{
lean_object* v___x_1373_; lean_object* v___x_1374_; 
v___x_1373_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__12);
v___x_1374_ = l_Lean_stringToMessageData(v___x_1373_);
return v___x_1374_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__14(void){
_start:
{
lean_object* v___x_1375_; 
v___x_1375_ = lean_mk_string_unchecked("`.", 2, 2);
return v___x_1375_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__15(void){
_start:
{
lean_object* v___x_1376_; lean_object* v___x_1377_; 
v___x_1376_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__14);
v___x_1377_ = l_Lean_stringToMessageData(v___x_1376_);
return v___x_1377_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__16(void){
_start:
{
lean_object* v___x_1378_; 
v___x_1378_ = lean_mk_string_unchecked("` (from `", 9, 9);
return v___x_1378_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__17(void){
_start:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1379_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__16);
v___x_1380_ = l_Lean_stringToMessageData(v___x_1379_);
return v___x_1380_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__18(void){
_start:
{
lean_object* v___x_1381_; 
v___x_1381_ = lean_mk_string_unchecked("`) exists but would need to be public to access here.", 53, 53);
return v___x_1381_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__19(void){
_start:
{
lean_object* v___x_1382_; lean_object* v___x_1383_; 
v___x_1382_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__18);
v___x_1383_ = l_Lean_stringToMessageData(v___x_1382_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg(lean_object* v_msg_1384_, lean_object* v_declHint_1385_, lean_object* v___y_1386_){
_start:
{
lean_object* v___x_1388_; lean_object* v_env_1389_; uint8_t v___x_1390_; 
v___x_1388_ = lean_st_ref_get(v___y_1386_);
v_env_1389_ = lean_ctor_get(v___x_1388_, 0);
lean_inc_ref(v_env_1389_);
lean_dec(v___x_1388_);
v___x_1390_ = l_Lean_Name_isAnonymous(v_declHint_1385_);
if (v___x_1390_ == 0)
{
uint8_t v_isExporting_1391_; 
v_isExporting_1391_ = lean_ctor_get_uint8(v_env_1389_, sizeof(void*)*8);
if (v_isExporting_1391_ == 0)
{
lean_object* v___x_1392_; 
lean_dec_ref(v_env_1389_);
lean_dec(v_declHint_1385_);
v___x_1392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1392_, 0, v_msg_1384_);
return v___x_1392_;
}
else
{
lean_object* v___x_1393_; uint8_t v___x_1394_; 
lean_inc_ref(v_env_1389_);
v___x_1393_ = l_Lean_Environment_setExporting(v_env_1389_, v___x_1390_);
lean_inc(v_declHint_1385_);
lean_inc_ref(v___x_1393_);
v___x_1394_ = l_Lean_Environment_contains(v___x_1393_, v_declHint_1385_, v_isExporting_1391_);
if (v___x_1394_ == 0)
{
lean_object* v___x_1395_; 
lean_dec_ref(v___x_1393_);
lean_dec_ref(v_env_1389_);
lean_dec(v_declHint_1385_);
v___x_1395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1395_, 0, v_msg_1384_);
return v___x_1395_;
}
else
{
lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v_c_1401_; lean_object* v___x_1402_; 
v___x_1396_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__2);
v___x_1397_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__5);
v___x_1398_ = l_Lean_Options_empty;
v___x_1399_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1399_, 0, v___x_1393_);
lean_ctor_set(v___x_1399_, 1, v___x_1396_);
lean_ctor_set(v___x_1399_, 2, v___x_1397_);
lean_ctor_set(v___x_1399_, 3, v___x_1398_);
lean_inc(v_declHint_1385_);
v___x_1400_ = l_Lean_MessageData_ofConstName(v_declHint_1385_, v___x_1390_);
v_c_1401_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1401_, 0, v___x_1399_);
lean_ctor_set(v_c_1401_, 1, v___x_1400_);
v___x_1402_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1389_, v_declHint_1385_);
if (lean_obj_tag(v___x_1402_) == 0)
{
lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; 
lean_dec_ref(v_env_1389_);
lean_dec(v_declHint_1385_);
v___x_1403_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__7);
v___x_1404_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1404_, 0, v___x_1403_);
lean_ctor_set(v___x_1404_, 1, v_c_1401_);
v___x_1405_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__9);
v___x_1406_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1406_, 0, v___x_1404_);
lean_ctor_set(v___x_1406_, 1, v___x_1405_);
v___x_1407_ = l_Lean_MessageData_note(v___x_1406_);
v___x_1408_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1408_, 0, v_msg_1384_);
lean_ctor_set(v___x_1408_, 1, v___x_1407_);
v___x_1409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1409_, 0, v___x_1408_);
return v___x_1409_;
}
else
{
lean_object* v_val_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1445_; 
v_val_1410_ = lean_ctor_get(v___x_1402_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1402_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1412_ = v___x_1402_;
v_isShared_1413_ = v_isSharedCheck_1445_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_val_1410_);
lean_dec(v___x_1402_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1445_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v_mod_1417_; uint8_t v___x_1418_; 
v___x_1414_ = lean_box(0);
v___x_1415_ = l_Lean_Environment_header(v_env_1389_);
lean_dec_ref(v_env_1389_);
v___x_1416_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1415_);
v_mod_1417_ = lean_array_get(v___x_1414_, v___x_1416_, v_val_1410_);
lean_dec(v_val_1410_);
lean_dec_ref(v___x_1416_);
v___x_1418_ = l_Lean_isPrivateName(v_declHint_1385_);
lean_dec(v_declHint_1385_);
if (v___x_1418_ == 0)
{
lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1430_; 
v___x_1419_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__11);
v___x_1420_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1420_, 0, v___x_1419_);
lean_ctor_set(v___x_1420_, 1, v_c_1401_);
v___x_1421_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__13);
v___x_1422_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1420_);
lean_ctor_set(v___x_1422_, 1, v___x_1421_);
v___x_1423_ = l_Lean_MessageData_ofName(v_mod_1417_);
v___x_1424_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1422_);
lean_ctor_set(v___x_1424_, 1, v___x_1423_);
v___x_1425_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__15);
v___x_1426_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1424_);
lean_ctor_set(v___x_1426_, 1, v___x_1425_);
v___x_1427_ = l_Lean_MessageData_note(v___x_1426_);
v___x_1428_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1428_, 0, v_msg_1384_);
lean_ctor_set(v___x_1428_, 1, v___x_1427_);
if (v_isShared_1413_ == 0)
{
lean_ctor_set_tag(v___x_1412_, 0);
lean_ctor_set(v___x_1412_, 0, v___x_1428_);
v___x_1430_ = v___x_1412_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v___x_1428_);
v___x_1430_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
return v___x_1430_;
}
}
else
{
lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1443_; 
v___x_1432_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__7);
v___x_1433_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1432_);
lean_ctor_set(v___x_1433_, 1, v_c_1401_);
v___x_1434_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__17);
v___x_1435_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1435_, 0, v___x_1433_);
lean_ctor_set(v___x_1435_, 1, v___x_1434_);
v___x_1436_ = l_Lean_MessageData_ofName(v_mod_1417_);
v___x_1437_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1435_);
lean_ctor_set(v___x_1437_, 1, v___x_1436_);
v___x_1438_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__19);
v___x_1439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1439_, 0, v___x_1437_);
lean_ctor_set(v___x_1439_, 1, v___x_1438_);
v___x_1440_ = l_Lean_MessageData_note(v___x_1439_);
v___x_1441_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1441_, 0, v_msg_1384_);
lean_ctor_set(v___x_1441_, 1, v___x_1440_);
if (v_isShared_1413_ == 0)
{
lean_ctor_set_tag(v___x_1412_, 0);
lean_ctor_set(v___x_1412_, 0, v___x_1441_);
v___x_1443_ = v___x_1412_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v___x_1441_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1446_; 
lean_dec_ref(v_env_1389_);
lean_dec(v_declHint_1385_);
v___x_1446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1446_, 0, v_msg_1384_);
return v___x_1446_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___boxed(lean_object* v_msg_1447_, lean_object* v_declHint_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_){
_start:
{
lean_object* v_res_1451_; 
v_res_1451_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg(v_msg_1447_, v_declHint_1448_, v___y_1449_);
lean_dec(v___y_1449_);
return v_res_1451_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4(lean_object* v_msg_1452_, lean_object* v_declHint_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_){
_start:
{
lean_object* v___x_1461_; lean_object* v_a_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1471_; 
v___x_1461_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg(v_msg_1452_, v_declHint_1453_, v___y_1459_);
v_a_1462_ = lean_ctor_get(v___x_1461_, 0);
v_isSharedCheck_1471_ = !lean_is_exclusive(v___x_1461_);
if (v_isSharedCheck_1471_ == 0)
{
v___x_1464_ = v___x_1461_;
v_isShared_1465_ = v_isSharedCheck_1471_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_a_1462_);
lean_dec(v___x_1461_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1471_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1469_; 
v___x_1466_ = l_Lean_unknownIdentifierMessageTag;
v___x_1467_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1467_, 0, v___x_1466_);
lean_ctor_set(v___x_1467_, 1, v_a_1462_);
if (v_isShared_1465_ == 0)
{
lean_ctor_set(v___x_1464_, 0, v___x_1467_);
v___x_1469_ = v___x_1464_;
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
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4___boxed(lean_object* v_msg_1472_, lean_object* v_declHint_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_){
_start:
{
lean_object* v_res_1481_; 
v_res_1481_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4(v_msg_1472_, v_declHint_1473_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_);
lean_dec(v___y_1479_);
lean_dec_ref(v___y_1478_);
lean_dec(v___y_1477_);
lean_dec_ref(v___y_1476_);
lean_dec(v___y_1475_);
lean_dec(v___y_1474_);
return v_res_1481_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3___redArg(lean_object* v_ref_1482_, lean_object* v_msg_1483_, lean_object* v_declHint_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_){
_start:
{
lean_object* v___x_1492_; lean_object* v_a_1493_; lean_object* v___x_1494_; 
v___x_1492_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4(v_msg_1483_, v_declHint_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_);
v_a_1493_ = lean_ctor_get(v___x_1492_, 0);
lean_inc(v_a_1493_);
lean_dec_ref(v___x_1492_);
v___x_1494_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5___redArg(v_ref_1482_, v_a_1493_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_);
return v___x_1494_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3___redArg___boxed(lean_object* v_ref_1495_, lean_object* v_msg_1496_, lean_object* v_declHint_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_){
_start:
{
lean_object* v_res_1505_; 
v_res_1505_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3___redArg(v_ref_1495_, v_msg_1496_, v_declHint_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_);
lean_dec(v___y_1503_);
lean_dec_ref(v___y_1502_);
lean_dec(v___y_1501_);
lean_dec_ref(v___y_1500_);
lean_dec(v___y_1499_);
lean_dec(v___y_1498_);
lean_dec(v_ref_1495_);
return v_res_1505_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1506_; 
v___x_1506_ = lean_mk_string_unchecked("Unknown constant `", 18, 18);
return v___x_1506_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___x_1507_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__0, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__0);
v___x_1508_ = l_Lean_stringToMessageData(v___x_1507_);
return v___x_1508_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_1509_; 
v___x_1509_ = lean_mk_string_unchecked("`", 1, 1);
return v___x_1509_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_1510_; lean_object* v___x_1511_; 
v___x_1510_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__2, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__2_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__2);
v___x_1511_ = l_Lean_stringToMessageData(v___x_1510_);
return v___x_1511_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg(lean_object* v_ref_1512_, lean_object* v_constName_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_){
_start:
{
lean_object* v___x_1521_; uint8_t v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; 
v___x_1521_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__1);
v___x_1522_ = 0;
lean_inc(v_constName_1513_);
v___x_1523_ = l_Lean_MessageData_ofConstName(v_constName_1513_, v___x_1522_);
v___x_1524_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1524_, 0, v___x_1521_);
lean_ctor_set(v___x_1524_, 1, v___x_1523_);
v___x_1525_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__3);
v___x_1526_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1526_, 0, v___x_1524_);
lean_ctor_set(v___x_1526_, 1, v___x_1525_);
v___x_1527_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3___redArg(v_ref_1512_, v___x_1526_, v_constName_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_);
return v___x_1527_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_ref_1528_, lean_object* v_constName_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_){
_start:
{
lean_object* v_res_1537_; 
v_res_1537_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg(v_ref_1528_, v_constName_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_);
lean_dec(v___y_1535_);
lean_dec_ref(v___y_1534_);
lean_dec(v___y_1533_);
lean_dec_ref(v___y_1532_);
lean_dec(v___y_1531_);
lean_dec(v___y_1530_);
lean_dec(v_ref_1528_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0___redArg(lean_object* v_constName_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_){
_start:
{
lean_object* v_ref_1546_; lean_object* v___x_1547_; 
v_ref_1546_ = lean_ctor_get(v___y_1543_, 5);
v___x_1547_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg(v_ref_1546_, v_constName_1538_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_);
return v___x_1547_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0___redArg___boxed(lean_object* v_constName_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_){
_start:
{
lean_object* v_res_1556_; 
v_res_1556_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0___redArg(v_constName_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_);
lean_dec(v___y_1554_);
lean_dec_ref(v___y_1553_);
lean_dec(v___y_1552_);
lean_dec_ref(v___y_1551_);
lean_dec(v___y_1550_);
lean_dec(v___y_1549_);
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0(lean_object* v_constName_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_){
_start:
{
lean_object* v___x_1565_; lean_object* v_env_1566_; uint8_t v___x_1567_; lean_object* v___x_1568_; 
v___x_1565_ = lean_st_ref_get(v___y_1563_);
v_env_1566_ = lean_ctor_get(v___x_1565_, 0);
lean_inc_ref(v_env_1566_);
lean_dec(v___x_1565_);
v___x_1567_ = 0;
lean_inc(v_constName_1557_);
v___x_1568_ = l_Lean_Environment_findConstVal_x3f(v_env_1566_, v_constName_1557_, v___x_1567_);
if (lean_obj_tag(v___x_1568_) == 0)
{
lean_object* v___x_1569_; 
v___x_1569_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0___redArg(v_constName_1557_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_);
return v___x_1569_;
}
else
{
lean_object* v_val_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1577_; 
lean_dec(v_constName_1557_);
v_val_1570_ = lean_ctor_get(v___x_1568_, 0);
v_isSharedCheck_1577_ = !lean_is_exclusive(v___x_1568_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1572_ = v___x_1568_;
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_val_1570_);
lean_dec(v___x_1568_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
lean_object* v___x_1575_; 
if (v_isShared_1573_ == 0)
{
lean_ctor_set_tag(v___x_1572_, 0);
v___x_1575_ = v___x_1572_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v_val_1570_);
v___x_1575_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
return v___x_1575_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0___boxed(lean_object* v_constName_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_){
_start:
{
lean_object* v_res_1586_; 
v_res_1586_ = l_Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0(v_constName_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_);
lean_dec(v___y_1584_);
lean_dec_ref(v___y_1583_);
lean_dec(v___y_1582_);
lean_dec_ref(v___y_1581_);
lean_dec(v___y_1580_);
lean_dec(v___y_1579_);
return v_res_1586_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1587_; 
v___x_1587_ = lean_mk_string_unchecked("Lean.Meta.LetToHave", 19, 19);
return v___x_1587_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1588_; 
v___x_1588_ = lean_mk_string_unchecked("_private.Lean.Meta.LetToHave.0.Lean.Meta.LetToHave.visitConst", 61, 61);
return v___x_1588_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1589_; 
v___x_1589_ = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return v___x_1589_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; 
v___x_1590_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__2, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__2_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__2);
v___x_1591_ = lean_unsigned_to_nat(35u);
v___x_1592_ = lean_unsigned_to_nat(203u);
v___x_1593_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__1, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__1_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__1);
v___x_1594_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__0);
v___x_1595_ = l_mkPanicMessageWithDecl(v___x_1594_, v___x_1593_, v___x_1592_, v___x_1591_, v___x_1590_);
return v___x_1595_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0(lean_object* v_e_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_){
_start:
{
if (lean_obj_tag(v_e_1596_) == 4)
{
lean_object* v_declName_1604_; lean_object* v_us_1605_; lean_object* v___x_1606_; 
v_declName_1604_ = lean_ctor_get(v_e_1596_, 0);
v_us_1605_ = lean_ctor_get(v_e_1596_, 1);
lean_inc(v_declName_1604_);
v___x_1606_ = l_Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0(v_declName_1604_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_, v___y_1602_);
if (lean_obj_tag(v___x_1606_) == 0)
{
lean_object* v_a_1607_; lean_object* v_levelParams_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; uint8_t v___x_1611_; 
v_a_1607_ = lean_ctor_get(v___x_1606_, 0);
lean_inc(v_a_1607_);
lean_dec_ref(v___x_1606_);
v_levelParams_1608_ = lean_ctor_get(v_a_1607_, 1);
v___x_1609_ = l_List_lengthTR___redArg(v_levelParams_1608_);
v___x_1610_ = l_List_lengthTR___redArg(v_us_1605_);
v___x_1611_ = lean_nat_dec_eq(v___x_1609_, v___x_1610_);
lean_dec(v___x_1610_);
lean_dec(v___x_1609_);
if (v___x_1611_ == 0)
{
lean_object* v___x_1612_; 
lean_inc(v_us_1605_);
lean_inc(v_declName_1604_);
lean_dec(v_a_1607_);
lean_dec_ref(v_e_1596_);
v___x_1612_ = l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(v_declName_1604_, v_us_1605_, v___y_1599_, v___y_1600_, v___y_1601_, v___y_1602_);
return v___x_1612_;
}
else
{
lean_object* v___x_1613_; 
lean_inc(v_us_1605_);
v___x_1613_ = l_Lean_Core_instantiateTypeLevelParams___redArg(v_a_1607_, v_us_1605_, v___y_1602_);
if (lean_obj_tag(v___x_1613_) == 0)
{
lean_object* v_a_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1623_; 
v_a_1614_ = lean_ctor_get(v___x_1613_, 0);
v_isSharedCheck_1623_ = !lean_is_exclusive(v___x_1613_);
if (v_isSharedCheck_1623_ == 0)
{
v___x_1616_ = v___x_1613_;
v_isShared_1617_ = v_isSharedCheck_1623_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_a_1614_);
lean_dec(v___x_1613_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1623_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1621_; 
v___x_1618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1618_, 0, v_a_1614_);
v___x_1619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1619_, 0, v_e_1596_);
lean_ctor_set(v___x_1619_, 1, v___x_1618_);
if (v_isShared_1617_ == 0)
{
lean_ctor_set(v___x_1616_, 0, v___x_1619_);
v___x_1621_ = v___x_1616_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v___x_1619_);
v___x_1621_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
return v___x_1621_;
}
}
}
else
{
lean_object* v_a_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1631_; 
lean_dec_ref(v_e_1596_);
v_a_1624_ = lean_ctor_get(v___x_1613_, 0);
v_isSharedCheck_1631_ = !lean_is_exclusive(v___x_1613_);
if (v_isSharedCheck_1631_ == 0)
{
v___x_1626_ = v___x_1613_;
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_a_1624_);
lean_dec(v___x_1613_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
lean_object* v___x_1629_; 
if (v_isShared_1627_ == 0)
{
v___x_1629_ = v___x_1626_;
goto v_reusejp_1628_;
}
else
{
lean_object* v_reuseFailAlloc_1630_; 
v_reuseFailAlloc_1630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1630_, 0, v_a_1624_);
v___x_1629_ = v_reuseFailAlloc_1630_;
goto v_reusejp_1628_;
}
v_reusejp_1628_:
{
return v___x_1629_;
}
}
}
}
}
else
{
lean_object* v_a_1632_; lean_object* v___x_1634_; uint8_t v_isShared_1635_; uint8_t v_isSharedCheck_1639_; 
lean_dec_ref(v_e_1596_);
v_a_1632_ = lean_ctor_get(v___x_1606_, 0);
v_isSharedCheck_1639_ = !lean_is_exclusive(v___x_1606_);
if (v_isSharedCheck_1639_ == 0)
{
v___x_1634_ = v___x_1606_;
v_isShared_1635_ = v_isSharedCheck_1639_;
goto v_resetjp_1633_;
}
else
{
lean_inc(v_a_1632_);
lean_dec(v___x_1606_);
v___x_1634_ = lean_box(0);
v_isShared_1635_ = v_isSharedCheck_1639_;
goto v_resetjp_1633_;
}
v_resetjp_1633_:
{
lean_object* v___x_1637_; 
if (v_isShared_1635_ == 0)
{
v___x_1637_ = v___x_1634_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1638_, 0, v_a_1632_);
v___x_1637_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
return v___x_1637_;
}
}
}
}
else
{
lean_object* v___x_1640_; lean_object* v___x_1641_; 
lean_dec_ref(v_e_1596_);
v___x_1640_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__3);
v___x_1641_ = l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1(v___x_1640_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_, v___y_1602_);
return v___x_1641_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___boxed(lean_object* v_e_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_){
_start:
{
lean_object* v_res_1650_; 
v_res_1650_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0(v_e_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_);
lean_dec(v___y_1648_);
lean_dec_ref(v___y_1647_);
lean_dec(v___y_1646_);
lean_dec_ref(v___y_1645_);
lean_dec(v___y_1644_);
lean_dec(v___y_1643_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst(lean_object* v_e_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_, lean_object* v_a_1654_, lean_object* v_a_1655_, lean_object* v_a_1656_, lean_object* v_a_1657_){
_start:
{
lean_object* v___y_1659_; lean_object* v___x_1660_; 
lean_inc_ref(v_e_1651_);
v___y_1659_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___boxed), 8, 1);
lean_closure_set(v___y_1659_, 0, v_e_1651_);
v___x_1660_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_whenCheck(v_e_1651_, v___y_1659_, v_a_1652_, v_a_1653_, v_a_1654_, v_a_1655_, v_a_1656_, v_a_1657_);
return v___x_1660_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___boxed(lean_object* v_e_1661_, lean_object* v_a_1662_, lean_object* v_a_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_){
_start:
{
lean_object* v_res_1669_; 
v_res_1669_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst(v_e_1661_, v_a_1662_, v_a_1663_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_);
lean_dec(v_a_1667_);
lean_dec_ref(v_a_1666_);
lean_dec(v_a_1665_);
lean_dec_ref(v_a_1664_);
lean_dec(v_a_1663_);
lean_dec(v_a_1662_);
return v_res_1669_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0(lean_object* v_00_u03b1_1670_, lean_object* v_constName_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_){
_start:
{
lean_object* v___x_1679_; 
v___x_1679_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0___redArg(v_constName_1671_, v___y_1672_, v___y_1673_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_);
return v___x_1679_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1680_, lean_object* v_constName_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_){
_start:
{
lean_object* v_res_1689_; 
v_res_1689_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0(v_00_u03b1_1680_, v_constName_1681_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_);
lean_dec(v___y_1687_);
lean_dec_ref(v___y_1686_);
lean_dec(v___y_1685_);
lean_dec_ref(v___y_1684_);
lean_dec(v___y_1683_);
lean_dec(v___y_1682_);
return v_res_1689_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_1690_, lean_object* v_ref_1691_, lean_object* v_constName_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_){
_start:
{
lean_object* v___x_1700_; 
v___x_1700_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg(v_ref_1691_, v_constName_1692_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_, v___y_1697_, v___y_1698_);
return v___x_1700_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_1701_, lean_object* v_ref_1702_, lean_object* v_constName_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_){
_start:
{
lean_object* v_res_1711_; 
v_res_1711_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2(v_00_u03b1_1701_, v_ref_1702_, v_constName_1703_, v___y_1704_, v___y_1705_, v___y_1706_, v___y_1707_, v___y_1708_, v___y_1709_);
lean_dec(v___y_1709_);
lean_dec_ref(v___y_1708_);
lean_dec(v___y_1707_);
lean_dec_ref(v___y_1706_);
lean_dec(v___y_1705_);
lean_dec(v___y_1704_);
lean_dec(v_ref_1702_);
return v_res_1711_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3(lean_object* v_00_u03b1_1712_, lean_object* v_ref_1713_, lean_object* v_msg_1714_, lean_object* v_declHint_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_){
_start:
{
lean_object* v___x_1723_; 
v___x_1723_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3___redArg(v_ref_1713_, v_msg_1714_, v_declHint_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_);
return v___x_1723_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_00_u03b1_1724_, lean_object* v_ref_1725_, lean_object* v_msg_1726_, lean_object* v_declHint_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_){
_start:
{
lean_object* v_res_1735_; 
v_res_1735_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3(v_00_u03b1_1724_, v_ref_1725_, v_msg_1726_, v_declHint_1727_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
lean_dec(v___y_1733_);
lean_dec_ref(v___y_1732_);
lean_dec(v___y_1731_);
lean_dec_ref(v___y_1730_);
lean_dec(v___y_1729_);
lean_dec(v___y_1728_);
lean_dec(v_ref_1725_);
return v_res_1735_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5(lean_object* v_msg_1736_, lean_object* v_declHint_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_){
_start:
{
lean_object* v___x_1745_; 
v___x_1745_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg(v_msg_1736_, v_declHint_1737_, v___y_1743_);
return v___x_1745_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___boxed(lean_object* v_msg_1746_, lean_object* v_declHint_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_){
_start:
{
lean_object* v_res_1755_; 
v_res_1755_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5(v_msg_1746_, v_declHint_1747_, v___y_1748_, v___y_1749_, v___y_1750_, v___y_1751_, v___y_1752_, v___y_1753_);
lean_dec(v___y_1753_);
lean_dec_ref(v___y_1752_);
lean_dec(v___y_1751_);
lean_dec_ref(v___y_1750_);
lean_dec(v___y_1749_);
lean_dec(v___y_1748_);
return v_res_1755_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5(lean_object* v_00_u03b1_1756_, lean_object* v_ref_1757_, lean_object* v_msg_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_){
_start:
{
lean_object* v___x_1766_; 
v___x_1766_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5___redArg(v_ref_1757_, v_msg_1758_, v___y_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_);
return v___x_1766_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5___boxed(lean_object* v_00_u03b1_1767_, lean_object* v_ref_1768_, lean_object* v_msg_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_){
_start:
{
lean_object* v_res_1777_; 
v_res_1777_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5(v_00_u03b1_1767_, v_ref_1768_, v_msg_1769_, v___y_1770_, v___y_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_);
lean_dec(v___y_1775_);
lean_dec_ref(v___y_1774_);
lean_dec(v___y_1773_);
lean_dec_ref(v___y_1772_);
lean_dec(v___y_1771_);
lean_dec(v___y_1770_);
lean_dec(v_ref_1768_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7(lean_object* v_00_u03b1_1778_, lean_object* v_msg_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_){
_start:
{
lean_object* v___x_1787_; 
v___x_1787_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___redArg(v_msg_1779_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_);
return v___x_1787_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___boxed(lean_object* v_00_u03b1_1788_, lean_object* v_msg_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_){
_start:
{
lean_object* v_res_1797_; 
v_res_1797_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7(v_00_u03b1_1788_, v_msg_1789_, v___y_1790_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_);
lean_dec(v___y_1795_);
lean_dec_ref(v___y_1794_);
lean_dec(v___y_1793_);
lean_dec_ref(v___y_1792_);
lean_dec(v___y_1791_);
lean_dec(v___y_1790_);
return v_res_1797_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_ensureType(lean_object* v_r_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_){
_start:
{
uint8_t v___x_1806_; 
v___x_1806_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check(v_a_1799_);
if (v___x_1806_ == 0)
{
lean_object* v___x_1807_; 
v___x_1807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1807_, 0, v_r_1798_);
return v___x_1807_;
}
else
{
lean_object* v___x_1808_; 
lean_inc_ref(v_r_1798_);
v___x_1808_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg(v_r_1798_, v_a_1800_, v_a_1801_, v_a_1802_, v_a_1803_, v_a_1804_);
if (lean_obj_tag(v___x_1808_) == 0)
{
lean_object* v_a_1809_; lean_object* v___x_1811_; uint8_t v_isShared_1812_; uint8_t v_isSharedCheck_1862_; 
v_a_1809_ = lean_ctor_get(v___x_1808_, 0);
v_isSharedCheck_1862_ = !lean_is_exclusive(v___x_1808_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1811_ = v___x_1808_;
v_isShared_1812_ = v_isSharedCheck_1862_;
goto v_resetjp_1810_;
}
else
{
lean_inc(v_a_1809_);
lean_dec(v___x_1808_);
v___x_1811_ = lean_box(0);
v_isShared_1812_ = v_isSharedCheck_1862_;
goto v_resetjp_1810_;
}
v_resetjp_1810_:
{
lean_object* v_expr_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1860_; 
v_expr_1813_ = lean_ctor_get(v_r_1798_, 0);
v_isSharedCheck_1860_ = !lean_is_exclusive(v_r_1798_);
if (v_isSharedCheck_1860_ == 0)
{
lean_object* v_unused_1861_; 
v_unused_1861_ = lean_ctor_get(v_r_1798_, 1);
lean_dec(v_unused_1861_);
v___x_1815_ = v_r_1798_;
v_isShared_1816_ = v_isSharedCheck_1860_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_expr_1813_);
lean_dec(v_r_1798_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1860_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
uint8_t v___x_1817_; 
v___x_1817_ = l_Lean_Expr_isSort(v_a_1809_);
if (v___x_1817_ == 0)
{
lean_object* v___x_1818_; 
lean_del_object(v___x_1811_);
lean_inc(v_a_1804_);
lean_inc_ref(v_a_1803_);
lean_inc(v_a_1802_);
lean_inc_ref(v_a_1801_);
v___x_1818_ = lean_whnf(v_a_1809_, v_a_1801_, v_a_1802_, v_a_1803_, v_a_1804_);
if (lean_obj_tag(v___x_1818_) == 0)
{
lean_object* v_a_1819_; lean_object* v___x_1821_; uint8_t v_isShared_1822_; uint8_t v_isSharedCheck_1844_; 
v_a_1819_ = lean_ctor_get(v___x_1818_, 0);
v_isSharedCheck_1844_ = !lean_is_exclusive(v___x_1818_);
if (v_isSharedCheck_1844_ == 0)
{
v___x_1821_ = v___x_1818_;
v_isShared_1822_ = v_isSharedCheck_1844_;
goto v_resetjp_1820_;
}
else
{
lean_inc(v_a_1819_);
lean_dec(v___x_1818_);
v___x_1821_ = lean_box(0);
v_isShared_1822_ = v_isSharedCheck_1844_;
goto v_resetjp_1820_;
}
v_resetjp_1820_:
{
if (lean_obj_tag(v_a_1819_) == 3)
{
lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v_count_1825_; lean_object* v_results_1826_; lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1842_; 
v___x_1823_ = lean_st_ref_get(v_a_1804_);
lean_dec(v___x_1823_);
v___x_1824_ = lean_st_ref_take(v_a_1800_);
v_count_1825_ = lean_ctor_get(v___x_1824_, 0);
v_results_1826_ = lean_ctor_get(v___x_1824_, 1);
v_isSharedCheck_1842_ = !lean_is_exclusive(v___x_1824_);
if (v_isSharedCheck_1842_ == 0)
{
v___x_1828_ = v___x_1824_;
v_isShared_1829_ = v_isSharedCheck_1842_;
goto v_resetjp_1827_;
}
else
{
lean_inc(v_results_1826_);
lean_inc(v_count_1825_);
lean_dec(v___x_1824_);
v___x_1828_ = lean_box(0);
v_isShared_1829_ = v_isSharedCheck_1842_;
goto v_resetjp_1827_;
}
v_resetjp_1827_:
{
lean_object* v___x_1830_; lean_object* v___x_1832_; 
v___x_1830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1830_, 0, v_a_1819_);
lean_inc_ref(v_expr_1813_);
if (v_isShared_1816_ == 0)
{
lean_ctor_set(v___x_1815_, 1, v___x_1830_);
v___x_1832_ = v___x_1815_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1841_; 
v_reuseFailAlloc_1841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1841_, 0, v_expr_1813_);
lean_ctor_set(v_reuseFailAlloc_1841_, 1, v___x_1830_);
v___x_1832_ = v_reuseFailAlloc_1841_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
lean_object* v___x_1833_; lean_object* v___x_1835_; 
lean_inc_ref(v___x_1832_);
v___x_1833_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0___redArg(v_results_1826_, v_expr_1813_, v___x_1832_);
if (v_isShared_1829_ == 0)
{
lean_ctor_set(v___x_1828_, 1, v___x_1833_);
v___x_1835_ = v___x_1828_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v_count_1825_);
lean_ctor_set(v_reuseFailAlloc_1840_, 1, v___x_1833_);
v___x_1835_ = v_reuseFailAlloc_1840_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
lean_object* v___x_1836_; lean_object* v___x_1838_; 
v___x_1836_ = lean_st_ref_set(v_a_1800_, v___x_1835_);
if (v_isShared_1822_ == 0)
{
lean_ctor_set(v___x_1821_, 0, v___x_1832_);
v___x_1838_ = v___x_1821_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v___x_1832_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
return v___x_1838_;
}
}
}
}
}
else
{
lean_object* v___x_1843_; 
lean_del_object(v___x_1821_);
lean_dec(v_a_1819_);
lean_del_object(v___x_1815_);
v___x_1843_ = l_Lean_Meta_throwTypeExpected___redArg(v_expr_1813_, v_a_1801_, v_a_1802_, v_a_1803_, v_a_1804_);
return v___x_1843_;
}
}
}
else
{
lean_object* v_a_1845_; lean_object* v___x_1847_; uint8_t v_isShared_1848_; uint8_t v_isSharedCheck_1852_; 
lean_del_object(v___x_1815_);
lean_dec_ref(v_expr_1813_);
v_a_1845_ = lean_ctor_get(v___x_1818_, 0);
v_isSharedCheck_1852_ = !lean_is_exclusive(v___x_1818_);
if (v_isSharedCheck_1852_ == 0)
{
v___x_1847_ = v___x_1818_;
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
else
{
lean_inc(v_a_1845_);
lean_dec(v___x_1818_);
v___x_1847_ = lean_box(0);
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
v_resetjp_1846_:
{
lean_object* v___x_1850_; 
if (v_isShared_1848_ == 0)
{
v___x_1850_ = v___x_1847_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v_a_1845_);
v___x_1850_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
return v___x_1850_;
}
}
}
}
else
{
lean_object* v___x_1853_; lean_object* v___x_1855_; 
v___x_1853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1853_, 0, v_a_1809_);
if (v_isShared_1816_ == 0)
{
lean_ctor_set(v___x_1815_, 1, v___x_1853_);
v___x_1855_ = v___x_1815_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v_expr_1813_);
lean_ctor_set(v_reuseFailAlloc_1859_, 1, v___x_1853_);
v___x_1855_ = v_reuseFailAlloc_1859_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
lean_object* v___x_1857_; 
if (v_isShared_1812_ == 0)
{
lean_ctor_set(v___x_1811_, 0, v___x_1855_);
v___x_1857_ = v___x_1811_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v___x_1855_);
v___x_1857_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1856_;
}
v_reusejp_1856_:
{
return v___x_1857_;
}
}
}
}
}
}
else
{
lean_object* v_a_1863_; lean_object* v___x_1865_; uint8_t v_isShared_1866_; uint8_t v_isSharedCheck_1870_; 
lean_dec_ref(v_r_1798_);
v_a_1863_ = lean_ctor_get(v___x_1808_, 0);
v_isSharedCheck_1870_ = !lean_is_exclusive(v___x_1808_);
if (v_isSharedCheck_1870_ == 0)
{
v___x_1865_ = v___x_1808_;
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
else
{
lean_inc(v_a_1863_);
lean_dec(v___x_1808_);
v___x_1865_ = lean_box(0);
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
v_resetjp_1864_:
{
lean_object* v___x_1868_; 
if (v_isShared_1866_ == 0)
{
v___x_1868_ = v___x_1865_;
goto v_reusejp_1867_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v_a_1863_);
v___x_1868_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1867_;
}
v_reusejp_1867_:
{
return v___x_1868_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_ensureType___boxed(lean_object* v_r_1871_, lean_object* v_a_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_, lean_object* v_a_1877_, lean_object* v_a_1878_){
_start:
{
lean_object* v_res_1879_; 
v_res_1879_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_ensureType(v_r_1871_, v_a_1872_, v_a_1873_, v_a_1874_, v_a_1875_, v_a_1876_, v_a_1877_);
lean_dec(v_a_1877_);
lean_dec_ref(v_a_1876_);
lean_dec(v_a_1875_);
lean_dec_ref(v_a_1874_);
lean_dec(v_a_1873_);
lean_dec(v_a_1872_);
return v_res_1879_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp_spec__0(lean_object* v_msg_1880_){
_start:
{
lean_object* v___x_1881_; lean_object* v___x_1882_; 
v___x_1881_ = l_Lean_instInhabitedExpr;
v___x_1882_ = lean_panic_fn_borrowed(v___x_1881_, v_msg_1880_);
return v___x_1882_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__0(void){
_start:
{
lean_object* v___x_1883_; 
v___x_1883_ = lean_mk_string_unchecked("Lean.Expr", 9, 9);
return v___x_1883_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__1(void){
_start:
{
lean_object* v___x_1884_; 
v___x_1884_ = lean_mk_string_unchecked("_private.Lean.Expr.0.Lean.Expr.updateApp!Impl", 45, 45);
return v___x_1884_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__2(void){
_start:
{
lean_object* v___x_1885_; 
v___x_1885_ = lean_mk_string_unchecked("application expected", 20, 20);
return v___x_1885_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__3(void){
_start:
{
lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; 
v___x_1886_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__2, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__2_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__2);
v___x_1887_ = lean_unsigned_to_nat(18u);
v___x_1888_ = lean_unsigned_to_nat(1829u);
v___x_1889_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__1, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__1_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__1);
v___x_1890_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__0);
v___x_1891_ = l_mkPanicMessageWithDecl(v___x_1890_, v___x_1889_, v___x_1888_, v___x_1887_, v___x_1886_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp(lean_object* v_e_1892_, lean_object* v_f_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_, lean_object* v_a_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_){
_start:
{
lean_object* v___y_1903_; lean_object* v___y_1908_; lean_object* v___y_1909_; lean_object* v___y_1910_; lean_object* v___y_1916_; lean_object* v___y_1917_; lean_object* v___y_1918_; uint8_t v___y_1919_; lean_object* v___y_1922_; lean_object* v_fType_1937_; lean_object* v___y_1938_; lean_object* v___y_1939_; lean_object* v___y_1940_; lean_object* v___y_1941_; lean_object* v___y_1942_; uint8_t v___x_1981_; 
v___x_1981_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check(v_a_1895_);
if (v___x_1981_ == 0)
{
lean_object* v_expr_1982_; lean_object* v_expr_1983_; uint8_t v___y_1985_; 
v_expr_1982_ = lean_ctor_get(v_f_1893_, 0);
lean_inc_ref(v_expr_1982_);
lean_dec_ref(v_f_1893_);
v_expr_1983_ = lean_ctor_get(v_a_1894_, 0);
lean_inc_ref(v_expr_1983_);
lean_dec_ref(v_a_1894_);
if (lean_obj_tag(v_e_1892_) == 5)
{
lean_object* v_fn_1987_; lean_object* v_arg_1988_; size_t v___x_1989_; size_t v___x_1990_; uint8_t v___x_1991_; 
v_fn_1987_ = lean_ctor_get(v_e_1892_, 0);
v_arg_1988_ = lean_ctor_get(v_e_1892_, 1);
v___x_1989_ = lean_ptr_addr(v_fn_1987_);
v___x_1990_ = lean_ptr_addr(v_expr_1982_);
v___x_1991_ = lean_usize_dec_eq(v___x_1989_, v___x_1990_);
if (v___x_1991_ == 0)
{
v___y_1985_ = v___x_1991_;
goto v___jp_1984_;
}
else
{
size_t v___x_1992_; size_t v___x_1993_; uint8_t v___x_1994_; 
v___x_1992_ = lean_ptr_addr(v_arg_1988_);
v___x_1993_ = lean_ptr_addr(v_expr_1983_);
v___x_1994_ = lean_usize_dec_eq(v___x_1992_, v___x_1993_);
v___y_1985_ = v___x_1994_;
goto v___jp_1984_;
}
}
else
{
lean_object* v___x_1995_; lean_object* v___x_1996_; 
lean_dec_ref(v_expr_1983_);
lean_dec_ref(v_expr_1982_);
lean_dec_ref(v_e_1892_);
v___x_1995_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__3);
v___x_1996_ = l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp_spec__0(v___x_1995_);
v___y_1903_ = v___x_1996_;
goto v___jp_1902_;
}
v___jp_1984_:
{
if (v___y_1985_ == 0)
{
lean_object* v___x_1986_; 
lean_dec_ref(v_e_1892_);
v___x_1986_ = l_Lean_Expr_app___override(v_expr_1982_, v_expr_1983_);
v___y_1903_ = v___x_1986_;
goto v___jp_1902_;
}
else
{
lean_dec_ref(v_expr_1983_);
lean_dec_ref(v_expr_1982_);
v___y_1903_ = v_e_1892_;
goto v___jp_1902_;
}
}
}
else
{
lean_object* v___x_1997_; 
lean_inc_ref(v_f_1893_);
v___x_1997_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg(v_f_1893_, v_a_1896_, v_a_1897_, v_a_1898_, v_a_1899_, v_a_1900_);
if (lean_obj_tag(v___x_1997_) == 0)
{
lean_object* v_a_1998_; uint8_t v___x_1999_; 
v_a_1998_ = lean_ctor_get(v___x_1997_, 0);
lean_inc(v_a_1998_);
lean_dec_ref(v___x_1997_);
v___x_1999_ = l_Lean_Expr_isForall(v_a_1998_);
if (v___x_1999_ == 0)
{
lean_object* v___x_2000_; 
lean_inc(v_a_1900_);
lean_inc_ref(v_a_1899_);
lean_inc(v_a_1898_);
lean_inc_ref(v_a_1897_);
v___x_2000_ = lean_whnf(v_a_1998_, v_a_1897_, v_a_1898_, v_a_1899_, v_a_1900_);
if (lean_obj_tag(v___x_2000_) == 0)
{
lean_object* v_a_2001_; 
v_a_2001_ = lean_ctor_get(v___x_2000_, 0);
lean_inc(v_a_2001_);
lean_dec_ref(v___x_2000_);
v_fType_1937_ = v_a_2001_;
v___y_1938_ = v_a_1896_;
v___y_1939_ = v_a_1897_;
v___y_1940_ = v_a_1898_;
v___y_1941_ = v_a_1899_;
v___y_1942_ = v_a_1900_;
goto v___jp_1936_;
}
else
{
lean_object* v_a_2002_; lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2009_; 
lean_dec_ref(v_a_1894_);
lean_dec_ref(v_f_1893_);
lean_dec_ref(v_e_1892_);
v_a_2002_ = lean_ctor_get(v___x_2000_, 0);
v_isSharedCheck_2009_ = !lean_is_exclusive(v___x_2000_);
if (v_isSharedCheck_2009_ == 0)
{
v___x_2004_ = v___x_2000_;
v_isShared_2005_ = v_isSharedCheck_2009_;
goto v_resetjp_2003_;
}
else
{
lean_inc(v_a_2002_);
lean_dec(v___x_2000_);
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
else
{
v_fType_1937_ = v_a_1998_;
v___y_1938_ = v_a_1896_;
v___y_1939_ = v_a_1897_;
v___y_1940_ = v_a_1898_;
v___y_1941_ = v_a_1899_;
v___y_1942_ = v_a_1900_;
goto v___jp_1936_;
}
}
else
{
lean_object* v_a_2010_; lean_object* v___x_2012_; uint8_t v_isShared_2013_; uint8_t v_isSharedCheck_2017_; 
lean_dec_ref(v_a_1894_);
lean_dec_ref(v_f_1893_);
lean_dec_ref(v_e_1892_);
v_a_2010_ = lean_ctor_get(v___x_1997_, 0);
v_isSharedCheck_2017_ = !lean_is_exclusive(v___x_1997_);
if (v_isSharedCheck_2017_ == 0)
{
v___x_2012_ = v___x_1997_;
v_isShared_2013_ = v_isSharedCheck_2017_;
goto v_resetjp_2011_;
}
else
{
lean_inc(v_a_2010_);
lean_dec(v___x_1997_);
v___x_2012_ = lean_box(0);
v_isShared_2013_ = v_isSharedCheck_2017_;
goto v_resetjp_2011_;
}
v_resetjp_2011_:
{
lean_object* v___x_2015_; 
if (v_isShared_2013_ == 0)
{
v___x_2015_ = v___x_2012_;
goto v_reusejp_2014_;
}
else
{
lean_object* v_reuseFailAlloc_2016_; 
v_reuseFailAlloc_2016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2016_, 0, v_a_2010_);
v___x_2015_ = v_reuseFailAlloc_2016_;
goto v_reusejp_2014_;
}
v_reusejp_2014_:
{
return v___x_2015_;
}
}
}
}
v___jp_1902_:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; 
v___x_1904_ = lean_box(0);
v___x_1905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1905_, 0, v___y_1903_);
lean_ctor_set(v___x_1905_, 1, v___x_1904_);
v___x_1906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1906_, 0, v___x_1905_);
return v___x_1906_;
}
v___jp_1907_:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; 
v___x_1911_ = lean_expr_instantiate1(v___y_1908_, v___y_1909_);
lean_dec_ref(v___y_1909_);
lean_dec_ref(v___y_1908_);
v___x_1912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1912_, 0, v___x_1911_);
v___x_1913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1913_, 0, v___y_1910_);
lean_ctor_set(v___x_1913_, 1, v___x_1912_);
v___x_1914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1914_, 0, v___x_1913_);
return v___x_1914_;
}
v___jp_1915_:
{
if (v___y_1919_ == 0)
{
lean_object* v___x_1920_; 
lean_dec_ref(v_e_1892_);
lean_inc_ref(v___y_1918_);
v___x_1920_ = l_Lean_Expr_app___override(v___y_1917_, v___y_1918_);
v___y_1908_ = v___y_1916_;
v___y_1909_ = v___y_1918_;
v___y_1910_ = v___x_1920_;
goto v___jp_1907_;
}
else
{
lean_dec_ref(v___y_1917_);
v___y_1908_ = v___y_1916_;
v___y_1909_ = v___y_1918_;
v___y_1910_ = v_e_1892_;
goto v___jp_1907_;
}
}
v___jp_1921_:
{
if (lean_obj_tag(v_e_1892_) == 5)
{
lean_object* v_expr_1923_; lean_object* v_expr_1924_; lean_object* v_fn_1925_; lean_object* v_arg_1926_; size_t v___x_1927_; size_t v___x_1928_; uint8_t v___x_1929_; 
v_expr_1923_ = lean_ctor_get(v_f_1893_, 0);
lean_inc_ref(v_expr_1923_);
lean_dec_ref(v_f_1893_);
v_expr_1924_ = lean_ctor_get(v_a_1894_, 0);
lean_inc_ref(v_expr_1924_);
lean_dec_ref(v_a_1894_);
v_fn_1925_ = lean_ctor_get(v_e_1892_, 0);
v_arg_1926_ = lean_ctor_get(v_e_1892_, 1);
v___x_1927_ = lean_ptr_addr(v_fn_1925_);
v___x_1928_ = lean_ptr_addr(v_expr_1923_);
v___x_1929_ = lean_usize_dec_eq(v___x_1927_, v___x_1928_);
if (v___x_1929_ == 0)
{
v___y_1916_ = v___y_1922_;
v___y_1917_ = v_expr_1923_;
v___y_1918_ = v_expr_1924_;
v___y_1919_ = v___x_1929_;
goto v___jp_1915_;
}
else
{
size_t v___x_1930_; size_t v___x_1931_; uint8_t v___x_1932_; 
v___x_1930_ = lean_ptr_addr(v_arg_1926_);
v___x_1931_ = lean_ptr_addr(v_expr_1924_);
v___x_1932_ = lean_usize_dec_eq(v___x_1930_, v___x_1931_);
v___y_1916_ = v___y_1922_;
v___y_1917_ = v_expr_1923_;
v___y_1918_ = v_expr_1924_;
v___y_1919_ = v___x_1932_;
goto v___jp_1915_;
}
}
else
{
lean_object* v_expr_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
lean_dec_ref(v_f_1893_);
lean_dec_ref(v_e_1892_);
v_expr_1933_ = lean_ctor_get(v_a_1894_, 0);
lean_inc_ref(v_expr_1933_);
lean_dec_ref(v_a_1894_);
v___x_1934_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__3);
v___x_1935_ = l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp_spec__0(v___x_1934_);
v___y_1908_ = v___y_1922_;
v___y_1909_ = v_expr_1933_;
v___y_1910_ = v___x_1935_;
goto v___jp_1907_;
}
}
v___jp_1936_:
{
if (lean_obj_tag(v_fType_1937_) == 7)
{
lean_object* v_binderType_1943_; lean_object* v_body_1944_; lean_object* v___x_1945_; 
v_binderType_1943_ = lean_ctor_get(v_fType_1937_, 1);
lean_inc_ref(v_binderType_1943_);
v_body_1944_ = lean_ctor_get(v_fType_1937_, 2);
lean_inc_ref(v_body_1944_);
lean_dec_ref(v_fType_1937_);
lean_inc_ref(v_a_1894_);
v___x_1945_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg(v_a_1894_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_);
if (lean_obj_tag(v___x_1945_) == 0)
{
lean_object* v_a_1946_; lean_object* v___x_1947_; 
v_a_1946_ = lean_ctor_get(v___x_1945_, 0);
lean_inc(v_a_1946_);
lean_dec_ref(v___x_1945_);
v___x_1947_ = l_Lean_Meta_isExprDefEq(v_binderType_1943_, v_a_1946_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_);
if (lean_obj_tag(v___x_1947_) == 0)
{
lean_object* v_a_1948_; uint8_t v___x_1949_; 
v_a_1948_ = lean_ctor_get(v___x_1947_, 0);
lean_inc(v_a_1948_);
lean_dec_ref(v___x_1947_);
v___x_1949_ = lean_unbox(v_a_1948_);
lean_dec(v_a_1948_);
if (v___x_1949_ == 0)
{
lean_object* v_expr_1950_; lean_object* v_expr_1951_; lean_object* v___x_1952_; 
v_expr_1950_ = lean_ctor_get(v_f_1893_, 0);
v_expr_1951_ = lean_ctor_get(v_a_1894_, 0);
lean_inc_ref(v_expr_1951_);
lean_inc_ref(v_expr_1950_);
v___x_1952_ = l_Lean_Meta_throwAppTypeMismatch___redArg(v_expr_1950_, v_expr_1951_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_);
if (lean_obj_tag(v___x_1952_) == 0)
{
lean_dec_ref(v___x_1952_);
v___y_1922_ = v_body_1944_;
goto v___jp_1921_;
}
else
{
lean_object* v_a_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1960_; 
lean_dec_ref(v_body_1944_);
lean_dec_ref(v_a_1894_);
lean_dec_ref(v_f_1893_);
lean_dec_ref(v_e_1892_);
v_a_1953_ = lean_ctor_get(v___x_1952_, 0);
v_isSharedCheck_1960_ = !lean_is_exclusive(v___x_1952_);
if (v_isSharedCheck_1960_ == 0)
{
v___x_1955_ = v___x_1952_;
v_isShared_1956_ = v_isSharedCheck_1960_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_a_1953_);
lean_dec(v___x_1952_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1960_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v___x_1958_; 
if (v_isShared_1956_ == 0)
{
v___x_1958_ = v___x_1955_;
goto v_reusejp_1957_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v_a_1953_);
v___x_1958_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1957_;
}
v_reusejp_1957_:
{
return v___x_1958_;
}
}
}
}
else
{
v___y_1922_ = v_body_1944_;
goto v___jp_1921_;
}
}
else
{
lean_object* v_a_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1968_; 
lean_dec_ref(v_body_1944_);
lean_dec_ref(v_a_1894_);
lean_dec_ref(v_f_1893_);
lean_dec_ref(v_e_1892_);
v_a_1961_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_1968_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1963_ = v___x_1947_;
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_a_1961_);
lean_dec(v___x_1947_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
lean_object* v___x_1966_; 
if (v_isShared_1964_ == 0)
{
v___x_1966_ = v___x_1963_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v_a_1961_);
v___x_1966_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
return v___x_1966_;
}
}
}
}
else
{
lean_object* v_a_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_1976_; 
lean_dec_ref(v_body_1944_);
lean_dec_ref(v_binderType_1943_);
lean_dec_ref(v_a_1894_);
lean_dec_ref(v_f_1893_);
lean_dec_ref(v_e_1892_);
v_a_1969_ = lean_ctor_get(v___x_1945_, 0);
v_isSharedCheck_1976_ = !lean_is_exclusive(v___x_1945_);
if (v_isSharedCheck_1976_ == 0)
{
v___x_1971_ = v___x_1945_;
v_isShared_1972_ = v_isSharedCheck_1976_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_a_1969_);
lean_dec(v___x_1945_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_1976_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
lean_object* v___x_1974_; 
if (v_isShared_1972_ == 0)
{
v___x_1974_ = v___x_1971_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v_a_1969_);
v___x_1974_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
return v___x_1974_;
}
}
}
}
else
{
lean_object* v_expr_1977_; lean_object* v_expr_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; 
lean_dec_ref(v_fType_1937_);
lean_dec_ref(v_e_1892_);
v_expr_1977_ = lean_ctor_get(v_f_1893_, 0);
lean_inc_ref(v_expr_1977_);
lean_dec_ref(v_f_1893_);
v_expr_1978_ = lean_ctor_get(v_a_1894_, 0);
lean_inc_ref(v_expr_1978_);
lean_dec_ref(v_a_1894_);
v___x_1979_ = l_Lean_Expr_app___override(v_expr_1977_, v_expr_1978_);
v___x_1980_ = l_Lean_Meta_throwFunctionExpected___redArg(v___x_1979_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_);
return v___x_1980_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___boxed(lean_object* v_e_2018_, lean_object* v_f_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_, lean_object* v_a_2022_, lean_object* v_a_2023_, lean_object* v_a_2024_, lean_object* v_a_2025_, lean_object* v_a_2026_, lean_object* v_a_2027_){
_start:
{
lean_object* v_res_2028_; 
v_res_2028_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp(v_e_2018_, v_f_2019_, v_a_2020_, v_a_2021_, v_a_2022_, v_a_2023_, v_a_2024_, v_a_2025_, v_a_2026_);
lean_dec(v_a_2026_);
lean_dec_ref(v_a_2025_);
lean_dec(v_a_2024_);
lean_dec_ref(v_a_2023_);
lean_dec(v_a_2022_);
lean_dec(v_a_2021_);
return v_res_2028_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_2029_; double v___x_2030_; 
v___x_2029_ = lean_unsigned_to_nat(0u);
v___x_2030_ = lean_float_of_nat(v___x_2029_);
return v___x_2030_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_2031_; 
v___x_2031_ = lean_mk_string_unchecked("", 0, 0);
return v___x_2031_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_2032_; lean_object* v___x_2033_; 
v___x_2032_ = lean_unsigned_to_nat(0u);
v___x_2033_ = lean_mk_empty_array_with_capacity(v___x_2032_);
return v___x_2033_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg(lean_object* v_cls_2034_, lean_object* v_msg_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_){
_start:
{
lean_object* v_ref_2041_; lean_object* v___x_2042_; lean_object* v_a_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2087_; 
v_ref_2041_ = lean_ctor_get(v___y_2038_, 5);
v___x_2042_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7_spec__8(v_msg_2035_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_);
v_a_2043_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2087_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2045_ = v___x_2042_;
v_isShared_2046_ = v_isSharedCheck_2087_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_a_2043_);
lean_dec(v___x_2042_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2087_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___x_2047_; lean_object* v_traceState_2048_; lean_object* v_env_2049_; lean_object* v_nextMacroScope_2050_; lean_object* v_ngen_2051_; lean_object* v_auxDeclNGen_2052_; lean_object* v_cache_2053_; lean_object* v_messages_2054_; lean_object* v_infoState_2055_; lean_object* v_snapshotTasks_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2086_; 
v___x_2047_ = lean_st_ref_take(v___y_2039_);
v_traceState_2048_ = lean_ctor_get(v___x_2047_, 4);
v_env_2049_ = lean_ctor_get(v___x_2047_, 0);
v_nextMacroScope_2050_ = lean_ctor_get(v___x_2047_, 1);
v_ngen_2051_ = lean_ctor_get(v___x_2047_, 2);
v_auxDeclNGen_2052_ = lean_ctor_get(v___x_2047_, 3);
v_cache_2053_ = lean_ctor_get(v___x_2047_, 5);
v_messages_2054_ = lean_ctor_get(v___x_2047_, 6);
v_infoState_2055_ = lean_ctor_get(v___x_2047_, 7);
v_snapshotTasks_2056_ = lean_ctor_get(v___x_2047_, 8);
v_isSharedCheck_2086_ = !lean_is_exclusive(v___x_2047_);
if (v_isSharedCheck_2086_ == 0)
{
v___x_2058_ = v___x_2047_;
v_isShared_2059_ = v_isSharedCheck_2086_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_snapshotTasks_2056_);
lean_inc(v_infoState_2055_);
lean_inc(v_messages_2054_);
lean_inc(v_cache_2053_);
lean_inc(v_traceState_2048_);
lean_inc(v_auxDeclNGen_2052_);
lean_inc(v_ngen_2051_);
lean_inc(v_nextMacroScope_2050_);
lean_inc(v_env_2049_);
lean_dec(v___x_2047_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2086_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
uint64_t v_tid_2060_; lean_object* v_traces_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2085_; 
v_tid_2060_ = lean_ctor_get_uint64(v_traceState_2048_, sizeof(void*)*1);
v_traces_2061_ = lean_ctor_get(v_traceState_2048_, 0);
v_isSharedCheck_2085_ = !lean_is_exclusive(v_traceState_2048_);
if (v_isSharedCheck_2085_ == 0)
{
v___x_2063_ = v_traceState_2048_;
v_isShared_2064_ = v_isSharedCheck_2085_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_traces_2061_);
lean_dec(v_traceState_2048_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2085_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___x_2065_; double v___x_2066_; uint8_t v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2075_; 
v___x_2065_ = lean_box(0);
v___x_2066_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0);
v___x_2067_ = 0;
v___x_2068_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__1, &l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__1_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__1);
v___x_2069_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2069_, 0, v_cls_2034_);
lean_ctor_set(v___x_2069_, 1, v___x_2065_);
lean_ctor_set(v___x_2069_, 2, v___x_2068_);
lean_ctor_set_float(v___x_2069_, sizeof(void*)*3, v___x_2066_);
lean_ctor_set_float(v___x_2069_, sizeof(void*)*3 + 8, v___x_2066_);
lean_ctor_set_uint8(v___x_2069_, sizeof(void*)*3 + 16, v___x_2067_);
v___x_2070_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__2, &l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__2_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__2);
v___x_2071_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2071_, 0, v___x_2069_);
lean_ctor_set(v___x_2071_, 1, v_a_2043_);
lean_ctor_set(v___x_2071_, 2, v___x_2070_);
lean_inc(v_ref_2041_);
v___x_2072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2072_, 0, v_ref_2041_);
lean_ctor_set(v___x_2072_, 1, v___x_2071_);
v___x_2073_ = l_Lean_PersistentArray_push___redArg(v_traces_2061_, v___x_2072_);
if (v_isShared_2064_ == 0)
{
lean_ctor_set(v___x_2063_, 0, v___x_2073_);
v___x_2075_ = v___x_2063_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v___x_2073_);
lean_ctor_set_uint64(v_reuseFailAlloc_2084_, sizeof(void*)*1, v_tid_2060_);
v___x_2075_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
lean_object* v___x_2077_; 
if (v_isShared_2059_ == 0)
{
lean_ctor_set(v___x_2058_, 4, v___x_2075_);
v___x_2077_ = v___x_2058_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v_env_2049_);
lean_ctor_set(v_reuseFailAlloc_2083_, 1, v_nextMacroScope_2050_);
lean_ctor_set(v_reuseFailAlloc_2083_, 2, v_ngen_2051_);
lean_ctor_set(v_reuseFailAlloc_2083_, 3, v_auxDeclNGen_2052_);
lean_ctor_set(v_reuseFailAlloc_2083_, 4, v___x_2075_);
lean_ctor_set(v_reuseFailAlloc_2083_, 5, v_cache_2053_);
lean_ctor_set(v_reuseFailAlloc_2083_, 6, v_messages_2054_);
lean_ctor_set(v_reuseFailAlloc_2083_, 7, v_infoState_2055_);
lean_ctor_set(v_reuseFailAlloc_2083_, 8, v_snapshotTasks_2056_);
v___x_2077_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2081_; 
v___x_2078_ = lean_st_ref_set(v___y_2039_, v___x_2077_);
v___x_2079_ = lean_box(0);
if (v_isShared_2046_ == 0)
{
lean_ctor_set(v___x_2045_, 0, v___x_2079_);
v___x_2081_ = v___x_2045_;
goto v_reusejp_2080_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v___x_2079_);
v___x_2081_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2080_;
}
v_reusejp_2080_:
{
return v___x_2081_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___boxed(lean_object* v_cls_2088_, lean_object* v_msg_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_){
_start:
{
lean_object* v_res_2095_; 
v_res_2095_ = l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg(v_cls_2088_, v_msg_2089_, v___y_2090_, v___y_2091_, v___y_2092_, v___y_2093_);
lean_dec(v___y_2093_);
lean_dec_ref(v___y_2092_);
lean_dec(v___y_2091_);
lean_dec_ref(v___y_2090_);
return v_res_2095_;
}
}
static lean_object* _init_l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2096_; 
v___x_2096_ = lean_mk_string_unchecked("_private.Lean.Meta.LetToHave.0.Lean.Meta.LetToHave.visitLambdaLet.finalize", 74, 74);
return v___x_2096_;
}
}
static lean_object* _init_l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; 
v___x_2097_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__2, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__2_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__2);
v___x_2098_ = lean_unsigned_to_nat(37u);
v___x_2099_ = lean_unsigned_to_nat(345u);
v___x_2100_ = lean_obj_once(&l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___closed__0, &l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___closed__0_once, _init_l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___closed__0);
v___x_2101_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__0);
v___x_2102_ = l_mkPanicMessageWithDecl(v___x_2101_, v___x_2100_, v___x_2099_, v___x_2098_, v___x_2097_);
return v___x_2102_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg(lean_object* v_fvars_2103_, lean_object* v_i_2104_, lean_object* v_a_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_){
_start:
{
lean_object* v_zero_2113_; uint8_t v_isZero_2114_; 
v_zero_2113_ = lean_unsigned_to_nat(0u);
v_isZero_2114_ = lean_nat_dec_eq(v_i_2104_, v_zero_2113_);
if (v_isZero_2114_ == 1)
{
lean_object* v___x_2115_; 
lean_dec(v_i_2104_);
v___x_2115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2115_, 0, v_a_2105_);
return v___x_2115_;
}
else
{
lean_object* v_one_2116_; lean_object* v_n_2117_; lean_object* v___y_2119_; lean_object* v___y_2123_; lean_object* v___y_2124_; lean_object* v___y_2128_; lean_object* v___y_2129_; lean_object* v___x_2131_; 
v_one_2116_ = lean_unsigned_to_nat(1u);
v_n_2117_ = lean_nat_sub(v_i_2104_, v_one_2116_);
lean_dec(v_i_2104_);
v___x_2131_ = lean_array_fget_borrowed(v_fvars_2103_, v_n_2117_);
if (lean_obj_tag(v___x_2131_) == 1)
{
lean_object* v_fvarId_2132_; lean_object* v___x_2133_; 
v_fvarId_2132_ = lean_ctor_get(v___x_2131_, 0);
lean_inc(v_fvarId_2132_);
v___x_2133_ = l_Lean_FVarId_findDecl_x3f___redArg(v_fvarId_2132_, v___y_2108_);
if (lean_obj_tag(v___x_2133_) == 0)
{
lean_object* v_a_2134_; 
v_a_2134_ = lean_ctor_get(v___x_2133_, 0);
lean_inc(v_a_2134_);
lean_dec_ref(v___x_2133_);
if (lean_obj_tag(v_a_2134_) == 1)
{
lean_object* v_val_2135_; 
v_val_2135_ = lean_ctor_get(v_a_2134_, 0);
lean_inc(v_val_2135_);
lean_dec_ref(v_a_2134_);
if (lean_obj_tag(v_val_2135_) == 0)
{
lean_object* v_userName_2136_; lean_object* v_type_2137_; uint8_t v_bi_2138_; lean_object* v_expr_2139_; lean_object* v_type_x3f_2140_; lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2161_; 
v_userName_2136_ = lean_ctor_get(v_val_2135_, 2);
lean_inc(v_userName_2136_);
v_type_2137_ = lean_ctor_get(v_val_2135_, 3);
lean_inc_ref(v_type_2137_);
v_bi_2138_ = lean_ctor_get_uint8(v_val_2135_, sizeof(void*)*4);
lean_dec_ref(v_val_2135_);
v_expr_2139_ = lean_ctor_get(v_a_2105_, 0);
v_type_x3f_2140_ = lean_ctor_get(v_a_2105_, 1);
v_isSharedCheck_2161_ = !lean_is_exclusive(v_a_2105_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2142_ = v_a_2105_;
v_isShared_2143_ = v_isSharedCheck_2161_;
goto v_resetjp_2141_;
}
else
{
lean_inc(v_type_x3f_2140_);
lean_inc(v_expr_2139_);
lean_dec(v_a_2105_);
v___x_2142_ = lean_box(0);
v_isShared_2143_ = v_isSharedCheck_2161_;
goto v_resetjp_2141_;
}
v_resetjp_2141_:
{
lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___y_2147_; 
v___x_2144_ = lean_expr_abstract_range(v_type_2137_, v_n_2117_, v_fvars_2103_);
lean_dec_ref(v_type_2137_);
lean_inc_ref(v___x_2144_);
lean_inc(v_userName_2136_);
v___x_2145_ = l_Lean_Expr_lam___override(v_userName_2136_, v___x_2144_, v_expr_2139_, v_bi_2138_);
if (lean_obj_tag(v_type_x3f_2140_) == 0)
{
lean_dec_ref(v___x_2144_);
lean_dec(v_userName_2136_);
v___y_2147_ = v_type_x3f_2140_;
goto v___jp_2146_;
}
else
{
lean_object* v_val_2152_; lean_object* v___x_2154_; uint8_t v_isShared_2155_; uint8_t v_isSharedCheck_2160_; 
v_val_2152_ = lean_ctor_get(v_type_x3f_2140_, 0);
v_isSharedCheck_2160_ = !lean_is_exclusive(v_type_x3f_2140_);
if (v_isSharedCheck_2160_ == 0)
{
v___x_2154_ = v_type_x3f_2140_;
v_isShared_2155_ = v_isSharedCheck_2160_;
goto v_resetjp_2153_;
}
else
{
lean_inc(v_val_2152_);
lean_dec(v_type_x3f_2140_);
v___x_2154_ = lean_box(0);
v_isShared_2155_ = v_isSharedCheck_2160_;
goto v_resetjp_2153_;
}
v_resetjp_2153_:
{
lean_object* v___x_2156_; lean_object* v___x_2158_; 
v___x_2156_ = l_Lean_Expr_forallE___override(v_userName_2136_, v___x_2144_, v_val_2152_, v_bi_2138_);
if (v_isShared_2155_ == 0)
{
lean_ctor_set(v___x_2154_, 0, v___x_2156_);
v___x_2158_ = v___x_2154_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2159_; 
v_reuseFailAlloc_2159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2159_, 0, v___x_2156_);
v___x_2158_ = v_reuseFailAlloc_2159_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
v___y_2147_ = v___x_2158_;
goto v___jp_2146_;
}
}
}
v___jp_2146_:
{
lean_object* v___x_2149_; 
if (v_isShared_2143_ == 0)
{
lean_ctor_set(v___x_2142_, 1, v___y_2147_);
lean_ctor_set(v___x_2142_, 0, v___x_2145_);
v___x_2149_ = v___x_2142_;
goto v_reusejp_2148_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v___x_2145_);
lean_ctor_set(v_reuseFailAlloc_2151_, 1, v___y_2147_);
v___x_2149_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2148_;
}
v_reusejp_2148_:
{
v_i_2104_ = v_n_2117_;
v_a_2105_ = v___x_2149_;
goto _start;
}
}
}
}
else
{
lean_object* v_userName_2162_; lean_object* v_type_2163_; lean_object* v_value_2164_; uint8_t v_nondep_2165_; uint8_t v_nondep_2167_; lean_object* v___x_2177_; 
v_userName_2162_ = lean_ctor_get(v_val_2135_, 2);
lean_inc(v_userName_2162_);
v_type_2163_ = lean_ctor_get(v_val_2135_, 3);
lean_inc_ref(v_type_2163_);
v_value_2164_ = lean_ctor_get(v_val_2135_, 4);
lean_inc_ref(v_value_2164_);
v_nondep_2165_ = lean_ctor_get_uint8(v_val_2135_, sizeof(void*)*5);
lean_dec_ref(v_val_2135_);
v___x_2177_ = l_Lean_Meta_getZetaDeltaFVarIds___redArg(v___y_2109_, v___y_2111_);
if (lean_obj_tag(v___x_2177_) == 0)
{
lean_object* v_a_2178_; uint8_t v___x_2179_; 
v_a_2178_ = lean_ctor_get(v___x_2177_, 0);
lean_inc(v_a_2178_);
lean_dec_ref(v___x_2177_);
v___x_2179_ = 1;
if (v_nondep_2165_ == 0)
{
uint8_t v___x_2180_; 
v___x_2180_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0___redArg(v_fvarId_2132_, v_a_2178_);
lean_dec(v_a_2178_);
if (v___x_2180_ == 0)
{
lean_object* v___x_2181_; 
v___x_2181_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount___redArg(v___y_2107_, v___y_2111_);
lean_dec_ref(v___x_2181_);
v_nondep_2167_ = v___x_2179_;
goto v___jp_2166_;
}
else
{
v_nondep_2167_ = v_nondep_2165_;
goto v___jp_2166_;
}
}
else
{
lean_dec(v_a_2178_);
v_nondep_2167_ = v___x_2179_;
goto v___jp_2166_;
}
}
else
{
lean_object* v_a_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2189_; 
lean_dec_ref(v_value_2164_);
lean_dec_ref(v_type_2163_);
lean_dec(v_userName_2162_);
lean_dec(v_n_2117_);
lean_dec_ref(v_a_2105_);
v_a_2182_ = lean_ctor_get(v___x_2177_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2177_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2184_ = v___x_2177_;
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_a_2182_);
lean_dec(v___x_2177_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2187_; 
if (v_isShared_2185_ == 0)
{
v___x_2187_ = v___x_2184_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v_a_2182_);
v___x_2187_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
return v___x_2187_;
}
}
}
v___jp_2166_:
{
lean_object* v_expr_2168_; lean_object* v_type_x3f_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
v_expr_2168_ = lean_ctor_get(v_a_2105_, 0);
lean_inc_ref(v_expr_2168_);
v_type_x3f_2169_ = lean_ctor_get(v_a_2105_, 1);
lean_inc(v_type_x3f_2169_);
lean_dec_ref(v_a_2105_);
v___x_2170_ = lean_expr_abstract_range(v_type_2163_, v_n_2117_, v_fvars_2103_);
lean_dec_ref(v_type_2163_);
v___x_2171_ = lean_expr_abstract_range(v_value_2164_, v_n_2117_, v_fvars_2103_);
lean_dec_ref(v_value_2164_);
lean_inc_ref(v___x_2171_);
lean_inc_ref(v___x_2170_);
lean_inc(v_userName_2162_);
v___x_2172_ = l_Lean_Expr_letE___override(v_userName_2162_, v___x_2170_, v___x_2171_, v_expr_2168_, v_nondep_2167_);
if (lean_obj_tag(v_type_x3f_2169_) == 0)
{
lean_dec_ref(v___x_2171_);
lean_dec_ref(v___x_2170_);
lean_dec(v_userName_2162_);
v___y_2123_ = v___x_2172_;
v___y_2124_ = v_type_x3f_2169_;
goto v___jp_2122_;
}
else
{
lean_object* v_val_2173_; uint8_t v___x_2174_; 
v_val_2173_ = lean_ctor_get(v_type_x3f_2169_, 0);
lean_inc(v_val_2173_);
lean_dec_ref(v_type_x3f_2169_);
v___x_2174_ = lean_expr_has_loose_bvar(v_val_2173_, v_zero_2113_);
if (v___x_2174_ == 0)
{
lean_object* v___x_2175_; 
lean_dec_ref(v___x_2171_);
lean_dec_ref(v___x_2170_);
lean_dec(v_userName_2162_);
v___x_2175_ = lean_expr_lower_loose_bvars(v_val_2173_, v_one_2116_, v_one_2116_);
lean_dec(v_val_2173_);
v___y_2128_ = v___x_2172_;
v___y_2129_ = v___x_2175_;
goto v___jp_2127_;
}
else
{
lean_object* v___x_2176_; 
v___x_2176_ = l_Lean_Expr_letE___override(v_userName_2162_, v___x_2170_, v___x_2171_, v_val_2173_, v_nondep_2167_);
v___y_2128_ = v___x_2172_;
v___y_2129_ = v___x_2176_;
goto v___jp_2127_;
}
}
}
}
}
else
{
lean_object* v___x_2190_; 
lean_dec(v_a_2134_);
lean_dec_ref(v_a_2105_);
lean_inc(v_fvarId_2132_);
v___x_2190_ = l_Lean_FVarId_throwUnknown___redArg(v_fvarId_2132_, v___y_2110_, v___y_2111_);
v___y_2119_ = v___x_2190_;
goto v___jp_2118_;
}
}
else
{
lean_object* v_a_2191_; lean_object* v___x_2193_; uint8_t v_isShared_2194_; uint8_t v_isSharedCheck_2198_; 
lean_dec(v_n_2117_);
lean_dec_ref(v_a_2105_);
v_a_2191_ = lean_ctor_get(v___x_2133_, 0);
v_isSharedCheck_2198_ = !lean_is_exclusive(v___x_2133_);
if (v_isSharedCheck_2198_ == 0)
{
v___x_2193_ = v___x_2133_;
v_isShared_2194_ = v_isSharedCheck_2198_;
goto v_resetjp_2192_;
}
else
{
lean_inc(v_a_2191_);
lean_dec(v___x_2133_);
v___x_2193_ = lean_box(0);
v_isShared_2194_ = v_isSharedCheck_2198_;
goto v_resetjp_2192_;
}
v_resetjp_2192_:
{
lean_object* v___x_2196_; 
if (v_isShared_2194_ == 0)
{
v___x_2196_ = v___x_2193_;
goto v_reusejp_2195_;
}
else
{
lean_object* v_reuseFailAlloc_2197_; 
v_reuseFailAlloc_2197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2197_, 0, v_a_2191_);
v___x_2196_ = v_reuseFailAlloc_2197_;
goto v_reusejp_2195_;
}
v_reusejp_2195_:
{
return v___x_2196_;
}
}
}
}
else
{
lean_object* v___x_2199_; lean_object* v___x_2200_; 
lean_dec_ref(v_a_2105_);
v___x_2199_ = lean_obj_once(&l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___closed__1, &l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___closed__1_once, _init_l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___closed__1);
v___x_2200_ = l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1(v___x_2199_, v___y_2106_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_);
v___y_2119_ = v___x_2200_;
goto v___jp_2118_;
}
v___jp_2118_:
{
if (lean_obj_tag(v___y_2119_) == 0)
{
lean_object* v_a_2120_; 
v_a_2120_ = lean_ctor_get(v___y_2119_, 0);
lean_inc(v_a_2120_);
lean_dec_ref(v___y_2119_);
v_i_2104_ = v_n_2117_;
v_a_2105_ = v_a_2120_;
goto _start;
}
else
{
lean_dec(v_n_2117_);
return v___y_2119_;
}
}
v___jp_2122_:
{
lean_object* v___x_2125_; 
v___x_2125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2125_, 0, v___y_2123_);
lean_ctor_set(v___x_2125_, 1, v___y_2124_);
v_i_2104_ = v_n_2117_;
v_a_2105_ = v___x_2125_;
goto _start;
}
v___jp_2127_:
{
lean_object* v___x_2130_; 
v___x_2130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2130_, 0, v___y_2129_);
v___y_2123_ = v___y_2128_;
v___y_2124_ = v___x_2130_;
goto v___jp_2122_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___boxed(lean_object* v_fvars_2201_, lean_object* v_i_2202_, lean_object* v_a_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_){
_start:
{
lean_object* v_res_2211_; 
v_res_2211_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg(v_fvars_2201_, v_i_2202_, v_a_2203_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_, v___y_2209_);
lean_dec(v___y_2209_);
lean_dec_ref(v___y_2208_);
lean_dec(v___y_2207_);
lean_dec_ref(v___y_2206_);
lean_dec(v___y_2205_);
lean_dec(v___y_2204_);
lean_dec_ref(v_fvars_2201_);
return v_res_2211_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__1(lean_object* v_a_2212_, lean_object* v_a_2213_){
_start:
{
if (lean_obj_tag(v_a_2212_) == 0)
{
lean_object* v___x_2214_; 
v___x_2214_ = l_List_reverse___redArg(v_a_2213_);
return v___x_2214_;
}
else
{
lean_object* v_head_2215_; lean_object* v_tail_2216_; lean_object* v___x_2218_; uint8_t v_isShared_2219_; uint8_t v_isSharedCheck_2225_; 
v_head_2215_ = lean_ctor_get(v_a_2212_, 0);
v_tail_2216_ = lean_ctor_get(v_a_2212_, 1);
v_isSharedCheck_2225_ = !lean_is_exclusive(v_a_2212_);
if (v_isSharedCheck_2225_ == 0)
{
v___x_2218_ = v_a_2212_;
v_isShared_2219_ = v_isSharedCheck_2225_;
goto v_resetjp_2217_;
}
else
{
lean_inc(v_tail_2216_);
lean_inc(v_head_2215_);
lean_dec(v_a_2212_);
v___x_2218_ = lean_box(0);
v_isShared_2219_ = v_isSharedCheck_2225_;
goto v_resetjp_2217_;
}
v_resetjp_2217_:
{
lean_object* v___x_2220_; lean_object* v___x_2222_; 
v___x_2220_ = l_Lean_MessageData_ofExpr(v_head_2215_);
if (v_isShared_2219_ == 0)
{
lean_ctor_set(v___x_2218_, 1, v_a_2213_);
lean_ctor_set(v___x_2218_, 0, v___x_2220_);
v___x_2222_ = v___x_2218_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2224_; 
v_reuseFailAlloc_2224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2224_, 0, v___x_2220_);
lean_ctor_set(v_reuseFailAlloc_2224_, 1, v_a_2213_);
v___x_2222_ = v_reuseFailAlloc_2224_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
v_a_2212_ = v_tail_2216_;
v_a_2213_ = v___x_2222_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0(void){
_start:
{
lean_object* v___x_2226_; 
v___x_2226_ = lean_mk_string_unchecked("Meta", 4, 4);
return v___x_2226_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__1(void){
_start:
{
lean_object* v___x_2227_; 
v___x_2227_ = lean_mk_string_unchecked("letToHave", 9, 9);
return v___x_2227_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__2(void){
_start:
{
lean_object* v___x_2228_; 
v___x_2228_ = lean_mk_string_unchecked("debug", 5, 5);
return v___x_2228_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3(void){
_start:
{
lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v_cls_2232_; 
v___x_2229_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__2, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__2_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__2);
v___x_2230_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__1, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__1_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__1);
v___x_2231_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0);
v_cls_2232_ = l_Lean_Name_mkStr3(v___x_2231_, v___x_2230_, v___x_2229_);
return v_cls_2232_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__4(void){
_start:
{
lean_object* v___x_2233_; 
v___x_2233_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_2233_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__5(void){
_start:
{
lean_object* v___x_2234_; lean_object* v___x_2235_; 
v___x_2234_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__4, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__4_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__4);
v___x_2235_ = l_Lean_Name_mkStr1(v___x_2234_);
return v___x_2235_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__6(void){
_start:
{
lean_object* v_cls_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; 
v_cls_2236_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3);
v___x_2237_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__5, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__5_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__5);
v___x_2238_ = l_Lean_Name_append(v___x_2237_, v_cls_2236_);
return v___x_2238_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__7(void){
_start:
{
lean_object* v___x_2239_; 
v___x_2239_ = lean_mk_string_unchecked("finalize ", 9, 9);
return v___x_2239_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__8(void){
_start:
{
lean_object* v___x_2240_; lean_object* v___x_2241_; 
v___x_2240_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__7, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__7_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__7);
v___x_2241_ = l_Lean_stringToMessageData(v___x_2240_);
return v___x_2241_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__9(void){
_start:
{
lean_object* v___x_2242_; 
v___x_2242_ = lean_mk_string_unchecked(",", 1, 1);
return v___x_2242_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__10(void){
_start:
{
lean_object* v___x_2243_; lean_object* v___x_2244_; 
v___x_2243_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__9, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__9_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__9);
v___x_2244_ = l_Lean_stringToMessageData(v___x_2243_);
return v___x_2244_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__11(void){
_start:
{
lean_object* v___x_2245_; 
v___x_2245_ = lean_mk_string_unchecked(" : ", 3, 3);
return v___x_2245_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__12(void){
_start:
{
lean_object* v___x_2246_; lean_object* v___x_2247_; 
v___x_2246_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__11, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__11_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__11);
v___x_2247_ = l_Lean_stringToMessageData(v___x_2246_);
return v___x_2247_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__13(void){
_start:
{
lean_object* v___x_2248_; 
v___x_2248_ = lean_mk_string_unchecked("<not-available>", 15, 15);
return v___x_2248_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__14(void){
_start:
{
lean_object* v___x_2249_; lean_object* v___x_2250_; 
v___x_2249_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__13, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__13_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__13);
v___x_2250_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2250_, 0, v___x_2249_);
return v___x_2250_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__15(void){
_start:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; 
v___x_2251_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__14, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__14_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__14);
v___x_2252_ = l_Lean_MessageData_ofFormat(v___x_2251_);
return v___x_2252_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize(lean_object* v_fvars_2253_, lean_object* v_body_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_, lean_object* v_a_2257_, lean_object* v_a_2258_, lean_object* v_a_2259_, lean_object* v_a_2260_){
_start:
{
lean_object* v___y_2263_; lean_object* v___y_2264_; lean_object* v___y_2265_; lean_object* v___y_2266_; lean_object* v___y_2267_; lean_object* v___y_2268_; lean_object* v___y_2269_; lean_object* v___y_2270_; lean_object* v___y_2275_; lean_object* v___y_2276_; lean_object* v___y_2277_; lean_object* v___y_2278_; lean_object* v___y_2279_; lean_object* v___y_2280_; lean_object* v_options_2293_; uint8_t v_hasTrace_2294_; 
v_options_2293_ = lean_ctor_get(v_a_2259_, 2);
v_hasTrace_2294_ = lean_ctor_get_uint8(v_options_2293_, sizeof(void*)*1);
if (v_hasTrace_2294_ == 0)
{
v___y_2275_ = v_a_2255_;
v___y_2276_ = v_a_2256_;
v___y_2277_ = v_a_2257_;
v___y_2278_ = v_a_2258_;
v___y_2279_ = v_a_2259_;
v___y_2280_ = v_a_2260_;
goto v___jp_2274_;
}
else
{
lean_object* v_inheritedTraceOptions_2295_; lean_object* v_cls_2296_; lean_object* v___x_2297_; uint8_t v___x_2298_; 
v_inheritedTraceOptions_2295_ = lean_ctor_get(v_a_2259_, 13);
v_cls_2296_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3);
v___x_2297_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__6, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__6_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__6);
v___x_2298_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2295_, v_options_2293_, v___x_2297_);
if (v___x_2298_ == 0)
{
v___y_2275_ = v_a_2255_;
v___y_2276_ = v_a_2256_;
v___y_2277_ = v_a_2257_;
v___y_2278_ = v_a_2258_;
v___y_2279_ = v_a_2259_;
v___y_2280_ = v_a_2260_;
goto v___jp_2274_;
}
else
{
lean_object* v_expr_2299_; lean_object* v_type_x3f_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___y_2313_; 
v_expr_2299_ = lean_ctor_get(v_body_2254_, 0);
v_type_x3f_2300_ = lean_ctor_get(v_body_2254_, 1);
v___x_2301_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__8, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__8_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__8);
lean_inc_ref(v_fvars_2253_);
v___x_2302_ = lean_array_to_list(v_fvars_2253_);
v___x_2303_ = lean_box(0);
v___x_2304_ = l_List_mapTR_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__1(v___x_2302_, v___x_2303_);
v___x_2305_ = l_Lean_MessageData_ofList(v___x_2304_);
v___x_2306_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2306_, 0, v___x_2301_);
lean_ctor_set(v___x_2306_, 1, v___x_2305_);
v___x_2307_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__10, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__10_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__10);
v___x_2308_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2308_, 0, v___x_2306_);
lean_ctor_set(v___x_2308_, 1, v___x_2307_);
lean_inc_ref(v_expr_2299_);
v___x_2309_ = l_Lean_MessageData_ofExpr(v_expr_2299_);
v___x_2310_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__12, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__12_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__12);
v___x_2311_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2311_, 0, v___x_2309_);
lean_ctor_set(v___x_2311_, 1, v___x_2310_);
if (lean_obj_tag(v_type_x3f_2300_) == 0)
{
lean_object* v___x_2326_; 
v___x_2326_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__15, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__15_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__15);
v___y_2313_ = v___x_2326_;
goto v___jp_2312_;
}
else
{
lean_object* v_val_2327_; lean_object* v___x_2328_; 
v_val_2327_ = lean_ctor_get(v_type_x3f_2300_, 0);
lean_inc(v_val_2327_);
v___x_2328_ = l_Lean_MessageData_ofExpr(v_val_2327_);
v___y_2313_ = v___x_2328_;
goto v___jp_2312_;
}
v___jp_2312_:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; 
v___x_2314_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2314_, 0, v___x_2311_);
lean_ctor_set(v___x_2314_, 1, v___y_2313_);
v___x_2315_ = l_Lean_indentD(v___x_2314_);
v___x_2316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2316_, 0, v___x_2308_);
lean_ctor_set(v___x_2316_, 1, v___x_2315_);
v___x_2317_ = l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg(v_cls_2296_, v___x_2316_, v_a_2257_, v_a_2258_, v_a_2259_, v_a_2260_);
if (lean_obj_tag(v___x_2317_) == 0)
{
lean_dec_ref(v___x_2317_);
v___y_2275_ = v_a_2255_;
v___y_2276_ = v_a_2256_;
v___y_2277_ = v_a_2257_;
v___y_2278_ = v_a_2258_;
v___y_2279_ = v_a_2259_;
v___y_2280_ = v_a_2260_;
goto v___jp_2274_;
}
else
{
lean_object* v_a_2318_; lean_object* v___x_2320_; uint8_t v_isShared_2321_; uint8_t v_isSharedCheck_2325_; 
lean_dec_ref(v_body_2254_);
lean_dec_ref(v_fvars_2253_);
v_a_2318_ = lean_ctor_get(v___x_2317_, 0);
v_isSharedCheck_2325_ = !lean_is_exclusive(v___x_2317_);
if (v_isSharedCheck_2325_ == 0)
{
v___x_2320_ = v___x_2317_;
v_isShared_2321_ = v_isSharedCheck_2325_;
goto v_resetjp_2319_;
}
else
{
lean_inc(v_a_2318_);
lean_dec(v___x_2317_);
v___x_2320_ = lean_box(0);
v_isShared_2321_ = v_isSharedCheck_2325_;
goto v_resetjp_2319_;
}
v_resetjp_2319_:
{
lean_object* v___x_2323_; 
if (v_isShared_2321_ == 0)
{
v___x_2323_ = v___x_2320_;
goto v_reusejp_2322_;
}
else
{
lean_object* v_reuseFailAlloc_2324_; 
v_reuseFailAlloc_2324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2324_, 0, v_a_2318_);
v___x_2323_ = v_reuseFailAlloc_2324_;
goto v_reusejp_2322_;
}
v_reusejp_2322_:
{
return v___x_2323_;
}
}
}
}
}
}
v___jp_2262_:
{
lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; 
v___x_2271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2271_, 0, v___y_2269_);
lean_ctor_set(v___x_2271_, 1, v___y_2270_);
v___x_2272_ = lean_array_get_size(v_fvars_2253_);
v___x_2273_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg(v_fvars_2253_, v___x_2272_, v___x_2271_, v___y_2266_, v___y_2267_, v___y_2268_, v___y_2263_, v___y_2265_, v___y_2264_);
lean_dec_ref(v_fvars_2253_);
return v___x_2273_;
}
v___jp_2274_:
{
lean_object* v_expr_2281_; lean_object* v_type_x3f_2282_; lean_object* v___x_2283_; 
v_expr_2281_ = lean_ctor_get(v_body_2254_, 0);
lean_inc_ref(v_expr_2281_);
v_type_x3f_2282_ = lean_ctor_get(v_body_2254_, 1);
lean_inc(v_type_x3f_2282_);
lean_dec_ref(v_body_2254_);
v___x_2283_ = lean_expr_abstract(v_expr_2281_, v_fvars_2253_);
lean_dec_ref(v_expr_2281_);
if (lean_obj_tag(v_type_x3f_2282_) == 0)
{
v___y_2263_ = v___y_2278_;
v___y_2264_ = v___y_2280_;
v___y_2265_ = v___y_2279_;
v___y_2266_ = v___y_2275_;
v___y_2267_ = v___y_2276_;
v___y_2268_ = v___y_2277_;
v___y_2269_ = v___x_2283_;
v___y_2270_ = v_type_x3f_2282_;
goto v___jp_2262_;
}
else
{
lean_object* v_val_2284_; lean_object* v___x_2286_; uint8_t v_isShared_2287_; uint8_t v_isSharedCheck_2292_; 
v_val_2284_ = lean_ctor_get(v_type_x3f_2282_, 0);
v_isSharedCheck_2292_ = !lean_is_exclusive(v_type_x3f_2282_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2286_ = v_type_x3f_2282_;
v_isShared_2287_ = v_isSharedCheck_2292_;
goto v_resetjp_2285_;
}
else
{
lean_inc(v_val_2284_);
lean_dec(v_type_x3f_2282_);
v___x_2286_ = lean_box(0);
v_isShared_2287_ = v_isSharedCheck_2292_;
goto v_resetjp_2285_;
}
v_resetjp_2285_:
{
lean_object* v___x_2288_; lean_object* v___x_2290_; 
v___x_2288_ = lean_expr_abstract(v_val_2284_, v_fvars_2253_);
lean_dec(v_val_2284_);
if (v_isShared_2287_ == 0)
{
lean_ctor_set(v___x_2286_, 0, v___x_2288_);
v___x_2290_ = v___x_2286_;
goto v_reusejp_2289_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v___x_2288_);
v___x_2290_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2289_;
}
v_reusejp_2289_:
{
v___y_2263_ = v___y_2278_;
v___y_2264_ = v___y_2280_;
v___y_2265_ = v___y_2279_;
v___y_2266_ = v___y_2275_;
v___y_2267_ = v___y_2276_;
v___y_2268_ = v___y_2277_;
v___y_2269_ = v___x_2283_;
v___y_2270_ = v___x_2290_;
goto v___jp_2262_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___boxed(lean_object* v_fvars_2329_, lean_object* v_body_2330_, lean_object* v_a_2331_, lean_object* v_a_2332_, lean_object* v_a_2333_, lean_object* v_a_2334_, lean_object* v_a_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_){
_start:
{
lean_object* v_res_2338_; 
v_res_2338_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize(v_fvars_2329_, v_body_2330_, v_a_2331_, v_a_2332_, v_a_2333_, v_a_2334_, v_a_2335_, v_a_2336_);
lean_dec(v_a_2336_);
lean_dec_ref(v_a_2335_);
lean_dec(v_a_2334_);
lean_dec_ref(v_a_2333_);
lean_dec(v_a_2332_);
lean_dec(v_a_2331_);
return v_res_2338_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0(lean_object* v_fvars_2339_, lean_object* v_n_2340_, lean_object* v_i_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_){
_start:
{
lean_object* v___x_2351_; 
v___x_2351_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg(v_fvars_2339_, v_i_2341_, v_a_2343_, v___y_2344_, v___y_2345_, v___y_2346_, v___y_2347_, v___y_2348_, v___y_2349_);
return v___x_2351_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___boxed(lean_object* v_fvars_2352_, lean_object* v_n_2353_, lean_object* v_i_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_){
_start:
{
lean_object* v_res_2364_; 
v_res_2364_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0(v_fvars_2352_, v_n_2353_, v_i_2354_, v_a_2355_, v_a_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_, v___y_2362_);
lean_dec(v___y_2362_);
lean_dec_ref(v___y_2361_);
lean_dec(v___y_2360_);
lean_dec_ref(v___y_2359_);
lean_dec(v___y_2358_);
lean_dec(v___y_2357_);
lean_dec(v_n_2353_);
lean_dec_ref(v_fvars_2352_);
return v_res_2364_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2(lean_object* v_cls_2365_, lean_object* v_msg_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_){
_start:
{
lean_object* v___x_2374_; 
v___x_2374_ = l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg(v_cls_2365_, v_msg_2366_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_);
return v___x_2374_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___boxed(lean_object* v_cls_2375_, lean_object* v_msg_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_){
_start:
{
lean_object* v_res_2384_; 
v_res_2384_ = l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2(v_cls_2375_, v_msg_2376_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_, v___y_2381_, v___y_2382_);
lean_dec(v___y_2382_);
lean_dec_ref(v___y_2381_);
lean_dec(v___y_2380_);
lean_dec_ref(v___y_2379_);
lean_dec(v___y_2378_);
lean_dec(v___y_2377_);
return v_res_2384_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2385_; 
v___x_2385_ = lean_mk_string_unchecked("invalid projection", 18, 18);
return v___x_2385_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2386_; lean_object* v___x_2387_; 
v___x_2386_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__0);
v___x_2387_ = l_Lean_stringToMessageData(v___x_2386_);
return v___x_2387_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2388_; 
v___x_2388_ = lean_mk_string_unchecked("\nfrom type", 10, 10);
return v___x_2388_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2389_; lean_object* v___x_2390_; 
v___x_2389_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__2, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__2_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__2);
v___x_2390_ = l_Lean_stringToMessageData(v___x_2389_);
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0(lean_object* v_struct_2391_, lean_object* v_structName_2392_, lean_object* v_idx_2393_, lean_object* v_a_2394_, lean_object* v_00_u03b1_2395_, lean_object* v_x_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_){
_start:
{
lean_object* v_expr_2404_; lean_object* v___x_2406_; uint8_t v_isShared_2407_; uint8_t v_isSharedCheck_2419_; 
v_expr_2404_ = lean_ctor_get(v_struct_2391_, 0);
v_isSharedCheck_2419_ = !lean_is_exclusive(v_struct_2391_);
if (v_isSharedCheck_2419_ == 0)
{
lean_object* v_unused_2420_; 
v_unused_2420_ = lean_ctor_get(v_struct_2391_, 1);
lean_dec(v_unused_2420_);
v___x_2406_ = v_struct_2391_;
v_isShared_2407_ = v_isSharedCheck_2419_;
goto v_resetjp_2405_;
}
else
{
lean_inc(v_expr_2404_);
lean_dec(v_struct_2391_);
v___x_2406_ = lean_box(0);
v_isShared_2407_ = v_isSharedCheck_2419_;
goto v_resetjp_2405_;
}
v_resetjp_2405_:
{
lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2412_; 
v___x_2408_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__1, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__1_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__1);
v___x_2409_ = l_Lean_mkProj(v_structName_2392_, v_idx_2393_, v_expr_2404_);
v___x_2410_ = l_Lean_indentExpr(v___x_2409_);
if (v_isShared_2407_ == 0)
{
lean_ctor_set_tag(v___x_2406_, 7);
lean_ctor_set(v___x_2406_, 1, v___x_2410_);
lean_ctor_set(v___x_2406_, 0, v___x_2408_);
v___x_2412_ = v___x_2406_;
goto v_reusejp_2411_;
}
else
{
lean_object* v_reuseFailAlloc_2418_; 
v_reuseFailAlloc_2418_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2418_, 0, v___x_2408_);
lean_ctor_set(v_reuseFailAlloc_2418_, 1, v___x_2410_);
v___x_2412_ = v_reuseFailAlloc_2418_;
goto v_reusejp_2411_;
}
v_reusejp_2411_:
{
lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; 
v___x_2413_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__3);
v___x_2414_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2414_, 0, v___x_2412_);
lean_ctor_set(v___x_2414_, 1, v___x_2413_);
v___x_2415_ = l_Lean_indentExpr(v_a_2394_);
v___x_2416_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2416_, 0, v___x_2414_);
lean_ctor_set(v___x_2416_, 1, v___x_2415_);
v___x_2417_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___redArg(v___x_2416_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_);
return v___x_2417_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___boxed(lean_object* v_struct_2421_, lean_object* v_structName_2422_, lean_object* v_idx_2423_, lean_object* v_a_2424_, lean_object* v_00_u03b1_2425_, lean_object* v_x_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_){
_start:
{
lean_object* v_res_2434_; 
v_res_2434_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0(v_struct_2421_, v_structName_2422_, v_idx_2423_, v_a_2424_, v_00_u03b1_2425_, v_x_2426_, v___y_2427_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_, v___y_2432_);
lean_dec(v___y_2432_);
lean_dec_ref(v___y_2431_);
lean_dec(v___y_2430_);
lean_dec_ref(v___y_2429_);
lean_dec(v___y_2428_);
lean_dec(v___y_2427_);
return v_res_2434_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__0(lean_object* v_struct_2435_, lean_object* v_structName_2436_, lean_object* v_idx_2437_, lean_object* v_a_2438_, lean_object* v_00_u03b1_2439_, lean_object* v_x_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_){
_start:
{
lean_object* v_expr_2448_; lean_object* v___x_2450_; uint8_t v_isShared_2451_; uint8_t v_isSharedCheck_2463_; 
v_expr_2448_ = lean_ctor_get(v_struct_2435_, 0);
v_isSharedCheck_2463_ = !lean_is_exclusive(v_struct_2435_);
if (v_isSharedCheck_2463_ == 0)
{
lean_object* v_unused_2464_; 
v_unused_2464_ = lean_ctor_get(v_struct_2435_, 1);
lean_dec(v_unused_2464_);
v___x_2450_ = v_struct_2435_;
v_isShared_2451_ = v_isSharedCheck_2463_;
goto v_resetjp_2449_;
}
else
{
lean_inc(v_expr_2448_);
lean_dec(v_struct_2435_);
v___x_2450_ = lean_box(0);
v_isShared_2451_ = v_isSharedCheck_2463_;
goto v_resetjp_2449_;
}
v_resetjp_2449_:
{
lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2456_; 
v___x_2452_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__1, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__1_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__1);
v___x_2453_ = l_Lean_mkProj(v_structName_2436_, v_idx_2437_, v_expr_2448_);
v___x_2454_ = l_Lean_indentExpr(v___x_2453_);
if (v_isShared_2451_ == 0)
{
lean_ctor_set_tag(v___x_2450_, 7);
lean_ctor_set(v___x_2450_, 1, v___x_2454_);
lean_ctor_set(v___x_2450_, 0, v___x_2452_);
v___x_2456_ = v___x_2450_;
goto v_reusejp_2455_;
}
else
{
lean_object* v_reuseFailAlloc_2462_; 
v_reuseFailAlloc_2462_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2462_, 0, v___x_2452_);
lean_ctor_set(v_reuseFailAlloc_2462_, 1, v___x_2454_);
v___x_2456_ = v_reuseFailAlloc_2462_;
goto v_reusejp_2455_;
}
v_reusejp_2455_:
{
lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; 
v___x_2457_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__3);
v___x_2458_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2458_, 0, v___x_2456_);
lean_ctor_set(v___x_2458_, 1, v___x_2457_);
v___x_2459_ = l_Lean_indentExpr(v_a_2438_);
v___x_2460_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2460_, 0, v___x_2458_);
lean_ctor_set(v___x_2460_, 1, v___x_2459_);
v___x_2461_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___redArg(v___x_2460_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_);
return v___x_2461_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__0___boxed(lean_object* v_struct_2465_, lean_object* v_structName_2466_, lean_object* v_idx_2467_, lean_object* v_a_2468_, lean_object* v_00_u03b1_2469_, lean_object* v_x_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_){
_start:
{
lean_object* v_res_2478_; 
v_res_2478_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__0(v_struct_2465_, v_structName_2466_, v_idx_2467_, v_a_2468_, v_00_u03b1_2469_, v_x_2470_, v___y_2471_, v___y_2472_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_);
lean_dec(v___y_2476_);
lean_dec_ref(v___y_2475_);
lean_dec(v___y_2474_);
lean_dec_ref(v___y_2473_);
lean_dec(v___y_2472_);
lean_dec(v___y_2471_);
return v_res_2478_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__1(lean_object* v_a_2479_, lean_object* v_fst_2480_, lean_object* v_struct_2481_, lean_object* v_structName_2482_, uint8_t v_a_2483_, lean_object* v___f_2484_, lean_object* v_snd_2485_, lean_object* v_____r_2486_, lean_object* v_ctorType_2487_, lean_object* v_j_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_){
_start:
{
if (lean_obj_tag(v_ctorType_2487_) == 7)
{
lean_object* v_binderType_2496_; lean_object* v_body_2497_; lean_object* v___x_2498_; 
lean_dec(v_snd_2485_);
v_binderType_2496_ = lean_ctor_get(v_ctorType_2487_, 1);
lean_inc_ref(v_binderType_2496_);
v_body_2497_ = lean_ctor_get(v_ctorType_2487_, 2);
lean_inc_ref(v_body_2497_);
lean_dec_ref(v_ctorType_2487_);
v___x_2498_ = lean_expr_instantiate_rev_range(v_binderType_2496_, v_j_2488_, v_a_2479_, v_fst_2480_);
lean_dec_ref(v_binderType_2496_);
if (v_a_2483_ == 0)
{
lean_dec_ref(v___f_2484_);
goto v___jp_2499_;
}
else
{
lean_object* v___x_2515_; 
lean_inc_ref(v___x_2498_);
v___x_2515_ = l_Lean_Meta_isProp(v___x_2498_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_);
if (lean_obj_tag(v___x_2515_) == 0)
{
lean_object* v_a_2516_; uint8_t v___x_2517_; 
v_a_2516_ = lean_ctor_get(v___x_2515_, 0);
lean_inc(v_a_2516_);
lean_dec_ref(v___x_2515_);
v___x_2517_ = lean_unbox(v_a_2516_);
lean_dec(v_a_2516_);
if (v___x_2517_ == 0)
{
lean_object* v___x_2518_; lean_object* v___x_2519_; 
v___x_2518_ = lean_box(0);
lean_inc(v___y_2494_);
lean_inc_ref(v___y_2493_);
lean_inc(v___y_2492_);
lean_inc_ref(v___y_2491_);
lean_inc(v___y_2490_);
lean_inc(v___y_2489_);
v___x_2519_ = lean_apply_9(v___f_2484_, lean_box(0), v___x_2518_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_, lean_box(0));
if (lean_obj_tag(v___x_2519_) == 0)
{
lean_dec_ref(v___x_2519_);
goto v___jp_2499_;
}
else
{
lean_object* v_a_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2527_; 
lean_dec_ref(v___x_2498_);
lean_dec_ref(v_body_2497_);
lean_dec(v_structName_2482_);
lean_dec_ref(v_struct_2481_);
lean_dec(v_fst_2480_);
lean_dec(v_a_2479_);
v_a_2520_ = lean_ctor_get(v___x_2519_, 0);
v_isSharedCheck_2527_ = !lean_is_exclusive(v___x_2519_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2522_ = v___x_2519_;
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_a_2520_);
lean_dec(v___x_2519_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___x_2525_; 
if (v_isShared_2523_ == 0)
{
v___x_2525_ = v___x_2522_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v_a_2520_);
v___x_2525_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
return v___x_2525_;
}
}
}
}
else
{
lean_dec_ref(v___f_2484_);
goto v___jp_2499_;
}
}
else
{
lean_object* v_a_2528_; lean_object* v___x_2530_; uint8_t v_isShared_2531_; uint8_t v_isSharedCheck_2535_; 
lean_dec_ref(v___x_2498_);
lean_dec_ref(v_body_2497_);
lean_dec_ref(v___f_2484_);
lean_dec(v_structName_2482_);
lean_dec_ref(v_struct_2481_);
lean_dec(v_fst_2480_);
lean_dec(v_a_2479_);
v_a_2528_ = lean_ctor_get(v___x_2515_, 0);
v_isSharedCheck_2535_ = !lean_is_exclusive(v___x_2515_);
if (v_isSharedCheck_2535_ == 0)
{
v___x_2530_ = v___x_2515_;
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
else
{
lean_inc(v_a_2528_);
lean_dec(v___x_2515_);
v___x_2530_ = lean_box(0);
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
v_resetjp_2529_:
{
lean_object* v___x_2533_; 
if (v_isShared_2531_ == 0)
{
v___x_2533_ = v___x_2530_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v_a_2528_);
v___x_2533_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
return v___x_2533_;
}
}
}
}
v___jp_2499_:
{
lean_object* v_expr_2500_; lean_object* v___x_2502_; uint8_t v_isShared_2503_; uint8_t v_isSharedCheck_2513_; 
v_expr_2500_ = lean_ctor_get(v_struct_2481_, 0);
v_isSharedCheck_2513_ = !lean_is_exclusive(v_struct_2481_);
if (v_isSharedCheck_2513_ == 0)
{
lean_object* v_unused_2514_; 
v_unused_2514_ = lean_ctor_get(v_struct_2481_, 1);
lean_dec(v_unused_2514_);
v___x_2502_ = v_struct_2481_;
v_isShared_2503_ = v_isSharedCheck_2513_;
goto v_resetjp_2501_;
}
else
{
lean_inc(v_expr_2500_);
lean_dec(v_struct_2481_);
v___x_2502_ = lean_box(0);
v_isShared_2503_ = v_isSharedCheck_2513_;
goto v_resetjp_2501_;
}
v_resetjp_2501_:
{
lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2507_; 
v___x_2504_ = l_Lean_Expr_proj___override(v_structName_2482_, v_a_2479_, v_expr_2500_);
v___x_2505_ = lean_array_push(v_fst_2480_, v___x_2504_);
lean_inc(v_j_2488_);
if (v_isShared_2503_ == 0)
{
lean_ctor_set(v___x_2502_, 1, v___x_2498_);
lean_ctor_set(v___x_2502_, 0, v_j_2488_);
v___x_2507_ = v___x_2502_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v_j_2488_);
lean_ctor_set(v_reuseFailAlloc_2512_, 1, v___x_2498_);
v___x_2507_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; 
v___x_2508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2508_, 0, v___x_2505_);
lean_ctor_set(v___x_2508_, 1, v___x_2507_);
v___x_2509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2509_, 0, v_body_2497_);
lean_ctor_set(v___x_2509_, 1, v___x_2508_);
v___x_2510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2510_, 0, v___x_2509_);
v___x_2511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2511_, 0, v___x_2510_);
return v___x_2511_;
}
}
}
}
else
{
lean_object* v___x_2536_; lean_object* v___x_2537_; 
lean_dec(v_structName_2482_);
lean_dec_ref(v_struct_2481_);
lean_dec(v_a_2479_);
v___x_2536_ = lean_box(0);
lean_inc(v___y_2494_);
lean_inc_ref(v___y_2493_);
lean_inc(v___y_2492_);
lean_inc_ref(v___y_2491_);
lean_inc(v___y_2490_);
lean_inc(v___y_2489_);
v___x_2537_ = lean_apply_9(v___f_2484_, lean_box(0), v___x_2536_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_, lean_box(0));
if (lean_obj_tag(v___x_2537_) == 0)
{
lean_object* v___x_2539_; uint8_t v_isShared_2540_; uint8_t v_isSharedCheck_2548_; 
v_isSharedCheck_2548_ = !lean_is_exclusive(v___x_2537_);
if (v_isSharedCheck_2548_ == 0)
{
lean_object* v_unused_2549_; 
v_unused_2549_ = lean_ctor_get(v___x_2537_, 0);
lean_dec(v_unused_2549_);
v___x_2539_ = v___x_2537_;
v_isShared_2540_ = v_isSharedCheck_2548_;
goto v_resetjp_2538_;
}
else
{
lean_dec(v___x_2537_);
v___x_2539_ = lean_box(0);
v_isShared_2540_ = v_isSharedCheck_2548_;
goto v_resetjp_2538_;
}
v_resetjp_2538_:
{
lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2546_; 
lean_inc(v_j_2488_);
v___x_2541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2541_, 0, v_j_2488_);
lean_ctor_set(v___x_2541_, 1, v_snd_2485_);
v___x_2542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2542_, 0, v_fst_2480_);
lean_ctor_set(v___x_2542_, 1, v___x_2541_);
v___x_2543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2543_, 0, v_ctorType_2487_);
lean_ctor_set(v___x_2543_, 1, v___x_2542_);
v___x_2544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2544_, 0, v___x_2543_);
if (v_isShared_2540_ == 0)
{
lean_ctor_set(v___x_2539_, 0, v___x_2544_);
v___x_2546_ = v___x_2539_;
goto v_reusejp_2545_;
}
else
{
lean_object* v_reuseFailAlloc_2547_; 
v_reuseFailAlloc_2547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2547_, 0, v___x_2544_);
v___x_2546_ = v_reuseFailAlloc_2547_;
goto v_reusejp_2545_;
}
v_reusejp_2545_:
{
return v___x_2546_;
}
}
}
else
{
lean_object* v_a_2550_; lean_object* v___x_2552_; uint8_t v_isShared_2553_; uint8_t v_isSharedCheck_2557_; 
lean_dec_ref(v_ctorType_2487_);
lean_dec(v_snd_2485_);
lean_dec(v_fst_2480_);
v_a_2550_ = lean_ctor_get(v___x_2537_, 0);
v_isSharedCheck_2557_ = !lean_is_exclusive(v___x_2537_);
if (v_isSharedCheck_2557_ == 0)
{
v___x_2552_ = v___x_2537_;
v_isShared_2553_ = v_isSharedCheck_2557_;
goto v_resetjp_2551_;
}
else
{
lean_inc(v_a_2550_);
lean_dec(v___x_2537_);
v___x_2552_ = lean_box(0);
v_isShared_2553_ = v_isSharedCheck_2557_;
goto v_resetjp_2551_;
}
v_resetjp_2551_:
{
lean_object* v___x_2555_; 
if (v_isShared_2553_ == 0)
{
v___x_2555_ = v___x_2552_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2556_; 
v_reuseFailAlloc_2556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2556_, 0, v_a_2550_);
v___x_2555_ = v_reuseFailAlloc_2556_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
return v___x_2555_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__1___boxed(lean_object** _args){
lean_object* v_a_2558_ = _args[0];
lean_object* v_fst_2559_ = _args[1];
lean_object* v_struct_2560_ = _args[2];
lean_object* v_structName_2561_ = _args[3];
lean_object* v_a_2562_ = _args[4];
lean_object* v___f_2563_ = _args[5];
lean_object* v_snd_2564_ = _args[6];
lean_object* v_____r_2565_ = _args[7];
lean_object* v_ctorType_2566_ = _args[8];
lean_object* v_j_2567_ = _args[9];
lean_object* v___y_2568_ = _args[10];
lean_object* v___y_2569_ = _args[11];
lean_object* v___y_2570_ = _args[12];
lean_object* v___y_2571_ = _args[13];
lean_object* v___y_2572_ = _args[14];
lean_object* v___y_2573_ = _args[15];
lean_object* v___y_2574_ = _args[16];
_start:
{
uint8_t v_a_23426__boxed_2575_; lean_object* v_res_2576_; 
v_a_23426__boxed_2575_ = lean_unbox(v_a_2562_);
v_res_2576_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__1(v_a_2558_, v_fst_2559_, v_struct_2560_, v_structName_2561_, v_a_23426__boxed_2575_, v___f_2563_, v_snd_2564_, v_____r_2565_, v_ctorType_2566_, v_j_2567_, v___y_2568_, v___y_2569_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_);
lean_dec(v___y_2573_);
lean_dec_ref(v___y_2572_);
lean_dec(v___y_2571_);
lean_dec_ref(v___y_2570_);
lean_dec(v___y_2569_);
lean_dec(v___y_2568_);
lean_dec(v_j_2567_);
return v_res_2576_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg(lean_object* v_upperBound_2577_, lean_object* v_struct_2578_, lean_object* v_structName_2579_, uint8_t v_a_2580_, lean_object* v_idx_2581_, lean_object* v_a_2582_, lean_object* v_a_2583_, lean_object* v_b_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_){
_start:
{
lean_object* v___y_2593_; uint8_t v___x_2615_; 
v___x_2615_ = lean_nat_dec_le(v_a_2583_, v_upperBound_2577_);
if (v___x_2615_ == 0)
{
lean_object* v___x_2616_; 
lean_dec(v_a_2583_);
lean_dec_ref(v_a_2582_);
lean_dec(v_idx_2581_);
lean_dec(v_structName_2579_);
lean_dec_ref(v_struct_2578_);
v___x_2616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2616_, 0, v_b_2584_);
return v___x_2616_;
}
else
{
lean_object* v_snd_2617_; lean_object* v_snd_2618_; lean_object* v_fst_2619_; lean_object* v_fst_2620_; lean_object* v_fst_2621_; lean_object* v_snd_2622_; lean_object* v___f_2623_; uint8_t v___x_2624_; 
v_snd_2617_ = lean_ctor_get(v_b_2584_, 1);
lean_inc(v_snd_2617_);
v_snd_2618_ = lean_ctor_get(v_snd_2617_, 1);
lean_inc(v_snd_2618_);
v_fst_2619_ = lean_ctor_get(v_b_2584_, 0);
lean_inc(v_fst_2619_);
lean_dec_ref(v_b_2584_);
v_fst_2620_ = lean_ctor_get(v_snd_2617_, 0);
lean_inc(v_fst_2620_);
lean_dec(v_snd_2617_);
v_fst_2621_ = lean_ctor_get(v_snd_2618_, 0);
lean_inc(v_fst_2621_);
v_snd_2622_ = lean_ctor_get(v_snd_2618_, 1);
lean_inc(v_snd_2622_);
lean_dec(v_snd_2618_);
lean_inc_ref(v_a_2582_);
lean_inc(v_idx_2581_);
lean_inc(v_structName_2579_);
lean_inc_ref(v_struct_2578_);
v___f_2623_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__0___boxed), 13, 4);
lean_closure_set(v___f_2623_, 0, v_struct_2578_);
lean_closure_set(v___f_2623_, 1, v_structName_2579_);
lean_closure_set(v___f_2623_, 2, v_idx_2581_);
lean_closure_set(v___f_2623_, 3, v_a_2582_);
v___x_2624_ = l_Lean_Expr_isForall(v_fst_2619_);
if (v___x_2624_ == 0)
{
lean_object* v___x_2625_; lean_object* v___x_2626_; 
v___x_2625_ = lean_expr_instantiate_rev_range(v_fst_2619_, v_fst_2621_, v_a_2583_, v_fst_2620_);
lean_dec(v_fst_2621_);
lean_dec(v_fst_2619_);
lean_inc(v___y_2590_);
lean_inc_ref(v___y_2589_);
lean_inc(v___y_2588_);
lean_inc_ref(v___y_2587_);
v___x_2626_ = lean_whnf(v___x_2625_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_);
if (lean_obj_tag(v___x_2626_) == 0)
{
lean_object* v_a_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; 
v_a_2627_ = lean_ctor_get(v___x_2626_, 0);
lean_inc(v_a_2627_);
lean_dec_ref(v___x_2626_);
v___x_2628_ = lean_box(0);
lean_inc(v_structName_2579_);
lean_inc_ref(v_struct_2578_);
lean_inc(v_a_2583_);
v___x_2629_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__1(v_a_2583_, v_fst_2620_, v_struct_2578_, v_structName_2579_, v_a_2580_, v___f_2623_, v_snd_2622_, v___x_2628_, v_a_2627_, v_a_2583_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_);
v___y_2593_ = v___x_2629_;
goto v___jp_2592_;
}
else
{
lean_object* v_a_2630_; lean_object* v___x_2632_; uint8_t v_isShared_2633_; uint8_t v_isSharedCheck_2637_; 
lean_dec_ref(v___f_2623_);
lean_dec(v_snd_2622_);
lean_dec(v_fst_2620_);
lean_dec(v_a_2583_);
lean_dec_ref(v_a_2582_);
lean_dec(v_idx_2581_);
lean_dec(v_structName_2579_);
lean_dec_ref(v_struct_2578_);
v_a_2630_ = lean_ctor_get(v___x_2626_, 0);
v_isSharedCheck_2637_ = !lean_is_exclusive(v___x_2626_);
if (v_isSharedCheck_2637_ == 0)
{
v___x_2632_ = v___x_2626_;
v_isShared_2633_ = v_isSharedCheck_2637_;
goto v_resetjp_2631_;
}
else
{
lean_inc(v_a_2630_);
lean_dec(v___x_2626_);
v___x_2632_ = lean_box(0);
v_isShared_2633_ = v_isSharedCheck_2637_;
goto v_resetjp_2631_;
}
v_resetjp_2631_:
{
lean_object* v___x_2635_; 
if (v_isShared_2633_ == 0)
{
v___x_2635_ = v___x_2632_;
goto v_reusejp_2634_;
}
else
{
lean_object* v_reuseFailAlloc_2636_; 
v_reuseFailAlloc_2636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2636_, 0, v_a_2630_);
v___x_2635_ = v_reuseFailAlloc_2636_;
goto v_reusejp_2634_;
}
v_reusejp_2634_:
{
return v___x_2635_;
}
}
}
}
else
{
lean_object* v___x_2638_; lean_object* v___x_2639_; 
v___x_2638_ = lean_box(0);
lean_inc(v_structName_2579_);
lean_inc_ref(v_struct_2578_);
lean_inc(v_a_2583_);
v___x_2639_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__1(v_a_2583_, v_fst_2620_, v_struct_2578_, v_structName_2579_, v_a_2580_, v___f_2623_, v_snd_2622_, v___x_2638_, v_fst_2619_, v_fst_2621_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_);
lean_dec(v_fst_2621_);
v___y_2593_ = v___x_2639_;
goto v___jp_2592_;
}
}
v___jp_2592_:
{
if (lean_obj_tag(v___y_2593_) == 0)
{
lean_object* v_a_2594_; lean_object* v___x_2596_; uint8_t v_isShared_2597_; uint8_t v_isSharedCheck_2606_; 
v_a_2594_ = lean_ctor_get(v___y_2593_, 0);
v_isSharedCheck_2606_ = !lean_is_exclusive(v___y_2593_);
if (v_isSharedCheck_2606_ == 0)
{
v___x_2596_ = v___y_2593_;
v_isShared_2597_ = v_isSharedCheck_2606_;
goto v_resetjp_2595_;
}
else
{
lean_inc(v_a_2594_);
lean_dec(v___y_2593_);
v___x_2596_ = lean_box(0);
v_isShared_2597_ = v_isSharedCheck_2606_;
goto v_resetjp_2595_;
}
v_resetjp_2595_:
{
if (lean_obj_tag(v_a_2594_) == 0)
{
lean_object* v_a_2598_; lean_object* v___x_2600_; 
lean_dec(v_a_2583_);
lean_dec_ref(v_a_2582_);
lean_dec(v_idx_2581_);
lean_dec(v_structName_2579_);
lean_dec_ref(v_struct_2578_);
v_a_2598_ = lean_ctor_get(v_a_2594_, 0);
lean_inc(v_a_2598_);
lean_dec_ref(v_a_2594_);
if (v_isShared_2597_ == 0)
{
lean_ctor_set(v___x_2596_, 0, v_a_2598_);
v___x_2600_ = v___x_2596_;
goto v_reusejp_2599_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v_a_2598_);
v___x_2600_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2599_;
}
v_reusejp_2599_:
{
return v___x_2600_;
}
}
else
{
lean_object* v_a_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; 
lean_del_object(v___x_2596_);
v_a_2602_ = lean_ctor_get(v_a_2594_, 0);
lean_inc(v_a_2602_);
lean_dec_ref(v_a_2594_);
v___x_2603_ = lean_unsigned_to_nat(1u);
v___x_2604_ = lean_nat_add(v_a_2583_, v___x_2603_);
lean_dec(v_a_2583_);
v_a_2583_ = v___x_2604_;
v_b_2584_ = v_a_2602_;
goto _start;
}
}
}
else
{
lean_object* v_a_2607_; lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_2614_; 
lean_dec(v_a_2583_);
lean_dec_ref(v_a_2582_);
lean_dec(v_idx_2581_);
lean_dec(v_structName_2579_);
lean_dec_ref(v_struct_2578_);
v_a_2607_ = lean_ctor_get(v___y_2593_, 0);
v_isSharedCheck_2614_ = !lean_is_exclusive(v___y_2593_);
if (v_isSharedCheck_2614_ == 0)
{
v___x_2609_ = v___y_2593_;
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
else
{
lean_inc(v_a_2607_);
lean_dec(v___y_2593_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
lean_object* v___x_2612_; 
if (v_isShared_2610_ == 0)
{
v___x_2612_ = v___x_2609_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v_a_2607_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___boxed(lean_object* v_upperBound_2640_, lean_object* v_struct_2641_, lean_object* v_structName_2642_, lean_object* v_a_2643_, lean_object* v_idx_2644_, lean_object* v_a_2645_, lean_object* v_a_2646_, lean_object* v_b_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_){
_start:
{
uint8_t v_a_23583__boxed_2655_; lean_object* v_res_2656_; 
v_a_23583__boxed_2655_ = lean_unbox(v_a_2643_);
v_res_2656_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg(v_upperBound_2640_, v_struct_2641_, v_structName_2642_, v_a_23583__boxed_2655_, v_idx_2644_, v_a_2645_, v_a_2646_, v_b_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_);
lean_dec(v___y_2653_);
lean_dec_ref(v___y_2652_);
lean_dec(v___y_2651_);
lean_dec_ref(v___y_2650_);
lean_dec(v___y_2649_);
lean_dec(v___y_2648_);
lean_dec(v_upperBound_2640_);
return v_res_2656_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__0(lean_object* v_constName_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_){
_start:
{
lean_object* v___x_2665_; lean_object* v_env_2666_; uint8_t v___x_2667_; lean_object* v___x_2668_; 
v___x_2665_ = lean_st_ref_get(v___y_2663_);
v_env_2666_ = lean_ctor_get(v___x_2665_, 0);
lean_inc_ref(v_env_2666_);
lean_dec(v___x_2665_);
v___x_2667_ = 0;
lean_inc(v_constName_2657_);
v___x_2668_ = l_Lean_Environment_find_x3f(v_env_2666_, v_constName_2657_, v___x_2667_);
if (lean_obj_tag(v___x_2668_) == 0)
{
lean_object* v___x_2669_; 
v___x_2669_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0___redArg(v_constName_2657_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_, v___y_2662_, v___y_2663_);
return v___x_2669_;
}
else
{
lean_object* v_val_2670_; lean_object* v___x_2672_; uint8_t v_isShared_2673_; uint8_t v_isSharedCheck_2677_; 
lean_dec(v_constName_2657_);
v_val_2670_ = lean_ctor_get(v___x_2668_, 0);
v_isSharedCheck_2677_ = !lean_is_exclusive(v___x_2668_);
if (v_isSharedCheck_2677_ == 0)
{
v___x_2672_ = v___x_2668_;
v_isShared_2673_ = v_isSharedCheck_2677_;
goto v_resetjp_2671_;
}
else
{
lean_inc(v_val_2670_);
lean_dec(v___x_2668_);
v___x_2672_ = lean_box(0);
v_isShared_2673_ = v_isSharedCheck_2677_;
goto v_resetjp_2671_;
}
v_resetjp_2671_:
{
lean_object* v___x_2675_; 
if (v_isShared_2673_ == 0)
{
lean_ctor_set_tag(v___x_2672_, 0);
v___x_2675_ = v___x_2672_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v_val_2670_);
v___x_2675_ = v_reuseFailAlloc_2676_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
return v___x_2675_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__0___boxed(lean_object* v_constName_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_){
_start:
{
lean_object* v_res_2686_; 
v_res_2686_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__0(v_constName_2678_, v___y_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_, v___y_2684_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec(v___y_2682_);
lean_dec_ref(v___y_2681_);
lean_dec(v___y_2680_);
lean_dec(v___y_2679_);
return v_res_2686_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__0(void){
_start:
{
lean_object* v___x_2687_; 
v___x_2687_ = lean_mk_string_unchecked("_private.Lean.Expr.0.Lean.Expr.updateProj!Impl", 46, 46);
return v___x_2687_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__1(void){
_start:
{
lean_object* v___x_2688_; 
v___x_2688_ = lean_mk_string_unchecked("proj expected", 13, 13);
return v___x_2688_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__2(void){
_start:
{
lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; 
v___x_2689_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__1, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__1_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__1);
v___x_2690_ = lean_unsigned_to_nat(18u);
v___x_2691_ = lean_unsigned_to_nat(1878u);
v___x_2692_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__0);
v___x_2693_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__0);
v___x_2694_ = l_mkPanicMessageWithDecl(v___x_2693_, v___x_2692_, v___x_2691_, v___x_2690_, v___x_2689_);
return v___x_2694_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__3(void){
_start:
{
lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; 
v___x_2695_ = lean_obj_once(&l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__2, &l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__2_once, _init_l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__2);
v___x_2696_ = lean_unsigned_to_nat(0u);
v___x_2697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2697_, 0, v___x_2696_);
lean_ctor_set(v___x_2697_, 1, v___x_2695_);
return v___x_2697_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__4(void){
_start:
{
lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; 
v___x_2698_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__3);
v___x_2699_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0);
v___x_2700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2700_, 0, v___x_2699_);
lean_ctor_set(v___x_2700_, 1, v___x_2698_);
return v___x_2700_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__5(void){
_start:
{
lean_object* v___x_2701_; lean_object* v_dummy_2702_; 
v___x_2701_ = lean_box(0);
v_dummy_2702_ = l_Lean_Expr_sort___override(v___x_2701_);
return v_dummy_2702_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj(lean_object* v_e_2703_, lean_object* v_structName_2704_, lean_object* v_idx_2705_, lean_object* v_struct_2706_, lean_object* v_a_2707_, lean_object* v_a_2708_, lean_object* v_a_2709_, lean_object* v_a_2710_, lean_object* v_a_2711_, lean_object* v_a_2712_){
_start:
{
lean_object* v___y_2715_; lean_object* v___y_2716_; lean_object* v___y_2721_; uint8_t v___x_2725_; 
v___x_2725_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check(v_a_2707_);
if (v___x_2725_ == 0)
{
lean_dec(v_idx_2705_);
lean_dec(v_structName_2704_);
if (lean_obj_tag(v_e_2703_) == 11)
{
lean_object* v_expr_2726_; lean_object* v_typeName_2727_; lean_object* v_idx_2728_; lean_object* v_struct_2729_; size_t v___x_2730_; size_t v___x_2731_; uint8_t v___x_2732_; 
v_expr_2726_ = lean_ctor_get(v_struct_2706_, 0);
lean_inc_ref(v_expr_2726_);
lean_dec_ref(v_struct_2706_);
v_typeName_2727_ = lean_ctor_get(v_e_2703_, 0);
v_idx_2728_ = lean_ctor_get(v_e_2703_, 1);
v_struct_2729_ = lean_ctor_get(v_e_2703_, 2);
v___x_2730_ = lean_ptr_addr(v_struct_2729_);
v___x_2731_ = lean_ptr_addr(v_expr_2726_);
v___x_2732_ = lean_usize_dec_eq(v___x_2730_, v___x_2731_);
if (v___x_2732_ == 0)
{
lean_object* v___x_2733_; 
lean_inc(v_idx_2728_);
lean_inc(v_typeName_2727_);
lean_dec_ref(v_e_2703_);
v___x_2733_ = l_Lean_Expr_proj___override(v_typeName_2727_, v_idx_2728_, v_expr_2726_);
v___y_2721_ = v___x_2733_;
goto v___jp_2720_;
}
else
{
lean_dec_ref(v_expr_2726_);
v___y_2721_ = v_e_2703_;
goto v___jp_2720_;
}
}
else
{
lean_object* v___x_2734_; lean_object* v___x_2735_; 
lean_dec_ref(v_struct_2706_);
lean_dec_ref(v_e_2703_);
v___x_2734_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__2, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__2_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__2);
v___x_2735_ = l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp_spec__0(v___x_2734_);
v___y_2721_ = v___x_2735_;
goto v___jp_2720_;
}
}
else
{
lean_object* v___x_2736_; 
lean_inc_ref(v_struct_2706_);
v___x_2736_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg(v_struct_2706_, v_a_2708_, v_a_2709_, v_a_2710_, v_a_2711_, v_a_2712_);
if (lean_obj_tag(v___x_2736_) == 0)
{
lean_object* v_a_2737_; lean_object* v___x_2738_; 
v_a_2737_ = lean_ctor_get(v___x_2736_, 0);
lean_inc(v_a_2737_);
lean_dec_ref(v___x_2736_);
lean_inc(v_a_2712_);
lean_inc_ref(v_a_2711_);
lean_inc(v_a_2710_);
lean_inc_ref(v_a_2709_);
v___x_2738_ = lean_whnf(v_a_2737_, v_a_2709_, v_a_2710_, v_a_2711_, v_a_2712_);
if (lean_obj_tag(v___x_2738_) == 0)
{
lean_object* v_a_2739_; lean_object* v___x_2740_; 
v_a_2739_ = lean_ctor_get(v___x_2738_, 0);
lean_inc_n(v_a_2739_, 2);
lean_dec_ref(v___x_2738_);
v___x_2740_ = l_Lean_Meta_isProp(v_a_2739_, v_a_2709_, v_a_2710_, v_a_2711_, v_a_2712_);
if (lean_obj_tag(v___x_2740_) == 0)
{
lean_object* v_a_2741_; lean_object* v___x_2742_; 
v_a_2741_ = lean_ctor_get(v___x_2740_, 0);
lean_inc(v_a_2741_);
lean_dec_ref(v___x_2740_);
v___x_2742_ = l_Lean_Expr_getAppFn(v_a_2739_);
if (lean_obj_tag(v___x_2742_) == 4)
{
lean_object* v_declName_2743_; lean_object* v_us_2744_; lean_object* v___x_2745_; lean_object* v_env_2749_; uint8_t v___x_2750_; lean_object* v___x_2751_; 
v_declName_2743_ = lean_ctor_get(v___x_2742_, 0);
lean_inc(v_declName_2743_);
v_us_2744_ = lean_ctor_get(v___x_2742_, 1);
lean_inc(v_us_2744_);
lean_dec_ref(v___x_2742_);
v___x_2745_ = lean_st_ref_get(v_a_2712_);
v_env_2749_ = lean_ctor_get(v___x_2745_, 0);
lean_inc_ref(v_env_2749_);
lean_dec(v___x_2745_);
v___x_2750_ = 0;
v___x_2751_ = l_Lean_Environment_find_x3f(v_env_2749_, v_declName_2743_, v___x_2750_);
if (lean_obj_tag(v___x_2751_) == 0)
{
lean_object* v___x_2752_; lean_object* v___x_2753_; 
lean_dec(v_us_2744_);
lean_dec(v_a_2741_);
lean_dec_ref(v_e_2703_);
v___x_2752_ = lean_box(0);
v___x_2753_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0(v_struct_2706_, v_structName_2704_, v_idx_2705_, v_a_2739_, lean_box(0), v___x_2752_, v_a_2707_, v_a_2708_, v_a_2709_, v_a_2710_, v_a_2711_, v_a_2712_);
return v___x_2753_;
}
else
{
lean_object* v_val_2754_; 
v_val_2754_ = lean_ctor_get(v___x_2751_, 0);
lean_inc(v_val_2754_);
lean_dec_ref(v___x_2751_);
if (lean_obj_tag(v_val_2754_) == 5)
{
lean_object* v_val_2755_; lean_object* v_ctors_2756_; 
v_val_2755_ = lean_ctor_get(v_val_2754_, 0);
lean_inc_ref(v_val_2755_);
lean_dec_ref(v_val_2754_);
v_ctors_2756_ = lean_ctor_get(v_val_2755_, 4);
lean_inc(v_ctors_2756_);
if (lean_obj_tag(v_ctors_2756_) == 1)
{
lean_object* v_tail_2757_; 
v_tail_2757_ = lean_ctor_get(v_ctors_2756_, 1);
if (lean_obj_tag(v_tail_2757_) == 0)
{
lean_object* v_toConstantVal_2758_; lean_object* v_numParams_2759_; lean_object* v_numIndices_2760_; lean_object* v_head_2761_; lean_object* v___x_2763_; uint8_t v_isShared_2764_; uint8_t v_isSharedCheck_2870_; 
v_toConstantVal_2758_ = lean_ctor_get(v_val_2755_, 0);
lean_inc_ref(v_toConstantVal_2758_);
v_numParams_2759_ = lean_ctor_get(v_val_2755_, 1);
lean_inc(v_numParams_2759_);
v_numIndices_2760_ = lean_ctor_get(v_val_2755_, 2);
lean_inc(v_numIndices_2760_);
lean_dec_ref(v_val_2755_);
v_head_2761_ = lean_ctor_get(v_ctors_2756_, 0);
v_isSharedCheck_2870_ = !lean_is_exclusive(v_ctors_2756_);
if (v_isSharedCheck_2870_ == 0)
{
lean_object* v_unused_2871_; 
v_unused_2871_ = lean_ctor_get(v_ctors_2756_, 1);
lean_dec(v_unused_2871_);
v___x_2763_ = v_ctors_2756_;
v_isShared_2764_ = v_isSharedCheck_2870_;
goto v_resetjp_2762_;
}
else
{
lean_inc(v_head_2761_);
lean_dec(v_ctors_2756_);
v___x_2763_ = lean_box(0);
v_isShared_2764_ = v_isSharedCheck_2870_;
goto v_resetjp_2762_;
}
v_resetjp_2762_:
{
lean_object* v___x_2765_; 
v___x_2765_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__0(v_head_2761_, v_a_2707_, v_a_2708_, v_a_2709_, v_a_2710_, v_a_2711_, v_a_2712_);
if (lean_obj_tag(v___x_2765_) == 0)
{
lean_object* v_a_2766_; 
v_a_2766_ = lean_ctor_get(v___x_2765_, 0);
lean_inc(v_a_2766_);
lean_dec_ref(v___x_2765_);
if (lean_obj_tag(v_a_2766_) == 6)
{
lean_object* v_val_2767_; lean_object* v___y_2769_; lean_object* v___y_2770_; lean_object* v___y_2771_; lean_object* v___y_2772_; lean_object* v___y_2773_; lean_object* v___y_2774_; lean_object* v___y_2775_; lean_object* v___y_2823_; lean_object* v___y_2824_; lean_object* v___y_2825_; lean_object* v___y_2826_; lean_object* v___y_2827_; lean_object* v___y_2828_; lean_object* v_name_2848_; uint8_t v___x_2849_; 
v_val_2767_ = lean_ctor_get(v_a_2766_, 0);
lean_inc_ref(v_val_2767_);
lean_dec_ref(v_a_2766_);
v_name_2848_ = lean_ctor_get(v_toConstantVal_2758_, 0);
lean_inc(v_name_2848_);
lean_dec_ref(v_toConstantVal_2758_);
v___x_2849_ = lean_name_eq(v_name_2848_, v_structName_2704_);
lean_dec(v_name_2848_);
if (v___x_2849_ == 0)
{
lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v_a_2852_; lean_object* v___x_2854_; uint8_t v_isShared_2855_; uint8_t v_isSharedCheck_2859_; 
lean_dec_ref(v_val_2767_);
lean_del_object(v___x_2763_);
lean_dec(v_numIndices_2760_);
lean_dec(v_numParams_2759_);
lean_dec(v_us_2744_);
lean_dec(v_a_2741_);
lean_dec_ref(v_e_2703_);
v___x_2850_ = lean_box(0);
v___x_2851_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0(v_struct_2706_, v_structName_2704_, v_idx_2705_, v_a_2739_, lean_box(0), v___x_2850_, v_a_2707_, v_a_2708_, v_a_2709_, v_a_2710_, v_a_2711_, v_a_2712_);
v_a_2852_ = lean_ctor_get(v___x_2851_, 0);
v_isSharedCheck_2859_ = !lean_is_exclusive(v___x_2851_);
if (v_isSharedCheck_2859_ == 0)
{
v___x_2854_ = v___x_2851_;
v_isShared_2855_ = v_isSharedCheck_2859_;
goto v_resetjp_2853_;
}
else
{
lean_inc(v_a_2852_);
lean_dec(v___x_2851_);
v___x_2854_ = lean_box(0);
v_isShared_2855_ = v_isSharedCheck_2859_;
goto v_resetjp_2853_;
}
v_resetjp_2853_:
{
lean_object* v___x_2857_; 
if (v_isShared_2855_ == 0)
{
v___x_2857_ = v___x_2854_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v_a_2852_);
v___x_2857_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
return v___x_2857_;
}
}
}
else
{
v___y_2823_ = v_a_2707_;
v___y_2824_ = v_a_2708_;
v___y_2825_ = v_a_2709_;
v___y_2826_ = v_a_2710_;
v___y_2827_ = v_a_2711_;
v___y_2828_ = v_a_2712_;
goto v___jp_2822_;
}
v___jp_2768_:
{
lean_object* v_toConstantVal_2776_; lean_object* v_name_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; 
v_toConstantVal_2776_ = lean_ctor_get(v_val_2767_, 0);
lean_inc_ref(v_toConstantVal_2776_);
lean_dec_ref(v_val_2767_);
v_name_2777_ = lean_ctor_get(v_toConstantVal_2776_, 0);
lean_inc(v_name_2777_);
lean_dec_ref(v_toConstantVal_2776_);
v___x_2778_ = l_Lean_mkConst(v_name_2777_, v_us_2744_);
v___x_2779_ = lean_unsigned_to_nat(0u);
v___x_2780_ = l_Array_toSubarray___redArg(v___y_2769_, v___x_2779_, v_numParams_2759_);
v___x_2781_ = l_Subarray_copy___redArg(v___x_2780_);
v___x_2782_ = l_Lean_mkAppN(v___x_2778_, v___x_2781_);
lean_dec_ref(v___x_2781_);
lean_inc(v___y_2775_);
lean_inc_ref(v___y_2774_);
lean_inc(v___y_2773_);
lean_inc_ref(v___y_2772_);
v___x_2783_ = lean_infer_type(v___x_2782_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_);
if (lean_obj_tag(v___x_2783_) == 0)
{
lean_object* v_a_2784_; lean_object* v___x_2785_; lean_object* v___x_2787_; 
v_a_2784_ = lean_ctor_get(v___x_2783_, 0);
lean_inc(v_a_2784_);
lean_dec_ref(v___x_2783_);
v___x_2785_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__4, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__4_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__4);
if (v_isShared_2764_ == 0)
{
lean_ctor_set_tag(v___x_2763_, 0);
lean_ctor_set(v___x_2763_, 1, v___x_2785_);
lean_ctor_set(v___x_2763_, 0, v_a_2784_);
v___x_2787_ = v___x_2763_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v_a_2784_);
lean_ctor_set(v_reuseFailAlloc_2813_, 1, v___x_2785_);
v___x_2787_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
uint8_t v___x_2788_; lean_object* v___x_2789_; 
v___x_2788_ = lean_unbox(v_a_2741_);
lean_dec(v_a_2741_);
lean_inc_ref(v_struct_2706_);
lean_inc(v_idx_2705_);
v___x_2789_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg(v_idx_2705_, v_struct_2706_, v_structName_2704_, v___x_2788_, v_idx_2705_, v_a_2739_, v___x_2779_, v___x_2787_, v___y_2770_, v___y_2771_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_);
lean_dec(v_idx_2705_);
if (lean_obj_tag(v___x_2789_) == 0)
{
lean_object* v_a_2790_; lean_object* v_snd_2791_; lean_object* v_snd_2792_; lean_object* v_snd_2793_; lean_object* v_expr_2794_; lean_object* v___x_2795_; 
v_a_2790_ = lean_ctor_get(v___x_2789_, 0);
lean_inc(v_a_2790_);
lean_dec_ref(v___x_2789_);
v_snd_2791_ = lean_ctor_get(v_a_2790_, 1);
lean_inc(v_snd_2791_);
lean_dec(v_a_2790_);
v_snd_2792_ = lean_ctor_get(v_snd_2791_, 1);
lean_inc(v_snd_2792_);
lean_dec(v_snd_2791_);
v_snd_2793_ = lean_ctor_get(v_snd_2792_, 1);
lean_inc(v_snd_2793_);
lean_dec(v_snd_2792_);
v_expr_2794_ = lean_ctor_get(v_struct_2706_, 0);
lean_inc_ref(v_expr_2794_);
lean_dec_ref(v_struct_2706_);
v___x_2795_ = l_Lean_Expr_cleanupAnnotations(v_snd_2793_);
if (lean_obj_tag(v_e_2703_) == 11)
{
lean_object* v_typeName_2796_; lean_object* v_idx_2797_; lean_object* v_struct_2798_; size_t v___x_2799_; size_t v___x_2800_; uint8_t v___x_2801_; 
v_typeName_2796_ = lean_ctor_get(v_e_2703_, 0);
v_idx_2797_ = lean_ctor_get(v_e_2703_, 1);
v_struct_2798_ = lean_ctor_get(v_e_2703_, 2);
v___x_2799_ = lean_ptr_addr(v_struct_2798_);
v___x_2800_ = lean_ptr_addr(v_expr_2794_);
v___x_2801_ = lean_usize_dec_eq(v___x_2799_, v___x_2800_);
if (v___x_2801_ == 0)
{
lean_object* v___x_2802_; 
lean_inc(v_idx_2797_);
lean_inc(v_typeName_2796_);
lean_dec_ref(v_e_2703_);
v___x_2802_ = l_Lean_Expr_proj___override(v_typeName_2796_, v_idx_2797_, v_expr_2794_);
v___y_2715_ = v___x_2795_;
v___y_2716_ = v___x_2802_;
goto v___jp_2714_;
}
else
{
lean_dec_ref(v_expr_2794_);
v___y_2715_ = v___x_2795_;
v___y_2716_ = v_e_2703_;
goto v___jp_2714_;
}
}
else
{
lean_object* v___x_2803_; lean_object* v___x_2804_; 
lean_dec_ref(v_expr_2794_);
lean_dec_ref(v_e_2703_);
v___x_2803_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__2, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__2_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__2);
v___x_2804_ = l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp_spec__0(v___x_2803_);
v___y_2715_ = v___x_2795_;
v___y_2716_ = v___x_2804_;
goto v___jp_2714_;
}
}
else
{
lean_object* v_a_2805_; lean_object* v___x_2807_; uint8_t v_isShared_2808_; uint8_t v_isSharedCheck_2812_; 
lean_dec_ref(v_struct_2706_);
lean_dec_ref(v_e_2703_);
v_a_2805_ = lean_ctor_get(v___x_2789_, 0);
v_isSharedCheck_2812_ = !lean_is_exclusive(v___x_2789_);
if (v_isSharedCheck_2812_ == 0)
{
v___x_2807_ = v___x_2789_;
v_isShared_2808_ = v_isSharedCheck_2812_;
goto v_resetjp_2806_;
}
else
{
lean_inc(v_a_2805_);
lean_dec(v___x_2789_);
v___x_2807_ = lean_box(0);
v_isShared_2808_ = v_isSharedCheck_2812_;
goto v_resetjp_2806_;
}
v_resetjp_2806_:
{
lean_object* v___x_2810_; 
if (v_isShared_2808_ == 0)
{
v___x_2810_ = v___x_2807_;
goto v_reusejp_2809_;
}
else
{
lean_object* v_reuseFailAlloc_2811_; 
v_reuseFailAlloc_2811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2811_, 0, v_a_2805_);
v___x_2810_ = v_reuseFailAlloc_2811_;
goto v_reusejp_2809_;
}
v_reusejp_2809_:
{
return v___x_2810_;
}
}
}
}
}
else
{
lean_object* v_a_2814_; lean_object* v___x_2816_; uint8_t v_isShared_2817_; uint8_t v_isSharedCheck_2821_; 
lean_del_object(v___x_2763_);
lean_dec(v_a_2741_);
lean_dec(v_a_2739_);
lean_dec_ref(v_struct_2706_);
lean_dec(v_idx_2705_);
lean_dec(v_structName_2704_);
lean_dec_ref(v_e_2703_);
v_a_2814_ = lean_ctor_get(v___x_2783_, 0);
v_isSharedCheck_2821_ = !lean_is_exclusive(v___x_2783_);
if (v_isSharedCheck_2821_ == 0)
{
v___x_2816_ = v___x_2783_;
v_isShared_2817_ = v_isSharedCheck_2821_;
goto v_resetjp_2815_;
}
else
{
lean_inc(v_a_2814_);
lean_dec(v___x_2783_);
v___x_2816_ = lean_box(0);
v_isShared_2817_ = v_isSharedCheck_2821_;
goto v_resetjp_2815_;
}
v_resetjp_2815_:
{
lean_object* v___x_2819_; 
if (v_isShared_2817_ == 0)
{
v___x_2819_ = v___x_2816_;
goto v_reusejp_2818_;
}
else
{
lean_object* v_reuseFailAlloc_2820_; 
v_reuseFailAlloc_2820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2820_, 0, v_a_2814_);
v___x_2819_ = v_reuseFailAlloc_2820_;
goto v_reusejp_2818_;
}
v_reusejp_2818_:
{
return v___x_2819_;
}
}
}
}
v___jp_2822_:
{
lean_object* v_dummy_2829_; lean_object* v_nargs_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; uint8_t v___x_2837_; 
v_dummy_2829_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__5, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__5_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__5);
v_nargs_2830_ = l_Lean_Expr_getAppNumArgs(v_a_2739_);
lean_inc(v_nargs_2830_);
v___x_2831_ = lean_mk_array(v_nargs_2830_, v_dummy_2829_);
v___x_2832_ = lean_unsigned_to_nat(1u);
v___x_2833_ = lean_nat_sub(v_nargs_2830_, v___x_2832_);
lean_dec(v_nargs_2830_);
lean_inc(v_a_2739_);
v___x_2834_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_2739_, v___x_2831_, v___x_2833_);
v___x_2835_ = lean_nat_add(v_numParams_2759_, v_numIndices_2760_);
lean_dec(v_numIndices_2760_);
v___x_2836_ = lean_array_get_size(v___x_2834_);
v___x_2837_ = lean_nat_dec_eq(v___x_2835_, v___x_2836_);
lean_dec(v___x_2835_);
if (v___x_2837_ == 0)
{
if (v___x_2725_ == 0)
{
v___y_2769_ = v___x_2834_;
v___y_2770_ = v___y_2823_;
v___y_2771_ = v___y_2824_;
v___y_2772_ = v___y_2825_;
v___y_2773_ = v___y_2826_;
v___y_2774_ = v___y_2827_;
v___y_2775_ = v___y_2828_;
goto v___jp_2768_;
}
else
{
lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v_a_2840_; lean_object* v___x_2842_; uint8_t v_isShared_2843_; uint8_t v_isSharedCheck_2847_; 
lean_dec_ref(v___x_2834_);
lean_dec_ref(v_val_2767_);
lean_del_object(v___x_2763_);
lean_dec(v_numParams_2759_);
lean_dec(v_us_2744_);
lean_dec(v_a_2741_);
lean_dec_ref(v_e_2703_);
v___x_2838_ = lean_box(0);
v___x_2839_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0(v_struct_2706_, v_structName_2704_, v_idx_2705_, v_a_2739_, lean_box(0), v___x_2838_, v___y_2823_, v___y_2824_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_);
v_a_2840_ = lean_ctor_get(v___x_2839_, 0);
v_isSharedCheck_2847_ = !lean_is_exclusive(v___x_2839_);
if (v_isSharedCheck_2847_ == 0)
{
v___x_2842_ = v___x_2839_;
v_isShared_2843_ = v_isSharedCheck_2847_;
goto v_resetjp_2841_;
}
else
{
lean_inc(v_a_2840_);
lean_dec(v___x_2839_);
v___x_2842_ = lean_box(0);
v_isShared_2843_ = v_isSharedCheck_2847_;
goto v_resetjp_2841_;
}
v_resetjp_2841_:
{
lean_object* v___x_2845_; 
if (v_isShared_2843_ == 0)
{
v___x_2845_ = v___x_2842_;
goto v_reusejp_2844_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v_a_2840_);
v___x_2845_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2844_;
}
v_reusejp_2844_:
{
return v___x_2845_;
}
}
}
}
else
{
v___y_2769_ = v___x_2834_;
v___y_2770_ = v___y_2823_;
v___y_2771_ = v___y_2824_;
v___y_2772_ = v___y_2825_;
v___y_2773_ = v___y_2826_;
v___y_2774_ = v___y_2827_;
v___y_2775_ = v___y_2828_;
goto v___jp_2768_;
}
}
}
else
{
lean_object* v___x_2860_; lean_object* v___x_2861_; 
lean_dec(v_a_2766_);
lean_del_object(v___x_2763_);
lean_dec(v_numIndices_2760_);
lean_dec(v_numParams_2759_);
lean_dec_ref(v_toConstantVal_2758_);
lean_dec(v_us_2744_);
lean_dec(v_a_2741_);
lean_dec_ref(v_e_2703_);
v___x_2860_ = lean_box(0);
v___x_2861_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0(v_struct_2706_, v_structName_2704_, v_idx_2705_, v_a_2739_, lean_box(0), v___x_2860_, v_a_2707_, v_a_2708_, v_a_2709_, v_a_2710_, v_a_2711_, v_a_2712_);
return v___x_2861_;
}
}
else
{
lean_object* v_a_2862_; lean_object* v___x_2864_; uint8_t v_isShared_2865_; uint8_t v_isSharedCheck_2869_; 
lean_del_object(v___x_2763_);
lean_dec(v_numIndices_2760_);
lean_dec(v_numParams_2759_);
lean_dec_ref(v_toConstantVal_2758_);
lean_dec(v_us_2744_);
lean_dec(v_a_2741_);
lean_dec(v_a_2739_);
lean_dec_ref(v_struct_2706_);
lean_dec(v_idx_2705_);
lean_dec(v_structName_2704_);
lean_dec_ref(v_e_2703_);
v_a_2862_ = lean_ctor_get(v___x_2765_, 0);
v_isSharedCheck_2869_ = !lean_is_exclusive(v___x_2765_);
if (v_isSharedCheck_2869_ == 0)
{
v___x_2864_ = v___x_2765_;
v_isShared_2865_ = v_isSharedCheck_2869_;
goto v_resetjp_2863_;
}
else
{
lean_inc(v_a_2862_);
lean_dec(v___x_2765_);
v___x_2864_ = lean_box(0);
v_isShared_2865_ = v_isSharedCheck_2869_;
goto v_resetjp_2863_;
}
v_resetjp_2863_:
{
lean_object* v___x_2867_; 
if (v_isShared_2865_ == 0)
{
v___x_2867_ = v___x_2864_;
goto v_reusejp_2866_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v_a_2862_);
v___x_2867_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2866_;
}
v_reusejp_2866_:
{
return v___x_2867_;
}
}
}
}
}
else
{
lean_dec_ref(v_ctors_2756_);
lean_dec_ref(v_val_2755_);
lean_dec(v_us_2744_);
lean_dec(v_a_2741_);
lean_dec_ref(v_e_2703_);
goto v___jp_2746_;
}
}
else
{
lean_dec(v_ctors_2756_);
lean_dec_ref(v_val_2755_);
lean_dec(v_us_2744_);
lean_dec(v_a_2741_);
lean_dec_ref(v_e_2703_);
goto v___jp_2746_;
}
}
else
{
lean_object* v___x_2872_; lean_object* v___x_2873_; 
lean_dec(v_val_2754_);
lean_dec(v_us_2744_);
lean_dec(v_a_2741_);
lean_dec_ref(v_e_2703_);
v___x_2872_ = lean_box(0);
v___x_2873_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0(v_struct_2706_, v_structName_2704_, v_idx_2705_, v_a_2739_, lean_box(0), v___x_2872_, v_a_2707_, v_a_2708_, v_a_2709_, v_a_2710_, v_a_2711_, v_a_2712_);
return v___x_2873_;
}
}
v___jp_2746_:
{
lean_object* v___x_2747_; lean_object* v___x_2748_; 
v___x_2747_ = lean_box(0);
v___x_2748_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0(v_struct_2706_, v_structName_2704_, v_idx_2705_, v_a_2739_, lean_box(0), v___x_2747_, v_a_2707_, v_a_2708_, v_a_2709_, v_a_2710_, v_a_2711_, v_a_2712_);
return v___x_2748_;
}
}
else
{
lean_object* v___x_2874_; lean_object* v___x_2875_; 
lean_dec_ref(v___x_2742_);
lean_dec(v_a_2741_);
lean_dec_ref(v_e_2703_);
v___x_2874_ = lean_box(0);
v___x_2875_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0(v_struct_2706_, v_structName_2704_, v_idx_2705_, v_a_2739_, lean_box(0), v___x_2874_, v_a_2707_, v_a_2708_, v_a_2709_, v_a_2710_, v_a_2711_, v_a_2712_);
return v___x_2875_;
}
}
else
{
lean_object* v_a_2876_; lean_object* v___x_2878_; uint8_t v_isShared_2879_; uint8_t v_isSharedCheck_2883_; 
lean_dec(v_a_2739_);
lean_dec_ref(v_struct_2706_);
lean_dec(v_idx_2705_);
lean_dec(v_structName_2704_);
lean_dec_ref(v_e_2703_);
v_a_2876_ = lean_ctor_get(v___x_2740_, 0);
v_isSharedCheck_2883_ = !lean_is_exclusive(v___x_2740_);
if (v_isSharedCheck_2883_ == 0)
{
v___x_2878_ = v___x_2740_;
v_isShared_2879_ = v_isSharedCheck_2883_;
goto v_resetjp_2877_;
}
else
{
lean_inc(v_a_2876_);
lean_dec(v___x_2740_);
v___x_2878_ = lean_box(0);
v_isShared_2879_ = v_isSharedCheck_2883_;
goto v_resetjp_2877_;
}
v_resetjp_2877_:
{
lean_object* v___x_2881_; 
if (v_isShared_2879_ == 0)
{
v___x_2881_ = v___x_2878_;
goto v_reusejp_2880_;
}
else
{
lean_object* v_reuseFailAlloc_2882_; 
v_reuseFailAlloc_2882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2882_, 0, v_a_2876_);
v___x_2881_ = v_reuseFailAlloc_2882_;
goto v_reusejp_2880_;
}
v_reusejp_2880_:
{
return v___x_2881_;
}
}
}
}
else
{
lean_object* v_a_2884_; lean_object* v___x_2886_; uint8_t v_isShared_2887_; uint8_t v_isSharedCheck_2891_; 
lean_dec_ref(v_struct_2706_);
lean_dec(v_idx_2705_);
lean_dec(v_structName_2704_);
lean_dec_ref(v_e_2703_);
v_a_2884_ = lean_ctor_get(v___x_2738_, 0);
v_isSharedCheck_2891_ = !lean_is_exclusive(v___x_2738_);
if (v_isSharedCheck_2891_ == 0)
{
v___x_2886_ = v___x_2738_;
v_isShared_2887_ = v_isSharedCheck_2891_;
goto v_resetjp_2885_;
}
else
{
lean_inc(v_a_2884_);
lean_dec(v___x_2738_);
v___x_2886_ = lean_box(0);
v_isShared_2887_ = v_isSharedCheck_2891_;
goto v_resetjp_2885_;
}
v_resetjp_2885_:
{
lean_object* v___x_2889_; 
if (v_isShared_2887_ == 0)
{
v___x_2889_ = v___x_2886_;
goto v_reusejp_2888_;
}
else
{
lean_object* v_reuseFailAlloc_2890_; 
v_reuseFailAlloc_2890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2890_, 0, v_a_2884_);
v___x_2889_ = v_reuseFailAlloc_2890_;
goto v_reusejp_2888_;
}
v_reusejp_2888_:
{
return v___x_2889_;
}
}
}
}
else
{
lean_object* v_a_2892_; lean_object* v___x_2894_; uint8_t v_isShared_2895_; uint8_t v_isSharedCheck_2899_; 
lean_dec_ref(v_struct_2706_);
lean_dec(v_idx_2705_);
lean_dec(v_structName_2704_);
lean_dec_ref(v_e_2703_);
v_a_2892_ = lean_ctor_get(v___x_2736_, 0);
v_isSharedCheck_2899_ = !lean_is_exclusive(v___x_2736_);
if (v_isSharedCheck_2899_ == 0)
{
v___x_2894_ = v___x_2736_;
v_isShared_2895_ = v_isSharedCheck_2899_;
goto v_resetjp_2893_;
}
else
{
lean_inc(v_a_2892_);
lean_dec(v___x_2736_);
v___x_2894_ = lean_box(0);
v_isShared_2895_ = v_isSharedCheck_2899_;
goto v_resetjp_2893_;
}
v_resetjp_2893_:
{
lean_object* v___x_2897_; 
if (v_isShared_2895_ == 0)
{
v___x_2897_ = v___x_2894_;
goto v_reusejp_2896_;
}
else
{
lean_object* v_reuseFailAlloc_2898_; 
v_reuseFailAlloc_2898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2898_, 0, v_a_2892_);
v___x_2897_ = v_reuseFailAlloc_2898_;
goto v_reusejp_2896_;
}
v_reusejp_2896_:
{
return v___x_2897_;
}
}
}
}
v___jp_2714_:
{
lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; 
v___x_2717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2717_, 0, v___y_2715_);
v___x_2718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2718_, 0, v___y_2716_);
lean_ctor_set(v___x_2718_, 1, v___x_2717_);
v___x_2719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2719_, 0, v___x_2718_);
return v___x_2719_;
}
v___jp_2720_:
{
lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; 
v___x_2722_ = lean_box(0);
v___x_2723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2723_, 0, v___y_2721_);
lean_ctor_set(v___x_2723_, 1, v___x_2722_);
v___x_2724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2724_, 0, v___x_2723_);
return v___x_2724_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___boxed(lean_object* v_e_2900_, lean_object* v_structName_2901_, lean_object* v_idx_2902_, lean_object* v_struct_2903_, lean_object* v_a_2904_, lean_object* v_a_2905_, lean_object* v_a_2906_, lean_object* v_a_2907_, lean_object* v_a_2908_, lean_object* v_a_2909_, lean_object* v_a_2910_){
_start:
{
lean_object* v_res_2911_; 
v_res_2911_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj(v_e_2900_, v_structName_2901_, v_idx_2902_, v_struct_2903_, v_a_2904_, v_a_2905_, v_a_2906_, v_a_2907_, v_a_2908_, v_a_2909_);
lean_dec(v_a_2909_);
lean_dec_ref(v_a_2908_);
lean_dec(v_a_2907_);
lean_dec_ref(v_a_2906_);
lean_dec(v_a_2905_);
lean_dec(v_a_2904_);
return v_res_2911_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1(lean_object* v_upperBound_2912_, lean_object* v_struct_2913_, lean_object* v_structName_2914_, uint8_t v_a_2915_, lean_object* v_idx_2916_, lean_object* v_a_2917_, lean_object* v_inst_2918_, lean_object* v_R_2919_, lean_object* v_a_2920_, lean_object* v_b_2921_, lean_object* v_c_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_){
_start:
{
lean_object* v___x_2930_; 
v___x_2930_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg(v_upperBound_2912_, v_struct_2913_, v_structName_2914_, v_a_2915_, v_idx_2916_, v_a_2917_, v_a_2920_, v_b_2921_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_, v___y_2928_);
return v___x_2930_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_2931_ = _args[0];
lean_object* v_struct_2932_ = _args[1];
lean_object* v_structName_2933_ = _args[2];
lean_object* v_a_2934_ = _args[3];
lean_object* v_idx_2935_ = _args[4];
lean_object* v_a_2936_ = _args[5];
lean_object* v_inst_2937_ = _args[6];
lean_object* v_R_2938_ = _args[7];
lean_object* v_a_2939_ = _args[8];
lean_object* v_b_2940_ = _args[9];
lean_object* v_c_2941_ = _args[10];
lean_object* v___y_2942_ = _args[11];
lean_object* v___y_2943_ = _args[12];
lean_object* v___y_2944_ = _args[13];
lean_object* v___y_2945_ = _args[14];
lean_object* v___y_2946_ = _args[15];
lean_object* v___y_2947_ = _args[16];
lean_object* v___y_2948_ = _args[17];
_start:
{
uint8_t v_a_24152__boxed_2949_; lean_object* v_res_2950_; 
v_a_24152__boxed_2949_ = lean_unbox(v_a_2934_);
v_res_2950_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1(v_upperBound_2931_, v_struct_2932_, v_structName_2933_, v_a_24152__boxed_2949_, v_idx_2935_, v_a_2936_, v_inst_2937_, v_R_2938_, v_a_2939_, v_b_2940_, v_c_2941_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_, v___y_2946_, v___y_2947_);
lean_dec(v___y_2947_);
lean_dec_ref(v___y_2946_);
lean_dec(v___y_2945_);
lean_dec_ref(v___y_2944_);
lean_dec(v___y_2943_);
lean_dec(v___y_2942_);
lean_dec(v_upperBound_2931_);
return v_res_2950_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0___redArg(lean_object* v_as_2951_, size_t v_i_2952_, size_t v_stop_2953_, lean_object* v_b_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_){
_start:
{
uint8_t v___x_2961_; 
v___x_2961_ = lean_usize_dec_eq(v_i_2952_, v_stop_2953_);
if (v___x_2961_ == 0)
{
size_t v___x_2962_; size_t v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; 
v___x_2962_ = ((size_t)1ULL);
v___x_2963_ = lean_usize_sub(v_i_2952_, v___x_2962_);
v___x_2964_ = lean_array_uget_borrowed(v_as_2951_, v___x_2963_);
lean_inc(v___x_2964_);
v___x_2965_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg(v___x_2964_, v___y_2955_, v___y_2956_, v___y_2957_, v___y_2958_, v___y_2959_);
if (lean_obj_tag(v___x_2965_) == 0)
{
lean_object* v_a_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; 
v_a_2966_ = lean_ctor_get(v___x_2965_, 0);
lean_inc(v_a_2966_);
lean_dec_ref(v___x_2965_);
v___x_2967_ = l_Lean_Expr_sortLevel_x21(v_a_2966_);
lean_dec(v_a_2966_);
v___x_2968_ = l_Lean_mkLevelIMax_x27(v___x_2967_, v_b_2954_);
v_i_2952_ = v___x_2963_;
v_b_2954_ = v___x_2968_;
goto _start;
}
else
{
lean_object* v_a_2970_; lean_object* v___x_2972_; uint8_t v_isShared_2973_; uint8_t v_isSharedCheck_2977_; 
lean_dec(v_b_2954_);
v_a_2970_ = lean_ctor_get(v___x_2965_, 0);
v_isSharedCheck_2977_ = !lean_is_exclusive(v___x_2965_);
if (v_isSharedCheck_2977_ == 0)
{
v___x_2972_ = v___x_2965_;
v_isShared_2973_ = v_isSharedCheck_2977_;
goto v_resetjp_2971_;
}
else
{
lean_inc(v_a_2970_);
lean_dec(v___x_2965_);
v___x_2972_ = lean_box(0);
v_isShared_2973_ = v_isSharedCheck_2977_;
goto v_resetjp_2971_;
}
v_resetjp_2971_:
{
lean_object* v___x_2975_; 
if (v_isShared_2973_ == 0)
{
v___x_2975_ = v___x_2972_;
goto v_reusejp_2974_;
}
else
{
lean_object* v_reuseFailAlloc_2976_; 
v_reuseFailAlloc_2976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2976_, 0, v_a_2970_);
v___x_2975_ = v_reuseFailAlloc_2976_;
goto v_reusejp_2974_;
}
v_reusejp_2974_:
{
return v___x_2975_;
}
}
}
}
else
{
lean_object* v___x_2978_; 
v___x_2978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2978_, 0, v_b_2954_);
return v___x_2978_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0___redArg___boxed(lean_object* v_as_2979_, lean_object* v_i_2980_, lean_object* v_stop_2981_, lean_object* v_b_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_){
_start:
{
size_t v_i_boxed_2989_; size_t v_stop_boxed_2990_; lean_object* v_res_2991_; 
v_i_boxed_2989_ = lean_unbox_usize(v_i_2980_);
lean_dec(v_i_2980_);
v_stop_boxed_2990_ = lean_unbox_usize(v_stop_2981_);
lean_dec(v_stop_2981_);
v_res_2991_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0___redArg(v_as_2979_, v_i_boxed_2989_, v_stop_boxed_2990_, v_b_2982_, v___y_2983_, v___y_2984_, v___y_2985_, v___y_2986_, v___y_2987_);
lean_dec(v___y_2987_);
lean_dec_ref(v___y_2986_);
lean_dec(v___y_2985_);
lean_dec_ref(v___y_2984_);
lean_dec(v___y_2983_);
lean_dec_ref(v_as_2979_);
return v_res_2991_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__0(void){
_start:
{
lean_object* v___x_2992_; 
v___x_2992_ = lean_mk_string_unchecked("Init.Data.Option.BasicAux", 25, 25);
return v___x_2992_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__1(void){
_start:
{
lean_object* v___x_2993_; 
v___x_2993_ = lean_mk_string_unchecked("Option.get!", 11, 11);
return v___x_2993_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__2(void){
_start:
{
lean_object* v___x_2994_; 
v___x_2994_ = lean_mk_string_unchecked("value is none", 13, 13);
return v___x_2994_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__3(void){
_start:
{
lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; 
v___x_2995_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__2, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__2_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__2);
v___x_2996_ = lean_unsigned_to_nat(14u);
v___x_2997_ = lean_unsigned_to_nat(22u);
v___x_2998_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__1, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__1_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__1);
v___x_2999_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__0);
v___x_3000_ = l_mkPanicMessageWithDecl(v___x_2999_, v___x_2998_, v___x_2997_, v___x_2996_, v___x_2995_);
return v___x_3000_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize(lean_object* v_fvars_3001_, lean_object* v_doms_3002_, lean_object* v_body_3003_, lean_object* v_a_3004_, lean_object* v_a_3005_, lean_object* v_a_3006_, lean_object* v_a_3007_, lean_object* v_a_3008_, lean_object* v_a_3009_){
_start:
{
lean_object* v_lctx_3011_; lean_object* v_expr_3012_; uint8_t v___x_3013_; uint8_t v___x_3014_; lean_object* v___x_3015_; lean_object* v_a_3017_; uint8_t v___x_3022_; 
v_lctx_3011_ = lean_ctor_get(v_a_3006_, 2);
v_expr_3012_ = lean_ctor_get(v_body_3003_, 0);
v___x_3013_ = 1;
v___x_3014_ = 0;
lean_inc_ref(v_lctx_3011_);
v___x_3015_ = l_Lean_LocalContext_mkForall(v_lctx_3011_, v_fvars_3001_, v_expr_3012_, v___x_3013_, v___x_3014_);
v___x_3022_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check(v_a_3004_);
if (v___x_3022_ == 0)
{
lean_object* v___x_3024_; uint8_t v_isShared_3025_; uint8_t v_isSharedCheck_3031_; 
v_isSharedCheck_3031_ = !lean_is_exclusive(v_body_3003_);
if (v_isSharedCheck_3031_ == 0)
{
lean_object* v_unused_3032_; lean_object* v_unused_3033_; 
v_unused_3032_ = lean_ctor_get(v_body_3003_, 1);
lean_dec(v_unused_3032_);
v_unused_3033_ = lean_ctor_get(v_body_3003_, 0);
lean_dec(v_unused_3033_);
v___x_3024_ = v_body_3003_;
v_isShared_3025_ = v_isSharedCheck_3031_;
goto v_resetjp_3023_;
}
else
{
lean_dec(v_body_3003_);
v___x_3024_ = lean_box(0);
v_isShared_3025_ = v_isSharedCheck_3031_;
goto v_resetjp_3023_;
}
v_resetjp_3023_:
{
lean_object* v___x_3026_; lean_object* v___x_3028_; 
v___x_3026_ = lean_box(0);
if (v_isShared_3025_ == 0)
{
lean_ctor_set(v___x_3024_, 1, v___x_3026_);
lean_ctor_set(v___x_3024_, 0, v___x_3015_);
v___x_3028_ = v___x_3024_;
goto v_reusejp_3027_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v___x_3015_);
lean_ctor_set(v_reuseFailAlloc_3030_, 1, v___x_3026_);
v___x_3028_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3027_;
}
v_reusejp_3027_:
{
lean_object* v___x_3029_; 
v___x_3029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3029_, 0, v___x_3028_);
return v___x_3029_;
}
}
}
else
{
lean_object* v___x_3034_; 
v___x_3034_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_ensureType(v_body_3003_, v_a_3004_, v_a_3005_, v_a_3006_, v_a_3007_, v_a_3008_, v_a_3009_);
if (lean_obj_tag(v___x_3034_) == 0)
{
lean_object* v_a_3035_; lean_object* v___y_3037_; lean_object* v_type_x3f_3054_; 
v_a_3035_ = lean_ctor_get(v___x_3034_, 0);
lean_inc(v_a_3035_);
lean_dec_ref(v___x_3034_);
v_type_x3f_3054_ = lean_ctor_get(v_a_3035_, 1);
lean_inc(v_type_x3f_3054_);
lean_dec(v_a_3035_);
if (lean_obj_tag(v_type_x3f_3054_) == 0)
{
lean_object* v___x_3055_; lean_object* v___x_3056_; 
v___x_3055_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__3);
v___x_3056_ = l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp_spec__0(v___x_3055_);
v___y_3037_ = v___x_3056_;
goto v___jp_3036_;
}
else
{
lean_object* v_val_3057_; 
v_val_3057_ = lean_ctor_get(v_type_x3f_3054_, 0);
lean_inc(v_val_3057_);
lean_dec_ref(v_type_x3f_3054_);
v___y_3037_ = v_val_3057_;
goto v___jp_3036_;
}
v___jp_3036_:
{
lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; uint8_t v___x_3041_; 
v___x_3038_ = l_Lean_Expr_sortLevel_x21(v___y_3037_);
lean_dec_ref(v___y_3037_);
v___x_3039_ = lean_array_get_size(v_doms_3002_);
v___x_3040_ = lean_unsigned_to_nat(0u);
v___x_3041_ = lean_nat_dec_lt(v___x_3040_, v___x_3039_);
if (v___x_3041_ == 0)
{
v_a_3017_ = v___x_3038_;
goto v___jp_3016_;
}
else
{
size_t v___x_3042_; size_t v___x_3043_; lean_object* v___x_3044_; 
v___x_3042_ = lean_usize_of_nat(v___x_3039_);
v___x_3043_ = ((size_t)0ULL);
v___x_3044_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0___redArg(v_doms_3002_, v___x_3042_, v___x_3043_, v___x_3038_, v_a_3005_, v_a_3006_, v_a_3007_, v_a_3008_, v_a_3009_);
if (lean_obj_tag(v___x_3044_) == 0)
{
lean_object* v_a_3045_; 
v_a_3045_ = lean_ctor_get(v___x_3044_, 0);
lean_inc(v_a_3045_);
lean_dec_ref(v___x_3044_);
v_a_3017_ = v_a_3045_;
goto v___jp_3016_;
}
else
{
lean_object* v_a_3046_; lean_object* v___x_3048_; uint8_t v_isShared_3049_; uint8_t v_isSharedCheck_3053_; 
lean_dec_ref(v___x_3015_);
v_a_3046_ = lean_ctor_get(v___x_3044_, 0);
v_isSharedCheck_3053_ = !lean_is_exclusive(v___x_3044_);
if (v_isSharedCheck_3053_ == 0)
{
v___x_3048_ = v___x_3044_;
v_isShared_3049_ = v_isSharedCheck_3053_;
goto v_resetjp_3047_;
}
else
{
lean_inc(v_a_3046_);
lean_dec(v___x_3044_);
v___x_3048_ = lean_box(0);
v_isShared_3049_ = v_isSharedCheck_3053_;
goto v_resetjp_3047_;
}
v_resetjp_3047_:
{
lean_object* v___x_3051_; 
if (v_isShared_3049_ == 0)
{
v___x_3051_ = v___x_3048_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3052_; 
v_reuseFailAlloc_3052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3052_, 0, v_a_3046_);
v___x_3051_ = v_reuseFailAlloc_3052_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
return v___x_3051_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_3015_);
return v___x_3034_;
}
}
v___jp_3016_:
{
lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; 
v___x_3018_ = l_Lean_Expr_sort___override(v_a_3017_);
v___x_3019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3019_, 0, v___x_3018_);
v___x_3020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3020_, 0, v___x_3015_);
lean_ctor_set(v___x_3020_, 1, v___x_3019_);
v___x_3021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3021_, 0, v___x_3020_);
return v___x_3021_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___boxed(lean_object* v_fvars_3058_, lean_object* v_doms_3059_, lean_object* v_body_3060_, lean_object* v_a_3061_, lean_object* v_a_3062_, lean_object* v_a_3063_, lean_object* v_a_3064_, lean_object* v_a_3065_, lean_object* v_a_3066_, lean_object* v_a_3067_){
_start:
{
lean_object* v_res_3068_; 
v_res_3068_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize(v_fvars_3058_, v_doms_3059_, v_body_3060_, v_a_3061_, v_a_3062_, v_a_3063_, v_a_3064_, v_a_3065_, v_a_3066_);
lean_dec(v_a_3066_);
lean_dec_ref(v_a_3065_);
lean_dec(v_a_3064_);
lean_dec_ref(v_a_3063_);
lean_dec(v_a_3062_);
lean_dec(v_a_3061_);
lean_dec_ref(v_doms_3059_);
lean_dec_ref(v_fvars_3058_);
return v_res_3068_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0(lean_object* v_as_3069_, size_t v_i_3070_, size_t v_stop_3071_, lean_object* v_b_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_){
_start:
{
lean_object* v___x_3080_; 
v___x_3080_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0___redArg(v_as_3069_, v_i_3070_, v_stop_3071_, v_b_3072_, v___y_3074_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_);
return v___x_3080_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0___boxed(lean_object* v_as_3081_, lean_object* v_i_3082_, lean_object* v_stop_3083_, lean_object* v_b_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_){
_start:
{
size_t v_i_boxed_3092_; size_t v_stop_boxed_3093_; lean_object* v_res_3094_; 
v_i_boxed_3092_ = lean_unbox_usize(v_i_3082_);
lean_dec(v_i_3082_);
v_stop_boxed_3093_ = lean_unbox_usize(v_stop_3083_);
lean_dec(v_stop_3083_);
v_res_3094_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0(v_as_3081_, v_i_boxed_3092_, v_stop_boxed_3093_, v_b_3084_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_, v___y_3090_);
lean_dec(v___y_3090_);
lean_dec_ref(v___y_3089_);
lean_dec(v___y_3088_);
lean_dec_ref(v___y_3087_);
lean_dec(v___y_3086_);
lean_dec(v___y_3085_);
lean_dec_ref(v_as_3081_);
return v_res_3094_;
}
}
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13(lean_object* v_e_3095_){
_start:
{
if (lean_obj_tag(v_e_3095_) == 0)
{
uint8_t v___x_3096_; 
v___x_3096_ = 2;
return v___x_3096_;
}
else
{
uint8_t v___x_3097_; 
v___x_3097_ = 0;
return v___x_3097_;
}
}
}
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13___boxed(lean_object* v_e_3098_){
_start:
{
uint8_t v_res_3099_; lean_object* v_r_3100_; 
v_res_3099_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13(v_e_3098_);
lean_dec_ref(v_e_3098_);
v_r_3100_ = lean_box(v_res_3099_);
return v_r_3100_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5(lean_object* v_opts_3101_, lean_object* v_opt_3102_){
_start:
{
lean_object* v_name_3103_; lean_object* v_defValue_3104_; lean_object* v_map_3105_; lean_object* v___x_3106_; 
v_name_3103_ = lean_ctor_get(v_opt_3102_, 0);
v_defValue_3104_ = lean_ctor_get(v_opt_3102_, 1);
v_map_3105_ = lean_ctor_get(v_opts_3101_, 0);
v___x_3106_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3105_, v_name_3103_);
if (lean_obj_tag(v___x_3106_) == 0)
{
uint8_t v___x_3107_; 
v___x_3107_ = lean_unbox(v_defValue_3104_);
return v___x_3107_;
}
else
{
lean_object* v_val_3108_; 
v_val_3108_ = lean_ctor_get(v___x_3106_, 0);
lean_inc(v_val_3108_);
lean_dec_ref(v___x_3106_);
if (lean_obj_tag(v_val_3108_) == 1)
{
uint8_t v_v_3109_; 
v_v_3109_ = lean_ctor_get_uint8(v_val_3108_, 0);
lean_dec_ref(v_val_3108_);
return v_v_3109_;
}
else
{
uint8_t v___x_3110_; 
lean_dec(v_val_3108_);
v___x_3110_ = lean_unbox(v_defValue_3104_);
return v___x_3110_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5___boxed(lean_object* v_opts_3111_, lean_object* v_opt_3112_){
_start:
{
uint8_t v_res_3113_; lean_object* v_r_3114_; 
v_res_3113_ = l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5(v_opts_3111_, v_opt_3112_);
lean_dec_ref(v_opt_3112_);
lean_dec_ref(v_opts_3111_);
v_r_3114_ = lean_box(v_res_3113_);
return v_r_3114_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14_spec__16(size_t v_sz_3115_, size_t v_i_3116_, lean_object* v_bs_3117_){
_start:
{
uint8_t v___x_3118_; 
v___x_3118_ = lean_usize_dec_lt(v_i_3116_, v_sz_3115_);
if (v___x_3118_ == 0)
{
return v_bs_3117_;
}
else
{
lean_object* v_v_3119_; lean_object* v_msg_3120_; lean_object* v___x_3121_; lean_object* v_bs_x27_3122_; size_t v___x_3123_; size_t v___x_3124_; lean_object* v___x_3125_; 
v_v_3119_ = lean_array_uget_borrowed(v_bs_3117_, v_i_3116_);
v_msg_3120_ = lean_ctor_get(v_v_3119_, 1);
lean_inc_ref(v_msg_3120_);
v___x_3121_ = lean_unsigned_to_nat(0u);
v_bs_x27_3122_ = lean_array_uset(v_bs_3117_, v_i_3116_, v___x_3121_);
v___x_3123_ = ((size_t)1ULL);
v___x_3124_ = lean_usize_add(v_i_3116_, v___x_3123_);
v___x_3125_ = lean_array_uset(v_bs_x27_3122_, v_i_3116_, v_msg_3120_);
v_i_3116_ = v___x_3124_;
v_bs_3117_ = v___x_3125_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14_spec__16___boxed(lean_object* v_sz_3127_, lean_object* v_i_3128_, lean_object* v_bs_3129_){
_start:
{
size_t v_sz_boxed_3130_; size_t v_i_boxed_3131_; lean_object* v_res_3132_; 
v_sz_boxed_3130_ = lean_unbox_usize(v_sz_3127_);
lean_dec(v_sz_3127_);
v_i_boxed_3131_ = lean_unbox_usize(v_i_3128_);
lean_dec(v_i_3128_);
v_res_3132_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14_spec__16(v_sz_boxed_3130_, v_i_boxed_3131_, v_bs_3129_);
return v_res_3132_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14___redArg(lean_object* v_oldTraces_3133_, lean_object* v_data_3134_, lean_object* v_ref_3135_, lean_object* v_msg_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_){
_start:
{
lean_object* v_fileName_3142_; lean_object* v_fileMap_3143_; lean_object* v_options_3144_; lean_object* v_currRecDepth_3145_; lean_object* v_maxRecDepth_3146_; lean_object* v_ref_3147_; lean_object* v_currNamespace_3148_; lean_object* v_openDecls_3149_; lean_object* v_initHeartbeats_3150_; lean_object* v_maxHeartbeats_3151_; lean_object* v_quotContext_3152_; lean_object* v_currMacroScope_3153_; uint8_t v_diag_3154_; lean_object* v_cancelTk_x3f_3155_; uint8_t v_suppressElabErrors_3156_; lean_object* v_inheritedTraceOptions_3157_; lean_object* v___x_3158_; lean_object* v_traceState_3159_; lean_object* v_traces_3160_; lean_object* v_ref_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; size_t v_sz_3164_; size_t v___x_3165_; lean_object* v___x_3166_; lean_object* v_msg_3167_; lean_object* v___x_3168_; lean_object* v_a_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3206_; 
v_fileName_3142_ = lean_ctor_get(v___y_3139_, 0);
v_fileMap_3143_ = lean_ctor_get(v___y_3139_, 1);
v_options_3144_ = lean_ctor_get(v___y_3139_, 2);
v_currRecDepth_3145_ = lean_ctor_get(v___y_3139_, 3);
v_maxRecDepth_3146_ = lean_ctor_get(v___y_3139_, 4);
v_ref_3147_ = lean_ctor_get(v___y_3139_, 5);
v_currNamespace_3148_ = lean_ctor_get(v___y_3139_, 6);
v_openDecls_3149_ = lean_ctor_get(v___y_3139_, 7);
v_initHeartbeats_3150_ = lean_ctor_get(v___y_3139_, 8);
v_maxHeartbeats_3151_ = lean_ctor_get(v___y_3139_, 9);
v_quotContext_3152_ = lean_ctor_get(v___y_3139_, 10);
v_currMacroScope_3153_ = lean_ctor_get(v___y_3139_, 11);
v_diag_3154_ = lean_ctor_get_uint8(v___y_3139_, sizeof(void*)*14);
v_cancelTk_x3f_3155_ = lean_ctor_get(v___y_3139_, 12);
v_suppressElabErrors_3156_ = lean_ctor_get_uint8(v___y_3139_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_3157_ = lean_ctor_get(v___y_3139_, 13);
v___x_3158_ = lean_st_ref_get(v___y_3140_);
v_traceState_3159_ = lean_ctor_get(v___x_3158_, 4);
lean_inc_ref(v_traceState_3159_);
lean_dec(v___x_3158_);
v_traces_3160_ = lean_ctor_get(v_traceState_3159_, 0);
lean_inc_ref(v_traces_3160_);
lean_dec_ref(v_traceState_3159_);
v_ref_3161_ = l_Lean_replaceRef(v_ref_3135_, v_ref_3147_);
lean_inc_ref(v_inheritedTraceOptions_3157_);
lean_inc(v_cancelTk_x3f_3155_);
lean_inc(v_currMacroScope_3153_);
lean_inc(v_quotContext_3152_);
lean_inc(v_maxHeartbeats_3151_);
lean_inc(v_initHeartbeats_3150_);
lean_inc(v_openDecls_3149_);
lean_inc(v_currNamespace_3148_);
lean_inc(v_maxRecDepth_3146_);
lean_inc(v_currRecDepth_3145_);
lean_inc_ref(v_options_3144_);
lean_inc_ref(v_fileMap_3143_);
lean_inc_ref(v_fileName_3142_);
v___x_3162_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_3162_, 0, v_fileName_3142_);
lean_ctor_set(v___x_3162_, 1, v_fileMap_3143_);
lean_ctor_set(v___x_3162_, 2, v_options_3144_);
lean_ctor_set(v___x_3162_, 3, v_currRecDepth_3145_);
lean_ctor_set(v___x_3162_, 4, v_maxRecDepth_3146_);
lean_ctor_set(v___x_3162_, 5, v_ref_3161_);
lean_ctor_set(v___x_3162_, 6, v_currNamespace_3148_);
lean_ctor_set(v___x_3162_, 7, v_openDecls_3149_);
lean_ctor_set(v___x_3162_, 8, v_initHeartbeats_3150_);
lean_ctor_set(v___x_3162_, 9, v_maxHeartbeats_3151_);
lean_ctor_set(v___x_3162_, 10, v_quotContext_3152_);
lean_ctor_set(v___x_3162_, 11, v_currMacroScope_3153_);
lean_ctor_set(v___x_3162_, 12, v_cancelTk_x3f_3155_);
lean_ctor_set(v___x_3162_, 13, v_inheritedTraceOptions_3157_);
lean_ctor_set_uint8(v___x_3162_, sizeof(void*)*14, v_diag_3154_);
lean_ctor_set_uint8(v___x_3162_, sizeof(void*)*14 + 1, v_suppressElabErrors_3156_);
v___x_3163_ = l_Lean_PersistentArray_toArray___redArg(v_traces_3160_);
lean_dec_ref(v_traces_3160_);
v_sz_3164_ = lean_array_size(v___x_3163_);
v___x_3165_ = ((size_t)0ULL);
v___x_3166_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14_spec__16(v_sz_3164_, v___x_3165_, v___x_3163_);
v_msg_3167_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_3167_, 0, v_data_3134_);
lean_ctor_set(v_msg_3167_, 1, v_msg_3136_);
lean_ctor_set(v_msg_3167_, 2, v___x_3166_);
v___x_3168_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7_spec__8(v_msg_3167_, v___y_3137_, v___y_3138_, v___x_3162_, v___y_3140_);
lean_dec_ref(v___x_3162_);
v_a_3169_ = lean_ctor_get(v___x_3168_, 0);
v_isSharedCheck_3206_ = !lean_is_exclusive(v___x_3168_);
if (v_isSharedCheck_3206_ == 0)
{
v___x_3171_ = v___x_3168_;
v_isShared_3172_ = v_isSharedCheck_3206_;
goto v_resetjp_3170_;
}
else
{
lean_inc(v_a_3169_);
lean_dec(v___x_3168_);
v___x_3171_ = lean_box(0);
v_isShared_3172_ = v_isSharedCheck_3206_;
goto v_resetjp_3170_;
}
v_resetjp_3170_:
{
lean_object* v___x_3173_; lean_object* v_traceState_3174_; lean_object* v_env_3175_; lean_object* v_nextMacroScope_3176_; lean_object* v_ngen_3177_; lean_object* v_auxDeclNGen_3178_; lean_object* v_cache_3179_; lean_object* v_messages_3180_; lean_object* v_infoState_3181_; lean_object* v_snapshotTasks_3182_; lean_object* v___x_3184_; uint8_t v_isShared_3185_; uint8_t v_isSharedCheck_3205_; 
v___x_3173_ = lean_st_ref_take(v___y_3140_);
v_traceState_3174_ = lean_ctor_get(v___x_3173_, 4);
v_env_3175_ = lean_ctor_get(v___x_3173_, 0);
v_nextMacroScope_3176_ = lean_ctor_get(v___x_3173_, 1);
v_ngen_3177_ = lean_ctor_get(v___x_3173_, 2);
v_auxDeclNGen_3178_ = lean_ctor_get(v___x_3173_, 3);
v_cache_3179_ = lean_ctor_get(v___x_3173_, 5);
v_messages_3180_ = lean_ctor_get(v___x_3173_, 6);
v_infoState_3181_ = lean_ctor_get(v___x_3173_, 7);
v_snapshotTasks_3182_ = lean_ctor_get(v___x_3173_, 8);
v_isSharedCheck_3205_ = !lean_is_exclusive(v___x_3173_);
if (v_isSharedCheck_3205_ == 0)
{
v___x_3184_ = v___x_3173_;
v_isShared_3185_ = v_isSharedCheck_3205_;
goto v_resetjp_3183_;
}
else
{
lean_inc(v_snapshotTasks_3182_);
lean_inc(v_infoState_3181_);
lean_inc(v_messages_3180_);
lean_inc(v_cache_3179_);
lean_inc(v_traceState_3174_);
lean_inc(v_auxDeclNGen_3178_);
lean_inc(v_ngen_3177_);
lean_inc(v_nextMacroScope_3176_);
lean_inc(v_env_3175_);
lean_dec(v___x_3173_);
v___x_3184_ = lean_box(0);
v_isShared_3185_ = v_isSharedCheck_3205_;
goto v_resetjp_3183_;
}
v_resetjp_3183_:
{
uint64_t v_tid_3186_; lean_object* v___x_3188_; uint8_t v_isShared_3189_; uint8_t v_isSharedCheck_3203_; 
v_tid_3186_ = lean_ctor_get_uint64(v_traceState_3174_, sizeof(void*)*1);
v_isSharedCheck_3203_ = !lean_is_exclusive(v_traceState_3174_);
if (v_isSharedCheck_3203_ == 0)
{
lean_object* v_unused_3204_; 
v_unused_3204_ = lean_ctor_get(v_traceState_3174_, 0);
lean_dec(v_unused_3204_);
v___x_3188_ = v_traceState_3174_;
v_isShared_3189_ = v_isSharedCheck_3203_;
goto v_resetjp_3187_;
}
else
{
lean_dec(v_traceState_3174_);
v___x_3188_ = lean_box(0);
v_isShared_3189_ = v_isSharedCheck_3203_;
goto v_resetjp_3187_;
}
v_resetjp_3187_:
{
lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3193_; 
v___x_3190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3190_, 0, v_ref_3135_);
lean_ctor_set(v___x_3190_, 1, v_a_3169_);
v___x_3191_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_3133_, v___x_3190_);
if (v_isShared_3189_ == 0)
{
lean_ctor_set(v___x_3188_, 0, v___x_3191_);
v___x_3193_ = v___x_3188_;
goto v_reusejp_3192_;
}
else
{
lean_object* v_reuseFailAlloc_3202_; 
v_reuseFailAlloc_3202_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3202_, 0, v___x_3191_);
lean_ctor_set_uint64(v_reuseFailAlloc_3202_, sizeof(void*)*1, v_tid_3186_);
v___x_3193_ = v_reuseFailAlloc_3202_;
goto v_reusejp_3192_;
}
v_reusejp_3192_:
{
lean_object* v___x_3195_; 
if (v_isShared_3185_ == 0)
{
lean_ctor_set(v___x_3184_, 4, v___x_3193_);
v___x_3195_ = v___x_3184_;
goto v_reusejp_3194_;
}
else
{
lean_object* v_reuseFailAlloc_3201_; 
v_reuseFailAlloc_3201_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3201_, 0, v_env_3175_);
lean_ctor_set(v_reuseFailAlloc_3201_, 1, v_nextMacroScope_3176_);
lean_ctor_set(v_reuseFailAlloc_3201_, 2, v_ngen_3177_);
lean_ctor_set(v_reuseFailAlloc_3201_, 3, v_auxDeclNGen_3178_);
lean_ctor_set(v_reuseFailAlloc_3201_, 4, v___x_3193_);
lean_ctor_set(v_reuseFailAlloc_3201_, 5, v_cache_3179_);
lean_ctor_set(v_reuseFailAlloc_3201_, 6, v_messages_3180_);
lean_ctor_set(v_reuseFailAlloc_3201_, 7, v_infoState_3181_);
lean_ctor_set(v_reuseFailAlloc_3201_, 8, v_snapshotTasks_3182_);
v___x_3195_ = v_reuseFailAlloc_3201_;
goto v_reusejp_3194_;
}
v_reusejp_3194_:
{
lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3199_; 
v___x_3196_ = lean_st_ref_set(v___y_3140_, v___x_3195_);
v___x_3197_ = lean_box(0);
if (v_isShared_3172_ == 0)
{
lean_ctor_set(v___x_3171_, 0, v___x_3197_);
v___x_3199_ = v___x_3171_;
goto v_reusejp_3198_;
}
else
{
lean_object* v_reuseFailAlloc_3200_; 
v_reuseFailAlloc_3200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3200_, 0, v___x_3197_);
v___x_3199_ = v_reuseFailAlloc_3200_;
goto v_reusejp_3198_;
}
v_reusejp_3198_:
{
return v___x_3199_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14___redArg___boxed(lean_object* v_oldTraces_3207_, lean_object* v_data_3208_, lean_object* v_ref_3209_, lean_object* v_msg_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_){
_start:
{
lean_object* v_res_3216_; 
v_res_3216_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14___redArg(v_oldTraces_3207_, v_data_3208_, v_ref_3209_, v_msg_3210_, v___y_3211_, v___y_3212_, v___y_3213_, v___y_3214_);
lean_dec(v___y_3214_);
lean_dec_ref(v___y_3213_);
lean_dec(v___y_3212_);
lean_dec_ref(v___y_3211_);
return v_res_3216_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__15___redArg(lean_object* v_x_3217_){
_start:
{
if (lean_obj_tag(v_x_3217_) == 0)
{
lean_object* v_a_3219_; lean_object* v___x_3221_; uint8_t v_isShared_3222_; uint8_t v_isSharedCheck_3226_; 
v_a_3219_ = lean_ctor_get(v_x_3217_, 0);
v_isSharedCheck_3226_ = !lean_is_exclusive(v_x_3217_);
if (v_isSharedCheck_3226_ == 0)
{
v___x_3221_ = v_x_3217_;
v_isShared_3222_ = v_isSharedCheck_3226_;
goto v_resetjp_3220_;
}
else
{
lean_inc(v_a_3219_);
lean_dec(v_x_3217_);
v___x_3221_ = lean_box(0);
v_isShared_3222_ = v_isSharedCheck_3226_;
goto v_resetjp_3220_;
}
v_resetjp_3220_:
{
lean_object* v___x_3224_; 
if (v_isShared_3222_ == 0)
{
lean_ctor_set_tag(v___x_3221_, 1);
v___x_3224_ = v___x_3221_;
goto v_reusejp_3223_;
}
else
{
lean_object* v_reuseFailAlloc_3225_; 
v_reuseFailAlloc_3225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3225_, 0, v_a_3219_);
v___x_3224_ = v_reuseFailAlloc_3225_;
goto v_reusejp_3223_;
}
v_reusejp_3223_:
{
return v___x_3224_;
}
}
}
else
{
lean_object* v_a_3227_; lean_object* v___x_3229_; uint8_t v_isShared_3230_; uint8_t v_isSharedCheck_3234_; 
v_a_3227_ = lean_ctor_get(v_x_3217_, 0);
v_isSharedCheck_3234_ = !lean_is_exclusive(v_x_3217_);
if (v_isSharedCheck_3234_ == 0)
{
v___x_3229_ = v_x_3217_;
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
else
{
lean_inc(v_a_3227_);
lean_dec(v_x_3217_);
v___x_3229_ = lean_box(0);
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
v_resetjp_3228_:
{
lean_object* v___x_3232_; 
if (v_isShared_3230_ == 0)
{
lean_ctor_set_tag(v___x_3229_, 0);
v___x_3232_ = v___x_3229_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v_a_3227_);
v___x_3232_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
return v___x_3232_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__15___redArg___boxed(lean_object* v_x_3235_, lean_object* v___y_3236_){
_start:
{
lean_object* v_res_3237_; 
v_res_3237_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__15___redArg(v_x_3235_);
return v_res_3237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__16(lean_object* v_opts_3238_, lean_object* v_opt_3239_){
_start:
{
lean_object* v_name_3240_; lean_object* v_defValue_3241_; lean_object* v_map_3242_; lean_object* v___x_3243_; 
v_name_3240_ = lean_ctor_get(v_opt_3239_, 0);
v_defValue_3241_ = lean_ctor_get(v_opt_3239_, 1);
v_map_3242_ = lean_ctor_get(v_opts_3238_, 0);
v___x_3243_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3242_, v_name_3240_);
if (lean_obj_tag(v___x_3243_) == 0)
{
lean_inc(v_defValue_3241_);
return v_defValue_3241_;
}
else
{
lean_object* v_val_3244_; 
v_val_3244_ = lean_ctor_get(v___x_3243_, 0);
lean_inc(v_val_3244_);
lean_dec_ref(v___x_3243_);
if (lean_obj_tag(v_val_3244_) == 3)
{
lean_object* v_v_3245_; 
v_v_3245_ = lean_ctor_get(v_val_3244_, 0);
lean_inc(v_v_3245_);
lean_dec_ref(v_val_3244_);
return v_v_3245_;
}
else
{
lean_dec(v_val_3244_);
lean_inc(v_defValue_3241_);
return v_defValue_3241_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__16___boxed(lean_object* v_opts_3246_, lean_object* v_opt_3247_){
_start:
{
lean_object* v_res_3248_; 
v_res_3248_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__16(v_opts_3246_, v_opt_3247_);
lean_dec_ref(v_opt_3247_);
lean_dec_ref(v_opts_3246_);
return v_res_3248_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__0(void){
_start:
{
lean_object* v___x_3249_; 
v___x_3249_ = lean_mk_string_unchecked(" ", 1, 1);
return v___x_3249_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__1(void){
_start:
{
lean_object* v___x_3250_; lean_object* v___x_3251_; 
v___x_3250_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__0);
v___x_3251_ = l_Lean_stringToMessageData(v___x_3250_);
return v___x_3251_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__2(void){
_start:
{
lean_object* v___x_3252_; 
v___x_3252_ = lean_mk_string_unchecked("<exception thrown while producing trace node message>", 53, 53);
return v___x_3252_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__3(void){
_start:
{
lean_object* v___x_3253_; lean_object* v___x_3254_; 
v___x_3253_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__2);
v___x_3254_ = l_Lean_stringToMessageData(v___x_3253_);
return v___x_3254_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__4(void){
_start:
{
lean_object* v___x_3255_; double v___x_3256_; 
v___x_3255_ = lean_unsigned_to_nat(1000u);
v___x_3256_ = lean_float_of_nat(v___x_3255_);
return v___x_3256_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6(lean_object* v_cls_3257_, uint8_t v_collapsed_3258_, lean_object* v_tag_3259_, lean_object* v_opts_3260_, uint8_t v_clsEnabled_3261_, lean_object* v_oldTraces_3262_, lean_object* v_msg_3263_, lean_object* v_resStartStop_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_){
_start:
{
lean_object* v_fst_3272_; lean_object* v_snd_3273_; lean_object* v___x_3275_; uint8_t v_isShared_3276_; uint8_t v_isSharedCheck_3371_; 
v_fst_3272_ = lean_ctor_get(v_resStartStop_3264_, 0);
v_snd_3273_ = lean_ctor_get(v_resStartStop_3264_, 1);
v_isSharedCheck_3371_ = !lean_is_exclusive(v_resStartStop_3264_);
if (v_isSharedCheck_3371_ == 0)
{
v___x_3275_ = v_resStartStop_3264_;
v_isShared_3276_ = v_isSharedCheck_3371_;
goto v_resetjp_3274_;
}
else
{
lean_inc(v_snd_3273_);
lean_inc(v_fst_3272_);
lean_dec(v_resStartStop_3264_);
v___x_3275_ = lean_box(0);
v_isShared_3276_ = v_isSharedCheck_3371_;
goto v_resetjp_3274_;
}
v_resetjp_3274_:
{
lean_object* v___y_3278_; lean_object* v___y_3279_; lean_object* v_data_3280_; lean_object* v_fst_3291_; lean_object* v_snd_3292_; lean_object* v___x_3294_; uint8_t v_isShared_3295_; uint8_t v_isSharedCheck_3370_; 
v_fst_3291_ = lean_ctor_get(v_snd_3273_, 0);
v_snd_3292_ = lean_ctor_get(v_snd_3273_, 1);
v_isSharedCheck_3370_ = !lean_is_exclusive(v_snd_3273_);
if (v_isSharedCheck_3370_ == 0)
{
v___x_3294_ = v_snd_3273_;
v_isShared_3295_ = v_isSharedCheck_3370_;
goto v_resetjp_3293_;
}
else
{
lean_inc(v_snd_3292_);
lean_inc(v_fst_3291_);
lean_dec(v_snd_3273_);
v___x_3294_ = lean_box(0);
v_isShared_3295_ = v_isSharedCheck_3370_;
goto v_resetjp_3293_;
}
v___jp_3277_:
{
lean_object* v___x_3281_; 
lean_inc(v___y_3278_);
v___x_3281_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14___redArg(v_oldTraces_3262_, v_data_3280_, v___y_3278_, v___y_3279_, v___y_3267_, v___y_3268_, v___y_3269_, v___y_3270_);
if (lean_obj_tag(v___x_3281_) == 0)
{
lean_object* v___x_3282_; 
lean_dec_ref(v___x_3281_);
v___x_3282_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__15___redArg(v_fst_3272_);
return v___x_3282_;
}
else
{
lean_object* v_a_3283_; lean_object* v___x_3285_; uint8_t v_isShared_3286_; uint8_t v_isSharedCheck_3290_; 
lean_dec(v_fst_3272_);
v_a_3283_ = lean_ctor_get(v___x_3281_, 0);
v_isSharedCheck_3290_ = !lean_is_exclusive(v___x_3281_);
if (v_isSharedCheck_3290_ == 0)
{
v___x_3285_ = v___x_3281_;
v_isShared_3286_ = v_isSharedCheck_3290_;
goto v_resetjp_3284_;
}
else
{
lean_inc(v_a_3283_);
lean_dec(v___x_3281_);
v___x_3285_ = lean_box(0);
v_isShared_3286_ = v_isSharedCheck_3290_;
goto v_resetjp_3284_;
}
v_resetjp_3284_:
{
lean_object* v___x_3288_; 
if (v_isShared_3286_ == 0)
{
v___x_3288_ = v___x_3285_;
goto v_reusejp_3287_;
}
else
{
lean_object* v_reuseFailAlloc_3289_; 
v_reuseFailAlloc_3289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3289_, 0, v_a_3283_);
v___x_3288_ = v_reuseFailAlloc_3289_;
goto v_reusejp_3287_;
}
v_reusejp_3287_:
{
return v___x_3288_;
}
}
}
}
v_resetjp_3293_:
{
lean_object* v___x_3296_; uint8_t v___x_3297_; lean_object* v___y_3299_; lean_object* v_a_3300_; uint8_t v___y_3324_; double v___y_3355_; 
v___x_3296_ = l_Lean_trace_profiler;
v___x_3297_ = l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5(v_opts_3260_, v___x_3296_);
if (v___x_3297_ == 0)
{
v___y_3324_ = v___x_3297_;
goto v___jp_3323_;
}
else
{
lean_object* v___x_3360_; uint8_t v___x_3361_; 
v___x_3360_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3361_ = l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5(v_opts_3260_, v___x_3360_);
if (v___x_3361_ == 0)
{
lean_object* v___x_3362_; lean_object* v___x_3363_; double v___x_3364_; double v___x_3365_; double v___x_3366_; 
v___x_3362_ = l_Lean_trace_profiler_threshold;
v___x_3363_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__16(v_opts_3260_, v___x_3362_);
v___x_3364_ = lean_float_of_nat(v___x_3363_);
v___x_3365_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__4, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__4_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__4);
v___x_3366_ = lean_float_div(v___x_3364_, v___x_3365_);
v___y_3355_ = v___x_3366_;
goto v___jp_3354_;
}
else
{
lean_object* v___x_3367_; lean_object* v___x_3368_; double v___x_3369_; 
v___x_3367_ = l_Lean_trace_profiler_threshold;
v___x_3368_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__16(v_opts_3260_, v___x_3367_);
v___x_3369_ = lean_float_of_nat(v___x_3368_);
v___y_3355_ = v___x_3369_;
goto v___jp_3354_;
}
}
v___jp_3298_:
{
uint8_t v_result_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3306_; 
v_result_3301_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13(v_fst_3272_);
v___x_3302_ = l_Lean_TraceResult_toEmoji(v_result_3301_);
v___x_3303_ = l_Lean_stringToMessageData(v___x_3302_);
v___x_3304_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__1);
if (v_isShared_3295_ == 0)
{
lean_ctor_set_tag(v___x_3294_, 7);
lean_ctor_set(v___x_3294_, 1, v___x_3304_);
lean_ctor_set(v___x_3294_, 0, v___x_3303_);
v___x_3306_ = v___x_3294_;
goto v_reusejp_3305_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v___x_3303_);
lean_ctor_set(v_reuseFailAlloc_3317_, 1, v___x_3304_);
v___x_3306_ = v_reuseFailAlloc_3317_;
goto v_reusejp_3305_;
}
v_reusejp_3305_:
{
lean_object* v_m_3308_; 
if (v_isShared_3276_ == 0)
{
lean_ctor_set_tag(v___x_3275_, 7);
lean_ctor_set(v___x_3275_, 1, v_a_3300_);
lean_ctor_set(v___x_3275_, 0, v___x_3306_);
v_m_3308_ = v___x_3275_;
goto v_reusejp_3307_;
}
else
{
lean_object* v_reuseFailAlloc_3316_; 
v_reuseFailAlloc_3316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3316_, 0, v___x_3306_);
lean_ctor_set(v_reuseFailAlloc_3316_, 1, v_a_3300_);
v_m_3308_ = v_reuseFailAlloc_3316_;
goto v_reusejp_3307_;
}
v_reusejp_3307_:
{
lean_object* v___x_3309_; lean_object* v___x_3310_; double v___x_3311_; lean_object* v_data_3312_; 
v___x_3309_ = lean_box(v_result_3301_);
v___x_3310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3310_, 0, v___x_3309_);
v___x_3311_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0);
lean_inc_ref(v_tag_3259_);
lean_inc_ref(v___x_3310_);
lean_inc(v_cls_3257_);
v_data_3312_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3312_, 0, v_cls_3257_);
lean_ctor_set(v_data_3312_, 1, v___x_3310_);
lean_ctor_set(v_data_3312_, 2, v_tag_3259_);
lean_ctor_set_float(v_data_3312_, sizeof(void*)*3, v___x_3311_);
lean_ctor_set_float(v_data_3312_, sizeof(void*)*3 + 8, v___x_3311_);
lean_ctor_set_uint8(v_data_3312_, sizeof(void*)*3 + 16, v_collapsed_3258_);
if (v___x_3297_ == 0)
{
lean_dec_ref(v___x_3310_);
lean_dec(v_snd_3292_);
lean_dec(v_fst_3291_);
lean_dec_ref(v_tag_3259_);
lean_dec(v_cls_3257_);
v___y_3278_ = v___y_3299_;
v___y_3279_ = v_m_3308_;
v_data_3280_ = v_data_3312_;
goto v___jp_3277_;
}
else
{
lean_object* v_data_3313_; double v___x_3314_; double v___x_3315_; 
lean_dec_ref(v_data_3312_);
v_data_3313_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3313_, 0, v_cls_3257_);
lean_ctor_set(v_data_3313_, 1, v___x_3310_);
lean_ctor_set(v_data_3313_, 2, v_tag_3259_);
v___x_3314_ = lean_unbox_float(v_fst_3291_);
lean_dec(v_fst_3291_);
lean_ctor_set_float(v_data_3313_, sizeof(void*)*3, v___x_3314_);
v___x_3315_ = lean_unbox_float(v_snd_3292_);
lean_dec(v_snd_3292_);
lean_ctor_set_float(v_data_3313_, sizeof(void*)*3 + 8, v___x_3315_);
lean_ctor_set_uint8(v_data_3313_, sizeof(void*)*3 + 16, v_collapsed_3258_);
v___y_3278_ = v___y_3299_;
v___y_3279_ = v_m_3308_;
v_data_3280_ = v_data_3313_;
goto v___jp_3277_;
}
}
}
}
v___jp_3318_:
{
lean_object* v_ref_3319_; lean_object* v___x_3320_; 
v_ref_3319_ = lean_ctor_get(v___y_3269_, 5);
lean_inc(v___y_3270_);
lean_inc_ref(v___y_3269_);
lean_inc(v___y_3268_);
lean_inc_ref(v___y_3267_);
lean_inc(v___y_3266_);
lean_inc(v___y_3265_);
lean_inc(v_fst_3272_);
v___x_3320_ = lean_apply_8(v_msg_3263_, v_fst_3272_, v___y_3265_, v___y_3266_, v___y_3267_, v___y_3268_, v___y_3269_, v___y_3270_, lean_box(0));
if (lean_obj_tag(v___x_3320_) == 0)
{
lean_object* v_a_3321_; 
v_a_3321_ = lean_ctor_get(v___x_3320_, 0);
lean_inc(v_a_3321_);
lean_dec_ref(v___x_3320_);
v___y_3299_ = v_ref_3319_;
v_a_3300_ = v_a_3321_;
goto v___jp_3298_;
}
else
{
lean_object* v___x_3322_; 
lean_dec_ref(v___x_3320_);
v___x_3322_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__3);
v___y_3299_ = v_ref_3319_;
v_a_3300_ = v___x_3322_;
goto v___jp_3298_;
}
}
v___jp_3323_:
{
if (v_clsEnabled_3261_ == 0)
{
if (v___y_3324_ == 0)
{
lean_object* v___x_3325_; lean_object* v_traceState_3326_; lean_object* v_env_3327_; lean_object* v_nextMacroScope_3328_; lean_object* v_ngen_3329_; lean_object* v_auxDeclNGen_3330_; lean_object* v_cache_3331_; lean_object* v_messages_3332_; lean_object* v_infoState_3333_; lean_object* v_snapshotTasks_3334_; lean_object* v___x_3336_; uint8_t v_isShared_3337_; uint8_t v_isSharedCheck_3353_; 
lean_del_object(v___x_3294_);
lean_dec(v_snd_3292_);
lean_dec(v_fst_3291_);
lean_del_object(v___x_3275_);
lean_dec_ref(v_msg_3263_);
lean_dec_ref(v_tag_3259_);
lean_dec(v_cls_3257_);
v___x_3325_ = lean_st_ref_take(v___y_3270_);
v_traceState_3326_ = lean_ctor_get(v___x_3325_, 4);
v_env_3327_ = lean_ctor_get(v___x_3325_, 0);
v_nextMacroScope_3328_ = lean_ctor_get(v___x_3325_, 1);
v_ngen_3329_ = lean_ctor_get(v___x_3325_, 2);
v_auxDeclNGen_3330_ = lean_ctor_get(v___x_3325_, 3);
v_cache_3331_ = lean_ctor_get(v___x_3325_, 5);
v_messages_3332_ = lean_ctor_get(v___x_3325_, 6);
v_infoState_3333_ = lean_ctor_get(v___x_3325_, 7);
v_snapshotTasks_3334_ = lean_ctor_get(v___x_3325_, 8);
v_isSharedCheck_3353_ = !lean_is_exclusive(v___x_3325_);
if (v_isSharedCheck_3353_ == 0)
{
v___x_3336_ = v___x_3325_;
v_isShared_3337_ = v_isSharedCheck_3353_;
goto v_resetjp_3335_;
}
else
{
lean_inc(v_snapshotTasks_3334_);
lean_inc(v_infoState_3333_);
lean_inc(v_messages_3332_);
lean_inc(v_cache_3331_);
lean_inc(v_traceState_3326_);
lean_inc(v_auxDeclNGen_3330_);
lean_inc(v_ngen_3329_);
lean_inc(v_nextMacroScope_3328_);
lean_inc(v_env_3327_);
lean_dec(v___x_3325_);
v___x_3336_ = lean_box(0);
v_isShared_3337_ = v_isSharedCheck_3353_;
goto v_resetjp_3335_;
}
v_resetjp_3335_:
{
uint64_t v_tid_3338_; lean_object* v_traces_3339_; lean_object* v___x_3341_; uint8_t v_isShared_3342_; uint8_t v_isSharedCheck_3352_; 
v_tid_3338_ = lean_ctor_get_uint64(v_traceState_3326_, sizeof(void*)*1);
v_traces_3339_ = lean_ctor_get(v_traceState_3326_, 0);
v_isSharedCheck_3352_ = !lean_is_exclusive(v_traceState_3326_);
if (v_isSharedCheck_3352_ == 0)
{
v___x_3341_ = v_traceState_3326_;
v_isShared_3342_ = v_isSharedCheck_3352_;
goto v_resetjp_3340_;
}
else
{
lean_inc(v_traces_3339_);
lean_dec(v_traceState_3326_);
v___x_3341_ = lean_box(0);
v_isShared_3342_ = v_isSharedCheck_3352_;
goto v_resetjp_3340_;
}
v_resetjp_3340_:
{
lean_object* v___x_3343_; lean_object* v___x_3345_; 
v___x_3343_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_3262_, v_traces_3339_);
lean_dec_ref(v_traces_3339_);
if (v_isShared_3342_ == 0)
{
lean_ctor_set(v___x_3341_, 0, v___x_3343_);
v___x_3345_ = v___x_3341_;
goto v_reusejp_3344_;
}
else
{
lean_object* v_reuseFailAlloc_3351_; 
v_reuseFailAlloc_3351_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3351_, 0, v___x_3343_);
lean_ctor_set_uint64(v_reuseFailAlloc_3351_, sizeof(void*)*1, v_tid_3338_);
v___x_3345_ = v_reuseFailAlloc_3351_;
goto v_reusejp_3344_;
}
v_reusejp_3344_:
{
lean_object* v___x_3347_; 
if (v_isShared_3337_ == 0)
{
lean_ctor_set(v___x_3336_, 4, v___x_3345_);
v___x_3347_ = v___x_3336_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3350_; 
v_reuseFailAlloc_3350_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3350_, 0, v_env_3327_);
lean_ctor_set(v_reuseFailAlloc_3350_, 1, v_nextMacroScope_3328_);
lean_ctor_set(v_reuseFailAlloc_3350_, 2, v_ngen_3329_);
lean_ctor_set(v_reuseFailAlloc_3350_, 3, v_auxDeclNGen_3330_);
lean_ctor_set(v_reuseFailAlloc_3350_, 4, v___x_3345_);
lean_ctor_set(v_reuseFailAlloc_3350_, 5, v_cache_3331_);
lean_ctor_set(v_reuseFailAlloc_3350_, 6, v_messages_3332_);
lean_ctor_set(v_reuseFailAlloc_3350_, 7, v_infoState_3333_);
lean_ctor_set(v_reuseFailAlloc_3350_, 8, v_snapshotTasks_3334_);
v___x_3347_ = v_reuseFailAlloc_3350_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
lean_object* v___x_3348_; lean_object* v___x_3349_; 
v___x_3348_ = lean_st_ref_set(v___y_3270_, v___x_3347_);
v___x_3349_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__15___redArg(v_fst_3272_);
return v___x_3349_;
}
}
}
}
}
else
{
goto v___jp_3318_;
}
}
else
{
goto v___jp_3318_;
}
}
v___jp_3354_:
{
double v___x_3356_; double v___x_3357_; double v___x_3358_; uint8_t v___x_3359_; 
v___x_3356_ = lean_unbox_float(v_snd_3292_);
v___x_3357_ = lean_unbox_float(v_fst_3291_);
v___x_3358_ = lean_float_sub(v___x_3356_, v___x_3357_);
v___x_3359_ = lean_float_decLt(v___y_3355_, v___x_3358_);
v___y_3324_ = v___x_3359_;
goto v___jp_3323_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___boxed(lean_object* v_cls_3372_, lean_object* v_collapsed_3373_, lean_object* v_tag_3374_, lean_object* v_opts_3375_, lean_object* v_clsEnabled_3376_, lean_object* v_oldTraces_3377_, lean_object* v_msg_3378_, lean_object* v_resStartStop_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_){
_start:
{
uint8_t v_collapsed_boxed_3387_; uint8_t v_clsEnabled_boxed_3388_; lean_object* v_res_3389_; 
v_collapsed_boxed_3387_ = lean_unbox(v_collapsed_3373_);
v_clsEnabled_boxed_3388_ = lean_unbox(v_clsEnabled_3376_);
v_res_3389_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6(v_cls_3372_, v_collapsed_boxed_3387_, v_tag_3374_, v_opts_3375_, v_clsEnabled_boxed_3388_, v_oldTraces_3377_, v_msg_3378_, v_resStartStop_3379_, v___y_3380_, v___y_3381_, v___y_3382_, v___y_3383_, v___y_3384_, v___y_3385_);
lean_dec(v___y_3385_);
lean_dec_ref(v___y_3384_);
lean_dec(v___y_3383_);
lean_dec_ref(v___y_3382_);
lean_dec(v___y_3381_);
lean_dec(v___y_3380_);
lean_dec_ref(v_opts_3375_);
return v_res_3389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg___lam__0(lean_object* v_x_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_){
_start:
{
lean_object* v___x_3398_; 
lean_inc(v___y_3392_);
lean_inc(v___y_3391_);
v___x_3398_ = lean_apply_7(v_x_3390_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_, v___y_3395_, v___y_3396_, lean_box(0));
return v___x_3398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg___lam__0___boxed(lean_object* v_x_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_){
_start:
{
lean_object* v_res_3407_; 
v_res_3407_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg___lam__0(v_x_3399_, v___y_3400_, v___y_3401_, v___y_3402_, v___y_3403_, v___y_3404_, v___y_3405_);
lean_dec(v___y_3401_);
lean_dec(v___y_3400_);
return v_res_3407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg(lean_object* v_lctx_3408_, lean_object* v_localInsts_3409_, lean_object* v_x_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_){
_start:
{
lean_object* v___f_3418_; lean_object* v___x_3419_; 
lean_inc(v___y_3412_);
lean_inc(v___y_3411_);
v___f_3418_ = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_3418_, 0, v_x_3410_);
lean_closure_set(v___f_3418_, 1, v___y_3411_);
lean_closure_set(v___f_3418_, 2, v___y_3412_);
v___x_3419_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_3408_, v_localInsts_3409_, v___f_3418_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_);
if (lean_obj_tag(v___x_3419_) == 0)
{
return v___x_3419_;
}
else
{
lean_object* v_a_3420_; lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3427_; 
v_a_3420_ = lean_ctor_get(v___x_3419_, 0);
v_isSharedCheck_3427_ = !lean_is_exclusive(v___x_3419_);
if (v_isSharedCheck_3427_ == 0)
{
v___x_3422_ = v___x_3419_;
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
else
{
lean_inc(v_a_3420_);
lean_dec(v___x_3419_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
lean_object* v___x_3425_; 
if (v_isShared_3423_ == 0)
{
v___x_3425_ = v___x_3422_;
goto v_reusejp_3424_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v_a_3420_);
v___x_3425_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3424_;
}
v_reusejp_3424_:
{
return v___x_3425_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg___boxed(lean_object* v_lctx_3428_, lean_object* v_localInsts_3429_, lean_object* v_x_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_){
_start:
{
lean_object* v_res_3438_; 
v_res_3438_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg(v_lctx_3428_, v_localInsts_3429_, v_x_3430_, v___y_3431_, v___y_3432_, v___y_3433_, v___y_3434_, v___y_3435_, v___y_3436_);
lean_dec(v___y_3436_);
lean_dec_ref(v___y_3435_);
lean_dec(v___y_3434_);
lean_dec_ref(v___y_3433_);
lean_dec(v___y_3432_);
lean_dec(v___y_3431_);
return v_res_3438_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7___redArg(lean_object* v___y_3439_){
_start:
{
lean_object* v___x_3441_; lean_object* v_ngen_3442_; lean_object* v_namePrefix_3443_; lean_object* v_idx_3444_; lean_object* v___x_3446_; uint8_t v_isShared_3447_; uint8_t v_isSharedCheck_3473_; 
v___x_3441_ = lean_st_ref_get(v___y_3439_);
v_ngen_3442_ = lean_ctor_get(v___x_3441_, 2);
lean_inc_ref(v_ngen_3442_);
lean_dec(v___x_3441_);
v_namePrefix_3443_ = lean_ctor_get(v_ngen_3442_, 0);
v_idx_3444_ = lean_ctor_get(v_ngen_3442_, 1);
v_isSharedCheck_3473_ = !lean_is_exclusive(v_ngen_3442_);
if (v_isSharedCheck_3473_ == 0)
{
v___x_3446_ = v_ngen_3442_;
v_isShared_3447_ = v_isSharedCheck_3473_;
goto v_resetjp_3445_;
}
else
{
lean_inc(v_idx_3444_);
lean_inc(v_namePrefix_3443_);
lean_dec(v_ngen_3442_);
v___x_3446_ = lean_box(0);
v_isShared_3447_ = v_isSharedCheck_3473_;
goto v_resetjp_3445_;
}
v_resetjp_3445_:
{
lean_object* v___x_3448_; lean_object* v_env_3449_; lean_object* v_nextMacroScope_3450_; lean_object* v_auxDeclNGen_3451_; lean_object* v_traceState_3452_; lean_object* v_cache_3453_; lean_object* v_messages_3454_; lean_object* v_infoState_3455_; lean_object* v_snapshotTasks_3456_; lean_object* v___x_3458_; uint8_t v_isShared_3459_; uint8_t v_isSharedCheck_3471_; 
v___x_3448_ = lean_st_ref_take(v___y_3439_);
v_env_3449_ = lean_ctor_get(v___x_3448_, 0);
v_nextMacroScope_3450_ = lean_ctor_get(v___x_3448_, 1);
v_auxDeclNGen_3451_ = lean_ctor_get(v___x_3448_, 3);
v_traceState_3452_ = lean_ctor_get(v___x_3448_, 4);
v_cache_3453_ = lean_ctor_get(v___x_3448_, 5);
v_messages_3454_ = lean_ctor_get(v___x_3448_, 6);
v_infoState_3455_ = lean_ctor_get(v___x_3448_, 7);
v_snapshotTasks_3456_ = lean_ctor_get(v___x_3448_, 8);
v_isSharedCheck_3471_ = !lean_is_exclusive(v___x_3448_);
if (v_isSharedCheck_3471_ == 0)
{
lean_object* v_unused_3472_; 
v_unused_3472_ = lean_ctor_get(v___x_3448_, 2);
lean_dec(v_unused_3472_);
v___x_3458_ = v___x_3448_;
v_isShared_3459_ = v_isSharedCheck_3471_;
goto v_resetjp_3457_;
}
else
{
lean_inc(v_snapshotTasks_3456_);
lean_inc(v_infoState_3455_);
lean_inc(v_messages_3454_);
lean_inc(v_cache_3453_);
lean_inc(v_traceState_3452_);
lean_inc(v_auxDeclNGen_3451_);
lean_inc(v_nextMacroScope_3450_);
lean_inc(v_env_3449_);
lean_dec(v___x_3448_);
v___x_3458_ = lean_box(0);
v_isShared_3459_ = v_isSharedCheck_3471_;
goto v_resetjp_3457_;
}
v_resetjp_3457_:
{
lean_object* v_r_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3464_; 
lean_inc(v_idx_3444_);
lean_inc(v_namePrefix_3443_);
v_r_3460_ = l_Lean_Name_num___override(v_namePrefix_3443_, v_idx_3444_);
v___x_3461_ = lean_unsigned_to_nat(1u);
v___x_3462_ = lean_nat_add(v_idx_3444_, v___x_3461_);
lean_dec(v_idx_3444_);
if (v_isShared_3447_ == 0)
{
lean_ctor_set(v___x_3446_, 1, v___x_3462_);
v___x_3464_ = v___x_3446_;
goto v_reusejp_3463_;
}
else
{
lean_object* v_reuseFailAlloc_3470_; 
v_reuseFailAlloc_3470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3470_, 0, v_namePrefix_3443_);
lean_ctor_set(v_reuseFailAlloc_3470_, 1, v___x_3462_);
v___x_3464_ = v_reuseFailAlloc_3470_;
goto v_reusejp_3463_;
}
v_reusejp_3463_:
{
lean_object* v___x_3466_; 
if (v_isShared_3459_ == 0)
{
lean_ctor_set(v___x_3458_, 2, v___x_3464_);
v___x_3466_ = v___x_3458_;
goto v_reusejp_3465_;
}
else
{
lean_object* v_reuseFailAlloc_3469_; 
v_reuseFailAlloc_3469_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3469_, 0, v_env_3449_);
lean_ctor_set(v_reuseFailAlloc_3469_, 1, v_nextMacroScope_3450_);
lean_ctor_set(v_reuseFailAlloc_3469_, 2, v___x_3464_);
lean_ctor_set(v_reuseFailAlloc_3469_, 3, v_auxDeclNGen_3451_);
lean_ctor_set(v_reuseFailAlloc_3469_, 4, v_traceState_3452_);
lean_ctor_set(v_reuseFailAlloc_3469_, 5, v_cache_3453_);
lean_ctor_set(v_reuseFailAlloc_3469_, 6, v_messages_3454_);
lean_ctor_set(v_reuseFailAlloc_3469_, 7, v_infoState_3455_);
lean_ctor_set(v_reuseFailAlloc_3469_, 8, v_snapshotTasks_3456_);
v___x_3466_ = v_reuseFailAlloc_3469_;
goto v_reusejp_3465_;
}
v_reusejp_3465_:
{
lean_object* v___x_3467_; lean_object* v___x_3468_; 
v___x_3467_ = lean_st_ref_set(v___y_3439_, v___x_3466_);
v___x_3468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3468_, 0, v_r_3460_);
return v___x_3468_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7___redArg___boxed(lean_object* v___y_3474_, lean_object* v___y_3475_){
_start:
{
lean_object* v_res_3476_; 
v_res_3476_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7___redArg(v___y_3474_);
lean_dec(v___y_3474_);
return v_res_3476_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1(lean_object* v___y_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_){
_start:
{
lean_object* v___x_3484_; lean_object* v_a_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3492_; 
v___x_3484_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7___redArg(v___y_3482_);
v_a_3485_ = lean_ctor_get(v___x_3484_, 0);
v_isSharedCheck_3492_ = !lean_is_exclusive(v___x_3484_);
if (v_isSharedCheck_3492_ == 0)
{
v___x_3487_ = v___x_3484_;
v_isShared_3488_ = v_isSharedCheck_3492_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_a_3485_);
lean_dec(v___x_3484_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3492_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
lean_object* v___x_3490_; 
if (v_isShared_3488_ == 0)
{
v___x_3490_ = v___x_3487_;
goto v_reusejp_3489_;
}
else
{
lean_object* v_reuseFailAlloc_3491_; 
v_reuseFailAlloc_3491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3491_, 0, v_a_3485_);
v___x_3490_ = v_reuseFailAlloc_3491_;
goto v_reusejp_3489_;
}
v_reusejp_3489_:
{
return v___x_3490_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1___boxed(lean_object* v___y_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_){
_start:
{
lean_object* v_res_3500_; 
v_res_3500_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1(v___y_3493_, v___y_3494_, v___y_3495_, v___y_3496_, v___y_3497_, v___y_3498_);
lean_dec(v___y_3498_);
lean_dec_ref(v___y_3497_);
lean_dec(v___y_3496_);
lean_dec_ref(v___y_3495_);
lean_dec(v___y_3494_);
lean_dec(v___y_3493_);
return v_res_3500_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__0(void){
_start:
{
lean_object* v___x_3501_; 
v___x_3501_ = lean_mk_string_unchecked("visit (check := ", 16, 16);
return v___x_3501_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__1(void){
_start:
{
lean_object* v___x_3502_; lean_object* v___x_3503_; 
v___x_3502_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__0);
v___x_3503_ = l_Lean_stringToMessageData(v___x_3502_);
return v___x_3503_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__2(void){
_start:
{
lean_object* v___x_3504_; 
v___x_3504_ = lean_mk_string_unchecked(")", 1, 1);
return v___x_3504_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__3(void){
_start:
{
lean_object* v___x_3505_; lean_object* v___x_3506_; 
v___x_3505_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__2, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__2_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__2);
v___x_3506_ = l_Lean_stringToMessageData(v___x_3505_);
return v___x_3506_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__4(void){
_start:
{
lean_object* v___x_3507_; 
v___x_3507_ = lean_mk_string_unchecked("false", 5, 5);
return v___x_3507_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__5(void){
_start:
{
lean_object* v___x_3508_; 
v___x_3508_ = lean_mk_string_unchecked("true", 4, 4);
return v___x_3508_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2(lean_object* v_e_3509_, lean_object* v_x_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_){
_start:
{
lean_object* v___x_3518_; lean_object* v___y_3520_; uint8_t v___x_3529_; 
v___x_3518_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__1, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__1_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__1);
v___x_3529_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check(v___y_3511_);
if (v___x_3529_ == 0)
{
lean_object* v___x_3530_; 
v___x_3530_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__4, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__4_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__4);
v___y_3520_ = v___x_3530_;
goto v___jp_3519_;
}
else
{
lean_object* v___x_3531_; 
v___x_3531_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__5, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__5_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__5);
v___y_3520_ = v___x_3531_;
goto v___jp_3519_;
}
v___jp_3519_:
{
lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; 
lean_inc_ref(v___y_3520_);
v___x_3521_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3521_, 0, v___y_3520_);
v___x_3522_ = l_Lean_MessageData_ofFormat(v___x_3521_);
v___x_3523_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3523_, 0, v___x_3518_);
lean_ctor_set(v___x_3523_, 1, v___x_3522_);
v___x_3524_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__3);
v___x_3525_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3525_, 0, v___x_3523_);
lean_ctor_set(v___x_3525_, 1, v___x_3524_);
v___x_3526_ = l_Lean_indentExpr(v_e_3509_);
v___x_3527_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3527_, 0, v___x_3525_);
lean_ctor_set(v___x_3527_, 1, v___x_3526_);
v___x_3528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3528_, 0, v___x_3527_);
return v___x_3528_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___boxed(lean_object* v_e_3532_, lean_object* v_x_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_, lean_object* v___y_3538_, lean_object* v___y_3539_, lean_object* v___y_3540_){
_start:
{
lean_object* v_res_3541_; 
v_res_3541_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2(v_e_3532_, v_x_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_, v___y_3539_);
lean_dec(v___y_3539_);
lean_dec_ref(v___y_3538_);
lean_dec(v___y_3537_);
lean_dec_ref(v___y_3536_);
lean_dec(v___y_3535_);
lean_dec(v___y_3534_);
lean_dec_ref(v_x_3533_);
return v_res_3541_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; 
v___x_3542_ = lean_unsigned_to_nat(32u);
v___x_3543_ = lean_mk_empty_array_with_capacity(v___x_3542_);
v___x_3544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3544_, 0, v___x_3543_);
return v___x_3544_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; 
v___x_3545_ = ((size_t)5ULL);
v___x_3546_ = lean_unsigned_to_nat(0u);
v___x_3547_ = lean_unsigned_to_nat(32u);
v___x_3548_ = lean_mk_empty_array_with_capacity(v___x_3547_);
v___x_3549_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__0);
v___x_3550_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3550_, 0, v___x_3549_);
lean_ctor_set(v___x_3550_, 1, v___x_3548_);
lean_ctor_set(v___x_3550_, 2, v___x_3546_);
lean_ctor_set(v___x_3550_, 3, v___x_3546_);
lean_ctor_set_usize(v___x_3550_, 4, v___x_3545_);
return v___x_3550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg(lean_object* v___y_3551_){
_start:
{
lean_object* v___x_3553_; lean_object* v_traceState_3554_; lean_object* v_traces_3555_; lean_object* v___x_3556_; lean_object* v_traceState_3557_; lean_object* v_env_3558_; lean_object* v_nextMacroScope_3559_; lean_object* v_ngen_3560_; lean_object* v_auxDeclNGen_3561_; lean_object* v_cache_3562_; lean_object* v_messages_3563_; lean_object* v_infoState_3564_; lean_object* v_snapshotTasks_3565_; lean_object* v___x_3567_; uint8_t v_isShared_3568_; uint8_t v_isSharedCheck_3584_; 
v___x_3553_ = lean_st_ref_get(v___y_3551_);
v_traceState_3554_ = lean_ctor_get(v___x_3553_, 4);
lean_inc_ref(v_traceState_3554_);
lean_dec(v___x_3553_);
v_traces_3555_ = lean_ctor_get(v_traceState_3554_, 0);
lean_inc_ref(v_traces_3555_);
lean_dec_ref(v_traceState_3554_);
v___x_3556_ = lean_st_ref_take(v___y_3551_);
v_traceState_3557_ = lean_ctor_get(v___x_3556_, 4);
v_env_3558_ = lean_ctor_get(v___x_3556_, 0);
v_nextMacroScope_3559_ = lean_ctor_get(v___x_3556_, 1);
v_ngen_3560_ = lean_ctor_get(v___x_3556_, 2);
v_auxDeclNGen_3561_ = lean_ctor_get(v___x_3556_, 3);
v_cache_3562_ = lean_ctor_get(v___x_3556_, 5);
v_messages_3563_ = lean_ctor_get(v___x_3556_, 6);
v_infoState_3564_ = lean_ctor_get(v___x_3556_, 7);
v_snapshotTasks_3565_ = lean_ctor_get(v___x_3556_, 8);
v_isSharedCheck_3584_ = !lean_is_exclusive(v___x_3556_);
if (v_isSharedCheck_3584_ == 0)
{
v___x_3567_ = v___x_3556_;
v_isShared_3568_ = v_isSharedCheck_3584_;
goto v_resetjp_3566_;
}
else
{
lean_inc(v_snapshotTasks_3565_);
lean_inc(v_infoState_3564_);
lean_inc(v_messages_3563_);
lean_inc(v_cache_3562_);
lean_inc(v_traceState_3557_);
lean_inc(v_auxDeclNGen_3561_);
lean_inc(v_ngen_3560_);
lean_inc(v_nextMacroScope_3559_);
lean_inc(v_env_3558_);
lean_dec(v___x_3556_);
v___x_3567_ = lean_box(0);
v_isShared_3568_ = v_isSharedCheck_3584_;
goto v_resetjp_3566_;
}
v_resetjp_3566_:
{
uint64_t v_tid_3569_; lean_object* v___x_3571_; uint8_t v_isShared_3572_; uint8_t v_isSharedCheck_3582_; 
v_tid_3569_ = lean_ctor_get_uint64(v_traceState_3557_, sizeof(void*)*1);
v_isSharedCheck_3582_ = !lean_is_exclusive(v_traceState_3557_);
if (v_isSharedCheck_3582_ == 0)
{
lean_object* v_unused_3583_; 
v_unused_3583_ = lean_ctor_get(v_traceState_3557_, 0);
lean_dec(v_unused_3583_);
v___x_3571_ = v_traceState_3557_;
v_isShared_3572_ = v_isSharedCheck_3582_;
goto v_resetjp_3570_;
}
else
{
lean_dec(v_traceState_3557_);
v___x_3571_ = lean_box(0);
v_isShared_3572_ = v_isSharedCheck_3582_;
goto v_resetjp_3570_;
}
v_resetjp_3570_:
{
lean_object* v___x_3573_; lean_object* v___x_3575_; 
v___x_3573_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__1);
if (v_isShared_3572_ == 0)
{
lean_ctor_set(v___x_3571_, 0, v___x_3573_);
v___x_3575_ = v___x_3571_;
goto v_reusejp_3574_;
}
else
{
lean_object* v_reuseFailAlloc_3581_; 
v_reuseFailAlloc_3581_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3581_, 0, v___x_3573_);
lean_ctor_set_uint64(v_reuseFailAlloc_3581_, sizeof(void*)*1, v_tid_3569_);
v___x_3575_ = v_reuseFailAlloc_3581_;
goto v_reusejp_3574_;
}
v_reusejp_3574_:
{
lean_object* v___x_3577_; 
if (v_isShared_3568_ == 0)
{
lean_ctor_set(v___x_3567_, 4, v___x_3575_);
v___x_3577_ = v___x_3567_;
goto v_reusejp_3576_;
}
else
{
lean_object* v_reuseFailAlloc_3580_; 
v_reuseFailAlloc_3580_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3580_, 0, v_env_3558_);
lean_ctor_set(v_reuseFailAlloc_3580_, 1, v_nextMacroScope_3559_);
lean_ctor_set(v_reuseFailAlloc_3580_, 2, v_ngen_3560_);
lean_ctor_set(v_reuseFailAlloc_3580_, 3, v_auxDeclNGen_3561_);
lean_ctor_set(v_reuseFailAlloc_3580_, 4, v___x_3575_);
lean_ctor_set(v_reuseFailAlloc_3580_, 5, v_cache_3562_);
lean_ctor_set(v_reuseFailAlloc_3580_, 6, v_messages_3563_);
lean_ctor_set(v_reuseFailAlloc_3580_, 7, v_infoState_3564_);
lean_ctor_set(v_reuseFailAlloc_3580_, 8, v_snapshotTasks_3565_);
v___x_3577_ = v_reuseFailAlloc_3580_;
goto v_reusejp_3576_;
}
v_reusejp_3576_:
{
lean_object* v___x_3578_; lean_object* v___x_3579_; 
v___x_3578_ = lean_st_ref_set(v___y_3551_, v___x_3577_);
v___x_3579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3579_, 0, v_traces_3555_);
return v___x_3579_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___boxed(lean_object* v___y_3585_, lean_object* v___y_3586_){
_start:
{
lean_object* v_res_3587_; 
v_res_3587_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg(v___y_3585_);
lean_dec(v___y_3585_);
return v_res_3587_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___closed__0(void){
_start:
{
lean_object* v___x_3588_; 
v___x_3588_ = lean_mk_string_unchecked("invalid let declaration, term", 29, 29);
return v___x_3588_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3589_; lean_object* v___x_3590_; 
v___x_3589_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___closed__0);
v___x_3590_ = l_Lean_stringToMessageData(v___x_3589_);
return v___x_3590_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1(lean_object* v_a_3591_, lean_object* v_a_3592_, lean_object* v___y_3593_, lean_object* v___y_3594_, lean_object* v___y_3595_, lean_object* v___y_3596_, lean_object* v___y_3597_, lean_object* v___y_3598_){
_start:
{
lean_object* v___x_3600_; 
lean_inc_ref(v_a_3591_);
v___x_3600_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg(v_a_3591_, v___y_3594_, v___y_3595_, v___y_3596_, v___y_3597_, v___y_3598_);
if (lean_obj_tag(v___x_3600_) == 0)
{
lean_object* v_a_3601_; lean_object* v_expr_3602_; lean_object* v___x_3604_; uint8_t v_isShared_3605_; uint8_t v_isSharedCheck_3652_; 
v_a_3601_ = lean_ctor_get(v___x_3600_, 0);
lean_inc(v_a_3601_);
lean_dec_ref(v___x_3600_);
v_expr_3602_ = lean_ctor_get(v_a_3592_, 0);
v_isSharedCheck_3652_ = !lean_is_exclusive(v_a_3592_);
if (v_isSharedCheck_3652_ == 0)
{
lean_object* v_unused_3653_; 
v_unused_3653_ = lean_ctor_get(v_a_3592_, 1);
lean_dec(v_unused_3653_);
v___x_3604_ = v_a_3592_;
v_isShared_3605_ = v_isSharedCheck_3652_;
goto v_resetjp_3603_;
}
else
{
lean_inc(v_expr_3602_);
lean_dec(v_a_3592_);
v___x_3604_ = lean_box(0);
v_isShared_3605_ = v_isSharedCheck_3652_;
goto v_resetjp_3603_;
}
v_resetjp_3603_:
{
lean_object* v___x_3606_; 
lean_inc(v_a_3601_);
lean_inc_ref(v_expr_3602_);
v___x_3606_ = l_Lean_Meta_isExprDefEq(v_expr_3602_, v_a_3601_, v___y_3595_, v___y_3596_, v___y_3597_, v___y_3598_);
if (lean_obj_tag(v___x_3606_) == 0)
{
lean_object* v_a_3607_; lean_object* v___x_3609_; uint8_t v_isShared_3610_; uint8_t v_isSharedCheck_3643_; 
v_a_3607_ = lean_ctor_get(v___x_3606_, 0);
v_isSharedCheck_3643_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3643_ == 0)
{
v___x_3609_ = v___x_3606_;
v_isShared_3610_ = v_isSharedCheck_3643_;
goto v_resetjp_3608_;
}
else
{
lean_inc(v_a_3607_);
lean_dec(v___x_3606_);
v___x_3609_ = lean_box(0);
v_isShared_3610_ = v_isSharedCheck_3643_;
goto v_resetjp_3608_;
}
v_resetjp_3608_:
{
uint8_t v___x_3611_; 
v___x_3611_ = lean_unbox(v_a_3607_);
lean_dec(v_a_3607_);
if (v___x_3611_ == 0)
{
lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; 
lean_del_object(v___x_3609_);
v___x_3612_ = lean_box(0);
v___x_3613_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0);
v___x_3614_ = l_Lean_Meta_mkHasTypeButIsExpectedMsg___redArg(v_a_3601_, v_expr_3602_, v___x_3612_, v___x_3613_);
if (lean_obj_tag(v___x_3614_) == 0)
{
lean_object* v_a_3615_; lean_object* v_expr_3616_; lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3629_; 
v_a_3615_ = lean_ctor_get(v___x_3614_, 0);
lean_inc(v_a_3615_);
lean_dec_ref(v___x_3614_);
v_expr_3616_ = lean_ctor_get(v_a_3591_, 0);
v_isSharedCheck_3629_ = !lean_is_exclusive(v_a_3591_);
if (v_isSharedCheck_3629_ == 0)
{
lean_object* v_unused_3630_; 
v_unused_3630_ = lean_ctor_get(v_a_3591_, 1);
lean_dec(v_unused_3630_);
v___x_3618_ = v_a_3591_;
v_isShared_3619_ = v_isSharedCheck_3629_;
goto v_resetjp_3617_;
}
else
{
lean_inc(v_expr_3616_);
lean_dec(v_a_3591_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3629_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3623_; 
v___x_3620_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___closed__1, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___closed__1_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___closed__1);
v___x_3621_ = l_Lean_indentExpr(v_expr_3616_);
if (v_isShared_3619_ == 0)
{
lean_ctor_set_tag(v___x_3618_, 7);
lean_ctor_set(v___x_3618_, 1, v___x_3621_);
lean_ctor_set(v___x_3618_, 0, v___x_3620_);
v___x_3623_ = v___x_3618_;
goto v_reusejp_3622_;
}
else
{
lean_object* v_reuseFailAlloc_3628_; 
v_reuseFailAlloc_3628_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3628_, 0, v___x_3620_);
lean_ctor_set(v_reuseFailAlloc_3628_, 1, v___x_3621_);
v___x_3623_ = v_reuseFailAlloc_3628_;
goto v_reusejp_3622_;
}
v_reusejp_3622_:
{
lean_object* v___x_3625_; 
if (v_isShared_3605_ == 0)
{
lean_ctor_set_tag(v___x_3604_, 7);
lean_ctor_set(v___x_3604_, 1, v_a_3615_);
lean_ctor_set(v___x_3604_, 0, v___x_3623_);
v___x_3625_ = v___x_3604_;
goto v_reusejp_3624_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v___x_3623_);
lean_ctor_set(v_reuseFailAlloc_3627_, 1, v_a_3615_);
v___x_3625_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3624_;
}
v_reusejp_3624_:
{
lean_object* v___x_3626_; 
v___x_3626_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___redArg(v___x_3625_, v___y_3595_, v___y_3596_, v___y_3597_, v___y_3598_);
return v___x_3626_;
}
}
}
}
else
{
lean_object* v_a_3631_; lean_object* v___x_3633_; uint8_t v_isShared_3634_; uint8_t v_isSharedCheck_3638_; 
lean_del_object(v___x_3604_);
lean_dec_ref(v_a_3591_);
v_a_3631_ = lean_ctor_get(v___x_3614_, 0);
v_isSharedCheck_3638_ = !lean_is_exclusive(v___x_3614_);
if (v_isSharedCheck_3638_ == 0)
{
v___x_3633_ = v___x_3614_;
v_isShared_3634_ = v_isSharedCheck_3638_;
goto v_resetjp_3632_;
}
else
{
lean_inc(v_a_3631_);
lean_dec(v___x_3614_);
v___x_3633_ = lean_box(0);
v_isShared_3634_ = v_isSharedCheck_3638_;
goto v_resetjp_3632_;
}
v_resetjp_3632_:
{
lean_object* v___x_3636_; 
if (v_isShared_3634_ == 0)
{
v___x_3636_ = v___x_3633_;
goto v_reusejp_3635_;
}
else
{
lean_object* v_reuseFailAlloc_3637_; 
v_reuseFailAlloc_3637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3637_, 0, v_a_3631_);
v___x_3636_ = v_reuseFailAlloc_3637_;
goto v_reusejp_3635_;
}
v_reusejp_3635_:
{
return v___x_3636_;
}
}
}
}
else
{
lean_object* v___x_3639_; lean_object* v___x_3641_; 
lean_del_object(v___x_3604_);
lean_dec_ref(v_expr_3602_);
lean_dec(v_a_3601_);
lean_dec_ref(v_a_3591_);
v___x_3639_ = lean_box(0);
if (v_isShared_3610_ == 0)
{
lean_ctor_set(v___x_3609_, 0, v___x_3639_);
v___x_3641_ = v___x_3609_;
goto v_reusejp_3640_;
}
else
{
lean_object* v_reuseFailAlloc_3642_; 
v_reuseFailAlloc_3642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3642_, 0, v___x_3639_);
v___x_3641_ = v_reuseFailAlloc_3642_;
goto v_reusejp_3640_;
}
v_reusejp_3640_:
{
return v___x_3641_;
}
}
}
}
else
{
lean_object* v_a_3644_; lean_object* v___x_3646_; uint8_t v_isShared_3647_; uint8_t v_isSharedCheck_3651_; 
lean_del_object(v___x_3604_);
lean_dec_ref(v_expr_3602_);
lean_dec(v_a_3601_);
lean_dec_ref(v_a_3591_);
v_a_3644_ = lean_ctor_get(v___x_3606_, 0);
v_isSharedCheck_3651_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3651_ == 0)
{
v___x_3646_ = v___x_3606_;
v_isShared_3647_ = v_isSharedCheck_3651_;
goto v_resetjp_3645_;
}
else
{
lean_inc(v_a_3644_);
lean_dec(v___x_3606_);
v___x_3646_ = lean_box(0);
v_isShared_3647_ = v_isSharedCheck_3651_;
goto v_resetjp_3645_;
}
v_resetjp_3645_:
{
lean_object* v___x_3649_; 
if (v_isShared_3647_ == 0)
{
v___x_3649_ = v___x_3646_;
goto v_reusejp_3648_;
}
else
{
lean_object* v_reuseFailAlloc_3650_; 
v_reuseFailAlloc_3650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3650_, 0, v_a_3644_);
v___x_3649_ = v_reuseFailAlloc_3650_;
goto v_reusejp_3648_;
}
v_reusejp_3648_:
{
return v___x_3649_;
}
}
}
}
}
else
{
lean_object* v_a_3654_; lean_object* v___x_3656_; uint8_t v_isShared_3657_; uint8_t v_isSharedCheck_3661_; 
lean_dec_ref(v_a_3592_);
lean_dec_ref(v_a_3591_);
v_a_3654_ = lean_ctor_get(v___x_3600_, 0);
v_isSharedCheck_3661_ = !lean_is_exclusive(v___x_3600_);
if (v_isSharedCheck_3661_ == 0)
{
v___x_3656_ = v___x_3600_;
v_isShared_3657_ = v_isSharedCheck_3661_;
goto v_resetjp_3655_;
}
else
{
lean_inc(v_a_3654_);
lean_dec(v___x_3600_);
v___x_3656_ = lean_box(0);
v_isShared_3657_ = v_isSharedCheck_3661_;
goto v_resetjp_3655_;
}
v_resetjp_3655_:
{
lean_object* v___x_3659_; 
if (v_isShared_3657_ == 0)
{
v___x_3659_ = v___x_3656_;
goto v_reusejp_3658_;
}
else
{
lean_object* v_reuseFailAlloc_3660_; 
v_reuseFailAlloc_3660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3660_, 0, v_a_3654_);
v___x_3659_ = v_reuseFailAlloc_3660_;
goto v_reusejp_3658_;
}
v_reusejp_3658_:
{
return v___x_3659_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___boxed(lean_object* v_a_3662_, lean_object* v_a_3663_, lean_object* v___y_3664_, lean_object* v___y_3665_, lean_object* v___y_3666_, lean_object* v___y_3667_, lean_object* v___y_3668_, lean_object* v___y_3669_, lean_object* v___y_3670_){
_start:
{
lean_object* v_res_3671_; 
v_res_3671_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1(v_a_3662_, v_a_3663_, v___y_3664_, v___y_3665_, v___y_3666_, v___y_3667_, v___y_3668_, v___y_3669_);
lean_dec(v___y_3669_);
lean_dec_ref(v___y_3668_);
lean_dec(v___y_3667_);
lean_dec_ref(v___y_3666_);
lean_dec(v___y_3665_);
lean_dec(v___y_3664_);
return v_res_3671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2___redArg(lean_object* v_lctx_3672_, lean_object* v_x_3673_, lean_object* v___y_3674_, lean_object* v___y_3675_, lean_object* v___y_3676_, lean_object* v___y_3677_, lean_object* v___y_3678_, lean_object* v___y_3679_){
_start:
{
lean_object* v_keyedConfig_3681_; uint8_t v_trackZetaDelta_3682_; lean_object* v_zetaDeltaSet_3683_; lean_object* v_localInstances_3684_; lean_object* v_defEqCtx_x3f_3685_; lean_object* v_synthPendingDepth_3686_; lean_object* v_canUnfold_x3f_3687_; uint8_t v_univApprox_3688_; uint8_t v_inTypeClassResolution_3689_; uint8_t v_cacheInferType_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; 
v_keyedConfig_3681_ = lean_ctor_get(v___y_3676_, 0);
v_trackZetaDelta_3682_ = lean_ctor_get_uint8(v___y_3676_, sizeof(void*)*7);
v_zetaDeltaSet_3683_ = lean_ctor_get(v___y_3676_, 1);
v_localInstances_3684_ = lean_ctor_get(v___y_3676_, 3);
v_defEqCtx_x3f_3685_ = lean_ctor_get(v___y_3676_, 4);
v_synthPendingDepth_3686_ = lean_ctor_get(v___y_3676_, 5);
v_canUnfold_x3f_3687_ = lean_ctor_get(v___y_3676_, 6);
v_univApprox_3688_ = lean_ctor_get_uint8(v___y_3676_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3689_ = lean_ctor_get_uint8(v___y_3676_, sizeof(void*)*7 + 2);
v_cacheInferType_3690_ = lean_ctor_get_uint8(v___y_3676_, sizeof(void*)*7 + 3);
lean_inc(v_canUnfold_x3f_3687_);
lean_inc(v_synthPendingDepth_3686_);
lean_inc(v_defEqCtx_x3f_3685_);
lean_inc_ref(v_localInstances_3684_);
lean_inc(v_zetaDeltaSet_3683_);
lean_inc_ref(v_keyedConfig_3681_);
v___x_3691_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3691_, 0, v_keyedConfig_3681_);
lean_ctor_set(v___x_3691_, 1, v_zetaDeltaSet_3683_);
lean_ctor_set(v___x_3691_, 2, v_lctx_3672_);
lean_ctor_set(v___x_3691_, 3, v_localInstances_3684_);
lean_ctor_set(v___x_3691_, 4, v_defEqCtx_x3f_3685_);
lean_ctor_set(v___x_3691_, 5, v_synthPendingDepth_3686_);
lean_ctor_set(v___x_3691_, 6, v_canUnfold_x3f_3687_);
lean_ctor_set_uint8(v___x_3691_, sizeof(void*)*7, v_trackZetaDelta_3682_);
lean_ctor_set_uint8(v___x_3691_, sizeof(void*)*7 + 1, v_univApprox_3688_);
lean_ctor_set_uint8(v___x_3691_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3689_);
lean_ctor_set_uint8(v___x_3691_, sizeof(void*)*7 + 3, v_cacheInferType_3690_);
lean_inc(v___y_3679_);
lean_inc_ref(v___y_3678_);
lean_inc(v___y_3677_);
lean_inc(v___y_3675_);
lean_inc(v___y_3674_);
v___x_3692_ = lean_apply_7(v_x_3673_, v___y_3674_, v___y_3675_, v___x_3691_, v___y_3677_, v___y_3678_, v___y_3679_, lean_box(0));
if (lean_obj_tag(v___x_3692_) == 0)
{
lean_object* v_a_3693_; lean_object* v___x_3695_; uint8_t v_isShared_3696_; uint8_t v_isSharedCheck_3700_; 
v_a_3693_ = lean_ctor_get(v___x_3692_, 0);
v_isSharedCheck_3700_ = !lean_is_exclusive(v___x_3692_);
if (v_isSharedCheck_3700_ == 0)
{
v___x_3695_ = v___x_3692_;
v_isShared_3696_ = v_isSharedCheck_3700_;
goto v_resetjp_3694_;
}
else
{
lean_inc(v_a_3693_);
lean_dec(v___x_3692_);
v___x_3695_ = lean_box(0);
v_isShared_3696_ = v_isSharedCheck_3700_;
goto v_resetjp_3694_;
}
v_resetjp_3694_:
{
lean_object* v___x_3698_; 
if (v_isShared_3696_ == 0)
{
v___x_3698_ = v___x_3695_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3699_; 
v_reuseFailAlloc_3699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3699_, 0, v_a_3693_);
v___x_3698_ = v_reuseFailAlloc_3699_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
return v___x_3698_;
}
}
}
else
{
return v___x_3692_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2___redArg___boxed(lean_object* v_lctx_3701_, lean_object* v_x_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_){
_start:
{
lean_object* v_res_3710_; 
v_res_3710_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2___redArg(v_lctx_3701_, v_x_3702_, v___y_3703_, v___y_3704_, v___y_3705_, v___y_3706_, v___y_3707_, v___y_3708_);
lean_dec(v___y_3708_);
lean_dec_ref(v___y_3707_);
lean_dec(v___y_3706_);
lean_dec_ref(v___y_3705_);
lean_dec(v___y_3704_);
lean_dec(v___y_3703_);
return v_res_3710_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3711_; lean_object* v___x_3712_; 
v___x_3711_ = lean_unsigned_to_nat(0u);
v___x_3712_ = lean_mk_empty_array_with_capacity(v___x_3711_);
return v___x_3712_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0(lean_object* v_fvars_3713_, lean_object* v_letFVars_3714_, lean_object* v_lctx_3715_, lean_object* v_v_3716_, lean_object* v_e_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_, lean_object* v___y_3723_){
_start:
{
lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; 
v___x_3725_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___closed__0);
v___x_3726_ = lean_expr_instantiate_rev(v_e_3717_, v_fvars_3713_);
v___x_3727_ = lean_apply_1(v_v_3716_, v___x_3726_);
v___x_3728_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_withLetFVars___boxed), 10, 3);
lean_closure_set(v___x_3728_, 0, lean_box(0));
lean_closure_set(v___x_3728_, 1, v_letFVars_3714_);
lean_closure_set(v___x_3728_, 2, v___x_3727_);
v___x_3729_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg(v_lctx_3715_, v___x_3725_, v___x_3728_, v___y_3718_, v___y_3719_, v___y_3720_, v___y_3721_, v___y_3722_, v___y_3723_);
return v___x_3729_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___boxed(lean_object* v_fvars_3730_, lean_object* v_letFVars_3731_, lean_object* v_lctx_3732_, lean_object* v_v_3733_, lean_object* v_e_3734_, lean_object* v___y_3735_, lean_object* v___y_3736_, lean_object* v___y_3737_, lean_object* v___y_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_){
_start:
{
lean_object* v_res_3742_; 
v_res_3742_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0(v_fvars_3730_, v_letFVars_3731_, v_lctx_3732_, v_v_3733_, v_e_3734_, v___y_3735_, v___y_3736_, v___y_3737_, v___y_3738_, v___y_3739_, v___y_3740_);
lean_dec(v___y_3740_);
lean_dec_ref(v___y_3739_);
lean_dec(v___y_3738_);
lean_dec_ref(v___y_3737_);
lean_dec(v___y_3736_);
lean_dec(v___y_3735_);
lean_dec_ref(v_e_3734_);
lean_dec_ref(v_fvars_3730_);
return v_res_3742_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___closed__0(void){
_start:
{
lean_object* v___x_3743_; 
v___x_3743_ = lean_mk_string_unchecked("unexpected bound variable ", 26, 26);
return v___x_3743_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3744_; lean_object* v___x_3745_; 
v___x_3744_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___closed__0);
v___x_3745_ = l_Lean_stringToMessageData(v___x_3744_);
return v___x_3745_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go_x27(lean_object* v_e_3746_, lean_object* v_a_3747_, lean_object* v_a_3748_, lean_object* v_a_3749_, lean_object* v_a_3750_, lean_object* v_a_3751_, lean_object* v_a_3752_){
_start:
{
if (lean_obj_tag(v_e_3746_) == 5)
{
lean_object* v_fn_3754_; lean_object* v_arg_3755_; lean_object* v___x_3756_; 
v_fn_3754_ = lean_ctor_get(v_e_3746_, 0);
v_arg_3755_ = lean_ctor_get(v_e_3746_, 1);
lean_inc_ref(v_fn_3754_);
v___x_3756_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go_x27(v_fn_3754_, v_a_3747_, v_a_3748_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_);
if (lean_obj_tag(v___x_3756_) == 0)
{
lean_object* v_a_3757_; lean_object* v___x_3758_; 
v_a_3757_ = lean_ctor_get(v___x_3756_, 0);
lean_inc(v_a_3757_);
lean_dec_ref(v___x_3756_);
lean_inc_ref(v_arg_3755_);
v___x_3758_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(v_arg_3755_, v_a_3747_, v_a_3748_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_);
if (lean_obj_tag(v___x_3758_) == 0)
{
lean_object* v_a_3759_; lean_object* v___x_3761_; uint8_t v_isShared_3762_; uint8_t v_isSharedCheck_3779_; 
v_a_3759_ = lean_ctor_get(v___x_3758_, 0);
v_isSharedCheck_3779_ = !lean_is_exclusive(v___x_3758_);
if (v_isSharedCheck_3779_ == 0)
{
v___x_3761_ = v___x_3758_;
v_isShared_3762_ = v_isSharedCheck_3779_;
goto v_resetjp_3760_;
}
else
{
lean_inc(v_a_3759_);
lean_dec(v___x_3758_);
v___x_3761_ = lean_box(0);
v_isShared_3762_ = v_isSharedCheck_3779_;
goto v_resetjp_3760_;
}
v_resetjp_3760_:
{
lean_object* v_expr_3763_; uint8_t v___y_3765_; size_t v___x_3773_; size_t v___x_3774_; uint8_t v___x_3775_; 
v_expr_3763_ = lean_ctor_get(v_a_3759_, 0);
lean_inc_ref(v_expr_3763_);
lean_dec(v_a_3759_);
v___x_3773_ = lean_ptr_addr(v_fn_3754_);
v___x_3774_ = lean_ptr_addr(v_a_3757_);
v___x_3775_ = lean_usize_dec_eq(v___x_3773_, v___x_3774_);
if (v___x_3775_ == 0)
{
v___y_3765_ = v___x_3775_;
goto v___jp_3764_;
}
else
{
size_t v___x_3776_; size_t v___x_3777_; uint8_t v___x_3778_; 
v___x_3776_ = lean_ptr_addr(v_arg_3755_);
v___x_3777_ = lean_ptr_addr(v_expr_3763_);
v___x_3778_ = lean_usize_dec_eq(v___x_3776_, v___x_3777_);
v___y_3765_ = v___x_3778_;
goto v___jp_3764_;
}
v___jp_3764_:
{
if (v___y_3765_ == 0)
{
lean_object* v___x_3766_; lean_object* v___x_3768_; 
lean_dec_ref(v_e_3746_);
v___x_3766_ = l_Lean_Expr_app___override(v_a_3757_, v_expr_3763_);
if (v_isShared_3762_ == 0)
{
lean_ctor_set(v___x_3761_, 0, v___x_3766_);
v___x_3768_ = v___x_3761_;
goto v_reusejp_3767_;
}
else
{
lean_object* v_reuseFailAlloc_3769_; 
v_reuseFailAlloc_3769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3769_, 0, v___x_3766_);
v___x_3768_ = v_reuseFailAlloc_3769_;
goto v_reusejp_3767_;
}
v_reusejp_3767_:
{
return v___x_3768_;
}
}
else
{
lean_object* v___x_3771_; 
lean_dec_ref(v_expr_3763_);
lean_dec(v_a_3757_);
if (v_isShared_3762_ == 0)
{
lean_ctor_set(v___x_3761_, 0, v_e_3746_);
v___x_3771_ = v___x_3761_;
goto v_reusejp_3770_;
}
else
{
lean_object* v_reuseFailAlloc_3772_; 
v_reuseFailAlloc_3772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3772_, 0, v_e_3746_);
v___x_3771_ = v_reuseFailAlloc_3772_;
goto v_reusejp_3770_;
}
v_reusejp_3770_:
{
return v___x_3771_;
}
}
}
}
}
else
{
lean_object* v_a_3780_; lean_object* v___x_3782_; uint8_t v_isShared_3783_; uint8_t v_isSharedCheck_3787_; 
lean_dec(v_a_3757_);
lean_dec_ref(v_e_3746_);
v_a_3780_ = lean_ctor_get(v___x_3758_, 0);
v_isSharedCheck_3787_ = !lean_is_exclusive(v___x_3758_);
if (v_isSharedCheck_3787_ == 0)
{
v___x_3782_ = v___x_3758_;
v_isShared_3783_ = v_isSharedCheck_3787_;
goto v_resetjp_3781_;
}
else
{
lean_inc(v_a_3780_);
lean_dec(v___x_3758_);
v___x_3782_ = lean_box(0);
v_isShared_3783_ = v_isSharedCheck_3787_;
goto v_resetjp_3781_;
}
v_resetjp_3781_:
{
lean_object* v___x_3785_; 
if (v_isShared_3783_ == 0)
{
v___x_3785_ = v___x_3782_;
goto v_reusejp_3784_;
}
else
{
lean_object* v_reuseFailAlloc_3786_; 
v_reuseFailAlloc_3786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3786_, 0, v_a_3780_);
v___x_3785_ = v_reuseFailAlloc_3786_;
goto v_reusejp_3784_;
}
v_reusejp_3784_:
{
return v___x_3785_;
}
}
}
}
else
{
lean_dec_ref(v_e_3746_);
return v___x_3756_;
}
}
else
{
lean_object* v___x_3788_; 
v___x_3788_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(v_e_3746_, v_a_3747_, v_a_3748_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_);
if (lean_obj_tag(v___x_3788_) == 0)
{
lean_object* v_a_3789_; lean_object* v___x_3791_; uint8_t v_isShared_3792_; uint8_t v_isSharedCheck_3797_; 
v_a_3789_ = lean_ctor_get(v___x_3788_, 0);
v_isSharedCheck_3797_ = !lean_is_exclusive(v___x_3788_);
if (v_isSharedCheck_3797_ == 0)
{
v___x_3791_ = v___x_3788_;
v_isShared_3792_ = v_isSharedCheck_3797_;
goto v_resetjp_3790_;
}
else
{
lean_inc(v_a_3789_);
lean_dec(v___x_3788_);
v___x_3791_ = lean_box(0);
v_isShared_3792_ = v_isSharedCheck_3797_;
goto v_resetjp_3790_;
}
v_resetjp_3790_:
{
lean_object* v_expr_3793_; lean_object* v___x_3795_; 
v_expr_3793_ = lean_ctor_get(v_a_3789_, 0);
lean_inc_ref(v_expr_3793_);
lean_dec(v_a_3789_);
if (v_isShared_3792_ == 0)
{
lean_ctor_set(v___x_3791_, 0, v_expr_3793_);
v___x_3795_ = v___x_3791_;
goto v_reusejp_3794_;
}
else
{
lean_object* v_reuseFailAlloc_3796_; 
v_reuseFailAlloc_3796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3796_, 0, v_expr_3793_);
v___x_3795_ = v_reuseFailAlloc_3796_;
goto v_reusejp_3794_;
}
v_reusejp_3794_:
{
return v___x_3795_;
}
}
}
else
{
lean_object* v_a_3798_; lean_object* v___x_3800_; uint8_t v_isShared_3801_; uint8_t v_isSharedCheck_3805_; 
v_a_3798_ = lean_ctor_get(v___x_3788_, 0);
v_isSharedCheck_3805_ = !lean_is_exclusive(v___x_3788_);
if (v_isSharedCheck_3805_ == 0)
{
v___x_3800_ = v___x_3788_;
v_isShared_3801_ = v_isSharedCheck_3805_;
goto v_resetjp_3799_;
}
else
{
lean_inc(v_a_3798_);
lean_dec(v___x_3788_);
v___x_3800_ = lean_box(0);
v_isShared_3801_ = v_isSharedCheck_3805_;
goto v_resetjp_3799_;
}
v_resetjp_3799_:
{
lean_object* v___x_3803_; 
if (v_isShared_3801_ == 0)
{
v___x_3803_ = v___x_3800_;
goto v_reusejp_3802_;
}
else
{
lean_object* v_reuseFailAlloc_3804_; 
v_reuseFailAlloc_3804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3804_, 0, v_a_3798_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go___boxed(lean_object* v_e_3806_, lean_object* v_a_3807_, lean_object* v_a_3808_, lean_object* v_a_3809_, lean_object* v_a_3810_, lean_object* v_a_3811_, lean_object* v_a_3812_, lean_object* v_a_3813_){
_start:
{
lean_object* v_res_3814_; 
v_res_3814_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go(v_e_3806_, v_a_3807_, v_a_3808_, v_a_3809_, v_a_3810_, v_a_3811_, v_a_3812_);
lean_dec(v_a_3812_);
lean_dec_ref(v_a_3811_);
lean_dec(v_a_3810_);
lean_dec_ref(v_a_3809_);
lean_dec(v_a_3808_);
lean_dec(v_a_3807_);
return v_res_3814_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go(lean_object* v_e_3815_, lean_object* v_a_3816_, lean_object* v_a_3817_, lean_object* v_a_3818_, lean_object* v_a_3819_, lean_object* v_a_3820_, lean_object* v_a_3821_){
_start:
{
if (lean_obj_tag(v_e_3815_) == 5)
{
lean_object* v_fn_3823_; lean_object* v_arg_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; 
v_fn_3823_ = lean_ctor_get(v_e_3815_, 0);
v_arg_3824_ = lean_ctor_get(v_e_3815_, 1);
lean_inc_ref_n(v_fn_3823_, 2);
v___x_3825_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go___boxed), 8, 1);
lean_closure_set(v___x_3825_, 0, v_fn_3823_);
v___x_3826_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkCache(v_fn_3823_, v___x_3825_, v_a_3816_, v_a_3817_, v_a_3818_, v_a_3819_, v_a_3820_, v_a_3821_);
if (lean_obj_tag(v___x_3826_) == 0)
{
lean_object* v_a_3827_; lean_object* v___x_3828_; 
v_a_3827_ = lean_ctor_get(v___x_3826_, 0);
lean_inc(v_a_3827_);
lean_dec_ref(v___x_3826_);
lean_inc_ref(v_arg_3824_);
v___x_3828_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(v_arg_3824_, v_a_3816_, v_a_3817_, v_a_3818_, v_a_3819_, v_a_3820_, v_a_3821_);
if (lean_obj_tag(v___x_3828_) == 0)
{
lean_object* v_a_3829_; lean_object* v___x_3830_; 
v_a_3829_ = lean_ctor_get(v___x_3828_, 0);
lean_inc(v_a_3829_);
lean_dec_ref(v___x_3828_);
v___x_3830_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp(v_e_3815_, v_a_3827_, v_a_3829_, v_a_3816_, v_a_3817_, v_a_3818_, v_a_3819_, v_a_3820_, v_a_3821_);
return v___x_3830_;
}
else
{
lean_dec(v_a_3827_);
lean_dec_ref(v_e_3815_);
return v___x_3828_;
}
}
else
{
lean_dec_ref(v_e_3815_);
return v___x_3826_;
}
}
else
{
lean_object* v___x_3831_; 
v___x_3831_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(v_e_3815_, v_a_3816_, v_a_3817_, v_a_3818_, v_a_3819_, v_a_3820_, v_a_3821_);
return v___x_3831_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs(lean_object* v_e_3832_, lean_object* v_a_3833_, lean_object* v_a_3834_, lean_object* v_a_3835_, lean_object* v_a_3836_, lean_object* v_a_3837_, lean_object* v_a_3838_){
_start:
{
uint8_t v___x_3840_; 
v___x_3840_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check(v_a_3833_);
if (v___x_3840_ == 0)
{
lean_object* v___x_3841_; 
v___x_3841_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go_x27(v_e_3832_, v_a_3833_, v_a_3834_, v_a_3835_, v_a_3836_, v_a_3837_, v_a_3838_);
if (lean_obj_tag(v___x_3841_) == 0)
{
lean_object* v_a_3842_; lean_object* v___x_3844_; uint8_t v_isShared_3845_; uint8_t v_isSharedCheck_3851_; 
v_a_3842_ = lean_ctor_get(v___x_3841_, 0);
v_isSharedCheck_3851_ = !lean_is_exclusive(v___x_3841_);
if (v_isSharedCheck_3851_ == 0)
{
v___x_3844_ = v___x_3841_;
v_isShared_3845_ = v_isSharedCheck_3851_;
goto v_resetjp_3843_;
}
else
{
lean_inc(v_a_3842_);
lean_dec(v___x_3841_);
v___x_3844_ = lean_box(0);
v_isShared_3845_ = v_isSharedCheck_3851_;
goto v_resetjp_3843_;
}
v_resetjp_3843_:
{
lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3849_; 
v___x_3846_ = lean_box(0);
v___x_3847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3847_, 0, v_a_3842_);
lean_ctor_set(v___x_3847_, 1, v___x_3846_);
if (v_isShared_3845_ == 0)
{
lean_ctor_set(v___x_3844_, 0, v___x_3847_);
v___x_3849_ = v___x_3844_;
goto v_reusejp_3848_;
}
else
{
lean_object* v_reuseFailAlloc_3850_; 
v_reuseFailAlloc_3850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3850_, 0, v___x_3847_);
v___x_3849_ = v_reuseFailAlloc_3850_;
goto v_reusejp_3848_;
}
v_reusejp_3848_:
{
return v___x_3849_;
}
}
}
else
{
lean_object* v_a_3852_; lean_object* v___x_3854_; uint8_t v_isShared_3855_; uint8_t v_isSharedCheck_3859_; 
v_a_3852_ = lean_ctor_get(v___x_3841_, 0);
v_isSharedCheck_3859_ = !lean_is_exclusive(v___x_3841_);
if (v_isSharedCheck_3859_ == 0)
{
v___x_3854_ = v___x_3841_;
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
else
{
lean_inc(v_a_3852_);
lean_dec(v___x_3841_);
v___x_3854_ = lean_box(0);
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
v_resetjp_3853_:
{
lean_object* v___x_3857_; 
if (v_isShared_3855_ == 0)
{
v___x_3857_ = v___x_3854_;
goto v_reusejp_3856_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v_a_3852_);
v___x_3857_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
return v___x_3857_;
}
}
}
}
else
{
lean_object* v___x_3860_; 
v___x_3860_ = l_Lean_Expr_getAppFn(v_e_3832_);
if (lean_obj_tag(v___x_3860_) == 2)
{
lean_object* v_mvarId_3861_; lean_object* v_dummy_3862_; lean_object* v_nargs_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; 
v_mvarId_3861_ = lean_ctor_get(v___x_3860_, 0);
lean_inc(v_mvarId_3861_);
lean_dec_ref(v___x_3860_);
v_dummy_3862_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__5, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__5_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__5);
v_nargs_3863_ = l_Lean_Expr_getAppNumArgs(v_e_3832_);
lean_inc(v_nargs_3863_);
v___x_3864_ = lean_mk_array(v_nargs_3863_, v_dummy_3862_);
v___x_3865_ = lean_unsigned_to_nat(1u);
v___x_3866_ = lean_nat_sub(v_nargs_3863_, v___x_3865_);
lean_dec(v_nargs_3863_);
lean_inc_ref(v_e_3832_);
v___x_3867_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3832_, v___x_3864_, v___x_3866_);
v___x_3868_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar(v_mvarId_3861_, v___x_3867_, v_a_3833_, v_a_3834_, v_a_3835_, v_a_3836_, v_a_3837_, v_a_3838_);
lean_dec(v_mvarId_3861_);
if (lean_obj_tag(v___x_3868_) == 0)
{
lean_object* v___x_3869_; 
lean_dec_ref(v___x_3868_);
v___x_3869_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go(v_e_3832_, v_a_3833_, v_a_3834_, v_a_3835_, v_a_3836_, v_a_3837_, v_a_3838_);
return v___x_3869_;
}
else
{
lean_object* v_a_3870_; lean_object* v___x_3872_; uint8_t v_isShared_3873_; uint8_t v_isSharedCheck_3877_; 
lean_dec_ref(v_e_3832_);
v_a_3870_ = lean_ctor_get(v___x_3868_, 0);
v_isSharedCheck_3877_ = !lean_is_exclusive(v___x_3868_);
if (v_isSharedCheck_3877_ == 0)
{
v___x_3872_ = v___x_3868_;
v_isShared_3873_ = v_isSharedCheck_3877_;
goto v_resetjp_3871_;
}
else
{
lean_inc(v_a_3870_);
lean_dec(v___x_3868_);
v___x_3872_ = lean_box(0);
v_isShared_3873_ = v_isSharedCheck_3877_;
goto v_resetjp_3871_;
}
v_resetjp_3871_:
{
lean_object* v___x_3875_; 
if (v_isShared_3873_ == 0)
{
v___x_3875_ = v___x_3872_;
goto v_reusejp_3874_;
}
else
{
lean_object* v_reuseFailAlloc_3876_; 
v_reuseFailAlloc_3876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3876_, 0, v_a_3870_);
v___x_3875_ = v_reuseFailAlloc_3876_;
goto v_reusejp_3874_;
}
v_reusejp_3874_:
{
return v___x_3875_;
}
}
}
}
else
{
lean_object* v___x_3878_; 
lean_dec_ref(v___x_3860_);
v___x_3878_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go(v_e_3832_, v_a_3833_, v_a_3834_, v_a_3835_, v_a_3836_, v_a_3837_, v_a_3838_);
return v___x_3878_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs___boxed(lean_object* v_e_3879_, lean_object* v_a_3880_, lean_object* v_a_3881_, lean_object* v_a_3882_, lean_object* v_a_3883_, lean_object* v_a_3884_, lean_object* v_a_3885_, lean_object* v_a_3886_){
_start:
{
lean_object* v_res_3887_; 
v_res_3887_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs(v_e_3879_, v_a_3880_, v_a_3881_, v_a_3882_, v_a_3883_, v_a_3884_, v_a_3885_);
lean_dec(v_a_3885_);
lean_dec_ref(v_a_3884_);
lean_dec(v_a_3883_);
lean_dec_ref(v_a_3882_);
lean_dec(v_a_3881_);
lean_dec(v_a_3880_);
return v_res_3887_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitType(lean_object* v_e_3888_, lean_object* v_a_3889_, lean_object* v_a_3890_, lean_object* v_a_3891_, lean_object* v_a_3892_, lean_object* v_a_3893_, lean_object* v_a_3894_){
_start:
{
lean_object* v___x_3896_; 
v___x_3896_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(v_e_3888_, v_a_3889_, v_a_3890_, v_a_3891_, v_a_3892_, v_a_3893_, v_a_3894_);
if (lean_obj_tag(v___x_3896_) == 0)
{
lean_object* v_a_3897_; lean_object* v___x_3898_; 
v_a_3897_ = lean_ctor_get(v___x_3896_, 0);
lean_inc(v_a_3897_);
lean_dec_ref(v___x_3896_);
v___x_3898_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_ensureType(v_a_3897_, v_a_3889_, v_a_3890_, v_a_3891_, v_a_3892_, v_a_3893_, v_a_3894_);
return v___x_3898_;
}
else
{
return v___x_3896_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitType___boxed(lean_object* v_e_3899_, lean_object* v_a_3900_, lean_object* v_a_3901_, lean_object* v_a_3902_, lean_object* v_a_3903_, lean_object* v_a_3904_, lean_object* v_a_3905_, lean_object* v_a_3906_){
_start:
{
lean_object* v_res_3907_; 
v_res_3907_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitType(v_e_3899_, v_a_3900_, v_a_3901_, v_a_3902_, v_a_3903_, v_a_3904_, v_a_3905_);
lean_dec(v_a_3905_);
lean_dec_ref(v_a_3904_);
lean_dec(v_a_3903_);
lean_dec_ref(v_a_3902_);
lean_dec(v_a_3901_);
lean_dec(v_a_3900_);
return v_res_3907_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go___lam__0(lean_object* v___x_3908_, lean_object* v_fvars_3909_, lean_object* v_doms_3910_, lean_object* v___y_3911_, lean_object* v___y_3912_, lean_object* v___y_3913_, lean_object* v___y_3914_, lean_object* v___y_3915_, lean_object* v___y_3916_){
_start:
{
lean_object* v___x_3918_; 
v___x_3918_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(v___x_3908_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_, v___y_3915_, v___y_3916_);
if (lean_obj_tag(v___x_3918_) == 0)
{
lean_object* v_a_3919_; lean_object* v___x_3920_; 
v_a_3919_ = lean_ctor_get(v___x_3918_, 0);
lean_inc(v_a_3919_);
lean_dec_ref(v___x_3918_);
v___x_3920_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize(v_fvars_3909_, v_doms_3910_, v_a_3919_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_, v___y_3915_, v___y_3916_);
return v___x_3920_;
}
else
{
return v___x_3918_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go___lam__0___boxed(lean_object* v___x_3921_, lean_object* v_fvars_3922_, lean_object* v_doms_3923_, lean_object* v___y_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_){
_start:
{
lean_object* v_res_3931_; 
v_res_3931_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go___lam__0(v___x_3921_, v_fvars_3922_, v_doms_3923_, v___y_3924_, v___y_3925_, v___y_3926_, v___y_3927_, v___y_3928_, v___y_3929_);
lean_dec(v___y_3929_);
lean_dec_ref(v___y_3928_);
lean_dec(v___y_3927_);
lean_dec_ref(v___y_3926_);
lean_dec(v___y_3925_);
lean_dec(v___y_3924_);
lean_dec_ref(v_doms_3923_);
lean_dec_ref(v_fvars_3922_);
return v_res_3931_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go(lean_object* v_lctx_3932_, lean_object* v_fvars_3933_, lean_object* v_doms_3934_, lean_object* v_e_3935_, lean_object* v_a_3936_, lean_object* v_a_3937_, lean_object* v_a_3938_, lean_object* v_a_3939_, lean_object* v_a_3940_, lean_object* v_a_3941_){
_start:
{
lean_object* v___x_3943_; 
v___x_3943_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f___redArg(v_e_3935_, v_a_3937_, v_a_3941_);
if (lean_obj_tag(v___x_3943_) == 0)
{
lean_object* v_a_3944_; 
v_a_3944_ = lean_ctor_get(v___x_3943_, 0);
lean_inc(v_a_3944_);
lean_dec_ref(v___x_3943_);
if (lean_obj_tag(v_a_3944_) == 1)
{
lean_object* v_val_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; 
lean_dec_ref(v_e_3935_);
v_val_3945_ = lean_ctor_get(v_a_3944_, 0);
lean_inc(v_val_3945_);
lean_dec_ref(v_a_3944_);
v___x_3946_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___closed__0);
v___x_3947_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___boxed), 10, 3);
lean_closure_set(v___x_3947_, 0, v_fvars_3933_);
lean_closure_set(v___x_3947_, 1, v_doms_3934_);
lean_closure_set(v___x_3947_, 2, v_val_3945_);
v___x_3948_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg(v_lctx_3932_, v___x_3946_, v___x_3947_, v_a_3936_, v_a_3937_, v_a_3938_, v_a_3939_, v_a_3940_, v_a_3941_);
return v___x_3948_;
}
else
{
lean_dec(v_a_3944_);
if (lean_obj_tag(v_e_3935_) == 7)
{
lean_object* v_binderName_3949_; lean_object* v_binderType_3950_; lean_object* v_body_3951_; uint8_t v_binderInfo_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; 
v_binderName_3949_ = lean_ctor_get(v_e_3935_, 0);
lean_inc(v_binderName_3949_);
v_binderType_3950_ = lean_ctor_get(v_e_3935_, 1);
lean_inc_ref(v_binderType_3950_);
v_body_3951_ = lean_ctor_get(v_e_3935_, 2);
lean_inc_ref(v_body_3951_);
v_binderInfo_3952_ = lean_ctor_get_uint8(v_e_3935_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_3935_);
v___x_3953_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___closed__0);
v___x_3954_ = lean_expr_instantiate_rev(v_binderType_3950_, v_fvars_3933_);
lean_dec_ref(v_binderType_3950_);
v___x_3955_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitType___boxed), 8, 1);
lean_closure_set(v___x_3955_, 0, v___x_3954_);
lean_inc_ref(v_lctx_3932_);
v___x_3956_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg(v_lctx_3932_, v___x_3953_, v___x_3955_, v_a_3936_, v_a_3937_, v_a_3938_, v_a_3939_, v_a_3940_, v_a_3941_);
if (lean_obj_tag(v___x_3956_) == 0)
{
lean_object* v_a_3957_; lean_object* v___x_3958_; 
v_a_3957_ = lean_ctor_get(v___x_3956_, 0);
lean_inc(v_a_3957_);
lean_dec_ref(v___x_3956_);
v___x_3958_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1(v_a_3936_, v_a_3937_, v_a_3938_, v_a_3939_, v_a_3940_, v_a_3941_);
if (lean_obj_tag(v___x_3958_) == 0)
{
lean_object* v_a_3959_; lean_object* v_expr_3960_; uint8_t v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; 
v_a_3959_ = lean_ctor_get(v___x_3958_, 0);
lean_inc_n(v_a_3959_, 2);
lean_dec_ref(v___x_3958_);
v_expr_3960_ = lean_ctor_get(v_a_3957_, 0);
v___x_3961_ = 0;
lean_inc_ref(v_expr_3960_);
v___x_3962_ = l_Lean_LocalContext_mkLocalDecl(v_lctx_3932_, v_a_3959_, v_binderName_3949_, v_expr_3960_, v_binderInfo_3952_, v___x_3961_);
v___x_3963_ = l_Lean_Expr_fvar___override(v_a_3959_);
v___x_3964_ = lean_array_push(v_fvars_3933_, v___x_3963_);
v___x_3965_ = lean_array_push(v_doms_3934_, v_a_3957_);
v_lctx_3932_ = v___x_3962_;
v_fvars_3933_ = v___x_3964_;
v_doms_3934_ = v___x_3965_;
v_e_3935_ = v_body_3951_;
goto _start;
}
else
{
lean_object* v_a_3967_; lean_object* v___x_3969_; uint8_t v_isShared_3970_; uint8_t v_isSharedCheck_3974_; 
lean_dec(v_a_3957_);
lean_dec_ref(v_body_3951_);
lean_dec(v_binderName_3949_);
lean_dec_ref(v_doms_3934_);
lean_dec_ref(v_fvars_3933_);
lean_dec_ref(v_lctx_3932_);
v_a_3967_ = lean_ctor_get(v___x_3958_, 0);
v_isSharedCheck_3974_ = !lean_is_exclusive(v___x_3958_);
if (v_isSharedCheck_3974_ == 0)
{
v___x_3969_ = v___x_3958_;
v_isShared_3970_ = v_isSharedCheck_3974_;
goto v_resetjp_3968_;
}
else
{
lean_inc(v_a_3967_);
lean_dec(v___x_3958_);
v___x_3969_ = lean_box(0);
v_isShared_3970_ = v_isSharedCheck_3974_;
goto v_resetjp_3968_;
}
v_resetjp_3968_:
{
lean_object* v___x_3972_; 
if (v_isShared_3970_ == 0)
{
v___x_3972_ = v___x_3969_;
goto v_reusejp_3971_;
}
else
{
lean_object* v_reuseFailAlloc_3973_; 
v_reuseFailAlloc_3973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3973_, 0, v_a_3967_);
v___x_3972_ = v_reuseFailAlloc_3973_;
goto v_reusejp_3971_;
}
v_reusejp_3971_:
{
return v___x_3972_;
}
}
}
}
else
{
lean_dec_ref(v_body_3951_);
lean_dec(v_binderName_3949_);
lean_dec_ref(v_doms_3934_);
lean_dec_ref(v_fvars_3933_);
lean_dec_ref(v_lctx_3932_);
return v___x_3956_;
}
}
else
{
lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v___f_3977_; lean_object* v___x_3978_; 
v___x_3975_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___closed__0);
v___x_3976_ = lean_expr_instantiate_rev(v_e_3935_, v_fvars_3933_);
lean_dec_ref(v_e_3935_);
v___f_3977_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go___lam__0___boxed), 10, 3);
lean_closure_set(v___f_3977_, 0, v___x_3976_);
lean_closure_set(v___f_3977_, 1, v_fvars_3933_);
lean_closure_set(v___f_3977_, 2, v_doms_3934_);
v___x_3978_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg(v_lctx_3932_, v___x_3975_, v___f_3977_, v_a_3936_, v_a_3937_, v_a_3938_, v_a_3939_, v_a_3940_, v_a_3941_);
return v___x_3978_;
}
}
}
else
{
lean_object* v_a_3979_; lean_object* v___x_3981_; uint8_t v_isShared_3982_; uint8_t v_isSharedCheck_3986_; 
lean_dec_ref(v_e_3935_);
lean_dec_ref(v_doms_3934_);
lean_dec_ref(v_fvars_3933_);
lean_dec_ref(v_lctx_3932_);
v_a_3979_ = lean_ctor_get(v___x_3943_, 0);
v_isSharedCheck_3986_ = !lean_is_exclusive(v___x_3943_);
if (v_isSharedCheck_3986_ == 0)
{
v___x_3981_ = v___x_3943_;
v_isShared_3982_ = v_isSharedCheck_3986_;
goto v_resetjp_3980_;
}
else
{
lean_inc(v_a_3979_);
lean_dec(v___x_3943_);
v___x_3981_ = lean_box(0);
v_isShared_3982_ = v_isSharedCheck_3986_;
goto v_resetjp_3980_;
}
v_resetjp_3980_:
{
lean_object* v___x_3984_; 
if (v_isShared_3982_ == 0)
{
v___x_3984_ = v___x_3981_;
goto v_reusejp_3983_;
}
else
{
lean_object* v_reuseFailAlloc_3985_; 
v_reuseFailAlloc_3985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3985_, 0, v_a_3979_);
v___x_3984_ = v_reuseFailAlloc_3985_;
goto v_reusejp_3983_;
}
v_reusejp_3983_:
{
return v___x_3984_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall(lean_object* v_e_3987_, lean_object* v_a_3988_, lean_object* v_a_3989_, lean_object* v_a_3990_, lean_object* v_a_3991_, lean_object* v_a_3992_, lean_object* v_a_3993_){
_start:
{
uint32_t v___x_3995_; uint8_t v___x_3996_; 
v___x_3995_ = 5;
v___x_3996_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_canSkip(v_e_3987_, v___x_3995_);
if (v___x_3996_ == 0)
{
lean_object* v_lctx_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; 
v_lctx_3997_ = lean_ctor_get(v_a_3990_, 2);
v___x_3998_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0);
lean_inc_ref(v_lctx_3997_);
v___x_3999_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go(v_lctx_3997_, v___x_3998_, v___x_3998_, v_e_3987_, v_a_3988_, v_a_3989_, v_a_3990_, v_a_3991_, v_a_3992_, v_a_3993_);
return v___x_3999_;
}
else
{
lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; 
v___x_4000_ = lean_box(0);
v___x_4001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4001_, 0, v_e_3987_);
lean_ctor_set(v___x_4001_, 1, v___x_4000_);
v___x_4002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4002_, 0, v___x_4001_);
return v___x_4002_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall___boxed(lean_object* v_e_4003_, lean_object* v_a_4004_, lean_object* v_a_4005_, lean_object* v_a_4006_, lean_object* v_a_4007_, lean_object* v_a_4008_, lean_object* v_a_4009_, lean_object* v_a_4010_){
_start:
{
lean_object* v_res_4011_; 
v_res_4011_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall(v_e_4003_, v_a_4004_, v_a_4005_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_);
lean_dec(v_a_4009_);
lean_dec_ref(v_a_4008_);
lean_dec(v_a_4007_);
lean_dec_ref(v_a_4006_);
lean_dec(v_a_4005_);
lean_dec(v_a_4004_);
return v_res_4011_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__0___boxed(lean_object* v_struct_4012_, lean_object* v_e_4013_, lean_object* v_typeName_4014_, lean_object* v_idx_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_, lean_object* v___y_4020_, lean_object* v___y_4021_, lean_object* v___y_4022_){
_start:
{
lean_object* v_res_4023_; 
v_res_4023_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__0(v_struct_4012_, v_e_4013_, v_typeName_4014_, v_idx_4015_, v___y_4016_, v___y_4017_, v___y_4018_, v___y_4019_, v___y_4020_, v___y_4021_);
lean_dec(v___y_4021_);
lean_dec_ref(v___y_4020_);
lean_dec(v___y_4019_);
lean_dec_ref(v___y_4018_);
lean_dec(v___y_4017_);
lean_dec(v___y_4016_);
return v_res_4023_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___boxed(lean_object* v_e_4024_, lean_object* v_a_4025_, lean_object* v_a_4026_, lean_object* v_a_4027_, lean_object* v_a_4028_, lean_object* v_a_4029_, lean_object* v_a_4030_, lean_object* v_a_4031_){
_start:
{
lean_object* v_res_4032_; 
v_res_4032_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(v_e_4024_, v_a_4025_, v_a_4026_, v_a_4027_, v_a_4028_, v_a_4029_, v_a_4030_);
lean_dec(v_a_4030_);
lean_dec_ref(v_a_4029_);
lean_dec(v_a_4028_);
lean_dec_ref(v_a_4027_);
lean_dec(v_a_4026_);
lean_dec(v_a_4025_);
return v_res_4032_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__2(lean_object* v_fvars_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_, lean_object* v___y_4036_, lean_object* v___y_4037_, lean_object* v___y_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_){
_start:
{
lean_object* v___x_4042_; 
v___x_4042_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(v___y_4034_, v___y_4035_, v___y_4036_, v___y_4037_, v___y_4038_, v___y_4039_, v___y_4040_);
if (lean_obj_tag(v___x_4042_) == 0)
{
lean_object* v_a_4043_; lean_object* v___x_4044_; 
v_a_4043_ = lean_ctor_get(v___x_4042_, 0);
lean_inc(v_a_4043_);
lean_dec_ref(v___x_4042_);
v___x_4044_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize(v_fvars_4033_, v_a_4043_, v___y_4035_, v___y_4036_, v___y_4037_, v___y_4038_, v___y_4039_, v___y_4040_);
return v___x_4044_;
}
else
{
lean_dec_ref(v_fvars_4033_);
return v___x_4042_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__2___boxed(lean_object* v_fvars_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_){
_start:
{
lean_object* v_res_4054_; 
v_res_4054_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__2(v_fvars_4045_, v___y_4046_, v___y_4047_, v___y_4048_, v___y_4049_, v___y_4050_, v___y_4051_, v___y_4052_);
lean_dec(v___y_4052_);
lean_dec_ref(v___y_4051_);
lean_dec(v___y_4050_);
lean_dec_ref(v___y_4049_);
lean_dec(v___y_4048_);
lean_dec(v___y_4047_);
return v_res_4054_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go(lean_object* v_lctx_4055_, lean_object* v_fvars_4056_, lean_object* v_e_4057_, lean_object* v_letFVars_4058_, lean_object* v_a_4059_, lean_object* v_a_4060_, lean_object* v_a_4061_, lean_object* v_a_4062_, lean_object* v_a_4063_, lean_object* v_a_4064_){
_start:
{
switch(lean_obj_tag(v_e_4057_))
{
case 6:
{
lean_object* v_binderName_4066_; lean_object* v_binderType_4067_; lean_object* v_body_4068_; uint8_t v_binderInfo_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; 
v_binderName_4066_ = lean_ctor_get(v_e_4057_, 0);
lean_inc(v_binderName_4066_);
v_binderType_4067_ = lean_ctor_get(v_e_4057_, 1);
lean_inc_ref(v_binderType_4067_);
v_body_4068_ = lean_ctor_get(v_e_4057_, 2);
lean_inc_ref(v_body_4068_);
v_binderInfo_4069_ = lean_ctor_get_uint8(v_e_4057_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_4057_);
v___x_4070_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitType___boxed), 8, 0);
lean_inc_ref(v_lctx_4055_);
lean_inc(v_letFVars_4058_);
v___x_4071_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0(v_fvars_4056_, v_letFVars_4058_, v_lctx_4055_, v___x_4070_, v_binderType_4067_, v_a_4059_, v_a_4060_, v_a_4061_, v_a_4062_, v_a_4063_, v_a_4064_);
lean_dec_ref(v_binderType_4067_);
if (lean_obj_tag(v___x_4071_) == 0)
{
lean_object* v_a_4072_; lean_object* v___x_4073_; 
v_a_4072_ = lean_ctor_get(v___x_4071_, 0);
lean_inc(v_a_4072_);
lean_dec_ref(v___x_4071_);
v___x_4073_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1(v_a_4059_, v_a_4060_, v_a_4061_, v_a_4062_, v_a_4063_, v_a_4064_);
if (lean_obj_tag(v___x_4073_) == 0)
{
lean_object* v_a_4074_; lean_object* v_expr_4075_; uint8_t v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; 
v_a_4074_ = lean_ctor_get(v___x_4073_, 0);
lean_inc_n(v_a_4074_, 2);
lean_dec_ref(v___x_4073_);
v_expr_4075_ = lean_ctor_get(v_a_4072_, 0);
lean_inc_ref(v_expr_4075_);
lean_dec(v_a_4072_);
v___x_4076_ = 0;
v___x_4077_ = l_Lean_LocalContext_mkLocalDecl(v_lctx_4055_, v_a_4074_, v_binderName_4066_, v_expr_4075_, v_binderInfo_4069_, v___x_4076_);
v___x_4078_ = l_Lean_Expr_fvar___override(v_a_4074_);
v___x_4079_ = lean_array_push(v_fvars_4056_, v___x_4078_);
v_lctx_4055_ = v___x_4077_;
v_fvars_4056_ = v___x_4079_;
v_e_4057_ = v_body_4068_;
goto _start;
}
else
{
lean_object* v_a_4081_; lean_object* v___x_4083_; uint8_t v_isShared_4084_; uint8_t v_isSharedCheck_4088_; 
lean_dec(v_a_4072_);
lean_dec_ref(v_body_4068_);
lean_dec(v_binderName_4066_);
lean_dec(v_letFVars_4058_);
lean_dec_ref(v_fvars_4056_);
lean_dec_ref(v_lctx_4055_);
v_a_4081_ = lean_ctor_get(v___x_4073_, 0);
v_isSharedCheck_4088_ = !lean_is_exclusive(v___x_4073_);
if (v_isSharedCheck_4088_ == 0)
{
v___x_4083_ = v___x_4073_;
v_isShared_4084_ = v_isSharedCheck_4088_;
goto v_resetjp_4082_;
}
else
{
lean_inc(v_a_4081_);
lean_dec(v___x_4073_);
v___x_4083_ = lean_box(0);
v_isShared_4084_ = v_isSharedCheck_4088_;
goto v_resetjp_4082_;
}
v_resetjp_4082_:
{
lean_object* v___x_4086_; 
if (v_isShared_4084_ == 0)
{
v___x_4086_ = v___x_4083_;
goto v_reusejp_4085_;
}
else
{
lean_object* v_reuseFailAlloc_4087_; 
v_reuseFailAlloc_4087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4087_, 0, v_a_4081_);
v___x_4086_ = v_reuseFailAlloc_4087_;
goto v_reusejp_4085_;
}
v_reusejp_4085_:
{
return v___x_4086_;
}
}
}
}
else
{
lean_dec_ref(v_body_4068_);
lean_dec(v_binderName_4066_);
lean_dec(v_letFVars_4058_);
lean_dec_ref(v_fvars_4056_);
lean_dec_ref(v_lctx_4055_);
return v___x_4071_;
}
}
case 8:
{
lean_object* v_declName_4089_; lean_object* v_type_4090_; lean_object* v_value_4091_; lean_object* v_body_4092_; uint8_t v_nondep_4093_; lean_object* v___y_4095_; lean_object* v___y_4096_; lean_object* v___y_4097_; lean_object* v___y_4098_; lean_object* v___y_4099_; lean_object* v___y_4100_; lean_object* v___y_4101_; lean_object* v___y_4102_; lean_object* v___y_4103_; lean_object* v___x_4107_; lean_object* v___x_4108_; 
v_declName_4089_ = lean_ctor_get(v_e_4057_, 0);
lean_inc(v_declName_4089_);
v_type_4090_ = lean_ctor_get(v_e_4057_, 1);
lean_inc_ref(v_type_4090_);
v_value_4091_ = lean_ctor_get(v_e_4057_, 2);
lean_inc_ref(v_value_4091_);
v_body_4092_ = lean_ctor_get(v_e_4057_, 3);
lean_inc_ref(v_body_4092_);
v_nondep_4093_ = lean_ctor_get_uint8(v_e_4057_, sizeof(void*)*4 + 8);
lean_dec_ref(v_e_4057_);
v___x_4107_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitType___boxed), 8, 0);
lean_inc_ref(v_lctx_4055_);
lean_inc(v_letFVars_4058_);
v___x_4108_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0(v_fvars_4056_, v_letFVars_4058_, v_lctx_4055_, v___x_4107_, v_type_4090_, v_a_4059_, v_a_4060_, v_a_4061_, v_a_4062_, v_a_4063_, v_a_4064_);
lean_dec_ref(v_type_4090_);
if (lean_obj_tag(v___x_4108_) == 0)
{
lean_object* v_a_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; 
v_a_4109_ = lean_ctor_get(v___x_4108_, 0);
lean_inc(v_a_4109_);
lean_dec_ref(v___x_4108_);
v___x_4110_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___boxed), 8, 0);
lean_inc_ref(v_lctx_4055_);
lean_inc(v_letFVars_4058_);
v___x_4111_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0(v_fvars_4056_, v_letFVars_4058_, v_lctx_4055_, v___x_4110_, v_value_4091_, v_a_4059_, v_a_4060_, v_a_4061_, v_a_4062_, v_a_4063_, v_a_4064_);
lean_dec_ref(v_value_4091_);
if (lean_obj_tag(v___x_4111_) == 0)
{
lean_object* v_a_4112_; lean_object* v___y_4114_; lean_object* v___y_4115_; lean_object* v___y_4116_; lean_object* v___y_4117_; lean_object* v___y_4118_; lean_object* v___y_4119_; uint8_t v___x_4142_; 
v_a_4112_ = lean_ctor_get(v___x_4111_, 0);
lean_inc(v_a_4112_);
lean_dec_ref(v___x_4111_);
v___x_4142_ = l_List_isEmpty___redArg(v_letFVars_4058_);
if (v___x_4142_ == 0)
{
lean_object* v___f_4143_; lean_object* v___x_4144_; 
lean_inc(v_a_4109_);
lean_inc(v_a_4112_);
v___f_4143_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___boxed), 9, 2);
lean_closure_set(v___f_4143_, 0, v_a_4112_);
lean_closure_set(v___f_4143_, 1, v_a_4109_);
lean_inc_ref(v_lctx_4055_);
v___x_4144_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2___redArg(v_lctx_4055_, v___f_4143_, v_a_4059_, v_a_4060_, v_a_4061_, v_a_4062_, v_a_4063_, v_a_4064_);
if (lean_obj_tag(v___x_4144_) == 0)
{
lean_dec_ref(v___x_4144_);
v___y_4114_ = v_a_4059_;
v___y_4115_ = v_a_4060_;
v___y_4116_ = v_a_4061_;
v___y_4117_ = v_a_4062_;
v___y_4118_ = v_a_4063_;
v___y_4119_ = v_a_4064_;
goto v___jp_4113_;
}
else
{
lean_object* v_a_4145_; lean_object* v___x_4147_; uint8_t v_isShared_4148_; uint8_t v_isSharedCheck_4152_; 
lean_dec(v_a_4112_);
lean_dec(v_a_4109_);
lean_dec_ref(v_body_4092_);
lean_dec(v_declName_4089_);
lean_dec(v_letFVars_4058_);
lean_dec_ref(v_fvars_4056_);
lean_dec_ref(v_lctx_4055_);
v_a_4145_ = lean_ctor_get(v___x_4144_, 0);
v_isSharedCheck_4152_ = !lean_is_exclusive(v___x_4144_);
if (v_isSharedCheck_4152_ == 0)
{
v___x_4147_ = v___x_4144_;
v_isShared_4148_ = v_isSharedCheck_4152_;
goto v_resetjp_4146_;
}
else
{
lean_inc(v_a_4145_);
lean_dec(v___x_4144_);
v___x_4147_ = lean_box(0);
v_isShared_4148_ = v_isSharedCheck_4152_;
goto v_resetjp_4146_;
}
v_resetjp_4146_:
{
lean_object* v___x_4150_; 
if (v_isShared_4148_ == 0)
{
v___x_4150_ = v___x_4147_;
goto v_reusejp_4149_;
}
else
{
lean_object* v_reuseFailAlloc_4151_; 
v_reuseFailAlloc_4151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4151_, 0, v_a_4145_);
v___x_4150_ = v_reuseFailAlloc_4151_;
goto v_reusejp_4149_;
}
v_reusejp_4149_:
{
return v___x_4150_;
}
}
}
}
else
{
v___y_4114_ = v_a_4059_;
v___y_4115_ = v_a_4060_;
v___y_4116_ = v_a_4061_;
v___y_4117_ = v_a_4062_;
v___y_4118_ = v_a_4063_;
v___y_4119_ = v_a_4064_;
goto v___jp_4113_;
}
v___jp_4113_:
{
lean_object* v___x_4120_; 
v___x_4120_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1(v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
if (lean_obj_tag(v___x_4120_) == 0)
{
lean_object* v_a_4121_; lean_object* v_expr_4122_; lean_object* v_expr_4123_; lean_object* v___x_4125_; uint8_t v_isShared_4126_; uint8_t v_isSharedCheck_4132_; 
v_a_4121_ = lean_ctor_get(v___x_4120_, 0);
lean_inc(v_a_4121_);
lean_dec_ref(v___x_4120_);
v_expr_4122_ = lean_ctor_get(v_a_4109_, 0);
lean_inc_ref(v_expr_4122_);
lean_dec(v_a_4109_);
v_expr_4123_ = lean_ctor_get(v_a_4112_, 0);
v_isSharedCheck_4132_ = !lean_is_exclusive(v_a_4112_);
if (v_isSharedCheck_4132_ == 0)
{
lean_object* v_unused_4133_; 
v_unused_4133_ = lean_ctor_get(v_a_4112_, 1);
lean_dec(v_unused_4133_);
v___x_4125_ = v_a_4112_;
v_isShared_4126_ = v_isSharedCheck_4132_;
goto v_resetjp_4124_;
}
else
{
lean_inc(v_expr_4123_);
lean_dec(v_a_4112_);
v___x_4125_ = lean_box(0);
v_isShared_4126_ = v_isSharedCheck_4132_;
goto v_resetjp_4124_;
}
v_resetjp_4124_:
{
uint8_t v___x_4127_; lean_object* v___x_4128_; 
v___x_4127_ = 0;
lean_inc(v_a_4121_);
v___x_4128_ = l_Lean_LocalContext_mkLetDecl(v_lctx_4055_, v_a_4121_, v_declName_4089_, v_expr_4122_, v_expr_4123_, v_nondep_4093_, v___x_4127_);
if (v_nondep_4093_ == 0)
{
lean_object* v___x_4130_; 
lean_inc(v_a_4121_);
if (v_isShared_4126_ == 0)
{
lean_ctor_set_tag(v___x_4125_, 1);
lean_ctor_set(v___x_4125_, 1, v_letFVars_4058_);
lean_ctor_set(v___x_4125_, 0, v_a_4121_);
v___x_4130_ = v___x_4125_;
goto v_reusejp_4129_;
}
else
{
lean_object* v_reuseFailAlloc_4131_; 
v_reuseFailAlloc_4131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4131_, 0, v_a_4121_);
lean_ctor_set(v_reuseFailAlloc_4131_, 1, v_letFVars_4058_);
v___x_4130_ = v_reuseFailAlloc_4131_;
goto v_reusejp_4129_;
}
v_reusejp_4129_:
{
v___y_4095_ = v___y_4116_;
v___y_4096_ = v___y_4115_;
v___y_4097_ = v___y_4118_;
v___y_4098_ = v___x_4128_;
v___y_4099_ = v___y_4117_;
v___y_4100_ = v___y_4114_;
v___y_4101_ = v_a_4121_;
v___y_4102_ = v___y_4119_;
v___y_4103_ = v___x_4130_;
goto v___jp_4094_;
}
}
else
{
lean_del_object(v___x_4125_);
v___y_4095_ = v___y_4116_;
v___y_4096_ = v___y_4115_;
v___y_4097_ = v___y_4118_;
v___y_4098_ = v___x_4128_;
v___y_4099_ = v___y_4117_;
v___y_4100_ = v___y_4114_;
v___y_4101_ = v_a_4121_;
v___y_4102_ = v___y_4119_;
v___y_4103_ = v_letFVars_4058_;
goto v___jp_4094_;
}
}
}
else
{
lean_object* v_a_4134_; lean_object* v___x_4136_; uint8_t v_isShared_4137_; uint8_t v_isSharedCheck_4141_; 
lean_dec(v_a_4112_);
lean_dec(v_a_4109_);
lean_dec_ref(v_body_4092_);
lean_dec(v_declName_4089_);
lean_dec(v_letFVars_4058_);
lean_dec_ref(v_fvars_4056_);
lean_dec_ref(v_lctx_4055_);
v_a_4134_ = lean_ctor_get(v___x_4120_, 0);
v_isSharedCheck_4141_ = !lean_is_exclusive(v___x_4120_);
if (v_isSharedCheck_4141_ == 0)
{
v___x_4136_ = v___x_4120_;
v_isShared_4137_ = v_isSharedCheck_4141_;
goto v_resetjp_4135_;
}
else
{
lean_inc(v_a_4134_);
lean_dec(v___x_4120_);
v___x_4136_ = lean_box(0);
v_isShared_4137_ = v_isSharedCheck_4141_;
goto v_resetjp_4135_;
}
v_resetjp_4135_:
{
lean_object* v___x_4139_; 
if (v_isShared_4137_ == 0)
{
v___x_4139_ = v___x_4136_;
goto v_reusejp_4138_;
}
else
{
lean_object* v_reuseFailAlloc_4140_; 
v_reuseFailAlloc_4140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4140_, 0, v_a_4134_);
v___x_4139_ = v_reuseFailAlloc_4140_;
goto v_reusejp_4138_;
}
v_reusejp_4138_:
{
return v___x_4139_;
}
}
}
}
}
else
{
lean_dec(v_a_4109_);
lean_dec_ref(v_body_4092_);
lean_dec(v_declName_4089_);
lean_dec(v_letFVars_4058_);
lean_dec_ref(v_fvars_4056_);
lean_dec_ref(v_lctx_4055_);
return v___x_4111_;
}
}
else
{
lean_dec_ref(v_body_4092_);
lean_dec_ref(v_value_4091_);
lean_dec(v_declName_4089_);
lean_dec(v_letFVars_4058_);
lean_dec_ref(v_fvars_4056_);
lean_dec_ref(v_lctx_4055_);
return v___x_4108_;
}
v___jp_4094_:
{
lean_object* v___x_4104_; lean_object* v___x_4105_; 
v___x_4104_ = l_Lean_Expr_fvar___override(v___y_4101_);
v___x_4105_ = lean_array_push(v_fvars_4056_, v___x_4104_);
v_lctx_4055_ = v___y_4098_;
v_fvars_4056_ = v___x_4105_;
v_e_4057_ = v_body_4092_;
v_letFVars_4058_ = v___y_4103_;
v_a_4059_ = v___y_4100_;
v_a_4060_ = v___y_4096_;
v_a_4061_ = v___y_4095_;
v_a_4062_ = v___y_4099_;
v_a_4063_ = v___y_4097_;
v_a_4064_ = v___y_4102_;
goto _start;
}
}
default: 
{
lean_object* v___f_4153_; lean_object* v___x_4154_; 
lean_inc_ref(v_fvars_4056_);
v___f_4153_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__2___boxed), 9, 1);
lean_closure_set(v___f_4153_, 0, v_fvars_4056_);
v___x_4154_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0(v_fvars_4056_, v_letFVars_4058_, v_lctx_4055_, v___f_4153_, v_e_4057_, v_a_4059_, v_a_4060_, v_a_4061_, v_a_4062_, v_a_4063_, v_a_4064_);
lean_dec_ref(v_e_4057_);
lean_dec_ref(v_fvars_4056_);
return v___x_4154_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet(lean_object* v_e_4155_, lean_object* v_a_4156_, lean_object* v_a_4157_, lean_object* v_a_4158_, lean_object* v_a_4159_, lean_object* v_a_4160_, lean_object* v_a_4161_){
_start:
{
uint32_t v___x_4163_; uint8_t v___x_4164_; 
v___x_4163_ = 5;
v___x_4164_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_canSkip(v_e_4155_, v___x_4163_);
if (v___x_4164_ == 0)
{
lean_object* v_lctx_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; 
v_lctx_4165_ = lean_ctor_get(v_a_4158_, 2);
v___x_4166_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0);
lean_inc(v_a_4156_);
lean_inc_ref(v_lctx_4165_);
v___x_4167_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go(v_lctx_4165_, v___x_4166_, v_e_4155_, v_a_4156_, v_a_4156_, v_a_4157_, v_a_4158_, v_a_4159_, v_a_4160_, v_a_4161_);
return v___x_4167_;
}
else
{
lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; 
v___x_4168_ = lean_box(0);
v___x_4169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4169_, 0, v_e_4155_);
lean_ctor_set(v___x_4169_, 1, v___x_4168_);
v___x_4170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4170_, 0, v___x_4169_);
return v___x_4170_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet___boxed(lean_object* v_e_4171_, lean_object* v_a_4172_, lean_object* v_a_4173_, lean_object* v_a_4174_, lean_object* v_a_4175_, lean_object* v_a_4176_, lean_object* v_a_4177_, lean_object* v_a_4178_){
_start:
{
lean_object* v_res_4179_; 
v_res_4179_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet(v_e_4171_, v_a_4172_, v_a_4173_, v_a_4174_, v_a_4175_, v_a_4176_, v_a_4177_);
lean_dec(v_a_4177_);
lean_dec_ref(v_a_4176_);
lean_dec(v_a_4175_);
lean_dec_ref(v_a_4174_);
lean_dec(v_a_4173_);
lean_dec(v_a_4172_);
return v_res_4179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1(lean_object* v_e_4180_, lean_object* v___y_4181_, lean_object* v___y_4182_, lean_object* v___y_4183_, lean_object* v___y_4184_, lean_object* v___y_4185_, lean_object* v___y_4186_){
_start:
{
switch(lean_obj_tag(v_e_4180_))
{
case 0:
{
lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; lean_object* v___x_4191_; 
v___x_4188_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___closed__1, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___closed__1_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___closed__1);
v___x_4189_ = l_Lean_MessageData_ofExpr(v_e_4180_);
v___x_4190_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4190_, 0, v___x_4188_);
lean_ctor_set(v___x_4190_, 1, v___x_4189_);
v___x_4191_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___redArg(v___x_4190_, v___y_4183_, v___y_4184_, v___y_4185_, v___y_4186_);
return v___x_4191_;
}
case 1:
{
lean_object* v___x_4192_; 
v___x_4192_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar___redArg(v_e_4180_, v___y_4183_, v___y_4185_, v___y_4186_);
return v___x_4192_;
}
case 2:
{
lean_object* v___x_4193_; 
v___x_4193_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar(v_e_4180_, v___y_4181_, v___y_4182_, v___y_4183_, v___y_4184_, v___y_4185_, v___y_4186_);
return v___x_4193_;
}
case 3:
{
lean_object* v_u_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; 
v_u_4194_ = lean_ctor_get(v_e_4180_, 0);
lean_inc(v_u_4194_);
v___x_4195_ = l_Lean_Level_succ___override(v_u_4194_);
v___x_4196_ = l_Lean_Expr_sort___override(v___x_4195_);
v___x_4197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4197_, 0, v___x_4196_);
v___x_4198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4198_, 0, v_e_4180_);
lean_ctor_set(v___x_4198_, 1, v___x_4197_);
v___x_4199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4199_, 0, v___x_4198_);
return v___x_4199_;
}
case 4:
{
lean_object* v___x_4200_; 
v___x_4200_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst(v_e_4180_, v___y_4181_, v___y_4182_, v___y_4183_, v___y_4184_, v___y_4185_, v___y_4186_);
return v___x_4200_;
}
case 5:
{
lean_object* v___x_4201_; lean_object* v___x_4202_; 
lean_inc_ref(v_e_4180_);
v___x_4201_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs___boxed), 8, 1);
lean_closure_set(v___x_4201_, 0, v_e_4180_);
v___x_4202_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkCache(v_e_4180_, v___x_4201_, v___y_4181_, v___y_4182_, v___y_4183_, v___y_4184_, v___y_4185_, v___y_4186_);
return v___x_4202_;
}
case 7:
{
lean_object* v___x_4203_; lean_object* v___x_4204_; 
lean_inc_ref(v_e_4180_);
v___x_4203_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall___boxed), 8, 1);
lean_closure_set(v___x_4203_, 0, v_e_4180_);
v___x_4204_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkCache(v_e_4180_, v___x_4203_, v___y_4181_, v___y_4182_, v___y_4183_, v___y_4184_, v___y_4185_, v___y_4186_);
return v___x_4204_;
}
case 9:
{
lean_object* v_a_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; 
v_a_4205_ = lean_ctor_get(v_e_4180_, 0);
v___x_4206_ = l_Lean_Literal_type(v_a_4205_);
v___x_4207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4207_, 0, v___x_4206_);
v___x_4208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4208_, 0, v_e_4180_);
lean_ctor_set(v___x_4208_, 1, v___x_4207_);
v___x_4209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4209_, 0, v___x_4208_);
return v___x_4209_;
}
case 10:
{
lean_object* v_data_4210_; lean_object* v_expr_4211_; lean_object* v___x_4212_; 
v_data_4210_ = lean_ctor_get(v_e_4180_, 0);
v_expr_4211_ = lean_ctor_get(v_e_4180_, 1);
lean_inc_ref(v_expr_4211_);
v___x_4212_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(v_expr_4211_, v___y_4181_, v___y_4182_, v___y_4183_, v___y_4184_, v___y_4185_, v___y_4186_);
if (lean_obj_tag(v___x_4212_) == 0)
{
lean_object* v_a_4213_; lean_object* v___x_4215_; uint8_t v_isShared_4216_; uint8_t v_isSharedCheck_4235_; 
v_a_4213_ = lean_ctor_get(v___x_4212_, 0);
v_isSharedCheck_4235_ = !lean_is_exclusive(v___x_4212_);
if (v_isSharedCheck_4235_ == 0)
{
v___x_4215_ = v___x_4212_;
v_isShared_4216_ = v_isSharedCheck_4235_;
goto v_resetjp_4214_;
}
else
{
lean_inc(v_a_4213_);
lean_dec(v___x_4212_);
v___x_4215_ = lean_box(0);
v_isShared_4216_ = v_isSharedCheck_4235_;
goto v_resetjp_4214_;
}
v_resetjp_4214_:
{
lean_object* v_expr_4217_; lean_object* v_type_x3f_4218_; lean_object* v___x_4220_; uint8_t v_isShared_4221_; uint8_t v_isSharedCheck_4234_; 
v_expr_4217_ = lean_ctor_get(v_a_4213_, 0);
v_type_x3f_4218_ = lean_ctor_get(v_a_4213_, 1);
v_isSharedCheck_4234_ = !lean_is_exclusive(v_a_4213_);
if (v_isSharedCheck_4234_ == 0)
{
v___x_4220_ = v_a_4213_;
v_isShared_4221_ = v_isSharedCheck_4234_;
goto v_resetjp_4219_;
}
else
{
lean_inc(v_type_x3f_4218_);
lean_inc(v_expr_4217_);
lean_dec(v_a_4213_);
v___x_4220_ = lean_box(0);
v_isShared_4221_ = v_isSharedCheck_4234_;
goto v_resetjp_4219_;
}
v_resetjp_4219_:
{
lean_object* v___y_4223_; size_t v___x_4230_; size_t v___x_4231_; uint8_t v___x_4232_; 
v___x_4230_ = lean_ptr_addr(v_expr_4211_);
v___x_4231_ = lean_ptr_addr(v_expr_4217_);
v___x_4232_ = lean_usize_dec_eq(v___x_4230_, v___x_4231_);
if (v___x_4232_ == 0)
{
lean_object* v___x_4233_; 
lean_inc(v_data_4210_);
lean_dec_ref(v_e_4180_);
v___x_4233_ = l_Lean_Expr_mdata___override(v_data_4210_, v_expr_4217_);
v___y_4223_ = v___x_4233_;
goto v___jp_4222_;
}
else
{
lean_dec_ref(v_expr_4217_);
v___y_4223_ = v_e_4180_;
goto v___jp_4222_;
}
v___jp_4222_:
{
lean_object* v___x_4225_; 
if (v_isShared_4221_ == 0)
{
lean_ctor_set(v___x_4220_, 0, v___y_4223_);
v___x_4225_ = v___x_4220_;
goto v_reusejp_4224_;
}
else
{
lean_object* v_reuseFailAlloc_4229_; 
v_reuseFailAlloc_4229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4229_, 0, v___y_4223_);
lean_ctor_set(v_reuseFailAlloc_4229_, 1, v_type_x3f_4218_);
v___x_4225_ = v_reuseFailAlloc_4229_;
goto v_reusejp_4224_;
}
v_reusejp_4224_:
{
lean_object* v___x_4227_; 
if (v_isShared_4216_ == 0)
{
lean_ctor_set(v___x_4215_, 0, v___x_4225_);
v___x_4227_ = v___x_4215_;
goto v_reusejp_4226_;
}
else
{
lean_object* v_reuseFailAlloc_4228_; 
v_reuseFailAlloc_4228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4228_, 0, v___x_4225_);
v___x_4227_ = v_reuseFailAlloc_4228_;
goto v_reusejp_4226_;
}
v_reusejp_4226_:
{
return v___x_4227_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_4180_);
return v___x_4212_;
}
}
case 11:
{
lean_object* v_typeName_4236_; lean_object* v_idx_4237_; lean_object* v_struct_4238_; lean_object* v___f_4239_; lean_object* v___x_4240_; 
v_typeName_4236_ = lean_ctor_get(v_e_4180_, 0);
v_idx_4237_ = lean_ctor_get(v_e_4180_, 1);
v_struct_4238_ = lean_ctor_get(v_e_4180_, 2);
lean_inc(v_idx_4237_);
lean_inc(v_typeName_4236_);
lean_inc_ref(v_e_4180_);
lean_inc_ref(v_struct_4238_);
v___f_4239_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__0___boxed), 11, 4);
lean_closure_set(v___f_4239_, 0, v_struct_4238_);
lean_closure_set(v___f_4239_, 1, v_e_4180_);
lean_closure_set(v___f_4239_, 2, v_typeName_4236_);
lean_closure_set(v___f_4239_, 3, v_idx_4237_);
v___x_4240_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkCache(v_e_4180_, v___f_4239_, v___y_4181_, v___y_4182_, v___y_4183_, v___y_4184_, v___y_4185_, v___y_4186_);
return v___x_4240_;
}
default: 
{
lean_object* v___x_4241_; lean_object* v___x_4242_; 
lean_inc_ref(v_e_4180_);
v___x_4241_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet___boxed), 8, 1);
lean_closure_set(v___x_4241_, 0, v_e_4180_);
v___x_4242_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkCache(v_e_4180_, v___x_4241_, v___y_4181_, v___y_4182_, v___y_4183_, v___y_4184_, v___y_4185_, v___y_4186_);
return v___x_4242_;
}
}
}
}
static double _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___closed__0(void){
_start:
{
lean_object* v___x_4243_; double v___x_4244_; 
v___x_4243_ = lean_unsigned_to_nat(1000000000u);
v___x_4244_ = lean_float_of_nat(v___x_4243_);
return v___x_4244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(lean_object* v_e_4245_, lean_object* v_a_4246_, lean_object* v_a_4247_, lean_object* v_a_4248_, lean_object* v_a_4249_, lean_object* v_a_4250_, lean_object* v_a_4251_){
_start:
{
lean_object* v_options_4253_; uint8_t v_hasTrace_4254_; 
v_options_4253_ = lean_ctor_get(v_a_4250_, 2);
v_hasTrace_4254_ = lean_ctor_get_uint8(v_options_4253_, sizeof(void*)*1);
if (v_hasTrace_4254_ == 0)
{
lean_object* v___x_4255_; 
v___x_4255_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1(v_e_4245_, v_a_4246_, v_a_4247_, v_a_4248_, v_a_4249_, v_a_4250_, v_a_4251_);
return v___x_4255_;
}
else
{
lean_object* v_inheritedTraceOptions_4256_; lean_object* v___f_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; uint8_t v___x_4261_; lean_object* v___y_4263_; lean_object* v___y_4264_; lean_object* v_a_4265_; lean_object* v___y_4279_; lean_object* v___y_4280_; lean_object* v_a_4281_; 
v_inheritedTraceOptions_4256_ = lean_ctor_get(v_a_4250_, 13);
lean_inc_ref(v_e_4245_);
v___f_4257_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___boxed), 9, 1);
lean_closure_set(v___f_4257_, 0, v_e_4245_);
v___x_4258_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3);
v___x_4259_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__1, &l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__1_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__1);
v___x_4260_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__6, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__6_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__6);
v___x_4261_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4256_, v_options_4253_, v___x_4260_);
if (v___x_4261_ == 0)
{
lean_object* v___x_4342_; uint8_t v___x_4343_; 
v___x_4342_ = l_Lean_trace_profiler;
v___x_4343_ = l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5(v_options_4253_, v___x_4342_);
if (v___x_4343_ == 0)
{
lean_object* v___x_4344_; 
lean_dec_ref(v___f_4257_);
v___x_4344_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1(v_e_4245_, v_a_4246_, v_a_4247_, v_a_4248_, v_a_4249_, v_a_4250_, v_a_4251_);
return v___x_4344_;
}
else
{
goto v___jp_4291_;
}
}
else
{
goto v___jp_4291_;
}
v___jp_4262_:
{
lean_object* v___x_4266_; lean_object* v___x_4267_; double v___x_4268_; double v___x_4269_; double v___x_4270_; double v___x_4271_; double v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; 
v___x_4266_ = lean_st_ref_get(v_a_4251_);
lean_dec(v___x_4266_);
v___x_4267_ = lean_io_mono_nanos_now();
v___x_4268_ = lean_float_of_nat(v___y_4264_);
v___x_4269_ = lean_float_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___closed__0);
v___x_4270_ = lean_float_div(v___x_4268_, v___x_4269_);
v___x_4271_ = lean_float_of_nat(v___x_4267_);
v___x_4272_ = lean_float_div(v___x_4271_, v___x_4269_);
v___x_4273_ = lean_box_float(v___x_4270_);
v___x_4274_ = lean_box_float(v___x_4272_);
v___x_4275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4275_, 0, v___x_4273_);
lean_ctor_set(v___x_4275_, 1, v___x_4274_);
v___x_4276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4276_, 0, v_a_4265_);
lean_ctor_set(v___x_4276_, 1, v___x_4275_);
v___x_4277_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6(v___x_4258_, v_hasTrace_4254_, v___x_4259_, v_options_4253_, v___x_4261_, v___y_4263_, v___f_4257_, v___x_4276_, v_a_4246_, v_a_4247_, v_a_4248_, v_a_4249_, v_a_4250_, v_a_4251_);
return v___x_4277_;
}
v___jp_4278_:
{
lean_object* v___x_4282_; lean_object* v___x_4283_; double v___x_4284_; double v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; 
v___x_4282_ = lean_st_ref_get(v_a_4251_);
lean_dec(v___x_4282_);
v___x_4283_ = lean_io_get_num_heartbeats();
v___x_4284_ = lean_float_of_nat(v___y_4279_);
v___x_4285_ = lean_float_of_nat(v___x_4283_);
v___x_4286_ = lean_box_float(v___x_4284_);
v___x_4287_ = lean_box_float(v___x_4285_);
v___x_4288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4288_, 0, v___x_4286_);
lean_ctor_set(v___x_4288_, 1, v___x_4287_);
v___x_4289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4289_, 0, v_a_4281_);
lean_ctor_set(v___x_4289_, 1, v___x_4288_);
v___x_4290_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6(v___x_4258_, v_hasTrace_4254_, v___x_4259_, v_options_4253_, v___x_4261_, v___y_4280_, v___f_4257_, v___x_4289_, v_a_4246_, v_a_4247_, v_a_4248_, v_a_4249_, v_a_4250_, v_a_4251_);
return v___x_4290_;
}
v___jp_4291_:
{
lean_object* v___x_4292_; 
v___x_4292_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg(v_a_4251_);
if (lean_obj_tag(v___x_4292_) == 0)
{
lean_object* v_a_4293_; lean_object* v___x_4294_; uint8_t v___x_4295_; 
v_a_4293_ = lean_ctor_get(v___x_4292_, 0);
lean_inc(v_a_4293_);
lean_dec_ref(v___x_4292_);
v___x_4294_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4295_ = l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5(v_options_4253_, v___x_4294_);
if (v___x_4295_ == 0)
{
lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; 
v___x_4296_ = lean_st_ref_get(v_a_4251_);
lean_dec(v___x_4296_);
v___x_4297_ = lean_io_mono_nanos_now();
v___x_4298_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1(v_e_4245_, v_a_4246_, v_a_4247_, v_a_4248_, v_a_4249_, v_a_4250_, v_a_4251_);
if (lean_obj_tag(v___x_4298_) == 0)
{
lean_object* v_a_4299_; lean_object* v___x_4301_; uint8_t v_isShared_4302_; uint8_t v_isSharedCheck_4306_; 
v_a_4299_ = lean_ctor_get(v___x_4298_, 0);
v_isSharedCheck_4306_ = !lean_is_exclusive(v___x_4298_);
if (v_isSharedCheck_4306_ == 0)
{
v___x_4301_ = v___x_4298_;
v_isShared_4302_ = v_isSharedCheck_4306_;
goto v_resetjp_4300_;
}
else
{
lean_inc(v_a_4299_);
lean_dec(v___x_4298_);
v___x_4301_ = lean_box(0);
v_isShared_4302_ = v_isSharedCheck_4306_;
goto v_resetjp_4300_;
}
v_resetjp_4300_:
{
lean_object* v___x_4304_; 
if (v_isShared_4302_ == 0)
{
lean_ctor_set_tag(v___x_4301_, 1);
v___x_4304_ = v___x_4301_;
goto v_reusejp_4303_;
}
else
{
lean_object* v_reuseFailAlloc_4305_; 
v_reuseFailAlloc_4305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4305_, 0, v_a_4299_);
v___x_4304_ = v_reuseFailAlloc_4305_;
goto v_reusejp_4303_;
}
v_reusejp_4303_:
{
v___y_4263_ = v_a_4293_;
v___y_4264_ = v___x_4297_;
v_a_4265_ = v___x_4304_;
goto v___jp_4262_;
}
}
}
else
{
lean_object* v_a_4307_; lean_object* v___x_4309_; uint8_t v_isShared_4310_; uint8_t v_isSharedCheck_4314_; 
v_a_4307_ = lean_ctor_get(v___x_4298_, 0);
v_isSharedCheck_4314_ = !lean_is_exclusive(v___x_4298_);
if (v_isSharedCheck_4314_ == 0)
{
v___x_4309_ = v___x_4298_;
v_isShared_4310_ = v_isSharedCheck_4314_;
goto v_resetjp_4308_;
}
else
{
lean_inc(v_a_4307_);
lean_dec(v___x_4298_);
v___x_4309_ = lean_box(0);
v_isShared_4310_ = v_isSharedCheck_4314_;
goto v_resetjp_4308_;
}
v_resetjp_4308_:
{
lean_object* v___x_4312_; 
if (v_isShared_4310_ == 0)
{
lean_ctor_set_tag(v___x_4309_, 0);
v___x_4312_ = v___x_4309_;
goto v_reusejp_4311_;
}
else
{
lean_object* v_reuseFailAlloc_4313_; 
v_reuseFailAlloc_4313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4313_, 0, v_a_4307_);
v___x_4312_ = v_reuseFailAlloc_4313_;
goto v_reusejp_4311_;
}
v_reusejp_4311_:
{
v___y_4263_ = v_a_4293_;
v___y_4264_ = v___x_4297_;
v_a_4265_ = v___x_4312_;
goto v___jp_4262_;
}
}
}
}
else
{
lean_object* v___x_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; 
v___x_4315_ = lean_st_ref_get(v_a_4251_);
lean_dec(v___x_4315_);
v___x_4316_ = lean_io_get_num_heartbeats();
v___x_4317_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1(v_e_4245_, v_a_4246_, v_a_4247_, v_a_4248_, v_a_4249_, v_a_4250_, v_a_4251_);
if (lean_obj_tag(v___x_4317_) == 0)
{
lean_object* v_a_4318_; lean_object* v___x_4320_; uint8_t v_isShared_4321_; uint8_t v_isSharedCheck_4325_; 
v_a_4318_ = lean_ctor_get(v___x_4317_, 0);
v_isSharedCheck_4325_ = !lean_is_exclusive(v___x_4317_);
if (v_isSharedCheck_4325_ == 0)
{
v___x_4320_ = v___x_4317_;
v_isShared_4321_ = v_isSharedCheck_4325_;
goto v_resetjp_4319_;
}
else
{
lean_inc(v_a_4318_);
lean_dec(v___x_4317_);
v___x_4320_ = lean_box(0);
v_isShared_4321_ = v_isSharedCheck_4325_;
goto v_resetjp_4319_;
}
v_resetjp_4319_:
{
lean_object* v___x_4323_; 
if (v_isShared_4321_ == 0)
{
lean_ctor_set_tag(v___x_4320_, 1);
v___x_4323_ = v___x_4320_;
goto v_reusejp_4322_;
}
else
{
lean_object* v_reuseFailAlloc_4324_; 
v_reuseFailAlloc_4324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4324_, 0, v_a_4318_);
v___x_4323_ = v_reuseFailAlloc_4324_;
goto v_reusejp_4322_;
}
v_reusejp_4322_:
{
v___y_4279_ = v___x_4316_;
v___y_4280_ = v_a_4293_;
v_a_4281_ = v___x_4323_;
goto v___jp_4278_;
}
}
}
else
{
lean_object* v_a_4326_; lean_object* v___x_4328_; uint8_t v_isShared_4329_; uint8_t v_isSharedCheck_4333_; 
v_a_4326_ = lean_ctor_get(v___x_4317_, 0);
v_isSharedCheck_4333_ = !lean_is_exclusive(v___x_4317_);
if (v_isSharedCheck_4333_ == 0)
{
v___x_4328_ = v___x_4317_;
v_isShared_4329_ = v_isSharedCheck_4333_;
goto v_resetjp_4327_;
}
else
{
lean_inc(v_a_4326_);
lean_dec(v___x_4317_);
v___x_4328_ = lean_box(0);
v_isShared_4329_ = v_isSharedCheck_4333_;
goto v_resetjp_4327_;
}
v_resetjp_4327_:
{
lean_object* v___x_4331_; 
if (v_isShared_4329_ == 0)
{
lean_ctor_set_tag(v___x_4328_, 0);
v___x_4331_ = v___x_4328_;
goto v_reusejp_4330_;
}
else
{
lean_object* v_reuseFailAlloc_4332_; 
v_reuseFailAlloc_4332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4332_, 0, v_a_4326_);
v___x_4331_ = v_reuseFailAlloc_4332_;
goto v_reusejp_4330_;
}
v_reusejp_4330_:
{
v___y_4279_ = v___x_4316_;
v___y_4280_ = v_a_4293_;
v_a_4281_ = v___x_4331_;
goto v___jp_4278_;
}
}
}
}
}
else
{
lean_object* v_a_4334_; lean_object* v___x_4336_; uint8_t v_isShared_4337_; uint8_t v_isSharedCheck_4341_; 
lean_dec_ref(v___f_4257_);
lean_dec_ref(v_e_4245_);
v_a_4334_ = lean_ctor_get(v___x_4292_, 0);
v_isSharedCheck_4341_ = !lean_is_exclusive(v___x_4292_);
if (v_isSharedCheck_4341_ == 0)
{
v___x_4336_ = v___x_4292_;
v_isShared_4337_ = v_isSharedCheck_4341_;
goto v_resetjp_4335_;
}
else
{
lean_inc(v_a_4334_);
lean_dec(v___x_4292_);
v___x_4336_ = lean_box(0);
v_isShared_4337_ = v_isSharedCheck_4341_;
goto v_resetjp_4335_;
}
v_resetjp_4335_:
{
lean_object* v___x_4339_; 
if (v_isShared_4337_ == 0)
{
v___x_4339_ = v___x_4336_;
goto v_reusejp_4338_;
}
else
{
lean_object* v_reuseFailAlloc_4340_; 
v_reuseFailAlloc_4340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4340_, 0, v_a_4334_);
v___x_4339_ = v_reuseFailAlloc_4340_;
goto v_reusejp_4338_;
}
v_reusejp_4338_:
{
return v___x_4339_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__0(lean_object* v_struct_4345_, lean_object* v_e_4346_, lean_object* v_typeName_4347_, lean_object* v_idx_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_, lean_object* v___y_4352_, lean_object* v___y_4353_, lean_object* v___y_4354_){
_start:
{
lean_object* v___x_4356_; 
v___x_4356_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(v_struct_4345_, v___y_4349_, v___y_4350_, v___y_4351_, v___y_4352_, v___y_4353_, v___y_4354_);
if (lean_obj_tag(v___x_4356_) == 0)
{
lean_object* v_a_4357_; lean_object* v___x_4358_; 
v_a_4357_ = lean_ctor_get(v___x_4356_, 0);
lean_inc(v_a_4357_);
lean_dec_ref(v___x_4356_);
v___x_4358_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj(v_e_4346_, v_typeName_4347_, v_idx_4348_, v_a_4357_, v___y_4349_, v___y_4350_, v___y_4351_, v___y_4352_, v___y_4353_, v___y_4354_);
return v___x_4358_;
}
else
{
lean_dec(v_idx_4348_);
lean_dec(v_typeName_4347_);
lean_dec_ref(v_e_4346_);
return v___x_4356_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go_x27___boxed(lean_object* v_e_4359_, lean_object* v_a_4360_, lean_object* v_a_4361_, lean_object* v_a_4362_, lean_object* v_a_4363_, lean_object* v_a_4364_, lean_object* v_a_4365_, lean_object* v_a_4366_){
_start:
{
lean_object* v_res_4367_; 
v_res_4367_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go_x27(v_e_4359_, v_a_4360_, v_a_4361_, v_a_4362_, v_a_4363_, v_a_4364_, v_a_4365_);
lean_dec(v_a_4365_);
lean_dec_ref(v_a_4364_);
lean_dec(v_a_4363_);
lean_dec_ref(v_a_4362_);
lean_dec(v_a_4361_);
lean_dec(v_a_4360_);
return v_res_4367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go___boxed(lean_object* v_lctx_4368_, lean_object* v_fvars_4369_, lean_object* v_doms_4370_, lean_object* v_e_4371_, lean_object* v_a_4372_, lean_object* v_a_4373_, lean_object* v_a_4374_, lean_object* v_a_4375_, lean_object* v_a_4376_, lean_object* v_a_4377_, lean_object* v_a_4378_){
_start:
{
lean_object* v_res_4379_; 
v_res_4379_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go(v_lctx_4368_, v_fvars_4369_, v_doms_4370_, v_e_4371_, v_a_4372_, v_a_4373_, v_a_4374_, v_a_4375_, v_a_4376_, v_a_4377_);
lean_dec(v_a_4377_);
lean_dec_ref(v_a_4376_);
lean_dec(v_a_4375_);
lean_dec_ref(v_a_4374_);
lean_dec(v_a_4373_);
lean_dec(v_a_4372_);
return v_res_4379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___boxed(lean_object* v_e_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_, lean_object* v___y_4384_, lean_object* v___y_4385_, lean_object* v___y_4386_, lean_object* v___y_4387_){
_start:
{
lean_object* v_res_4388_; 
v_res_4388_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1(v_e_4380_, v___y_4381_, v___y_4382_, v___y_4383_, v___y_4384_, v___y_4385_, v___y_4386_);
lean_dec(v___y_4386_);
lean_dec_ref(v___y_4385_);
lean_dec(v___y_4384_);
lean_dec_ref(v___y_4383_);
lean_dec(v___y_4382_);
lean_dec(v___y_4381_);
return v_res_4388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___boxed(lean_object* v_lctx_4389_, lean_object* v_fvars_4390_, lean_object* v_e_4391_, lean_object* v_letFVars_4392_, lean_object* v_a_4393_, lean_object* v_a_4394_, lean_object* v_a_4395_, lean_object* v_a_4396_, lean_object* v_a_4397_, lean_object* v_a_4398_, lean_object* v_a_4399_){
_start:
{
lean_object* v_res_4400_; 
v_res_4400_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go(v_lctx_4389_, v_fvars_4390_, v_e_4391_, v_letFVars_4392_, v_a_4393_, v_a_4394_, v_a_4395_, v_a_4396_, v_a_4397_, v_a_4398_);
lean_dec(v_a_4398_);
lean_dec_ref(v_a_4397_);
lean_dec(v_a_4396_);
lean_dec_ref(v_a_4395_);
lean_dec(v_a_4394_);
lean_dec(v_a_4393_);
return v_res_4400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0(lean_object* v_00_u03b1_4401_, lean_object* v_lctx_4402_, lean_object* v_localInsts_4403_, lean_object* v_x_4404_, lean_object* v___y_4405_, lean_object* v___y_4406_, lean_object* v___y_4407_, lean_object* v___y_4408_, lean_object* v___y_4409_, lean_object* v___y_4410_){
_start:
{
lean_object* v___x_4412_; 
v___x_4412_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg(v_lctx_4402_, v_localInsts_4403_, v_x_4404_, v___y_4405_, v___y_4406_, v___y_4407_, v___y_4408_, v___y_4409_, v___y_4410_);
return v___x_4412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___boxed(lean_object* v_00_u03b1_4413_, lean_object* v_lctx_4414_, lean_object* v_localInsts_4415_, lean_object* v_x_4416_, lean_object* v___y_4417_, lean_object* v___y_4418_, lean_object* v___y_4419_, lean_object* v___y_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_, lean_object* v___y_4423_){
_start:
{
lean_object* v_res_4424_; 
v_res_4424_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0(v_00_u03b1_4413_, v_lctx_4414_, v_localInsts_4415_, v_x_4416_, v___y_4417_, v___y_4418_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_);
lean_dec(v___y_4422_);
lean_dec_ref(v___y_4421_);
lean_dec(v___y_4420_);
lean_dec_ref(v___y_4419_);
lean_dec(v___y_4418_);
lean_dec(v___y_4417_);
return v_res_4424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2(lean_object* v_00_u03b1_4425_, lean_object* v_lctx_4426_, lean_object* v_x_4427_, lean_object* v___y_4428_, lean_object* v___y_4429_, lean_object* v___y_4430_, lean_object* v___y_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_){
_start:
{
lean_object* v___x_4435_; 
v___x_4435_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2___redArg(v_lctx_4426_, v_x_4427_, v___y_4428_, v___y_4429_, v___y_4430_, v___y_4431_, v___y_4432_, v___y_4433_);
return v___x_4435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2___boxed(lean_object* v_00_u03b1_4436_, lean_object* v_lctx_4437_, lean_object* v_x_4438_, lean_object* v___y_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_, lean_object* v___y_4443_, lean_object* v___y_4444_, lean_object* v___y_4445_){
_start:
{
lean_object* v_res_4446_; 
v_res_4446_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2(v_00_u03b1_4436_, v_lctx_4437_, v_x_4438_, v___y_4439_, v___y_4440_, v___y_4441_, v___y_4442_, v___y_4443_, v___y_4444_);
lean_dec(v___y_4444_);
lean_dec_ref(v___y_4443_);
lean_dec(v___y_4442_);
lean_dec_ref(v___y_4441_);
lean_dec(v___y_4440_);
lean_dec(v___y_4439_);
return v_res_4446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4(lean_object* v___y_4447_, lean_object* v___y_4448_, lean_object* v___y_4449_, lean_object* v___y_4450_, lean_object* v___y_4451_, lean_object* v___y_4452_){
_start:
{
lean_object* v___x_4454_; 
v___x_4454_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg(v___y_4452_);
return v___x_4454_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___boxed(lean_object* v___y_4455_, lean_object* v___y_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_, lean_object* v___y_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_){
_start:
{
lean_object* v_res_4462_; 
v_res_4462_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4(v___y_4455_, v___y_4456_, v___y_4457_, v___y_4458_, v___y_4459_, v___y_4460_);
lean_dec(v___y_4460_);
lean_dec_ref(v___y_4459_);
lean_dec(v___y_4458_);
lean_dec_ref(v___y_4457_);
lean_dec(v___y_4456_);
lean_dec(v___y_4455_);
return v_res_4462_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7(lean_object* v___y_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_, lean_object* v___y_4466_, lean_object* v___y_4467_, lean_object* v___y_4468_){
_start:
{
lean_object* v___x_4470_; 
v___x_4470_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7___redArg(v___y_4468_);
return v___x_4470_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7___boxed(lean_object* v___y_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_, lean_object* v___y_4475_, lean_object* v___y_4476_, lean_object* v___y_4477_){
_start:
{
lean_object* v_res_4478_; 
v_res_4478_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7(v___y_4471_, v___y_4472_, v___y_4473_, v___y_4474_, v___y_4475_, v___y_4476_);
lean_dec(v___y_4476_);
lean_dec_ref(v___y_4475_);
lean_dec(v___y_4474_);
lean_dec_ref(v___y_4473_);
lean_dec(v___y_4472_);
lean_dec(v___y_4471_);
return v_res_4478_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__15(lean_object* v_00_u03b1_4479_, lean_object* v_x_4480_, lean_object* v___y_4481_, lean_object* v___y_4482_, lean_object* v___y_4483_, lean_object* v___y_4484_, lean_object* v___y_4485_, lean_object* v___y_4486_){
_start:
{
lean_object* v___x_4488_; 
v___x_4488_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__15___redArg(v_x_4480_);
return v___x_4488_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__15___boxed(lean_object* v_00_u03b1_4489_, lean_object* v_x_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_){
_start:
{
lean_object* v_res_4498_; 
v_res_4498_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__15(v_00_u03b1_4489_, v_x_4490_, v___y_4491_, v___y_4492_, v___y_4493_, v___y_4494_, v___y_4495_, v___y_4496_);
lean_dec(v___y_4496_);
lean_dec_ref(v___y_4495_);
lean_dec(v___y_4494_);
lean_dec_ref(v___y_4493_);
lean_dec(v___y_4492_);
lean_dec(v___y_4491_);
return v_res_4498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14(lean_object* v_oldTraces_4499_, lean_object* v_data_4500_, lean_object* v_ref_4501_, lean_object* v_msg_4502_, lean_object* v___y_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_){
_start:
{
lean_object* v___x_4510_; 
v___x_4510_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14___redArg(v_oldTraces_4499_, v_data_4500_, v_ref_4501_, v_msg_4502_, v___y_4505_, v___y_4506_, v___y_4507_, v___y_4508_);
return v___x_4510_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14___boxed(lean_object* v_oldTraces_4511_, lean_object* v_data_4512_, lean_object* v_ref_4513_, lean_object* v_msg_4514_, lean_object* v___y_4515_, lean_object* v___y_4516_, lean_object* v___y_4517_, lean_object* v___y_4518_, lean_object* v___y_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_){
_start:
{
lean_object* v_res_4522_; 
v_res_4522_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14(v_oldTraces_4511_, v_data_4512_, v_ref_4513_, v_msg_4514_, v___y_4515_, v___y_4516_, v___y_4517_, v___y_4518_, v___y_4519_, v___y_4520_);
lean_dec(v___y_4520_);
lean_dec_ref(v___y_4519_);
lean_dec(v___y_4518_);
lean_dec_ref(v___y_4517_);
lean_dec(v___y_4516_);
lean_dec(v___y_4515_);
return v_res_4522_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1___redArg(lean_object* v___y_4523_){
_start:
{
lean_object* v___x_4525_; lean_object* v_traceState_4526_; lean_object* v_traces_4527_; lean_object* v___x_4528_; lean_object* v_traceState_4529_; lean_object* v_env_4530_; lean_object* v_nextMacroScope_4531_; lean_object* v_ngen_4532_; lean_object* v_auxDeclNGen_4533_; lean_object* v_cache_4534_; lean_object* v_messages_4535_; lean_object* v_infoState_4536_; lean_object* v_snapshotTasks_4537_; lean_object* v___x_4539_; uint8_t v_isShared_4540_; uint8_t v_isSharedCheck_4558_; 
v___x_4525_ = lean_st_ref_get(v___y_4523_);
v_traceState_4526_ = lean_ctor_get(v___x_4525_, 4);
lean_inc_ref(v_traceState_4526_);
lean_dec(v___x_4525_);
v_traces_4527_ = lean_ctor_get(v_traceState_4526_, 0);
lean_inc_ref(v_traces_4527_);
lean_dec_ref(v_traceState_4526_);
v___x_4528_ = lean_st_ref_take(v___y_4523_);
v_traceState_4529_ = lean_ctor_get(v___x_4528_, 4);
v_env_4530_ = lean_ctor_get(v___x_4528_, 0);
v_nextMacroScope_4531_ = lean_ctor_get(v___x_4528_, 1);
v_ngen_4532_ = lean_ctor_get(v___x_4528_, 2);
v_auxDeclNGen_4533_ = lean_ctor_get(v___x_4528_, 3);
v_cache_4534_ = lean_ctor_get(v___x_4528_, 5);
v_messages_4535_ = lean_ctor_get(v___x_4528_, 6);
v_infoState_4536_ = lean_ctor_get(v___x_4528_, 7);
v_snapshotTasks_4537_ = lean_ctor_get(v___x_4528_, 8);
v_isSharedCheck_4558_ = !lean_is_exclusive(v___x_4528_);
if (v_isSharedCheck_4558_ == 0)
{
v___x_4539_ = v___x_4528_;
v_isShared_4540_ = v_isSharedCheck_4558_;
goto v_resetjp_4538_;
}
else
{
lean_inc(v_snapshotTasks_4537_);
lean_inc(v_infoState_4536_);
lean_inc(v_messages_4535_);
lean_inc(v_cache_4534_);
lean_inc(v_traceState_4529_);
lean_inc(v_auxDeclNGen_4533_);
lean_inc(v_ngen_4532_);
lean_inc(v_nextMacroScope_4531_);
lean_inc(v_env_4530_);
lean_dec(v___x_4528_);
v___x_4539_ = lean_box(0);
v_isShared_4540_ = v_isSharedCheck_4558_;
goto v_resetjp_4538_;
}
v_resetjp_4538_:
{
uint64_t v_tid_4541_; lean_object* v___x_4543_; uint8_t v_isShared_4544_; uint8_t v_isSharedCheck_4556_; 
v_tid_4541_ = lean_ctor_get_uint64(v_traceState_4529_, sizeof(void*)*1);
v_isSharedCheck_4556_ = !lean_is_exclusive(v_traceState_4529_);
if (v_isSharedCheck_4556_ == 0)
{
lean_object* v_unused_4557_; 
v_unused_4557_ = lean_ctor_get(v_traceState_4529_, 0);
lean_dec(v_unused_4557_);
v___x_4543_ = v_traceState_4529_;
v_isShared_4544_ = v_isSharedCheck_4556_;
goto v_resetjp_4542_;
}
else
{
lean_dec(v_traceState_4529_);
v___x_4543_ = lean_box(0);
v_isShared_4544_ = v_isSharedCheck_4556_;
goto v_resetjp_4542_;
}
v_resetjp_4542_:
{
lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4549_; 
v___x_4545_ = lean_unsigned_to_nat(32u);
v___x_4546_ = lean_mk_empty_array_with_capacity(v___x_4545_);
lean_dec_ref(v___x_4546_);
v___x_4547_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__1);
if (v_isShared_4544_ == 0)
{
lean_ctor_set(v___x_4543_, 0, v___x_4547_);
v___x_4549_ = v___x_4543_;
goto v_reusejp_4548_;
}
else
{
lean_object* v_reuseFailAlloc_4555_; 
v_reuseFailAlloc_4555_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4555_, 0, v___x_4547_);
lean_ctor_set_uint64(v_reuseFailAlloc_4555_, sizeof(void*)*1, v_tid_4541_);
v___x_4549_ = v_reuseFailAlloc_4555_;
goto v_reusejp_4548_;
}
v_reusejp_4548_:
{
lean_object* v___x_4551_; 
if (v_isShared_4540_ == 0)
{
lean_ctor_set(v___x_4539_, 4, v___x_4549_);
v___x_4551_ = v___x_4539_;
goto v_reusejp_4550_;
}
else
{
lean_object* v_reuseFailAlloc_4554_; 
v_reuseFailAlloc_4554_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4554_, 0, v_env_4530_);
lean_ctor_set(v_reuseFailAlloc_4554_, 1, v_nextMacroScope_4531_);
lean_ctor_set(v_reuseFailAlloc_4554_, 2, v_ngen_4532_);
lean_ctor_set(v_reuseFailAlloc_4554_, 3, v_auxDeclNGen_4533_);
lean_ctor_set(v_reuseFailAlloc_4554_, 4, v___x_4549_);
lean_ctor_set(v_reuseFailAlloc_4554_, 5, v_cache_4534_);
lean_ctor_set(v_reuseFailAlloc_4554_, 6, v_messages_4535_);
lean_ctor_set(v_reuseFailAlloc_4554_, 7, v_infoState_4536_);
lean_ctor_set(v_reuseFailAlloc_4554_, 8, v_snapshotTasks_4537_);
v___x_4551_ = v_reuseFailAlloc_4554_;
goto v_reusejp_4550_;
}
v_reusejp_4550_:
{
lean_object* v___x_4552_; lean_object* v___x_4553_; 
v___x_4552_ = lean_st_ref_set(v___y_4523_, v___x_4551_);
v___x_4553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4553_, 0, v_traces_4527_);
return v___x_4553_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1___redArg___boxed(lean_object* v___y_4559_, lean_object* v___y_4560_){
_start:
{
lean_object* v_res_4561_; 
v_res_4561_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1___redArg(v___y_4559_);
lean_dec(v___y_4559_);
return v_res_4561_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1(lean_object* v___y_4562_, lean_object* v___y_4563_, lean_object* v___y_4564_, lean_object* v___y_4565_){
_start:
{
lean_object* v___x_4567_; 
v___x_4567_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1___redArg(v___y_4565_);
return v___x_4567_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1___boxed(lean_object* v___y_4568_, lean_object* v___y_4569_, lean_object* v___y_4570_, lean_object* v___y_4571_, lean_object* v___y_4572_){
_start:
{
lean_object* v_res_4573_; 
v_res_4573_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1(v___y_4568_, v___y_4569_, v___y_4570_, v___y_4571_);
lean_dec(v___y_4571_);
lean_dec_ref(v___y_4570_);
lean_dec(v___y_4569_);
lean_dec_ref(v___y_4568_);
return v_res_4573_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0(lean_object* v___y_4574_, lean_object* v___y_4575_, lean_object* v_zetaDeltaFVarIds_4576_, lean_object* v_a_x3f_4577_){
_start:
{
lean_object* v___x_4579_; lean_object* v___x_4580_; lean_object* v_mctx_4581_; lean_object* v_cache_4582_; lean_object* v_postponed_4583_; lean_object* v_diag_4584_; lean_object* v___x_4586_; uint8_t v_isShared_4587_; uint8_t v_isSharedCheck_4594_; 
v___x_4579_ = lean_st_ref_get(v___y_4574_);
lean_dec(v___x_4579_);
v___x_4580_ = lean_st_ref_take(v___y_4575_);
v_mctx_4581_ = lean_ctor_get(v___x_4580_, 0);
v_cache_4582_ = lean_ctor_get(v___x_4580_, 1);
v_postponed_4583_ = lean_ctor_get(v___x_4580_, 3);
v_diag_4584_ = lean_ctor_get(v___x_4580_, 4);
v_isSharedCheck_4594_ = !lean_is_exclusive(v___x_4580_);
if (v_isSharedCheck_4594_ == 0)
{
lean_object* v_unused_4595_; 
v_unused_4595_ = lean_ctor_get(v___x_4580_, 2);
lean_dec(v_unused_4595_);
v___x_4586_ = v___x_4580_;
v_isShared_4587_ = v_isSharedCheck_4594_;
goto v_resetjp_4585_;
}
else
{
lean_inc(v_diag_4584_);
lean_inc(v_postponed_4583_);
lean_inc(v_cache_4582_);
lean_inc(v_mctx_4581_);
lean_dec(v___x_4580_);
v___x_4586_ = lean_box(0);
v_isShared_4587_ = v_isSharedCheck_4594_;
goto v_resetjp_4585_;
}
v_resetjp_4585_:
{
lean_object* v___x_4589_; 
if (v_isShared_4587_ == 0)
{
lean_ctor_set(v___x_4586_, 2, v_zetaDeltaFVarIds_4576_);
v___x_4589_ = v___x_4586_;
goto v_reusejp_4588_;
}
else
{
lean_object* v_reuseFailAlloc_4593_; 
v_reuseFailAlloc_4593_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4593_, 0, v_mctx_4581_);
lean_ctor_set(v_reuseFailAlloc_4593_, 1, v_cache_4582_);
lean_ctor_set(v_reuseFailAlloc_4593_, 2, v_zetaDeltaFVarIds_4576_);
lean_ctor_set(v_reuseFailAlloc_4593_, 3, v_postponed_4583_);
lean_ctor_set(v_reuseFailAlloc_4593_, 4, v_diag_4584_);
v___x_4589_ = v_reuseFailAlloc_4593_;
goto v_reusejp_4588_;
}
v_reusejp_4588_:
{
lean_object* v___x_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; 
v___x_4590_ = lean_st_ref_set(v___y_4575_, v___x_4589_);
v___x_4591_ = lean_box(0);
v___x_4592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4592_, 0, v___x_4591_);
return v___x_4592_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___boxed(lean_object* v___y_4596_, lean_object* v___y_4597_, lean_object* v_zetaDeltaFVarIds_4598_, lean_object* v_a_x3f_4599_, lean_object* v___y_4600_){
_start:
{
lean_object* v_res_4601_; 
v_res_4601_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0(v___y_4596_, v___y_4597_, v_zetaDeltaFVarIds_4598_, v_a_x3f_4599_);
lean_dec(v_a_x3f_4599_);
lean_dec(v___y_4597_);
lean_dec(v___y_4596_);
return v_res_4601_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__0(lean_object* v_cls_4602_, lean_object* v_msg_4603_, lean_object* v___y_4604_, lean_object* v___y_4605_, lean_object* v___y_4606_, lean_object* v___y_4607_){
_start:
{
lean_object* v_ref_4609_; lean_object* v___x_4610_; lean_object* v_a_4611_; lean_object* v___x_4613_; uint8_t v_isShared_4614_; uint8_t v_isSharedCheck_4655_; 
v_ref_4609_ = lean_ctor_get(v___y_4606_, 5);
v___x_4610_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7_spec__8(v_msg_4603_, v___y_4604_, v___y_4605_, v___y_4606_, v___y_4607_);
v_a_4611_ = lean_ctor_get(v___x_4610_, 0);
v_isSharedCheck_4655_ = !lean_is_exclusive(v___x_4610_);
if (v_isSharedCheck_4655_ == 0)
{
v___x_4613_ = v___x_4610_;
v_isShared_4614_ = v_isSharedCheck_4655_;
goto v_resetjp_4612_;
}
else
{
lean_inc(v_a_4611_);
lean_dec(v___x_4610_);
v___x_4613_ = lean_box(0);
v_isShared_4614_ = v_isSharedCheck_4655_;
goto v_resetjp_4612_;
}
v_resetjp_4612_:
{
lean_object* v___x_4615_; lean_object* v_traceState_4616_; lean_object* v_env_4617_; lean_object* v_nextMacroScope_4618_; lean_object* v_ngen_4619_; lean_object* v_auxDeclNGen_4620_; lean_object* v_cache_4621_; lean_object* v_messages_4622_; lean_object* v_infoState_4623_; lean_object* v_snapshotTasks_4624_; lean_object* v___x_4626_; uint8_t v_isShared_4627_; uint8_t v_isSharedCheck_4654_; 
v___x_4615_ = lean_st_ref_take(v___y_4607_);
v_traceState_4616_ = lean_ctor_get(v___x_4615_, 4);
v_env_4617_ = lean_ctor_get(v___x_4615_, 0);
v_nextMacroScope_4618_ = lean_ctor_get(v___x_4615_, 1);
v_ngen_4619_ = lean_ctor_get(v___x_4615_, 2);
v_auxDeclNGen_4620_ = lean_ctor_get(v___x_4615_, 3);
v_cache_4621_ = lean_ctor_get(v___x_4615_, 5);
v_messages_4622_ = lean_ctor_get(v___x_4615_, 6);
v_infoState_4623_ = lean_ctor_get(v___x_4615_, 7);
v_snapshotTasks_4624_ = lean_ctor_get(v___x_4615_, 8);
v_isSharedCheck_4654_ = !lean_is_exclusive(v___x_4615_);
if (v_isSharedCheck_4654_ == 0)
{
v___x_4626_ = v___x_4615_;
v_isShared_4627_ = v_isSharedCheck_4654_;
goto v_resetjp_4625_;
}
else
{
lean_inc(v_snapshotTasks_4624_);
lean_inc(v_infoState_4623_);
lean_inc(v_messages_4622_);
lean_inc(v_cache_4621_);
lean_inc(v_traceState_4616_);
lean_inc(v_auxDeclNGen_4620_);
lean_inc(v_ngen_4619_);
lean_inc(v_nextMacroScope_4618_);
lean_inc(v_env_4617_);
lean_dec(v___x_4615_);
v___x_4626_ = lean_box(0);
v_isShared_4627_ = v_isSharedCheck_4654_;
goto v_resetjp_4625_;
}
v_resetjp_4625_:
{
uint64_t v_tid_4628_; lean_object* v_traces_4629_; lean_object* v___x_4631_; uint8_t v_isShared_4632_; uint8_t v_isSharedCheck_4653_; 
v_tid_4628_ = lean_ctor_get_uint64(v_traceState_4616_, sizeof(void*)*1);
v_traces_4629_ = lean_ctor_get(v_traceState_4616_, 0);
v_isSharedCheck_4653_ = !lean_is_exclusive(v_traceState_4616_);
if (v_isSharedCheck_4653_ == 0)
{
v___x_4631_ = v_traceState_4616_;
v_isShared_4632_ = v_isSharedCheck_4653_;
goto v_resetjp_4630_;
}
else
{
lean_inc(v_traces_4629_);
lean_dec(v_traceState_4616_);
v___x_4631_ = lean_box(0);
v_isShared_4632_ = v_isSharedCheck_4653_;
goto v_resetjp_4630_;
}
v_resetjp_4630_:
{
lean_object* v___x_4633_; double v___x_4634_; uint8_t v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4643_; 
v___x_4633_ = lean_box(0);
v___x_4634_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0);
v___x_4635_ = 0;
v___x_4636_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__1, &l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__1_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__1);
v___x_4637_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4637_, 0, v_cls_4602_);
lean_ctor_set(v___x_4637_, 1, v___x_4633_);
lean_ctor_set(v___x_4637_, 2, v___x_4636_);
lean_ctor_set_float(v___x_4637_, sizeof(void*)*3, v___x_4634_);
lean_ctor_set_float(v___x_4637_, sizeof(void*)*3 + 8, v___x_4634_);
lean_ctor_set_uint8(v___x_4637_, sizeof(void*)*3 + 16, v___x_4635_);
v___x_4638_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__2, &l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__2_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__2);
v___x_4639_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4639_, 0, v___x_4637_);
lean_ctor_set(v___x_4639_, 1, v_a_4611_);
lean_ctor_set(v___x_4639_, 2, v___x_4638_);
lean_inc(v_ref_4609_);
v___x_4640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4640_, 0, v_ref_4609_);
lean_ctor_set(v___x_4640_, 1, v___x_4639_);
v___x_4641_ = l_Lean_PersistentArray_push___redArg(v_traces_4629_, v___x_4640_);
if (v_isShared_4632_ == 0)
{
lean_ctor_set(v___x_4631_, 0, v___x_4641_);
v___x_4643_ = v___x_4631_;
goto v_reusejp_4642_;
}
else
{
lean_object* v_reuseFailAlloc_4652_; 
v_reuseFailAlloc_4652_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4652_, 0, v___x_4641_);
lean_ctor_set_uint64(v_reuseFailAlloc_4652_, sizeof(void*)*1, v_tid_4628_);
v___x_4643_ = v_reuseFailAlloc_4652_;
goto v_reusejp_4642_;
}
v_reusejp_4642_:
{
lean_object* v___x_4645_; 
if (v_isShared_4627_ == 0)
{
lean_ctor_set(v___x_4626_, 4, v___x_4643_);
v___x_4645_ = v___x_4626_;
goto v_reusejp_4644_;
}
else
{
lean_object* v_reuseFailAlloc_4651_; 
v_reuseFailAlloc_4651_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4651_, 0, v_env_4617_);
lean_ctor_set(v_reuseFailAlloc_4651_, 1, v_nextMacroScope_4618_);
lean_ctor_set(v_reuseFailAlloc_4651_, 2, v_ngen_4619_);
lean_ctor_set(v_reuseFailAlloc_4651_, 3, v_auxDeclNGen_4620_);
lean_ctor_set(v_reuseFailAlloc_4651_, 4, v___x_4643_);
lean_ctor_set(v_reuseFailAlloc_4651_, 5, v_cache_4621_);
lean_ctor_set(v_reuseFailAlloc_4651_, 6, v_messages_4622_);
lean_ctor_set(v_reuseFailAlloc_4651_, 7, v_infoState_4623_);
lean_ctor_set(v_reuseFailAlloc_4651_, 8, v_snapshotTasks_4624_);
v___x_4645_ = v_reuseFailAlloc_4651_;
goto v_reusejp_4644_;
}
v_reusejp_4644_:
{
lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4649_; 
v___x_4646_ = lean_st_ref_set(v___y_4607_, v___x_4645_);
v___x_4647_ = lean_box(0);
if (v_isShared_4614_ == 0)
{
lean_ctor_set(v___x_4613_, 0, v___x_4647_);
v___x_4649_ = v___x_4613_;
goto v_reusejp_4648_;
}
else
{
lean_object* v_reuseFailAlloc_4650_; 
v_reuseFailAlloc_4650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4650_, 0, v___x_4647_);
v___x_4649_ = v_reuseFailAlloc_4650_;
goto v_reusejp_4648_;
}
v_reusejp_4648_:
{
return v___x_4649_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__0___boxed(lean_object* v_cls_4656_, lean_object* v_msg_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_, lean_object* v___y_4662_){
_start:
{
lean_object* v_res_4663_; 
v_res_4663_ = l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__0(v_cls_4656_, v_msg_4657_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_);
lean_dec(v___y_4661_);
lean_dec_ref(v___y_4660_);
lean_dec(v___y_4659_);
lean_dec_ref(v___y_4658_);
return v_res_4663_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__0(void){
_start:
{
lean_object* v___x_4664_; 
v___x_4664_ = lean_mk_string_unchecked("transformed ", 12, 12);
return v___x_4664_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__1(void){
_start:
{
lean_object* v___x_4665_; lean_object* v___x_4666_; 
v___x_4665_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__0);
v___x_4666_ = l_Lean_stringToMessageData(v___x_4665_);
return v___x_4666_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__2(void){
_start:
{
lean_object* v___x_4667_; 
v___x_4667_ = lean_mk_string_unchecked(" `let` expressions into `have` expressions", 42, 42);
return v___x_4667_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__3(void){
_start:
{
lean_object* v___x_4668_; lean_object* v___x_4669_; 
v___x_4668_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__2, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__2_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__2);
v___x_4669_ = l_Lean_stringToMessageData(v___x_4668_);
return v___x_4669_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__4(void){
_start:
{
lean_object* v___x_4670_; 
v___x_4670_ = lean_mk_string_unchecked("result:", 7, 7);
return v___x_4670_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__5(void){
_start:
{
lean_object* v___x_4671_; lean_object* v___x_4672_; 
v___x_4671_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__4, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__4_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__4);
v___x_4672_ = l_Lean_stringToMessageData(v___x_4671_);
return v___x_4672_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__6(void){
_start:
{
lean_object* v___x_4673_; 
v___x_4673_ = lean_mk_string_unchecked("result: (no change)", 19, 19);
return v___x_4673_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__7(void){
_start:
{
lean_object* v___x_4674_; lean_object* v___x_4675_; 
v___x_4674_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__6, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__6_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__6);
v___x_4675_ = l_Lean_stringToMessageData(v___x_4674_);
return v___x_4675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1(lean_object* v___x_4676_, lean_object* v_e_4677_, lean_object* v___x_4678_, lean_object* v___x_4679_, lean_object* v_cls_4680_, lean_object* v___y_4681_, lean_object* v___y_4682_, lean_object* v___y_4683_, lean_object* v___y_4684_){
_start:
{
lean_object* v___x_4686_; lean_object* v___x_4687_; lean_object* v___x_4688_; 
v___x_4686_ = lean_st_ref_get(v___y_4684_);
lean_dec(v___x_4686_);
v___x_4687_ = lean_st_mk_ref(v___x_4676_);
v___x_4688_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(v_e_4677_, v___x_4678_, v___x_4687_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_);
if (lean_obj_tag(v___x_4688_) == 0)
{
lean_object* v_a_4689_; lean_object* v___x_4691_; uint8_t v_isShared_4692_; uint8_t v_isSharedCheck_4759_; 
v_a_4689_ = lean_ctor_get(v___x_4688_, 0);
v_isSharedCheck_4759_ = !lean_is_exclusive(v___x_4688_);
if (v_isSharedCheck_4759_ == 0)
{
v___x_4691_ = v___x_4688_;
v_isShared_4692_ = v_isSharedCheck_4759_;
goto v_resetjp_4690_;
}
else
{
lean_inc(v_a_4689_);
lean_dec(v___x_4688_);
v___x_4691_ = lean_box(0);
v_isShared_4692_ = v_isSharedCheck_4759_;
goto v_resetjp_4690_;
}
v_resetjp_4690_:
{
lean_object* v___x_4693_; lean_object* v___x_4694_; lean_object* v_count_4695_; lean_object* v___x_4697_; uint8_t v_isShared_4698_; uint8_t v_isSharedCheck_4757_; 
v___x_4693_ = lean_st_ref_get(v___y_4684_);
lean_dec(v___x_4693_);
v___x_4694_ = lean_st_ref_get(v___x_4687_);
lean_dec(v___x_4687_);
v_count_4695_ = lean_ctor_get(v___x_4694_, 0);
v_isSharedCheck_4757_ = !lean_is_exclusive(v___x_4694_);
if (v_isSharedCheck_4757_ == 0)
{
lean_object* v_unused_4758_; 
v_unused_4758_ = lean_ctor_get(v___x_4694_, 1);
lean_dec(v_unused_4758_);
v___x_4697_ = v___x_4694_;
v_isShared_4698_ = v_isSharedCheck_4757_;
goto v_resetjp_4696_;
}
else
{
lean_inc(v_count_4695_);
lean_dec(v___x_4694_);
v___x_4697_ = lean_box(0);
v_isShared_4698_ = v_isSharedCheck_4757_;
goto v_resetjp_4696_;
}
v_resetjp_4696_:
{
uint8_t v___x_4721_; 
v___x_4721_ = lean_nat_dec_eq(v_count_4695_, v___x_4679_);
if (v___x_4721_ == 0)
{
lean_object* v_options_4722_; uint8_t v_hasTrace_4723_; 
v_options_4722_ = lean_ctor_get(v___y_4683_, 2);
v_hasTrace_4723_ = lean_ctor_get_uint8(v_options_4722_, sizeof(void*)*1);
if (v_hasTrace_4723_ == 0)
{
lean_dec(v_cls_4680_);
goto v___jp_4699_;
}
else
{
lean_object* v_inheritedTraceOptions_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; uint8_t v___x_4727_; 
v_inheritedTraceOptions_4724_ = lean_ctor_get(v___y_4683_, 13);
v___x_4725_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__5, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__5_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__5);
lean_inc(v_cls_4680_);
v___x_4726_ = l_Lean_Name_append(v___x_4725_, v_cls_4680_);
v___x_4727_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4724_, v_options_4722_, v___x_4726_);
lean_dec(v___x_4726_);
if (v___x_4727_ == 0)
{
lean_dec(v_cls_4680_);
goto v___jp_4699_;
}
else
{
lean_object* v_expr_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; lean_object* v___x_4732_; 
v_expr_4728_ = lean_ctor_get(v_a_4689_, 0);
v___x_4729_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__5, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__5_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__5);
lean_inc_ref(v_expr_4728_);
v___x_4730_ = l_Lean_indentExpr(v_expr_4728_);
v___x_4731_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4731_, 0, v___x_4729_);
lean_ctor_set(v___x_4731_, 1, v___x_4730_);
v___x_4732_ = l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__0(v_cls_4680_, v___x_4731_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_);
if (lean_obj_tag(v___x_4732_) == 0)
{
lean_dec_ref(v___x_4732_);
goto v___jp_4699_;
}
else
{
lean_object* v_a_4733_; lean_object* v___x_4735_; uint8_t v_isShared_4736_; uint8_t v_isSharedCheck_4740_; 
lean_del_object(v___x_4697_);
lean_dec(v_count_4695_);
lean_del_object(v___x_4691_);
lean_dec(v_a_4689_);
v_a_4733_ = lean_ctor_get(v___x_4732_, 0);
v_isSharedCheck_4740_ = !lean_is_exclusive(v___x_4732_);
if (v_isSharedCheck_4740_ == 0)
{
v___x_4735_ = v___x_4732_;
v_isShared_4736_ = v_isSharedCheck_4740_;
goto v_resetjp_4734_;
}
else
{
lean_inc(v_a_4733_);
lean_dec(v___x_4732_);
v___x_4735_ = lean_box(0);
v_isShared_4736_ = v_isSharedCheck_4740_;
goto v_resetjp_4734_;
}
v_resetjp_4734_:
{
lean_object* v___x_4738_; 
if (v_isShared_4736_ == 0)
{
v___x_4738_ = v___x_4735_;
goto v_reusejp_4737_;
}
else
{
lean_object* v_reuseFailAlloc_4739_; 
v_reuseFailAlloc_4739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4739_, 0, v_a_4733_);
v___x_4738_ = v_reuseFailAlloc_4739_;
goto v_reusejp_4737_;
}
v_reusejp_4737_:
{
return v___x_4738_;
}
}
}
}
}
}
else
{
lean_object* v_options_4741_; uint8_t v_hasTrace_4742_; 
v_options_4741_ = lean_ctor_get(v___y_4683_, 2);
v_hasTrace_4742_ = lean_ctor_get_uint8(v_options_4741_, sizeof(void*)*1);
if (v_hasTrace_4742_ == 0)
{
lean_dec(v_cls_4680_);
goto v___jp_4699_;
}
else
{
lean_object* v_inheritedTraceOptions_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; uint8_t v___x_4746_; 
v_inheritedTraceOptions_4743_ = lean_ctor_get(v___y_4683_, 13);
v___x_4744_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__5, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__5_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__5);
lean_inc(v_cls_4680_);
v___x_4745_ = l_Lean_Name_append(v___x_4744_, v_cls_4680_);
v___x_4746_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4743_, v_options_4741_, v___x_4745_);
lean_dec(v___x_4745_);
if (v___x_4746_ == 0)
{
lean_dec(v_cls_4680_);
goto v___jp_4699_;
}
else
{
lean_object* v___x_4747_; lean_object* v___x_4748_; 
v___x_4747_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__7, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__7_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__7);
v___x_4748_ = l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__0(v_cls_4680_, v___x_4747_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_);
if (lean_obj_tag(v___x_4748_) == 0)
{
lean_dec_ref(v___x_4748_);
goto v___jp_4699_;
}
else
{
lean_object* v_a_4749_; lean_object* v___x_4751_; uint8_t v_isShared_4752_; uint8_t v_isSharedCheck_4756_; 
lean_del_object(v___x_4697_);
lean_dec(v_count_4695_);
lean_del_object(v___x_4691_);
lean_dec(v_a_4689_);
v_a_4749_ = lean_ctor_get(v___x_4748_, 0);
v_isSharedCheck_4756_ = !lean_is_exclusive(v___x_4748_);
if (v_isSharedCheck_4756_ == 0)
{
v___x_4751_ = v___x_4748_;
v_isShared_4752_ = v_isSharedCheck_4756_;
goto v_resetjp_4750_;
}
else
{
lean_inc(v_a_4749_);
lean_dec(v___x_4748_);
v___x_4751_ = lean_box(0);
v_isShared_4752_ = v_isSharedCheck_4756_;
goto v_resetjp_4750_;
}
v_resetjp_4750_:
{
lean_object* v___x_4754_; 
if (v_isShared_4752_ == 0)
{
v___x_4754_ = v___x_4751_;
goto v_reusejp_4753_;
}
else
{
lean_object* v_reuseFailAlloc_4755_; 
v_reuseFailAlloc_4755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4755_, 0, v_a_4749_);
v___x_4754_ = v_reuseFailAlloc_4755_;
goto v_reusejp_4753_;
}
v_reusejp_4753_:
{
return v___x_4754_;
}
}
}
}
}
}
v___jp_4699_:
{
lean_object* v_expr_4700_; lean_object* v___x_4702_; uint8_t v_isShared_4703_; uint8_t v_isSharedCheck_4719_; 
v_expr_4700_ = lean_ctor_get(v_a_4689_, 0);
v_isSharedCheck_4719_ = !lean_is_exclusive(v_a_4689_);
if (v_isSharedCheck_4719_ == 0)
{
lean_object* v_unused_4720_; 
v_unused_4720_ = lean_ctor_get(v_a_4689_, 1);
lean_dec(v_unused_4720_);
v___x_4702_ = v_a_4689_;
v_isShared_4703_ = v_isSharedCheck_4719_;
goto v_resetjp_4701_;
}
else
{
lean_inc(v_expr_4700_);
lean_dec(v_a_4689_);
v___x_4702_ = lean_box(0);
v_isShared_4703_ = v_isSharedCheck_4719_;
goto v_resetjp_4701_;
}
v_resetjp_4701_:
{
lean_object* v___x_4704_; lean_object* v___x_4705_; lean_object* v___x_4706_; lean_object* v___x_4707_; lean_object* v___x_4709_; 
v___x_4704_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__1, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__1_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__1);
v___x_4705_ = l_Nat_reprFast(v_count_4695_);
v___x_4706_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4706_, 0, v___x_4705_);
v___x_4707_ = l_Lean_MessageData_ofFormat(v___x_4706_);
if (v_isShared_4703_ == 0)
{
lean_ctor_set_tag(v___x_4702_, 7);
lean_ctor_set(v___x_4702_, 1, v___x_4707_);
lean_ctor_set(v___x_4702_, 0, v___x_4704_);
v___x_4709_ = v___x_4702_;
goto v_reusejp_4708_;
}
else
{
lean_object* v_reuseFailAlloc_4718_; 
v_reuseFailAlloc_4718_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4718_, 0, v___x_4704_);
lean_ctor_set(v_reuseFailAlloc_4718_, 1, v___x_4707_);
v___x_4709_ = v_reuseFailAlloc_4718_;
goto v_reusejp_4708_;
}
v_reusejp_4708_:
{
lean_object* v___x_4710_; lean_object* v___x_4712_; 
v___x_4710_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__3);
if (v_isShared_4698_ == 0)
{
lean_ctor_set_tag(v___x_4697_, 7);
lean_ctor_set(v___x_4697_, 1, v___x_4710_);
lean_ctor_set(v___x_4697_, 0, v___x_4709_);
v___x_4712_ = v___x_4697_;
goto v_reusejp_4711_;
}
else
{
lean_object* v_reuseFailAlloc_4717_; 
v_reuseFailAlloc_4717_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4717_, 0, v___x_4709_);
lean_ctor_set(v_reuseFailAlloc_4717_, 1, v___x_4710_);
v___x_4712_ = v_reuseFailAlloc_4717_;
goto v_reusejp_4711_;
}
v_reusejp_4711_:
{
lean_object* v___x_4713_; lean_object* v___x_4715_; 
v___x_4713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4713_, 0, v_expr_4700_);
lean_ctor_set(v___x_4713_, 1, v___x_4712_);
if (v_isShared_4692_ == 0)
{
lean_ctor_set(v___x_4691_, 0, v___x_4713_);
v___x_4715_ = v___x_4691_;
goto v_reusejp_4714_;
}
else
{
lean_object* v_reuseFailAlloc_4716_; 
v_reuseFailAlloc_4716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4716_, 0, v___x_4713_);
v___x_4715_ = v_reuseFailAlloc_4716_;
goto v_reusejp_4714_;
}
v_reusejp_4714_:
{
return v___x_4715_;
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
lean_object* v_a_4760_; lean_object* v___x_4762_; uint8_t v_isShared_4763_; uint8_t v_isSharedCheck_4767_; 
lean_dec(v___x_4687_);
lean_dec(v_cls_4680_);
v_a_4760_ = lean_ctor_get(v___x_4688_, 0);
v_isSharedCheck_4767_ = !lean_is_exclusive(v___x_4688_);
if (v_isSharedCheck_4767_ == 0)
{
v___x_4762_ = v___x_4688_;
v_isShared_4763_ = v_isSharedCheck_4767_;
goto v_resetjp_4761_;
}
else
{
lean_inc(v_a_4760_);
lean_dec(v___x_4688_);
v___x_4762_ = lean_box(0);
v_isShared_4763_ = v_isSharedCheck_4767_;
goto v_resetjp_4761_;
}
v_resetjp_4761_:
{
lean_object* v___x_4765_; 
if (v_isShared_4763_ == 0)
{
v___x_4765_ = v___x_4762_;
goto v_reusejp_4764_;
}
else
{
lean_object* v_reuseFailAlloc_4766_; 
v_reuseFailAlloc_4766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4766_, 0, v_a_4760_);
v___x_4765_ = v_reuseFailAlloc_4766_;
goto v_reusejp_4764_;
}
v_reusejp_4764_:
{
return v___x_4765_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___boxed(lean_object* v___x_4768_, lean_object* v_e_4769_, lean_object* v___x_4770_, lean_object* v___x_4771_, lean_object* v_cls_4772_, lean_object* v___y_4773_, lean_object* v___y_4774_, lean_object* v___y_4775_, lean_object* v___y_4776_, lean_object* v___y_4777_){
_start:
{
lean_object* v_res_4778_; 
v_res_4778_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1(v___x_4768_, v_e_4769_, v___x_4770_, v___x_4771_, v_cls_4772_, v___y_4773_, v___y_4774_, v___y_4775_, v___y_4776_);
lean_dec(v___y_4776_);
lean_dec_ref(v___y_4775_);
lean_dec(v___y_4774_);
lean_dec_ref(v___y_4773_);
lean_dec(v___x_4771_);
lean_dec(v___x_4770_);
return v_res_4778_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__2(lean_object* v___y_4779_, lean_object* v___y_4780_, lean_object* v_cache_4781_, lean_object* v_a_x3f_4782_){
_start:
{
lean_object* v___x_4784_; lean_object* v___x_4785_; lean_object* v_mctx_4786_; lean_object* v_zetaDeltaFVarIds_4787_; lean_object* v_postponed_4788_; lean_object* v_diag_4789_; lean_object* v___x_4791_; uint8_t v_isShared_4792_; uint8_t v_isSharedCheck_4799_; 
v___x_4784_ = lean_st_ref_get(v___y_4779_);
lean_dec(v___x_4784_);
v___x_4785_ = lean_st_ref_take(v___y_4780_);
v_mctx_4786_ = lean_ctor_get(v___x_4785_, 0);
v_zetaDeltaFVarIds_4787_ = lean_ctor_get(v___x_4785_, 2);
v_postponed_4788_ = lean_ctor_get(v___x_4785_, 3);
v_diag_4789_ = lean_ctor_get(v___x_4785_, 4);
v_isSharedCheck_4799_ = !lean_is_exclusive(v___x_4785_);
if (v_isSharedCheck_4799_ == 0)
{
lean_object* v_unused_4800_; 
v_unused_4800_ = lean_ctor_get(v___x_4785_, 1);
lean_dec(v_unused_4800_);
v___x_4791_ = v___x_4785_;
v_isShared_4792_ = v_isSharedCheck_4799_;
goto v_resetjp_4790_;
}
else
{
lean_inc(v_diag_4789_);
lean_inc(v_postponed_4788_);
lean_inc(v_zetaDeltaFVarIds_4787_);
lean_inc(v_mctx_4786_);
lean_dec(v___x_4785_);
v___x_4791_ = lean_box(0);
v_isShared_4792_ = v_isSharedCheck_4799_;
goto v_resetjp_4790_;
}
v_resetjp_4790_:
{
lean_object* v___x_4794_; 
if (v_isShared_4792_ == 0)
{
lean_ctor_set(v___x_4791_, 1, v_cache_4781_);
v___x_4794_ = v___x_4791_;
goto v_reusejp_4793_;
}
else
{
lean_object* v_reuseFailAlloc_4798_; 
v_reuseFailAlloc_4798_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4798_, 0, v_mctx_4786_);
lean_ctor_set(v_reuseFailAlloc_4798_, 1, v_cache_4781_);
lean_ctor_set(v_reuseFailAlloc_4798_, 2, v_zetaDeltaFVarIds_4787_);
lean_ctor_set(v_reuseFailAlloc_4798_, 3, v_postponed_4788_);
lean_ctor_set(v_reuseFailAlloc_4798_, 4, v_diag_4789_);
v___x_4794_ = v_reuseFailAlloc_4798_;
goto v_reusejp_4793_;
}
v_reusejp_4793_:
{
lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; 
v___x_4795_ = lean_st_ref_set(v___y_4780_, v___x_4794_);
v___x_4796_ = lean_box(0);
v___x_4797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4797_, 0, v___x_4796_);
return v___x_4797_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__2___boxed(lean_object* v___y_4801_, lean_object* v___y_4802_, lean_object* v_cache_4803_, lean_object* v_a_x3f_4804_, lean_object* v___y_4805_){
_start:
{
lean_object* v_res_4806_; 
v_res_4806_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__2(v___y_4801_, v___y_4802_, v_cache_4803_, v_a_x3f_4804_);
lean_dec(v_a_x3f_4804_);
lean_dec(v___y_4802_);
lean_dec(v___y_4801_);
return v_res_4806_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__0(void){
_start:
{
lean_object* v___x_4807_; 
v___x_4807_ = lean_mk_string_unchecked("no `let` expressions", 20, 20);
return v___x_4807_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__1(void){
_start:
{
lean_object* v___x_4808_; lean_object* v___x_4809_; 
v___x_4808_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__0);
v___x_4809_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4809_, 0, v___x_4808_);
return v___x_4809_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__2(void){
_start:
{
lean_object* v___x_4810_; lean_object* v___x_4811_; 
v___x_4810_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__1, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__1_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__1);
v___x_4811_ = l_Lean_MessageData_ofFormat(v___x_4810_);
return v___x_4811_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__3(void){
_start:
{
lean_object* v___x_4812_; 
v___x_4812_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_4812_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__4(void){
_start:
{
lean_object* v___x_4813_; lean_object* v___x_4814_; 
v___x_4813_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__3);
v___x_4814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4814_, 0, v___x_4813_);
return v___x_4814_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__5(void){
_start:
{
lean_object* v___x_4815_; lean_object* v___x_4816_; 
v___x_4815_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__4, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__4_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__4);
v___x_4816_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4816_, 0, v___x_4815_);
lean_ctor_set(v___x_4816_, 1, v___x_4815_);
lean_ctor_set(v___x_4816_, 2, v___x_4815_);
lean_ctor_set(v___x_4816_, 3, v___x_4815_);
lean_ctor_set(v___x_4816_, 4, v___x_4815_);
lean_ctor_set(v___x_4816_, 5, v___x_4815_);
return v___x_4816_;
}
}
static uint64_t _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__6(void){
_start:
{
uint8_t v___x_4817_; uint64_t v___x_4818_; 
v___x_4817_ = 0;
v___x_4818_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_4817_);
return v___x_4818_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__7(void){
_start:
{
lean_object* v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4821_; 
v___x_4819_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__1, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__1_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__3___closed__1);
v___x_4820_ = lean_unsigned_to_nat(0u);
v___x_4821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4821_, 0, v___x_4820_);
lean_ctor_set(v___x_4821_, 1, v___x_4819_);
return v___x_4821_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3(uint8_t v___x_4822_, lean_object* v_e_4823_, uint8_t v___x_4824_, lean_object* v_cls_4825_, lean_object* v___y_4826_, lean_object* v___y_4827_, lean_object* v___y_4828_, lean_object* v___y_4829_){
_start:
{
if (v___x_4822_ == 0)
{
lean_object* v___x_4831_; lean_object* v___x_4832_; lean_object* v___x_4833_; 
lean_dec(v_cls_4825_);
v___x_4831_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__2, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__2_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__2);
v___x_4832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4832_, 0, v_e_4823_);
lean_ctor_set(v___x_4832_, 1, v___x_4831_);
v___x_4833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4833_, 0, v___x_4832_);
return v___x_4833_;
}
else
{
lean_object* v___x_4834_; lean_object* v___x_4835_; lean_object* v___x_4836_; lean_object* v___x_4837_; lean_object* v_mctx_4838_; lean_object* v_zetaDeltaFVarIds_4839_; lean_object* v_postponed_4840_; lean_object* v_diag_4841_; lean_object* v___x_4843_; uint8_t v_isShared_4844_; uint8_t v_isSharedCheck_5030_; 
v___x_4834_ = lean_st_ref_get(v___y_4829_);
lean_dec(v___x_4834_);
v___x_4835_ = lean_st_ref_get(v___y_4827_);
v___x_4836_ = lean_st_ref_get(v___y_4829_);
lean_dec(v___x_4836_);
v___x_4837_ = lean_st_ref_take(v___y_4827_);
v_mctx_4838_ = lean_ctor_get(v___x_4837_, 0);
v_zetaDeltaFVarIds_4839_ = lean_ctor_get(v___x_4837_, 2);
v_postponed_4840_ = lean_ctor_get(v___x_4837_, 3);
v_diag_4841_ = lean_ctor_get(v___x_4837_, 4);
v_isSharedCheck_5030_ = !lean_is_exclusive(v___x_4837_);
if (v_isSharedCheck_5030_ == 0)
{
lean_object* v_unused_5031_; 
v_unused_5031_ = lean_ctor_get(v___x_4837_, 1);
lean_dec(v_unused_5031_);
v___x_4843_ = v___x_4837_;
v_isShared_4844_ = v_isSharedCheck_5030_;
goto v_resetjp_4842_;
}
else
{
lean_inc(v_diag_4841_);
lean_inc(v_postponed_4840_);
lean_inc(v_zetaDeltaFVarIds_4839_);
lean_inc(v_mctx_4838_);
lean_dec(v___x_4837_);
v___x_4843_ = lean_box(0);
v_isShared_4844_ = v_isSharedCheck_5030_;
goto v_resetjp_4842_;
}
v_resetjp_4842_:
{
lean_object* v___x_4845_; lean_object* v___x_4847_; 
v___x_4845_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__5, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__5_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__5);
if (v_isShared_4844_ == 0)
{
lean_ctor_set(v___x_4843_, 1, v___x_4845_);
v___x_4847_ = v___x_4843_;
goto v_reusejp_4846_;
}
else
{
lean_object* v_reuseFailAlloc_5029_; 
v_reuseFailAlloc_5029_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5029_, 0, v_mctx_4838_);
lean_ctor_set(v_reuseFailAlloc_5029_, 1, v___x_4845_);
lean_ctor_set(v_reuseFailAlloc_5029_, 2, v_zetaDeltaFVarIds_4839_);
lean_ctor_set(v_reuseFailAlloc_5029_, 3, v_postponed_4840_);
lean_ctor_set(v_reuseFailAlloc_5029_, 4, v_diag_4841_);
v___x_4847_ = v_reuseFailAlloc_5029_;
goto v_reusejp_4846_;
}
v_reusejp_4846_:
{
lean_object* v___x_4848_; lean_object* v___x_4849_; lean_object* v___x_4850_; lean_object* v_mctx_4851_; lean_object* v_cache_4852_; lean_object* v_zetaDeltaFVarIds_4853_; lean_object* v_postponed_4854_; lean_object* v_diag_4855_; lean_object* v___x_4857_; uint8_t v_isShared_4858_; uint8_t v_isSharedCheck_5028_; 
v___x_4848_ = lean_st_ref_set(v___y_4827_, v___x_4847_);
v___x_4849_ = lean_st_ref_get(v___y_4829_);
lean_dec(v___x_4849_);
v___x_4850_ = lean_st_ref_take(v___y_4827_);
v_mctx_4851_ = lean_ctor_get(v___x_4850_, 0);
v_cache_4852_ = lean_ctor_get(v___x_4850_, 1);
v_zetaDeltaFVarIds_4853_ = lean_ctor_get(v___x_4850_, 2);
v_postponed_4854_ = lean_ctor_get(v___x_4850_, 3);
v_diag_4855_ = lean_ctor_get(v___x_4850_, 4);
v_isSharedCheck_5028_ = !lean_is_exclusive(v___x_4850_);
if (v_isSharedCheck_5028_ == 0)
{
v___x_4857_ = v___x_4850_;
v_isShared_4858_ = v_isSharedCheck_5028_;
goto v_resetjp_4856_;
}
else
{
lean_inc(v_diag_4855_);
lean_inc(v_postponed_4854_);
lean_inc(v_zetaDeltaFVarIds_4853_);
lean_inc(v_cache_4852_);
lean_inc(v_mctx_4851_);
lean_dec(v___x_4850_);
v___x_4857_ = lean_box(0);
v_isShared_4858_ = v_isSharedCheck_5028_;
goto v_resetjp_4856_;
}
v_resetjp_4856_:
{
lean_object* v___x_4859_; lean_object* v___x_4861_; 
v___x_4859_ = lean_box(1);
if (v_isShared_4858_ == 0)
{
lean_ctor_set(v___x_4857_, 2, v___x_4859_);
v___x_4861_ = v___x_4857_;
goto v_reusejp_4860_;
}
else
{
lean_object* v_reuseFailAlloc_5027_; 
v_reuseFailAlloc_5027_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5027_, 0, v_mctx_4851_);
lean_ctor_set(v_reuseFailAlloc_5027_, 1, v_cache_4852_);
lean_ctor_set(v_reuseFailAlloc_5027_, 2, v___x_4859_);
lean_ctor_set(v_reuseFailAlloc_5027_, 3, v_postponed_4854_);
lean_ctor_set(v_reuseFailAlloc_5027_, 4, v_diag_4855_);
v___x_4861_ = v_reuseFailAlloc_5027_;
goto v_reusejp_4860_;
}
v_reusejp_4860_:
{
lean_object* v___x_4862_; lean_object* v_cache_4863_; lean_object* v_keyedConfig_4864_; lean_object* v_zetaDeltaSet_4865_; lean_object* v_lctx_4866_; lean_object* v_localInstances_4867_; lean_object* v_defEqCtx_x3f_4868_; lean_object* v_synthPendingDepth_4869_; lean_object* v_canUnfold_x3f_4870_; uint8_t v_univApprox_4871_; uint8_t v_inTypeClassResolution_4872_; uint8_t v_cacheInferType_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; uint8_t v_foApprox_4876_; uint8_t v_ctxApprox_4877_; uint8_t v_quasiPatternApprox_4878_; uint8_t v_constApprox_4879_; uint8_t v_isDefEqStuckEx_4880_; uint8_t v_unificationHints_4881_; uint8_t v_proofIrrelevance_4882_; uint8_t v_assignSyntheticOpaque_4883_; uint8_t v_offsetCnstrs_4884_; uint8_t v_etaStruct_4885_; uint8_t v_univApprox_4886_; uint8_t v_iota_4887_; uint8_t v_beta_4888_; uint8_t v_proj_4889_; uint8_t v_zeta_4890_; uint8_t v_zetaDelta_4891_; uint8_t v_zetaUnused_4892_; uint8_t v_zetaHave_4893_; lean_object* v___x_4895_; uint8_t v_isShared_4896_; uint8_t v_isSharedCheck_5026_; 
v___x_4862_ = lean_st_ref_set(v___y_4827_, v___x_4861_);
v_cache_4863_ = lean_ctor_get(v___x_4835_, 1);
lean_inc_ref(v_cache_4863_);
lean_dec(v___x_4835_);
v_keyedConfig_4864_ = lean_ctor_get(v___y_4826_, 0);
v_zetaDeltaSet_4865_ = lean_ctor_get(v___y_4826_, 1);
v_lctx_4866_ = lean_ctor_get(v___y_4826_, 2);
v_localInstances_4867_ = lean_ctor_get(v___y_4826_, 3);
v_defEqCtx_x3f_4868_ = lean_ctor_get(v___y_4826_, 4);
v_synthPendingDepth_4869_ = lean_ctor_get(v___y_4826_, 5);
v_canUnfold_x3f_4870_ = lean_ctor_get(v___y_4826_, 6);
v_univApprox_4871_ = lean_ctor_get_uint8(v___y_4826_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4872_ = lean_ctor_get_uint8(v___y_4826_, sizeof(void*)*7 + 2);
v_cacheInferType_4873_ = lean_ctor_get_uint8(v___y_4826_, sizeof(void*)*7 + 3);
lean_inc(v_canUnfold_x3f_4870_);
lean_inc(v_synthPendingDepth_4869_);
lean_inc(v_defEqCtx_x3f_4868_);
lean_inc_ref(v_localInstances_4867_);
lean_inc_ref(v_lctx_4866_);
lean_inc(v_zetaDeltaSet_4865_);
lean_inc_ref(v_keyedConfig_4864_);
v___x_4874_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4874_, 0, v_keyedConfig_4864_);
lean_ctor_set(v___x_4874_, 1, v_zetaDeltaSet_4865_);
lean_ctor_set(v___x_4874_, 2, v_lctx_4866_);
lean_ctor_set(v___x_4874_, 3, v_localInstances_4867_);
lean_ctor_set(v___x_4874_, 4, v_defEqCtx_x3f_4868_);
lean_ctor_set(v___x_4874_, 5, v_synthPendingDepth_4869_);
lean_ctor_set(v___x_4874_, 6, v_canUnfold_x3f_4870_);
lean_ctor_set_uint8(v___x_4874_, sizeof(void*)*7, v___x_4824_);
lean_ctor_set_uint8(v___x_4874_, sizeof(void*)*7 + 1, v_univApprox_4871_);
lean_ctor_set_uint8(v___x_4874_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4872_);
lean_ctor_set_uint8(v___x_4874_, sizeof(void*)*7 + 3, v_cacheInferType_4873_);
v___x_4875_ = l_Lean_Meta_Context_config(v___x_4874_);
v_foApprox_4876_ = lean_ctor_get_uint8(v___x_4875_, 0);
v_ctxApprox_4877_ = lean_ctor_get_uint8(v___x_4875_, 1);
v_quasiPatternApprox_4878_ = lean_ctor_get_uint8(v___x_4875_, 2);
v_constApprox_4879_ = lean_ctor_get_uint8(v___x_4875_, 3);
v_isDefEqStuckEx_4880_ = lean_ctor_get_uint8(v___x_4875_, 4);
v_unificationHints_4881_ = lean_ctor_get_uint8(v___x_4875_, 5);
v_proofIrrelevance_4882_ = lean_ctor_get_uint8(v___x_4875_, 6);
v_assignSyntheticOpaque_4883_ = lean_ctor_get_uint8(v___x_4875_, 7);
v_offsetCnstrs_4884_ = lean_ctor_get_uint8(v___x_4875_, 8);
v_etaStruct_4885_ = lean_ctor_get_uint8(v___x_4875_, 10);
v_univApprox_4886_ = lean_ctor_get_uint8(v___x_4875_, 11);
v_iota_4887_ = lean_ctor_get_uint8(v___x_4875_, 12);
v_beta_4888_ = lean_ctor_get_uint8(v___x_4875_, 13);
v_proj_4889_ = lean_ctor_get_uint8(v___x_4875_, 14);
v_zeta_4890_ = lean_ctor_get_uint8(v___x_4875_, 15);
v_zetaDelta_4891_ = lean_ctor_get_uint8(v___x_4875_, 16);
v_zetaUnused_4892_ = lean_ctor_get_uint8(v___x_4875_, 17);
v_zetaHave_4893_ = lean_ctor_get_uint8(v___x_4875_, 18);
v_isSharedCheck_5026_ = !lean_is_exclusive(v___x_4875_);
if (v_isSharedCheck_5026_ == 0)
{
v___x_4895_ = v___x_4875_;
v_isShared_4896_ = v_isSharedCheck_5026_;
goto v_resetjp_4894_;
}
else
{
lean_dec(v___x_4875_);
v___x_4895_ = lean_box(0);
v_isShared_4896_ = v_isSharedCheck_5026_;
goto v_resetjp_4894_;
}
v_resetjp_4894_:
{
uint8_t v___x_4897_; lean_object* v_config_4899_; 
v___x_4897_ = 0;
if (v_isShared_4896_ == 0)
{
v_config_4899_ = v___x_4895_;
goto v_reusejp_4898_;
}
else
{
lean_object* v_reuseFailAlloc_5025_; 
v_reuseFailAlloc_5025_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_5025_, 0, v_foApprox_4876_);
lean_ctor_set_uint8(v_reuseFailAlloc_5025_, 1, v_ctxApprox_4877_);
lean_ctor_set_uint8(v_reuseFailAlloc_5025_, 2, v_quasiPatternApprox_4878_);
lean_ctor_set_uint8(v_reuseFailAlloc_5025_, 3, v_constApprox_4879_);
lean_ctor_set_uint8(v_reuseFailAlloc_5025_, 4, v_isDefEqStuckEx_4880_);
lean_ctor_set_uint8(v_reuseFailAlloc_5025_, 5, v_unificationHints_4881_);
lean_ctor_set_uint8(v_reuseFailAlloc_5025_, 6, v_proofIrrelevance_4882_);
lean_ctor_set_uint8(v_reuseFailAlloc_5025_, 7, v_assignSyntheticOpaque_4883_);
lean_ctor_set_uint8(v_reuseFailAlloc_5025_, 8, v_offsetCnstrs_4884_);
lean_ctor_set_uint8(v_reuseFailAlloc_5025_, 10, v_etaStruct_4885_);
lean_ctor_set_uint8(v_reuseFailAlloc_5025_, 11, v_univApprox_4886_);
lean_ctor_set_uint8(v_reuseFailAlloc_5025_, 12, v_iota_4887_);
lean_ctor_set_uint8(v_reuseFailAlloc_5025_, 13, v_beta_4888_);
lean_ctor_set_uint8(v_reuseFailAlloc_5025_, 14, v_proj_4889_);
lean_ctor_set_uint8(v_reuseFailAlloc_5025_, 15, v_zeta_4890_);
lean_ctor_set_uint8(v_reuseFailAlloc_5025_, 16, v_zetaDelta_4891_);
lean_ctor_set_uint8(v_reuseFailAlloc_5025_, 17, v_zetaUnused_4892_);
lean_ctor_set_uint8(v_reuseFailAlloc_5025_, 18, v_zetaHave_4893_);
v_config_4899_ = v_reuseFailAlloc_5025_;
goto v_reusejp_4898_;
}
v_reusejp_4898_:
{
uint64_t v___x_4900_; uint64_t v___x_4901_; uint64_t v___x_4902_; uint64_t v___x_4903_; uint64_t v___x_4904_; uint64_t v_key_4905_; lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; uint8_t v_transparency_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v_a_4914_; lean_object* v___y_4926_; lean_object* v___y_4949_; uint8_t v___y_4977_; uint8_t v___x_5023_; uint8_t v___x_5024_; 
lean_ctor_set_uint8(v_config_4899_, 9, v___x_4897_);
v___x_4900_ = l_Lean_Meta_Context_configKey(v___x_4874_);
lean_dec_ref(v___x_4874_);
v___x_4901_ = 2ULL;
v___x_4902_ = lean_uint64_shift_right(v___x_4900_, v___x_4901_);
v___x_4903_ = lean_uint64_shift_left(v___x_4902_, v___x_4901_);
v___x_4904_ = lean_uint64_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__6, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__6_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__6);
v_key_4905_ = lean_uint64_lor(v___x_4903_, v___x_4904_);
v___x_4906_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4906_, 0, v_config_4899_);
lean_ctor_set_uint64(v___x_4906_, sizeof(void*)*1, v_key_4905_);
lean_inc(v_canUnfold_x3f_4870_);
lean_inc(v_synthPendingDepth_4869_);
lean_inc(v_defEqCtx_x3f_4868_);
lean_inc_ref(v_localInstances_4867_);
lean_inc_ref(v_lctx_4866_);
lean_inc(v_zetaDeltaSet_4865_);
v___x_4907_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4907_, 0, v___x_4906_);
lean_ctor_set(v___x_4907_, 1, v_zetaDeltaSet_4865_);
lean_ctor_set(v___x_4907_, 2, v_lctx_4866_);
lean_ctor_set(v___x_4907_, 3, v_localInstances_4867_);
lean_ctor_set(v___x_4907_, 4, v_defEqCtx_x3f_4868_);
lean_ctor_set(v___x_4907_, 5, v_synthPendingDepth_4869_);
lean_ctor_set(v___x_4907_, 6, v_canUnfold_x3f_4870_);
lean_ctor_set_uint8(v___x_4907_, sizeof(void*)*7, v___x_4824_);
lean_ctor_set_uint8(v___x_4907_, sizeof(void*)*7 + 1, v_univApprox_4871_);
lean_ctor_set_uint8(v___x_4907_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4872_);
lean_ctor_set_uint8(v___x_4907_, sizeof(void*)*7 + 3, v_cacheInferType_4873_);
v___x_4908_ = l_Lean_Meta_Context_config(v___x_4907_);
v_transparency_4909_ = lean_ctor_get_uint8(v___x_4908_, 9);
v___x_4910_ = lean_unsigned_to_nat(0u);
v___x_4911_ = lean_box(0);
v___x_4912_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__7, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__7_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___closed__7);
v___x_5023_ = 1;
v___x_5024_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_4909_, v___x_5023_);
if (v___x_5024_ == 0)
{
v___y_4977_ = v_transparency_4909_;
goto v___jp_4976_;
}
else
{
v___y_4977_ = v___x_5023_;
goto v___jp_4976_;
}
v___jp_4913_:
{
lean_object* v___x_4915_; lean_object* v___x_4916_; lean_object* v___x_4918_; uint8_t v_isShared_4919_; uint8_t v_isSharedCheck_4923_; 
v___x_4915_ = lean_box(0);
v___x_4916_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__2(v___y_4829_, v___y_4827_, v_cache_4863_, v___x_4915_);
v_isSharedCheck_4923_ = !lean_is_exclusive(v___x_4916_);
if (v_isSharedCheck_4923_ == 0)
{
lean_object* v_unused_4924_; 
v_unused_4924_ = lean_ctor_get(v___x_4916_, 0);
lean_dec(v_unused_4924_);
v___x_4918_ = v___x_4916_;
v_isShared_4919_ = v_isSharedCheck_4923_;
goto v_resetjp_4917_;
}
else
{
lean_dec(v___x_4916_);
v___x_4918_ = lean_box(0);
v_isShared_4919_ = v_isSharedCheck_4923_;
goto v_resetjp_4917_;
}
v_resetjp_4917_:
{
lean_object* v___x_4921_; 
if (v_isShared_4919_ == 0)
{
lean_ctor_set_tag(v___x_4918_, 1);
lean_ctor_set(v___x_4918_, 0, v_a_4914_);
v___x_4921_ = v___x_4918_;
goto v_reusejp_4920_;
}
else
{
lean_object* v_reuseFailAlloc_4922_; 
v_reuseFailAlloc_4922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4922_, 0, v_a_4914_);
v___x_4921_ = v_reuseFailAlloc_4922_;
goto v_reusejp_4920_;
}
v_reusejp_4920_:
{
return v___x_4921_;
}
}
}
v___jp_4925_:
{
if (lean_obj_tag(v___y_4926_) == 0)
{
lean_object* v_a_4927_; lean_object* v___x_4929_; uint8_t v_isShared_4930_; uint8_t v_isSharedCheck_4944_; 
v_a_4927_ = lean_ctor_get(v___y_4926_, 0);
v_isSharedCheck_4944_ = !lean_is_exclusive(v___y_4926_);
if (v_isSharedCheck_4944_ == 0)
{
v___x_4929_ = v___y_4926_;
v_isShared_4930_ = v_isSharedCheck_4944_;
goto v_resetjp_4928_;
}
else
{
lean_inc(v_a_4927_);
lean_dec(v___y_4926_);
v___x_4929_ = lean_box(0);
v_isShared_4930_ = v_isSharedCheck_4944_;
goto v_resetjp_4928_;
}
v_resetjp_4928_:
{
lean_object* v___x_4932_; 
lean_inc(v_a_4927_);
if (v_isShared_4930_ == 0)
{
lean_ctor_set_tag(v___x_4929_, 1);
v___x_4932_ = v___x_4929_;
goto v_reusejp_4931_;
}
else
{
lean_object* v_reuseFailAlloc_4943_; 
v_reuseFailAlloc_4943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4943_, 0, v_a_4927_);
v___x_4932_ = v_reuseFailAlloc_4943_;
goto v_reusejp_4931_;
}
v_reusejp_4931_:
{
lean_object* v___x_4933_; lean_object* v___x_4934_; lean_object* v___x_4936_; uint8_t v_isShared_4937_; uint8_t v_isSharedCheck_4941_; 
v___x_4933_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0(v___y_4829_, v___y_4827_, v_zetaDeltaFVarIds_4853_, v___x_4932_);
lean_dec_ref(v___x_4933_);
v___x_4934_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__2(v___y_4829_, v___y_4827_, v_cache_4863_, v___x_4932_);
lean_dec_ref(v___x_4932_);
v_isSharedCheck_4941_ = !lean_is_exclusive(v___x_4934_);
if (v_isSharedCheck_4941_ == 0)
{
lean_object* v_unused_4942_; 
v_unused_4942_ = lean_ctor_get(v___x_4934_, 0);
lean_dec(v_unused_4942_);
v___x_4936_ = v___x_4934_;
v_isShared_4937_ = v_isSharedCheck_4941_;
goto v_resetjp_4935_;
}
else
{
lean_dec(v___x_4934_);
v___x_4936_ = lean_box(0);
v_isShared_4937_ = v_isSharedCheck_4941_;
goto v_resetjp_4935_;
}
v_resetjp_4935_:
{
lean_object* v___x_4939_; 
if (v_isShared_4937_ == 0)
{
lean_ctor_set(v___x_4936_, 0, v_a_4927_);
v___x_4939_ = v___x_4936_;
goto v_reusejp_4938_;
}
else
{
lean_object* v_reuseFailAlloc_4940_; 
v_reuseFailAlloc_4940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4940_, 0, v_a_4927_);
v___x_4939_ = v_reuseFailAlloc_4940_;
goto v_reusejp_4938_;
}
v_reusejp_4938_:
{
return v___x_4939_;
}
}
}
}
}
else
{
lean_object* v_a_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; 
v_a_4945_ = lean_ctor_get(v___y_4926_, 0);
lean_inc(v_a_4945_);
lean_dec_ref(v___y_4926_);
v___x_4946_ = lean_box(0);
v___x_4947_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0(v___y_4829_, v___y_4827_, v_zetaDeltaFVarIds_4853_, v___x_4946_);
lean_dec_ref(v___x_4947_);
v_a_4914_ = v_a_4945_;
goto v___jp_4913_;
}
}
v___jp_4948_:
{
lean_object* v___x_4950_; uint8_t v_foApprox_4951_; uint8_t v_ctxApprox_4952_; uint8_t v_quasiPatternApprox_4953_; uint8_t v_constApprox_4954_; uint8_t v_isDefEqStuckEx_4955_; uint8_t v_unificationHints_4956_; uint8_t v_proofIrrelevance_4957_; uint8_t v_assignSyntheticOpaque_4958_; uint8_t v_offsetCnstrs_4959_; uint8_t v_transparency_4960_; uint8_t v_univApprox_4961_; uint8_t v_zetaUnused_4962_; lean_object* v___x_4964_; uint8_t v_isShared_4965_; uint8_t v_isSharedCheck_4975_; 
v___x_4950_ = l_Lean_Meta_Context_config(v___y_4949_);
lean_dec_ref(v___y_4949_);
v_foApprox_4951_ = lean_ctor_get_uint8(v___x_4950_, 0);
v_ctxApprox_4952_ = lean_ctor_get_uint8(v___x_4950_, 1);
v_quasiPatternApprox_4953_ = lean_ctor_get_uint8(v___x_4950_, 2);
v_constApprox_4954_ = lean_ctor_get_uint8(v___x_4950_, 3);
v_isDefEqStuckEx_4955_ = lean_ctor_get_uint8(v___x_4950_, 4);
v_unificationHints_4956_ = lean_ctor_get_uint8(v___x_4950_, 5);
v_proofIrrelevance_4957_ = lean_ctor_get_uint8(v___x_4950_, 6);
v_assignSyntheticOpaque_4958_ = lean_ctor_get_uint8(v___x_4950_, 7);
v_offsetCnstrs_4959_ = lean_ctor_get_uint8(v___x_4950_, 8);
v_transparency_4960_ = lean_ctor_get_uint8(v___x_4950_, 9);
v_univApprox_4961_ = lean_ctor_get_uint8(v___x_4950_, 11);
v_zetaUnused_4962_ = lean_ctor_get_uint8(v___x_4950_, 17);
v_isSharedCheck_4975_ = !lean_is_exclusive(v___x_4950_);
if (v_isSharedCheck_4975_ == 0)
{
v___x_4964_ = v___x_4950_;
v_isShared_4965_ = v_isSharedCheck_4975_;
goto v_resetjp_4963_;
}
else
{
lean_dec(v___x_4950_);
v___x_4964_ = lean_box(0);
v_isShared_4965_ = v_isSharedCheck_4975_;
goto v_resetjp_4963_;
}
v_resetjp_4963_:
{
uint8_t v___x_4966_; uint8_t v___x_4967_; lean_object* v___x_4969_; 
v___x_4966_ = 0;
v___x_4967_ = 2;
if (v_isShared_4965_ == 0)
{
v___x_4969_ = v___x_4964_;
goto v_reusejp_4968_;
}
else
{
lean_object* v_reuseFailAlloc_4974_; 
v_reuseFailAlloc_4974_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_4974_, 0, v_foApprox_4951_);
lean_ctor_set_uint8(v_reuseFailAlloc_4974_, 1, v_ctxApprox_4952_);
lean_ctor_set_uint8(v_reuseFailAlloc_4974_, 2, v_quasiPatternApprox_4953_);
lean_ctor_set_uint8(v_reuseFailAlloc_4974_, 3, v_constApprox_4954_);
lean_ctor_set_uint8(v_reuseFailAlloc_4974_, 4, v_isDefEqStuckEx_4955_);
lean_ctor_set_uint8(v_reuseFailAlloc_4974_, 5, v_unificationHints_4956_);
lean_ctor_set_uint8(v_reuseFailAlloc_4974_, 6, v_proofIrrelevance_4957_);
lean_ctor_set_uint8(v_reuseFailAlloc_4974_, 7, v_assignSyntheticOpaque_4958_);
lean_ctor_set_uint8(v_reuseFailAlloc_4974_, 8, v_offsetCnstrs_4959_);
lean_ctor_set_uint8(v_reuseFailAlloc_4974_, 9, v_transparency_4960_);
lean_ctor_set_uint8(v_reuseFailAlloc_4974_, 11, v_univApprox_4961_);
lean_ctor_set_uint8(v_reuseFailAlloc_4974_, 17, v_zetaUnused_4962_);
v___x_4969_ = v_reuseFailAlloc_4974_;
goto v_reusejp_4968_;
}
v_reusejp_4968_:
{
uint64_t v___x_4970_; lean_object* v___x_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; 
lean_ctor_set_uint8(v___x_4969_, 10, v___x_4966_);
lean_ctor_set_uint8(v___x_4969_, 12, v___x_4824_);
lean_ctor_set_uint8(v___x_4969_, 13, v___x_4824_);
lean_ctor_set_uint8(v___x_4969_, 14, v___x_4967_);
lean_ctor_set_uint8(v___x_4969_, 15, v___x_4824_);
lean_ctor_set_uint8(v___x_4969_, 16, v___x_4824_);
lean_ctor_set_uint8(v___x_4969_, 18, v___x_4824_);
v___x_4970_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_4969_);
v___x_4971_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4971_, 0, v___x_4969_);
lean_ctor_set_uint64(v___x_4971_, sizeof(void*)*1, v___x_4970_);
lean_inc(v_canUnfold_x3f_4870_);
lean_inc(v_synthPendingDepth_4869_);
lean_inc(v_defEqCtx_x3f_4868_);
lean_inc_ref(v_localInstances_4867_);
lean_inc_ref(v_lctx_4866_);
lean_inc(v_zetaDeltaSet_4865_);
v___x_4972_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4972_, 0, v___x_4971_);
lean_ctor_set(v___x_4972_, 1, v_zetaDeltaSet_4865_);
lean_ctor_set(v___x_4972_, 2, v_lctx_4866_);
lean_ctor_set(v___x_4972_, 3, v_localInstances_4867_);
lean_ctor_set(v___x_4972_, 4, v_defEqCtx_x3f_4868_);
lean_ctor_set(v___x_4972_, 5, v_synthPendingDepth_4869_);
lean_ctor_set(v___x_4972_, 6, v_canUnfold_x3f_4870_);
lean_ctor_set_uint8(v___x_4972_, sizeof(void*)*7, v___x_4824_);
lean_ctor_set_uint8(v___x_4972_, sizeof(void*)*7 + 1, v_univApprox_4871_);
lean_ctor_set_uint8(v___x_4972_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4872_);
lean_ctor_set_uint8(v___x_4972_, sizeof(void*)*7 + 3, v_cacheInferType_4873_);
v___x_4973_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1(v___x_4912_, v_e_4823_, v___x_4911_, v___x_4910_, v_cls_4825_, v___x_4972_, v___y_4827_, v___y_4828_, v___y_4829_);
lean_dec_ref(v___x_4972_);
v___y_4926_ = v___x_4973_;
goto v___jp_4925_;
}
}
}
v___jp_4976_:
{
uint8_t v_foApprox_4978_; uint8_t v_ctxApprox_4979_; uint8_t v_quasiPatternApprox_4980_; uint8_t v_constApprox_4981_; uint8_t v_isDefEqStuckEx_4982_; uint8_t v_unificationHints_4983_; uint8_t v_proofIrrelevance_4984_; uint8_t v_assignSyntheticOpaque_4985_; uint8_t v_offsetCnstrs_4986_; uint8_t v_etaStruct_4987_; uint8_t v_univApprox_4988_; uint8_t v_iota_4989_; uint8_t v_beta_4990_; uint8_t v_proj_4991_; uint8_t v_zeta_4992_; uint8_t v_zetaDelta_4993_; uint8_t v_zetaUnused_4994_; uint8_t v_zetaHave_4995_; lean_object* v___x_4997_; uint8_t v_isShared_4998_; uint8_t v_isSharedCheck_5022_; 
v_foApprox_4978_ = lean_ctor_get_uint8(v___x_4908_, 0);
v_ctxApprox_4979_ = lean_ctor_get_uint8(v___x_4908_, 1);
v_quasiPatternApprox_4980_ = lean_ctor_get_uint8(v___x_4908_, 2);
v_constApprox_4981_ = lean_ctor_get_uint8(v___x_4908_, 3);
v_isDefEqStuckEx_4982_ = lean_ctor_get_uint8(v___x_4908_, 4);
v_unificationHints_4983_ = lean_ctor_get_uint8(v___x_4908_, 5);
v_proofIrrelevance_4984_ = lean_ctor_get_uint8(v___x_4908_, 6);
v_assignSyntheticOpaque_4985_ = lean_ctor_get_uint8(v___x_4908_, 7);
v_offsetCnstrs_4986_ = lean_ctor_get_uint8(v___x_4908_, 8);
v_etaStruct_4987_ = lean_ctor_get_uint8(v___x_4908_, 10);
v_univApprox_4988_ = lean_ctor_get_uint8(v___x_4908_, 11);
v_iota_4989_ = lean_ctor_get_uint8(v___x_4908_, 12);
v_beta_4990_ = lean_ctor_get_uint8(v___x_4908_, 13);
v_proj_4991_ = lean_ctor_get_uint8(v___x_4908_, 14);
v_zeta_4992_ = lean_ctor_get_uint8(v___x_4908_, 15);
v_zetaDelta_4993_ = lean_ctor_get_uint8(v___x_4908_, 16);
v_zetaUnused_4994_ = lean_ctor_get_uint8(v___x_4908_, 17);
v_zetaHave_4995_ = lean_ctor_get_uint8(v___x_4908_, 18);
v_isSharedCheck_5022_ = !lean_is_exclusive(v___x_4908_);
if (v_isSharedCheck_5022_ == 0)
{
v___x_4997_ = v___x_4908_;
v_isShared_4998_ = v_isSharedCheck_5022_;
goto v_resetjp_4996_;
}
else
{
lean_dec(v___x_4908_);
v___x_4997_ = lean_box(0);
v_isShared_4998_ = v_isSharedCheck_5022_;
goto v_resetjp_4996_;
}
v_resetjp_4996_:
{
lean_object* v_config_5000_; 
if (v_isShared_4998_ == 0)
{
v_config_5000_ = v___x_4997_;
goto v_reusejp_4999_;
}
else
{
lean_object* v_reuseFailAlloc_5021_; 
v_reuseFailAlloc_5021_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_5021_, 0, v_foApprox_4978_);
lean_ctor_set_uint8(v_reuseFailAlloc_5021_, 1, v_ctxApprox_4979_);
lean_ctor_set_uint8(v_reuseFailAlloc_5021_, 2, v_quasiPatternApprox_4980_);
lean_ctor_set_uint8(v_reuseFailAlloc_5021_, 3, v_constApprox_4981_);
lean_ctor_set_uint8(v_reuseFailAlloc_5021_, 4, v_isDefEqStuckEx_4982_);
lean_ctor_set_uint8(v_reuseFailAlloc_5021_, 5, v_unificationHints_4983_);
lean_ctor_set_uint8(v_reuseFailAlloc_5021_, 6, v_proofIrrelevance_4984_);
lean_ctor_set_uint8(v_reuseFailAlloc_5021_, 7, v_assignSyntheticOpaque_4985_);
lean_ctor_set_uint8(v_reuseFailAlloc_5021_, 8, v_offsetCnstrs_4986_);
lean_ctor_set_uint8(v_reuseFailAlloc_5021_, 10, v_etaStruct_4987_);
lean_ctor_set_uint8(v_reuseFailAlloc_5021_, 11, v_univApprox_4988_);
lean_ctor_set_uint8(v_reuseFailAlloc_5021_, 12, v_iota_4989_);
lean_ctor_set_uint8(v_reuseFailAlloc_5021_, 13, v_beta_4990_);
lean_ctor_set_uint8(v_reuseFailAlloc_5021_, 14, v_proj_4991_);
lean_ctor_set_uint8(v_reuseFailAlloc_5021_, 15, v_zeta_4992_);
lean_ctor_set_uint8(v_reuseFailAlloc_5021_, 16, v_zetaDelta_4993_);
lean_ctor_set_uint8(v_reuseFailAlloc_5021_, 17, v_zetaUnused_4994_);
lean_ctor_set_uint8(v_reuseFailAlloc_5021_, 18, v_zetaHave_4995_);
v_config_5000_ = v_reuseFailAlloc_5021_;
goto v_reusejp_4999_;
}
v_reusejp_4999_:
{
uint64_t v___x_5001_; uint64_t v___x_5002_; uint64_t v___x_5003_; uint64_t v___x_5004_; uint64_t v_key_5005_; lean_object* v___x_5006_; lean_object* v___x_5007_; lean_object* v___x_5008_; uint8_t v_beta_5009_; 
lean_ctor_set_uint8(v_config_5000_, 9, v___y_4977_);
v___x_5001_ = l_Lean_Meta_Context_configKey(v___x_4907_);
lean_dec_ref(v___x_4907_);
v___x_5002_ = lean_uint64_shift_right(v___x_5001_, v___x_4901_);
v___x_5003_ = lean_uint64_shift_left(v___x_5002_, v___x_4901_);
v___x_5004_ = l_Lean_Meta_TransparencyMode_toUInt64(v___y_4977_);
v_key_5005_ = lean_uint64_lor(v___x_5003_, v___x_5004_);
v___x_5006_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_5006_, 0, v_config_5000_);
lean_ctor_set_uint64(v___x_5006_, sizeof(void*)*1, v_key_5005_);
lean_inc(v_canUnfold_x3f_4870_);
lean_inc(v_synthPendingDepth_4869_);
lean_inc(v_defEqCtx_x3f_4868_);
lean_inc_ref(v_localInstances_4867_);
lean_inc_ref(v_lctx_4866_);
lean_inc(v_zetaDeltaSet_4865_);
v___x_5007_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_5007_, 0, v___x_5006_);
lean_ctor_set(v___x_5007_, 1, v_zetaDeltaSet_4865_);
lean_ctor_set(v___x_5007_, 2, v_lctx_4866_);
lean_ctor_set(v___x_5007_, 3, v_localInstances_4867_);
lean_ctor_set(v___x_5007_, 4, v_defEqCtx_x3f_4868_);
lean_ctor_set(v___x_5007_, 5, v_synthPendingDepth_4869_);
lean_ctor_set(v___x_5007_, 6, v_canUnfold_x3f_4870_);
lean_ctor_set_uint8(v___x_5007_, sizeof(void*)*7, v___x_4824_);
lean_ctor_set_uint8(v___x_5007_, sizeof(void*)*7 + 1, v_univApprox_4871_);
lean_ctor_set_uint8(v___x_5007_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4872_);
lean_ctor_set_uint8(v___x_5007_, sizeof(void*)*7 + 3, v_cacheInferType_4873_);
v___x_5008_ = l_Lean_Meta_Context_config(v___x_5007_);
v_beta_5009_ = lean_ctor_get_uint8(v___x_5008_, 13);
if (v_beta_5009_ == 0)
{
lean_dec_ref(v___x_5008_);
v___y_4949_ = v___x_5007_;
goto v___jp_4948_;
}
else
{
uint8_t v_iota_5010_; 
v_iota_5010_ = lean_ctor_get_uint8(v___x_5008_, 12);
if (v_iota_5010_ == 0)
{
lean_dec_ref(v___x_5008_);
v___y_4949_ = v___x_5007_;
goto v___jp_4948_;
}
else
{
uint8_t v_zeta_5011_; 
v_zeta_5011_ = lean_ctor_get_uint8(v___x_5008_, 15);
if (v_zeta_5011_ == 0)
{
lean_dec_ref(v___x_5008_);
v___y_4949_ = v___x_5007_;
goto v___jp_4948_;
}
else
{
uint8_t v_zetaHave_5012_; 
v_zetaHave_5012_ = lean_ctor_get_uint8(v___x_5008_, 18);
if (v_zetaHave_5012_ == 0)
{
lean_dec_ref(v___x_5008_);
v___y_4949_ = v___x_5007_;
goto v___jp_4948_;
}
else
{
uint8_t v_zetaDelta_5013_; 
v_zetaDelta_5013_ = lean_ctor_get_uint8(v___x_5008_, 16);
if (v_zetaDelta_5013_ == 0)
{
lean_dec_ref(v___x_5008_);
v___y_4949_ = v___x_5007_;
goto v___jp_4948_;
}
else
{
uint8_t v_etaStruct_5014_; uint8_t v_proj_5015_; uint8_t v___x_5016_; uint8_t v___x_5017_; 
v_etaStruct_5014_ = lean_ctor_get_uint8(v___x_5008_, 10);
v_proj_5015_ = lean_ctor_get_uint8(v___x_5008_, 14);
lean_dec_ref(v___x_5008_);
v___x_5016_ = 2;
v___x_5017_ = l_Lean_Meta_instDecidableEqProjReductionKind(v_proj_5015_, v___x_5016_);
if (v___x_5017_ == 0)
{
v___y_4949_ = v___x_5007_;
goto v___jp_4948_;
}
else
{
uint8_t v___x_5018_; uint8_t v___x_5019_; 
v___x_5018_ = 0;
v___x_5019_ = l_Lean_Meta_instBEqEtaStructMode_beq(v_etaStruct_5014_, v___x_5018_);
if (v___x_5019_ == 0)
{
v___y_4949_ = v___x_5007_;
goto v___jp_4948_;
}
else
{
lean_object* v___x_5020_; 
v___x_5020_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1(v___x_4912_, v_e_4823_, v___x_4911_, v___x_4910_, v_cls_4825_, v___x_5007_, v___y_4827_, v___y_4828_, v___y_4829_);
lean_dec_ref(v___x_5007_);
v___y_4926_ = v___x_5020_;
goto v___jp_4925_;
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
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___boxed(lean_object* v___x_5032_, lean_object* v_e_5033_, lean_object* v___x_5034_, lean_object* v_cls_5035_, lean_object* v___y_5036_, lean_object* v___y_5037_, lean_object* v___y_5038_, lean_object* v___y_5039_, lean_object* v___y_5040_){
_start:
{
uint8_t v___x_15381__boxed_5041_; uint8_t v___x_15382__boxed_5042_; lean_object* v_res_5043_; 
v___x_15381__boxed_5041_ = lean_unbox(v___x_5032_);
v___x_15382__boxed_5042_ = lean_unbox(v___x_5034_);
v_res_5043_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3(v___x_15381__boxed_5041_, v_e_5033_, v___x_15382__boxed_5042_, v_cls_5035_, v___y_5036_, v___y_5037_, v___y_5038_, v___y_5039_);
lean_dec(v___y_5039_);
lean_dec_ref(v___y_5038_);
lean_dec(v___y_5037_);
lean_dec_ref(v___y_5036_);
return v_res_5043_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__4(lean_object* v_x_5044_, lean_object* v___y_5045_, lean_object* v___y_5046_, lean_object* v___y_5047_, lean_object* v___y_5048_){
_start:
{
if (lean_obj_tag(v_x_5044_) == 0)
{
lean_object* v_a_5050_; lean_object* v___x_5052_; uint8_t v_isShared_5053_; uint8_t v_isSharedCheck_5058_; 
v_a_5050_ = lean_ctor_get(v_x_5044_, 0);
v_isSharedCheck_5058_ = !lean_is_exclusive(v_x_5044_);
if (v_isSharedCheck_5058_ == 0)
{
v___x_5052_ = v_x_5044_;
v_isShared_5053_ = v_isSharedCheck_5058_;
goto v_resetjp_5051_;
}
else
{
lean_inc(v_a_5050_);
lean_dec(v_x_5044_);
v___x_5052_ = lean_box(0);
v_isShared_5053_ = v_isSharedCheck_5058_;
goto v_resetjp_5051_;
}
v_resetjp_5051_:
{
lean_object* v___x_5054_; lean_object* v___x_5056_; 
v___x_5054_ = l_Lean_Exception_toMessageData(v_a_5050_);
if (v_isShared_5053_ == 0)
{
lean_ctor_set(v___x_5052_, 0, v___x_5054_);
v___x_5056_ = v___x_5052_;
goto v_reusejp_5055_;
}
else
{
lean_object* v_reuseFailAlloc_5057_; 
v_reuseFailAlloc_5057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5057_, 0, v___x_5054_);
v___x_5056_ = v_reuseFailAlloc_5057_;
goto v_reusejp_5055_;
}
v_reusejp_5055_:
{
return v___x_5056_;
}
}
}
else
{
lean_object* v_a_5059_; lean_object* v___x_5061_; uint8_t v_isShared_5062_; uint8_t v_isSharedCheck_5067_; 
v_a_5059_ = lean_ctor_get(v_x_5044_, 0);
v_isSharedCheck_5067_ = !lean_is_exclusive(v_x_5044_);
if (v_isSharedCheck_5067_ == 0)
{
v___x_5061_ = v_x_5044_;
v_isShared_5062_ = v_isSharedCheck_5067_;
goto v_resetjp_5060_;
}
else
{
lean_inc(v_a_5059_);
lean_dec(v_x_5044_);
v___x_5061_ = lean_box(0);
v_isShared_5062_ = v_isSharedCheck_5067_;
goto v_resetjp_5060_;
}
v_resetjp_5060_:
{
lean_object* v_snd_5063_; lean_object* v___x_5065_; 
v_snd_5063_ = lean_ctor_get(v_a_5059_, 1);
lean_inc(v_snd_5063_);
lean_dec(v_a_5059_);
if (v_isShared_5062_ == 0)
{
lean_ctor_set_tag(v___x_5061_, 0);
lean_ctor_set(v___x_5061_, 0, v_snd_5063_);
v___x_5065_ = v___x_5061_;
goto v_reusejp_5064_;
}
else
{
lean_object* v_reuseFailAlloc_5066_; 
v_reuseFailAlloc_5066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5066_, 0, v_snd_5063_);
v___x_5065_ = v_reuseFailAlloc_5066_;
goto v_reusejp_5064_;
}
v_reusejp_5064_:
{
return v___x_5065_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__4___boxed(lean_object* v_x_5068_, lean_object* v___y_5069_, lean_object* v___y_5070_, lean_object* v___y_5071_, lean_object* v___y_5072_, lean_object* v___y_5073_){
_start:
{
lean_object* v_res_5074_; 
v_res_5074_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__4(v_x_5068_, v___y_5069_, v___y_5070_, v___y_5071_, v___y_5072_);
lean_dec(v___y_5072_);
lean_dec_ref(v___y_5071_);
lean_dec(v___y_5070_);
lean_dec_ref(v___y_5069_);
return v_res_5074_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__3(lean_object* v_oldTraces_5075_, lean_object* v_data_5076_, lean_object* v_ref_5077_, lean_object* v_msg_5078_, lean_object* v___y_5079_, lean_object* v___y_5080_, lean_object* v___y_5081_, lean_object* v___y_5082_){
_start:
{
lean_object* v_fileName_5084_; lean_object* v_fileMap_5085_; lean_object* v_options_5086_; lean_object* v_currRecDepth_5087_; lean_object* v_maxRecDepth_5088_; lean_object* v_ref_5089_; lean_object* v_currNamespace_5090_; lean_object* v_openDecls_5091_; lean_object* v_initHeartbeats_5092_; lean_object* v_maxHeartbeats_5093_; lean_object* v_quotContext_5094_; lean_object* v_currMacroScope_5095_; uint8_t v_diag_5096_; lean_object* v_cancelTk_x3f_5097_; uint8_t v_suppressElabErrors_5098_; lean_object* v_inheritedTraceOptions_5099_; lean_object* v___x_5100_; lean_object* v_traceState_5101_; lean_object* v_traces_5102_; lean_object* v_ref_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; size_t v_sz_5106_; size_t v___x_5107_; lean_object* v___x_5108_; lean_object* v_msg_5109_; lean_object* v___x_5110_; lean_object* v_a_5111_; lean_object* v___x_5113_; uint8_t v_isShared_5114_; uint8_t v_isSharedCheck_5148_; 
v_fileName_5084_ = lean_ctor_get(v___y_5081_, 0);
v_fileMap_5085_ = lean_ctor_get(v___y_5081_, 1);
v_options_5086_ = lean_ctor_get(v___y_5081_, 2);
v_currRecDepth_5087_ = lean_ctor_get(v___y_5081_, 3);
v_maxRecDepth_5088_ = lean_ctor_get(v___y_5081_, 4);
v_ref_5089_ = lean_ctor_get(v___y_5081_, 5);
v_currNamespace_5090_ = lean_ctor_get(v___y_5081_, 6);
v_openDecls_5091_ = lean_ctor_get(v___y_5081_, 7);
v_initHeartbeats_5092_ = lean_ctor_get(v___y_5081_, 8);
v_maxHeartbeats_5093_ = lean_ctor_get(v___y_5081_, 9);
v_quotContext_5094_ = lean_ctor_get(v___y_5081_, 10);
v_currMacroScope_5095_ = lean_ctor_get(v___y_5081_, 11);
v_diag_5096_ = lean_ctor_get_uint8(v___y_5081_, sizeof(void*)*14);
v_cancelTk_x3f_5097_ = lean_ctor_get(v___y_5081_, 12);
v_suppressElabErrors_5098_ = lean_ctor_get_uint8(v___y_5081_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_5099_ = lean_ctor_get(v___y_5081_, 13);
v___x_5100_ = lean_st_ref_get(v___y_5082_);
v_traceState_5101_ = lean_ctor_get(v___x_5100_, 4);
lean_inc_ref(v_traceState_5101_);
lean_dec(v___x_5100_);
v_traces_5102_ = lean_ctor_get(v_traceState_5101_, 0);
lean_inc_ref(v_traces_5102_);
lean_dec_ref(v_traceState_5101_);
v_ref_5103_ = l_Lean_replaceRef(v_ref_5077_, v_ref_5089_);
lean_inc_ref(v_inheritedTraceOptions_5099_);
lean_inc(v_cancelTk_x3f_5097_);
lean_inc(v_currMacroScope_5095_);
lean_inc(v_quotContext_5094_);
lean_inc(v_maxHeartbeats_5093_);
lean_inc(v_initHeartbeats_5092_);
lean_inc(v_openDecls_5091_);
lean_inc(v_currNamespace_5090_);
lean_inc(v_maxRecDepth_5088_);
lean_inc(v_currRecDepth_5087_);
lean_inc_ref(v_options_5086_);
lean_inc_ref(v_fileMap_5085_);
lean_inc_ref(v_fileName_5084_);
v___x_5104_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_5104_, 0, v_fileName_5084_);
lean_ctor_set(v___x_5104_, 1, v_fileMap_5085_);
lean_ctor_set(v___x_5104_, 2, v_options_5086_);
lean_ctor_set(v___x_5104_, 3, v_currRecDepth_5087_);
lean_ctor_set(v___x_5104_, 4, v_maxRecDepth_5088_);
lean_ctor_set(v___x_5104_, 5, v_ref_5103_);
lean_ctor_set(v___x_5104_, 6, v_currNamespace_5090_);
lean_ctor_set(v___x_5104_, 7, v_openDecls_5091_);
lean_ctor_set(v___x_5104_, 8, v_initHeartbeats_5092_);
lean_ctor_set(v___x_5104_, 9, v_maxHeartbeats_5093_);
lean_ctor_set(v___x_5104_, 10, v_quotContext_5094_);
lean_ctor_set(v___x_5104_, 11, v_currMacroScope_5095_);
lean_ctor_set(v___x_5104_, 12, v_cancelTk_x3f_5097_);
lean_ctor_set(v___x_5104_, 13, v_inheritedTraceOptions_5099_);
lean_ctor_set_uint8(v___x_5104_, sizeof(void*)*14, v_diag_5096_);
lean_ctor_set_uint8(v___x_5104_, sizeof(void*)*14 + 1, v_suppressElabErrors_5098_);
v___x_5105_ = l_Lean_PersistentArray_toArray___redArg(v_traces_5102_);
lean_dec_ref(v_traces_5102_);
v_sz_5106_ = lean_array_size(v___x_5105_);
v___x_5107_ = ((size_t)0ULL);
v___x_5108_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14_spec__16(v_sz_5106_, v___x_5107_, v___x_5105_);
v_msg_5109_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_5109_, 0, v_data_5076_);
lean_ctor_set(v_msg_5109_, 1, v_msg_5078_);
lean_ctor_set(v_msg_5109_, 2, v___x_5108_);
v___x_5110_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7_spec__8(v_msg_5109_, v___y_5079_, v___y_5080_, v___x_5104_, v___y_5082_);
lean_dec_ref(v___x_5104_);
v_a_5111_ = lean_ctor_get(v___x_5110_, 0);
v_isSharedCheck_5148_ = !lean_is_exclusive(v___x_5110_);
if (v_isSharedCheck_5148_ == 0)
{
v___x_5113_ = v___x_5110_;
v_isShared_5114_ = v_isSharedCheck_5148_;
goto v_resetjp_5112_;
}
else
{
lean_inc(v_a_5111_);
lean_dec(v___x_5110_);
v___x_5113_ = lean_box(0);
v_isShared_5114_ = v_isSharedCheck_5148_;
goto v_resetjp_5112_;
}
v_resetjp_5112_:
{
lean_object* v___x_5115_; lean_object* v_traceState_5116_; lean_object* v_env_5117_; lean_object* v_nextMacroScope_5118_; lean_object* v_ngen_5119_; lean_object* v_auxDeclNGen_5120_; lean_object* v_cache_5121_; lean_object* v_messages_5122_; lean_object* v_infoState_5123_; lean_object* v_snapshotTasks_5124_; lean_object* v___x_5126_; uint8_t v_isShared_5127_; uint8_t v_isSharedCheck_5147_; 
v___x_5115_ = lean_st_ref_take(v___y_5082_);
v_traceState_5116_ = lean_ctor_get(v___x_5115_, 4);
v_env_5117_ = lean_ctor_get(v___x_5115_, 0);
v_nextMacroScope_5118_ = lean_ctor_get(v___x_5115_, 1);
v_ngen_5119_ = lean_ctor_get(v___x_5115_, 2);
v_auxDeclNGen_5120_ = lean_ctor_get(v___x_5115_, 3);
v_cache_5121_ = lean_ctor_get(v___x_5115_, 5);
v_messages_5122_ = lean_ctor_get(v___x_5115_, 6);
v_infoState_5123_ = lean_ctor_get(v___x_5115_, 7);
v_snapshotTasks_5124_ = lean_ctor_get(v___x_5115_, 8);
v_isSharedCheck_5147_ = !lean_is_exclusive(v___x_5115_);
if (v_isSharedCheck_5147_ == 0)
{
v___x_5126_ = v___x_5115_;
v_isShared_5127_ = v_isSharedCheck_5147_;
goto v_resetjp_5125_;
}
else
{
lean_inc(v_snapshotTasks_5124_);
lean_inc(v_infoState_5123_);
lean_inc(v_messages_5122_);
lean_inc(v_cache_5121_);
lean_inc(v_traceState_5116_);
lean_inc(v_auxDeclNGen_5120_);
lean_inc(v_ngen_5119_);
lean_inc(v_nextMacroScope_5118_);
lean_inc(v_env_5117_);
lean_dec(v___x_5115_);
v___x_5126_ = lean_box(0);
v_isShared_5127_ = v_isSharedCheck_5147_;
goto v_resetjp_5125_;
}
v_resetjp_5125_:
{
uint64_t v_tid_5128_; lean_object* v___x_5130_; uint8_t v_isShared_5131_; uint8_t v_isSharedCheck_5145_; 
v_tid_5128_ = lean_ctor_get_uint64(v_traceState_5116_, sizeof(void*)*1);
v_isSharedCheck_5145_ = !lean_is_exclusive(v_traceState_5116_);
if (v_isSharedCheck_5145_ == 0)
{
lean_object* v_unused_5146_; 
v_unused_5146_ = lean_ctor_get(v_traceState_5116_, 0);
lean_dec(v_unused_5146_);
v___x_5130_ = v_traceState_5116_;
v_isShared_5131_ = v_isSharedCheck_5145_;
goto v_resetjp_5129_;
}
else
{
lean_dec(v_traceState_5116_);
v___x_5130_ = lean_box(0);
v_isShared_5131_ = v_isSharedCheck_5145_;
goto v_resetjp_5129_;
}
v_resetjp_5129_:
{
lean_object* v___x_5132_; lean_object* v___x_5133_; lean_object* v___x_5135_; 
v___x_5132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5132_, 0, v_ref_5077_);
lean_ctor_set(v___x_5132_, 1, v_a_5111_);
v___x_5133_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_5075_, v___x_5132_);
if (v_isShared_5131_ == 0)
{
lean_ctor_set(v___x_5130_, 0, v___x_5133_);
v___x_5135_ = v___x_5130_;
goto v_reusejp_5134_;
}
else
{
lean_object* v_reuseFailAlloc_5144_; 
v_reuseFailAlloc_5144_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_5144_, 0, v___x_5133_);
lean_ctor_set_uint64(v_reuseFailAlloc_5144_, sizeof(void*)*1, v_tid_5128_);
v___x_5135_ = v_reuseFailAlloc_5144_;
goto v_reusejp_5134_;
}
v_reusejp_5134_:
{
lean_object* v___x_5137_; 
if (v_isShared_5127_ == 0)
{
lean_ctor_set(v___x_5126_, 4, v___x_5135_);
v___x_5137_ = v___x_5126_;
goto v_reusejp_5136_;
}
else
{
lean_object* v_reuseFailAlloc_5143_; 
v_reuseFailAlloc_5143_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5143_, 0, v_env_5117_);
lean_ctor_set(v_reuseFailAlloc_5143_, 1, v_nextMacroScope_5118_);
lean_ctor_set(v_reuseFailAlloc_5143_, 2, v_ngen_5119_);
lean_ctor_set(v_reuseFailAlloc_5143_, 3, v_auxDeclNGen_5120_);
lean_ctor_set(v_reuseFailAlloc_5143_, 4, v___x_5135_);
lean_ctor_set(v_reuseFailAlloc_5143_, 5, v_cache_5121_);
lean_ctor_set(v_reuseFailAlloc_5143_, 6, v_messages_5122_);
lean_ctor_set(v_reuseFailAlloc_5143_, 7, v_infoState_5123_);
lean_ctor_set(v_reuseFailAlloc_5143_, 8, v_snapshotTasks_5124_);
v___x_5137_ = v_reuseFailAlloc_5143_;
goto v_reusejp_5136_;
}
v_reusejp_5136_:
{
lean_object* v___x_5138_; lean_object* v___x_5139_; lean_object* v___x_5141_; 
v___x_5138_ = lean_st_ref_set(v___y_5082_, v___x_5137_);
v___x_5139_ = lean_box(0);
if (v_isShared_5114_ == 0)
{
lean_ctor_set(v___x_5113_, 0, v___x_5139_);
v___x_5141_ = v___x_5113_;
goto v_reusejp_5140_;
}
else
{
lean_object* v_reuseFailAlloc_5142_; 
v_reuseFailAlloc_5142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5142_, 0, v___x_5139_);
v___x_5141_ = v_reuseFailAlloc_5142_;
goto v_reusejp_5140_;
}
v_reusejp_5140_:
{
return v___x_5141_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__3___boxed(lean_object* v_oldTraces_5149_, lean_object* v_data_5150_, lean_object* v_ref_5151_, lean_object* v_msg_5152_, lean_object* v___y_5153_, lean_object* v___y_5154_, lean_object* v___y_5155_, lean_object* v___y_5156_, lean_object* v___y_5157_){
_start:
{
lean_object* v_res_5158_; 
v_res_5158_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__3(v_oldTraces_5149_, v_data_5150_, v_ref_5151_, v_msg_5152_, v___y_5153_, v___y_5154_, v___y_5155_, v___y_5156_);
lean_dec(v___y_5156_);
lean_dec_ref(v___y_5155_);
lean_dec(v___y_5154_);
lean_dec_ref(v___y_5153_);
return v_res_5158_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__4___redArg(lean_object* v_x_5159_){
_start:
{
if (lean_obj_tag(v_x_5159_) == 0)
{
lean_object* v_a_5161_; lean_object* v___x_5163_; uint8_t v_isShared_5164_; uint8_t v_isSharedCheck_5168_; 
v_a_5161_ = lean_ctor_get(v_x_5159_, 0);
v_isSharedCheck_5168_ = !lean_is_exclusive(v_x_5159_);
if (v_isSharedCheck_5168_ == 0)
{
v___x_5163_ = v_x_5159_;
v_isShared_5164_ = v_isSharedCheck_5168_;
goto v_resetjp_5162_;
}
else
{
lean_inc(v_a_5161_);
lean_dec(v_x_5159_);
v___x_5163_ = lean_box(0);
v_isShared_5164_ = v_isSharedCheck_5168_;
goto v_resetjp_5162_;
}
v_resetjp_5162_:
{
lean_object* v___x_5166_; 
if (v_isShared_5164_ == 0)
{
lean_ctor_set_tag(v___x_5163_, 1);
v___x_5166_ = v___x_5163_;
goto v_reusejp_5165_;
}
else
{
lean_object* v_reuseFailAlloc_5167_; 
v_reuseFailAlloc_5167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5167_, 0, v_a_5161_);
v___x_5166_ = v_reuseFailAlloc_5167_;
goto v_reusejp_5165_;
}
v_reusejp_5165_:
{
return v___x_5166_;
}
}
}
else
{
lean_object* v_a_5169_; lean_object* v___x_5171_; uint8_t v_isShared_5172_; uint8_t v_isSharedCheck_5176_; 
v_a_5169_ = lean_ctor_get(v_x_5159_, 0);
v_isSharedCheck_5176_ = !lean_is_exclusive(v_x_5159_);
if (v_isSharedCheck_5176_ == 0)
{
v___x_5171_ = v_x_5159_;
v_isShared_5172_ = v_isSharedCheck_5176_;
goto v_resetjp_5170_;
}
else
{
lean_inc(v_a_5169_);
lean_dec(v_x_5159_);
v___x_5171_ = lean_box(0);
v_isShared_5172_ = v_isSharedCheck_5176_;
goto v_resetjp_5170_;
}
v_resetjp_5170_:
{
lean_object* v___x_5174_; 
if (v_isShared_5172_ == 0)
{
lean_ctor_set_tag(v___x_5171_, 0);
v___x_5174_ = v___x_5171_;
goto v_reusejp_5173_;
}
else
{
lean_object* v_reuseFailAlloc_5175_; 
v_reuseFailAlloc_5175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5175_, 0, v_a_5169_);
v___x_5174_ = v_reuseFailAlloc_5175_;
goto v_reusejp_5173_;
}
v_reusejp_5173_:
{
return v___x_5174_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__4___redArg___boxed(lean_object* v_x_5177_, lean_object* v___y_5178_){
_start:
{
lean_object* v_res_5179_; 
v_res_5179_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__4___redArg(v_x_5177_);
return v_res_5179_;
}
}
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__2(lean_object* v_e_5180_){
_start:
{
if (lean_obj_tag(v_e_5180_) == 0)
{
uint8_t v___x_5181_; 
v___x_5181_ = 2;
return v___x_5181_;
}
else
{
uint8_t v___x_5182_; 
v___x_5182_ = 0;
return v___x_5182_;
}
}
}
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__2___boxed(lean_object* v_e_5183_){
_start:
{
uint8_t v_res_5184_; lean_object* v_r_5185_; 
v_res_5184_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__2(v_e_5183_);
lean_dec_ref(v_e_5183_);
v_r_5185_ = lean_box(v_res_5184_);
return v_r_5185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2(lean_object* v_cls_5186_, uint8_t v_collapsed_5187_, lean_object* v_tag_5188_, lean_object* v_opts_5189_, uint8_t v_clsEnabled_5190_, lean_object* v_oldTraces_5191_, lean_object* v_msg_5192_, lean_object* v_resStartStop_5193_, lean_object* v___y_5194_, lean_object* v___y_5195_, lean_object* v___y_5196_, lean_object* v___y_5197_){
_start:
{
lean_object* v_fst_5199_; lean_object* v_snd_5200_; lean_object* v___x_5202_; uint8_t v_isShared_5203_; uint8_t v_isSharedCheck_5298_; 
v_fst_5199_ = lean_ctor_get(v_resStartStop_5193_, 0);
v_snd_5200_ = lean_ctor_get(v_resStartStop_5193_, 1);
v_isSharedCheck_5298_ = !lean_is_exclusive(v_resStartStop_5193_);
if (v_isSharedCheck_5298_ == 0)
{
v___x_5202_ = v_resStartStop_5193_;
v_isShared_5203_ = v_isSharedCheck_5298_;
goto v_resetjp_5201_;
}
else
{
lean_inc(v_snd_5200_);
lean_inc(v_fst_5199_);
lean_dec(v_resStartStop_5193_);
v___x_5202_ = lean_box(0);
v_isShared_5203_ = v_isSharedCheck_5298_;
goto v_resetjp_5201_;
}
v_resetjp_5201_:
{
lean_object* v___y_5205_; lean_object* v___y_5206_; lean_object* v_data_5207_; lean_object* v_fst_5218_; lean_object* v_snd_5219_; lean_object* v___x_5221_; uint8_t v_isShared_5222_; uint8_t v_isSharedCheck_5297_; 
v_fst_5218_ = lean_ctor_get(v_snd_5200_, 0);
v_snd_5219_ = lean_ctor_get(v_snd_5200_, 1);
v_isSharedCheck_5297_ = !lean_is_exclusive(v_snd_5200_);
if (v_isSharedCheck_5297_ == 0)
{
v___x_5221_ = v_snd_5200_;
v_isShared_5222_ = v_isSharedCheck_5297_;
goto v_resetjp_5220_;
}
else
{
lean_inc(v_snd_5219_);
lean_inc(v_fst_5218_);
lean_dec(v_snd_5200_);
v___x_5221_ = lean_box(0);
v_isShared_5222_ = v_isSharedCheck_5297_;
goto v_resetjp_5220_;
}
v___jp_5204_:
{
lean_object* v___x_5208_; 
lean_inc(v___y_5206_);
v___x_5208_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__3(v_oldTraces_5191_, v_data_5207_, v___y_5206_, v___y_5205_, v___y_5194_, v___y_5195_, v___y_5196_, v___y_5197_);
if (lean_obj_tag(v___x_5208_) == 0)
{
lean_object* v___x_5209_; 
lean_dec_ref(v___x_5208_);
v___x_5209_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__4___redArg(v_fst_5199_);
return v___x_5209_;
}
else
{
lean_object* v_a_5210_; lean_object* v___x_5212_; uint8_t v_isShared_5213_; uint8_t v_isSharedCheck_5217_; 
lean_dec(v_fst_5199_);
v_a_5210_ = lean_ctor_get(v___x_5208_, 0);
v_isSharedCheck_5217_ = !lean_is_exclusive(v___x_5208_);
if (v_isSharedCheck_5217_ == 0)
{
v___x_5212_ = v___x_5208_;
v_isShared_5213_ = v_isSharedCheck_5217_;
goto v_resetjp_5211_;
}
else
{
lean_inc(v_a_5210_);
lean_dec(v___x_5208_);
v___x_5212_ = lean_box(0);
v_isShared_5213_ = v_isSharedCheck_5217_;
goto v_resetjp_5211_;
}
v_resetjp_5211_:
{
lean_object* v___x_5215_; 
if (v_isShared_5213_ == 0)
{
v___x_5215_ = v___x_5212_;
goto v_reusejp_5214_;
}
else
{
lean_object* v_reuseFailAlloc_5216_; 
v_reuseFailAlloc_5216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5216_, 0, v_a_5210_);
v___x_5215_ = v_reuseFailAlloc_5216_;
goto v_reusejp_5214_;
}
v_reusejp_5214_:
{
return v___x_5215_;
}
}
}
}
v_resetjp_5220_:
{
lean_object* v___x_5223_; uint8_t v___x_5224_; lean_object* v___y_5226_; lean_object* v_a_5227_; uint8_t v___y_5251_; double v___y_5282_; 
v___x_5223_ = l_Lean_trace_profiler;
v___x_5224_ = l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5(v_opts_5189_, v___x_5223_);
if (v___x_5224_ == 0)
{
v___y_5251_ = v___x_5224_;
goto v___jp_5250_;
}
else
{
lean_object* v___x_5287_; uint8_t v___x_5288_; 
v___x_5287_ = l_Lean_trace_profiler_useHeartbeats;
v___x_5288_ = l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5(v_opts_5189_, v___x_5287_);
if (v___x_5288_ == 0)
{
lean_object* v___x_5289_; lean_object* v___x_5290_; double v___x_5291_; double v___x_5292_; double v___x_5293_; 
v___x_5289_ = l_Lean_trace_profiler_threshold;
v___x_5290_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__16(v_opts_5189_, v___x_5289_);
v___x_5291_ = lean_float_of_nat(v___x_5290_);
v___x_5292_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__4, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__4_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__4);
v___x_5293_ = lean_float_div(v___x_5291_, v___x_5292_);
v___y_5282_ = v___x_5293_;
goto v___jp_5281_;
}
else
{
lean_object* v___x_5294_; lean_object* v___x_5295_; double v___x_5296_; 
v___x_5294_ = l_Lean_trace_profiler_threshold;
v___x_5295_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__16(v_opts_5189_, v___x_5294_);
v___x_5296_ = lean_float_of_nat(v___x_5295_);
v___y_5282_ = v___x_5296_;
goto v___jp_5281_;
}
}
v___jp_5225_:
{
uint8_t v_result_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; lean_object* v___x_5231_; lean_object* v___x_5233_; 
v_result_5228_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__2(v_fst_5199_);
v___x_5229_ = l_Lean_TraceResult_toEmoji(v_result_5228_);
v___x_5230_ = l_Lean_stringToMessageData(v___x_5229_);
v___x_5231_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__1);
if (v_isShared_5222_ == 0)
{
lean_ctor_set_tag(v___x_5221_, 7);
lean_ctor_set(v___x_5221_, 1, v___x_5231_);
lean_ctor_set(v___x_5221_, 0, v___x_5230_);
v___x_5233_ = v___x_5221_;
goto v_reusejp_5232_;
}
else
{
lean_object* v_reuseFailAlloc_5244_; 
v_reuseFailAlloc_5244_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5244_, 0, v___x_5230_);
lean_ctor_set(v_reuseFailAlloc_5244_, 1, v___x_5231_);
v___x_5233_ = v_reuseFailAlloc_5244_;
goto v_reusejp_5232_;
}
v_reusejp_5232_:
{
lean_object* v_m_5235_; 
if (v_isShared_5203_ == 0)
{
lean_ctor_set_tag(v___x_5202_, 7);
lean_ctor_set(v___x_5202_, 1, v_a_5227_);
lean_ctor_set(v___x_5202_, 0, v___x_5233_);
v_m_5235_ = v___x_5202_;
goto v_reusejp_5234_;
}
else
{
lean_object* v_reuseFailAlloc_5243_; 
v_reuseFailAlloc_5243_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5243_, 0, v___x_5233_);
lean_ctor_set(v_reuseFailAlloc_5243_, 1, v_a_5227_);
v_m_5235_ = v_reuseFailAlloc_5243_;
goto v_reusejp_5234_;
}
v_reusejp_5234_:
{
lean_object* v___x_5236_; lean_object* v___x_5237_; double v___x_5238_; lean_object* v_data_5239_; 
v___x_5236_ = lean_box(v_result_5228_);
v___x_5237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5237_, 0, v___x_5236_);
v___x_5238_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0);
lean_inc_ref(v_tag_5188_);
lean_inc_ref(v___x_5237_);
lean_inc(v_cls_5186_);
v_data_5239_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_5239_, 0, v_cls_5186_);
lean_ctor_set(v_data_5239_, 1, v___x_5237_);
lean_ctor_set(v_data_5239_, 2, v_tag_5188_);
lean_ctor_set_float(v_data_5239_, sizeof(void*)*3, v___x_5238_);
lean_ctor_set_float(v_data_5239_, sizeof(void*)*3 + 8, v___x_5238_);
lean_ctor_set_uint8(v_data_5239_, sizeof(void*)*3 + 16, v_collapsed_5187_);
if (v___x_5224_ == 0)
{
lean_dec_ref(v___x_5237_);
lean_dec(v_snd_5219_);
lean_dec(v_fst_5218_);
lean_dec_ref(v_tag_5188_);
lean_dec(v_cls_5186_);
v___y_5205_ = v_m_5235_;
v___y_5206_ = v___y_5226_;
v_data_5207_ = v_data_5239_;
goto v___jp_5204_;
}
else
{
lean_object* v_data_5240_; double v___x_5241_; double v___x_5242_; 
lean_dec_ref(v_data_5239_);
v_data_5240_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_5240_, 0, v_cls_5186_);
lean_ctor_set(v_data_5240_, 1, v___x_5237_);
lean_ctor_set(v_data_5240_, 2, v_tag_5188_);
v___x_5241_ = lean_unbox_float(v_fst_5218_);
lean_dec(v_fst_5218_);
lean_ctor_set_float(v_data_5240_, sizeof(void*)*3, v___x_5241_);
v___x_5242_ = lean_unbox_float(v_snd_5219_);
lean_dec(v_snd_5219_);
lean_ctor_set_float(v_data_5240_, sizeof(void*)*3 + 8, v___x_5242_);
lean_ctor_set_uint8(v_data_5240_, sizeof(void*)*3 + 16, v_collapsed_5187_);
v___y_5205_ = v_m_5235_;
v___y_5206_ = v___y_5226_;
v_data_5207_ = v_data_5240_;
goto v___jp_5204_;
}
}
}
}
v___jp_5245_:
{
lean_object* v_ref_5246_; lean_object* v___x_5247_; 
v_ref_5246_ = lean_ctor_get(v___y_5196_, 5);
lean_inc(v___y_5197_);
lean_inc_ref(v___y_5196_);
lean_inc(v___y_5195_);
lean_inc_ref(v___y_5194_);
lean_inc(v_fst_5199_);
v___x_5247_ = lean_apply_6(v_msg_5192_, v_fst_5199_, v___y_5194_, v___y_5195_, v___y_5196_, v___y_5197_, lean_box(0));
if (lean_obj_tag(v___x_5247_) == 0)
{
lean_object* v_a_5248_; 
v_a_5248_ = lean_ctor_get(v___x_5247_, 0);
lean_inc(v_a_5248_);
lean_dec_ref(v___x_5247_);
v___y_5226_ = v_ref_5246_;
v_a_5227_ = v_a_5248_;
goto v___jp_5225_;
}
else
{
lean_object* v___x_5249_; 
lean_dec_ref(v___x_5247_);
v___x_5249_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__3);
v___y_5226_ = v_ref_5246_;
v_a_5227_ = v___x_5249_;
goto v___jp_5225_;
}
}
v___jp_5250_:
{
if (v_clsEnabled_5190_ == 0)
{
if (v___y_5251_ == 0)
{
lean_object* v___x_5252_; lean_object* v_traceState_5253_; lean_object* v_env_5254_; lean_object* v_nextMacroScope_5255_; lean_object* v_ngen_5256_; lean_object* v_auxDeclNGen_5257_; lean_object* v_cache_5258_; lean_object* v_messages_5259_; lean_object* v_infoState_5260_; lean_object* v_snapshotTasks_5261_; lean_object* v___x_5263_; uint8_t v_isShared_5264_; uint8_t v_isSharedCheck_5280_; 
lean_del_object(v___x_5221_);
lean_dec(v_snd_5219_);
lean_dec(v_fst_5218_);
lean_del_object(v___x_5202_);
lean_dec_ref(v_msg_5192_);
lean_dec_ref(v_tag_5188_);
lean_dec(v_cls_5186_);
v___x_5252_ = lean_st_ref_take(v___y_5197_);
v_traceState_5253_ = lean_ctor_get(v___x_5252_, 4);
v_env_5254_ = lean_ctor_get(v___x_5252_, 0);
v_nextMacroScope_5255_ = lean_ctor_get(v___x_5252_, 1);
v_ngen_5256_ = lean_ctor_get(v___x_5252_, 2);
v_auxDeclNGen_5257_ = lean_ctor_get(v___x_5252_, 3);
v_cache_5258_ = lean_ctor_get(v___x_5252_, 5);
v_messages_5259_ = lean_ctor_get(v___x_5252_, 6);
v_infoState_5260_ = lean_ctor_get(v___x_5252_, 7);
v_snapshotTasks_5261_ = lean_ctor_get(v___x_5252_, 8);
v_isSharedCheck_5280_ = !lean_is_exclusive(v___x_5252_);
if (v_isSharedCheck_5280_ == 0)
{
v___x_5263_ = v___x_5252_;
v_isShared_5264_ = v_isSharedCheck_5280_;
goto v_resetjp_5262_;
}
else
{
lean_inc(v_snapshotTasks_5261_);
lean_inc(v_infoState_5260_);
lean_inc(v_messages_5259_);
lean_inc(v_cache_5258_);
lean_inc(v_traceState_5253_);
lean_inc(v_auxDeclNGen_5257_);
lean_inc(v_ngen_5256_);
lean_inc(v_nextMacroScope_5255_);
lean_inc(v_env_5254_);
lean_dec(v___x_5252_);
v___x_5263_ = lean_box(0);
v_isShared_5264_ = v_isSharedCheck_5280_;
goto v_resetjp_5262_;
}
v_resetjp_5262_:
{
uint64_t v_tid_5265_; lean_object* v_traces_5266_; lean_object* v___x_5268_; uint8_t v_isShared_5269_; uint8_t v_isSharedCheck_5279_; 
v_tid_5265_ = lean_ctor_get_uint64(v_traceState_5253_, sizeof(void*)*1);
v_traces_5266_ = lean_ctor_get(v_traceState_5253_, 0);
v_isSharedCheck_5279_ = !lean_is_exclusive(v_traceState_5253_);
if (v_isSharedCheck_5279_ == 0)
{
v___x_5268_ = v_traceState_5253_;
v_isShared_5269_ = v_isSharedCheck_5279_;
goto v_resetjp_5267_;
}
else
{
lean_inc(v_traces_5266_);
lean_dec(v_traceState_5253_);
v___x_5268_ = lean_box(0);
v_isShared_5269_ = v_isSharedCheck_5279_;
goto v_resetjp_5267_;
}
v_resetjp_5267_:
{
lean_object* v___x_5270_; lean_object* v___x_5272_; 
v___x_5270_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_5191_, v_traces_5266_);
lean_dec_ref(v_traces_5266_);
if (v_isShared_5269_ == 0)
{
lean_ctor_set(v___x_5268_, 0, v___x_5270_);
v___x_5272_ = v___x_5268_;
goto v_reusejp_5271_;
}
else
{
lean_object* v_reuseFailAlloc_5278_; 
v_reuseFailAlloc_5278_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_5278_, 0, v___x_5270_);
lean_ctor_set_uint64(v_reuseFailAlloc_5278_, sizeof(void*)*1, v_tid_5265_);
v___x_5272_ = v_reuseFailAlloc_5278_;
goto v_reusejp_5271_;
}
v_reusejp_5271_:
{
lean_object* v___x_5274_; 
if (v_isShared_5264_ == 0)
{
lean_ctor_set(v___x_5263_, 4, v___x_5272_);
v___x_5274_ = v___x_5263_;
goto v_reusejp_5273_;
}
else
{
lean_object* v_reuseFailAlloc_5277_; 
v_reuseFailAlloc_5277_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5277_, 0, v_env_5254_);
lean_ctor_set(v_reuseFailAlloc_5277_, 1, v_nextMacroScope_5255_);
lean_ctor_set(v_reuseFailAlloc_5277_, 2, v_ngen_5256_);
lean_ctor_set(v_reuseFailAlloc_5277_, 3, v_auxDeclNGen_5257_);
lean_ctor_set(v_reuseFailAlloc_5277_, 4, v___x_5272_);
lean_ctor_set(v_reuseFailAlloc_5277_, 5, v_cache_5258_);
lean_ctor_set(v_reuseFailAlloc_5277_, 6, v_messages_5259_);
lean_ctor_set(v_reuseFailAlloc_5277_, 7, v_infoState_5260_);
lean_ctor_set(v_reuseFailAlloc_5277_, 8, v_snapshotTasks_5261_);
v___x_5274_ = v_reuseFailAlloc_5277_;
goto v_reusejp_5273_;
}
v_reusejp_5273_:
{
lean_object* v___x_5275_; lean_object* v___x_5276_; 
v___x_5275_ = lean_st_ref_set(v___y_5197_, v___x_5274_);
v___x_5276_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__4___redArg(v_fst_5199_);
return v___x_5276_;
}
}
}
}
}
else
{
goto v___jp_5245_;
}
}
else
{
goto v___jp_5245_;
}
}
v___jp_5281_:
{
double v___x_5283_; double v___x_5284_; double v___x_5285_; uint8_t v___x_5286_; 
v___x_5283_ = lean_unbox_float(v_snd_5219_);
v___x_5284_ = lean_unbox_float(v_fst_5218_);
v___x_5285_ = lean_float_sub(v___x_5283_, v___x_5284_);
v___x_5286_ = lean_float_decLt(v___y_5282_, v___x_5285_);
v___y_5251_ = v___x_5286_;
goto v___jp_5250_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2___boxed(lean_object* v_cls_5299_, lean_object* v_collapsed_5300_, lean_object* v_tag_5301_, lean_object* v_opts_5302_, lean_object* v_clsEnabled_5303_, lean_object* v_oldTraces_5304_, lean_object* v_msg_5305_, lean_object* v_resStartStop_5306_, lean_object* v___y_5307_, lean_object* v___y_5308_, lean_object* v___y_5309_, lean_object* v___y_5310_, lean_object* v___y_5311_){
_start:
{
uint8_t v_collapsed_boxed_5312_; uint8_t v_clsEnabled_boxed_5313_; lean_object* v_res_5314_; 
v_collapsed_boxed_5312_ = lean_unbox(v_collapsed_5300_);
v_clsEnabled_boxed_5313_ = lean_unbox(v_clsEnabled_5303_);
v_res_5314_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2(v_cls_5299_, v_collapsed_boxed_5312_, v_tag_5301_, v_opts_5302_, v_clsEnabled_boxed_5313_, v_oldTraces_5304_, v_msg_5305_, v_resStartStop_5306_, v___y_5307_, v___y_5308_, v___y_5309_, v___y_5310_);
lean_dec(v___y_5310_);
lean_dec_ref(v___y_5309_);
lean_dec(v___y_5308_);
lean_dec_ref(v___y_5307_);
lean_dec_ref(v_opts_5302_);
return v_res_5314_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__0(void){
_start:
{
lean_object* v___x_5315_; lean_object* v___x_5316_; lean_object* v_cls_5317_; 
v___x_5315_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__1, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__1_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__1);
v___x_5316_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0);
v_cls_5317_ = l_Lean_Name_mkStr2(v___x_5316_, v___x_5315_);
return v_cls_5317_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__1(void){
_start:
{
lean_object* v___f_5318_; 
v___f_5318_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__4___boxed), 6, 0);
return v___f_5318_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__2(void){
_start:
{
lean_object* v_cls_5319_; lean_object* v___x_5320_; lean_object* v___x_5321_; 
v_cls_5319_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__0);
v___x_5320_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__5, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__5_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__5);
v___x_5321_ = l_Lean_Name_append(v___x_5320_, v_cls_5319_);
return v___x_5321_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main(lean_object* v_e_5322_, lean_object* v_a_5323_, lean_object* v_a_5324_, lean_object* v_a_5325_, lean_object* v_a_5326_){
_start:
{
lean_object* v___y_5329_; lean_object* v_options_5347_; lean_object* v_inheritedTraceOptions_5348_; uint8_t v_hasTrace_5349_; lean_object* v_cls_5350_; uint8_t v___x_5351_; uint8_t v___x_5352_; 
v_options_5347_ = lean_ctor_get(v_a_5325_, 2);
v_inheritedTraceOptions_5348_ = lean_ctor_get(v_a_5325_, 13);
v_hasTrace_5349_ = lean_ctor_get_uint8(v_options_5347_, sizeof(void*)*1);
v_cls_5350_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__0);
v___x_5351_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet(v_e_5322_);
v___x_5352_ = 1;
if (v_hasTrace_5349_ == 0)
{
lean_object* v___x_5353_; 
v___x_5353_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3(v___x_5351_, v_e_5322_, v___x_5352_, v_cls_5350_, v_a_5323_, v_a_5324_, v_a_5325_, v_a_5326_);
v___y_5329_ = v___x_5353_;
goto v___jp_5328_;
}
else
{
lean_object* v___f_5354_; lean_object* v___x_5355_; lean_object* v___x_5356_; uint8_t v___x_5357_; lean_object* v___y_5359_; lean_object* v___y_5360_; lean_object* v_a_5361_; lean_object* v___y_5375_; lean_object* v___y_5376_; lean_object* v_a_5377_; 
v___f_5354_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__1, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__1_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__1);
v___x_5355_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__1, &l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__1_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__1);
v___x_5356_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__2, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__2_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__2);
v___x_5357_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5348_, v_options_5347_, v___x_5356_);
if (v___x_5357_ == 0)
{
lean_object* v___x_5430_; uint8_t v___x_5431_; 
v___x_5430_ = l_Lean_trace_profiler;
v___x_5431_ = l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5(v_options_5347_, v___x_5430_);
if (v___x_5431_ == 0)
{
lean_object* v___x_5432_; 
v___x_5432_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3(v___x_5351_, v_e_5322_, v___x_5352_, v_cls_5350_, v_a_5323_, v_a_5324_, v_a_5325_, v_a_5326_);
v___y_5329_ = v___x_5432_;
goto v___jp_5328_;
}
else
{
goto v___jp_5387_;
}
}
else
{
goto v___jp_5387_;
}
v___jp_5358_:
{
lean_object* v___x_5362_; lean_object* v___x_5363_; double v___x_5364_; double v___x_5365_; double v___x_5366_; double v___x_5367_; double v___x_5368_; lean_object* v___x_5369_; lean_object* v___x_5370_; lean_object* v___x_5371_; lean_object* v___x_5372_; lean_object* v___x_5373_; 
v___x_5362_ = lean_st_ref_get(v_a_5326_);
lean_dec(v___x_5362_);
v___x_5363_ = lean_io_mono_nanos_now();
v___x_5364_ = lean_float_of_nat(v___y_5359_);
v___x_5365_ = lean_float_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___closed__0);
v___x_5366_ = lean_float_div(v___x_5364_, v___x_5365_);
v___x_5367_ = lean_float_of_nat(v___x_5363_);
v___x_5368_ = lean_float_div(v___x_5367_, v___x_5365_);
v___x_5369_ = lean_box_float(v___x_5366_);
v___x_5370_ = lean_box_float(v___x_5368_);
v___x_5371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5371_, 0, v___x_5369_);
lean_ctor_set(v___x_5371_, 1, v___x_5370_);
v___x_5372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5372_, 0, v_a_5361_);
lean_ctor_set(v___x_5372_, 1, v___x_5371_);
v___x_5373_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2(v_cls_5350_, v___x_5352_, v___x_5355_, v_options_5347_, v___x_5357_, v___y_5360_, v___f_5354_, v___x_5372_, v_a_5323_, v_a_5324_, v_a_5325_, v_a_5326_);
v___y_5329_ = v___x_5373_;
goto v___jp_5328_;
}
v___jp_5374_:
{
lean_object* v___x_5378_; lean_object* v___x_5379_; double v___x_5380_; double v___x_5381_; lean_object* v___x_5382_; lean_object* v___x_5383_; lean_object* v___x_5384_; lean_object* v___x_5385_; lean_object* v___x_5386_; 
v___x_5378_ = lean_st_ref_get(v_a_5326_);
lean_dec(v___x_5378_);
v___x_5379_ = lean_io_get_num_heartbeats();
v___x_5380_ = lean_float_of_nat(v___y_5375_);
v___x_5381_ = lean_float_of_nat(v___x_5379_);
v___x_5382_ = lean_box_float(v___x_5380_);
v___x_5383_ = lean_box_float(v___x_5381_);
v___x_5384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5384_, 0, v___x_5382_);
lean_ctor_set(v___x_5384_, 1, v___x_5383_);
v___x_5385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5385_, 0, v_a_5377_);
lean_ctor_set(v___x_5385_, 1, v___x_5384_);
v___x_5386_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2(v_cls_5350_, v___x_5352_, v___x_5355_, v_options_5347_, v___x_5357_, v___y_5376_, v___f_5354_, v___x_5385_, v_a_5323_, v_a_5324_, v_a_5325_, v_a_5326_);
v___y_5329_ = v___x_5386_;
goto v___jp_5328_;
}
v___jp_5387_:
{
lean_object* v___x_5388_; lean_object* v_a_5389_; lean_object* v___x_5390_; uint8_t v___x_5391_; 
v___x_5388_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1___redArg(v_a_5326_);
v_a_5389_ = lean_ctor_get(v___x_5388_, 0);
lean_inc(v_a_5389_);
lean_dec_ref(v___x_5388_);
v___x_5390_ = l_Lean_trace_profiler_useHeartbeats;
v___x_5391_ = l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5(v_options_5347_, v___x_5390_);
if (v___x_5391_ == 0)
{
lean_object* v___x_5392_; lean_object* v___x_5393_; lean_object* v___x_5394_; 
v___x_5392_ = lean_st_ref_get(v_a_5326_);
lean_dec(v___x_5392_);
v___x_5393_ = lean_io_mono_nanos_now();
v___x_5394_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3(v___x_5351_, v_e_5322_, v___x_5352_, v_cls_5350_, v_a_5323_, v_a_5324_, v_a_5325_, v_a_5326_);
if (lean_obj_tag(v___x_5394_) == 0)
{
lean_object* v_a_5395_; lean_object* v___x_5397_; uint8_t v_isShared_5398_; uint8_t v_isSharedCheck_5402_; 
v_a_5395_ = lean_ctor_get(v___x_5394_, 0);
v_isSharedCheck_5402_ = !lean_is_exclusive(v___x_5394_);
if (v_isSharedCheck_5402_ == 0)
{
v___x_5397_ = v___x_5394_;
v_isShared_5398_ = v_isSharedCheck_5402_;
goto v_resetjp_5396_;
}
else
{
lean_inc(v_a_5395_);
lean_dec(v___x_5394_);
v___x_5397_ = lean_box(0);
v_isShared_5398_ = v_isSharedCheck_5402_;
goto v_resetjp_5396_;
}
v_resetjp_5396_:
{
lean_object* v___x_5400_; 
if (v_isShared_5398_ == 0)
{
lean_ctor_set_tag(v___x_5397_, 1);
v___x_5400_ = v___x_5397_;
goto v_reusejp_5399_;
}
else
{
lean_object* v_reuseFailAlloc_5401_; 
v_reuseFailAlloc_5401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5401_, 0, v_a_5395_);
v___x_5400_ = v_reuseFailAlloc_5401_;
goto v_reusejp_5399_;
}
v_reusejp_5399_:
{
v___y_5359_ = v___x_5393_;
v___y_5360_ = v_a_5389_;
v_a_5361_ = v___x_5400_;
goto v___jp_5358_;
}
}
}
else
{
lean_object* v_a_5403_; lean_object* v___x_5405_; uint8_t v_isShared_5406_; uint8_t v_isSharedCheck_5410_; 
v_a_5403_ = lean_ctor_get(v___x_5394_, 0);
v_isSharedCheck_5410_ = !lean_is_exclusive(v___x_5394_);
if (v_isSharedCheck_5410_ == 0)
{
v___x_5405_ = v___x_5394_;
v_isShared_5406_ = v_isSharedCheck_5410_;
goto v_resetjp_5404_;
}
else
{
lean_inc(v_a_5403_);
lean_dec(v___x_5394_);
v___x_5405_ = lean_box(0);
v_isShared_5406_ = v_isSharedCheck_5410_;
goto v_resetjp_5404_;
}
v_resetjp_5404_:
{
lean_object* v___x_5408_; 
if (v_isShared_5406_ == 0)
{
lean_ctor_set_tag(v___x_5405_, 0);
v___x_5408_ = v___x_5405_;
goto v_reusejp_5407_;
}
else
{
lean_object* v_reuseFailAlloc_5409_; 
v_reuseFailAlloc_5409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5409_, 0, v_a_5403_);
v___x_5408_ = v_reuseFailAlloc_5409_;
goto v_reusejp_5407_;
}
v_reusejp_5407_:
{
v___y_5359_ = v___x_5393_;
v___y_5360_ = v_a_5389_;
v_a_5361_ = v___x_5408_;
goto v___jp_5358_;
}
}
}
}
else
{
lean_object* v___x_5411_; lean_object* v___x_5412_; lean_object* v___x_5413_; 
v___x_5411_ = lean_st_ref_get(v_a_5326_);
lean_dec(v___x_5411_);
v___x_5412_ = lean_io_get_num_heartbeats();
v___x_5413_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3(v___x_5351_, v_e_5322_, v___x_5352_, v_cls_5350_, v_a_5323_, v_a_5324_, v_a_5325_, v_a_5326_);
if (lean_obj_tag(v___x_5413_) == 0)
{
lean_object* v_a_5414_; lean_object* v___x_5416_; uint8_t v_isShared_5417_; uint8_t v_isSharedCheck_5421_; 
v_a_5414_ = lean_ctor_get(v___x_5413_, 0);
v_isSharedCheck_5421_ = !lean_is_exclusive(v___x_5413_);
if (v_isSharedCheck_5421_ == 0)
{
v___x_5416_ = v___x_5413_;
v_isShared_5417_ = v_isSharedCheck_5421_;
goto v_resetjp_5415_;
}
else
{
lean_inc(v_a_5414_);
lean_dec(v___x_5413_);
v___x_5416_ = lean_box(0);
v_isShared_5417_ = v_isSharedCheck_5421_;
goto v_resetjp_5415_;
}
v_resetjp_5415_:
{
lean_object* v___x_5419_; 
if (v_isShared_5417_ == 0)
{
lean_ctor_set_tag(v___x_5416_, 1);
v___x_5419_ = v___x_5416_;
goto v_reusejp_5418_;
}
else
{
lean_object* v_reuseFailAlloc_5420_; 
v_reuseFailAlloc_5420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5420_, 0, v_a_5414_);
v___x_5419_ = v_reuseFailAlloc_5420_;
goto v_reusejp_5418_;
}
v_reusejp_5418_:
{
v___y_5375_ = v___x_5412_;
v___y_5376_ = v_a_5389_;
v_a_5377_ = v___x_5419_;
goto v___jp_5374_;
}
}
}
else
{
lean_object* v_a_5422_; lean_object* v___x_5424_; uint8_t v_isShared_5425_; uint8_t v_isSharedCheck_5429_; 
v_a_5422_ = lean_ctor_get(v___x_5413_, 0);
v_isSharedCheck_5429_ = !lean_is_exclusive(v___x_5413_);
if (v_isSharedCheck_5429_ == 0)
{
v___x_5424_ = v___x_5413_;
v_isShared_5425_ = v_isSharedCheck_5429_;
goto v_resetjp_5423_;
}
else
{
lean_inc(v_a_5422_);
lean_dec(v___x_5413_);
v___x_5424_ = lean_box(0);
v_isShared_5425_ = v_isSharedCheck_5429_;
goto v_resetjp_5423_;
}
v_resetjp_5423_:
{
lean_object* v___x_5427_; 
if (v_isShared_5425_ == 0)
{
lean_ctor_set_tag(v___x_5424_, 0);
v___x_5427_ = v___x_5424_;
goto v_reusejp_5426_;
}
else
{
lean_object* v_reuseFailAlloc_5428_; 
v_reuseFailAlloc_5428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5428_, 0, v_a_5422_);
v___x_5427_ = v_reuseFailAlloc_5428_;
goto v_reusejp_5426_;
}
v_reusejp_5426_:
{
v___y_5375_ = v___x_5412_;
v___y_5376_ = v_a_5389_;
v_a_5377_ = v___x_5427_;
goto v___jp_5374_;
}
}
}
}
}
}
v___jp_5328_:
{
if (lean_obj_tag(v___y_5329_) == 0)
{
lean_object* v_a_5330_; lean_object* v___x_5332_; uint8_t v_isShared_5333_; uint8_t v_isSharedCheck_5338_; 
v_a_5330_ = lean_ctor_get(v___y_5329_, 0);
v_isSharedCheck_5338_ = !lean_is_exclusive(v___y_5329_);
if (v_isSharedCheck_5338_ == 0)
{
v___x_5332_ = v___y_5329_;
v_isShared_5333_ = v_isSharedCheck_5338_;
goto v_resetjp_5331_;
}
else
{
lean_inc(v_a_5330_);
lean_dec(v___y_5329_);
v___x_5332_ = lean_box(0);
v_isShared_5333_ = v_isSharedCheck_5338_;
goto v_resetjp_5331_;
}
v_resetjp_5331_:
{
lean_object* v_fst_5334_; lean_object* v___x_5336_; 
v_fst_5334_ = lean_ctor_get(v_a_5330_, 0);
lean_inc(v_fst_5334_);
lean_dec(v_a_5330_);
if (v_isShared_5333_ == 0)
{
lean_ctor_set(v___x_5332_, 0, v_fst_5334_);
v___x_5336_ = v___x_5332_;
goto v_reusejp_5335_;
}
else
{
lean_object* v_reuseFailAlloc_5337_; 
v_reuseFailAlloc_5337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5337_, 0, v_fst_5334_);
v___x_5336_ = v_reuseFailAlloc_5337_;
goto v_reusejp_5335_;
}
v_reusejp_5335_:
{
return v___x_5336_;
}
}
}
else
{
lean_object* v_a_5339_; lean_object* v___x_5341_; uint8_t v_isShared_5342_; uint8_t v_isSharedCheck_5346_; 
v_a_5339_ = lean_ctor_get(v___y_5329_, 0);
v_isSharedCheck_5346_ = !lean_is_exclusive(v___y_5329_);
if (v_isSharedCheck_5346_ == 0)
{
v___x_5341_ = v___y_5329_;
v_isShared_5342_ = v_isSharedCheck_5346_;
goto v_resetjp_5340_;
}
else
{
lean_inc(v_a_5339_);
lean_dec(v___y_5329_);
v___x_5341_ = lean_box(0);
v_isShared_5342_ = v_isSharedCheck_5346_;
goto v_resetjp_5340_;
}
v_resetjp_5340_:
{
lean_object* v___x_5344_; 
if (v_isShared_5342_ == 0)
{
v___x_5344_ = v___x_5341_;
goto v_reusejp_5343_;
}
else
{
lean_object* v_reuseFailAlloc_5345_; 
v_reuseFailAlloc_5345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5345_, 0, v_a_5339_);
v___x_5344_ = v_reuseFailAlloc_5345_;
goto v_reusejp_5343_;
}
v_reusejp_5343_:
{
return v___x_5344_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___boxed(lean_object* v_e_5433_, lean_object* v_a_5434_, lean_object* v_a_5435_, lean_object* v_a_5436_, lean_object* v_a_5437_, lean_object* v_a_5438_){
_start:
{
lean_object* v_res_5439_; 
v_res_5439_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main(v_e_5433_, v_a_5434_, v_a_5435_, v_a_5436_, v_a_5437_);
lean_dec(v_a_5437_);
lean_dec_ref(v_a_5436_);
lean_dec(v_a_5435_);
lean_dec_ref(v_a_5434_);
return v_res_5439_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__4(lean_object* v_00_u03b1_5440_, lean_object* v_x_5441_, lean_object* v___y_5442_, lean_object* v___y_5443_, lean_object* v___y_5444_, lean_object* v___y_5445_){
_start:
{
lean_object* v___x_5447_; 
v___x_5447_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__4___redArg(v_x_5441_);
return v___x_5447_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__4___boxed(lean_object* v_00_u03b1_5448_, lean_object* v_x_5449_, lean_object* v___y_5450_, lean_object* v___y_5451_, lean_object* v___y_5452_, lean_object* v___y_5453_, lean_object* v___y_5454_){
_start:
{
lean_object* v_res_5455_; 
v_res_5455_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__4(v_00_u03b1_5448_, v_x_5449_, v___y_5450_, v___y_5451_, v___y_5452_, v___y_5453_);
lean_dec(v___y_5453_);
lean_dec_ref(v___y_5452_);
lean_dec(v___y_5451_);
lean_dec_ref(v___y_5450_);
return v_res_5455_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0___redArg(lean_object* v_e_5456_, lean_object* v___y_5457_, lean_object* v___y_5458_){
_start:
{
uint8_t v___x_5460_; 
v___x_5460_ = l_Lean_Expr_hasMVar(v_e_5456_);
if (v___x_5460_ == 0)
{
lean_object* v___x_5461_; 
v___x_5461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5461_, 0, v_e_5456_);
return v___x_5461_;
}
else
{
lean_object* v___x_5462_; lean_object* v___x_5463_; lean_object* v_mctx_5464_; lean_object* v___x_5465_; lean_object* v_fst_5466_; lean_object* v_snd_5467_; lean_object* v___x_5468_; lean_object* v___x_5469_; lean_object* v_cache_5470_; lean_object* v_zetaDeltaFVarIds_5471_; lean_object* v_postponed_5472_; lean_object* v_diag_5473_; lean_object* v___x_5475_; uint8_t v_isShared_5476_; uint8_t v_isSharedCheck_5482_; 
v___x_5462_ = lean_st_ref_get(v___y_5458_);
lean_dec(v___x_5462_);
v___x_5463_ = lean_st_ref_get(v___y_5457_);
v_mctx_5464_ = lean_ctor_get(v___x_5463_, 0);
lean_inc_ref(v_mctx_5464_);
lean_dec(v___x_5463_);
v___x_5465_ = l_Lean_instantiateMVarsCore(v_mctx_5464_, v_e_5456_);
v_fst_5466_ = lean_ctor_get(v___x_5465_, 0);
lean_inc(v_fst_5466_);
v_snd_5467_ = lean_ctor_get(v___x_5465_, 1);
lean_inc(v_snd_5467_);
lean_dec_ref(v___x_5465_);
v___x_5468_ = lean_st_ref_get(v___y_5458_);
lean_dec(v___x_5468_);
v___x_5469_ = lean_st_ref_take(v___y_5457_);
v_cache_5470_ = lean_ctor_get(v___x_5469_, 1);
v_zetaDeltaFVarIds_5471_ = lean_ctor_get(v___x_5469_, 2);
v_postponed_5472_ = lean_ctor_get(v___x_5469_, 3);
v_diag_5473_ = lean_ctor_get(v___x_5469_, 4);
v_isSharedCheck_5482_ = !lean_is_exclusive(v___x_5469_);
if (v_isSharedCheck_5482_ == 0)
{
lean_object* v_unused_5483_; 
v_unused_5483_ = lean_ctor_get(v___x_5469_, 0);
lean_dec(v_unused_5483_);
v___x_5475_ = v___x_5469_;
v_isShared_5476_ = v_isSharedCheck_5482_;
goto v_resetjp_5474_;
}
else
{
lean_inc(v_diag_5473_);
lean_inc(v_postponed_5472_);
lean_inc(v_zetaDeltaFVarIds_5471_);
lean_inc(v_cache_5470_);
lean_dec(v___x_5469_);
v___x_5475_ = lean_box(0);
v_isShared_5476_ = v_isSharedCheck_5482_;
goto v_resetjp_5474_;
}
v_resetjp_5474_:
{
lean_object* v___x_5478_; 
if (v_isShared_5476_ == 0)
{
lean_ctor_set(v___x_5475_, 0, v_snd_5467_);
v___x_5478_ = v___x_5475_;
goto v_reusejp_5477_;
}
else
{
lean_object* v_reuseFailAlloc_5481_; 
v_reuseFailAlloc_5481_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5481_, 0, v_snd_5467_);
lean_ctor_set(v_reuseFailAlloc_5481_, 1, v_cache_5470_);
lean_ctor_set(v_reuseFailAlloc_5481_, 2, v_zetaDeltaFVarIds_5471_);
lean_ctor_set(v_reuseFailAlloc_5481_, 3, v_postponed_5472_);
lean_ctor_set(v_reuseFailAlloc_5481_, 4, v_diag_5473_);
v___x_5478_ = v_reuseFailAlloc_5481_;
goto v_reusejp_5477_;
}
v_reusejp_5477_:
{
lean_object* v___x_5479_; lean_object* v___x_5480_; 
v___x_5479_ = lean_st_ref_set(v___y_5457_, v___x_5478_);
v___x_5480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5480_, 0, v_fst_5466_);
return v___x_5480_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0___redArg___boxed(lean_object* v_e_5484_, lean_object* v___y_5485_, lean_object* v___y_5486_, lean_object* v___y_5487_){
_start:
{
lean_object* v_res_5488_; 
v_res_5488_ = l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0___redArg(v_e_5484_, v___y_5485_, v___y_5486_);
lean_dec(v___y_5486_);
lean_dec(v___y_5485_);
return v_res_5488_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0(lean_object* v_e_5489_, lean_object* v___y_5490_, lean_object* v___y_5491_, lean_object* v___y_5492_, lean_object* v___y_5493_){
_start:
{
lean_object* v___x_5495_; 
v___x_5495_ = l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0___redArg(v_e_5489_, v___y_5491_, v___y_5493_);
return v___x_5495_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0___boxed(lean_object* v_e_5496_, lean_object* v___y_5497_, lean_object* v___y_5498_, lean_object* v___y_5499_, lean_object* v___y_5500_, lean_object* v___y_5501_){
_start:
{
lean_object* v_res_5502_; 
v_res_5502_ = l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0(v_e_5496_, v___y_5497_, v___y_5498_, v___y_5499_, v___y_5500_);
lean_dec(v___y_5500_);
lean_dec_ref(v___y_5499_);
lean_dec(v___y_5498_);
lean_dec_ref(v___y_5497_);
return v_res_5502_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2___redArg(lean_object* v_category_5503_, lean_object* v_opts_5504_, lean_object* v_act_5505_, lean_object* v_decl_5506_, lean_object* v___y_5507_, lean_object* v___y_5508_, lean_object* v___y_5509_, lean_object* v___y_5510_){
_start:
{
lean_object* v___x_5512_; lean_object* v___x_5513_; 
lean_inc(v___y_5510_);
lean_inc_ref(v___y_5509_);
lean_inc(v___y_5508_);
lean_inc_ref(v___y_5507_);
v___x_5512_ = lean_apply_4(v_act_5505_, v___y_5507_, v___y_5508_, v___y_5509_, v___y_5510_);
v___x_5513_ = l_Lean_profileitIOUnsafe___redArg(v_category_5503_, v_opts_5504_, v___x_5512_, v_decl_5506_);
return v___x_5513_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2___redArg___boxed(lean_object* v_category_5514_, lean_object* v_opts_5515_, lean_object* v_act_5516_, lean_object* v_decl_5517_, lean_object* v___y_5518_, lean_object* v___y_5519_, lean_object* v___y_5520_, lean_object* v___y_5521_, lean_object* v___y_5522_){
_start:
{
lean_object* v_res_5523_; 
v_res_5523_ = l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2___redArg(v_category_5514_, v_opts_5515_, v_act_5516_, v_decl_5517_, v___y_5518_, v___y_5519_, v___y_5520_, v___y_5521_);
lean_dec(v___y_5521_);
lean_dec_ref(v___y_5520_);
lean_dec(v___y_5519_);
lean_dec_ref(v___y_5518_);
lean_dec_ref(v_opts_5515_);
lean_dec_ref(v_category_5514_);
return v_res_5523_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2(lean_object* v_00_u03b1_5524_, lean_object* v_category_5525_, lean_object* v_opts_5526_, lean_object* v_act_5527_, lean_object* v_decl_5528_, lean_object* v___y_5529_, lean_object* v___y_5530_, lean_object* v___y_5531_, lean_object* v___y_5532_){
_start:
{
lean_object* v___x_5534_; 
v___x_5534_ = l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2___redArg(v_category_5525_, v_opts_5526_, v_act_5527_, v_decl_5528_, v___y_5529_, v___y_5530_, v___y_5531_, v___y_5532_);
return v___x_5534_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2___boxed(lean_object* v_00_u03b1_5535_, lean_object* v_category_5536_, lean_object* v_opts_5537_, lean_object* v_act_5538_, lean_object* v_decl_5539_, lean_object* v___y_5540_, lean_object* v___y_5541_, lean_object* v___y_5542_, lean_object* v___y_5543_, lean_object* v___y_5544_){
_start:
{
lean_object* v_res_5545_; 
v_res_5545_ = l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2(v_00_u03b1_5535_, v_category_5536_, v_opts_5537_, v_act_5538_, v_decl_5539_, v___y_5540_, v___y_5541_, v___y_5542_, v___y_5543_);
lean_dec(v___y_5543_);
lean_dec_ref(v___y_5542_);
lean_dec(v___y_5541_);
lean_dec_ref(v___y_5540_);
lean_dec_ref(v_opts_5537_);
lean_dec_ref(v_category_5536_);
return v_res_5545_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___lam__0(lean_object* v___y_5546_, uint8_t v_isExporting_5547_, lean_object* v___x_5548_, lean_object* v___y_5549_, lean_object* v___x_5550_, lean_object* v_a_x3f_5551_){
_start:
{
lean_object* v___x_5553_; lean_object* v_env_5554_; lean_object* v_nextMacroScope_5555_; lean_object* v_ngen_5556_; lean_object* v_auxDeclNGen_5557_; lean_object* v_traceState_5558_; lean_object* v_messages_5559_; lean_object* v_infoState_5560_; lean_object* v_snapshotTasks_5561_; lean_object* v___x_5563_; uint8_t v_isShared_5564_; uint8_t v_isSharedCheck_5587_; 
v___x_5553_ = lean_st_ref_take(v___y_5546_);
v_env_5554_ = lean_ctor_get(v___x_5553_, 0);
v_nextMacroScope_5555_ = lean_ctor_get(v___x_5553_, 1);
v_ngen_5556_ = lean_ctor_get(v___x_5553_, 2);
v_auxDeclNGen_5557_ = lean_ctor_get(v___x_5553_, 3);
v_traceState_5558_ = lean_ctor_get(v___x_5553_, 4);
v_messages_5559_ = lean_ctor_get(v___x_5553_, 6);
v_infoState_5560_ = lean_ctor_get(v___x_5553_, 7);
v_snapshotTasks_5561_ = lean_ctor_get(v___x_5553_, 8);
v_isSharedCheck_5587_ = !lean_is_exclusive(v___x_5553_);
if (v_isSharedCheck_5587_ == 0)
{
lean_object* v_unused_5588_; 
v_unused_5588_ = lean_ctor_get(v___x_5553_, 5);
lean_dec(v_unused_5588_);
v___x_5563_ = v___x_5553_;
v_isShared_5564_ = v_isSharedCheck_5587_;
goto v_resetjp_5562_;
}
else
{
lean_inc(v_snapshotTasks_5561_);
lean_inc(v_infoState_5560_);
lean_inc(v_messages_5559_);
lean_inc(v_traceState_5558_);
lean_inc(v_auxDeclNGen_5557_);
lean_inc(v_ngen_5556_);
lean_inc(v_nextMacroScope_5555_);
lean_inc(v_env_5554_);
lean_dec(v___x_5553_);
v___x_5563_ = lean_box(0);
v_isShared_5564_ = v_isSharedCheck_5587_;
goto v_resetjp_5562_;
}
v_resetjp_5562_:
{
lean_object* v___x_5565_; lean_object* v___x_5567_; 
v___x_5565_ = l_Lean_Environment_setExporting(v_env_5554_, v_isExporting_5547_);
if (v_isShared_5564_ == 0)
{
lean_ctor_set(v___x_5563_, 5, v___x_5548_);
lean_ctor_set(v___x_5563_, 0, v___x_5565_);
v___x_5567_ = v___x_5563_;
goto v_reusejp_5566_;
}
else
{
lean_object* v_reuseFailAlloc_5586_; 
v_reuseFailAlloc_5586_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5586_, 0, v___x_5565_);
lean_ctor_set(v_reuseFailAlloc_5586_, 1, v_nextMacroScope_5555_);
lean_ctor_set(v_reuseFailAlloc_5586_, 2, v_ngen_5556_);
lean_ctor_set(v_reuseFailAlloc_5586_, 3, v_auxDeclNGen_5557_);
lean_ctor_set(v_reuseFailAlloc_5586_, 4, v_traceState_5558_);
lean_ctor_set(v_reuseFailAlloc_5586_, 5, v___x_5548_);
lean_ctor_set(v_reuseFailAlloc_5586_, 6, v_messages_5559_);
lean_ctor_set(v_reuseFailAlloc_5586_, 7, v_infoState_5560_);
lean_ctor_set(v_reuseFailAlloc_5586_, 8, v_snapshotTasks_5561_);
v___x_5567_ = v_reuseFailAlloc_5586_;
goto v_reusejp_5566_;
}
v_reusejp_5566_:
{
lean_object* v___x_5568_; lean_object* v___x_5569_; lean_object* v___x_5570_; lean_object* v_mctx_5571_; lean_object* v_zetaDeltaFVarIds_5572_; lean_object* v_postponed_5573_; lean_object* v_diag_5574_; lean_object* v___x_5576_; uint8_t v_isShared_5577_; uint8_t v_isSharedCheck_5584_; 
v___x_5568_ = lean_st_ref_set(v___y_5546_, v___x_5567_);
v___x_5569_ = lean_st_ref_get(v___y_5546_);
lean_dec(v___x_5569_);
v___x_5570_ = lean_st_ref_take(v___y_5549_);
v_mctx_5571_ = lean_ctor_get(v___x_5570_, 0);
v_zetaDeltaFVarIds_5572_ = lean_ctor_get(v___x_5570_, 2);
v_postponed_5573_ = lean_ctor_get(v___x_5570_, 3);
v_diag_5574_ = lean_ctor_get(v___x_5570_, 4);
v_isSharedCheck_5584_ = !lean_is_exclusive(v___x_5570_);
if (v_isSharedCheck_5584_ == 0)
{
lean_object* v_unused_5585_; 
v_unused_5585_ = lean_ctor_get(v___x_5570_, 1);
lean_dec(v_unused_5585_);
v___x_5576_ = v___x_5570_;
v_isShared_5577_ = v_isSharedCheck_5584_;
goto v_resetjp_5575_;
}
else
{
lean_inc(v_diag_5574_);
lean_inc(v_postponed_5573_);
lean_inc(v_zetaDeltaFVarIds_5572_);
lean_inc(v_mctx_5571_);
lean_dec(v___x_5570_);
v___x_5576_ = lean_box(0);
v_isShared_5577_ = v_isSharedCheck_5584_;
goto v_resetjp_5575_;
}
v_resetjp_5575_:
{
lean_object* v___x_5579_; 
if (v_isShared_5577_ == 0)
{
lean_ctor_set(v___x_5576_, 1, v___x_5550_);
v___x_5579_ = v___x_5576_;
goto v_reusejp_5578_;
}
else
{
lean_object* v_reuseFailAlloc_5583_; 
v_reuseFailAlloc_5583_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5583_, 0, v_mctx_5571_);
lean_ctor_set(v_reuseFailAlloc_5583_, 1, v___x_5550_);
lean_ctor_set(v_reuseFailAlloc_5583_, 2, v_zetaDeltaFVarIds_5572_);
lean_ctor_set(v_reuseFailAlloc_5583_, 3, v_postponed_5573_);
lean_ctor_set(v_reuseFailAlloc_5583_, 4, v_diag_5574_);
v___x_5579_ = v_reuseFailAlloc_5583_;
goto v_reusejp_5578_;
}
v_reusejp_5578_:
{
lean_object* v___x_5580_; lean_object* v___x_5581_; lean_object* v___x_5582_; 
v___x_5580_ = lean_st_ref_set(v___y_5549_, v___x_5579_);
v___x_5581_ = lean_box(0);
v___x_5582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5582_, 0, v___x_5581_);
return v___x_5582_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___lam__0___boxed(lean_object* v___y_5589_, lean_object* v_isExporting_5590_, lean_object* v___x_5591_, lean_object* v___y_5592_, lean_object* v___x_5593_, lean_object* v_a_x3f_5594_, lean_object* v___y_5595_){
_start:
{
uint8_t v_isExporting_boxed_5596_; lean_object* v_res_5597_; 
v_isExporting_boxed_5596_ = lean_unbox(v_isExporting_5590_);
v_res_5597_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___lam__0(v___y_5589_, v_isExporting_boxed_5596_, v___x_5591_, v___y_5592_, v___x_5593_, v_a_x3f_5594_);
lean_dec(v_a_x3f_5594_);
lean_dec(v___y_5592_);
lean_dec(v___y_5589_);
return v_res_5597_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_5598_; 
v___x_5598_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_5598_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_5599_; lean_object* v___x_5600_; 
v___x_5599_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__0);
v___x_5600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5600_, 0, v___x_5599_);
return v___x_5600_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_5601_; lean_object* v___x_5602_; 
v___x_5601_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__1);
v___x_5602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5602_, 0, v___x_5601_);
lean_ctor_set(v___x_5602_, 1, v___x_5601_);
return v___x_5602_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_5603_; lean_object* v___x_5604_; 
v___x_5603_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__1);
v___x_5604_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_5604_, 0, v___x_5603_);
lean_ctor_set(v___x_5604_, 1, v___x_5603_);
lean_ctor_set(v___x_5604_, 2, v___x_5603_);
lean_ctor_set(v___x_5604_, 3, v___x_5603_);
lean_ctor_set(v___x_5604_, 4, v___x_5603_);
lean_ctor_set(v___x_5604_, 5, v___x_5603_);
return v___x_5604_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg(lean_object* v_x_5605_, uint8_t v_isExporting_5606_, lean_object* v___y_5607_, lean_object* v___y_5608_, lean_object* v___y_5609_, lean_object* v___y_5610_){
_start:
{
lean_object* v___x_5612_; lean_object* v_env_5613_; uint8_t v_isExporting_5614_; lean_object* v___x_5615_; lean_object* v_env_5616_; lean_object* v_nextMacroScope_5617_; lean_object* v_ngen_5618_; lean_object* v_auxDeclNGen_5619_; lean_object* v_traceState_5620_; lean_object* v_messages_5621_; lean_object* v_infoState_5622_; lean_object* v_snapshotTasks_5623_; lean_object* v___x_5625_; uint8_t v_isShared_5626_; uint8_t v_isSharedCheck_5678_; 
v___x_5612_ = lean_st_ref_get(v___y_5610_);
v_env_5613_ = lean_ctor_get(v___x_5612_, 0);
lean_inc_ref(v_env_5613_);
lean_dec(v___x_5612_);
v_isExporting_5614_ = lean_ctor_get_uint8(v_env_5613_, sizeof(void*)*8);
lean_dec_ref(v_env_5613_);
v___x_5615_ = lean_st_ref_take(v___y_5610_);
v_env_5616_ = lean_ctor_get(v___x_5615_, 0);
v_nextMacroScope_5617_ = lean_ctor_get(v___x_5615_, 1);
v_ngen_5618_ = lean_ctor_get(v___x_5615_, 2);
v_auxDeclNGen_5619_ = lean_ctor_get(v___x_5615_, 3);
v_traceState_5620_ = lean_ctor_get(v___x_5615_, 4);
v_messages_5621_ = lean_ctor_get(v___x_5615_, 6);
v_infoState_5622_ = lean_ctor_get(v___x_5615_, 7);
v_snapshotTasks_5623_ = lean_ctor_get(v___x_5615_, 8);
v_isSharedCheck_5678_ = !lean_is_exclusive(v___x_5615_);
if (v_isSharedCheck_5678_ == 0)
{
lean_object* v_unused_5679_; 
v_unused_5679_ = lean_ctor_get(v___x_5615_, 5);
lean_dec(v_unused_5679_);
v___x_5625_ = v___x_5615_;
v_isShared_5626_ = v_isSharedCheck_5678_;
goto v_resetjp_5624_;
}
else
{
lean_inc(v_snapshotTasks_5623_);
lean_inc(v_infoState_5622_);
lean_inc(v_messages_5621_);
lean_inc(v_traceState_5620_);
lean_inc(v_auxDeclNGen_5619_);
lean_inc(v_ngen_5618_);
lean_inc(v_nextMacroScope_5617_);
lean_inc(v_env_5616_);
lean_dec(v___x_5615_);
v___x_5625_ = lean_box(0);
v_isShared_5626_ = v_isSharedCheck_5678_;
goto v_resetjp_5624_;
}
v_resetjp_5624_:
{
lean_object* v___x_5627_; lean_object* v___x_5628_; lean_object* v___x_5630_; 
v___x_5627_ = l_Lean_Environment_setExporting(v_env_5616_, v_isExporting_5606_);
v___x_5628_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__2);
if (v_isShared_5626_ == 0)
{
lean_ctor_set(v___x_5625_, 5, v___x_5628_);
lean_ctor_set(v___x_5625_, 0, v___x_5627_);
v___x_5630_ = v___x_5625_;
goto v_reusejp_5629_;
}
else
{
lean_object* v_reuseFailAlloc_5677_; 
v_reuseFailAlloc_5677_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5677_, 0, v___x_5627_);
lean_ctor_set(v_reuseFailAlloc_5677_, 1, v_nextMacroScope_5617_);
lean_ctor_set(v_reuseFailAlloc_5677_, 2, v_ngen_5618_);
lean_ctor_set(v_reuseFailAlloc_5677_, 3, v_auxDeclNGen_5619_);
lean_ctor_set(v_reuseFailAlloc_5677_, 4, v_traceState_5620_);
lean_ctor_set(v_reuseFailAlloc_5677_, 5, v___x_5628_);
lean_ctor_set(v_reuseFailAlloc_5677_, 6, v_messages_5621_);
lean_ctor_set(v_reuseFailAlloc_5677_, 7, v_infoState_5622_);
lean_ctor_set(v_reuseFailAlloc_5677_, 8, v_snapshotTasks_5623_);
v___x_5630_ = v_reuseFailAlloc_5677_;
goto v_reusejp_5629_;
}
v_reusejp_5629_:
{
lean_object* v___x_5631_; lean_object* v___x_5632_; lean_object* v___x_5633_; lean_object* v_mctx_5634_; lean_object* v_zetaDeltaFVarIds_5635_; lean_object* v_postponed_5636_; lean_object* v_diag_5637_; lean_object* v___x_5639_; uint8_t v_isShared_5640_; uint8_t v_isSharedCheck_5675_; 
v___x_5631_ = lean_st_ref_set(v___y_5610_, v___x_5630_);
v___x_5632_ = lean_st_ref_get(v___y_5610_);
lean_dec(v___x_5632_);
v___x_5633_ = lean_st_ref_take(v___y_5608_);
v_mctx_5634_ = lean_ctor_get(v___x_5633_, 0);
v_zetaDeltaFVarIds_5635_ = lean_ctor_get(v___x_5633_, 2);
v_postponed_5636_ = lean_ctor_get(v___x_5633_, 3);
v_diag_5637_ = lean_ctor_get(v___x_5633_, 4);
v_isSharedCheck_5675_ = !lean_is_exclusive(v___x_5633_);
if (v_isSharedCheck_5675_ == 0)
{
lean_object* v_unused_5676_; 
v_unused_5676_ = lean_ctor_get(v___x_5633_, 1);
lean_dec(v_unused_5676_);
v___x_5639_ = v___x_5633_;
v_isShared_5640_ = v_isSharedCheck_5675_;
goto v_resetjp_5638_;
}
else
{
lean_inc(v_diag_5637_);
lean_inc(v_postponed_5636_);
lean_inc(v_zetaDeltaFVarIds_5635_);
lean_inc(v_mctx_5634_);
lean_dec(v___x_5633_);
v___x_5639_ = lean_box(0);
v_isShared_5640_ = v_isSharedCheck_5675_;
goto v_resetjp_5638_;
}
v_resetjp_5638_:
{
lean_object* v___x_5641_; lean_object* v___x_5643_; 
v___x_5641_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__3, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__3);
if (v_isShared_5640_ == 0)
{
lean_ctor_set(v___x_5639_, 1, v___x_5641_);
v___x_5643_ = v___x_5639_;
goto v_reusejp_5642_;
}
else
{
lean_object* v_reuseFailAlloc_5674_; 
v_reuseFailAlloc_5674_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5674_, 0, v_mctx_5634_);
lean_ctor_set(v_reuseFailAlloc_5674_, 1, v___x_5641_);
lean_ctor_set(v_reuseFailAlloc_5674_, 2, v_zetaDeltaFVarIds_5635_);
lean_ctor_set(v_reuseFailAlloc_5674_, 3, v_postponed_5636_);
lean_ctor_set(v_reuseFailAlloc_5674_, 4, v_diag_5637_);
v___x_5643_ = v_reuseFailAlloc_5674_;
goto v_reusejp_5642_;
}
v_reusejp_5642_:
{
lean_object* v___x_5644_; lean_object* v_r_5645_; 
v___x_5644_ = lean_st_ref_set(v___y_5608_, v___x_5643_);
lean_inc(v___y_5610_);
lean_inc_ref(v___y_5609_);
lean_inc(v___y_5608_);
lean_inc_ref(v___y_5607_);
v_r_5645_ = lean_apply_5(v_x_5605_, v___y_5607_, v___y_5608_, v___y_5609_, v___y_5610_, lean_box(0));
if (lean_obj_tag(v_r_5645_) == 0)
{
lean_object* v_a_5646_; lean_object* v___x_5648_; uint8_t v_isShared_5649_; uint8_t v_isSharedCheck_5662_; 
v_a_5646_ = lean_ctor_get(v_r_5645_, 0);
v_isSharedCheck_5662_ = !lean_is_exclusive(v_r_5645_);
if (v_isSharedCheck_5662_ == 0)
{
v___x_5648_ = v_r_5645_;
v_isShared_5649_ = v_isSharedCheck_5662_;
goto v_resetjp_5647_;
}
else
{
lean_inc(v_a_5646_);
lean_dec(v_r_5645_);
v___x_5648_ = lean_box(0);
v_isShared_5649_ = v_isSharedCheck_5662_;
goto v_resetjp_5647_;
}
v_resetjp_5647_:
{
lean_object* v___x_5651_; 
lean_inc(v_a_5646_);
if (v_isShared_5649_ == 0)
{
lean_ctor_set_tag(v___x_5648_, 1);
v___x_5651_ = v___x_5648_;
goto v_reusejp_5650_;
}
else
{
lean_object* v_reuseFailAlloc_5661_; 
v_reuseFailAlloc_5661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5661_, 0, v_a_5646_);
v___x_5651_ = v_reuseFailAlloc_5661_;
goto v_reusejp_5650_;
}
v_reusejp_5650_:
{
lean_object* v___x_5652_; lean_object* v___x_5654_; uint8_t v_isShared_5655_; uint8_t v_isSharedCheck_5659_; 
v___x_5652_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___lam__0(v___y_5610_, v_isExporting_5614_, v___x_5628_, v___y_5608_, v___x_5641_, v___x_5651_);
lean_dec_ref(v___x_5651_);
v_isSharedCheck_5659_ = !lean_is_exclusive(v___x_5652_);
if (v_isSharedCheck_5659_ == 0)
{
lean_object* v_unused_5660_; 
v_unused_5660_ = lean_ctor_get(v___x_5652_, 0);
lean_dec(v_unused_5660_);
v___x_5654_ = v___x_5652_;
v_isShared_5655_ = v_isSharedCheck_5659_;
goto v_resetjp_5653_;
}
else
{
lean_dec(v___x_5652_);
v___x_5654_ = lean_box(0);
v_isShared_5655_ = v_isSharedCheck_5659_;
goto v_resetjp_5653_;
}
v_resetjp_5653_:
{
lean_object* v___x_5657_; 
if (v_isShared_5655_ == 0)
{
lean_ctor_set(v___x_5654_, 0, v_a_5646_);
v___x_5657_ = v___x_5654_;
goto v_reusejp_5656_;
}
else
{
lean_object* v_reuseFailAlloc_5658_; 
v_reuseFailAlloc_5658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5658_, 0, v_a_5646_);
v___x_5657_ = v_reuseFailAlloc_5658_;
goto v_reusejp_5656_;
}
v_reusejp_5656_:
{
return v___x_5657_;
}
}
}
}
}
else
{
lean_object* v_a_5663_; lean_object* v___x_5664_; lean_object* v___x_5665_; lean_object* v___x_5667_; uint8_t v_isShared_5668_; uint8_t v_isSharedCheck_5672_; 
v_a_5663_ = lean_ctor_get(v_r_5645_, 0);
lean_inc(v_a_5663_);
lean_dec_ref(v_r_5645_);
v___x_5664_ = lean_box(0);
v___x_5665_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___lam__0(v___y_5610_, v_isExporting_5614_, v___x_5628_, v___y_5608_, v___x_5641_, v___x_5664_);
v_isSharedCheck_5672_ = !lean_is_exclusive(v___x_5665_);
if (v_isSharedCheck_5672_ == 0)
{
lean_object* v_unused_5673_; 
v_unused_5673_ = lean_ctor_get(v___x_5665_, 0);
lean_dec(v_unused_5673_);
v___x_5667_ = v___x_5665_;
v_isShared_5668_ = v_isSharedCheck_5672_;
goto v_resetjp_5666_;
}
else
{
lean_dec(v___x_5665_);
v___x_5667_ = lean_box(0);
v_isShared_5668_ = v_isSharedCheck_5672_;
goto v_resetjp_5666_;
}
v_resetjp_5666_:
{
lean_object* v___x_5670_; 
if (v_isShared_5668_ == 0)
{
lean_ctor_set_tag(v___x_5667_, 1);
lean_ctor_set(v___x_5667_, 0, v_a_5663_);
v___x_5670_ = v___x_5667_;
goto v_reusejp_5669_;
}
else
{
lean_object* v_reuseFailAlloc_5671_; 
v_reuseFailAlloc_5671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5671_, 0, v_a_5663_);
v___x_5670_ = v_reuseFailAlloc_5671_;
goto v_reusejp_5669_;
}
v_reusejp_5669_:
{
return v___x_5670_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___boxed(lean_object* v_x_5680_, lean_object* v_isExporting_5681_, lean_object* v___y_5682_, lean_object* v___y_5683_, lean_object* v___y_5684_, lean_object* v___y_5685_, lean_object* v___y_5686_){
_start:
{
uint8_t v_isExporting_boxed_5687_; lean_object* v_res_5688_; 
v_isExporting_boxed_5687_ = lean_unbox(v_isExporting_5681_);
v_res_5688_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg(v_x_5680_, v_isExporting_boxed_5687_, v___y_5682_, v___y_5683_, v___y_5684_, v___y_5685_);
lean_dec(v___y_5685_);
lean_dec_ref(v___y_5684_);
lean_dec(v___y_5683_);
lean_dec_ref(v___y_5682_);
return v_res_5688_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1___redArg(lean_object* v_x_5689_, uint8_t v_when_5690_, lean_object* v___y_5691_, lean_object* v___y_5692_, lean_object* v___y_5693_, lean_object* v___y_5694_){
_start:
{
if (v_when_5690_ == 0)
{
lean_object* v___x_5696_; 
lean_inc(v___y_5694_);
lean_inc_ref(v___y_5693_);
lean_inc(v___y_5692_);
lean_inc_ref(v___y_5691_);
v___x_5696_ = lean_apply_5(v_x_5689_, v___y_5691_, v___y_5692_, v___y_5693_, v___y_5694_, lean_box(0));
return v___x_5696_;
}
else
{
uint8_t v___x_5697_; lean_object* v___x_5698_; 
v___x_5697_ = 0;
v___x_5698_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg(v_x_5689_, v___x_5697_, v___y_5691_, v___y_5692_, v___y_5693_, v___y_5694_);
return v___x_5698_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1___redArg___boxed(lean_object* v_x_5699_, lean_object* v_when_5700_, lean_object* v___y_5701_, lean_object* v___y_5702_, lean_object* v___y_5703_, lean_object* v___y_5704_, lean_object* v___y_5705_){
_start:
{
uint8_t v_when_boxed_5706_; lean_object* v_res_5707_; 
v_when_boxed_5706_ = lean_unbox(v_when_5700_);
v_res_5707_ = l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1___redArg(v_x_5699_, v_when_boxed_5706_, v___y_5701_, v___y_5702_, v___y_5703_, v___y_5704_);
lean_dec(v___y_5704_);
lean_dec_ref(v___y_5703_);
lean_dec(v___y_5702_);
lean_dec_ref(v___y_5701_);
return v_res_5707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letToHave___lam__0(lean_object* v_e_5708_, lean_object* v___y_5709_, lean_object* v___y_5710_, lean_object* v___y_5711_, lean_object* v___y_5712_){
_start:
{
lean_object* v___x_5714_; lean_object* v_a_5715_; lean_object* v___x_5716_; uint8_t v___x_5717_; lean_object* v___x_5718_; 
v___x_5714_ = l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0___redArg(v_e_5708_, v___y_5710_, v___y_5712_);
v_a_5715_ = lean_ctor_get(v___x_5714_, 0);
lean_inc(v_a_5715_);
lean_dec_ref(v___x_5714_);
v___x_5716_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___boxed), 6, 1);
lean_closure_set(v___x_5716_, 0, v_a_5715_);
v___x_5717_ = 1;
v___x_5718_ = l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1___redArg(v___x_5716_, v___x_5717_, v___y_5709_, v___y_5710_, v___y_5711_, v___y_5712_);
return v___x_5718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letToHave___lam__0___boxed(lean_object* v_e_5719_, lean_object* v___y_5720_, lean_object* v___y_5721_, lean_object* v___y_5722_, lean_object* v___y_5723_, lean_object* v___y_5724_){
_start:
{
lean_object* v_res_5725_; 
v_res_5725_ = l_Lean_Meta_letToHave___lam__0(v_e_5719_, v___y_5720_, v___y_5721_, v___y_5722_, v___y_5723_);
lean_dec(v___y_5723_);
lean_dec_ref(v___y_5722_);
lean_dec(v___y_5721_);
lean_dec_ref(v___y_5720_);
return v_res_5725_;
}
}
static lean_object* _init_l_Lean_Meta_letToHave___closed__0(void){
_start:
{
lean_object* v___x_5726_; 
v___x_5726_ = lean_mk_string_unchecked("let-to-have transformation", 26, 26);
return v___x_5726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letToHave(lean_object* v_e_5727_, lean_object* v_a_5728_, lean_object* v_a_5729_, lean_object* v_a_5730_, lean_object* v_a_5731_){
_start:
{
lean_object* v_options_5733_; lean_object* v___f_5734_; lean_object* v___x_5735_; lean_object* v___x_5736_; lean_object* v___x_5737_; 
v_options_5733_ = lean_ctor_get(v_a_5730_, 2);
v___f_5734_ = lean_alloc_closure((void*)(l_Lean_Meta_letToHave___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5734_, 0, v_e_5727_);
v___x_5735_ = lean_obj_once(&l_Lean_Meta_letToHave___closed__0, &l_Lean_Meta_letToHave___closed__0_once, _init_l_Lean_Meta_letToHave___closed__0);
v___x_5736_ = lean_box(0);
v___x_5737_ = l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2___redArg(v___x_5735_, v_options_5733_, v___f_5734_, v___x_5736_, v_a_5728_, v_a_5729_, v_a_5730_, v_a_5731_);
return v___x_5737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letToHave___boxed(lean_object* v_e_5738_, lean_object* v_a_5739_, lean_object* v_a_5740_, lean_object* v_a_5741_, lean_object* v_a_5742_, lean_object* v_a_5743_){
_start:
{
lean_object* v_res_5744_; 
v_res_5744_ = l_Lean_Meta_letToHave(v_e_5738_, v_a_5739_, v_a_5740_, v_a_5741_, v_a_5742_);
lean_dec(v_a_5742_);
lean_dec_ref(v_a_5741_);
lean_dec(v_a_5740_);
lean_dec_ref(v_a_5739_);
return v_res_5744_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1(lean_object* v_00_u03b1_5745_, lean_object* v_x_5746_, uint8_t v_isExporting_5747_, lean_object* v___y_5748_, lean_object* v___y_5749_, lean_object* v___y_5750_, lean_object* v___y_5751_){
_start:
{
lean_object* v___x_5753_; 
v___x_5753_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg(v_x_5746_, v_isExporting_5747_, v___y_5748_, v___y_5749_, v___y_5750_, v___y_5751_);
return v___x_5753_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___boxed(lean_object* v_00_u03b1_5754_, lean_object* v_x_5755_, lean_object* v_isExporting_5756_, lean_object* v___y_5757_, lean_object* v___y_5758_, lean_object* v___y_5759_, lean_object* v___y_5760_, lean_object* v___y_5761_){
_start:
{
uint8_t v_isExporting_boxed_5762_; lean_object* v_res_5763_; 
v_isExporting_boxed_5762_ = lean_unbox(v_isExporting_5756_);
v_res_5763_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1(v_00_u03b1_5754_, v_x_5755_, v_isExporting_boxed_5762_, v___y_5757_, v___y_5758_, v___y_5759_, v___y_5760_);
lean_dec(v___y_5760_);
lean_dec_ref(v___y_5759_);
lean_dec(v___y_5758_);
lean_dec_ref(v___y_5757_);
return v_res_5763_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1(lean_object* v_00_u03b1_5764_, lean_object* v_x_5765_, uint8_t v_when_5766_, lean_object* v___y_5767_, lean_object* v___y_5768_, lean_object* v___y_5769_, lean_object* v___y_5770_){
_start:
{
lean_object* v___x_5772_; 
v___x_5772_ = l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1___redArg(v_x_5765_, v_when_5766_, v___y_5767_, v___y_5768_, v___y_5769_, v___y_5770_);
return v___x_5772_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1___boxed(lean_object* v_00_u03b1_5773_, lean_object* v_x_5774_, lean_object* v_when_5775_, lean_object* v___y_5776_, lean_object* v___y_5777_, lean_object* v___y_5778_, lean_object* v___y_5779_, lean_object* v___y_5780_){
_start:
{
uint8_t v_when_boxed_5781_; lean_object* v_res_5782_; 
v_when_boxed_5781_ = lean_unbox(v_when_5775_);
v_res_5782_ = l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1(v_00_u03b1_5773_, v_x_5774_, v_when_boxed_5781_, v___y_5776_, v___y_5777_, v___y_5778_, v___y_5779_);
lean_dec(v___y_5779_);
lean_dec_ref(v___y_5778_);
lean_dec(v___y_5777_);
lean_dec_ref(v___y_5776_);
return v_res_5782_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5783_; 
v___x_5783_ = lean_mk_string_unchecked("_private", 8, 8);
return v___x_5783_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5784_; lean_object* v___x_5785_; lean_object* v___x_5786_; 
v___x_5784_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5785_ = lean_box(0);
v___x_5786_ = l_Lean_Name_str___override(v___x_5785_, v___x_5784_);
return v___x_5786_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5787_; 
v___x_5787_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_5787_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5788_; lean_object* v___x_5789_; lean_object* v___x_5790_; 
v___x_5788_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5789_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5790_ = l_Lean_Name_str___override(v___x_5789_, v___x_5788_);
return v___x_5790_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5791_; lean_object* v___x_5792_; lean_object* v___x_5793_; 
v___x_5791_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0);
v___x_5792_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5793_ = l_Lean_Name_str___override(v___x_5792_, v___x_5791_);
return v___x_5793_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5794_; 
v___x_5794_ = lean_mk_string_unchecked("LetToHave", 9, 9);
return v___x_5794_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5795_; lean_object* v___x_5796_; lean_object* v___x_5797_; 
v___x_5795_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5796_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5797_ = l_Lean_Name_str___override(v___x_5796_, v___x_5795_);
return v___x_5797_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5798_; lean_object* v___x_5799_; lean_object* v___x_5800_; 
v___x_5798_ = lean_unsigned_to_nat(0u);
v___x_5799_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5800_ = l_Lean_Name_num___override(v___x_5799_, v___x_5798_);
return v___x_5800_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5801_; lean_object* v___x_5802_; lean_object* v___x_5803_; 
v___x_5801_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5802_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5803_ = l_Lean_Name_str___override(v___x_5802_, v___x_5801_);
return v___x_5803_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5804_; lean_object* v___x_5805_; lean_object* v___x_5806_; 
v___x_5804_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0);
v___x_5805_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5806_ = l_Lean_Name_str___override(v___x_5805_, v___x_5804_);
return v___x_5806_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5807_; 
v___x_5807_ = lean_mk_string_unchecked("initFn", 6, 6);
return v___x_5807_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5808_; lean_object* v___x_5809_; lean_object* v___x_5810_; 
v___x_5808_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5809_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5810_ = l_Lean_Name_str___override(v___x_5809_, v___x_5808_);
return v___x_5810_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5811_; 
v___x_5811_ = lean_mk_string_unchecked("_@", 2, 2);
return v___x_5811_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5812_; lean_object* v___x_5813_; lean_object* v___x_5814_; 
v___x_5812_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5813_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5814_ = l_Lean_Name_str___override(v___x_5813_, v___x_5812_);
return v___x_5814_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5815_; lean_object* v___x_5816_; lean_object* v___x_5817_; 
v___x_5815_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5816_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5817_ = l_Lean_Name_str___override(v___x_5816_, v___x_5815_);
return v___x_5817_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5818_; lean_object* v___x_5819_; lean_object* v___x_5820_; 
v___x_5818_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0);
v___x_5819_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5820_ = l_Lean_Name_str___override(v___x_5819_, v___x_5818_);
return v___x_5820_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5821_; lean_object* v___x_5822_; lean_object* v___x_5823_; 
v___x_5821_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5822_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5823_ = l_Lean_Name_str___override(v___x_5822_, v___x_5821_);
return v___x_5823_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5824_; lean_object* v___x_5825_; lean_object* v___x_5826_; 
v___x_5824_ = lean_unsigned_to_nat(3802470064u);
v___x_5825_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5826_ = l_Lean_Name_num___override(v___x_5825_, v___x_5824_);
return v___x_5826_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5827_; 
v___x_5827_ = lean_mk_string_unchecked("_hygCtx", 7, 7);
return v___x_5827_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5828_; lean_object* v___x_5829_; lean_object* v___x_5830_; 
v___x_5828_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5829_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5830_ = l_Lean_Name_str___override(v___x_5829_, v___x_5828_);
return v___x_5830_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5831_; 
v___x_5831_ = lean_mk_string_unchecked("_hyg", 4, 4);
return v___x_5831_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5832_; lean_object* v___x_5833_; lean_object* v___x_5834_; 
v___x_5832_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5833_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5834_ = l_Lean_Name_str___override(v___x_5833_, v___x_5832_);
return v___x_5834_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5835_; lean_object* v___x_5836_; lean_object* v___x_5837_; 
v___x_5835_ = lean_unsigned_to_nat(2u);
v___x_5836_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5837_ = l_Lean_Name_num___override(v___x_5836_, v___x_5835_);
return v___x_5837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5839_; uint8_t v___x_5840_; lean_object* v___x_5841_; lean_object* v___x_5842_; 
v___x_5839_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__0);
v___x_5840_ = 0;
v___x_5841_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_);
v___x_5842_ = l_Lean_registerTraceClass(v___x_5839_, v___x_5840_, v___x_5841_);
if (lean_obj_tag(v___x_5842_) == 0)
{
lean_object* v___x_5843_; lean_object* v___x_5844_; 
lean_dec_ref(v___x_5842_);
v___x_5843_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3);
v___x_5844_ = l_Lean_registerTraceClass(v___x_5843_, v___x_5840_, v___x_5841_);
return v___x_5844_;
}
else
{
return v___x_5842_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2____boxed(lean_object* v_a_5845_){
_start:
{
lean_object* v_res_5846_; 
v_res_5846_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_();
return v_res_5846_;
}
}
lean_object* runtime_initialize_Lean_Meta_Check(uint8_t builtin);
lean_object* runtime_initialize_Lean_ReservedNameAction(uint8_t builtin);
lean_object* runtime_initialize_Lean_AddDecl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Transform(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectMVars(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_LetToHave(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ReservedNameAction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_LetToHave_instInhabitedResult_default = _init_l_Lean_Meta_LetToHave_instInhabitedResult_default();
lean_mark_persistent(l_Lean_Meta_LetToHave_instInhabitedResult_default);
l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instInhabitedResult = _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instInhabitedResult();
lean_mark_persistent(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instInhabitedResult);
l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr = _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr();
lean_mark_persistent(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr);
res = l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn_00___x40_Lean_Meta_LetToHave_3802470064____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_LetToHave(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Check(uint8_t builtin);
lean_object* initialize_Lean_ReservedNameAction(uint8_t builtin);
lean_object* initialize_Lean_AddDecl(uint8_t builtin);
lean_object* initialize_Lean_Meta_Transform(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectMVars(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_LetToHave(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ReservedNameAction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LetToHave(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_LetToHave(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_LetToHave(builtin);
}
#ifdef __cplusplus
}
#endif
