// Lean compiler output
// Module: Lean.Elab.PreDefinition.WF.Main
// Imports: public import Lean.Elab.PreDefinition.WF.PackMutual public import Lean.Elab.PreDefinition.WF.FloatRecApp public import Lean.Elab.PreDefinition.WF.Rel public import Lean.Elab.PreDefinition.WF.Fix public import Lean.Elab.PreDefinition.WF.Unfold public import Lean.Elab.PreDefinition.WF.Preprocess public import Lean.Elab.PreDefinition.WF.GuessLex
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
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Elab_Mutual_cleanPreDef(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAsAxiom___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Elab_DefKind_isTheorem(uint8_t);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Elab_WF_guessLex(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Meta_unfoldIfArgIsAppOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_Meta_unfoldDeclsFrom(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_copyExtraModUses(lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_mkFix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_isNatLtWF(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_elabWFRel___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Elab_WF_floatRecApp(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getFixedParamPerms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_varyingVarNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_packMutual(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition_default;
lean_object* l_Lean_enableRealizationsForConst(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Mutual_addPreDefAttributes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
lean_object* l_Lean_Elab_WF_preDefsFromUnaryNonRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAndCompilePartialRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_registerEqnsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_markAsRecursive___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_mkUnfoldEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_wfRecursion_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_wfRecursion_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__1;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__2;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_wfRecursion___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___lam__1___closed__0;
static lean_once_cell_t l_Lean_Elab_wfRecursion___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___lam__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__1;
static lean_once_cell_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__2;
static lean_once_cell_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__3;
static lean_once_cell_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__4;
static lean_once_cell_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__5;
static lean_once_cell_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__6;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__3;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__4;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_wfRecursion___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___lam__3___closed__0;
static lean_once_cell_t l_Lean_Elab_wfRecursion___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__3___boxed(lean_object**);
static lean_once_cell_t l_Lean_Elab_wfRecursion___lam__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___lam__4___closed__0;
static lean_once_cell_t l_Lean_Elab_wfRecursion___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___lam__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__4(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__8___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__0;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__1;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__2;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__3;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__4;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__5;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__6;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__7;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__8;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__9;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__10;
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___boxed__const__1;
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_wfRecursion_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_wfRecursion_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0);
v___x_3_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1);
v___x_5_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5_, 0, v___x_4_);
lean_ctor_set(v___x_5_, 1, v___x_4_);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_6_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1);
v___x_7_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_7_, 0, v___x_6_);
lean_ctor_set(v___x_7_, 1, v___x_6_);
lean_ctor_set(v___x_7_, 2, v___x_6_);
lean_ctor_set(v___x_7_, 3, v___x_6_);
lean_ctor_set(v___x_7_, 4, v___x_6_);
lean_ctor_set(v___x_7_, 5, v___x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(lean_object* v_env_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v___x_12_; lean_object* v_nextMacroScope_13_; lean_object* v_ngen_14_; lean_object* v_auxDeclNGen_15_; lean_object* v_traceState_16_; lean_object* v_messages_17_; lean_object* v_infoState_18_; lean_object* v_snapshotTasks_19_; lean_object* v___x_21_; uint8_t v_isShared_22_; uint8_t v_isSharedCheck_46_; 
v___x_12_ = lean_st_ref_take(v___y_10_);
v_nextMacroScope_13_ = lean_ctor_get(v___x_12_, 1);
v_ngen_14_ = lean_ctor_get(v___x_12_, 2);
v_auxDeclNGen_15_ = lean_ctor_get(v___x_12_, 3);
v_traceState_16_ = lean_ctor_get(v___x_12_, 4);
v_messages_17_ = lean_ctor_get(v___x_12_, 6);
v_infoState_18_ = lean_ctor_get(v___x_12_, 7);
v_snapshotTasks_19_ = lean_ctor_get(v___x_12_, 8);
v_isSharedCheck_46_ = !lean_is_exclusive(v___x_12_);
if (v_isSharedCheck_46_ == 0)
{
lean_object* v_unused_47_; lean_object* v_unused_48_; 
v_unused_47_ = lean_ctor_get(v___x_12_, 5);
lean_dec(v_unused_47_);
v_unused_48_ = lean_ctor_get(v___x_12_, 0);
lean_dec(v_unused_48_);
v___x_21_ = v___x_12_;
v_isShared_22_ = v_isSharedCheck_46_;
goto v_resetjp_20_;
}
else
{
lean_inc(v_snapshotTasks_19_);
lean_inc(v_infoState_18_);
lean_inc(v_messages_17_);
lean_inc(v_traceState_16_);
lean_inc(v_auxDeclNGen_15_);
lean_inc(v_ngen_14_);
lean_inc(v_nextMacroScope_13_);
lean_dec(v___x_12_);
v___x_21_ = lean_box(0);
v_isShared_22_ = v_isSharedCheck_46_;
goto v_resetjp_20_;
}
v_resetjp_20_:
{
lean_object* v___x_23_; lean_object* v___x_25_; 
v___x_23_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2);
if (v_isShared_22_ == 0)
{
lean_ctor_set(v___x_21_, 5, v___x_23_);
lean_ctor_set(v___x_21_, 0, v_env_8_);
v___x_25_ = v___x_21_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_env_8_);
lean_ctor_set(v_reuseFailAlloc_45_, 1, v_nextMacroScope_13_);
lean_ctor_set(v_reuseFailAlloc_45_, 2, v_ngen_14_);
lean_ctor_set(v_reuseFailAlloc_45_, 3, v_auxDeclNGen_15_);
lean_ctor_set(v_reuseFailAlloc_45_, 4, v_traceState_16_);
lean_ctor_set(v_reuseFailAlloc_45_, 5, v___x_23_);
lean_ctor_set(v_reuseFailAlloc_45_, 6, v_messages_17_);
lean_ctor_set(v_reuseFailAlloc_45_, 7, v_infoState_18_);
lean_ctor_set(v_reuseFailAlloc_45_, 8, v_snapshotTasks_19_);
v___x_25_ = v_reuseFailAlloc_45_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v_mctx_29_; lean_object* v_zetaDeltaFVarIds_30_; lean_object* v_postponed_31_; lean_object* v_diag_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_43_; 
v___x_26_ = lean_st_ref_set(v___y_10_, v___x_25_);
v___x_27_ = lean_st_ref_get(v___y_10_);
lean_dec(v___x_27_);
v___x_28_ = lean_st_ref_take(v___y_9_);
v_mctx_29_ = lean_ctor_get(v___x_28_, 0);
v_zetaDeltaFVarIds_30_ = lean_ctor_get(v___x_28_, 2);
v_postponed_31_ = lean_ctor_get(v___x_28_, 3);
v_diag_32_ = lean_ctor_get(v___x_28_, 4);
v_isSharedCheck_43_ = !lean_is_exclusive(v___x_28_);
if (v_isSharedCheck_43_ == 0)
{
lean_object* v_unused_44_; 
v_unused_44_ = lean_ctor_get(v___x_28_, 1);
lean_dec(v_unused_44_);
v___x_34_ = v___x_28_;
v_isShared_35_ = v_isSharedCheck_43_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_diag_32_);
lean_inc(v_postponed_31_);
lean_inc(v_zetaDeltaFVarIds_30_);
lean_inc(v_mctx_29_);
lean_dec(v___x_28_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_43_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_36_; lean_object* v___x_38_; 
v___x_36_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3);
if (v_isShared_35_ == 0)
{
lean_ctor_set(v___x_34_, 1, v___x_36_);
v___x_38_ = v___x_34_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_42_; 
v_reuseFailAlloc_42_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_42_, 0, v_mctx_29_);
lean_ctor_set(v_reuseFailAlloc_42_, 1, v___x_36_);
lean_ctor_set(v_reuseFailAlloc_42_, 2, v_zetaDeltaFVarIds_30_);
lean_ctor_set(v_reuseFailAlloc_42_, 3, v_postponed_31_);
lean_ctor_set(v_reuseFailAlloc_42_, 4, v_diag_32_);
v___x_38_ = v_reuseFailAlloc_42_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_39_ = lean_st_ref_set(v___y_9_, v___x_38_);
v___x_40_ = lean_box(0);
v___x_41_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
return v___x_41_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___boxed(lean_object* v_env_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_env_49_, v___y_50_, v___y_51_);
lean_dec(v___y_51_);
lean_dec(v___y_50_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9(lean_object* v_env_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_env_54_, v___y_58_, v___y_60_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___boxed(lean_object* v_env_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9(v_env_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_);
lean_dec(v___y_69_);
lean_dec_ref(v___y_68_);
lean_dec(v___y_67_);
lean_dec_ref(v___y_66_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0(lean_object* v_k_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v_b_75_, lean_object* v_c_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v___x_82_; 
lean_inc(v___y_80_);
lean_inc_ref(v___y_79_);
lean_inc(v___y_78_);
lean_inc_ref(v___y_77_);
lean_inc(v___y_74_);
lean_inc_ref(v___y_73_);
v___x_82_ = lean_apply_9(v_k_72_, v_b_75_, v_c_76_, v___y_73_, v___y_74_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, lean_box(0));
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0___boxed(lean_object* v_k_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v_b_86_, lean_object* v_c_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0(v_k_83_, v___y_84_, v___y_85_, v_b_86_, v_c_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_88_);
lean_dec(v___y_85_);
lean_dec_ref(v___y_84_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg(lean_object* v_type_94_, lean_object* v_maxFVars_x3f_95_, lean_object* v_k_96_, uint8_t v_cleanupAnnotations_97_, uint8_t v_whnfType_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_){
_start:
{
lean_object* v___f_106_; lean_object* v___x_107_; 
lean_inc(v___y_100_);
lean_inc_ref(v___y_99_);
v___f_106_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_106_, 0, v_k_96_);
lean_closure_set(v___f_106_, 1, v___y_99_);
lean_closure_set(v___f_106_, 2, v___y_100_);
v___x_107_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_94_, v_maxFVars_x3f_95_, v___f_106_, v_cleanupAnnotations_97_, v_whnfType_98_, v___y_101_, v___y_102_, v___y_103_, v___y_104_);
if (lean_obj_tag(v___x_107_) == 0)
{
return v___x_107_;
}
else
{
lean_object* v_a_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_115_; 
v_a_108_ = lean_ctor_get(v___x_107_, 0);
v_isSharedCheck_115_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_115_ == 0)
{
v___x_110_ = v___x_107_;
v_isShared_111_ = v_isSharedCheck_115_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_a_108_);
lean_dec(v___x_107_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_115_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___x_113_; 
if (v_isShared_111_ == 0)
{
v___x_113_ = v___x_110_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v_a_108_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___boxed(lean_object* v_type_116_, lean_object* v_maxFVars_x3f_117_, lean_object* v_k_118_, lean_object* v_cleanupAnnotations_119_, lean_object* v_whnfType_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_128_; uint8_t v_whnfType_boxed_129_; lean_object* v_res_130_; 
v_cleanupAnnotations_boxed_128_ = lean_unbox(v_cleanupAnnotations_119_);
v_whnfType_boxed_129_ = lean_unbox(v_whnfType_120_);
v_res_130_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg(v_type_116_, v_maxFVars_x3f_117_, v_k_118_, v_cleanupAnnotations_boxed_128_, v_whnfType_boxed_129_, v___y_121_, v___y_122_, v___y_123_, v___y_124_, v___y_125_, v___y_126_);
lean_dec(v___y_126_);
lean_dec_ref(v___y_125_);
lean_dec(v___y_124_);
lean_dec_ref(v___y_123_);
lean_dec(v___y_122_);
lean_dec_ref(v___y_121_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15(lean_object* v_00_u03b1_131_, lean_object* v_type_132_, lean_object* v_maxFVars_x3f_133_, lean_object* v_k_134_, uint8_t v_cleanupAnnotations_135_, uint8_t v_whnfType_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg(v_type_132_, v_maxFVars_x3f_133_, v_k_134_, v_cleanupAnnotations_135_, v_whnfType_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___boxed(lean_object* v_00_u03b1_145_, lean_object* v_type_146_, lean_object* v_maxFVars_x3f_147_, lean_object* v_k_148_, lean_object* v_cleanupAnnotations_149_, lean_object* v_whnfType_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_158_; uint8_t v_whnfType_boxed_159_; lean_object* v_res_160_; 
v_cleanupAnnotations_boxed_158_ = lean_unbox(v_cleanupAnnotations_149_);
v_whnfType_boxed_159_ = lean_unbox(v_whnfType_150_);
v_res_160_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15(v_00_u03b1_145_, v_type_146_, v_maxFVars_x3f_147_, v_k_148_, v_cleanupAnnotations_boxed_158_, v_whnfType_boxed_159_, v___y_151_, v___y_152_, v___y_153_, v___y_154_, v___y_155_, v___y_156_);
lean_dec(v___y_156_);
lean_dec_ref(v___y_155_);
lean_dec(v___y_154_);
lean_dec_ref(v___y_153_);
lean_dec(v___y_152_);
lean_dec_ref(v___y_151_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__2___redArg(lean_object* v_as_161_, size_t v_sz_162_, size_t v_i_163_, lean_object* v_b_164_, lean_object* v___y_165_, lean_object* v___y_166_){
_start:
{
uint8_t v___x_168_; 
v___x_168_ = lean_usize_dec_lt(v_i_163_, v_sz_162_);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; 
v___x_169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_169_, 0, v_b_164_);
return v___x_169_;
}
else
{
lean_object* v_a_170_; lean_object* v___x_171_; 
v_a_170_ = lean_array_uget_borrowed(v_as_161_, v_i_163_);
v___x_171_ = l_Lean_Elab_addAsAxiom___redArg(v_a_170_, v___y_165_, v___y_166_);
if (lean_obj_tag(v___x_171_) == 0)
{
lean_object* v___x_172_; size_t v___x_173_; size_t v___x_174_; 
lean_dec_ref(v___x_171_);
v___x_172_ = lean_box(0);
v___x_173_ = ((size_t)1ULL);
v___x_174_ = lean_usize_add(v_i_163_, v___x_173_);
v_i_163_ = v___x_174_;
v_b_164_ = v___x_172_;
goto _start;
}
else
{
return v___x_171_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__2___redArg___boxed(lean_object* v_as_176_, lean_object* v_sz_177_, lean_object* v_i_178_, lean_object* v_b_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_){
_start:
{
size_t v_sz_boxed_183_; size_t v_i_boxed_184_; lean_object* v_res_185_; 
v_sz_boxed_183_ = lean_unbox_usize(v_sz_177_);
lean_dec(v_sz_177_);
v_i_boxed_184_ = lean_unbox_usize(v_i_178_);
lean_dec(v_i_178_);
v_res_185_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__2___redArg(v_as_176_, v_sz_boxed_183_, v_i_boxed_184_, v_b_179_, v___y_180_, v___y_181_);
lean_dec(v___y_181_);
lean_dec_ref(v___y_180_);
lean_dec_ref(v_as_176_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_wfRecursion_spec__3___redArg(lean_object* v_a_186_, lean_object* v_as_187_, lean_object* v_i_188_, lean_object* v_j_189_, lean_object* v_bs_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_){
_start:
{
lean_object* v_zero_196_; uint8_t v_isZero_197_; 
v_zero_196_ = lean_unsigned_to_nat(0u);
v_isZero_197_ = lean_nat_dec_eq(v_i_188_, v_zero_196_);
if (v_isZero_197_ == 1)
{
lean_object* v___x_198_; 
lean_dec(v_j_189_);
lean_dec(v_i_188_);
lean_dec_ref(v_a_186_);
v___x_198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_198_, 0, v_bs_190_);
return v___x_198_;
}
else
{
lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_199_ = lean_array_fget_borrowed(v_as_187_, v_j_189_);
lean_inc(v___x_199_);
lean_inc(v_j_189_);
lean_inc_ref(v_a_186_);
v___x_200_ = l_Lean_Elab_WF_varyingVarNames(v_a_186_, v_j_189_, v___x_199_, v___y_191_, v___y_192_, v___y_193_, v___y_194_);
if (lean_obj_tag(v___x_200_) == 0)
{
lean_object* v_a_201_; lean_object* v_one_202_; lean_object* v_n_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v_a_201_ = lean_ctor_get(v___x_200_, 0);
lean_inc(v_a_201_);
lean_dec_ref(v___x_200_);
v_one_202_ = lean_unsigned_to_nat(1u);
v_n_203_ = lean_nat_sub(v_i_188_, v_one_202_);
lean_dec(v_i_188_);
v___x_204_ = lean_nat_add(v_j_189_, v_one_202_);
lean_dec(v_j_189_);
v___x_205_ = lean_array_push(v_bs_190_, v_a_201_);
v_i_188_ = v_n_203_;
v_j_189_ = v___x_204_;
v_bs_190_ = v___x_205_;
goto _start;
}
else
{
lean_object* v_a_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_214_; 
lean_dec_ref(v_bs_190_);
lean_dec(v_j_189_);
lean_dec(v_i_188_);
lean_dec_ref(v_a_186_);
v_a_207_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_214_ == 0)
{
v___x_209_ = v___x_200_;
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_a_207_);
lean_dec(v___x_200_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_212_; 
if (v_isShared_210_ == 0)
{
v___x_212_ = v___x_209_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_a_207_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_wfRecursion_spec__3___redArg___boxed(lean_object* v_a_215_, lean_object* v_as_216_, lean_object* v_i_217_, lean_object* v_j_218_, lean_object* v_bs_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_wfRecursion_spec__3___redArg(v_a_215_, v_as_216_, v_i_217_, v_j_218_, v_bs_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
lean_dec(v___y_223_);
lean_dec_ref(v___y_222_);
lean_dec(v___y_221_);
lean_dec_ref(v___y_220_);
lean_dec_ref(v_as_216_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__5(size_t v_sz_226_, size_t v_i_227_, lean_object* v_bs_228_){
_start:
{
uint8_t v___x_229_; 
v___x_229_ = lean_usize_dec_lt(v_i_227_, v_sz_226_);
if (v___x_229_ == 0)
{
return v_bs_228_;
}
else
{
lean_object* v_v_230_; lean_object* v_declName_231_; lean_object* v___x_232_; lean_object* v_bs_x27_233_; size_t v___x_234_; size_t v___x_235_; lean_object* v___x_236_; 
v_v_230_ = lean_array_uget_borrowed(v_bs_228_, v_i_227_);
v_declName_231_ = lean_ctor_get(v_v_230_, 3);
lean_inc(v_declName_231_);
v___x_232_ = lean_unsigned_to_nat(0u);
v_bs_x27_233_ = lean_array_uset(v_bs_228_, v_i_227_, v___x_232_);
v___x_234_ = ((size_t)1ULL);
v___x_235_ = lean_usize_add(v_i_227_, v___x_234_);
v___x_236_ = lean_array_uset(v_bs_x27_233_, v_i_227_, v_declName_231_);
v_i_227_ = v___x_235_;
v_bs_228_ = v___x_236_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__5___boxed(lean_object* v_sz_238_, lean_object* v_i_239_, lean_object* v_bs_240_){
_start:
{
size_t v_sz_boxed_241_; size_t v_i_boxed_242_; lean_object* v_res_243_; 
v_sz_boxed_241_ = lean_unbox_usize(v_sz_238_);
lean_dec(v_sz_238_);
v_i_boxed_242_ = lean_unbox_usize(v_i_239_);
lean_dec(v_i_239_);
v_res_243_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__5(v_sz_boxed_241_, v_i_boxed_242_, v_bs_240_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___redArg(lean_object* v_a_244_, lean_object* v___x_245_, size_t v_sz_246_, size_t v_i_247_, lean_object* v_bs_248_, lean_object* v___y_249_, lean_object* v___y_250_){
_start:
{
uint8_t v___x_252_; 
v___x_252_ = lean_usize_dec_lt(v_i_247_, v_sz_246_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; 
lean_dec(v___x_245_);
lean_dec_ref(v_a_244_);
v___x_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_253_, 0, v_bs_248_);
return v___x_253_;
}
else
{
lean_object* v_v_254_; lean_object* v_ref_255_; uint8_t v_kind_256_; lean_object* v_levelParams_257_; lean_object* v_modifiers_258_; lean_object* v_declName_259_; lean_object* v_binders_260_; lean_object* v_numSectionVars_261_; lean_object* v_type_262_; lean_object* v_value_263_; lean_object* v_termination_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_290_; 
v_v_254_ = lean_array_uget(v_bs_248_, v_i_247_);
v_ref_255_ = lean_ctor_get(v_v_254_, 0);
v_kind_256_ = lean_ctor_get_uint8(v_v_254_, sizeof(void*)*9);
v_levelParams_257_ = lean_ctor_get(v_v_254_, 1);
v_modifiers_258_ = lean_ctor_get(v_v_254_, 2);
v_declName_259_ = lean_ctor_get(v_v_254_, 3);
v_binders_260_ = lean_ctor_get(v_v_254_, 4);
v_numSectionVars_261_ = lean_ctor_get(v_v_254_, 5);
v_type_262_ = lean_ctor_get(v_v_254_, 6);
v_value_263_ = lean_ctor_get(v_v_254_, 7);
v_termination_264_ = lean_ctor_get(v_v_254_, 8);
v_isSharedCheck_290_ = !lean_is_exclusive(v_v_254_);
if (v_isSharedCheck_290_ == 0)
{
v___x_266_ = v_v_254_;
v_isShared_267_ = v_isSharedCheck_290_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_termination_264_);
lean_inc(v_value_263_);
lean_inc(v_type_262_);
lean_inc(v_numSectionVars_261_);
lean_inc(v_binders_260_);
lean_inc(v_declName_259_);
lean_inc(v_modifiers_258_);
lean_inc(v_levelParams_257_);
lean_inc(v_ref_255_);
lean_dec(v_v_254_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_290_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
size_t v_sz_268_; size_t v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v_sz_268_ = lean_array_size(v_a_244_);
v___x_269_ = ((size_t)0ULL);
lean_inc_ref(v_a_244_);
v___x_270_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__5(v_sz_268_, v___x_269_, v_a_244_);
lean_inc(v___x_245_);
v___x_271_ = l_Lean_Meta_unfoldIfArgIsAppOf(v___x_270_, v___x_245_, v_value_263_, v___y_249_, v___y_250_);
if (lean_obj_tag(v___x_271_) == 0)
{
lean_object* v_a_272_; lean_object* v___x_273_; lean_object* v_bs_x27_274_; lean_object* v___x_276_; 
v_a_272_ = lean_ctor_get(v___x_271_, 0);
lean_inc(v_a_272_);
lean_dec_ref(v___x_271_);
v___x_273_ = lean_unsigned_to_nat(0u);
v_bs_x27_274_ = lean_array_uset(v_bs_248_, v_i_247_, v___x_273_);
if (v_isShared_267_ == 0)
{
lean_ctor_set(v___x_266_, 7, v_a_272_);
v___x_276_ = v___x_266_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v_ref_255_);
lean_ctor_set(v_reuseFailAlloc_281_, 1, v_levelParams_257_);
lean_ctor_set(v_reuseFailAlloc_281_, 2, v_modifiers_258_);
lean_ctor_set(v_reuseFailAlloc_281_, 3, v_declName_259_);
lean_ctor_set(v_reuseFailAlloc_281_, 4, v_binders_260_);
lean_ctor_set(v_reuseFailAlloc_281_, 5, v_numSectionVars_261_);
lean_ctor_set(v_reuseFailAlloc_281_, 6, v_type_262_);
lean_ctor_set(v_reuseFailAlloc_281_, 7, v_a_272_);
lean_ctor_set(v_reuseFailAlloc_281_, 8, v_termination_264_);
lean_ctor_set_uint8(v_reuseFailAlloc_281_, sizeof(void*)*9, v_kind_256_);
v___x_276_ = v_reuseFailAlloc_281_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
size_t v___x_277_; size_t v___x_278_; lean_object* v___x_279_; 
v___x_277_ = ((size_t)1ULL);
v___x_278_ = lean_usize_add(v_i_247_, v___x_277_);
v___x_279_ = lean_array_uset(v_bs_x27_274_, v_i_247_, v___x_276_);
v_i_247_ = v___x_278_;
v_bs_248_ = v___x_279_;
goto _start;
}
}
else
{
lean_object* v_a_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_289_; 
lean_del_object(v___x_266_);
lean_dec_ref(v_termination_264_);
lean_dec_ref(v_type_262_);
lean_dec(v_numSectionVars_261_);
lean_dec(v_binders_260_);
lean_dec(v_declName_259_);
lean_dec_ref(v_modifiers_258_);
lean_dec(v_levelParams_257_);
lean_dec(v_ref_255_);
lean_dec_ref(v_bs_248_);
lean_dec(v___x_245_);
lean_dec_ref(v_a_244_);
v_a_282_ = lean_ctor_get(v___x_271_, 0);
v_isSharedCheck_289_ = !lean_is_exclusive(v___x_271_);
if (v_isSharedCheck_289_ == 0)
{
v___x_284_ = v___x_271_;
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_a_282_);
lean_dec(v___x_271_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_287_; 
if (v_isShared_285_ == 0)
{
v___x_287_ = v___x_284_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_a_282_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___redArg___boxed(lean_object* v_a_291_, lean_object* v___x_292_, lean_object* v_sz_293_, lean_object* v_i_294_, lean_object* v_bs_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_){
_start:
{
size_t v_sz_boxed_299_; size_t v_i_boxed_300_; lean_object* v_res_301_; 
v_sz_boxed_299_ = lean_unbox_usize(v_sz_293_);
lean_dec(v_sz_293_);
v_i_boxed_300_ = lean_unbox_usize(v_i_294_);
lean_dec(v_i_294_);
v_res_301_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___redArg(v_a_291_, v___x_292_, v_sz_boxed_299_, v_i_boxed_300_, v_bs_295_, v___y_296_, v___y_297_);
lean_dec(v___y_297_);
lean_dec_ref(v___y_296_);
return v_res_301_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4(lean_object* v_opts_302_, lean_object* v_opt_303_){
_start:
{
lean_object* v_name_304_; lean_object* v_defValue_305_; lean_object* v_map_306_; lean_object* v___x_307_; 
v_name_304_ = lean_ctor_get(v_opt_303_, 0);
v_defValue_305_ = lean_ctor_get(v_opt_303_, 1);
v_map_306_ = lean_ctor_get(v_opts_302_, 0);
v___x_307_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_306_, v_name_304_);
if (lean_obj_tag(v___x_307_) == 0)
{
uint8_t v___x_308_; 
v___x_308_ = lean_unbox(v_defValue_305_);
return v___x_308_;
}
else
{
lean_object* v_val_309_; 
v_val_309_ = lean_ctor_get(v___x_307_, 0);
lean_inc(v_val_309_);
lean_dec_ref(v___x_307_);
if (lean_obj_tag(v_val_309_) == 1)
{
uint8_t v_v_310_; 
v_v_310_ = lean_ctor_get_uint8(v_val_309_, 0);
lean_dec_ref(v_val_309_);
return v_v_310_;
}
else
{
uint8_t v___x_311_; 
lean_dec(v_val_309_);
v___x_311_ = lean_unbox(v_defValue_305_);
return v___x_311_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___boxed(lean_object* v_opts_312_, lean_object* v_opt_313_){
_start:
{
uint8_t v_res_314_; lean_object* v_r_315_; 
v_res_314_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4(v_opts_312_, v_opt_313_);
lean_dec_ref(v_opt_313_);
lean_dec_ref(v_opts_312_);
v_r_315_ = lean_box(v_res_314_);
return v_r_315_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0(void){
_start:
{
lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_316_ = lean_box(1);
v___x_317_ = l_Lean_MessageData_ofFormat(v___x_316_);
return v___x_317_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__1(void){
_start:
{
lean_object* v___x_318_; 
v___x_318_ = lean_mk_string_unchecked("while expanding", 15, 15);
return v___x_318_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__2(void){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_319_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__1, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__1_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__1);
v___x_320_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
return v___x_320_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__3(void){
_start:
{
lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_321_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__2, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__2_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__2);
v___x_322_ = l_Lean_MessageData_ofFormat(v___x_321_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5(lean_object* v_x_323_, lean_object* v_x_324_){
_start:
{
if (lean_obj_tag(v_x_324_) == 0)
{
return v_x_323_;
}
else
{
lean_object* v_head_325_; lean_object* v_tail_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_348_; 
v_head_325_ = lean_ctor_get(v_x_324_, 0);
v_tail_326_ = lean_ctor_get(v_x_324_, 1);
v_isSharedCheck_348_ = !lean_is_exclusive(v_x_324_);
if (v_isSharedCheck_348_ == 0)
{
v___x_328_ = v_x_324_;
v_isShared_329_ = v_isSharedCheck_348_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_tail_326_);
lean_inc(v_head_325_);
lean_dec(v_x_324_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_348_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v_before_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_346_; 
v_before_330_ = lean_ctor_get(v_head_325_, 0);
v_isSharedCheck_346_ = !lean_is_exclusive(v_head_325_);
if (v_isSharedCheck_346_ == 0)
{
lean_object* v_unused_347_; 
v_unused_347_ = lean_ctor_get(v_head_325_, 1);
lean_dec(v_unused_347_);
v___x_332_ = v_head_325_;
v_isShared_333_ = v_isSharedCheck_346_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_before_330_);
lean_dec(v_head_325_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_346_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_334_; lean_object* v___x_336_; 
v___x_334_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0);
if (v_isShared_333_ == 0)
{
lean_ctor_set_tag(v___x_332_, 7);
lean_ctor_set(v___x_332_, 1, v___x_334_);
lean_ctor_set(v___x_332_, 0, v_x_323_);
v___x_336_ = v___x_332_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_x_323_);
lean_ctor_set(v_reuseFailAlloc_345_, 1, v___x_334_);
v___x_336_ = v_reuseFailAlloc_345_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
lean_object* v___x_337_; lean_object* v___x_339_; 
v___x_337_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__3);
if (v_isShared_329_ == 0)
{
lean_ctor_set_tag(v___x_328_, 7);
lean_ctor_set(v___x_328_, 1, v___x_337_);
lean_ctor_set(v___x_328_, 0, v___x_336_);
v___x_339_ = v___x_328_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v___x_336_);
lean_ctor_set(v_reuseFailAlloc_344_, 1, v___x_337_);
v___x_339_ = v_reuseFailAlloc_344_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_340_ = l_Lean_MessageData_ofSyntax(v_before_330_);
v___x_341_ = l_Lean_indentD(v___x_340_);
v___x_342_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_342_, 0, v___x_339_);
lean_ctor_set(v___x_342_, 1, v___x_341_);
v_x_323_ = v___x_342_;
v_x_324_ = v_tail_326_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = lean_mk_string_unchecked("with resulting expansion", 24, 24);
return v___x_349_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__0, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__0);
v___x_351_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
return v___x_351_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__1, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__1);
v___x_353_ = l_Lean_MessageData_ofFormat(v___x_352_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(lean_object* v_msgData_354_, lean_object* v_macroStack_355_, lean_object* v___y_356_){
_start:
{
lean_object* v_options_358_; lean_object* v___x_359_; uint8_t v___x_360_; 
v_options_358_ = lean_ctor_get(v___y_356_, 2);
v___x_359_ = l_Lean_Elab_pp_macroStack;
v___x_360_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4(v_options_358_, v___x_359_);
if (v___x_360_ == 0)
{
lean_object* v___x_361_; 
lean_dec(v_macroStack_355_);
v___x_361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_361_, 0, v_msgData_354_);
return v___x_361_;
}
else
{
if (lean_obj_tag(v_macroStack_355_) == 0)
{
lean_object* v___x_362_; 
v___x_362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_362_, 0, v_msgData_354_);
return v___x_362_;
}
else
{
lean_object* v_head_363_; lean_object* v_after_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_379_; 
v_head_363_ = lean_ctor_get(v_macroStack_355_, 0);
lean_inc(v_head_363_);
v_after_364_ = lean_ctor_get(v_head_363_, 1);
v_isSharedCheck_379_ = !lean_is_exclusive(v_head_363_);
if (v_isSharedCheck_379_ == 0)
{
lean_object* v_unused_380_; 
v_unused_380_ = lean_ctor_get(v_head_363_, 0);
lean_dec(v_unused_380_);
v___x_366_ = v_head_363_;
v_isShared_367_ = v_isSharedCheck_379_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_after_364_);
lean_dec(v_head_363_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_379_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_368_; lean_object* v___x_370_; 
v___x_368_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0);
if (v_isShared_367_ == 0)
{
lean_ctor_set_tag(v___x_366_, 7);
lean_ctor_set(v___x_366_, 1, v___x_368_);
lean_ctor_set(v___x_366_, 0, v_msgData_354_);
v___x_370_ = v___x_366_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_msgData_354_);
lean_ctor_set(v_reuseFailAlloc_378_, 1, v___x_368_);
v___x_370_ = v_reuseFailAlloc_378_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v_msgData_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_371_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2);
v___x_372_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_372_, 0, v___x_370_);
lean_ctor_set(v___x_372_, 1, v___x_371_);
v___x_373_ = l_Lean_MessageData_ofSyntax(v_after_364_);
v___x_374_ = l_Lean_indentD(v___x_373_);
v_msgData_375_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_375_, 0, v___x_372_);
lean_ctor_set(v_msgData_375_, 1, v___x_374_);
v___x_376_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5(v_msgData_375_, v_macroStack_355_);
v___x_377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_377_, 0, v___x_376_);
return v___x_377_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___boxed(lean_object* v_msgData_381_, lean_object* v_macroStack_382_, lean_object* v___y_383_, lean_object* v___y_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(v_msgData_381_, v_macroStack_382_, v___y_383_);
lean_dec_ref(v___y_383_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(lean_object* v_msgData_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_){
_start:
{
lean_object* v___x_392_; lean_object* v_env_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v_mctx_396_; lean_object* v_lctx_397_; lean_object* v_options_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_392_ = lean_st_ref_get(v___y_390_);
v_env_393_ = lean_ctor_get(v___x_392_, 0);
lean_inc_ref(v_env_393_);
lean_dec(v___x_392_);
v___x_394_ = lean_st_ref_get(v___y_390_);
lean_dec(v___x_394_);
v___x_395_ = lean_st_ref_get(v___y_388_);
v_mctx_396_ = lean_ctor_get(v___x_395_, 0);
lean_inc_ref(v_mctx_396_);
lean_dec(v___x_395_);
v_lctx_397_ = lean_ctor_get(v___y_387_, 2);
v_options_398_ = lean_ctor_get(v___y_389_, 2);
lean_inc_ref(v_options_398_);
lean_inc_ref(v_lctx_397_);
v___x_399_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_399_, 0, v_env_393_);
lean_ctor_set(v___x_399_, 1, v_mctx_396_);
lean_ctor_set(v___x_399_, 2, v_lctx_397_);
lean_ctor_set(v___x_399_, 3, v_options_398_);
v___x_400_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_400_, 0, v___x_399_);
lean_ctor_set(v___x_400_, 1, v_msgData_386_);
v___x_401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_401_, 0, v___x_400_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0___boxed(lean_object* v_msgData_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(v_msgData_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_);
lean_dec(v___y_406_);
lean_dec_ref(v___y_405_);
lean_dec(v___y_404_);
lean_dec_ref(v___y_403_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(lean_object* v_msg_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_){
_start:
{
lean_object* v_ref_417_; lean_object* v___x_418_; lean_object* v_a_419_; lean_object* v_macroStack_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v_a_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_431_; 
v_ref_417_ = lean_ctor_get(v___y_414_, 5);
v___x_418_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(v_msg_409_, v___y_412_, v___y_413_, v___y_414_, v___y_415_);
v_a_419_ = lean_ctor_get(v___x_418_, 0);
lean_inc(v_a_419_);
lean_dec_ref(v___x_418_);
v_macroStack_420_ = lean_ctor_get(v___y_410_, 1);
v___x_421_ = l_Lean_Elab_getBetterRef(v_ref_417_, v_macroStack_420_);
lean_inc(v_macroStack_420_);
v___x_422_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(v_a_419_, v_macroStack_420_, v___y_414_);
v_a_423_ = lean_ctor_get(v___x_422_, 0);
v_isSharedCheck_431_ = !lean_is_exclusive(v___x_422_);
if (v_isSharedCheck_431_ == 0)
{
v___x_425_ = v___x_422_;
v_isShared_426_ = v_isSharedCheck_431_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_a_423_);
lean_dec(v___x_422_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_431_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v___x_427_; lean_object* v___x_429_; 
v___x_427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_427_, 0, v___x_421_);
lean_ctor_set(v___x_427_, 1, v_a_423_);
if (v_isShared_426_ == 0)
{
lean_ctor_set_tag(v___x_425_, 1);
lean_ctor_set(v___x_425_, 0, v___x_427_);
v___x_429_ = v___x_425_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_427_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg___boxed(lean_object* v_msg_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(v_msg_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_);
lean_dec(v___y_438_);
lean_dec_ref(v___y_437_);
lean_dec(v___y_436_);
lean_dec_ref(v___y_435_);
lean_dec(v___y_434_);
lean_dec_ref(v___y_433_);
return v_res_440_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__0(void){
_start:
{
lean_object* v___x_441_; 
v___x_441_ = lean_mk_string_unchecked("well-founded recursion cannot be used, `", 40, 40);
return v___x_441_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__1(void){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_442_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__0);
v___x_443_ = l_Lean_stringToMessageData(v___x_442_);
return v___x_443_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__2(void){
_start:
{
lean_object* v___x_444_; 
v___x_444_ = lean_mk_string_unchecked("` does not take any (non-fixed) arguments", 41, 41);
return v___x_444_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__3(void){
_start:
{
lean_object* v___x_445_; lean_object* v___x_446_; 
v___x_445_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__2);
v___x_446_ = l_Lean_stringToMessageData(v___x_445_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4(lean_object* v_as_447_, size_t v_sz_448_, size_t v_i_449_, lean_object* v_b_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_){
_start:
{
lean_object* v_a_459_; uint8_t v___x_463_; 
v___x_463_ = lean_usize_dec_lt(v_i_449_, v_sz_448_);
if (v___x_463_ == 0)
{
lean_object* v___x_464_; 
v___x_464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_464_, 0, v_b_450_);
return v___x_464_;
}
else
{
lean_object* v_array_465_; lean_object* v_start_466_; lean_object* v_stop_467_; uint8_t v___x_468_; 
v_array_465_ = lean_ctor_get(v_b_450_, 0);
v_start_466_ = lean_ctor_get(v_b_450_, 1);
v_stop_467_ = lean_ctor_get(v_b_450_, 2);
v___x_468_ = lean_nat_dec_lt(v_start_466_, v_stop_467_);
if (v___x_468_ == 0)
{
lean_object* v___x_469_; 
v___x_469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_469_, 0, v_b_450_);
return v___x_469_;
}
else
{
lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_498_; 
lean_inc(v_stop_467_);
lean_inc(v_start_466_);
lean_inc_ref(v_array_465_);
v_isSharedCheck_498_ = !lean_is_exclusive(v_b_450_);
if (v_isSharedCheck_498_ == 0)
{
lean_object* v_unused_499_; lean_object* v_unused_500_; lean_object* v_unused_501_; 
v_unused_499_ = lean_ctor_get(v_b_450_, 2);
lean_dec(v_unused_499_);
v_unused_500_ = lean_ctor_get(v_b_450_, 1);
lean_dec(v_unused_500_);
v_unused_501_ = lean_ctor_get(v_b_450_, 0);
lean_dec(v_unused_501_);
v___x_471_ = v_b_450_;
v_isShared_472_ = v_isSharedCheck_498_;
goto v_resetjp_470_;
}
else
{
lean_dec(v_b_450_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_498_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v_a_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_478_; 
v_a_473_ = lean_array_uget_borrowed(v_as_447_, v_i_449_);
v___x_474_ = lean_array_fget(v_array_465_, v_start_466_);
v___x_475_ = lean_unsigned_to_nat(1u);
v___x_476_ = lean_nat_add(v_start_466_, v___x_475_);
lean_dec(v_start_466_);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 1, v___x_476_);
v___x_478_ = v___x_471_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v_array_465_);
lean_ctor_set(v_reuseFailAlloc_497_, 1, v___x_476_);
lean_ctor_set(v_reuseFailAlloc_497_, 2, v_stop_467_);
v___x_478_ = v_reuseFailAlloc_497_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
lean_object* v___x_479_; lean_object* v___x_480_; uint8_t v___x_481_; 
v___x_479_ = lean_array_get_size(v_a_473_);
v___x_480_ = lean_unsigned_to_nat(0u);
v___x_481_ = lean_nat_dec_eq(v___x_479_, v___x_480_);
if (v___x_481_ == 0)
{
lean_dec(v___x_474_);
v_a_459_ = v___x_478_;
goto v___jp_458_;
}
else
{
lean_object* v_declName_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v_declName_482_ = lean_ctor_get(v___x_474_, 3);
lean_inc(v_declName_482_);
lean_dec(v___x_474_);
v___x_483_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__1);
v___x_484_ = l_Lean_MessageData_ofName(v_declName_482_);
v___x_485_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_485_, 0, v___x_483_);
lean_ctor_set(v___x_485_, 1, v___x_484_);
v___x_486_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___closed__3);
v___x_487_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_487_, 0, v___x_485_);
lean_ctor_set(v___x_487_, 1, v___x_486_);
v___x_488_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(v___x_487_, v___y_451_, v___y_452_, v___y_453_, v___y_454_, v___y_455_, v___y_456_);
if (lean_obj_tag(v___x_488_) == 0)
{
lean_dec_ref(v___x_488_);
v_a_459_ = v___x_478_;
goto v___jp_458_;
}
else
{
lean_object* v_a_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_496_; 
lean_dec_ref(v___x_478_);
v_a_489_ = lean_ctor_get(v___x_488_, 0);
v_isSharedCheck_496_ = !lean_is_exclusive(v___x_488_);
if (v_isSharedCheck_496_ == 0)
{
v___x_491_ = v___x_488_;
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_a_489_);
lean_dec(v___x_488_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v___x_494_; 
if (v_isShared_492_ == 0)
{
v___x_494_ = v___x_491_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_a_489_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
}
}
}
}
}
}
v___jp_458_:
{
size_t v___x_460_; size_t v___x_461_; 
v___x_460_ = ((size_t)1ULL);
v___x_461_ = lean_usize_add(v_i_449_, v___x_460_);
v_i_449_ = v___x_461_;
v_b_450_ = v_a_459_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4___boxed(lean_object* v_as_502_, lean_object* v_sz_503_, lean_object* v_i_504_, lean_object* v_b_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_){
_start:
{
size_t v_sz_boxed_513_; size_t v_i_boxed_514_; lean_object* v_res_515_; 
v_sz_boxed_513_ = lean_unbox_usize(v_sz_503_);
lean_dec(v_sz_503_);
v_i_boxed_514_ = lean_unbox_usize(v_i_504_);
lean_dec(v_i_504_);
v_res_515_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4(v_as_502_, v_sz_boxed_513_, v_i_boxed_514_, v_b_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_);
lean_dec(v___y_511_);
lean_dec_ref(v___y_510_);
lean_dec(v___y_509_);
lean_dec_ref(v___y_508_);
lean_dec(v___y_507_);
lean_dec_ref(v___y_506_);
lean_dec_ref(v_as_502_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__0(lean_object* v_a_516_, size_t v_sz_517_, size_t v___x_518_, lean_object* v___x_519_, lean_object* v___x_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__2___redArg(v_a_516_, v_sz_517_, v___x_518_, v___x_519_, v___y_525_, v___y_526_);
if (lean_obj_tag(v___x_528_) == 0)
{
lean_object* v___x_529_; 
lean_dec_ref(v___x_528_);
lean_inc_ref(v_a_516_);
v___x_529_ = l_Lean_Elab_getFixedParamPerms(v_a_516_, v___y_523_, v___y_524_, v___y_525_, v___y_526_);
if (lean_obj_tag(v___x_529_) == 0)
{
lean_object* v_a_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v_a_530_ = lean_ctor_get(v___x_529_, 0);
lean_inc_n(v_a_530_, 2);
lean_dec_ref(v___x_529_);
v___x_531_ = lean_array_get_size(v_a_516_);
v___x_532_ = lean_unsigned_to_nat(0u);
v___x_533_ = lean_mk_empty_array_with_capacity(v___x_531_);
v___x_534_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_wfRecursion_spec__3___redArg(v_a_530_, v_a_516_, v___x_531_, v___x_532_, v___x_533_, v___y_523_, v___y_524_, v___y_525_, v___y_526_);
if (lean_obj_tag(v___x_534_) == 0)
{
lean_object* v_a_535_; lean_object* v___x_536_; size_t v_sz_537_; lean_object* v___x_538_; 
v_a_535_ = lean_ctor_get(v___x_534_, 0);
lean_inc(v_a_535_);
lean_dec_ref(v___x_534_);
lean_inc_ref(v_a_516_);
v___x_536_ = l_Array_toSubarray___redArg(v_a_516_, v___x_532_, v___x_531_);
v_sz_537_ = lean_array_size(v_a_535_);
v___x_538_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__4(v_a_535_, v_sz_537_, v___x_518_, v___x_536_, v___y_521_, v___y_522_, v___y_523_, v___y_524_, v___y_525_, v___y_526_);
if (lean_obj_tag(v___x_538_) == 0)
{
lean_object* v___x_539_; lean_object* v_numSectionVars_540_; lean_object* v___x_541_; 
lean_dec_ref(v___x_538_);
v___x_539_ = lean_array_get_borrowed(v___x_520_, v_a_516_, v___x_532_);
v_numSectionVars_540_ = lean_ctor_get(v___x_539_, 5);
lean_inc(v_numSectionVars_540_);
lean_inc_ref(v_a_516_);
v___x_541_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___redArg(v_a_516_, v_numSectionVars_540_, v_sz_517_, v___x_518_, v_a_516_, v___y_525_, v___y_526_);
if (lean_obj_tag(v___x_541_) == 0)
{
lean_object* v_a_542_; lean_object* v___x_543_; 
v_a_542_ = lean_ctor_get(v___x_541_, 0);
lean_inc(v_a_542_);
lean_dec_ref(v___x_541_);
lean_inc(v_a_535_);
lean_inc(v_a_530_);
v___x_543_ = l_Lean_Elab_WF_packMutual(v_a_530_, v_a_535_, v_a_542_, v___y_523_, v___y_524_, v___y_525_, v___y_526_);
if (lean_obj_tag(v___x_543_) == 0)
{
lean_object* v_a_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_553_; 
v_a_544_ = lean_ctor_get(v___x_543_, 0);
v_isSharedCheck_553_ = !lean_is_exclusive(v___x_543_);
if (v_isSharedCheck_553_ == 0)
{
v___x_546_ = v___x_543_;
v_isShared_547_ = v_isSharedCheck_553_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_a_544_);
lean_dec(v___x_543_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_553_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_551_; 
v___x_548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_548_, 0, v_a_535_);
lean_ctor_set(v___x_548_, 1, v_a_544_);
v___x_549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_549_, 0, v_a_530_);
lean_ctor_set(v___x_549_, 1, v___x_548_);
if (v_isShared_547_ == 0)
{
lean_ctor_set(v___x_546_, 0, v___x_549_);
v___x_551_ = v___x_546_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v___x_549_);
v___x_551_ = v_reuseFailAlloc_552_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
return v___x_551_;
}
}
}
else
{
lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_561_; 
lean_dec(v_a_535_);
lean_dec(v_a_530_);
v_a_554_ = lean_ctor_get(v___x_543_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v___x_543_);
if (v_isSharedCheck_561_ == 0)
{
v___x_556_ = v___x_543_;
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_dec(v___x_543_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_559_; 
if (v_isShared_557_ == 0)
{
v___x_559_ = v___x_556_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_a_554_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
}
}
else
{
lean_object* v_a_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_569_; 
lean_dec(v_a_535_);
lean_dec(v_a_530_);
v_a_562_ = lean_ctor_get(v___x_541_, 0);
v_isSharedCheck_569_ = !lean_is_exclusive(v___x_541_);
if (v_isSharedCheck_569_ == 0)
{
v___x_564_ = v___x_541_;
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_a_562_);
lean_dec(v___x_541_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_567_; 
if (v_isShared_565_ == 0)
{
v___x_567_ = v___x_564_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v_a_562_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
}
}
else
{
lean_object* v_a_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_577_; 
lean_dec(v_a_535_);
lean_dec(v_a_530_);
lean_dec_ref(v_a_516_);
v_a_570_ = lean_ctor_get(v___x_538_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_577_ == 0)
{
v___x_572_ = v___x_538_;
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_a_570_);
lean_dec(v___x_538_);
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
else
{
lean_object* v_a_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_585_; 
lean_dec(v_a_530_);
lean_dec_ref(v_a_516_);
v_a_578_ = lean_ctor_get(v___x_534_, 0);
v_isSharedCheck_585_ = !lean_is_exclusive(v___x_534_);
if (v_isSharedCheck_585_ == 0)
{
v___x_580_ = v___x_534_;
v_isShared_581_ = v_isSharedCheck_585_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_a_578_);
lean_dec(v___x_534_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_585_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
lean_object* v___x_583_; 
if (v_isShared_581_ == 0)
{
v___x_583_ = v___x_580_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v_a_578_);
v___x_583_ = v_reuseFailAlloc_584_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
return v___x_583_;
}
}
}
}
else
{
lean_object* v_a_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_593_; 
lean_dec_ref(v_a_516_);
v_a_586_ = lean_ctor_get(v___x_529_, 0);
v_isSharedCheck_593_ = !lean_is_exclusive(v___x_529_);
if (v_isSharedCheck_593_ == 0)
{
v___x_588_ = v___x_529_;
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_a_586_);
lean_dec(v___x_529_);
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
else
{
lean_object* v_a_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_601_; 
lean_dec_ref(v_a_516_);
v_a_594_ = lean_ctor_get(v___x_528_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_528_);
if (v_isSharedCheck_601_ == 0)
{
v___x_596_ = v___x_528_;
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_a_594_);
lean_dec(v___x_528_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_599_; 
if (v_isShared_597_ == 0)
{
v___x_599_ = v___x_596_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_a_594_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__0___boxed(lean_object* v_a_602_, lean_object* v_sz_603_, lean_object* v___x_604_, lean_object* v___x_605_, lean_object* v___x_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_){
_start:
{
size_t v_sz_boxed_614_; size_t v___x_47103__boxed_615_; lean_object* v_res_616_; 
v_sz_boxed_614_ = lean_unbox_usize(v_sz_603_);
lean_dec(v_sz_603_);
v___x_47103__boxed_615_ = lean_unbox_usize(v___x_604_);
lean_dec(v___x_604_);
v_res_616_ = l_Lean_Elab_wfRecursion___lam__0(v_a_602_, v_sz_boxed_614_, v___x_47103__boxed_615_, v___x_605_, v___x_606_, v___y_607_, v___y_608_, v___y_609_, v___y_610_, v___y_611_, v___y_612_);
lean_dec(v___y_612_);
lean_dec_ref(v___y_611_);
lean_dec(v___y_610_);
lean_dec_ref(v___y_609_);
lean_dec(v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec_ref(v___x_606_);
return v_res_616_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___lam__1___closed__0(void){
_start:
{
lean_object* v___x_617_; 
v___x_617_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_617_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___lam__1___closed__1(void){
_start:
{
lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_618_ = lean_obj_once(&l_Lean_Elab_wfRecursion___lam__1___closed__0, &l_Lean_Elab_wfRecursion___lam__1___closed__0_once, _init_l_Lean_Elab_wfRecursion___lam__1___closed__0);
v___x_619_ = l_Lean_Name_mkStr1(v___x_618_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__1(lean_object* v___x_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_){
_start:
{
lean_object* v_options_628_; uint8_t v_hasTrace_629_; 
v_options_628_ = lean_ctor_get(v___y_625_, 2);
v_hasTrace_629_ = lean_ctor_get_uint8(v_options_628_, sizeof(void*)*1);
if (v_hasTrace_629_ == 0)
{
lean_object* v___x_630_; lean_object* v___x_631_; 
lean_dec(v___x_620_);
v___x_630_ = lean_box(v_hasTrace_629_);
v___x_631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_631_, 0, v___x_630_);
return v___x_631_;
}
else
{
lean_object* v_inheritedTraceOptions_632_; lean_object* v___x_633_; lean_object* v___x_634_; uint8_t v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v_inheritedTraceOptions_632_ = lean_ctor_get(v___y_625_, 13);
v___x_633_ = lean_obj_once(&l_Lean_Elab_wfRecursion___lam__1___closed__1, &l_Lean_Elab_wfRecursion___lam__1___closed__1_once, _init_l_Lean_Elab_wfRecursion___lam__1___closed__1);
v___x_634_ = l_Lean_Name_append(v___x_633_, v___x_620_);
v___x_635_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_632_, v_options_628_, v___x_634_);
lean_dec(v___x_634_);
v___x_636_ = lean_box(v___x_635_);
v___x_637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_637_, 0, v___x_636_);
return v___x_637_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__1___boxed(lean_object* v___x_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l_Lean_Elab_wfRecursion___lam__1(v___x_638_, v___y_639_, v___y_640_, v___y_641_, v___y_642_, v___y_643_, v___y_644_);
lean_dec(v___y_644_);
lean_dec_ref(v___y_643_);
lean_dec(v___y_642_);
lean_dec_ref(v___y_641_);
lean_dec(v___y_640_);
lean_dec_ref(v___y_639_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__2(lean_object* v_snd_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_){
_start:
{
lean_object* v___x_655_; 
v___x_655_ = l_Lean_Elab_addAsAxiom___redArg(v_snd_647_, v___y_652_, v___y_653_);
if (lean_obj_tag(v___x_655_) == 0)
{
lean_object* v_ref_656_; uint8_t v_kind_657_; lean_object* v_levelParams_658_; lean_object* v_modifiers_659_; lean_object* v_declName_660_; lean_object* v_binders_661_; lean_object* v_numSectionVars_662_; lean_object* v_type_663_; lean_object* v_value_664_; lean_object* v_termination_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_691_; 
lean_dec_ref(v___x_655_);
v_ref_656_ = lean_ctor_get(v_snd_647_, 0);
v_kind_657_ = lean_ctor_get_uint8(v_snd_647_, sizeof(void*)*9);
v_levelParams_658_ = lean_ctor_get(v_snd_647_, 1);
v_modifiers_659_ = lean_ctor_get(v_snd_647_, 2);
v_declName_660_ = lean_ctor_get(v_snd_647_, 3);
v_binders_661_ = lean_ctor_get(v_snd_647_, 4);
v_numSectionVars_662_ = lean_ctor_get(v_snd_647_, 5);
v_type_663_ = lean_ctor_get(v_snd_647_, 6);
v_value_664_ = lean_ctor_get(v_snd_647_, 7);
v_termination_665_ = lean_ctor_get(v_snd_647_, 8);
v_isSharedCheck_691_ = !lean_is_exclusive(v_snd_647_);
if (v_isSharedCheck_691_ == 0)
{
v___x_667_ = v_snd_647_;
v_isShared_668_ = v_isSharedCheck_691_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_termination_665_);
lean_inc(v_value_664_);
lean_inc(v_type_663_);
lean_inc(v_numSectionVars_662_);
lean_inc(v_binders_661_);
lean_inc(v_declName_660_);
lean_inc(v_modifiers_659_);
lean_inc(v_levelParams_658_);
lean_inc(v_ref_656_);
lean_dec(v_snd_647_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_691_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v___x_669_; 
v___x_669_ = l_Lean_Elab_WF_preprocess(v_value_664_, v___y_650_, v___y_651_, v___y_652_, v___y_653_);
if (lean_obj_tag(v___x_669_) == 0)
{
lean_object* v_a_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_682_; 
v_a_670_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_682_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_682_ == 0)
{
v___x_672_ = v___x_669_;
v_isShared_673_ = v_isSharedCheck_682_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_a_670_);
lean_dec(v___x_669_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_682_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v_expr_674_; lean_object* v___x_676_; 
v_expr_674_ = lean_ctor_get(v_a_670_, 0);
lean_inc_ref(v_expr_674_);
if (v_isShared_668_ == 0)
{
lean_ctor_set(v___x_667_, 7, v_expr_674_);
v___x_676_ = v___x_667_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v_ref_656_);
lean_ctor_set(v_reuseFailAlloc_681_, 1, v_levelParams_658_);
lean_ctor_set(v_reuseFailAlloc_681_, 2, v_modifiers_659_);
lean_ctor_set(v_reuseFailAlloc_681_, 3, v_declName_660_);
lean_ctor_set(v_reuseFailAlloc_681_, 4, v_binders_661_);
lean_ctor_set(v_reuseFailAlloc_681_, 5, v_numSectionVars_662_);
lean_ctor_set(v_reuseFailAlloc_681_, 6, v_type_663_);
lean_ctor_set(v_reuseFailAlloc_681_, 7, v_expr_674_);
lean_ctor_set(v_reuseFailAlloc_681_, 8, v_termination_665_);
lean_ctor_set_uint8(v_reuseFailAlloc_681_, sizeof(void*)*9, v_kind_657_);
v___x_676_ = v_reuseFailAlloc_681_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
lean_object* v___x_677_; lean_object* v___x_679_; 
v___x_677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_677_, 0, v___x_676_);
lean_ctor_set(v___x_677_, 1, v_a_670_);
if (v_isShared_673_ == 0)
{
lean_ctor_set(v___x_672_, 0, v___x_677_);
v___x_679_ = v___x_672_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v___x_677_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
}
else
{
lean_object* v_a_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_690_; 
lean_del_object(v___x_667_);
lean_dec_ref(v_termination_665_);
lean_dec_ref(v_type_663_);
lean_dec(v_numSectionVars_662_);
lean_dec(v_binders_661_);
lean_dec(v_declName_660_);
lean_dec_ref(v_modifiers_659_);
lean_dec(v_levelParams_658_);
lean_dec(v_ref_656_);
v_a_683_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_690_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_690_ == 0)
{
v___x_685_ = v___x_669_;
v_isShared_686_ = v_isSharedCheck_690_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_a_683_);
lean_dec(v___x_669_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_690_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v___x_688_; 
if (v_isShared_686_ == 0)
{
v___x_688_ = v___x_685_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v_a_683_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
return v___x_688_;
}
}
}
}
}
else
{
lean_object* v_a_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_699_; 
lean_dec_ref(v_snd_647_);
v_a_692_ = lean_ctor_get(v___x_655_, 0);
v_isSharedCheck_699_ = !lean_is_exclusive(v___x_655_);
if (v_isSharedCheck_699_ == 0)
{
v___x_694_ = v___x_655_;
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_a_692_);
lean_dec(v___x_655_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v___x_697_; 
if (v_isShared_695_ == 0)
{
v___x_697_ = v___x_694_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_a_692_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__2___boxed(lean_object* v_snd_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_){
_start:
{
lean_object* v_res_708_; 
v_res_708_ = l_Lean_Elab_wfRecursion___lam__2(v_snd_700_, v___y_701_, v___y_702_, v___y_703_, v___y_704_, v___y_705_, v___y_706_);
lean_dec(v___y_706_);
lean_dec_ref(v___y_705_);
lean_dec(v___y_704_);
lean_dec_ref(v___y_703_);
lean_dec(v___y_702_);
lean_dec_ref(v___y_701_);
return v_res_708_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_709_; 
v___x_709_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_709_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_710_; 
v___x_710_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_710_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_711_; 
v___x_711_ = lean_mk_string_unchecked("unsolvedGoals", 13, 13);
return v___x_711_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_712_; 
v___x_712_ = lean_mk_string_unchecked("synthPlaceholder", 16, 16);
return v___x_712_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__4(void){
_start:
{
lean_object* v___x_713_; 
v___x_713_ = lean_mk_string_unchecked("lean", 4, 4);
return v___x_713_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_714_; 
v___x_714_ = lean_mk_string_unchecked("inductionWithNoAlts", 19, 19);
return v___x_714_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__6(void){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = lean_mk_string_unchecked("_namedError", 11, 11);
return v___x_715_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0(uint8_t v___y_716_, uint8_t v_suppressElabErrors_717_, lean_object* v_x_718_){
_start:
{
if (lean_obj_tag(v_x_718_) == 1)
{
lean_object* v_pre_719_; 
v_pre_719_ = lean_ctor_get(v_x_718_, 0);
switch(lean_obj_tag(v_pre_719_))
{
case 1:
{
lean_object* v_pre_720_; 
v_pre_720_ = lean_ctor_get(v_pre_719_, 0);
switch(lean_obj_tag(v_pre_720_))
{
case 0:
{
lean_object* v_str_721_; lean_object* v_str_722_; lean_object* v___x_723_; uint8_t v___x_724_; 
v_str_721_ = lean_ctor_get(v_x_718_, 1);
v_str_722_ = lean_ctor_get(v_pre_719_, 1);
v___x_723_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0);
v___x_724_ = lean_string_dec_eq(v_str_722_, v___x_723_);
if (v___x_724_ == 0)
{
lean_object* v___x_725_; uint8_t v___x_726_; 
v___x_725_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__1, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__1_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__1);
v___x_726_ = lean_string_dec_eq(v_str_722_, v___x_725_);
if (v___x_726_ == 0)
{
return v___y_716_;
}
else
{
lean_object* v___x_727_; uint8_t v___x_728_; 
v___x_727_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__2, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__2_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__2);
v___x_728_ = lean_string_dec_eq(v_str_721_, v___x_727_);
if (v___x_728_ == 0)
{
return v___y_716_;
}
else
{
return v_suppressElabErrors_717_;
}
}
}
else
{
lean_object* v___x_729_; uint8_t v___x_730_; 
v___x_729_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__3, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__3_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__3);
v___x_730_ = lean_string_dec_eq(v_str_721_, v___x_729_);
if (v___x_730_ == 0)
{
return v___y_716_;
}
else
{
return v_suppressElabErrors_717_;
}
}
}
case 1:
{
lean_object* v_pre_731_; 
v_pre_731_ = lean_ctor_get(v_pre_720_, 0);
if (lean_obj_tag(v_pre_731_) == 0)
{
lean_object* v_str_732_; lean_object* v_str_733_; lean_object* v_str_734_; lean_object* v___x_735_; uint8_t v___x_736_; 
v_str_732_ = lean_ctor_get(v_x_718_, 1);
v_str_733_ = lean_ctor_get(v_pre_719_, 1);
v_str_734_ = lean_ctor_get(v_pre_720_, 1);
v___x_735_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__4, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__4_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__4);
v___x_736_ = lean_string_dec_eq(v_str_734_, v___x_735_);
if (v___x_736_ == 0)
{
return v___y_716_;
}
else
{
lean_object* v___x_737_; uint8_t v___x_738_; 
v___x_737_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__5, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__5_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__5);
v___x_738_ = lean_string_dec_eq(v_str_733_, v___x_737_);
if (v___x_738_ == 0)
{
return v___y_716_;
}
else
{
lean_object* v___x_739_; uint8_t v___x_740_; 
v___x_739_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__6, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__6_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__6);
v___x_740_ = lean_string_dec_eq(v_str_732_, v___x_739_);
if (v___x_740_ == 0)
{
return v___y_716_;
}
else
{
return v_suppressElabErrors_717_;
}
}
}
}
else
{
return v___y_716_;
}
}
default: 
{
return v___y_716_;
}
}
}
case 0:
{
lean_object* v_str_741_; lean_object* v___x_742_; uint8_t v___x_743_; 
v_str_741_ = lean_ctor_get(v_x_718_, 1);
v___x_742_ = lean_obj_once(&l_Lean_Elab_wfRecursion___lam__1___closed__0, &l_Lean_Elab_wfRecursion___lam__1___closed__0_once, _init_l_Lean_Elab_wfRecursion___lam__1___closed__0);
v___x_743_ = lean_string_dec_eq(v_str_741_, v___x_742_);
if (v___x_743_ == 0)
{
return v___y_716_;
}
else
{
return v_suppressElabErrors_717_;
}
}
default: 
{
return v___y_716_;
}
}
}
else
{
return v___y_716_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___boxed(lean_object* v___y_744_, lean_object* v_suppressElabErrors_745_, lean_object* v_x_746_){
_start:
{
uint8_t v___y_47435__boxed_747_; uint8_t v_suppressElabErrors_boxed_748_; uint8_t v_res_749_; lean_object* v_r_750_; 
v___y_47435__boxed_747_ = lean_unbox(v___y_744_);
v_suppressElabErrors_boxed_748_ = lean_unbox(v_suppressElabErrors_745_);
v_res_749_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0(v___y_47435__boxed_747_, v_suppressElabErrors_boxed_748_, v_x_746_);
lean_dec(v_x_746_);
v_r_750_ = lean_box(v_res_749_);
return v_r_750_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0(void){
_start:
{
lean_object* v___x_751_; 
v___x_751_ = lean_mk_string_unchecked("", 0, 0);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg(lean_object* v_ref_752_, lean_object* v_msgData_753_, uint8_t v_severity_754_, uint8_t v_isSilent_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_){
_start:
{
lean_object* v___y_762_; uint8_t v___y_763_; uint8_t v___y_764_; lean_object* v___y_765_; lean_object* v___y_766_; lean_object* v___y_767_; lean_object* v___y_768_; lean_object* v___y_769_; lean_object* v___y_770_; lean_object* v___y_798_; uint8_t v___y_799_; lean_object* v___y_800_; uint8_t v___y_801_; uint8_t v___y_802_; lean_object* v___y_803_; lean_object* v___y_804_; lean_object* v___y_805_; lean_object* v___y_823_; uint8_t v___y_824_; lean_object* v___y_825_; uint8_t v___y_826_; uint8_t v___y_827_; lean_object* v___y_828_; lean_object* v___y_829_; lean_object* v___y_830_; lean_object* v___y_834_; lean_object* v___y_835_; uint8_t v___y_836_; lean_object* v___y_837_; uint8_t v___y_838_; lean_object* v___y_839_; uint8_t v___y_840_; uint8_t v___x_845_; lean_object* v___y_847_; uint8_t v___y_848_; lean_object* v___y_849_; lean_object* v___y_850_; lean_object* v___y_851_; uint8_t v___y_852_; uint8_t v___y_853_; uint8_t v___y_855_; uint8_t v___x_870_; 
v___x_845_ = 2;
v___x_870_ = l_Lean_instBEqMessageSeverity_beq(v_severity_754_, v___x_845_);
if (v___x_870_ == 0)
{
v___y_855_ = v___x_870_;
goto v___jp_854_;
}
else
{
uint8_t v___x_871_; 
lean_inc_ref(v_msgData_753_);
v___x_871_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_753_);
v___y_855_ = v___x_871_;
goto v___jp_854_;
}
v___jp_761_:
{
lean_object* v___x_771_; lean_object* v_currNamespace_772_; lean_object* v_openDecls_773_; lean_object* v_env_774_; lean_object* v_nextMacroScope_775_; lean_object* v_ngen_776_; lean_object* v_auxDeclNGen_777_; lean_object* v_traceState_778_; lean_object* v_cache_779_; lean_object* v_messages_780_; lean_object* v_infoState_781_; lean_object* v_snapshotTasks_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_796_; 
v___x_771_ = lean_st_ref_take(v___y_770_);
v_currNamespace_772_ = lean_ctor_get(v___y_769_, 6);
v_openDecls_773_ = lean_ctor_get(v___y_769_, 7);
v_env_774_ = lean_ctor_get(v___x_771_, 0);
v_nextMacroScope_775_ = lean_ctor_get(v___x_771_, 1);
v_ngen_776_ = lean_ctor_get(v___x_771_, 2);
v_auxDeclNGen_777_ = lean_ctor_get(v___x_771_, 3);
v_traceState_778_ = lean_ctor_get(v___x_771_, 4);
v_cache_779_ = lean_ctor_get(v___x_771_, 5);
v_messages_780_ = lean_ctor_get(v___x_771_, 6);
v_infoState_781_ = lean_ctor_get(v___x_771_, 7);
v_snapshotTasks_782_ = lean_ctor_get(v___x_771_, 8);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_771_);
if (v_isSharedCheck_796_ == 0)
{
v___x_784_ = v___x_771_;
v_isShared_785_ = v_isSharedCheck_796_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_snapshotTasks_782_);
lean_inc(v_infoState_781_);
lean_inc(v_messages_780_);
lean_inc(v_cache_779_);
lean_inc(v_traceState_778_);
lean_inc(v_auxDeclNGen_777_);
lean_inc(v_ngen_776_);
lean_inc(v_nextMacroScope_775_);
lean_inc(v_env_774_);
lean_dec(v___x_771_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_796_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_791_; 
lean_inc(v_openDecls_773_);
lean_inc(v_currNamespace_772_);
v___x_786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_786_, 0, v_currNamespace_772_);
lean_ctor_set(v___x_786_, 1, v_openDecls_773_);
v___x_787_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_787_, 0, v___x_786_);
lean_ctor_set(v___x_787_, 1, v___y_767_);
lean_inc_ref(v___y_768_);
lean_inc_ref(v___y_762_);
v___x_788_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_788_, 0, v___y_762_);
lean_ctor_set(v___x_788_, 1, v___y_766_);
lean_ctor_set(v___x_788_, 2, v___y_765_);
lean_ctor_set(v___x_788_, 3, v___y_768_);
lean_ctor_set(v___x_788_, 4, v___x_787_);
lean_ctor_set_uint8(v___x_788_, sizeof(void*)*5, v___y_763_);
lean_ctor_set_uint8(v___x_788_, sizeof(void*)*5 + 1, v___y_764_);
lean_ctor_set_uint8(v___x_788_, sizeof(void*)*5 + 2, v_isSilent_755_);
v___x_789_ = l_Lean_MessageLog_add(v___x_788_, v_messages_780_);
if (v_isShared_785_ == 0)
{
lean_ctor_set(v___x_784_, 6, v___x_789_);
v___x_791_ = v___x_784_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_env_774_);
lean_ctor_set(v_reuseFailAlloc_795_, 1, v_nextMacroScope_775_);
lean_ctor_set(v_reuseFailAlloc_795_, 2, v_ngen_776_);
lean_ctor_set(v_reuseFailAlloc_795_, 3, v_auxDeclNGen_777_);
lean_ctor_set(v_reuseFailAlloc_795_, 4, v_traceState_778_);
lean_ctor_set(v_reuseFailAlloc_795_, 5, v_cache_779_);
lean_ctor_set(v_reuseFailAlloc_795_, 6, v___x_789_);
lean_ctor_set(v_reuseFailAlloc_795_, 7, v_infoState_781_);
lean_ctor_set(v_reuseFailAlloc_795_, 8, v_snapshotTasks_782_);
v___x_791_ = v_reuseFailAlloc_795_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_792_ = lean_st_ref_set(v___y_770_, v___x_791_);
v___x_793_ = lean_box(0);
v___x_794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_794_, 0, v___x_793_);
return v___x_794_;
}
}
}
v___jp_797_:
{
lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v_a_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_821_; 
v___x_806_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_753_);
v___x_807_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(v___x_806_, v___y_756_, v___y_757_, v___y_758_, v___y_759_);
v_a_808_ = lean_ctor_get(v___x_807_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_807_);
if (v_isSharedCheck_821_ == 0)
{
v___x_810_ = v___x_807_;
v_isShared_811_ = v_isSharedCheck_821_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_a_808_);
lean_dec(v___x_807_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_821_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
lean_inc_ref_n(v___y_804_, 2);
v___x_812_ = l_Lean_FileMap_toPosition(v___y_804_, v___y_803_);
lean_dec(v___y_803_);
v___x_813_ = l_Lean_FileMap_toPosition(v___y_804_, v___y_805_);
lean_dec(v___y_805_);
v___x_814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_814_, 0, v___x_813_);
v___x_815_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0);
if (v___y_799_ == 0)
{
lean_del_object(v___x_810_);
lean_dec_ref(v___y_798_);
v___y_762_ = v___y_800_;
v___y_763_ = v___y_801_;
v___y_764_ = v___y_802_;
v___y_765_ = v___x_814_;
v___y_766_ = v___x_812_;
v___y_767_ = v_a_808_;
v___y_768_ = v___x_815_;
v___y_769_ = v___y_758_;
v___y_770_ = v___y_759_;
goto v___jp_761_;
}
else
{
uint8_t v___x_816_; 
lean_inc(v_a_808_);
v___x_816_ = l_Lean_MessageData_hasTag(v___y_798_, v_a_808_);
if (v___x_816_ == 0)
{
lean_object* v___x_817_; lean_object* v___x_819_; 
lean_dec_ref(v___x_814_);
lean_dec_ref(v___x_812_);
lean_dec(v_a_808_);
v___x_817_ = lean_box(0);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 0, v___x_817_);
v___x_819_ = v___x_810_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v___x_817_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
else
{
lean_del_object(v___x_810_);
v___y_762_ = v___y_800_;
v___y_763_ = v___y_801_;
v___y_764_ = v___y_802_;
v___y_765_ = v___x_814_;
v___y_766_ = v___x_812_;
v___y_767_ = v_a_808_;
v___y_768_ = v___x_815_;
v___y_769_ = v___y_758_;
v___y_770_ = v___y_759_;
goto v___jp_761_;
}
}
}
}
v___jp_822_:
{
lean_object* v___x_831_; 
v___x_831_ = l_Lean_Syntax_getTailPos_x3f(v___y_828_, v___y_826_);
lean_dec(v___y_828_);
if (lean_obj_tag(v___x_831_) == 0)
{
lean_inc(v___y_830_);
v___y_798_ = v___y_823_;
v___y_799_ = v___y_824_;
v___y_800_ = v___y_825_;
v___y_801_ = v___y_826_;
v___y_802_ = v___y_827_;
v___y_803_ = v___y_830_;
v___y_804_ = v___y_829_;
v___y_805_ = v___y_830_;
goto v___jp_797_;
}
else
{
lean_object* v_val_832_; 
v_val_832_ = lean_ctor_get(v___x_831_, 0);
lean_inc(v_val_832_);
lean_dec_ref(v___x_831_);
v___y_798_ = v___y_823_;
v___y_799_ = v___y_824_;
v___y_800_ = v___y_825_;
v___y_801_ = v___y_826_;
v___y_802_ = v___y_827_;
v___y_803_ = v___y_830_;
v___y_804_ = v___y_829_;
v___y_805_ = v_val_832_;
goto v___jp_797_;
}
}
v___jp_833_:
{
lean_object* v_ref_841_; lean_object* v___x_842_; 
v_ref_841_ = l_Lean_replaceRef(v_ref_752_, v___y_835_);
v___x_842_ = l_Lean_Syntax_getPos_x3f(v_ref_841_, v___y_838_);
if (lean_obj_tag(v___x_842_) == 0)
{
lean_object* v___x_843_; 
v___x_843_ = lean_unsigned_to_nat(0u);
v___y_823_ = v___y_834_;
v___y_824_ = v___y_836_;
v___y_825_ = v___y_837_;
v___y_826_ = v___y_838_;
v___y_827_ = v___y_840_;
v___y_828_ = v_ref_841_;
v___y_829_ = v___y_839_;
v___y_830_ = v___x_843_;
goto v___jp_822_;
}
else
{
lean_object* v_val_844_; 
v_val_844_ = lean_ctor_get(v___x_842_, 0);
lean_inc(v_val_844_);
lean_dec_ref(v___x_842_);
v___y_823_ = v___y_834_;
v___y_824_ = v___y_836_;
v___y_825_ = v___y_837_;
v___y_826_ = v___y_838_;
v___y_827_ = v___y_840_;
v___y_828_ = v_ref_841_;
v___y_829_ = v___y_839_;
v___y_830_ = v_val_844_;
goto v___jp_822_;
}
}
v___jp_846_:
{
if (v___y_853_ == 0)
{
v___y_834_ = v___y_850_;
v___y_835_ = v___y_847_;
v___y_836_ = v___y_848_;
v___y_837_ = v___y_849_;
v___y_838_ = v___y_852_;
v___y_839_ = v___y_851_;
v___y_840_ = v_severity_754_;
goto v___jp_833_;
}
else
{
v___y_834_ = v___y_850_;
v___y_835_ = v___y_847_;
v___y_836_ = v___y_848_;
v___y_837_ = v___y_849_;
v___y_838_ = v___y_852_;
v___y_839_ = v___y_851_;
v___y_840_ = v___x_845_;
goto v___jp_833_;
}
}
v___jp_854_:
{
if (v___y_855_ == 0)
{
lean_object* v_fileName_856_; lean_object* v_fileMap_857_; lean_object* v_options_858_; lean_object* v_ref_859_; uint8_t v_suppressElabErrors_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___f_863_; uint8_t v___x_864_; uint8_t v___x_865_; 
v_fileName_856_ = lean_ctor_get(v___y_758_, 0);
v_fileMap_857_ = lean_ctor_get(v___y_758_, 1);
v_options_858_ = lean_ctor_get(v___y_758_, 2);
v_ref_859_ = lean_ctor_get(v___y_758_, 5);
v_suppressElabErrors_860_ = lean_ctor_get_uint8(v___y_758_, sizeof(void*)*14 + 1);
v___x_861_ = lean_box(v___y_855_);
v___x_862_ = lean_box(v_suppressElabErrors_860_);
v___f_863_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_863_, 0, v___x_861_);
lean_closure_set(v___f_863_, 1, v___x_862_);
v___x_864_ = 1;
v___x_865_ = l_Lean_instBEqMessageSeverity_beq(v_severity_754_, v___x_864_);
if (v___x_865_ == 0)
{
v___y_847_ = v_ref_859_;
v___y_848_ = v_suppressElabErrors_860_;
v___y_849_ = v_fileName_856_;
v___y_850_ = v___f_863_;
v___y_851_ = v_fileMap_857_;
v___y_852_ = v___y_855_;
v___y_853_ = v___x_865_;
goto v___jp_846_;
}
else
{
lean_object* v___x_866_; uint8_t v___x_867_; 
v___x_866_ = l_Lean_warningAsError;
v___x_867_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4(v_options_858_, v___x_866_);
v___y_847_ = v_ref_859_;
v___y_848_ = v_suppressElabErrors_860_;
v___y_849_ = v_fileName_856_;
v___y_850_ = v___f_863_;
v___y_851_ = v_fileMap_857_;
v___y_852_ = v___y_855_;
v___y_853_ = v___x_867_;
goto v___jp_846_;
}
}
else
{
lean_object* v___x_868_; lean_object* v___x_869_; 
lean_dec_ref(v_msgData_753_);
v___x_868_ = lean_box(0);
v___x_869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_869_, 0, v___x_868_);
return v___x_869_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___boxed(lean_object* v_ref_872_, lean_object* v_msgData_873_, lean_object* v_severity_874_, lean_object* v_isSilent_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_){
_start:
{
uint8_t v_severity_boxed_881_; uint8_t v_isSilent_boxed_882_; lean_object* v_res_883_; 
v_severity_boxed_881_ = lean_unbox(v_severity_874_);
v_isSilent_boxed_882_ = lean_unbox(v_isSilent_875_);
v_res_883_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg(v_ref_872_, v_msgData_873_, v_severity_boxed_881_, v_isSilent_boxed_882_, v___y_876_, v___y_877_, v___y_878_, v___y_879_);
lean_dec(v___y_879_);
lean_dec_ref(v___y_878_);
lean_dec(v___y_877_);
lean_dec_ref(v___y_876_);
lean_dec(v_ref_872_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11(lean_object* v_ref_884_, lean_object* v_msgData_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_){
_start:
{
uint8_t v___x_893_; uint8_t v___x_894_; lean_object* v___x_895_; 
v___x_893_ = 1;
v___x_894_ = 0;
v___x_895_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg(v_ref_884_, v_msgData_885_, v___x_893_, v___x_894_, v___y_888_, v___y_889_, v___y_890_, v___y_891_);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11___boxed(lean_object* v_ref_896_, lean_object* v_msgData_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_){
_start:
{
lean_object* v_res_905_; 
v_res_905_ = l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11(v_ref_896_, v_msgData_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_, v___y_902_, v___y_903_);
lean_dec(v___y_903_);
lean_dec_ref(v___y_902_);
lean_dec(v___y_901_);
lean_dec_ref(v___y_900_);
lean_dec(v___y_899_);
lean_dec_ref(v___y_898_);
lean_dec(v_ref_896_);
return v_res_905_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__0(void){
_start:
{
lean_object* v___x_906_; 
v___x_906_ = lean_mk_string_unchecked("marking functions defined by well-founded recursion as `", 56, 56);
return v___x_906_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__1(void){
_start:
{
lean_object* v___x_907_; 
v___x_907_ = lean_mk_string_unchecked("` is not effective", 18, 18);
return v___x_907_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__2(void){
_start:
{
lean_object* v___x_908_; 
v___x_908_ = lean_mk_string_unchecked("reducible", 9, 9);
return v___x_908_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__3(void){
_start:
{
lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_909_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__2, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__2);
v___x_910_ = l_Lean_Name_mkStr1(v___x_909_);
return v___x_910_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__4(void){
_start:
{
lean_object* v___x_911_; 
v___x_911_ = lean_mk_string_unchecked("semireducible", 13, 13);
return v___x_911_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__5(void){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_912_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__4, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__4);
v___x_913_ = l_Lean_Name_mkStr1(v___x_912_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12(lean_object* v_as_914_, size_t v_i_915_, size_t v_stop_916_, lean_object* v_b_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_){
_start:
{
lean_object* v_a_926_; uint8_t v___x_930_; 
v___x_930_ = lean_usize_dec_eq(v_i_915_, v_stop_916_);
if (v___x_930_ == 0)
{
lean_object* v___x_931_; lean_object* v_name_932_; lean_object* v_stx_933_; uint8_t v___y_935_; lean_object* v___x_945_; uint8_t v___x_946_; 
v___x_931_ = lean_array_uget_borrowed(v_as_914_, v_i_915_);
v_name_932_ = lean_ctor_get(v___x_931_, 0);
v_stx_933_ = lean_ctor_get(v___x_931_, 1);
v___x_945_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__3);
v___x_946_ = lean_name_eq(v_name_932_, v___x_945_);
if (v___x_946_ == 0)
{
lean_object* v___x_947_; uint8_t v___x_948_; 
v___x_947_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__5, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__5);
v___x_948_ = lean_name_eq(v_name_932_, v___x_947_);
if (v___x_948_ == 0)
{
lean_object* v___x_949_; 
v___x_949_ = lean_box(0);
v_a_926_ = v___x_949_;
goto v___jp_925_;
}
else
{
v___y_935_ = v___x_948_;
goto v___jp_934_;
}
}
else
{
v___y_935_ = v___x_946_;
goto v___jp_934_;
}
v___jp_934_:
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_936_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__0);
lean_inc(v_name_932_);
v___x_937_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_932_, v___y_935_);
v___x_938_ = lean_string_append(v___x_936_, v___x_937_);
lean_dec_ref(v___x_937_);
v___x_939_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__1);
v___x_940_ = lean_string_append(v___x_938_, v___x_939_);
v___x_941_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_941_, 0, v___x_940_);
v___x_942_ = l_Lean_MessageData_ofFormat(v___x_941_);
v___x_943_ = l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11(v_stx_933_, v___x_942_, v___y_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_);
if (lean_obj_tag(v___x_943_) == 0)
{
lean_object* v_a_944_; 
v_a_944_ = lean_ctor_get(v___x_943_, 0);
lean_inc(v_a_944_);
lean_dec_ref(v___x_943_);
v_a_926_ = v_a_944_;
goto v___jp_925_;
}
else
{
return v___x_943_;
}
}
}
else
{
lean_object* v___x_950_; 
v___x_950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_950_, 0, v_b_917_);
return v___x_950_;
}
v___jp_925_:
{
size_t v___x_927_; size_t v___x_928_; 
v___x_927_ = ((size_t)1ULL);
v___x_928_ = lean_usize_add(v_i_915_, v___x_927_);
v_i_915_ = v___x_928_;
v_b_917_ = v_a_926_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___boxed(lean_object* v_as_951_, lean_object* v_i_952_, lean_object* v_stop_953_, lean_object* v_b_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_){
_start:
{
size_t v_i_boxed_962_; size_t v_stop_boxed_963_; lean_object* v_res_964_; 
v_i_boxed_962_ = lean_unbox_usize(v_i_952_);
lean_dec(v_i_952_);
v_stop_boxed_963_ = lean_unbox_usize(v_stop_953_);
lean_dec(v_stop_953_);
v_res_964_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12(v_as_951_, v_i_boxed_962_, v_stop_boxed_963_, v_b_954_, v___y_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_);
lean_dec(v___y_960_);
lean_dec_ref(v___y_959_);
lean_dec(v___y_958_);
lean_dec_ref(v___y_957_);
lean_dec(v___y_956_);
lean_dec_ref(v___y_955_);
lean_dec_ref(v_as_951_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13(lean_object* v_as_965_, size_t v_i_966_, size_t v_stop_967_, lean_object* v_b_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_){
_start:
{
lean_object* v_a_977_; lean_object* v___y_982_; uint8_t v___x_984_; 
v___x_984_ = lean_usize_dec_eq(v_i_966_, v_stop_967_);
if (v___x_984_ == 0)
{
lean_object* v___x_985_; lean_object* v_modifiers_986_; lean_object* v_attrs_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; uint8_t v___x_991_; 
v___x_985_ = lean_array_uget_borrowed(v_as_965_, v_i_966_);
v_modifiers_986_ = lean_ctor_get(v___x_985_, 2);
v_attrs_987_ = lean_ctor_get(v_modifiers_986_, 2);
v___x_988_ = lean_unsigned_to_nat(0u);
v___x_989_ = lean_array_get_size(v_attrs_987_);
v___x_990_ = lean_box(0);
v___x_991_ = lean_nat_dec_lt(v___x_988_, v___x_989_);
if (v___x_991_ == 0)
{
v_a_977_ = v___x_990_;
goto v___jp_976_;
}
else
{
uint8_t v___x_992_; 
v___x_992_ = lean_nat_dec_le(v___x_989_, v___x_989_);
if (v___x_992_ == 0)
{
if (v___x_991_ == 0)
{
v_a_977_ = v___x_990_;
goto v___jp_976_;
}
else
{
size_t v___x_993_; size_t v___x_994_; lean_object* v___x_995_; 
v___x_993_ = ((size_t)0ULL);
v___x_994_ = lean_usize_of_nat(v___x_989_);
v___x_995_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12(v_attrs_987_, v___x_993_, v___x_994_, v___x_990_, v___y_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_);
v___y_982_ = v___x_995_;
goto v___jp_981_;
}
}
else
{
size_t v___x_996_; size_t v___x_997_; lean_object* v___x_998_; 
v___x_996_ = ((size_t)0ULL);
v___x_997_ = lean_usize_of_nat(v___x_989_);
v___x_998_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12(v_attrs_987_, v___x_996_, v___x_997_, v___x_990_, v___y_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_);
v___y_982_ = v___x_998_;
goto v___jp_981_;
}
}
}
else
{
lean_object* v___x_999_; 
v___x_999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_999_, 0, v_b_968_);
return v___x_999_;
}
v___jp_976_:
{
size_t v___x_978_; size_t v___x_979_; 
v___x_978_ = ((size_t)1ULL);
v___x_979_ = lean_usize_add(v_i_966_, v___x_978_);
v_i_966_ = v___x_979_;
v_b_968_ = v_a_977_;
goto _start;
}
v___jp_981_:
{
if (lean_obj_tag(v___y_982_) == 0)
{
lean_object* v_a_983_; 
v_a_983_ = lean_ctor_get(v___y_982_, 0);
lean_inc(v_a_983_);
lean_dec_ref(v___y_982_);
v_a_977_ = v_a_983_;
goto v___jp_976_;
}
else
{
return v___y_982_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13___boxed(lean_object* v_as_1000_, lean_object* v_i_1001_, lean_object* v_stop_1002_, lean_object* v_b_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_){
_start:
{
size_t v_i_boxed_1011_; size_t v_stop_boxed_1012_; lean_object* v_res_1013_; 
v_i_boxed_1011_ = lean_unbox_usize(v_i_1001_);
lean_dec(v_i_1001_);
v_stop_boxed_1012_ = lean_unbox_usize(v_stop_1002_);
lean_dec(v_stop_1002_);
v_res_1013_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13(v_as_1000_, v_i_boxed_1011_, v_stop_boxed_1012_, v_b_1003_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_, v___y_1008_, v___y_1009_);
lean_dec(v___y_1009_);
lean_dec_ref(v___y_1008_);
lean_dec(v___y_1007_);
lean_dec_ref(v___y_1006_);
lean_dec(v___y_1005_);
lean_dec_ref(v___y_1004_);
lean_dec_ref(v_as_1000_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10(size_t v_sz_1014_, size_t v_i_1015_, lean_object* v_bs_1016_){
_start:
{
uint8_t v___x_1017_; 
v___x_1017_ = lean_usize_dec_lt(v_i_1015_, v_sz_1014_);
if (v___x_1017_ == 0)
{
return v_bs_1016_;
}
else
{
lean_object* v_v_1018_; lean_object* v_termination_1019_; lean_object* v_decreasingBy_x3f_1020_; lean_object* v___x_1021_; lean_object* v_bs_x27_1022_; size_t v___x_1023_; size_t v___x_1024_; lean_object* v___x_1025_; 
v_v_1018_ = lean_array_uget_borrowed(v_bs_1016_, v_i_1015_);
v_termination_1019_ = lean_ctor_get(v_v_1018_, 8);
v_decreasingBy_x3f_1020_ = lean_ctor_get(v_termination_1019_, 4);
lean_inc(v_decreasingBy_x3f_1020_);
v___x_1021_ = lean_unsigned_to_nat(0u);
v_bs_x27_1022_ = lean_array_uset(v_bs_1016_, v_i_1015_, v___x_1021_);
v___x_1023_ = ((size_t)1ULL);
v___x_1024_ = lean_usize_add(v_i_1015_, v___x_1023_);
v___x_1025_ = lean_array_uset(v_bs_x27_1022_, v_i_1015_, v_decreasingBy_x3f_1020_);
v_i_1015_ = v___x_1024_;
v_bs_1016_ = v___x_1025_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10___boxed(lean_object* v_sz_1027_, lean_object* v_i_1028_, lean_object* v_bs_1029_){
_start:
{
size_t v_sz_boxed_1030_; size_t v_i_boxed_1031_; lean_object* v_res_1032_; 
v_sz_boxed_1030_ = lean_unbox_usize(v_sz_1027_);
lean_dec(v_sz_1027_);
v_i_boxed_1031_ = lean_unbox_usize(v_i_1028_);
lean_dec(v_i_1028_);
v_res_1032_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10(v_sz_boxed_1030_, v_i_boxed_1031_, v_bs_1029_);
return v_res_1032_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0(void){
_start:
{
lean_object* v___x_1033_; double v___x_1034_; 
v___x_1033_ = lean_unsigned_to_nat(0u);
v___x_1034_ = lean_float_of_nat(v___x_1033_);
return v___x_1034_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__1(void){
_start:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; 
v___x_1035_ = lean_unsigned_to_nat(0u);
v___x_1036_ = lean_mk_empty_array_with_capacity(v___x_1035_);
return v___x_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(lean_object* v_cls_1037_, lean_object* v_msg_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
lean_object* v_ref_1044_; lean_object* v___x_1045_; lean_object* v_a_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1090_; 
v_ref_1044_ = lean_ctor_get(v___y_1041_, 5);
v___x_1045_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(v_msg_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_);
v_a_1046_ = lean_ctor_get(v___x_1045_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v___x_1045_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1048_ = v___x_1045_;
v_isShared_1049_ = v_isSharedCheck_1090_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_a_1046_);
lean_dec(v___x_1045_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1090_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1050_; lean_object* v_traceState_1051_; lean_object* v_env_1052_; lean_object* v_nextMacroScope_1053_; lean_object* v_ngen_1054_; lean_object* v_auxDeclNGen_1055_; lean_object* v_cache_1056_; lean_object* v_messages_1057_; lean_object* v_infoState_1058_; lean_object* v_snapshotTasks_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1089_; 
v___x_1050_ = lean_st_ref_take(v___y_1042_);
v_traceState_1051_ = lean_ctor_get(v___x_1050_, 4);
v_env_1052_ = lean_ctor_get(v___x_1050_, 0);
v_nextMacroScope_1053_ = lean_ctor_get(v___x_1050_, 1);
v_ngen_1054_ = lean_ctor_get(v___x_1050_, 2);
v_auxDeclNGen_1055_ = lean_ctor_get(v___x_1050_, 3);
v_cache_1056_ = lean_ctor_get(v___x_1050_, 5);
v_messages_1057_ = lean_ctor_get(v___x_1050_, 6);
v_infoState_1058_ = lean_ctor_get(v___x_1050_, 7);
v_snapshotTasks_1059_ = lean_ctor_get(v___x_1050_, 8);
v_isSharedCheck_1089_ = !lean_is_exclusive(v___x_1050_);
if (v_isSharedCheck_1089_ == 0)
{
v___x_1061_ = v___x_1050_;
v_isShared_1062_ = v_isSharedCheck_1089_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_snapshotTasks_1059_);
lean_inc(v_infoState_1058_);
lean_inc(v_messages_1057_);
lean_inc(v_cache_1056_);
lean_inc(v_traceState_1051_);
lean_inc(v_auxDeclNGen_1055_);
lean_inc(v_ngen_1054_);
lean_inc(v_nextMacroScope_1053_);
lean_inc(v_env_1052_);
lean_dec(v___x_1050_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1089_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
uint64_t v_tid_1063_; lean_object* v_traces_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1088_; 
v_tid_1063_ = lean_ctor_get_uint64(v_traceState_1051_, sizeof(void*)*1);
v_traces_1064_ = lean_ctor_get(v_traceState_1051_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v_traceState_1051_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1066_ = v_traceState_1051_;
v_isShared_1067_ = v_isSharedCheck_1088_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_traces_1064_);
lean_dec(v_traceState_1051_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1088_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
lean_object* v___x_1068_; double v___x_1069_; uint8_t v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1078_; 
v___x_1068_ = lean_box(0);
v___x_1069_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0);
v___x_1070_ = 0;
v___x_1071_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0);
v___x_1072_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1072_, 0, v_cls_1037_);
lean_ctor_set(v___x_1072_, 1, v___x_1068_);
lean_ctor_set(v___x_1072_, 2, v___x_1071_);
lean_ctor_set_float(v___x_1072_, sizeof(void*)*3, v___x_1069_);
lean_ctor_set_float(v___x_1072_, sizeof(void*)*3 + 8, v___x_1069_);
lean_ctor_set_uint8(v___x_1072_, sizeof(void*)*3 + 16, v___x_1070_);
v___x_1073_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__1, &l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__1_once, _init_l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__1);
v___x_1074_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1072_);
lean_ctor_set(v___x_1074_, 1, v_a_1046_);
lean_ctor_set(v___x_1074_, 2, v___x_1073_);
lean_inc(v_ref_1044_);
v___x_1075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1075_, 0, v_ref_1044_);
lean_ctor_set(v___x_1075_, 1, v___x_1074_);
v___x_1076_ = l_Lean_PersistentArray_push___redArg(v_traces_1064_, v___x_1075_);
if (v_isShared_1067_ == 0)
{
lean_ctor_set(v___x_1066_, 0, v___x_1076_);
v___x_1078_ = v___x_1066_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v___x_1076_);
lean_ctor_set_uint64(v_reuseFailAlloc_1087_, sizeof(void*)*1, v_tid_1063_);
v___x_1078_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
lean_object* v___x_1080_; 
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 4, v___x_1078_);
v___x_1080_ = v___x_1061_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_env_1052_);
lean_ctor_set(v_reuseFailAlloc_1086_, 1, v_nextMacroScope_1053_);
lean_ctor_set(v_reuseFailAlloc_1086_, 2, v_ngen_1054_);
lean_ctor_set(v_reuseFailAlloc_1086_, 3, v_auxDeclNGen_1055_);
lean_ctor_set(v_reuseFailAlloc_1086_, 4, v___x_1078_);
lean_ctor_set(v_reuseFailAlloc_1086_, 5, v_cache_1056_);
lean_ctor_set(v_reuseFailAlloc_1086_, 6, v_messages_1057_);
lean_ctor_set(v_reuseFailAlloc_1086_, 7, v_infoState_1058_);
lean_ctor_set(v_reuseFailAlloc_1086_, 8, v_snapshotTasks_1059_);
v___x_1080_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1084_; 
v___x_1081_ = lean_st_ref_set(v___y_1042_, v___x_1080_);
v___x_1082_ = lean_box(0);
if (v_isShared_1049_ == 0)
{
lean_ctor_set(v___x_1048_, 0, v___x_1082_);
v___x_1084_ = v___x_1048_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v___x_1082_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___boxed(lean_object* v_cls_1091_, lean_object* v_msg_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v_cls_1091_, v_msg_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
lean_dec(v___y_1094_);
lean_dec_ref(v___y_1093_);
return v_res_1098_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___lam__3___closed__0(void){
_start:
{
lean_object* v___x_1099_; 
v___x_1099_ = lean_mk_string_unchecked("wfRel: ", 7, 7);
return v___x_1099_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___lam__3___closed__1(void){
_start:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1100_ = lean_obj_once(&l_Lean_Elab_wfRecursion___lam__3___closed__0, &l_Lean_Elab_wfRecursion___lam__3___closed__0_once, _init_l_Lean_Elab_wfRecursion___lam__3___closed__0);
v___x_1101_ = l_Lean_stringToMessageData(v___x_1100_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__3(lean_object* v_fst_1102_, lean_object* v_snd_1103_, size_t v_sz_1104_, size_t v___x_1105_, lean_object* v_a_1106_, lean_object* v_fixedArgs_1107_, lean_object* v_fst_1108_, lean_object* v___x_1109_, lean_object* v___x_1110_, lean_object* v___x_1111_, lean_object* v_wfRel_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_){
_start:
{
lean_object* v___y_1121_; lean_object* v___y_1122_; lean_object* v___y_1123_; lean_object* v___y_1124_; lean_object* v___y_1125_; lean_object* v___y_1126_; lean_object* v___y_1127_; lean_object* v_a_1128_; lean_object* v___y_1139_; lean_object* v___y_1140_; lean_object* v___y_1141_; lean_object* v___y_1142_; lean_object* v___y_1143_; lean_object* v___y_1144_; lean_object* v___y_1145_; lean_object* v___y_1146_; lean_object* v___y_1223_; lean_object* v___y_1224_; lean_object* v___y_1225_; lean_object* v___y_1226_; lean_object* v___y_1227_; lean_object* v___y_1228_; lean_object* v___y_1238_; lean_object* v___y_1239_; lean_object* v___y_1240_; lean_object* v___y_1241_; lean_object* v___y_1242_; lean_object* v___y_1243_; lean_object* v___y_1244_; lean_object* v___y_1254_; lean_object* v___y_1255_; lean_object* v___y_1256_; lean_object* v___y_1257_; lean_object* v___y_1258_; lean_object* v___y_1259_; lean_object* v_options_1278_; uint8_t v_hasTrace_1279_; 
v_options_1278_ = lean_ctor_get(v___y_1117_, 2);
v_hasTrace_1279_ = lean_ctor_get_uint8(v_options_1278_, sizeof(void*)*1);
if (v_hasTrace_1279_ == 0)
{
lean_dec(v___x_1111_);
v___y_1254_ = v___y_1113_;
v___y_1255_ = v___y_1114_;
v___y_1256_ = v___y_1115_;
v___y_1257_ = v___y_1116_;
v___y_1258_ = v___y_1117_;
v___y_1259_ = v___y_1118_;
goto v___jp_1253_;
}
else
{
lean_object* v_inheritedTraceOptions_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; uint8_t v___x_1283_; 
v_inheritedTraceOptions_1280_ = lean_ctor_get(v___y_1117_, 13);
v___x_1281_ = lean_obj_once(&l_Lean_Elab_wfRecursion___lam__1___closed__1, &l_Lean_Elab_wfRecursion___lam__1___closed__1_once, _init_l_Lean_Elab_wfRecursion___lam__1___closed__1);
lean_inc(v___x_1111_);
v___x_1282_ = l_Lean_Name_append(v___x_1281_, v___x_1111_);
v___x_1283_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1280_, v_options_1278_, v___x_1282_);
lean_dec(v___x_1282_);
if (v___x_1283_ == 0)
{
lean_dec(v___x_1111_);
v___y_1254_ = v___y_1113_;
v___y_1255_ = v___y_1114_;
v___y_1256_ = v___y_1115_;
v___y_1257_ = v___y_1116_;
v___y_1258_ = v___y_1117_;
v___y_1259_ = v___y_1118_;
goto v___jp_1253_;
}
else
{
lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1284_ = lean_obj_once(&l_Lean_Elab_wfRecursion___lam__3___closed__1, &l_Lean_Elab_wfRecursion___lam__3___closed__1_once, _init_l_Lean_Elab_wfRecursion___lam__3___closed__1);
lean_inc_ref(v_wfRel_1112_);
v___x_1285_ = l_Lean_MessageData_ofExpr(v_wfRel_1112_);
v___x_1286_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1286_, 0, v___x_1284_);
lean_ctor_set(v___x_1286_, 1, v___x_1285_);
v___x_1287_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v___x_1111_, v___x_1286_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_);
if (lean_obj_tag(v___x_1287_) == 0)
{
lean_dec_ref(v___x_1287_);
v___y_1254_ = v___y_1113_;
v___y_1255_ = v___y_1114_;
v___y_1256_ = v___y_1115_;
v___y_1257_ = v___y_1116_;
v___y_1258_ = v___y_1117_;
v___y_1259_ = v___y_1118_;
goto v___jp_1253_;
}
else
{
lean_object* v_a_1288_; lean_object* v___x_1290_; uint8_t v_isShared_1291_; uint8_t v_isSharedCheck_1295_; 
lean_dec_ref(v_wfRel_1112_);
lean_dec_ref(v___x_1109_);
lean_dec_ref(v_fst_1108_);
lean_dec_ref(v_fixedArgs_1107_);
lean_dec_ref(v_a_1106_);
lean_dec_ref(v_fst_1102_);
v_a_1288_ = lean_ctor_get(v___x_1287_, 0);
v_isSharedCheck_1295_ = !lean_is_exclusive(v___x_1287_);
if (v_isSharedCheck_1295_ == 0)
{
v___x_1290_ = v___x_1287_;
v_isShared_1291_ = v_isSharedCheck_1295_;
goto v_resetjp_1289_;
}
else
{
lean_inc(v_a_1288_);
lean_dec(v___x_1287_);
v___x_1290_ = lean_box(0);
v_isShared_1291_ = v_isSharedCheck_1295_;
goto v_resetjp_1289_;
}
v_resetjp_1289_:
{
lean_object* v___x_1293_; 
if (v_isShared_1291_ == 0)
{
v___x_1293_ = v___x_1290_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v_a_1288_);
v___x_1293_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
return v___x_1293_;
}
}
}
}
}
v___jp_1120_:
{
lean_object* v___x_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1136_; 
v___x_1129_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v___y_1127_, v___y_1122_, v___y_1123_);
v_isSharedCheck_1136_ = !lean_is_exclusive(v___x_1129_);
if (v_isSharedCheck_1136_ == 0)
{
lean_object* v_unused_1137_; 
v_unused_1137_ = lean_ctor_get(v___x_1129_, 0);
lean_dec(v_unused_1137_);
v___x_1131_ = v___x_1129_;
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
else
{
lean_dec(v___x_1129_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v___x_1134_; 
if (v_isShared_1132_ == 0)
{
lean_ctor_set_tag(v___x_1131_, 1);
lean_ctor_set(v___x_1131_, 0, v_a_1128_);
v___x_1134_ = v___x_1131_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v_a_1128_);
v___x_1134_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
return v___x_1134_;
}
}
}
v___jp_1138_:
{
if (lean_obj_tag(v___y_1146_) == 0)
{
lean_object* v_a_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v_env_1150_; lean_object* v___x_1151_; 
v_a_1147_ = lean_ctor_get(v___y_1146_, 0);
lean_inc(v_a_1147_);
lean_dec_ref(v___y_1146_);
v___x_1148_ = lean_st_ref_get(v___y_1141_);
v___x_1149_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v___y_1145_, v___y_1140_, v___y_1141_);
lean_dec_ref(v___x_1149_);
v_env_1150_ = lean_ctor_get(v___x_1148_, 0);
lean_inc_ref_n(v_env_1150_, 2);
lean_dec(v___x_1148_);
v___x_1151_ = l_Lean_Meta_unfoldDeclsFrom(v_env_1150_, v_a_1147_, v___y_1143_, v___y_1141_);
if (lean_obj_tag(v___x_1151_) == 0)
{
lean_object* v_a_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1212_; 
v_a_1152_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1212_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1212_ == 0)
{
v___x_1154_ = v___x_1151_;
v_isShared_1155_ = v_isSharedCheck_1212_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_a_1152_);
lean_dec(v___x_1151_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1212_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1156_; lean_object* v_env_1157_; lean_object* v_nextMacroScope_1158_; lean_object* v_ngen_1159_; lean_object* v_auxDeclNGen_1160_; lean_object* v_traceState_1161_; lean_object* v_messages_1162_; lean_object* v_infoState_1163_; lean_object* v_snapshotTasks_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1210_; 
v___x_1156_ = lean_st_ref_take(v___y_1141_);
v_env_1157_ = lean_ctor_get(v___x_1156_, 0);
v_nextMacroScope_1158_ = lean_ctor_get(v___x_1156_, 1);
v_ngen_1159_ = lean_ctor_get(v___x_1156_, 2);
v_auxDeclNGen_1160_ = lean_ctor_get(v___x_1156_, 3);
v_traceState_1161_ = lean_ctor_get(v___x_1156_, 4);
v_messages_1162_ = lean_ctor_get(v___x_1156_, 6);
v_infoState_1163_ = lean_ctor_get(v___x_1156_, 7);
v_snapshotTasks_1164_ = lean_ctor_get(v___x_1156_, 8);
v_isSharedCheck_1210_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1210_ == 0)
{
lean_object* v_unused_1211_; 
v_unused_1211_ = lean_ctor_get(v___x_1156_, 5);
lean_dec(v_unused_1211_);
v___x_1166_ = v___x_1156_;
v_isShared_1167_ = v_isSharedCheck_1210_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_snapshotTasks_1164_);
lean_inc(v_infoState_1163_);
lean_inc(v_messages_1162_);
lean_inc(v_traceState_1161_);
lean_inc(v_auxDeclNGen_1160_);
lean_inc(v_ngen_1159_);
lean_inc(v_nextMacroScope_1158_);
lean_inc(v_env_1157_);
lean_dec(v___x_1156_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1210_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1171_; 
v___x_1168_ = l_Lean_copyExtraModUses(v_env_1150_, v_env_1157_);
v___x_1169_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2);
if (v_isShared_1167_ == 0)
{
lean_ctor_set(v___x_1166_, 5, v___x_1169_);
lean_ctor_set(v___x_1166_, 0, v___x_1168_);
v___x_1171_ = v___x_1166_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v___x_1168_);
lean_ctor_set(v_reuseFailAlloc_1209_, 1, v_nextMacroScope_1158_);
lean_ctor_set(v_reuseFailAlloc_1209_, 2, v_ngen_1159_);
lean_ctor_set(v_reuseFailAlloc_1209_, 3, v_auxDeclNGen_1160_);
lean_ctor_set(v_reuseFailAlloc_1209_, 4, v_traceState_1161_);
lean_ctor_set(v_reuseFailAlloc_1209_, 5, v___x_1169_);
lean_ctor_set(v_reuseFailAlloc_1209_, 6, v_messages_1162_);
lean_ctor_set(v_reuseFailAlloc_1209_, 7, v_infoState_1163_);
lean_ctor_set(v_reuseFailAlloc_1209_, 8, v_snapshotTasks_1164_);
v___x_1171_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v_mctx_1175_; lean_object* v_zetaDeltaFVarIds_1176_; lean_object* v_postponed_1177_; lean_object* v_diag_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1207_; 
v___x_1172_ = lean_st_ref_set(v___y_1141_, v___x_1171_);
v___x_1173_ = lean_st_ref_get(v___y_1141_);
lean_dec(v___x_1173_);
v___x_1174_ = lean_st_ref_take(v___y_1140_);
v_mctx_1175_ = lean_ctor_get(v___x_1174_, 0);
v_zetaDeltaFVarIds_1176_ = lean_ctor_get(v___x_1174_, 2);
v_postponed_1177_ = lean_ctor_get(v___x_1174_, 3);
v_diag_1178_ = lean_ctor_get(v___x_1174_, 4);
v_isSharedCheck_1207_ = !lean_is_exclusive(v___x_1174_);
if (v_isSharedCheck_1207_ == 0)
{
lean_object* v_unused_1208_; 
v_unused_1208_ = lean_ctor_get(v___x_1174_, 1);
lean_dec(v_unused_1208_);
v___x_1180_ = v___x_1174_;
v_isShared_1181_ = v_isSharedCheck_1207_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_diag_1178_);
lean_inc(v_postponed_1177_);
lean_inc(v_zetaDeltaFVarIds_1176_);
lean_inc(v_mctx_1175_);
lean_dec(v___x_1174_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1207_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v___x_1182_; lean_object* v___x_1184_; 
v___x_1182_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3);
if (v_isShared_1181_ == 0)
{
lean_ctor_set(v___x_1180_, 1, v___x_1182_);
v___x_1184_ = v___x_1180_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v_mctx_1175_);
lean_ctor_set(v_reuseFailAlloc_1206_, 1, v___x_1182_);
lean_ctor_set(v_reuseFailAlloc_1206_, 2, v_zetaDeltaFVarIds_1176_);
lean_ctor_set(v_reuseFailAlloc_1206_, 3, v_postponed_1177_);
lean_ctor_set(v_reuseFailAlloc_1206_, 4, v_diag_1178_);
v___x_1184_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
lean_object* v___x_1185_; lean_object* v_ref_1186_; uint8_t v_kind_1187_; lean_object* v_levelParams_1188_; lean_object* v_modifiers_1189_; lean_object* v_declName_1190_; lean_object* v_binders_1191_; lean_object* v_numSectionVars_1192_; lean_object* v_type_1193_; lean_object* v_termination_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1204_; 
v___x_1185_ = lean_st_ref_set(v___y_1140_, v___x_1184_);
v_ref_1186_ = lean_ctor_get(v_fst_1102_, 0);
v_kind_1187_ = lean_ctor_get_uint8(v_fst_1102_, sizeof(void*)*9);
v_levelParams_1188_ = lean_ctor_get(v_fst_1102_, 1);
v_modifiers_1189_ = lean_ctor_get(v_fst_1102_, 2);
v_declName_1190_ = lean_ctor_get(v_fst_1102_, 3);
v_binders_1191_ = lean_ctor_get(v_fst_1102_, 4);
v_numSectionVars_1192_ = lean_ctor_get(v_fst_1102_, 5);
v_type_1193_ = lean_ctor_get(v_fst_1102_, 6);
v_termination_1194_ = lean_ctor_get(v_fst_1102_, 8);
v_isSharedCheck_1204_ = !lean_is_exclusive(v_fst_1102_);
if (v_isSharedCheck_1204_ == 0)
{
lean_object* v_unused_1205_; 
v_unused_1205_ = lean_ctor_get(v_fst_1102_, 7);
lean_dec(v_unused_1205_);
v___x_1196_ = v_fst_1102_;
v_isShared_1197_ = v_isSharedCheck_1204_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_termination_1194_);
lean_inc(v_type_1193_);
lean_inc(v_numSectionVars_1192_);
lean_inc(v_binders_1191_);
lean_inc(v_declName_1190_);
lean_inc(v_modifiers_1189_);
lean_inc(v_levelParams_1188_);
lean_inc(v_ref_1186_);
lean_dec(v_fst_1102_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1204_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___x_1199_; 
if (v_isShared_1197_ == 0)
{
lean_ctor_set(v___x_1196_, 7, v_a_1152_);
v___x_1199_ = v___x_1196_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v_ref_1186_);
lean_ctor_set(v_reuseFailAlloc_1203_, 1, v_levelParams_1188_);
lean_ctor_set(v_reuseFailAlloc_1203_, 2, v_modifiers_1189_);
lean_ctor_set(v_reuseFailAlloc_1203_, 3, v_declName_1190_);
lean_ctor_set(v_reuseFailAlloc_1203_, 4, v_binders_1191_);
lean_ctor_set(v_reuseFailAlloc_1203_, 5, v_numSectionVars_1192_);
lean_ctor_set(v_reuseFailAlloc_1203_, 6, v_type_1193_);
lean_ctor_set(v_reuseFailAlloc_1203_, 7, v_a_1152_);
lean_ctor_set(v_reuseFailAlloc_1203_, 8, v_termination_1194_);
lean_ctor_set_uint8(v_reuseFailAlloc_1203_, sizeof(void*)*9, v_kind_1187_);
v___x_1199_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
lean_object* v___x_1201_; 
if (v_isShared_1155_ == 0)
{
lean_ctor_set(v___x_1154_, 0, v___x_1199_);
v___x_1201_ = v___x_1154_;
goto v_reusejp_1200_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v___x_1199_);
v___x_1201_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1200_;
}
v_reusejp_1200_:
{
return v___x_1201_;
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
lean_object* v_a_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1220_; 
lean_dec_ref(v_env_1150_);
lean_dec_ref(v_fst_1102_);
v_a_1213_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1215_ = v___x_1151_;
v_isShared_1216_ = v_isSharedCheck_1220_;
goto v_resetjp_1214_;
}
else
{
lean_inc(v_a_1213_);
lean_dec(v___x_1151_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1220_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
lean_object* v___x_1218_; 
if (v_isShared_1216_ == 0)
{
v___x_1218_ = v___x_1215_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_a_1213_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
return v___x_1218_;
}
}
}
}
else
{
lean_object* v_a_1221_; 
lean_dec_ref(v_fst_1102_);
v_a_1221_ = lean_ctor_get(v___y_1146_, 0);
lean_inc(v_a_1221_);
lean_dec_ref(v___y_1146_);
v___y_1121_ = v___y_1139_;
v___y_1122_ = v___y_1140_;
v___y_1123_ = v___y_1141_;
v___y_1124_ = v___y_1142_;
v___y_1125_ = v___y_1143_;
v___y_1126_ = v___y_1144_;
v___y_1127_ = v___y_1145_;
v_a_1128_ = v_a_1221_;
goto v___jp_1120_;
}
}
v___jp_1222_:
{
lean_object* v___x_1229_; lean_object* v_env_1230_; lean_object* v___x_1231_; 
v___x_1229_ = lean_st_ref_get(v___y_1228_);
v_env_1230_ = lean_ctor_get(v___x_1229_, 0);
lean_inc_ref(v_env_1230_);
lean_dec(v___x_1229_);
v___x_1231_ = l_Lean_Elab_addAsAxiom___redArg(v_snd_1103_, v___y_1227_, v___y_1228_);
if (lean_obj_tag(v___x_1231_) == 0)
{
lean_object* v___x_1232_; lean_object* v___x_1233_; 
lean_dec_ref(v___x_1231_);
v___x_1232_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10(v_sz_1104_, v___x_1105_, v_a_1106_);
lean_inc_ref(v_fst_1102_);
v___x_1233_ = l_Lean_Elab_WF_mkFix(v_fst_1102_, v_fixedArgs_1107_, v_fst_1108_, v_wfRel_1112_, v___x_1109_, v___x_1232_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
if (lean_obj_tag(v___x_1233_) == 0)
{
lean_object* v_a_1234_; lean_object* v___x_1235_; 
v_a_1234_ = lean_ctor_get(v___x_1233_, 0);
lean_inc(v_a_1234_);
lean_dec_ref(v___x_1233_);
v___x_1235_ = l_Lean_Elab_eraseRecAppSyntaxExpr(v_a_1234_, v___y_1227_, v___y_1228_);
v___y_1139_ = v___y_1224_;
v___y_1140_ = v___y_1226_;
v___y_1141_ = v___y_1228_;
v___y_1142_ = v___y_1225_;
v___y_1143_ = v___y_1227_;
v___y_1144_ = v___y_1223_;
v___y_1145_ = v_env_1230_;
v___y_1146_ = v___x_1235_;
goto v___jp_1138_;
}
else
{
v___y_1139_ = v___y_1224_;
v___y_1140_ = v___y_1226_;
v___y_1141_ = v___y_1228_;
v___y_1142_ = v___y_1225_;
v___y_1143_ = v___y_1227_;
v___y_1144_ = v___y_1223_;
v___y_1145_ = v_env_1230_;
v___y_1146_ = v___x_1233_;
goto v___jp_1138_;
}
}
else
{
lean_object* v_a_1236_; 
lean_dec_ref(v_wfRel_1112_);
lean_dec_ref(v___x_1109_);
lean_dec_ref(v_fst_1108_);
lean_dec_ref(v_fixedArgs_1107_);
lean_dec_ref(v_a_1106_);
lean_dec_ref(v_fst_1102_);
v_a_1236_ = lean_ctor_get(v___x_1231_, 0);
lean_inc(v_a_1236_);
lean_dec_ref(v___x_1231_);
v___y_1121_ = v___y_1224_;
v___y_1122_ = v___y_1226_;
v___y_1123_ = v___y_1228_;
v___y_1124_ = v___y_1225_;
v___y_1125_ = v___y_1227_;
v___y_1126_ = v___y_1223_;
v___y_1127_ = v_env_1230_;
v_a_1128_ = v_a_1236_;
goto v___jp_1120_;
}
}
v___jp_1237_:
{
if (lean_obj_tag(v___y_1244_) == 0)
{
lean_dec_ref(v___y_1244_);
v___y_1223_ = v___y_1238_;
v___y_1224_ = v___y_1243_;
v___y_1225_ = v___y_1240_;
v___y_1226_ = v___y_1242_;
v___y_1227_ = v___y_1239_;
v___y_1228_ = v___y_1241_;
goto v___jp_1222_;
}
else
{
lean_object* v_a_1245_; lean_object* v___x_1247_; uint8_t v_isShared_1248_; uint8_t v_isSharedCheck_1252_; 
lean_dec_ref(v_wfRel_1112_);
lean_dec_ref(v___x_1109_);
lean_dec_ref(v_fst_1108_);
lean_dec_ref(v_fixedArgs_1107_);
lean_dec_ref(v_a_1106_);
lean_dec_ref(v_fst_1102_);
v_a_1245_ = lean_ctor_get(v___y_1244_, 0);
v_isSharedCheck_1252_ = !lean_is_exclusive(v___y_1244_);
if (v_isSharedCheck_1252_ == 0)
{
v___x_1247_ = v___y_1244_;
v_isShared_1248_ = v_isSharedCheck_1252_;
goto v_resetjp_1246_;
}
else
{
lean_inc(v_a_1245_);
lean_dec(v___y_1244_);
v___x_1247_ = lean_box(0);
v_isShared_1248_ = v_isSharedCheck_1252_;
goto v_resetjp_1246_;
}
v_resetjp_1246_:
{
lean_object* v___x_1250_; 
if (v_isShared_1248_ == 0)
{
v___x_1250_ = v___x_1247_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_a_1245_);
v___x_1250_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
return v___x_1250_;
}
}
}
}
v___jp_1253_:
{
lean_object* v___x_1260_; 
lean_inc_ref(v_wfRel_1112_);
v___x_1260_ = l_Lean_Elab_WF_isNatLtWF(v_wfRel_1112_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_);
if (lean_obj_tag(v___x_1260_) == 0)
{
lean_object* v_a_1261_; 
v_a_1261_ = lean_ctor_get(v___x_1260_, 0);
lean_inc(v_a_1261_);
lean_dec_ref(v___x_1260_);
if (lean_obj_tag(v_a_1261_) == 0)
{
lean_object* v___x_1262_; lean_object* v___x_1263_; uint8_t v___x_1264_; 
v___x_1262_ = lean_unsigned_to_nat(0u);
v___x_1263_ = lean_array_get_size(v_a_1106_);
v___x_1264_ = lean_nat_dec_lt(v___x_1262_, v___x_1263_);
if (v___x_1264_ == 0)
{
v___y_1223_ = v___y_1254_;
v___y_1224_ = v___y_1255_;
v___y_1225_ = v___y_1256_;
v___y_1226_ = v___y_1257_;
v___y_1227_ = v___y_1258_;
v___y_1228_ = v___y_1259_;
goto v___jp_1222_;
}
else
{
uint8_t v___x_1265_; 
v___x_1265_ = lean_nat_dec_le(v___x_1263_, v___x_1263_);
if (v___x_1265_ == 0)
{
if (v___x_1264_ == 0)
{
v___y_1223_ = v___y_1254_;
v___y_1224_ = v___y_1255_;
v___y_1225_ = v___y_1256_;
v___y_1226_ = v___y_1257_;
v___y_1227_ = v___y_1258_;
v___y_1228_ = v___y_1259_;
goto v___jp_1222_;
}
else
{
size_t v___x_1266_; lean_object* v___x_1267_; 
v___x_1266_ = lean_usize_of_nat(v___x_1263_);
v___x_1267_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13(v_a_1106_, v___x_1105_, v___x_1266_, v___x_1110_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_);
v___y_1238_ = v___y_1254_;
v___y_1239_ = v___y_1258_;
v___y_1240_ = v___y_1256_;
v___y_1241_ = v___y_1259_;
v___y_1242_ = v___y_1257_;
v___y_1243_ = v___y_1255_;
v___y_1244_ = v___x_1267_;
goto v___jp_1237_;
}
}
else
{
size_t v___x_1268_; lean_object* v___x_1269_; 
v___x_1268_ = lean_usize_of_nat(v___x_1263_);
v___x_1269_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13(v_a_1106_, v___x_1105_, v___x_1268_, v___x_1110_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_);
v___y_1238_ = v___y_1254_;
v___y_1239_ = v___y_1258_;
v___y_1240_ = v___y_1256_;
v___y_1241_ = v___y_1259_;
v___y_1242_ = v___y_1257_;
v___y_1243_ = v___y_1255_;
v___y_1244_ = v___x_1269_;
goto v___jp_1237_;
}
}
}
else
{
lean_dec_ref(v_a_1261_);
v___y_1223_ = v___y_1254_;
v___y_1224_ = v___y_1255_;
v___y_1225_ = v___y_1256_;
v___y_1226_ = v___y_1257_;
v___y_1227_ = v___y_1258_;
v___y_1228_ = v___y_1259_;
goto v___jp_1222_;
}
}
else
{
lean_object* v_a_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1277_; 
lean_dec_ref(v_wfRel_1112_);
lean_dec_ref(v___x_1109_);
lean_dec_ref(v_fst_1108_);
lean_dec_ref(v_fixedArgs_1107_);
lean_dec_ref(v_a_1106_);
lean_dec_ref(v_fst_1102_);
v_a_1270_ = lean_ctor_get(v___x_1260_, 0);
v_isSharedCheck_1277_ = !lean_is_exclusive(v___x_1260_);
if (v_isSharedCheck_1277_ == 0)
{
v___x_1272_ = v___x_1260_;
v_isShared_1273_ = v_isSharedCheck_1277_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_a_1270_);
lean_dec(v___x_1260_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1277_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1275_; 
if (v_isShared_1273_ == 0)
{
v___x_1275_ = v___x_1272_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v_a_1270_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
return v___x_1275_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__3___boxed(lean_object** _args){
lean_object* v_fst_1296_ = _args[0];
lean_object* v_snd_1297_ = _args[1];
lean_object* v_sz_1298_ = _args[2];
lean_object* v___x_1299_ = _args[3];
lean_object* v_a_1300_ = _args[4];
lean_object* v_fixedArgs_1301_ = _args[5];
lean_object* v_fst_1302_ = _args[6];
lean_object* v___x_1303_ = _args[7];
lean_object* v___x_1304_ = _args[8];
lean_object* v___x_1305_ = _args[9];
lean_object* v_wfRel_1306_ = _args[10];
lean_object* v___y_1307_ = _args[11];
lean_object* v___y_1308_ = _args[12];
lean_object* v___y_1309_ = _args[13];
lean_object* v___y_1310_ = _args[14];
lean_object* v___y_1311_ = _args[15];
lean_object* v___y_1312_ = _args[16];
lean_object* v___y_1313_ = _args[17];
_start:
{
size_t v_sz_boxed_1314_; size_t v___x_48035__boxed_1315_; lean_object* v_res_1316_; 
v_sz_boxed_1314_ = lean_unbox_usize(v_sz_1298_);
lean_dec(v_sz_1298_);
v___x_48035__boxed_1315_ = lean_unbox_usize(v___x_1299_);
lean_dec(v___x_1299_);
v_res_1316_ = l_Lean_Elab_wfRecursion___lam__3(v_fst_1296_, v_snd_1297_, v_sz_boxed_1314_, v___x_48035__boxed_1315_, v_a_1300_, v_fixedArgs_1301_, v_fst_1302_, v___x_1303_, v___x_1304_, v___x_1305_, v_wfRel_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_);
lean_dec(v___y_1312_);
lean_dec_ref(v___y_1311_);
lean_dec(v___y_1310_);
lean_dec_ref(v___y_1309_);
lean_dec(v___y_1308_);
lean_dec_ref(v___y_1307_);
lean_dec_ref(v_snd_1297_);
return v_res_1316_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___lam__4___closed__0(void){
_start:
{
lean_object* v___x_1317_; 
v___x_1317_ = lean_mk_string_unchecked("wfRecursion: expected unary function type: ", 43, 43);
return v___x_1317_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___lam__4___closed__1(void){
_start:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1318_ = lean_obj_once(&l_Lean_Elab_wfRecursion___lam__4___closed__0, &l_Lean_Elab_wfRecursion___lam__4___closed__0_once, _init_l_Lean_Elab_wfRecursion___lam__4___closed__0);
v___x_1319_ = l_Lean_stringToMessageData(v___x_1318_);
return v___x_1319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__4(size_t v_sz_1320_, size_t v___x_1321_, lean_object* v_a_1322_, lean_object* v_fst_1323_, lean_object* v_snd_1324_, lean_object* v_fst_1325_, lean_object* v___x_1326_, lean_object* v___x_1327_, lean_object* v_declName_1328_, lean_object* v_fst_1329_, lean_object* v_wf_1330_, lean_object* v_fixedArgs_1331_, lean_object* v_type_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_){
_start:
{
lean_object* v___x_1340_; 
v___x_1340_ = l_Lean_Meta_whnfForall(v_type_1332_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_);
if (lean_obj_tag(v___x_1340_) == 0)
{
lean_object* v_a_1341_; lean_object* v___y_1343_; lean_object* v___y_1344_; lean_object* v___y_1345_; lean_object* v___y_1346_; lean_object* v___y_1347_; lean_object* v___y_1348_; uint8_t v___x_1355_; 
v_a_1341_ = lean_ctor_get(v___x_1340_, 0);
lean_inc(v_a_1341_);
lean_dec_ref(v___x_1340_);
v___x_1355_ = l_Lean_Expr_isForall(v_a_1341_);
if (v___x_1355_ == 0)
{
lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v_a_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1367_; 
lean_dec_ref(v_fixedArgs_1331_);
lean_dec_ref(v_wf_1330_);
lean_dec_ref(v_fst_1329_);
lean_dec(v_declName_1328_);
lean_dec(v___x_1327_);
lean_dec_ref(v_fst_1325_);
lean_dec_ref(v_snd_1324_);
lean_dec_ref(v_fst_1323_);
lean_dec_ref(v_a_1322_);
v___x_1356_ = lean_obj_once(&l_Lean_Elab_wfRecursion___lam__4___closed__1, &l_Lean_Elab_wfRecursion___lam__4___closed__1_once, _init_l_Lean_Elab_wfRecursion___lam__4___closed__1);
v___x_1357_ = l_Lean_MessageData_ofExpr(v_a_1341_);
v___x_1358_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1356_);
lean_ctor_set(v___x_1358_, 1, v___x_1357_);
v___x_1359_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(v___x_1358_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_);
v_a_1360_ = lean_ctor_get(v___x_1359_, 0);
v_isSharedCheck_1367_ = !lean_is_exclusive(v___x_1359_);
if (v_isSharedCheck_1367_ == 0)
{
v___x_1362_ = v___x_1359_;
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_a_1360_);
lean_dec(v___x_1359_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
lean_object* v___x_1365_; 
if (v_isShared_1363_ == 0)
{
v___x_1365_ = v___x_1362_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v_a_1360_);
v___x_1365_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
return v___x_1365_;
}
}
}
else
{
v___y_1343_ = v___y_1333_;
v___y_1344_ = v___y_1334_;
v___y_1345_ = v___y_1335_;
v___y_1346_ = v___y_1336_;
v___y_1347_ = v___y_1337_;
v___y_1348_ = v___y_1338_;
goto v___jp_1342_;
}
v___jp_1342_:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___f_1353_; lean_object* v___x_1354_; 
v___x_1349_ = l_Lean_Expr_bindingDomain_x21(v_a_1341_);
lean_dec(v_a_1341_);
lean_inc_ref(v_a_1322_);
v___x_1350_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__5(v_sz_1320_, v___x_1321_, v_a_1322_);
v___x_1351_ = lean_box_usize(v_sz_1320_);
v___x_1352_ = lean_box_usize(v___x_1321_);
lean_inc_ref(v___x_1350_);
lean_inc_ref(v_fst_1325_);
lean_inc_ref(v_fixedArgs_1331_);
v___f_1353_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__3___boxed), 18, 10);
lean_closure_set(v___f_1353_, 0, v_fst_1323_);
lean_closure_set(v___f_1353_, 1, v_snd_1324_);
lean_closure_set(v___f_1353_, 2, v___x_1351_);
lean_closure_set(v___f_1353_, 3, v___x_1352_);
lean_closure_set(v___f_1353_, 4, v_a_1322_);
lean_closure_set(v___f_1353_, 5, v_fixedArgs_1331_);
lean_closure_set(v___f_1353_, 6, v_fst_1325_);
lean_closure_set(v___f_1353_, 7, v___x_1350_);
lean_closure_set(v___f_1353_, 8, v___x_1326_);
lean_closure_set(v___f_1353_, 9, v___x_1327_);
v___x_1354_ = l_Lean_Elab_WF_elabWFRel___redArg(v___x_1350_, v_declName_1328_, v_fst_1329_, v_fixedArgs_1331_, v_fst_1325_, v___x_1349_, v_wf_1330_, v___f_1353_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_);
return v___x_1354_;
}
}
else
{
lean_object* v_a_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1375_; 
lean_dec_ref(v_fixedArgs_1331_);
lean_dec_ref(v_wf_1330_);
lean_dec_ref(v_fst_1329_);
lean_dec(v_declName_1328_);
lean_dec(v___x_1327_);
lean_dec_ref(v_fst_1325_);
lean_dec_ref(v_snd_1324_);
lean_dec_ref(v_fst_1323_);
lean_dec_ref(v_a_1322_);
v_a_1368_ = lean_ctor_get(v___x_1340_, 0);
v_isSharedCheck_1375_ = !lean_is_exclusive(v___x_1340_);
if (v_isSharedCheck_1375_ == 0)
{
v___x_1370_ = v___x_1340_;
v_isShared_1371_ = v_isSharedCheck_1375_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_a_1368_);
lean_dec(v___x_1340_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1375_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v___x_1373_; 
if (v_isShared_1371_ == 0)
{
v___x_1373_ = v___x_1370_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1374_; 
v_reuseFailAlloc_1374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1374_, 0, v_a_1368_);
v___x_1373_ = v_reuseFailAlloc_1374_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
return v___x_1373_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__4___boxed(lean_object** _args){
lean_object* v_sz_1376_ = _args[0];
lean_object* v___x_1377_ = _args[1];
lean_object* v_a_1378_ = _args[2];
lean_object* v_fst_1379_ = _args[3];
lean_object* v_snd_1380_ = _args[4];
lean_object* v_fst_1381_ = _args[5];
lean_object* v___x_1382_ = _args[6];
lean_object* v___x_1383_ = _args[7];
lean_object* v_declName_1384_ = _args[8];
lean_object* v_fst_1385_ = _args[9];
lean_object* v_wf_1386_ = _args[10];
lean_object* v_fixedArgs_1387_ = _args[11];
lean_object* v_type_1388_ = _args[12];
lean_object* v___y_1389_ = _args[13];
lean_object* v___y_1390_ = _args[14];
lean_object* v___y_1391_ = _args[15];
lean_object* v___y_1392_ = _args[16];
lean_object* v___y_1393_ = _args[17];
lean_object* v___y_1394_ = _args[18];
lean_object* v___y_1395_ = _args[19];
_start:
{
size_t v_sz_boxed_1396_; size_t v___x_48395__boxed_1397_; lean_object* v_res_1398_; 
v_sz_boxed_1396_ = lean_unbox_usize(v_sz_1376_);
lean_dec(v_sz_1376_);
v___x_48395__boxed_1397_ = lean_unbox_usize(v___x_1377_);
lean_dec(v___x_1377_);
v_res_1398_ = l_Lean_Elab_wfRecursion___lam__4(v_sz_boxed_1396_, v___x_48395__boxed_1397_, v_a_1378_, v_fst_1379_, v_snd_1380_, v_fst_1381_, v___x_1382_, v___x_1383_, v_declName_1384_, v_fst_1385_, v_wf_1386_, v_fixedArgs_1387_, v_type_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_);
lean_dec(v___y_1394_);
lean_dec_ref(v___y_1393_);
lean_dec(v___y_1392_);
lean_dec_ref(v___y_1391_);
lean_dec(v___y_1390_);
lean_dec_ref(v___y_1389_);
return v_res_1398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__5(lean_object* v_a_1399_, lean_object* v_fst_1400_, lean_object* v_fst_1401_, lean_object* v_fst_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_){
_start:
{
lean_object* v___x_1410_; 
v___x_1410_ = l_Lean_Elab_WF_guessLex(v_a_1399_, v_fst_1400_, v_fst_1401_, v_fst_1402_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_);
return v___x_1410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__5___boxed(lean_object* v_a_1411_, lean_object* v_fst_1412_, lean_object* v_fst_1413_, lean_object* v_fst_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_){
_start:
{
lean_object* v_res_1422_; 
v_res_1422_ = l_Lean_Elab_wfRecursion___lam__5(v_a_1411_, v_fst_1412_, v_fst_1413_, v_fst_1414_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_);
lean_dec(v___y_1420_);
lean_dec_ref(v___y_1419_);
lean_dec(v___y_1418_);
lean_dec_ref(v___y_1417_);
lean_dec(v___y_1416_);
lean_dec_ref(v___y_1415_);
return v_res_1422_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg(size_t v_sz_1423_, size_t v_i_1424_, lean_object* v_bs_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_){
_start:
{
uint8_t v___x_1431_; 
v___x_1431_ = lean_usize_dec_lt(v_i_1424_, v_sz_1423_);
if (v___x_1431_ == 0)
{
lean_object* v___x_1432_; 
v___x_1432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1432_, 0, v_bs_1425_);
return v___x_1432_;
}
else
{
uint8_t v___x_1433_; lean_object* v_v_1434_; lean_object* v___x_1435_; 
v___x_1433_ = 0;
v_v_1434_ = lean_array_uget_borrowed(v_bs_1425_, v_i_1424_);
lean_inc(v_v_1434_);
v___x_1435_ = l_Lean_Elab_Mutual_cleanPreDef(v_v_1434_, v___x_1433_, v___y_1426_, v___y_1427_, v___y_1428_, v___y_1429_);
if (lean_obj_tag(v___x_1435_) == 0)
{
lean_object* v_a_1436_; lean_object* v___x_1437_; lean_object* v_bs_x27_1438_; size_t v___x_1439_; size_t v___x_1440_; lean_object* v___x_1441_; 
v_a_1436_ = lean_ctor_get(v___x_1435_, 0);
lean_inc(v_a_1436_);
lean_dec_ref(v___x_1435_);
v___x_1437_ = lean_unsigned_to_nat(0u);
v_bs_x27_1438_ = lean_array_uset(v_bs_1425_, v_i_1424_, v___x_1437_);
v___x_1439_ = ((size_t)1ULL);
v___x_1440_ = lean_usize_add(v_i_1424_, v___x_1439_);
v___x_1441_ = lean_array_uset(v_bs_x27_1438_, v_i_1424_, v_a_1436_);
v_i_1424_ = v___x_1440_;
v_bs_1425_ = v___x_1441_;
goto _start;
}
else
{
lean_object* v_a_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1450_; 
lean_dec_ref(v_bs_1425_);
v_a_1443_ = lean_ctor_get(v___x_1435_, 0);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1435_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1445_ = v___x_1435_;
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
else
{
lean_inc(v_a_1443_);
lean_dec(v___x_1435_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
lean_object* v___x_1448_; 
if (v_isShared_1446_ == 0)
{
v___x_1448_ = v___x_1445_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v_a_1443_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
return v___x_1448_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg___boxed(lean_object* v_sz_1451_, lean_object* v_i_1452_, lean_object* v_bs_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_){
_start:
{
size_t v_sz_boxed_1459_; size_t v_i_boxed_1460_; lean_object* v_res_1461_; 
v_sz_boxed_1459_ = lean_unbox_usize(v_sz_1451_);
lean_dec(v_sz_1451_);
v_i_boxed_1460_ = lean_unbox_usize(v_i_1452_);
lean_dec(v_i_1452_);
v_res_1461_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg(v_sz_boxed_1459_, v_i_boxed_1460_, v_bs_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_);
lean_dec(v___y_1457_);
lean_dec_ref(v___y_1456_);
lean_dec(v___y_1455_);
lean_dec_ref(v___y_1454_);
return v_res_1461_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___lam__0(lean_object* v___y_1462_, uint8_t v_isExporting_1463_, lean_object* v___x_1464_, lean_object* v___y_1465_, lean_object* v___x_1466_, lean_object* v_a_x3f_1467_){
_start:
{
lean_object* v___x_1469_; lean_object* v_env_1470_; lean_object* v_nextMacroScope_1471_; lean_object* v_ngen_1472_; lean_object* v_auxDeclNGen_1473_; lean_object* v_traceState_1474_; lean_object* v_messages_1475_; lean_object* v_infoState_1476_; lean_object* v_snapshotTasks_1477_; lean_object* v___x_1479_; uint8_t v_isShared_1480_; uint8_t v_isSharedCheck_1503_; 
v___x_1469_ = lean_st_ref_take(v___y_1462_);
v_env_1470_ = lean_ctor_get(v___x_1469_, 0);
v_nextMacroScope_1471_ = lean_ctor_get(v___x_1469_, 1);
v_ngen_1472_ = lean_ctor_get(v___x_1469_, 2);
v_auxDeclNGen_1473_ = lean_ctor_get(v___x_1469_, 3);
v_traceState_1474_ = lean_ctor_get(v___x_1469_, 4);
v_messages_1475_ = lean_ctor_get(v___x_1469_, 6);
v_infoState_1476_ = lean_ctor_get(v___x_1469_, 7);
v_snapshotTasks_1477_ = lean_ctor_get(v___x_1469_, 8);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1469_);
if (v_isSharedCheck_1503_ == 0)
{
lean_object* v_unused_1504_; 
v_unused_1504_ = lean_ctor_get(v___x_1469_, 5);
lean_dec(v_unused_1504_);
v___x_1479_ = v___x_1469_;
v_isShared_1480_ = v_isSharedCheck_1503_;
goto v_resetjp_1478_;
}
else
{
lean_inc(v_snapshotTasks_1477_);
lean_inc(v_infoState_1476_);
lean_inc(v_messages_1475_);
lean_inc(v_traceState_1474_);
lean_inc(v_auxDeclNGen_1473_);
lean_inc(v_ngen_1472_);
lean_inc(v_nextMacroScope_1471_);
lean_inc(v_env_1470_);
lean_dec(v___x_1469_);
v___x_1479_ = lean_box(0);
v_isShared_1480_ = v_isSharedCheck_1503_;
goto v_resetjp_1478_;
}
v_resetjp_1478_:
{
lean_object* v___x_1481_; lean_object* v___x_1483_; 
v___x_1481_ = l_Lean_Environment_setExporting(v_env_1470_, v_isExporting_1463_);
if (v_isShared_1480_ == 0)
{
lean_ctor_set(v___x_1479_, 5, v___x_1464_);
lean_ctor_set(v___x_1479_, 0, v___x_1481_);
v___x_1483_ = v___x_1479_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v___x_1481_);
lean_ctor_set(v_reuseFailAlloc_1502_, 1, v_nextMacroScope_1471_);
lean_ctor_set(v_reuseFailAlloc_1502_, 2, v_ngen_1472_);
lean_ctor_set(v_reuseFailAlloc_1502_, 3, v_auxDeclNGen_1473_);
lean_ctor_set(v_reuseFailAlloc_1502_, 4, v_traceState_1474_);
lean_ctor_set(v_reuseFailAlloc_1502_, 5, v___x_1464_);
lean_ctor_set(v_reuseFailAlloc_1502_, 6, v_messages_1475_);
lean_ctor_set(v_reuseFailAlloc_1502_, 7, v_infoState_1476_);
lean_ctor_set(v_reuseFailAlloc_1502_, 8, v_snapshotTasks_1477_);
v___x_1483_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v_mctx_1487_; lean_object* v_zetaDeltaFVarIds_1488_; lean_object* v_postponed_1489_; lean_object* v_diag_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1500_; 
v___x_1484_ = lean_st_ref_set(v___y_1462_, v___x_1483_);
v___x_1485_ = lean_st_ref_get(v___y_1462_);
lean_dec(v___x_1485_);
v___x_1486_ = lean_st_ref_take(v___y_1465_);
v_mctx_1487_ = lean_ctor_get(v___x_1486_, 0);
v_zetaDeltaFVarIds_1488_ = lean_ctor_get(v___x_1486_, 2);
v_postponed_1489_ = lean_ctor_get(v___x_1486_, 3);
v_diag_1490_ = lean_ctor_get(v___x_1486_, 4);
v_isSharedCheck_1500_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1500_ == 0)
{
lean_object* v_unused_1501_; 
v_unused_1501_ = lean_ctor_get(v___x_1486_, 1);
lean_dec(v_unused_1501_);
v___x_1492_ = v___x_1486_;
v_isShared_1493_ = v_isSharedCheck_1500_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_diag_1490_);
lean_inc(v_postponed_1489_);
lean_inc(v_zetaDeltaFVarIds_1488_);
lean_inc(v_mctx_1487_);
lean_dec(v___x_1486_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1500_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
lean_object* v___x_1495_; 
if (v_isShared_1493_ == 0)
{
lean_ctor_set(v___x_1492_, 1, v___x_1466_);
v___x_1495_ = v___x_1492_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v_mctx_1487_);
lean_ctor_set(v_reuseFailAlloc_1499_, 1, v___x_1466_);
lean_ctor_set(v_reuseFailAlloc_1499_, 2, v_zetaDeltaFVarIds_1488_);
lean_ctor_set(v_reuseFailAlloc_1499_, 3, v_postponed_1489_);
lean_ctor_set(v_reuseFailAlloc_1499_, 4, v_diag_1490_);
v___x_1495_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; 
v___x_1496_ = lean_st_ref_set(v___y_1465_, v___x_1495_);
v___x_1497_ = lean_box(0);
v___x_1498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1498_, 0, v___x_1497_);
return v___x_1498_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___lam__0___boxed(lean_object* v___y_1505_, lean_object* v_isExporting_1506_, lean_object* v___x_1507_, lean_object* v___y_1508_, lean_object* v___x_1509_, lean_object* v_a_x3f_1510_, lean_object* v___y_1511_){
_start:
{
uint8_t v_isExporting_boxed_1512_; lean_object* v_res_1513_; 
v_isExporting_boxed_1512_ = lean_unbox(v_isExporting_1506_);
v_res_1513_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___lam__0(v___y_1505_, v_isExporting_boxed_1512_, v___x_1507_, v___y_1508_, v___x_1509_, v_a_x3f_1510_);
lean_dec(v_a_x3f_1510_);
lean_dec(v___y_1508_);
lean_dec(v___y_1505_);
return v_res_1513_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg(lean_object* v_x_1514_, uint8_t v_isExporting_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
lean_object* v___x_1523_; lean_object* v_env_1524_; uint8_t v_isExporting_1525_; lean_object* v___x_1526_; lean_object* v_env_1527_; lean_object* v_nextMacroScope_1528_; lean_object* v_ngen_1529_; lean_object* v_auxDeclNGen_1530_; lean_object* v_traceState_1531_; lean_object* v_messages_1532_; lean_object* v_infoState_1533_; lean_object* v_snapshotTasks_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1589_; 
v___x_1523_ = lean_st_ref_get(v___y_1521_);
v_env_1524_ = lean_ctor_get(v___x_1523_, 0);
lean_inc_ref(v_env_1524_);
lean_dec(v___x_1523_);
v_isExporting_1525_ = lean_ctor_get_uint8(v_env_1524_, sizeof(void*)*8);
lean_dec_ref(v_env_1524_);
v___x_1526_ = lean_st_ref_take(v___y_1521_);
v_env_1527_ = lean_ctor_get(v___x_1526_, 0);
v_nextMacroScope_1528_ = lean_ctor_get(v___x_1526_, 1);
v_ngen_1529_ = lean_ctor_get(v___x_1526_, 2);
v_auxDeclNGen_1530_ = lean_ctor_get(v___x_1526_, 3);
v_traceState_1531_ = lean_ctor_get(v___x_1526_, 4);
v_messages_1532_ = lean_ctor_get(v___x_1526_, 6);
v_infoState_1533_ = lean_ctor_get(v___x_1526_, 7);
v_snapshotTasks_1534_ = lean_ctor_get(v___x_1526_, 8);
v_isSharedCheck_1589_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1589_ == 0)
{
lean_object* v_unused_1590_; 
v_unused_1590_ = lean_ctor_get(v___x_1526_, 5);
lean_dec(v_unused_1590_);
v___x_1536_ = v___x_1526_;
v_isShared_1537_ = v_isSharedCheck_1589_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_snapshotTasks_1534_);
lean_inc(v_infoState_1533_);
lean_inc(v_messages_1532_);
lean_inc(v_traceState_1531_);
lean_inc(v_auxDeclNGen_1530_);
lean_inc(v_ngen_1529_);
lean_inc(v_nextMacroScope_1528_);
lean_inc(v_env_1527_);
lean_dec(v___x_1526_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1589_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1541_; 
v___x_1538_ = l_Lean_Environment_setExporting(v_env_1527_, v_isExporting_1515_);
v___x_1539_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2);
if (v_isShared_1537_ == 0)
{
lean_ctor_set(v___x_1536_, 5, v___x_1539_);
lean_ctor_set(v___x_1536_, 0, v___x_1538_);
v___x_1541_ = v___x_1536_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v___x_1538_);
lean_ctor_set(v_reuseFailAlloc_1588_, 1, v_nextMacroScope_1528_);
lean_ctor_set(v_reuseFailAlloc_1588_, 2, v_ngen_1529_);
lean_ctor_set(v_reuseFailAlloc_1588_, 3, v_auxDeclNGen_1530_);
lean_ctor_set(v_reuseFailAlloc_1588_, 4, v_traceState_1531_);
lean_ctor_set(v_reuseFailAlloc_1588_, 5, v___x_1539_);
lean_ctor_set(v_reuseFailAlloc_1588_, 6, v_messages_1532_);
lean_ctor_set(v_reuseFailAlloc_1588_, 7, v_infoState_1533_);
lean_ctor_set(v_reuseFailAlloc_1588_, 8, v_snapshotTasks_1534_);
v___x_1541_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v_mctx_1545_; lean_object* v_zetaDeltaFVarIds_1546_; lean_object* v_postponed_1547_; lean_object* v_diag_1548_; lean_object* v___x_1550_; uint8_t v_isShared_1551_; uint8_t v_isSharedCheck_1586_; 
v___x_1542_ = lean_st_ref_set(v___y_1521_, v___x_1541_);
v___x_1543_ = lean_st_ref_get(v___y_1521_);
lean_dec(v___x_1543_);
v___x_1544_ = lean_st_ref_take(v___y_1519_);
v_mctx_1545_ = lean_ctor_get(v___x_1544_, 0);
v_zetaDeltaFVarIds_1546_ = lean_ctor_get(v___x_1544_, 2);
v_postponed_1547_ = lean_ctor_get(v___x_1544_, 3);
v_diag_1548_ = lean_ctor_get(v___x_1544_, 4);
v_isSharedCheck_1586_ = !lean_is_exclusive(v___x_1544_);
if (v_isSharedCheck_1586_ == 0)
{
lean_object* v_unused_1587_; 
v_unused_1587_ = lean_ctor_get(v___x_1544_, 1);
lean_dec(v_unused_1587_);
v___x_1550_ = v___x_1544_;
v_isShared_1551_ = v_isSharedCheck_1586_;
goto v_resetjp_1549_;
}
else
{
lean_inc(v_diag_1548_);
lean_inc(v_postponed_1547_);
lean_inc(v_zetaDeltaFVarIds_1546_);
lean_inc(v_mctx_1545_);
lean_dec(v___x_1544_);
v___x_1550_ = lean_box(0);
v_isShared_1551_ = v_isSharedCheck_1586_;
goto v_resetjp_1549_;
}
v_resetjp_1549_:
{
lean_object* v___x_1552_; lean_object* v___x_1554_; 
v___x_1552_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3);
if (v_isShared_1551_ == 0)
{
lean_ctor_set(v___x_1550_, 1, v___x_1552_);
v___x_1554_ = v___x_1550_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1585_; 
v_reuseFailAlloc_1585_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1585_, 0, v_mctx_1545_);
lean_ctor_set(v_reuseFailAlloc_1585_, 1, v___x_1552_);
lean_ctor_set(v_reuseFailAlloc_1585_, 2, v_zetaDeltaFVarIds_1546_);
lean_ctor_set(v_reuseFailAlloc_1585_, 3, v_postponed_1547_);
lean_ctor_set(v_reuseFailAlloc_1585_, 4, v_diag_1548_);
v___x_1554_ = v_reuseFailAlloc_1585_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
lean_object* v___x_1555_; lean_object* v_r_1556_; 
v___x_1555_ = lean_st_ref_set(v___y_1519_, v___x_1554_);
lean_inc(v___y_1521_);
lean_inc_ref(v___y_1520_);
lean_inc(v___y_1519_);
lean_inc_ref(v___y_1518_);
lean_inc(v___y_1517_);
lean_inc_ref(v___y_1516_);
v_r_1556_ = lean_apply_7(v_x_1514_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_, lean_box(0));
if (lean_obj_tag(v_r_1556_) == 0)
{
lean_object* v_a_1557_; lean_object* v___x_1559_; uint8_t v_isShared_1560_; uint8_t v_isSharedCheck_1573_; 
v_a_1557_ = lean_ctor_get(v_r_1556_, 0);
v_isSharedCheck_1573_ = !lean_is_exclusive(v_r_1556_);
if (v_isSharedCheck_1573_ == 0)
{
v___x_1559_ = v_r_1556_;
v_isShared_1560_ = v_isSharedCheck_1573_;
goto v_resetjp_1558_;
}
else
{
lean_inc(v_a_1557_);
lean_dec(v_r_1556_);
v___x_1559_ = lean_box(0);
v_isShared_1560_ = v_isSharedCheck_1573_;
goto v_resetjp_1558_;
}
v_resetjp_1558_:
{
lean_object* v___x_1562_; 
lean_inc(v_a_1557_);
if (v_isShared_1560_ == 0)
{
lean_ctor_set_tag(v___x_1559_, 1);
v___x_1562_ = v___x_1559_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v_a_1557_);
v___x_1562_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
lean_object* v___x_1563_; lean_object* v___x_1565_; uint8_t v_isShared_1566_; uint8_t v_isSharedCheck_1570_; 
v___x_1563_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___lam__0(v___y_1521_, v_isExporting_1525_, v___x_1539_, v___y_1519_, v___x_1552_, v___x_1562_);
lean_dec_ref(v___x_1562_);
v_isSharedCheck_1570_ = !lean_is_exclusive(v___x_1563_);
if (v_isSharedCheck_1570_ == 0)
{
lean_object* v_unused_1571_; 
v_unused_1571_ = lean_ctor_get(v___x_1563_, 0);
lean_dec(v_unused_1571_);
v___x_1565_ = v___x_1563_;
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
else
{
lean_dec(v___x_1563_);
v___x_1565_ = lean_box(0);
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
v_resetjp_1564_:
{
lean_object* v___x_1568_; 
if (v_isShared_1566_ == 0)
{
lean_ctor_set(v___x_1565_, 0, v_a_1557_);
v___x_1568_ = v___x_1565_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v_a_1557_);
v___x_1568_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
return v___x_1568_;
}
}
}
}
}
else
{
lean_object* v_a_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1583_; 
v_a_1574_ = lean_ctor_get(v_r_1556_, 0);
lean_inc(v_a_1574_);
lean_dec_ref(v_r_1556_);
v___x_1575_ = lean_box(0);
v___x_1576_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___lam__0(v___y_1521_, v_isExporting_1525_, v___x_1539_, v___y_1519_, v___x_1552_, v___x_1575_);
v_isSharedCheck_1583_ = !lean_is_exclusive(v___x_1576_);
if (v_isSharedCheck_1583_ == 0)
{
lean_object* v_unused_1584_; 
v_unused_1584_ = lean_ctor_get(v___x_1576_, 0);
lean_dec(v_unused_1584_);
v___x_1578_ = v___x_1576_;
v_isShared_1579_ = v_isSharedCheck_1583_;
goto v_resetjp_1577_;
}
else
{
lean_dec(v___x_1576_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1583_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v___x_1581_; 
if (v_isShared_1579_ == 0)
{
lean_ctor_set_tag(v___x_1578_, 1);
lean_ctor_set(v___x_1578_, 0, v_a_1574_);
v___x_1581_ = v___x_1578_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v_a_1574_);
v___x_1581_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
return v___x_1581_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___boxed(lean_object* v_x_1591_, lean_object* v_isExporting_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_){
_start:
{
uint8_t v_isExporting_boxed_1600_; lean_object* v_res_1601_; 
v_isExporting_boxed_1600_ = lean_unbox(v_isExporting_1592_);
v_res_1601_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg(v_x_1591_, v_isExporting_boxed_1600_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
lean_dec(v___y_1598_);
lean_dec_ref(v___y_1597_);
lean_dec(v___y_1596_);
lean_dec_ref(v___y_1595_);
lean_dec(v___y_1594_);
lean_dec_ref(v___y_1593_);
return v_res_1601_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___redArg(lean_object* v_x_1602_, uint8_t v_when_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_){
_start:
{
if (v_when_1603_ == 0)
{
lean_object* v___x_1611_; 
lean_inc(v___y_1609_);
lean_inc_ref(v___y_1608_);
lean_inc(v___y_1607_);
lean_inc_ref(v___y_1606_);
lean_inc(v___y_1605_);
lean_inc_ref(v___y_1604_);
v___x_1611_ = lean_apply_7(v_x_1602_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, lean_box(0));
return v___x_1611_;
}
else
{
uint8_t v___x_1612_; lean_object* v___x_1613_; 
v___x_1612_ = 0;
v___x_1613_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg(v_x_1602_, v___x_1612_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_);
return v___x_1613_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___redArg___boxed(lean_object* v_x_1614_, lean_object* v_when_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_){
_start:
{
uint8_t v_when_boxed_1623_; lean_object* v_res_1624_; 
v_when_boxed_1623_ = lean_unbox(v_when_1615_);
v_res_1624_ = l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___redArg(v_x_1614_, v_when_boxed_1623_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_, v___y_1621_);
lean_dec(v___y_1621_);
lean_dec_ref(v___y_1620_);
lean_dec(v___y_1619_);
lean_dec_ref(v___y_1618_);
lean_dec(v___y_1617_);
lean_dec_ref(v___y_1616_);
return v_res_1624_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1___redArg(size_t v_sz_1625_, size_t v_i_1626_, lean_object* v_bs_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_){
_start:
{
uint8_t v___x_1631_; 
v___x_1631_ = lean_usize_dec_lt(v_i_1626_, v_sz_1625_);
if (v___x_1631_ == 0)
{
lean_object* v___x_1632_; 
v___x_1632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1632_, 0, v_bs_1627_);
return v___x_1632_;
}
else
{
lean_object* v_v_1633_; lean_object* v_ref_1634_; uint8_t v_kind_1635_; lean_object* v_levelParams_1636_; lean_object* v_modifiers_1637_; lean_object* v_declName_1638_; lean_object* v_binders_1639_; lean_object* v_numSectionVars_1640_; lean_object* v_type_1641_; lean_object* v_value_1642_; lean_object* v_termination_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1666_; 
v_v_1633_ = lean_array_uget(v_bs_1627_, v_i_1626_);
v_ref_1634_ = lean_ctor_get(v_v_1633_, 0);
v_kind_1635_ = lean_ctor_get_uint8(v_v_1633_, sizeof(void*)*9);
v_levelParams_1636_ = lean_ctor_get(v_v_1633_, 1);
v_modifiers_1637_ = lean_ctor_get(v_v_1633_, 2);
v_declName_1638_ = lean_ctor_get(v_v_1633_, 3);
v_binders_1639_ = lean_ctor_get(v_v_1633_, 4);
v_numSectionVars_1640_ = lean_ctor_get(v_v_1633_, 5);
v_type_1641_ = lean_ctor_get(v_v_1633_, 6);
v_value_1642_ = lean_ctor_get(v_v_1633_, 7);
v_termination_1643_ = lean_ctor_get(v_v_1633_, 8);
v_isSharedCheck_1666_ = !lean_is_exclusive(v_v_1633_);
if (v_isSharedCheck_1666_ == 0)
{
v___x_1645_ = v_v_1633_;
v_isShared_1646_ = v_isSharedCheck_1666_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_termination_1643_);
lean_inc(v_value_1642_);
lean_inc(v_type_1641_);
lean_inc(v_numSectionVars_1640_);
lean_inc(v_binders_1639_);
lean_inc(v_declName_1638_);
lean_inc(v_modifiers_1637_);
lean_inc(v_levelParams_1636_);
lean_inc(v_ref_1634_);
lean_dec(v_v_1633_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1666_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
lean_object* v___x_1647_; 
v___x_1647_ = l_Lean_Elab_WF_floatRecApp(v_value_1642_, v___y_1628_, v___y_1629_);
if (lean_obj_tag(v___x_1647_) == 0)
{
lean_object* v_a_1648_; lean_object* v___x_1649_; lean_object* v_bs_x27_1650_; lean_object* v___x_1652_; 
v_a_1648_ = lean_ctor_get(v___x_1647_, 0);
lean_inc(v_a_1648_);
lean_dec_ref(v___x_1647_);
v___x_1649_ = lean_unsigned_to_nat(0u);
v_bs_x27_1650_ = lean_array_uset(v_bs_1627_, v_i_1626_, v___x_1649_);
if (v_isShared_1646_ == 0)
{
lean_ctor_set(v___x_1645_, 7, v_a_1648_);
v___x_1652_ = v___x_1645_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_ref_1634_);
lean_ctor_set(v_reuseFailAlloc_1657_, 1, v_levelParams_1636_);
lean_ctor_set(v_reuseFailAlloc_1657_, 2, v_modifiers_1637_);
lean_ctor_set(v_reuseFailAlloc_1657_, 3, v_declName_1638_);
lean_ctor_set(v_reuseFailAlloc_1657_, 4, v_binders_1639_);
lean_ctor_set(v_reuseFailAlloc_1657_, 5, v_numSectionVars_1640_);
lean_ctor_set(v_reuseFailAlloc_1657_, 6, v_type_1641_);
lean_ctor_set(v_reuseFailAlloc_1657_, 7, v_a_1648_);
lean_ctor_set(v_reuseFailAlloc_1657_, 8, v_termination_1643_);
lean_ctor_set_uint8(v_reuseFailAlloc_1657_, sizeof(void*)*9, v_kind_1635_);
v___x_1652_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
size_t v___x_1653_; size_t v___x_1654_; lean_object* v___x_1655_; 
v___x_1653_ = ((size_t)1ULL);
v___x_1654_ = lean_usize_add(v_i_1626_, v___x_1653_);
v___x_1655_ = lean_array_uset(v_bs_x27_1650_, v_i_1626_, v___x_1652_);
v_i_1626_ = v___x_1654_;
v_bs_1627_ = v___x_1655_;
goto _start;
}
}
else
{
lean_object* v_a_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1665_; 
lean_del_object(v___x_1645_);
lean_dec_ref(v_termination_1643_);
lean_dec_ref(v_type_1641_);
lean_dec(v_numSectionVars_1640_);
lean_dec(v_binders_1639_);
lean_dec(v_declName_1638_);
lean_dec_ref(v_modifiers_1637_);
lean_dec(v_levelParams_1636_);
lean_dec(v_ref_1634_);
lean_dec_ref(v_bs_1627_);
v_a_1658_ = lean_ctor_get(v___x_1647_, 0);
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_1647_);
if (v_isSharedCheck_1665_ == 0)
{
v___x_1660_ = v___x_1647_;
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_a_1658_);
lean_dec(v___x_1647_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1___redArg___boxed(lean_object* v_sz_1667_, lean_object* v_i_1668_, lean_object* v_bs_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_){
_start:
{
size_t v_sz_boxed_1673_; size_t v_i_boxed_1674_; lean_object* v_res_1675_; 
v_sz_boxed_1673_ = lean_unbox_usize(v_sz_1667_);
lean_dec(v_sz_1667_);
v_i_boxed_1674_ = lean_unbox_usize(v_i_1668_);
lean_dec(v_i_1668_);
v_res_1675_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1___redArg(v_sz_boxed_1673_, v_i_boxed_1674_, v_bs_1669_, v___y_1670_, v___y_1671_);
lean_dec(v___y_1671_);
lean_dec_ref(v___y_1670_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__7___redArg(lean_object* v_env_1676_, lean_object* v_x_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_){
_start:
{
lean_object* v___x_1685_; lean_object* v_env_1686_; lean_object* v_a_1688_; lean_object* v___x_1698_; lean_object* v___x_1699_; 
v___x_1685_ = lean_st_ref_get(v___y_1683_);
v_env_1686_ = lean_ctor_get(v___x_1685_, 0);
lean_inc_ref(v_env_1686_);
lean_dec(v___x_1685_);
v___x_1698_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_env_1676_, v___y_1681_, v___y_1683_);
lean_dec_ref(v___x_1698_);
lean_inc(v___y_1683_);
lean_inc_ref(v___y_1682_);
lean_inc(v___y_1681_);
lean_inc_ref(v___y_1680_);
lean_inc(v___y_1679_);
lean_inc_ref(v___y_1678_);
v___x_1699_ = lean_apply_7(v_x_1677_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_, lean_box(0));
if (lean_obj_tag(v___x_1699_) == 0)
{
lean_object* v_a_1700_; lean_object* v___x_1701_; lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1708_; 
v_a_1700_ = lean_ctor_get(v___x_1699_, 0);
lean_inc(v_a_1700_);
lean_dec_ref(v___x_1699_);
v___x_1701_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_env_1686_, v___y_1681_, v___y_1683_);
v_isSharedCheck_1708_ = !lean_is_exclusive(v___x_1701_);
if (v_isSharedCheck_1708_ == 0)
{
lean_object* v_unused_1709_; 
v_unused_1709_ = lean_ctor_get(v___x_1701_, 0);
lean_dec(v_unused_1709_);
v___x_1703_ = v___x_1701_;
v_isShared_1704_ = v_isSharedCheck_1708_;
goto v_resetjp_1702_;
}
else
{
lean_dec(v___x_1701_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1708_;
goto v_resetjp_1702_;
}
v_resetjp_1702_:
{
lean_object* v___x_1706_; 
if (v_isShared_1704_ == 0)
{
lean_ctor_set(v___x_1703_, 0, v_a_1700_);
v___x_1706_ = v___x_1703_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v_a_1700_);
v___x_1706_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
return v___x_1706_;
}
}
}
else
{
lean_object* v_a_1710_; 
v_a_1710_ = lean_ctor_get(v___x_1699_, 0);
lean_inc(v_a_1710_);
lean_dec_ref(v___x_1699_);
v_a_1688_ = v_a_1710_;
goto v___jp_1687_;
}
v___jp_1687_:
{
lean_object* v___x_1689_; lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1696_; 
v___x_1689_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_env_1686_, v___y_1681_, v___y_1683_);
v_isSharedCheck_1696_ = !lean_is_exclusive(v___x_1689_);
if (v_isSharedCheck_1696_ == 0)
{
lean_object* v_unused_1697_; 
v_unused_1697_ = lean_ctor_get(v___x_1689_, 0);
lean_dec(v_unused_1697_);
v___x_1691_ = v___x_1689_;
v_isShared_1692_ = v_isSharedCheck_1696_;
goto v_resetjp_1690_;
}
else
{
lean_dec(v___x_1689_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1696_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
lean_object* v___x_1694_; 
if (v_isShared_1692_ == 0)
{
lean_ctor_set_tag(v___x_1691_, 1);
lean_ctor_set(v___x_1691_, 0, v_a_1688_);
v___x_1694_ = v___x_1691_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v_a_1688_);
v___x_1694_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
return v___x_1694_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__7___redArg___boxed(lean_object* v_env_1711_, lean_object* v_x_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_){
_start:
{
lean_object* v_res_1720_; 
v_res_1720_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__7___redArg(v_env_1711_, v_x_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_);
lean_dec(v___y_1718_);
lean_dec_ref(v___y_1717_);
lean_dec(v___y_1716_);
lean_dec_ref(v___y_1715_);
lean_dec(v___y_1714_);
lean_dec_ref(v___y_1713_);
return v_res_1720_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg(lean_object* v___x_1721_, lean_object* v_as_1722_, size_t v_sz_1723_, size_t v_i_1724_, lean_object* v_b_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_){
_start:
{
lean_object* v_a_1732_; uint8_t v___x_1736_; 
v___x_1736_ = lean_usize_dec_lt(v_i_1724_, v_sz_1723_);
if (v___x_1736_ == 0)
{
lean_object* v___x_1737_; 
lean_dec(v___x_1721_);
v___x_1737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1737_, 0, v_b_1725_);
return v___x_1737_;
}
else
{
lean_object* v_a_1738_; uint8_t v_kind_1739_; lean_object* v_declName_1740_; lean_object* v_type_1741_; lean_object* v___x_1742_; uint8_t v___x_1743_; 
v_a_1738_ = lean_array_uget_borrowed(v_as_1722_, v_i_1724_);
v_kind_1739_ = lean_ctor_get_uint8(v_a_1738_, sizeof(void*)*9);
v_declName_1740_ = lean_ctor_get(v_a_1738_, 3);
v_type_1741_ = lean_ctor_get(v_a_1738_, 6);
v___x_1742_ = lean_box(0);
v___x_1743_ = lean_name_eq(v_declName_1740_, v___x_1721_);
if (v___x_1743_ == 0)
{
uint8_t v___x_1744_; 
v___x_1744_ = l_Lean_Elab_DefKind_isTheorem(v_kind_1739_);
if (v___x_1744_ == 0)
{
lean_object* v___x_1745_; 
lean_inc_ref(v_type_1741_);
v___x_1745_ = l_Lean_Meta_isProp(v_type_1741_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_);
if (lean_obj_tag(v___x_1745_) == 0)
{
lean_object* v_a_1746_; uint8_t v___x_1747_; 
v_a_1746_ = lean_ctor_get(v___x_1745_, 0);
lean_inc(v_a_1746_);
lean_dec_ref(v___x_1745_);
v___x_1747_ = lean_unbox(v_a_1746_);
lean_dec(v_a_1746_);
if (v___x_1747_ == 0)
{
lean_object* v___x_1748_; 
lean_inc(v___x_1721_);
lean_inc(v_a_1738_);
v___x_1748_ = l_Lean_Elab_WF_mkBinaryUnfoldEq(v_a_1738_, v___x_1721_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_dec_ref(v___x_1748_);
v_a_1732_ = v___x_1742_;
goto v___jp_1731_;
}
else
{
lean_dec(v___x_1721_);
return v___x_1748_;
}
}
else
{
v_a_1732_ = v___x_1742_;
goto v___jp_1731_;
}
}
else
{
lean_object* v_a_1749_; lean_object* v___x_1751_; uint8_t v_isShared_1752_; uint8_t v_isSharedCheck_1756_; 
lean_dec(v___x_1721_);
v_a_1749_ = lean_ctor_get(v___x_1745_, 0);
v_isSharedCheck_1756_ = !lean_is_exclusive(v___x_1745_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1751_ = v___x_1745_;
v_isShared_1752_ = v_isSharedCheck_1756_;
goto v_resetjp_1750_;
}
else
{
lean_inc(v_a_1749_);
lean_dec(v___x_1745_);
v___x_1751_ = lean_box(0);
v_isShared_1752_ = v_isSharedCheck_1756_;
goto v_resetjp_1750_;
}
v_resetjp_1750_:
{
lean_object* v___x_1754_; 
if (v_isShared_1752_ == 0)
{
v___x_1754_ = v___x_1751_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v_a_1749_);
v___x_1754_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
return v___x_1754_;
}
}
}
}
else
{
v_a_1732_ = v___x_1742_;
goto v___jp_1731_;
}
}
else
{
v_a_1732_ = v___x_1742_;
goto v___jp_1731_;
}
}
v___jp_1731_:
{
size_t v___x_1733_; size_t v___x_1734_; 
v___x_1733_ = ((size_t)1ULL);
v___x_1734_ = lean_usize_add(v_i_1724_, v___x_1733_);
v_i_1724_ = v___x_1734_;
v_b_1725_ = v_a_1732_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg___boxed(lean_object* v___x_1757_, lean_object* v_as_1758_, lean_object* v_sz_1759_, lean_object* v_i_1760_, lean_object* v_b_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_){
_start:
{
size_t v_sz_boxed_1767_; size_t v_i_boxed_1768_; lean_object* v_res_1769_; 
v_sz_boxed_1767_ = lean_unbox_usize(v_sz_1759_);
lean_dec(v_sz_1759_);
v_i_boxed_1768_ = lean_unbox_usize(v_i_1760_);
lean_dec(v_i_1760_);
v_res_1769_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg(v___x_1757_, v_as_1758_, v_sz_boxed_1767_, v_i_boxed_1768_, v_b_1761_, v___y_1762_, v___y_1763_, v___y_1764_, v___y_1765_);
lean_dec(v___y_1765_);
lean_dec_ref(v___y_1764_);
lean_dec(v___y_1763_);
lean_dec_ref(v___y_1762_);
lean_dec_ref(v_as_1758_);
return v_res_1769_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__8(size_t v_sz_1770_, size_t v_i_1771_, lean_object* v_bs_1772_){
_start:
{
uint8_t v___x_1773_; 
v___x_1773_ = lean_usize_dec_lt(v_i_1771_, v_sz_1770_);
if (v___x_1773_ == 0)
{
lean_object* v___x_1774_; 
v___x_1774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1774_, 0, v_bs_1772_);
return v___x_1774_;
}
else
{
lean_object* v_v_1775_; 
v_v_1775_ = lean_array_uget_borrowed(v_bs_1772_, v_i_1771_);
if (lean_obj_tag(v_v_1775_) == 0)
{
lean_object* v___x_1776_; 
lean_dec_ref(v_bs_1772_);
v___x_1776_ = lean_box(0);
return v___x_1776_;
}
else
{
lean_object* v_val_1777_; lean_object* v___x_1778_; lean_object* v_bs_x27_1779_; size_t v___x_1780_; size_t v___x_1781_; lean_object* v___x_1782_; 
v_val_1777_ = lean_ctor_get(v_v_1775_, 0);
lean_inc(v_val_1777_);
v___x_1778_ = lean_unsigned_to_nat(0u);
v_bs_x27_1779_ = lean_array_uset(v_bs_1772_, v_i_1771_, v___x_1778_);
v___x_1780_ = ((size_t)1ULL);
v___x_1781_ = lean_usize_add(v_i_1771_, v___x_1780_);
v___x_1782_ = lean_array_uset(v_bs_x27_1779_, v_i_1771_, v_val_1777_);
v_i_1771_ = v___x_1781_;
v_bs_1772_ = v___x_1782_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__8___boxed(lean_object* v_sz_1784_, lean_object* v_i_1785_, lean_object* v_bs_1786_){
_start:
{
size_t v_sz_boxed_1787_; size_t v_i_boxed_1788_; lean_object* v_res_1789_; 
v_sz_boxed_1787_ = lean_unbox_usize(v_sz_1784_);
lean_dec(v_sz_1784_);
v_i_boxed_1788_ = lean_unbox_usize(v_i_1785_);
lean_dec(v_i_1785_);
v_res_1789_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__8(v_sz_boxed_1787_, v_i_boxed_1788_, v_bs_1786_);
return v_res_1789_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__0(void){
_start:
{
lean_object* v___x_1790_; 
v___x_1790_ = lean_mk_string_unchecked("definition", 10, 10);
return v___x_1790_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__1(void){
_start:
{
lean_object* v___x_1791_; 
v___x_1791_ = lean_mk_string_unchecked("wf", 2, 2);
return v___x_1791_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__2(void){
_start:
{
lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; 
v___x_1792_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__1, &l_Lean_Elab_wfRecursion___closed__1_once, _init_l_Lean_Elab_wfRecursion___closed__1);
v___x_1793_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__0, &l_Lean_Elab_wfRecursion___closed__0_once, _init_l_Lean_Elab_wfRecursion___closed__0);
v___x_1794_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0);
v___x_1795_ = l_Lean_Name_mkStr3(v___x_1794_, v___x_1793_, v___x_1792_);
return v___x_1795_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__3(void){
_start:
{
lean_object* v___x_1796_; 
v___x_1796_ = lean_mk_string_unchecked(">> ", 3, 3);
return v___x_1796_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__4(void){
_start:
{
lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1797_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__3, &l_Lean_Elab_wfRecursion___closed__3_once, _init_l_Lean_Elab_wfRecursion___closed__3);
v___x_1798_ = l_Lean_stringToMessageData(v___x_1797_);
return v___x_1798_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__5(void){
_start:
{
lean_object* v___x_1799_; 
v___x_1799_ = lean_mk_string_unchecked(" :=\n", 4, 4);
return v___x_1799_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__6(void){
_start:
{
lean_object* v___x_1800_; lean_object* v___x_1801_; 
v___x_1800_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__5, &l_Lean_Elab_wfRecursion___closed__5_once, _init_l_Lean_Elab_wfRecursion___closed__5);
v___x_1801_ = l_Lean_stringToMessageData(v___x_1800_);
return v___x_1801_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__7(void){
_start:
{
lean_object* v___x_1802_; 
v___x_1802_ = lean_mk_string_unchecked("unaryPreDefProcessed:", 21, 21);
return v___x_1802_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__8(void){
_start:
{
lean_object* v___x_1803_; lean_object* v___x_1804_; 
v___x_1803_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__7, &l_Lean_Elab_wfRecursion___closed__7_once, _init_l_Lean_Elab_wfRecursion___closed__7);
v___x_1804_ = l_Lean_stringToMessageData(v___x_1803_);
return v___x_1804_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__9(void){
_start:
{
lean_object* v___x_1805_; 
v___x_1805_ = lean_mk_string_unchecked("unaryPreDef:", 12, 12);
return v___x_1805_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__10(void){
_start:
{
lean_object* v___x_1806_; lean_object* v___x_1807_; 
v___x_1806_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__9, &l_Lean_Elab_wfRecursion___closed__9_once, _init_l_Lean_Elab_wfRecursion___closed__9);
v___x_1807_ = l_Lean_stringToMessageData(v___x_1806_);
return v___x_1807_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___boxed__const__1(void){
_start:
{
size_t v___x_1808_; lean_object* v___x_1809_; 
v___x_1808_ = ((size_t)0ULL);
v___x_1809_ = lean_box_usize(v___x_1808_);
return v___x_1809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion(lean_object* v_docCtx_1810_, lean_object* v_preDefs_1811_, lean_object* v_termMeasure_x3fs_1812_, lean_object* v_a_1813_, lean_object* v_a_1814_, lean_object* v_a_1815_, lean_object* v_a_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_){
_start:
{
size_t v_sz_1820_; size_t v___x_1821_; lean_object* v___x_1822_; 
v_sz_1820_ = lean_array_size(v_preDefs_1811_);
v___x_1821_ = ((size_t)0ULL);
v___x_1822_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1___redArg(v_sz_1820_, v___x_1821_, v_preDefs_1811_, v_a_1817_, v_a_1818_);
if (lean_obj_tag(v___x_1822_) == 0)
{
lean_object* v_a_1823_; lean_object* v___x_1824_; lean_object* v_env_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___y_1829_; lean_object* v___y_1830_; lean_object* v___y_1831_; lean_object* v___y_1832_; lean_object* v___y_1833_; lean_object* v___y_1834_; lean_object* v___y_1835_; lean_object* v___y_1836_; size_t v_sz_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___f_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; 
v_a_1823_ = lean_ctor_get(v___x_1822_, 0);
lean_inc_n(v_a_1823_, 2);
lean_dec_ref(v___x_1822_);
v___x_1824_ = lean_st_ref_get(v_a_1818_);
v_env_1825_ = lean_ctor_get(v___x_1824_, 0);
lean_inc_ref(v_env_1825_);
lean_dec(v___x_1824_);
v___x_1826_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v___x_1827_ = lean_box(0);
v_sz_1841_ = lean_array_size(v_a_1823_);
v___x_1842_ = lean_box_usize(v_sz_1841_);
v___x_1843_ = l_Lean_Elab_wfRecursion___boxed__const__1;
v___f_1844_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__0___boxed), 12, 5);
lean_closure_set(v___f_1844_, 0, v_a_1823_);
lean_closure_set(v___f_1844_, 1, v___x_1842_);
lean_closure_set(v___f_1844_, 2, v___x_1843_);
lean_closure_set(v___f_1844_, 3, v___x_1827_);
lean_closure_set(v___f_1844_, 4, v___x_1826_);
v___x_1845_ = l_Lean_Environment_unlockAsync(v_env_1825_);
v___x_1846_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__7___redArg(v___x_1845_, v___f_1844_, v_a_1813_, v_a_1814_, v_a_1815_, v_a_1816_, v_a_1817_, v_a_1818_);
if (lean_obj_tag(v___x_1846_) == 0)
{
lean_object* v_a_1847_; lean_object* v_snd_1848_; lean_object* v_fst_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_2036_; 
v_a_1847_ = lean_ctor_get(v___x_1846_, 0);
lean_inc(v_a_1847_);
lean_dec_ref(v___x_1846_);
v_snd_1848_ = lean_ctor_get(v_a_1847_, 1);
v_fst_1849_ = lean_ctor_get(v_a_1847_, 0);
v_isSharedCheck_2036_ = !lean_is_exclusive(v_a_1847_);
if (v_isSharedCheck_2036_ == 0)
{
v___x_1851_ = v_a_1847_;
v_isShared_1852_ = v_isSharedCheck_2036_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_snd_1848_);
lean_inc(v_fst_1849_);
lean_dec(v_a_1847_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_2036_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v_fst_1853_; lean_object* v_snd_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_2035_; 
v_fst_1853_ = lean_ctor_get(v_snd_1848_, 0);
v_snd_1854_ = lean_ctor_get(v_snd_1848_, 1);
v_isSharedCheck_2035_ = !lean_is_exclusive(v_snd_1848_);
if (v_isSharedCheck_2035_ == 0)
{
v___x_1856_ = v_snd_1848_;
v_isShared_1857_ = v_isSharedCheck_2035_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_snd_1854_);
lean_inc(v_fst_1853_);
lean_dec(v_snd_1848_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_2035_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v___y_1859_; uint8_t v___y_1860_; lean_object* v___y_1861_; lean_object* v___y_1862_; lean_object* v___y_1863_; lean_object* v___y_1864_; lean_object* v___y_1865_; lean_object* v___y_1866_; lean_object* v___y_1867_; lean_object* v___x_1917_; lean_object* v___y_1919_; lean_object* v___y_1920_; lean_object* v_wf_1921_; lean_object* v___y_1922_; lean_object* v___y_1923_; lean_object* v___y_1924_; lean_object* v___y_1925_; lean_object* v___y_1926_; lean_object* v___y_1927_; lean_object* v___x_1963_; lean_object* v_a_1964_; lean_object* v___f_1965_; size_t v_sz_1966_; lean_object* v_termMeasures_x3f_1967_; lean_object* v___y_1969_; lean_object* v___y_1970_; lean_object* v___y_1971_; lean_object* v___y_1972_; lean_object* v___y_1973_; lean_object* v___y_1974_; lean_object* v___y_1975_; lean_object* v___y_1976_; lean_object* v___y_1977_; lean_object* v___y_1991_; lean_object* v___y_1992_; lean_object* v___y_1993_; lean_object* v___y_1994_; lean_object* v___y_1995_; lean_object* v___y_1996_; uint8_t v___x_2028_; 
v___x_1917_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__2, &l_Lean_Elab_wfRecursion___closed__2_once, _init_l_Lean_Elab_wfRecursion___closed__2);
v___x_1963_ = l_Lean_Elab_wfRecursion___lam__1(v___x_1917_, v_a_1813_, v_a_1814_, v_a_1815_, v_a_1816_, v_a_1817_, v_a_1818_);
v_a_1964_ = lean_ctor_get(v___x_1963_, 0);
lean_inc(v_a_1964_);
lean_dec_ref(v___x_1963_);
lean_inc(v_snd_1854_);
v___f_1965_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__2___boxed), 8, 1);
lean_closure_set(v___f_1965_, 0, v_snd_1854_);
v_sz_1966_ = lean_array_size(v_termMeasure_x3fs_1812_);
v_termMeasures_x3f_1967_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__8(v_sz_1966_, v___x_1821_, v_termMeasure_x3fs_1812_);
v___x_2028_ = lean_unbox(v_a_1964_);
lean_dec(v_a_1964_);
if (v___x_2028_ == 0)
{
v___y_1991_ = v_a_1813_;
v___y_1992_ = v_a_1814_;
v___y_1993_ = v_a_1815_;
v___y_1994_ = v_a_1816_;
v___y_1995_ = v_a_1817_;
v___y_1996_ = v_a_1818_;
goto v___jp_1990_;
}
else
{
lean_object* v_value_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; 
v_value_2029_ = lean_ctor_get(v_snd_1854_, 7);
v___x_2030_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__10, &l_Lean_Elab_wfRecursion___closed__10_once, _init_l_Lean_Elab_wfRecursion___closed__10);
lean_inc_ref(v_value_2029_);
v___x_2031_ = l_Lean_MessageData_ofExpr(v_value_2029_);
v___x_2032_ = l_Lean_indentD(v___x_2031_);
v___x_2033_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2033_, 0, v___x_2030_);
lean_ctor_set(v___x_2033_, 1, v___x_2032_);
v___x_2034_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v___x_1917_, v___x_2033_, v_a_1815_, v_a_1816_, v_a_1817_, v_a_1818_);
if (lean_obj_tag(v___x_2034_) == 0)
{
lean_dec_ref(v___x_2034_);
v___y_1991_ = v_a_1813_;
v___y_1992_ = v_a_1814_;
v___y_1993_ = v_a_1815_;
v___y_1994_ = v_a_1816_;
v___y_1995_ = v_a_1817_;
v___y_1996_ = v_a_1818_;
goto v___jp_1990_;
}
else
{
lean_dec(v_termMeasures_x3f_1967_);
lean_dec_ref(v___f_1965_);
lean_del_object(v___x_1856_);
lean_dec(v_snd_1854_);
lean_dec(v_fst_1853_);
lean_del_object(v___x_1851_);
lean_dec(v_fst_1849_);
lean_dec(v_a_1823_);
lean_dec_ref(v_docCtx_1810_);
return v___x_2034_;
}
}
v___jp_1858_:
{
lean_object* v___x_1868_; 
lean_inc_ref(v___y_1861_);
lean_inc(v_a_1823_);
lean_inc(v_fst_1853_);
lean_inc(v_fst_1849_);
v___x_1868_ = l_Lean_Elab_WF_preDefsFromUnaryNonRec(v_fst_1849_, v_fst_1853_, v_a_1823_, v___y_1861_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_);
if (lean_obj_tag(v___x_1868_) == 0)
{
lean_object* v_a_1869_; lean_object* v___x_1870_; 
v_a_1869_ = lean_ctor_get(v___x_1868_, 0);
lean_inc(v_a_1869_);
lean_dec_ref(v___x_1868_);
lean_inc_ref(v___y_1861_);
lean_inc(v_a_1823_);
lean_inc_ref(v_docCtx_1810_);
v___x_1870_ = l_Lean_Elab_Mutual_addPreDefsFromUnary(v_docCtx_1810_, v_a_1823_, v_a_1869_, v___y_1861_, v___y_1860_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_);
lean_dec(v_a_1869_);
if (lean_obj_tag(v___x_1870_) == 0)
{
lean_object* v___x_1871_; 
lean_dec_ref(v___x_1870_);
lean_inc(v_a_1823_);
v___x_1871_ = l_Lean_Elab_addAndCompilePartialRec(v_docCtx_1810_, v_a_1823_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_);
if (lean_obj_tag(v___x_1871_) == 0)
{
lean_object* v___x_1872_; 
lean_dec_ref(v___x_1871_);
v___x_1872_ = l_Lean_Elab_Mutual_cleanPreDef(v_snd_1854_, v___y_1860_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_);
if (lean_obj_tag(v___x_1872_) == 0)
{
lean_object* v_a_1873_; lean_object* v___x_1874_; 
v_a_1873_ = lean_ctor_get(v___x_1872_, 0);
lean_inc(v_a_1873_);
lean_dec_ref(v___x_1872_);
v___x_1874_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg(v_sz_1841_, v___x_1821_, v_a_1823_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_);
if (lean_obj_tag(v___x_1874_) == 0)
{
lean_object* v_a_1875_; lean_object* v_declName_1876_; lean_object* v___x_1877_; 
v_a_1875_ = lean_ctor_get(v___x_1874_, 0);
lean_inc_n(v_a_1875_, 2);
lean_dec_ref(v___x_1874_);
v_declName_1876_ = lean_ctor_get(v___y_1861_, 3);
lean_inc_n(v_declName_1876_, 2);
lean_dec_ref(v___y_1861_);
v___x_1877_ = l_Lean_Elab_WF_registerEqnsInfo(v_a_1875_, v_declName_1876_, v_fst_1849_, v_fst_1853_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_);
if (lean_obj_tag(v___x_1877_) == 0)
{
lean_object* v_declName_1878_; lean_object* v_type_1879_; lean_object* v___x_1880_; 
lean_dec_ref(v___x_1877_);
v_declName_1878_ = lean_ctor_get(v_a_1873_, 3);
v_type_1879_ = lean_ctor_get(v_a_1873_, 6);
lean_inc(v_declName_1878_);
v___x_1880_ = l_Lean_Meta_markAsRecursive___redArg(v_declName_1878_, v___y_1867_);
if (lean_obj_tag(v___x_1880_) == 0)
{
lean_object* v___x_1881_; 
lean_dec_ref(v___x_1880_);
lean_inc_ref(v_type_1879_);
v___x_1881_ = l_Lean_Meta_isProp(v_type_1879_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_);
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v_a_1882_; uint8_t v___x_1883_; 
v_a_1882_ = lean_ctor_get(v___x_1881_, 0);
lean_inc(v_a_1882_);
lean_dec_ref(v___x_1881_);
v___x_1883_ = lean_unbox(v_a_1882_);
lean_dec(v_a_1882_);
if (v___x_1883_ == 0)
{
lean_object* v___x_1884_; 
lean_inc(v_declName_1876_);
v___x_1884_ = l_Lean_Elab_WF_mkUnfoldEq(v_a_1873_, v_declName_1876_, v___y_1859_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_);
if (lean_obj_tag(v___x_1884_) == 0)
{
lean_dec_ref(v___x_1884_);
v___y_1829_ = v_declName_1876_;
v___y_1830_ = v_a_1875_;
v___y_1831_ = v___y_1862_;
v___y_1832_ = v___y_1863_;
v___y_1833_ = v___y_1864_;
v___y_1834_ = v___y_1865_;
v___y_1835_ = v___y_1866_;
v___y_1836_ = v___y_1867_;
goto v___jp_1828_;
}
else
{
lean_dec(v_declName_1876_);
lean_dec(v_a_1875_);
return v___x_1884_;
}
}
else
{
lean_dec(v_a_1873_);
lean_dec_ref(v___y_1859_);
v___y_1829_ = v_declName_1876_;
v___y_1830_ = v_a_1875_;
v___y_1831_ = v___y_1862_;
v___y_1832_ = v___y_1863_;
v___y_1833_ = v___y_1864_;
v___y_1834_ = v___y_1865_;
v___y_1835_ = v___y_1866_;
v___y_1836_ = v___y_1867_;
goto v___jp_1828_;
}
}
else
{
lean_object* v_a_1885_; lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1892_; 
lean_dec(v_declName_1876_);
lean_dec(v_a_1875_);
lean_dec(v_a_1873_);
lean_dec_ref(v___y_1859_);
v_a_1885_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1892_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1887_ = v___x_1881_;
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
else
{
lean_inc(v_a_1885_);
lean_dec(v___x_1881_);
v___x_1887_ = lean_box(0);
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
v_resetjp_1886_:
{
lean_object* v___x_1890_; 
if (v_isShared_1888_ == 0)
{
v___x_1890_ = v___x_1887_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v_a_1885_);
v___x_1890_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
return v___x_1890_;
}
}
}
}
else
{
lean_dec(v_declName_1876_);
lean_dec(v_a_1875_);
lean_dec(v_a_1873_);
lean_dec_ref(v___y_1859_);
return v___x_1880_;
}
}
else
{
lean_dec(v_declName_1876_);
lean_dec(v_a_1875_);
lean_dec(v_a_1873_);
lean_dec_ref(v___y_1859_);
return v___x_1877_;
}
}
else
{
lean_object* v_a_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1900_; 
lean_dec(v_a_1873_);
lean_dec_ref(v___y_1861_);
lean_dec_ref(v___y_1859_);
lean_dec(v_fst_1853_);
lean_dec(v_fst_1849_);
v_a_1893_ = lean_ctor_get(v___x_1874_, 0);
v_isSharedCheck_1900_ = !lean_is_exclusive(v___x_1874_);
if (v_isSharedCheck_1900_ == 0)
{
v___x_1895_ = v___x_1874_;
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_a_1893_);
lean_dec(v___x_1874_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v___x_1898_; 
if (v_isShared_1896_ == 0)
{
v___x_1898_ = v___x_1895_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v_a_1893_);
v___x_1898_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
return v___x_1898_;
}
}
}
}
else
{
lean_object* v_a_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1908_; 
lean_dec_ref(v___y_1861_);
lean_dec_ref(v___y_1859_);
lean_dec(v_fst_1853_);
lean_dec(v_fst_1849_);
lean_dec(v_a_1823_);
v_a_1901_ = lean_ctor_get(v___x_1872_, 0);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___x_1872_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1903_ = v___x_1872_;
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_a_1901_);
lean_dec(v___x_1872_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v___x_1906_; 
if (v_isShared_1904_ == 0)
{
v___x_1906_ = v___x_1903_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v_a_1901_);
v___x_1906_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
return v___x_1906_;
}
}
}
}
else
{
lean_dec_ref(v___y_1861_);
lean_dec_ref(v___y_1859_);
lean_dec(v_snd_1854_);
lean_dec(v_fst_1853_);
lean_dec(v_fst_1849_);
lean_dec(v_a_1823_);
return v___x_1871_;
}
}
else
{
lean_dec_ref(v___y_1861_);
lean_dec_ref(v___y_1859_);
lean_dec(v_snd_1854_);
lean_dec(v_fst_1853_);
lean_dec(v_fst_1849_);
lean_dec(v_a_1823_);
lean_dec_ref(v_docCtx_1810_);
return v___x_1870_;
}
}
else
{
lean_object* v_a_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_1916_; 
lean_dec_ref(v___y_1861_);
lean_dec_ref(v___y_1859_);
lean_dec(v_snd_1854_);
lean_dec(v_fst_1853_);
lean_dec(v_fst_1849_);
lean_dec(v_a_1823_);
lean_dec_ref(v_docCtx_1810_);
v_a_1909_ = lean_ctor_get(v___x_1868_, 0);
v_isSharedCheck_1916_ = !lean_is_exclusive(v___x_1868_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1911_ = v___x_1868_;
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_a_1909_);
lean_dec(v___x_1868_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
lean_object* v___x_1914_; 
if (v_isShared_1912_ == 0)
{
v___x_1914_ = v___x_1911_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v_a_1909_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
return v___x_1914_;
}
}
}
}
v___jp_1918_:
{
lean_object* v_declName_1928_; lean_object* v_type_1929_; lean_object* v_numFixed_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___f_1933_; lean_object* v___x_1934_; uint8_t v___x_1935_; lean_object* v___x_1936_; 
v_declName_1928_ = lean_ctor_get(v_snd_1854_, 3);
v_type_1929_ = lean_ctor_get(v_snd_1854_, 6);
v_numFixed_1930_ = lean_ctor_get(v_fst_1849_, 0);
v___x_1931_ = lean_box_usize(v_sz_1841_);
v___x_1932_ = l_Lean_Elab_wfRecursion___boxed__const__1;
lean_inc(v_fst_1849_);
lean_inc(v_declName_1928_);
lean_inc(v_fst_1853_);
lean_inc(v_snd_1854_);
lean_inc(v_a_1823_);
v___f_1933_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__4___boxed), 20, 11);
lean_closure_set(v___f_1933_, 0, v___x_1931_);
lean_closure_set(v___f_1933_, 1, v___x_1932_);
lean_closure_set(v___f_1933_, 2, v_a_1823_);
lean_closure_set(v___f_1933_, 3, v___y_1919_);
lean_closure_set(v___f_1933_, 4, v_snd_1854_);
lean_closure_set(v___f_1933_, 5, v_fst_1853_);
lean_closure_set(v___f_1933_, 6, v___x_1827_);
lean_closure_set(v___f_1933_, 7, v___x_1917_);
lean_closure_set(v___f_1933_, 8, v_declName_1928_);
lean_closure_set(v___f_1933_, 9, v_fst_1849_);
lean_closure_set(v___f_1933_, 10, v_wf_1921_);
lean_inc(v_numFixed_1930_);
v___x_1934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1934_, 0, v_numFixed_1930_);
v___x_1935_ = 0;
lean_inc_ref(v_type_1929_);
v___x_1936_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg(v_type_1929_, v___x_1934_, v___f_1933_, v___x_1935_, v___x_1935_, v___y_1922_, v___y_1923_, v___y_1924_, v___y_1925_, v___y_1926_, v___y_1927_);
if (lean_obj_tag(v___x_1936_) == 0)
{
lean_object* v_a_1937_; lean_object* v___x_1938_; lean_object* v_a_1939_; uint8_t v___x_1940_; 
v_a_1937_ = lean_ctor_get(v___x_1936_, 0);
lean_inc(v_a_1937_);
lean_dec_ref(v___x_1936_);
v___x_1938_ = l_Lean_Elab_wfRecursion___lam__1(v___x_1917_, v___y_1922_, v___y_1923_, v___y_1924_, v___y_1925_, v___y_1926_, v___y_1927_);
v_a_1939_ = lean_ctor_get(v___x_1938_, 0);
lean_inc(v_a_1939_);
lean_dec_ref(v___x_1938_);
v___x_1940_ = lean_unbox(v_a_1939_);
lean_dec(v_a_1939_);
if (v___x_1940_ == 0)
{
lean_del_object(v___x_1856_);
lean_del_object(v___x_1851_);
v___y_1859_ = v___y_1920_;
v___y_1860_ = v___x_1935_;
v___y_1861_ = v_a_1937_;
v___y_1862_ = v___y_1922_;
v___y_1863_ = v___y_1923_;
v___y_1864_ = v___y_1924_;
v___y_1865_ = v___y_1925_;
v___y_1866_ = v___y_1926_;
v___y_1867_ = v___y_1927_;
goto v___jp_1858_;
}
else
{
lean_object* v_declName_1941_; lean_object* v_value_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1946_; 
v_declName_1941_ = lean_ctor_get(v_a_1937_, 3);
v_value_1942_ = lean_ctor_get(v_a_1937_, 7);
v___x_1943_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__4, &l_Lean_Elab_wfRecursion___closed__4_once, _init_l_Lean_Elab_wfRecursion___closed__4);
lean_inc(v_declName_1941_);
v___x_1944_ = l_Lean_MessageData_ofName(v_declName_1941_);
if (v_isShared_1857_ == 0)
{
lean_ctor_set_tag(v___x_1856_, 7);
lean_ctor_set(v___x_1856_, 1, v___x_1944_);
lean_ctor_set(v___x_1856_, 0, v___x_1943_);
v___x_1946_ = v___x_1856_;
goto v_reusejp_1945_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v___x_1943_);
lean_ctor_set(v_reuseFailAlloc_1954_, 1, v___x_1944_);
v___x_1946_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1945_;
}
v_reusejp_1945_:
{
lean_object* v___x_1947_; lean_object* v___x_1949_; 
v___x_1947_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__6, &l_Lean_Elab_wfRecursion___closed__6_once, _init_l_Lean_Elab_wfRecursion___closed__6);
if (v_isShared_1852_ == 0)
{
lean_ctor_set_tag(v___x_1851_, 7);
lean_ctor_set(v___x_1851_, 1, v___x_1947_);
lean_ctor_set(v___x_1851_, 0, v___x_1946_);
v___x_1949_ = v___x_1851_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1953_; 
v_reuseFailAlloc_1953_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1953_, 0, v___x_1946_);
lean_ctor_set(v_reuseFailAlloc_1953_, 1, v___x_1947_);
v___x_1949_ = v_reuseFailAlloc_1953_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; 
lean_inc_ref(v_value_1942_);
v___x_1950_ = l_Lean_MessageData_ofExpr(v_value_1942_);
v___x_1951_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1951_, 0, v___x_1949_);
lean_ctor_set(v___x_1951_, 1, v___x_1950_);
v___x_1952_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v___x_1917_, v___x_1951_, v___y_1924_, v___y_1925_, v___y_1926_, v___y_1927_);
if (lean_obj_tag(v___x_1952_) == 0)
{
lean_dec_ref(v___x_1952_);
v___y_1859_ = v___y_1920_;
v___y_1860_ = v___x_1935_;
v___y_1861_ = v_a_1937_;
v___y_1862_ = v___y_1922_;
v___y_1863_ = v___y_1923_;
v___y_1864_ = v___y_1924_;
v___y_1865_ = v___y_1925_;
v___y_1866_ = v___y_1926_;
v___y_1867_ = v___y_1927_;
goto v___jp_1858_;
}
else
{
lean_dec(v_a_1937_);
lean_dec_ref(v___y_1920_);
lean_dec(v_snd_1854_);
lean_dec(v_fst_1853_);
lean_dec(v_fst_1849_);
lean_dec(v_a_1823_);
lean_dec_ref(v_docCtx_1810_);
return v___x_1952_;
}
}
}
}
}
else
{
lean_object* v_a_1955_; lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1962_; 
lean_dec_ref(v___y_1920_);
lean_del_object(v___x_1856_);
lean_dec(v_snd_1854_);
lean_dec(v_fst_1853_);
lean_del_object(v___x_1851_);
lean_dec(v_fst_1849_);
lean_dec(v_a_1823_);
lean_dec_ref(v_docCtx_1810_);
v_a_1955_ = lean_ctor_get(v___x_1936_, 0);
v_isSharedCheck_1962_ = !lean_is_exclusive(v___x_1936_);
if (v_isSharedCheck_1962_ == 0)
{
v___x_1957_ = v___x_1936_;
v_isShared_1958_ = v_isSharedCheck_1962_;
goto v_resetjp_1956_;
}
else
{
lean_inc(v_a_1955_);
lean_dec(v___x_1936_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1962_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
lean_object* v___x_1960_; 
if (v_isShared_1958_ == 0)
{
v___x_1960_ = v___x_1957_;
goto v_reusejp_1959_;
}
else
{
lean_object* v_reuseFailAlloc_1961_; 
v_reuseFailAlloc_1961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1961_, 0, v_a_1955_);
v___x_1960_ = v_reuseFailAlloc_1961_;
goto v_reusejp_1959_;
}
v_reusejp_1959_:
{
return v___x_1960_;
}
}
}
}
v___jp_1968_:
{
if (lean_obj_tag(v_termMeasures_x3f_1967_) == 1)
{
lean_object* v_val_1978_; 
lean_dec_ref(v___y_1970_);
v_val_1978_ = lean_ctor_get(v_termMeasures_x3f_1967_, 0);
lean_inc(v_val_1978_);
lean_dec_ref(v_termMeasures_x3f_1967_);
v___y_1919_ = v___y_1969_;
v___y_1920_ = v___y_1971_;
v_wf_1921_ = v_val_1978_;
v___y_1922_ = v___y_1972_;
v___y_1923_ = v___y_1973_;
v___y_1924_ = v___y_1974_;
v___y_1925_ = v___y_1975_;
v___y_1926_ = v___y_1976_;
v___y_1927_ = v___y_1977_;
goto v___jp_1918_;
}
else
{
uint8_t v___x_1979_; lean_object* v___x_1980_; 
lean_dec(v_termMeasures_x3f_1967_);
v___x_1979_ = 1;
v___x_1980_ = l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___redArg(v___y_1970_, v___x_1979_, v___y_1972_, v___y_1973_, v___y_1974_, v___y_1975_, v___y_1976_, v___y_1977_);
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_object* v_a_1981_; 
v_a_1981_ = lean_ctor_get(v___x_1980_, 0);
lean_inc(v_a_1981_);
lean_dec_ref(v___x_1980_);
v___y_1919_ = v___y_1969_;
v___y_1920_ = v___y_1971_;
v_wf_1921_ = v_a_1981_;
v___y_1922_ = v___y_1972_;
v___y_1923_ = v___y_1973_;
v___y_1924_ = v___y_1974_;
v___y_1925_ = v___y_1975_;
v___y_1926_ = v___y_1976_;
v___y_1927_ = v___y_1977_;
goto v___jp_1918_;
}
else
{
lean_object* v_a_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_1989_; 
lean_dec_ref(v___y_1971_);
lean_dec_ref(v___y_1969_);
lean_del_object(v___x_1856_);
lean_dec(v_snd_1854_);
lean_dec(v_fst_1853_);
lean_del_object(v___x_1851_);
lean_dec(v_fst_1849_);
lean_dec(v_a_1823_);
lean_dec_ref(v_docCtx_1810_);
v_a_1982_ = lean_ctor_get(v___x_1980_, 0);
v_isSharedCheck_1989_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_1989_ == 0)
{
v___x_1984_ = v___x_1980_;
v_isShared_1985_ = v_isSharedCheck_1989_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_a_1982_);
lean_dec(v___x_1980_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_1989_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v___x_1987_; 
if (v_isShared_1985_ == 0)
{
v___x_1987_ = v___x_1984_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v_a_1982_);
v___x_1987_ = v_reuseFailAlloc_1988_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
return v___x_1987_;
}
}
}
}
}
v___jp_1990_:
{
lean_object* v___x_1997_; lean_object* v_env_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; 
v___x_1997_ = lean_st_ref_get(v___y_1996_);
v_env_1998_ = lean_ctor_get(v___x_1997_, 0);
lean_inc_ref(v_env_1998_);
lean_dec(v___x_1997_);
v___x_1999_ = l_Lean_Environment_unlockAsync(v_env_1998_);
v___x_2000_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__7___redArg(v___x_1999_, v___f_1965_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_, v___y_1995_, v___y_1996_);
if (lean_obj_tag(v___x_2000_) == 0)
{
lean_object* v_a_2001_; lean_object* v_fst_2002_; lean_object* v_snd_2003_; lean_object* v___x_2005_; uint8_t v_isShared_2006_; uint8_t v_isSharedCheck_2019_; 
v_a_2001_ = lean_ctor_get(v___x_2000_, 0);
lean_inc(v_a_2001_);
lean_dec_ref(v___x_2000_);
v_fst_2002_ = lean_ctor_get(v_a_2001_, 0);
v_snd_2003_ = lean_ctor_get(v_a_2001_, 1);
v_isSharedCheck_2019_ = !lean_is_exclusive(v_a_2001_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_2005_ = v_a_2001_;
v_isShared_2006_ = v_isSharedCheck_2019_;
goto v_resetjp_2004_;
}
else
{
lean_inc(v_snd_2003_);
lean_inc(v_fst_2002_);
lean_dec(v_a_2001_);
v___x_2005_ = lean_box(0);
v_isShared_2006_ = v_isSharedCheck_2019_;
goto v_resetjp_2004_;
}
v_resetjp_2004_:
{
lean_object* v___x_2007_; lean_object* v_a_2008_; lean_object* v___f_2009_; uint8_t v___x_2010_; 
v___x_2007_ = l_Lean_Elab_wfRecursion___lam__1(v___x_1917_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_, v___y_1995_, v___y_1996_);
v_a_2008_ = lean_ctor_get(v___x_2007_, 0);
lean_inc(v_a_2008_);
lean_dec_ref(v___x_2007_);
lean_inc(v_fst_1853_);
lean_inc(v_fst_1849_);
lean_inc(v_fst_2002_);
lean_inc(v_a_1823_);
v___f_2009_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__5___boxed), 11, 4);
lean_closure_set(v___f_2009_, 0, v_a_1823_);
lean_closure_set(v___f_2009_, 1, v_fst_2002_);
lean_closure_set(v___f_2009_, 2, v_fst_1849_);
lean_closure_set(v___f_2009_, 3, v_fst_1853_);
v___x_2010_ = lean_unbox(v_a_2008_);
lean_dec(v_a_2008_);
if (v___x_2010_ == 0)
{
lean_del_object(v___x_2005_);
v___y_1969_ = v_fst_2002_;
v___y_1970_ = v___f_2009_;
v___y_1971_ = v_snd_2003_;
v___y_1972_ = v___y_1991_;
v___y_1973_ = v___y_1992_;
v___y_1974_ = v___y_1993_;
v___y_1975_ = v___y_1994_;
v___y_1976_ = v___y_1995_;
v___y_1977_ = v___y_1996_;
goto v___jp_1968_;
}
else
{
lean_object* v_value_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2016_; 
v_value_2011_ = lean_ctor_get(v_snd_1854_, 7);
v___x_2012_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__8, &l_Lean_Elab_wfRecursion___closed__8_once, _init_l_Lean_Elab_wfRecursion___closed__8);
lean_inc_ref(v_value_2011_);
v___x_2013_ = l_Lean_MessageData_ofExpr(v_value_2011_);
v___x_2014_ = l_Lean_indentD(v___x_2013_);
if (v_isShared_2006_ == 0)
{
lean_ctor_set_tag(v___x_2005_, 7);
lean_ctor_set(v___x_2005_, 1, v___x_2014_);
lean_ctor_set(v___x_2005_, 0, v___x_2012_);
v___x_2016_ = v___x_2005_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v___x_2012_);
lean_ctor_set(v_reuseFailAlloc_2018_, 1, v___x_2014_);
v___x_2016_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
lean_object* v___x_2017_; 
v___x_2017_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v___x_1917_, v___x_2016_, v___y_1993_, v___y_1994_, v___y_1995_, v___y_1996_);
if (lean_obj_tag(v___x_2017_) == 0)
{
lean_dec_ref(v___x_2017_);
v___y_1969_ = v_fst_2002_;
v___y_1970_ = v___f_2009_;
v___y_1971_ = v_snd_2003_;
v___y_1972_ = v___y_1991_;
v___y_1973_ = v___y_1992_;
v___y_1974_ = v___y_1993_;
v___y_1975_ = v___y_1994_;
v___y_1976_ = v___y_1995_;
v___y_1977_ = v___y_1996_;
goto v___jp_1968_;
}
else
{
lean_dec_ref(v___f_2009_);
lean_dec(v_snd_2003_);
lean_dec(v_fst_2002_);
lean_dec(v_termMeasures_x3f_1967_);
lean_del_object(v___x_1856_);
lean_dec(v_snd_1854_);
lean_dec(v_fst_1853_);
lean_del_object(v___x_1851_);
lean_dec(v_fst_1849_);
lean_dec(v_a_1823_);
lean_dec_ref(v_docCtx_1810_);
return v___x_2017_;
}
}
}
}
}
else
{
lean_object* v_a_2020_; lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2027_; 
lean_dec(v_termMeasures_x3f_1967_);
lean_del_object(v___x_1856_);
lean_dec(v_snd_1854_);
lean_dec(v_fst_1853_);
lean_del_object(v___x_1851_);
lean_dec(v_fst_1849_);
lean_dec(v_a_1823_);
lean_dec_ref(v_docCtx_1810_);
v_a_2020_ = lean_ctor_get(v___x_2000_, 0);
v_isSharedCheck_2027_ = !lean_is_exclusive(v___x_2000_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_2022_ = v___x_2000_;
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
else
{
lean_inc(v_a_2020_);
lean_dec(v___x_2000_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v___x_2025_; 
if (v_isShared_2023_ == 0)
{
v___x_2025_ = v___x_2022_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v_a_2020_);
v___x_2025_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
return v___x_2025_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2037_; lean_object* v___x_2039_; uint8_t v_isShared_2040_; uint8_t v_isSharedCheck_2044_; 
lean_dec(v_a_1823_);
lean_dec_ref(v_termMeasure_x3fs_1812_);
lean_dec_ref(v_docCtx_1810_);
v_a_2037_ = lean_ctor_get(v___x_1846_, 0);
v_isSharedCheck_2044_ = !lean_is_exclusive(v___x_1846_);
if (v_isSharedCheck_2044_ == 0)
{
v___x_2039_ = v___x_1846_;
v_isShared_2040_ = v_isSharedCheck_2044_;
goto v_resetjp_2038_;
}
else
{
lean_inc(v_a_2037_);
lean_dec(v___x_1846_);
v___x_2039_ = lean_box(0);
v_isShared_2040_ = v_isSharedCheck_2044_;
goto v_resetjp_2038_;
}
v_resetjp_2038_:
{
lean_object* v___x_2042_; 
if (v_isShared_2040_ == 0)
{
v___x_2042_ = v___x_2039_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2043_; 
v_reuseFailAlloc_2043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2043_, 0, v_a_2037_);
v___x_2042_ = v_reuseFailAlloc_2043_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
return v___x_2042_;
}
}
}
v___jp_1828_:
{
size_t v_sz_1837_; lean_object* v___x_1838_; 
v_sz_1837_ = lean_array_size(v___y_1830_);
lean_inc(v___y_1829_);
v___x_1838_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg(v___y_1829_, v___y_1830_, v_sz_1837_, v___x_1821_, v___x_1827_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_);
if (lean_obj_tag(v___x_1838_) == 0)
{
lean_object* v___x_1839_; 
lean_dec_ref(v___x_1838_);
v___x_1839_ = l_Lean_enableRealizationsForConst(v___y_1829_, v___y_1835_, v___y_1836_);
if (lean_obj_tag(v___x_1839_) == 0)
{
lean_object* v___x_1840_; 
lean_dec_ref(v___x_1839_);
v___x_1840_ = l_Lean_Elab_Mutual_addPreDefAttributes(v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_);
return v___x_1840_;
}
else
{
lean_dec_ref(v___y_1830_);
return v___x_1839_;
}
}
else
{
lean_dec_ref(v___y_1830_);
lean_dec(v___y_1829_);
return v___x_1838_;
}
}
}
else
{
lean_object* v_a_2045_; lean_object* v___x_2047_; uint8_t v_isShared_2048_; uint8_t v_isSharedCheck_2052_; 
lean_dec_ref(v_termMeasure_x3fs_1812_);
lean_dec_ref(v_docCtx_1810_);
v_a_2045_ = lean_ctor_get(v___x_1822_, 0);
v_isSharedCheck_2052_ = !lean_is_exclusive(v___x_1822_);
if (v_isSharedCheck_2052_ == 0)
{
v___x_2047_ = v___x_1822_;
v_isShared_2048_ = v_isSharedCheck_2052_;
goto v_resetjp_2046_;
}
else
{
lean_inc(v_a_2045_);
lean_dec(v___x_1822_);
v___x_2047_ = lean_box(0);
v_isShared_2048_ = v_isSharedCheck_2052_;
goto v_resetjp_2046_;
}
v_resetjp_2046_:
{
lean_object* v___x_2050_; 
if (v_isShared_2048_ == 0)
{
v___x_2050_ = v___x_2047_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v_a_2045_);
v___x_2050_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
return v___x_2050_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___boxed(lean_object* v_docCtx_2053_, lean_object* v_preDefs_2054_, lean_object* v_termMeasure_x3fs_2055_, lean_object* v_a_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_, lean_object* v_a_2059_, lean_object* v_a_2060_, lean_object* v_a_2061_, lean_object* v_a_2062_){
_start:
{
lean_object* v_res_2063_; 
v_res_2063_ = l_Lean_Elab_wfRecursion(v_docCtx_2053_, v_preDefs_2054_, v_termMeasure_x3fs_2055_, v_a_2056_, v_a_2057_, v_a_2058_, v_a_2059_, v_a_2060_, v_a_2061_);
lean_dec(v_a_2061_);
lean_dec_ref(v_a_2060_);
lean_dec(v_a_2059_);
lean_dec_ref(v_a_2058_);
lean_dec(v_a_2057_);
lean_dec_ref(v_a_2056_);
return v_res_2063_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0(lean_object* v_00_u03b1_2064_, lean_object* v_msg_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_){
_start:
{
lean_object* v___x_2073_; 
v___x_2073_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(v_msg_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_);
return v___x_2073_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___boxed(lean_object* v_00_u03b1_2074_, lean_object* v_msg_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_){
_start:
{
lean_object* v_res_2083_; 
v_res_2083_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0(v_00_u03b1_2074_, v_msg_2075_, v___y_2076_, v___y_2077_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_);
lean_dec(v___y_2081_);
lean_dec_ref(v___y_2080_);
lean_dec(v___y_2079_);
lean_dec_ref(v___y_2078_);
lean_dec(v___y_2077_);
lean_dec_ref(v___y_2076_);
return v_res_2083_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1(size_t v_sz_2084_, size_t v_i_2085_, lean_object* v_bs_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_){
_start:
{
lean_object* v___x_2094_; 
v___x_2094_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1___redArg(v_sz_2084_, v_i_2085_, v_bs_2086_, v___y_2091_, v___y_2092_);
return v___x_2094_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1___boxed(lean_object* v_sz_2095_, lean_object* v_i_2096_, lean_object* v_bs_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_){
_start:
{
size_t v_sz_boxed_2105_; size_t v_i_boxed_2106_; lean_object* v_res_2107_; 
v_sz_boxed_2105_ = lean_unbox_usize(v_sz_2095_);
lean_dec(v_sz_2095_);
v_i_boxed_2106_ = lean_unbox_usize(v_i_2096_);
lean_dec(v_i_2096_);
v_res_2107_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1(v_sz_boxed_2105_, v_i_boxed_2106_, v_bs_2097_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_);
lean_dec(v___y_2103_);
lean_dec_ref(v___y_2102_);
lean_dec(v___y_2101_);
lean_dec_ref(v___y_2100_);
lean_dec(v___y_2099_);
lean_dec_ref(v___y_2098_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__2(lean_object* v_as_2108_, size_t v_sz_2109_, size_t v_i_2110_, lean_object* v_b_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_){
_start:
{
lean_object* v___x_2119_; 
v___x_2119_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__2___redArg(v_as_2108_, v_sz_2109_, v_i_2110_, v_b_2111_, v___y_2116_, v___y_2117_);
return v___x_2119_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__2___boxed(lean_object* v_as_2120_, lean_object* v_sz_2121_, lean_object* v_i_2122_, lean_object* v_b_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_){
_start:
{
size_t v_sz_boxed_2131_; size_t v_i_boxed_2132_; lean_object* v_res_2133_; 
v_sz_boxed_2131_ = lean_unbox_usize(v_sz_2121_);
lean_dec(v_sz_2121_);
v_i_boxed_2132_ = lean_unbox_usize(v_i_2122_);
lean_dec(v_i_2122_);
v_res_2133_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__2(v_as_2120_, v_sz_boxed_2131_, v_i_boxed_2132_, v_b_2123_, v___y_2124_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_);
lean_dec(v___y_2129_);
lean_dec_ref(v___y_2128_);
lean_dec(v___y_2127_);
lean_dec_ref(v___y_2126_);
lean_dec(v___y_2125_);
lean_dec_ref(v___y_2124_);
lean_dec_ref(v_as_2120_);
return v_res_2133_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_wfRecursion_spec__3(lean_object* v_a_2134_, lean_object* v_as_2135_, lean_object* v_i_2136_, lean_object* v_j_2137_, lean_object* v_inv_2138_, lean_object* v_bs_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_){
_start:
{
lean_object* v___x_2147_; 
v___x_2147_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_wfRecursion_spec__3___redArg(v_a_2134_, v_as_2135_, v_i_2136_, v_j_2137_, v_bs_2139_, v___y_2142_, v___y_2143_, v___y_2144_, v___y_2145_);
return v___x_2147_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_wfRecursion_spec__3___boxed(lean_object* v_a_2148_, lean_object* v_as_2149_, lean_object* v_i_2150_, lean_object* v_j_2151_, lean_object* v_inv_2152_, lean_object* v_bs_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_){
_start:
{
lean_object* v_res_2161_; 
v_res_2161_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_wfRecursion_spec__3(v_a_2148_, v_as_2149_, v_i_2150_, v_j_2151_, v_inv_2152_, v_bs_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_, v___y_2158_, v___y_2159_);
lean_dec(v___y_2159_);
lean_dec_ref(v___y_2158_);
lean_dec(v___y_2157_);
lean_dec_ref(v___y_2156_);
lean_dec(v___y_2155_);
lean_dec_ref(v___y_2154_);
lean_dec_ref(v_as_2149_);
return v_res_2161_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6(lean_object* v_a_2162_, lean_object* v___x_2163_, size_t v_sz_2164_, size_t v_i_2165_, lean_object* v_bs_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_){
_start:
{
lean_object* v___x_2174_; 
v___x_2174_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___redArg(v_a_2162_, v___x_2163_, v_sz_2164_, v_i_2165_, v_bs_2166_, v___y_2171_, v___y_2172_);
return v___x_2174_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___boxed(lean_object* v_a_2175_, lean_object* v___x_2176_, lean_object* v_sz_2177_, lean_object* v_i_2178_, lean_object* v_bs_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_){
_start:
{
size_t v_sz_boxed_2187_; size_t v_i_boxed_2188_; lean_object* v_res_2189_; 
v_sz_boxed_2187_ = lean_unbox_usize(v_sz_2177_);
lean_dec(v_sz_2177_);
v_i_boxed_2188_ = lean_unbox_usize(v_i_2178_);
lean_dec(v_i_2178_);
v_res_2189_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6(v_a_2175_, v___x_2176_, v_sz_boxed_2187_, v_i_boxed_2188_, v_bs_2179_, v___y_2180_, v___y_2181_, v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_);
lean_dec(v___y_2185_);
lean_dec_ref(v___y_2184_);
lean_dec(v___y_2183_);
lean_dec_ref(v___y_2182_);
lean_dec(v___y_2181_);
lean_dec_ref(v___y_2180_);
return v_res_2189_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__7(lean_object* v_00_u03b1_2190_, lean_object* v_env_2191_, lean_object* v_x_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_){
_start:
{
lean_object* v___x_2200_; 
v___x_2200_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__7___redArg(v_env_2191_, v_x_2192_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_, v___y_2197_, v___y_2198_);
return v___x_2200_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__7___boxed(lean_object* v_00_u03b1_2201_, lean_object* v_env_2202_, lean_object* v_x_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_){
_start:
{
lean_object* v_res_2211_; 
v_res_2211_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__7(v_00_u03b1_2201_, v_env_2202_, v_x_2203_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_, v___y_2209_);
lean_dec(v___y_2209_);
lean_dec_ref(v___y_2208_);
lean_dec(v___y_2207_);
lean_dec_ref(v___y_2206_);
lean_dec(v___y_2205_);
lean_dec_ref(v___y_2204_);
return v_res_2211_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14(lean_object* v_cls_2212_, lean_object* v_msg_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_){
_start:
{
lean_object* v___x_2221_; 
v___x_2221_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v_cls_2212_, v_msg_2213_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_);
return v___x_2221_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___boxed(lean_object* v_cls_2222_, lean_object* v_msg_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_){
_start:
{
lean_object* v_res_2231_; 
v_res_2231_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14(v_cls_2222_, v_msg_2223_, v___y_2224_, v___y_2225_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_);
lean_dec(v___y_2229_);
lean_dec_ref(v___y_2228_);
lean_dec(v___y_2227_);
lean_dec_ref(v___y_2226_);
lean_dec(v___y_2225_);
lean_dec_ref(v___y_2224_);
return v_res_2231_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16(size_t v_sz_2232_, size_t v_i_2233_, lean_object* v_bs_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_){
_start:
{
lean_object* v___x_2242_; 
v___x_2242_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg(v_sz_2232_, v_i_2233_, v_bs_2234_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_);
return v___x_2242_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___boxed(lean_object* v_sz_2243_, lean_object* v_i_2244_, lean_object* v_bs_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_){
_start:
{
size_t v_sz_boxed_2253_; size_t v_i_boxed_2254_; lean_object* v_res_2255_; 
v_sz_boxed_2253_ = lean_unbox_usize(v_sz_2243_);
lean_dec(v_sz_2243_);
v_i_boxed_2254_ = lean_unbox_usize(v_i_2244_);
lean_dec(v_i_2244_);
v_res_2255_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16(v_sz_boxed_2253_, v_i_boxed_2254_, v_bs_2245_, v___y_2246_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_);
lean_dec(v___y_2251_);
lean_dec_ref(v___y_2250_);
lean_dec(v___y_2249_);
lean_dec_ref(v___y_2248_);
lean_dec(v___y_2247_);
lean_dec_ref(v___y_2246_);
return v_res_2255_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17(lean_object* v___x_2256_, lean_object* v_as_2257_, size_t v_sz_2258_, size_t v_i_2259_, lean_object* v_b_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_){
_start:
{
lean_object* v___x_2268_; 
v___x_2268_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg(v___x_2256_, v_as_2257_, v_sz_2258_, v_i_2259_, v_b_2260_, v___y_2263_, v___y_2264_, v___y_2265_, v___y_2266_);
return v___x_2268_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___boxed(lean_object* v___x_2269_, lean_object* v_as_2270_, lean_object* v_sz_2271_, lean_object* v_i_2272_, lean_object* v_b_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_){
_start:
{
size_t v_sz_boxed_2281_; size_t v_i_boxed_2282_; lean_object* v_res_2283_; 
v_sz_boxed_2281_ = lean_unbox_usize(v_sz_2271_);
lean_dec(v_sz_2271_);
v_i_boxed_2282_ = lean_unbox_usize(v_i_2272_);
lean_dec(v_i_2272_);
v_res_2283_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17(v___x_2269_, v_as_2270_, v_sz_boxed_2281_, v_i_boxed_2282_, v_b_2273_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
lean_dec(v___y_2275_);
lean_dec_ref(v___y_2274_);
lean_dec_ref(v_as_2270_);
return v_res_2283_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21(lean_object* v_00_u03b1_2284_, lean_object* v_x_2285_, uint8_t v_isExporting_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_){
_start:
{
lean_object* v___x_2294_; 
v___x_2294_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg(v_x_2285_, v_isExporting_2286_, v___y_2287_, v___y_2288_, v___y_2289_, v___y_2290_, v___y_2291_, v___y_2292_);
return v___x_2294_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___boxed(lean_object* v_00_u03b1_2295_, lean_object* v_x_2296_, lean_object* v_isExporting_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_){
_start:
{
uint8_t v_isExporting_boxed_2305_; lean_object* v_res_2306_; 
v_isExporting_boxed_2305_ = lean_unbox(v_isExporting_2297_);
v_res_2306_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21(v_00_u03b1_2295_, v_x_2296_, v_isExporting_boxed_2305_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_);
lean_dec(v___y_2303_);
lean_dec_ref(v___y_2302_);
lean_dec(v___y_2301_);
lean_dec_ref(v___y_2300_);
lean_dec(v___y_2299_);
lean_dec_ref(v___y_2298_);
return v_res_2306_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18(lean_object* v_00_u03b1_2307_, lean_object* v_x_2308_, uint8_t v_when_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_){
_start:
{
lean_object* v___x_2317_; 
v___x_2317_ = l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___redArg(v_x_2308_, v_when_2309_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_, v___y_2315_);
return v___x_2317_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___boxed(lean_object* v_00_u03b1_2318_, lean_object* v_x_2319_, lean_object* v_when_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_){
_start:
{
uint8_t v_when_boxed_2328_; lean_object* v_res_2329_; 
v_when_boxed_2328_ = lean_unbox(v_when_2320_);
v_res_2329_ = l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18(v_00_u03b1_2318_, v_x_2319_, v_when_boxed_2328_, v___y_2321_, v___y_2322_, v___y_2323_, v___y_2324_, v___y_2325_, v___y_2326_);
lean_dec(v___y_2326_);
lean_dec_ref(v___y_2325_);
lean_dec(v___y_2324_);
lean_dec_ref(v___y_2323_);
lean_dec(v___y_2322_);
lean_dec_ref(v___y_2321_);
return v_res_2329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1(lean_object* v_msgData_2330_, lean_object* v_macroStack_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_){
_start:
{
lean_object* v___x_2339_; 
v___x_2339_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(v_msgData_2330_, v_macroStack_2331_, v___y_2336_);
return v___x_2339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___boxed(lean_object* v_msgData_2340_, lean_object* v_macroStack_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_){
_start:
{
lean_object* v_res_2349_; 
v_res_2349_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1(v_msgData_2340_, v_macroStack_2341_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_, v___y_2346_, v___y_2347_);
lean_dec(v___y_2347_);
lean_dec_ref(v___y_2346_);
lean_dec(v___y_2345_);
lean_dec_ref(v___y_2344_);
lean_dec(v___y_2343_);
lean_dec_ref(v___y_2342_);
return v_res_2349_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13(lean_object* v_ref_2350_, lean_object* v_msgData_2351_, uint8_t v_severity_2352_, uint8_t v_isSilent_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_){
_start:
{
lean_object* v___x_2361_; 
v___x_2361_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg(v_ref_2350_, v_msgData_2351_, v_severity_2352_, v_isSilent_2353_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_);
return v___x_2361_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___boxed(lean_object* v_ref_2362_, lean_object* v_msgData_2363_, lean_object* v_severity_2364_, lean_object* v_isSilent_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_){
_start:
{
uint8_t v_severity_boxed_2373_; uint8_t v_isSilent_boxed_2374_; lean_object* v_res_2375_; 
v_severity_boxed_2373_ = lean_unbox(v_severity_2364_);
v_isSilent_boxed_2374_ = lean_unbox(v_isSilent_2365_);
v_res_2375_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13(v_ref_2362_, v_msgData_2363_, v_severity_boxed_2373_, v_isSilent_boxed_2374_, v___y_2366_, v___y_2367_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_);
lean_dec(v___y_2371_);
lean_dec_ref(v___y_2370_);
lean_dec(v___y_2369_);
lean_dec_ref(v___y_2368_);
lean_dec(v___y_2367_);
lean_dec_ref(v___y_2366_);
lean_dec(v_ref_2362_);
return v_res_2375_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2376_; 
v___x_2376_ = lean_mk_string_unchecked("_private", 8, 8);
return v___x_2376_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; 
v___x_2377_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2378_ = lean_box(0);
v___x_2379_ = l_Lean_Name_str___override(v___x_2378_, v___x_2377_);
return v___x_2379_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2380_; 
v___x_2380_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_2380_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; 
v___x_2381_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2382_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2383_ = l_Lean_Name_str___override(v___x_2382_, v___x_2381_);
return v___x_2383_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; 
v___x_2384_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0);
v___x_2385_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2386_ = l_Lean_Name_str___override(v___x_2385_, v___x_2384_);
return v___x_2386_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2387_; 
v___x_2387_ = lean_mk_string_unchecked("PreDefinition", 13, 13);
return v___x_2387_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; 
v___x_2388_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2389_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2390_ = l_Lean_Name_str___override(v___x_2389_, v___x_2388_);
return v___x_2390_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2391_; 
v___x_2391_ = lean_mk_string_unchecked("WF", 2, 2);
return v___x_2391_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; 
v___x_2392_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2393_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2394_ = l_Lean_Name_str___override(v___x_2393_, v___x_2392_);
return v___x_2394_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2395_; 
v___x_2395_ = lean_mk_string_unchecked("Main", 4, 4);
return v___x_2395_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; 
v___x_2396_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2397_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2398_ = l_Lean_Name_str___override(v___x_2397_, v___x_2396_);
return v___x_2398_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; 
v___x_2399_ = lean_unsigned_to_nat(0u);
v___x_2400_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2401_ = l_Lean_Name_num___override(v___x_2400_, v___x_2399_);
return v___x_2401_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; 
v___x_2402_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2403_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2404_ = l_Lean_Name_str___override(v___x_2403_, v___x_2402_);
return v___x_2404_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; 
v___x_2405_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0);
v___x_2406_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2407_ = l_Lean_Name_str___override(v___x_2406_, v___x_2405_);
return v___x_2407_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2408_; 
v___x_2408_ = lean_mk_string_unchecked("initFn", 6, 6);
return v___x_2408_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; 
v___x_2409_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2410_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2411_ = l_Lean_Name_str___override(v___x_2410_, v___x_2409_);
return v___x_2411_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2412_; 
v___x_2412_ = lean_mk_string_unchecked("_@", 2, 2);
return v___x_2412_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; 
v___x_2413_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2414_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2415_ = l_Lean_Name_str___override(v___x_2414_, v___x_2413_);
return v___x_2415_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2416_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2417_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2418_ = l_Lean_Name_str___override(v___x_2417_, v___x_2416_);
return v___x_2418_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; 
v___x_2419_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0);
v___x_2420_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2421_ = l_Lean_Name_str___override(v___x_2420_, v___x_2419_);
return v___x_2421_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2422_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2423_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2424_ = l_Lean_Name_str___override(v___x_2423_, v___x_2422_);
return v___x_2424_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; 
v___x_2425_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2426_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2427_ = l_Lean_Name_str___override(v___x_2426_, v___x_2425_);
return v___x_2427_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; 
v___x_2428_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2429_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2430_ = l_Lean_Name_str___override(v___x_2429_, v___x_2428_);
return v___x_2430_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; 
v___x_2431_ = lean_unsigned_to_nat(1086411615u);
v___x_2432_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2433_ = l_Lean_Name_num___override(v___x_2432_, v___x_2431_);
return v___x_2433_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2434_; 
v___x_2434_ = lean_mk_string_unchecked("_hygCtx", 7, 7);
return v___x_2434_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; 
v___x_2435_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2436_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2437_ = l_Lean_Name_str___override(v___x_2436_, v___x_2435_);
return v___x_2437_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2438_; 
v___x_2438_ = lean_mk_string_unchecked("_hyg", 4, 4);
return v___x_2438_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; 
v___x_2439_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2440_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2441_ = l_Lean_Name_str___override(v___x_2440_, v___x_2439_);
return v___x_2441_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; 
v___x_2442_ = lean_unsigned_to_nat(2u);
v___x_2443_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2444_ = l_Lean_Name_num___override(v___x_2443_, v___x_2442_);
return v___x_2444_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2446_; uint8_t v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2446_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__2, &l_Lean_Elab_wfRecursion___closed__2_once, _init_l_Lean_Elab_wfRecursion___closed__2);
v___x_2447_ = 0;
v___x_2448_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_);
v___x_2449_ = l_Lean_registerTraceClass(v___x_2446_, v___x_2447_, v___x_2448_);
return v___x_2449_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2____boxed(lean_object* v_a_2450_){
_start:
{
lean_object* v_res_2451_; 
v_res_2451_ = l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_();
return v_res_2451_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_PackMutual(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_FloatRecApp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Rel(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Unfold(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Preprocess(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_GuessLex(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Main(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_PreDefinition_WF_PackMutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_FloatRecApp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Rel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Fix(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Unfold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Preprocess(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_GuessLex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_wfRecursion___boxed__const__1 = _init_l_Lean_Elab_wfRecursion___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_wfRecursion___boxed__const__1);
res = l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1086411615____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_WF_Main(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_WF_PackMutual(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_FloatRecApp(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Rel(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Unfold(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Preprocess(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_GuessLex(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_WF_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_WF_PackMutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_FloatRecApp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Rel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Fix(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Unfold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Preprocess(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_GuessLex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_WF_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_WF_Main(builtin);
}
#ifdef __cplusplus
}
#endif
