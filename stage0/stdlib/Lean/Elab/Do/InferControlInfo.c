// Lean compiler output
// Module: Lean.Elab.Do.InferControlInfo
// Imports: public import Lean.Elab.Term meta import Lean.Parser.Do import Lean.Elab.Do.PatternVar
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
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_NameSet_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_Parser_Term_getDoElems(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instHashableExtraModUse_hash___boxed(lean_object*);
lean_object* l_Lean_instBEqExtraModUse_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Elab_mkElabAttribute___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_getEntries___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqInternalExceptionId_beq(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getPatternVarsEx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_Term_getDoConfigCapture(lean_object*);
lean_object* l_Lean_Parser_Term_getDoConfigLabel_x3f(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Elab_Do_getLetPatDeclVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getLetIdDeclVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instInhabitedControlInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instInhabitedControlInfo;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_pure;
static lean_once_cell_t l_Lean_Elab_Do_ControlInfo_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlInfo_empty___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_empty;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_sequence(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_alternative(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Do_ControlInfo_returnsEarly(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_returnsEarly___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__2___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "breaks: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__0 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__1;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__2 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__2_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__3 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__3_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__4 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__4_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__5 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__5_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__6 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__6_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__7 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__7_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__8 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__2_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__3_value)}};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__9 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__9_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__4_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__5_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__6_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__7_value)}};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__10 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__10_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__8_value)}};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__11 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__11_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofName, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__12 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__12_value;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = ", continues: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__13 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__13_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__14;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = ",\n    returns: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__15 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__15_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__16;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = ", numRegularExits: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__17 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__17_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__18;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ",\n    noFallthrough: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__19 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__19_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__20;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = ", reassigns: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__21 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__21_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__22;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__23 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__23_value;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__24 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__24_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___closed__0 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__0_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___closed__1 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__1_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Do_instToMessageDataControlInfo___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___closed__2 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__2_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__0_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__0_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__1_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__2_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__0_value)} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___closed__3 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "builtin_doElem_control_info"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__0 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 75, 74, 17, 172, 74, 138, 206)}};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__1 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "doElem_control_info"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__2 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 182, 102, 169, 76, 87, 55, 254)}};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__3 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doElem"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__7 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__7_value),LEAN_SCALAR_PTR_LITERAL(208, 65, 144, 138, 55, 55, 217, 220)}};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "ControlInfoHandler"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__11 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_2),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__11_value),LEAN_SCALAR_PTR_LITERAL(18, 126, 127, 228, 104, 205, 61, 148)}};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "control info inference"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__13 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__13_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__0_00___x40_Lean_Elab_Do_InferControlInfo_39974866____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "controlInfoElemAttribute"};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__0_00___x40_Lean_Elab_Do_InferControlInfo_39974866____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__0_00___x40_Lean_Elab_Do_InferControlInfo_39974866____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_39974866____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_39974866____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_39974866____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_39974866____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_39974866____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_39974866____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_39974866____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__0_00___x40_Lean_Elab_Do_InferControlInfo_39974866____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(13, 110, 218, 82, 47, 2, 10, 58)}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_39974866____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_39974866____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_39974866____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_39974866____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_controlInfoElemAttribute;
static const lean_string_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 249, .m_capacity = 249, .m_length = 246, .m_data = "Registers a `ControlInfo` inference handler for the given `doElem` syntax node kind.\n\nA handler should have type `ControlInfoHandler` (i.e. `TSyntax \\`doElem → TermElabM ControlInfo`).\nFor pure handlers, use `fun stx => return ControlInfo.pure`.\n"};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(115) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(123) << 1) | 1)),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__1_value),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(122) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(122) << 1) | 1)),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__3_value),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__4_value),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_InferControlInfo_jumpLabel(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_InferControlInfo_jumpLabel___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__23(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__23___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__24(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__20(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__20___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__16___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__16___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__16___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__16___closed__0_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__16___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__16___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__16(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35_spec__39___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35_spec__39___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35___redArg___closed__1;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29___redArg___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqExtraModUse_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__0 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__0_value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableExtraModUse_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__1_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__2;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__3;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__4;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__5;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__6;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__7_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__7_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__8_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__10;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__12;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__13;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__14_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__14_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__15_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__16;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__17_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__18;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__19_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__20;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__21 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__21_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__22 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__22_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__23 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__23_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__24 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__24_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11_spec__32___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11_spec__32___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__10(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3___closed__0 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3___closed__0_value;
static const lean_closure_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3___closed__1_value;
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3___closed__2;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3___closed__3 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doForDecl"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__15___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__15___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__15___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__15___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__15___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__15___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__15___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__15___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__15___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__15___closed__0_value),LEAN_SCALAR_PTR_LITERAL(149, 147, 251, 147, 43, 72, 7, 132)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__15___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__15___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__15(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "matchExprAlt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(156, 165, 255, 22, 123, 199, 70, 61)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "matchExprPat"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__2_value),LEAN_SCALAR_PTR_LITERAL(34, 152, 68, 102, 242, 224, 57, 35)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__0 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(5, 186, 227, 151, 19, 40, 136, 241)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "No `ControlInfo` inference handler found for `"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__2 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "` in syntax "};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__4 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "\nRegister a handler with `@[doElem_control_info "};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__6 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "]`."};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__8 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__10 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__10_value),LEAN_SCALAR_PTR_LITERAL(61, 47, 121, 206, 37, 68, 134, 111)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doBreak"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__12 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__12_value),LEAN_SCALAR_PTR_LITERAL(100, 48, 134, 252, 224, 171, 60, 39)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doContinue"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__14 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__14_value),LEAN_SCALAR_PTR_LITERAL(99, 212, 187, 103, 216, 35, 231, 189)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doReturn"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__16 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__16_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__16_value),LEAN_SCALAR_PTR_LITERAL(210, 201, 30, 244, 146, 7, 54, 39)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__18 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__18_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__18_value),LEAN_SCALAR_PTR_LITERAL(130, 168, 60, 255, 153, 218, 88, 77)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doNested"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__20 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__20_value),LEAN_SCALAR_PTR_LITERAL(220, 154, 41, 109, 103, 76, 110, 63)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doLet"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__22 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__22_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__22_value),LEAN_SCALAR_PTR_LITERAL(60, 171, 222, 145, 87, 124, 9, 205)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doHave"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__24 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__24_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__24_value),LEAN_SCALAR_PTR_LITERAL(103, 74, 100, 51, 242, 214, 142, 115)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doLetRec"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__26 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__26_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__26_value),LEAN_SCALAR_PTR_LITERAL(82, 47, 84, 182, 64, 225, 123, 219)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doLetElse"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__28 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__28_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__28_value),LEAN_SCALAR_PTR_LITERAL(175, 153, 29, 134, 242, 228, 141, 99)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doIdDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__0 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(41, 95, 84, 160, 28, 70, 78, 179)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doPatDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__2 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__2_value),LEAN_SCALAR_PTR_LITERAL(205, 158, 71, 138, 110, 159, 158, 208)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Not a let or reassignment declaration: "};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__4 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__7 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__7_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__9 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__10 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doLetArrow"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__30 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__30_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__30_value),LEAN_SCALAR_PTR_LITERAL(155, 105, 77, 168, 26, 188, 17, 34)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doReassign"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__32 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__32_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__32_value),LEAN_SCALAR_PTR_LITERAL(31, 163, 103, 78, 29, 183, 93, 39)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "doReassignArrow"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__34 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__34_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__34_value),LEAN_SCALAR_PTR_LITERAL(24, 63, 28, 32, 90, 193, 231, 114)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doMatch"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__36 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__36_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__36_value),LEAN_SCALAR_PTR_LITERAL(29, 50, 175, 23, 122, 111, 148, 60)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "doIf"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__38 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__38_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__38_value),LEAN_SCALAR_PTR_LITERAL(133, 56, 102, 181, 14, 156, 21, 0)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doUnless"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__40 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__40_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__40_value),LEAN_SCALAR_PTR_LITERAL(231, 120, 137, 73, 40, 67, 249, 239)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doFor"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__42 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__42_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__42_value),LEAN_SCALAR_PTR_LITERAL(164, 12, 178, 2, 144, 97, 71, 235)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doRepeat"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__44 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__44_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__44_value),LEAN_SCALAR_PTR_LITERAL(27, 14, 140, 183, 155, 194, 124, 178)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doTry"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__46 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__46_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__46_value),LEAN_SCALAR_PTR_LITERAL(183, 105, 89, 167, 131, 32, 5, 203)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doSkip"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "InternalSyntax"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__48 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__48_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__48_value),LEAN_SCALAR_PTR_LITERAL(117, 4, 119, 3, 13, 160, 149, 47)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50_value_aux_3),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value),LEAN_SCALAR_PTR_LITERAL(125, 157, 182, 149, 109, 63, 124, 178)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doDbgTrace"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__51 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__51_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__51_value),LEAN_SCALAR_PTR_LITERAL(34, 125, 157, 23, 122, 81, 121, 195)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doAssert"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__53 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__53_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__53_value),LEAN_SCALAR_PTR_LITERAL(171, 15, 212, 125, 46, 208, 251, 33)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "doDebugAssert"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__55 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__55_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__55_value),LEAN_SCALAR_PTR_LITERAL(219, 254, 62, 12, 192, 208, 196, 20)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doMatchExpr"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__57 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__57_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__57_value),LEAN_SCALAR_PTR_LITERAL(72, 0, 49, 218, 206, 236, 229, 165)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doLetExpr"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__59 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__59_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__59_value),LEAN_SCALAR_PTR_LITERAL(68, 239, 85, 151, 235, 111, 29, 229)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "doLetMetaExpr"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__61 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__61_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__61_value),LEAN_SCALAR_PTR_LITERAL(231, 210, 172, 145, 91, 221, 30, 22)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "matchExprAlts"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__63 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__63_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__63_value),LEAN_SCALAR_PTR_LITERAL(88, 158, 245, 158, 91, 207, 89, 187)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "matchExprElseAlt"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__65 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__65_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__65_value),LEAN_SCALAR_PTR_LITERAL(249, 132, 98, 23, 98, 205, 167, 22)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__67 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__67_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__67_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doCatch"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 196, 191, 146, 79, 230, 20, 8)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "doCatchMatch"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 106, 10, 98, 177, 11, 181, 30)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Not a catch or catch match: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__7_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__6_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doFinally"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__69 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__69_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__69_value),LEAN_SCALAR_PTR_LITERAL(94, 201, 209, 4, 148, 58, 33, 223)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__71 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__71_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__71_value),LEAN_SCALAR_PTR_LITERAL(104, 186, 248, 230, 72, 158, 210, 227)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__73 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__73_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__17(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "generalizingParam"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value),LEAN_SCALAR_PTR_LITERAL(147, 206, 52, 232, 193, 222, 34, 109)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "dependentParam"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value),LEAN_SCALAR_PTR_LITERAL(78, 215, 202, 78, 135, 250, 138, 86)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "letIdDeclNoBinders"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value),LEAN_SCALAR_PTR_LITERAL(205, 0, 127, 82, 201, 96, 42, 5)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "letPatDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value),LEAN_SCALAR_PTR_LITERAL(9, 25, 156, 50, 29, 105, 147, 239)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "letRecDecls"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value),LEAN_SCALAR_PTR_LITERAL(103, 117, 148, 85, 88, 242, 214, 126)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "letRecDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value),LEAN_SCALAR_PTR_LITERAL(202, 48, 93, 231, 206, 172, 150, 190)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__20(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofOptionSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11_spec__32(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11_spec__32___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35_spec__39(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35_spec__39___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoElem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoElem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0(void){
_start:
{
uint8_t v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_1_ = 0;
v___x_2_ = lean_unsigned_to_nat(1u);
v___x_3_ = lean_box(1);
v___x_4_ = l_Lean_NameSet_empty;
v___x_5_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_5_, 0, v___x_4_);
lean_ctor_set(v___x_5_, 1, v___x_4_);
lean_ctor_set(v___x_5_, 2, v___x_3_);
lean_ctor_set(v___x_5_, 3, v___x_2_);
lean_ctor_set(v___x_5_, 4, v___x_4_);
lean_ctor_set_uint8(v___x_5_, sizeof(void*)*5, v___x_1_);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instInhabitedControlInfo_default(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instInhabitedControlInfo(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = l_Lean_Elab_Do_instInhabitedControlInfo_default;
return v___x_7_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlInfo_pure(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlInfo_empty___closed__0(void){
_start:
{
uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_9_ = 1;
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = lean_box(1);
v___x_12_ = l_Lean_NameSet_empty;
v___x_13_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_13_, 0, v___x_12_);
lean_ctor_set(v___x_13_, 1, v___x_12_);
lean_ctor_set(v___x_13_, 2, v___x_11_);
lean_ctor_set(v___x_13_, 3, v___x_10_);
lean_ctor_set(v___x_13_, 4, v___x_12_);
lean_ctor_set_uint8(v___x_13_, sizeof(void*)*5, v___x_9_);
return v___x_13_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlInfo_empty(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_obj_once(&l_Lean_Elab_Do_ControlInfo_empty___closed__0, &l_Lean_Elab_Do_ControlInfo_empty___closed__0_once, _init_l_Lean_Elab_Do_ControlInfo_empty___closed__0);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts_spec__0___redArg(lean_object* v_t_15_, lean_object* v_k_16_, lean_object* v_fallback_17_){
_start:
{
if (lean_obj_tag(v_t_15_) == 0)
{
lean_object* v_k_18_; lean_object* v_v_19_; lean_object* v_l_20_; lean_object* v_r_21_; uint8_t v___x_22_; 
v_k_18_ = lean_ctor_get(v_t_15_, 1);
v_v_19_ = lean_ctor_get(v_t_15_, 2);
v_l_20_ = lean_ctor_get(v_t_15_, 3);
v_r_21_ = lean_ctor_get(v_t_15_, 4);
v___x_22_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_16_, v_k_18_);
switch(v___x_22_)
{
case 0:
{
v_t_15_ = v_l_20_;
goto _start;
}
case 1:
{
lean_inc(v_v_19_);
return v_v_19_;
}
default: 
{
v_t_15_ = v_r_21_;
goto _start;
}
}
}
else
{
lean_inc(v_fallback_17_);
return v_fallback_17_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts_spec__0___redArg___boxed(lean_object* v_t_25_, lean_object* v_k_26_, lean_object* v_fallback_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts_spec__0___redArg(v_t_25_, v_k_26_, v_fallback_27_);
lean_dec(v_fallback_27_);
lean_dec(v_k_26_);
lean_dec(v_t_25_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts_spec__1_spec__1(lean_object* v_init_29_, lean_object* v_x_30_){
_start:
{
if (lean_obj_tag(v_x_30_) == 0)
{
lean_object* v_k_31_; lean_object* v_v_32_; lean_object* v_l_33_; lean_object* v_r_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v_k_31_ = lean_ctor_get(v_x_30_, 1);
lean_inc(v_k_31_);
v_v_32_ = lean_ctor_get(v_x_30_, 2);
lean_inc(v_v_32_);
v_l_33_ = lean_ctor_get(v_x_30_, 3);
lean_inc(v_l_33_);
v_r_34_ = lean_ctor_get(v_x_30_, 4);
lean_inc(v_r_34_);
lean_dec_ref_known(v_x_30_, 5);
v___x_35_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts_spec__1_spec__1(v_init_29_, v_l_33_);
v___x_36_ = lean_unsigned_to_nat(0u);
v___x_37_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts_spec__0___redArg(v___x_35_, v_k_31_, v___x_36_);
v___x_38_ = lean_nat_add(v___x_37_, v_v_32_);
lean_dec(v_v_32_);
lean_dec(v___x_37_);
v___x_39_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_31_, v___x_38_, v___x_35_);
v_init_29_ = v___x_39_;
v_x_30_ = v_r_34_;
goto _start;
}
else
{
return v_init_29_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts(lean_object* v_a_41_, lean_object* v_b_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts_spec__1_spec__1(v_a_41_, v_b_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts_spec__0(lean_object* v_00_u03b4_44_, lean_object* v_t_45_, lean_object* v_k_46_, lean_object* v_fallback_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts_spec__0___redArg(v_t_45_, v_k_46_, v_fallback_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts_spec__0___boxed(lean_object* v_00_u03b4_49_, lean_object* v_t_50_, lean_object* v_k_51_, lean_object* v_fallback_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts_spec__0(v_00_u03b4_49_, v_t_50_, v_k_51_, v_fallback_52_);
lean_dec(v_fallback_52_);
lean_dec(v_k_51_);
lean_dec(v_t_50_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts_spec__1(lean_object* v_init_54_, lean_object* v_t_55_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts_spec__1_spec__1(v_init_54_, v_t_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_sequence(lean_object* v_a_57_, lean_object* v_b_58_){
_start:
{
lean_object* v_breaks_59_; lean_object* v_continues_60_; lean_object* v_returns_61_; uint8_t v_noFallthrough_62_; lean_object* v_reassigns_63_; lean_object* v_breaks_64_; lean_object* v_continues_65_; lean_object* v_returns_66_; lean_object* v_numRegularExits_67_; uint8_t v_noFallthrough_68_; lean_object* v_reassigns_69_; lean_object* v___x_71_; uint8_t v_isShared_72_; uint8_t v_isSharedCheck_82_; 
v_breaks_59_ = lean_ctor_get(v_a_57_, 0);
lean_inc(v_breaks_59_);
v_continues_60_ = lean_ctor_get(v_a_57_, 1);
lean_inc(v_continues_60_);
v_returns_61_ = lean_ctor_get(v_a_57_, 2);
lean_inc(v_returns_61_);
v_noFallthrough_62_ = lean_ctor_get_uint8(v_a_57_, sizeof(void*)*5);
v_reassigns_63_ = lean_ctor_get(v_a_57_, 4);
lean_inc(v_reassigns_63_);
lean_dec_ref(v_a_57_);
v_breaks_64_ = lean_ctor_get(v_b_58_, 0);
v_continues_65_ = lean_ctor_get(v_b_58_, 1);
v_returns_66_ = lean_ctor_get(v_b_58_, 2);
v_numRegularExits_67_ = lean_ctor_get(v_b_58_, 3);
v_noFallthrough_68_ = lean_ctor_get_uint8(v_b_58_, sizeof(void*)*5);
v_reassigns_69_ = lean_ctor_get(v_b_58_, 4);
v_isSharedCheck_82_ = !lean_is_exclusive(v_b_58_);
if (v_isSharedCheck_82_ == 0)
{
v___x_71_ = v_b_58_;
v_isShared_72_ = v_isSharedCheck_82_;
goto v_resetjp_70_;
}
else
{
lean_inc(v_reassigns_69_);
lean_inc(v_numRegularExits_67_);
lean_inc(v_returns_66_);
lean_inc(v_continues_65_);
lean_inc(v_breaks_64_);
lean_dec(v_b_58_);
v___x_71_ = lean_box(0);
v_isShared_72_ = v_isSharedCheck_82_;
goto v_resetjp_70_;
}
v_resetjp_70_:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; uint8_t v___y_77_; 
v___x_73_ = l_Lean_NameSet_append(v_breaks_59_, v_breaks_64_);
v___x_74_ = l_Lean_NameSet_append(v_continues_60_, v_continues_65_);
v___x_75_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts_spec__1_spec__1(v_returns_61_, v_returns_66_);
if (v_noFallthrough_62_ == 0)
{
v___y_77_ = v_noFallthrough_68_;
goto v___jp_76_;
}
else
{
v___y_77_ = v_noFallthrough_62_;
goto v___jp_76_;
}
v___jp_76_:
{
lean_object* v___x_78_; lean_object* v___x_80_; 
v___x_78_ = l_Lean_NameSet_append(v_reassigns_63_, v_reassigns_69_);
if (v_isShared_72_ == 0)
{
lean_ctor_set(v___x_71_, 4, v___x_78_);
lean_ctor_set(v___x_71_, 2, v___x_75_);
lean_ctor_set(v___x_71_, 1, v___x_74_);
lean_ctor_set(v___x_71_, 0, v___x_73_);
v___x_80_ = v___x_71_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v___x_73_);
lean_ctor_set(v_reuseFailAlloc_81_, 1, v___x_74_);
lean_ctor_set(v_reuseFailAlloc_81_, 2, v___x_75_);
lean_ctor_set(v_reuseFailAlloc_81_, 3, v_numRegularExits_67_);
lean_ctor_set(v_reuseFailAlloc_81_, 4, v___x_78_);
v___x_80_ = v_reuseFailAlloc_81_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
lean_ctor_set_uint8(v___x_80_, sizeof(void*)*5, v___y_77_);
return v___x_80_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_alternative(lean_object* v_a_83_, lean_object* v_b_84_){
_start:
{
lean_object* v_breaks_85_; lean_object* v_continues_86_; lean_object* v_returns_87_; lean_object* v_numRegularExits_88_; uint8_t v_noFallthrough_89_; lean_object* v_reassigns_90_; lean_object* v_breaks_91_; lean_object* v_continues_92_; lean_object* v_returns_93_; lean_object* v_numRegularExits_94_; uint8_t v_noFallthrough_95_; lean_object* v_reassigns_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_110_; 
v_breaks_85_ = lean_ctor_get(v_a_83_, 0);
lean_inc(v_breaks_85_);
v_continues_86_ = lean_ctor_get(v_a_83_, 1);
lean_inc(v_continues_86_);
v_returns_87_ = lean_ctor_get(v_a_83_, 2);
lean_inc(v_returns_87_);
v_numRegularExits_88_ = lean_ctor_get(v_a_83_, 3);
lean_inc(v_numRegularExits_88_);
v_noFallthrough_89_ = lean_ctor_get_uint8(v_a_83_, sizeof(void*)*5);
v_reassigns_90_ = lean_ctor_get(v_a_83_, 4);
lean_inc(v_reassigns_90_);
lean_dec_ref(v_a_83_);
v_breaks_91_ = lean_ctor_get(v_b_84_, 0);
v_continues_92_ = lean_ctor_get(v_b_84_, 1);
v_returns_93_ = lean_ctor_get(v_b_84_, 2);
v_numRegularExits_94_ = lean_ctor_get(v_b_84_, 3);
v_noFallthrough_95_ = lean_ctor_get_uint8(v_b_84_, sizeof(void*)*5);
v_reassigns_96_ = lean_ctor_get(v_b_84_, 4);
v_isSharedCheck_110_ = !lean_is_exclusive(v_b_84_);
if (v_isSharedCheck_110_ == 0)
{
v___x_98_ = v_b_84_;
v_isShared_99_ = v_isSharedCheck_110_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_reassigns_96_);
lean_inc(v_numRegularExits_94_);
lean_inc(v_returns_93_);
lean_inc(v_continues_92_);
lean_inc(v_breaks_91_);
lean_dec(v_b_84_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_110_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; uint8_t v___y_105_; 
v___x_100_ = l_Lean_NameSet_append(v_breaks_85_, v_breaks_91_);
v___x_101_ = l_Lean_NameSet_append(v_continues_86_, v_continues_92_);
v___x_102_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts_spec__1_spec__1(v_returns_87_, v_returns_93_);
v___x_103_ = lean_nat_add(v_numRegularExits_88_, v_numRegularExits_94_);
lean_dec(v_numRegularExits_94_);
lean_dec(v_numRegularExits_88_);
if (v_noFallthrough_89_ == 0)
{
v___y_105_ = v_noFallthrough_89_;
goto v___jp_104_;
}
else
{
v___y_105_ = v_noFallthrough_95_;
goto v___jp_104_;
}
v___jp_104_:
{
lean_object* v___x_106_; lean_object* v___x_108_; 
v___x_106_ = l_Lean_NameSet_append(v_reassigns_90_, v_reassigns_96_);
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 4, v___x_106_);
lean_ctor_set(v___x_98_, 3, v___x_103_);
lean_ctor_set(v___x_98_, 2, v___x_102_);
lean_ctor_set(v___x_98_, 1, v___x_101_);
lean_ctor_set(v___x_98_, 0, v___x_100_);
v___x_108_ = v___x_98_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v___x_100_);
lean_ctor_set(v_reuseFailAlloc_109_, 1, v___x_101_);
lean_ctor_set(v_reuseFailAlloc_109_, 2, v___x_102_);
lean_ctor_set(v_reuseFailAlloc_109_, 3, v___x_103_);
lean_ctor_set(v_reuseFailAlloc_109_, 4, v___x_106_);
v___x_108_ = v_reuseFailAlloc_109_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
lean_ctor_set_uint8(v___x_108_, sizeof(void*)*5, v___y_105_);
return v___x_108_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Do_ControlInfo_returnsEarly(lean_object* v_info_111_){
_start:
{
lean_object* v_returns_112_; lean_object* v___x_113_; uint8_t v___x_114_; 
v_returns_112_ = lean_ctor_get(v_info_111_, 2);
v___x_113_ = lean_box(0);
v___x_114_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v___x_113_, v_returns_112_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_returnsEarly___boxed(lean_object* v_info_115_){
_start:
{
uint8_t v_res_116_; lean_object* v_r_117_; 
v_res_116_ = l_Lean_Elab_Do_ControlInfo_returnsEarly(v_info_115_);
lean_dec_ref(v_info_115_);
v_r_117_ = lean_box(v_res_116_);
return v_r_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0(lean_object* v_x1_118_, lean_object* v_x2_119_, lean_object* v_x3_120_){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_121_, 0, v_x1_118_);
lean_ctor_set(v___x_121_, 1, v_x3_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1(lean_object* v_x1_122_, lean_object* v_x2_123_, lean_object* v_x3_124_){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_125_, 0, v_x1_122_);
lean_ctor_set(v___x_125_, 1, v_x2_123_);
v___x_126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
lean_ctor_set(v___x_126_, 1, v_x3_124_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__2(lean_object* v_x_127_){
_start:
{
lean_object* v_fst_128_; 
v_fst_128_ = lean_ctor_get(v_x_127_, 0);
lean_inc(v_fst_128_);
return v_fst_128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__2___boxed(lean_object* v_x_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = l_Lean_Elab_Do_instToMessageDataControlInfo___lam__2(v_x_129_);
lean_dec_ref(v_x_129_);
return v_res_130_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__1(void){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_132_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__0));
v___x_133_ = l_Lean_stringToMessageData(v___x_132_);
return v___x_133_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__14(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__13));
v___x_156_ = l_Lean_stringToMessageData(v___x_155_);
return v___x_156_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__16(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_158_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__15));
v___x_159_ = l_Lean_stringToMessageData(v___x_158_);
return v___x_159_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__18(void){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_161_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__17));
v___x_162_ = l_Lean_stringToMessageData(v___x_161_);
return v___x_162_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__20(void){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__19));
v___x_165_ = l_Lean_stringToMessageData(v___x_164_);
return v___x_165_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__22(void){
_start:
{
lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_167_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__21));
v___x_168_ = l_Lean_stringToMessageData(v___x_167_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5(lean_object* v___f_171_, lean_object* v___f_172_, lean_object* v___f_173_, lean_object* v___f_174_, lean_object* v___f_175_, lean_object* v_info_176_){
_start:
{
lean_object* v_breaks_177_; lean_object* v_continues_178_; lean_object* v_returns_179_; lean_object* v_numRegularExits_180_; uint8_t v_noFallthrough_181_; lean_object* v_reassigns_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___y_213_; 
v_breaks_177_ = lean_ctor_get(v_info_176_, 0);
lean_inc(v_breaks_177_);
v_continues_178_ = lean_ctor_get(v_info_176_, 1);
lean_inc(v_continues_178_);
v_returns_179_ = lean_ctor_get(v_info_176_, 2);
lean_inc(v_returns_179_);
v_numRegularExits_180_ = lean_ctor_get(v_info_176_, 3);
lean_inc(v_numRegularExits_180_);
v_noFallthrough_181_ = lean_ctor_get_uint8(v_info_176_, sizeof(void*)*5);
v_reassigns_182_ = lean_ctor_get(v_info_176_, 4);
lean_inc(v_reassigns_182_);
lean_dec_ref(v_info_176_);
v___x_183_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__1, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__1_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__1);
v___x_184_ = lean_box(0);
v___x_185_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__11));
v___x_186_ = l_Std_DTreeMap_Internal_Impl_foldrM___redArg(v___x_185_, v___f_171_, v___x_184_, v_breaks_177_);
v___x_187_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__12));
v___x_188_ = l_List_mapTR_loop___redArg(v___x_187_, v___x_186_, v___x_184_);
v___x_189_ = l_Lean_MessageData_ofList(v___x_188_);
v___x_190_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_190_, 0, v___x_183_);
lean_ctor_set(v___x_190_, 1, v___x_189_);
v___x_191_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__14, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__14_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__14);
v___x_192_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_192_, 0, v___x_190_);
lean_ctor_set(v___x_192_, 1, v___x_191_);
v___x_193_ = l_Std_DTreeMap_Internal_Impl_foldrM___redArg(v___x_185_, v___f_172_, v___x_184_, v_continues_178_);
v___x_194_ = l_List_mapTR_loop___redArg(v___x_187_, v___x_193_, v___x_184_);
v___x_195_ = l_Lean_MessageData_ofList(v___x_194_);
v___x_196_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_192_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
v___x_197_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__16, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__16_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__16);
v___x_198_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_196_);
lean_ctor_set(v___x_198_, 1, v___x_197_);
v___x_199_ = l_Std_DTreeMap_Internal_Impl_foldrM___redArg(v___x_185_, v___f_173_, v___x_184_, v_returns_179_);
v___x_200_ = l_List_mapTR_loop___redArg(v___f_174_, v___x_199_, v___x_184_);
v___x_201_ = l_List_mapTR_loop___redArg(v___x_187_, v___x_200_, v___x_184_);
v___x_202_ = l_Lean_MessageData_ofList(v___x_201_);
v___x_203_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_203_, 0, v___x_198_);
lean_ctor_set(v___x_203_, 1, v___x_202_);
v___x_204_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__18, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__18_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__18);
v___x_205_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_205_, 0, v___x_203_);
lean_ctor_set(v___x_205_, 1, v___x_204_);
v___x_206_ = l_Nat_reprFast(v_numRegularExits_180_);
v___x_207_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_207_, 0, v___x_206_);
v___x_208_ = l_Lean_MessageData_ofFormat(v___x_207_);
v___x_209_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_205_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
v___x_210_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__20, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__20_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__20);
v___x_211_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_211_, 0, v___x_209_);
lean_ctor_set(v___x_211_, 1, v___x_210_);
if (v_noFallthrough_181_ == 0)
{
lean_object* v___x_223_; 
v___x_223_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__23));
v___y_213_ = v___x_223_;
goto v___jp_212_;
}
else
{
lean_object* v___x_224_; 
v___x_224_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__24));
v___y_213_ = v___x_224_;
goto v___jp_212_;
}
v___jp_212_:
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
lean_inc_ref(v___y_213_);
v___x_214_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_214_, 0, v___y_213_);
v___x_215_ = l_Lean_MessageData_ofFormat(v___x_214_);
v___x_216_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_216_, 0, v___x_211_);
lean_ctor_set(v___x_216_, 1, v___x_215_);
v___x_217_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__22, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__22_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__5___closed__22);
v___x_218_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_216_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
v___x_219_ = l_Std_DTreeMap_Internal_Impl_foldrM___redArg(v___x_185_, v___f_175_, v___x_184_, v_reassigns_182_);
v___x_220_ = l_List_mapTR_loop___redArg(v___x_187_, v___x_219_, v___x_184_);
v___x_221_ = l_Lean_MessageData_ofList(v___x_220_);
v___x_222_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_218_);
lean_ctor_set(v___x_222_, 1, v___x_221_);
return v___x_222_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe(lean_object* v_ref_257_){
_start:
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_259_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__1));
v___x_260_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__3));
v___x_261_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8));
v___x_262_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12));
v___x_263_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__13));
v___x_264_ = l_Lean_Elab_mkElabAttribute___redArg(v___x_259_, v___x_260_, v___x_261_, v___x_262_, v___x_263_, v_ref_257_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___boxed(lean_object* v_ref_265_, lean_object* v_a_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe(v_ref_265_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_39974866____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_275_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_39974866____hygCtx___hyg_2_));
v___x_276_ = l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe(v___x_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_39974866____hygCtx___hyg_2____boxed(lean_object* v_a_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_39974866____hygCtx___hyg_2_();
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1(){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_281_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_39974866____hygCtx___hyg_2_));
v___x_282_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___closed__0));
v___x_283_ = l_Lean_addBuiltinDocString(v___x_281_, v___x_282_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___boxed(lean_object* v_a_284_){
_start:
{
lean_object* v_res_285_; 
v_res_285_ = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1();
return v_res_285_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3(){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_312_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_39974866____hygCtx___hyg_2_));
v___x_313_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__6));
v___x_314_ = l_Lean_addBuiltinDeclarationRanges(v___x_312_, v___x_313_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___boxed(lean_object* v_a_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3();
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_InferControlInfo_jumpLabel(lean_object* v_cfg_317_){
_start:
{
lean_object* v___x_318_; 
v___x_318_ = l_Lean_Parser_Term_getDoConfigLabel_x3f(v_cfg_317_);
if (lean_obj_tag(v___x_318_) == 0)
{
lean_object* v___x_319_; 
v___x_319_ = lean_box(0);
return v___x_319_;
}
else
{
lean_object* v_val_320_; lean_object* v___x_321_; 
v_val_320_ = lean_ctor_get(v___x_318_, 0);
lean_inc(v_val_320_);
lean_dec_ref_known(v___x_318_, 1);
v___x_321_ = l_Lean_TSyntax_getId(v_val_320_);
lean_dec(v_val_320_);
return v___x_321_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_InferControlInfo_jumpLabel___boxed(lean_object* v_cfg_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_InferControlInfo_jumpLabel(v_cfg_322_);
lean_dec(v_cfg_322_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(lean_object* v_k_324_, lean_object* v_t_325_){
_start:
{
if (lean_obj_tag(v_t_325_) == 0)
{
lean_object* v_k_326_; lean_object* v_v_327_; lean_object* v_l_328_; lean_object* v_r_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_983_; 
v_k_326_ = lean_ctor_get(v_t_325_, 1);
v_v_327_ = lean_ctor_get(v_t_325_, 2);
v_l_328_ = lean_ctor_get(v_t_325_, 3);
v_r_329_ = lean_ctor_get(v_t_325_, 4);
v_isSharedCheck_983_ = !lean_is_exclusive(v_t_325_);
if (v_isSharedCheck_983_ == 0)
{
lean_object* v_unused_984_; 
v_unused_984_ = lean_ctor_get(v_t_325_, 0);
lean_dec(v_unused_984_);
v___x_331_ = v_t_325_;
v_isShared_332_ = v_isSharedCheck_983_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_r_329_);
lean_inc(v_l_328_);
lean_inc(v_v_327_);
lean_inc(v_k_326_);
lean_dec(v_t_325_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_983_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
uint8_t v___x_333_; 
v___x_333_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_324_, v_k_326_);
switch(v___x_333_)
{
case 0:
{
lean_object* v_impl_334_; lean_object* v___x_335_; 
v_impl_334_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(v_k_324_, v_l_328_);
v___x_335_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_334_) == 0)
{
if (lean_obj_tag(v_r_329_) == 0)
{
lean_object* v_size_336_; lean_object* v_size_337_; lean_object* v_k_338_; lean_object* v_v_339_; lean_object* v_l_340_; lean_object* v_r_341_; lean_object* v___x_342_; lean_object* v___x_343_; uint8_t v___x_344_; 
v_size_336_ = lean_ctor_get(v_impl_334_, 0);
lean_inc(v_size_336_);
v_size_337_ = lean_ctor_get(v_r_329_, 0);
v_k_338_ = lean_ctor_get(v_r_329_, 1);
v_v_339_ = lean_ctor_get(v_r_329_, 2);
v_l_340_ = lean_ctor_get(v_r_329_, 3);
lean_inc(v_l_340_);
v_r_341_ = lean_ctor_get(v_r_329_, 4);
v___x_342_ = lean_unsigned_to_nat(3u);
v___x_343_ = lean_nat_mul(v___x_342_, v_size_336_);
v___x_344_ = lean_nat_dec_lt(v___x_343_, v_size_337_);
lean_dec(v___x_343_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_348_; 
lean_dec(v_l_340_);
v___x_345_ = lean_nat_add(v___x_335_, v_size_336_);
lean_dec(v_size_336_);
v___x_346_ = lean_nat_add(v___x_345_, v_size_337_);
lean_dec(v___x_345_);
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 3, v_impl_334_);
lean_ctor_set(v___x_331_, 0, v___x_346_);
v___x_348_ = v___x_331_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v___x_346_);
lean_ctor_set(v_reuseFailAlloc_349_, 1, v_k_326_);
lean_ctor_set(v_reuseFailAlloc_349_, 2, v_v_327_);
lean_ctor_set(v_reuseFailAlloc_349_, 3, v_impl_334_);
lean_ctor_set(v_reuseFailAlloc_349_, 4, v_r_329_);
v___x_348_ = v_reuseFailAlloc_349_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
return v___x_348_;
}
}
else
{
lean_object* v___x_351_; uint8_t v_isShared_352_; uint8_t v_isSharedCheck_413_; 
lean_inc(v_r_341_);
lean_inc(v_v_339_);
lean_inc(v_k_338_);
lean_inc(v_size_337_);
v_isSharedCheck_413_ = !lean_is_exclusive(v_r_329_);
if (v_isSharedCheck_413_ == 0)
{
lean_object* v_unused_414_; lean_object* v_unused_415_; lean_object* v_unused_416_; lean_object* v_unused_417_; lean_object* v_unused_418_; 
v_unused_414_ = lean_ctor_get(v_r_329_, 4);
lean_dec(v_unused_414_);
v_unused_415_ = lean_ctor_get(v_r_329_, 3);
lean_dec(v_unused_415_);
v_unused_416_ = lean_ctor_get(v_r_329_, 2);
lean_dec(v_unused_416_);
v_unused_417_ = lean_ctor_get(v_r_329_, 1);
lean_dec(v_unused_417_);
v_unused_418_ = lean_ctor_get(v_r_329_, 0);
lean_dec(v_unused_418_);
v___x_351_ = v_r_329_;
v_isShared_352_ = v_isSharedCheck_413_;
goto v_resetjp_350_;
}
else
{
lean_dec(v_r_329_);
v___x_351_ = lean_box(0);
v_isShared_352_ = v_isSharedCheck_413_;
goto v_resetjp_350_;
}
v_resetjp_350_:
{
lean_object* v_size_353_; lean_object* v_k_354_; lean_object* v_v_355_; lean_object* v_l_356_; lean_object* v_r_357_; lean_object* v_size_358_; lean_object* v___x_359_; lean_object* v___x_360_; uint8_t v___x_361_; 
v_size_353_ = lean_ctor_get(v_l_340_, 0);
v_k_354_ = lean_ctor_get(v_l_340_, 1);
v_v_355_ = lean_ctor_get(v_l_340_, 2);
v_l_356_ = lean_ctor_get(v_l_340_, 3);
v_r_357_ = lean_ctor_get(v_l_340_, 4);
v_size_358_ = lean_ctor_get(v_r_341_, 0);
v___x_359_ = lean_unsigned_to_nat(2u);
v___x_360_ = lean_nat_mul(v___x_359_, v_size_358_);
v___x_361_ = lean_nat_dec_lt(v_size_353_, v___x_360_);
lean_dec(v___x_360_);
if (v___x_361_ == 0)
{
lean_object* v___x_363_; uint8_t v_isShared_364_; uint8_t v_isSharedCheck_389_; 
lean_inc(v_r_357_);
lean_inc(v_l_356_);
lean_inc(v_v_355_);
lean_inc(v_k_354_);
v_isSharedCheck_389_ = !lean_is_exclusive(v_l_340_);
if (v_isSharedCheck_389_ == 0)
{
lean_object* v_unused_390_; lean_object* v_unused_391_; lean_object* v_unused_392_; lean_object* v_unused_393_; lean_object* v_unused_394_; 
v_unused_390_ = lean_ctor_get(v_l_340_, 4);
lean_dec(v_unused_390_);
v_unused_391_ = lean_ctor_get(v_l_340_, 3);
lean_dec(v_unused_391_);
v_unused_392_ = lean_ctor_get(v_l_340_, 2);
lean_dec(v_unused_392_);
v_unused_393_ = lean_ctor_get(v_l_340_, 1);
lean_dec(v_unused_393_);
v_unused_394_ = lean_ctor_get(v_l_340_, 0);
lean_dec(v_unused_394_);
v___x_363_ = v_l_340_;
v_isShared_364_ = v_isSharedCheck_389_;
goto v_resetjp_362_;
}
else
{
lean_dec(v_l_340_);
v___x_363_ = lean_box(0);
v_isShared_364_ = v_isSharedCheck_389_;
goto v_resetjp_362_;
}
v_resetjp_362_:
{
lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___y_368_; lean_object* v___y_369_; lean_object* v___y_370_; lean_object* v___y_379_; 
v___x_365_ = lean_nat_add(v___x_335_, v_size_336_);
lean_dec(v_size_336_);
v___x_366_ = lean_nat_add(v___x_365_, v_size_337_);
lean_dec(v_size_337_);
if (lean_obj_tag(v_l_356_) == 0)
{
lean_object* v_size_387_; 
v_size_387_ = lean_ctor_get(v_l_356_, 0);
lean_inc(v_size_387_);
v___y_379_ = v_size_387_;
goto v___jp_378_;
}
else
{
lean_object* v___x_388_; 
v___x_388_ = lean_unsigned_to_nat(0u);
v___y_379_ = v___x_388_;
goto v___jp_378_;
}
v___jp_367_:
{
lean_object* v___x_371_; lean_object* v___x_373_; 
v___x_371_ = lean_nat_add(v___y_368_, v___y_370_);
lean_dec(v___y_370_);
lean_dec(v___y_368_);
if (v_isShared_364_ == 0)
{
lean_ctor_set(v___x_363_, 4, v_r_341_);
lean_ctor_set(v___x_363_, 3, v_r_357_);
lean_ctor_set(v___x_363_, 2, v_v_339_);
lean_ctor_set(v___x_363_, 1, v_k_338_);
lean_ctor_set(v___x_363_, 0, v___x_371_);
v___x_373_ = v___x_363_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v___x_371_);
lean_ctor_set(v_reuseFailAlloc_377_, 1, v_k_338_);
lean_ctor_set(v_reuseFailAlloc_377_, 2, v_v_339_);
lean_ctor_set(v_reuseFailAlloc_377_, 3, v_r_357_);
lean_ctor_set(v_reuseFailAlloc_377_, 4, v_r_341_);
v___x_373_ = v_reuseFailAlloc_377_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
lean_object* v___x_375_; 
if (v_isShared_352_ == 0)
{
lean_ctor_set(v___x_351_, 4, v___x_373_);
lean_ctor_set(v___x_351_, 3, v___y_369_);
lean_ctor_set(v___x_351_, 2, v_v_355_);
lean_ctor_set(v___x_351_, 1, v_k_354_);
lean_ctor_set(v___x_351_, 0, v___x_366_);
v___x_375_ = v___x_351_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v___x_366_);
lean_ctor_set(v_reuseFailAlloc_376_, 1, v_k_354_);
lean_ctor_set(v_reuseFailAlloc_376_, 2, v_v_355_);
lean_ctor_set(v_reuseFailAlloc_376_, 3, v___y_369_);
lean_ctor_set(v_reuseFailAlloc_376_, 4, v___x_373_);
v___x_375_ = v_reuseFailAlloc_376_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
return v___x_375_;
}
}
}
v___jp_378_:
{
lean_object* v___x_380_; lean_object* v___x_382_; 
v___x_380_ = lean_nat_add(v___x_365_, v___y_379_);
lean_dec(v___y_379_);
lean_dec(v___x_365_);
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 4, v_l_356_);
lean_ctor_set(v___x_331_, 3, v_impl_334_);
lean_ctor_set(v___x_331_, 0, v___x_380_);
v___x_382_ = v___x_331_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v___x_380_);
lean_ctor_set(v_reuseFailAlloc_386_, 1, v_k_326_);
lean_ctor_set(v_reuseFailAlloc_386_, 2, v_v_327_);
lean_ctor_set(v_reuseFailAlloc_386_, 3, v_impl_334_);
lean_ctor_set(v_reuseFailAlloc_386_, 4, v_l_356_);
v___x_382_ = v_reuseFailAlloc_386_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
lean_object* v___x_383_; 
v___x_383_ = lean_nat_add(v___x_335_, v_size_358_);
if (lean_obj_tag(v_r_357_) == 0)
{
lean_object* v_size_384_; 
v_size_384_ = lean_ctor_get(v_r_357_, 0);
lean_inc(v_size_384_);
v___y_368_ = v___x_383_;
v___y_369_ = v___x_382_;
v___y_370_ = v_size_384_;
goto v___jp_367_;
}
else
{
lean_object* v___x_385_; 
v___x_385_ = lean_unsigned_to_nat(0u);
v___y_368_ = v___x_383_;
v___y_369_ = v___x_382_;
v___y_370_ = v___x_385_;
goto v___jp_367_;
}
}
}
}
}
else
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_399_; 
lean_del_object(v___x_331_);
v___x_395_ = lean_nat_add(v___x_335_, v_size_336_);
lean_dec(v_size_336_);
v___x_396_ = lean_nat_add(v___x_395_, v_size_337_);
lean_dec(v_size_337_);
v___x_397_ = lean_nat_add(v___x_395_, v_size_353_);
lean_dec(v___x_395_);
lean_inc_ref(v_impl_334_);
if (v_isShared_352_ == 0)
{
lean_ctor_set(v___x_351_, 4, v_l_340_);
lean_ctor_set(v___x_351_, 3, v_impl_334_);
lean_ctor_set(v___x_351_, 2, v_v_327_);
lean_ctor_set(v___x_351_, 1, v_k_326_);
lean_ctor_set(v___x_351_, 0, v___x_397_);
v___x_399_ = v___x_351_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_397_);
lean_ctor_set(v_reuseFailAlloc_412_, 1, v_k_326_);
lean_ctor_set(v_reuseFailAlloc_412_, 2, v_v_327_);
lean_ctor_set(v_reuseFailAlloc_412_, 3, v_impl_334_);
lean_ctor_set(v_reuseFailAlloc_412_, 4, v_l_340_);
v___x_399_ = v_reuseFailAlloc_412_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_406_; 
v_isSharedCheck_406_ = !lean_is_exclusive(v_impl_334_);
if (v_isSharedCheck_406_ == 0)
{
lean_object* v_unused_407_; lean_object* v_unused_408_; lean_object* v_unused_409_; lean_object* v_unused_410_; lean_object* v_unused_411_; 
v_unused_407_ = lean_ctor_get(v_impl_334_, 4);
lean_dec(v_unused_407_);
v_unused_408_ = lean_ctor_get(v_impl_334_, 3);
lean_dec(v_unused_408_);
v_unused_409_ = lean_ctor_get(v_impl_334_, 2);
lean_dec(v_unused_409_);
v_unused_410_ = lean_ctor_get(v_impl_334_, 1);
lean_dec(v_unused_410_);
v_unused_411_ = lean_ctor_get(v_impl_334_, 0);
lean_dec(v_unused_411_);
v___x_401_ = v_impl_334_;
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
else
{
lean_dec(v_impl_334_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_404_; 
if (v_isShared_402_ == 0)
{
lean_ctor_set(v___x_401_, 4, v_r_341_);
lean_ctor_set(v___x_401_, 3, v___x_399_);
lean_ctor_set(v___x_401_, 2, v_v_339_);
lean_ctor_set(v___x_401_, 1, v_k_338_);
lean_ctor_set(v___x_401_, 0, v___x_396_);
v___x_404_ = v___x_401_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v___x_396_);
lean_ctor_set(v_reuseFailAlloc_405_, 1, v_k_338_);
lean_ctor_set(v_reuseFailAlloc_405_, 2, v_v_339_);
lean_ctor_set(v_reuseFailAlloc_405_, 3, v___x_399_);
lean_ctor_set(v_reuseFailAlloc_405_, 4, v_r_341_);
v___x_404_ = v_reuseFailAlloc_405_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
return v___x_404_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_419_; lean_object* v___x_420_; lean_object* v___x_422_; 
v_size_419_ = lean_ctor_get(v_impl_334_, 0);
lean_inc(v_size_419_);
v___x_420_ = lean_nat_add(v___x_335_, v_size_419_);
lean_dec(v_size_419_);
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 3, v_impl_334_);
lean_ctor_set(v___x_331_, 0, v___x_420_);
v___x_422_ = v___x_331_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v___x_420_);
lean_ctor_set(v_reuseFailAlloc_423_, 1, v_k_326_);
lean_ctor_set(v_reuseFailAlloc_423_, 2, v_v_327_);
lean_ctor_set(v_reuseFailAlloc_423_, 3, v_impl_334_);
lean_ctor_set(v_reuseFailAlloc_423_, 4, v_r_329_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
else
{
if (lean_obj_tag(v_r_329_) == 0)
{
lean_object* v_l_424_; 
v_l_424_ = lean_ctor_get(v_r_329_, 3);
lean_inc(v_l_424_);
if (lean_obj_tag(v_l_424_) == 0)
{
lean_object* v_r_425_; 
v_r_425_ = lean_ctor_get(v_r_329_, 4);
lean_inc(v_r_425_);
if (lean_obj_tag(v_r_425_) == 0)
{
lean_object* v_size_426_; lean_object* v_k_427_; lean_object* v_v_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_441_; 
v_size_426_ = lean_ctor_get(v_r_329_, 0);
v_k_427_ = lean_ctor_get(v_r_329_, 1);
v_v_428_ = lean_ctor_get(v_r_329_, 2);
v_isSharedCheck_441_ = !lean_is_exclusive(v_r_329_);
if (v_isSharedCheck_441_ == 0)
{
lean_object* v_unused_442_; lean_object* v_unused_443_; 
v_unused_442_ = lean_ctor_get(v_r_329_, 4);
lean_dec(v_unused_442_);
v_unused_443_ = lean_ctor_get(v_r_329_, 3);
lean_dec(v_unused_443_);
v___x_430_ = v_r_329_;
v_isShared_431_ = v_isSharedCheck_441_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_v_428_);
lean_inc(v_k_427_);
lean_inc(v_size_426_);
lean_dec(v_r_329_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_441_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v_size_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_436_; 
v_size_432_ = lean_ctor_get(v_l_424_, 0);
v___x_433_ = lean_nat_add(v___x_335_, v_size_426_);
lean_dec(v_size_426_);
v___x_434_ = lean_nat_add(v___x_335_, v_size_432_);
if (v_isShared_431_ == 0)
{
lean_ctor_set(v___x_430_, 4, v_l_424_);
lean_ctor_set(v___x_430_, 3, v_impl_334_);
lean_ctor_set(v___x_430_, 2, v_v_327_);
lean_ctor_set(v___x_430_, 1, v_k_326_);
lean_ctor_set(v___x_430_, 0, v___x_434_);
v___x_436_ = v___x_430_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v___x_434_);
lean_ctor_set(v_reuseFailAlloc_440_, 1, v_k_326_);
lean_ctor_set(v_reuseFailAlloc_440_, 2, v_v_327_);
lean_ctor_set(v_reuseFailAlloc_440_, 3, v_impl_334_);
lean_ctor_set(v_reuseFailAlloc_440_, 4, v_l_424_);
v___x_436_ = v_reuseFailAlloc_440_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
lean_object* v___x_438_; 
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 4, v_r_425_);
lean_ctor_set(v___x_331_, 3, v___x_436_);
lean_ctor_set(v___x_331_, 2, v_v_428_);
lean_ctor_set(v___x_331_, 1, v_k_427_);
lean_ctor_set(v___x_331_, 0, v___x_433_);
v___x_438_ = v___x_331_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v___x_433_);
lean_ctor_set(v_reuseFailAlloc_439_, 1, v_k_427_);
lean_ctor_set(v_reuseFailAlloc_439_, 2, v_v_428_);
lean_ctor_set(v_reuseFailAlloc_439_, 3, v___x_436_);
lean_ctor_set(v_reuseFailAlloc_439_, 4, v_r_425_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
return v___x_438_;
}
}
}
}
else
{
lean_object* v_k_444_; lean_object* v_v_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_468_; 
v_k_444_ = lean_ctor_get(v_r_329_, 1);
v_v_445_ = lean_ctor_get(v_r_329_, 2);
v_isSharedCheck_468_ = !lean_is_exclusive(v_r_329_);
if (v_isSharedCheck_468_ == 0)
{
lean_object* v_unused_469_; lean_object* v_unused_470_; lean_object* v_unused_471_; 
v_unused_469_ = lean_ctor_get(v_r_329_, 4);
lean_dec(v_unused_469_);
v_unused_470_ = lean_ctor_get(v_r_329_, 3);
lean_dec(v_unused_470_);
v_unused_471_ = lean_ctor_get(v_r_329_, 0);
lean_dec(v_unused_471_);
v___x_447_ = v_r_329_;
v_isShared_448_ = v_isSharedCheck_468_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_v_445_);
lean_inc(v_k_444_);
lean_dec(v_r_329_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_468_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v_k_449_; lean_object* v_v_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_464_; 
v_k_449_ = lean_ctor_get(v_l_424_, 1);
v_v_450_ = lean_ctor_get(v_l_424_, 2);
v_isSharedCheck_464_ = !lean_is_exclusive(v_l_424_);
if (v_isSharedCheck_464_ == 0)
{
lean_object* v_unused_465_; lean_object* v_unused_466_; lean_object* v_unused_467_; 
v_unused_465_ = lean_ctor_get(v_l_424_, 4);
lean_dec(v_unused_465_);
v_unused_466_ = lean_ctor_get(v_l_424_, 3);
lean_dec(v_unused_466_);
v_unused_467_ = lean_ctor_get(v_l_424_, 0);
lean_dec(v_unused_467_);
v___x_452_ = v_l_424_;
v_isShared_453_ = v_isSharedCheck_464_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_v_450_);
lean_inc(v_k_449_);
lean_dec(v_l_424_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_464_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_454_; lean_object* v___x_456_; 
v___x_454_ = lean_unsigned_to_nat(3u);
if (v_isShared_453_ == 0)
{
lean_ctor_set(v___x_452_, 4, v_r_425_);
lean_ctor_set(v___x_452_, 3, v_r_425_);
lean_ctor_set(v___x_452_, 2, v_v_327_);
lean_ctor_set(v___x_452_, 1, v_k_326_);
lean_ctor_set(v___x_452_, 0, v___x_335_);
v___x_456_ = v___x_452_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v___x_335_);
lean_ctor_set(v_reuseFailAlloc_463_, 1, v_k_326_);
lean_ctor_set(v_reuseFailAlloc_463_, 2, v_v_327_);
lean_ctor_set(v_reuseFailAlloc_463_, 3, v_r_425_);
lean_ctor_set(v_reuseFailAlloc_463_, 4, v_r_425_);
v___x_456_ = v_reuseFailAlloc_463_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
lean_object* v___x_458_; 
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 3, v_r_425_);
lean_ctor_set(v___x_447_, 0, v___x_335_);
v___x_458_ = v___x_447_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v___x_335_);
lean_ctor_set(v_reuseFailAlloc_462_, 1, v_k_444_);
lean_ctor_set(v_reuseFailAlloc_462_, 2, v_v_445_);
lean_ctor_set(v_reuseFailAlloc_462_, 3, v_r_425_);
lean_ctor_set(v_reuseFailAlloc_462_, 4, v_r_425_);
v___x_458_ = v_reuseFailAlloc_462_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
lean_object* v___x_460_; 
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 4, v___x_458_);
lean_ctor_set(v___x_331_, 3, v___x_456_);
lean_ctor_set(v___x_331_, 2, v_v_450_);
lean_ctor_set(v___x_331_, 1, v_k_449_);
lean_ctor_set(v___x_331_, 0, v___x_454_);
v___x_460_ = v___x_331_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v___x_454_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v_k_449_);
lean_ctor_set(v_reuseFailAlloc_461_, 2, v_v_450_);
lean_ctor_set(v_reuseFailAlloc_461_, 3, v___x_456_);
lean_ctor_set(v_reuseFailAlloc_461_, 4, v___x_458_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_472_; 
v_r_472_ = lean_ctor_get(v_r_329_, 4);
lean_inc(v_r_472_);
if (lean_obj_tag(v_r_472_) == 0)
{
lean_object* v_k_473_; lean_object* v_v_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_485_; 
v_k_473_ = lean_ctor_get(v_r_329_, 1);
v_v_474_ = lean_ctor_get(v_r_329_, 2);
v_isSharedCheck_485_ = !lean_is_exclusive(v_r_329_);
if (v_isSharedCheck_485_ == 0)
{
lean_object* v_unused_486_; lean_object* v_unused_487_; lean_object* v_unused_488_; 
v_unused_486_ = lean_ctor_get(v_r_329_, 4);
lean_dec(v_unused_486_);
v_unused_487_ = lean_ctor_get(v_r_329_, 3);
lean_dec(v_unused_487_);
v_unused_488_ = lean_ctor_get(v_r_329_, 0);
lean_dec(v_unused_488_);
v___x_476_ = v_r_329_;
v_isShared_477_ = v_isSharedCheck_485_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_v_474_);
lean_inc(v_k_473_);
lean_dec(v_r_329_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_485_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_478_; lean_object* v___x_480_; 
v___x_478_ = lean_unsigned_to_nat(3u);
if (v_isShared_477_ == 0)
{
lean_ctor_set(v___x_476_, 4, v_l_424_);
lean_ctor_set(v___x_476_, 2, v_v_327_);
lean_ctor_set(v___x_476_, 1, v_k_326_);
lean_ctor_set(v___x_476_, 0, v___x_335_);
v___x_480_ = v___x_476_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v___x_335_);
lean_ctor_set(v_reuseFailAlloc_484_, 1, v_k_326_);
lean_ctor_set(v_reuseFailAlloc_484_, 2, v_v_327_);
lean_ctor_set(v_reuseFailAlloc_484_, 3, v_l_424_);
lean_ctor_set(v_reuseFailAlloc_484_, 4, v_l_424_);
v___x_480_ = v_reuseFailAlloc_484_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
lean_object* v___x_482_; 
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 4, v_r_472_);
lean_ctor_set(v___x_331_, 3, v___x_480_);
lean_ctor_set(v___x_331_, 2, v_v_474_);
lean_ctor_set(v___x_331_, 1, v_k_473_);
lean_ctor_set(v___x_331_, 0, v___x_478_);
v___x_482_ = v___x_331_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v___x_478_);
lean_ctor_set(v_reuseFailAlloc_483_, 1, v_k_473_);
lean_ctor_set(v_reuseFailAlloc_483_, 2, v_v_474_);
lean_ctor_set(v_reuseFailAlloc_483_, 3, v___x_480_);
lean_ctor_set(v_reuseFailAlloc_483_, 4, v_r_472_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
}
else
{
lean_object* v_size_489_; lean_object* v_k_490_; lean_object* v_v_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_502_; 
v_size_489_ = lean_ctor_get(v_r_329_, 0);
v_k_490_ = lean_ctor_get(v_r_329_, 1);
v_v_491_ = lean_ctor_get(v_r_329_, 2);
v_isSharedCheck_502_ = !lean_is_exclusive(v_r_329_);
if (v_isSharedCheck_502_ == 0)
{
lean_object* v_unused_503_; lean_object* v_unused_504_; 
v_unused_503_ = lean_ctor_get(v_r_329_, 4);
lean_dec(v_unused_503_);
v_unused_504_ = lean_ctor_get(v_r_329_, 3);
lean_dec(v_unused_504_);
v___x_493_ = v_r_329_;
v_isShared_494_ = v_isSharedCheck_502_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_v_491_);
lean_inc(v_k_490_);
lean_inc(v_size_489_);
lean_dec(v_r_329_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_502_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_496_; 
if (v_isShared_494_ == 0)
{
lean_ctor_set(v___x_493_, 3, v_r_472_);
v___x_496_ = v___x_493_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_size_489_);
lean_ctor_set(v_reuseFailAlloc_501_, 1, v_k_490_);
lean_ctor_set(v_reuseFailAlloc_501_, 2, v_v_491_);
lean_ctor_set(v_reuseFailAlloc_501_, 3, v_r_472_);
lean_ctor_set(v_reuseFailAlloc_501_, 4, v_r_472_);
v___x_496_ = v_reuseFailAlloc_501_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
lean_object* v___x_497_; lean_object* v___x_499_; 
v___x_497_ = lean_unsigned_to_nat(2u);
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 4, v___x_496_);
lean_ctor_set(v___x_331_, 3, v_r_472_);
lean_ctor_set(v___x_331_, 0, v___x_497_);
v___x_499_ = v___x_331_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v___x_497_);
lean_ctor_set(v_reuseFailAlloc_500_, 1, v_k_326_);
lean_ctor_set(v_reuseFailAlloc_500_, 2, v_v_327_);
lean_ctor_set(v_reuseFailAlloc_500_, 3, v_r_472_);
lean_ctor_set(v_reuseFailAlloc_500_, 4, v___x_496_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
}
}
}
else
{
lean_object* v___x_506_; 
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 3, v_r_329_);
lean_ctor_set(v___x_331_, 0, v___x_335_);
v___x_506_ = v___x_331_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v___x_335_);
lean_ctor_set(v_reuseFailAlloc_507_, 1, v_k_326_);
lean_ctor_set(v_reuseFailAlloc_507_, 2, v_v_327_);
lean_ctor_set(v_reuseFailAlloc_507_, 3, v_r_329_);
lean_ctor_set(v_reuseFailAlloc_507_, 4, v_r_329_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
}
case 1:
{
lean_del_object(v___x_331_);
lean_dec(v_v_327_);
lean_dec(v_k_326_);
if (lean_obj_tag(v_l_328_) == 0)
{
if (lean_obj_tag(v_r_329_) == 0)
{
lean_object* v_size_508_; lean_object* v_k_509_; lean_object* v_v_510_; lean_object* v_l_511_; lean_object* v_r_512_; lean_object* v_size_513_; lean_object* v_k_514_; lean_object* v_v_515_; lean_object* v_l_516_; lean_object* v_r_517_; lean_object* v___x_518_; uint8_t v___x_519_; 
v_size_508_ = lean_ctor_get(v_l_328_, 0);
v_k_509_ = lean_ctor_get(v_l_328_, 1);
v_v_510_ = lean_ctor_get(v_l_328_, 2);
v_l_511_ = lean_ctor_get(v_l_328_, 3);
v_r_512_ = lean_ctor_get(v_l_328_, 4);
lean_inc(v_r_512_);
v_size_513_ = lean_ctor_get(v_r_329_, 0);
v_k_514_ = lean_ctor_get(v_r_329_, 1);
v_v_515_ = lean_ctor_get(v_r_329_, 2);
v_l_516_ = lean_ctor_get(v_r_329_, 3);
lean_inc(v_l_516_);
v_r_517_ = lean_ctor_get(v_r_329_, 4);
v___x_518_ = lean_unsigned_to_nat(1u);
v___x_519_ = lean_nat_dec_lt(v_size_508_, v_size_513_);
if (v___x_519_ == 0)
{
lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_655_; 
lean_inc(v_l_511_);
lean_inc(v_v_510_);
lean_inc(v_k_509_);
v_isSharedCheck_655_ = !lean_is_exclusive(v_l_328_);
if (v_isSharedCheck_655_ == 0)
{
lean_object* v_unused_656_; lean_object* v_unused_657_; lean_object* v_unused_658_; lean_object* v_unused_659_; lean_object* v_unused_660_; 
v_unused_656_ = lean_ctor_get(v_l_328_, 4);
lean_dec(v_unused_656_);
v_unused_657_ = lean_ctor_get(v_l_328_, 3);
lean_dec(v_unused_657_);
v_unused_658_ = lean_ctor_get(v_l_328_, 2);
lean_dec(v_unused_658_);
v_unused_659_ = lean_ctor_get(v_l_328_, 1);
lean_dec(v_unused_659_);
v_unused_660_ = lean_ctor_get(v_l_328_, 0);
lean_dec(v_unused_660_);
v___x_521_ = v_l_328_;
v_isShared_522_ = v_isSharedCheck_655_;
goto v_resetjp_520_;
}
else
{
lean_dec(v_l_328_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_655_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_523_; lean_object* v_tree_524_; 
v___x_523_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_509_, v_v_510_, v_l_511_, v_r_512_);
v_tree_524_ = lean_ctor_get(v___x_523_, 2);
lean_inc(v_tree_524_);
if (lean_obj_tag(v_tree_524_) == 0)
{
lean_object* v_k_525_; lean_object* v_v_526_; lean_object* v_size_527_; lean_object* v___x_528_; lean_object* v___x_529_; uint8_t v___x_530_; 
v_k_525_ = lean_ctor_get(v___x_523_, 0);
lean_inc(v_k_525_);
v_v_526_ = lean_ctor_get(v___x_523_, 1);
lean_inc(v_v_526_);
lean_dec_ref(v___x_523_);
v_size_527_ = lean_ctor_get(v_tree_524_, 0);
v___x_528_ = lean_unsigned_to_nat(3u);
v___x_529_ = lean_nat_mul(v___x_528_, v_size_527_);
v___x_530_ = lean_nat_dec_lt(v___x_529_, v_size_513_);
lean_dec(v___x_529_);
if (v___x_530_ == 0)
{
lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_534_; 
lean_dec(v_l_516_);
v___x_531_ = lean_nat_add(v___x_518_, v_size_527_);
v___x_532_ = lean_nat_add(v___x_531_, v_size_513_);
lean_dec(v___x_531_);
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 4, v_r_329_);
lean_ctor_set(v___x_521_, 3, v_tree_524_);
lean_ctor_set(v___x_521_, 2, v_v_526_);
lean_ctor_set(v___x_521_, 1, v_k_525_);
lean_ctor_set(v___x_521_, 0, v___x_532_);
v___x_534_ = v___x_521_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v___x_532_);
lean_ctor_set(v_reuseFailAlloc_535_, 1, v_k_525_);
lean_ctor_set(v_reuseFailAlloc_535_, 2, v_v_526_);
lean_ctor_set(v_reuseFailAlloc_535_, 3, v_tree_524_);
lean_ctor_set(v_reuseFailAlloc_535_, 4, v_r_329_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
else
{
lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_590_; 
lean_inc(v_r_517_);
lean_inc(v_v_515_);
lean_inc(v_k_514_);
lean_inc(v_size_513_);
v_isSharedCheck_590_ = !lean_is_exclusive(v_r_329_);
if (v_isSharedCheck_590_ == 0)
{
lean_object* v_unused_591_; lean_object* v_unused_592_; lean_object* v_unused_593_; lean_object* v_unused_594_; lean_object* v_unused_595_; 
v_unused_591_ = lean_ctor_get(v_r_329_, 4);
lean_dec(v_unused_591_);
v_unused_592_ = lean_ctor_get(v_r_329_, 3);
lean_dec(v_unused_592_);
v_unused_593_ = lean_ctor_get(v_r_329_, 2);
lean_dec(v_unused_593_);
v_unused_594_ = lean_ctor_get(v_r_329_, 1);
lean_dec(v_unused_594_);
v_unused_595_ = lean_ctor_get(v_r_329_, 0);
lean_dec(v_unused_595_);
v___x_537_ = v_r_329_;
v_isShared_538_ = v_isSharedCheck_590_;
goto v_resetjp_536_;
}
else
{
lean_dec(v_r_329_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_590_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v_size_539_; lean_object* v_k_540_; lean_object* v_v_541_; lean_object* v_l_542_; lean_object* v_r_543_; lean_object* v_size_544_; lean_object* v___x_545_; lean_object* v___x_546_; uint8_t v___x_547_; 
v_size_539_ = lean_ctor_get(v_l_516_, 0);
v_k_540_ = lean_ctor_get(v_l_516_, 1);
v_v_541_ = lean_ctor_get(v_l_516_, 2);
v_l_542_ = lean_ctor_get(v_l_516_, 3);
v_r_543_ = lean_ctor_get(v_l_516_, 4);
v_size_544_ = lean_ctor_get(v_r_517_, 0);
v___x_545_ = lean_unsigned_to_nat(2u);
v___x_546_ = lean_nat_mul(v___x_545_, v_size_544_);
v___x_547_ = lean_nat_dec_lt(v_size_539_, v___x_546_);
lean_dec(v___x_546_);
if (v___x_547_ == 0)
{
lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_575_; 
lean_inc(v_r_543_);
lean_inc(v_l_542_);
lean_inc(v_v_541_);
lean_inc(v_k_540_);
v_isSharedCheck_575_ = !lean_is_exclusive(v_l_516_);
if (v_isSharedCheck_575_ == 0)
{
lean_object* v_unused_576_; lean_object* v_unused_577_; lean_object* v_unused_578_; lean_object* v_unused_579_; lean_object* v_unused_580_; 
v_unused_576_ = lean_ctor_get(v_l_516_, 4);
lean_dec(v_unused_576_);
v_unused_577_ = lean_ctor_get(v_l_516_, 3);
lean_dec(v_unused_577_);
v_unused_578_ = lean_ctor_get(v_l_516_, 2);
lean_dec(v_unused_578_);
v_unused_579_ = lean_ctor_get(v_l_516_, 1);
lean_dec(v_unused_579_);
v_unused_580_ = lean_ctor_get(v_l_516_, 0);
lean_dec(v_unused_580_);
v___x_549_ = v_l_516_;
v_isShared_550_ = v_isSharedCheck_575_;
goto v_resetjp_548_;
}
else
{
lean_dec(v_l_516_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_575_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___y_554_; lean_object* v___y_555_; lean_object* v___y_556_; lean_object* v___y_565_; 
v___x_551_ = lean_nat_add(v___x_518_, v_size_527_);
v___x_552_ = lean_nat_add(v___x_551_, v_size_513_);
lean_dec(v_size_513_);
if (lean_obj_tag(v_l_542_) == 0)
{
lean_object* v_size_573_; 
v_size_573_ = lean_ctor_get(v_l_542_, 0);
lean_inc(v_size_573_);
v___y_565_ = v_size_573_;
goto v___jp_564_;
}
else
{
lean_object* v___x_574_; 
v___x_574_ = lean_unsigned_to_nat(0u);
v___y_565_ = v___x_574_;
goto v___jp_564_;
}
v___jp_553_:
{
lean_object* v___x_557_; lean_object* v___x_559_; 
v___x_557_ = lean_nat_add(v___y_555_, v___y_556_);
lean_dec(v___y_556_);
lean_dec(v___y_555_);
if (v_isShared_550_ == 0)
{
lean_ctor_set(v___x_549_, 4, v_r_517_);
lean_ctor_set(v___x_549_, 3, v_r_543_);
lean_ctor_set(v___x_549_, 2, v_v_515_);
lean_ctor_set(v___x_549_, 1, v_k_514_);
lean_ctor_set(v___x_549_, 0, v___x_557_);
v___x_559_ = v___x_549_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v___x_557_);
lean_ctor_set(v_reuseFailAlloc_563_, 1, v_k_514_);
lean_ctor_set(v_reuseFailAlloc_563_, 2, v_v_515_);
lean_ctor_set(v_reuseFailAlloc_563_, 3, v_r_543_);
lean_ctor_set(v_reuseFailAlloc_563_, 4, v_r_517_);
v___x_559_ = v_reuseFailAlloc_563_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
lean_object* v___x_561_; 
if (v_isShared_538_ == 0)
{
lean_ctor_set(v___x_537_, 4, v___x_559_);
lean_ctor_set(v___x_537_, 3, v___y_554_);
lean_ctor_set(v___x_537_, 2, v_v_541_);
lean_ctor_set(v___x_537_, 1, v_k_540_);
lean_ctor_set(v___x_537_, 0, v___x_552_);
v___x_561_ = v___x_537_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v___x_552_);
lean_ctor_set(v_reuseFailAlloc_562_, 1, v_k_540_);
lean_ctor_set(v_reuseFailAlloc_562_, 2, v_v_541_);
lean_ctor_set(v_reuseFailAlloc_562_, 3, v___y_554_);
lean_ctor_set(v_reuseFailAlloc_562_, 4, v___x_559_);
v___x_561_ = v_reuseFailAlloc_562_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
return v___x_561_;
}
}
}
v___jp_564_:
{
lean_object* v___x_566_; lean_object* v___x_568_; 
v___x_566_ = lean_nat_add(v___x_551_, v___y_565_);
lean_dec(v___y_565_);
lean_dec(v___x_551_);
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 4, v_l_542_);
lean_ctor_set(v___x_521_, 3, v_tree_524_);
lean_ctor_set(v___x_521_, 2, v_v_526_);
lean_ctor_set(v___x_521_, 1, v_k_525_);
lean_ctor_set(v___x_521_, 0, v___x_566_);
v___x_568_ = v___x_521_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v___x_566_);
lean_ctor_set(v_reuseFailAlloc_572_, 1, v_k_525_);
lean_ctor_set(v_reuseFailAlloc_572_, 2, v_v_526_);
lean_ctor_set(v_reuseFailAlloc_572_, 3, v_tree_524_);
lean_ctor_set(v_reuseFailAlloc_572_, 4, v_l_542_);
v___x_568_ = v_reuseFailAlloc_572_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
lean_object* v___x_569_; 
v___x_569_ = lean_nat_add(v___x_518_, v_size_544_);
if (lean_obj_tag(v_r_543_) == 0)
{
lean_object* v_size_570_; 
v_size_570_ = lean_ctor_get(v_r_543_, 0);
lean_inc(v_size_570_);
v___y_554_ = v___x_568_;
v___y_555_ = v___x_569_;
v___y_556_ = v_size_570_;
goto v___jp_553_;
}
else
{
lean_object* v___x_571_; 
v___x_571_ = lean_unsigned_to_nat(0u);
v___y_554_ = v___x_568_;
v___y_555_ = v___x_569_;
v___y_556_ = v___x_571_;
goto v___jp_553_;
}
}
}
}
}
else
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_585_; 
v___x_581_ = lean_nat_add(v___x_518_, v_size_527_);
v___x_582_ = lean_nat_add(v___x_581_, v_size_513_);
lean_dec(v_size_513_);
v___x_583_ = lean_nat_add(v___x_581_, v_size_539_);
lean_dec(v___x_581_);
if (v_isShared_538_ == 0)
{
lean_ctor_set(v___x_537_, 4, v_l_516_);
lean_ctor_set(v___x_537_, 3, v_tree_524_);
lean_ctor_set(v___x_537_, 2, v_v_526_);
lean_ctor_set(v___x_537_, 1, v_k_525_);
lean_ctor_set(v___x_537_, 0, v___x_583_);
v___x_585_ = v___x_537_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v___x_583_);
lean_ctor_set(v_reuseFailAlloc_589_, 1, v_k_525_);
lean_ctor_set(v_reuseFailAlloc_589_, 2, v_v_526_);
lean_ctor_set(v_reuseFailAlloc_589_, 3, v_tree_524_);
lean_ctor_set(v_reuseFailAlloc_589_, 4, v_l_516_);
v___x_585_ = v_reuseFailAlloc_589_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
lean_object* v___x_587_; 
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 4, v_r_517_);
lean_ctor_set(v___x_521_, 3, v___x_585_);
lean_ctor_set(v___x_521_, 2, v_v_515_);
lean_ctor_set(v___x_521_, 1, v_k_514_);
lean_ctor_set(v___x_521_, 0, v___x_582_);
v___x_587_ = v___x_521_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v___x_582_);
lean_ctor_set(v_reuseFailAlloc_588_, 1, v_k_514_);
lean_ctor_set(v_reuseFailAlloc_588_, 2, v_v_515_);
lean_ctor_set(v_reuseFailAlloc_588_, 3, v___x_585_);
lean_ctor_set(v_reuseFailAlloc_588_, 4, v_r_517_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
}
}
}
else
{
lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_649_; 
lean_inc(v_r_517_);
lean_inc(v_v_515_);
lean_inc(v_k_514_);
lean_inc(v_size_513_);
v_isSharedCheck_649_ = !lean_is_exclusive(v_r_329_);
if (v_isSharedCheck_649_ == 0)
{
lean_object* v_unused_650_; lean_object* v_unused_651_; lean_object* v_unused_652_; lean_object* v_unused_653_; lean_object* v_unused_654_; 
v_unused_650_ = lean_ctor_get(v_r_329_, 4);
lean_dec(v_unused_650_);
v_unused_651_ = lean_ctor_get(v_r_329_, 3);
lean_dec(v_unused_651_);
v_unused_652_ = lean_ctor_get(v_r_329_, 2);
lean_dec(v_unused_652_);
v_unused_653_ = lean_ctor_get(v_r_329_, 1);
lean_dec(v_unused_653_);
v_unused_654_ = lean_ctor_get(v_r_329_, 0);
lean_dec(v_unused_654_);
v___x_597_ = v_r_329_;
v_isShared_598_ = v_isSharedCheck_649_;
goto v_resetjp_596_;
}
else
{
lean_dec(v_r_329_);
v___x_597_ = lean_box(0);
v_isShared_598_ = v_isSharedCheck_649_;
goto v_resetjp_596_;
}
v_resetjp_596_:
{
if (lean_obj_tag(v_l_516_) == 0)
{
if (lean_obj_tag(v_r_517_) == 0)
{
lean_object* v_k_599_; lean_object* v_v_600_; lean_object* v_size_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_605_; 
v_k_599_ = lean_ctor_get(v___x_523_, 0);
lean_inc(v_k_599_);
v_v_600_ = lean_ctor_get(v___x_523_, 1);
lean_inc(v_v_600_);
lean_dec_ref(v___x_523_);
v_size_601_ = lean_ctor_get(v_l_516_, 0);
v___x_602_ = lean_nat_add(v___x_518_, v_size_513_);
lean_dec(v_size_513_);
v___x_603_ = lean_nat_add(v___x_518_, v_size_601_);
if (v_isShared_598_ == 0)
{
lean_ctor_set(v___x_597_, 4, v_l_516_);
lean_ctor_set(v___x_597_, 3, v_tree_524_);
lean_ctor_set(v___x_597_, 2, v_v_600_);
lean_ctor_set(v___x_597_, 1, v_k_599_);
lean_ctor_set(v___x_597_, 0, v___x_603_);
v___x_605_ = v___x_597_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v___x_603_);
lean_ctor_set(v_reuseFailAlloc_609_, 1, v_k_599_);
lean_ctor_set(v_reuseFailAlloc_609_, 2, v_v_600_);
lean_ctor_set(v_reuseFailAlloc_609_, 3, v_tree_524_);
lean_ctor_set(v_reuseFailAlloc_609_, 4, v_l_516_);
v___x_605_ = v_reuseFailAlloc_609_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
lean_object* v___x_607_; 
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 4, v_r_517_);
lean_ctor_set(v___x_521_, 3, v___x_605_);
lean_ctor_set(v___x_521_, 2, v_v_515_);
lean_ctor_set(v___x_521_, 1, v_k_514_);
lean_ctor_set(v___x_521_, 0, v___x_602_);
v___x_607_ = v___x_521_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v___x_602_);
lean_ctor_set(v_reuseFailAlloc_608_, 1, v_k_514_);
lean_ctor_set(v_reuseFailAlloc_608_, 2, v_v_515_);
lean_ctor_set(v_reuseFailAlloc_608_, 3, v___x_605_);
lean_ctor_set(v_reuseFailAlloc_608_, 4, v_r_517_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
return v___x_607_;
}
}
}
else
{
lean_object* v_k_610_; lean_object* v_v_611_; lean_object* v_k_612_; lean_object* v_v_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_627_; 
lean_dec(v_size_513_);
v_k_610_ = lean_ctor_get(v___x_523_, 0);
lean_inc(v_k_610_);
v_v_611_ = lean_ctor_get(v___x_523_, 1);
lean_inc(v_v_611_);
lean_dec_ref(v___x_523_);
v_k_612_ = lean_ctor_get(v_l_516_, 1);
v_v_613_ = lean_ctor_get(v_l_516_, 2);
v_isSharedCheck_627_ = !lean_is_exclusive(v_l_516_);
if (v_isSharedCheck_627_ == 0)
{
lean_object* v_unused_628_; lean_object* v_unused_629_; lean_object* v_unused_630_; 
v_unused_628_ = lean_ctor_get(v_l_516_, 4);
lean_dec(v_unused_628_);
v_unused_629_ = lean_ctor_get(v_l_516_, 3);
lean_dec(v_unused_629_);
v_unused_630_ = lean_ctor_get(v_l_516_, 0);
lean_dec(v_unused_630_);
v___x_615_ = v_l_516_;
v_isShared_616_ = v_isSharedCheck_627_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_v_613_);
lean_inc(v_k_612_);
lean_dec(v_l_516_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_627_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_617_; lean_object* v___x_619_; 
v___x_617_ = lean_unsigned_to_nat(3u);
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 4, v_r_517_);
lean_ctor_set(v___x_615_, 3, v_r_517_);
lean_ctor_set(v___x_615_, 2, v_v_611_);
lean_ctor_set(v___x_615_, 1, v_k_610_);
lean_ctor_set(v___x_615_, 0, v___x_518_);
v___x_619_ = v___x_615_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v___x_518_);
lean_ctor_set(v_reuseFailAlloc_626_, 1, v_k_610_);
lean_ctor_set(v_reuseFailAlloc_626_, 2, v_v_611_);
lean_ctor_set(v_reuseFailAlloc_626_, 3, v_r_517_);
lean_ctor_set(v_reuseFailAlloc_626_, 4, v_r_517_);
v___x_619_ = v_reuseFailAlloc_626_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
lean_object* v___x_621_; 
if (v_isShared_598_ == 0)
{
lean_ctor_set(v___x_597_, 3, v_r_517_);
lean_ctor_set(v___x_597_, 0, v___x_518_);
v___x_621_ = v___x_597_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v___x_518_);
lean_ctor_set(v_reuseFailAlloc_625_, 1, v_k_514_);
lean_ctor_set(v_reuseFailAlloc_625_, 2, v_v_515_);
lean_ctor_set(v_reuseFailAlloc_625_, 3, v_r_517_);
lean_ctor_set(v_reuseFailAlloc_625_, 4, v_r_517_);
v___x_621_ = v_reuseFailAlloc_625_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
lean_object* v___x_623_; 
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 4, v___x_621_);
lean_ctor_set(v___x_521_, 3, v___x_619_);
lean_ctor_set(v___x_521_, 2, v_v_613_);
lean_ctor_set(v___x_521_, 1, v_k_612_);
lean_ctor_set(v___x_521_, 0, v___x_617_);
v___x_623_ = v___x_521_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v___x_617_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v_k_612_);
lean_ctor_set(v_reuseFailAlloc_624_, 2, v_v_613_);
lean_ctor_set(v_reuseFailAlloc_624_, 3, v___x_619_);
lean_ctor_set(v_reuseFailAlloc_624_, 4, v___x_621_);
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
}
else
{
if (lean_obj_tag(v_r_517_) == 0)
{
lean_object* v_k_631_; lean_object* v_v_632_; lean_object* v___x_633_; lean_object* v___x_635_; 
lean_dec(v_size_513_);
v_k_631_ = lean_ctor_get(v___x_523_, 0);
lean_inc(v_k_631_);
v_v_632_ = lean_ctor_get(v___x_523_, 1);
lean_inc(v_v_632_);
lean_dec_ref(v___x_523_);
v___x_633_ = lean_unsigned_to_nat(3u);
if (v_isShared_598_ == 0)
{
lean_ctor_set(v___x_597_, 4, v_l_516_);
lean_ctor_set(v___x_597_, 2, v_v_632_);
lean_ctor_set(v___x_597_, 1, v_k_631_);
lean_ctor_set(v___x_597_, 0, v___x_518_);
v___x_635_ = v___x_597_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v___x_518_);
lean_ctor_set(v_reuseFailAlloc_639_, 1, v_k_631_);
lean_ctor_set(v_reuseFailAlloc_639_, 2, v_v_632_);
lean_ctor_set(v_reuseFailAlloc_639_, 3, v_l_516_);
lean_ctor_set(v_reuseFailAlloc_639_, 4, v_l_516_);
v___x_635_ = v_reuseFailAlloc_639_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
lean_object* v___x_637_; 
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 4, v_r_517_);
lean_ctor_set(v___x_521_, 3, v___x_635_);
lean_ctor_set(v___x_521_, 2, v_v_515_);
lean_ctor_set(v___x_521_, 1, v_k_514_);
lean_ctor_set(v___x_521_, 0, v___x_633_);
v___x_637_ = v___x_521_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v___x_633_);
lean_ctor_set(v_reuseFailAlloc_638_, 1, v_k_514_);
lean_ctor_set(v_reuseFailAlloc_638_, 2, v_v_515_);
lean_ctor_set(v_reuseFailAlloc_638_, 3, v___x_635_);
lean_ctor_set(v_reuseFailAlloc_638_, 4, v_r_517_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
}
else
{
lean_object* v_k_640_; lean_object* v_v_641_; lean_object* v___x_643_; 
v_k_640_ = lean_ctor_get(v___x_523_, 0);
lean_inc(v_k_640_);
v_v_641_ = lean_ctor_get(v___x_523_, 1);
lean_inc(v_v_641_);
lean_dec_ref(v___x_523_);
if (v_isShared_598_ == 0)
{
lean_ctor_set(v___x_597_, 3, v_r_517_);
v___x_643_ = v___x_597_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_size_513_);
lean_ctor_set(v_reuseFailAlloc_648_, 1, v_k_514_);
lean_ctor_set(v_reuseFailAlloc_648_, 2, v_v_515_);
lean_ctor_set(v_reuseFailAlloc_648_, 3, v_r_517_);
lean_ctor_set(v_reuseFailAlloc_648_, 4, v_r_517_);
v___x_643_ = v_reuseFailAlloc_648_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
lean_object* v___x_644_; lean_object* v___x_646_; 
v___x_644_ = lean_unsigned_to_nat(2u);
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 4, v___x_643_);
lean_ctor_set(v___x_521_, 3, v_r_517_);
lean_ctor_set(v___x_521_, 2, v_v_641_);
lean_ctor_set(v___x_521_, 1, v_k_640_);
lean_ctor_set(v___x_521_, 0, v___x_644_);
v___x_646_ = v___x_521_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v___x_644_);
lean_ctor_set(v_reuseFailAlloc_647_, 1, v_k_640_);
lean_ctor_set(v_reuseFailAlloc_647_, 2, v_v_641_);
lean_ctor_set(v_reuseFailAlloc_647_, 3, v_r_517_);
lean_ctor_set(v_reuseFailAlloc_647_, 4, v___x_643_);
v___x_646_ = v_reuseFailAlloc_647_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
return v___x_646_;
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
lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_813_; 
lean_inc(v_r_517_);
lean_inc(v_v_515_);
lean_inc(v_k_514_);
v_isSharedCheck_813_ = !lean_is_exclusive(v_r_329_);
if (v_isSharedCheck_813_ == 0)
{
lean_object* v_unused_814_; lean_object* v_unused_815_; lean_object* v_unused_816_; lean_object* v_unused_817_; lean_object* v_unused_818_; 
v_unused_814_ = lean_ctor_get(v_r_329_, 4);
lean_dec(v_unused_814_);
v_unused_815_ = lean_ctor_get(v_r_329_, 3);
lean_dec(v_unused_815_);
v_unused_816_ = lean_ctor_get(v_r_329_, 2);
lean_dec(v_unused_816_);
v_unused_817_ = lean_ctor_get(v_r_329_, 1);
lean_dec(v_unused_817_);
v_unused_818_ = lean_ctor_get(v_r_329_, 0);
lean_dec(v_unused_818_);
v___x_662_ = v_r_329_;
v_isShared_663_ = v_isSharedCheck_813_;
goto v_resetjp_661_;
}
else
{
lean_dec(v_r_329_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_813_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v___x_664_; lean_object* v_tree_665_; 
v___x_664_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_514_, v_v_515_, v_l_516_, v_r_517_);
v_tree_665_ = lean_ctor_get(v___x_664_, 2);
lean_inc(v_tree_665_);
if (lean_obj_tag(v_tree_665_) == 0)
{
lean_object* v_k_666_; lean_object* v_v_667_; lean_object* v_size_668_; lean_object* v___x_669_; lean_object* v___x_670_; uint8_t v___x_671_; 
v_k_666_ = lean_ctor_get(v___x_664_, 0);
lean_inc(v_k_666_);
v_v_667_ = lean_ctor_get(v___x_664_, 1);
lean_inc(v_v_667_);
lean_dec_ref(v___x_664_);
v_size_668_ = lean_ctor_get(v_tree_665_, 0);
v___x_669_ = lean_unsigned_to_nat(3u);
v___x_670_ = lean_nat_mul(v___x_669_, v_size_668_);
v___x_671_ = lean_nat_dec_lt(v___x_670_, v_size_508_);
lean_dec(v___x_670_);
if (v___x_671_ == 0)
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_675_; 
lean_dec(v_r_512_);
v___x_672_ = lean_nat_add(v___x_518_, v_size_508_);
v___x_673_ = lean_nat_add(v___x_672_, v_size_668_);
lean_dec(v___x_672_);
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 4, v_tree_665_);
lean_ctor_set(v___x_662_, 3, v_l_328_);
lean_ctor_set(v___x_662_, 2, v_v_667_);
lean_ctor_set(v___x_662_, 1, v_k_666_);
lean_ctor_set(v___x_662_, 0, v___x_673_);
v___x_675_ = v___x_662_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v___x_673_);
lean_ctor_set(v_reuseFailAlloc_676_, 1, v_k_666_);
lean_ctor_set(v_reuseFailAlloc_676_, 2, v_v_667_);
lean_ctor_set(v_reuseFailAlloc_676_, 3, v_l_328_);
lean_ctor_set(v_reuseFailAlloc_676_, 4, v_tree_665_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
else
{
lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_742_; 
lean_inc(v_l_511_);
lean_inc(v_v_510_);
lean_inc(v_k_509_);
lean_inc(v_size_508_);
v_isSharedCheck_742_ = !lean_is_exclusive(v_l_328_);
if (v_isSharedCheck_742_ == 0)
{
lean_object* v_unused_743_; lean_object* v_unused_744_; lean_object* v_unused_745_; lean_object* v_unused_746_; lean_object* v_unused_747_; 
v_unused_743_ = lean_ctor_get(v_l_328_, 4);
lean_dec(v_unused_743_);
v_unused_744_ = lean_ctor_get(v_l_328_, 3);
lean_dec(v_unused_744_);
v_unused_745_ = lean_ctor_get(v_l_328_, 2);
lean_dec(v_unused_745_);
v_unused_746_ = lean_ctor_get(v_l_328_, 1);
lean_dec(v_unused_746_);
v_unused_747_ = lean_ctor_get(v_l_328_, 0);
lean_dec(v_unused_747_);
v___x_678_ = v_l_328_;
v_isShared_679_ = v_isSharedCheck_742_;
goto v_resetjp_677_;
}
else
{
lean_dec(v_l_328_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_742_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v_size_680_; lean_object* v_size_681_; lean_object* v_k_682_; lean_object* v_v_683_; lean_object* v_l_684_; lean_object* v_r_685_; lean_object* v___x_686_; lean_object* v___x_687_; uint8_t v___x_688_; 
v_size_680_ = lean_ctor_get(v_l_511_, 0);
v_size_681_ = lean_ctor_get(v_r_512_, 0);
v_k_682_ = lean_ctor_get(v_r_512_, 1);
v_v_683_ = lean_ctor_get(v_r_512_, 2);
v_l_684_ = lean_ctor_get(v_r_512_, 3);
v_r_685_ = lean_ctor_get(v_r_512_, 4);
v___x_686_ = lean_unsigned_to_nat(2u);
v___x_687_ = lean_nat_mul(v___x_686_, v_size_680_);
v___x_688_ = lean_nat_dec_lt(v_size_681_, v___x_687_);
lean_dec(v___x_687_);
if (v___x_688_ == 0)
{
lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_726_; 
lean_inc(v_r_685_);
lean_inc(v_l_684_);
lean_inc(v_v_683_);
lean_inc(v_k_682_);
lean_del_object(v___x_678_);
v_isSharedCheck_726_ = !lean_is_exclusive(v_r_512_);
if (v_isSharedCheck_726_ == 0)
{
lean_object* v_unused_727_; lean_object* v_unused_728_; lean_object* v_unused_729_; lean_object* v_unused_730_; lean_object* v_unused_731_; 
v_unused_727_ = lean_ctor_get(v_r_512_, 4);
lean_dec(v_unused_727_);
v_unused_728_ = lean_ctor_get(v_r_512_, 3);
lean_dec(v_unused_728_);
v_unused_729_ = lean_ctor_get(v_r_512_, 2);
lean_dec(v_unused_729_);
v_unused_730_ = lean_ctor_get(v_r_512_, 1);
lean_dec(v_unused_730_);
v_unused_731_ = lean_ctor_get(v_r_512_, 0);
lean_dec(v_unused_731_);
v___x_690_ = v_r_512_;
v_isShared_691_ = v_isSharedCheck_726_;
goto v_resetjp_689_;
}
else
{
lean_dec(v_r_512_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_726_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v___y_697_; lean_object* v___x_714_; lean_object* v___y_716_; 
v___x_692_ = lean_nat_add(v___x_518_, v_size_508_);
lean_dec(v_size_508_);
v___x_693_ = lean_nat_add(v___x_692_, v_size_668_);
lean_dec(v___x_692_);
v___x_714_ = lean_nat_add(v___x_518_, v_size_680_);
if (lean_obj_tag(v_l_684_) == 0)
{
lean_object* v_size_724_; 
v_size_724_ = lean_ctor_get(v_l_684_, 0);
lean_inc(v_size_724_);
v___y_716_ = v_size_724_;
goto v___jp_715_;
}
else
{
lean_object* v___x_725_; 
v___x_725_ = lean_unsigned_to_nat(0u);
v___y_716_ = v___x_725_;
goto v___jp_715_;
}
v___jp_694_:
{
lean_object* v___x_698_; lean_object* v___x_700_; 
v___x_698_ = lean_nat_add(v___y_696_, v___y_697_);
lean_dec(v___y_697_);
lean_dec(v___y_696_);
lean_inc_ref(v_tree_665_);
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 4, v_tree_665_);
lean_ctor_set(v___x_690_, 3, v_r_685_);
lean_ctor_set(v___x_690_, 2, v_v_667_);
lean_ctor_set(v___x_690_, 1, v_k_666_);
lean_ctor_set(v___x_690_, 0, v___x_698_);
v___x_700_ = v___x_690_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v___x_698_);
lean_ctor_set(v_reuseFailAlloc_713_, 1, v_k_666_);
lean_ctor_set(v_reuseFailAlloc_713_, 2, v_v_667_);
lean_ctor_set(v_reuseFailAlloc_713_, 3, v_r_685_);
lean_ctor_set(v_reuseFailAlloc_713_, 4, v_tree_665_);
v___x_700_ = v_reuseFailAlloc_713_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_707_; 
v_isSharedCheck_707_ = !lean_is_exclusive(v_tree_665_);
if (v_isSharedCheck_707_ == 0)
{
lean_object* v_unused_708_; lean_object* v_unused_709_; lean_object* v_unused_710_; lean_object* v_unused_711_; lean_object* v_unused_712_; 
v_unused_708_ = lean_ctor_get(v_tree_665_, 4);
lean_dec(v_unused_708_);
v_unused_709_ = lean_ctor_get(v_tree_665_, 3);
lean_dec(v_unused_709_);
v_unused_710_ = lean_ctor_get(v_tree_665_, 2);
lean_dec(v_unused_710_);
v_unused_711_ = lean_ctor_get(v_tree_665_, 1);
lean_dec(v_unused_711_);
v_unused_712_ = lean_ctor_get(v_tree_665_, 0);
lean_dec(v_unused_712_);
v___x_702_ = v_tree_665_;
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
else
{
lean_dec(v_tree_665_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v___x_705_; 
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 4, v___x_700_);
lean_ctor_set(v___x_702_, 3, v___y_695_);
lean_ctor_set(v___x_702_, 2, v_v_683_);
lean_ctor_set(v___x_702_, 1, v_k_682_);
lean_ctor_set(v___x_702_, 0, v___x_693_);
v___x_705_ = v___x_702_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v___x_693_);
lean_ctor_set(v_reuseFailAlloc_706_, 1, v_k_682_);
lean_ctor_set(v_reuseFailAlloc_706_, 2, v_v_683_);
lean_ctor_set(v_reuseFailAlloc_706_, 3, v___y_695_);
lean_ctor_set(v_reuseFailAlloc_706_, 4, v___x_700_);
v___x_705_ = v_reuseFailAlloc_706_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
return v___x_705_;
}
}
}
}
v___jp_715_:
{
lean_object* v___x_717_; lean_object* v___x_719_; 
v___x_717_ = lean_nat_add(v___x_714_, v___y_716_);
lean_dec(v___y_716_);
lean_dec(v___x_714_);
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 4, v_l_684_);
lean_ctor_set(v___x_662_, 3, v_l_511_);
lean_ctor_set(v___x_662_, 2, v_v_510_);
lean_ctor_set(v___x_662_, 1, v_k_509_);
lean_ctor_set(v___x_662_, 0, v___x_717_);
v___x_719_ = v___x_662_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v___x_717_);
lean_ctor_set(v_reuseFailAlloc_723_, 1, v_k_509_);
lean_ctor_set(v_reuseFailAlloc_723_, 2, v_v_510_);
lean_ctor_set(v_reuseFailAlloc_723_, 3, v_l_511_);
lean_ctor_set(v_reuseFailAlloc_723_, 4, v_l_684_);
v___x_719_ = v_reuseFailAlloc_723_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
lean_object* v___x_720_; 
v___x_720_ = lean_nat_add(v___x_518_, v_size_668_);
if (lean_obj_tag(v_r_685_) == 0)
{
lean_object* v_size_721_; 
v_size_721_ = lean_ctor_get(v_r_685_, 0);
lean_inc(v_size_721_);
v___y_695_ = v___x_719_;
v___y_696_ = v___x_720_;
v___y_697_ = v_size_721_;
goto v___jp_694_;
}
else
{
lean_object* v___x_722_; 
v___x_722_ = lean_unsigned_to_nat(0u);
v___y_695_ = v___x_719_;
v___y_696_ = v___x_720_;
v___y_697_ = v___x_722_;
goto v___jp_694_;
}
}
}
}
}
else
{
lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_737_; 
v___x_732_ = lean_nat_add(v___x_518_, v_size_508_);
lean_dec(v_size_508_);
v___x_733_ = lean_nat_add(v___x_732_, v_size_668_);
lean_dec(v___x_732_);
v___x_734_ = lean_nat_add(v___x_518_, v_size_668_);
v___x_735_ = lean_nat_add(v___x_734_, v_size_681_);
lean_dec(v___x_734_);
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 4, v_tree_665_);
lean_ctor_set(v___x_662_, 3, v_r_512_);
lean_ctor_set(v___x_662_, 2, v_v_667_);
lean_ctor_set(v___x_662_, 1, v_k_666_);
lean_ctor_set(v___x_662_, 0, v___x_735_);
v___x_737_ = v___x_662_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v___x_735_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v_k_666_);
lean_ctor_set(v_reuseFailAlloc_741_, 2, v_v_667_);
lean_ctor_set(v_reuseFailAlloc_741_, 3, v_r_512_);
lean_ctor_set(v_reuseFailAlloc_741_, 4, v_tree_665_);
v___x_737_ = v_reuseFailAlloc_741_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
lean_object* v___x_739_; 
if (v_isShared_679_ == 0)
{
lean_ctor_set(v___x_678_, 4, v___x_737_);
lean_ctor_set(v___x_678_, 0, v___x_733_);
v___x_739_ = v___x_678_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v___x_733_);
lean_ctor_set(v_reuseFailAlloc_740_, 1, v_k_509_);
lean_ctor_set(v_reuseFailAlloc_740_, 2, v_v_510_);
lean_ctor_set(v_reuseFailAlloc_740_, 3, v_l_511_);
lean_ctor_set(v_reuseFailAlloc_740_, 4, v___x_737_);
v___x_739_ = v_reuseFailAlloc_740_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
return v___x_739_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_511_) == 0)
{
lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_771_; 
lean_inc_ref(v_l_511_);
lean_inc(v_v_510_);
lean_inc(v_k_509_);
lean_inc(v_size_508_);
v_isSharedCheck_771_ = !lean_is_exclusive(v_l_328_);
if (v_isSharedCheck_771_ == 0)
{
lean_object* v_unused_772_; lean_object* v_unused_773_; lean_object* v_unused_774_; lean_object* v_unused_775_; lean_object* v_unused_776_; 
v_unused_772_ = lean_ctor_get(v_l_328_, 4);
lean_dec(v_unused_772_);
v_unused_773_ = lean_ctor_get(v_l_328_, 3);
lean_dec(v_unused_773_);
v_unused_774_ = lean_ctor_get(v_l_328_, 2);
lean_dec(v_unused_774_);
v_unused_775_ = lean_ctor_get(v_l_328_, 1);
lean_dec(v_unused_775_);
v_unused_776_ = lean_ctor_get(v_l_328_, 0);
lean_dec(v_unused_776_);
v___x_749_ = v_l_328_;
v_isShared_750_ = v_isSharedCheck_771_;
goto v_resetjp_748_;
}
else
{
lean_dec(v_l_328_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_771_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
if (lean_obj_tag(v_r_512_) == 0)
{
lean_object* v_k_751_; lean_object* v_v_752_; lean_object* v_size_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_757_; 
v_k_751_ = lean_ctor_get(v___x_664_, 0);
lean_inc(v_k_751_);
v_v_752_ = lean_ctor_get(v___x_664_, 1);
lean_inc(v_v_752_);
lean_dec_ref(v___x_664_);
v_size_753_ = lean_ctor_get(v_r_512_, 0);
v___x_754_ = lean_nat_add(v___x_518_, v_size_508_);
lean_dec(v_size_508_);
v___x_755_ = lean_nat_add(v___x_518_, v_size_753_);
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 4, v_tree_665_);
lean_ctor_set(v___x_662_, 3, v_r_512_);
lean_ctor_set(v___x_662_, 2, v_v_752_);
lean_ctor_set(v___x_662_, 1, v_k_751_);
lean_ctor_set(v___x_662_, 0, v___x_755_);
v___x_757_ = v___x_662_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v___x_755_);
lean_ctor_set(v_reuseFailAlloc_761_, 1, v_k_751_);
lean_ctor_set(v_reuseFailAlloc_761_, 2, v_v_752_);
lean_ctor_set(v_reuseFailAlloc_761_, 3, v_r_512_);
lean_ctor_set(v_reuseFailAlloc_761_, 4, v_tree_665_);
v___x_757_ = v_reuseFailAlloc_761_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
lean_object* v___x_759_; 
if (v_isShared_750_ == 0)
{
lean_ctor_set(v___x_749_, 4, v___x_757_);
lean_ctor_set(v___x_749_, 0, v___x_754_);
v___x_759_ = v___x_749_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v___x_754_);
lean_ctor_set(v_reuseFailAlloc_760_, 1, v_k_509_);
lean_ctor_set(v_reuseFailAlloc_760_, 2, v_v_510_);
lean_ctor_set(v_reuseFailAlloc_760_, 3, v_l_511_);
lean_ctor_set(v_reuseFailAlloc_760_, 4, v___x_757_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
else
{
lean_object* v_k_762_; lean_object* v_v_763_; lean_object* v___x_764_; lean_object* v___x_766_; 
lean_dec(v_size_508_);
v_k_762_ = lean_ctor_get(v___x_664_, 0);
lean_inc(v_k_762_);
v_v_763_ = lean_ctor_get(v___x_664_, 1);
lean_inc(v_v_763_);
lean_dec_ref(v___x_664_);
v___x_764_ = lean_unsigned_to_nat(3u);
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 4, v_r_512_);
lean_ctor_set(v___x_662_, 3, v_r_512_);
lean_ctor_set(v___x_662_, 2, v_v_763_);
lean_ctor_set(v___x_662_, 1, v_k_762_);
lean_ctor_set(v___x_662_, 0, v___x_518_);
v___x_766_ = v___x_662_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v___x_518_);
lean_ctor_set(v_reuseFailAlloc_770_, 1, v_k_762_);
lean_ctor_set(v_reuseFailAlloc_770_, 2, v_v_763_);
lean_ctor_set(v_reuseFailAlloc_770_, 3, v_r_512_);
lean_ctor_set(v_reuseFailAlloc_770_, 4, v_r_512_);
v___x_766_ = v_reuseFailAlloc_770_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
lean_object* v___x_768_; 
if (v_isShared_750_ == 0)
{
lean_ctor_set(v___x_749_, 4, v___x_766_);
lean_ctor_set(v___x_749_, 0, v___x_764_);
v___x_768_ = v___x_749_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v___x_764_);
lean_ctor_set(v_reuseFailAlloc_769_, 1, v_k_509_);
lean_ctor_set(v_reuseFailAlloc_769_, 2, v_v_510_);
lean_ctor_set(v_reuseFailAlloc_769_, 3, v_l_511_);
lean_ctor_set(v_reuseFailAlloc_769_, 4, v___x_766_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_512_) == 0)
{
lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_801_; 
lean_inc(v_l_511_);
lean_inc(v_v_510_);
lean_inc(v_k_509_);
v_isSharedCheck_801_ = !lean_is_exclusive(v_l_328_);
if (v_isSharedCheck_801_ == 0)
{
lean_object* v_unused_802_; lean_object* v_unused_803_; lean_object* v_unused_804_; lean_object* v_unused_805_; lean_object* v_unused_806_; 
v_unused_802_ = lean_ctor_get(v_l_328_, 4);
lean_dec(v_unused_802_);
v_unused_803_ = lean_ctor_get(v_l_328_, 3);
lean_dec(v_unused_803_);
v_unused_804_ = lean_ctor_get(v_l_328_, 2);
lean_dec(v_unused_804_);
v_unused_805_ = lean_ctor_get(v_l_328_, 1);
lean_dec(v_unused_805_);
v_unused_806_ = lean_ctor_get(v_l_328_, 0);
lean_dec(v_unused_806_);
v___x_778_ = v_l_328_;
v_isShared_779_ = v_isSharedCheck_801_;
goto v_resetjp_777_;
}
else
{
lean_dec(v_l_328_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_801_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
lean_object* v_k_780_; lean_object* v_v_781_; lean_object* v_k_782_; lean_object* v_v_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_797_; 
v_k_780_ = lean_ctor_get(v___x_664_, 0);
lean_inc(v_k_780_);
v_v_781_ = lean_ctor_get(v___x_664_, 1);
lean_inc(v_v_781_);
lean_dec_ref(v___x_664_);
v_k_782_ = lean_ctor_get(v_r_512_, 1);
v_v_783_ = lean_ctor_get(v_r_512_, 2);
v_isSharedCheck_797_ = !lean_is_exclusive(v_r_512_);
if (v_isSharedCheck_797_ == 0)
{
lean_object* v_unused_798_; lean_object* v_unused_799_; lean_object* v_unused_800_; 
v_unused_798_ = lean_ctor_get(v_r_512_, 4);
lean_dec(v_unused_798_);
v_unused_799_ = lean_ctor_get(v_r_512_, 3);
lean_dec(v_unused_799_);
v_unused_800_ = lean_ctor_get(v_r_512_, 0);
lean_dec(v_unused_800_);
v___x_785_ = v_r_512_;
v_isShared_786_ = v_isSharedCheck_797_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_v_783_);
lean_inc(v_k_782_);
lean_dec(v_r_512_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_797_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_787_; lean_object* v___x_789_; 
v___x_787_ = lean_unsigned_to_nat(3u);
if (v_isShared_786_ == 0)
{
lean_ctor_set(v___x_785_, 4, v_l_511_);
lean_ctor_set(v___x_785_, 3, v_l_511_);
lean_ctor_set(v___x_785_, 2, v_v_510_);
lean_ctor_set(v___x_785_, 1, v_k_509_);
lean_ctor_set(v___x_785_, 0, v___x_518_);
v___x_789_ = v___x_785_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v___x_518_);
lean_ctor_set(v_reuseFailAlloc_796_, 1, v_k_509_);
lean_ctor_set(v_reuseFailAlloc_796_, 2, v_v_510_);
lean_ctor_set(v_reuseFailAlloc_796_, 3, v_l_511_);
lean_ctor_set(v_reuseFailAlloc_796_, 4, v_l_511_);
v___x_789_ = v_reuseFailAlloc_796_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
lean_object* v___x_791_; 
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 4, v_l_511_);
lean_ctor_set(v___x_662_, 3, v_l_511_);
lean_ctor_set(v___x_662_, 2, v_v_781_);
lean_ctor_set(v___x_662_, 1, v_k_780_);
lean_ctor_set(v___x_662_, 0, v___x_518_);
v___x_791_ = v___x_662_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v___x_518_);
lean_ctor_set(v_reuseFailAlloc_795_, 1, v_k_780_);
lean_ctor_set(v_reuseFailAlloc_795_, 2, v_v_781_);
lean_ctor_set(v_reuseFailAlloc_795_, 3, v_l_511_);
lean_ctor_set(v_reuseFailAlloc_795_, 4, v_l_511_);
v___x_791_ = v_reuseFailAlloc_795_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
lean_object* v___x_793_; 
if (v_isShared_779_ == 0)
{
lean_ctor_set(v___x_778_, 4, v___x_791_);
lean_ctor_set(v___x_778_, 3, v___x_789_);
lean_ctor_set(v___x_778_, 2, v_v_783_);
lean_ctor_set(v___x_778_, 1, v_k_782_);
lean_ctor_set(v___x_778_, 0, v___x_787_);
v___x_793_ = v___x_778_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v___x_787_);
lean_ctor_set(v_reuseFailAlloc_794_, 1, v_k_782_);
lean_ctor_set(v_reuseFailAlloc_794_, 2, v_v_783_);
lean_ctor_set(v_reuseFailAlloc_794_, 3, v___x_789_);
lean_ctor_set(v_reuseFailAlloc_794_, 4, v___x_791_);
v___x_793_ = v_reuseFailAlloc_794_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
return v___x_793_;
}
}
}
}
}
}
else
{
lean_object* v_k_807_; lean_object* v_v_808_; lean_object* v___x_809_; lean_object* v___x_811_; 
v_k_807_ = lean_ctor_get(v___x_664_, 0);
lean_inc(v_k_807_);
v_v_808_ = lean_ctor_get(v___x_664_, 1);
lean_inc(v_v_808_);
lean_dec_ref(v___x_664_);
v___x_809_ = lean_unsigned_to_nat(2u);
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 4, v_r_512_);
lean_ctor_set(v___x_662_, 3, v_l_328_);
lean_ctor_set(v___x_662_, 2, v_v_808_);
lean_ctor_set(v___x_662_, 1, v_k_807_);
lean_ctor_set(v___x_662_, 0, v___x_809_);
v___x_811_ = v___x_662_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v___x_809_);
lean_ctor_set(v_reuseFailAlloc_812_, 1, v_k_807_);
lean_ctor_set(v_reuseFailAlloc_812_, 2, v_v_808_);
lean_ctor_set(v_reuseFailAlloc_812_, 3, v_l_328_);
lean_ctor_set(v_reuseFailAlloc_812_, 4, v_r_512_);
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
}
}
else
{
return v_l_328_;
}
}
else
{
return v_r_329_;
}
}
default: 
{
lean_object* v_impl_819_; lean_object* v___x_820_; 
v_impl_819_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(v_k_324_, v_r_329_);
v___x_820_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_819_) == 0)
{
if (lean_obj_tag(v_l_328_) == 0)
{
lean_object* v_size_821_; lean_object* v_size_822_; lean_object* v_k_823_; lean_object* v_v_824_; lean_object* v_l_825_; lean_object* v_r_826_; lean_object* v___x_827_; lean_object* v___x_828_; uint8_t v___x_829_; 
v_size_821_ = lean_ctor_get(v_impl_819_, 0);
lean_inc(v_size_821_);
v_size_822_ = lean_ctor_get(v_l_328_, 0);
v_k_823_ = lean_ctor_get(v_l_328_, 1);
v_v_824_ = lean_ctor_get(v_l_328_, 2);
v_l_825_ = lean_ctor_get(v_l_328_, 3);
v_r_826_ = lean_ctor_get(v_l_328_, 4);
lean_inc(v_r_826_);
v___x_827_ = lean_unsigned_to_nat(3u);
v___x_828_ = lean_nat_mul(v___x_827_, v_size_821_);
v___x_829_ = lean_nat_dec_lt(v___x_828_, v_size_822_);
lean_dec(v___x_828_);
if (v___x_829_ == 0)
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_833_; 
lean_dec(v_r_826_);
v___x_830_ = lean_nat_add(v___x_820_, v_size_822_);
v___x_831_ = lean_nat_add(v___x_830_, v_size_821_);
lean_dec(v_size_821_);
lean_dec(v___x_830_);
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 4, v_impl_819_);
lean_ctor_set(v___x_331_, 0, v___x_831_);
v___x_833_ = v___x_331_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v___x_831_);
lean_ctor_set(v_reuseFailAlloc_834_, 1, v_k_326_);
lean_ctor_set(v_reuseFailAlloc_834_, 2, v_v_327_);
lean_ctor_set(v_reuseFailAlloc_834_, 3, v_l_328_);
lean_ctor_set(v_reuseFailAlloc_834_, 4, v_impl_819_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
else
{
lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_900_; 
lean_inc(v_l_825_);
lean_inc(v_v_824_);
lean_inc(v_k_823_);
lean_inc(v_size_822_);
v_isSharedCheck_900_ = !lean_is_exclusive(v_l_328_);
if (v_isSharedCheck_900_ == 0)
{
lean_object* v_unused_901_; lean_object* v_unused_902_; lean_object* v_unused_903_; lean_object* v_unused_904_; lean_object* v_unused_905_; 
v_unused_901_ = lean_ctor_get(v_l_328_, 4);
lean_dec(v_unused_901_);
v_unused_902_ = lean_ctor_get(v_l_328_, 3);
lean_dec(v_unused_902_);
v_unused_903_ = lean_ctor_get(v_l_328_, 2);
lean_dec(v_unused_903_);
v_unused_904_ = lean_ctor_get(v_l_328_, 1);
lean_dec(v_unused_904_);
v_unused_905_ = lean_ctor_get(v_l_328_, 0);
lean_dec(v_unused_905_);
v___x_836_ = v_l_328_;
v_isShared_837_ = v_isSharedCheck_900_;
goto v_resetjp_835_;
}
else
{
lean_dec(v_l_328_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_900_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
lean_object* v_size_838_; lean_object* v_size_839_; lean_object* v_k_840_; lean_object* v_v_841_; lean_object* v_l_842_; lean_object* v_r_843_; lean_object* v___x_844_; lean_object* v___x_845_; uint8_t v___x_846_; 
v_size_838_ = lean_ctor_get(v_l_825_, 0);
v_size_839_ = lean_ctor_get(v_r_826_, 0);
v_k_840_ = lean_ctor_get(v_r_826_, 1);
v_v_841_ = lean_ctor_get(v_r_826_, 2);
v_l_842_ = lean_ctor_get(v_r_826_, 3);
v_r_843_ = lean_ctor_get(v_r_826_, 4);
v___x_844_ = lean_unsigned_to_nat(2u);
v___x_845_ = lean_nat_mul(v___x_844_, v_size_838_);
v___x_846_ = lean_nat_dec_lt(v_size_839_, v___x_845_);
lean_dec(v___x_845_);
if (v___x_846_ == 0)
{
lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_875_; 
lean_inc(v_r_843_);
lean_inc(v_l_842_);
lean_inc(v_v_841_);
lean_inc(v_k_840_);
v_isSharedCheck_875_ = !lean_is_exclusive(v_r_826_);
if (v_isSharedCheck_875_ == 0)
{
lean_object* v_unused_876_; lean_object* v_unused_877_; lean_object* v_unused_878_; lean_object* v_unused_879_; lean_object* v_unused_880_; 
v_unused_876_ = lean_ctor_get(v_r_826_, 4);
lean_dec(v_unused_876_);
v_unused_877_ = lean_ctor_get(v_r_826_, 3);
lean_dec(v_unused_877_);
v_unused_878_ = lean_ctor_get(v_r_826_, 2);
lean_dec(v_unused_878_);
v_unused_879_ = lean_ctor_get(v_r_826_, 1);
lean_dec(v_unused_879_);
v_unused_880_ = lean_ctor_get(v_r_826_, 0);
lean_dec(v_unused_880_);
v___x_848_ = v_r_826_;
v_isShared_849_ = v_isSharedCheck_875_;
goto v_resetjp_847_;
}
else
{
lean_dec(v_r_826_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_875_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___y_853_; lean_object* v___y_854_; lean_object* v___y_855_; lean_object* v___x_863_; lean_object* v___y_865_; 
v___x_850_ = lean_nat_add(v___x_820_, v_size_822_);
lean_dec(v_size_822_);
v___x_851_ = lean_nat_add(v___x_850_, v_size_821_);
lean_dec(v___x_850_);
v___x_863_ = lean_nat_add(v___x_820_, v_size_838_);
if (lean_obj_tag(v_l_842_) == 0)
{
lean_object* v_size_873_; 
v_size_873_ = lean_ctor_get(v_l_842_, 0);
lean_inc(v_size_873_);
v___y_865_ = v_size_873_;
goto v___jp_864_;
}
else
{
lean_object* v___x_874_; 
v___x_874_ = lean_unsigned_to_nat(0u);
v___y_865_ = v___x_874_;
goto v___jp_864_;
}
v___jp_852_:
{
lean_object* v___x_856_; lean_object* v___x_858_; 
v___x_856_ = lean_nat_add(v___y_853_, v___y_855_);
lean_dec(v___y_855_);
lean_dec(v___y_853_);
if (v_isShared_849_ == 0)
{
lean_ctor_set(v___x_848_, 4, v_impl_819_);
lean_ctor_set(v___x_848_, 3, v_r_843_);
lean_ctor_set(v___x_848_, 2, v_v_327_);
lean_ctor_set(v___x_848_, 1, v_k_326_);
lean_ctor_set(v___x_848_, 0, v___x_856_);
v___x_858_ = v___x_848_;
goto v_reusejp_857_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v___x_856_);
lean_ctor_set(v_reuseFailAlloc_862_, 1, v_k_326_);
lean_ctor_set(v_reuseFailAlloc_862_, 2, v_v_327_);
lean_ctor_set(v_reuseFailAlloc_862_, 3, v_r_843_);
lean_ctor_set(v_reuseFailAlloc_862_, 4, v_impl_819_);
v___x_858_ = v_reuseFailAlloc_862_;
goto v_reusejp_857_;
}
v_reusejp_857_:
{
lean_object* v___x_860_; 
if (v_isShared_837_ == 0)
{
lean_ctor_set(v___x_836_, 4, v___x_858_);
lean_ctor_set(v___x_836_, 3, v___y_854_);
lean_ctor_set(v___x_836_, 2, v_v_841_);
lean_ctor_set(v___x_836_, 1, v_k_840_);
lean_ctor_set(v___x_836_, 0, v___x_851_);
v___x_860_ = v___x_836_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v___x_851_);
lean_ctor_set(v_reuseFailAlloc_861_, 1, v_k_840_);
lean_ctor_set(v_reuseFailAlloc_861_, 2, v_v_841_);
lean_ctor_set(v_reuseFailAlloc_861_, 3, v___y_854_);
lean_ctor_set(v_reuseFailAlloc_861_, 4, v___x_858_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
return v___x_860_;
}
}
}
v___jp_864_:
{
lean_object* v___x_866_; lean_object* v___x_868_; 
v___x_866_ = lean_nat_add(v___x_863_, v___y_865_);
lean_dec(v___y_865_);
lean_dec(v___x_863_);
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 4, v_l_842_);
lean_ctor_set(v___x_331_, 3, v_l_825_);
lean_ctor_set(v___x_331_, 2, v_v_824_);
lean_ctor_set(v___x_331_, 1, v_k_823_);
lean_ctor_set(v___x_331_, 0, v___x_866_);
v___x_868_ = v___x_331_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v___x_866_);
lean_ctor_set(v_reuseFailAlloc_872_, 1, v_k_823_);
lean_ctor_set(v_reuseFailAlloc_872_, 2, v_v_824_);
lean_ctor_set(v_reuseFailAlloc_872_, 3, v_l_825_);
lean_ctor_set(v_reuseFailAlloc_872_, 4, v_l_842_);
v___x_868_ = v_reuseFailAlloc_872_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
lean_object* v___x_869_; 
v___x_869_ = lean_nat_add(v___x_820_, v_size_821_);
lean_dec(v_size_821_);
if (lean_obj_tag(v_r_843_) == 0)
{
lean_object* v_size_870_; 
v_size_870_ = lean_ctor_get(v_r_843_, 0);
lean_inc(v_size_870_);
v___y_853_ = v___x_869_;
v___y_854_ = v___x_868_;
v___y_855_ = v_size_870_;
goto v___jp_852_;
}
else
{
lean_object* v___x_871_; 
v___x_871_ = lean_unsigned_to_nat(0u);
v___y_853_ = v___x_869_;
v___y_854_ = v___x_868_;
v___y_855_ = v___x_871_;
goto v___jp_852_;
}
}
}
}
}
else
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_886_; 
lean_del_object(v___x_331_);
v___x_881_ = lean_nat_add(v___x_820_, v_size_822_);
lean_dec(v_size_822_);
v___x_882_ = lean_nat_add(v___x_881_, v_size_821_);
lean_dec(v___x_881_);
v___x_883_ = lean_nat_add(v___x_820_, v_size_821_);
lean_dec(v_size_821_);
v___x_884_ = lean_nat_add(v___x_883_, v_size_839_);
lean_dec(v___x_883_);
lean_inc_ref(v_impl_819_);
if (v_isShared_837_ == 0)
{
lean_ctor_set(v___x_836_, 4, v_impl_819_);
lean_ctor_set(v___x_836_, 3, v_r_826_);
lean_ctor_set(v___x_836_, 2, v_v_327_);
lean_ctor_set(v___x_836_, 1, v_k_326_);
lean_ctor_set(v___x_836_, 0, v___x_884_);
v___x_886_ = v___x_836_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v___x_884_);
lean_ctor_set(v_reuseFailAlloc_899_, 1, v_k_326_);
lean_ctor_set(v_reuseFailAlloc_899_, 2, v_v_327_);
lean_ctor_set(v_reuseFailAlloc_899_, 3, v_r_826_);
lean_ctor_set(v_reuseFailAlloc_899_, 4, v_impl_819_);
v___x_886_ = v_reuseFailAlloc_899_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_893_; 
v_isSharedCheck_893_ = !lean_is_exclusive(v_impl_819_);
if (v_isSharedCheck_893_ == 0)
{
lean_object* v_unused_894_; lean_object* v_unused_895_; lean_object* v_unused_896_; lean_object* v_unused_897_; lean_object* v_unused_898_; 
v_unused_894_ = lean_ctor_get(v_impl_819_, 4);
lean_dec(v_unused_894_);
v_unused_895_ = lean_ctor_get(v_impl_819_, 3);
lean_dec(v_unused_895_);
v_unused_896_ = lean_ctor_get(v_impl_819_, 2);
lean_dec(v_unused_896_);
v_unused_897_ = lean_ctor_get(v_impl_819_, 1);
lean_dec(v_unused_897_);
v_unused_898_ = lean_ctor_get(v_impl_819_, 0);
lean_dec(v_unused_898_);
v___x_888_ = v_impl_819_;
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
else
{
lean_dec(v_impl_819_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_891_; 
if (v_isShared_889_ == 0)
{
lean_ctor_set(v___x_888_, 4, v___x_886_);
lean_ctor_set(v___x_888_, 3, v_l_825_);
lean_ctor_set(v___x_888_, 2, v_v_824_);
lean_ctor_set(v___x_888_, 1, v_k_823_);
lean_ctor_set(v___x_888_, 0, v___x_882_);
v___x_891_ = v___x_888_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v___x_882_);
lean_ctor_set(v_reuseFailAlloc_892_, 1, v_k_823_);
lean_ctor_set(v_reuseFailAlloc_892_, 2, v_v_824_);
lean_ctor_set(v_reuseFailAlloc_892_, 3, v_l_825_);
lean_ctor_set(v_reuseFailAlloc_892_, 4, v___x_886_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_906_; lean_object* v___x_907_; lean_object* v___x_909_; 
v_size_906_ = lean_ctor_get(v_impl_819_, 0);
lean_inc(v_size_906_);
v___x_907_ = lean_nat_add(v___x_820_, v_size_906_);
lean_dec(v_size_906_);
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 4, v_impl_819_);
lean_ctor_set(v___x_331_, 0, v___x_907_);
v___x_909_ = v___x_331_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v___x_907_);
lean_ctor_set(v_reuseFailAlloc_910_, 1, v_k_326_);
lean_ctor_set(v_reuseFailAlloc_910_, 2, v_v_327_);
lean_ctor_set(v_reuseFailAlloc_910_, 3, v_l_328_);
lean_ctor_set(v_reuseFailAlloc_910_, 4, v_impl_819_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
else
{
if (lean_obj_tag(v_l_328_) == 0)
{
lean_object* v_l_911_; 
v_l_911_ = lean_ctor_get(v_l_328_, 3);
if (lean_obj_tag(v_l_911_) == 0)
{
lean_object* v_r_912_; 
lean_inc_ref(v_l_911_);
v_r_912_ = lean_ctor_get(v_l_328_, 4);
lean_inc(v_r_912_);
if (lean_obj_tag(v_r_912_) == 0)
{
lean_object* v_size_913_; lean_object* v_k_914_; lean_object* v_v_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_928_; 
v_size_913_ = lean_ctor_get(v_l_328_, 0);
v_k_914_ = lean_ctor_get(v_l_328_, 1);
v_v_915_ = lean_ctor_get(v_l_328_, 2);
v_isSharedCheck_928_ = !lean_is_exclusive(v_l_328_);
if (v_isSharedCheck_928_ == 0)
{
lean_object* v_unused_929_; lean_object* v_unused_930_; 
v_unused_929_ = lean_ctor_get(v_l_328_, 4);
lean_dec(v_unused_929_);
v_unused_930_ = lean_ctor_get(v_l_328_, 3);
lean_dec(v_unused_930_);
v___x_917_ = v_l_328_;
v_isShared_918_ = v_isSharedCheck_928_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_v_915_);
lean_inc(v_k_914_);
lean_inc(v_size_913_);
lean_dec(v_l_328_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_928_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v_size_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_923_; 
v_size_919_ = lean_ctor_get(v_r_912_, 0);
v___x_920_ = lean_nat_add(v___x_820_, v_size_913_);
lean_dec(v_size_913_);
v___x_921_ = lean_nat_add(v___x_820_, v_size_919_);
if (v_isShared_918_ == 0)
{
lean_ctor_set(v___x_917_, 4, v_impl_819_);
lean_ctor_set(v___x_917_, 3, v_r_912_);
lean_ctor_set(v___x_917_, 2, v_v_327_);
lean_ctor_set(v___x_917_, 1, v_k_326_);
lean_ctor_set(v___x_917_, 0, v___x_921_);
v___x_923_ = v___x_917_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v___x_921_);
lean_ctor_set(v_reuseFailAlloc_927_, 1, v_k_326_);
lean_ctor_set(v_reuseFailAlloc_927_, 2, v_v_327_);
lean_ctor_set(v_reuseFailAlloc_927_, 3, v_r_912_);
lean_ctor_set(v_reuseFailAlloc_927_, 4, v_impl_819_);
v___x_923_ = v_reuseFailAlloc_927_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
lean_object* v___x_925_; 
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 4, v___x_923_);
lean_ctor_set(v___x_331_, 3, v_l_911_);
lean_ctor_set(v___x_331_, 2, v_v_915_);
lean_ctor_set(v___x_331_, 1, v_k_914_);
lean_ctor_set(v___x_331_, 0, v___x_920_);
v___x_925_ = v___x_331_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v___x_920_);
lean_ctor_set(v_reuseFailAlloc_926_, 1, v_k_914_);
lean_ctor_set(v_reuseFailAlloc_926_, 2, v_v_915_);
lean_ctor_set(v_reuseFailAlloc_926_, 3, v_l_911_);
lean_ctor_set(v_reuseFailAlloc_926_, 4, v___x_923_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
}
else
{
lean_object* v_k_931_; lean_object* v_v_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_943_; 
v_k_931_ = lean_ctor_get(v_l_328_, 1);
v_v_932_ = lean_ctor_get(v_l_328_, 2);
v_isSharedCheck_943_ = !lean_is_exclusive(v_l_328_);
if (v_isSharedCheck_943_ == 0)
{
lean_object* v_unused_944_; lean_object* v_unused_945_; lean_object* v_unused_946_; 
v_unused_944_ = lean_ctor_get(v_l_328_, 4);
lean_dec(v_unused_944_);
v_unused_945_ = lean_ctor_get(v_l_328_, 3);
lean_dec(v_unused_945_);
v_unused_946_ = lean_ctor_get(v_l_328_, 0);
lean_dec(v_unused_946_);
v___x_934_ = v_l_328_;
v_isShared_935_ = v_isSharedCheck_943_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_v_932_);
lean_inc(v_k_931_);
lean_dec(v_l_328_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_943_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v___x_936_; lean_object* v___x_938_; 
v___x_936_ = lean_unsigned_to_nat(3u);
if (v_isShared_935_ == 0)
{
lean_ctor_set(v___x_934_, 3, v_r_912_);
lean_ctor_set(v___x_934_, 2, v_v_327_);
lean_ctor_set(v___x_934_, 1, v_k_326_);
lean_ctor_set(v___x_934_, 0, v___x_820_);
v___x_938_ = v___x_934_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v___x_820_);
lean_ctor_set(v_reuseFailAlloc_942_, 1, v_k_326_);
lean_ctor_set(v_reuseFailAlloc_942_, 2, v_v_327_);
lean_ctor_set(v_reuseFailAlloc_942_, 3, v_r_912_);
lean_ctor_set(v_reuseFailAlloc_942_, 4, v_r_912_);
v___x_938_ = v_reuseFailAlloc_942_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
lean_object* v___x_940_; 
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 4, v___x_938_);
lean_ctor_set(v___x_331_, 3, v_l_911_);
lean_ctor_set(v___x_331_, 2, v_v_932_);
lean_ctor_set(v___x_331_, 1, v_k_931_);
lean_ctor_set(v___x_331_, 0, v___x_936_);
v___x_940_ = v___x_331_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v___x_936_);
lean_ctor_set(v_reuseFailAlloc_941_, 1, v_k_931_);
lean_ctor_set(v_reuseFailAlloc_941_, 2, v_v_932_);
lean_ctor_set(v_reuseFailAlloc_941_, 3, v_l_911_);
lean_ctor_set(v_reuseFailAlloc_941_, 4, v___x_938_);
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
else
{
lean_object* v_r_947_; 
v_r_947_ = lean_ctor_get(v_l_328_, 4);
lean_inc(v_r_947_);
if (lean_obj_tag(v_r_947_) == 0)
{
lean_object* v_k_948_; lean_object* v_v_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_972_; 
lean_inc(v_l_911_);
v_k_948_ = lean_ctor_get(v_l_328_, 1);
v_v_949_ = lean_ctor_get(v_l_328_, 2);
v_isSharedCheck_972_ = !lean_is_exclusive(v_l_328_);
if (v_isSharedCheck_972_ == 0)
{
lean_object* v_unused_973_; lean_object* v_unused_974_; lean_object* v_unused_975_; 
v_unused_973_ = lean_ctor_get(v_l_328_, 4);
lean_dec(v_unused_973_);
v_unused_974_ = lean_ctor_get(v_l_328_, 3);
lean_dec(v_unused_974_);
v_unused_975_ = lean_ctor_get(v_l_328_, 0);
lean_dec(v_unused_975_);
v___x_951_ = v_l_328_;
v_isShared_952_ = v_isSharedCheck_972_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_v_949_);
lean_inc(v_k_948_);
lean_dec(v_l_328_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_972_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v_k_953_; lean_object* v_v_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_968_; 
v_k_953_ = lean_ctor_get(v_r_947_, 1);
v_v_954_ = lean_ctor_get(v_r_947_, 2);
v_isSharedCheck_968_ = !lean_is_exclusive(v_r_947_);
if (v_isSharedCheck_968_ == 0)
{
lean_object* v_unused_969_; lean_object* v_unused_970_; lean_object* v_unused_971_; 
v_unused_969_ = lean_ctor_get(v_r_947_, 4);
lean_dec(v_unused_969_);
v_unused_970_ = lean_ctor_get(v_r_947_, 3);
lean_dec(v_unused_970_);
v_unused_971_ = lean_ctor_get(v_r_947_, 0);
lean_dec(v_unused_971_);
v___x_956_ = v_r_947_;
v_isShared_957_ = v_isSharedCheck_968_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_v_954_);
lean_inc(v_k_953_);
lean_dec(v_r_947_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_968_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_958_; lean_object* v___x_960_; 
v___x_958_ = lean_unsigned_to_nat(3u);
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 4, v_l_911_);
lean_ctor_set(v___x_956_, 3, v_l_911_);
lean_ctor_set(v___x_956_, 2, v_v_949_);
lean_ctor_set(v___x_956_, 1, v_k_948_);
lean_ctor_set(v___x_956_, 0, v___x_820_);
v___x_960_ = v___x_956_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v___x_820_);
lean_ctor_set(v_reuseFailAlloc_967_, 1, v_k_948_);
lean_ctor_set(v_reuseFailAlloc_967_, 2, v_v_949_);
lean_ctor_set(v_reuseFailAlloc_967_, 3, v_l_911_);
lean_ctor_set(v_reuseFailAlloc_967_, 4, v_l_911_);
v___x_960_ = v_reuseFailAlloc_967_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
lean_object* v___x_962_; 
if (v_isShared_952_ == 0)
{
lean_ctor_set(v___x_951_, 4, v_l_911_);
lean_ctor_set(v___x_951_, 2, v_v_327_);
lean_ctor_set(v___x_951_, 1, v_k_326_);
lean_ctor_set(v___x_951_, 0, v___x_820_);
v___x_962_ = v___x_951_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v___x_820_);
lean_ctor_set(v_reuseFailAlloc_966_, 1, v_k_326_);
lean_ctor_set(v_reuseFailAlloc_966_, 2, v_v_327_);
lean_ctor_set(v_reuseFailAlloc_966_, 3, v_l_911_);
lean_ctor_set(v_reuseFailAlloc_966_, 4, v_l_911_);
v___x_962_ = v_reuseFailAlloc_966_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
lean_object* v___x_964_; 
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 4, v___x_962_);
lean_ctor_set(v___x_331_, 3, v___x_960_);
lean_ctor_set(v___x_331_, 2, v_v_954_);
lean_ctor_set(v___x_331_, 1, v_k_953_);
lean_ctor_set(v___x_331_, 0, v___x_958_);
v___x_964_ = v___x_331_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v___x_958_);
lean_ctor_set(v_reuseFailAlloc_965_, 1, v_k_953_);
lean_ctor_set(v_reuseFailAlloc_965_, 2, v_v_954_);
lean_ctor_set(v_reuseFailAlloc_965_, 3, v___x_960_);
lean_ctor_set(v_reuseFailAlloc_965_, 4, v___x_962_);
v___x_964_ = v_reuseFailAlloc_965_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
return v___x_964_;
}
}
}
}
}
}
else
{
lean_object* v___x_976_; lean_object* v___x_978_; 
v___x_976_ = lean_unsigned_to_nat(2u);
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 4, v_r_947_);
lean_ctor_set(v___x_331_, 0, v___x_976_);
v___x_978_ = v___x_331_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v___x_976_);
lean_ctor_set(v_reuseFailAlloc_979_, 1, v_k_326_);
lean_ctor_set(v_reuseFailAlloc_979_, 2, v_v_327_);
lean_ctor_set(v_reuseFailAlloc_979_, 3, v_l_328_);
lean_ctor_set(v_reuseFailAlloc_979_, 4, v_r_947_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
}
}
else
{
lean_object* v___x_981_; 
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 4, v_l_328_);
lean_ctor_set(v___x_331_, 0, v___x_820_);
v___x_981_ = v___x_331_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v___x_820_);
lean_ctor_set(v_reuseFailAlloc_982_, 1, v_k_326_);
lean_ctor_set(v_reuseFailAlloc_982_, 2, v_v_327_);
lean_ctor_set(v_reuseFailAlloc_982_, 3, v_l_328_);
lean_ctor_set(v_reuseFailAlloc_982_, 4, v_l_328_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
return v___x_981_;
}
}
}
}
}
}
}
else
{
return v_t_325_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___boxed(lean_object* v_k_985_, lean_object* v_t_986_){
_start:
{
lean_object* v_res_987_; 
v_res_987_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(v_k_985_, v_t_986_);
lean_dec(v_k_985_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__23(size_t v_sz_988_, size_t v_i_989_, lean_object* v_bs_990_){
_start:
{
uint8_t v___x_991_; 
v___x_991_ = lean_usize_dec_lt(v_i_989_, v_sz_988_);
if (v___x_991_ == 0)
{
return v_bs_990_;
}
else
{
lean_object* v_v_992_; lean_object* v___x_993_; lean_object* v_bs_x27_994_; lean_object* v___x_995_; size_t v___x_996_; size_t v___x_997_; lean_object* v___x_998_; 
v_v_992_ = lean_array_uget(v_bs_990_, v_i_989_);
v___x_993_ = lean_unsigned_to_nat(0u);
v_bs_x27_994_ = lean_array_uset(v_bs_990_, v_i_989_, v___x_993_);
v___x_995_ = l_Lean_TSyntax_getId(v_v_992_);
lean_dec(v_v_992_);
v___x_996_ = ((size_t)1ULL);
v___x_997_ = lean_usize_add(v_i_989_, v___x_996_);
v___x_998_ = lean_array_uset(v_bs_x27_994_, v_i_989_, v___x_995_);
v_i_989_ = v___x_997_;
v_bs_990_ = v___x_998_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__23___boxed(lean_object* v_sz_1000_, lean_object* v_i_1001_, lean_object* v_bs_1002_){
_start:
{
size_t v_sz_boxed_1003_; size_t v_i_boxed_1004_; lean_object* v_res_1005_; 
v_sz_boxed_1003_ = lean_unbox_usize(v_sz_1000_);
lean_dec(v_sz_1000_);
v_i_boxed_1004_ = lean_unbox_usize(v_i_1001_);
lean_dec(v_i_1001_);
v_res_1005_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__23(v_sz_boxed_1003_, v_i_boxed_1004_, v_bs_1002_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__24(lean_object* v_as_1006_, size_t v_i_1007_, size_t v_stop_1008_, lean_object* v_b_1009_){
_start:
{
uint8_t v___x_1010_; 
v___x_1010_ = lean_usize_dec_eq(v_i_1007_, v_stop_1008_);
if (v___x_1010_ == 0)
{
lean_object* v___x_1011_; lean_object* v___x_1012_; size_t v___x_1013_; size_t v___x_1014_; 
v___x_1011_ = lean_array_uget_borrowed(v_as_1006_, v_i_1007_);
lean_inc(v___x_1011_);
v___x_1012_ = l_Lean_NameSet_insert(v_b_1009_, v___x_1011_);
v___x_1013_ = ((size_t)1ULL);
v___x_1014_ = lean_usize_add(v_i_1007_, v___x_1013_);
v_i_1007_ = v___x_1014_;
v_b_1009_ = v___x_1012_;
goto _start;
}
else
{
return v_b_1009_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__24___boxed(lean_object* v_as_1016_, lean_object* v_i_1017_, lean_object* v_stop_1018_, lean_object* v_b_1019_){
_start:
{
size_t v_i_boxed_1020_; size_t v_stop_boxed_1021_; lean_object* v_res_1022_; 
v_i_boxed_1020_ = lean_unbox_usize(v_i_1017_);
lean_dec(v_i_1017_);
v_stop_boxed_1021_ = lean_unbox_usize(v_stop_1018_);
lean_dec(v_stop_1018_);
v_res_1022_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__24(v_as_1016_, v_i_boxed_1020_, v_stop_boxed_1021_, v_b_1019_);
lean_dec_ref(v_as_1016_);
return v_res_1022_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__20(lean_object* v_opts_1023_, lean_object* v_opt_1024_){
_start:
{
lean_object* v_name_1025_; lean_object* v_defValue_1026_; lean_object* v_map_1027_; lean_object* v___x_1028_; 
v_name_1025_ = lean_ctor_get(v_opt_1024_, 0);
v_defValue_1026_ = lean_ctor_get(v_opt_1024_, 1);
v_map_1027_ = lean_ctor_get(v_opts_1023_, 0);
v___x_1028_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1027_, v_name_1025_);
if (lean_obj_tag(v___x_1028_) == 0)
{
uint8_t v___x_1029_; 
v___x_1029_ = lean_unbox(v_defValue_1026_);
return v___x_1029_;
}
else
{
lean_object* v_val_1030_; 
v_val_1030_ = lean_ctor_get(v___x_1028_, 0);
lean_inc(v_val_1030_);
lean_dec_ref_known(v___x_1028_, 1);
if (lean_obj_tag(v_val_1030_) == 1)
{
uint8_t v_v_1031_; 
v_v_1031_ = lean_ctor_get_uint8(v_val_1030_, 0);
lean_dec_ref_known(v_val_1030_, 0);
return v_v_1031_;
}
else
{
uint8_t v___x_1032_; 
lean_dec(v_val_1030_);
v___x_1032_ = lean_unbox(v_defValue_1026_);
return v___x_1032_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__20___boxed(lean_object* v_opts_1033_, lean_object* v_opt_1034_){
_start:
{
uint8_t v_res_1035_; lean_object* v_r_1036_; 
v_res_1035_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__20(v_opts_1033_, v_opt_1034_);
lean_dec_ref(v_opt_1034_);
lean_dec_ref(v_opts_1033_);
v_r_1036_ = lean_box(v_res_1035_);
return v_r_1036_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__0(void){
_start:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1037_ = lean_box(1);
v___x_1038_ = l_Lean_MessageData_ofFormat(v___x_1037_);
return v___x_1038_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__3(void){
_start:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; 
v___x_1042_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__2));
v___x_1043_ = l_Lean_MessageData_ofFormat(v___x_1042_);
return v___x_1043_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21(lean_object* v_x_1044_, lean_object* v_x_1045_){
_start:
{
if (lean_obj_tag(v_x_1045_) == 0)
{
return v_x_1044_;
}
else
{
lean_object* v_head_1046_; lean_object* v_tail_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1069_; 
v_head_1046_ = lean_ctor_get(v_x_1045_, 0);
v_tail_1047_ = lean_ctor_get(v_x_1045_, 1);
v_isSharedCheck_1069_ = !lean_is_exclusive(v_x_1045_);
if (v_isSharedCheck_1069_ == 0)
{
v___x_1049_ = v_x_1045_;
v_isShared_1050_ = v_isSharedCheck_1069_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_tail_1047_);
lean_inc(v_head_1046_);
lean_dec(v_x_1045_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1069_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v_before_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1067_; 
v_before_1051_ = lean_ctor_get(v_head_1046_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v_head_1046_);
if (v_isSharedCheck_1067_ == 0)
{
lean_object* v_unused_1068_; 
v_unused_1068_ = lean_ctor_get(v_head_1046_, 1);
lean_dec(v_unused_1068_);
v___x_1053_ = v_head_1046_;
v_isShared_1054_ = v_isSharedCheck_1067_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_before_1051_);
lean_dec(v_head_1046_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1067_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1055_; lean_object* v___x_1057_; 
v___x_1055_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__0);
if (v_isShared_1054_ == 0)
{
lean_ctor_set_tag(v___x_1053_, 7);
lean_ctor_set(v___x_1053_, 1, v___x_1055_);
lean_ctor_set(v___x_1053_, 0, v_x_1044_);
v___x_1057_ = v___x_1053_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v_x_1044_);
lean_ctor_set(v_reuseFailAlloc_1066_, 1, v___x_1055_);
v___x_1057_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
lean_object* v___x_1058_; lean_object* v___x_1060_; 
v___x_1058_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__3);
if (v_isShared_1050_ == 0)
{
lean_ctor_set_tag(v___x_1049_, 7);
lean_ctor_set(v___x_1049_, 1, v___x_1058_);
lean_ctor_set(v___x_1049_, 0, v___x_1057_);
v___x_1060_ = v___x_1049_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v___x_1057_);
lean_ctor_set(v_reuseFailAlloc_1065_, 1, v___x_1058_);
v___x_1060_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1061_ = l_Lean_MessageData_ofSyntax(v_before_1051_);
v___x_1062_ = l_Lean_indentD(v___x_1061_);
v___x_1063_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1060_);
lean_ctor_set(v___x_1063_, 1, v___x_1062_);
v_x_1044_ = v___x_1063_;
v_x_1045_ = v_tail_1047_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___redArg___closed__2(void){
_start:
{
lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1073_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___redArg___closed__1));
v___x_1074_ = l_Lean_MessageData_ofFormat(v___x_1073_);
return v___x_1074_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___redArg(lean_object* v_msgData_1075_, lean_object* v_macroStack_1076_, lean_object* v___y_1077_){
_start:
{
lean_object* v_options_1079_; lean_object* v___x_1080_; uint8_t v___x_1081_; 
v_options_1079_ = lean_ctor_get(v___y_1077_, 2);
v___x_1080_ = l_Lean_Elab_pp_macroStack;
v___x_1081_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__20(v_options_1079_, v___x_1080_);
if (v___x_1081_ == 0)
{
lean_object* v___x_1082_; 
lean_dec(v_macroStack_1076_);
v___x_1082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1082_, 0, v_msgData_1075_);
return v___x_1082_;
}
else
{
if (lean_obj_tag(v_macroStack_1076_) == 0)
{
lean_object* v___x_1083_; 
v___x_1083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1083_, 0, v_msgData_1075_);
return v___x_1083_;
}
else
{
lean_object* v_head_1084_; lean_object* v_after_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1100_; 
v_head_1084_ = lean_ctor_get(v_macroStack_1076_, 0);
lean_inc(v_head_1084_);
v_after_1085_ = lean_ctor_get(v_head_1084_, 1);
v_isSharedCheck_1100_ = !lean_is_exclusive(v_head_1084_);
if (v_isSharedCheck_1100_ == 0)
{
lean_object* v_unused_1101_; 
v_unused_1101_ = lean_ctor_get(v_head_1084_, 0);
lean_dec(v_unused_1101_);
v___x_1087_ = v_head_1084_;
v_isShared_1088_ = v_isSharedCheck_1100_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_after_1085_);
lean_dec(v_head_1084_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1100_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v___x_1089_; lean_object* v___x_1091_; 
v___x_1089_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21___closed__0);
if (v_isShared_1088_ == 0)
{
lean_ctor_set_tag(v___x_1087_, 7);
lean_ctor_set(v___x_1087_, 1, v___x_1089_);
lean_ctor_set(v___x_1087_, 0, v_msgData_1075_);
v___x_1091_ = v___x_1087_;
goto v_reusejp_1090_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v_msgData_1075_);
lean_ctor_set(v_reuseFailAlloc_1099_, 1, v___x_1089_);
v___x_1091_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v_msgData_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1092_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___redArg___closed__2);
v___x_1093_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1091_);
lean_ctor_set(v___x_1093_, 1, v___x_1092_);
v___x_1094_ = l_Lean_MessageData_ofSyntax(v_after_1085_);
v___x_1095_ = l_Lean_indentD(v___x_1094_);
v_msgData_1096_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1096_, 0, v___x_1093_);
lean_ctor_set(v_msgData_1096_, 1, v___x_1095_);
v___x_1097_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12_spec__21(v_msgData_1096_, v_macroStack_1076_);
v___x_1098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1097_);
return v___x_1098_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___redArg___boxed(lean_object* v_msgData_1102_, lean_object* v_macroStack_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_){
_start:
{
lean_object* v_res_1106_; 
v_res_1106_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___redArg(v_msgData_1102_, v_macroStack_1103_, v___y_1104_);
lean_dec_ref(v___y_1104_);
return v_res_1106_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__11(lean_object* v_msgData_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_){
_start:
{
lean_object* v___x_1113_; lean_object* v_env_1114_; lean_object* v___x_1115_; lean_object* v_mctx_1116_; lean_object* v_lctx_1117_; lean_object* v_options_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1113_ = lean_st_ref_get(v___y_1111_);
v_env_1114_ = lean_ctor_get(v___x_1113_, 0);
lean_inc_ref(v_env_1114_);
lean_dec(v___x_1113_);
v___x_1115_ = lean_st_ref_get(v___y_1109_);
v_mctx_1116_ = lean_ctor_get(v___x_1115_, 0);
lean_inc_ref(v_mctx_1116_);
lean_dec(v___x_1115_);
v_lctx_1117_ = lean_ctor_get(v___y_1108_, 2);
v_options_1118_ = lean_ctor_get(v___y_1110_, 2);
lean_inc_ref(v_options_1118_);
lean_inc_ref(v_lctx_1117_);
v___x_1119_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1119_, 0, v_env_1114_);
lean_ctor_set(v___x_1119_, 1, v_mctx_1116_);
lean_ctor_set(v___x_1119_, 2, v_lctx_1117_);
lean_ctor_set(v___x_1119_, 3, v_options_1118_);
v___x_1120_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1120_, 0, v___x_1119_);
lean_ctor_set(v___x_1120_, 1, v_msgData_1107_);
v___x_1121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1120_);
return v___x_1121_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__11___boxed(lean_object* v_msgData_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_){
_start:
{
lean_object* v_res_1128_; 
v_res_1128_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__11(v_msgData_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
lean_dec(v___y_1126_);
lean_dec_ref(v___y_1125_);
lean_dec(v___y_1124_);
lean_dec_ref(v___y_1123_);
return v_res_1128_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(lean_object* v_msg_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_){
_start:
{
lean_object* v_ref_1137_; lean_object* v___x_1138_; lean_object* v_a_1139_; lean_object* v_macroStack_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v_a_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1151_; 
v_ref_1137_ = lean_ctor_get(v___y_1134_, 5);
v___x_1138_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__11(v_msg_1129_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_);
v_a_1139_ = lean_ctor_get(v___x_1138_, 0);
lean_inc(v_a_1139_);
lean_dec_ref(v___x_1138_);
v_macroStack_1140_ = lean_ctor_get(v___y_1130_, 1);
v___x_1141_ = l_Lean_Elab_getBetterRef(v_ref_1137_, v_macroStack_1140_);
lean_inc(v_macroStack_1140_);
v___x_1142_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___redArg(v_a_1139_, v_macroStack_1140_, v___y_1134_);
v_a_1143_ = lean_ctor_get(v___x_1142_, 0);
v_isSharedCheck_1151_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1151_ == 0)
{
v___x_1145_ = v___x_1142_;
v_isShared_1146_ = v_isSharedCheck_1151_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_a_1143_);
lean_dec(v___x_1142_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1151_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1147_; lean_object* v___x_1149_; 
v___x_1147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1141_);
lean_ctor_set(v___x_1147_, 1, v_a_1143_);
if (v_isShared_1146_ == 0)
{
lean_ctor_set_tag(v___x_1145_, 1);
lean_ctor_set(v___x_1145_, 0, v___x_1147_);
v___x_1149_ = v___x_1145_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v___x_1147_);
v___x_1149_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1148_;
}
v_reusejp_1148_:
{
return v___x_1149_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg___boxed(lean_object* v_msg_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_){
_start:
{
lean_object* v_res_1160_; 
v_res_1160_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v_msg_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_);
lean_dec(v___y_1158_);
lean_dec_ref(v___y_1157_);
lean_dec(v___y_1156_);
lean_dec_ref(v___y_1155_);
lean_dec(v___y_1154_);
lean_dec_ref(v___y_1153_);
return v_res_1160_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13(lean_object* v___x_1161_, lean_object* v_x_1162_){
_start:
{
if (lean_obj_tag(v_x_1162_) == 0)
{
uint8_t v___x_1163_; 
v___x_1163_ = 0;
return v___x_1163_;
}
else
{
lean_object* v_head_1164_; lean_object* v_tail_1165_; uint8_t v___x_1166_; 
v_head_1164_ = lean_ctor_get(v_x_1162_, 0);
v_tail_1165_ = lean_ctor_get(v_x_1162_, 1);
v___x_1166_ = l_Lean_NameSet_contains(v___x_1161_, v_head_1164_);
if (v___x_1166_ == 0)
{
v_x_1162_ = v_tail_1165_;
goto _start;
}
else
{
return v___x_1166_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___boxed(lean_object* v___x_1168_, lean_object* v_x_1169_){
_start:
{
uint8_t v_res_1170_; lean_object* v_r_1171_; 
v_res_1170_ = l_List_any___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13(v___x_1168_, v_x_1169_);
lean_dec(v_x_1169_);
lean_dec(v___x_1168_);
v_r_1171_ = lean_box(v_res_1170_);
return v_r_1171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7(size_t v_sz_1172_, size_t v_i_1173_, lean_object* v_bs_1174_){
_start:
{
uint8_t v___x_1175_; 
v___x_1175_ = lean_usize_dec_lt(v_i_1173_, v_sz_1172_);
if (v___x_1175_ == 0)
{
lean_object* v___x_1176_; 
v___x_1176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1176_, 0, v_bs_1174_);
return v___x_1176_;
}
else
{
lean_object* v_v_1177_; lean_object* v___x_1178_; lean_object* v_bs_x27_1179_; size_t v___x_1180_; size_t v___x_1181_; lean_object* v___x_1182_; 
v_v_1177_ = lean_array_uget(v_bs_1174_, v_i_1173_);
v___x_1178_ = lean_unsigned_to_nat(0u);
v_bs_x27_1179_ = lean_array_uset(v_bs_1174_, v_i_1173_, v___x_1178_);
v___x_1180_ = ((size_t)1ULL);
v___x_1181_ = lean_usize_add(v_i_1173_, v___x_1180_);
v___x_1182_ = lean_array_uset(v_bs_x27_1179_, v_i_1173_, v_v_1177_);
v_i_1173_ = v___x_1181_;
v_bs_1174_ = v___x_1182_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___boxed(lean_object* v_sz_1184_, lean_object* v_i_1185_, lean_object* v_bs_1186_){
_start:
{
size_t v_sz_boxed_1187_; size_t v_i_boxed_1188_; lean_object* v_res_1189_; 
v_sz_boxed_1187_ = lean_unbox_usize(v_sz_1184_);
lean_dec(v_sz_1184_);
v_i_boxed_1188_ = lean_unbox_usize(v_i_1185_);
lean_dec(v_i_1185_);
v_res_1189_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7(v_sz_boxed_1187_, v_i_boxed_1188_, v_bs_1186_);
return v_res_1189_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__16(size_t v_sz_1193_, size_t v_i_1194_, lean_object* v_bs_1195_){
_start:
{
uint8_t v___x_1196_; 
v___x_1196_ = lean_usize_dec_lt(v_i_1194_, v_sz_1193_);
if (v___x_1196_ == 0)
{
lean_object* v___x_1197_; 
v___x_1197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1197_, 0, v_bs_1195_);
return v___x_1197_;
}
else
{
lean_object* v_v_1198_; lean_object* v___x_1199_; uint8_t v___x_1200_; 
v_v_1198_ = lean_array_uget(v_bs_1195_, v_i_1194_);
v___x_1199_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__16___closed__1));
lean_inc(v_v_1198_);
v___x_1200_ = l_Lean_Syntax_isOfKind(v_v_1198_, v___x_1199_);
if (v___x_1200_ == 0)
{
lean_object* v___x_1201_; 
lean_dec(v_v_1198_);
lean_dec_ref(v_bs_1195_);
v___x_1201_ = lean_box(0);
return v___x_1201_;
}
else
{
lean_object* v___x_1202_; lean_object* v___x_1203_; uint8_t v___x_1204_; 
v___x_1202_ = lean_unsigned_to_nat(0u);
v___x_1203_ = l_Lean_Syntax_getArg(v_v_1198_, v___x_1202_);
v___x_1204_ = l_Lean_Syntax_isOfKind(v___x_1203_, v___x_1199_);
if (v___x_1204_ == 0)
{
lean_object* v___x_1205_; 
lean_dec(v_v_1198_);
lean_dec_ref(v_bs_1195_);
v___x_1205_ = lean_box(0);
return v___x_1205_;
}
else
{
lean_object* v___x_1206_; lean_object* v_bs_x27_1207_; lean_object* v___x_1208_; size_t v___x_1209_; size_t v___x_1210_; lean_object* v___x_1211_; 
v___x_1206_ = lean_unsigned_to_nat(3u);
v_bs_x27_1207_ = lean_array_uset(v_bs_1195_, v_i_1194_, v___x_1202_);
v___x_1208_ = l_Lean_Syntax_getArg(v_v_1198_, v___x_1206_);
lean_dec(v_v_1198_);
v___x_1209_ = ((size_t)1ULL);
v___x_1210_ = lean_usize_add(v_i_1194_, v___x_1209_);
v___x_1211_ = lean_array_uset(v_bs_x27_1207_, v_i_1194_, v___x_1208_);
v_i_1194_ = v___x_1210_;
v_bs_1195_ = v___x_1211_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__16___boxed(lean_object* v_sz_1213_, lean_object* v_i_1214_, lean_object* v_bs_1215_){
_start:
{
size_t v_sz_boxed_1216_; size_t v_i_boxed_1217_; lean_object* v_res_1218_; 
v_sz_boxed_1216_ = lean_unbox_usize(v_sz_1213_);
lean_dec(v_sz_1213_);
v_i_boxed_1217_ = lean_unbox_usize(v_i_1214_);
lean_dec(v_i_1214_);
v_res_1218_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__16(v_sz_boxed_1216_, v_i_boxed_1217_, v_bs_1215_);
return v_res_1218_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(lean_object* v_x_1219_, lean_object* v_x_1220_){
_start:
{
if (lean_obj_tag(v_x_1220_) == 0)
{
return v_x_1219_;
}
else
{
lean_object* v_head_1221_; lean_object* v_tail_1222_; lean_object* v___x_1223_; 
v_head_1221_ = lean_ctor_get(v_x_1220_, 0);
v_tail_1222_ = lean_ctor_get(v_x_1220_, 1);
v___x_1223_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(v_head_1221_, v_x_1219_);
v_x_1219_ = v___x_1223_;
v_x_1220_ = v_tail_1222_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14___boxed(lean_object* v_x_1225_, lean_object* v_x_1226_){
_start:
{
lean_object* v_res_1227_; 
v_res_1227_ = l_List_foldl___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(v_x_1225_, v_x_1226_);
lean_dec(v_x_1226_);
return v_res_1227_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1228_; double v___x_1229_; 
v___x_1228_ = lean_unsigned_to_nat(0u);
v___x_1229_ = lean_float_of_nat(v___x_1228_);
return v___x_1229_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg(lean_object* v_cls_1233_, lean_object* v_msg_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_){
_start:
{
lean_object* v_ref_1240_; lean_object* v___x_1241_; lean_object* v_a_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1286_; 
v_ref_1240_ = lean_ctor_get(v___y_1237_, 5);
v___x_1241_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__11(v_msg_1234_, v___y_1235_, v___y_1236_, v___y_1237_, v___y_1238_);
v_a_1242_ = lean_ctor_get(v___x_1241_, 0);
v_isSharedCheck_1286_ = !lean_is_exclusive(v___x_1241_);
if (v_isSharedCheck_1286_ == 0)
{
v___x_1244_ = v___x_1241_;
v_isShared_1245_ = v_isSharedCheck_1286_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_a_1242_);
lean_dec(v___x_1241_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1286_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v___x_1246_; lean_object* v_traceState_1247_; lean_object* v_env_1248_; lean_object* v_nextMacroScope_1249_; lean_object* v_ngen_1250_; lean_object* v_auxDeclNGen_1251_; lean_object* v_cache_1252_; lean_object* v_messages_1253_; lean_object* v_infoState_1254_; lean_object* v_snapshotTasks_1255_; lean_object* v___x_1257_; uint8_t v_isShared_1258_; uint8_t v_isSharedCheck_1285_; 
v___x_1246_ = lean_st_ref_take(v___y_1238_);
v_traceState_1247_ = lean_ctor_get(v___x_1246_, 4);
v_env_1248_ = lean_ctor_get(v___x_1246_, 0);
v_nextMacroScope_1249_ = lean_ctor_get(v___x_1246_, 1);
v_ngen_1250_ = lean_ctor_get(v___x_1246_, 2);
v_auxDeclNGen_1251_ = lean_ctor_get(v___x_1246_, 3);
v_cache_1252_ = lean_ctor_get(v___x_1246_, 5);
v_messages_1253_ = lean_ctor_get(v___x_1246_, 6);
v_infoState_1254_ = lean_ctor_get(v___x_1246_, 7);
v_snapshotTasks_1255_ = lean_ctor_get(v___x_1246_, 8);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1246_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1257_ = v___x_1246_;
v_isShared_1258_ = v_isSharedCheck_1285_;
goto v_resetjp_1256_;
}
else
{
lean_inc(v_snapshotTasks_1255_);
lean_inc(v_infoState_1254_);
lean_inc(v_messages_1253_);
lean_inc(v_cache_1252_);
lean_inc(v_traceState_1247_);
lean_inc(v_auxDeclNGen_1251_);
lean_inc(v_ngen_1250_);
lean_inc(v_nextMacroScope_1249_);
lean_inc(v_env_1248_);
lean_dec(v___x_1246_);
v___x_1257_ = lean_box(0);
v_isShared_1258_ = v_isSharedCheck_1285_;
goto v_resetjp_1256_;
}
v_resetjp_1256_:
{
uint64_t v_tid_1259_; lean_object* v_traces_1260_; lean_object* v___x_1262_; uint8_t v_isShared_1263_; uint8_t v_isSharedCheck_1284_; 
v_tid_1259_ = lean_ctor_get_uint64(v_traceState_1247_, sizeof(void*)*1);
v_traces_1260_ = lean_ctor_get(v_traceState_1247_, 0);
v_isSharedCheck_1284_ = !lean_is_exclusive(v_traceState_1247_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1262_ = v_traceState_1247_;
v_isShared_1263_ = v_isSharedCheck_1284_;
goto v_resetjp_1261_;
}
else
{
lean_inc(v_traces_1260_);
lean_dec(v_traceState_1247_);
v___x_1262_ = lean_box(0);
v_isShared_1263_ = v_isSharedCheck_1284_;
goto v_resetjp_1261_;
}
v_resetjp_1261_:
{
lean_object* v___x_1264_; double v___x_1265_; uint8_t v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1274_; 
v___x_1264_ = lean_box(0);
v___x_1265_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg___closed__0);
v___x_1266_ = 0;
v___x_1267_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg___closed__1));
v___x_1268_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1268_, 0, v_cls_1233_);
lean_ctor_set(v___x_1268_, 1, v___x_1264_);
lean_ctor_set(v___x_1268_, 2, v___x_1267_);
lean_ctor_set_float(v___x_1268_, sizeof(void*)*3, v___x_1265_);
lean_ctor_set_float(v___x_1268_, sizeof(void*)*3 + 8, v___x_1265_);
lean_ctor_set_uint8(v___x_1268_, sizeof(void*)*3 + 16, v___x_1266_);
v___x_1269_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg___closed__2));
v___x_1270_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1270_, 0, v___x_1268_);
lean_ctor_set(v___x_1270_, 1, v_a_1242_);
lean_ctor_set(v___x_1270_, 2, v___x_1269_);
lean_inc(v_ref_1240_);
v___x_1271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1271_, 0, v_ref_1240_);
lean_ctor_set(v___x_1271_, 1, v___x_1270_);
v___x_1272_ = l_Lean_PersistentArray_push___redArg(v_traces_1260_, v___x_1271_);
if (v_isShared_1263_ == 0)
{
lean_ctor_set(v___x_1262_, 0, v___x_1272_);
v___x_1274_ = v___x_1262_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v___x_1272_);
lean_ctor_set_uint64(v_reuseFailAlloc_1283_, sizeof(void*)*1, v_tid_1259_);
v___x_1274_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1273_;
}
v_reusejp_1273_:
{
lean_object* v___x_1276_; 
if (v_isShared_1258_ == 0)
{
lean_ctor_set(v___x_1257_, 4, v___x_1274_);
v___x_1276_ = v___x_1257_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_env_1248_);
lean_ctor_set(v_reuseFailAlloc_1282_, 1, v_nextMacroScope_1249_);
lean_ctor_set(v_reuseFailAlloc_1282_, 2, v_ngen_1250_);
lean_ctor_set(v_reuseFailAlloc_1282_, 3, v_auxDeclNGen_1251_);
lean_ctor_set(v_reuseFailAlloc_1282_, 4, v___x_1274_);
lean_ctor_set(v_reuseFailAlloc_1282_, 5, v_cache_1252_);
lean_ctor_set(v_reuseFailAlloc_1282_, 6, v_messages_1253_);
lean_ctor_set(v_reuseFailAlloc_1282_, 7, v_infoState_1254_);
lean_ctor_set(v_reuseFailAlloc_1282_, 8, v_snapshotTasks_1255_);
v___x_1276_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1280_; 
v___x_1277_ = lean_st_ref_set(v___y_1238_, v___x_1276_);
v___x_1278_ = lean_box(0);
if (v_isShared_1245_ == 0)
{
lean_ctor_set(v___x_1244_, 0, v___x_1278_);
v___x_1280_ = v___x_1244_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v___x_1278_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg___boxed(lean_object* v_cls_1287_, lean_object* v_msg_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_){
_start:
{
lean_object* v_res_1294_; 
v_res_1294_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg(v_cls_1287_, v_msg_1288_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_);
lean_dec(v___y_1292_);
lean_dec_ref(v___y_1291_);
lean_dec(v___y_1290_);
lean_dec_ref(v___y_1289_);
return v_res_1294_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35_spec__39___redArg(lean_object* v_keys_1295_, lean_object* v_i_1296_, lean_object* v_k_1297_){
_start:
{
lean_object* v___x_1298_; uint8_t v___x_1299_; 
v___x_1298_ = lean_array_get_size(v_keys_1295_);
v___x_1299_ = lean_nat_dec_lt(v_i_1296_, v___x_1298_);
if (v___x_1299_ == 0)
{
lean_dec(v_i_1296_);
return v___x_1299_;
}
else
{
lean_object* v_k_x27_1300_; uint8_t v___x_1301_; 
v_k_x27_1300_ = lean_array_fget_borrowed(v_keys_1295_, v_i_1296_);
v___x_1301_ = l_Lean_instBEqExtraModUse_beq(v_k_1297_, v_k_x27_1300_);
if (v___x_1301_ == 0)
{
lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1302_ = lean_unsigned_to_nat(1u);
v___x_1303_ = lean_nat_add(v_i_1296_, v___x_1302_);
lean_dec(v_i_1296_);
v_i_1296_ = v___x_1303_;
goto _start;
}
else
{
lean_dec(v_i_1296_);
return v___x_1301_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35_spec__39___redArg___boxed(lean_object* v_keys_1305_, lean_object* v_i_1306_, lean_object* v_k_1307_){
_start:
{
uint8_t v_res_1308_; lean_object* v_r_1309_; 
v_res_1308_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35_spec__39___redArg(v_keys_1305_, v_i_1306_, v_k_1307_);
lean_dec_ref(v_k_1307_);
lean_dec_ref(v_keys_1305_);
v_r_1309_ = lean_box(v_res_1308_);
return v_r_1309_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35___redArg___closed__0(void){
_start:
{
size_t v___x_1310_; size_t v___x_1311_; size_t v___x_1312_; 
v___x_1310_ = ((size_t)5ULL);
v___x_1311_ = ((size_t)1ULL);
v___x_1312_ = lean_usize_shift_left(v___x_1311_, v___x_1310_);
return v___x_1312_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35___redArg___closed__1(void){
_start:
{
size_t v___x_1313_; size_t v___x_1314_; size_t v___x_1315_; 
v___x_1313_ = ((size_t)1ULL);
v___x_1314_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35___redArg___closed__0, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35___redArg___closed__0);
v___x_1315_ = lean_usize_sub(v___x_1314_, v___x_1313_);
return v___x_1315_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35___redArg(lean_object* v_x_1316_, size_t v_x_1317_, lean_object* v_x_1318_){
_start:
{
if (lean_obj_tag(v_x_1316_) == 0)
{
lean_object* v_es_1319_; lean_object* v___x_1320_; size_t v___x_1321_; size_t v___x_1322_; size_t v___x_1323_; lean_object* v_j_1324_; lean_object* v___x_1325_; 
v_es_1319_ = lean_ctor_get(v_x_1316_, 0);
v___x_1320_ = lean_box(2);
v___x_1321_ = ((size_t)5ULL);
v___x_1322_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35___redArg___closed__1);
v___x_1323_ = lean_usize_land(v_x_1317_, v___x_1322_);
v_j_1324_ = lean_usize_to_nat(v___x_1323_);
v___x_1325_ = lean_array_get_borrowed(v___x_1320_, v_es_1319_, v_j_1324_);
lean_dec(v_j_1324_);
switch(lean_obj_tag(v___x_1325_))
{
case 0:
{
lean_object* v_key_1326_; uint8_t v___x_1327_; 
v_key_1326_ = lean_ctor_get(v___x_1325_, 0);
v___x_1327_ = l_Lean_instBEqExtraModUse_beq(v_x_1318_, v_key_1326_);
return v___x_1327_;
}
case 1:
{
lean_object* v_node_1328_; size_t v___x_1329_; 
v_node_1328_ = lean_ctor_get(v___x_1325_, 0);
v___x_1329_ = lean_usize_shift_right(v_x_1317_, v___x_1321_);
v_x_1316_ = v_node_1328_;
v_x_1317_ = v___x_1329_;
goto _start;
}
default: 
{
uint8_t v___x_1331_; 
v___x_1331_ = 0;
return v___x_1331_;
}
}
}
else
{
lean_object* v_ks_1332_; lean_object* v___x_1333_; uint8_t v___x_1334_; 
v_ks_1332_ = lean_ctor_get(v_x_1316_, 0);
v___x_1333_ = lean_unsigned_to_nat(0u);
v___x_1334_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35_spec__39___redArg(v_ks_1332_, v___x_1333_, v_x_1318_);
return v___x_1334_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35___redArg___boxed(lean_object* v_x_1335_, lean_object* v_x_1336_, lean_object* v_x_1337_){
_start:
{
size_t v_x_317444__boxed_1338_; uint8_t v_res_1339_; lean_object* v_r_1340_; 
v_x_317444__boxed_1338_ = lean_unbox_usize(v_x_1336_);
lean_dec(v_x_1336_);
v_res_1339_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35___redArg(v_x_1335_, v_x_317444__boxed_1338_, v_x_1337_);
lean_dec_ref(v_x_1337_);
lean_dec_ref(v_x_1335_);
v_r_1340_ = lean_box(v_res_1339_);
return v_r_1340_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29___redArg(lean_object* v_x_1341_, lean_object* v_x_1342_){
_start:
{
uint64_t v___x_1343_; size_t v___x_1344_; uint8_t v___x_1345_; 
v___x_1343_ = l_Lean_instHashableExtraModUse_hash(v_x_1342_);
v___x_1344_ = lean_uint64_to_usize(v___x_1343_);
v___x_1345_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35___redArg(v_x_1341_, v___x_1344_, v_x_1342_);
return v___x_1345_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29___redArg___boxed(lean_object* v_x_1346_, lean_object* v_x_1347_){
_start:
{
uint8_t v_res_1348_; lean_object* v_r_1349_; 
v_res_1348_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29___redArg(v_x_1346_, v_x_1347_);
lean_dec_ref(v_x_1347_);
lean_dec_ref(v_x_1346_);
v_r_1349_ = lean_box(v_res_1348_);
return v_r_1349_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__2(void){
_start:
{
lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1352_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__1));
v___x_1353_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__0));
v___x_1354_ = l_Lean_PersistentHashMap_empty(lean_box(0), lean_box(0), v___x_1353_, v___x_1352_);
return v___x_1354_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__3(void){
_start:
{
lean_object* v___x_1355_; 
v___x_1355_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1355_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__4(void){
_start:
{
lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1356_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__3);
v___x_1357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1357_, 0, v___x_1356_);
return v___x_1357_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__5(void){
_start:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; 
v___x_1358_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__4);
v___x_1359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1359_, 0, v___x_1358_);
lean_ctor_set(v___x_1359_, 1, v___x_1358_);
return v___x_1359_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__6(void){
_start:
{
lean_object* v___x_1360_; lean_object* v___x_1361_; 
v___x_1360_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__4);
v___x_1361_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1360_);
lean_ctor_set(v___x_1361_, 1, v___x_1360_);
lean_ctor_set(v___x_1361_, 2, v___x_1360_);
lean_ctor_set(v___x_1361_, 3, v___x_1360_);
lean_ctor_set(v___x_1361_, 4, v___x_1360_);
lean_ctor_set(v___x_1361_, 5, v___x_1360_);
return v___x_1361_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__10(void){
_start:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; 
v___x_1366_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__9));
v___x_1367_ = l_Lean_stringToMessageData(v___x_1366_);
return v___x_1367_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__12(void){
_start:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; 
v___x_1369_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__11));
v___x_1370_ = l_Lean_stringToMessageData(v___x_1369_);
return v___x_1370_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__13(void){
_start:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___x_1371_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg___closed__1));
v___x_1372_ = l_Lean_stringToMessageData(v___x_1371_);
return v___x_1372_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__16(void){
_start:
{
lean_object* v_cls_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; 
v_cls_1376_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__8));
v___x_1377_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__15));
v___x_1378_ = l_Lean_Name_append(v___x_1377_, v_cls_1376_);
return v___x_1378_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__18(void){
_start:
{
lean_object* v___x_1380_; lean_object* v___x_1381_; 
v___x_1380_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__17));
v___x_1381_ = l_Lean_stringToMessageData(v___x_1380_);
return v___x_1381_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__20(void){
_start:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1383_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__19));
v___x_1384_ = l_Lean_stringToMessageData(v___x_1383_);
return v___x_1384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9(lean_object* v_mod_1389_, uint8_t v_isMeta_1390_, lean_object* v_hint_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_){
_start:
{
lean_object* v___x_1399_; lean_object* v_env_1400_; uint8_t v_isExporting_1401_; lean_object* v___x_1402_; lean_object* v_env_1403_; lean_object* v___x_1404_; lean_object* v_entry_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___y_1410_; lean_object* v___y_1411_; lean_object* v___x_1451_; uint8_t v___x_1452_; 
v___x_1399_ = lean_st_ref_get(v___y_1397_);
v_env_1400_ = lean_ctor_get(v___x_1399_, 0);
lean_inc_ref(v_env_1400_);
lean_dec(v___x_1399_);
v_isExporting_1401_ = lean_ctor_get_uint8(v_env_1400_, sizeof(void*)*8);
lean_dec_ref(v_env_1400_);
v___x_1402_ = lean_st_ref_get(v___y_1397_);
v_env_1403_ = lean_ctor_get(v___x_1402_, 0);
lean_inc_ref(v_env_1403_);
lean_dec(v___x_1402_);
v___x_1404_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__2);
lean_inc(v_mod_1389_);
v_entry_1405_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_1405_, 0, v_mod_1389_);
lean_ctor_set_uint8(v_entry_1405_, sizeof(void*)*1, v_isExporting_1401_);
lean_ctor_set_uint8(v_entry_1405_, sizeof(void*)*1 + 1, v_isMeta_1390_);
v___x_1406_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_1407_ = lean_box(1);
v___x_1408_ = lean_box(0);
v___x_1451_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1404_, v___x_1406_, v_env_1403_, v___x_1407_, v___x_1408_);
v___x_1452_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29___redArg(v___x_1451_, v_entry_1405_);
lean_dec(v___x_1451_);
if (v___x_1452_ == 0)
{
lean_object* v_options_1453_; uint8_t v_hasTrace_1454_; 
v_options_1453_ = lean_ctor_get(v___y_1396_, 2);
v_hasTrace_1454_ = lean_ctor_get_uint8(v_options_1453_, sizeof(void*)*1);
if (v_hasTrace_1454_ == 0)
{
lean_dec(v_hint_1391_);
lean_dec(v_mod_1389_);
v___y_1410_ = v___y_1395_;
v___y_1411_ = v___y_1397_;
goto v___jp_1409_;
}
else
{
lean_object* v_inheritedTraceOptions_1455_; lean_object* v_cls_1456_; lean_object* v___y_1458_; lean_object* v___y_1459_; lean_object* v___y_1463_; lean_object* v___y_1464_; lean_object* v___x_1476_; uint8_t v___x_1477_; 
v_inheritedTraceOptions_1455_ = lean_ctor_get(v___y_1396_, 13);
v_cls_1456_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__8));
v___x_1476_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__16);
v___x_1477_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1455_, v_options_1453_, v___x_1476_);
if (v___x_1477_ == 0)
{
lean_dec(v_hint_1391_);
lean_dec(v_mod_1389_);
v___y_1410_ = v___y_1395_;
v___y_1411_ = v___y_1397_;
goto v___jp_1409_;
}
else
{
lean_object* v___x_1478_; lean_object* v___y_1480_; 
v___x_1478_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__18, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__18_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__18);
if (v_isExporting_1401_ == 0)
{
lean_object* v___x_1487_; 
v___x_1487_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__23));
v___y_1480_ = v___x_1487_;
goto v___jp_1479_;
}
else
{
lean_object* v___x_1488_; 
v___x_1488_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__24));
v___y_1480_ = v___x_1488_;
goto v___jp_1479_;
}
v___jp_1479_:
{
lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; 
lean_inc_ref(v___y_1480_);
v___x_1481_ = l_Lean_stringToMessageData(v___y_1480_);
v___x_1482_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1482_, 0, v___x_1478_);
lean_ctor_set(v___x_1482_, 1, v___x_1481_);
v___x_1483_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__20, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__20_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__20);
v___x_1484_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1484_, 0, v___x_1482_);
lean_ctor_set(v___x_1484_, 1, v___x_1483_);
if (v_isMeta_1390_ == 0)
{
lean_object* v___x_1485_; 
v___x_1485_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__21));
v___y_1463_ = v___x_1484_;
v___y_1464_ = v___x_1485_;
goto v___jp_1462_;
}
else
{
lean_object* v___x_1486_; 
v___x_1486_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__22));
v___y_1463_ = v___x_1484_;
v___y_1464_ = v___x_1486_;
goto v___jp_1462_;
}
}
}
v___jp_1457_:
{
lean_object* v___x_1460_; lean_object* v___x_1461_; 
v___x_1460_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1460_, 0, v___y_1458_);
lean_ctor_set(v___x_1460_, 1, v___y_1459_);
v___x_1461_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg(v_cls_1456_, v___x_1460_, v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_);
if (lean_obj_tag(v___x_1461_) == 0)
{
lean_dec_ref_known(v___x_1461_, 1);
v___y_1410_ = v___y_1395_;
v___y_1411_ = v___y_1397_;
goto v___jp_1409_;
}
else
{
lean_dec_ref_known(v_entry_1405_, 1);
return v___x_1461_;
}
}
v___jp_1462_:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; uint8_t v___x_1471_; 
lean_inc_ref(v___y_1464_);
v___x_1465_ = l_Lean_stringToMessageData(v___y_1464_);
v___x_1466_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1466_, 0, v___y_1463_);
lean_ctor_set(v___x_1466_, 1, v___x_1465_);
v___x_1467_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__10);
v___x_1468_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1468_, 0, v___x_1466_);
lean_ctor_set(v___x_1468_, 1, v___x_1467_);
v___x_1469_ = l_Lean_MessageData_ofName(v_mod_1389_);
v___x_1470_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1470_, 0, v___x_1468_);
lean_ctor_set(v___x_1470_, 1, v___x_1469_);
v___x_1471_ = l_Lean_Name_isAnonymous(v_hint_1391_);
if (v___x_1471_ == 0)
{
lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; 
v___x_1472_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__12);
v___x_1473_ = l_Lean_MessageData_ofName(v_hint_1391_);
v___x_1474_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1474_, 0, v___x_1472_);
lean_ctor_set(v___x_1474_, 1, v___x_1473_);
v___y_1458_ = v___x_1470_;
v___y_1459_ = v___x_1474_;
goto v___jp_1457_;
}
else
{
lean_object* v___x_1475_; 
lean_dec(v_hint_1391_);
v___x_1475_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__13);
v___y_1458_ = v___x_1470_;
v___y_1459_ = v___x_1475_;
goto v___jp_1457_;
}
}
}
}
else
{
lean_object* v___x_1489_; lean_object* v___x_1490_; 
lean_dec_ref_known(v_entry_1405_, 1);
lean_dec(v_hint_1391_);
lean_dec(v_mod_1389_);
v___x_1489_ = lean_box(0);
v___x_1490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1490_, 0, v___x_1489_);
return v___x_1490_;
}
v___jp_1409_:
{
lean_object* v___x_1412_; lean_object* v_toEnvExtension_1413_; lean_object* v_env_1414_; lean_object* v_nextMacroScope_1415_; lean_object* v_ngen_1416_; lean_object* v_auxDeclNGen_1417_; lean_object* v_traceState_1418_; lean_object* v_messages_1419_; lean_object* v_infoState_1420_; lean_object* v_snapshotTasks_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1449_; 
v___x_1412_ = lean_st_ref_take(v___y_1411_);
v_toEnvExtension_1413_ = lean_ctor_get(v___x_1406_, 0);
v_env_1414_ = lean_ctor_get(v___x_1412_, 0);
v_nextMacroScope_1415_ = lean_ctor_get(v___x_1412_, 1);
v_ngen_1416_ = lean_ctor_get(v___x_1412_, 2);
v_auxDeclNGen_1417_ = lean_ctor_get(v___x_1412_, 3);
v_traceState_1418_ = lean_ctor_get(v___x_1412_, 4);
v_messages_1419_ = lean_ctor_get(v___x_1412_, 6);
v_infoState_1420_ = lean_ctor_get(v___x_1412_, 7);
v_snapshotTasks_1421_ = lean_ctor_get(v___x_1412_, 8);
v_isSharedCheck_1449_ = !lean_is_exclusive(v___x_1412_);
if (v_isSharedCheck_1449_ == 0)
{
lean_object* v_unused_1450_; 
v_unused_1450_ = lean_ctor_get(v___x_1412_, 5);
lean_dec(v_unused_1450_);
v___x_1423_ = v___x_1412_;
v_isShared_1424_ = v_isSharedCheck_1449_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_snapshotTasks_1421_);
lean_inc(v_infoState_1420_);
lean_inc(v_messages_1419_);
lean_inc(v_traceState_1418_);
lean_inc(v_auxDeclNGen_1417_);
lean_inc(v_ngen_1416_);
lean_inc(v_nextMacroScope_1415_);
lean_inc(v_env_1414_);
lean_dec(v___x_1412_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1449_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
lean_object* v_asyncMode_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1429_; 
v_asyncMode_1425_ = lean_ctor_get(v_toEnvExtension_1413_, 2);
v___x_1426_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_1406_, v_env_1414_, v_entry_1405_, v_asyncMode_1425_, v___x_1408_);
v___x_1427_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__5);
if (v_isShared_1424_ == 0)
{
lean_ctor_set(v___x_1423_, 5, v___x_1427_);
lean_ctor_set(v___x_1423_, 0, v___x_1426_);
v___x_1429_ = v___x_1423_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v___x_1426_);
lean_ctor_set(v_reuseFailAlloc_1448_, 1, v_nextMacroScope_1415_);
lean_ctor_set(v_reuseFailAlloc_1448_, 2, v_ngen_1416_);
lean_ctor_set(v_reuseFailAlloc_1448_, 3, v_auxDeclNGen_1417_);
lean_ctor_set(v_reuseFailAlloc_1448_, 4, v_traceState_1418_);
lean_ctor_set(v_reuseFailAlloc_1448_, 5, v___x_1427_);
lean_ctor_set(v_reuseFailAlloc_1448_, 6, v_messages_1419_);
lean_ctor_set(v_reuseFailAlloc_1448_, 7, v_infoState_1420_);
lean_ctor_set(v_reuseFailAlloc_1448_, 8, v_snapshotTasks_1421_);
v___x_1429_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v_mctx_1432_; lean_object* v_zetaDeltaFVarIds_1433_; lean_object* v_postponed_1434_; lean_object* v_diag_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1446_; 
v___x_1430_ = lean_st_ref_set(v___y_1411_, v___x_1429_);
v___x_1431_ = lean_st_ref_take(v___y_1410_);
v_mctx_1432_ = lean_ctor_get(v___x_1431_, 0);
v_zetaDeltaFVarIds_1433_ = lean_ctor_get(v___x_1431_, 2);
v_postponed_1434_ = lean_ctor_get(v___x_1431_, 3);
v_diag_1435_ = lean_ctor_get(v___x_1431_, 4);
v_isSharedCheck_1446_ = !lean_is_exclusive(v___x_1431_);
if (v_isSharedCheck_1446_ == 0)
{
lean_object* v_unused_1447_; 
v_unused_1447_ = lean_ctor_get(v___x_1431_, 1);
lean_dec(v_unused_1447_);
v___x_1437_ = v___x_1431_;
v_isShared_1438_ = v_isSharedCheck_1446_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_diag_1435_);
lean_inc(v_postponed_1434_);
lean_inc(v_zetaDeltaFVarIds_1433_);
lean_inc(v_mctx_1432_);
lean_dec(v___x_1431_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1446_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1439_; lean_object* v___x_1441_; 
v___x_1439_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__6);
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 1, v___x_1439_);
v___x_1441_ = v___x_1437_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v_mctx_1432_);
lean_ctor_set(v_reuseFailAlloc_1445_, 1, v___x_1439_);
lean_ctor_set(v_reuseFailAlloc_1445_, 2, v_zetaDeltaFVarIds_1433_);
lean_ctor_set(v_reuseFailAlloc_1445_, 3, v_postponed_1434_);
lean_ctor_set(v_reuseFailAlloc_1445_, 4, v_diag_1435_);
v___x_1441_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; 
v___x_1442_ = lean_st_ref_set(v___y_1410_, v___x_1441_);
v___x_1443_ = lean_box(0);
v___x_1444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1443_);
return v___x_1444_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___boxed(lean_object* v_mod_1491_, lean_object* v_isMeta_1492_, lean_object* v_hint_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_){
_start:
{
uint8_t v_isMeta_boxed_1501_; lean_object* v_res_1502_; 
v_isMeta_boxed_1501_ = lean_unbox(v_isMeta_1492_);
v_res_1502_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9(v_mod_1491_, v_isMeta_boxed_1501_, v_hint_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_);
lean_dec(v___y_1499_);
lean_dec_ref(v___y_1498_);
lean_dec(v___y_1497_);
lean_dec_ref(v___y_1496_);
lean_dec(v___y_1495_);
lean_dec_ref(v___y_1494_);
return v_res_1502_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11_spec__32___redArg(lean_object* v_a_1503_, lean_object* v_x_1504_){
_start:
{
if (lean_obj_tag(v_x_1504_) == 0)
{
lean_object* v___x_1505_; 
v___x_1505_ = lean_box(0);
return v___x_1505_;
}
else
{
lean_object* v_key_1506_; lean_object* v_value_1507_; lean_object* v_tail_1508_; uint8_t v___x_1509_; 
v_key_1506_ = lean_ctor_get(v_x_1504_, 0);
v_value_1507_ = lean_ctor_get(v_x_1504_, 1);
v_tail_1508_ = lean_ctor_get(v_x_1504_, 2);
v___x_1509_ = lean_name_eq(v_key_1506_, v_a_1503_);
if (v___x_1509_ == 0)
{
v_x_1504_ = v_tail_1508_;
goto _start;
}
else
{
lean_object* v___x_1511_; 
lean_inc(v_value_1507_);
v___x_1511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1511_, 0, v_value_1507_);
return v___x_1511_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11_spec__32___redArg___boxed(lean_object* v_a_1512_, lean_object* v_x_1513_){
_start:
{
lean_object* v_res_1514_; 
v_res_1514_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11_spec__32___redArg(v_a_1512_, v_x_1513_);
lean_dec(v_x_1513_);
lean_dec(v_a_1512_);
return v_res_1514_;
}
}
static uint64_t _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11___redArg___closed__0(void){
_start:
{
lean_object* v___x_1515_; uint64_t v___x_1516_; 
v___x_1515_ = lean_unsigned_to_nat(1723u);
v___x_1516_ = lean_uint64_of_nat(v___x_1515_);
return v___x_1516_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11___redArg(lean_object* v_m_1517_, lean_object* v_a_1518_){
_start:
{
lean_object* v_buckets_1519_; lean_object* v___x_1520_; uint64_t v___y_1522_; 
v_buckets_1519_ = lean_ctor_get(v_m_1517_, 1);
v___x_1520_ = lean_array_get_size(v_buckets_1519_);
if (lean_obj_tag(v_a_1518_) == 0)
{
uint64_t v___x_1536_; 
v___x_1536_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11___redArg___closed__0);
v___y_1522_ = v___x_1536_;
goto v___jp_1521_;
}
else
{
uint64_t v_hash_1537_; 
v_hash_1537_ = lean_ctor_get_uint64(v_a_1518_, sizeof(void*)*2);
v___y_1522_ = v_hash_1537_;
goto v___jp_1521_;
}
v___jp_1521_:
{
uint64_t v___x_1523_; uint64_t v___x_1524_; uint64_t v_fold_1525_; uint64_t v___x_1526_; uint64_t v___x_1527_; uint64_t v___x_1528_; size_t v___x_1529_; size_t v___x_1530_; size_t v___x_1531_; size_t v___x_1532_; size_t v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; 
v___x_1523_ = 32ULL;
v___x_1524_ = lean_uint64_shift_right(v___y_1522_, v___x_1523_);
v_fold_1525_ = lean_uint64_xor(v___y_1522_, v___x_1524_);
v___x_1526_ = 16ULL;
v___x_1527_ = lean_uint64_shift_right(v_fold_1525_, v___x_1526_);
v___x_1528_ = lean_uint64_xor(v_fold_1525_, v___x_1527_);
v___x_1529_ = lean_uint64_to_usize(v___x_1528_);
v___x_1530_ = lean_usize_of_nat(v___x_1520_);
v___x_1531_ = ((size_t)1ULL);
v___x_1532_ = lean_usize_sub(v___x_1530_, v___x_1531_);
v___x_1533_ = lean_usize_land(v___x_1529_, v___x_1532_);
v___x_1534_ = lean_array_uget_borrowed(v_buckets_1519_, v___x_1533_);
v___x_1535_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11_spec__32___redArg(v_a_1518_, v___x_1534_);
return v___x_1535_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11___redArg___boxed(lean_object* v_m_1538_, lean_object* v_a_1539_){
_start:
{
lean_object* v_res_1540_; 
v_res_1540_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11___redArg(v_m_1538_, v_a_1539_);
lean_dec(v_a_1539_);
lean_dec_ref(v_m_1538_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__10(lean_object* v___x_1541_, lean_object* v_declName_1542_, lean_object* v_as_1543_, size_t v_sz_1544_, size_t v_i_1545_, lean_object* v_b_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_){
_start:
{
uint8_t v___x_1554_; 
v___x_1554_ = lean_usize_dec_lt(v_i_1545_, v_sz_1544_);
if (v___x_1554_ == 0)
{
lean_object* v___x_1555_; 
lean_dec(v_declName_1542_);
v___x_1555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1555_, 0, v_b_1546_);
return v___x_1555_;
}
else
{
lean_object* v___x_1556_; lean_object* v_modules_1557_; lean_object* v___x_1558_; lean_object* v_a_1559_; lean_object* v___x_1560_; lean_object* v_toImport_1561_; lean_object* v_module_1562_; uint8_t v___x_1563_; lean_object* v___x_1564_; 
v___x_1556_ = l_Lean_Environment_header(v___x_1541_);
v_modules_1557_ = lean_ctor_get(v___x_1556_, 3);
lean_inc_ref(v_modules_1557_);
lean_dec_ref(v___x_1556_);
v___x_1558_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_1559_ = lean_array_uget_borrowed(v_as_1543_, v_i_1545_);
v___x_1560_ = lean_array_get(v___x_1558_, v_modules_1557_, v_a_1559_);
lean_dec_ref(v_modules_1557_);
v_toImport_1561_ = lean_ctor_get(v___x_1560_, 0);
lean_inc_ref(v_toImport_1561_);
lean_dec(v___x_1560_);
v_module_1562_ = lean_ctor_get(v_toImport_1561_, 0);
lean_inc(v_module_1562_);
lean_dec_ref(v_toImport_1561_);
v___x_1563_ = 0;
lean_inc(v_declName_1542_);
v___x_1564_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9(v_module_1562_, v___x_1563_, v_declName_1542_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
if (lean_obj_tag(v___x_1564_) == 0)
{
lean_object* v___x_1565_; size_t v___x_1566_; size_t v___x_1567_; 
lean_dec_ref_known(v___x_1564_, 1);
v___x_1565_ = lean_box(0);
v___x_1566_ = ((size_t)1ULL);
v___x_1567_ = lean_usize_add(v_i_1545_, v___x_1566_);
v_i_1545_ = v___x_1567_;
v_b_1546_ = v___x_1565_;
goto _start;
}
else
{
lean_dec(v_declName_1542_);
return v___x_1564_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__10___boxed(lean_object* v___x_1569_, lean_object* v_declName_1570_, lean_object* v_as_1571_, lean_object* v_sz_1572_, lean_object* v_i_1573_, lean_object* v_b_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_){
_start:
{
size_t v_sz_boxed_1582_; size_t v_i_boxed_1583_; lean_object* v_res_1584_; 
v_sz_boxed_1582_ = lean_unbox_usize(v_sz_1572_);
lean_dec(v_sz_1572_);
v_i_boxed_1583_ = lean_unbox_usize(v_i_1573_);
lean_dec(v_i_1573_);
v_res_1584_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__10(v___x_1569_, v_declName_1570_, v_as_1571_, v_sz_boxed_1582_, v_i_boxed_1583_, v_b_1574_, v___y_1575_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_, v___y_1580_);
lean_dec(v___y_1580_);
lean_dec_ref(v___y_1579_);
lean_dec(v___y_1578_);
lean_dec_ref(v___y_1577_);
lean_dec(v___y_1576_);
lean_dec_ref(v___y_1575_);
lean_dec_ref(v_as_1571_);
lean_dec_ref(v___x_1569_);
return v_res_1584_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3___closed__2(void){
_start:
{
lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; 
v___x_1587_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3___closed__1));
v___x_1588_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3___closed__0));
v___x_1589_ = l_Std_HashMap_instInhabited(lean_box(0), lean_box(0), v___x_1588_, v___x_1587_);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3(lean_object* v_declName_1592_, uint8_t v_isMeta_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_){
_start:
{
lean_object* v___x_1601_; lean_object* v_env_1605_; lean_object* v___y_1607_; lean_object* v___x_1620_; 
v___x_1601_ = lean_st_ref_get(v___y_1599_);
v_env_1605_ = lean_ctor_get(v___x_1601_, 0);
lean_inc_ref(v_env_1605_);
lean_dec(v___x_1601_);
v___x_1620_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1605_, v_declName_1592_);
if (lean_obj_tag(v___x_1620_) == 0)
{
lean_dec_ref(v_env_1605_);
lean_dec(v_declName_1592_);
goto v___jp_1602_;
}
else
{
lean_object* v_val_1621_; lean_object* v___x_1622_; lean_object* v_modules_1623_; lean_object* v___x_1624_; uint8_t v___x_1625_; 
v_val_1621_ = lean_ctor_get(v___x_1620_, 0);
lean_inc(v_val_1621_);
lean_dec_ref_known(v___x_1620_, 1);
v___x_1622_ = l_Lean_Environment_header(v_env_1605_);
v_modules_1623_ = lean_ctor_get(v___x_1622_, 3);
lean_inc_ref(v_modules_1623_);
lean_dec_ref(v___x_1622_);
v___x_1624_ = lean_array_get_size(v_modules_1623_);
v___x_1625_ = lean_nat_dec_lt(v_val_1621_, v___x_1624_);
if (v___x_1625_ == 0)
{
lean_dec_ref(v_modules_1623_);
lean_dec(v_val_1621_);
lean_dec_ref(v_env_1605_);
lean_dec(v_declName_1592_);
goto v___jp_1602_;
}
else
{
lean_object* v___x_1626_; lean_object* v_env_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; uint8_t v___y_1631_; 
v___x_1626_ = lean_st_ref_get(v___y_1599_);
v_env_1627_ = lean_ctor_get(v___x_1626_, 0);
lean_inc_ref(v_env_1627_);
lean_dec(v___x_1626_);
v___x_1628_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3___closed__2, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3___closed__2_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3___closed__2);
v___x_1629_ = lean_array_fget(v_modules_1623_, v_val_1621_);
lean_dec(v_val_1621_);
lean_dec_ref(v_modules_1623_);
if (v_isMeta_1593_ == 0)
{
lean_dec_ref(v_env_1627_);
v___y_1631_ = v_isMeta_1593_;
goto v___jp_1630_;
}
else
{
uint8_t v___x_1642_; 
lean_inc(v_declName_1592_);
v___x_1642_ = l_Lean_isMarkedMeta(v_env_1627_, v_declName_1592_);
if (v___x_1642_ == 0)
{
v___y_1631_ = v_isMeta_1593_;
goto v___jp_1630_;
}
else
{
uint8_t v___x_1643_; 
v___x_1643_ = 0;
v___y_1631_ = v___x_1643_;
goto v___jp_1630_;
}
}
v___jp_1630_:
{
lean_object* v_toImport_1632_; lean_object* v_module_1633_; lean_object* v___x_1634_; 
v_toImport_1632_ = lean_ctor_get(v___x_1629_, 0);
lean_inc_ref(v_toImport_1632_);
lean_dec(v___x_1629_);
v_module_1633_ = lean_ctor_get(v_toImport_1632_, 0);
lean_inc(v_module_1633_);
lean_dec_ref(v_toImport_1632_);
lean_inc(v_declName_1592_);
v___x_1634_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9(v_module_1633_, v___y_1631_, v_declName_1592_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_);
if (lean_obj_tag(v___x_1634_) == 0)
{
lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; 
lean_dec_ref_known(v___x_1634_, 1);
v___x_1635_ = l_Lean_indirectModUseExt;
v___x_1636_ = lean_box(1);
v___x_1637_ = lean_box(0);
lean_inc_ref(v_env_1605_);
v___x_1638_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1628_, v___x_1635_, v_env_1605_, v___x_1636_, v___x_1637_);
v___x_1639_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11___redArg(v___x_1638_, v_declName_1592_);
lean_dec(v___x_1638_);
if (lean_obj_tag(v___x_1639_) == 0)
{
lean_object* v___x_1640_; 
v___x_1640_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3___closed__3));
v___y_1607_ = v___x_1640_;
goto v___jp_1606_;
}
else
{
lean_object* v_val_1641_; 
v_val_1641_ = lean_ctor_get(v___x_1639_, 0);
lean_inc(v_val_1641_);
lean_dec_ref_known(v___x_1639_, 1);
v___y_1607_ = v_val_1641_;
goto v___jp_1606_;
}
}
else
{
lean_dec_ref(v_env_1605_);
lean_dec(v_declName_1592_);
return v___x_1634_;
}
}
}
}
v___jp_1602_:
{
lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___x_1603_ = lean_box(0);
v___x_1604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1604_, 0, v___x_1603_);
return v___x_1604_;
}
v___jp_1606_:
{
lean_object* v___x_1608_; size_t v_sz_1609_; size_t v___x_1610_; lean_object* v___x_1611_; 
v___x_1608_ = lean_box(0);
v_sz_1609_ = lean_array_size(v___y_1607_);
v___x_1610_ = ((size_t)0ULL);
v___x_1611_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__10(v_env_1605_, v_declName_1592_, v___y_1607_, v_sz_1609_, v___x_1610_, v___x_1608_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_);
lean_dec_ref(v___y_1607_);
lean_dec_ref(v_env_1605_);
if (lean_obj_tag(v___x_1611_) == 0)
{
lean_object* v___x_1613_; uint8_t v_isShared_1614_; uint8_t v_isSharedCheck_1618_; 
v_isSharedCheck_1618_ = !lean_is_exclusive(v___x_1611_);
if (v_isSharedCheck_1618_ == 0)
{
lean_object* v_unused_1619_; 
v_unused_1619_ = lean_ctor_get(v___x_1611_, 0);
lean_dec(v_unused_1619_);
v___x_1613_ = v___x_1611_;
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
else
{
lean_dec(v___x_1611_);
v___x_1613_ = lean_box(0);
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
v_resetjp_1612_:
{
lean_object* v___x_1616_; 
if (v_isShared_1614_ == 0)
{
lean_ctor_set(v___x_1613_, 0, v___x_1608_);
v___x_1616_ = v___x_1613_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v___x_1608_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
}
else
{
return v___x_1611_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3___boxed(lean_object* v_declName_1644_, lean_object* v_isMeta_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_){
_start:
{
uint8_t v_isMeta_boxed_1653_; lean_object* v_res_1654_; 
v_isMeta_boxed_1653_ = lean_unbox(v_isMeta_1645_);
v_res_1654_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3(v_declName_1644_, v_isMeta_boxed_1653_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_);
lean_dec(v___y_1651_);
lean_dec_ref(v___y_1650_);
lean_dec(v___y_1649_);
lean_dec_ref(v___y_1648_);
lean_dec(v___y_1647_);
lean_dec_ref(v___y_1646_);
return v_res_1654_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__4___redArg(lean_object* v_as_x27_1655_, lean_object* v_b_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_){
_start:
{
if (lean_obj_tag(v_as_x27_1655_) == 0)
{
lean_object* v___x_1664_; 
v___x_1664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1664_, 0, v_b_1656_);
return v___x_1664_;
}
else
{
lean_object* v_head_1665_; lean_object* v_tail_1666_; uint8_t v___x_1667_; lean_object* v___x_1668_; 
v_head_1665_ = lean_ctor_get(v_as_x27_1655_, 0);
v_tail_1666_ = lean_ctor_get(v_as_x27_1655_, 1);
v___x_1667_ = 1;
lean_inc(v_head_1665_);
v___x_1668_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3(v_head_1665_, v___x_1667_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_);
if (lean_obj_tag(v___x_1668_) == 0)
{
lean_object* v___x_1669_; 
lean_dec_ref_known(v___x_1668_, 1);
v___x_1669_ = lean_box(0);
v_as_x27_1655_ = v_tail_1666_;
v_b_1656_ = v___x_1669_;
goto _start;
}
else
{
return v___x_1668_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__4___redArg___boxed(lean_object* v_as_x27_1671_, lean_object* v_b_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_){
_start:
{
lean_object* v_res_1680_; 
v_res_1680_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__4___redArg(v_as_x27_1671_, v_b_1672_, v___y_1673_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
lean_dec(v___y_1676_);
lean_dec_ref(v___y_1675_);
lean_dec(v___y_1674_);
lean_dec_ref(v___y_1673_);
lean_dec(v_as_x27_1671_);
return v_res_1680_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; 
v___x_1681_ = lean_box(0);
v___x_1682_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_1683_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1682_);
lean_ctor_set(v___x_1683_, 1, v___x_1681_);
return v___x_1683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg(){
_start:
{
lean_object* v___x_1685_; lean_object* v___x_1686_; 
v___x_1685_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0);
v___x_1686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1685_);
return v___x_1686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___boxed(lean_object* v___y_1687_){
_start:
{
lean_object* v_res_1688_; 
v_res_1688_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
return v_res_1688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__2(lean_object* v_env_1689_, lean_object* v_currNamespace_1690_, lean_object* v_openDecls_1691_, lean_object* v_n_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_){
_start:
{
lean_object* v___x_1695_; lean_object* v___x_1696_; 
v___x_1695_ = l_Lean_ResolveName_resolveNamespace(v_env_1689_, v_currNamespace_1690_, v_openDecls_1691_, v_n_1692_);
v___x_1696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1696_, 0, v___x_1695_);
lean_ctor_set(v___x_1696_, 1, v___y_1694_);
return v___x_1696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__2___boxed(lean_object* v_env_1697_, lean_object* v_currNamespace_1698_, lean_object* v_openDecls_1699_, lean_object* v_n_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_){
_start:
{
lean_object* v_res_1703_; 
v_res_1703_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__2(v_env_1697_, v_currNamespace_1698_, v_openDecls_1699_, v_n_1700_, v___y_1701_, v___y_1702_);
lean_dec_ref(v___y_1701_);
return v_res_1703_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(lean_object* v_x_1704_, lean_object* v___y_1705_){
_start:
{
if (lean_obj_tag(v_x_1704_) == 0)
{
lean_object* v_a_1706_; lean_object* v___x_1707_; 
v_a_1706_ = lean_ctor_get(v_x_1704_, 0);
lean_inc(v_a_1706_);
v___x_1707_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1707_, 0, v_a_1706_);
lean_ctor_set(v___x_1707_, 1, v___y_1705_);
return v___x_1707_;
}
else
{
lean_object* v_a_1708_; lean_object* v___x_1709_; 
v_a_1708_ = lean_ctor_get(v_x_1704_, 0);
lean_inc(v_a_1708_);
v___x_1709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1709_, 0, v_a_1708_);
lean_ctor_set(v___x_1709_, 1, v___y_1705_);
return v___x_1709_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___boxed(lean_object* v_x_1710_, lean_object* v___y_1711_){
_start:
{
lean_object* v_res_1712_; 
v_res_1712_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_x_1710_, v___y_1711_);
lean_dec_ref(v_x_1710_);
return v_res_1712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__0(lean_object* v_env_1713_, lean_object* v_stx_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_){
_start:
{
lean_object* v___x_1717_; 
v___x_1717_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_1713_, v_stx_1714_, v___y_1715_, v___y_1716_);
if (lean_obj_tag(v___x_1717_) == 0)
{
lean_object* v_a_1718_; 
v_a_1718_ = lean_ctor_get(v___x_1717_, 0);
lean_inc(v_a_1718_);
if (lean_obj_tag(v_a_1718_) == 0)
{
lean_object* v_a_1719_; lean_object* v___x_1721_; uint8_t v_isShared_1722_; uint8_t v_isSharedCheck_1727_; 
v_a_1719_ = lean_ctor_get(v___x_1717_, 1);
v_isSharedCheck_1727_ = !lean_is_exclusive(v___x_1717_);
if (v_isSharedCheck_1727_ == 0)
{
lean_object* v_unused_1728_; 
v_unused_1728_ = lean_ctor_get(v___x_1717_, 0);
lean_dec(v_unused_1728_);
v___x_1721_ = v___x_1717_;
v_isShared_1722_ = v_isSharedCheck_1727_;
goto v_resetjp_1720_;
}
else
{
lean_inc(v_a_1719_);
lean_dec(v___x_1717_);
v___x_1721_ = lean_box(0);
v_isShared_1722_ = v_isSharedCheck_1727_;
goto v_resetjp_1720_;
}
v_resetjp_1720_:
{
lean_object* v___x_1723_; lean_object* v___x_1725_; 
v___x_1723_ = lean_box(0);
if (v_isShared_1722_ == 0)
{
lean_ctor_set(v___x_1721_, 0, v___x_1723_);
v___x_1725_ = v___x_1721_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v___x_1723_);
lean_ctor_set(v_reuseFailAlloc_1726_, 1, v_a_1719_);
v___x_1725_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
return v___x_1725_;
}
}
}
else
{
lean_object* v_val_1729_; lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1757_; 
v_val_1729_ = lean_ctor_get(v_a_1718_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v_a_1718_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1731_ = v_a_1718_;
v_isShared_1732_ = v_isSharedCheck_1757_;
goto v_resetjp_1730_;
}
else
{
lean_inc(v_val_1729_);
lean_dec(v_a_1718_);
v___x_1731_ = lean_box(0);
v_isShared_1732_ = v_isSharedCheck_1757_;
goto v_resetjp_1730_;
}
v_resetjp_1730_:
{
lean_object* v_snd_1733_; 
v_snd_1733_ = lean_ctor_get(v_val_1729_, 1);
lean_inc(v_snd_1733_);
lean_dec(v_val_1729_);
if (lean_obj_tag(v_snd_1733_) == 0)
{
lean_object* v_a_1734_; lean_object* v_a_1735_; lean_object* v___x_1737_; uint8_t v_isShared_1738_; uint8_t v_isSharedCheck_1743_; 
lean_del_object(v___x_1731_);
v_a_1734_ = lean_ctor_get(v___x_1717_, 1);
lean_inc(v_a_1734_);
lean_dec_ref_known(v___x_1717_, 2);
v_a_1735_ = lean_ctor_get(v_snd_1733_, 0);
v_isSharedCheck_1743_ = !lean_is_exclusive(v_snd_1733_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1737_ = v_snd_1733_;
v_isShared_1738_ = v_isSharedCheck_1743_;
goto v_resetjp_1736_;
}
else
{
lean_inc(v_a_1735_);
lean_dec(v_snd_1733_);
v___x_1737_ = lean_box(0);
v_isShared_1738_ = v_isSharedCheck_1743_;
goto v_resetjp_1736_;
}
v_resetjp_1736_:
{
lean_object* v___x_1740_; 
if (v_isShared_1738_ == 0)
{
v___x_1740_ = v___x_1737_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v_a_1735_);
v___x_1740_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
lean_object* v___x_1741_; 
v___x_1741_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v___x_1740_, v_a_1734_);
lean_dec_ref(v___x_1740_);
return v___x_1741_;
}
}
}
else
{
lean_object* v_a_1744_; lean_object* v_a_1745_; lean_object* v___x_1747_; uint8_t v_isShared_1748_; uint8_t v_isSharedCheck_1756_; 
v_a_1744_ = lean_ctor_get(v___x_1717_, 1);
lean_inc(v_a_1744_);
lean_dec_ref_known(v___x_1717_, 2);
v_a_1745_ = lean_ctor_get(v_snd_1733_, 0);
v_isSharedCheck_1756_ = !lean_is_exclusive(v_snd_1733_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1747_ = v_snd_1733_;
v_isShared_1748_ = v_isSharedCheck_1756_;
goto v_resetjp_1746_;
}
else
{
lean_inc(v_a_1745_);
lean_dec(v_snd_1733_);
v___x_1747_ = lean_box(0);
v_isShared_1748_ = v_isSharedCheck_1756_;
goto v_resetjp_1746_;
}
v_resetjp_1746_:
{
lean_object* v___x_1750_; 
if (v_isShared_1732_ == 0)
{
lean_ctor_set(v___x_1731_, 0, v_a_1745_);
v___x_1750_ = v___x_1731_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v_a_1745_);
v___x_1750_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1749_;
}
v_reusejp_1749_:
{
lean_object* v___x_1752_; 
if (v_isShared_1748_ == 0)
{
lean_ctor_set(v___x_1747_, 0, v___x_1750_);
v___x_1752_ = v___x_1747_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1754_; 
v_reuseFailAlloc_1754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1754_, 0, v___x_1750_);
v___x_1752_ = v_reuseFailAlloc_1754_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
lean_object* v___x_1753_; 
v___x_1753_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v___x_1752_, v_a_1744_);
lean_dec_ref(v___x_1752_);
return v___x_1753_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1758_; lean_object* v_a_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1766_; 
v_a_1758_ = lean_ctor_get(v___x_1717_, 0);
v_a_1759_ = lean_ctor_get(v___x_1717_, 1);
v_isSharedCheck_1766_ = !lean_is_exclusive(v___x_1717_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1761_ = v___x_1717_;
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_a_1759_);
lean_inc(v_a_1758_);
lean_dec(v___x_1717_);
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
v_reuseFailAlloc_1765_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v_a_1758_);
lean_ctor_set(v_reuseFailAlloc_1765_, 1, v_a_1759_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__0___boxed(lean_object* v_env_1767_, lean_object* v_stx_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_){
_start:
{
lean_object* v_res_1771_; 
v_res_1771_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__0(v_env_1767_, v_stx_1768_, v___y_1769_, v___y_1770_);
lean_dec_ref(v___y_1769_);
return v_res_1771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__4(lean_object* v_env_1772_, lean_object* v_options_1773_, lean_object* v_currNamespace_1774_, lean_object* v_openDecls_1775_, lean_object* v_n_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_){
_start:
{
lean_object* v___x_1779_; lean_object* v___x_1780_; 
v___x_1779_ = l_Lean_ResolveName_resolveGlobalName(v_env_1772_, v_options_1773_, v_currNamespace_1774_, v_openDecls_1775_, v_n_1776_);
v___x_1780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1779_);
lean_ctor_set(v___x_1780_, 1, v___y_1778_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__4___boxed(lean_object* v_env_1781_, lean_object* v_options_1782_, lean_object* v_currNamespace_1783_, lean_object* v_openDecls_1784_, lean_object* v_n_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_){
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__4(v_env_1781_, v_options_1782_, v_currNamespace_1783_, v_openDecls_1784_, v_n_1785_, v___y_1786_, v___y_1787_);
lean_dec_ref(v___y_1786_);
lean_dec_ref(v_options_1782_);
return v_res_1788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__3(lean_object* v_currNamespace_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_){
_start:
{
lean_object* v___x_1792_; 
v___x_1792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1792_, 0, v_currNamespace_1789_);
lean_ctor_set(v___x_1792_, 1, v___y_1791_);
return v___x_1792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__3___boxed(lean_object* v_currNamespace_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_){
_start:
{
lean_object* v_res_1796_; 
v_res_1796_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__3(v_currNamespace_1793_, v___y_1794_, v___y_1795_);
lean_dec_ref(v___y_1794_);
return v_res_1796_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1802_ = l_Lean_maxRecDepthErrorMessage;
v___x_1803_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1803_, 0, v___x_1802_);
return v___x_1803_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__4(void){
_start:
{
lean_object* v___x_1804_; lean_object* v___x_1805_; 
v___x_1804_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__3);
v___x_1805_ = l_Lean_MessageData_ofFormat(v___x_1804_);
return v___x_1805_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; 
v___x_1806_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__4);
v___x_1807_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__2));
v___x_1808_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1808_, 0, v___x_1807_);
lean_ctor_set(v___x_1808_, 1, v___x_1806_);
return v___x_1808_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg(lean_object* v_ref_1809_){
_start:
{
lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; 
v___x_1811_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___closed__5);
v___x_1812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1812_, 0, v_ref_1809_);
lean_ctor_set(v___x_1812_, 1, v___x_1811_);
v___x_1813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1813_, 0, v___x_1812_);
return v___x_1813_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg___boxed(lean_object* v_ref_1814_, lean_object* v___y_1815_){
_start:
{
lean_object* v_res_1816_; 
v_res_1816_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg(v_ref_1814_);
return v_res_1816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__1(lean_object* v_env_1817_, lean_object* v_declName_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_){
_start:
{
uint8_t v___x_1821_; lean_object* v_env_1822_; lean_object* v___x_1823_; uint8_t v___x_1824_; uint8_t v___x_1825_; 
v___x_1821_ = 0;
v_env_1822_ = l_Lean_Environment_setExporting(v_env_1817_, v___x_1821_);
lean_inc(v_declName_1818_);
v___x_1823_ = l_Lean_mkPrivateName(v_env_1822_, v_declName_1818_);
v___x_1824_ = 1;
lean_inc_ref(v_env_1822_);
v___x_1825_ = l_Lean_Environment_contains(v_env_1822_, v___x_1823_, v___x_1824_);
if (v___x_1825_ == 0)
{
lean_object* v___x_1826_; uint8_t v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; 
v___x_1826_ = l_Lean_privateToUserName(v_declName_1818_);
v___x_1827_ = l_Lean_Environment_contains(v_env_1822_, v___x_1826_, v___x_1824_);
v___x_1828_ = lean_box(v___x_1827_);
v___x_1829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1829_, 0, v___x_1828_);
lean_ctor_set(v___x_1829_, 1, v___y_1820_);
return v___x_1829_;
}
else
{
lean_object* v___x_1830_; lean_object* v___x_1831_; 
lean_dec_ref(v_env_1822_);
lean_dec(v_declName_1818_);
v___x_1830_ = lean_box(v___x_1825_);
v___x_1831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1831_, 0, v___x_1830_);
lean_ctor_set(v___x_1831_, 1, v___y_1820_);
return v___x_1831_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__1___boxed(lean_object* v_env_1832_, lean_object* v_declName_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_){
_start:
{
lean_object* v_res_1836_; 
v_res_1836_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__1(v_env_1832_, v_declName_1833_, v___y_1834_, v___y_1835_);
lean_dec_ref(v___y_1834_);
return v_res_1836_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__6___redArg(lean_object* v_ref_1837_, lean_object* v_msg_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_){
_start:
{
lean_object* v_fileName_1846_; lean_object* v_fileMap_1847_; lean_object* v_options_1848_; lean_object* v_currRecDepth_1849_; lean_object* v_maxRecDepth_1850_; lean_object* v_ref_1851_; lean_object* v_currNamespace_1852_; lean_object* v_openDecls_1853_; lean_object* v_initHeartbeats_1854_; lean_object* v_maxHeartbeats_1855_; lean_object* v_quotContext_1856_; lean_object* v_currMacroScope_1857_; uint8_t v_diag_1858_; lean_object* v_cancelTk_x3f_1859_; uint8_t v_suppressElabErrors_1860_; lean_object* v_inheritedTraceOptions_1861_; lean_object* v_ref_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v_fileName_1846_ = lean_ctor_get(v___y_1843_, 0);
v_fileMap_1847_ = lean_ctor_get(v___y_1843_, 1);
v_options_1848_ = lean_ctor_get(v___y_1843_, 2);
v_currRecDepth_1849_ = lean_ctor_get(v___y_1843_, 3);
v_maxRecDepth_1850_ = lean_ctor_get(v___y_1843_, 4);
v_ref_1851_ = lean_ctor_get(v___y_1843_, 5);
v_currNamespace_1852_ = lean_ctor_get(v___y_1843_, 6);
v_openDecls_1853_ = lean_ctor_get(v___y_1843_, 7);
v_initHeartbeats_1854_ = lean_ctor_get(v___y_1843_, 8);
v_maxHeartbeats_1855_ = lean_ctor_get(v___y_1843_, 9);
v_quotContext_1856_ = lean_ctor_get(v___y_1843_, 10);
v_currMacroScope_1857_ = lean_ctor_get(v___y_1843_, 11);
v_diag_1858_ = lean_ctor_get_uint8(v___y_1843_, sizeof(void*)*14);
v_cancelTk_x3f_1859_ = lean_ctor_get(v___y_1843_, 12);
v_suppressElabErrors_1860_ = lean_ctor_get_uint8(v___y_1843_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1861_ = lean_ctor_get(v___y_1843_, 13);
v_ref_1862_ = l_Lean_replaceRef(v_ref_1837_, v_ref_1851_);
lean_inc_ref(v_inheritedTraceOptions_1861_);
lean_inc(v_cancelTk_x3f_1859_);
lean_inc(v_currMacroScope_1857_);
lean_inc(v_quotContext_1856_);
lean_inc(v_maxHeartbeats_1855_);
lean_inc(v_initHeartbeats_1854_);
lean_inc(v_openDecls_1853_);
lean_inc(v_currNamespace_1852_);
lean_inc(v_maxRecDepth_1850_);
lean_inc(v_currRecDepth_1849_);
lean_inc_ref(v_options_1848_);
lean_inc_ref(v_fileMap_1847_);
lean_inc_ref(v_fileName_1846_);
v___x_1863_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_1863_, 0, v_fileName_1846_);
lean_ctor_set(v___x_1863_, 1, v_fileMap_1847_);
lean_ctor_set(v___x_1863_, 2, v_options_1848_);
lean_ctor_set(v___x_1863_, 3, v_currRecDepth_1849_);
lean_ctor_set(v___x_1863_, 4, v_maxRecDepth_1850_);
lean_ctor_set(v___x_1863_, 5, v_ref_1862_);
lean_ctor_set(v___x_1863_, 6, v_currNamespace_1852_);
lean_ctor_set(v___x_1863_, 7, v_openDecls_1853_);
lean_ctor_set(v___x_1863_, 8, v_initHeartbeats_1854_);
lean_ctor_set(v___x_1863_, 9, v_maxHeartbeats_1855_);
lean_ctor_set(v___x_1863_, 10, v_quotContext_1856_);
lean_ctor_set(v___x_1863_, 11, v_currMacroScope_1857_);
lean_ctor_set(v___x_1863_, 12, v_cancelTk_x3f_1859_);
lean_ctor_set(v___x_1863_, 13, v_inheritedTraceOptions_1861_);
lean_ctor_set_uint8(v___x_1863_, sizeof(void*)*14, v_diag_1858_);
lean_ctor_set_uint8(v___x_1863_, sizeof(void*)*14 + 1, v_suppressElabErrors_1860_);
v___x_1864_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v_msg_1838_, v___y_1839_, v___y_1840_, v___y_1841_, v___y_1842_, v___x_1863_, v___y_1844_);
lean_dec_ref_known(v___x_1863_, 14);
return v___x_1864_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__6___redArg___boxed(lean_object* v_ref_1865_, lean_object* v_msg_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_){
_start:
{
lean_object* v_res_1874_; 
v_res_1874_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__6___redArg(v_ref_1865_, v_msg_1866_, v___y_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_);
lean_dec(v___y_1872_);
lean_dec_ref(v___y_1871_);
lean_dec(v___y_1870_);
lean_dec_ref(v___y_1869_);
lean_dec(v___y_1868_);
lean_dec_ref(v___y_1867_);
lean_dec(v_ref_1865_);
return v_res_1874_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__5(lean_object* v_as_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_){
_start:
{
if (lean_obj_tag(v_as_1875_) == 0)
{
lean_object* v___x_1883_; lean_object* v___x_1884_; 
v___x_1883_ = lean_box(0);
v___x_1884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1884_, 0, v___x_1883_);
return v___x_1884_;
}
else
{
lean_object* v_options_1885_; uint8_t v_hasTrace_1886_; 
v_options_1885_ = lean_ctor_get(v___y_1880_, 2);
v_hasTrace_1886_ = lean_ctor_get_uint8(v_options_1885_, sizeof(void*)*1);
if (v_hasTrace_1886_ == 0)
{
lean_object* v_tail_1887_; 
v_tail_1887_ = lean_ctor_get(v_as_1875_, 1);
lean_inc(v_tail_1887_);
lean_dec_ref_known(v_as_1875_, 2);
v_as_1875_ = v_tail_1887_;
goto _start;
}
else
{
lean_object* v_head_1889_; lean_object* v_tail_1890_; lean_object* v_fst_1891_; lean_object* v_snd_1892_; lean_object* v_inheritedTraceOptions_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; uint8_t v___x_1896_; 
v_head_1889_ = lean_ctor_get(v_as_1875_, 0);
lean_inc(v_head_1889_);
v_tail_1890_ = lean_ctor_get(v_as_1875_, 1);
lean_inc(v_tail_1890_);
lean_dec_ref_known(v_as_1875_, 2);
v_fst_1891_ = lean_ctor_get(v_head_1889_, 0);
lean_inc_n(v_fst_1891_, 2);
v_snd_1892_ = lean_ctor_get(v_head_1889_, 1);
lean_inc(v_snd_1892_);
lean_dec(v_head_1889_);
v_inheritedTraceOptions_1893_ = lean_ctor_get(v___y_1880_, 13);
v___x_1894_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9___closed__15));
v___x_1895_ = l_Lean_Name_append(v___x_1894_, v_fst_1891_);
v___x_1896_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1893_, v_options_1885_, v___x_1895_);
lean_dec(v___x_1895_);
if (v___x_1896_ == 0)
{
lean_dec(v_snd_1892_);
lean_dec(v_fst_1891_);
v_as_1875_ = v_tail_1890_;
goto _start;
}
else
{
lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; 
v___x_1898_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1898_, 0, v_snd_1892_);
v___x_1899_ = l_Lean_MessageData_ofFormat(v___x_1898_);
v___x_1900_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg(v_fst_1891_, v___x_1899_, v___y_1878_, v___y_1879_, v___y_1880_, v___y_1881_);
if (lean_obj_tag(v___x_1900_) == 0)
{
lean_dec_ref_known(v___x_1900_, 1);
v_as_1875_ = v_tail_1890_;
goto _start;
}
else
{
lean_dec(v_tail_1890_);
return v___x_1900_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__5___boxed(lean_object* v_as_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_){
_start:
{
lean_object* v_res_1910_; 
v_res_1910_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__5(v_as_1902_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_);
lean_dec(v___y_1908_);
lean_dec_ref(v___y_1907_);
lean_dec(v___y_1906_);
lean_dec_ref(v___y_1905_);
lean_dec(v___y_1904_);
lean_dec_ref(v___y_1903_);
return v_res_1910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(lean_object* v_x_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_){
_start:
{
lean_object* v___x_1920_; lean_object* v_env_1921_; lean_object* v_options_1922_; lean_object* v_currRecDepth_1923_; lean_object* v_maxRecDepth_1924_; lean_object* v_ref_1925_; lean_object* v_currNamespace_1926_; lean_object* v_openDecls_1927_; lean_object* v_quotContext_1928_; lean_object* v_currMacroScope_1929_; lean_object* v___x_1930_; lean_object* v_nextMacroScope_1931_; lean_object* v___f_1932_; lean_object* v___f_1933_; lean_object* v___f_1934_; lean_object* v___f_1935_; lean_object* v___f_1936_; lean_object* v_methods_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1920_ = lean_st_ref_get(v___y_1918_);
v_env_1921_ = lean_ctor_get(v___x_1920_, 0);
lean_inc_ref_n(v_env_1921_, 4);
lean_dec(v___x_1920_);
v_options_1922_ = lean_ctor_get(v___y_1917_, 2);
v_currRecDepth_1923_ = lean_ctor_get(v___y_1917_, 3);
v_maxRecDepth_1924_ = lean_ctor_get(v___y_1917_, 4);
v_ref_1925_ = lean_ctor_get(v___y_1917_, 5);
v_currNamespace_1926_ = lean_ctor_get(v___y_1917_, 6);
v_openDecls_1927_ = lean_ctor_get(v___y_1917_, 7);
v_quotContext_1928_ = lean_ctor_get(v___y_1917_, 10);
v_currMacroScope_1929_ = lean_ctor_get(v___y_1917_, 11);
v___x_1930_ = lean_st_ref_get(v___y_1918_);
v_nextMacroScope_1931_ = lean_ctor_get(v___x_1930_, 1);
lean_inc(v_nextMacroScope_1931_);
lean_dec(v___x_1930_);
v___f_1932_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1932_, 0, v_env_1921_);
v___f_1933_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_1933_, 0, v_env_1921_);
lean_inc_n(v_openDecls_1927_, 2);
lean_inc_n(v_currNamespace_1926_, 3);
v___f_1934_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__2___boxed), 6, 3);
lean_closure_set(v___f_1934_, 0, v_env_1921_);
lean_closure_set(v___f_1934_, 1, v_currNamespace_1926_);
lean_closure_set(v___f_1934_, 2, v_openDecls_1927_);
v___f_1935_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1935_, 0, v_currNamespace_1926_);
lean_inc_ref(v_options_1922_);
v___f_1936_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_1936_, 0, v_env_1921_);
lean_closure_set(v___f_1936_, 1, v_options_1922_);
lean_closure_set(v___f_1936_, 2, v_currNamespace_1926_);
lean_closure_set(v___f_1936_, 3, v_openDecls_1927_);
v_methods_1937_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_1937_, 0, v___f_1932_);
lean_ctor_set(v_methods_1937_, 1, v___f_1935_);
lean_ctor_set(v_methods_1937_, 2, v___f_1933_);
lean_ctor_set(v_methods_1937_, 3, v___f_1934_);
lean_ctor_set(v_methods_1937_, 4, v___f_1936_);
lean_inc(v_ref_1925_);
lean_inc(v_maxRecDepth_1924_);
lean_inc(v_currRecDepth_1923_);
lean_inc(v_currMacroScope_1929_);
lean_inc(v_quotContext_1928_);
v___x_1938_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1938_, 0, v_methods_1937_);
lean_ctor_set(v___x_1938_, 1, v_quotContext_1928_);
lean_ctor_set(v___x_1938_, 2, v_currMacroScope_1929_);
lean_ctor_set(v___x_1938_, 3, v_currRecDepth_1923_);
lean_ctor_set(v___x_1938_, 4, v_maxRecDepth_1924_);
lean_ctor_set(v___x_1938_, 5, v_ref_1925_);
v___x_1939_ = lean_box(0);
v___x_1940_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1940_, 0, v_nextMacroScope_1931_);
lean_ctor_set(v___x_1940_, 1, v___x_1939_);
lean_ctor_set(v___x_1940_, 2, v___x_1939_);
v___x_1941_ = lean_apply_2(v_x_1912_, v___x_1938_, v___x_1940_);
if (lean_obj_tag(v___x_1941_) == 0)
{
lean_object* v_a_1942_; lean_object* v_a_1943_; lean_object* v_macroScope_1944_; lean_object* v_traceMsgs_1945_; lean_object* v_expandedMacroDecls_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; 
v_a_1942_ = lean_ctor_get(v___x_1941_, 1);
lean_inc(v_a_1942_);
v_a_1943_ = lean_ctor_get(v___x_1941_, 0);
lean_inc(v_a_1943_);
lean_dec_ref_known(v___x_1941_, 2);
v_macroScope_1944_ = lean_ctor_get(v_a_1942_, 0);
lean_inc(v_macroScope_1944_);
v_traceMsgs_1945_ = lean_ctor_get(v_a_1942_, 1);
lean_inc(v_traceMsgs_1945_);
v_expandedMacroDecls_1946_ = lean_ctor_get(v_a_1942_, 2);
lean_inc(v_expandedMacroDecls_1946_);
lean_dec(v_a_1942_);
v___x_1947_ = lean_box(0);
v___x_1948_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__4___redArg(v_expandedMacroDecls_1946_, v___x_1947_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_, v___y_1918_);
lean_dec(v_expandedMacroDecls_1946_);
if (lean_obj_tag(v___x_1948_) == 0)
{
lean_object* v___x_1949_; lean_object* v_env_1950_; lean_object* v_ngen_1951_; lean_object* v_auxDeclNGen_1952_; lean_object* v_traceState_1953_; lean_object* v_cache_1954_; lean_object* v_messages_1955_; lean_object* v_infoState_1956_; lean_object* v_snapshotTasks_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_1983_; 
lean_dec_ref_known(v___x_1948_, 1);
v___x_1949_ = lean_st_ref_take(v___y_1918_);
v_env_1950_ = lean_ctor_get(v___x_1949_, 0);
v_ngen_1951_ = lean_ctor_get(v___x_1949_, 2);
v_auxDeclNGen_1952_ = lean_ctor_get(v___x_1949_, 3);
v_traceState_1953_ = lean_ctor_get(v___x_1949_, 4);
v_cache_1954_ = lean_ctor_get(v___x_1949_, 5);
v_messages_1955_ = lean_ctor_get(v___x_1949_, 6);
v_infoState_1956_ = lean_ctor_get(v___x_1949_, 7);
v_snapshotTasks_1957_ = lean_ctor_get(v___x_1949_, 8);
v_isSharedCheck_1983_ = !lean_is_exclusive(v___x_1949_);
if (v_isSharedCheck_1983_ == 0)
{
lean_object* v_unused_1984_; 
v_unused_1984_ = lean_ctor_get(v___x_1949_, 1);
lean_dec(v_unused_1984_);
v___x_1959_ = v___x_1949_;
v_isShared_1960_ = v_isSharedCheck_1983_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_snapshotTasks_1957_);
lean_inc(v_infoState_1956_);
lean_inc(v_messages_1955_);
lean_inc(v_cache_1954_);
lean_inc(v_traceState_1953_);
lean_inc(v_auxDeclNGen_1952_);
lean_inc(v_ngen_1951_);
lean_inc(v_env_1950_);
lean_dec(v___x_1949_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_1983_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v___x_1962_; 
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 1, v_macroScope_1944_);
v___x_1962_ = v___x_1959_;
goto v_reusejp_1961_;
}
else
{
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v_env_1950_);
lean_ctor_set(v_reuseFailAlloc_1982_, 1, v_macroScope_1944_);
lean_ctor_set(v_reuseFailAlloc_1982_, 2, v_ngen_1951_);
lean_ctor_set(v_reuseFailAlloc_1982_, 3, v_auxDeclNGen_1952_);
lean_ctor_set(v_reuseFailAlloc_1982_, 4, v_traceState_1953_);
lean_ctor_set(v_reuseFailAlloc_1982_, 5, v_cache_1954_);
lean_ctor_set(v_reuseFailAlloc_1982_, 6, v_messages_1955_);
lean_ctor_set(v_reuseFailAlloc_1982_, 7, v_infoState_1956_);
lean_ctor_set(v_reuseFailAlloc_1982_, 8, v_snapshotTasks_1957_);
v___x_1962_ = v_reuseFailAlloc_1982_;
goto v_reusejp_1961_;
}
v_reusejp_1961_:
{
lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; 
v___x_1963_ = lean_st_ref_set(v___y_1918_, v___x_1962_);
v___x_1964_ = l_List_reverse___redArg(v_traceMsgs_1945_);
v___x_1965_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__5(v___x_1964_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_, v___y_1918_);
if (lean_obj_tag(v___x_1965_) == 0)
{
lean_object* v___x_1967_; uint8_t v_isShared_1968_; uint8_t v_isSharedCheck_1972_; 
v_isSharedCheck_1972_ = !lean_is_exclusive(v___x_1965_);
if (v_isSharedCheck_1972_ == 0)
{
lean_object* v_unused_1973_; 
v_unused_1973_ = lean_ctor_get(v___x_1965_, 0);
lean_dec(v_unused_1973_);
v___x_1967_ = v___x_1965_;
v_isShared_1968_ = v_isSharedCheck_1972_;
goto v_resetjp_1966_;
}
else
{
lean_dec(v___x_1965_);
v___x_1967_ = lean_box(0);
v_isShared_1968_ = v_isSharedCheck_1972_;
goto v_resetjp_1966_;
}
v_resetjp_1966_:
{
lean_object* v___x_1970_; 
if (v_isShared_1968_ == 0)
{
lean_ctor_set(v___x_1967_, 0, v_a_1943_);
v___x_1970_ = v___x_1967_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v_a_1943_);
v___x_1970_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
return v___x_1970_;
}
}
}
else
{
lean_object* v_a_1974_; lean_object* v___x_1976_; uint8_t v_isShared_1977_; uint8_t v_isSharedCheck_1981_; 
lean_dec(v_a_1943_);
v_a_1974_ = lean_ctor_get(v___x_1965_, 0);
v_isSharedCheck_1981_ = !lean_is_exclusive(v___x_1965_);
if (v_isSharedCheck_1981_ == 0)
{
v___x_1976_ = v___x_1965_;
v_isShared_1977_ = v_isSharedCheck_1981_;
goto v_resetjp_1975_;
}
else
{
lean_inc(v_a_1974_);
lean_dec(v___x_1965_);
v___x_1976_ = lean_box(0);
v_isShared_1977_ = v_isSharedCheck_1981_;
goto v_resetjp_1975_;
}
v_resetjp_1975_:
{
lean_object* v___x_1979_; 
if (v_isShared_1977_ == 0)
{
v___x_1979_ = v___x_1976_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_1980_; 
v_reuseFailAlloc_1980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1980_, 0, v_a_1974_);
v___x_1979_ = v_reuseFailAlloc_1980_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
return v___x_1979_;
}
}
}
}
}
}
else
{
lean_object* v_a_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_1992_; 
lean_dec(v_traceMsgs_1945_);
lean_dec(v_macroScope_1944_);
lean_dec(v_a_1943_);
v_a_1985_ = lean_ctor_get(v___x_1948_, 0);
v_isSharedCheck_1992_ = !lean_is_exclusive(v___x_1948_);
if (v_isSharedCheck_1992_ == 0)
{
v___x_1987_ = v___x_1948_;
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_a_1985_);
lean_dec(v___x_1948_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v___x_1990_; 
if (v_isShared_1988_ == 0)
{
v___x_1990_ = v___x_1987_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v_a_1985_);
v___x_1990_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1989_;
}
v_reusejp_1989_:
{
return v___x_1990_;
}
}
}
}
else
{
lean_object* v_a_1993_; 
v_a_1993_ = lean_ctor_get(v___x_1941_, 0);
lean_inc(v_a_1993_);
lean_dec_ref_known(v___x_1941_, 2);
if (lean_obj_tag(v_a_1993_) == 0)
{
lean_object* v_a_1994_; lean_object* v_a_1995_; lean_object* v___x_1996_; uint8_t v___x_1997_; 
v_a_1994_ = lean_ctor_get(v_a_1993_, 0);
lean_inc(v_a_1994_);
v_a_1995_ = lean_ctor_get(v_a_1993_, 1);
lean_inc_ref(v_a_1995_);
lean_dec_ref_known(v_a_1993_, 2);
v___x_1996_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___closed__0));
v___x_1997_ = lean_string_dec_eq(v_a_1995_, v___x_1996_);
if (v___x_1997_ == 0)
{
lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; 
v___x_1998_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1998_, 0, v_a_1995_);
v___x_1999_ = l_Lean_MessageData_ofFormat(v___x_1998_);
v___x_2000_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__6___redArg(v_a_1994_, v___x_1999_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_, v___y_1918_);
lean_dec(v_a_1994_);
return v___x_2000_;
}
else
{
lean_object* v___x_2001_; 
lean_dec_ref(v_a_1995_);
v___x_2001_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg(v_a_1994_);
return v___x_2001_;
}
}
else
{
lean_object* v___x_2002_; 
v___x_2002_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
return v___x_2002_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___boxed(lean_object* v_x_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_){
_start:
{
lean_object* v_res_2011_; 
v_res_2011_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(v_x_2003_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_);
lean_dec(v___y_2009_);
lean_dec_ref(v___y_2008_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2006_);
lean_dec(v___y_2005_);
lean_dec_ref(v___y_2004_);
return v_res_2011_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__15(size_t v_sz_2018_, size_t v_i_2019_, lean_object* v_bs_2020_){
_start:
{
uint8_t v___x_2021_; 
v___x_2021_ = lean_usize_dec_lt(v_i_2019_, v_sz_2018_);
if (v___x_2021_ == 0)
{
lean_object* v___x_2022_; 
v___x_2022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2022_, 0, v_bs_2020_);
return v___x_2022_;
}
else
{
lean_object* v_v_2023_; lean_object* v___x_2024_; uint8_t v___x_2025_; 
v_v_2023_ = lean_array_uget(v_bs_2020_, v_i_2019_);
v___x_2024_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__15___closed__1));
lean_inc(v_v_2023_);
v___x_2025_ = l_Lean_Syntax_isOfKind(v_v_2023_, v___x_2024_);
if (v___x_2025_ == 0)
{
lean_object* v___x_2026_; 
lean_dec(v_v_2023_);
lean_dec_ref(v_bs_2020_);
v___x_2026_ = lean_box(0);
return v___x_2026_;
}
else
{
lean_object* v___x_2027_; lean_object* v_bs_x27_2028_; lean_object* v___x_2035_; uint8_t v___x_2036_; 
v___x_2027_ = lean_unsigned_to_nat(0u);
v_bs_x27_2028_ = lean_array_uset(v_bs_2020_, v_i_2019_, v___x_2027_);
v___x_2035_ = l_Lean_Syntax_getArg(v_v_2023_, v___x_2027_);
lean_dec(v_v_2023_);
v___x_2036_ = l_Lean_Syntax_isNone(v___x_2035_);
if (v___x_2036_ == 0)
{
lean_object* v___x_2037_; uint8_t v___x_2038_; 
v___x_2037_ = lean_unsigned_to_nat(2u);
v___x_2038_ = l_Lean_Syntax_matchesNull(v___x_2035_, v___x_2037_);
if (v___x_2038_ == 0)
{
lean_object* v___x_2039_; 
lean_dec_ref(v_bs_x27_2028_);
v___x_2039_ = lean_box(0);
return v___x_2039_;
}
else
{
goto v___jp_2029_;
}
}
else
{
lean_dec(v___x_2035_);
goto v___jp_2029_;
}
v___jp_2029_:
{
lean_object* v___x_2030_; size_t v___x_2031_; size_t v___x_2032_; lean_object* v___x_2033_; 
v___x_2030_ = lean_box(0);
v___x_2031_ = ((size_t)1ULL);
v___x_2032_ = lean_usize_add(v_i_2019_, v___x_2031_);
v___x_2033_ = lean_array_uset(v_bs_x27_2028_, v_i_2019_, v___x_2030_);
v_i_2019_ = v___x_2032_;
v_bs_2020_ = v___x_2033_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__15___boxed(lean_object* v_sz_2040_, lean_object* v_i_2041_, lean_object* v_bs_2042_){
_start:
{
size_t v_sz_boxed_2043_; size_t v_i_boxed_2044_; lean_object* v_res_2045_; 
v_sz_boxed_2043_ = lean_unbox_usize(v_sz_2040_);
lean_dec(v_sz_2040_);
v_i_boxed_2044_ = lean_unbox_usize(v_i_2041_);
lean_dec(v_i_2041_);
v_res_2045_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__15(v_sz_boxed_2043_, v_i_boxed_2044_, v_bs_2042_);
return v_res_2045_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(uint8_t v___x_2046_, uint8_t v___x_2047_, lean_object* v_as_2048_, size_t v_i_2049_, size_t v_stop_2050_, lean_object* v_b_2051_){
_start:
{
lean_object* v___y_2053_; uint8_t v___x_2057_; 
v___x_2057_ = lean_usize_dec_eq(v_i_2049_, v_stop_2050_);
if (v___x_2057_ == 0)
{
lean_object* v_fst_2058_; uint8_t v___x_2059_; 
v_fst_2058_ = lean_ctor_get(v_b_2051_, 0);
v___x_2059_ = lean_unbox(v_fst_2058_);
if (v___x_2059_ == 0)
{
lean_object* v_snd_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2068_; 
v_snd_2060_ = lean_ctor_get(v_b_2051_, 1);
v_isSharedCheck_2068_ = !lean_is_exclusive(v_b_2051_);
if (v_isSharedCheck_2068_ == 0)
{
lean_object* v_unused_2069_; 
v_unused_2069_ = lean_ctor_get(v_b_2051_, 0);
lean_dec(v_unused_2069_);
v___x_2062_ = v_b_2051_;
v_isShared_2063_ = v_isSharedCheck_2068_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_snd_2060_);
lean_dec(v_b_2051_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2068_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2064_; lean_object* v___x_2066_; 
v___x_2064_ = lean_box(v___x_2046_);
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 0, v___x_2064_);
v___x_2066_ = v___x_2062_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v___x_2064_);
lean_ctor_set(v_reuseFailAlloc_2067_, 1, v_snd_2060_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
v___y_2053_ = v___x_2066_;
goto v___jp_2052_;
}
}
}
else
{
lean_object* v_snd_2070_; lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2080_; 
v_snd_2070_ = lean_ctor_get(v_b_2051_, 1);
v_isSharedCheck_2080_ = !lean_is_exclusive(v_b_2051_);
if (v_isSharedCheck_2080_ == 0)
{
lean_object* v_unused_2081_; 
v_unused_2081_ = lean_ctor_get(v_b_2051_, 0);
lean_dec(v_unused_2081_);
v___x_2072_ = v_b_2051_;
v_isShared_2073_ = v_isSharedCheck_2080_;
goto v_resetjp_2071_;
}
else
{
lean_inc(v_snd_2070_);
lean_dec(v_b_2051_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2080_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2078_; 
v___x_2074_ = lean_array_uget_borrowed(v_as_2048_, v_i_2049_);
lean_inc(v___x_2074_);
v___x_2075_ = lean_array_push(v_snd_2070_, v___x_2074_);
v___x_2076_ = lean_box(v___x_2047_);
if (v_isShared_2073_ == 0)
{
lean_ctor_set(v___x_2072_, 1, v___x_2075_);
lean_ctor_set(v___x_2072_, 0, v___x_2076_);
v___x_2078_ = v___x_2072_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v___x_2076_);
lean_ctor_set(v_reuseFailAlloc_2079_, 1, v___x_2075_);
v___x_2078_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
v___y_2053_ = v___x_2078_;
goto v___jp_2052_;
}
}
}
}
else
{
return v_b_2051_;
}
v___jp_2052_:
{
size_t v___x_2054_; size_t v___x_2055_; 
v___x_2054_ = ((size_t)1ULL);
v___x_2055_ = lean_usize_add(v_i_2049_, v___x_2054_);
v_i_2049_ = v___x_2055_;
v_b_2051_ = v___y_2053_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___boxed(lean_object* v___x_2082_, lean_object* v___x_2083_, lean_object* v_as_2084_, lean_object* v_i_2085_, lean_object* v_stop_2086_, lean_object* v_b_2087_){
_start:
{
uint8_t v___x_318582__boxed_2088_; uint8_t v___x_318583__boxed_2089_; size_t v_i_boxed_2090_; size_t v_stop_boxed_2091_; lean_object* v_res_2092_; 
v___x_318582__boxed_2088_ = lean_unbox(v___x_2082_);
v___x_318583__boxed_2089_ = lean_unbox(v___x_2083_);
v_i_boxed_2090_ = lean_unbox_usize(v_i_2085_);
lean_dec(v_i_2085_);
v_stop_boxed_2091_ = lean_unbox_usize(v_stop_2086_);
lean_dec(v_stop_2086_);
v_res_2092_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(v___x_318582__boxed_2088_, v___x_318583__boxed_2089_, v_as_2084_, v_i_boxed_2090_, v_stop_boxed_2091_, v_b_2087_);
lean_dec_ref(v_as_2084_);
return v_res_2092_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(size_t v_sz_2093_, size_t v_i_2094_, lean_object* v_bs_2095_){
_start:
{
uint8_t v___x_2096_; 
v___x_2096_ = lean_usize_dec_lt(v_i_2094_, v_sz_2093_);
if (v___x_2096_ == 0)
{
lean_object* v___x_2097_; 
v___x_2097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2097_, 0, v_bs_2095_);
return v___x_2097_;
}
else
{
lean_object* v___x_2098_; lean_object* v_bs_x27_2099_; lean_object* v___x_2100_; size_t v___x_2101_; size_t v___x_2102_; lean_object* v___x_2103_; 
v___x_2098_ = lean_unsigned_to_nat(0u);
v_bs_x27_2099_ = lean_array_uset(v_bs_2095_, v_i_2094_, v___x_2098_);
v___x_2100_ = lean_box(0);
v___x_2101_ = ((size_t)1ULL);
v___x_2102_ = lean_usize_add(v_i_2094_, v___x_2101_);
v___x_2103_ = lean_array_uset(v_bs_x27_2099_, v_i_2094_, v___x_2100_);
v_i_2094_ = v___x_2102_;
v_bs_2095_ = v___x_2103_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9___boxed(lean_object* v_sz_2105_, lean_object* v_i_2106_, lean_object* v_bs_2107_){
_start:
{
size_t v_sz_boxed_2108_; size_t v_i_boxed_2109_; lean_object* v_res_2110_; 
v_sz_boxed_2108_ = lean_unbox_usize(v_sz_2105_);
lean_dec(v_sz_2105_);
v_i_boxed_2109_ = lean_unbox_usize(v_i_2106_);
lean_dec(v_i_2106_);
v_res_2110_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(v_sz_boxed_2108_, v_i_boxed_2109_, v_bs_2107_);
return v_res_2110_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(size_t v_sz_2123_, size_t v_i_2124_, lean_object* v_bs_2125_){
_start:
{
uint8_t v___x_2126_; 
v___x_2126_ = lean_usize_dec_lt(v_i_2124_, v_sz_2123_);
if (v___x_2126_ == 0)
{
lean_object* v___x_2127_; 
v___x_2127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2127_, 0, v_bs_2125_);
return v___x_2127_;
}
else
{
lean_object* v_v_2128_; lean_object* v___x_2129_; uint8_t v___x_2130_; 
v_v_2128_ = lean_array_uget(v_bs_2125_, v_i_2124_);
v___x_2129_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__1));
lean_inc(v_v_2128_);
v___x_2130_ = l_Lean_Syntax_isOfKind(v_v_2128_, v___x_2129_);
if (v___x_2130_ == 0)
{
lean_object* v___x_2131_; 
lean_dec(v_v_2128_);
lean_dec_ref(v_bs_2125_);
v___x_2131_ = lean_box(0);
return v___x_2131_;
}
else
{
lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; uint8_t v___x_2135_; 
v___x_2132_ = lean_unsigned_to_nat(1u);
v___x_2133_ = l_Lean_Syntax_getArg(v_v_2128_, v___x_2132_);
v___x_2134_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___closed__3));
v___x_2135_ = l_Lean_Syntax_isOfKind(v___x_2133_, v___x_2134_);
if (v___x_2135_ == 0)
{
lean_object* v___x_2136_; 
lean_dec(v_v_2128_);
lean_dec_ref(v_bs_2125_);
v___x_2136_ = lean_box(0);
return v___x_2136_;
}
else
{
lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v_bs_x27_2139_; lean_object* v___x_2140_; size_t v___x_2141_; size_t v___x_2142_; lean_object* v___x_2143_; 
v___x_2137_ = lean_unsigned_to_nat(3u);
v___x_2138_ = lean_unsigned_to_nat(0u);
v_bs_x27_2139_ = lean_array_uset(v_bs_2125_, v_i_2124_, v___x_2138_);
v___x_2140_ = l_Lean_Syntax_getArg(v_v_2128_, v___x_2137_);
lean_dec(v_v_2128_);
v___x_2141_ = ((size_t)1ULL);
v___x_2142_ = lean_usize_add(v_i_2124_, v___x_2141_);
v___x_2143_ = lean_array_uset(v_bs_x27_2139_, v_i_2124_, v___x_2140_);
v_i_2124_ = v___x_2142_;
v_bs_2125_ = v___x_2143_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___boxed(lean_object* v_sz_2145_, lean_object* v_i_2146_, lean_object* v_bs_2147_){
_start:
{
size_t v_sz_boxed_2148_; size_t v_i_boxed_2149_; lean_object* v_res_2150_; 
v_sz_boxed_2148_ = lean_unbox_usize(v_sz_2145_);
lean_dec(v_sz_2145_);
v_i_boxed_2149_ = lean_unbox_usize(v_i_2146_);
lean_dec(v_i_2146_);
v_res_2150_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(v_sz_boxed_2148_, v_i_boxed_2149_, v_bs_2147_);
return v_res_2150_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(lean_object* v_stx_2154_, lean_object* v_as_x27_2155_, lean_object* v_b_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_){
_start:
{
if (lean_obj_tag(v_as_x27_2155_) == 0)
{
lean_object* v___x_2164_; 
lean_dec(v_stx_2154_);
v___x_2164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2164_, 0, v_b_2156_);
return v___x_2164_;
}
else
{
lean_object* v_head_2165_; lean_object* v_tail_2166_; lean_object* v_value_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; 
lean_dec_ref(v_b_2156_);
v_head_2165_ = lean_ctor_get(v_as_x27_2155_, 0);
v_tail_2166_ = lean_ctor_get(v_as_x27_2155_, 1);
v_value_2167_ = lean_ctor_get(v_head_2165_, 1);
v___x_2168_ = lean_box(0);
lean_inc(v_value_2167_);
lean_inc(v___y_2162_);
lean_inc_ref(v___y_2161_);
lean_inc(v___y_2160_);
lean_inc_ref(v___y_2159_);
lean_inc(v___y_2158_);
lean_inc_ref(v___y_2157_);
lean_inc(v_stx_2154_);
v___x_2169_ = lean_apply_8(v_value_2167_, v_stx_2154_, v___y_2157_, v___y_2158_, v___y_2159_, v___y_2160_, v___y_2161_, v___y_2162_, lean_box(0));
if (lean_obj_tag(v___x_2169_) == 0)
{
lean_object* v_a_2170_; lean_object* v___x_2172_; uint8_t v_isShared_2173_; uint8_t v_isSharedCheck_2179_; 
lean_dec(v_stx_2154_);
v_a_2170_ = lean_ctor_get(v___x_2169_, 0);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___x_2169_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2172_ = v___x_2169_;
v_isShared_2173_ = v_isSharedCheck_2179_;
goto v_resetjp_2171_;
}
else
{
lean_inc(v_a_2170_);
lean_dec(v___x_2169_);
v___x_2172_ = lean_box(0);
v_isShared_2173_ = v_isSharedCheck_2179_;
goto v_resetjp_2171_;
}
v_resetjp_2171_:
{
lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2177_; 
v___x_2174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2174_, 0, v_a_2170_);
v___x_2175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2175_, 0, v___x_2174_);
lean_ctor_set(v___x_2175_, 1, v___x_2168_);
if (v_isShared_2173_ == 0)
{
lean_ctor_set(v___x_2172_, 0, v___x_2175_);
v___x_2177_ = v___x_2172_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v___x_2175_);
v___x_2177_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
return v___x_2177_;
}
}
}
else
{
lean_object* v_a_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2202_; 
v_a_2180_ = lean_ctor_get(v___x_2169_, 0);
v_isSharedCheck_2202_ = !lean_is_exclusive(v___x_2169_);
if (v_isSharedCheck_2202_ == 0)
{
v___x_2182_ = v___x_2169_;
v_isShared_2183_ = v_isSharedCheck_2202_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_a_2180_);
lean_dec(v___x_2169_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2202_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v___x_2184_; lean_object* v___x_2185_; uint8_t v___y_2187_; uint8_t v___x_2200_; 
v___x_2184_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_2185_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_2200_ = l_Lean_Exception_isInterrupt(v_a_2180_);
if (v___x_2200_ == 0)
{
uint8_t v___x_2201_; 
lean_inc(v_a_2180_);
v___x_2201_ = l_Lean_Exception_isRuntime(v_a_2180_);
v___y_2187_ = v___x_2201_;
goto v___jp_2186_;
}
else
{
v___y_2187_ = v___x_2200_;
goto v___jp_2186_;
}
v___jp_2186_:
{
if (v___y_2187_ == 0)
{
if (lean_obj_tag(v_a_2180_) == 0)
{
lean_object* v___x_2189_; 
lean_dec(v_stx_2154_);
if (v_isShared_2183_ == 0)
{
v___x_2189_ = v___x_2182_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v_a_2180_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
return v___x_2189_;
}
}
else
{
lean_object* v_id_2191_; uint8_t v___x_2192_; 
v_id_2191_ = lean_ctor_get(v_a_2180_, 0);
v___x_2192_ = l_Lean_instBEqInternalExceptionId_beq(v___x_2185_, v_id_2191_);
if (v___x_2192_ == 0)
{
lean_object* v___x_2194_; 
lean_dec(v_stx_2154_);
if (v_isShared_2183_ == 0)
{
v___x_2194_ = v___x_2182_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v_a_2180_);
v___x_2194_ = v_reuseFailAlloc_2195_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
return v___x_2194_;
}
}
else
{
lean_dec_ref_known(v_a_2180_, 2);
lean_del_object(v___x_2182_);
v_as_x27_2155_ = v_tail_2166_;
v_b_2156_ = v___x_2184_;
goto _start;
}
}
}
else
{
lean_object* v___x_2198_; 
lean_dec(v_stx_2154_);
if (v_isShared_2183_ == 0)
{
v___x_2198_ = v___x_2182_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2199_; 
v_reuseFailAlloc_2199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2199_, 0, v_a_2180_);
v___x_2198_ = v_reuseFailAlloc_2199_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
return v___x_2198_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___boxed(lean_object* v_stx_2203_, lean_object* v_as_x27_2204_, lean_object* v_b_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_){
_start:
{
lean_object* v_res_2213_; 
v_res_2213_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_2203_, v_as_x27_2204_, v_b_2205_, v___y_2206_, v___y_2207_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_);
lean_dec(v___y_2211_);
lean_dec_ref(v___y_2210_);
lean_dec(v___y_2209_);
lean_dec_ref(v___y_2208_);
lean_dec(v___y_2207_);
lean_dec_ref(v___y_2206_);
lean_dec(v_as_x27_2204_);
return v_res_2213_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2(lean_object* v_00_u03b1_2214_, lean_object* v_x_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_){
_start:
{
lean_object* v___x_2218_; 
v___x_2218_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_x_2215_, v___y_2217_);
return v___x_2218_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___boxed(lean_object* v_00_u03b1_2219_, lean_object* v_x_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_){
_start:
{
lean_object* v_res_2223_; 
v_res_2223_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2(v_00_u03b1_2219_, v_x_2220_, v___y_2221_, v___y_2222_);
lean_dec_ref(v___y_2221_);
lean_dec_ref(v_x_2220_);
return v_res_2223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(lean_object* v_reassigned_2226_, lean_object* v_rhs_x3f_2227_, lean_object* v_otherwise_x3f_2228_, lean_object* v_body_x3f_2229_, lean_object* v_a_2230_, lean_object* v_a_2231_, lean_object* v_a_2232_, lean_object* v_a_2233_, lean_object* v_a_2234_, lean_object* v_a_2235_){
_start:
{
lean_object* v___y_2238_; lean_object* v___y_2239_; lean_object* v___y_2240_; uint8_t v___y_2241_; lean_object* v___y_2242_; lean_object* v___y_2243_; lean_object* v___y_2247_; lean_object* v___y_2248_; lean_object* v_body_2249_; lean_object* v___y_2270_; lean_object* v_otherwise_2271_; lean_object* v___y_2272_; lean_object* v___y_2273_; lean_object* v___y_2274_; lean_object* v___y_2275_; lean_object* v___y_2276_; lean_object* v___y_2277_; lean_object* v_rhs_2283_; lean_object* v___y_2284_; lean_object* v___y_2285_; lean_object* v___y_2286_; lean_object* v___y_2287_; lean_object* v___y_2288_; lean_object* v___y_2289_; 
if (lean_obj_tag(v_rhs_x3f_2227_) == 0)
{
lean_object* v___x_2294_; 
v___x_2294_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v_rhs_2283_ = v___x_2294_;
v___y_2284_ = v_a_2230_;
v___y_2285_ = v_a_2231_;
v___y_2286_ = v_a_2232_;
v___y_2287_ = v_a_2233_;
v___y_2288_ = v_a_2234_;
v___y_2289_ = v_a_2235_;
goto v___jp_2282_;
}
else
{
lean_object* v_val_2295_; lean_object* v___x_2296_; 
v_val_2295_ = lean_ctor_get(v_rhs_x3f_2227_, 0);
lean_inc(v_val_2295_);
lean_dec_ref_known(v_rhs_x3f_2227_, 1);
v___x_2296_ = l_Lean_Elab_Do_InferControlInfo_ofElem(v_val_2295_, v_a_2230_, v_a_2231_, v_a_2232_, v_a_2233_, v_a_2234_, v_a_2235_);
if (lean_obj_tag(v___x_2296_) == 0)
{
lean_object* v_a_2297_; 
v_a_2297_ = lean_ctor_get(v___x_2296_, 0);
lean_inc(v_a_2297_);
lean_dec_ref_known(v___x_2296_, 1);
v_rhs_2283_ = v_a_2297_;
v___y_2284_ = v_a_2230_;
v___y_2285_ = v_a_2231_;
v___y_2286_ = v_a_2232_;
v___y_2287_ = v_a_2233_;
v___y_2288_ = v_a_2234_;
v___y_2289_ = v_a_2235_;
goto v___jp_2282_;
}
else
{
lean_dec(v_body_x3f_2229_);
lean_dec(v_otherwise_x3f_2228_);
lean_dec_ref(v_reassigned_2226_);
return v___x_2296_;
}
}
v___jp_2237_:
{
lean_object* v___x_2244_; lean_object* v___x_2245_; 
v___x_2244_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2244_, 0, v___y_2242_);
lean_ctor_set(v___x_2244_, 1, v___y_2239_);
lean_ctor_set(v___x_2244_, 2, v___y_2238_);
lean_ctor_set(v___x_2244_, 3, v___y_2240_);
lean_ctor_set(v___x_2244_, 4, v___y_2243_);
lean_ctor_set_uint8(v___x_2244_, sizeof(void*)*5, v___y_2241_);
v___x_2245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2245_, 0, v___x_2244_);
return v___x_2245_;
}
v___jp_2246_:
{
lean_object* v___x_2250_; lean_object* v_info_2251_; lean_object* v_breaks_2252_; lean_object* v_continues_2253_; lean_object* v_returns_2254_; lean_object* v_numRegularExits_2255_; uint8_t v_noFallthrough_2256_; lean_object* v_reassigns_2257_; size_t v_sz_2258_; size_t v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; uint8_t v___x_2263_; 
v___x_2250_ = l_Lean_Elab_Do_ControlInfo_alternative(v_body_2249_, v___y_2247_);
v_info_2251_ = l_Lean_Elab_Do_ControlInfo_sequence(v___y_2248_, v___x_2250_);
v_breaks_2252_ = lean_ctor_get(v_info_2251_, 0);
lean_inc(v_breaks_2252_);
v_continues_2253_ = lean_ctor_get(v_info_2251_, 1);
lean_inc(v_continues_2253_);
v_returns_2254_ = lean_ctor_get(v_info_2251_, 2);
lean_inc(v_returns_2254_);
v_numRegularExits_2255_ = lean_ctor_get(v_info_2251_, 3);
lean_inc(v_numRegularExits_2255_);
v_noFallthrough_2256_ = lean_ctor_get_uint8(v_info_2251_, sizeof(void*)*5);
v_reassigns_2257_ = lean_ctor_get(v_info_2251_, 4);
lean_inc(v_reassigns_2257_);
lean_dec_ref(v_info_2251_);
v_sz_2258_ = lean_array_size(v_reassigned_2226_);
v___x_2259_ = ((size_t)0ULL);
v___x_2260_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__23(v_sz_2258_, v___x_2259_, v_reassigned_2226_);
v___x_2261_ = lean_unsigned_to_nat(0u);
v___x_2262_ = lean_array_get_size(v___x_2260_);
v___x_2263_ = lean_nat_dec_lt(v___x_2261_, v___x_2262_);
if (v___x_2263_ == 0)
{
lean_dec_ref(v___x_2260_);
v___y_2238_ = v_returns_2254_;
v___y_2239_ = v_continues_2253_;
v___y_2240_ = v_numRegularExits_2255_;
v___y_2241_ = v_noFallthrough_2256_;
v___y_2242_ = v_breaks_2252_;
v___y_2243_ = v_reassigns_2257_;
goto v___jp_2237_;
}
else
{
uint8_t v___x_2264_; 
v___x_2264_ = lean_nat_dec_le(v___x_2262_, v___x_2262_);
if (v___x_2264_ == 0)
{
if (v___x_2263_ == 0)
{
lean_dec_ref(v___x_2260_);
v___y_2238_ = v_returns_2254_;
v___y_2239_ = v_continues_2253_;
v___y_2240_ = v_numRegularExits_2255_;
v___y_2241_ = v_noFallthrough_2256_;
v___y_2242_ = v_breaks_2252_;
v___y_2243_ = v_reassigns_2257_;
goto v___jp_2237_;
}
else
{
size_t v___x_2265_; lean_object* v___x_2266_; 
v___x_2265_ = lean_usize_of_nat(v___x_2262_);
v___x_2266_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__24(v___x_2260_, v___x_2259_, v___x_2265_, v_reassigns_2257_);
lean_dec_ref(v___x_2260_);
v___y_2238_ = v_returns_2254_;
v___y_2239_ = v_continues_2253_;
v___y_2240_ = v_numRegularExits_2255_;
v___y_2241_ = v_noFallthrough_2256_;
v___y_2242_ = v_breaks_2252_;
v___y_2243_ = v___x_2266_;
goto v___jp_2237_;
}
}
else
{
size_t v___x_2267_; lean_object* v___x_2268_; 
v___x_2267_ = lean_usize_of_nat(v___x_2262_);
v___x_2268_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__24(v___x_2260_, v___x_2259_, v___x_2267_, v_reassigns_2257_);
lean_dec_ref(v___x_2260_);
v___y_2238_ = v_returns_2254_;
v___y_2239_ = v_continues_2253_;
v___y_2240_ = v_numRegularExits_2255_;
v___y_2241_ = v_noFallthrough_2256_;
v___y_2242_ = v_breaks_2252_;
v___y_2243_ = v___x_2268_;
goto v___jp_2237_;
}
}
}
v___jp_2269_:
{
if (lean_obj_tag(v_body_x3f_2229_) == 0)
{
lean_object* v___x_2278_; 
v___x_2278_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v___y_2247_ = v_otherwise_2271_;
v___y_2248_ = v___y_2270_;
v_body_2249_ = v___x_2278_;
goto v___jp_2246_;
}
else
{
lean_object* v_val_2279_; lean_object* v___x_2280_; 
v_val_2279_ = lean_ctor_get(v_body_x3f_2229_, 0);
lean_inc(v_val_2279_);
lean_dec_ref_known(v_body_x3f_2229_, 1);
v___x_2280_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_2279_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_);
if (lean_obj_tag(v___x_2280_) == 0)
{
lean_object* v_a_2281_; 
v_a_2281_ = lean_ctor_get(v___x_2280_, 0);
lean_inc(v_a_2281_);
lean_dec_ref_known(v___x_2280_, 1);
v___y_2247_ = v_otherwise_2271_;
v___y_2248_ = v___y_2270_;
v_body_2249_ = v_a_2281_;
goto v___jp_2246_;
}
else
{
lean_dec_ref(v_otherwise_2271_);
lean_dec_ref(v___y_2270_);
lean_dec_ref(v_reassigned_2226_);
return v___x_2280_;
}
}
}
v___jp_2282_:
{
if (lean_obj_tag(v_otherwise_x3f_2228_) == 0)
{
lean_object* v___x_2290_; 
v___x_2290_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v___y_2270_ = v_rhs_2283_;
v_otherwise_2271_ = v___x_2290_;
v___y_2272_ = v___y_2284_;
v___y_2273_ = v___y_2285_;
v___y_2274_ = v___y_2286_;
v___y_2275_ = v___y_2287_;
v___y_2276_ = v___y_2288_;
v___y_2277_ = v___y_2289_;
goto v___jp_2269_;
}
else
{
lean_object* v_val_2291_; lean_object* v___x_2292_; 
v_val_2291_ = lean_ctor_get(v_otherwise_x3f_2228_, 0);
lean_inc(v_val_2291_);
lean_dec_ref_known(v_otherwise_x3f_2228_, 1);
v___x_2292_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_2291_, v___y_2284_, v___y_2285_, v___y_2286_, v___y_2287_, v___y_2288_, v___y_2289_);
if (lean_obj_tag(v___x_2292_) == 0)
{
lean_object* v_a_2293_; 
v_a_2293_ = lean_ctor_get(v___x_2292_, 0);
lean_inc(v_a_2293_);
lean_dec_ref_known(v___x_2292_, 1);
v___y_2270_ = v_rhs_2283_;
v_otherwise_2271_ = v_a_2293_;
v___y_2272_ = v___y_2284_;
v___y_2273_ = v___y_2285_;
v___y_2274_ = v___y_2286_;
v___y_2275_ = v___y_2287_;
v___y_2276_ = v___y_2288_;
v___y_2277_ = v___y_2289_;
goto v___jp_2269_;
}
else
{
lean_dec_ref(v_rhs_2283_);
lean_dec(v_body_x3f_2229_);
lean_dec_ref(v_reassigned_2226_);
return v___x_2292_;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3(void){
_start:
{
lean_object* v___x_2305_; lean_object* v___x_2306_; 
v___x_2305_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__2));
v___x_2306_ = l_Lean_stringToMessageData(v___x_2305_);
return v___x_2306_;
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5(void){
_start:
{
lean_object* v___x_2308_; lean_object* v___x_2309_; 
v___x_2308_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__4));
v___x_2309_ = l_Lean_stringToMessageData(v___x_2308_);
return v___x_2309_;
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7(void){
_start:
{
lean_object* v___x_2311_; lean_object* v___x_2312_; 
v___x_2311_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__6));
v___x_2312_ = l_Lean_stringToMessageData(v___x_2311_);
return v___x_2312_;
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9(void){
_start:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; 
v___x_2314_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__8));
v___x_2315_ = l_Lean_stringToMessageData(v___x_2314_);
return v___x_2315_;
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5(void){
_start:
{
lean_object* v___x_2389_; lean_object* v___x_2390_; 
v___x_2389_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__4));
v___x_2390_ = l_Lean_stringToMessageData(v___x_2389_);
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(uint8_t v_reassignment_2400_, lean_object* v_decl_2401_, lean_object* v_a_2402_, lean_object* v_a_2403_, lean_object* v_a_2404_, lean_object* v_a_2405_, lean_object* v_a_2406_, lean_object* v_a_2407_){
_start:
{
lean_object* v___y_2410_; lean_object* v___y_2411_; lean_object* v___y_2412_; lean_object* v___y_2413_; lean_object* v___y_2414_; lean_object* v___y_2415_; lean_object* v___y_2416_; lean_object* v___y_2417_; lean_object* v___y_2422_; lean_object* v___y_2423_; lean_object* v___y_2424_; lean_object* v_reassigns_2425_; lean_object* v___y_2426_; lean_object* v___y_2427_; lean_object* v___y_2428_; lean_object* v___y_2429_; lean_object* v___y_2430_; lean_object* v___y_2431_; lean_object* v___x_2437_; uint8_t v___x_2438_; 
v___x_2437_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1));
lean_inc(v_decl_2401_);
v___x_2438_ = l_Lean_Syntax_isOfKind(v_decl_2401_, v___x_2437_);
if (v___x_2438_ == 0)
{
lean_object* v___x_2439_; uint8_t v___x_2440_; 
v___x_2439_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3));
lean_inc(v_decl_2401_);
v___x_2440_ = l_Lean_Syntax_isOfKind(v_decl_2401_, v___x_2439_);
if (v___x_2440_ == 0)
{
lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2441_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_2442_ = lean_box(0);
v___x_2443_ = l_Lean_Syntax_formatStx(v_decl_2401_, v___x_2442_, v___x_2440_);
v___x_2444_ = l_Std_Format_defWidth;
v___x_2445_ = lean_unsigned_to_nat(0u);
v___x_2446_ = l_Std_Format_pretty(v___x_2443_, v___x_2444_, v___x_2445_, v___x_2445_);
v___x_2447_ = l_Lean_stringToMessageData(v___x_2446_);
v___x_2448_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2448_, 0, v___x_2441_);
lean_ctor_set(v___x_2448_, 1, v___x_2447_);
v___x_2449_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_2448_, v_a_2402_, v_a_2403_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_);
return v___x_2449_;
}
else
{
lean_object* v___x_2450_; lean_object* v_pattern_2451_; lean_object* v___y_2453_; lean_object* v_otherwise_x3f_2454_; lean_object* v_body_x3f_x3f_2455_; lean_object* v___y_2456_; lean_object* v___y_2457_; lean_object* v___y_2458_; lean_object* v___y_2459_; lean_object* v___y_2460_; lean_object* v___y_2461_; lean_object* v___y_2474_; lean_object* v___y_2475_; lean_object* v_body_x3f_x3f_2476_; lean_object* v___y_2477_; lean_object* v___y_2478_; lean_object* v___y_2479_; lean_object* v___y_2480_; lean_object* v___y_2481_; lean_object* v___y_2482_; lean_object* v___x_2485_; lean_object* v___y_2487_; lean_object* v___y_2488_; lean_object* v___y_2489_; lean_object* v___y_2490_; lean_object* v___y_2491_; lean_object* v___y_2492_; lean_object* v___x_2524_; uint8_t v___x_2525_; 
v___x_2450_ = lean_unsigned_to_nat(0u);
v_pattern_2451_ = l_Lean_Syntax_getArg(v_decl_2401_, v___x_2450_);
v___x_2485_ = lean_unsigned_to_nat(1u);
v___x_2524_ = l_Lean_Syntax_getArg(v_decl_2401_, v___x_2485_);
v___x_2525_ = l_Lean_Syntax_isNone(v___x_2524_);
if (v___x_2525_ == 0)
{
uint8_t v___x_2526_; 
lean_inc(v___x_2524_);
v___x_2526_ = l_Lean_Syntax_matchesNull(v___x_2524_, v___x_2485_);
if (v___x_2526_ == 0)
{
lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; 
lean_dec(v___x_2524_);
lean_dec(v_pattern_2451_);
v___x_2527_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_2528_ = lean_box(0);
v___x_2529_ = l_Lean_Syntax_formatStx(v_decl_2401_, v___x_2528_, v___x_2526_);
v___x_2530_ = l_Std_Format_defWidth;
v___x_2531_ = l_Std_Format_pretty(v___x_2529_, v___x_2530_, v___x_2450_, v___x_2450_);
v___x_2532_ = l_Lean_stringToMessageData(v___x_2531_);
v___x_2533_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2533_, 0, v___x_2527_);
lean_ctor_set(v___x_2533_, 1, v___x_2532_);
v___x_2534_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_2533_, v_a_2402_, v_a_2403_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_);
return v___x_2534_;
}
else
{
lean_object* v___x_2535_; lean_object* v___x_2536_; uint8_t v___x_2537_; 
v___x_2535_ = l_Lean_Syntax_getArg(v___x_2524_, v___x_2450_);
lean_dec(v___x_2524_);
v___x_2536_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8));
v___x_2537_ = l_Lean_Syntax_isOfKind(v___x_2535_, v___x_2536_);
if (v___x_2537_ == 0)
{
lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; 
lean_dec(v_pattern_2451_);
v___x_2538_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_2539_ = lean_box(0);
v___x_2540_ = l_Lean_Syntax_formatStx(v_decl_2401_, v___x_2539_, v___x_2537_);
v___x_2541_ = l_Std_Format_defWidth;
v___x_2542_ = l_Std_Format_pretty(v___x_2540_, v___x_2541_, v___x_2450_, v___x_2450_);
v___x_2543_ = l_Lean_stringToMessageData(v___x_2542_);
v___x_2544_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2544_, 0, v___x_2538_);
lean_ctor_set(v___x_2544_, 1, v___x_2543_);
v___x_2545_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_2544_, v_a_2402_, v_a_2403_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_);
return v___x_2545_;
}
else
{
v___y_2487_ = v_a_2402_;
v___y_2488_ = v_a_2403_;
v___y_2489_ = v_a_2404_;
v___y_2490_ = v_a_2405_;
v___y_2491_ = v_a_2406_;
v___y_2492_ = v_a_2407_;
goto v___jp_2486_;
}
}
}
else
{
lean_dec(v___x_2524_);
v___y_2487_ = v_a_2402_;
v___y_2488_ = v_a_2403_;
v___y_2489_ = v_a_2404_;
v___y_2490_ = v_a_2405_;
v___y_2491_ = v_a_2406_;
v___y_2492_ = v_a_2407_;
goto v___jp_2486_;
}
v___jp_2452_:
{
if (v_reassignment_2400_ == 0)
{
lean_object* v___x_2462_; 
lean_dec(v_pattern_2451_);
v___x_2462_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6));
v___y_2422_ = v_otherwise_x3f_2454_;
v___y_2423_ = v_body_x3f_x3f_2455_;
v___y_2424_ = v___y_2453_;
v_reassigns_2425_ = v___x_2462_;
v___y_2426_ = v___y_2456_;
v___y_2427_ = v___y_2457_;
v___y_2428_ = v___y_2458_;
v___y_2429_ = v___y_2459_;
v___y_2430_ = v___y_2460_;
v___y_2431_ = v___y_2461_;
goto v___jp_2421_;
}
else
{
lean_object* v___x_2463_; 
v___x_2463_ = l_Lean_Elab_Do_getPatternVarsEx(v_pattern_2451_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_, v___y_2460_, v___y_2461_);
if (lean_obj_tag(v___x_2463_) == 0)
{
lean_object* v_a_2464_; 
v_a_2464_ = lean_ctor_get(v___x_2463_, 0);
lean_inc(v_a_2464_);
lean_dec_ref_known(v___x_2463_, 1);
v___y_2422_ = v_otherwise_x3f_2454_;
v___y_2423_ = v_body_x3f_x3f_2455_;
v___y_2424_ = v___y_2453_;
v_reassigns_2425_ = v_a_2464_;
v___y_2426_ = v___y_2456_;
v___y_2427_ = v___y_2457_;
v___y_2428_ = v___y_2458_;
v___y_2429_ = v___y_2459_;
v___y_2430_ = v___y_2460_;
v___y_2431_ = v___y_2461_;
goto v___jp_2421_;
}
else
{
lean_object* v_a_2465_; lean_object* v___x_2467_; uint8_t v_isShared_2468_; uint8_t v_isSharedCheck_2472_; 
lean_dec(v_body_x3f_x3f_2455_);
lean_dec(v_otherwise_x3f_2454_);
lean_dec(v___y_2453_);
v_a_2465_ = lean_ctor_get(v___x_2463_, 0);
v_isSharedCheck_2472_ = !lean_is_exclusive(v___x_2463_);
if (v_isSharedCheck_2472_ == 0)
{
v___x_2467_ = v___x_2463_;
v_isShared_2468_ = v_isSharedCheck_2472_;
goto v_resetjp_2466_;
}
else
{
lean_inc(v_a_2465_);
lean_dec(v___x_2463_);
v___x_2467_ = lean_box(0);
v_isShared_2468_ = v_isSharedCheck_2472_;
goto v_resetjp_2466_;
}
v_resetjp_2466_:
{
lean_object* v___x_2470_; 
if (v_isShared_2468_ == 0)
{
v___x_2470_ = v___x_2467_;
goto v_reusejp_2469_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v_a_2465_);
v___x_2470_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2469_;
}
v_reusejp_2469_:
{
return v___x_2470_;
}
}
}
}
}
v___jp_2473_:
{
lean_object* v___x_2483_; lean_object* v___x_2484_; 
v___x_2483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2483_, 0, v___y_2474_);
v___x_2484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2484_, 0, v_body_x3f_x3f_2476_);
v___y_2453_ = v___y_2475_;
v_otherwise_x3f_2454_ = v___x_2483_;
v_body_x3f_x3f_2455_ = v___x_2484_;
v___y_2456_ = v___y_2477_;
v___y_2457_ = v___y_2478_;
v___y_2458_ = v___y_2479_;
v___y_2459_ = v___y_2480_;
v___y_2460_ = v___y_2481_;
v___y_2461_ = v___y_2482_;
goto v___jp_2452_;
}
v___jp_2486_:
{
lean_object* v___x_2493_; lean_object* v_rhs_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; uint8_t v___x_2497_; 
v___x_2493_ = lean_unsigned_to_nat(3u);
v_rhs_2494_ = l_Lean_Syntax_getArg(v_decl_2401_, v___x_2493_);
v___x_2495_ = lean_unsigned_to_nat(4u);
v___x_2496_ = l_Lean_Syntax_getArg(v_decl_2401_, v___x_2495_);
v___x_2497_ = l_Lean_Syntax_isNone(v___x_2496_);
if (v___x_2497_ == 0)
{
uint8_t v___x_2498_; 
lean_inc(v___x_2496_);
v___x_2498_ = l_Lean_Syntax_matchesNull(v___x_2496_, v___x_2493_);
if (v___x_2498_ == 0)
{
lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; 
lean_dec(v___x_2496_);
lean_dec(v_rhs_2494_);
lean_dec(v_pattern_2451_);
v___x_2499_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_2500_ = lean_box(0);
v___x_2501_ = l_Lean_Syntax_formatStx(v_decl_2401_, v___x_2500_, v___x_2498_);
v___x_2502_ = l_Std_Format_defWidth;
v___x_2503_ = l_Std_Format_pretty(v___x_2501_, v___x_2502_, v___x_2450_, v___x_2450_);
v___x_2504_ = l_Lean_stringToMessageData(v___x_2503_);
v___x_2505_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2505_, 0, v___x_2499_);
lean_ctor_set(v___x_2505_, 1, v___x_2504_);
v___x_2506_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_2505_, v___y_2487_, v___y_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_);
return v___x_2506_;
}
else
{
lean_object* v___x_2507_; lean_object* v_otherwise_x3f_2508_; lean_object* v___x_2509_; uint8_t v___x_2510_; 
v___x_2507_ = lean_unsigned_to_nat(2u);
v_otherwise_x3f_2508_ = l_Lean_Syntax_getArg(v___x_2496_, v___x_2485_);
v___x_2509_ = l_Lean_Syntax_getArg(v___x_2496_, v___x_2507_);
lean_dec(v___x_2496_);
v___x_2510_ = l_Lean_Syntax_isNone(v___x_2509_);
if (v___x_2510_ == 0)
{
uint8_t v___x_2511_; 
lean_inc(v___x_2509_);
v___x_2511_ = l_Lean_Syntax_matchesNull(v___x_2509_, v___x_2485_);
if (v___x_2511_ == 0)
{
lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; 
lean_dec(v___x_2509_);
lean_dec(v_otherwise_x3f_2508_);
lean_dec(v_rhs_2494_);
lean_dec(v_pattern_2451_);
v___x_2512_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_2513_ = lean_box(0);
v___x_2514_ = l_Lean_Syntax_formatStx(v_decl_2401_, v___x_2513_, v___x_2511_);
v___x_2515_ = l_Std_Format_defWidth;
v___x_2516_ = l_Std_Format_pretty(v___x_2514_, v___x_2515_, v___x_2450_, v___x_2450_);
v___x_2517_ = l_Lean_stringToMessageData(v___x_2516_);
v___x_2518_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2518_, 0, v___x_2512_);
lean_ctor_set(v___x_2518_, 1, v___x_2517_);
v___x_2519_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_2518_, v___y_2487_, v___y_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_);
return v___x_2519_;
}
else
{
lean_object* v_body_x3f_x3f_2520_; lean_object* v___x_2521_; 
lean_dec(v_decl_2401_);
v_body_x3f_x3f_2520_ = l_Lean_Syntax_getArg(v___x_2509_, v___x_2450_);
lean_dec(v___x_2509_);
v___x_2521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2521_, 0, v_body_x3f_x3f_2520_);
v___y_2474_ = v_otherwise_x3f_2508_;
v___y_2475_ = v_rhs_2494_;
v_body_x3f_x3f_2476_ = v___x_2521_;
v___y_2477_ = v___y_2487_;
v___y_2478_ = v___y_2488_;
v___y_2479_ = v___y_2489_;
v___y_2480_ = v___y_2490_;
v___y_2481_ = v___y_2491_;
v___y_2482_ = v___y_2492_;
goto v___jp_2473_;
}
}
else
{
lean_object* v___x_2522_; 
lean_dec(v___x_2509_);
lean_dec(v_decl_2401_);
v___x_2522_ = lean_box(0);
v___y_2474_ = v_otherwise_x3f_2508_;
v___y_2475_ = v_rhs_2494_;
v_body_x3f_x3f_2476_ = v___x_2522_;
v___y_2477_ = v___y_2487_;
v___y_2478_ = v___y_2488_;
v___y_2479_ = v___y_2489_;
v___y_2480_ = v___y_2490_;
v___y_2481_ = v___y_2491_;
v___y_2482_ = v___y_2492_;
goto v___jp_2473_;
}
}
}
else
{
lean_object* v___x_2523_; 
lean_dec(v___x_2496_);
lean_dec(v_decl_2401_);
v___x_2523_ = lean_box(0);
v___y_2453_ = v_rhs_2494_;
v_otherwise_x3f_2454_ = v___x_2523_;
v_body_x3f_x3f_2455_ = v___x_2523_;
v___y_2456_ = v___y_2487_;
v___y_2457_ = v___y_2488_;
v___y_2458_ = v___y_2489_;
v___y_2459_ = v___y_2490_;
v___y_2460_ = v___y_2491_;
v___y_2461_ = v___y_2492_;
goto v___jp_2452_;
}
}
}
}
else
{
lean_object* v___x_2546_; lean_object* v_x_2547_; lean_object* v___y_2549_; lean_object* v___y_2550_; lean_object* v___y_2551_; lean_object* v___y_2552_; lean_object* v___y_2553_; lean_object* v___y_2554_; lean_object* v___x_2561_; uint8_t v___x_2562_; 
v___x_2546_ = lean_unsigned_to_nat(0u);
v_x_2547_ = l_Lean_Syntax_getArg(v_decl_2401_, v___x_2546_);
v___x_2561_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__10));
lean_inc(v_x_2547_);
v___x_2562_ = l_Lean_Syntax_isOfKind(v_x_2547_, v___x_2561_);
if (v___x_2562_ == 0)
{
lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; 
lean_dec(v_x_2547_);
v___x_2563_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_2564_ = lean_box(0);
v___x_2565_ = l_Lean_Syntax_formatStx(v_decl_2401_, v___x_2564_, v___x_2562_);
v___x_2566_ = l_Std_Format_defWidth;
v___x_2567_ = l_Std_Format_pretty(v___x_2565_, v___x_2566_, v___x_2546_, v___x_2546_);
v___x_2568_ = l_Lean_stringToMessageData(v___x_2567_);
v___x_2569_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2563_);
lean_ctor_set(v___x_2569_, 1, v___x_2568_);
v___x_2570_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_2569_, v_a_2402_, v_a_2403_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_);
return v___x_2570_;
}
else
{
lean_object* v___x_2571_; lean_object* v___x_2572_; uint8_t v___x_2573_; 
v___x_2571_ = lean_unsigned_to_nat(1u);
v___x_2572_ = l_Lean_Syntax_getArg(v_decl_2401_, v___x_2571_);
v___x_2573_ = l_Lean_Syntax_isNone(v___x_2572_);
if (v___x_2573_ == 0)
{
uint8_t v___x_2574_; 
lean_inc(v___x_2572_);
v___x_2574_ = l_Lean_Syntax_matchesNull(v___x_2572_, v___x_2571_);
if (v___x_2574_ == 0)
{
lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; 
lean_dec(v___x_2572_);
lean_dec(v_x_2547_);
v___x_2575_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_2576_ = lean_box(0);
v___x_2577_ = l_Lean_Syntax_formatStx(v_decl_2401_, v___x_2576_, v___x_2574_);
v___x_2578_ = l_Std_Format_defWidth;
v___x_2579_ = l_Std_Format_pretty(v___x_2577_, v___x_2578_, v___x_2546_, v___x_2546_);
v___x_2580_ = l_Lean_stringToMessageData(v___x_2579_);
v___x_2581_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2581_, 0, v___x_2575_);
lean_ctor_set(v___x_2581_, 1, v___x_2580_);
v___x_2582_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_2581_, v_a_2402_, v_a_2403_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_);
return v___x_2582_;
}
else
{
lean_object* v___x_2583_; lean_object* v___x_2584_; uint8_t v___x_2585_; 
v___x_2583_ = l_Lean_Syntax_getArg(v___x_2572_, v___x_2546_);
lean_dec(v___x_2572_);
v___x_2584_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8));
v___x_2585_ = l_Lean_Syntax_isOfKind(v___x_2583_, v___x_2584_);
if (v___x_2585_ == 0)
{
lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; 
lean_dec(v_x_2547_);
v___x_2586_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_2587_ = lean_box(0);
v___x_2588_ = l_Lean_Syntax_formatStx(v_decl_2401_, v___x_2587_, v___x_2585_);
v___x_2589_ = l_Std_Format_defWidth;
v___x_2590_ = l_Std_Format_pretty(v___x_2588_, v___x_2589_, v___x_2546_, v___x_2546_);
v___x_2591_ = l_Lean_stringToMessageData(v___x_2590_);
v___x_2592_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2586_);
lean_ctor_set(v___x_2592_, 1, v___x_2591_);
v___x_2593_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_2592_, v_a_2402_, v_a_2403_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_);
return v___x_2593_;
}
else
{
v___y_2549_ = v_a_2402_;
v___y_2550_ = v_a_2403_;
v___y_2551_ = v_a_2404_;
v___y_2552_ = v_a_2405_;
v___y_2553_ = v_a_2406_;
v___y_2554_ = v_a_2407_;
goto v___jp_2548_;
}
}
}
else
{
lean_dec(v___x_2572_);
v___y_2549_ = v_a_2402_;
v___y_2550_ = v_a_2403_;
v___y_2551_ = v_a_2404_;
v___y_2552_ = v_a_2405_;
v___y_2553_ = v_a_2406_;
v___y_2554_ = v_a_2407_;
goto v___jp_2548_;
}
}
v___jp_2548_:
{
lean_object* v___x_2555_; lean_object* v_rhs_2556_; 
v___x_2555_ = lean_unsigned_to_nat(3u);
v_rhs_2556_ = l_Lean_Syntax_getArg(v_decl_2401_, v___x_2555_);
lean_dec(v_decl_2401_);
if (v_reassignment_2400_ == 0)
{
lean_object* v___x_2557_; 
lean_dec(v_x_2547_);
v___x_2557_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6));
v___y_2410_ = v___y_2554_;
v___y_2411_ = v___y_2549_;
v___y_2412_ = v___y_2553_;
v___y_2413_ = v___y_2552_;
v___y_2414_ = v___y_2550_;
v___y_2415_ = v_rhs_2556_;
v___y_2416_ = v___y_2551_;
v___y_2417_ = v___x_2557_;
goto v___jp_2409_;
}
else
{
lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; 
v___x_2558_ = lean_unsigned_to_nat(1u);
v___x_2559_ = lean_mk_empty_array_with_capacity(v___x_2558_);
v___x_2560_ = lean_array_push(v___x_2559_, v_x_2547_);
v___y_2410_ = v___y_2554_;
v___y_2411_ = v___y_2549_;
v___y_2412_ = v___y_2553_;
v___y_2413_ = v___y_2552_;
v___y_2414_ = v___y_2550_;
v___y_2415_ = v_rhs_2556_;
v___y_2416_ = v___y_2551_;
v___y_2417_ = v___x_2560_;
goto v___jp_2409_;
}
}
}
v___jp_2409_:
{
lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; 
v___x_2418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2418_, 0, v___y_2415_);
v___x_2419_ = lean_box(0);
v___x_2420_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v___y_2417_, v___x_2418_, v___x_2419_, v___x_2419_, v___y_2411_, v___y_2414_, v___y_2416_, v___y_2413_, v___y_2412_, v___y_2410_);
return v___x_2420_;
}
v___jp_2421_:
{
lean_object* v___x_2432_; 
v___x_2432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2432_, 0, v___y_2424_);
if (lean_obj_tag(v___y_2423_) == 0)
{
lean_object* v___x_2433_; lean_object* v___x_2434_; 
v___x_2433_ = lean_box(0);
v___x_2434_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_reassigns_2425_, v___x_2432_, v___y_2422_, v___x_2433_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_);
return v___x_2434_;
}
else
{
lean_object* v_val_2435_; lean_object* v___x_2436_; 
v_val_2435_ = lean_ctor_get(v___y_2423_, 0);
lean_inc(v_val_2435_);
lean_dec_ref_known(v___y_2423_, 1);
v___x_2436_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_reassigns_2425_, v___x_2432_, v___y_2422_, v_val_2435_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_);
return v___x_2436_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6(lean_object* v_as_2710_, size_t v_sz_2711_, size_t v_i_2712_, lean_object* v_b_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_){
_start:
{
uint8_t v___x_2721_; 
v___x_2721_ = lean_usize_dec_lt(v_i_2712_, v_sz_2711_);
if (v___x_2721_ == 0)
{
lean_object* v___x_2722_; 
v___x_2722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2722_, 0, v_b_2713_);
return v___x_2722_;
}
else
{
lean_object* v_a_2723_; lean_object* v___x_2724_; 
v_a_2723_ = lean_array_uget_borrowed(v_as_2710_, v_i_2712_);
lean_inc(v_a_2723_);
v___x_2724_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_a_2723_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_);
if (lean_obj_tag(v___x_2724_) == 0)
{
lean_object* v_a_2725_; lean_object* v___x_2726_; size_t v___x_2727_; size_t v___x_2728_; 
v_a_2725_ = lean_ctor_get(v___x_2724_, 0);
lean_inc(v_a_2725_);
lean_dec_ref_known(v___x_2724_, 1);
v___x_2726_ = l_Lean_Elab_Do_ControlInfo_alternative(v_a_2725_, v_b_2713_);
v___x_2727_ = ((size_t)1ULL);
v___x_2728_ = lean_usize_add(v_i_2712_, v___x_2727_);
v_i_2712_ = v___x_2728_;
v_b_2713_ = v___x_2726_;
goto _start;
}
else
{
lean_dec_ref(v_b_2713_);
return v___x_2724_;
}
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__5(void){
_start:
{
lean_object* v___x_2743_; lean_object* v___x_2744_; 
v___x_2743_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__4));
v___x_2744_ = l_Lean_stringToMessageData(v___x_2743_);
return v___x_2744_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11(uint8_t v___x_2759_, lean_object* v_as_2760_, size_t v_sz_2761_, size_t v_i_2762_, lean_object* v_b_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_){
_start:
{
lean_object* v_a_2772_; uint8_t v___x_2776_; 
v___x_2776_ = lean_usize_dec_lt(v_i_2762_, v_sz_2761_);
if (v___x_2776_ == 0)
{
lean_object* v___x_2777_; 
v___x_2777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2777_, 0, v_b_2763_);
return v___x_2777_;
}
else
{
lean_object* v___x_2778_; lean_object* v_a_2779_; uint8_t v___x_2780_; 
v___x_2778_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1));
v_a_2779_ = lean_array_uget_borrowed(v_as_2760_, v_i_2762_);
lean_inc(v_a_2779_);
v___x_2780_ = l_Lean_Syntax_isOfKind(v_a_2779_, v___x_2778_);
if (v___x_2780_ == 0)
{
lean_object* v___x_2781_; 
v___x_2781_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
if (lean_obj_tag(v___x_2781_) == 0)
{
lean_dec_ref_known(v___x_2781_, 1);
v_a_2772_ = v_b_2763_;
goto v___jp_2771_;
}
else
{
lean_object* v_a_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2789_; 
lean_dec_ref(v_b_2763_);
v_a_2782_ = lean_ctor_get(v___x_2781_, 0);
v_isSharedCheck_2789_ = !lean_is_exclusive(v___x_2781_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2784_ = v___x_2781_;
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_a_2782_);
lean_dec(v___x_2781_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
lean_object* v___x_2787_; 
if (v_isShared_2785_ == 0)
{
v___x_2787_ = v___x_2784_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v_a_2782_);
v___x_2787_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
return v___x_2787_;
}
}
}
}
else
{
lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___y_2793_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; uint8_t v___x_2815_; 
v___x_2790_ = lean_unsigned_to_nat(1u);
v___x_2791_ = lean_unsigned_to_nat(3u);
v___x_2810_ = l_Lean_Syntax_getArg(v_a_2779_, v___x_2790_);
v___x_2811_ = l_Lean_Syntax_getArgs(v___x_2810_);
lean_dec(v___x_2810_);
v___x_2812_ = lean_unsigned_to_nat(0u);
v___x_2813_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__2));
v___x_2814_ = lean_array_get_size(v___x_2811_);
v___x_2815_ = lean_nat_dec_lt(v___x_2812_, v___x_2814_);
if (v___x_2815_ == 0)
{
lean_dec_ref(v___x_2811_);
v___y_2793_ = v___x_2813_;
goto v___jp_2792_;
}
else
{
lean_object* v___x_2816_; lean_object* v___x_2817_; uint8_t v___x_2818_; 
v___x_2816_ = lean_box(v___x_2780_);
v___x_2817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2817_, 0, v___x_2816_);
lean_ctor_set(v___x_2817_, 1, v___x_2813_);
v___x_2818_ = lean_nat_dec_le(v___x_2814_, v___x_2814_);
if (v___x_2818_ == 0)
{
if (v___x_2815_ == 0)
{
lean_dec_ref_known(v___x_2817_, 2);
lean_dec_ref(v___x_2811_);
v___y_2793_ = v___x_2813_;
goto v___jp_2792_;
}
else
{
size_t v___x_2819_; size_t v___x_2820_; lean_object* v___x_2821_; lean_object* v_snd_2822_; 
v___x_2819_ = ((size_t)0ULL);
v___x_2820_ = lean_usize_of_nat(v___x_2814_);
v___x_2821_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(v___x_2780_, v___x_2759_, v___x_2811_, v___x_2819_, v___x_2820_, v___x_2817_);
lean_dec_ref(v___x_2811_);
v_snd_2822_ = lean_ctor_get(v___x_2821_, 1);
lean_inc(v_snd_2822_);
lean_dec_ref(v___x_2821_);
v___y_2793_ = v_snd_2822_;
goto v___jp_2792_;
}
}
else
{
size_t v___x_2823_; size_t v___x_2824_; lean_object* v___x_2825_; lean_object* v_snd_2826_; 
v___x_2823_ = ((size_t)0ULL);
v___x_2824_ = lean_usize_of_nat(v___x_2814_);
v___x_2825_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(v___x_2780_, v___x_2759_, v___x_2811_, v___x_2823_, v___x_2824_, v___x_2817_);
lean_dec_ref(v___x_2811_);
v_snd_2826_ = lean_ctor_get(v___x_2825_, 1);
lean_inc(v_snd_2826_);
lean_dec_ref(v___x_2825_);
v___y_2793_ = v_snd_2826_;
goto v___jp_2792_;
}
}
v___jp_2792_:
{
size_t v_sz_2794_; size_t v___x_2795_; lean_object* v___x_2796_; 
v_sz_2794_ = lean_array_size(v___y_2793_);
v___x_2795_ = ((size_t)0ULL);
v___x_2796_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(v_sz_2794_, v___x_2795_, v___y_2793_);
if (lean_obj_tag(v___x_2796_) == 0)
{
lean_object* v___x_2797_; 
v___x_2797_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
if (lean_obj_tag(v___x_2797_) == 0)
{
lean_dec_ref_known(v___x_2797_, 1);
v_a_2772_ = v_b_2763_;
goto v___jp_2771_;
}
else
{
lean_object* v_a_2798_; lean_object* v___x_2800_; uint8_t v_isShared_2801_; uint8_t v_isSharedCheck_2805_; 
lean_dec_ref(v_b_2763_);
v_a_2798_ = lean_ctor_get(v___x_2797_, 0);
v_isSharedCheck_2805_ = !lean_is_exclusive(v___x_2797_);
if (v_isSharedCheck_2805_ == 0)
{
v___x_2800_ = v___x_2797_;
v_isShared_2801_ = v_isSharedCheck_2805_;
goto v_resetjp_2799_;
}
else
{
lean_inc(v_a_2798_);
lean_dec(v___x_2797_);
v___x_2800_ = lean_box(0);
v_isShared_2801_ = v_isSharedCheck_2805_;
goto v_resetjp_2799_;
}
v_resetjp_2799_:
{
lean_object* v___x_2803_; 
if (v_isShared_2801_ == 0)
{
v___x_2803_ = v___x_2800_;
goto v_reusejp_2802_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v_a_2798_);
v___x_2803_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2802_;
}
v_reusejp_2802_:
{
return v___x_2803_;
}
}
}
}
else
{
lean_object* v___x_2806_; lean_object* v___x_2807_; 
lean_dec_ref_known(v___x_2796_, 1);
v___x_2806_ = l_Lean_Syntax_getArg(v_a_2779_, v___x_2791_);
v___x_2807_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2806_, v___y_2764_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_, v___y_2769_);
if (lean_obj_tag(v___x_2807_) == 0)
{
lean_object* v_a_2808_; lean_object* v___x_2809_; 
v_a_2808_ = lean_ctor_get(v___x_2807_, 0);
lean_inc(v_a_2808_);
lean_dec_ref_known(v___x_2807_, 1);
v___x_2809_ = l_Lean_Elab_Do_ControlInfo_alternative(v_b_2763_, v_a_2808_);
v_a_2772_ = v___x_2809_;
goto v___jp_2771_;
}
else
{
lean_dec_ref(v_b_2763_);
return v___x_2807_;
}
}
}
}
}
v___jp_2771_:
{
size_t v___x_2773_; size_t v___x_2774_; 
v___x_2773_ = ((size_t)1ULL);
v___x_2774_ = lean_usize_add(v_i_2762_, v___x_2773_);
v_i_2762_ = v___x_2774_;
v_b_2763_ = v_a_2772_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12(lean_object* v_as_2827_, size_t v_sz_2828_, size_t v_i_2829_, lean_object* v_b_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_){
_start:
{
lean_object* v_a_2839_; uint8_t v___x_2843_; 
v___x_2843_ = lean_usize_dec_lt(v_i_2829_, v_sz_2828_);
if (v___x_2843_ == 0)
{
lean_object* v___x_2844_; 
v___x_2844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2844_, 0, v_b_2830_);
return v___x_2844_;
}
else
{
lean_object* v___x_2845_; lean_object* v_a_2846_; lean_object* v___y_2848_; lean_object* v___y_2849_; lean_object* v___y_2850_; lean_object* v___y_2851_; lean_object* v___y_2852_; lean_object* v___y_2853_; lean_object* v___x_2859_; uint8_t v___x_2860_; 
v___x_2845_ = lean_unsigned_to_nat(0u);
v_a_2846_ = lean_array_uget_borrowed(v_as_2827_, v_i_2829_);
v___x_2859_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1));
lean_inc(v_a_2846_);
v___x_2860_ = l_Lean_Syntax_isOfKind(v_a_2846_, v___x_2859_);
if (v___x_2860_ == 0)
{
lean_object* v___x_2861_; uint8_t v___x_2862_; 
v___x_2861_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__3));
lean_inc(v_a_2846_);
v___x_2862_ = l_Lean_Syntax_isOfKind(v_a_2846_, v___x_2861_);
if (v___x_2862_ == 0)
{
lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; 
v___x_2863_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__5);
v___x_2864_ = lean_box(0);
lean_inc(v_a_2846_);
v___x_2865_ = l_Lean_Syntax_formatStx(v_a_2846_, v___x_2864_, v___x_2862_);
v___x_2866_ = l_Std_Format_defWidth;
v___x_2867_ = l_Std_Format_pretty(v___x_2865_, v___x_2866_, v___x_2845_, v___x_2845_);
v___x_2868_ = l_Lean_stringToMessageData(v___x_2867_);
v___x_2869_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2869_, 0, v___x_2863_);
lean_ctor_set(v___x_2869_, 1, v___x_2868_);
v___x_2870_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_2869_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_);
if (lean_obj_tag(v___x_2870_) == 0)
{
lean_dec_ref_known(v___x_2870_, 1);
v_a_2839_ = v_b_2830_;
goto v___jp_2838_;
}
else
{
lean_object* v_a_2871_; lean_object* v___x_2873_; uint8_t v_isShared_2874_; uint8_t v_isSharedCheck_2878_; 
lean_dec_ref(v_b_2830_);
v_a_2871_ = lean_ctor_get(v___x_2870_, 0);
v_isSharedCheck_2878_ = !lean_is_exclusive(v___x_2870_);
if (v_isSharedCheck_2878_ == 0)
{
v___x_2873_ = v___x_2870_;
v_isShared_2874_ = v_isSharedCheck_2878_;
goto v_resetjp_2872_;
}
else
{
lean_inc(v_a_2871_);
lean_dec(v___x_2870_);
v___x_2873_ = lean_box(0);
v_isShared_2874_ = v_isSharedCheck_2878_;
goto v_resetjp_2872_;
}
v_resetjp_2872_:
{
lean_object* v___x_2876_; 
if (v_isShared_2874_ == 0)
{
v___x_2876_ = v___x_2873_;
goto v_reusejp_2875_;
}
else
{
lean_object* v_reuseFailAlloc_2877_; 
v_reuseFailAlloc_2877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2877_, 0, v_a_2871_);
v___x_2876_ = v_reuseFailAlloc_2877_;
goto v_reusejp_2875_;
}
v_reusejp_2875_:
{
return v___x_2876_;
}
}
}
}
else
{
lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; uint8_t v___x_2882_; 
v___x_2879_ = lean_unsigned_to_nat(1u);
v___x_2880_ = l_Lean_Syntax_getArg(v_a_2846_, v___x_2879_);
v___x_2881_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__7));
lean_inc(v___x_2880_);
v___x_2882_ = l_Lean_Syntax_isOfKind(v___x_2880_, v___x_2881_);
if (v___x_2882_ == 0)
{
lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; 
lean_dec(v___x_2880_);
v___x_2883_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__5);
v___x_2884_ = lean_box(0);
lean_inc(v_a_2846_);
v___x_2885_ = l_Lean_Syntax_formatStx(v_a_2846_, v___x_2884_, v___x_2882_);
v___x_2886_ = l_Std_Format_defWidth;
v___x_2887_ = l_Std_Format_pretty(v___x_2885_, v___x_2886_, v___x_2845_, v___x_2845_);
v___x_2888_ = l_Lean_stringToMessageData(v___x_2887_);
v___x_2889_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2889_, 0, v___x_2883_);
lean_ctor_set(v___x_2889_, 1, v___x_2888_);
v___x_2890_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_2889_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_);
if (lean_obj_tag(v___x_2890_) == 0)
{
lean_dec_ref_known(v___x_2890_, 1);
v_a_2839_ = v_b_2830_;
goto v___jp_2838_;
}
else
{
lean_object* v_a_2891_; lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2898_; 
lean_dec_ref(v_b_2830_);
v_a_2891_ = lean_ctor_get(v___x_2890_, 0);
v_isSharedCheck_2898_ = !lean_is_exclusive(v___x_2890_);
if (v_isSharedCheck_2898_ == 0)
{
v___x_2893_ = v___x_2890_;
v_isShared_2894_ = v_isSharedCheck_2898_;
goto v_resetjp_2892_;
}
else
{
lean_inc(v_a_2891_);
lean_dec(v___x_2890_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2898_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v___x_2896_; 
if (v_isShared_2894_ == 0)
{
v___x_2896_ = v___x_2893_;
goto v_reusejp_2895_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v_a_2891_);
v___x_2896_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2895_;
}
v_reusejp_2895_:
{
return v___x_2896_;
}
}
}
}
else
{
lean_object* v___x_2899_; lean_object* v___x_2900_; size_t v_sz_2901_; size_t v___x_2902_; lean_object* v___x_2903_; 
v___x_2899_ = l_Lean_Syntax_getArg(v___x_2880_, v___x_2845_);
lean_dec(v___x_2880_);
v___x_2900_ = l_Lean_Syntax_getArgs(v___x_2899_);
lean_dec(v___x_2899_);
v_sz_2901_ = lean_array_size(v___x_2900_);
v___x_2902_ = ((size_t)0ULL);
v___x_2903_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11(v___x_2860_, v___x_2900_, v_sz_2901_, v___x_2902_, v_b_2830_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_);
lean_dec_ref(v___x_2900_);
if (lean_obj_tag(v___x_2903_) == 0)
{
lean_object* v_a_2904_; 
v_a_2904_ = lean_ctor_get(v___x_2903_, 0);
lean_inc(v_a_2904_);
lean_dec_ref_known(v___x_2903_, 1);
v_a_2839_ = v_a_2904_;
goto v___jp_2838_;
}
else
{
return v___x_2903_;
}
}
}
}
else
{
lean_object* v___x_2905_; lean_object* v___x_2906_; uint8_t v___x_2907_; 
v___x_2905_ = lean_unsigned_to_nat(2u);
v___x_2906_ = l_Lean_Syntax_getArg(v_a_2846_, v___x_2905_);
v___x_2907_ = l_Lean_Syntax_isNone(v___x_2906_);
if (v___x_2907_ == 0)
{
uint8_t v___x_2908_; 
v___x_2908_ = l_Lean_Syntax_matchesNull(v___x_2906_, v___x_2905_);
if (v___x_2908_ == 0)
{
lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; 
v___x_2909_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__5);
v___x_2910_ = lean_box(0);
lean_inc(v_a_2846_);
v___x_2911_ = l_Lean_Syntax_formatStx(v_a_2846_, v___x_2910_, v___x_2908_);
v___x_2912_ = l_Std_Format_defWidth;
v___x_2913_ = l_Std_Format_pretty(v___x_2911_, v___x_2912_, v___x_2845_, v___x_2845_);
v___x_2914_ = l_Lean_stringToMessageData(v___x_2913_);
v___x_2915_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2915_, 0, v___x_2909_);
lean_ctor_set(v___x_2915_, 1, v___x_2914_);
v___x_2916_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_2915_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_);
if (lean_obj_tag(v___x_2916_) == 0)
{
lean_dec_ref_known(v___x_2916_, 1);
v_a_2839_ = v_b_2830_;
goto v___jp_2838_;
}
else
{
lean_object* v_a_2917_; lean_object* v___x_2919_; uint8_t v_isShared_2920_; uint8_t v_isSharedCheck_2924_; 
lean_dec_ref(v_b_2830_);
v_a_2917_ = lean_ctor_get(v___x_2916_, 0);
v_isSharedCheck_2924_ = !lean_is_exclusive(v___x_2916_);
if (v_isSharedCheck_2924_ == 0)
{
v___x_2919_ = v___x_2916_;
v_isShared_2920_ = v_isSharedCheck_2924_;
goto v_resetjp_2918_;
}
else
{
lean_inc(v_a_2917_);
lean_dec(v___x_2916_);
v___x_2919_ = lean_box(0);
v_isShared_2920_ = v_isSharedCheck_2924_;
goto v_resetjp_2918_;
}
v_resetjp_2918_:
{
lean_object* v___x_2922_; 
if (v_isShared_2920_ == 0)
{
v___x_2922_ = v___x_2919_;
goto v_reusejp_2921_;
}
else
{
lean_object* v_reuseFailAlloc_2923_; 
v_reuseFailAlloc_2923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2923_, 0, v_a_2917_);
v___x_2922_ = v_reuseFailAlloc_2923_;
goto v_reusejp_2921_;
}
v_reusejp_2921_:
{
return v___x_2922_;
}
}
}
}
else
{
v___y_2848_ = v___y_2831_;
v___y_2849_ = v___y_2832_;
v___y_2850_ = v___y_2833_;
v___y_2851_ = v___y_2834_;
v___y_2852_ = v___y_2835_;
v___y_2853_ = v___y_2836_;
goto v___jp_2847_;
}
}
else
{
lean_dec(v___x_2906_);
v___y_2848_ = v___y_2831_;
v___y_2849_ = v___y_2832_;
v___y_2850_ = v___y_2833_;
v___y_2851_ = v___y_2834_;
v___y_2852_ = v___y_2835_;
v___y_2853_ = v___y_2836_;
goto v___jp_2847_;
}
}
v___jp_2847_:
{
lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; 
v___x_2854_ = lean_unsigned_to_nat(4u);
v___x_2855_ = l_Lean_Syntax_getArg(v_a_2846_, v___x_2854_);
v___x_2856_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2855_, v___y_2848_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_);
if (lean_obj_tag(v___x_2856_) == 0)
{
lean_object* v_a_2857_; lean_object* v___x_2858_; 
v_a_2857_ = lean_ctor_get(v___x_2856_, 0);
lean_inc(v_a_2857_);
lean_dec_ref_known(v___x_2856_, 1);
v___x_2858_ = l_Lean_Elab_Do_ControlInfo_alternative(v_a_2857_, v_b_2830_);
v_a_2839_ = v___x_2858_;
goto v___jp_2838_;
}
else
{
lean_dec_ref(v_b_2830_);
return v___x_2856_;
}
}
}
v___jp_2838_:
{
size_t v___x_2840_; size_t v___x_2841_; 
v___x_2840_ = ((size_t)1ULL);
v___x_2841_ = lean_usize_add(v_i_2829_, v___x_2840_);
v_i_2829_ = v___x_2841_;
v_b_2830_ = v_a_2839_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(lean_object* v_stx_x3f_2925_, lean_object* v_a_2926_, lean_object* v_a_2927_, lean_object* v_a_2928_, lean_object* v_a_2929_, lean_object* v_a_2930_, lean_object* v_a_2931_){
_start:
{
if (lean_obj_tag(v_stx_x3f_2925_) == 0)
{
lean_object* v___x_2933_; lean_object* v___x_2934_; 
v___x_2933_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v___x_2934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2934_, 0, v___x_2933_);
return v___x_2934_;
}
else
{
lean_object* v_val_2935_; lean_object* v___x_2936_; 
v_val_2935_ = lean_ctor_get(v_stx_x3f_2925_, 0);
lean_inc(v_val_2935_);
lean_dec_ref_known(v_stx_x3f_2925_, 1);
v___x_2936_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_2935_, v_a_2926_, v_a_2927_, v_a_2928_, v_a_2929_, v_a_2930_, v_a_2931_);
return v___x_2936_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__17(uint8_t v___x_2952_, lean_object* v_as_2953_, size_t v_sz_2954_, size_t v_i_2955_, lean_object* v_b_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_){
_start:
{
lean_object* v_a_2965_; uint8_t v___x_2969_; 
v___x_2969_ = lean_usize_dec_lt(v_i_2955_, v_sz_2954_);
if (v___x_2969_ == 0)
{
lean_object* v___x_2970_; 
v___x_2970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2970_, 0, v_b_2956_);
return v___x_2970_;
}
else
{
lean_object* v___x_2971_; lean_object* v_a_2972_; uint8_t v___x_2973_; 
v___x_2971_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1));
v_a_2972_ = lean_array_uget_borrowed(v_as_2953_, v_i_2955_);
lean_inc(v_a_2972_);
v___x_2973_ = l_Lean_Syntax_isOfKind(v_a_2972_, v___x_2971_);
if (v___x_2973_ == 0)
{
lean_object* v___x_2974_; 
v___x_2974_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
if (lean_obj_tag(v___x_2974_) == 0)
{
lean_dec_ref_known(v___x_2974_, 1);
v_a_2965_ = v_b_2956_;
goto v___jp_2964_;
}
else
{
lean_object* v_a_2975_; lean_object* v___x_2977_; uint8_t v_isShared_2978_; uint8_t v_isSharedCheck_2982_; 
lean_dec_ref(v_b_2956_);
v_a_2975_ = lean_ctor_get(v___x_2974_, 0);
v_isSharedCheck_2982_ = !lean_is_exclusive(v___x_2974_);
if (v_isSharedCheck_2982_ == 0)
{
v___x_2977_ = v___x_2974_;
v_isShared_2978_ = v_isSharedCheck_2982_;
goto v_resetjp_2976_;
}
else
{
lean_inc(v_a_2975_);
lean_dec(v___x_2974_);
v___x_2977_ = lean_box(0);
v_isShared_2978_ = v_isSharedCheck_2982_;
goto v_resetjp_2976_;
}
v_resetjp_2976_:
{
lean_object* v___x_2980_; 
if (v_isShared_2978_ == 0)
{
v___x_2980_ = v___x_2977_;
goto v_reusejp_2979_;
}
else
{
lean_object* v_reuseFailAlloc_2981_; 
v_reuseFailAlloc_2981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2981_, 0, v_a_2975_);
v___x_2980_ = v_reuseFailAlloc_2981_;
goto v_reusejp_2979_;
}
v_reusejp_2979_:
{
return v___x_2980_;
}
}
}
}
else
{
lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___y_2986_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; uint8_t v___x_3008_; 
v___x_2983_ = lean_unsigned_to_nat(1u);
v___x_2984_ = lean_unsigned_to_nat(3u);
v___x_3003_ = l_Lean_Syntax_getArg(v_a_2972_, v___x_2983_);
v___x_3004_ = l_Lean_Syntax_getArgs(v___x_3003_);
lean_dec(v___x_3003_);
v___x_3005_ = lean_unsigned_to_nat(0u);
v___x_3006_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__2));
v___x_3007_ = lean_array_get_size(v___x_3004_);
v___x_3008_ = lean_nat_dec_lt(v___x_3005_, v___x_3007_);
if (v___x_3008_ == 0)
{
lean_dec_ref(v___x_3004_);
v___y_2986_ = v___x_3006_;
goto v___jp_2985_;
}
else
{
lean_object* v___x_3009_; lean_object* v___x_3010_; uint8_t v___x_3011_; 
v___x_3009_ = lean_box(v___x_2973_);
v___x_3010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3010_, 0, v___x_3009_);
lean_ctor_set(v___x_3010_, 1, v___x_3006_);
v___x_3011_ = lean_nat_dec_le(v___x_3007_, v___x_3007_);
if (v___x_3011_ == 0)
{
if (v___x_3008_ == 0)
{
lean_dec_ref_known(v___x_3010_, 2);
lean_dec_ref(v___x_3004_);
v___y_2986_ = v___x_3006_;
goto v___jp_2985_;
}
else
{
size_t v___x_3012_; size_t v___x_3013_; lean_object* v___x_3014_; lean_object* v_snd_3015_; 
v___x_3012_ = ((size_t)0ULL);
v___x_3013_ = lean_usize_of_nat(v___x_3007_);
v___x_3014_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(v___x_2973_, v___x_2952_, v___x_3004_, v___x_3012_, v___x_3013_, v___x_3010_);
lean_dec_ref(v___x_3004_);
v_snd_3015_ = lean_ctor_get(v___x_3014_, 1);
lean_inc(v_snd_3015_);
lean_dec_ref(v___x_3014_);
v___y_2986_ = v_snd_3015_;
goto v___jp_2985_;
}
}
else
{
size_t v___x_3016_; size_t v___x_3017_; lean_object* v___x_3018_; lean_object* v_snd_3019_; 
v___x_3016_ = ((size_t)0ULL);
v___x_3017_ = lean_usize_of_nat(v___x_3007_);
v___x_3018_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(v___x_2973_, v___x_2952_, v___x_3004_, v___x_3016_, v___x_3017_, v___x_3010_);
lean_dec_ref(v___x_3004_);
v_snd_3019_ = lean_ctor_get(v___x_3018_, 1);
lean_inc(v_snd_3019_);
lean_dec_ref(v___x_3018_);
v___y_2986_ = v_snd_3019_;
goto v___jp_2985_;
}
}
v___jp_2985_:
{
size_t v_sz_2987_; size_t v___x_2988_; lean_object* v___x_2989_; 
v_sz_2987_ = lean_array_size(v___y_2986_);
v___x_2988_ = ((size_t)0ULL);
v___x_2989_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(v_sz_2987_, v___x_2988_, v___y_2986_);
if (lean_obj_tag(v___x_2989_) == 0)
{
lean_object* v___x_2990_; 
v___x_2990_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
if (lean_obj_tag(v___x_2990_) == 0)
{
lean_dec_ref_known(v___x_2990_, 1);
v_a_2965_ = v_b_2956_;
goto v___jp_2964_;
}
else
{
lean_object* v_a_2991_; lean_object* v___x_2993_; uint8_t v_isShared_2994_; uint8_t v_isSharedCheck_2998_; 
lean_dec_ref(v_b_2956_);
v_a_2991_ = lean_ctor_get(v___x_2990_, 0);
v_isSharedCheck_2998_ = !lean_is_exclusive(v___x_2990_);
if (v_isSharedCheck_2998_ == 0)
{
v___x_2993_ = v___x_2990_;
v_isShared_2994_ = v_isSharedCheck_2998_;
goto v_resetjp_2992_;
}
else
{
lean_inc(v_a_2991_);
lean_dec(v___x_2990_);
v___x_2993_ = lean_box(0);
v_isShared_2994_ = v_isSharedCheck_2998_;
goto v_resetjp_2992_;
}
v_resetjp_2992_:
{
lean_object* v___x_2996_; 
if (v_isShared_2994_ == 0)
{
v___x_2996_ = v___x_2993_;
goto v_reusejp_2995_;
}
else
{
lean_object* v_reuseFailAlloc_2997_; 
v_reuseFailAlloc_2997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2997_, 0, v_a_2991_);
v___x_2996_ = v_reuseFailAlloc_2997_;
goto v_reusejp_2995_;
}
v_reusejp_2995_:
{
return v___x_2996_;
}
}
}
}
else
{
lean_object* v___x_2999_; lean_object* v___x_3000_; 
lean_dec_ref_known(v___x_2989_, 1);
v___x_2999_ = l_Lean_Syntax_getArg(v_a_2972_, v___x_2984_);
v___x_3000_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2999_, v___y_2957_, v___y_2958_, v___y_2959_, v___y_2960_, v___y_2961_, v___y_2962_);
if (lean_obj_tag(v___x_3000_) == 0)
{
lean_object* v_a_3001_; lean_object* v___x_3002_; 
v_a_3001_ = lean_ctor_get(v___x_3000_, 0);
lean_inc(v_a_3001_);
lean_dec_ref_known(v___x_3000_, 1);
v___x_3002_ = l_Lean_Elab_Do_ControlInfo_alternative(v_b_2956_, v_a_3001_);
v_a_2965_ = v___x_3002_;
goto v___jp_2964_;
}
else
{
lean_dec_ref(v_b_2956_);
return v___x_3000_;
}
}
}
}
}
v___jp_2964_:
{
size_t v___x_2966_; size_t v___x_2967_; 
v___x_2966_ = ((size_t)1ULL);
v___x_2967_ = lean_usize_add(v_i_2955_, v___x_2966_);
v_i_2955_ = v___x_2967_;
v_b_2956_ = v_a_2965_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem(lean_object* v_stx_3056_, lean_object* v_a_3057_, lean_object* v_a_3058_, lean_object* v_a_3059_, lean_object* v_a_3060_, lean_object* v_a_3061_, lean_object* v_a_3062_){
_start:
{
lean_object* v___y_3065_; lean_object* v_bodyInfo_3066_; lean_object* v___y_3070_; lean_object* v_bodyInfo_3071_; lean_object* v___y_3075_; lean_object* v___y_3076_; lean_object* v___y_3077_; lean_object* v___y_3078_; lean_object* v___y_3079_; lean_object* v___y_3080_; lean_object* v___y_3081_; lean_object* v___y_3082_; lean_object* v___x_3087_; lean_object* v_env_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; 
v___x_3087_ = lean_st_ref_get(v_a_3062_);
v_env_3088_ = lean_ctor_get(v___x_3087_, 0);
lean_inc_ref(v_env_3088_);
lean_dec(v___x_3087_);
lean_inc(v_stx_3056_);
v___x_3089_ = lean_alloc_closure((void*)(l_Lean_Elab_expandMacroImpl_x3f___boxed), 4, 2);
lean_closure_set(v___x_3089_, 0, v_env_3088_);
lean_closure_set(v___x_3089_, 1, v_stx_3056_);
v___x_3090_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(v___x_3089_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
if (lean_obj_tag(v___x_3090_) == 0)
{
lean_object* v_a_3091_; lean_object* v___x_3093_; uint8_t v_isShared_3094_; uint8_t v_isSharedCheck_5530_; 
v_a_3091_ = lean_ctor_get(v___x_3090_, 0);
v_isSharedCheck_5530_ = !lean_is_exclusive(v___x_3090_);
if (v_isSharedCheck_5530_ == 0)
{
v___x_3093_ = v___x_3090_;
v_isShared_3094_ = v_isSharedCheck_5530_;
goto v_resetjp_3092_;
}
else
{
lean_inc(v_a_3091_);
lean_dec(v___x_3090_);
v___x_3093_ = lean_box(0);
v_isShared_3094_ = v_isSharedCheck_5530_;
goto v_resetjp_3092_;
}
v_resetjp_3092_:
{
if (lean_obj_tag(v_a_3091_) == 1)
{
lean_object* v_val_3095_; lean_object* v_snd_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; 
lean_del_object(v___x_3093_);
lean_dec(v_stx_3056_);
v_val_3095_ = lean_ctor_get(v_a_3091_, 0);
lean_inc(v_val_3095_);
lean_dec_ref_known(v_a_3091_, 1);
v_snd_3096_ = lean_ctor_get(v_val_3095_, 1);
lean_inc(v_snd_3096_);
lean_dec(v_val_3095_);
v___x_3097_ = lean_alloc_closure((void*)(l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___boxed), 4, 2);
lean_closure_set(v___x_3097_, 0, lean_box(0));
lean_closure_set(v___x_3097_, 1, v_snd_3096_);
v___x_3098_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(v___x_3097_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
if (lean_obj_tag(v___x_3098_) == 0)
{
lean_object* v_a_3099_; 
v_a_3099_ = lean_ctor_get(v___x_3098_, 0);
lean_inc(v_a_3099_);
lean_dec_ref_known(v___x_3098_, 1);
v_stx_3056_ = v_a_3099_;
goto _start;
}
else
{
lean_object* v_a_3101_; lean_object* v___x_3103_; uint8_t v_isShared_3104_; uint8_t v_isSharedCheck_3108_; 
v_a_3101_ = lean_ctor_get(v___x_3098_, 0);
v_isSharedCheck_3108_ = !lean_is_exclusive(v___x_3098_);
if (v_isSharedCheck_3108_ == 0)
{
v___x_3103_ = v___x_3098_;
v_isShared_3104_ = v_isSharedCheck_3108_;
goto v_resetjp_3102_;
}
else
{
lean_inc(v_a_3101_);
lean_dec(v___x_3098_);
v___x_3103_ = lean_box(0);
v_isShared_3104_ = v_isSharedCheck_3108_;
goto v_resetjp_3102_;
}
v_resetjp_3102_:
{
lean_object* v___x_3106_; 
if (v_isShared_3104_ == 0)
{
v___x_3106_ = v___x_3103_;
goto v_reusejp_3105_;
}
else
{
lean_object* v_reuseFailAlloc_3107_; 
v_reuseFailAlloc_3107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3107_, 0, v_a_3101_);
v___x_3106_ = v_reuseFailAlloc_3107_;
goto v_reusejp_3105_;
}
v_reusejp_3105_:
{
return v___x_3106_;
}
}
}
}
else
{
lean_object* v___y_3110_; lean_object* v___y_3111_; lean_object* v___y_3112_; lean_object* v___y_3113_; lean_object* v___y_3114_; lean_object* v___y_3115_; lean_object* v___y_3221_; lean_object* v___y_3222_; lean_object* v___y_3223_; lean_object* v___y_3224_; lean_object* v___y_3225_; lean_object* v___y_3226_; lean_object* v___x_3291_; uint8_t v___x_3292_; uint8_t v___x_3293_; 
lean_dec(v_a_3091_);
v___x_3291_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13));
lean_inc(v_stx_3056_);
v___x_3292_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3291_);
v___x_3293_ = 1;
if (v___x_3292_ == 0)
{
lean_object* v___x_3294_; uint8_t v___x_3295_; 
v___x_3294_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15));
lean_inc(v_stx_3056_);
v___x_3295_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3294_);
if (v___x_3295_ == 0)
{
lean_object* v___x_3296_; uint8_t v___x_3297_; 
v___x_3296_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17));
lean_inc(v_stx_3056_);
v___x_3297_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3296_);
if (v___x_3297_ == 0)
{
lean_object* v___x_3298_; uint8_t v___x_3299_; 
v___x_3298_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19));
lean_inc(v_stx_3056_);
v___x_3299_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3298_);
if (v___x_3299_ == 0)
{
lean_object* v___x_3300_; uint8_t v___x_3301_; 
v___x_3300_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21));
lean_inc(v_stx_3056_);
v___x_3301_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3300_);
if (v___x_3301_ == 0)
{
lean_object* v___x_3302_; uint8_t v___x_3303_; 
v___x_3302_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23));
lean_inc(v_stx_3056_);
v___x_3303_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3302_);
if (v___x_3303_ == 0)
{
lean_object* v___x_3304_; uint8_t v___x_3305_; 
lean_del_object(v___x_3093_);
v___x_3304_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25));
lean_inc(v_stx_3056_);
v___x_3305_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3304_);
if (v___x_3305_ == 0)
{
lean_object* v___x_3306_; uint8_t v___x_3307_; 
v___x_3306_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27));
lean_inc(v_stx_3056_);
v___x_3307_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3306_);
if (v___x_3307_ == 0)
{
lean_object* v___x_3308_; uint8_t v___x_3309_; lean_object* v___y_3311_; lean_object* v___y_3312_; lean_object* v___y_3313_; lean_object* v___y_3314_; lean_object* v___y_3315_; lean_object* v___y_3316_; 
v___x_3308_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29));
lean_inc(v_stx_3056_);
v___x_3309_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3308_);
if (v___x_3309_ == 0)
{
lean_object* v___x_3370_; uint8_t v___x_3371_; 
v___x_3370_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31));
lean_inc(v_stx_3056_);
v___x_3371_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3370_);
if (v___x_3371_ == 0)
{
lean_object* v___x_3372_; uint8_t v___x_3373_; 
v___x_3372_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33));
lean_inc(v_stx_3056_);
v___x_3373_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3372_);
if (v___x_3373_ == 0)
{
lean_object* v___x_3374_; uint8_t v___x_3375_; 
v___x_3374_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35));
lean_inc(v_stx_3056_);
v___x_3375_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3374_);
if (v___x_3375_ == 0)
{
lean_object* v___x_3376_; uint8_t v___x_3377_; 
v___x_3376_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37));
lean_inc(v_stx_3056_);
v___x_3377_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3376_);
if (v___x_3377_ == 0)
{
lean_object* v___x_3378_; uint8_t v___x_3379_; 
v___x_3378_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39));
lean_inc(v_stx_3056_);
v___x_3379_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3378_);
if (v___x_3379_ == 0)
{
lean_object* v___x_3380_; uint8_t v___x_3381_; 
v___x_3380_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41));
lean_inc(v_stx_3056_);
v___x_3381_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3380_);
if (v___x_3381_ == 0)
{
lean_object* v___x_3382_; uint8_t v___x_3383_; 
v___x_3382_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43));
lean_inc(v_stx_3056_);
v___x_3383_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3382_);
if (v___x_3383_ == 0)
{
lean_object* v___x_3384_; uint8_t v___x_3385_; 
v___x_3384_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45));
lean_inc(v_stx_3056_);
v___x_3385_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3384_);
if (v___x_3385_ == 0)
{
lean_object* v___x_3386_; uint8_t v___x_3387_; 
v___x_3386_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47));
lean_inc(v_stx_3056_);
v___x_3387_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3386_);
if (v___x_3387_ == 0)
{
lean_object* v___x_3388_; uint8_t v___x_3389_; 
v___x_3388_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50));
lean_inc(v_stx_3056_);
v___x_3389_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3388_);
if (v___x_3389_ == 0)
{
lean_object* v___x_3390_; uint8_t v___x_3391_; 
v___x_3390_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52));
lean_inc(v_stx_3056_);
v___x_3391_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3390_);
if (v___x_3391_ == 0)
{
lean_object* v___x_3392_; uint8_t v___x_3393_; 
v___x_3392_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54));
lean_inc(v_stx_3056_);
v___x_3393_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3392_);
if (v___x_3393_ == 0)
{
lean_object* v___x_3394_; uint8_t v___x_3395_; 
v___x_3394_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56));
lean_inc(v_stx_3056_);
v___x_3395_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3394_);
if (v___x_3395_ == 0)
{
lean_object* v___x_3396_; uint8_t v___x_3397_; 
v___x_3396_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58));
lean_inc(v_stx_3056_);
v___x_3397_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3396_);
if (v___x_3397_ == 0)
{
lean_object* v___x_3398_; uint8_t v___x_3399_; 
v___x_3398_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60));
lean_inc(v_stx_3056_);
v___x_3399_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3398_);
if (v___x_3399_ == 0)
{
lean_object* v___x_3400_; uint8_t v___x_3401_; 
v___x_3400_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62));
lean_inc(v_stx_3056_);
v___x_3401_ = l_Lean_Syntax_isOfKind(v_stx_3056_, v___x_3400_);
if (v___x_3401_ == 0)
{
lean_object* v___x_3402_; lean_object* v_env_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; 
v___x_3402_ = lean_st_ref_get(v_a_3062_);
v_env_3403_ = lean_ctor_get(v___x_3402_, 0);
lean_inc_ref(v_env_3403_);
lean_dec(v___x_3402_);
lean_inc_n(v_stx_3056_, 2);
v___x_3404_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_3405_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3406_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3405_, v_env_3403_, v___x_3404_);
v___x_3407_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_3408_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_3406_, v___x_3407_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_3406_);
if (lean_obj_tag(v___x_3408_) == 0)
{
lean_object* v_a_3409_; lean_object* v___x_3411_; uint8_t v_isShared_3412_; uint8_t v_isSharedCheck_3439_; 
v_a_3409_ = lean_ctor_get(v___x_3408_, 0);
v_isSharedCheck_3439_ = !lean_is_exclusive(v___x_3408_);
if (v_isSharedCheck_3439_ == 0)
{
v___x_3411_ = v___x_3408_;
v_isShared_3412_ = v_isSharedCheck_3439_;
goto v_resetjp_3410_;
}
else
{
lean_inc(v_a_3409_);
lean_dec(v___x_3408_);
v___x_3411_ = lean_box(0);
v_isShared_3412_ = v_isSharedCheck_3439_;
goto v_resetjp_3410_;
}
v_resetjp_3410_:
{
lean_object* v_fst_3413_; lean_object* v___x_3415_; uint8_t v_isShared_3416_; uint8_t v_isSharedCheck_3437_; 
v_fst_3413_ = lean_ctor_get(v_a_3409_, 0);
v_isSharedCheck_3437_ = !lean_is_exclusive(v_a_3409_);
if (v_isSharedCheck_3437_ == 0)
{
lean_object* v_unused_3438_; 
v_unused_3438_ = lean_ctor_get(v_a_3409_, 1);
lean_dec(v_unused_3438_);
v___x_3415_ = v_a_3409_;
v_isShared_3416_ = v_isSharedCheck_3437_;
goto v_resetjp_3414_;
}
else
{
lean_inc(v_fst_3413_);
lean_dec(v_a_3409_);
v___x_3415_ = lean_box(0);
v_isShared_3416_ = v_isSharedCheck_3437_;
goto v_resetjp_3414_;
}
v_resetjp_3414_:
{
if (lean_obj_tag(v_fst_3413_) == 0)
{
lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3420_; 
lean_del_object(v___x_3411_);
v___x_3417_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3418_ = l_Lean_MessageData_ofName(v___x_3404_);
lean_inc_ref(v___x_3418_);
if (v_isShared_3416_ == 0)
{
lean_ctor_set_tag(v___x_3415_, 7);
lean_ctor_set(v___x_3415_, 1, v___x_3418_);
lean_ctor_set(v___x_3415_, 0, v___x_3417_);
v___x_3420_ = v___x_3415_;
goto v_reusejp_3419_;
}
else
{
lean_object* v_reuseFailAlloc_3432_; 
v_reuseFailAlloc_3432_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3432_, 0, v___x_3417_);
lean_ctor_set(v_reuseFailAlloc_3432_, 1, v___x_3418_);
v___x_3420_ = v_reuseFailAlloc_3432_;
goto v_reusejp_3419_;
}
v_reusejp_3419_:
{
lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; 
v___x_3421_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3422_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3422_, 0, v___x_3420_);
lean_ctor_set(v___x_3422_, 1, v___x_3421_);
v___x_3423_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_3424_ = l_Lean_indentD(v___x_3423_);
v___x_3425_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3425_, 0, v___x_3422_);
lean_ctor_set(v___x_3425_, 1, v___x_3424_);
v___x_3426_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3427_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3427_, 0, v___x_3425_);
lean_ctor_set(v___x_3427_, 1, v___x_3426_);
v___x_3428_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3428_, 0, v___x_3427_);
lean_ctor_set(v___x_3428_, 1, v___x_3418_);
v___x_3429_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3430_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3430_, 0, v___x_3428_);
lean_ctor_set(v___x_3430_, 1, v___x_3429_);
v___x_3431_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_3430_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_3431_;
}
}
else
{
lean_object* v_val_3433_; lean_object* v___x_3435_; 
lean_del_object(v___x_3415_);
lean_dec(v___x_3404_);
lean_dec(v_stx_3056_);
v_val_3433_ = lean_ctor_get(v_fst_3413_, 0);
lean_inc(v_val_3433_);
lean_dec_ref_known(v_fst_3413_, 1);
if (v_isShared_3412_ == 0)
{
lean_ctor_set(v___x_3411_, 0, v_val_3433_);
v___x_3435_ = v___x_3411_;
goto v_reusejp_3434_;
}
else
{
lean_object* v_reuseFailAlloc_3436_; 
v_reuseFailAlloc_3436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3436_, 0, v_val_3433_);
v___x_3435_ = v_reuseFailAlloc_3436_;
goto v_reusejp_3434_;
}
v_reusejp_3434_:
{
return v___x_3435_;
}
}
}
}
}
else
{
lean_object* v_a_3440_; lean_object* v___x_3442_; uint8_t v_isShared_3443_; uint8_t v_isSharedCheck_3447_; 
lean_dec(v___x_3404_);
lean_dec(v_stx_3056_);
v_a_3440_ = lean_ctor_get(v___x_3408_, 0);
v_isSharedCheck_3447_ = !lean_is_exclusive(v___x_3408_);
if (v_isSharedCheck_3447_ == 0)
{
v___x_3442_ = v___x_3408_;
v_isShared_3443_ = v_isSharedCheck_3447_;
goto v_resetjp_3441_;
}
else
{
lean_inc(v_a_3440_);
lean_dec(v___x_3408_);
v___x_3442_ = lean_box(0);
v_isShared_3443_ = v_isSharedCheck_3447_;
goto v_resetjp_3441_;
}
v_resetjp_3441_:
{
lean_object* v___x_3445_; 
if (v_isShared_3443_ == 0)
{
v___x_3445_ = v___x_3442_;
goto v_reusejp_3444_;
}
else
{
lean_object* v_reuseFailAlloc_3446_; 
v_reuseFailAlloc_3446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3446_, 0, v_a_3440_);
v___x_3445_ = v_reuseFailAlloc_3446_;
goto v_reusejp_3444_;
}
v_reusejp_3444_:
{
return v___x_3445_;
}
}
}
}
else
{
lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___y_3452_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; 
v___x_3448_ = lean_unsigned_to_nat(1u);
v___x_3449_ = lean_unsigned_to_nat(5u);
v___x_3450_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_3449_);
v___x_3462_ = lean_unsigned_to_nat(6u);
v___x_3463_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_3462_);
lean_dec(v_stx_3056_);
v___x_3464_ = l_Lean_Syntax_getOptional_x3f(v___x_3463_);
lean_dec(v___x_3463_);
if (lean_obj_tag(v___x_3464_) == 0)
{
lean_object* v___x_3465_; 
v___x_3465_ = lean_box(0);
v___y_3452_ = v___x_3465_;
goto v___jp_3451_;
}
else
{
lean_object* v_val_3466_; lean_object* v___x_3468_; uint8_t v_isShared_3469_; uint8_t v_isSharedCheck_3473_; 
v_val_3466_ = lean_ctor_get(v___x_3464_, 0);
v_isSharedCheck_3473_ = !lean_is_exclusive(v___x_3464_);
if (v_isSharedCheck_3473_ == 0)
{
v___x_3468_ = v___x_3464_;
v_isShared_3469_ = v_isSharedCheck_3473_;
goto v_resetjp_3467_;
}
else
{
lean_inc(v_val_3466_);
lean_dec(v___x_3464_);
v___x_3468_ = lean_box(0);
v_isShared_3469_ = v_isSharedCheck_3473_;
goto v_resetjp_3467_;
}
v_resetjp_3467_:
{
lean_object* v___x_3471_; 
if (v_isShared_3469_ == 0)
{
v___x_3471_ = v___x_3468_;
goto v_reusejp_3470_;
}
else
{
lean_object* v_reuseFailAlloc_3472_; 
v_reuseFailAlloc_3472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3472_, 0, v_val_3466_);
v___x_3471_ = v_reuseFailAlloc_3472_;
goto v_reusejp_3470_;
}
v_reusejp_3470_:
{
v___y_3452_ = v___x_3471_;
goto v___jp_3451_;
}
}
}
v___jp_3451_:
{
lean_object* v___x_3453_; 
v___x_3453_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3450_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
if (lean_obj_tag(v___x_3453_) == 0)
{
if (lean_obj_tag(v___y_3452_) == 0)
{
lean_object* v_a_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; 
v_a_3454_ = lean_ctor_get(v___x_3453_, 0);
lean_inc(v_a_3454_);
lean_dec_ref_known(v___x_3453_, 1);
v___x_3455_ = l_Lean_NameSet_empty;
v___x_3456_ = lean_box(1);
v___x_3457_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_3457_, 0, v___x_3455_);
lean_ctor_set(v___x_3457_, 1, v___x_3455_);
lean_ctor_set(v___x_3457_, 2, v___x_3456_);
lean_ctor_set(v___x_3457_, 3, v___x_3448_);
lean_ctor_set(v___x_3457_, 4, v___x_3455_);
lean_ctor_set_uint8(v___x_3457_, sizeof(void*)*5, v___x_3399_);
v___y_3065_ = v_a_3454_;
v_bodyInfo_3066_ = v___x_3457_;
goto v___jp_3064_;
}
else
{
lean_object* v_a_3458_; lean_object* v_val_3459_; lean_object* v___x_3460_; 
v_a_3458_ = lean_ctor_get(v___x_3453_, 0);
lean_inc(v_a_3458_);
lean_dec_ref_known(v___x_3453_, 1);
v_val_3459_ = lean_ctor_get(v___y_3452_, 0);
lean_inc(v_val_3459_);
lean_dec_ref_known(v___y_3452_, 1);
v___x_3460_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_3459_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
if (lean_obj_tag(v___x_3460_) == 0)
{
lean_object* v_a_3461_; 
v_a_3461_ = lean_ctor_get(v___x_3460_, 0);
lean_inc(v_a_3461_);
lean_dec_ref_known(v___x_3460_, 1);
v___y_3065_ = v_a_3458_;
v_bodyInfo_3066_ = v_a_3461_;
goto v___jp_3064_;
}
else
{
lean_dec(v_a_3458_);
return v___x_3460_;
}
}
}
else
{
lean_dec(v___y_3452_);
return v___x_3453_;
}
}
}
}
else
{
lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___y_3478_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; 
v___x_3474_ = lean_unsigned_to_nat(1u);
v___x_3475_ = lean_unsigned_to_nat(5u);
v___x_3476_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_3475_);
v___x_3488_ = lean_unsigned_to_nat(6u);
v___x_3489_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_3488_);
lean_dec(v_stx_3056_);
v___x_3490_ = l_Lean_Syntax_getOptional_x3f(v___x_3489_);
lean_dec(v___x_3489_);
if (lean_obj_tag(v___x_3490_) == 0)
{
lean_object* v___x_3491_; 
v___x_3491_ = lean_box(0);
v___y_3478_ = v___x_3491_;
goto v___jp_3477_;
}
else
{
lean_object* v_val_3492_; lean_object* v___x_3494_; uint8_t v_isShared_3495_; uint8_t v_isSharedCheck_3499_; 
v_val_3492_ = lean_ctor_get(v___x_3490_, 0);
v_isSharedCheck_3499_ = !lean_is_exclusive(v___x_3490_);
if (v_isSharedCheck_3499_ == 0)
{
v___x_3494_ = v___x_3490_;
v_isShared_3495_ = v_isSharedCheck_3499_;
goto v_resetjp_3493_;
}
else
{
lean_inc(v_val_3492_);
lean_dec(v___x_3490_);
v___x_3494_ = lean_box(0);
v_isShared_3495_ = v_isSharedCheck_3499_;
goto v_resetjp_3493_;
}
v_resetjp_3493_:
{
lean_object* v___x_3497_; 
if (v_isShared_3495_ == 0)
{
v___x_3497_ = v___x_3494_;
goto v_reusejp_3496_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v_val_3492_);
v___x_3497_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3496_;
}
v_reusejp_3496_:
{
v___y_3478_ = v___x_3497_;
goto v___jp_3477_;
}
}
}
v___jp_3477_:
{
lean_object* v___x_3479_; 
v___x_3479_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3476_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
if (lean_obj_tag(v___x_3479_) == 0)
{
if (lean_obj_tag(v___y_3478_) == 0)
{
lean_object* v_a_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; 
v_a_3480_ = lean_ctor_get(v___x_3479_, 0);
lean_inc(v_a_3480_);
lean_dec_ref_known(v___x_3479_, 1);
v___x_3481_ = l_Lean_NameSet_empty;
v___x_3482_ = lean_box(1);
v___x_3483_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_3483_, 0, v___x_3481_);
lean_ctor_set(v___x_3483_, 1, v___x_3481_);
lean_ctor_set(v___x_3483_, 2, v___x_3482_);
lean_ctor_set(v___x_3483_, 3, v___x_3474_);
lean_ctor_set(v___x_3483_, 4, v___x_3481_);
lean_ctor_set_uint8(v___x_3483_, sizeof(void*)*5, v___x_3397_);
v___y_3070_ = v_a_3480_;
v_bodyInfo_3071_ = v___x_3483_;
goto v___jp_3069_;
}
else
{
lean_object* v_a_3484_; lean_object* v_val_3485_; lean_object* v___x_3486_; 
v_a_3484_ = lean_ctor_get(v___x_3479_, 0);
lean_inc(v_a_3484_);
lean_dec_ref_known(v___x_3479_, 1);
v_val_3485_ = lean_ctor_get(v___y_3478_, 0);
lean_inc(v_val_3485_);
lean_dec_ref_known(v___y_3478_, 1);
v___x_3486_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_3485_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
if (lean_obj_tag(v___x_3486_) == 0)
{
lean_object* v_a_3487_; 
v_a_3487_ = lean_ctor_get(v___x_3486_, 0);
lean_inc(v_a_3487_);
lean_dec_ref_known(v___x_3486_, 1);
v___y_3070_ = v_a_3484_;
v_bodyInfo_3071_ = v_a_3487_;
goto v___jp_3069_;
}
else
{
lean_dec(v_a_3484_);
return v___x_3486_;
}
}
}
else
{
lean_dec(v___y_3478_);
return v___x_3479_;
}
}
}
}
else
{
lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___y_3503_; lean_object* v___y_3504_; lean_object* v___y_3505_; lean_object* v___y_3506_; lean_object* v___y_3507_; lean_object* v___y_3508_; lean_object* v___x_3715_; uint8_t v___x_3716_; 
v___x_3500_ = lean_unsigned_to_nat(0u);
v___x_3501_ = lean_unsigned_to_nat(1u);
v___x_3715_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_3501_);
v___x_3716_ = l_Lean_Syntax_isNone(v___x_3715_);
if (v___x_3716_ == 0)
{
lean_object* v___x_3717_; uint8_t v___x_3718_; 
v___x_3717_ = lean_unsigned_to_nat(5u);
v___x_3718_ = l_Lean_Syntax_matchesNull(v___x_3715_, v___x_3717_);
if (v___x_3718_ == 0)
{
lean_object* v___x_3719_; lean_object* v_env_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; 
v___x_3719_ = lean_st_ref_get(v_a_3062_);
v_env_3720_ = lean_ctor_get(v___x_3719_, 0);
lean_inc_ref(v_env_3720_);
lean_dec(v___x_3719_);
lean_inc_n(v_stx_3056_, 2);
v___x_3721_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_3722_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3723_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3722_, v_env_3720_, v___x_3721_);
v___x_3724_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_3725_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_3723_, v___x_3724_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_3723_);
if (lean_obj_tag(v___x_3725_) == 0)
{
lean_object* v_a_3726_; lean_object* v___x_3728_; uint8_t v_isShared_3729_; uint8_t v_isSharedCheck_3756_; 
v_a_3726_ = lean_ctor_get(v___x_3725_, 0);
v_isSharedCheck_3756_ = !lean_is_exclusive(v___x_3725_);
if (v_isSharedCheck_3756_ == 0)
{
v___x_3728_ = v___x_3725_;
v_isShared_3729_ = v_isSharedCheck_3756_;
goto v_resetjp_3727_;
}
else
{
lean_inc(v_a_3726_);
lean_dec(v___x_3725_);
v___x_3728_ = lean_box(0);
v_isShared_3729_ = v_isSharedCheck_3756_;
goto v_resetjp_3727_;
}
v_resetjp_3727_:
{
lean_object* v_fst_3730_; lean_object* v___x_3732_; uint8_t v_isShared_3733_; uint8_t v_isSharedCheck_3754_; 
v_fst_3730_ = lean_ctor_get(v_a_3726_, 0);
v_isSharedCheck_3754_ = !lean_is_exclusive(v_a_3726_);
if (v_isSharedCheck_3754_ == 0)
{
lean_object* v_unused_3755_; 
v_unused_3755_ = lean_ctor_get(v_a_3726_, 1);
lean_dec(v_unused_3755_);
v___x_3732_ = v_a_3726_;
v_isShared_3733_ = v_isSharedCheck_3754_;
goto v_resetjp_3731_;
}
else
{
lean_inc(v_fst_3730_);
lean_dec(v_a_3726_);
v___x_3732_ = lean_box(0);
v_isShared_3733_ = v_isSharedCheck_3754_;
goto v_resetjp_3731_;
}
v_resetjp_3731_:
{
if (lean_obj_tag(v_fst_3730_) == 0)
{
lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3737_; 
lean_del_object(v___x_3728_);
v___x_3734_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3735_ = l_Lean_MessageData_ofName(v___x_3721_);
lean_inc_ref(v___x_3735_);
if (v_isShared_3733_ == 0)
{
lean_ctor_set_tag(v___x_3732_, 7);
lean_ctor_set(v___x_3732_, 1, v___x_3735_);
lean_ctor_set(v___x_3732_, 0, v___x_3734_);
v___x_3737_ = v___x_3732_;
goto v_reusejp_3736_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v___x_3734_);
lean_ctor_set(v_reuseFailAlloc_3749_, 1, v___x_3735_);
v___x_3737_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3736_;
}
v_reusejp_3736_:
{
lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; 
v___x_3738_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3739_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3739_, 0, v___x_3737_);
lean_ctor_set(v___x_3739_, 1, v___x_3738_);
v___x_3740_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_3741_ = l_Lean_indentD(v___x_3740_);
v___x_3742_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3742_, 0, v___x_3739_);
lean_ctor_set(v___x_3742_, 1, v___x_3741_);
v___x_3743_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3744_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3744_, 0, v___x_3742_);
lean_ctor_set(v___x_3744_, 1, v___x_3743_);
v___x_3745_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3745_, 0, v___x_3744_);
lean_ctor_set(v___x_3745_, 1, v___x_3735_);
v___x_3746_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3747_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3747_, 0, v___x_3745_);
lean_ctor_set(v___x_3747_, 1, v___x_3746_);
v___x_3748_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_3747_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_3748_;
}
}
else
{
lean_object* v_val_3750_; lean_object* v___x_3752_; 
lean_del_object(v___x_3732_);
lean_dec(v___x_3721_);
lean_dec(v_stx_3056_);
v_val_3750_ = lean_ctor_get(v_fst_3730_, 0);
lean_inc(v_val_3750_);
lean_dec_ref_known(v_fst_3730_, 1);
if (v_isShared_3729_ == 0)
{
lean_ctor_set(v___x_3728_, 0, v_val_3750_);
v___x_3752_ = v___x_3728_;
goto v_reusejp_3751_;
}
else
{
lean_object* v_reuseFailAlloc_3753_; 
v_reuseFailAlloc_3753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3753_, 0, v_val_3750_);
v___x_3752_ = v_reuseFailAlloc_3753_;
goto v_reusejp_3751_;
}
v_reusejp_3751_:
{
return v___x_3752_;
}
}
}
}
}
else
{
lean_object* v_a_3757_; lean_object* v___x_3759_; uint8_t v_isShared_3760_; uint8_t v_isSharedCheck_3764_; 
lean_dec(v___x_3721_);
lean_dec(v_stx_3056_);
v_a_3757_ = lean_ctor_get(v___x_3725_, 0);
v_isSharedCheck_3764_ = !lean_is_exclusive(v___x_3725_);
if (v_isSharedCheck_3764_ == 0)
{
v___x_3759_ = v___x_3725_;
v_isShared_3760_ = v_isSharedCheck_3764_;
goto v_resetjp_3758_;
}
else
{
lean_inc(v_a_3757_);
lean_dec(v___x_3725_);
v___x_3759_ = lean_box(0);
v_isShared_3760_ = v_isSharedCheck_3764_;
goto v_resetjp_3758_;
}
v_resetjp_3758_:
{
lean_object* v___x_3762_; 
if (v_isShared_3760_ == 0)
{
v___x_3762_ = v___x_3759_;
goto v_reusejp_3761_;
}
else
{
lean_object* v_reuseFailAlloc_3763_; 
v_reuseFailAlloc_3763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3763_, 0, v_a_3757_);
v___x_3762_ = v_reuseFailAlloc_3763_;
goto v_reusejp_3761_;
}
v_reusejp_3761_:
{
return v___x_3762_;
}
}
}
}
else
{
v___y_3503_ = v_a_3057_;
v___y_3504_ = v_a_3058_;
v___y_3505_ = v_a_3059_;
v___y_3506_ = v_a_3060_;
v___y_3507_ = v_a_3061_;
v___y_3508_ = v_a_3062_;
goto v___jp_3502_;
}
}
else
{
lean_dec(v___x_3715_);
v___y_3503_ = v_a_3057_;
v___y_3504_ = v_a_3058_;
v___y_3505_ = v_a_3059_;
v___y_3506_ = v_a_3060_;
v___y_3507_ = v_a_3061_;
v___y_3508_ = v_a_3062_;
goto v___jp_3502_;
}
v___jp_3502_:
{
lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; uint8_t v___x_3512_; 
v___x_3509_ = lean_unsigned_to_nat(4u);
v___x_3510_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_3509_);
v___x_3511_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64));
lean_inc(v___x_3510_);
v___x_3512_ = l_Lean_Syntax_isOfKind(v___x_3510_, v___x_3511_);
if (v___x_3512_ == 0)
{
lean_object* v___x_3513_; lean_object* v_env_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; 
lean_dec(v___x_3510_);
v___x_3513_ = lean_st_ref_get(v___y_3508_);
v_env_3514_ = lean_ctor_get(v___x_3513_, 0);
lean_inc_ref(v_env_3514_);
lean_dec(v___x_3513_);
lean_inc_n(v_stx_3056_, 2);
v___x_3515_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_3516_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3517_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3516_, v_env_3514_, v___x_3515_);
v___x_3518_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_3519_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_3517_, v___x_3518_, v___y_3503_, v___y_3504_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_);
lean_dec(v___x_3517_);
if (lean_obj_tag(v___x_3519_) == 0)
{
lean_object* v_a_3520_; lean_object* v___x_3522_; uint8_t v_isShared_3523_; uint8_t v_isSharedCheck_3550_; 
v_a_3520_ = lean_ctor_get(v___x_3519_, 0);
v_isSharedCheck_3550_ = !lean_is_exclusive(v___x_3519_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3522_ = v___x_3519_;
v_isShared_3523_ = v_isSharedCheck_3550_;
goto v_resetjp_3521_;
}
else
{
lean_inc(v_a_3520_);
lean_dec(v___x_3519_);
v___x_3522_ = lean_box(0);
v_isShared_3523_ = v_isSharedCheck_3550_;
goto v_resetjp_3521_;
}
v_resetjp_3521_:
{
lean_object* v_fst_3524_; lean_object* v___x_3526_; uint8_t v_isShared_3527_; uint8_t v_isSharedCheck_3548_; 
v_fst_3524_ = lean_ctor_get(v_a_3520_, 0);
v_isSharedCheck_3548_ = !lean_is_exclusive(v_a_3520_);
if (v_isSharedCheck_3548_ == 0)
{
lean_object* v_unused_3549_; 
v_unused_3549_ = lean_ctor_get(v_a_3520_, 1);
lean_dec(v_unused_3549_);
v___x_3526_ = v_a_3520_;
v_isShared_3527_ = v_isSharedCheck_3548_;
goto v_resetjp_3525_;
}
else
{
lean_inc(v_fst_3524_);
lean_dec(v_a_3520_);
v___x_3526_ = lean_box(0);
v_isShared_3527_ = v_isSharedCheck_3548_;
goto v_resetjp_3525_;
}
v_resetjp_3525_:
{
if (lean_obj_tag(v_fst_3524_) == 0)
{
lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3531_; 
lean_del_object(v___x_3522_);
v___x_3528_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3529_ = l_Lean_MessageData_ofName(v___x_3515_);
lean_inc_ref(v___x_3529_);
if (v_isShared_3527_ == 0)
{
lean_ctor_set_tag(v___x_3526_, 7);
lean_ctor_set(v___x_3526_, 1, v___x_3529_);
lean_ctor_set(v___x_3526_, 0, v___x_3528_);
v___x_3531_ = v___x_3526_;
goto v_reusejp_3530_;
}
else
{
lean_object* v_reuseFailAlloc_3543_; 
v_reuseFailAlloc_3543_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3543_, 0, v___x_3528_);
lean_ctor_set(v_reuseFailAlloc_3543_, 1, v___x_3529_);
v___x_3531_ = v_reuseFailAlloc_3543_;
goto v_reusejp_3530_;
}
v_reusejp_3530_:
{
lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; 
v___x_3532_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3533_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3533_, 0, v___x_3531_);
lean_ctor_set(v___x_3533_, 1, v___x_3532_);
v___x_3534_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_3535_ = l_Lean_indentD(v___x_3534_);
v___x_3536_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3536_, 0, v___x_3533_);
lean_ctor_set(v___x_3536_, 1, v___x_3535_);
v___x_3537_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3538_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3538_, 0, v___x_3536_);
lean_ctor_set(v___x_3538_, 1, v___x_3537_);
v___x_3539_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3539_, 0, v___x_3538_);
lean_ctor_set(v___x_3539_, 1, v___x_3529_);
v___x_3540_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3541_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3541_, 0, v___x_3539_);
lean_ctor_set(v___x_3541_, 1, v___x_3540_);
v___x_3542_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_3541_, v___y_3503_, v___y_3504_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_);
return v___x_3542_;
}
}
else
{
lean_object* v_val_3544_; lean_object* v___x_3546_; 
lean_del_object(v___x_3526_);
lean_dec(v___x_3515_);
lean_dec(v_stx_3056_);
v_val_3544_ = lean_ctor_get(v_fst_3524_, 0);
lean_inc(v_val_3544_);
lean_dec_ref_known(v_fst_3524_, 1);
if (v_isShared_3523_ == 0)
{
lean_ctor_set(v___x_3522_, 0, v_val_3544_);
v___x_3546_ = v___x_3522_;
goto v_reusejp_3545_;
}
else
{
lean_object* v_reuseFailAlloc_3547_; 
v_reuseFailAlloc_3547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3547_, 0, v_val_3544_);
v___x_3546_ = v_reuseFailAlloc_3547_;
goto v_reusejp_3545_;
}
v_reusejp_3545_:
{
return v___x_3546_;
}
}
}
}
}
else
{
lean_object* v_a_3551_; lean_object* v___x_3553_; uint8_t v_isShared_3554_; uint8_t v_isSharedCheck_3558_; 
lean_dec(v___x_3515_);
lean_dec(v_stx_3056_);
v_a_3551_ = lean_ctor_get(v___x_3519_, 0);
v_isSharedCheck_3558_ = !lean_is_exclusive(v___x_3519_);
if (v_isSharedCheck_3558_ == 0)
{
v___x_3553_ = v___x_3519_;
v_isShared_3554_ = v_isSharedCheck_3558_;
goto v_resetjp_3552_;
}
else
{
lean_inc(v_a_3551_);
lean_dec(v___x_3519_);
v___x_3553_ = lean_box(0);
v_isShared_3554_ = v_isSharedCheck_3558_;
goto v_resetjp_3552_;
}
v_resetjp_3552_:
{
lean_object* v___x_3556_; 
if (v_isShared_3554_ == 0)
{
v___x_3556_ = v___x_3553_;
goto v_reusejp_3555_;
}
else
{
lean_object* v_reuseFailAlloc_3557_; 
v_reuseFailAlloc_3557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3557_, 0, v_a_3551_);
v___x_3556_ = v_reuseFailAlloc_3557_;
goto v_reusejp_3555_;
}
v_reusejp_3555_:
{
return v___x_3556_;
}
}
}
}
else
{
lean_object* v___x_3559_; lean_object* v___x_3560_; size_t v_sz_3561_; size_t v___x_3562_; lean_object* v___x_3563_; 
v___x_3559_ = l_Lean_Syntax_getArg(v___x_3510_, v___x_3500_);
v___x_3560_ = l_Lean_Syntax_getArgs(v___x_3559_);
lean_dec(v___x_3559_);
v_sz_3561_ = lean_array_size(v___x_3560_);
v___x_3562_ = ((size_t)0ULL);
v___x_3563_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(v_sz_3561_, v___x_3562_, v___x_3560_);
if (lean_obj_tag(v___x_3563_) == 0)
{
lean_object* v___x_3564_; lean_object* v_env_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; 
lean_dec(v___x_3510_);
v___x_3564_ = lean_st_ref_get(v___y_3508_);
v_env_3565_ = lean_ctor_get(v___x_3564_, 0);
lean_inc_ref(v_env_3565_);
lean_dec(v___x_3564_);
lean_inc_n(v_stx_3056_, 2);
v___x_3566_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_3567_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3568_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3567_, v_env_3565_, v___x_3566_);
v___x_3569_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_3570_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_3568_, v___x_3569_, v___y_3503_, v___y_3504_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_);
lean_dec(v___x_3568_);
if (lean_obj_tag(v___x_3570_) == 0)
{
lean_object* v_a_3571_; lean_object* v___x_3573_; uint8_t v_isShared_3574_; uint8_t v_isSharedCheck_3601_; 
v_a_3571_ = lean_ctor_get(v___x_3570_, 0);
v_isSharedCheck_3601_ = !lean_is_exclusive(v___x_3570_);
if (v_isSharedCheck_3601_ == 0)
{
v___x_3573_ = v___x_3570_;
v_isShared_3574_ = v_isSharedCheck_3601_;
goto v_resetjp_3572_;
}
else
{
lean_inc(v_a_3571_);
lean_dec(v___x_3570_);
v___x_3573_ = lean_box(0);
v_isShared_3574_ = v_isSharedCheck_3601_;
goto v_resetjp_3572_;
}
v_resetjp_3572_:
{
lean_object* v_fst_3575_; lean_object* v___x_3577_; uint8_t v_isShared_3578_; uint8_t v_isSharedCheck_3599_; 
v_fst_3575_ = lean_ctor_get(v_a_3571_, 0);
v_isSharedCheck_3599_ = !lean_is_exclusive(v_a_3571_);
if (v_isSharedCheck_3599_ == 0)
{
lean_object* v_unused_3600_; 
v_unused_3600_ = lean_ctor_get(v_a_3571_, 1);
lean_dec(v_unused_3600_);
v___x_3577_ = v_a_3571_;
v_isShared_3578_ = v_isSharedCheck_3599_;
goto v_resetjp_3576_;
}
else
{
lean_inc(v_fst_3575_);
lean_dec(v_a_3571_);
v___x_3577_ = lean_box(0);
v_isShared_3578_ = v_isSharedCheck_3599_;
goto v_resetjp_3576_;
}
v_resetjp_3576_:
{
if (lean_obj_tag(v_fst_3575_) == 0)
{
lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3582_; 
lean_del_object(v___x_3573_);
v___x_3579_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3580_ = l_Lean_MessageData_ofName(v___x_3566_);
lean_inc_ref(v___x_3580_);
if (v_isShared_3578_ == 0)
{
lean_ctor_set_tag(v___x_3577_, 7);
lean_ctor_set(v___x_3577_, 1, v___x_3580_);
lean_ctor_set(v___x_3577_, 0, v___x_3579_);
v___x_3582_ = v___x_3577_;
goto v_reusejp_3581_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v___x_3579_);
lean_ctor_set(v_reuseFailAlloc_3594_, 1, v___x_3580_);
v___x_3582_ = v_reuseFailAlloc_3594_;
goto v_reusejp_3581_;
}
v_reusejp_3581_:
{
lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; 
v___x_3583_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3584_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3584_, 0, v___x_3582_);
lean_ctor_set(v___x_3584_, 1, v___x_3583_);
v___x_3585_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_3586_ = l_Lean_indentD(v___x_3585_);
v___x_3587_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3587_, 0, v___x_3584_);
lean_ctor_set(v___x_3587_, 1, v___x_3586_);
v___x_3588_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3589_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3589_, 0, v___x_3587_);
lean_ctor_set(v___x_3589_, 1, v___x_3588_);
v___x_3590_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3590_, 0, v___x_3589_);
lean_ctor_set(v___x_3590_, 1, v___x_3580_);
v___x_3591_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3592_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3592_, 0, v___x_3590_);
lean_ctor_set(v___x_3592_, 1, v___x_3591_);
v___x_3593_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_3592_, v___y_3503_, v___y_3504_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_);
return v___x_3593_;
}
}
else
{
lean_object* v_val_3595_; lean_object* v___x_3597_; 
lean_del_object(v___x_3577_);
lean_dec(v___x_3566_);
lean_dec(v_stx_3056_);
v_val_3595_ = lean_ctor_get(v_fst_3575_, 0);
lean_inc(v_val_3595_);
lean_dec_ref_known(v_fst_3575_, 1);
if (v_isShared_3574_ == 0)
{
lean_ctor_set(v___x_3573_, 0, v_val_3595_);
v___x_3597_ = v___x_3573_;
goto v_reusejp_3596_;
}
else
{
lean_object* v_reuseFailAlloc_3598_; 
v_reuseFailAlloc_3598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3598_, 0, v_val_3595_);
v___x_3597_ = v_reuseFailAlloc_3598_;
goto v_reusejp_3596_;
}
v_reusejp_3596_:
{
return v___x_3597_;
}
}
}
}
}
else
{
lean_object* v_a_3602_; lean_object* v___x_3604_; uint8_t v_isShared_3605_; uint8_t v_isSharedCheck_3609_; 
lean_dec(v___x_3566_);
lean_dec(v_stx_3056_);
v_a_3602_ = lean_ctor_get(v___x_3570_, 0);
v_isSharedCheck_3609_ = !lean_is_exclusive(v___x_3570_);
if (v_isSharedCheck_3609_ == 0)
{
v___x_3604_ = v___x_3570_;
v_isShared_3605_ = v_isSharedCheck_3609_;
goto v_resetjp_3603_;
}
else
{
lean_inc(v_a_3602_);
lean_dec(v___x_3570_);
v___x_3604_ = lean_box(0);
v_isShared_3605_ = v_isSharedCheck_3609_;
goto v_resetjp_3603_;
}
v_resetjp_3603_:
{
lean_object* v___x_3607_; 
if (v_isShared_3605_ == 0)
{
v___x_3607_ = v___x_3604_;
goto v_reusejp_3606_;
}
else
{
lean_object* v_reuseFailAlloc_3608_; 
v_reuseFailAlloc_3608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3608_, 0, v_a_3602_);
v___x_3607_ = v_reuseFailAlloc_3608_;
goto v_reusejp_3606_;
}
v_reusejp_3606_:
{
return v___x_3607_;
}
}
}
}
else
{
lean_object* v_val_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; uint8_t v___x_3613_; 
v_val_3610_ = lean_ctor_get(v___x_3563_, 0);
lean_inc(v_val_3610_);
lean_dec_ref_known(v___x_3563_, 1);
v___x_3611_ = l_Lean_Syntax_getArg(v___x_3510_, v___x_3501_);
lean_dec(v___x_3510_);
v___x_3612_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66));
lean_inc(v___x_3611_);
v___x_3613_ = l_Lean_Syntax_isOfKind(v___x_3611_, v___x_3612_);
if (v___x_3613_ == 0)
{
lean_object* v___x_3614_; lean_object* v_env_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; 
lean_dec(v___x_3611_);
lean_dec(v_val_3610_);
v___x_3614_ = lean_st_ref_get(v___y_3508_);
v_env_3615_ = lean_ctor_get(v___x_3614_, 0);
lean_inc_ref(v_env_3615_);
lean_dec(v___x_3614_);
lean_inc_n(v_stx_3056_, 2);
v___x_3616_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_3617_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3618_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3617_, v_env_3615_, v___x_3616_);
v___x_3619_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_3620_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_3618_, v___x_3619_, v___y_3503_, v___y_3504_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_);
lean_dec(v___x_3618_);
if (lean_obj_tag(v___x_3620_) == 0)
{
lean_object* v_a_3621_; lean_object* v___x_3623_; uint8_t v_isShared_3624_; uint8_t v_isSharedCheck_3651_; 
v_a_3621_ = lean_ctor_get(v___x_3620_, 0);
v_isSharedCheck_3651_ = !lean_is_exclusive(v___x_3620_);
if (v_isSharedCheck_3651_ == 0)
{
v___x_3623_ = v___x_3620_;
v_isShared_3624_ = v_isSharedCheck_3651_;
goto v_resetjp_3622_;
}
else
{
lean_inc(v_a_3621_);
lean_dec(v___x_3620_);
v___x_3623_ = lean_box(0);
v_isShared_3624_ = v_isSharedCheck_3651_;
goto v_resetjp_3622_;
}
v_resetjp_3622_:
{
lean_object* v_fst_3625_; lean_object* v___x_3627_; uint8_t v_isShared_3628_; uint8_t v_isSharedCheck_3649_; 
v_fst_3625_ = lean_ctor_get(v_a_3621_, 0);
v_isSharedCheck_3649_ = !lean_is_exclusive(v_a_3621_);
if (v_isSharedCheck_3649_ == 0)
{
lean_object* v_unused_3650_; 
v_unused_3650_ = lean_ctor_get(v_a_3621_, 1);
lean_dec(v_unused_3650_);
v___x_3627_ = v_a_3621_;
v_isShared_3628_ = v_isSharedCheck_3649_;
goto v_resetjp_3626_;
}
else
{
lean_inc(v_fst_3625_);
lean_dec(v_a_3621_);
v___x_3627_ = lean_box(0);
v_isShared_3628_ = v_isSharedCheck_3649_;
goto v_resetjp_3626_;
}
v_resetjp_3626_:
{
if (lean_obj_tag(v_fst_3625_) == 0)
{
lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3632_; 
lean_del_object(v___x_3623_);
v___x_3629_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3630_ = l_Lean_MessageData_ofName(v___x_3616_);
lean_inc_ref(v___x_3630_);
if (v_isShared_3628_ == 0)
{
lean_ctor_set_tag(v___x_3627_, 7);
lean_ctor_set(v___x_3627_, 1, v___x_3630_);
lean_ctor_set(v___x_3627_, 0, v___x_3629_);
v___x_3632_ = v___x_3627_;
goto v_reusejp_3631_;
}
else
{
lean_object* v_reuseFailAlloc_3644_; 
v_reuseFailAlloc_3644_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3644_, 0, v___x_3629_);
lean_ctor_set(v_reuseFailAlloc_3644_, 1, v___x_3630_);
v___x_3632_ = v_reuseFailAlloc_3644_;
goto v_reusejp_3631_;
}
v_reusejp_3631_:
{
lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; 
v___x_3633_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3634_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3634_, 0, v___x_3632_);
lean_ctor_set(v___x_3634_, 1, v___x_3633_);
v___x_3635_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_3636_ = l_Lean_indentD(v___x_3635_);
v___x_3637_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3637_, 0, v___x_3634_);
lean_ctor_set(v___x_3637_, 1, v___x_3636_);
v___x_3638_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3639_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3639_, 0, v___x_3637_);
lean_ctor_set(v___x_3639_, 1, v___x_3638_);
v___x_3640_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3640_, 0, v___x_3639_);
lean_ctor_set(v___x_3640_, 1, v___x_3630_);
v___x_3641_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3642_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3642_, 0, v___x_3640_);
lean_ctor_set(v___x_3642_, 1, v___x_3641_);
v___x_3643_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_3642_, v___y_3503_, v___y_3504_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_);
return v___x_3643_;
}
}
else
{
lean_object* v_val_3645_; lean_object* v___x_3647_; 
lean_del_object(v___x_3627_);
lean_dec(v___x_3616_);
lean_dec(v_stx_3056_);
v_val_3645_ = lean_ctor_get(v_fst_3625_, 0);
lean_inc(v_val_3645_);
lean_dec_ref_known(v_fst_3625_, 1);
if (v_isShared_3624_ == 0)
{
lean_ctor_set(v___x_3623_, 0, v_val_3645_);
v___x_3647_ = v___x_3623_;
goto v_reusejp_3646_;
}
else
{
lean_object* v_reuseFailAlloc_3648_; 
v_reuseFailAlloc_3648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3648_, 0, v_val_3645_);
v___x_3647_ = v_reuseFailAlloc_3648_;
goto v_reusejp_3646_;
}
v_reusejp_3646_:
{
return v___x_3647_;
}
}
}
}
}
else
{
lean_object* v_a_3652_; lean_object* v___x_3654_; uint8_t v_isShared_3655_; uint8_t v_isSharedCheck_3659_; 
lean_dec(v___x_3616_);
lean_dec(v_stx_3056_);
v_a_3652_ = lean_ctor_get(v___x_3620_, 0);
v_isSharedCheck_3659_ = !lean_is_exclusive(v___x_3620_);
if (v_isSharedCheck_3659_ == 0)
{
v___x_3654_ = v___x_3620_;
v_isShared_3655_ = v_isSharedCheck_3659_;
goto v_resetjp_3653_;
}
else
{
lean_inc(v_a_3652_);
lean_dec(v___x_3620_);
v___x_3654_ = lean_box(0);
v_isShared_3655_ = v_isSharedCheck_3659_;
goto v_resetjp_3653_;
}
v_resetjp_3653_:
{
lean_object* v___x_3657_; 
if (v_isShared_3655_ == 0)
{
v___x_3657_ = v___x_3654_;
goto v_reusejp_3656_;
}
else
{
lean_object* v_reuseFailAlloc_3658_; 
v_reuseFailAlloc_3658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3658_, 0, v_a_3652_);
v___x_3657_ = v_reuseFailAlloc_3658_;
goto v_reusejp_3656_;
}
v_reusejp_3656_:
{
return v___x_3657_;
}
}
}
}
else
{
lean_object* v___x_3660_; lean_object* v___x_3661_; uint8_t v___x_3662_; 
v___x_3660_ = l_Lean_Syntax_getArg(v___x_3611_, v___x_3501_);
v___x_3661_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68));
v___x_3662_ = l_Lean_Syntax_isOfKind(v___x_3660_, v___x_3661_);
if (v___x_3662_ == 0)
{
lean_object* v___x_3663_; lean_object* v_env_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; 
lean_dec(v___x_3611_);
lean_dec(v_val_3610_);
v___x_3663_ = lean_st_ref_get(v___y_3508_);
v_env_3664_ = lean_ctor_get(v___x_3663_, 0);
lean_inc_ref(v_env_3664_);
lean_dec(v___x_3663_);
lean_inc_n(v_stx_3056_, 2);
v___x_3665_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_3666_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3667_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3666_, v_env_3664_, v___x_3665_);
v___x_3668_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_3669_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_3667_, v___x_3668_, v___y_3503_, v___y_3504_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_);
lean_dec(v___x_3667_);
if (lean_obj_tag(v___x_3669_) == 0)
{
lean_object* v_a_3670_; lean_object* v___x_3672_; uint8_t v_isShared_3673_; uint8_t v_isSharedCheck_3700_; 
v_a_3670_ = lean_ctor_get(v___x_3669_, 0);
v_isSharedCheck_3700_ = !lean_is_exclusive(v___x_3669_);
if (v_isSharedCheck_3700_ == 0)
{
v___x_3672_ = v___x_3669_;
v_isShared_3673_ = v_isSharedCheck_3700_;
goto v_resetjp_3671_;
}
else
{
lean_inc(v_a_3670_);
lean_dec(v___x_3669_);
v___x_3672_ = lean_box(0);
v_isShared_3673_ = v_isSharedCheck_3700_;
goto v_resetjp_3671_;
}
v_resetjp_3671_:
{
lean_object* v_fst_3674_; lean_object* v___x_3676_; uint8_t v_isShared_3677_; uint8_t v_isSharedCheck_3698_; 
v_fst_3674_ = lean_ctor_get(v_a_3670_, 0);
v_isSharedCheck_3698_ = !lean_is_exclusive(v_a_3670_);
if (v_isSharedCheck_3698_ == 0)
{
lean_object* v_unused_3699_; 
v_unused_3699_ = lean_ctor_get(v_a_3670_, 1);
lean_dec(v_unused_3699_);
v___x_3676_ = v_a_3670_;
v_isShared_3677_ = v_isSharedCheck_3698_;
goto v_resetjp_3675_;
}
else
{
lean_inc(v_fst_3674_);
lean_dec(v_a_3670_);
v___x_3676_ = lean_box(0);
v_isShared_3677_ = v_isSharedCheck_3698_;
goto v_resetjp_3675_;
}
v_resetjp_3675_:
{
if (lean_obj_tag(v_fst_3674_) == 0)
{
lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3681_; 
lean_del_object(v___x_3672_);
v___x_3678_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3679_ = l_Lean_MessageData_ofName(v___x_3665_);
lean_inc_ref(v___x_3679_);
if (v_isShared_3677_ == 0)
{
lean_ctor_set_tag(v___x_3676_, 7);
lean_ctor_set(v___x_3676_, 1, v___x_3679_);
lean_ctor_set(v___x_3676_, 0, v___x_3678_);
v___x_3681_ = v___x_3676_;
goto v_reusejp_3680_;
}
else
{
lean_object* v_reuseFailAlloc_3693_; 
v_reuseFailAlloc_3693_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3693_, 0, v___x_3678_);
lean_ctor_set(v_reuseFailAlloc_3693_, 1, v___x_3679_);
v___x_3681_ = v_reuseFailAlloc_3693_;
goto v_reusejp_3680_;
}
v_reusejp_3680_:
{
lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; 
v___x_3682_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3683_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3683_, 0, v___x_3681_);
lean_ctor_set(v___x_3683_, 1, v___x_3682_);
v___x_3684_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_3685_ = l_Lean_indentD(v___x_3684_);
v___x_3686_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3686_, 0, v___x_3683_);
lean_ctor_set(v___x_3686_, 1, v___x_3685_);
v___x_3687_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3688_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3688_, 0, v___x_3686_);
lean_ctor_set(v___x_3688_, 1, v___x_3687_);
v___x_3689_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3689_, 0, v___x_3688_);
lean_ctor_set(v___x_3689_, 1, v___x_3679_);
v___x_3690_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3691_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3691_, 0, v___x_3689_);
lean_ctor_set(v___x_3691_, 1, v___x_3690_);
v___x_3692_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_3691_, v___y_3503_, v___y_3504_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_);
return v___x_3692_;
}
}
else
{
lean_object* v_val_3694_; lean_object* v___x_3696_; 
lean_del_object(v___x_3676_);
lean_dec(v___x_3665_);
lean_dec(v_stx_3056_);
v_val_3694_ = lean_ctor_get(v_fst_3674_, 0);
lean_inc(v_val_3694_);
lean_dec_ref_known(v_fst_3674_, 1);
if (v_isShared_3673_ == 0)
{
lean_ctor_set(v___x_3672_, 0, v_val_3694_);
v___x_3696_ = v___x_3672_;
goto v_reusejp_3695_;
}
else
{
lean_object* v_reuseFailAlloc_3697_; 
v_reuseFailAlloc_3697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3697_, 0, v_val_3694_);
v___x_3696_ = v_reuseFailAlloc_3697_;
goto v_reusejp_3695_;
}
v_reusejp_3695_:
{
return v___x_3696_;
}
}
}
}
}
else
{
lean_object* v_a_3701_; lean_object* v___x_3703_; uint8_t v_isShared_3704_; uint8_t v_isSharedCheck_3708_; 
lean_dec(v___x_3665_);
lean_dec(v_stx_3056_);
v_a_3701_ = lean_ctor_get(v___x_3669_, 0);
v_isSharedCheck_3708_ = !lean_is_exclusive(v___x_3669_);
if (v_isSharedCheck_3708_ == 0)
{
v___x_3703_ = v___x_3669_;
v_isShared_3704_ = v_isSharedCheck_3708_;
goto v_resetjp_3702_;
}
else
{
lean_inc(v_a_3701_);
lean_dec(v___x_3669_);
v___x_3703_ = lean_box(0);
v_isShared_3704_ = v_isSharedCheck_3708_;
goto v_resetjp_3702_;
}
v_resetjp_3702_:
{
lean_object* v___x_3706_; 
if (v_isShared_3704_ == 0)
{
v___x_3706_ = v___x_3703_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3707_; 
v_reuseFailAlloc_3707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3707_, 0, v_a_3701_);
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
else
{
lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; 
lean_dec(v_stx_3056_);
v___x_3709_ = lean_unsigned_to_nat(3u);
v___x_3710_ = l_Lean_Syntax_getArg(v___x_3611_, v___x_3709_);
lean_dec(v___x_3611_);
v___x_3711_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3710_, v___y_3503_, v___y_3504_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_);
if (lean_obj_tag(v___x_3711_) == 0)
{
lean_object* v_a_3712_; size_t v_sz_3713_; lean_object* v___x_3714_; 
v_a_3712_ = lean_ctor_get(v___x_3711_, 0);
lean_inc(v_a_3712_);
lean_dec_ref_known(v___x_3711_, 1);
v_sz_3713_ = lean_array_size(v_val_3610_);
v___x_3714_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6(v_val_3610_, v_sz_3713_, v___x_3562_, v_a_3712_, v___y_3503_, v___y_3504_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_);
lean_dec(v_val_3610_);
return v___x_3714_;
}
else
{
lean_dec(v_val_3610_);
return v___x_3711_;
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
lean_object* v___x_3765_; lean_object* v___x_3766_; 
lean_dec(v_stx_3056_);
v___x_3765_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3766_, 0, v___x_3765_);
return v___x_3766_;
}
}
else
{
lean_object* v___x_3767_; lean_object* v___x_3768_; 
lean_dec(v_stx_3056_);
v___x_3767_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3768_, 0, v___x_3767_);
return v___x_3768_;
}
}
else
{
lean_object* v___x_3769_; lean_object* v___x_3770_; 
lean_dec(v_stx_3056_);
v___x_3769_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3770_, 0, v___x_3769_);
return v___x_3770_;
}
}
else
{
lean_object* v___x_3771_; lean_object* v___x_3772_; 
lean_dec(v_stx_3056_);
v___x_3771_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3772_, 0, v___x_3771_);
return v___x_3772_;
}
}
else
{
lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; size_t v_sz_3776_; size_t v___x_3777_; lean_object* v___x_3778_; 
v___x_3773_ = lean_unsigned_to_nat(2u);
v___x_3774_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_3773_);
v___x_3775_ = l_Lean_Syntax_getArgs(v___x_3774_);
lean_dec(v___x_3774_);
v_sz_3776_ = lean_array_size(v___x_3775_);
v___x_3777_ = ((size_t)0ULL);
v___x_3778_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7(v_sz_3776_, v___x_3777_, v___x_3775_);
if (lean_obj_tag(v___x_3778_) == 0)
{
lean_object* v___x_3779_; lean_object* v_env_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; 
v___x_3779_ = lean_st_ref_get(v_a_3062_);
v_env_3780_ = lean_ctor_get(v___x_3779_, 0);
lean_inc_ref(v_env_3780_);
lean_dec(v___x_3779_);
lean_inc_n(v_stx_3056_, 2);
v___x_3781_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_3782_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3783_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3782_, v_env_3780_, v___x_3781_);
v___x_3784_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_3785_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_3783_, v___x_3784_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_3783_);
if (lean_obj_tag(v___x_3785_) == 0)
{
lean_object* v_a_3786_; lean_object* v___x_3788_; uint8_t v_isShared_3789_; uint8_t v_isSharedCheck_3816_; 
v_a_3786_ = lean_ctor_get(v___x_3785_, 0);
v_isSharedCheck_3816_ = !lean_is_exclusive(v___x_3785_);
if (v_isSharedCheck_3816_ == 0)
{
v___x_3788_ = v___x_3785_;
v_isShared_3789_ = v_isSharedCheck_3816_;
goto v_resetjp_3787_;
}
else
{
lean_inc(v_a_3786_);
lean_dec(v___x_3785_);
v___x_3788_ = lean_box(0);
v_isShared_3789_ = v_isSharedCheck_3816_;
goto v_resetjp_3787_;
}
v_resetjp_3787_:
{
lean_object* v_fst_3790_; lean_object* v___x_3792_; uint8_t v_isShared_3793_; uint8_t v_isSharedCheck_3814_; 
v_fst_3790_ = lean_ctor_get(v_a_3786_, 0);
v_isSharedCheck_3814_ = !lean_is_exclusive(v_a_3786_);
if (v_isSharedCheck_3814_ == 0)
{
lean_object* v_unused_3815_; 
v_unused_3815_ = lean_ctor_get(v_a_3786_, 1);
lean_dec(v_unused_3815_);
v___x_3792_ = v_a_3786_;
v_isShared_3793_ = v_isSharedCheck_3814_;
goto v_resetjp_3791_;
}
else
{
lean_inc(v_fst_3790_);
lean_dec(v_a_3786_);
v___x_3792_ = lean_box(0);
v_isShared_3793_ = v_isSharedCheck_3814_;
goto v_resetjp_3791_;
}
v_resetjp_3791_:
{
if (lean_obj_tag(v_fst_3790_) == 0)
{
lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3797_; 
lean_del_object(v___x_3788_);
v___x_3794_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3795_ = l_Lean_MessageData_ofName(v___x_3781_);
lean_inc_ref(v___x_3795_);
if (v_isShared_3793_ == 0)
{
lean_ctor_set_tag(v___x_3792_, 7);
lean_ctor_set(v___x_3792_, 1, v___x_3795_);
lean_ctor_set(v___x_3792_, 0, v___x_3794_);
v___x_3797_ = v___x_3792_;
goto v_reusejp_3796_;
}
else
{
lean_object* v_reuseFailAlloc_3809_; 
v_reuseFailAlloc_3809_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3809_, 0, v___x_3794_);
lean_ctor_set(v_reuseFailAlloc_3809_, 1, v___x_3795_);
v___x_3797_ = v_reuseFailAlloc_3809_;
goto v_reusejp_3796_;
}
v_reusejp_3796_:
{
lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; 
v___x_3798_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3799_, 0, v___x_3797_);
lean_ctor_set(v___x_3799_, 1, v___x_3798_);
v___x_3800_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_3801_ = l_Lean_indentD(v___x_3800_);
v___x_3802_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3802_, 0, v___x_3799_);
lean_ctor_set(v___x_3802_, 1, v___x_3801_);
v___x_3803_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3804_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3804_, 0, v___x_3802_);
lean_ctor_set(v___x_3804_, 1, v___x_3803_);
v___x_3805_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3805_, 0, v___x_3804_);
lean_ctor_set(v___x_3805_, 1, v___x_3795_);
v___x_3806_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3807_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3807_, 0, v___x_3805_);
lean_ctor_set(v___x_3807_, 1, v___x_3806_);
v___x_3808_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_3807_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_3808_;
}
}
else
{
lean_object* v_val_3810_; lean_object* v___x_3812_; 
lean_del_object(v___x_3792_);
lean_dec(v___x_3781_);
lean_dec(v_stx_3056_);
v_val_3810_ = lean_ctor_get(v_fst_3790_, 0);
lean_inc(v_val_3810_);
lean_dec_ref_known(v_fst_3790_, 1);
if (v_isShared_3789_ == 0)
{
lean_ctor_set(v___x_3788_, 0, v_val_3810_);
v___x_3812_ = v___x_3788_;
goto v_reusejp_3811_;
}
else
{
lean_object* v_reuseFailAlloc_3813_; 
v_reuseFailAlloc_3813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3813_, 0, v_val_3810_);
v___x_3812_ = v_reuseFailAlloc_3813_;
goto v_reusejp_3811_;
}
v_reusejp_3811_:
{
return v___x_3812_;
}
}
}
}
}
else
{
lean_object* v_a_3817_; lean_object* v___x_3819_; uint8_t v_isShared_3820_; uint8_t v_isSharedCheck_3824_; 
lean_dec(v___x_3781_);
lean_dec(v_stx_3056_);
v_a_3817_ = lean_ctor_get(v___x_3785_, 0);
v_isSharedCheck_3824_ = !lean_is_exclusive(v___x_3785_);
if (v_isSharedCheck_3824_ == 0)
{
v___x_3819_ = v___x_3785_;
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
else
{
lean_inc(v_a_3817_);
lean_dec(v___x_3785_);
v___x_3819_ = lean_box(0);
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
v_resetjp_3818_:
{
lean_object* v___x_3822_; 
if (v_isShared_3820_ == 0)
{
v___x_3822_ = v___x_3819_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v_a_3817_);
v___x_3822_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3821_;
}
v_reusejp_3821_:
{
return v___x_3822_;
}
}
}
}
else
{
lean_object* v_val_3825_; lean_object* v___x_3827_; uint8_t v_isShared_3828_; uint8_t v_isSharedCheck_3959_; 
v_val_3825_ = lean_ctor_get(v___x_3778_, 0);
v_isSharedCheck_3959_ = !lean_is_exclusive(v___x_3778_);
if (v_isSharedCheck_3959_ == 0)
{
v___x_3827_ = v___x_3778_;
v_isShared_3828_ = v_isSharedCheck_3959_;
goto v_resetjp_3826_;
}
else
{
lean_inc(v_val_3825_);
lean_dec(v___x_3778_);
v___x_3827_ = lean_box(0);
v_isShared_3828_ = v_isSharedCheck_3959_;
goto v_resetjp_3826_;
}
v_resetjp_3826_:
{
lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v_finSeq_x3f_3832_; lean_object* v___y_3833_; lean_object* v___y_3834_; lean_object* v___y_3835_; lean_object* v___y_3836_; lean_object* v___y_3837_; lean_object* v___y_3838_; lean_object* v___x_3854_; lean_object* v___x_3855_; uint8_t v___x_3856_; 
v___x_3829_ = lean_unsigned_to_nat(1u);
v___x_3830_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_3829_);
v___x_3854_ = lean_unsigned_to_nat(3u);
v___x_3855_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_3854_);
v___x_3856_ = l_Lean_Syntax_isNone(v___x_3855_);
if (v___x_3856_ == 0)
{
uint8_t v___x_3857_; 
lean_inc(v___x_3855_);
v___x_3857_ = l_Lean_Syntax_matchesNull(v___x_3855_, v___x_3829_);
if (v___x_3857_ == 0)
{
lean_object* v___x_3858_; lean_object* v_env_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; 
lean_dec(v___x_3855_);
lean_dec(v___x_3830_);
lean_del_object(v___x_3827_);
lean_dec(v_val_3825_);
v___x_3858_ = lean_st_ref_get(v_a_3062_);
v_env_3859_ = lean_ctor_get(v___x_3858_, 0);
lean_inc_ref(v_env_3859_);
lean_dec(v___x_3858_);
lean_inc_n(v_stx_3056_, 2);
v___x_3860_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_3861_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3862_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3861_, v_env_3859_, v___x_3860_);
v___x_3863_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_3864_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_3862_, v___x_3863_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_3862_);
if (lean_obj_tag(v___x_3864_) == 0)
{
lean_object* v_a_3865_; lean_object* v___x_3867_; uint8_t v_isShared_3868_; uint8_t v_isSharedCheck_3895_; 
v_a_3865_ = lean_ctor_get(v___x_3864_, 0);
v_isSharedCheck_3895_ = !lean_is_exclusive(v___x_3864_);
if (v_isSharedCheck_3895_ == 0)
{
v___x_3867_ = v___x_3864_;
v_isShared_3868_ = v_isSharedCheck_3895_;
goto v_resetjp_3866_;
}
else
{
lean_inc(v_a_3865_);
lean_dec(v___x_3864_);
v___x_3867_ = lean_box(0);
v_isShared_3868_ = v_isSharedCheck_3895_;
goto v_resetjp_3866_;
}
v_resetjp_3866_:
{
lean_object* v_fst_3869_; lean_object* v___x_3871_; uint8_t v_isShared_3872_; uint8_t v_isSharedCheck_3893_; 
v_fst_3869_ = lean_ctor_get(v_a_3865_, 0);
v_isSharedCheck_3893_ = !lean_is_exclusive(v_a_3865_);
if (v_isSharedCheck_3893_ == 0)
{
lean_object* v_unused_3894_; 
v_unused_3894_ = lean_ctor_get(v_a_3865_, 1);
lean_dec(v_unused_3894_);
v___x_3871_ = v_a_3865_;
v_isShared_3872_ = v_isSharedCheck_3893_;
goto v_resetjp_3870_;
}
else
{
lean_inc(v_fst_3869_);
lean_dec(v_a_3865_);
v___x_3871_ = lean_box(0);
v_isShared_3872_ = v_isSharedCheck_3893_;
goto v_resetjp_3870_;
}
v_resetjp_3870_:
{
if (lean_obj_tag(v_fst_3869_) == 0)
{
lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3876_; 
lean_del_object(v___x_3867_);
v___x_3873_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3874_ = l_Lean_MessageData_ofName(v___x_3860_);
lean_inc_ref(v___x_3874_);
if (v_isShared_3872_ == 0)
{
lean_ctor_set_tag(v___x_3871_, 7);
lean_ctor_set(v___x_3871_, 1, v___x_3874_);
lean_ctor_set(v___x_3871_, 0, v___x_3873_);
v___x_3876_ = v___x_3871_;
goto v_reusejp_3875_;
}
else
{
lean_object* v_reuseFailAlloc_3888_; 
v_reuseFailAlloc_3888_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3888_, 0, v___x_3873_);
lean_ctor_set(v_reuseFailAlloc_3888_, 1, v___x_3874_);
v___x_3876_ = v_reuseFailAlloc_3888_;
goto v_reusejp_3875_;
}
v_reusejp_3875_:
{
lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; 
v___x_3877_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3878_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3878_, 0, v___x_3876_);
lean_ctor_set(v___x_3878_, 1, v___x_3877_);
v___x_3879_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_3880_ = l_Lean_indentD(v___x_3879_);
v___x_3881_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3881_, 0, v___x_3878_);
lean_ctor_set(v___x_3881_, 1, v___x_3880_);
v___x_3882_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3883_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3883_, 0, v___x_3881_);
lean_ctor_set(v___x_3883_, 1, v___x_3882_);
v___x_3884_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3884_, 0, v___x_3883_);
lean_ctor_set(v___x_3884_, 1, v___x_3874_);
v___x_3885_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3886_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3886_, 0, v___x_3884_);
lean_ctor_set(v___x_3886_, 1, v___x_3885_);
v___x_3887_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_3886_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_3887_;
}
}
else
{
lean_object* v_val_3889_; lean_object* v___x_3891_; 
lean_del_object(v___x_3871_);
lean_dec(v___x_3860_);
lean_dec(v_stx_3056_);
v_val_3889_ = lean_ctor_get(v_fst_3869_, 0);
lean_inc(v_val_3889_);
lean_dec_ref_known(v_fst_3869_, 1);
if (v_isShared_3868_ == 0)
{
lean_ctor_set(v___x_3867_, 0, v_val_3889_);
v___x_3891_ = v___x_3867_;
goto v_reusejp_3890_;
}
else
{
lean_object* v_reuseFailAlloc_3892_; 
v_reuseFailAlloc_3892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3892_, 0, v_val_3889_);
v___x_3891_ = v_reuseFailAlloc_3892_;
goto v_reusejp_3890_;
}
v_reusejp_3890_:
{
return v___x_3891_;
}
}
}
}
}
else
{
lean_object* v_a_3896_; lean_object* v___x_3898_; uint8_t v_isShared_3899_; uint8_t v_isSharedCheck_3903_; 
lean_dec(v___x_3860_);
lean_dec(v_stx_3056_);
v_a_3896_ = lean_ctor_get(v___x_3864_, 0);
v_isSharedCheck_3903_ = !lean_is_exclusive(v___x_3864_);
if (v_isSharedCheck_3903_ == 0)
{
v___x_3898_ = v___x_3864_;
v_isShared_3899_ = v_isSharedCheck_3903_;
goto v_resetjp_3897_;
}
else
{
lean_inc(v_a_3896_);
lean_dec(v___x_3864_);
v___x_3898_ = lean_box(0);
v_isShared_3899_ = v_isSharedCheck_3903_;
goto v_resetjp_3897_;
}
v_resetjp_3897_:
{
lean_object* v___x_3901_; 
if (v_isShared_3899_ == 0)
{
v___x_3901_ = v___x_3898_;
goto v_reusejp_3900_;
}
else
{
lean_object* v_reuseFailAlloc_3902_; 
v_reuseFailAlloc_3902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3902_, 0, v_a_3896_);
v___x_3901_ = v_reuseFailAlloc_3902_;
goto v_reusejp_3900_;
}
v_reusejp_3900_:
{
return v___x_3901_;
}
}
}
}
else
{
lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; uint8_t v___x_3907_; 
v___x_3904_ = lean_unsigned_to_nat(0u);
v___x_3905_ = l_Lean_Syntax_getArg(v___x_3855_, v___x_3904_);
lean_dec(v___x_3855_);
v___x_3906_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70));
lean_inc(v___x_3905_);
v___x_3907_ = l_Lean_Syntax_isOfKind(v___x_3905_, v___x_3906_);
if (v___x_3907_ == 0)
{
lean_object* v___x_3908_; lean_object* v_env_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; 
lean_dec(v___x_3905_);
lean_dec(v___x_3830_);
lean_del_object(v___x_3827_);
lean_dec(v_val_3825_);
v___x_3908_ = lean_st_ref_get(v_a_3062_);
v_env_3909_ = lean_ctor_get(v___x_3908_, 0);
lean_inc_ref(v_env_3909_);
lean_dec(v___x_3908_);
lean_inc_n(v_stx_3056_, 2);
v___x_3910_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_3911_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3912_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3911_, v_env_3909_, v___x_3910_);
v___x_3913_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_3914_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_3912_, v___x_3913_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_3912_);
if (lean_obj_tag(v___x_3914_) == 0)
{
lean_object* v_a_3915_; lean_object* v___x_3917_; uint8_t v_isShared_3918_; uint8_t v_isSharedCheck_3945_; 
v_a_3915_ = lean_ctor_get(v___x_3914_, 0);
v_isSharedCheck_3945_ = !lean_is_exclusive(v___x_3914_);
if (v_isSharedCheck_3945_ == 0)
{
v___x_3917_ = v___x_3914_;
v_isShared_3918_ = v_isSharedCheck_3945_;
goto v_resetjp_3916_;
}
else
{
lean_inc(v_a_3915_);
lean_dec(v___x_3914_);
v___x_3917_ = lean_box(0);
v_isShared_3918_ = v_isSharedCheck_3945_;
goto v_resetjp_3916_;
}
v_resetjp_3916_:
{
lean_object* v_fst_3919_; lean_object* v___x_3921_; uint8_t v_isShared_3922_; uint8_t v_isSharedCheck_3943_; 
v_fst_3919_ = lean_ctor_get(v_a_3915_, 0);
v_isSharedCheck_3943_ = !lean_is_exclusive(v_a_3915_);
if (v_isSharedCheck_3943_ == 0)
{
lean_object* v_unused_3944_; 
v_unused_3944_ = lean_ctor_get(v_a_3915_, 1);
lean_dec(v_unused_3944_);
v___x_3921_ = v_a_3915_;
v_isShared_3922_ = v_isSharedCheck_3943_;
goto v_resetjp_3920_;
}
else
{
lean_inc(v_fst_3919_);
lean_dec(v_a_3915_);
v___x_3921_ = lean_box(0);
v_isShared_3922_ = v_isSharedCheck_3943_;
goto v_resetjp_3920_;
}
v_resetjp_3920_:
{
if (lean_obj_tag(v_fst_3919_) == 0)
{
lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3926_; 
lean_del_object(v___x_3917_);
v___x_3923_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3924_ = l_Lean_MessageData_ofName(v___x_3910_);
lean_inc_ref(v___x_3924_);
if (v_isShared_3922_ == 0)
{
lean_ctor_set_tag(v___x_3921_, 7);
lean_ctor_set(v___x_3921_, 1, v___x_3924_);
lean_ctor_set(v___x_3921_, 0, v___x_3923_);
v___x_3926_ = v___x_3921_;
goto v_reusejp_3925_;
}
else
{
lean_object* v_reuseFailAlloc_3938_; 
v_reuseFailAlloc_3938_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3938_, 0, v___x_3923_);
lean_ctor_set(v_reuseFailAlloc_3938_, 1, v___x_3924_);
v___x_3926_ = v_reuseFailAlloc_3938_;
goto v_reusejp_3925_;
}
v_reusejp_3925_:
{
lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; 
v___x_3927_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3928_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3928_, 0, v___x_3926_);
lean_ctor_set(v___x_3928_, 1, v___x_3927_);
v___x_3929_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_3930_ = l_Lean_indentD(v___x_3929_);
v___x_3931_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3931_, 0, v___x_3928_);
lean_ctor_set(v___x_3931_, 1, v___x_3930_);
v___x_3932_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3933_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3933_, 0, v___x_3931_);
lean_ctor_set(v___x_3933_, 1, v___x_3932_);
v___x_3934_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3934_, 0, v___x_3933_);
lean_ctor_set(v___x_3934_, 1, v___x_3924_);
v___x_3935_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3936_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3936_, 0, v___x_3934_);
lean_ctor_set(v___x_3936_, 1, v___x_3935_);
v___x_3937_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_3936_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_3937_;
}
}
else
{
lean_object* v_val_3939_; lean_object* v___x_3941_; 
lean_del_object(v___x_3921_);
lean_dec(v___x_3910_);
lean_dec(v_stx_3056_);
v_val_3939_ = lean_ctor_get(v_fst_3919_, 0);
lean_inc(v_val_3939_);
lean_dec_ref_known(v_fst_3919_, 1);
if (v_isShared_3918_ == 0)
{
lean_ctor_set(v___x_3917_, 0, v_val_3939_);
v___x_3941_ = v___x_3917_;
goto v_reusejp_3940_;
}
else
{
lean_object* v_reuseFailAlloc_3942_; 
v_reuseFailAlloc_3942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3942_, 0, v_val_3939_);
v___x_3941_ = v_reuseFailAlloc_3942_;
goto v_reusejp_3940_;
}
v_reusejp_3940_:
{
return v___x_3941_;
}
}
}
}
}
else
{
lean_object* v_a_3946_; lean_object* v___x_3948_; uint8_t v_isShared_3949_; uint8_t v_isSharedCheck_3953_; 
lean_dec(v___x_3910_);
lean_dec(v_stx_3056_);
v_a_3946_ = lean_ctor_get(v___x_3914_, 0);
v_isSharedCheck_3953_ = !lean_is_exclusive(v___x_3914_);
if (v_isSharedCheck_3953_ == 0)
{
v___x_3948_ = v___x_3914_;
v_isShared_3949_ = v_isSharedCheck_3953_;
goto v_resetjp_3947_;
}
else
{
lean_inc(v_a_3946_);
lean_dec(v___x_3914_);
v___x_3948_ = lean_box(0);
v_isShared_3949_ = v_isSharedCheck_3953_;
goto v_resetjp_3947_;
}
v_resetjp_3947_:
{
lean_object* v___x_3951_; 
if (v_isShared_3949_ == 0)
{
v___x_3951_ = v___x_3948_;
goto v_reusejp_3950_;
}
else
{
lean_object* v_reuseFailAlloc_3952_; 
v_reuseFailAlloc_3952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3952_, 0, v_a_3946_);
v___x_3951_ = v_reuseFailAlloc_3952_;
goto v_reusejp_3950_;
}
v_reusejp_3950_:
{
return v___x_3951_;
}
}
}
}
else
{
lean_object* v___x_3954_; lean_object* v___x_3956_; 
lean_dec(v_stx_3056_);
v___x_3954_ = l_Lean_Syntax_getArg(v___x_3905_, v___x_3829_);
lean_dec(v___x_3905_);
if (v_isShared_3828_ == 0)
{
lean_ctor_set(v___x_3827_, 0, v___x_3954_);
v___x_3956_ = v___x_3827_;
goto v_reusejp_3955_;
}
else
{
lean_object* v_reuseFailAlloc_3957_; 
v_reuseFailAlloc_3957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3957_, 0, v___x_3954_);
v___x_3956_ = v_reuseFailAlloc_3957_;
goto v_reusejp_3955_;
}
v_reusejp_3955_:
{
v_finSeq_x3f_3832_ = v___x_3956_;
v___y_3833_ = v_a_3057_;
v___y_3834_ = v_a_3058_;
v___y_3835_ = v_a_3059_;
v___y_3836_ = v_a_3060_;
v___y_3837_ = v_a_3061_;
v___y_3838_ = v_a_3062_;
goto v___jp_3831_;
}
}
}
}
else
{
lean_object* v___x_3958_; 
lean_dec(v___x_3855_);
lean_del_object(v___x_3827_);
lean_dec(v_stx_3056_);
v___x_3958_ = lean_box(0);
v_finSeq_x3f_3832_ = v___x_3958_;
v___y_3833_ = v_a_3057_;
v___y_3834_ = v_a_3058_;
v___y_3835_ = v_a_3059_;
v___y_3836_ = v_a_3060_;
v___y_3837_ = v_a_3061_;
v___y_3838_ = v_a_3062_;
goto v___jp_3831_;
}
v___jp_3831_:
{
lean_object* v___x_3839_; 
v___x_3839_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3830_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_, v___y_3837_, v___y_3838_);
if (lean_obj_tag(v___x_3839_) == 0)
{
lean_object* v_a_3840_; size_t v_sz_3841_; lean_object* v___x_3842_; 
v_a_3840_ = lean_ctor_get(v___x_3839_, 0);
lean_inc(v_a_3840_);
lean_dec_ref_known(v___x_3839_, 1);
v_sz_3841_ = lean_array_size(v_val_3825_);
v___x_3842_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12(v_val_3825_, v_sz_3841_, v___x_3777_, v_a_3840_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_, v___y_3837_, v___y_3838_);
lean_dec(v_val_3825_);
if (lean_obj_tag(v___x_3842_) == 0)
{
lean_object* v_a_3843_; lean_object* v___x_3844_; 
v_a_3843_ = lean_ctor_get(v___x_3842_, 0);
lean_inc(v_a_3843_);
lean_dec_ref_known(v___x_3842_, 1);
v___x_3844_ = l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(v_finSeq_x3f_3832_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_, v___y_3837_, v___y_3838_);
if (lean_obj_tag(v___x_3844_) == 0)
{
lean_object* v_a_3845_; lean_object* v___x_3847_; uint8_t v_isShared_3848_; uint8_t v_isSharedCheck_3853_; 
v_a_3845_ = lean_ctor_get(v___x_3844_, 0);
v_isSharedCheck_3853_ = !lean_is_exclusive(v___x_3844_);
if (v_isSharedCheck_3853_ == 0)
{
v___x_3847_ = v___x_3844_;
v_isShared_3848_ = v_isSharedCheck_3853_;
goto v_resetjp_3846_;
}
else
{
lean_inc(v_a_3845_);
lean_dec(v___x_3844_);
v___x_3847_ = lean_box(0);
v_isShared_3848_ = v_isSharedCheck_3853_;
goto v_resetjp_3846_;
}
v_resetjp_3846_:
{
lean_object* v___x_3849_; lean_object* v___x_3851_; 
v___x_3849_ = l_Lean_Elab_Do_ControlInfo_sequence(v_a_3843_, v_a_3845_);
if (v_isShared_3848_ == 0)
{
lean_ctor_set(v___x_3847_, 0, v___x_3849_);
v___x_3851_ = v___x_3847_;
goto v_reusejp_3850_;
}
else
{
lean_object* v_reuseFailAlloc_3852_; 
v_reuseFailAlloc_3852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3852_, 0, v___x_3849_);
v___x_3851_ = v_reuseFailAlloc_3852_;
goto v_reusejp_3850_;
}
v_reusejp_3850_:
{
return v___x_3851_;
}
}
}
else
{
lean_dec(v_a_3843_);
return v___x_3844_;
}
}
else
{
lean_dec(v_finSeq_x3f_3832_);
return v___x_3842_;
}
}
else
{
lean_dec(v_finSeq_x3f_3832_);
lean_dec(v_val_3825_);
return v___x_3839_;
}
}
}
}
}
}
else
{
lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; uint8_t v___x_3963_; 
v___x_3960_ = lean_unsigned_to_nat(1u);
v___x_3961_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_3960_);
v___x_3962_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72));
lean_inc(v___x_3961_);
v___x_3963_ = l_Lean_Syntax_isOfKind(v___x_3961_, v___x_3962_);
if (v___x_3963_ == 0)
{
lean_object* v___x_3964_; lean_object* v_env_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; 
lean_dec(v___x_3961_);
v___x_3964_ = lean_st_ref_get(v_a_3062_);
v_env_3965_ = lean_ctor_get(v___x_3964_, 0);
lean_inc_ref(v_env_3965_);
lean_dec(v___x_3964_);
lean_inc_n(v_stx_3056_, 2);
v___x_3966_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_3967_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3968_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3967_, v_env_3965_, v___x_3966_);
v___x_3969_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_3970_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_3968_, v___x_3969_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_3968_);
if (lean_obj_tag(v___x_3970_) == 0)
{
lean_object* v_a_3971_; lean_object* v___x_3973_; uint8_t v_isShared_3974_; uint8_t v_isSharedCheck_4001_; 
v_a_3971_ = lean_ctor_get(v___x_3970_, 0);
v_isSharedCheck_4001_ = !lean_is_exclusive(v___x_3970_);
if (v_isSharedCheck_4001_ == 0)
{
v___x_3973_ = v___x_3970_;
v_isShared_3974_ = v_isSharedCheck_4001_;
goto v_resetjp_3972_;
}
else
{
lean_inc(v_a_3971_);
lean_dec(v___x_3970_);
v___x_3973_ = lean_box(0);
v_isShared_3974_ = v_isSharedCheck_4001_;
goto v_resetjp_3972_;
}
v_resetjp_3972_:
{
lean_object* v_fst_3975_; lean_object* v___x_3977_; uint8_t v_isShared_3978_; uint8_t v_isSharedCheck_3999_; 
v_fst_3975_ = lean_ctor_get(v_a_3971_, 0);
v_isSharedCheck_3999_ = !lean_is_exclusive(v_a_3971_);
if (v_isSharedCheck_3999_ == 0)
{
lean_object* v_unused_4000_; 
v_unused_4000_ = lean_ctor_get(v_a_3971_, 1);
lean_dec(v_unused_4000_);
v___x_3977_ = v_a_3971_;
v_isShared_3978_ = v_isSharedCheck_3999_;
goto v_resetjp_3976_;
}
else
{
lean_inc(v_fst_3975_);
lean_dec(v_a_3971_);
v___x_3977_ = lean_box(0);
v_isShared_3978_ = v_isSharedCheck_3999_;
goto v_resetjp_3976_;
}
v_resetjp_3976_:
{
if (lean_obj_tag(v_fst_3975_) == 0)
{
lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3982_; 
lean_del_object(v___x_3973_);
v___x_3979_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3980_ = l_Lean_MessageData_ofName(v___x_3966_);
lean_inc_ref(v___x_3980_);
if (v_isShared_3978_ == 0)
{
lean_ctor_set_tag(v___x_3977_, 7);
lean_ctor_set(v___x_3977_, 1, v___x_3980_);
lean_ctor_set(v___x_3977_, 0, v___x_3979_);
v___x_3982_ = v___x_3977_;
goto v_reusejp_3981_;
}
else
{
lean_object* v_reuseFailAlloc_3994_; 
v_reuseFailAlloc_3994_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3994_, 0, v___x_3979_);
lean_ctor_set(v_reuseFailAlloc_3994_, 1, v___x_3980_);
v___x_3982_ = v_reuseFailAlloc_3994_;
goto v_reusejp_3981_;
}
v_reusejp_3981_:
{
lean_object* v___x_3983_; lean_object* v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; 
v___x_3983_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3984_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3984_, 0, v___x_3982_);
lean_ctor_set(v___x_3984_, 1, v___x_3983_);
v___x_3985_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_3986_ = l_Lean_indentD(v___x_3985_);
v___x_3987_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3987_, 0, v___x_3984_);
lean_ctor_set(v___x_3987_, 1, v___x_3986_);
v___x_3988_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3989_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3989_, 0, v___x_3987_);
lean_ctor_set(v___x_3989_, 1, v___x_3988_);
v___x_3990_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3990_, 0, v___x_3989_);
lean_ctor_set(v___x_3990_, 1, v___x_3980_);
v___x_3991_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3992_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3992_, 0, v___x_3990_);
lean_ctor_set(v___x_3992_, 1, v___x_3991_);
v___x_3993_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_3992_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_3993_;
}
}
else
{
lean_object* v_val_3995_; lean_object* v___x_3997_; 
lean_del_object(v___x_3977_);
lean_dec(v___x_3966_);
lean_dec(v_stx_3056_);
v_val_3995_ = lean_ctor_get(v_fst_3975_, 0);
lean_inc(v_val_3995_);
lean_dec_ref_known(v_fst_3975_, 1);
if (v_isShared_3974_ == 0)
{
lean_ctor_set(v___x_3973_, 0, v_val_3995_);
v___x_3997_ = v___x_3973_;
goto v_reusejp_3996_;
}
else
{
lean_object* v_reuseFailAlloc_3998_; 
v_reuseFailAlloc_3998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3998_, 0, v_val_3995_);
v___x_3997_ = v_reuseFailAlloc_3998_;
goto v_reusejp_3996_;
}
v_reusejp_3996_:
{
return v___x_3997_;
}
}
}
}
}
else
{
lean_object* v_a_4002_; lean_object* v___x_4004_; uint8_t v_isShared_4005_; uint8_t v_isSharedCheck_4009_; 
lean_dec(v___x_3966_);
lean_dec(v_stx_3056_);
v_a_4002_ = lean_ctor_get(v___x_3970_, 0);
v_isSharedCheck_4009_ = !lean_is_exclusive(v___x_3970_);
if (v_isSharedCheck_4009_ == 0)
{
v___x_4004_ = v___x_3970_;
v_isShared_4005_ = v_isSharedCheck_4009_;
goto v_resetjp_4003_;
}
else
{
lean_inc(v_a_4002_);
lean_dec(v___x_3970_);
v___x_4004_ = lean_box(0);
v_isShared_4005_ = v_isSharedCheck_4009_;
goto v_resetjp_4003_;
}
v_resetjp_4003_:
{
lean_object* v___x_4007_; 
if (v_isShared_4005_ == 0)
{
v___x_4007_ = v___x_4004_;
goto v_reusejp_4006_;
}
else
{
lean_object* v_reuseFailAlloc_4008_; 
v_reuseFailAlloc_4008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4008_, 0, v_a_4002_);
v___x_4007_ = v_reuseFailAlloc_4008_;
goto v_reusejp_4006_;
}
v_reusejp_4006_:
{
return v___x_4007_;
}
}
}
}
else
{
lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; 
v___x_4010_ = lean_unsigned_to_nat(2u);
v___x_4011_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_4010_);
lean_dec(v_stx_3056_);
v___x_4012_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_4011_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
if (lean_obj_tag(v___x_4012_) == 0)
{
lean_object* v_a_4013_; lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4056_; 
v_a_4013_ = lean_ctor_get(v___x_4012_, 0);
v_isSharedCheck_4056_ = !lean_is_exclusive(v___x_4012_);
if (v_isSharedCheck_4056_ == 0)
{
v___x_4015_ = v___x_4012_;
v_isShared_4016_ = v_isSharedCheck_4056_;
goto v_resetjp_4014_;
}
else
{
lean_inc(v_a_4013_);
lean_dec(v___x_4012_);
v___x_4015_ = lean_box(0);
v_isShared_4016_ = v_isSharedCheck_4056_;
goto v_resetjp_4014_;
}
v_resetjp_4014_:
{
lean_object* v___y_4018_; lean_object* v___y_4019_; lean_object* v___y_4020_; lean_object* v___y_4021_; lean_object* v___y_4022_; uint8_t v___y_4023_; uint8_t v___y_4029_; lean_object* v___y_4030_; lean_object* v___y_4031_; lean_object* v___y_4032_; lean_object* v___y_4033_; lean_object* v___y_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___y_4038_; lean_object* v___y_4039_; lean_object* v___y_4049_; lean_object* v___x_4052_; 
v___x_4035_ = lean_box(0);
v___x_4036_ = lean_unsigned_to_nat(0u);
v___x_4052_ = l_Lean_Parser_Term_getDoConfigLabel_x3f(v___x_3961_);
if (lean_obj_tag(v___x_4052_) == 0)
{
v___y_4049_ = v___x_4035_;
goto v___jp_4048_;
}
else
{
lean_object* v_val_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; 
v_val_4053_ = lean_ctor_get(v___x_4052_, 0);
lean_inc(v_val_4053_);
lean_dec_ref_known(v___x_4052_, 1);
v___x_4054_ = l_Lean_TSyntax_getId(v_val_4053_);
lean_dec(v_val_4053_);
v___x_4055_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4055_, 0, v___x_4054_);
lean_ctor_set(v___x_4055_, 1, v___x_4035_);
v___y_4049_ = v___x_4055_;
goto v___jp_4048_;
}
v___jp_4017_:
{
lean_object* v___x_4024_; lean_object* v___x_4026_; 
v___x_4024_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_4024_, 0, v___y_4019_);
lean_ctor_set(v___x_4024_, 1, v___y_4020_);
lean_ctor_set(v___x_4024_, 2, v___y_4021_);
lean_ctor_set(v___x_4024_, 3, v___y_4018_);
lean_ctor_set(v___x_4024_, 4, v___y_4022_);
lean_ctor_set_uint8(v___x_4024_, sizeof(void*)*5, v___y_4023_);
if (v_isShared_4016_ == 0)
{
lean_ctor_set(v___x_4015_, 0, v___x_4024_);
v___x_4026_ = v___x_4015_;
goto v_reusejp_4025_;
}
else
{
lean_object* v_reuseFailAlloc_4027_; 
v_reuseFailAlloc_4027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4027_, 0, v___x_4024_);
v___x_4026_ = v_reuseFailAlloc_4027_;
goto v_reusejp_4025_;
}
v_reusejp_4025_:
{
return v___x_4026_;
}
}
v___jp_4028_:
{
if (v___y_4029_ == 0)
{
v___y_4018_ = v___y_4034_;
v___y_4019_ = v___y_4030_;
v___y_4020_ = v___y_4031_;
v___y_4021_ = v___y_4032_;
v___y_4022_ = v___y_4033_;
v___y_4023_ = v___x_3963_;
goto v___jp_4017_;
}
else
{
v___y_4018_ = v___y_4034_;
v___y_4019_ = v___y_4030_;
v___y_4020_ = v___y_4031_;
v___y_4021_ = v___y_4032_;
v___y_4022_ = v___y_4033_;
v___y_4023_ = v___x_3383_;
goto v___jp_4017_;
}
}
v___jp_4037_:
{
lean_object* v_breaks_4040_; lean_object* v_continues_4041_; lean_object* v_returns_4042_; lean_object* v_reassigns_4043_; lean_object* v___x_4044_; uint8_t v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; 
v_breaks_4040_ = lean_ctor_get(v_a_4013_, 0);
lean_inc(v_breaks_4040_);
v_continues_4041_ = lean_ctor_get(v_a_4013_, 1);
lean_inc(v_continues_4041_);
v_returns_4042_ = lean_ctor_get(v_a_4013_, 2);
lean_inc(v_returns_4042_);
v_reassigns_4043_ = lean_ctor_get(v_a_4013_, 4);
lean_inc(v_reassigns_4043_);
lean_dec(v_a_4013_);
v___x_4044_ = l_List_appendTR___redArg(v___y_4038_, v___y_4039_);
v___x_4045_ = l_List_any___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13(v_breaks_4040_, v___x_4044_);
v___x_4046_ = l_List_foldl___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(v_breaks_4040_, v___x_4044_);
v___x_4047_ = l_List_foldl___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(v_continues_4041_, v___x_4044_);
lean_dec(v___x_4044_);
if (v___x_4045_ == 0)
{
v___y_4029_ = v___x_4045_;
v___y_4030_ = v___x_4046_;
v___y_4031_ = v___x_4047_;
v___y_4032_ = v_returns_4042_;
v___y_4033_ = v_reassigns_4043_;
v___y_4034_ = v___x_4036_;
goto v___jp_4028_;
}
else
{
v___y_4029_ = v___x_4045_;
v___y_4030_ = v___x_4046_;
v___y_4031_ = v___x_4047_;
v___y_4032_ = v_returns_4042_;
v___y_4033_ = v_reassigns_4043_;
v___y_4034_ = v___x_3960_;
goto v___jp_4028_;
}
}
v___jp_4048_:
{
uint8_t v___x_4050_; 
v___x_4050_ = l_Lean_Parser_Term_getDoConfigCapture(v___x_3961_);
lean_dec(v___x_3961_);
if (v___x_4050_ == 0)
{
v___y_4038_ = v___y_4049_;
v___y_4039_ = v___x_4035_;
goto v___jp_4037_;
}
else
{
lean_object* v___x_4051_; 
v___x_4051_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__73));
v___y_4038_ = v___y_4049_;
v___y_4039_ = v___x_4051_;
goto v___jp_4037_;
}
}
}
}
else
{
lean_dec(v___x_3961_);
return v___x_4012_;
}
}
}
}
else
{
lean_object* v___x_4057_; lean_object* v___y_4059_; lean_object* v___y_4060_; lean_object* v___y_4061_; lean_object* v___x_4078_; lean_object* v___y_4080_; lean_object* v___y_4081_; lean_object* v___y_4082_; lean_object* v___y_4087_; lean_object* v___x_4146_; uint8_t v___x_4147_; 
v___x_4057_ = lean_unsigned_to_nat(1u);
v___x_4078_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_4057_);
v___x_4146_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72));
lean_inc(v___x_4078_);
v___x_4147_ = l_Lean_Syntax_isOfKind(v___x_4078_, v___x_4146_);
if (v___x_4147_ == 0)
{
lean_object* v___x_4148_; lean_object* v_env_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; 
lean_dec(v___x_4078_);
v___x_4148_ = lean_st_ref_get(v_a_3062_);
v_env_4149_ = lean_ctor_get(v___x_4148_, 0);
lean_inc_ref(v_env_4149_);
lean_dec(v___x_4148_);
lean_inc_n(v_stx_3056_, 2);
v___x_4150_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_4151_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4152_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4151_, v_env_4149_, v___x_4150_);
v___x_4153_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_4154_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_4152_, v___x_4153_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_4152_);
if (lean_obj_tag(v___x_4154_) == 0)
{
lean_object* v_a_4155_; lean_object* v___x_4157_; uint8_t v_isShared_4158_; uint8_t v_isSharedCheck_4185_; 
v_a_4155_ = lean_ctor_get(v___x_4154_, 0);
v_isSharedCheck_4185_ = !lean_is_exclusive(v___x_4154_);
if (v_isSharedCheck_4185_ == 0)
{
v___x_4157_ = v___x_4154_;
v_isShared_4158_ = v_isSharedCheck_4185_;
goto v_resetjp_4156_;
}
else
{
lean_inc(v_a_4155_);
lean_dec(v___x_4154_);
v___x_4157_ = lean_box(0);
v_isShared_4158_ = v_isSharedCheck_4185_;
goto v_resetjp_4156_;
}
v_resetjp_4156_:
{
lean_object* v_fst_4159_; lean_object* v___x_4161_; uint8_t v_isShared_4162_; uint8_t v_isSharedCheck_4183_; 
v_fst_4159_ = lean_ctor_get(v_a_4155_, 0);
v_isSharedCheck_4183_ = !lean_is_exclusive(v_a_4155_);
if (v_isSharedCheck_4183_ == 0)
{
lean_object* v_unused_4184_; 
v_unused_4184_ = lean_ctor_get(v_a_4155_, 1);
lean_dec(v_unused_4184_);
v___x_4161_ = v_a_4155_;
v_isShared_4162_ = v_isSharedCheck_4183_;
goto v_resetjp_4160_;
}
else
{
lean_inc(v_fst_4159_);
lean_dec(v_a_4155_);
v___x_4161_ = lean_box(0);
v_isShared_4162_ = v_isSharedCheck_4183_;
goto v_resetjp_4160_;
}
v_resetjp_4160_:
{
if (lean_obj_tag(v_fst_4159_) == 0)
{
lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4166_; 
lean_del_object(v___x_4157_);
v___x_4163_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4164_ = l_Lean_MessageData_ofName(v___x_4150_);
lean_inc_ref(v___x_4164_);
if (v_isShared_4162_ == 0)
{
lean_ctor_set_tag(v___x_4161_, 7);
lean_ctor_set(v___x_4161_, 1, v___x_4164_);
lean_ctor_set(v___x_4161_, 0, v___x_4163_);
v___x_4166_ = v___x_4161_;
goto v_reusejp_4165_;
}
else
{
lean_object* v_reuseFailAlloc_4178_; 
v_reuseFailAlloc_4178_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4178_, 0, v___x_4163_);
lean_ctor_set(v_reuseFailAlloc_4178_, 1, v___x_4164_);
v___x_4166_ = v_reuseFailAlloc_4178_;
goto v_reusejp_4165_;
}
v_reusejp_4165_:
{
lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; 
v___x_4167_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4168_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4168_, 0, v___x_4166_);
lean_ctor_set(v___x_4168_, 1, v___x_4167_);
v___x_4169_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_4170_ = l_Lean_indentD(v___x_4169_);
v___x_4171_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4171_, 0, v___x_4168_);
lean_ctor_set(v___x_4171_, 1, v___x_4170_);
v___x_4172_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4173_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4173_, 0, v___x_4171_);
lean_ctor_set(v___x_4173_, 1, v___x_4172_);
v___x_4174_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4174_, 0, v___x_4173_);
lean_ctor_set(v___x_4174_, 1, v___x_4164_);
v___x_4175_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4176_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4176_, 0, v___x_4174_);
lean_ctor_set(v___x_4176_, 1, v___x_4175_);
v___x_4177_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_4176_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_4177_;
}
}
else
{
lean_object* v_val_4179_; lean_object* v___x_4181_; 
lean_del_object(v___x_4161_);
lean_dec(v___x_4150_);
lean_dec(v_stx_3056_);
v_val_4179_ = lean_ctor_get(v_fst_4159_, 0);
lean_inc(v_val_4179_);
lean_dec_ref_known(v_fst_4159_, 1);
if (v_isShared_4158_ == 0)
{
lean_ctor_set(v___x_4157_, 0, v_val_4179_);
v___x_4181_ = v___x_4157_;
goto v_reusejp_4180_;
}
else
{
lean_object* v_reuseFailAlloc_4182_; 
v_reuseFailAlloc_4182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4182_, 0, v_val_4179_);
v___x_4181_ = v_reuseFailAlloc_4182_;
goto v_reusejp_4180_;
}
v_reusejp_4180_:
{
return v___x_4181_;
}
}
}
}
}
else
{
lean_object* v_a_4186_; lean_object* v___x_4188_; uint8_t v_isShared_4189_; uint8_t v_isSharedCheck_4193_; 
lean_dec(v___x_4150_);
lean_dec(v_stx_3056_);
v_a_4186_ = lean_ctor_get(v___x_4154_, 0);
v_isSharedCheck_4193_ = !lean_is_exclusive(v___x_4154_);
if (v_isSharedCheck_4193_ == 0)
{
v___x_4188_ = v___x_4154_;
v_isShared_4189_ = v_isSharedCheck_4193_;
goto v_resetjp_4187_;
}
else
{
lean_inc(v_a_4186_);
lean_dec(v___x_4154_);
v___x_4188_ = lean_box(0);
v_isShared_4189_ = v_isSharedCheck_4193_;
goto v_resetjp_4187_;
}
v_resetjp_4187_:
{
lean_object* v___x_4191_; 
if (v_isShared_4189_ == 0)
{
v___x_4191_ = v___x_4188_;
goto v_reusejp_4190_;
}
else
{
lean_object* v_reuseFailAlloc_4192_; 
v_reuseFailAlloc_4192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4192_, 0, v_a_4186_);
v___x_4191_ = v_reuseFailAlloc_4192_;
goto v_reusejp_4190_;
}
v_reusejp_4190_:
{
return v___x_4191_;
}
}
}
}
else
{
lean_object* v___x_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; uint8_t v___x_4200_; 
v___x_4194_ = lean_unsigned_to_nat(2u);
v___x_4195_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_4194_);
v___x_4196_ = l_Lean_Syntax_getArgs(v___x_4195_);
lean_dec(v___x_4195_);
v___x_4197_ = lean_unsigned_to_nat(0u);
v___x_4198_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__2));
v___x_4199_ = lean_array_get_size(v___x_4196_);
v___x_4200_ = lean_nat_dec_lt(v___x_4197_, v___x_4199_);
if (v___x_4200_ == 0)
{
lean_dec_ref(v___x_4196_);
v___y_4087_ = v___x_4198_;
goto v___jp_4086_;
}
else
{
lean_object* v___x_4201_; lean_object* v___x_4202_; uint8_t v___x_4203_; 
v___x_4201_ = lean_box(v___x_4147_);
v___x_4202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4202_, 0, v___x_4201_);
lean_ctor_set(v___x_4202_, 1, v___x_4198_);
v___x_4203_ = lean_nat_dec_le(v___x_4199_, v___x_4199_);
if (v___x_4203_ == 0)
{
if (v___x_4200_ == 0)
{
lean_dec_ref_known(v___x_4202_, 2);
lean_dec_ref(v___x_4196_);
v___y_4087_ = v___x_4198_;
goto v___jp_4086_;
}
else
{
size_t v___x_4204_; size_t v___x_4205_; lean_object* v___x_4206_; lean_object* v_snd_4207_; 
v___x_4204_ = ((size_t)0ULL);
v___x_4205_ = lean_usize_of_nat(v___x_4199_);
v___x_4206_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(v___x_4147_, v___x_3381_, v___x_4196_, v___x_4204_, v___x_4205_, v___x_4202_);
lean_dec_ref(v___x_4196_);
v_snd_4207_ = lean_ctor_get(v___x_4206_, 1);
lean_inc(v_snd_4207_);
lean_dec_ref(v___x_4206_);
v___y_4087_ = v_snd_4207_;
goto v___jp_4086_;
}
}
else
{
size_t v___x_4208_; size_t v___x_4209_; lean_object* v___x_4210_; lean_object* v_snd_4211_; 
v___x_4208_ = ((size_t)0ULL);
v___x_4209_ = lean_usize_of_nat(v___x_4199_);
v___x_4210_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(v___x_4147_, v___x_3381_, v___x_4196_, v___x_4208_, v___x_4209_, v___x_4202_);
lean_dec_ref(v___x_4196_);
v_snd_4211_ = lean_ctor_get(v___x_4210_, 1);
lean_inc(v_snd_4211_);
lean_dec_ref(v___x_4210_);
v___y_4087_ = v_snd_4211_;
goto v___jp_4086_;
}
}
}
v___jp_4058_:
{
lean_object* v_breaks_4062_; lean_object* v_continues_4063_; lean_object* v_returns_4064_; lean_object* v_reassigns_4065_; lean_object* v___x_4067_; uint8_t v_isShared_4068_; uint8_t v_isSharedCheck_4076_; 
v_breaks_4062_ = lean_ctor_get(v___y_4060_, 0);
v_continues_4063_ = lean_ctor_get(v___y_4060_, 1);
v_returns_4064_ = lean_ctor_get(v___y_4060_, 2);
v_reassigns_4065_ = lean_ctor_get(v___y_4060_, 4);
v_isSharedCheck_4076_ = !lean_is_exclusive(v___y_4060_);
if (v_isSharedCheck_4076_ == 0)
{
lean_object* v_unused_4077_; 
v_unused_4077_ = lean_ctor_get(v___y_4060_, 3);
lean_dec(v_unused_4077_);
v___x_4067_ = v___y_4060_;
v_isShared_4068_ = v_isSharedCheck_4076_;
goto v_resetjp_4066_;
}
else
{
lean_inc(v_reassigns_4065_);
lean_inc(v_returns_4064_);
lean_inc(v_continues_4063_);
lean_inc(v_breaks_4062_);
lean_dec(v___y_4060_);
v___x_4067_ = lean_box(0);
v_isShared_4068_ = v_isSharedCheck_4076_;
goto v_resetjp_4066_;
}
v_resetjp_4066_:
{
lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4073_; 
v___x_4069_ = l_List_appendTR___redArg(v___y_4059_, v___y_4061_);
v___x_4070_ = l_List_foldl___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(v_breaks_4062_, v___x_4069_);
v___x_4071_ = l_List_foldl___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(v_continues_4063_, v___x_4069_);
lean_dec(v___x_4069_);
if (v_isShared_4068_ == 0)
{
lean_ctor_set(v___x_4067_, 3, v___x_4057_);
lean_ctor_set(v___x_4067_, 1, v___x_4071_);
lean_ctor_set(v___x_4067_, 0, v___x_4070_);
v___x_4073_ = v___x_4067_;
goto v_reusejp_4072_;
}
else
{
lean_object* v_reuseFailAlloc_4075_; 
v_reuseFailAlloc_4075_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_4075_, 0, v___x_4070_);
lean_ctor_set(v_reuseFailAlloc_4075_, 1, v___x_4071_);
lean_ctor_set(v_reuseFailAlloc_4075_, 2, v_returns_4064_);
lean_ctor_set(v_reuseFailAlloc_4075_, 3, v___x_4057_);
lean_ctor_set(v_reuseFailAlloc_4075_, 4, v_reassigns_4065_);
v___x_4073_ = v_reuseFailAlloc_4075_;
goto v_reusejp_4072_;
}
v_reusejp_4072_:
{
lean_object* v___x_4074_; 
lean_ctor_set_uint8(v___x_4073_, sizeof(void*)*5, v___x_3381_);
v___x_4074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4074_, 0, v___x_4073_);
return v___x_4074_;
}
}
}
v___jp_4079_:
{
uint8_t v___x_4083_; 
v___x_4083_ = l_Lean_Parser_Term_getDoConfigCapture(v___x_4078_);
lean_dec(v___x_4078_);
if (v___x_4083_ == 0)
{
v___y_4059_ = v___y_4082_;
v___y_4060_ = v___y_4081_;
v___y_4061_ = v___y_4080_;
goto v___jp_4058_;
}
else
{
lean_object* v___x_4084_; lean_object* v___x_4085_; 
v___x_4084_ = lean_box(0);
v___x_4085_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4085_, 0, v___x_4084_);
lean_ctor_set(v___x_4085_, 1, v___y_4080_);
v___y_4059_ = v___y_4082_;
v___y_4060_ = v___y_4081_;
v___y_4061_ = v___x_4085_;
goto v___jp_4058_;
}
}
v___jp_4086_:
{
size_t v_sz_4088_; size_t v___x_4089_; lean_object* v___x_4090_; 
v_sz_4088_ = lean_array_size(v___y_4087_);
v___x_4089_ = ((size_t)0ULL);
v___x_4090_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__15(v_sz_4088_, v___x_4089_, v___y_4087_);
if (lean_obj_tag(v___x_4090_) == 0)
{
lean_object* v___x_4091_; lean_object* v_env_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; 
lean_dec(v___x_4078_);
v___x_4091_ = lean_st_ref_get(v_a_3062_);
v_env_4092_ = lean_ctor_get(v___x_4091_, 0);
lean_inc_ref(v_env_4092_);
lean_dec(v___x_4091_);
lean_inc_n(v_stx_3056_, 2);
v___x_4093_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_4094_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4095_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4094_, v_env_4092_, v___x_4093_);
v___x_4096_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_4097_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_4095_, v___x_4096_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_4095_);
if (lean_obj_tag(v___x_4097_) == 0)
{
lean_object* v_a_4098_; lean_object* v___x_4100_; uint8_t v_isShared_4101_; uint8_t v_isSharedCheck_4128_; 
v_a_4098_ = lean_ctor_get(v___x_4097_, 0);
v_isSharedCheck_4128_ = !lean_is_exclusive(v___x_4097_);
if (v_isSharedCheck_4128_ == 0)
{
v___x_4100_ = v___x_4097_;
v_isShared_4101_ = v_isSharedCheck_4128_;
goto v_resetjp_4099_;
}
else
{
lean_inc(v_a_4098_);
lean_dec(v___x_4097_);
v___x_4100_ = lean_box(0);
v_isShared_4101_ = v_isSharedCheck_4128_;
goto v_resetjp_4099_;
}
v_resetjp_4099_:
{
lean_object* v_fst_4102_; lean_object* v___x_4104_; uint8_t v_isShared_4105_; uint8_t v_isSharedCheck_4126_; 
v_fst_4102_ = lean_ctor_get(v_a_4098_, 0);
v_isSharedCheck_4126_ = !lean_is_exclusive(v_a_4098_);
if (v_isSharedCheck_4126_ == 0)
{
lean_object* v_unused_4127_; 
v_unused_4127_ = lean_ctor_get(v_a_4098_, 1);
lean_dec(v_unused_4127_);
v___x_4104_ = v_a_4098_;
v_isShared_4105_ = v_isSharedCheck_4126_;
goto v_resetjp_4103_;
}
else
{
lean_inc(v_fst_4102_);
lean_dec(v_a_4098_);
v___x_4104_ = lean_box(0);
v_isShared_4105_ = v_isSharedCheck_4126_;
goto v_resetjp_4103_;
}
v_resetjp_4103_:
{
if (lean_obj_tag(v_fst_4102_) == 0)
{
lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4109_; 
lean_del_object(v___x_4100_);
v___x_4106_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4107_ = l_Lean_MessageData_ofName(v___x_4093_);
lean_inc_ref(v___x_4107_);
if (v_isShared_4105_ == 0)
{
lean_ctor_set_tag(v___x_4104_, 7);
lean_ctor_set(v___x_4104_, 1, v___x_4107_);
lean_ctor_set(v___x_4104_, 0, v___x_4106_);
v___x_4109_ = v___x_4104_;
goto v_reusejp_4108_;
}
else
{
lean_object* v_reuseFailAlloc_4121_; 
v_reuseFailAlloc_4121_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4121_, 0, v___x_4106_);
lean_ctor_set(v_reuseFailAlloc_4121_, 1, v___x_4107_);
v___x_4109_ = v_reuseFailAlloc_4121_;
goto v_reusejp_4108_;
}
v_reusejp_4108_:
{
lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; 
v___x_4110_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4111_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4111_, 0, v___x_4109_);
lean_ctor_set(v___x_4111_, 1, v___x_4110_);
v___x_4112_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_4113_ = l_Lean_indentD(v___x_4112_);
v___x_4114_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4114_, 0, v___x_4111_);
lean_ctor_set(v___x_4114_, 1, v___x_4113_);
v___x_4115_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4116_, 0, v___x_4114_);
lean_ctor_set(v___x_4116_, 1, v___x_4115_);
v___x_4117_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4117_, 0, v___x_4116_);
lean_ctor_set(v___x_4117_, 1, v___x_4107_);
v___x_4118_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4119_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4119_, 0, v___x_4117_);
lean_ctor_set(v___x_4119_, 1, v___x_4118_);
v___x_4120_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_4119_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_4120_;
}
}
else
{
lean_object* v_val_4122_; lean_object* v___x_4124_; 
lean_del_object(v___x_4104_);
lean_dec(v___x_4093_);
lean_dec(v_stx_3056_);
v_val_4122_ = lean_ctor_get(v_fst_4102_, 0);
lean_inc(v_val_4122_);
lean_dec_ref_known(v_fst_4102_, 1);
if (v_isShared_4101_ == 0)
{
lean_ctor_set(v___x_4100_, 0, v_val_4122_);
v___x_4124_ = v___x_4100_;
goto v_reusejp_4123_;
}
else
{
lean_object* v_reuseFailAlloc_4125_; 
v_reuseFailAlloc_4125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4125_, 0, v_val_4122_);
v___x_4124_ = v_reuseFailAlloc_4125_;
goto v_reusejp_4123_;
}
v_reusejp_4123_:
{
return v___x_4124_;
}
}
}
}
}
else
{
lean_object* v_a_4129_; lean_object* v___x_4131_; uint8_t v_isShared_4132_; uint8_t v_isSharedCheck_4136_; 
lean_dec(v___x_4093_);
lean_dec(v_stx_3056_);
v_a_4129_ = lean_ctor_get(v___x_4097_, 0);
v_isSharedCheck_4136_ = !lean_is_exclusive(v___x_4097_);
if (v_isSharedCheck_4136_ == 0)
{
v___x_4131_ = v___x_4097_;
v_isShared_4132_ = v_isSharedCheck_4136_;
goto v_resetjp_4130_;
}
else
{
lean_inc(v_a_4129_);
lean_dec(v___x_4097_);
v___x_4131_ = lean_box(0);
v_isShared_4132_ = v_isSharedCheck_4136_;
goto v_resetjp_4130_;
}
v_resetjp_4130_:
{
lean_object* v___x_4134_; 
if (v_isShared_4132_ == 0)
{
v___x_4134_ = v___x_4131_;
goto v_reusejp_4133_;
}
else
{
lean_object* v_reuseFailAlloc_4135_; 
v_reuseFailAlloc_4135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4135_, 0, v_a_4129_);
v___x_4134_ = v_reuseFailAlloc_4135_;
goto v_reusejp_4133_;
}
v_reusejp_4133_:
{
return v___x_4134_;
}
}
}
}
else
{
lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; 
lean_dec_ref_known(v___x_4090_, 1);
v___x_4137_ = lean_unsigned_to_nat(4u);
v___x_4138_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_4137_);
lean_dec(v_stx_3056_);
v___x_4139_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_4138_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
if (lean_obj_tag(v___x_4139_) == 0)
{
lean_object* v_a_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; 
v_a_4140_ = lean_ctor_get(v___x_4139_, 0);
lean_inc(v_a_4140_);
lean_dec_ref_known(v___x_4139_, 1);
v___x_4141_ = lean_box(0);
v___x_4142_ = l_Lean_Parser_Term_getDoConfigLabel_x3f(v___x_4078_);
if (lean_obj_tag(v___x_4142_) == 0)
{
v___y_4080_ = v___x_4141_;
v___y_4081_ = v_a_4140_;
v___y_4082_ = v___x_4141_;
goto v___jp_4079_;
}
else
{
lean_object* v_val_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; 
v_val_4143_ = lean_ctor_get(v___x_4142_, 0);
lean_inc(v_val_4143_);
lean_dec_ref_known(v___x_4142_, 1);
v___x_4144_ = l_Lean_TSyntax_getId(v_val_4143_);
lean_dec(v_val_4143_);
v___x_4145_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4145_, 0, v___x_4144_);
lean_ctor_set(v___x_4145_, 1, v___x_4141_);
v___y_4080_ = v___x_4141_;
v___y_4081_ = v_a_4140_;
v___y_4082_ = v___x_4145_;
goto v___jp_4079_;
}
}
else
{
lean_dec(v___x_4078_);
return v___x_4139_;
}
}
}
}
}
else
{
lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; 
v___x_4212_ = lean_unsigned_to_nat(1u);
v___x_4213_ = lean_unsigned_to_nat(3u);
v___x_4214_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_4213_);
lean_dec(v_stx_3056_);
v___x_4215_ = l_Lean_NameSet_empty;
v___x_4216_ = lean_box(1);
v___x_4217_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_4217_, 0, v___x_4215_);
lean_ctor_set(v___x_4217_, 1, v___x_4215_);
lean_ctor_set(v___x_4217_, 2, v___x_4216_);
lean_ctor_set(v___x_4217_, 3, v___x_4212_);
lean_ctor_set(v___x_4217_, 4, v___x_4215_);
lean_ctor_set_uint8(v___x_4217_, sizeof(void*)*5, v___x_3379_);
v___x_4218_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_4214_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
if (lean_obj_tag(v___x_4218_) == 0)
{
lean_object* v_a_4219_; lean_object* v___x_4221_; uint8_t v_isShared_4222_; uint8_t v_isSharedCheck_4227_; 
v_a_4219_ = lean_ctor_get(v___x_4218_, 0);
v_isSharedCheck_4227_ = !lean_is_exclusive(v___x_4218_);
if (v_isSharedCheck_4227_ == 0)
{
v___x_4221_ = v___x_4218_;
v_isShared_4222_ = v_isSharedCheck_4227_;
goto v_resetjp_4220_;
}
else
{
lean_inc(v_a_4219_);
lean_dec(v___x_4218_);
v___x_4221_ = lean_box(0);
v_isShared_4222_ = v_isSharedCheck_4227_;
goto v_resetjp_4220_;
}
v_resetjp_4220_:
{
lean_object* v___x_4223_; lean_object* v___x_4225_; 
v___x_4223_ = l_Lean_Elab_Do_ControlInfo_alternative(v___x_4217_, v_a_4219_);
if (v_isShared_4222_ == 0)
{
lean_ctor_set(v___x_4221_, 0, v___x_4223_);
v___x_4225_ = v___x_4221_;
goto v_reusejp_4224_;
}
else
{
lean_object* v_reuseFailAlloc_4226_; 
v_reuseFailAlloc_4226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4226_, 0, v___x_4223_);
v___x_4225_ = v_reuseFailAlloc_4226_;
goto v_reusejp_4224_;
}
v_reusejp_4224_:
{
return v___x_4225_;
}
}
}
else
{
lean_dec_ref_known(v___x_4217_, 5);
return v___x_4218_;
}
}
}
else
{
lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; size_t v_sz_4231_; size_t v___x_4232_; lean_object* v___x_4233_; 
v___x_4228_ = lean_unsigned_to_nat(4u);
v___x_4229_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_4228_);
v___x_4230_ = l_Lean_Syntax_getArgs(v___x_4229_);
lean_dec(v___x_4229_);
v_sz_4231_ = lean_array_size(v___x_4230_);
v___x_4232_ = ((size_t)0ULL);
v___x_4233_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__16(v_sz_4231_, v___x_4232_, v___x_4230_);
if (lean_obj_tag(v___x_4233_) == 0)
{
lean_object* v___x_4234_; lean_object* v_env_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; 
v___x_4234_ = lean_st_ref_get(v_a_3062_);
v_env_4235_ = lean_ctor_get(v___x_4234_, 0);
lean_inc_ref(v_env_4235_);
lean_dec(v___x_4234_);
lean_inc_n(v_stx_3056_, 2);
v___x_4236_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_4237_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4238_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4237_, v_env_4235_, v___x_4236_);
v___x_4239_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_4240_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_4238_, v___x_4239_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_4238_);
if (lean_obj_tag(v___x_4240_) == 0)
{
lean_object* v_a_4241_; lean_object* v___x_4243_; uint8_t v_isShared_4244_; uint8_t v_isSharedCheck_4271_; 
v_a_4241_ = lean_ctor_get(v___x_4240_, 0);
v_isSharedCheck_4271_ = !lean_is_exclusive(v___x_4240_);
if (v_isSharedCheck_4271_ == 0)
{
v___x_4243_ = v___x_4240_;
v_isShared_4244_ = v_isSharedCheck_4271_;
goto v_resetjp_4242_;
}
else
{
lean_inc(v_a_4241_);
lean_dec(v___x_4240_);
v___x_4243_ = lean_box(0);
v_isShared_4244_ = v_isSharedCheck_4271_;
goto v_resetjp_4242_;
}
v_resetjp_4242_:
{
lean_object* v_fst_4245_; lean_object* v___x_4247_; uint8_t v_isShared_4248_; uint8_t v_isSharedCheck_4269_; 
v_fst_4245_ = lean_ctor_get(v_a_4241_, 0);
v_isSharedCheck_4269_ = !lean_is_exclusive(v_a_4241_);
if (v_isSharedCheck_4269_ == 0)
{
lean_object* v_unused_4270_; 
v_unused_4270_ = lean_ctor_get(v_a_4241_, 1);
lean_dec(v_unused_4270_);
v___x_4247_ = v_a_4241_;
v_isShared_4248_ = v_isSharedCheck_4269_;
goto v_resetjp_4246_;
}
else
{
lean_inc(v_fst_4245_);
lean_dec(v_a_4241_);
v___x_4247_ = lean_box(0);
v_isShared_4248_ = v_isSharedCheck_4269_;
goto v_resetjp_4246_;
}
v_resetjp_4246_:
{
if (lean_obj_tag(v_fst_4245_) == 0)
{
lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4252_; 
lean_del_object(v___x_4243_);
v___x_4249_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4250_ = l_Lean_MessageData_ofName(v___x_4236_);
lean_inc_ref(v___x_4250_);
if (v_isShared_4248_ == 0)
{
lean_ctor_set_tag(v___x_4247_, 7);
lean_ctor_set(v___x_4247_, 1, v___x_4250_);
lean_ctor_set(v___x_4247_, 0, v___x_4249_);
v___x_4252_ = v___x_4247_;
goto v_reusejp_4251_;
}
else
{
lean_object* v_reuseFailAlloc_4264_; 
v_reuseFailAlloc_4264_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4264_, 0, v___x_4249_);
lean_ctor_set(v_reuseFailAlloc_4264_, 1, v___x_4250_);
v___x_4252_ = v_reuseFailAlloc_4264_;
goto v_reusejp_4251_;
}
v_reusejp_4251_:
{
lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; 
v___x_4253_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4254_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4254_, 0, v___x_4252_);
lean_ctor_set(v___x_4254_, 1, v___x_4253_);
v___x_4255_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_4256_ = l_Lean_indentD(v___x_4255_);
v___x_4257_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4257_, 0, v___x_4254_);
lean_ctor_set(v___x_4257_, 1, v___x_4256_);
v___x_4258_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4259_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4259_, 0, v___x_4257_);
lean_ctor_set(v___x_4259_, 1, v___x_4258_);
v___x_4260_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4260_, 0, v___x_4259_);
lean_ctor_set(v___x_4260_, 1, v___x_4250_);
v___x_4261_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4262_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4262_, 0, v___x_4260_);
lean_ctor_set(v___x_4262_, 1, v___x_4261_);
v___x_4263_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_4262_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_4263_;
}
}
else
{
lean_object* v_val_4265_; lean_object* v___x_4267_; 
lean_del_object(v___x_4247_);
lean_dec(v___x_4236_);
lean_dec(v_stx_3056_);
v_val_4265_ = lean_ctor_get(v_fst_4245_, 0);
lean_inc(v_val_4265_);
lean_dec_ref_known(v_fst_4245_, 1);
if (v_isShared_4244_ == 0)
{
lean_ctor_set(v___x_4243_, 0, v_val_4265_);
v___x_4267_ = v___x_4243_;
goto v_reusejp_4266_;
}
else
{
lean_object* v_reuseFailAlloc_4268_; 
v_reuseFailAlloc_4268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4268_, 0, v_val_4265_);
v___x_4267_ = v_reuseFailAlloc_4268_;
goto v_reusejp_4266_;
}
v_reusejp_4266_:
{
return v___x_4267_;
}
}
}
}
}
else
{
lean_object* v_a_4272_; lean_object* v___x_4274_; uint8_t v_isShared_4275_; uint8_t v_isSharedCheck_4279_; 
lean_dec(v___x_4236_);
lean_dec(v_stx_3056_);
v_a_4272_ = lean_ctor_get(v___x_4240_, 0);
v_isSharedCheck_4279_ = !lean_is_exclusive(v___x_4240_);
if (v_isSharedCheck_4279_ == 0)
{
v___x_4274_ = v___x_4240_;
v_isShared_4275_ = v_isSharedCheck_4279_;
goto v_resetjp_4273_;
}
else
{
lean_inc(v_a_4272_);
lean_dec(v___x_4240_);
v___x_4274_ = lean_box(0);
v_isShared_4275_ = v_isSharedCheck_4279_;
goto v_resetjp_4273_;
}
v_resetjp_4273_:
{
lean_object* v___x_4277_; 
if (v_isShared_4275_ == 0)
{
v___x_4277_ = v___x_4274_;
goto v_reusejp_4276_;
}
else
{
lean_object* v_reuseFailAlloc_4278_; 
v_reuseFailAlloc_4278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4278_, 0, v_a_4272_);
v___x_4277_ = v_reuseFailAlloc_4278_;
goto v_reusejp_4276_;
}
v_reusejp_4276_:
{
return v___x_4277_;
}
}
}
}
else
{
lean_object* v_val_4280_; lean_object* v___x_4282_; uint8_t v_isShared_4283_; uint8_t v_isSharedCheck_4367_; 
v_val_4280_ = lean_ctor_get(v___x_4233_, 0);
v_isSharedCheck_4367_ = !lean_is_exclusive(v___x_4233_);
if (v_isSharedCheck_4367_ == 0)
{
v___x_4282_ = v___x_4233_;
v_isShared_4283_ = v_isSharedCheck_4367_;
goto v_resetjp_4281_;
}
else
{
lean_inc(v_val_4280_);
lean_dec(v___x_4233_);
v___x_4282_ = lean_box(0);
v_isShared_4283_ = v_isSharedCheck_4367_;
goto v_resetjp_4281_;
}
v_resetjp_4281_:
{
lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v_elseSeq_x3f_4287_; lean_object* v___y_4288_; lean_object* v___y_4289_; lean_object* v___y_4290_; lean_object* v___y_4291_; lean_object* v___y_4292_; lean_object* v___y_4293_; lean_object* v___x_4310_; lean_object* v___x_4311_; uint8_t v___x_4312_; 
v___x_4284_ = lean_unsigned_to_nat(3u);
v___x_4285_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_4284_);
v___x_4310_ = lean_unsigned_to_nat(5u);
v___x_4311_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_4310_);
v___x_4312_ = l_Lean_Syntax_isNone(v___x_4311_);
if (v___x_4312_ == 0)
{
lean_object* v___x_4313_; uint8_t v___x_4314_; 
v___x_4313_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_4311_);
v___x_4314_ = l_Lean_Syntax_matchesNull(v___x_4311_, v___x_4313_);
if (v___x_4314_ == 0)
{
lean_object* v___x_4315_; lean_object* v_env_4316_; lean_object* v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; 
lean_dec(v___x_4311_);
lean_dec(v___x_4285_);
lean_del_object(v___x_4282_);
lean_dec(v_val_4280_);
v___x_4315_ = lean_st_ref_get(v_a_3062_);
v_env_4316_ = lean_ctor_get(v___x_4315_, 0);
lean_inc_ref(v_env_4316_);
lean_dec(v___x_4315_);
lean_inc_n(v_stx_3056_, 2);
v___x_4317_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_4318_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4319_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4318_, v_env_4316_, v___x_4317_);
v___x_4320_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_4321_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_4319_, v___x_4320_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_4319_);
if (lean_obj_tag(v___x_4321_) == 0)
{
lean_object* v_a_4322_; lean_object* v___x_4324_; uint8_t v_isShared_4325_; uint8_t v_isSharedCheck_4352_; 
v_a_4322_ = lean_ctor_get(v___x_4321_, 0);
v_isSharedCheck_4352_ = !lean_is_exclusive(v___x_4321_);
if (v_isSharedCheck_4352_ == 0)
{
v___x_4324_ = v___x_4321_;
v_isShared_4325_ = v_isSharedCheck_4352_;
goto v_resetjp_4323_;
}
else
{
lean_inc(v_a_4322_);
lean_dec(v___x_4321_);
v___x_4324_ = lean_box(0);
v_isShared_4325_ = v_isSharedCheck_4352_;
goto v_resetjp_4323_;
}
v_resetjp_4323_:
{
lean_object* v_fst_4326_; lean_object* v___x_4328_; uint8_t v_isShared_4329_; uint8_t v_isSharedCheck_4350_; 
v_fst_4326_ = lean_ctor_get(v_a_4322_, 0);
v_isSharedCheck_4350_ = !lean_is_exclusive(v_a_4322_);
if (v_isSharedCheck_4350_ == 0)
{
lean_object* v_unused_4351_; 
v_unused_4351_ = lean_ctor_get(v_a_4322_, 1);
lean_dec(v_unused_4351_);
v___x_4328_ = v_a_4322_;
v_isShared_4329_ = v_isSharedCheck_4350_;
goto v_resetjp_4327_;
}
else
{
lean_inc(v_fst_4326_);
lean_dec(v_a_4322_);
v___x_4328_ = lean_box(0);
v_isShared_4329_ = v_isSharedCheck_4350_;
goto v_resetjp_4327_;
}
v_resetjp_4327_:
{
if (lean_obj_tag(v_fst_4326_) == 0)
{
lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4333_; 
lean_del_object(v___x_4324_);
v___x_4330_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4331_ = l_Lean_MessageData_ofName(v___x_4317_);
lean_inc_ref(v___x_4331_);
if (v_isShared_4329_ == 0)
{
lean_ctor_set_tag(v___x_4328_, 7);
lean_ctor_set(v___x_4328_, 1, v___x_4331_);
lean_ctor_set(v___x_4328_, 0, v___x_4330_);
v___x_4333_ = v___x_4328_;
goto v_reusejp_4332_;
}
else
{
lean_object* v_reuseFailAlloc_4345_; 
v_reuseFailAlloc_4345_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4345_, 0, v___x_4330_);
lean_ctor_set(v_reuseFailAlloc_4345_, 1, v___x_4331_);
v___x_4333_ = v_reuseFailAlloc_4345_;
goto v_reusejp_4332_;
}
v_reusejp_4332_:
{
lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; 
v___x_4334_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4335_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4335_, 0, v___x_4333_);
lean_ctor_set(v___x_4335_, 1, v___x_4334_);
v___x_4336_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_4337_ = l_Lean_indentD(v___x_4336_);
v___x_4338_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4338_, 0, v___x_4335_);
lean_ctor_set(v___x_4338_, 1, v___x_4337_);
v___x_4339_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4340_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4340_, 0, v___x_4338_);
lean_ctor_set(v___x_4340_, 1, v___x_4339_);
v___x_4341_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4341_, 0, v___x_4340_);
lean_ctor_set(v___x_4341_, 1, v___x_4331_);
v___x_4342_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4343_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4343_, 0, v___x_4341_);
lean_ctor_set(v___x_4343_, 1, v___x_4342_);
v___x_4344_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_4343_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_4344_;
}
}
else
{
lean_object* v_val_4346_; lean_object* v___x_4348_; 
lean_del_object(v___x_4328_);
lean_dec(v___x_4317_);
lean_dec(v_stx_3056_);
v_val_4346_ = lean_ctor_get(v_fst_4326_, 0);
lean_inc(v_val_4346_);
lean_dec_ref_known(v_fst_4326_, 1);
if (v_isShared_4325_ == 0)
{
lean_ctor_set(v___x_4324_, 0, v_val_4346_);
v___x_4348_ = v___x_4324_;
goto v_reusejp_4347_;
}
else
{
lean_object* v_reuseFailAlloc_4349_; 
v_reuseFailAlloc_4349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4349_, 0, v_val_4346_);
v___x_4348_ = v_reuseFailAlloc_4349_;
goto v_reusejp_4347_;
}
v_reusejp_4347_:
{
return v___x_4348_;
}
}
}
}
}
else
{
lean_object* v_a_4353_; lean_object* v___x_4355_; uint8_t v_isShared_4356_; uint8_t v_isSharedCheck_4360_; 
lean_dec(v___x_4317_);
lean_dec(v_stx_3056_);
v_a_4353_ = lean_ctor_get(v___x_4321_, 0);
v_isSharedCheck_4360_ = !lean_is_exclusive(v___x_4321_);
if (v_isSharedCheck_4360_ == 0)
{
v___x_4355_ = v___x_4321_;
v_isShared_4356_ = v_isSharedCheck_4360_;
goto v_resetjp_4354_;
}
else
{
lean_inc(v_a_4353_);
lean_dec(v___x_4321_);
v___x_4355_ = lean_box(0);
v_isShared_4356_ = v_isSharedCheck_4360_;
goto v_resetjp_4354_;
}
v_resetjp_4354_:
{
lean_object* v___x_4358_; 
if (v_isShared_4356_ == 0)
{
v___x_4358_ = v___x_4355_;
goto v_reusejp_4357_;
}
else
{
lean_object* v_reuseFailAlloc_4359_; 
v_reuseFailAlloc_4359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4359_, 0, v_a_4353_);
v___x_4358_ = v_reuseFailAlloc_4359_;
goto v_reusejp_4357_;
}
v_reusejp_4357_:
{
return v___x_4358_;
}
}
}
}
else
{
lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v___x_4364_; 
lean_dec(v_stx_3056_);
v___x_4361_ = lean_unsigned_to_nat(1u);
v___x_4362_ = l_Lean_Syntax_getArg(v___x_4311_, v___x_4361_);
lean_dec(v___x_4311_);
if (v_isShared_4283_ == 0)
{
lean_ctor_set(v___x_4282_, 0, v___x_4362_);
v___x_4364_ = v___x_4282_;
goto v_reusejp_4363_;
}
else
{
lean_object* v_reuseFailAlloc_4365_; 
v_reuseFailAlloc_4365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4365_, 0, v___x_4362_);
v___x_4364_ = v_reuseFailAlloc_4365_;
goto v_reusejp_4363_;
}
v_reusejp_4363_:
{
v_elseSeq_x3f_4287_ = v___x_4364_;
v___y_4288_ = v_a_3057_;
v___y_4289_ = v_a_3058_;
v___y_4290_ = v_a_3059_;
v___y_4291_ = v_a_3060_;
v___y_4292_ = v_a_3061_;
v___y_4293_ = v_a_3062_;
goto v___jp_4286_;
}
}
}
else
{
lean_object* v___x_4366_; 
lean_dec(v___x_4311_);
lean_del_object(v___x_4282_);
lean_dec(v_stx_3056_);
v___x_4366_ = lean_box(0);
v_elseSeq_x3f_4287_ = v___x_4366_;
v___y_4288_ = v_a_3057_;
v___y_4289_ = v_a_3058_;
v___y_4290_ = v_a_3059_;
v___y_4291_ = v_a_3060_;
v___y_4292_ = v_a_3061_;
v___y_4293_ = v_a_3062_;
goto v___jp_4286_;
}
v___jp_4286_:
{
lean_object* v___x_4294_; 
v___x_4294_ = l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(v_elseSeq_x3f_4287_, v___y_4288_, v___y_4289_, v___y_4290_, v___y_4291_, v___y_4292_, v___y_4293_);
if (lean_obj_tag(v___x_4294_) == 0)
{
lean_object* v_a_4295_; lean_object* v___x_4296_; size_t v_sz_4297_; lean_object* v___x_4298_; 
v_a_4295_ = lean_ctor_get(v___x_4294_, 0);
lean_inc(v_a_4295_);
lean_dec_ref_known(v___x_4294_, 1);
v___x_4296_ = l_Array_reverse___redArg(v_val_4280_);
v_sz_4297_ = lean_array_size(v___x_4296_);
v___x_4298_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6(v___x_4296_, v_sz_4297_, v___x_4232_, v_a_4295_, v___y_4288_, v___y_4289_, v___y_4290_, v___y_4291_, v___y_4292_, v___y_4293_);
lean_dec_ref(v___x_4296_);
if (lean_obj_tag(v___x_4298_) == 0)
{
lean_object* v_a_4299_; lean_object* v___x_4300_; 
v_a_4299_ = lean_ctor_get(v___x_4298_, 0);
lean_inc(v_a_4299_);
lean_dec_ref_known(v___x_4298_, 1);
v___x_4300_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_4285_, v___y_4288_, v___y_4289_, v___y_4290_, v___y_4291_, v___y_4292_, v___y_4293_);
if (lean_obj_tag(v___x_4300_) == 0)
{
lean_object* v_a_4301_; lean_object* v___x_4303_; uint8_t v_isShared_4304_; uint8_t v_isSharedCheck_4309_; 
v_a_4301_ = lean_ctor_get(v___x_4300_, 0);
v_isSharedCheck_4309_ = !lean_is_exclusive(v___x_4300_);
if (v_isSharedCheck_4309_ == 0)
{
v___x_4303_ = v___x_4300_;
v_isShared_4304_ = v_isSharedCheck_4309_;
goto v_resetjp_4302_;
}
else
{
lean_inc(v_a_4301_);
lean_dec(v___x_4300_);
v___x_4303_ = lean_box(0);
v_isShared_4304_ = v_isSharedCheck_4309_;
goto v_resetjp_4302_;
}
v_resetjp_4302_:
{
lean_object* v___x_4305_; lean_object* v___x_4307_; 
v___x_4305_ = l_Lean_Elab_Do_ControlInfo_alternative(v_a_4301_, v_a_4299_);
if (v_isShared_4304_ == 0)
{
lean_ctor_set(v___x_4303_, 0, v___x_4305_);
v___x_4307_ = v___x_4303_;
goto v_reusejp_4306_;
}
else
{
lean_object* v_reuseFailAlloc_4308_; 
v_reuseFailAlloc_4308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4308_, 0, v___x_4305_);
v___x_4307_ = v_reuseFailAlloc_4308_;
goto v_reusejp_4306_;
}
v_reusejp_4306_:
{
return v___x_4307_;
}
}
}
else
{
lean_dec(v_a_4299_);
return v___x_4300_;
}
}
else
{
lean_dec(v___x_4285_);
return v___x_4298_;
}
}
else
{
lean_dec(v___x_4285_);
lean_dec(v_val_4280_);
return v___x_4294_;
}
}
}
}
}
}
else
{
lean_object* v___x_4368_; lean_object* v___y_4370_; lean_object* v___y_4371_; lean_object* v___y_4372_; lean_object* v___y_4373_; lean_object* v___y_4374_; lean_object* v___y_4375_; lean_object* v___x_4432_; lean_object* v___y_4434_; lean_object* v___y_4435_; lean_object* v___y_4436_; lean_object* v___y_4437_; lean_object* v___y_4438_; lean_object* v___y_4439_; lean_object* v___x_4539_; uint8_t v___x_4540_; 
v___x_4368_ = lean_unsigned_to_nat(0u);
v___x_4432_ = lean_unsigned_to_nat(1u);
v___x_4539_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_4432_);
v___x_4540_ = l_Lean_Syntax_isNone(v___x_4539_);
if (v___x_4540_ == 0)
{
uint8_t v___x_4541_; 
lean_inc(v___x_4539_);
v___x_4541_ = l_Lean_Syntax_matchesNull(v___x_4539_, v___x_4432_);
if (v___x_4541_ == 0)
{
lean_object* v___x_4542_; lean_object* v_env_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; 
lean_dec(v___x_4539_);
v___x_4542_ = lean_st_ref_get(v_a_3062_);
v_env_4543_ = lean_ctor_get(v___x_4542_, 0);
lean_inc_ref(v_env_4543_);
lean_dec(v___x_4542_);
lean_inc_n(v_stx_3056_, 2);
v___x_4544_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_4545_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4546_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4545_, v_env_4543_, v___x_4544_);
v___x_4547_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_4548_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_4546_, v___x_4547_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_4546_);
if (lean_obj_tag(v___x_4548_) == 0)
{
lean_object* v_a_4549_; lean_object* v___x_4551_; uint8_t v_isShared_4552_; uint8_t v_isSharedCheck_4579_; 
v_a_4549_ = lean_ctor_get(v___x_4548_, 0);
v_isSharedCheck_4579_ = !lean_is_exclusive(v___x_4548_);
if (v_isSharedCheck_4579_ == 0)
{
v___x_4551_ = v___x_4548_;
v_isShared_4552_ = v_isSharedCheck_4579_;
goto v_resetjp_4550_;
}
else
{
lean_inc(v_a_4549_);
lean_dec(v___x_4548_);
v___x_4551_ = lean_box(0);
v_isShared_4552_ = v_isSharedCheck_4579_;
goto v_resetjp_4550_;
}
v_resetjp_4550_:
{
lean_object* v_fst_4553_; lean_object* v___x_4555_; uint8_t v_isShared_4556_; uint8_t v_isSharedCheck_4577_; 
v_fst_4553_ = lean_ctor_get(v_a_4549_, 0);
v_isSharedCheck_4577_ = !lean_is_exclusive(v_a_4549_);
if (v_isSharedCheck_4577_ == 0)
{
lean_object* v_unused_4578_; 
v_unused_4578_ = lean_ctor_get(v_a_4549_, 1);
lean_dec(v_unused_4578_);
v___x_4555_ = v_a_4549_;
v_isShared_4556_ = v_isSharedCheck_4577_;
goto v_resetjp_4554_;
}
else
{
lean_inc(v_fst_4553_);
lean_dec(v_a_4549_);
v___x_4555_ = lean_box(0);
v_isShared_4556_ = v_isSharedCheck_4577_;
goto v_resetjp_4554_;
}
v_resetjp_4554_:
{
if (lean_obj_tag(v_fst_4553_) == 0)
{
lean_object* v___x_4557_; lean_object* v___x_4558_; lean_object* v___x_4560_; 
lean_del_object(v___x_4551_);
v___x_4557_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4558_ = l_Lean_MessageData_ofName(v___x_4544_);
lean_inc_ref(v___x_4558_);
if (v_isShared_4556_ == 0)
{
lean_ctor_set_tag(v___x_4555_, 7);
lean_ctor_set(v___x_4555_, 1, v___x_4558_);
lean_ctor_set(v___x_4555_, 0, v___x_4557_);
v___x_4560_ = v___x_4555_;
goto v_reusejp_4559_;
}
else
{
lean_object* v_reuseFailAlloc_4572_; 
v_reuseFailAlloc_4572_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4572_, 0, v___x_4557_);
lean_ctor_set(v_reuseFailAlloc_4572_, 1, v___x_4558_);
v___x_4560_ = v_reuseFailAlloc_4572_;
goto v_reusejp_4559_;
}
v_reusejp_4559_:
{
lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; lean_object* v___x_4566_; lean_object* v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; 
v___x_4561_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4562_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4562_, 0, v___x_4560_);
lean_ctor_set(v___x_4562_, 1, v___x_4561_);
v___x_4563_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_4564_ = l_Lean_indentD(v___x_4563_);
v___x_4565_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4565_, 0, v___x_4562_);
lean_ctor_set(v___x_4565_, 1, v___x_4564_);
v___x_4566_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4567_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4567_, 0, v___x_4565_);
lean_ctor_set(v___x_4567_, 1, v___x_4566_);
v___x_4568_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4568_, 0, v___x_4567_);
lean_ctor_set(v___x_4568_, 1, v___x_4558_);
v___x_4569_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4570_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4570_, 0, v___x_4568_);
lean_ctor_set(v___x_4570_, 1, v___x_4569_);
v___x_4571_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_4570_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_4571_;
}
}
else
{
lean_object* v_val_4573_; lean_object* v___x_4575_; 
lean_del_object(v___x_4555_);
lean_dec(v___x_4544_);
lean_dec(v_stx_3056_);
v_val_4573_ = lean_ctor_get(v_fst_4553_, 0);
lean_inc(v_val_4573_);
lean_dec_ref_known(v_fst_4553_, 1);
if (v_isShared_4552_ == 0)
{
lean_ctor_set(v___x_4551_, 0, v_val_4573_);
v___x_4575_ = v___x_4551_;
goto v_reusejp_4574_;
}
else
{
lean_object* v_reuseFailAlloc_4576_; 
v_reuseFailAlloc_4576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4576_, 0, v_val_4573_);
v___x_4575_ = v_reuseFailAlloc_4576_;
goto v_reusejp_4574_;
}
v_reusejp_4574_:
{
return v___x_4575_;
}
}
}
}
}
else
{
lean_object* v_a_4580_; lean_object* v___x_4582_; uint8_t v_isShared_4583_; uint8_t v_isSharedCheck_4587_; 
lean_dec(v___x_4544_);
lean_dec(v_stx_3056_);
v_a_4580_ = lean_ctor_get(v___x_4548_, 0);
v_isSharedCheck_4587_ = !lean_is_exclusive(v___x_4548_);
if (v_isSharedCheck_4587_ == 0)
{
v___x_4582_ = v___x_4548_;
v_isShared_4583_ = v_isSharedCheck_4587_;
goto v_resetjp_4581_;
}
else
{
lean_inc(v_a_4580_);
lean_dec(v___x_4548_);
v___x_4582_ = lean_box(0);
v_isShared_4583_ = v_isSharedCheck_4587_;
goto v_resetjp_4581_;
}
v_resetjp_4581_:
{
lean_object* v___x_4585_; 
if (v_isShared_4583_ == 0)
{
v___x_4585_ = v___x_4582_;
goto v_reusejp_4584_;
}
else
{
lean_object* v_reuseFailAlloc_4586_; 
v_reuseFailAlloc_4586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4586_, 0, v_a_4580_);
v___x_4585_ = v_reuseFailAlloc_4586_;
goto v_reusejp_4584_;
}
v_reusejp_4584_:
{
return v___x_4585_;
}
}
}
}
else
{
lean_object* v___x_4588_; lean_object* v___x_4589_; uint8_t v___x_4590_; 
v___x_4588_ = l_Lean_Syntax_getArg(v___x_4539_, v___x_4368_);
lean_dec(v___x_4539_);
v___x_4589_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77));
v___x_4590_ = l_Lean_Syntax_isOfKind(v___x_4588_, v___x_4589_);
if (v___x_4590_ == 0)
{
lean_object* v___x_4591_; lean_object* v_env_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v___x_4597_; 
v___x_4591_ = lean_st_ref_get(v_a_3062_);
v_env_4592_ = lean_ctor_get(v___x_4591_, 0);
lean_inc_ref(v_env_4592_);
lean_dec(v___x_4591_);
lean_inc_n(v_stx_3056_, 2);
v___x_4593_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_4594_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4595_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4594_, v_env_4592_, v___x_4593_);
v___x_4596_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_4597_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_4595_, v___x_4596_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_4595_);
if (lean_obj_tag(v___x_4597_) == 0)
{
lean_object* v_a_4598_; lean_object* v___x_4600_; uint8_t v_isShared_4601_; uint8_t v_isSharedCheck_4628_; 
v_a_4598_ = lean_ctor_get(v___x_4597_, 0);
v_isSharedCheck_4628_ = !lean_is_exclusive(v___x_4597_);
if (v_isSharedCheck_4628_ == 0)
{
v___x_4600_ = v___x_4597_;
v_isShared_4601_ = v_isSharedCheck_4628_;
goto v_resetjp_4599_;
}
else
{
lean_inc(v_a_4598_);
lean_dec(v___x_4597_);
v___x_4600_ = lean_box(0);
v_isShared_4601_ = v_isSharedCheck_4628_;
goto v_resetjp_4599_;
}
v_resetjp_4599_:
{
lean_object* v_fst_4602_; lean_object* v___x_4604_; uint8_t v_isShared_4605_; uint8_t v_isSharedCheck_4626_; 
v_fst_4602_ = lean_ctor_get(v_a_4598_, 0);
v_isSharedCheck_4626_ = !lean_is_exclusive(v_a_4598_);
if (v_isSharedCheck_4626_ == 0)
{
lean_object* v_unused_4627_; 
v_unused_4627_ = lean_ctor_get(v_a_4598_, 1);
lean_dec(v_unused_4627_);
v___x_4604_ = v_a_4598_;
v_isShared_4605_ = v_isSharedCheck_4626_;
goto v_resetjp_4603_;
}
else
{
lean_inc(v_fst_4602_);
lean_dec(v_a_4598_);
v___x_4604_ = lean_box(0);
v_isShared_4605_ = v_isSharedCheck_4626_;
goto v_resetjp_4603_;
}
v_resetjp_4603_:
{
if (lean_obj_tag(v_fst_4602_) == 0)
{
lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4609_; 
lean_del_object(v___x_4600_);
v___x_4606_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4607_ = l_Lean_MessageData_ofName(v___x_4593_);
lean_inc_ref(v___x_4607_);
if (v_isShared_4605_ == 0)
{
lean_ctor_set_tag(v___x_4604_, 7);
lean_ctor_set(v___x_4604_, 1, v___x_4607_);
lean_ctor_set(v___x_4604_, 0, v___x_4606_);
v___x_4609_ = v___x_4604_;
goto v_reusejp_4608_;
}
else
{
lean_object* v_reuseFailAlloc_4621_; 
v_reuseFailAlloc_4621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4621_, 0, v___x_4606_);
lean_ctor_set(v_reuseFailAlloc_4621_, 1, v___x_4607_);
v___x_4609_ = v_reuseFailAlloc_4621_;
goto v_reusejp_4608_;
}
v_reusejp_4608_:
{
lean_object* v___x_4610_; lean_object* v___x_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; lean_object* v___x_4620_; 
v___x_4610_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4611_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4611_, 0, v___x_4609_);
lean_ctor_set(v___x_4611_, 1, v___x_4610_);
v___x_4612_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_4613_ = l_Lean_indentD(v___x_4612_);
v___x_4614_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4614_, 0, v___x_4611_);
lean_ctor_set(v___x_4614_, 1, v___x_4613_);
v___x_4615_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4616_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4616_, 0, v___x_4614_);
lean_ctor_set(v___x_4616_, 1, v___x_4615_);
v___x_4617_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4617_, 0, v___x_4616_);
lean_ctor_set(v___x_4617_, 1, v___x_4607_);
v___x_4618_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4619_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4619_, 0, v___x_4617_);
lean_ctor_set(v___x_4619_, 1, v___x_4618_);
v___x_4620_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_4619_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_4620_;
}
}
else
{
lean_object* v_val_4622_; lean_object* v___x_4624_; 
lean_del_object(v___x_4604_);
lean_dec(v___x_4593_);
lean_dec(v_stx_3056_);
v_val_4622_ = lean_ctor_get(v_fst_4602_, 0);
lean_inc(v_val_4622_);
lean_dec_ref_known(v_fst_4602_, 1);
if (v_isShared_4601_ == 0)
{
lean_ctor_set(v___x_4600_, 0, v_val_4622_);
v___x_4624_ = v___x_4600_;
goto v_reusejp_4623_;
}
else
{
lean_object* v_reuseFailAlloc_4625_; 
v_reuseFailAlloc_4625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4625_, 0, v_val_4622_);
v___x_4624_ = v_reuseFailAlloc_4625_;
goto v_reusejp_4623_;
}
v_reusejp_4623_:
{
return v___x_4624_;
}
}
}
}
}
else
{
lean_object* v_a_4629_; lean_object* v___x_4631_; uint8_t v_isShared_4632_; uint8_t v_isSharedCheck_4636_; 
lean_dec(v___x_4593_);
lean_dec(v_stx_3056_);
v_a_4629_ = lean_ctor_get(v___x_4597_, 0);
v_isSharedCheck_4636_ = !lean_is_exclusive(v___x_4597_);
if (v_isSharedCheck_4636_ == 0)
{
v___x_4631_ = v___x_4597_;
v_isShared_4632_ = v_isSharedCheck_4636_;
goto v_resetjp_4630_;
}
else
{
lean_inc(v_a_4629_);
lean_dec(v___x_4597_);
v___x_4631_ = lean_box(0);
v_isShared_4632_ = v_isSharedCheck_4636_;
goto v_resetjp_4630_;
}
v_resetjp_4630_:
{
lean_object* v___x_4634_; 
if (v_isShared_4632_ == 0)
{
v___x_4634_ = v___x_4631_;
goto v_reusejp_4633_;
}
else
{
lean_object* v_reuseFailAlloc_4635_; 
v_reuseFailAlloc_4635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4635_, 0, v_a_4629_);
v___x_4634_ = v_reuseFailAlloc_4635_;
goto v_reusejp_4633_;
}
v_reusejp_4633_:
{
return v___x_4634_;
}
}
}
}
else
{
v___y_4434_ = v_a_3057_;
v___y_4435_ = v_a_3058_;
v___y_4436_ = v_a_3059_;
v___y_4437_ = v_a_3060_;
v___y_4438_ = v_a_3061_;
v___y_4439_ = v_a_3062_;
goto v___jp_4433_;
}
}
}
else
{
lean_dec(v___x_4539_);
v___y_4434_ = v_a_3057_;
v___y_4435_ = v_a_3058_;
v___y_4436_ = v_a_3059_;
v___y_4437_ = v_a_3060_;
v___y_4438_ = v_a_3061_;
v___y_4439_ = v_a_3062_;
goto v___jp_4433_;
}
v___jp_4369_:
{
lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; uint8_t v___x_4379_; 
v___x_4376_ = lean_unsigned_to_nat(6u);
v___x_4377_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_4376_);
v___x_4378_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__7));
lean_inc(v___x_4377_);
v___x_4379_ = l_Lean_Syntax_isOfKind(v___x_4377_, v___x_4378_);
if (v___x_4379_ == 0)
{
lean_object* v___x_4380_; lean_object* v_env_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; 
lean_dec(v___x_4377_);
v___x_4380_ = lean_st_ref_get(v___y_4375_);
v_env_4381_ = lean_ctor_get(v___x_4380_, 0);
lean_inc_ref(v_env_4381_);
lean_dec(v___x_4380_);
lean_inc_n(v_stx_3056_, 2);
v___x_4382_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_4383_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4384_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4383_, v_env_4381_, v___x_4382_);
v___x_4385_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_4386_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_4384_, v___x_4385_, v___y_4370_, v___y_4371_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_);
lean_dec(v___x_4384_);
if (lean_obj_tag(v___x_4386_) == 0)
{
lean_object* v_a_4387_; lean_object* v___x_4389_; uint8_t v_isShared_4390_; uint8_t v_isSharedCheck_4417_; 
v_a_4387_ = lean_ctor_get(v___x_4386_, 0);
v_isSharedCheck_4417_ = !lean_is_exclusive(v___x_4386_);
if (v_isSharedCheck_4417_ == 0)
{
v___x_4389_ = v___x_4386_;
v_isShared_4390_ = v_isSharedCheck_4417_;
goto v_resetjp_4388_;
}
else
{
lean_inc(v_a_4387_);
lean_dec(v___x_4386_);
v___x_4389_ = lean_box(0);
v_isShared_4390_ = v_isSharedCheck_4417_;
goto v_resetjp_4388_;
}
v_resetjp_4388_:
{
lean_object* v_fst_4391_; lean_object* v___x_4393_; uint8_t v_isShared_4394_; uint8_t v_isSharedCheck_4415_; 
v_fst_4391_ = lean_ctor_get(v_a_4387_, 0);
v_isSharedCheck_4415_ = !lean_is_exclusive(v_a_4387_);
if (v_isSharedCheck_4415_ == 0)
{
lean_object* v_unused_4416_; 
v_unused_4416_ = lean_ctor_get(v_a_4387_, 1);
lean_dec(v_unused_4416_);
v___x_4393_ = v_a_4387_;
v_isShared_4394_ = v_isSharedCheck_4415_;
goto v_resetjp_4392_;
}
else
{
lean_inc(v_fst_4391_);
lean_dec(v_a_4387_);
v___x_4393_ = lean_box(0);
v_isShared_4394_ = v_isSharedCheck_4415_;
goto v_resetjp_4392_;
}
v_resetjp_4392_:
{
if (lean_obj_tag(v_fst_4391_) == 0)
{
lean_object* v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4398_; 
lean_del_object(v___x_4389_);
v___x_4395_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4396_ = l_Lean_MessageData_ofName(v___x_4382_);
lean_inc_ref(v___x_4396_);
if (v_isShared_4394_ == 0)
{
lean_ctor_set_tag(v___x_4393_, 7);
lean_ctor_set(v___x_4393_, 1, v___x_4396_);
lean_ctor_set(v___x_4393_, 0, v___x_4395_);
v___x_4398_ = v___x_4393_;
goto v_reusejp_4397_;
}
else
{
lean_object* v_reuseFailAlloc_4410_; 
v_reuseFailAlloc_4410_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4410_, 0, v___x_4395_);
lean_ctor_set(v_reuseFailAlloc_4410_, 1, v___x_4396_);
v___x_4398_ = v_reuseFailAlloc_4410_;
goto v_reusejp_4397_;
}
v_reusejp_4397_:
{
lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; lean_object* v___x_4408_; lean_object* v___x_4409_; 
v___x_4399_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4400_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4400_, 0, v___x_4398_);
lean_ctor_set(v___x_4400_, 1, v___x_4399_);
v___x_4401_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_4402_ = l_Lean_indentD(v___x_4401_);
v___x_4403_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4403_, 0, v___x_4400_);
lean_ctor_set(v___x_4403_, 1, v___x_4402_);
v___x_4404_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4405_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4405_, 0, v___x_4403_);
lean_ctor_set(v___x_4405_, 1, v___x_4404_);
v___x_4406_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4406_, 0, v___x_4405_);
lean_ctor_set(v___x_4406_, 1, v___x_4396_);
v___x_4407_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4408_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4408_, 0, v___x_4406_);
lean_ctor_set(v___x_4408_, 1, v___x_4407_);
v___x_4409_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_4408_, v___y_4370_, v___y_4371_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_);
return v___x_4409_;
}
}
else
{
lean_object* v_val_4411_; lean_object* v___x_4413_; 
lean_del_object(v___x_4393_);
lean_dec(v___x_4382_);
lean_dec(v_stx_3056_);
v_val_4411_ = lean_ctor_get(v_fst_4391_, 0);
lean_inc(v_val_4411_);
lean_dec_ref_known(v_fst_4391_, 1);
if (v_isShared_4390_ == 0)
{
lean_ctor_set(v___x_4389_, 0, v_val_4411_);
v___x_4413_ = v___x_4389_;
goto v_reusejp_4412_;
}
else
{
lean_object* v_reuseFailAlloc_4414_; 
v_reuseFailAlloc_4414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4414_, 0, v_val_4411_);
v___x_4413_ = v_reuseFailAlloc_4414_;
goto v_reusejp_4412_;
}
v_reusejp_4412_:
{
return v___x_4413_;
}
}
}
}
}
else
{
lean_object* v_a_4418_; lean_object* v___x_4420_; uint8_t v_isShared_4421_; uint8_t v_isSharedCheck_4425_; 
lean_dec(v___x_4382_);
lean_dec(v_stx_3056_);
v_a_4418_ = lean_ctor_get(v___x_4386_, 0);
v_isSharedCheck_4425_ = !lean_is_exclusive(v___x_4386_);
if (v_isSharedCheck_4425_ == 0)
{
v___x_4420_ = v___x_4386_;
v_isShared_4421_ = v_isSharedCheck_4425_;
goto v_resetjp_4419_;
}
else
{
lean_inc(v_a_4418_);
lean_dec(v___x_4386_);
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
else
{
lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; size_t v_sz_4429_; size_t v___x_4430_; lean_object* v___x_4431_; 
lean_dec(v_stx_3056_);
v___x_4426_ = l_Lean_Syntax_getArg(v___x_4377_, v___x_4368_);
lean_dec(v___x_4377_);
v___x_4427_ = l_Lean_Syntax_getArgs(v___x_4426_);
lean_dec(v___x_4426_);
v___x_4428_ = l_Lean_Elab_Do_ControlInfo_empty;
v_sz_4429_ = lean_array_size(v___x_4427_);
v___x_4430_ = ((size_t)0ULL);
v___x_4431_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__17(v___x_3375_, v___x_4427_, v_sz_4429_, v___x_4430_, v___x_4428_, v___y_4370_, v___y_4371_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_);
lean_dec_ref(v___x_4427_);
return v___x_4431_;
}
}
v___jp_4433_:
{
lean_object* v___x_4440_; lean_object* v___x_4441_; uint8_t v___x_4442_; 
v___x_4440_ = lean_unsigned_to_nat(2u);
v___x_4441_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_4440_);
v___x_4442_ = l_Lean_Syntax_isNone(v___x_4441_);
if (v___x_4442_ == 0)
{
uint8_t v___x_4443_; 
lean_inc(v___x_4441_);
v___x_4443_ = l_Lean_Syntax_matchesNull(v___x_4441_, v___x_4432_);
if (v___x_4443_ == 0)
{
lean_object* v___x_4444_; lean_object* v_env_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; 
lean_dec(v___x_4441_);
v___x_4444_ = lean_st_ref_get(v___y_4439_);
v_env_4445_ = lean_ctor_get(v___x_4444_, 0);
lean_inc_ref(v_env_4445_);
lean_dec(v___x_4444_);
lean_inc_n(v_stx_3056_, 2);
v___x_4446_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_4447_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4448_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4447_, v_env_4445_, v___x_4446_);
v___x_4449_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_4450_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_4448_, v___x_4449_, v___y_4434_, v___y_4435_, v___y_4436_, v___y_4437_, v___y_4438_, v___y_4439_);
lean_dec(v___x_4448_);
if (lean_obj_tag(v___x_4450_) == 0)
{
lean_object* v_a_4451_; lean_object* v___x_4453_; uint8_t v_isShared_4454_; uint8_t v_isSharedCheck_4481_; 
v_a_4451_ = lean_ctor_get(v___x_4450_, 0);
v_isSharedCheck_4481_ = !lean_is_exclusive(v___x_4450_);
if (v_isSharedCheck_4481_ == 0)
{
v___x_4453_ = v___x_4450_;
v_isShared_4454_ = v_isSharedCheck_4481_;
goto v_resetjp_4452_;
}
else
{
lean_inc(v_a_4451_);
lean_dec(v___x_4450_);
v___x_4453_ = lean_box(0);
v_isShared_4454_ = v_isSharedCheck_4481_;
goto v_resetjp_4452_;
}
v_resetjp_4452_:
{
lean_object* v_fst_4455_; lean_object* v___x_4457_; uint8_t v_isShared_4458_; uint8_t v_isSharedCheck_4479_; 
v_fst_4455_ = lean_ctor_get(v_a_4451_, 0);
v_isSharedCheck_4479_ = !lean_is_exclusive(v_a_4451_);
if (v_isSharedCheck_4479_ == 0)
{
lean_object* v_unused_4480_; 
v_unused_4480_ = lean_ctor_get(v_a_4451_, 1);
lean_dec(v_unused_4480_);
v___x_4457_ = v_a_4451_;
v_isShared_4458_ = v_isSharedCheck_4479_;
goto v_resetjp_4456_;
}
else
{
lean_inc(v_fst_4455_);
lean_dec(v_a_4451_);
v___x_4457_ = lean_box(0);
v_isShared_4458_ = v_isSharedCheck_4479_;
goto v_resetjp_4456_;
}
v_resetjp_4456_:
{
if (lean_obj_tag(v_fst_4455_) == 0)
{
lean_object* v___x_4459_; lean_object* v___x_4460_; lean_object* v___x_4462_; 
lean_del_object(v___x_4453_);
v___x_4459_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4460_ = l_Lean_MessageData_ofName(v___x_4446_);
lean_inc_ref(v___x_4460_);
if (v_isShared_4458_ == 0)
{
lean_ctor_set_tag(v___x_4457_, 7);
lean_ctor_set(v___x_4457_, 1, v___x_4460_);
lean_ctor_set(v___x_4457_, 0, v___x_4459_);
v___x_4462_ = v___x_4457_;
goto v_reusejp_4461_;
}
else
{
lean_object* v_reuseFailAlloc_4474_; 
v_reuseFailAlloc_4474_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4474_, 0, v___x_4459_);
lean_ctor_set(v_reuseFailAlloc_4474_, 1, v___x_4460_);
v___x_4462_ = v_reuseFailAlloc_4474_;
goto v_reusejp_4461_;
}
v_reusejp_4461_:
{
lean_object* v___x_4463_; lean_object* v___x_4464_; lean_object* v___x_4465_; lean_object* v___x_4466_; lean_object* v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; 
v___x_4463_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4464_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4464_, 0, v___x_4462_);
lean_ctor_set(v___x_4464_, 1, v___x_4463_);
v___x_4465_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_4466_ = l_Lean_indentD(v___x_4465_);
v___x_4467_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4467_, 0, v___x_4464_);
lean_ctor_set(v___x_4467_, 1, v___x_4466_);
v___x_4468_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4469_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4469_, 0, v___x_4467_);
lean_ctor_set(v___x_4469_, 1, v___x_4468_);
v___x_4470_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4470_, 0, v___x_4469_);
lean_ctor_set(v___x_4470_, 1, v___x_4460_);
v___x_4471_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4472_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4472_, 0, v___x_4470_);
lean_ctor_set(v___x_4472_, 1, v___x_4471_);
v___x_4473_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_4472_, v___y_4434_, v___y_4435_, v___y_4436_, v___y_4437_, v___y_4438_, v___y_4439_);
return v___x_4473_;
}
}
else
{
lean_object* v_val_4475_; lean_object* v___x_4477_; 
lean_del_object(v___x_4457_);
lean_dec(v___x_4446_);
lean_dec(v_stx_3056_);
v_val_4475_ = lean_ctor_get(v_fst_4455_, 0);
lean_inc(v_val_4475_);
lean_dec_ref_known(v_fst_4455_, 1);
if (v_isShared_4454_ == 0)
{
lean_ctor_set(v___x_4453_, 0, v_val_4475_);
v___x_4477_ = v___x_4453_;
goto v_reusejp_4476_;
}
else
{
lean_object* v_reuseFailAlloc_4478_; 
v_reuseFailAlloc_4478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4478_, 0, v_val_4475_);
v___x_4477_ = v_reuseFailAlloc_4478_;
goto v_reusejp_4476_;
}
v_reusejp_4476_:
{
return v___x_4477_;
}
}
}
}
}
else
{
lean_object* v_a_4482_; lean_object* v___x_4484_; uint8_t v_isShared_4485_; uint8_t v_isSharedCheck_4489_; 
lean_dec(v___x_4446_);
lean_dec(v_stx_3056_);
v_a_4482_ = lean_ctor_get(v___x_4450_, 0);
v_isSharedCheck_4489_ = !lean_is_exclusive(v___x_4450_);
if (v_isSharedCheck_4489_ == 0)
{
v___x_4484_ = v___x_4450_;
v_isShared_4485_ = v_isSharedCheck_4489_;
goto v_resetjp_4483_;
}
else
{
lean_inc(v_a_4482_);
lean_dec(v___x_4450_);
v___x_4484_ = lean_box(0);
v_isShared_4485_ = v_isSharedCheck_4489_;
goto v_resetjp_4483_;
}
v_resetjp_4483_:
{
lean_object* v___x_4487_; 
if (v_isShared_4485_ == 0)
{
v___x_4487_ = v___x_4484_;
goto v_reusejp_4486_;
}
else
{
lean_object* v_reuseFailAlloc_4488_; 
v_reuseFailAlloc_4488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4488_, 0, v_a_4482_);
v___x_4487_ = v_reuseFailAlloc_4488_;
goto v_reusejp_4486_;
}
v_reusejp_4486_:
{
return v___x_4487_;
}
}
}
}
else
{
lean_object* v___x_4490_; lean_object* v___x_4491_; uint8_t v___x_4492_; 
v___x_4490_ = l_Lean_Syntax_getArg(v___x_4441_, v___x_4368_);
lean_dec(v___x_4441_);
v___x_4491_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75));
v___x_4492_ = l_Lean_Syntax_isOfKind(v___x_4490_, v___x_4491_);
if (v___x_4492_ == 0)
{
lean_object* v___x_4493_; lean_object* v_env_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; lean_object* v___x_4497_; lean_object* v___x_4498_; lean_object* v___x_4499_; 
v___x_4493_ = lean_st_ref_get(v___y_4439_);
v_env_4494_ = lean_ctor_get(v___x_4493_, 0);
lean_inc_ref(v_env_4494_);
lean_dec(v___x_4493_);
lean_inc_n(v_stx_3056_, 2);
v___x_4495_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_4496_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4497_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4496_, v_env_4494_, v___x_4495_);
v___x_4498_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_4499_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_4497_, v___x_4498_, v___y_4434_, v___y_4435_, v___y_4436_, v___y_4437_, v___y_4438_, v___y_4439_);
lean_dec(v___x_4497_);
if (lean_obj_tag(v___x_4499_) == 0)
{
lean_object* v_a_4500_; lean_object* v___x_4502_; uint8_t v_isShared_4503_; uint8_t v_isSharedCheck_4530_; 
v_a_4500_ = lean_ctor_get(v___x_4499_, 0);
v_isSharedCheck_4530_ = !lean_is_exclusive(v___x_4499_);
if (v_isSharedCheck_4530_ == 0)
{
v___x_4502_ = v___x_4499_;
v_isShared_4503_ = v_isSharedCheck_4530_;
goto v_resetjp_4501_;
}
else
{
lean_inc(v_a_4500_);
lean_dec(v___x_4499_);
v___x_4502_ = lean_box(0);
v_isShared_4503_ = v_isSharedCheck_4530_;
goto v_resetjp_4501_;
}
v_resetjp_4501_:
{
lean_object* v_fst_4504_; lean_object* v___x_4506_; uint8_t v_isShared_4507_; uint8_t v_isSharedCheck_4528_; 
v_fst_4504_ = lean_ctor_get(v_a_4500_, 0);
v_isSharedCheck_4528_ = !lean_is_exclusive(v_a_4500_);
if (v_isSharedCheck_4528_ == 0)
{
lean_object* v_unused_4529_; 
v_unused_4529_ = lean_ctor_get(v_a_4500_, 1);
lean_dec(v_unused_4529_);
v___x_4506_ = v_a_4500_;
v_isShared_4507_ = v_isSharedCheck_4528_;
goto v_resetjp_4505_;
}
else
{
lean_inc(v_fst_4504_);
lean_dec(v_a_4500_);
v___x_4506_ = lean_box(0);
v_isShared_4507_ = v_isSharedCheck_4528_;
goto v_resetjp_4505_;
}
v_resetjp_4505_:
{
if (lean_obj_tag(v_fst_4504_) == 0)
{
lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4511_; 
lean_del_object(v___x_4502_);
v___x_4508_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4509_ = l_Lean_MessageData_ofName(v___x_4495_);
lean_inc_ref(v___x_4509_);
if (v_isShared_4507_ == 0)
{
lean_ctor_set_tag(v___x_4506_, 7);
lean_ctor_set(v___x_4506_, 1, v___x_4509_);
lean_ctor_set(v___x_4506_, 0, v___x_4508_);
v___x_4511_ = v___x_4506_;
goto v_reusejp_4510_;
}
else
{
lean_object* v_reuseFailAlloc_4523_; 
v_reuseFailAlloc_4523_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4523_, 0, v___x_4508_);
lean_ctor_set(v_reuseFailAlloc_4523_, 1, v___x_4509_);
v___x_4511_ = v_reuseFailAlloc_4523_;
goto v_reusejp_4510_;
}
v_reusejp_4510_:
{
lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; 
v___x_4512_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4513_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4513_, 0, v___x_4511_);
lean_ctor_set(v___x_4513_, 1, v___x_4512_);
v___x_4514_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_4515_ = l_Lean_indentD(v___x_4514_);
v___x_4516_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4516_, 0, v___x_4513_);
lean_ctor_set(v___x_4516_, 1, v___x_4515_);
v___x_4517_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4518_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4518_, 0, v___x_4516_);
lean_ctor_set(v___x_4518_, 1, v___x_4517_);
v___x_4519_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4519_, 0, v___x_4518_);
lean_ctor_set(v___x_4519_, 1, v___x_4509_);
v___x_4520_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4521_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4521_, 0, v___x_4519_);
lean_ctor_set(v___x_4521_, 1, v___x_4520_);
v___x_4522_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_4521_, v___y_4434_, v___y_4435_, v___y_4436_, v___y_4437_, v___y_4438_, v___y_4439_);
return v___x_4522_;
}
}
else
{
lean_object* v_val_4524_; lean_object* v___x_4526_; 
lean_del_object(v___x_4506_);
lean_dec(v___x_4495_);
lean_dec(v_stx_3056_);
v_val_4524_ = lean_ctor_get(v_fst_4504_, 0);
lean_inc(v_val_4524_);
lean_dec_ref_known(v_fst_4504_, 1);
if (v_isShared_4503_ == 0)
{
lean_ctor_set(v___x_4502_, 0, v_val_4524_);
v___x_4526_ = v___x_4502_;
goto v_reusejp_4525_;
}
else
{
lean_object* v_reuseFailAlloc_4527_; 
v_reuseFailAlloc_4527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4527_, 0, v_val_4524_);
v___x_4526_ = v_reuseFailAlloc_4527_;
goto v_reusejp_4525_;
}
v_reusejp_4525_:
{
return v___x_4526_;
}
}
}
}
}
else
{
lean_object* v_a_4531_; lean_object* v___x_4533_; uint8_t v_isShared_4534_; uint8_t v_isSharedCheck_4538_; 
lean_dec(v___x_4495_);
lean_dec(v_stx_3056_);
v_a_4531_ = lean_ctor_get(v___x_4499_, 0);
v_isSharedCheck_4538_ = !lean_is_exclusive(v___x_4499_);
if (v_isSharedCheck_4538_ == 0)
{
v___x_4533_ = v___x_4499_;
v_isShared_4534_ = v_isSharedCheck_4538_;
goto v_resetjp_4532_;
}
else
{
lean_inc(v_a_4531_);
lean_dec(v___x_4499_);
v___x_4533_ = lean_box(0);
v_isShared_4534_ = v_isSharedCheck_4538_;
goto v_resetjp_4532_;
}
v_resetjp_4532_:
{
lean_object* v___x_4536_; 
if (v_isShared_4534_ == 0)
{
v___x_4536_ = v___x_4533_;
goto v_reusejp_4535_;
}
else
{
lean_object* v_reuseFailAlloc_4537_; 
v_reuseFailAlloc_4537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4537_, 0, v_a_4531_);
v___x_4536_ = v_reuseFailAlloc_4537_;
goto v_reusejp_4535_;
}
v_reusejp_4535_:
{
return v___x_4536_;
}
}
}
}
else
{
v___y_4370_ = v___y_4434_;
v___y_4371_ = v___y_4435_;
v___y_4372_ = v___y_4436_;
v___y_4373_ = v___y_4437_;
v___y_4374_ = v___y_4438_;
v___y_4375_ = v___y_4439_;
goto v___jp_4369_;
}
}
}
else
{
lean_dec(v___x_4441_);
v___y_4370_ = v___y_4434_;
v___y_4371_ = v___y_4435_;
v___y_4372_ = v___y_4436_;
v___y_4373_ = v___y_4437_;
v___y_4374_ = v___y_4438_;
v___y_4375_ = v___y_4439_;
goto v___jp_4369_;
}
}
}
}
else
{
lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; uint8_t v___x_4640_; 
v___x_4637_ = lean_unsigned_to_nat(0u);
v___x_4638_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_4637_);
v___x_4639_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1));
lean_inc(v___x_4638_);
v___x_4640_ = l_Lean_Syntax_isOfKind(v___x_4638_, v___x_4639_);
if (v___x_4640_ == 0)
{
lean_object* v___x_4641_; uint8_t v___x_4642_; 
v___x_4641_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3));
lean_inc(v___x_4638_);
v___x_4642_ = l_Lean_Syntax_isOfKind(v___x_4638_, v___x_4641_);
if (v___x_4642_ == 0)
{
lean_object* v___x_4643_; lean_object* v_env_4644_; lean_object* v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4649_; 
lean_dec(v___x_4638_);
v___x_4643_ = lean_st_ref_get(v_a_3062_);
v_env_4644_ = lean_ctor_get(v___x_4643_, 0);
lean_inc_ref(v_env_4644_);
lean_dec(v___x_4643_);
lean_inc_n(v_stx_3056_, 2);
v___x_4645_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_4646_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4647_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4646_, v_env_4644_, v___x_4645_);
v___x_4648_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_4649_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_4647_, v___x_4648_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_4647_);
if (lean_obj_tag(v___x_4649_) == 0)
{
lean_object* v_a_4650_; lean_object* v___x_4652_; uint8_t v_isShared_4653_; uint8_t v_isSharedCheck_4680_; 
v_a_4650_ = lean_ctor_get(v___x_4649_, 0);
v_isSharedCheck_4680_ = !lean_is_exclusive(v___x_4649_);
if (v_isSharedCheck_4680_ == 0)
{
v___x_4652_ = v___x_4649_;
v_isShared_4653_ = v_isSharedCheck_4680_;
goto v_resetjp_4651_;
}
else
{
lean_inc(v_a_4650_);
lean_dec(v___x_4649_);
v___x_4652_ = lean_box(0);
v_isShared_4653_ = v_isSharedCheck_4680_;
goto v_resetjp_4651_;
}
v_resetjp_4651_:
{
lean_object* v_fst_4654_; lean_object* v___x_4656_; uint8_t v_isShared_4657_; uint8_t v_isSharedCheck_4678_; 
v_fst_4654_ = lean_ctor_get(v_a_4650_, 0);
v_isSharedCheck_4678_ = !lean_is_exclusive(v_a_4650_);
if (v_isSharedCheck_4678_ == 0)
{
lean_object* v_unused_4679_; 
v_unused_4679_ = lean_ctor_get(v_a_4650_, 1);
lean_dec(v_unused_4679_);
v___x_4656_ = v_a_4650_;
v_isShared_4657_ = v_isSharedCheck_4678_;
goto v_resetjp_4655_;
}
else
{
lean_inc(v_fst_4654_);
lean_dec(v_a_4650_);
v___x_4656_ = lean_box(0);
v_isShared_4657_ = v_isSharedCheck_4678_;
goto v_resetjp_4655_;
}
v_resetjp_4655_:
{
if (lean_obj_tag(v_fst_4654_) == 0)
{
lean_object* v___x_4658_; lean_object* v___x_4659_; lean_object* v___x_4661_; 
lean_del_object(v___x_4652_);
v___x_4658_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4659_ = l_Lean_MessageData_ofName(v___x_4645_);
lean_inc_ref(v___x_4659_);
if (v_isShared_4657_ == 0)
{
lean_ctor_set_tag(v___x_4656_, 7);
lean_ctor_set(v___x_4656_, 1, v___x_4659_);
lean_ctor_set(v___x_4656_, 0, v___x_4658_);
v___x_4661_ = v___x_4656_;
goto v_reusejp_4660_;
}
else
{
lean_object* v_reuseFailAlloc_4673_; 
v_reuseFailAlloc_4673_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4673_, 0, v___x_4658_);
lean_ctor_set(v_reuseFailAlloc_4673_, 1, v___x_4659_);
v___x_4661_ = v_reuseFailAlloc_4673_;
goto v_reusejp_4660_;
}
v_reusejp_4660_:
{
lean_object* v___x_4662_; lean_object* v___x_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; 
v___x_4662_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4663_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4663_, 0, v___x_4661_);
lean_ctor_set(v___x_4663_, 1, v___x_4662_);
v___x_4664_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_4665_ = l_Lean_indentD(v___x_4664_);
v___x_4666_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4666_, 0, v___x_4663_);
lean_ctor_set(v___x_4666_, 1, v___x_4665_);
v___x_4667_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4668_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4668_, 0, v___x_4666_);
lean_ctor_set(v___x_4668_, 1, v___x_4667_);
v___x_4669_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4669_, 0, v___x_4668_);
lean_ctor_set(v___x_4669_, 1, v___x_4659_);
v___x_4670_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4671_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4671_, 0, v___x_4669_);
lean_ctor_set(v___x_4671_, 1, v___x_4670_);
v___x_4672_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_4671_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_4672_;
}
}
else
{
lean_object* v_val_4674_; lean_object* v___x_4676_; 
lean_del_object(v___x_4656_);
lean_dec(v___x_4645_);
lean_dec(v_stx_3056_);
v_val_4674_ = lean_ctor_get(v_fst_4654_, 0);
lean_inc(v_val_4674_);
lean_dec_ref_known(v_fst_4654_, 1);
if (v_isShared_4653_ == 0)
{
lean_ctor_set(v___x_4652_, 0, v_val_4674_);
v___x_4676_ = v___x_4652_;
goto v_reusejp_4675_;
}
else
{
lean_object* v_reuseFailAlloc_4677_; 
v_reuseFailAlloc_4677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4677_, 0, v_val_4674_);
v___x_4676_ = v_reuseFailAlloc_4677_;
goto v_reusejp_4675_;
}
v_reusejp_4675_:
{
return v___x_4676_;
}
}
}
}
}
else
{
lean_object* v_a_4681_; lean_object* v___x_4683_; uint8_t v_isShared_4684_; uint8_t v_isSharedCheck_4688_; 
lean_dec(v___x_4645_);
lean_dec(v_stx_3056_);
v_a_4681_ = lean_ctor_get(v___x_4649_, 0);
v_isSharedCheck_4688_ = !lean_is_exclusive(v___x_4649_);
if (v_isSharedCheck_4688_ == 0)
{
v___x_4683_ = v___x_4649_;
v_isShared_4684_ = v_isSharedCheck_4688_;
goto v_resetjp_4682_;
}
else
{
lean_inc(v_a_4681_);
lean_dec(v___x_4649_);
v___x_4683_ = lean_box(0);
v_isShared_4684_ = v_isSharedCheck_4688_;
goto v_resetjp_4682_;
}
v_resetjp_4682_:
{
lean_object* v___x_4686_; 
if (v_isShared_4684_ == 0)
{
v___x_4686_ = v___x_4683_;
goto v_reusejp_4685_;
}
else
{
lean_object* v_reuseFailAlloc_4687_; 
v_reuseFailAlloc_4687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4687_, 0, v_a_4681_);
v___x_4686_ = v_reuseFailAlloc_4687_;
goto v_reusejp_4685_;
}
v_reusejp_4685_:
{
return v___x_4686_;
}
}
}
}
else
{
lean_object* v___x_4689_; 
lean_dec(v_stx_3056_);
v___x_4689_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(v___x_3293_, v___x_4638_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_4689_;
}
}
else
{
lean_object* v___x_4690_; 
lean_dec(v_stx_3056_);
v___x_4690_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(v___x_3293_, v___x_4638_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_4690_;
}
}
}
else
{
lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; uint8_t v___x_4694_; 
v___x_4691_ = lean_unsigned_to_nat(0u);
v___x_4692_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_4691_);
v___x_4693_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79));
lean_inc(v___x_4692_);
v___x_4694_ = l_Lean_Syntax_isOfKind(v___x_4692_, v___x_4693_);
if (v___x_4694_ == 0)
{
lean_object* v___x_4695_; uint8_t v___x_4696_; 
v___x_4695_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81));
lean_inc(v___x_4692_);
v___x_4696_ = l_Lean_Syntax_isOfKind(v___x_4692_, v___x_4695_);
if (v___x_4696_ == 0)
{
lean_object* v___x_4697_; lean_object* v_env_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; 
lean_dec(v___x_4692_);
v___x_4697_ = lean_st_ref_get(v_a_3062_);
v_env_4698_ = lean_ctor_get(v___x_4697_, 0);
lean_inc_ref(v_env_4698_);
lean_dec(v___x_4697_);
lean_inc_n(v_stx_3056_, 2);
v___x_4699_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_4700_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4701_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4700_, v_env_4698_, v___x_4699_);
v___x_4702_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_4703_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_4701_, v___x_4702_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_4701_);
if (lean_obj_tag(v___x_4703_) == 0)
{
lean_object* v_a_4704_; lean_object* v___x_4706_; uint8_t v_isShared_4707_; uint8_t v_isSharedCheck_4734_; 
v_a_4704_ = lean_ctor_get(v___x_4703_, 0);
v_isSharedCheck_4734_ = !lean_is_exclusive(v___x_4703_);
if (v_isSharedCheck_4734_ == 0)
{
v___x_4706_ = v___x_4703_;
v_isShared_4707_ = v_isSharedCheck_4734_;
goto v_resetjp_4705_;
}
else
{
lean_inc(v_a_4704_);
lean_dec(v___x_4703_);
v___x_4706_ = lean_box(0);
v_isShared_4707_ = v_isSharedCheck_4734_;
goto v_resetjp_4705_;
}
v_resetjp_4705_:
{
lean_object* v_fst_4708_; lean_object* v___x_4710_; uint8_t v_isShared_4711_; uint8_t v_isSharedCheck_4732_; 
v_fst_4708_ = lean_ctor_get(v_a_4704_, 0);
v_isSharedCheck_4732_ = !lean_is_exclusive(v_a_4704_);
if (v_isSharedCheck_4732_ == 0)
{
lean_object* v_unused_4733_; 
v_unused_4733_ = lean_ctor_get(v_a_4704_, 1);
lean_dec(v_unused_4733_);
v___x_4710_ = v_a_4704_;
v_isShared_4711_ = v_isSharedCheck_4732_;
goto v_resetjp_4709_;
}
else
{
lean_inc(v_fst_4708_);
lean_dec(v_a_4704_);
v___x_4710_ = lean_box(0);
v_isShared_4711_ = v_isSharedCheck_4732_;
goto v_resetjp_4709_;
}
v_resetjp_4709_:
{
if (lean_obj_tag(v_fst_4708_) == 0)
{
lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4715_; 
lean_del_object(v___x_4706_);
v___x_4712_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4713_ = l_Lean_MessageData_ofName(v___x_4699_);
lean_inc_ref(v___x_4713_);
if (v_isShared_4711_ == 0)
{
lean_ctor_set_tag(v___x_4710_, 7);
lean_ctor_set(v___x_4710_, 1, v___x_4713_);
lean_ctor_set(v___x_4710_, 0, v___x_4712_);
v___x_4715_ = v___x_4710_;
goto v_reusejp_4714_;
}
else
{
lean_object* v_reuseFailAlloc_4727_; 
v_reuseFailAlloc_4727_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4727_, 0, v___x_4712_);
lean_ctor_set(v_reuseFailAlloc_4727_, 1, v___x_4713_);
v___x_4715_ = v_reuseFailAlloc_4727_;
goto v_reusejp_4714_;
}
v_reusejp_4714_:
{
lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; 
v___x_4716_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4717_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4717_, 0, v___x_4715_);
lean_ctor_set(v___x_4717_, 1, v___x_4716_);
v___x_4718_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_4719_ = l_Lean_indentD(v___x_4718_);
v___x_4720_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4720_, 0, v___x_4717_);
lean_ctor_set(v___x_4720_, 1, v___x_4719_);
v___x_4721_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4722_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4722_, 0, v___x_4720_);
lean_ctor_set(v___x_4722_, 1, v___x_4721_);
v___x_4723_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4723_, 0, v___x_4722_);
lean_ctor_set(v___x_4723_, 1, v___x_4713_);
v___x_4724_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4725_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4725_, 0, v___x_4723_);
lean_ctor_set(v___x_4725_, 1, v___x_4724_);
v___x_4726_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_4725_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_4726_;
}
}
else
{
lean_object* v_val_4728_; lean_object* v___x_4730_; 
lean_del_object(v___x_4710_);
lean_dec(v___x_4699_);
lean_dec(v_stx_3056_);
v_val_4728_ = lean_ctor_get(v_fst_4708_, 0);
lean_inc(v_val_4728_);
lean_dec_ref_known(v_fst_4708_, 1);
if (v_isShared_4707_ == 0)
{
lean_ctor_set(v___x_4706_, 0, v_val_4728_);
v___x_4730_ = v___x_4706_;
goto v_reusejp_4729_;
}
else
{
lean_object* v_reuseFailAlloc_4731_; 
v_reuseFailAlloc_4731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4731_, 0, v_val_4728_);
v___x_4730_ = v_reuseFailAlloc_4731_;
goto v_reusejp_4729_;
}
v_reusejp_4729_:
{
return v___x_4730_;
}
}
}
}
}
else
{
lean_object* v_a_4735_; lean_object* v___x_4737_; uint8_t v_isShared_4738_; uint8_t v_isSharedCheck_4742_; 
lean_dec(v___x_4699_);
lean_dec(v_stx_3056_);
v_a_4735_ = lean_ctor_get(v___x_4703_, 0);
v_isSharedCheck_4742_ = !lean_is_exclusive(v___x_4703_);
if (v_isSharedCheck_4742_ == 0)
{
v___x_4737_ = v___x_4703_;
v_isShared_4738_ = v_isSharedCheck_4742_;
goto v_resetjp_4736_;
}
else
{
lean_inc(v_a_4735_);
lean_dec(v___x_4703_);
v___x_4737_ = lean_box(0);
v_isShared_4738_ = v_isSharedCheck_4742_;
goto v_resetjp_4736_;
}
v_resetjp_4736_:
{
lean_object* v___x_4740_; 
if (v_isShared_4738_ == 0)
{
v___x_4740_ = v___x_4737_;
goto v_reusejp_4739_;
}
else
{
lean_object* v_reuseFailAlloc_4741_; 
v_reuseFailAlloc_4741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4741_, 0, v_a_4735_);
v___x_4740_ = v_reuseFailAlloc_4741_;
goto v_reusejp_4739_;
}
v_reusejp_4739_:
{
return v___x_4740_;
}
}
}
}
else
{
lean_object* v___x_4743_; 
lean_dec(v_stx_3056_);
v___x_4743_ = l_Lean_Elab_Do_getLetPatDeclVars(v___x_4692_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_4692_);
if (lean_obj_tag(v___x_4743_) == 0)
{
lean_object* v_a_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; 
v_a_4744_ = lean_ctor_get(v___x_4743_, 0);
lean_inc(v_a_4744_);
lean_dec_ref_known(v___x_4743_, 1);
v___x_4745_ = lean_box(0);
v___x_4746_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_a_4744_, v___x_4745_, v___x_4745_, v___x_4745_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_4746_;
}
else
{
lean_object* v_a_4747_; lean_object* v___x_4749_; uint8_t v_isShared_4750_; uint8_t v_isSharedCheck_4754_; 
v_a_4747_ = lean_ctor_get(v___x_4743_, 0);
v_isSharedCheck_4754_ = !lean_is_exclusive(v___x_4743_);
if (v_isSharedCheck_4754_ == 0)
{
v___x_4749_ = v___x_4743_;
v_isShared_4750_ = v_isSharedCheck_4754_;
goto v_resetjp_4748_;
}
else
{
lean_inc(v_a_4747_);
lean_dec(v___x_4743_);
v___x_4749_ = lean_box(0);
v_isShared_4750_ = v_isSharedCheck_4754_;
goto v_resetjp_4748_;
}
v_resetjp_4748_:
{
lean_object* v___x_4752_; 
if (v_isShared_4750_ == 0)
{
v___x_4752_ = v___x_4749_;
goto v_reusejp_4751_;
}
else
{
lean_object* v_reuseFailAlloc_4753_; 
v_reuseFailAlloc_4753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4753_, 0, v_a_4747_);
v___x_4752_ = v_reuseFailAlloc_4753_;
goto v_reusejp_4751_;
}
v_reusejp_4751_:
{
return v___x_4752_;
}
}
}
}
}
else
{
lean_object* v___x_4755_; 
lean_dec(v_stx_3056_);
v___x_4755_ = l_Lean_Elab_Do_getLetIdDeclVars(v___x_4692_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_4692_);
if (lean_obj_tag(v___x_4755_) == 0)
{
lean_object* v_a_4756_; lean_object* v___x_4757_; lean_object* v___x_4758_; 
v_a_4756_ = lean_ctor_get(v___x_4755_, 0);
lean_inc(v_a_4756_);
lean_dec_ref_known(v___x_4755_, 1);
v___x_4757_ = lean_box(0);
v___x_4758_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_a_4756_, v___x_4757_, v___x_4757_, v___x_4757_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_4758_;
}
else
{
lean_object* v_a_4759_; lean_object* v___x_4761_; uint8_t v_isShared_4762_; uint8_t v_isSharedCheck_4766_; 
v_a_4759_ = lean_ctor_get(v___x_4755_, 0);
v_isSharedCheck_4766_ = !lean_is_exclusive(v___x_4755_);
if (v_isSharedCheck_4766_ == 0)
{
v___x_4761_ = v___x_4755_;
v_isShared_4762_ = v_isSharedCheck_4766_;
goto v_resetjp_4760_;
}
else
{
lean_inc(v_a_4759_);
lean_dec(v___x_4755_);
v___x_4761_ = lean_box(0);
v_isShared_4762_ = v_isSharedCheck_4766_;
goto v_resetjp_4760_;
}
v_resetjp_4760_:
{
lean_object* v___x_4764_; 
if (v_isShared_4762_ == 0)
{
v___x_4764_ = v___x_4761_;
goto v_reusejp_4763_;
}
else
{
lean_object* v_reuseFailAlloc_4765_; 
v_reuseFailAlloc_4765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4765_, 0, v_a_4759_);
v___x_4764_ = v_reuseFailAlloc_4765_;
goto v_reusejp_4763_;
}
v_reusejp_4763_:
{
return v___x_4764_;
}
}
}
}
}
}
else
{
lean_object* v___x_4767_; lean_object* v___x_4768_; uint8_t v___x_4769_; 
v___x_4767_ = lean_unsigned_to_nat(1u);
v___x_4768_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_4767_);
v___x_4769_ = l_Lean_Syntax_isNone(v___x_4768_);
if (v___x_4769_ == 0)
{
uint8_t v___x_4770_; 
v___x_4770_ = l_Lean_Syntax_matchesNull(v___x_4768_, v___x_4767_);
if (v___x_4770_ == 0)
{
lean_object* v___x_4771_; lean_object* v_env_4772_; lean_object* v___x_4773_; lean_object* v___x_4774_; lean_object* v___x_4775_; lean_object* v___x_4776_; lean_object* v___x_4777_; 
v___x_4771_ = lean_st_ref_get(v_a_3062_);
v_env_4772_ = lean_ctor_get(v___x_4771_, 0);
lean_inc_ref(v_env_4772_);
lean_dec(v___x_4771_);
lean_inc_n(v_stx_3056_, 2);
v___x_4773_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_4774_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4775_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4774_, v_env_4772_, v___x_4773_);
v___x_4776_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_4777_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_4775_, v___x_4776_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_4775_);
if (lean_obj_tag(v___x_4777_) == 0)
{
lean_object* v_a_4778_; lean_object* v___x_4780_; uint8_t v_isShared_4781_; uint8_t v_isSharedCheck_4808_; 
v_a_4778_ = lean_ctor_get(v___x_4777_, 0);
v_isSharedCheck_4808_ = !lean_is_exclusive(v___x_4777_);
if (v_isSharedCheck_4808_ == 0)
{
v___x_4780_ = v___x_4777_;
v_isShared_4781_ = v_isSharedCheck_4808_;
goto v_resetjp_4779_;
}
else
{
lean_inc(v_a_4778_);
lean_dec(v___x_4777_);
v___x_4780_ = lean_box(0);
v_isShared_4781_ = v_isSharedCheck_4808_;
goto v_resetjp_4779_;
}
v_resetjp_4779_:
{
lean_object* v_fst_4782_; lean_object* v___x_4784_; uint8_t v_isShared_4785_; uint8_t v_isSharedCheck_4806_; 
v_fst_4782_ = lean_ctor_get(v_a_4778_, 0);
v_isSharedCheck_4806_ = !lean_is_exclusive(v_a_4778_);
if (v_isSharedCheck_4806_ == 0)
{
lean_object* v_unused_4807_; 
v_unused_4807_ = lean_ctor_get(v_a_4778_, 1);
lean_dec(v_unused_4807_);
v___x_4784_ = v_a_4778_;
v_isShared_4785_ = v_isSharedCheck_4806_;
goto v_resetjp_4783_;
}
else
{
lean_inc(v_fst_4782_);
lean_dec(v_a_4778_);
v___x_4784_ = lean_box(0);
v_isShared_4785_ = v_isSharedCheck_4806_;
goto v_resetjp_4783_;
}
v_resetjp_4783_:
{
if (lean_obj_tag(v_fst_4782_) == 0)
{
lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4789_; 
lean_del_object(v___x_4780_);
v___x_4786_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4787_ = l_Lean_MessageData_ofName(v___x_4773_);
lean_inc_ref(v___x_4787_);
if (v_isShared_4785_ == 0)
{
lean_ctor_set_tag(v___x_4784_, 7);
lean_ctor_set(v___x_4784_, 1, v___x_4787_);
lean_ctor_set(v___x_4784_, 0, v___x_4786_);
v___x_4789_ = v___x_4784_;
goto v_reusejp_4788_;
}
else
{
lean_object* v_reuseFailAlloc_4801_; 
v_reuseFailAlloc_4801_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4801_, 0, v___x_4786_);
lean_ctor_set(v_reuseFailAlloc_4801_, 1, v___x_4787_);
v___x_4789_ = v_reuseFailAlloc_4801_;
goto v_reusejp_4788_;
}
v_reusejp_4788_:
{
lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; 
v___x_4790_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4791_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4791_, 0, v___x_4789_);
lean_ctor_set(v___x_4791_, 1, v___x_4790_);
v___x_4792_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_4793_ = l_Lean_indentD(v___x_4792_);
v___x_4794_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4794_, 0, v___x_4791_);
lean_ctor_set(v___x_4794_, 1, v___x_4793_);
v___x_4795_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4796_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4796_, 0, v___x_4794_);
lean_ctor_set(v___x_4796_, 1, v___x_4795_);
v___x_4797_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4797_, 0, v___x_4796_);
lean_ctor_set(v___x_4797_, 1, v___x_4787_);
v___x_4798_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4799_, 0, v___x_4797_);
lean_ctor_set(v___x_4799_, 1, v___x_4798_);
v___x_4800_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_4799_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_4800_;
}
}
else
{
lean_object* v_val_4802_; lean_object* v___x_4804_; 
lean_del_object(v___x_4784_);
lean_dec(v___x_4773_);
lean_dec(v_stx_3056_);
v_val_4802_ = lean_ctor_get(v_fst_4782_, 0);
lean_inc(v_val_4802_);
lean_dec_ref_known(v_fst_4782_, 1);
if (v_isShared_4781_ == 0)
{
lean_ctor_set(v___x_4780_, 0, v_val_4802_);
v___x_4804_ = v___x_4780_;
goto v_reusejp_4803_;
}
else
{
lean_object* v_reuseFailAlloc_4805_; 
v_reuseFailAlloc_4805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4805_, 0, v_val_4802_);
v___x_4804_ = v_reuseFailAlloc_4805_;
goto v_reusejp_4803_;
}
v_reusejp_4803_:
{
return v___x_4804_;
}
}
}
}
}
else
{
lean_object* v_a_4809_; lean_object* v___x_4811_; uint8_t v_isShared_4812_; uint8_t v_isSharedCheck_4816_; 
lean_dec(v___x_4773_);
lean_dec(v_stx_3056_);
v_a_4809_ = lean_ctor_get(v___x_4777_, 0);
v_isSharedCheck_4816_ = !lean_is_exclusive(v___x_4777_);
if (v_isSharedCheck_4816_ == 0)
{
v___x_4811_ = v___x_4777_;
v_isShared_4812_ = v_isSharedCheck_4816_;
goto v_resetjp_4810_;
}
else
{
lean_inc(v_a_4809_);
lean_dec(v___x_4777_);
v___x_4811_ = lean_box(0);
v_isShared_4812_ = v_isSharedCheck_4816_;
goto v_resetjp_4810_;
}
v_resetjp_4810_:
{
lean_object* v___x_4814_; 
if (v_isShared_4812_ == 0)
{
v___x_4814_ = v___x_4811_;
goto v_reusejp_4813_;
}
else
{
lean_object* v_reuseFailAlloc_4815_; 
v_reuseFailAlloc_4815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4815_, 0, v_a_4809_);
v___x_4814_ = v_reuseFailAlloc_4815_;
goto v_reusejp_4813_;
}
v_reusejp_4813_:
{
return v___x_4814_;
}
}
}
}
else
{
v___y_3311_ = v_a_3057_;
v___y_3312_ = v_a_3058_;
v___y_3313_ = v_a_3059_;
v___y_3314_ = v_a_3060_;
v___y_3315_ = v_a_3061_;
v___y_3316_ = v_a_3062_;
goto v___jp_3310_;
}
}
else
{
lean_dec(v___x_4768_);
v___y_3311_ = v_a_3057_;
v___y_3312_ = v_a_3058_;
v___y_3313_ = v_a_3059_;
v___y_3314_ = v_a_3060_;
v___y_3315_ = v_a_3061_;
v___y_3316_ = v_a_3062_;
goto v___jp_3310_;
}
}
}
else
{
lean_object* v___x_4817_; lean_object* v___x_4818_; uint8_t v___x_4819_; 
v___x_4817_ = lean_unsigned_to_nat(1u);
v___x_4818_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_4817_);
v___x_4819_ = l_Lean_Syntax_isNone(v___x_4818_);
if (v___x_4819_ == 0)
{
uint8_t v___x_4820_; 
v___x_4820_ = l_Lean_Syntax_matchesNull(v___x_4818_, v___x_4817_);
if (v___x_4820_ == 0)
{
lean_object* v___x_4821_; lean_object* v_env_4822_; lean_object* v___x_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; 
v___x_4821_ = lean_st_ref_get(v_a_3062_);
v_env_4822_ = lean_ctor_get(v___x_4821_, 0);
lean_inc_ref(v_env_4822_);
lean_dec(v___x_4821_);
lean_inc_n(v_stx_3056_, 2);
v___x_4823_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_4824_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4825_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4824_, v_env_4822_, v___x_4823_);
v___x_4826_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_4827_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_4825_, v___x_4826_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_4825_);
if (lean_obj_tag(v___x_4827_) == 0)
{
lean_object* v_a_4828_; lean_object* v___x_4830_; uint8_t v_isShared_4831_; uint8_t v_isSharedCheck_4858_; 
v_a_4828_ = lean_ctor_get(v___x_4827_, 0);
v_isSharedCheck_4858_ = !lean_is_exclusive(v___x_4827_);
if (v_isSharedCheck_4858_ == 0)
{
v___x_4830_ = v___x_4827_;
v_isShared_4831_ = v_isSharedCheck_4858_;
goto v_resetjp_4829_;
}
else
{
lean_inc(v_a_4828_);
lean_dec(v___x_4827_);
v___x_4830_ = lean_box(0);
v_isShared_4831_ = v_isSharedCheck_4858_;
goto v_resetjp_4829_;
}
v_resetjp_4829_:
{
lean_object* v_fst_4832_; lean_object* v___x_4834_; uint8_t v_isShared_4835_; uint8_t v_isSharedCheck_4856_; 
v_fst_4832_ = lean_ctor_get(v_a_4828_, 0);
v_isSharedCheck_4856_ = !lean_is_exclusive(v_a_4828_);
if (v_isSharedCheck_4856_ == 0)
{
lean_object* v_unused_4857_; 
v_unused_4857_ = lean_ctor_get(v_a_4828_, 1);
lean_dec(v_unused_4857_);
v___x_4834_ = v_a_4828_;
v_isShared_4835_ = v_isSharedCheck_4856_;
goto v_resetjp_4833_;
}
else
{
lean_inc(v_fst_4832_);
lean_dec(v_a_4828_);
v___x_4834_ = lean_box(0);
v_isShared_4835_ = v_isSharedCheck_4856_;
goto v_resetjp_4833_;
}
v_resetjp_4833_:
{
if (lean_obj_tag(v_fst_4832_) == 0)
{
lean_object* v___x_4836_; lean_object* v___x_4837_; lean_object* v___x_4839_; 
lean_del_object(v___x_4830_);
v___x_4836_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4837_ = l_Lean_MessageData_ofName(v___x_4823_);
lean_inc_ref(v___x_4837_);
if (v_isShared_4835_ == 0)
{
lean_ctor_set_tag(v___x_4834_, 7);
lean_ctor_set(v___x_4834_, 1, v___x_4837_);
lean_ctor_set(v___x_4834_, 0, v___x_4836_);
v___x_4839_ = v___x_4834_;
goto v_reusejp_4838_;
}
else
{
lean_object* v_reuseFailAlloc_4851_; 
v_reuseFailAlloc_4851_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4851_, 0, v___x_4836_);
lean_ctor_set(v_reuseFailAlloc_4851_, 1, v___x_4837_);
v___x_4839_ = v_reuseFailAlloc_4851_;
goto v_reusejp_4838_;
}
v_reusejp_4838_:
{
lean_object* v___x_4840_; lean_object* v___x_4841_; lean_object* v___x_4842_; lean_object* v___x_4843_; lean_object* v___x_4844_; lean_object* v___x_4845_; lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; lean_object* v___x_4850_; 
v___x_4840_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4841_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4841_, 0, v___x_4839_);
lean_ctor_set(v___x_4841_, 1, v___x_4840_);
v___x_4842_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_4843_ = l_Lean_indentD(v___x_4842_);
v___x_4844_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4844_, 0, v___x_4841_);
lean_ctor_set(v___x_4844_, 1, v___x_4843_);
v___x_4845_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4846_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4846_, 0, v___x_4844_);
lean_ctor_set(v___x_4846_, 1, v___x_4845_);
v___x_4847_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4847_, 0, v___x_4846_);
lean_ctor_set(v___x_4847_, 1, v___x_4837_);
v___x_4848_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4849_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4849_, 0, v___x_4847_);
lean_ctor_set(v___x_4849_, 1, v___x_4848_);
v___x_4850_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_4849_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_4850_;
}
}
else
{
lean_object* v_val_4852_; lean_object* v___x_4854_; 
lean_del_object(v___x_4834_);
lean_dec(v___x_4823_);
lean_dec(v_stx_3056_);
v_val_4852_ = lean_ctor_get(v_fst_4832_, 0);
lean_inc(v_val_4852_);
lean_dec_ref_known(v_fst_4832_, 1);
if (v_isShared_4831_ == 0)
{
lean_ctor_set(v___x_4830_, 0, v_val_4852_);
v___x_4854_ = v___x_4830_;
goto v_reusejp_4853_;
}
else
{
lean_object* v_reuseFailAlloc_4855_; 
v_reuseFailAlloc_4855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4855_, 0, v_val_4852_);
v___x_4854_ = v_reuseFailAlloc_4855_;
goto v_reusejp_4853_;
}
v_reusejp_4853_:
{
return v___x_4854_;
}
}
}
}
}
else
{
lean_object* v_a_4859_; lean_object* v___x_4861_; uint8_t v_isShared_4862_; uint8_t v_isSharedCheck_4866_; 
lean_dec(v___x_4823_);
lean_dec(v_stx_3056_);
v_a_4859_ = lean_ctor_get(v___x_4827_, 0);
v_isSharedCheck_4866_ = !lean_is_exclusive(v___x_4827_);
if (v_isSharedCheck_4866_ == 0)
{
v___x_4861_ = v___x_4827_;
v_isShared_4862_ = v_isSharedCheck_4866_;
goto v_resetjp_4860_;
}
else
{
lean_inc(v_a_4859_);
lean_dec(v___x_4827_);
v___x_4861_ = lean_box(0);
v_isShared_4862_ = v_isSharedCheck_4866_;
goto v_resetjp_4860_;
}
v_resetjp_4860_:
{
lean_object* v___x_4864_; 
if (v_isShared_4862_ == 0)
{
v___x_4864_ = v___x_4861_;
goto v_reusejp_4863_;
}
else
{
lean_object* v_reuseFailAlloc_4865_; 
v_reuseFailAlloc_4865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4865_, 0, v_a_4859_);
v___x_4864_ = v_reuseFailAlloc_4865_;
goto v_reusejp_4863_;
}
v_reusejp_4863_:
{
return v___x_4864_;
}
}
}
}
else
{
v___y_3221_ = v_a_3057_;
v___y_3222_ = v_a_3058_;
v___y_3223_ = v_a_3059_;
v___y_3224_ = v_a_3060_;
v___y_3225_ = v_a_3061_;
v___y_3226_ = v_a_3062_;
goto v___jp_3220_;
}
}
else
{
lean_dec(v___x_4818_);
v___y_3221_ = v_a_3057_;
v___y_3222_ = v_a_3058_;
v___y_3223_ = v_a_3059_;
v___y_3224_ = v_a_3060_;
v___y_3225_ = v_a_3061_;
v___y_3226_ = v_a_3062_;
goto v___jp_3220_;
}
}
v___jp_3310_:
{
lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; uint8_t v___x_3320_; 
v___x_3317_ = lean_unsigned_to_nat(2u);
v___x_3318_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_3317_);
v___x_3319_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1));
v___x_3320_ = l_Lean_Syntax_isOfKind(v___x_3318_, v___x_3319_);
if (v___x_3320_ == 0)
{
lean_object* v___x_3321_; lean_object* v_env_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; 
v___x_3321_ = lean_st_ref_get(v___y_3316_);
v_env_3322_ = lean_ctor_get(v___x_3321_, 0);
lean_inc_ref(v_env_3322_);
lean_dec(v___x_3321_);
lean_inc_n(v_stx_3056_, 2);
v___x_3323_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_3324_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3325_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3324_, v_env_3322_, v___x_3323_);
v___x_3326_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_3327_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_3325_, v___x_3326_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_);
lean_dec(v___x_3325_);
if (lean_obj_tag(v___x_3327_) == 0)
{
lean_object* v_a_3328_; lean_object* v___x_3330_; uint8_t v_isShared_3331_; uint8_t v_isSharedCheck_3358_; 
v_a_3328_ = lean_ctor_get(v___x_3327_, 0);
v_isSharedCheck_3358_ = !lean_is_exclusive(v___x_3327_);
if (v_isSharedCheck_3358_ == 0)
{
v___x_3330_ = v___x_3327_;
v_isShared_3331_ = v_isSharedCheck_3358_;
goto v_resetjp_3329_;
}
else
{
lean_inc(v_a_3328_);
lean_dec(v___x_3327_);
v___x_3330_ = lean_box(0);
v_isShared_3331_ = v_isSharedCheck_3358_;
goto v_resetjp_3329_;
}
v_resetjp_3329_:
{
lean_object* v_fst_3332_; lean_object* v___x_3334_; uint8_t v_isShared_3335_; uint8_t v_isSharedCheck_3356_; 
v_fst_3332_ = lean_ctor_get(v_a_3328_, 0);
v_isSharedCheck_3356_ = !lean_is_exclusive(v_a_3328_);
if (v_isSharedCheck_3356_ == 0)
{
lean_object* v_unused_3357_; 
v_unused_3357_ = lean_ctor_get(v_a_3328_, 1);
lean_dec(v_unused_3357_);
v___x_3334_ = v_a_3328_;
v_isShared_3335_ = v_isSharedCheck_3356_;
goto v_resetjp_3333_;
}
else
{
lean_inc(v_fst_3332_);
lean_dec(v_a_3328_);
v___x_3334_ = lean_box(0);
v_isShared_3335_ = v_isSharedCheck_3356_;
goto v_resetjp_3333_;
}
v_resetjp_3333_:
{
if (lean_obj_tag(v_fst_3332_) == 0)
{
lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3339_; 
lean_del_object(v___x_3330_);
v___x_3336_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3337_ = l_Lean_MessageData_ofName(v___x_3323_);
lean_inc_ref(v___x_3337_);
if (v_isShared_3335_ == 0)
{
lean_ctor_set_tag(v___x_3334_, 7);
lean_ctor_set(v___x_3334_, 1, v___x_3337_);
lean_ctor_set(v___x_3334_, 0, v___x_3336_);
v___x_3339_ = v___x_3334_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3351_; 
v_reuseFailAlloc_3351_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3351_, 0, v___x_3336_);
lean_ctor_set(v_reuseFailAlloc_3351_, 1, v___x_3337_);
v___x_3339_ = v_reuseFailAlloc_3351_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; 
v___x_3340_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3341_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3341_, 0, v___x_3339_);
lean_ctor_set(v___x_3341_, 1, v___x_3340_);
v___x_3342_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_3343_ = l_Lean_indentD(v___x_3342_);
v___x_3344_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3344_, 0, v___x_3341_);
lean_ctor_set(v___x_3344_, 1, v___x_3343_);
v___x_3345_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3346_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3346_, 0, v___x_3344_);
lean_ctor_set(v___x_3346_, 1, v___x_3345_);
v___x_3347_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3347_, 0, v___x_3346_);
lean_ctor_set(v___x_3347_, 1, v___x_3337_);
v___x_3348_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3349_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3349_, 0, v___x_3347_);
lean_ctor_set(v___x_3349_, 1, v___x_3348_);
v___x_3350_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_3349_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_);
return v___x_3350_;
}
}
else
{
lean_object* v_val_3352_; lean_object* v___x_3354_; 
lean_del_object(v___x_3334_);
lean_dec(v___x_3323_);
lean_dec(v_stx_3056_);
v_val_3352_ = lean_ctor_get(v_fst_3332_, 0);
lean_inc(v_val_3352_);
lean_dec_ref_known(v_fst_3332_, 1);
if (v_isShared_3331_ == 0)
{
lean_ctor_set(v___x_3330_, 0, v_val_3352_);
v___x_3354_ = v___x_3330_;
goto v_reusejp_3353_;
}
else
{
lean_object* v_reuseFailAlloc_3355_; 
v_reuseFailAlloc_3355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3355_, 0, v_val_3352_);
v___x_3354_ = v_reuseFailAlloc_3355_;
goto v_reusejp_3353_;
}
v_reusejp_3353_:
{
return v___x_3354_;
}
}
}
}
}
else
{
lean_object* v_a_3359_; lean_object* v___x_3361_; uint8_t v_isShared_3362_; uint8_t v_isSharedCheck_3366_; 
lean_dec(v___x_3323_);
lean_dec(v_stx_3056_);
v_a_3359_ = lean_ctor_get(v___x_3327_, 0);
v_isSharedCheck_3366_ = !lean_is_exclusive(v___x_3327_);
if (v_isSharedCheck_3366_ == 0)
{
v___x_3361_ = v___x_3327_;
v_isShared_3362_ = v_isSharedCheck_3366_;
goto v_resetjp_3360_;
}
else
{
lean_inc(v_a_3359_);
lean_dec(v___x_3327_);
v___x_3361_ = lean_box(0);
v_isShared_3362_ = v_isSharedCheck_3366_;
goto v_resetjp_3360_;
}
v_resetjp_3360_:
{
lean_object* v___x_3364_; 
if (v_isShared_3362_ == 0)
{
v___x_3364_ = v___x_3361_;
goto v_reusejp_3363_;
}
else
{
lean_object* v_reuseFailAlloc_3365_; 
v_reuseFailAlloc_3365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3365_, 0, v_a_3359_);
v___x_3364_ = v_reuseFailAlloc_3365_;
goto v_reusejp_3363_;
}
v_reusejp_3363_:
{
return v___x_3364_;
}
}
}
}
else
{
lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; 
v___x_3367_ = lean_unsigned_to_nat(3u);
v___x_3368_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_3367_);
lean_dec(v_stx_3056_);
v___x_3369_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(v___x_3309_, v___x_3368_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_);
return v___x_3369_;
}
}
}
else
{
lean_object* v___x_4867_; lean_object* v___x_4868_; lean_object* v___x_4869_; uint8_t v___x_4870_; 
v___x_4867_ = lean_unsigned_to_nat(0u);
v___x_4868_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_4867_);
v___x_4869_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__16___closed__1));
v___x_4870_ = l_Lean_Syntax_isOfKind(v___x_4868_, v___x_4869_);
if (v___x_4870_ == 0)
{
lean_object* v___x_4871_; lean_object* v_env_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; lean_object* v___x_4877_; 
v___x_4871_ = lean_st_ref_get(v_a_3062_);
v_env_4872_ = lean_ctor_get(v___x_4871_, 0);
lean_inc_ref(v_env_4872_);
lean_dec(v___x_4871_);
lean_inc_n(v_stx_3056_, 2);
v___x_4873_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_4874_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4875_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4874_, v_env_4872_, v___x_4873_);
v___x_4876_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_4877_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_4875_, v___x_4876_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_4875_);
if (lean_obj_tag(v___x_4877_) == 0)
{
lean_object* v_a_4878_; lean_object* v___x_4880_; uint8_t v_isShared_4881_; uint8_t v_isSharedCheck_4908_; 
v_a_4878_ = lean_ctor_get(v___x_4877_, 0);
v_isSharedCheck_4908_ = !lean_is_exclusive(v___x_4877_);
if (v_isSharedCheck_4908_ == 0)
{
v___x_4880_ = v___x_4877_;
v_isShared_4881_ = v_isSharedCheck_4908_;
goto v_resetjp_4879_;
}
else
{
lean_inc(v_a_4878_);
lean_dec(v___x_4877_);
v___x_4880_ = lean_box(0);
v_isShared_4881_ = v_isSharedCheck_4908_;
goto v_resetjp_4879_;
}
v_resetjp_4879_:
{
lean_object* v_fst_4882_; lean_object* v___x_4884_; uint8_t v_isShared_4885_; uint8_t v_isSharedCheck_4906_; 
v_fst_4882_ = lean_ctor_get(v_a_4878_, 0);
v_isSharedCheck_4906_ = !lean_is_exclusive(v_a_4878_);
if (v_isSharedCheck_4906_ == 0)
{
lean_object* v_unused_4907_; 
v_unused_4907_ = lean_ctor_get(v_a_4878_, 1);
lean_dec(v_unused_4907_);
v___x_4884_ = v_a_4878_;
v_isShared_4885_ = v_isSharedCheck_4906_;
goto v_resetjp_4883_;
}
else
{
lean_inc(v_fst_4882_);
lean_dec(v_a_4878_);
v___x_4884_ = lean_box(0);
v_isShared_4885_ = v_isSharedCheck_4906_;
goto v_resetjp_4883_;
}
v_resetjp_4883_:
{
if (lean_obj_tag(v_fst_4882_) == 0)
{
lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4889_; 
lean_del_object(v___x_4880_);
v___x_4886_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4887_ = l_Lean_MessageData_ofName(v___x_4873_);
lean_inc_ref(v___x_4887_);
if (v_isShared_4885_ == 0)
{
lean_ctor_set_tag(v___x_4884_, 7);
lean_ctor_set(v___x_4884_, 1, v___x_4887_);
lean_ctor_set(v___x_4884_, 0, v___x_4886_);
v___x_4889_ = v___x_4884_;
goto v_reusejp_4888_;
}
else
{
lean_object* v_reuseFailAlloc_4901_; 
v_reuseFailAlloc_4901_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4901_, 0, v___x_4886_);
lean_ctor_set(v_reuseFailAlloc_4901_, 1, v___x_4887_);
v___x_4889_ = v_reuseFailAlloc_4901_;
goto v_reusejp_4888_;
}
v_reusejp_4888_:
{
lean_object* v___x_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; lean_object* v___x_4893_; lean_object* v___x_4894_; lean_object* v___x_4895_; lean_object* v___x_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v___x_4900_; 
v___x_4890_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4891_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4891_, 0, v___x_4889_);
lean_ctor_set(v___x_4891_, 1, v___x_4890_);
v___x_4892_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_4893_ = l_Lean_indentD(v___x_4892_);
v___x_4894_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4894_, 0, v___x_4891_);
lean_ctor_set(v___x_4894_, 1, v___x_4893_);
v___x_4895_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4896_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4896_, 0, v___x_4894_);
lean_ctor_set(v___x_4896_, 1, v___x_4895_);
v___x_4897_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4897_, 0, v___x_4896_);
lean_ctor_set(v___x_4897_, 1, v___x_4887_);
v___x_4898_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4899_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4899_, 0, v___x_4897_);
lean_ctor_set(v___x_4899_, 1, v___x_4898_);
v___x_4900_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_4899_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_4900_;
}
}
else
{
lean_object* v_val_4902_; lean_object* v___x_4904_; 
lean_del_object(v___x_4884_);
lean_dec(v___x_4873_);
lean_dec(v_stx_3056_);
v_val_4902_ = lean_ctor_get(v_fst_4882_, 0);
lean_inc(v_val_4902_);
lean_dec_ref_known(v_fst_4882_, 1);
if (v_isShared_4881_ == 0)
{
lean_ctor_set(v___x_4880_, 0, v_val_4902_);
v___x_4904_ = v___x_4880_;
goto v_reusejp_4903_;
}
else
{
lean_object* v_reuseFailAlloc_4905_; 
v_reuseFailAlloc_4905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4905_, 0, v_val_4902_);
v___x_4904_ = v_reuseFailAlloc_4905_;
goto v_reusejp_4903_;
}
v_reusejp_4903_:
{
return v___x_4904_;
}
}
}
}
}
else
{
lean_object* v_a_4909_; lean_object* v___x_4911_; uint8_t v_isShared_4912_; uint8_t v_isSharedCheck_4916_; 
lean_dec(v___x_4873_);
lean_dec(v_stx_3056_);
v_a_4909_ = lean_ctor_get(v___x_4877_, 0);
v_isSharedCheck_4916_ = !lean_is_exclusive(v___x_4877_);
if (v_isSharedCheck_4916_ == 0)
{
v___x_4911_ = v___x_4877_;
v_isShared_4912_ = v_isSharedCheck_4916_;
goto v_resetjp_4910_;
}
else
{
lean_inc(v_a_4909_);
lean_dec(v___x_4877_);
v___x_4911_ = lean_box(0);
v_isShared_4912_ = v_isSharedCheck_4916_;
goto v_resetjp_4910_;
}
v_resetjp_4910_:
{
lean_object* v___x_4914_; 
if (v_isShared_4912_ == 0)
{
v___x_4914_ = v___x_4911_;
goto v_reusejp_4913_;
}
else
{
lean_object* v_reuseFailAlloc_4915_; 
v_reuseFailAlloc_4915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4915_, 0, v_a_4909_);
v___x_4914_ = v_reuseFailAlloc_4915_;
goto v_reusejp_4913_;
}
v_reusejp_4913_:
{
return v___x_4914_;
}
}
}
}
else
{
lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; uint8_t v___x_4920_; 
v___x_4917_ = lean_unsigned_to_nat(1u);
v___x_4918_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_4917_);
v___x_4919_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83));
lean_inc(v___x_4918_);
v___x_4920_ = l_Lean_Syntax_isOfKind(v___x_4918_, v___x_4919_);
if (v___x_4920_ == 0)
{
lean_object* v___x_4921_; lean_object* v_env_4922_; lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___x_4925_; lean_object* v___x_4926_; lean_object* v___x_4927_; 
lean_dec(v___x_4918_);
v___x_4921_ = lean_st_ref_get(v_a_3062_);
v_env_4922_ = lean_ctor_get(v___x_4921_, 0);
lean_inc_ref(v_env_4922_);
lean_dec(v___x_4921_);
lean_inc_n(v_stx_3056_, 2);
v___x_4923_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_4924_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4925_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4924_, v_env_4922_, v___x_4923_);
v___x_4926_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_4927_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_4925_, v___x_4926_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_4925_);
if (lean_obj_tag(v___x_4927_) == 0)
{
lean_object* v_a_4928_; lean_object* v___x_4930_; uint8_t v_isShared_4931_; uint8_t v_isSharedCheck_4958_; 
v_a_4928_ = lean_ctor_get(v___x_4927_, 0);
v_isSharedCheck_4958_ = !lean_is_exclusive(v___x_4927_);
if (v_isSharedCheck_4958_ == 0)
{
v___x_4930_ = v___x_4927_;
v_isShared_4931_ = v_isSharedCheck_4958_;
goto v_resetjp_4929_;
}
else
{
lean_inc(v_a_4928_);
lean_dec(v___x_4927_);
v___x_4930_ = lean_box(0);
v_isShared_4931_ = v_isSharedCheck_4958_;
goto v_resetjp_4929_;
}
v_resetjp_4929_:
{
lean_object* v_fst_4932_; lean_object* v___x_4934_; uint8_t v_isShared_4935_; uint8_t v_isSharedCheck_4956_; 
v_fst_4932_ = lean_ctor_get(v_a_4928_, 0);
v_isSharedCheck_4956_ = !lean_is_exclusive(v_a_4928_);
if (v_isSharedCheck_4956_ == 0)
{
lean_object* v_unused_4957_; 
v_unused_4957_ = lean_ctor_get(v_a_4928_, 1);
lean_dec(v_unused_4957_);
v___x_4934_ = v_a_4928_;
v_isShared_4935_ = v_isSharedCheck_4956_;
goto v_resetjp_4933_;
}
else
{
lean_inc(v_fst_4932_);
lean_dec(v_a_4928_);
v___x_4934_ = lean_box(0);
v_isShared_4935_ = v_isSharedCheck_4956_;
goto v_resetjp_4933_;
}
v_resetjp_4933_:
{
if (lean_obj_tag(v_fst_4932_) == 0)
{
lean_object* v___x_4936_; lean_object* v___x_4937_; lean_object* v___x_4939_; 
lean_del_object(v___x_4930_);
v___x_4936_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4937_ = l_Lean_MessageData_ofName(v___x_4923_);
lean_inc_ref(v___x_4937_);
if (v_isShared_4935_ == 0)
{
lean_ctor_set_tag(v___x_4934_, 7);
lean_ctor_set(v___x_4934_, 1, v___x_4937_);
lean_ctor_set(v___x_4934_, 0, v___x_4936_);
v___x_4939_ = v___x_4934_;
goto v_reusejp_4938_;
}
else
{
lean_object* v_reuseFailAlloc_4951_; 
v_reuseFailAlloc_4951_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4951_, 0, v___x_4936_);
lean_ctor_set(v_reuseFailAlloc_4951_, 1, v___x_4937_);
v___x_4939_ = v_reuseFailAlloc_4951_;
goto v_reusejp_4938_;
}
v_reusejp_4938_:
{
lean_object* v___x_4940_; lean_object* v___x_4941_; lean_object* v___x_4942_; lean_object* v___x_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; 
v___x_4940_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4941_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4941_, 0, v___x_4939_);
lean_ctor_set(v___x_4941_, 1, v___x_4940_);
v___x_4942_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_4943_ = l_Lean_indentD(v___x_4942_);
v___x_4944_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4944_, 0, v___x_4941_);
lean_ctor_set(v___x_4944_, 1, v___x_4943_);
v___x_4945_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4946_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4946_, 0, v___x_4944_);
lean_ctor_set(v___x_4946_, 1, v___x_4945_);
v___x_4947_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4947_, 0, v___x_4946_);
lean_ctor_set(v___x_4947_, 1, v___x_4937_);
v___x_4948_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4949_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4949_, 0, v___x_4947_);
lean_ctor_set(v___x_4949_, 1, v___x_4948_);
v___x_4950_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_4949_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_4950_;
}
}
else
{
lean_object* v_val_4952_; lean_object* v___x_4954_; 
lean_del_object(v___x_4934_);
lean_dec(v___x_4923_);
lean_dec(v_stx_3056_);
v_val_4952_ = lean_ctor_get(v_fst_4932_, 0);
lean_inc(v_val_4952_);
lean_dec_ref_known(v_fst_4932_, 1);
if (v_isShared_4931_ == 0)
{
lean_ctor_set(v___x_4930_, 0, v_val_4952_);
v___x_4954_ = v___x_4930_;
goto v_reusejp_4953_;
}
else
{
lean_object* v_reuseFailAlloc_4955_; 
v_reuseFailAlloc_4955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4955_, 0, v_val_4952_);
v___x_4954_ = v_reuseFailAlloc_4955_;
goto v_reusejp_4953_;
}
v_reusejp_4953_:
{
return v___x_4954_;
}
}
}
}
}
else
{
lean_object* v_a_4959_; lean_object* v___x_4961_; uint8_t v_isShared_4962_; uint8_t v_isSharedCheck_4966_; 
lean_dec(v___x_4923_);
lean_dec(v_stx_3056_);
v_a_4959_ = lean_ctor_get(v___x_4927_, 0);
v_isSharedCheck_4966_ = !lean_is_exclusive(v___x_4927_);
if (v_isSharedCheck_4966_ == 0)
{
v___x_4961_ = v___x_4927_;
v_isShared_4962_ = v_isSharedCheck_4966_;
goto v_resetjp_4960_;
}
else
{
lean_inc(v_a_4959_);
lean_dec(v___x_4927_);
v___x_4961_ = lean_box(0);
v_isShared_4962_ = v_isSharedCheck_4966_;
goto v_resetjp_4960_;
}
v_resetjp_4960_:
{
lean_object* v___x_4964_; 
if (v_isShared_4962_ == 0)
{
v___x_4964_ = v___x_4961_;
goto v_reusejp_4963_;
}
else
{
lean_object* v_reuseFailAlloc_4965_; 
v_reuseFailAlloc_4965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4965_, 0, v_a_4959_);
v___x_4964_ = v_reuseFailAlloc_4965_;
goto v_reusejp_4963_;
}
v_reusejp_4963_:
{
return v___x_4964_;
}
}
}
}
else
{
lean_object* v___x_4967_; uint8_t v___x_4968_; 
v___x_4967_ = l_Lean_Syntax_getArg(v___x_4918_, v___x_4867_);
lean_dec(v___x_4918_);
lean_inc(v___x_4967_);
v___x_4968_ = l_Lean_Syntax_matchesNull(v___x_4967_, v___x_4917_);
if (v___x_4968_ == 0)
{
lean_object* v___x_4969_; lean_object* v_env_4970_; lean_object* v___x_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; lean_object* v___x_4975_; 
lean_dec(v___x_4967_);
v___x_4969_ = lean_st_ref_get(v_a_3062_);
v_env_4970_ = lean_ctor_get(v___x_4969_, 0);
lean_inc_ref(v_env_4970_);
lean_dec(v___x_4969_);
lean_inc_n(v_stx_3056_, 2);
v___x_4971_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_4972_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4973_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4972_, v_env_4970_, v___x_4971_);
v___x_4974_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_4975_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_4973_, v___x_4974_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_4973_);
if (lean_obj_tag(v___x_4975_) == 0)
{
lean_object* v_a_4976_; lean_object* v___x_4978_; uint8_t v_isShared_4979_; uint8_t v_isSharedCheck_5006_; 
v_a_4976_ = lean_ctor_get(v___x_4975_, 0);
v_isSharedCheck_5006_ = !lean_is_exclusive(v___x_4975_);
if (v_isSharedCheck_5006_ == 0)
{
v___x_4978_ = v___x_4975_;
v_isShared_4979_ = v_isSharedCheck_5006_;
goto v_resetjp_4977_;
}
else
{
lean_inc(v_a_4976_);
lean_dec(v___x_4975_);
v___x_4978_ = lean_box(0);
v_isShared_4979_ = v_isSharedCheck_5006_;
goto v_resetjp_4977_;
}
v_resetjp_4977_:
{
lean_object* v_fst_4980_; lean_object* v___x_4982_; uint8_t v_isShared_4983_; uint8_t v_isSharedCheck_5004_; 
v_fst_4980_ = lean_ctor_get(v_a_4976_, 0);
v_isSharedCheck_5004_ = !lean_is_exclusive(v_a_4976_);
if (v_isSharedCheck_5004_ == 0)
{
lean_object* v_unused_5005_; 
v_unused_5005_ = lean_ctor_get(v_a_4976_, 1);
lean_dec(v_unused_5005_);
v___x_4982_ = v_a_4976_;
v_isShared_4983_ = v_isSharedCheck_5004_;
goto v_resetjp_4981_;
}
else
{
lean_inc(v_fst_4980_);
lean_dec(v_a_4976_);
v___x_4982_ = lean_box(0);
v_isShared_4983_ = v_isSharedCheck_5004_;
goto v_resetjp_4981_;
}
v_resetjp_4981_:
{
if (lean_obj_tag(v_fst_4980_) == 0)
{
lean_object* v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4987_; 
lean_del_object(v___x_4978_);
v___x_4984_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4985_ = l_Lean_MessageData_ofName(v___x_4971_);
lean_inc_ref(v___x_4985_);
if (v_isShared_4983_ == 0)
{
lean_ctor_set_tag(v___x_4982_, 7);
lean_ctor_set(v___x_4982_, 1, v___x_4985_);
lean_ctor_set(v___x_4982_, 0, v___x_4984_);
v___x_4987_ = v___x_4982_;
goto v_reusejp_4986_;
}
else
{
lean_object* v_reuseFailAlloc_4999_; 
v_reuseFailAlloc_4999_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4999_, 0, v___x_4984_);
lean_ctor_set(v_reuseFailAlloc_4999_, 1, v___x_4985_);
v___x_4987_ = v_reuseFailAlloc_4999_;
goto v_reusejp_4986_;
}
v_reusejp_4986_:
{
lean_object* v___x_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; lean_object* v___x_4994_; lean_object* v___x_4995_; lean_object* v___x_4996_; lean_object* v___x_4997_; lean_object* v___x_4998_; 
v___x_4988_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4989_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4989_, 0, v___x_4987_);
lean_ctor_set(v___x_4989_, 1, v___x_4988_);
v___x_4990_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_4991_ = l_Lean_indentD(v___x_4990_);
v___x_4992_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4992_, 0, v___x_4989_);
lean_ctor_set(v___x_4992_, 1, v___x_4991_);
v___x_4993_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4994_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4994_, 0, v___x_4992_);
lean_ctor_set(v___x_4994_, 1, v___x_4993_);
v___x_4995_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4995_, 0, v___x_4994_);
lean_ctor_set(v___x_4995_, 1, v___x_4985_);
v___x_4996_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4997_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4997_, 0, v___x_4995_);
lean_ctor_set(v___x_4997_, 1, v___x_4996_);
v___x_4998_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_4997_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_4998_;
}
}
else
{
lean_object* v_val_5000_; lean_object* v___x_5002_; 
lean_del_object(v___x_4982_);
lean_dec(v___x_4971_);
lean_dec(v_stx_3056_);
v_val_5000_ = lean_ctor_get(v_fst_4980_, 0);
lean_inc(v_val_5000_);
lean_dec_ref_known(v_fst_4980_, 1);
if (v_isShared_4979_ == 0)
{
lean_ctor_set(v___x_4978_, 0, v_val_5000_);
v___x_5002_ = v___x_4978_;
goto v_reusejp_5001_;
}
else
{
lean_object* v_reuseFailAlloc_5003_; 
v_reuseFailAlloc_5003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5003_, 0, v_val_5000_);
v___x_5002_ = v_reuseFailAlloc_5003_;
goto v_reusejp_5001_;
}
v_reusejp_5001_:
{
return v___x_5002_;
}
}
}
}
}
else
{
lean_object* v_a_5007_; lean_object* v___x_5009_; uint8_t v_isShared_5010_; uint8_t v_isSharedCheck_5014_; 
lean_dec(v___x_4971_);
lean_dec(v_stx_3056_);
v_a_5007_ = lean_ctor_get(v___x_4975_, 0);
v_isSharedCheck_5014_ = !lean_is_exclusive(v___x_4975_);
if (v_isSharedCheck_5014_ == 0)
{
v___x_5009_ = v___x_4975_;
v_isShared_5010_ = v_isSharedCheck_5014_;
goto v_resetjp_5008_;
}
else
{
lean_inc(v_a_5007_);
lean_dec(v___x_4975_);
v___x_5009_ = lean_box(0);
v_isShared_5010_ = v_isSharedCheck_5014_;
goto v_resetjp_5008_;
}
v_resetjp_5008_:
{
lean_object* v___x_5012_; 
if (v_isShared_5010_ == 0)
{
v___x_5012_ = v___x_5009_;
goto v_reusejp_5011_;
}
else
{
lean_object* v_reuseFailAlloc_5013_; 
v_reuseFailAlloc_5013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5013_, 0, v_a_5007_);
v___x_5012_ = v_reuseFailAlloc_5013_;
goto v_reusejp_5011_;
}
v_reusejp_5011_:
{
return v___x_5012_;
}
}
}
}
else
{
lean_object* v___x_5015_; lean_object* v___x_5016_; uint8_t v___x_5017_; 
v___x_5015_ = l_Lean_Syntax_getArg(v___x_4967_, v___x_4867_);
lean_dec(v___x_4967_);
v___x_5016_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85));
v___x_5017_ = l_Lean_Syntax_isOfKind(v___x_5015_, v___x_5016_);
if (v___x_5017_ == 0)
{
lean_object* v___x_5018_; lean_object* v_env_5019_; lean_object* v___x_5020_; lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; lean_object* v___x_5024_; 
v___x_5018_ = lean_st_ref_get(v_a_3062_);
v_env_5019_ = lean_ctor_get(v___x_5018_, 0);
lean_inc_ref(v_env_5019_);
lean_dec(v___x_5018_);
lean_inc_n(v_stx_3056_, 2);
v___x_5020_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_5021_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_5022_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_5021_, v_env_5019_, v___x_5020_);
v___x_5023_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_5024_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_5022_, v___x_5023_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_5022_);
if (lean_obj_tag(v___x_5024_) == 0)
{
lean_object* v_a_5025_; lean_object* v___x_5027_; uint8_t v_isShared_5028_; uint8_t v_isSharedCheck_5055_; 
v_a_5025_ = lean_ctor_get(v___x_5024_, 0);
v_isSharedCheck_5055_ = !lean_is_exclusive(v___x_5024_);
if (v_isSharedCheck_5055_ == 0)
{
v___x_5027_ = v___x_5024_;
v_isShared_5028_ = v_isSharedCheck_5055_;
goto v_resetjp_5026_;
}
else
{
lean_inc(v_a_5025_);
lean_dec(v___x_5024_);
v___x_5027_ = lean_box(0);
v_isShared_5028_ = v_isSharedCheck_5055_;
goto v_resetjp_5026_;
}
v_resetjp_5026_:
{
lean_object* v_fst_5029_; lean_object* v___x_5031_; uint8_t v_isShared_5032_; uint8_t v_isSharedCheck_5053_; 
v_fst_5029_ = lean_ctor_get(v_a_5025_, 0);
v_isSharedCheck_5053_ = !lean_is_exclusive(v_a_5025_);
if (v_isSharedCheck_5053_ == 0)
{
lean_object* v_unused_5054_; 
v_unused_5054_ = lean_ctor_get(v_a_5025_, 1);
lean_dec(v_unused_5054_);
v___x_5031_ = v_a_5025_;
v_isShared_5032_ = v_isSharedCheck_5053_;
goto v_resetjp_5030_;
}
else
{
lean_inc(v_fst_5029_);
lean_dec(v_a_5025_);
v___x_5031_ = lean_box(0);
v_isShared_5032_ = v_isSharedCheck_5053_;
goto v_resetjp_5030_;
}
v_resetjp_5030_:
{
if (lean_obj_tag(v_fst_5029_) == 0)
{
lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5036_; 
lean_del_object(v___x_5027_);
v___x_5033_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_5034_ = l_Lean_MessageData_ofName(v___x_5020_);
lean_inc_ref(v___x_5034_);
if (v_isShared_5032_ == 0)
{
lean_ctor_set_tag(v___x_5031_, 7);
lean_ctor_set(v___x_5031_, 1, v___x_5034_);
lean_ctor_set(v___x_5031_, 0, v___x_5033_);
v___x_5036_ = v___x_5031_;
goto v_reusejp_5035_;
}
else
{
lean_object* v_reuseFailAlloc_5048_; 
v_reuseFailAlloc_5048_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5048_, 0, v___x_5033_);
lean_ctor_set(v_reuseFailAlloc_5048_, 1, v___x_5034_);
v___x_5036_ = v_reuseFailAlloc_5048_;
goto v_reusejp_5035_;
}
v_reusejp_5035_:
{
lean_object* v___x_5037_; lean_object* v___x_5038_; lean_object* v___x_5039_; lean_object* v___x_5040_; lean_object* v___x_5041_; lean_object* v___x_5042_; lean_object* v___x_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; lean_object* v___x_5047_; 
v___x_5037_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_5038_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5038_, 0, v___x_5036_);
lean_ctor_set(v___x_5038_, 1, v___x_5037_);
v___x_5039_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_5040_ = l_Lean_indentD(v___x_5039_);
v___x_5041_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5041_, 0, v___x_5038_);
lean_ctor_set(v___x_5041_, 1, v___x_5040_);
v___x_5042_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_5043_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5043_, 0, v___x_5041_);
lean_ctor_set(v___x_5043_, 1, v___x_5042_);
v___x_5044_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5044_, 0, v___x_5043_);
lean_ctor_set(v___x_5044_, 1, v___x_5034_);
v___x_5045_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_5046_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5046_, 0, v___x_5044_);
lean_ctor_set(v___x_5046_, 1, v___x_5045_);
v___x_5047_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_5046_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_5047_;
}
}
else
{
lean_object* v_val_5049_; lean_object* v___x_5051_; 
lean_del_object(v___x_5031_);
lean_dec(v___x_5020_);
lean_dec(v_stx_3056_);
v_val_5049_ = lean_ctor_get(v_fst_5029_, 0);
lean_inc(v_val_5049_);
lean_dec_ref_known(v_fst_5029_, 1);
if (v_isShared_5028_ == 0)
{
lean_ctor_set(v___x_5027_, 0, v_val_5049_);
v___x_5051_ = v___x_5027_;
goto v_reusejp_5050_;
}
else
{
lean_object* v_reuseFailAlloc_5052_; 
v_reuseFailAlloc_5052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5052_, 0, v_val_5049_);
v___x_5051_ = v_reuseFailAlloc_5052_;
goto v_reusejp_5050_;
}
v_reusejp_5050_:
{
return v___x_5051_;
}
}
}
}
}
else
{
lean_object* v_a_5056_; lean_object* v___x_5058_; uint8_t v_isShared_5059_; uint8_t v_isSharedCheck_5063_; 
lean_dec(v___x_5020_);
lean_dec(v_stx_3056_);
v_a_5056_ = lean_ctor_get(v___x_5024_, 0);
v_isSharedCheck_5063_ = !lean_is_exclusive(v___x_5024_);
if (v_isSharedCheck_5063_ == 0)
{
v___x_5058_ = v___x_5024_;
v_isShared_5059_ = v_isSharedCheck_5063_;
goto v_resetjp_5057_;
}
else
{
lean_inc(v_a_5056_);
lean_dec(v___x_5024_);
v___x_5058_ = lean_box(0);
v_isShared_5059_ = v_isSharedCheck_5063_;
goto v_resetjp_5057_;
}
v_resetjp_5057_:
{
lean_object* v___x_5061_; 
if (v_isShared_5059_ == 0)
{
v___x_5061_ = v___x_5058_;
goto v_reusejp_5060_;
}
else
{
lean_object* v_reuseFailAlloc_5062_; 
v_reuseFailAlloc_5062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5062_, 0, v_a_5056_);
v___x_5061_ = v_reuseFailAlloc_5062_;
goto v_reusejp_5060_;
}
v_reusejp_5060_:
{
return v___x_5061_;
}
}
}
}
else
{
lean_object* v___x_5064_; lean_object* v___x_5065_; 
lean_dec(v_stx_3056_);
v___x_5064_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_5065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5065_, 0, v___x_5064_);
return v___x_5065_;
}
}
}
}
}
}
else
{
lean_object* v___x_5066_; lean_object* v___x_5067_; lean_object* v___x_5068_; uint8_t v___x_5069_; 
v___x_5066_ = lean_unsigned_to_nat(1u);
v___x_5067_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_5066_);
v___x_5068_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1));
v___x_5069_ = l_Lean_Syntax_isOfKind(v___x_5067_, v___x_5068_);
if (v___x_5069_ == 0)
{
lean_object* v___x_5070_; lean_object* v_env_5071_; lean_object* v___x_5072_; lean_object* v___x_5073_; lean_object* v___x_5074_; lean_object* v___x_5075_; lean_object* v___x_5076_; 
v___x_5070_ = lean_st_ref_get(v_a_3062_);
v_env_5071_ = lean_ctor_get(v___x_5070_, 0);
lean_inc_ref(v_env_5071_);
lean_dec(v___x_5070_);
lean_inc_n(v_stx_3056_, 2);
v___x_5072_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_5073_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_5074_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_5073_, v_env_5071_, v___x_5072_);
v___x_5075_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_5076_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_5074_, v___x_5075_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_5074_);
if (lean_obj_tag(v___x_5076_) == 0)
{
lean_object* v_a_5077_; lean_object* v___x_5079_; uint8_t v_isShared_5080_; uint8_t v_isSharedCheck_5107_; 
v_a_5077_ = lean_ctor_get(v___x_5076_, 0);
v_isSharedCheck_5107_ = !lean_is_exclusive(v___x_5076_);
if (v_isSharedCheck_5107_ == 0)
{
v___x_5079_ = v___x_5076_;
v_isShared_5080_ = v_isSharedCheck_5107_;
goto v_resetjp_5078_;
}
else
{
lean_inc(v_a_5077_);
lean_dec(v___x_5076_);
v___x_5079_ = lean_box(0);
v_isShared_5080_ = v_isSharedCheck_5107_;
goto v_resetjp_5078_;
}
v_resetjp_5078_:
{
lean_object* v_fst_5081_; lean_object* v___x_5083_; uint8_t v_isShared_5084_; uint8_t v_isSharedCheck_5105_; 
v_fst_5081_ = lean_ctor_get(v_a_5077_, 0);
v_isSharedCheck_5105_ = !lean_is_exclusive(v_a_5077_);
if (v_isSharedCheck_5105_ == 0)
{
lean_object* v_unused_5106_; 
v_unused_5106_ = lean_ctor_get(v_a_5077_, 1);
lean_dec(v_unused_5106_);
v___x_5083_ = v_a_5077_;
v_isShared_5084_ = v_isSharedCheck_5105_;
goto v_resetjp_5082_;
}
else
{
lean_inc(v_fst_5081_);
lean_dec(v_a_5077_);
v___x_5083_ = lean_box(0);
v_isShared_5084_ = v_isSharedCheck_5105_;
goto v_resetjp_5082_;
}
v_resetjp_5082_:
{
if (lean_obj_tag(v_fst_5081_) == 0)
{
lean_object* v___x_5085_; lean_object* v___x_5086_; lean_object* v___x_5088_; 
lean_del_object(v___x_5079_);
v___x_5085_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_5086_ = l_Lean_MessageData_ofName(v___x_5072_);
lean_inc_ref(v___x_5086_);
if (v_isShared_5084_ == 0)
{
lean_ctor_set_tag(v___x_5083_, 7);
lean_ctor_set(v___x_5083_, 1, v___x_5086_);
lean_ctor_set(v___x_5083_, 0, v___x_5085_);
v___x_5088_ = v___x_5083_;
goto v_reusejp_5087_;
}
else
{
lean_object* v_reuseFailAlloc_5100_; 
v_reuseFailAlloc_5100_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5100_, 0, v___x_5085_);
lean_ctor_set(v_reuseFailAlloc_5100_, 1, v___x_5086_);
v___x_5088_ = v_reuseFailAlloc_5100_;
goto v_reusejp_5087_;
}
v_reusejp_5087_:
{
lean_object* v___x_5089_; lean_object* v___x_5090_; lean_object* v___x_5091_; lean_object* v___x_5092_; lean_object* v___x_5093_; lean_object* v___x_5094_; lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; lean_object* v___x_5099_; 
v___x_5089_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_5090_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5090_, 0, v___x_5088_);
lean_ctor_set(v___x_5090_, 1, v___x_5089_);
v___x_5091_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_5092_ = l_Lean_indentD(v___x_5091_);
v___x_5093_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5093_, 0, v___x_5090_);
lean_ctor_set(v___x_5093_, 1, v___x_5092_);
v___x_5094_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_5095_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5095_, 0, v___x_5093_);
lean_ctor_set(v___x_5095_, 1, v___x_5094_);
v___x_5096_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5096_, 0, v___x_5095_);
lean_ctor_set(v___x_5096_, 1, v___x_5086_);
v___x_5097_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_5098_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5098_, 0, v___x_5096_);
lean_ctor_set(v___x_5098_, 1, v___x_5097_);
v___x_5099_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_5098_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_5099_;
}
}
else
{
lean_object* v_val_5101_; lean_object* v___x_5103_; 
lean_del_object(v___x_5083_);
lean_dec(v___x_5072_);
lean_dec(v_stx_3056_);
v_val_5101_ = lean_ctor_get(v_fst_5081_, 0);
lean_inc(v_val_5101_);
lean_dec_ref_known(v_fst_5081_, 1);
if (v_isShared_5080_ == 0)
{
lean_ctor_set(v___x_5079_, 0, v_val_5101_);
v___x_5103_ = v___x_5079_;
goto v_reusejp_5102_;
}
else
{
lean_object* v_reuseFailAlloc_5104_; 
v_reuseFailAlloc_5104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5104_, 0, v_val_5101_);
v___x_5103_ = v_reuseFailAlloc_5104_;
goto v_reusejp_5102_;
}
v_reusejp_5102_:
{
return v___x_5103_;
}
}
}
}
}
else
{
lean_object* v_a_5108_; lean_object* v___x_5110_; uint8_t v_isShared_5111_; uint8_t v_isSharedCheck_5115_; 
lean_dec(v___x_5072_);
lean_dec(v_stx_3056_);
v_a_5108_ = lean_ctor_get(v___x_5076_, 0);
v_isSharedCheck_5115_ = !lean_is_exclusive(v___x_5076_);
if (v_isSharedCheck_5115_ == 0)
{
v___x_5110_ = v___x_5076_;
v_isShared_5111_ = v_isSharedCheck_5115_;
goto v_resetjp_5109_;
}
else
{
lean_inc(v_a_5108_);
lean_dec(v___x_5076_);
v___x_5110_ = lean_box(0);
v_isShared_5111_ = v_isSharedCheck_5115_;
goto v_resetjp_5109_;
}
v_resetjp_5109_:
{
lean_object* v___x_5113_; 
if (v_isShared_5111_ == 0)
{
v___x_5113_ = v___x_5110_;
goto v_reusejp_5112_;
}
else
{
lean_object* v_reuseFailAlloc_5114_; 
v_reuseFailAlloc_5114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5114_, 0, v_a_5108_);
v___x_5113_ = v_reuseFailAlloc_5114_;
goto v_reusejp_5112_;
}
v_reusejp_5112_:
{
return v___x_5113_;
}
}
}
}
else
{
lean_object* v___x_5116_; lean_object* v___x_5117_; lean_object* v___x_5118_; uint8_t v___x_5119_; 
v___x_5116_ = lean_unsigned_to_nat(2u);
v___x_5117_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_5116_);
v___x_5118_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11));
v___x_5119_ = l_Lean_Syntax_isOfKind(v___x_5117_, v___x_5118_);
if (v___x_5119_ == 0)
{
lean_object* v___x_5120_; lean_object* v_env_5121_; lean_object* v___x_5122_; lean_object* v___x_5123_; lean_object* v___x_5124_; lean_object* v___x_5125_; lean_object* v___x_5126_; 
v___x_5120_ = lean_st_ref_get(v_a_3062_);
v_env_5121_ = lean_ctor_get(v___x_5120_, 0);
lean_inc_ref(v_env_5121_);
lean_dec(v___x_5120_);
lean_inc_n(v_stx_3056_, 2);
v___x_5122_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_5123_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_5124_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_5123_, v_env_5121_, v___x_5122_);
v___x_5125_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_5126_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_5124_, v___x_5125_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_5124_);
if (lean_obj_tag(v___x_5126_) == 0)
{
lean_object* v_a_5127_; lean_object* v___x_5129_; uint8_t v_isShared_5130_; uint8_t v_isSharedCheck_5157_; 
v_a_5127_ = lean_ctor_get(v___x_5126_, 0);
v_isSharedCheck_5157_ = !lean_is_exclusive(v___x_5126_);
if (v_isSharedCheck_5157_ == 0)
{
v___x_5129_ = v___x_5126_;
v_isShared_5130_ = v_isSharedCheck_5157_;
goto v_resetjp_5128_;
}
else
{
lean_inc(v_a_5127_);
lean_dec(v___x_5126_);
v___x_5129_ = lean_box(0);
v_isShared_5130_ = v_isSharedCheck_5157_;
goto v_resetjp_5128_;
}
v_resetjp_5128_:
{
lean_object* v_fst_5131_; lean_object* v___x_5133_; uint8_t v_isShared_5134_; uint8_t v_isSharedCheck_5155_; 
v_fst_5131_ = lean_ctor_get(v_a_5127_, 0);
v_isSharedCheck_5155_ = !lean_is_exclusive(v_a_5127_);
if (v_isSharedCheck_5155_ == 0)
{
lean_object* v_unused_5156_; 
v_unused_5156_ = lean_ctor_get(v_a_5127_, 1);
lean_dec(v_unused_5156_);
v___x_5133_ = v_a_5127_;
v_isShared_5134_ = v_isSharedCheck_5155_;
goto v_resetjp_5132_;
}
else
{
lean_inc(v_fst_5131_);
lean_dec(v_a_5127_);
v___x_5133_ = lean_box(0);
v_isShared_5134_ = v_isSharedCheck_5155_;
goto v_resetjp_5132_;
}
v_resetjp_5132_:
{
if (lean_obj_tag(v_fst_5131_) == 0)
{
lean_object* v___x_5135_; lean_object* v___x_5136_; lean_object* v___x_5138_; 
lean_del_object(v___x_5129_);
v___x_5135_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_5136_ = l_Lean_MessageData_ofName(v___x_5122_);
lean_inc_ref(v___x_5136_);
if (v_isShared_5134_ == 0)
{
lean_ctor_set_tag(v___x_5133_, 7);
lean_ctor_set(v___x_5133_, 1, v___x_5136_);
lean_ctor_set(v___x_5133_, 0, v___x_5135_);
v___x_5138_ = v___x_5133_;
goto v_reusejp_5137_;
}
else
{
lean_object* v_reuseFailAlloc_5150_; 
v_reuseFailAlloc_5150_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5150_, 0, v___x_5135_);
lean_ctor_set(v_reuseFailAlloc_5150_, 1, v___x_5136_);
v___x_5138_ = v_reuseFailAlloc_5150_;
goto v_reusejp_5137_;
}
v_reusejp_5137_:
{
lean_object* v___x_5139_; lean_object* v___x_5140_; lean_object* v___x_5141_; lean_object* v___x_5142_; lean_object* v___x_5143_; lean_object* v___x_5144_; lean_object* v___x_5145_; lean_object* v___x_5146_; lean_object* v___x_5147_; lean_object* v___x_5148_; lean_object* v___x_5149_; 
v___x_5139_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_5140_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5140_, 0, v___x_5138_);
lean_ctor_set(v___x_5140_, 1, v___x_5139_);
v___x_5141_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_5142_ = l_Lean_indentD(v___x_5141_);
v___x_5143_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5143_, 0, v___x_5140_);
lean_ctor_set(v___x_5143_, 1, v___x_5142_);
v___x_5144_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_5145_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5145_, 0, v___x_5143_);
lean_ctor_set(v___x_5145_, 1, v___x_5144_);
v___x_5146_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5146_, 0, v___x_5145_);
lean_ctor_set(v___x_5146_, 1, v___x_5136_);
v___x_5147_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_5148_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5148_, 0, v___x_5146_);
lean_ctor_set(v___x_5148_, 1, v___x_5147_);
v___x_5149_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_5148_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_5149_;
}
}
else
{
lean_object* v_val_5151_; lean_object* v___x_5153_; 
lean_del_object(v___x_5133_);
lean_dec(v___x_5122_);
lean_dec(v_stx_3056_);
v_val_5151_ = lean_ctor_get(v_fst_5131_, 0);
lean_inc(v_val_5151_);
lean_dec_ref_known(v_fst_5131_, 1);
if (v_isShared_5130_ == 0)
{
lean_ctor_set(v___x_5129_, 0, v_val_5151_);
v___x_5153_ = v___x_5129_;
goto v_reusejp_5152_;
}
else
{
lean_object* v_reuseFailAlloc_5154_; 
v_reuseFailAlloc_5154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5154_, 0, v_val_5151_);
v___x_5153_ = v_reuseFailAlloc_5154_;
goto v_reusejp_5152_;
}
v_reusejp_5152_:
{
return v___x_5153_;
}
}
}
}
}
else
{
lean_object* v_a_5158_; lean_object* v___x_5160_; uint8_t v_isShared_5161_; uint8_t v_isSharedCheck_5165_; 
lean_dec(v___x_5122_);
lean_dec(v_stx_3056_);
v_a_5158_ = lean_ctor_get(v___x_5126_, 0);
v_isSharedCheck_5165_ = !lean_is_exclusive(v___x_5126_);
if (v_isSharedCheck_5165_ == 0)
{
v___x_5160_ = v___x_5126_;
v_isShared_5161_ = v_isSharedCheck_5165_;
goto v_resetjp_5159_;
}
else
{
lean_inc(v_a_5158_);
lean_dec(v___x_5126_);
v___x_5160_ = lean_box(0);
v_isShared_5161_ = v_isSharedCheck_5165_;
goto v_resetjp_5159_;
}
v_resetjp_5159_:
{
lean_object* v___x_5163_; 
if (v_isShared_5161_ == 0)
{
v___x_5163_ = v___x_5160_;
goto v_reusejp_5162_;
}
else
{
lean_object* v_reuseFailAlloc_5164_; 
v_reuseFailAlloc_5164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5164_, 0, v_a_5158_);
v___x_5163_ = v_reuseFailAlloc_5164_;
goto v_reusejp_5162_;
}
v_reusejp_5162_:
{
return v___x_5163_;
}
}
}
}
else
{
lean_object* v___x_5166_; lean_object* v___x_5167_; 
lean_dec(v_stx_3056_);
v___x_5166_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_5167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5167_, 0, v___x_5166_);
return v___x_5167_;
}
}
}
}
else
{
lean_object* v___x_5168_; lean_object* v___x_5169_; uint8_t v___x_5170_; 
v___x_5168_ = lean_unsigned_to_nat(1u);
v___x_5169_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_5168_);
v___x_5170_ = l_Lean_Syntax_isNone(v___x_5169_);
if (v___x_5170_ == 0)
{
uint8_t v___x_5171_; 
v___x_5171_ = l_Lean_Syntax_matchesNull(v___x_5169_, v___x_5168_);
if (v___x_5171_ == 0)
{
lean_object* v___x_5172_; lean_object* v_env_5173_; lean_object* v___x_5174_; lean_object* v___x_5175_; lean_object* v___x_5176_; lean_object* v___x_5177_; lean_object* v___x_5178_; 
lean_del_object(v___x_3093_);
v___x_5172_ = lean_st_ref_get(v_a_3062_);
v_env_5173_ = lean_ctor_get(v___x_5172_, 0);
lean_inc_ref(v_env_5173_);
lean_dec(v___x_5172_);
lean_inc_n(v_stx_3056_, 2);
v___x_5174_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_5175_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_5176_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_5175_, v_env_5173_, v___x_5174_);
v___x_5177_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_5178_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_5176_, v___x_5177_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_5176_);
if (lean_obj_tag(v___x_5178_) == 0)
{
lean_object* v_a_5179_; lean_object* v___x_5181_; uint8_t v_isShared_5182_; uint8_t v_isSharedCheck_5209_; 
v_a_5179_ = lean_ctor_get(v___x_5178_, 0);
v_isSharedCheck_5209_ = !lean_is_exclusive(v___x_5178_);
if (v_isSharedCheck_5209_ == 0)
{
v___x_5181_ = v___x_5178_;
v_isShared_5182_ = v_isSharedCheck_5209_;
goto v_resetjp_5180_;
}
else
{
lean_inc(v_a_5179_);
lean_dec(v___x_5178_);
v___x_5181_ = lean_box(0);
v_isShared_5182_ = v_isSharedCheck_5209_;
goto v_resetjp_5180_;
}
v_resetjp_5180_:
{
lean_object* v_fst_5183_; lean_object* v___x_5185_; uint8_t v_isShared_5186_; uint8_t v_isSharedCheck_5207_; 
v_fst_5183_ = lean_ctor_get(v_a_5179_, 0);
v_isSharedCheck_5207_ = !lean_is_exclusive(v_a_5179_);
if (v_isSharedCheck_5207_ == 0)
{
lean_object* v_unused_5208_; 
v_unused_5208_ = lean_ctor_get(v_a_5179_, 1);
lean_dec(v_unused_5208_);
v___x_5185_ = v_a_5179_;
v_isShared_5186_ = v_isSharedCheck_5207_;
goto v_resetjp_5184_;
}
else
{
lean_inc(v_fst_5183_);
lean_dec(v_a_5179_);
v___x_5185_ = lean_box(0);
v_isShared_5186_ = v_isSharedCheck_5207_;
goto v_resetjp_5184_;
}
v_resetjp_5184_:
{
if (lean_obj_tag(v_fst_5183_) == 0)
{
lean_object* v___x_5187_; lean_object* v___x_5188_; lean_object* v___x_5190_; 
lean_del_object(v___x_5181_);
v___x_5187_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_5188_ = l_Lean_MessageData_ofName(v___x_5174_);
lean_inc_ref(v___x_5188_);
if (v_isShared_5186_ == 0)
{
lean_ctor_set_tag(v___x_5185_, 7);
lean_ctor_set(v___x_5185_, 1, v___x_5188_);
lean_ctor_set(v___x_5185_, 0, v___x_5187_);
v___x_5190_ = v___x_5185_;
goto v_reusejp_5189_;
}
else
{
lean_object* v_reuseFailAlloc_5202_; 
v_reuseFailAlloc_5202_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5202_, 0, v___x_5187_);
lean_ctor_set(v_reuseFailAlloc_5202_, 1, v___x_5188_);
v___x_5190_ = v_reuseFailAlloc_5202_;
goto v_reusejp_5189_;
}
v_reusejp_5189_:
{
lean_object* v___x_5191_; lean_object* v___x_5192_; lean_object* v___x_5193_; lean_object* v___x_5194_; lean_object* v___x_5195_; lean_object* v___x_5196_; lean_object* v___x_5197_; lean_object* v___x_5198_; lean_object* v___x_5199_; lean_object* v___x_5200_; lean_object* v___x_5201_; 
v___x_5191_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_5192_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5192_, 0, v___x_5190_);
lean_ctor_set(v___x_5192_, 1, v___x_5191_);
v___x_5193_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_5194_ = l_Lean_indentD(v___x_5193_);
v___x_5195_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5195_, 0, v___x_5192_);
lean_ctor_set(v___x_5195_, 1, v___x_5194_);
v___x_5196_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_5197_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5197_, 0, v___x_5195_);
lean_ctor_set(v___x_5197_, 1, v___x_5196_);
v___x_5198_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5198_, 0, v___x_5197_);
lean_ctor_set(v___x_5198_, 1, v___x_5188_);
v___x_5199_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_5200_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5200_, 0, v___x_5198_);
lean_ctor_set(v___x_5200_, 1, v___x_5199_);
v___x_5201_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_5200_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_5201_;
}
}
else
{
lean_object* v_val_5203_; lean_object* v___x_5205_; 
lean_del_object(v___x_5185_);
lean_dec(v___x_5174_);
lean_dec(v_stx_3056_);
v_val_5203_ = lean_ctor_get(v_fst_5183_, 0);
lean_inc(v_val_5203_);
lean_dec_ref_known(v_fst_5183_, 1);
if (v_isShared_5182_ == 0)
{
lean_ctor_set(v___x_5181_, 0, v_val_5203_);
v___x_5205_ = v___x_5181_;
goto v_reusejp_5204_;
}
else
{
lean_object* v_reuseFailAlloc_5206_; 
v_reuseFailAlloc_5206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5206_, 0, v_val_5203_);
v___x_5205_ = v_reuseFailAlloc_5206_;
goto v_reusejp_5204_;
}
v_reusejp_5204_:
{
return v___x_5205_;
}
}
}
}
}
else
{
lean_object* v_a_5210_; lean_object* v___x_5212_; uint8_t v_isShared_5213_; uint8_t v_isSharedCheck_5217_; 
lean_dec(v___x_5174_);
lean_dec(v_stx_3056_);
v_a_5210_ = lean_ctor_get(v___x_5178_, 0);
v_isSharedCheck_5217_ = !lean_is_exclusive(v___x_5178_);
if (v_isSharedCheck_5217_ == 0)
{
v___x_5212_ = v___x_5178_;
v_isShared_5213_ = v_isSharedCheck_5217_;
goto v_resetjp_5211_;
}
else
{
lean_inc(v_a_5210_);
lean_dec(v___x_5178_);
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
else
{
v___y_3110_ = v_a_3057_;
v___y_3111_ = v_a_3058_;
v___y_3112_ = v_a_3059_;
v___y_3113_ = v_a_3060_;
v___y_3114_ = v_a_3061_;
v___y_3115_ = v_a_3062_;
goto v___jp_3109_;
}
}
else
{
lean_dec(v___x_5169_);
v___y_3110_ = v_a_3057_;
v___y_3111_ = v_a_3058_;
v___y_3112_ = v_a_3059_;
v___y_3113_ = v_a_3060_;
v___y_3114_ = v_a_3061_;
v___y_3115_ = v_a_3062_;
goto v___jp_3109_;
}
}
}
else
{
lean_object* v___x_5218_; lean_object* v___x_5219_; lean_object* v___x_5220_; uint8_t v___x_5221_; 
lean_del_object(v___x_3093_);
v___x_5218_ = lean_unsigned_to_nat(1u);
v___x_5219_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_5218_);
v___x_5220_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72));
lean_inc(v___x_5219_);
v___x_5221_ = l_Lean_Syntax_isOfKind(v___x_5219_, v___x_5220_);
if (v___x_5221_ == 0)
{
lean_object* v___x_5222_; lean_object* v_env_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; 
lean_dec(v___x_5219_);
v___x_5222_ = lean_st_ref_get(v_a_3062_);
v_env_5223_ = lean_ctor_get(v___x_5222_, 0);
lean_inc_ref(v_env_5223_);
lean_dec(v___x_5222_);
lean_inc_n(v_stx_3056_, 2);
v___x_5224_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_5225_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_5226_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_5225_, v_env_5223_, v___x_5224_);
v___x_5227_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_5228_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_5226_, v___x_5227_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_5226_);
if (lean_obj_tag(v___x_5228_) == 0)
{
lean_object* v_a_5229_; lean_object* v___x_5231_; uint8_t v_isShared_5232_; uint8_t v_isSharedCheck_5259_; 
v_a_5229_ = lean_ctor_get(v___x_5228_, 0);
v_isSharedCheck_5259_ = !lean_is_exclusive(v___x_5228_);
if (v_isSharedCheck_5259_ == 0)
{
v___x_5231_ = v___x_5228_;
v_isShared_5232_ = v_isSharedCheck_5259_;
goto v_resetjp_5230_;
}
else
{
lean_inc(v_a_5229_);
lean_dec(v___x_5228_);
v___x_5231_ = lean_box(0);
v_isShared_5232_ = v_isSharedCheck_5259_;
goto v_resetjp_5230_;
}
v_resetjp_5230_:
{
lean_object* v_fst_5233_; lean_object* v___x_5235_; uint8_t v_isShared_5236_; uint8_t v_isSharedCheck_5257_; 
v_fst_5233_ = lean_ctor_get(v_a_5229_, 0);
v_isSharedCheck_5257_ = !lean_is_exclusive(v_a_5229_);
if (v_isSharedCheck_5257_ == 0)
{
lean_object* v_unused_5258_; 
v_unused_5258_ = lean_ctor_get(v_a_5229_, 1);
lean_dec(v_unused_5258_);
v___x_5235_ = v_a_5229_;
v_isShared_5236_ = v_isSharedCheck_5257_;
goto v_resetjp_5234_;
}
else
{
lean_inc(v_fst_5233_);
lean_dec(v_a_5229_);
v___x_5235_ = lean_box(0);
v_isShared_5236_ = v_isSharedCheck_5257_;
goto v_resetjp_5234_;
}
v_resetjp_5234_:
{
if (lean_obj_tag(v_fst_5233_) == 0)
{
lean_object* v___x_5237_; lean_object* v___x_5238_; lean_object* v___x_5240_; 
lean_del_object(v___x_5231_);
v___x_5237_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_5238_ = l_Lean_MessageData_ofName(v___x_5224_);
lean_inc_ref(v___x_5238_);
if (v_isShared_5236_ == 0)
{
lean_ctor_set_tag(v___x_5235_, 7);
lean_ctor_set(v___x_5235_, 1, v___x_5238_);
lean_ctor_set(v___x_5235_, 0, v___x_5237_);
v___x_5240_ = v___x_5235_;
goto v_reusejp_5239_;
}
else
{
lean_object* v_reuseFailAlloc_5252_; 
v_reuseFailAlloc_5252_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5252_, 0, v___x_5237_);
lean_ctor_set(v_reuseFailAlloc_5252_, 1, v___x_5238_);
v___x_5240_ = v_reuseFailAlloc_5252_;
goto v_reusejp_5239_;
}
v_reusejp_5239_:
{
lean_object* v___x_5241_; lean_object* v___x_5242_; lean_object* v___x_5243_; lean_object* v___x_5244_; lean_object* v___x_5245_; lean_object* v___x_5246_; lean_object* v___x_5247_; lean_object* v___x_5248_; lean_object* v___x_5249_; lean_object* v___x_5250_; lean_object* v___x_5251_; 
v___x_5241_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_5242_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5242_, 0, v___x_5240_);
lean_ctor_set(v___x_5242_, 1, v___x_5241_);
v___x_5243_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_5244_ = l_Lean_indentD(v___x_5243_);
v___x_5245_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5245_, 0, v___x_5242_);
lean_ctor_set(v___x_5245_, 1, v___x_5244_);
v___x_5246_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_5247_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5247_, 0, v___x_5245_);
lean_ctor_set(v___x_5247_, 1, v___x_5246_);
v___x_5248_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5248_, 0, v___x_5247_);
lean_ctor_set(v___x_5248_, 1, v___x_5238_);
v___x_5249_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_5250_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5250_, 0, v___x_5248_);
lean_ctor_set(v___x_5250_, 1, v___x_5249_);
v___x_5251_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_5250_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_5251_;
}
}
else
{
lean_object* v_val_5253_; lean_object* v___x_5255_; 
lean_del_object(v___x_5235_);
lean_dec(v___x_5224_);
lean_dec(v_stx_3056_);
v_val_5253_ = lean_ctor_get(v_fst_5233_, 0);
lean_inc(v_val_5253_);
lean_dec_ref_known(v_fst_5233_, 1);
if (v_isShared_5232_ == 0)
{
lean_ctor_set(v___x_5231_, 0, v_val_5253_);
v___x_5255_ = v___x_5231_;
goto v_reusejp_5254_;
}
else
{
lean_object* v_reuseFailAlloc_5256_; 
v_reuseFailAlloc_5256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5256_, 0, v_val_5253_);
v___x_5255_ = v_reuseFailAlloc_5256_;
goto v_reusejp_5254_;
}
v_reusejp_5254_:
{
return v___x_5255_;
}
}
}
}
}
else
{
lean_object* v_a_5260_; lean_object* v___x_5262_; uint8_t v_isShared_5263_; uint8_t v_isSharedCheck_5267_; 
lean_dec(v___x_5224_);
lean_dec(v_stx_3056_);
v_a_5260_ = lean_ctor_get(v___x_5228_, 0);
v_isSharedCheck_5267_ = !lean_is_exclusive(v___x_5228_);
if (v_isSharedCheck_5267_ == 0)
{
v___x_5262_ = v___x_5228_;
v_isShared_5263_ = v_isSharedCheck_5267_;
goto v_resetjp_5261_;
}
else
{
lean_inc(v_a_5260_);
lean_dec(v___x_5228_);
v___x_5262_ = lean_box(0);
v_isShared_5263_ = v_isSharedCheck_5267_;
goto v_resetjp_5261_;
}
v_resetjp_5261_:
{
lean_object* v___x_5265_; 
if (v_isShared_5263_ == 0)
{
v___x_5265_ = v___x_5262_;
goto v_reusejp_5264_;
}
else
{
lean_object* v_reuseFailAlloc_5266_; 
v_reuseFailAlloc_5266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5266_, 0, v_a_5260_);
v___x_5265_ = v_reuseFailAlloc_5266_;
goto v_reusejp_5264_;
}
v_reusejp_5264_:
{
return v___x_5265_;
}
}
}
}
else
{
lean_object* v___x_5268_; lean_object* v___x_5269_; lean_object* v___x_5270_; 
v___x_5268_ = lean_unsigned_to_nat(2u);
v___x_5269_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_5268_);
lean_dec(v_stx_3056_);
v___x_5270_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_5269_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
if (lean_obj_tag(v___x_5270_) == 0)
{
lean_object* v_a_5271_; lean_object* v___x_5272_; 
v_a_5271_ = lean_ctor_get(v___x_5270_, 0);
lean_inc(v_a_5271_);
v___x_5272_ = l_Lean_Parser_Term_getDoConfigLabel_x3f(v___x_5219_);
lean_dec(v___x_5219_);
if (lean_obj_tag(v___x_5272_) == 0)
{
lean_dec(v_a_5271_);
return v___x_5270_;
}
else
{
lean_object* v___x_5274_; uint8_t v_isShared_5275_; uint8_t v_isSharedCheck_5301_; 
v_isSharedCheck_5301_ = !lean_is_exclusive(v___x_5270_);
if (v_isSharedCheck_5301_ == 0)
{
lean_object* v_unused_5302_; 
v_unused_5302_ = lean_ctor_get(v___x_5270_, 0);
lean_dec(v_unused_5302_);
v___x_5274_ = v___x_5270_;
v_isShared_5275_ = v_isSharedCheck_5301_;
goto v_resetjp_5273_;
}
else
{
lean_dec(v___x_5270_);
v___x_5274_ = lean_box(0);
v_isShared_5275_ = v_isSharedCheck_5301_;
goto v_resetjp_5273_;
}
v_resetjp_5273_:
{
lean_object* v_val_5276_; lean_object* v_breaks_5277_; lean_object* v_continues_5278_; lean_object* v_returns_5279_; lean_object* v_numRegularExits_5280_; uint8_t v_noFallthrough_5281_; lean_object* v_reassigns_5282_; lean_object* v___x_5284_; uint8_t v_isShared_5285_; uint8_t v_isSharedCheck_5300_; 
v_val_5276_ = lean_ctor_get(v___x_5272_, 0);
lean_inc(v_val_5276_);
lean_dec_ref_known(v___x_5272_, 1);
v_breaks_5277_ = lean_ctor_get(v_a_5271_, 0);
v_continues_5278_ = lean_ctor_get(v_a_5271_, 1);
v_returns_5279_ = lean_ctor_get(v_a_5271_, 2);
v_numRegularExits_5280_ = lean_ctor_get(v_a_5271_, 3);
v_noFallthrough_5281_ = lean_ctor_get_uint8(v_a_5271_, sizeof(void*)*5);
v_reassigns_5282_ = lean_ctor_get(v_a_5271_, 4);
v_isSharedCheck_5300_ = !lean_is_exclusive(v_a_5271_);
if (v_isSharedCheck_5300_ == 0)
{
v___x_5284_ = v_a_5271_;
v_isShared_5285_ = v_isSharedCheck_5300_;
goto v_resetjp_5283_;
}
else
{
lean_inc(v_reassigns_5282_);
lean_inc(v_numRegularExits_5280_);
lean_inc(v_returns_5279_);
lean_inc(v_continues_5278_);
lean_inc(v_breaks_5277_);
lean_dec(v_a_5271_);
v___x_5284_ = lean_box(0);
v_isShared_5285_ = v_isSharedCheck_5300_;
goto v_resetjp_5283_;
}
v_resetjp_5283_:
{
lean_object* v___x_5286_; lean_object* v___x_5287_; lean_object* v___x_5288_; lean_object* v___x_5289_; lean_object* v___x_5290_; uint8_t v___y_5292_; 
v___x_5286_ = lean_unsigned_to_nat(0u);
v___x_5287_ = l_Lean_TSyntax_getId(v_val_5276_);
lean_dec(v_val_5276_);
v___x_5288_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_addReturnCounts_spec__0___redArg(v_returns_5279_, v___x_5287_, v___x_5286_);
v___x_5289_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(v___x_5287_, v_returns_5279_);
lean_dec(v___x_5287_);
v___x_5290_ = lean_nat_add(v_numRegularExits_5280_, v___x_5288_);
lean_dec(v_numRegularExits_5280_);
if (v_noFallthrough_5281_ == 0)
{
lean_dec(v___x_5288_);
v___y_5292_ = v_noFallthrough_5281_;
goto v___jp_5291_;
}
else
{
uint8_t v___x_5299_; 
v___x_5299_ = lean_nat_dec_eq(v___x_5288_, v___x_5286_);
lean_dec(v___x_5288_);
v___y_5292_ = v___x_5299_;
goto v___jp_5291_;
}
v___jp_5291_:
{
lean_object* v___x_5294_; 
if (v_isShared_5285_ == 0)
{
lean_ctor_set(v___x_5284_, 3, v___x_5290_);
lean_ctor_set(v___x_5284_, 2, v___x_5289_);
v___x_5294_ = v___x_5284_;
goto v_reusejp_5293_;
}
else
{
lean_object* v_reuseFailAlloc_5298_; 
v_reuseFailAlloc_5298_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_5298_, 0, v_breaks_5277_);
lean_ctor_set(v_reuseFailAlloc_5298_, 1, v_continues_5278_);
lean_ctor_set(v_reuseFailAlloc_5298_, 2, v___x_5289_);
lean_ctor_set(v_reuseFailAlloc_5298_, 3, v___x_5290_);
lean_ctor_set(v_reuseFailAlloc_5298_, 4, v_reassigns_5282_);
v___x_5294_ = v_reuseFailAlloc_5298_;
goto v_reusejp_5293_;
}
v_reusejp_5293_:
{
lean_object* v___x_5296_; 
lean_ctor_set_uint8(v___x_5294_, sizeof(void*)*5, v___y_5292_);
if (v_isShared_5275_ == 0)
{
lean_ctor_set(v___x_5274_, 0, v___x_5294_);
v___x_5296_ = v___x_5274_;
goto v_reusejp_5295_;
}
else
{
lean_object* v_reuseFailAlloc_5297_; 
v_reuseFailAlloc_5297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5297_, 0, v___x_5294_);
v___x_5296_ = v_reuseFailAlloc_5297_;
goto v_reusejp_5295_;
}
v_reusejp_5295_:
{
return v___x_5296_;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_5219_);
return v___x_5270_;
}
}
}
}
else
{
lean_object* v___x_5303_; lean_object* v___x_5304_; lean_object* v___x_5305_; lean_object* v___x_5306_; lean_object* v___x_5307_; 
lean_del_object(v___x_3093_);
lean_dec(v_stx_3056_);
v___x_5303_ = l_Lean_NameSet_empty;
v___x_5304_ = lean_box(1);
v___x_5305_ = lean_unsigned_to_nat(1u);
v___x_5306_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_5306_, 0, v___x_5303_);
lean_ctor_set(v___x_5306_, 1, v___x_5303_);
lean_ctor_set(v___x_5306_, 2, v___x_5304_);
lean_ctor_set(v___x_5306_, 3, v___x_5305_);
lean_ctor_set(v___x_5306_, 4, v___x_5303_);
lean_ctor_set_uint8(v___x_5306_, sizeof(void*)*5, v___x_3297_);
v___x_5307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5307_, 0, v___x_5306_);
return v___x_5307_;
}
}
else
{
lean_object* v___x_5308_; lean_object* v___x_5309_; lean_object* v___x_5310_; uint8_t v___x_5311_; 
lean_del_object(v___x_3093_);
v___x_5308_ = lean_unsigned_to_nat(1u);
v___x_5309_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_5308_);
v___x_5310_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72));
lean_inc(v___x_5309_);
v___x_5311_ = l_Lean_Syntax_isOfKind(v___x_5309_, v___x_5310_);
if (v___x_5311_ == 0)
{
lean_object* v___x_5312_; lean_object* v_env_5313_; lean_object* v___x_5314_; lean_object* v___x_5315_; lean_object* v___x_5316_; lean_object* v___x_5317_; lean_object* v___x_5318_; 
lean_dec(v___x_5309_);
v___x_5312_ = lean_st_ref_get(v_a_3062_);
v_env_5313_ = lean_ctor_get(v___x_5312_, 0);
lean_inc_ref(v_env_5313_);
lean_dec(v___x_5312_);
lean_inc_n(v_stx_3056_, 2);
v___x_5314_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_5315_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_5316_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_5315_, v_env_5313_, v___x_5314_);
v___x_5317_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_5318_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_5316_, v___x_5317_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_5316_);
if (lean_obj_tag(v___x_5318_) == 0)
{
lean_object* v_a_5319_; lean_object* v___x_5321_; uint8_t v_isShared_5322_; uint8_t v_isSharedCheck_5349_; 
v_a_5319_ = lean_ctor_get(v___x_5318_, 0);
v_isSharedCheck_5349_ = !lean_is_exclusive(v___x_5318_);
if (v_isSharedCheck_5349_ == 0)
{
v___x_5321_ = v___x_5318_;
v_isShared_5322_ = v_isSharedCheck_5349_;
goto v_resetjp_5320_;
}
else
{
lean_inc(v_a_5319_);
lean_dec(v___x_5318_);
v___x_5321_ = lean_box(0);
v_isShared_5322_ = v_isSharedCheck_5349_;
goto v_resetjp_5320_;
}
v_resetjp_5320_:
{
lean_object* v_fst_5323_; lean_object* v___x_5325_; uint8_t v_isShared_5326_; uint8_t v_isSharedCheck_5347_; 
v_fst_5323_ = lean_ctor_get(v_a_5319_, 0);
v_isSharedCheck_5347_ = !lean_is_exclusive(v_a_5319_);
if (v_isSharedCheck_5347_ == 0)
{
lean_object* v_unused_5348_; 
v_unused_5348_ = lean_ctor_get(v_a_5319_, 1);
lean_dec(v_unused_5348_);
v___x_5325_ = v_a_5319_;
v_isShared_5326_ = v_isSharedCheck_5347_;
goto v_resetjp_5324_;
}
else
{
lean_inc(v_fst_5323_);
lean_dec(v_a_5319_);
v___x_5325_ = lean_box(0);
v_isShared_5326_ = v_isSharedCheck_5347_;
goto v_resetjp_5324_;
}
v_resetjp_5324_:
{
if (lean_obj_tag(v_fst_5323_) == 0)
{
lean_object* v___x_5327_; lean_object* v___x_5328_; lean_object* v___x_5330_; 
lean_del_object(v___x_5321_);
v___x_5327_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_5328_ = l_Lean_MessageData_ofName(v___x_5314_);
lean_inc_ref(v___x_5328_);
if (v_isShared_5326_ == 0)
{
lean_ctor_set_tag(v___x_5325_, 7);
lean_ctor_set(v___x_5325_, 1, v___x_5328_);
lean_ctor_set(v___x_5325_, 0, v___x_5327_);
v___x_5330_ = v___x_5325_;
goto v_reusejp_5329_;
}
else
{
lean_object* v_reuseFailAlloc_5342_; 
v_reuseFailAlloc_5342_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5342_, 0, v___x_5327_);
lean_ctor_set(v_reuseFailAlloc_5342_, 1, v___x_5328_);
v___x_5330_ = v_reuseFailAlloc_5342_;
goto v_reusejp_5329_;
}
v_reusejp_5329_:
{
lean_object* v___x_5331_; lean_object* v___x_5332_; lean_object* v___x_5333_; lean_object* v___x_5334_; lean_object* v___x_5335_; lean_object* v___x_5336_; lean_object* v___x_5337_; lean_object* v___x_5338_; lean_object* v___x_5339_; lean_object* v___x_5340_; lean_object* v___x_5341_; 
v___x_5331_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_5332_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5332_, 0, v___x_5330_);
lean_ctor_set(v___x_5332_, 1, v___x_5331_);
v___x_5333_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_5334_ = l_Lean_indentD(v___x_5333_);
v___x_5335_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5335_, 0, v___x_5332_);
lean_ctor_set(v___x_5335_, 1, v___x_5334_);
v___x_5336_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_5337_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5337_, 0, v___x_5335_);
lean_ctor_set(v___x_5337_, 1, v___x_5336_);
v___x_5338_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5338_, 0, v___x_5337_);
lean_ctor_set(v___x_5338_, 1, v___x_5328_);
v___x_5339_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_5340_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5340_, 0, v___x_5338_);
lean_ctor_set(v___x_5340_, 1, v___x_5339_);
v___x_5341_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_5340_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_5341_;
}
}
else
{
lean_object* v_val_5343_; lean_object* v___x_5345_; 
lean_del_object(v___x_5325_);
lean_dec(v___x_5314_);
lean_dec(v_stx_3056_);
v_val_5343_ = lean_ctor_get(v_fst_5323_, 0);
lean_inc(v_val_5343_);
lean_dec_ref_known(v_fst_5323_, 1);
if (v_isShared_5322_ == 0)
{
lean_ctor_set(v___x_5321_, 0, v_val_5343_);
v___x_5345_ = v___x_5321_;
goto v_reusejp_5344_;
}
else
{
lean_object* v_reuseFailAlloc_5346_; 
v_reuseFailAlloc_5346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5346_, 0, v_val_5343_);
v___x_5345_ = v_reuseFailAlloc_5346_;
goto v_reusejp_5344_;
}
v_reusejp_5344_:
{
return v___x_5345_;
}
}
}
}
}
else
{
lean_object* v_a_5350_; lean_object* v___x_5352_; uint8_t v_isShared_5353_; uint8_t v_isSharedCheck_5357_; 
lean_dec(v___x_5314_);
lean_dec(v_stx_3056_);
v_a_5350_ = lean_ctor_get(v___x_5318_, 0);
v_isSharedCheck_5357_ = !lean_is_exclusive(v___x_5318_);
if (v_isSharedCheck_5357_ == 0)
{
v___x_5352_ = v___x_5318_;
v_isShared_5353_ = v_isSharedCheck_5357_;
goto v_resetjp_5351_;
}
else
{
lean_inc(v_a_5350_);
lean_dec(v___x_5318_);
v___x_5352_ = lean_box(0);
v_isShared_5353_ = v_isSharedCheck_5357_;
goto v_resetjp_5351_;
}
v_resetjp_5351_:
{
lean_object* v___x_5355_; 
if (v_isShared_5353_ == 0)
{
v___x_5355_ = v___x_5352_;
goto v_reusejp_5354_;
}
else
{
lean_object* v_reuseFailAlloc_5356_; 
v_reuseFailAlloc_5356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5356_, 0, v_a_5350_);
v___x_5355_ = v_reuseFailAlloc_5356_;
goto v_reusejp_5354_;
}
v_reusejp_5354_:
{
return v___x_5355_;
}
}
}
}
else
{
lean_object* v___x_5358_; lean_object* v___x_5366_; lean_object* v___x_5367_; uint8_t v___x_5368_; 
v___x_5358_ = lean_unsigned_to_nat(0u);
v___x_5366_ = lean_unsigned_to_nat(2u);
v___x_5367_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_5366_);
v___x_5368_ = l_Lean_Syntax_isNone(v___x_5367_);
if (v___x_5368_ == 0)
{
uint8_t v___x_5369_; 
v___x_5369_ = l_Lean_Syntax_matchesNull(v___x_5367_, v___x_5308_);
if (v___x_5369_ == 0)
{
lean_object* v___x_5370_; lean_object* v_env_5371_; lean_object* v___x_5372_; lean_object* v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; 
lean_dec(v___x_5309_);
v___x_5370_ = lean_st_ref_get(v_a_3062_);
v_env_5371_ = lean_ctor_get(v___x_5370_, 0);
lean_inc_ref(v_env_5371_);
lean_dec(v___x_5370_);
lean_inc_n(v_stx_3056_, 2);
v___x_5372_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_5373_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_5374_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_5373_, v_env_5371_, v___x_5372_);
v___x_5375_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_5376_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_5374_, v___x_5375_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_5374_);
if (lean_obj_tag(v___x_5376_) == 0)
{
lean_object* v_a_5377_; lean_object* v___x_5379_; uint8_t v_isShared_5380_; uint8_t v_isSharedCheck_5407_; 
v_a_5377_ = lean_ctor_get(v___x_5376_, 0);
v_isSharedCheck_5407_ = !lean_is_exclusive(v___x_5376_);
if (v_isSharedCheck_5407_ == 0)
{
v___x_5379_ = v___x_5376_;
v_isShared_5380_ = v_isSharedCheck_5407_;
goto v_resetjp_5378_;
}
else
{
lean_inc(v_a_5377_);
lean_dec(v___x_5376_);
v___x_5379_ = lean_box(0);
v_isShared_5380_ = v_isSharedCheck_5407_;
goto v_resetjp_5378_;
}
v_resetjp_5378_:
{
lean_object* v_fst_5381_; lean_object* v___x_5383_; uint8_t v_isShared_5384_; uint8_t v_isSharedCheck_5405_; 
v_fst_5381_ = lean_ctor_get(v_a_5377_, 0);
v_isSharedCheck_5405_ = !lean_is_exclusive(v_a_5377_);
if (v_isSharedCheck_5405_ == 0)
{
lean_object* v_unused_5406_; 
v_unused_5406_ = lean_ctor_get(v_a_5377_, 1);
lean_dec(v_unused_5406_);
v___x_5383_ = v_a_5377_;
v_isShared_5384_ = v_isSharedCheck_5405_;
goto v_resetjp_5382_;
}
else
{
lean_inc(v_fst_5381_);
lean_dec(v_a_5377_);
v___x_5383_ = lean_box(0);
v_isShared_5384_ = v_isSharedCheck_5405_;
goto v_resetjp_5382_;
}
v_resetjp_5382_:
{
if (lean_obj_tag(v_fst_5381_) == 0)
{
lean_object* v___x_5385_; lean_object* v___x_5386_; lean_object* v___x_5388_; 
lean_del_object(v___x_5379_);
v___x_5385_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_5386_ = l_Lean_MessageData_ofName(v___x_5372_);
lean_inc_ref(v___x_5386_);
if (v_isShared_5384_ == 0)
{
lean_ctor_set_tag(v___x_5383_, 7);
lean_ctor_set(v___x_5383_, 1, v___x_5386_);
lean_ctor_set(v___x_5383_, 0, v___x_5385_);
v___x_5388_ = v___x_5383_;
goto v_reusejp_5387_;
}
else
{
lean_object* v_reuseFailAlloc_5400_; 
v_reuseFailAlloc_5400_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5400_, 0, v___x_5385_);
lean_ctor_set(v_reuseFailAlloc_5400_, 1, v___x_5386_);
v___x_5388_ = v_reuseFailAlloc_5400_;
goto v_reusejp_5387_;
}
v_reusejp_5387_:
{
lean_object* v___x_5389_; lean_object* v___x_5390_; lean_object* v___x_5391_; lean_object* v___x_5392_; lean_object* v___x_5393_; lean_object* v___x_5394_; lean_object* v___x_5395_; lean_object* v___x_5396_; lean_object* v___x_5397_; lean_object* v___x_5398_; lean_object* v___x_5399_; 
v___x_5389_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_5390_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5390_, 0, v___x_5388_);
lean_ctor_set(v___x_5390_, 1, v___x_5389_);
v___x_5391_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_5392_ = l_Lean_indentD(v___x_5391_);
v___x_5393_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5393_, 0, v___x_5390_);
lean_ctor_set(v___x_5393_, 1, v___x_5392_);
v___x_5394_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_5395_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5395_, 0, v___x_5393_);
lean_ctor_set(v___x_5395_, 1, v___x_5394_);
v___x_5396_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5396_, 0, v___x_5395_);
lean_ctor_set(v___x_5396_, 1, v___x_5386_);
v___x_5397_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_5398_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5398_, 0, v___x_5396_);
lean_ctor_set(v___x_5398_, 1, v___x_5397_);
v___x_5399_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_5398_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_5399_;
}
}
else
{
lean_object* v_val_5401_; lean_object* v___x_5403_; 
lean_del_object(v___x_5383_);
lean_dec(v___x_5372_);
lean_dec(v_stx_3056_);
v_val_5401_ = lean_ctor_get(v_fst_5381_, 0);
lean_inc(v_val_5401_);
lean_dec_ref_known(v_fst_5381_, 1);
if (v_isShared_5380_ == 0)
{
lean_ctor_set(v___x_5379_, 0, v_val_5401_);
v___x_5403_ = v___x_5379_;
goto v_reusejp_5402_;
}
else
{
lean_object* v_reuseFailAlloc_5404_; 
v_reuseFailAlloc_5404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5404_, 0, v_val_5401_);
v___x_5403_ = v_reuseFailAlloc_5404_;
goto v_reusejp_5402_;
}
v_reusejp_5402_:
{
return v___x_5403_;
}
}
}
}
}
else
{
lean_object* v_a_5408_; lean_object* v___x_5410_; uint8_t v_isShared_5411_; uint8_t v_isSharedCheck_5415_; 
lean_dec(v___x_5372_);
lean_dec(v_stx_3056_);
v_a_5408_ = lean_ctor_get(v___x_5376_, 0);
v_isSharedCheck_5415_ = !lean_is_exclusive(v___x_5376_);
if (v_isSharedCheck_5415_ == 0)
{
v___x_5410_ = v___x_5376_;
v_isShared_5411_ = v_isSharedCheck_5415_;
goto v_resetjp_5409_;
}
else
{
lean_inc(v_a_5408_);
lean_dec(v___x_5376_);
v___x_5410_ = lean_box(0);
v_isShared_5411_ = v_isSharedCheck_5415_;
goto v_resetjp_5409_;
}
v_resetjp_5409_:
{
lean_object* v___x_5413_; 
if (v_isShared_5411_ == 0)
{
v___x_5413_ = v___x_5410_;
goto v_reusejp_5412_;
}
else
{
lean_object* v_reuseFailAlloc_5414_; 
v_reuseFailAlloc_5414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5414_, 0, v_a_5408_);
v___x_5413_ = v_reuseFailAlloc_5414_;
goto v_reusejp_5412_;
}
v_reusejp_5412_:
{
return v___x_5413_;
}
}
}
}
else
{
lean_dec(v_stx_3056_);
goto v___jp_5359_;
}
}
else
{
lean_dec(v___x_5367_);
lean_dec(v_stx_3056_);
goto v___jp_5359_;
}
v___jp_5359_:
{
lean_object* v___x_5360_; lean_object* v___x_5361_; lean_object* v___x_5362_; lean_object* v___x_5363_; lean_object* v___x_5364_; lean_object* v___x_5365_; 
v___x_5360_ = l_Lean_NameSet_empty;
v___x_5361_ = lean_box(1);
v___x_5362_ = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_InferControlInfo_jumpLabel(v___x_5309_);
lean_dec(v___x_5309_);
v___x_5363_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_5362_, v___x_5308_, v___x_5361_);
v___x_5364_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_5364_, 0, v___x_5360_);
lean_ctor_set(v___x_5364_, 1, v___x_5360_);
lean_ctor_set(v___x_5364_, 2, v___x_5363_);
lean_ctor_set(v___x_5364_, 3, v___x_5358_);
lean_ctor_set(v___x_5364_, 4, v___x_5360_);
lean_ctor_set_uint8(v___x_5364_, sizeof(void*)*5, v___x_3293_);
v___x_5365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5365_, 0, v___x_5364_);
return v___x_5365_;
}
}
}
}
else
{
lean_object* v___x_5416_; lean_object* v___x_5417_; lean_object* v___x_5418_; uint8_t v___x_5419_; 
lean_del_object(v___x_3093_);
v___x_5416_ = lean_unsigned_to_nat(1u);
v___x_5417_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_5416_);
v___x_5418_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72));
lean_inc(v___x_5417_);
v___x_5419_ = l_Lean_Syntax_isOfKind(v___x_5417_, v___x_5418_);
if (v___x_5419_ == 0)
{
lean_object* v___x_5420_; lean_object* v_env_5421_; lean_object* v___x_5422_; lean_object* v___x_5423_; lean_object* v___x_5424_; lean_object* v___x_5425_; lean_object* v___x_5426_; 
lean_dec(v___x_5417_);
v___x_5420_ = lean_st_ref_get(v_a_3062_);
v_env_5421_ = lean_ctor_get(v___x_5420_, 0);
lean_inc_ref(v_env_5421_);
lean_dec(v___x_5420_);
lean_inc_n(v_stx_3056_, 2);
v___x_5422_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_5423_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_5424_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_5423_, v_env_5421_, v___x_5422_);
v___x_5425_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_5426_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_5424_, v___x_5425_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_5424_);
if (lean_obj_tag(v___x_5426_) == 0)
{
lean_object* v_a_5427_; lean_object* v___x_5429_; uint8_t v_isShared_5430_; uint8_t v_isSharedCheck_5457_; 
v_a_5427_ = lean_ctor_get(v___x_5426_, 0);
v_isSharedCheck_5457_ = !lean_is_exclusive(v___x_5426_);
if (v_isSharedCheck_5457_ == 0)
{
v___x_5429_ = v___x_5426_;
v_isShared_5430_ = v_isSharedCheck_5457_;
goto v_resetjp_5428_;
}
else
{
lean_inc(v_a_5427_);
lean_dec(v___x_5426_);
v___x_5429_ = lean_box(0);
v_isShared_5430_ = v_isSharedCheck_5457_;
goto v_resetjp_5428_;
}
v_resetjp_5428_:
{
lean_object* v_fst_5431_; lean_object* v___x_5433_; uint8_t v_isShared_5434_; uint8_t v_isSharedCheck_5455_; 
v_fst_5431_ = lean_ctor_get(v_a_5427_, 0);
v_isSharedCheck_5455_ = !lean_is_exclusive(v_a_5427_);
if (v_isSharedCheck_5455_ == 0)
{
lean_object* v_unused_5456_; 
v_unused_5456_ = lean_ctor_get(v_a_5427_, 1);
lean_dec(v_unused_5456_);
v___x_5433_ = v_a_5427_;
v_isShared_5434_ = v_isSharedCheck_5455_;
goto v_resetjp_5432_;
}
else
{
lean_inc(v_fst_5431_);
lean_dec(v_a_5427_);
v___x_5433_ = lean_box(0);
v_isShared_5434_ = v_isSharedCheck_5455_;
goto v_resetjp_5432_;
}
v_resetjp_5432_:
{
if (lean_obj_tag(v_fst_5431_) == 0)
{
lean_object* v___x_5435_; lean_object* v___x_5436_; lean_object* v___x_5438_; 
lean_del_object(v___x_5429_);
v___x_5435_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_5436_ = l_Lean_MessageData_ofName(v___x_5422_);
lean_inc_ref(v___x_5436_);
if (v_isShared_5434_ == 0)
{
lean_ctor_set_tag(v___x_5433_, 7);
lean_ctor_set(v___x_5433_, 1, v___x_5436_);
lean_ctor_set(v___x_5433_, 0, v___x_5435_);
v___x_5438_ = v___x_5433_;
goto v_reusejp_5437_;
}
else
{
lean_object* v_reuseFailAlloc_5450_; 
v_reuseFailAlloc_5450_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5450_, 0, v___x_5435_);
lean_ctor_set(v_reuseFailAlloc_5450_, 1, v___x_5436_);
v___x_5438_ = v_reuseFailAlloc_5450_;
goto v_reusejp_5437_;
}
v_reusejp_5437_:
{
lean_object* v___x_5439_; lean_object* v___x_5440_; lean_object* v___x_5441_; lean_object* v___x_5442_; lean_object* v___x_5443_; lean_object* v___x_5444_; lean_object* v___x_5445_; lean_object* v___x_5446_; lean_object* v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; 
v___x_5439_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_5440_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5440_, 0, v___x_5438_);
lean_ctor_set(v___x_5440_, 1, v___x_5439_);
v___x_5441_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_5442_ = l_Lean_indentD(v___x_5441_);
v___x_5443_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5443_, 0, v___x_5440_);
lean_ctor_set(v___x_5443_, 1, v___x_5442_);
v___x_5444_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_5445_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5445_, 0, v___x_5443_);
lean_ctor_set(v___x_5445_, 1, v___x_5444_);
v___x_5446_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5446_, 0, v___x_5445_);
lean_ctor_set(v___x_5446_, 1, v___x_5436_);
v___x_5447_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_5448_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5448_, 0, v___x_5446_);
lean_ctor_set(v___x_5448_, 1, v___x_5447_);
v___x_5449_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_5448_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_5449_;
}
}
else
{
lean_object* v_val_5451_; lean_object* v___x_5453_; 
lean_del_object(v___x_5433_);
lean_dec(v___x_5422_);
lean_dec(v_stx_3056_);
v_val_5451_ = lean_ctor_get(v_fst_5431_, 0);
lean_inc(v_val_5451_);
lean_dec_ref_known(v_fst_5431_, 1);
if (v_isShared_5430_ == 0)
{
lean_ctor_set(v___x_5429_, 0, v_val_5451_);
v___x_5453_ = v___x_5429_;
goto v_reusejp_5452_;
}
else
{
lean_object* v_reuseFailAlloc_5454_; 
v_reuseFailAlloc_5454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5454_, 0, v_val_5451_);
v___x_5453_ = v_reuseFailAlloc_5454_;
goto v_reusejp_5452_;
}
v_reusejp_5452_:
{
return v___x_5453_;
}
}
}
}
}
else
{
lean_object* v_a_5458_; lean_object* v___x_5460_; uint8_t v_isShared_5461_; uint8_t v_isSharedCheck_5465_; 
lean_dec(v___x_5422_);
lean_dec(v_stx_3056_);
v_a_5458_ = lean_ctor_get(v___x_5426_, 0);
v_isSharedCheck_5465_ = !lean_is_exclusive(v___x_5426_);
if (v_isSharedCheck_5465_ == 0)
{
v___x_5460_ = v___x_5426_;
v_isShared_5461_ = v_isSharedCheck_5465_;
goto v_resetjp_5459_;
}
else
{
lean_inc(v_a_5458_);
lean_dec(v___x_5426_);
v___x_5460_ = lean_box(0);
v_isShared_5461_ = v_isSharedCheck_5465_;
goto v_resetjp_5459_;
}
v_resetjp_5459_:
{
lean_object* v___x_5463_; 
if (v_isShared_5461_ == 0)
{
v___x_5463_ = v___x_5460_;
goto v_reusejp_5462_;
}
else
{
lean_object* v_reuseFailAlloc_5464_; 
v_reuseFailAlloc_5464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5464_, 0, v_a_5458_);
v___x_5463_ = v_reuseFailAlloc_5464_;
goto v_reusejp_5462_;
}
v_reusejp_5462_:
{
return v___x_5463_;
}
}
}
}
else
{
lean_object* v___x_5466_; lean_object* v___x_5467_; lean_object* v___x_5468_; lean_object* v___x_5469_; lean_object* v___x_5470_; lean_object* v___x_5471_; lean_object* v___x_5472_; 
lean_dec(v_stx_3056_);
v___x_5466_ = lean_unsigned_to_nat(0u);
v___x_5467_ = l_Lean_NameSet_empty;
v___x_5468_ = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_InferControlInfo_jumpLabel(v___x_5417_);
lean_dec(v___x_5417_);
v___x_5469_ = l_Lean_NameSet_insert(v___x_5467_, v___x_5468_);
v___x_5470_ = lean_box(1);
v___x_5471_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_5471_, 0, v___x_5467_);
lean_ctor_set(v___x_5471_, 1, v___x_5469_);
lean_ctor_set(v___x_5471_, 2, v___x_5470_);
lean_ctor_set(v___x_5471_, 3, v___x_5466_);
lean_ctor_set(v___x_5471_, 4, v___x_5467_);
lean_ctor_set_uint8(v___x_5471_, sizeof(void*)*5, v___x_3293_);
v___x_5472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5472_, 0, v___x_5471_);
return v___x_5472_;
}
}
}
else
{
lean_object* v___x_5473_; lean_object* v___x_5474_; lean_object* v___x_5475_; uint8_t v___x_5476_; 
lean_del_object(v___x_3093_);
v___x_5473_ = lean_unsigned_to_nat(1u);
v___x_5474_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_5473_);
v___x_5475_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72));
lean_inc(v___x_5474_);
v___x_5476_ = l_Lean_Syntax_isOfKind(v___x_5474_, v___x_5475_);
if (v___x_5476_ == 0)
{
lean_object* v___x_5477_; lean_object* v_env_5478_; lean_object* v___x_5479_; lean_object* v___x_5480_; lean_object* v___x_5481_; lean_object* v___x_5482_; lean_object* v___x_5483_; 
lean_dec(v___x_5474_);
v___x_5477_ = lean_st_ref_get(v_a_3062_);
v_env_5478_ = lean_ctor_get(v___x_5477_, 0);
lean_inc_ref(v_env_5478_);
lean_dec(v___x_5477_);
lean_inc_n(v_stx_3056_, 2);
v___x_5479_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_5480_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_5481_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_5480_, v_env_5478_, v___x_5479_);
v___x_5482_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_5483_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_5481_, v___x_5482_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
lean_dec(v___x_5481_);
if (lean_obj_tag(v___x_5483_) == 0)
{
lean_object* v_a_5484_; lean_object* v___x_5486_; uint8_t v_isShared_5487_; uint8_t v_isSharedCheck_5514_; 
v_a_5484_ = lean_ctor_get(v___x_5483_, 0);
v_isSharedCheck_5514_ = !lean_is_exclusive(v___x_5483_);
if (v_isSharedCheck_5514_ == 0)
{
v___x_5486_ = v___x_5483_;
v_isShared_5487_ = v_isSharedCheck_5514_;
goto v_resetjp_5485_;
}
else
{
lean_inc(v_a_5484_);
lean_dec(v___x_5483_);
v___x_5486_ = lean_box(0);
v_isShared_5487_ = v_isSharedCheck_5514_;
goto v_resetjp_5485_;
}
v_resetjp_5485_:
{
lean_object* v_fst_5488_; lean_object* v___x_5490_; uint8_t v_isShared_5491_; uint8_t v_isSharedCheck_5512_; 
v_fst_5488_ = lean_ctor_get(v_a_5484_, 0);
v_isSharedCheck_5512_ = !lean_is_exclusive(v_a_5484_);
if (v_isSharedCheck_5512_ == 0)
{
lean_object* v_unused_5513_; 
v_unused_5513_ = lean_ctor_get(v_a_5484_, 1);
lean_dec(v_unused_5513_);
v___x_5490_ = v_a_5484_;
v_isShared_5491_ = v_isSharedCheck_5512_;
goto v_resetjp_5489_;
}
else
{
lean_inc(v_fst_5488_);
lean_dec(v_a_5484_);
v___x_5490_ = lean_box(0);
v_isShared_5491_ = v_isSharedCheck_5512_;
goto v_resetjp_5489_;
}
v_resetjp_5489_:
{
if (lean_obj_tag(v_fst_5488_) == 0)
{
lean_object* v___x_5492_; lean_object* v___x_5493_; lean_object* v___x_5495_; 
lean_del_object(v___x_5486_);
v___x_5492_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_5493_ = l_Lean_MessageData_ofName(v___x_5479_);
lean_inc_ref(v___x_5493_);
if (v_isShared_5491_ == 0)
{
lean_ctor_set_tag(v___x_5490_, 7);
lean_ctor_set(v___x_5490_, 1, v___x_5493_);
lean_ctor_set(v___x_5490_, 0, v___x_5492_);
v___x_5495_ = v___x_5490_;
goto v_reusejp_5494_;
}
else
{
lean_object* v_reuseFailAlloc_5507_; 
v_reuseFailAlloc_5507_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5507_, 0, v___x_5492_);
lean_ctor_set(v_reuseFailAlloc_5507_, 1, v___x_5493_);
v___x_5495_ = v_reuseFailAlloc_5507_;
goto v_reusejp_5494_;
}
v_reusejp_5494_:
{
lean_object* v___x_5496_; lean_object* v___x_5497_; lean_object* v___x_5498_; lean_object* v___x_5499_; lean_object* v___x_5500_; lean_object* v___x_5501_; lean_object* v___x_5502_; lean_object* v___x_5503_; lean_object* v___x_5504_; lean_object* v___x_5505_; lean_object* v___x_5506_; 
v___x_5496_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_5497_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5497_, 0, v___x_5495_);
lean_ctor_set(v___x_5497_, 1, v___x_5496_);
v___x_5498_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_5499_ = l_Lean_indentD(v___x_5498_);
v___x_5500_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5500_, 0, v___x_5497_);
lean_ctor_set(v___x_5500_, 1, v___x_5499_);
v___x_5501_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_5502_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5502_, 0, v___x_5500_);
lean_ctor_set(v___x_5502_, 1, v___x_5501_);
v___x_5503_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5503_, 0, v___x_5502_);
lean_ctor_set(v___x_5503_, 1, v___x_5493_);
v___x_5504_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_5505_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5505_, 0, v___x_5503_);
lean_ctor_set(v___x_5505_, 1, v___x_5504_);
v___x_5506_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_5505_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_);
return v___x_5506_;
}
}
else
{
lean_object* v_val_5508_; lean_object* v___x_5510_; 
lean_del_object(v___x_5490_);
lean_dec(v___x_5479_);
lean_dec(v_stx_3056_);
v_val_5508_ = lean_ctor_get(v_fst_5488_, 0);
lean_inc(v_val_5508_);
lean_dec_ref_known(v_fst_5488_, 1);
if (v_isShared_5487_ == 0)
{
lean_ctor_set(v___x_5486_, 0, v_val_5508_);
v___x_5510_ = v___x_5486_;
goto v_reusejp_5509_;
}
else
{
lean_object* v_reuseFailAlloc_5511_; 
v_reuseFailAlloc_5511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5511_, 0, v_val_5508_);
v___x_5510_ = v_reuseFailAlloc_5511_;
goto v_reusejp_5509_;
}
v_reusejp_5509_:
{
return v___x_5510_;
}
}
}
}
}
else
{
lean_object* v_a_5515_; lean_object* v___x_5517_; uint8_t v_isShared_5518_; uint8_t v_isSharedCheck_5522_; 
lean_dec(v___x_5479_);
lean_dec(v_stx_3056_);
v_a_5515_ = lean_ctor_get(v___x_5483_, 0);
v_isSharedCheck_5522_ = !lean_is_exclusive(v___x_5483_);
if (v_isSharedCheck_5522_ == 0)
{
v___x_5517_ = v___x_5483_;
v_isShared_5518_ = v_isSharedCheck_5522_;
goto v_resetjp_5516_;
}
else
{
lean_inc(v_a_5515_);
lean_dec(v___x_5483_);
v___x_5517_ = lean_box(0);
v_isShared_5518_ = v_isSharedCheck_5522_;
goto v_resetjp_5516_;
}
v_resetjp_5516_:
{
lean_object* v___x_5520_; 
if (v_isShared_5518_ == 0)
{
v___x_5520_ = v___x_5517_;
goto v_reusejp_5519_;
}
else
{
lean_object* v_reuseFailAlloc_5521_; 
v_reuseFailAlloc_5521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5521_, 0, v_a_5515_);
v___x_5520_ = v_reuseFailAlloc_5521_;
goto v_reusejp_5519_;
}
v_reusejp_5519_:
{
return v___x_5520_;
}
}
}
}
else
{
lean_object* v___x_5523_; lean_object* v___x_5524_; lean_object* v___x_5525_; lean_object* v___x_5526_; lean_object* v___x_5527_; lean_object* v___x_5528_; lean_object* v___x_5529_; 
lean_dec(v_stx_3056_);
v___x_5523_ = lean_unsigned_to_nat(0u);
v___x_5524_ = l_Lean_NameSet_empty;
v___x_5525_ = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_InferControlInfo_jumpLabel(v___x_5474_);
lean_dec(v___x_5474_);
v___x_5526_ = l_Lean_NameSet_insert(v___x_5524_, v___x_5525_);
v___x_5527_ = lean_box(1);
v___x_5528_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_5528_, 0, v___x_5526_);
lean_ctor_set(v___x_5528_, 1, v___x_5524_);
lean_ctor_set(v___x_5528_, 2, v___x_5527_);
lean_ctor_set(v___x_5528_, 3, v___x_5523_);
lean_ctor_set(v___x_5528_, 4, v___x_5524_);
lean_ctor_set_uint8(v___x_5528_, sizeof(void*)*5, v___x_3293_);
v___x_5529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5529_, 0, v___x_5528_);
return v___x_5529_;
}
}
v___jp_3109_:
{
lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; uint8_t v___x_3119_; 
v___x_3116_ = lean_unsigned_to_nat(2u);
v___x_3117_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_3116_);
v___x_3118_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1));
v___x_3119_ = l_Lean_Syntax_isOfKind(v___x_3117_, v___x_3118_);
if (v___x_3119_ == 0)
{
lean_object* v___x_3120_; lean_object* v_env_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; 
lean_del_object(v___x_3093_);
v___x_3120_ = lean_st_ref_get(v___y_3115_);
v_env_3121_ = lean_ctor_get(v___x_3120_, 0);
lean_inc_ref(v_env_3121_);
lean_dec(v___x_3120_);
lean_inc_n(v_stx_3056_, 2);
v___x_3122_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_3123_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3124_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3123_, v_env_3121_, v___x_3122_);
v___x_3125_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_3126_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_3124_, v___x_3125_, v___y_3110_, v___y_3111_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_);
lean_dec(v___x_3124_);
if (lean_obj_tag(v___x_3126_) == 0)
{
lean_object* v_a_3127_; lean_object* v___x_3129_; uint8_t v_isShared_3130_; uint8_t v_isSharedCheck_3157_; 
v_a_3127_ = lean_ctor_get(v___x_3126_, 0);
v_isSharedCheck_3157_ = !lean_is_exclusive(v___x_3126_);
if (v_isSharedCheck_3157_ == 0)
{
v___x_3129_ = v___x_3126_;
v_isShared_3130_ = v_isSharedCheck_3157_;
goto v_resetjp_3128_;
}
else
{
lean_inc(v_a_3127_);
lean_dec(v___x_3126_);
v___x_3129_ = lean_box(0);
v_isShared_3130_ = v_isSharedCheck_3157_;
goto v_resetjp_3128_;
}
v_resetjp_3128_:
{
lean_object* v_fst_3131_; lean_object* v___x_3133_; uint8_t v_isShared_3134_; uint8_t v_isSharedCheck_3155_; 
v_fst_3131_ = lean_ctor_get(v_a_3127_, 0);
v_isSharedCheck_3155_ = !lean_is_exclusive(v_a_3127_);
if (v_isSharedCheck_3155_ == 0)
{
lean_object* v_unused_3156_; 
v_unused_3156_ = lean_ctor_get(v_a_3127_, 1);
lean_dec(v_unused_3156_);
v___x_3133_ = v_a_3127_;
v_isShared_3134_ = v_isSharedCheck_3155_;
goto v_resetjp_3132_;
}
else
{
lean_inc(v_fst_3131_);
lean_dec(v_a_3127_);
v___x_3133_ = lean_box(0);
v_isShared_3134_ = v_isSharedCheck_3155_;
goto v_resetjp_3132_;
}
v_resetjp_3132_:
{
if (lean_obj_tag(v_fst_3131_) == 0)
{
lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3138_; 
lean_del_object(v___x_3129_);
v___x_3135_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3136_ = l_Lean_MessageData_ofName(v___x_3122_);
lean_inc_ref(v___x_3136_);
if (v_isShared_3134_ == 0)
{
lean_ctor_set_tag(v___x_3133_, 7);
lean_ctor_set(v___x_3133_, 1, v___x_3136_);
lean_ctor_set(v___x_3133_, 0, v___x_3135_);
v___x_3138_ = v___x_3133_;
goto v_reusejp_3137_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v___x_3135_);
lean_ctor_set(v_reuseFailAlloc_3150_, 1, v___x_3136_);
v___x_3138_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3137_;
}
v_reusejp_3137_:
{
lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; 
v___x_3139_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3140_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3140_, 0, v___x_3138_);
lean_ctor_set(v___x_3140_, 1, v___x_3139_);
v___x_3141_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_3142_ = l_Lean_indentD(v___x_3141_);
v___x_3143_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3143_, 0, v___x_3140_);
lean_ctor_set(v___x_3143_, 1, v___x_3142_);
v___x_3144_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3145_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3145_, 0, v___x_3143_);
lean_ctor_set(v___x_3145_, 1, v___x_3144_);
v___x_3146_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3146_, 0, v___x_3145_);
lean_ctor_set(v___x_3146_, 1, v___x_3136_);
v___x_3147_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3148_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3148_, 0, v___x_3146_);
lean_ctor_set(v___x_3148_, 1, v___x_3147_);
v___x_3149_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_3148_, v___y_3110_, v___y_3111_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_);
return v___x_3149_;
}
}
else
{
lean_object* v_val_3151_; lean_object* v___x_3153_; 
lean_del_object(v___x_3133_);
lean_dec(v___x_3122_);
lean_dec(v_stx_3056_);
v_val_3151_ = lean_ctor_get(v_fst_3131_, 0);
lean_inc(v_val_3151_);
lean_dec_ref_known(v_fst_3131_, 1);
if (v_isShared_3130_ == 0)
{
lean_ctor_set(v___x_3129_, 0, v_val_3151_);
v___x_3153_ = v___x_3129_;
goto v_reusejp_3152_;
}
else
{
lean_object* v_reuseFailAlloc_3154_; 
v_reuseFailAlloc_3154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3154_, 0, v_val_3151_);
v___x_3153_ = v_reuseFailAlloc_3154_;
goto v_reusejp_3152_;
}
v_reusejp_3152_:
{
return v___x_3153_;
}
}
}
}
}
else
{
lean_object* v_a_3158_; lean_object* v___x_3160_; uint8_t v_isShared_3161_; uint8_t v_isSharedCheck_3165_; 
lean_dec(v___x_3122_);
lean_dec(v_stx_3056_);
v_a_3158_ = lean_ctor_get(v___x_3126_, 0);
v_isSharedCheck_3165_ = !lean_is_exclusive(v___x_3126_);
if (v_isSharedCheck_3165_ == 0)
{
v___x_3160_ = v___x_3126_;
v_isShared_3161_ = v_isSharedCheck_3165_;
goto v_resetjp_3159_;
}
else
{
lean_inc(v_a_3158_);
lean_dec(v___x_3126_);
v___x_3160_ = lean_box(0);
v_isShared_3161_ = v_isSharedCheck_3165_;
goto v_resetjp_3159_;
}
v_resetjp_3159_:
{
lean_object* v___x_3163_; 
if (v_isShared_3161_ == 0)
{
v___x_3163_ = v___x_3160_;
goto v_reusejp_3162_;
}
else
{
lean_object* v_reuseFailAlloc_3164_; 
v_reuseFailAlloc_3164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3164_, 0, v_a_3158_);
v___x_3163_ = v_reuseFailAlloc_3164_;
goto v_reusejp_3162_;
}
v_reusejp_3162_:
{
return v___x_3163_;
}
}
}
}
else
{
lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; uint8_t v___x_3169_; 
v___x_3166_ = lean_unsigned_to_nat(3u);
v___x_3167_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_3166_);
v___x_3168_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11));
v___x_3169_ = l_Lean_Syntax_isOfKind(v___x_3167_, v___x_3168_);
if (v___x_3169_ == 0)
{
lean_object* v___x_3170_; lean_object* v_env_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; 
lean_del_object(v___x_3093_);
v___x_3170_ = lean_st_ref_get(v___y_3115_);
v_env_3171_ = lean_ctor_get(v___x_3170_, 0);
lean_inc_ref(v_env_3171_);
lean_dec(v___x_3170_);
lean_inc_n(v_stx_3056_, 2);
v___x_3172_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_3173_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3174_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3173_, v_env_3171_, v___x_3172_);
v___x_3175_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_3176_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_3174_, v___x_3175_, v___y_3110_, v___y_3111_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_);
lean_dec(v___x_3174_);
if (lean_obj_tag(v___x_3176_) == 0)
{
lean_object* v_a_3177_; lean_object* v___x_3179_; uint8_t v_isShared_3180_; uint8_t v_isSharedCheck_3207_; 
v_a_3177_ = lean_ctor_get(v___x_3176_, 0);
v_isSharedCheck_3207_ = !lean_is_exclusive(v___x_3176_);
if (v_isSharedCheck_3207_ == 0)
{
v___x_3179_ = v___x_3176_;
v_isShared_3180_ = v_isSharedCheck_3207_;
goto v_resetjp_3178_;
}
else
{
lean_inc(v_a_3177_);
lean_dec(v___x_3176_);
v___x_3179_ = lean_box(0);
v_isShared_3180_ = v_isSharedCheck_3207_;
goto v_resetjp_3178_;
}
v_resetjp_3178_:
{
lean_object* v_fst_3181_; lean_object* v___x_3183_; uint8_t v_isShared_3184_; uint8_t v_isSharedCheck_3205_; 
v_fst_3181_ = lean_ctor_get(v_a_3177_, 0);
v_isSharedCheck_3205_ = !lean_is_exclusive(v_a_3177_);
if (v_isSharedCheck_3205_ == 0)
{
lean_object* v_unused_3206_; 
v_unused_3206_ = lean_ctor_get(v_a_3177_, 1);
lean_dec(v_unused_3206_);
v___x_3183_ = v_a_3177_;
v_isShared_3184_ = v_isSharedCheck_3205_;
goto v_resetjp_3182_;
}
else
{
lean_inc(v_fst_3181_);
lean_dec(v_a_3177_);
v___x_3183_ = lean_box(0);
v_isShared_3184_ = v_isSharedCheck_3205_;
goto v_resetjp_3182_;
}
v_resetjp_3182_:
{
if (lean_obj_tag(v_fst_3181_) == 0)
{
lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3188_; 
lean_del_object(v___x_3179_);
v___x_3185_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3186_ = l_Lean_MessageData_ofName(v___x_3172_);
lean_inc_ref(v___x_3186_);
if (v_isShared_3184_ == 0)
{
lean_ctor_set_tag(v___x_3183_, 7);
lean_ctor_set(v___x_3183_, 1, v___x_3186_);
lean_ctor_set(v___x_3183_, 0, v___x_3185_);
v___x_3188_ = v___x_3183_;
goto v_reusejp_3187_;
}
else
{
lean_object* v_reuseFailAlloc_3200_; 
v_reuseFailAlloc_3200_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3200_, 0, v___x_3185_);
lean_ctor_set(v_reuseFailAlloc_3200_, 1, v___x_3186_);
v___x_3188_ = v_reuseFailAlloc_3200_;
goto v_reusejp_3187_;
}
v_reusejp_3187_:
{
lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; 
v___x_3189_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3190_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3190_, 0, v___x_3188_);
lean_ctor_set(v___x_3190_, 1, v___x_3189_);
v___x_3191_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_3192_ = l_Lean_indentD(v___x_3191_);
v___x_3193_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3193_, 0, v___x_3190_);
lean_ctor_set(v___x_3193_, 1, v___x_3192_);
v___x_3194_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3195_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3195_, 0, v___x_3193_);
lean_ctor_set(v___x_3195_, 1, v___x_3194_);
v___x_3196_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3196_, 0, v___x_3195_);
lean_ctor_set(v___x_3196_, 1, v___x_3186_);
v___x_3197_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3198_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3198_, 0, v___x_3196_);
lean_ctor_set(v___x_3198_, 1, v___x_3197_);
v___x_3199_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_3198_, v___y_3110_, v___y_3111_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_);
return v___x_3199_;
}
}
else
{
lean_object* v_val_3201_; lean_object* v___x_3203_; 
lean_del_object(v___x_3183_);
lean_dec(v___x_3172_);
lean_dec(v_stx_3056_);
v_val_3201_ = lean_ctor_get(v_fst_3181_, 0);
lean_inc(v_val_3201_);
lean_dec_ref_known(v_fst_3181_, 1);
if (v_isShared_3180_ == 0)
{
lean_ctor_set(v___x_3179_, 0, v_val_3201_);
v___x_3203_ = v___x_3179_;
goto v_reusejp_3202_;
}
else
{
lean_object* v_reuseFailAlloc_3204_; 
v_reuseFailAlloc_3204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3204_, 0, v_val_3201_);
v___x_3203_ = v_reuseFailAlloc_3204_;
goto v_reusejp_3202_;
}
v_reusejp_3202_:
{
return v___x_3203_;
}
}
}
}
}
else
{
lean_object* v_a_3208_; lean_object* v___x_3210_; uint8_t v_isShared_3211_; uint8_t v_isSharedCheck_3215_; 
lean_dec(v___x_3172_);
lean_dec(v_stx_3056_);
v_a_3208_ = lean_ctor_get(v___x_3176_, 0);
v_isSharedCheck_3215_ = !lean_is_exclusive(v___x_3176_);
if (v_isSharedCheck_3215_ == 0)
{
v___x_3210_ = v___x_3176_;
v_isShared_3211_ = v_isSharedCheck_3215_;
goto v_resetjp_3209_;
}
else
{
lean_inc(v_a_3208_);
lean_dec(v___x_3176_);
v___x_3210_ = lean_box(0);
v_isShared_3211_ = v_isSharedCheck_3215_;
goto v_resetjp_3209_;
}
v_resetjp_3209_:
{
lean_object* v___x_3213_; 
if (v_isShared_3211_ == 0)
{
v___x_3213_ = v___x_3210_;
goto v_reusejp_3212_;
}
else
{
lean_object* v_reuseFailAlloc_3214_; 
v_reuseFailAlloc_3214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3214_, 0, v_a_3208_);
v___x_3213_ = v_reuseFailAlloc_3214_;
goto v_reusejp_3212_;
}
v_reusejp_3212_:
{
return v___x_3213_;
}
}
}
}
else
{
lean_object* v___x_3216_; lean_object* v___x_3218_; 
lean_dec(v_stx_3056_);
v___x_3216_ = l_Lean_Elab_Do_ControlInfo_pure;
if (v_isShared_3094_ == 0)
{
lean_ctor_set(v___x_3093_, 0, v___x_3216_);
v___x_3218_ = v___x_3093_;
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
}
v___jp_3220_:
{
lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; uint8_t v___x_3230_; 
v___x_3227_ = lean_unsigned_to_nat(2u);
v___x_3228_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_3227_);
v___x_3229_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1));
v___x_3230_ = l_Lean_Syntax_isOfKind(v___x_3228_, v___x_3229_);
if (v___x_3230_ == 0)
{
lean_object* v___x_3231_; lean_object* v_env_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; 
v___x_3231_ = lean_st_ref_get(v___y_3226_);
v_env_3232_ = lean_ctor_get(v___x_3231_, 0);
lean_inc_ref(v_env_3232_);
lean_dec(v___x_3231_);
lean_inc_n(v_stx_3056_, 2);
v___x_3233_ = l_Lean_Syntax_getKind(v_stx_3056_);
v___x_3234_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3235_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3234_, v_env_3232_, v___x_3233_);
v___x_3236_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___closed__0));
v___x_3237_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_3056_, v___x_3235_, v___x_3236_, v___y_3221_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_, v___y_3226_);
lean_dec(v___x_3235_);
if (lean_obj_tag(v___x_3237_) == 0)
{
lean_object* v_a_3238_; lean_object* v___x_3240_; uint8_t v_isShared_3241_; uint8_t v_isSharedCheck_3268_; 
v_a_3238_ = lean_ctor_get(v___x_3237_, 0);
v_isSharedCheck_3268_ = !lean_is_exclusive(v___x_3237_);
if (v_isSharedCheck_3268_ == 0)
{
v___x_3240_ = v___x_3237_;
v_isShared_3241_ = v_isSharedCheck_3268_;
goto v_resetjp_3239_;
}
else
{
lean_inc(v_a_3238_);
lean_dec(v___x_3237_);
v___x_3240_ = lean_box(0);
v_isShared_3241_ = v_isSharedCheck_3268_;
goto v_resetjp_3239_;
}
v_resetjp_3239_:
{
lean_object* v_fst_3242_; lean_object* v___x_3244_; uint8_t v_isShared_3245_; uint8_t v_isSharedCheck_3266_; 
v_fst_3242_ = lean_ctor_get(v_a_3238_, 0);
v_isSharedCheck_3266_ = !lean_is_exclusive(v_a_3238_);
if (v_isSharedCheck_3266_ == 0)
{
lean_object* v_unused_3267_; 
v_unused_3267_ = lean_ctor_get(v_a_3238_, 1);
lean_dec(v_unused_3267_);
v___x_3244_ = v_a_3238_;
v_isShared_3245_ = v_isSharedCheck_3266_;
goto v_resetjp_3243_;
}
else
{
lean_inc(v_fst_3242_);
lean_dec(v_a_3238_);
v___x_3244_ = lean_box(0);
v_isShared_3245_ = v_isSharedCheck_3266_;
goto v_resetjp_3243_;
}
v_resetjp_3243_:
{
if (lean_obj_tag(v_fst_3242_) == 0)
{
lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3249_; 
lean_del_object(v___x_3240_);
v___x_3246_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3247_ = l_Lean_MessageData_ofName(v___x_3233_);
lean_inc_ref(v___x_3247_);
if (v_isShared_3245_ == 0)
{
lean_ctor_set_tag(v___x_3244_, 7);
lean_ctor_set(v___x_3244_, 1, v___x_3247_);
lean_ctor_set(v___x_3244_, 0, v___x_3246_);
v___x_3249_ = v___x_3244_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3261_; 
v_reuseFailAlloc_3261_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3261_, 0, v___x_3246_);
lean_ctor_set(v_reuseFailAlloc_3261_, 1, v___x_3247_);
v___x_3249_ = v_reuseFailAlloc_3261_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; 
v___x_3250_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3251_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3251_, 0, v___x_3249_);
lean_ctor_set(v___x_3251_, 1, v___x_3250_);
v___x_3252_ = l_Lean_MessageData_ofSyntax(v_stx_3056_);
v___x_3253_ = l_Lean_indentD(v___x_3252_);
v___x_3254_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3254_, 0, v___x_3251_);
lean_ctor_set(v___x_3254_, 1, v___x_3253_);
v___x_3255_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3256_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3256_, 0, v___x_3254_);
lean_ctor_set(v___x_3256_, 1, v___x_3255_);
v___x_3257_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3257_, 0, v___x_3256_);
lean_ctor_set(v___x_3257_, 1, v___x_3247_);
v___x_3258_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3259_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3259_, 0, v___x_3257_);
lean_ctor_set(v___x_3259_, 1, v___x_3258_);
v___x_3260_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v___x_3259_, v___y_3221_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_, v___y_3226_);
return v___x_3260_;
}
}
else
{
lean_object* v_val_3262_; lean_object* v___x_3264_; 
lean_del_object(v___x_3244_);
lean_dec(v___x_3233_);
lean_dec(v_stx_3056_);
v_val_3262_ = lean_ctor_get(v_fst_3242_, 0);
lean_inc(v_val_3262_);
lean_dec_ref_known(v_fst_3242_, 1);
if (v_isShared_3241_ == 0)
{
lean_ctor_set(v___x_3240_, 0, v_val_3262_);
v___x_3264_ = v___x_3240_;
goto v_reusejp_3263_;
}
else
{
lean_object* v_reuseFailAlloc_3265_; 
v_reuseFailAlloc_3265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3265_, 0, v_val_3262_);
v___x_3264_ = v_reuseFailAlloc_3265_;
goto v_reusejp_3263_;
}
v_reusejp_3263_:
{
return v___x_3264_;
}
}
}
}
}
else
{
lean_object* v_a_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3276_; 
lean_dec(v___x_3233_);
lean_dec(v_stx_3056_);
v_a_3269_ = lean_ctor_get(v___x_3237_, 0);
v_isSharedCheck_3276_ = !lean_is_exclusive(v___x_3237_);
if (v_isSharedCheck_3276_ == 0)
{
v___x_3271_ = v___x_3237_;
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_a_3269_);
lean_dec(v___x_3237_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
v_resetjp_3270_:
{
lean_object* v___x_3274_; 
if (v_isShared_3272_ == 0)
{
v___x_3274_ = v___x_3271_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3275_; 
v_reuseFailAlloc_3275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3275_, 0, v_a_3269_);
v___x_3274_ = v_reuseFailAlloc_3275_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
return v___x_3274_;
}
}
}
}
else
{
lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; 
v___x_3277_ = lean_unsigned_to_nat(7u);
v___x_3278_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_3277_);
v___x_3279_ = lean_unsigned_to_nat(8u);
v___x_3280_ = l_Lean_Syntax_getArg(v_stx_3056_, v___x_3279_);
lean_dec(v_stx_3056_);
v___x_3281_ = l_Lean_Syntax_getOptional_x3f(v___x_3280_);
lean_dec(v___x_3280_);
if (lean_obj_tag(v___x_3281_) == 0)
{
lean_object* v___x_3282_; 
v___x_3282_ = lean_box(0);
v___y_3075_ = v___y_3226_;
v___y_3076_ = v___y_3225_;
v___y_3077_ = v___y_3222_;
v___y_3078_ = v___x_3278_;
v___y_3079_ = v___y_3223_;
v___y_3080_ = v___y_3221_;
v___y_3081_ = v___y_3224_;
v___y_3082_ = v___x_3282_;
goto v___jp_3074_;
}
else
{
lean_object* v_val_3283_; lean_object* v___x_3285_; uint8_t v_isShared_3286_; uint8_t v_isSharedCheck_3290_; 
v_val_3283_ = lean_ctor_get(v___x_3281_, 0);
v_isSharedCheck_3290_ = !lean_is_exclusive(v___x_3281_);
if (v_isSharedCheck_3290_ == 0)
{
v___x_3285_ = v___x_3281_;
v_isShared_3286_ = v_isSharedCheck_3290_;
goto v_resetjp_3284_;
}
else
{
lean_inc(v_val_3283_);
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
lean_ctor_set(v_reuseFailAlloc_3289_, 0, v_val_3283_);
v___x_3288_ = v_reuseFailAlloc_3289_;
goto v_reusejp_3287_;
}
v_reusejp_3287_:
{
v___y_3075_ = v___y_3226_;
v___y_3076_ = v___y_3225_;
v___y_3077_ = v___y_3222_;
v___y_3078_ = v___x_3278_;
v___y_3079_ = v___y_3223_;
v___y_3080_ = v___y_3221_;
v___y_3081_ = v___y_3224_;
v___y_3082_ = v___x_3288_;
goto v___jp_3074_;
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
lean_object* v_a_5531_; lean_object* v___x_5533_; uint8_t v_isShared_5534_; uint8_t v_isSharedCheck_5538_; 
lean_dec(v_stx_3056_);
v_a_5531_ = lean_ctor_get(v___x_3090_, 0);
v_isSharedCheck_5538_ = !lean_is_exclusive(v___x_3090_);
if (v_isSharedCheck_5538_ == 0)
{
v___x_5533_ = v___x_3090_;
v_isShared_5534_ = v_isSharedCheck_5538_;
goto v_resetjp_5532_;
}
else
{
lean_inc(v_a_5531_);
lean_dec(v___x_3090_);
v___x_5533_ = lean_box(0);
v_isShared_5534_ = v_isSharedCheck_5538_;
goto v_resetjp_5532_;
}
v_resetjp_5532_:
{
lean_object* v___x_5536_; 
if (v_isShared_5534_ == 0)
{
v___x_5536_ = v___x_5533_;
goto v_reusejp_5535_;
}
else
{
lean_object* v_reuseFailAlloc_5537_; 
v_reuseFailAlloc_5537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5537_, 0, v_a_5531_);
v___x_5536_ = v_reuseFailAlloc_5537_;
goto v_reusejp_5535_;
}
v_reusejp_5535_:
{
return v___x_5536_;
}
}
}
v___jp_3064_:
{
lean_object* v___x_3067_; lean_object* v___x_3068_; 
v___x_3067_ = l_Lean_Elab_Do_ControlInfo_alternative(v___y_3065_, v_bodyInfo_3066_);
v___x_3068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3068_, 0, v___x_3067_);
return v___x_3068_;
}
v___jp_3069_:
{
lean_object* v___x_3072_; lean_object* v___x_3073_; 
v___x_3072_ = l_Lean_Elab_Do_ControlInfo_alternative(v___y_3070_, v_bodyInfo_3071_);
v___x_3073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3073_, 0, v___x_3072_);
return v___x_3073_;
}
v___jp_3074_:
{
lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; 
v___x_3083_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6));
v___x_3084_ = lean_box(0);
v___x_3085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3085_, 0, v___y_3078_);
v___x_3086_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v___x_3083_, v___x_3084_, v___x_3085_, v___y_3082_, v___y_3080_, v___y_3077_, v___y_3079_, v___y_3081_, v___y_3076_, v___y_3075_);
return v___x_3086_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__20(lean_object* v_as_5539_, size_t v_sz_5540_, size_t v_i_5541_, lean_object* v_b_5542_, lean_object* v___y_5543_, lean_object* v___y_5544_, lean_object* v___y_5545_, lean_object* v___y_5546_, lean_object* v___y_5547_, lean_object* v___y_5548_){
_start:
{
uint8_t v___x_5550_; 
v___x_5550_ = lean_usize_dec_lt(v_i_5541_, v_sz_5540_);
if (v___x_5550_ == 0)
{
lean_object* v___x_5551_; 
v___x_5551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5551_, 0, v_b_5542_);
return v___x_5551_;
}
else
{
lean_object* v_a_5552_; lean_object* v___x_5553_; 
v_a_5552_ = lean_array_uget_borrowed(v_as_5539_, v_i_5541_);
lean_inc(v_a_5552_);
v___x_5553_ = l_Lean_Elab_Do_InferControlInfo_ofElem(v_a_5552_, v___y_5543_, v___y_5544_, v___y_5545_, v___y_5546_, v___y_5547_, v___y_5548_);
if (lean_obj_tag(v___x_5553_) == 0)
{
lean_object* v_a_5554_; lean_object* v___x_5555_; size_t v___x_5556_; size_t v___x_5557_; 
v_a_5554_ = lean_ctor_get(v___x_5553_, 0);
lean_inc(v_a_5554_);
lean_dec_ref_known(v___x_5553_, 1);
v___x_5555_ = l_Lean_Elab_Do_ControlInfo_sequence(v_b_5542_, v_a_5554_);
v___x_5556_ = ((size_t)1ULL);
v___x_5557_ = lean_usize_add(v_i_5541_, v___x_5556_);
v_i_5541_ = v___x_5557_;
v_b_5542_ = v___x_5555_;
goto _start;
}
else
{
lean_dec_ref(v_b_5542_);
return v___x_5553_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofSeq(lean_object* v_stx_5559_, lean_object* v_a_5560_, lean_object* v_a_5561_, lean_object* v_a_5562_, lean_object* v_a_5563_, lean_object* v_a_5564_, lean_object* v_a_5565_){
_start:
{
lean_object* v_info_5567_; lean_object* v___x_5568_; size_t v_sz_5569_; size_t v___x_5570_; lean_object* v___x_5571_; 
v_info_5567_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v___x_5568_ = l_Lean_Parser_Term_getDoElems(v_stx_5559_);
v_sz_5569_ = lean_array_size(v___x_5568_);
v___x_5570_ = ((size_t)0ULL);
v___x_5571_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__20(v___x_5568_, v_sz_5569_, v___x_5570_, v_info_5567_, v_a_5560_, v_a_5561_, v_a_5562_, v_a_5563_, v_a_5564_, v_a_5565_);
lean_dec_ref(v___x_5568_);
return v___x_5571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofSeq___boxed(lean_object* v_stx_5572_, lean_object* v_a_5573_, lean_object* v_a_5574_, lean_object* v_a_5575_, lean_object* v_a_5576_, lean_object* v_a_5577_, lean_object* v_a_5578_, lean_object* v_a_5579_){
_start:
{
lean_object* v_res_5580_; 
v_res_5580_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_stx_5572_, v_a_5573_, v_a_5574_, v_a_5575_, v_a_5576_, v_a_5577_, v_a_5578_);
lean_dec(v_a_5578_);
lean_dec_ref(v_a_5577_);
lean_dec(v_a_5576_);
lean_dec_ref(v_a_5575_);
lean_dec(v_a_5574_);
lean_dec_ref(v_a_5573_);
return v_res_5580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofOptionSeq___boxed(lean_object* v_stx_x3f_5581_, lean_object* v_a_5582_, lean_object* v_a_5583_, lean_object* v_a_5584_, lean_object* v_a_5585_, lean_object* v_a_5586_, lean_object* v_a_5587_, lean_object* v_a_5588_){
_start:
{
lean_object* v_res_5589_; 
v_res_5589_ = l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(v_stx_x3f_5581_, v_a_5582_, v_a_5583_, v_a_5584_, v_a_5585_, v_a_5586_, v_a_5587_);
lean_dec(v_a_5587_);
lean_dec_ref(v_a_5586_);
lean_dec(v_a_5585_);
lean_dec_ref(v_a_5584_);
lean_dec(v_a_5583_);
lean_dec_ref(v_a_5582_);
return v_res_5589_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6___boxed(lean_object* v_as_5590_, lean_object* v_sz_5591_, lean_object* v_i_5592_, lean_object* v_b_5593_, lean_object* v___y_5594_, lean_object* v___y_5595_, lean_object* v___y_5596_, lean_object* v___y_5597_, lean_object* v___y_5598_, lean_object* v___y_5599_, lean_object* v___y_5600_){
_start:
{
size_t v_sz_boxed_5601_; size_t v_i_boxed_5602_; lean_object* v_res_5603_; 
v_sz_boxed_5601_ = lean_unbox_usize(v_sz_5591_);
lean_dec(v_sz_5591_);
v_i_boxed_5602_ = lean_unbox_usize(v_i_5592_);
lean_dec(v_i_5592_);
v_res_5603_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6(v_as_5590_, v_sz_boxed_5601_, v_i_boxed_5602_, v_b_5593_, v___y_5594_, v___y_5595_, v___y_5596_, v___y_5597_, v___y_5598_, v___y_5599_);
lean_dec(v___y_5599_);
lean_dec_ref(v___y_5598_);
lean_dec(v___y_5597_);
lean_dec_ref(v___y_5596_);
lean_dec(v___y_5595_);
lean_dec_ref(v___y_5594_);
lean_dec_ref(v_as_5590_);
return v_res_5603_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__20___boxed(lean_object* v_as_5604_, lean_object* v_sz_5605_, lean_object* v_i_5606_, lean_object* v_b_5607_, lean_object* v___y_5608_, lean_object* v___y_5609_, lean_object* v___y_5610_, lean_object* v___y_5611_, lean_object* v___y_5612_, lean_object* v___y_5613_, lean_object* v___y_5614_){
_start:
{
size_t v_sz_boxed_5615_; size_t v_i_boxed_5616_; lean_object* v_res_5617_; 
v_sz_boxed_5615_ = lean_unbox_usize(v_sz_5605_);
lean_dec(v_sz_5605_);
v_i_boxed_5616_ = lean_unbox_usize(v_i_5606_);
lean_dec(v_i_5606_);
v_res_5617_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__20(v_as_5604_, v_sz_boxed_5615_, v_i_boxed_5616_, v_b_5607_, v___y_5608_, v___y_5609_, v___y_5610_, v___y_5611_, v___y_5612_, v___y_5613_);
lean_dec(v___y_5613_);
lean_dec_ref(v___y_5612_);
lean_dec(v___y_5611_);
lean_dec_ref(v___y_5610_);
lean_dec(v___y_5609_);
lean_dec_ref(v___y_5608_);
lean_dec_ref(v_as_5604_);
return v_res_5617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign___boxed(lean_object* v_reassigned_5618_, lean_object* v_rhs_x3f_5619_, lean_object* v_otherwise_x3f_5620_, lean_object* v_body_x3f_5621_, lean_object* v_a_5622_, lean_object* v_a_5623_, lean_object* v_a_5624_, lean_object* v_a_5625_, lean_object* v_a_5626_, lean_object* v_a_5627_, lean_object* v_a_5628_){
_start:
{
lean_object* v_res_5629_; 
v_res_5629_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_reassigned_5618_, v_rhs_x3f_5619_, v_otherwise_x3f_5620_, v_body_x3f_5621_, v_a_5622_, v_a_5623_, v_a_5624_, v_a_5625_, v_a_5626_, v_a_5627_);
lean_dec(v_a_5627_);
lean_dec_ref(v_a_5626_);
lean_dec(v_a_5625_);
lean_dec_ref(v_a_5624_);
lean_dec(v_a_5623_);
lean_dec_ref(v_a_5622_);
return v_res_5629_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___boxed(lean_object* v___x_5630_, lean_object* v_as_5631_, lean_object* v_sz_5632_, lean_object* v_i_5633_, lean_object* v_b_5634_, lean_object* v___y_5635_, lean_object* v___y_5636_, lean_object* v___y_5637_, lean_object* v___y_5638_, lean_object* v___y_5639_, lean_object* v___y_5640_, lean_object* v___y_5641_){
_start:
{
uint8_t v___x_320024__boxed_5642_; size_t v_sz_boxed_5643_; size_t v_i_boxed_5644_; lean_object* v_res_5645_; 
v___x_320024__boxed_5642_ = lean_unbox(v___x_5630_);
v_sz_boxed_5643_ = lean_unbox_usize(v_sz_5632_);
lean_dec(v_sz_5632_);
v_i_boxed_5644_ = lean_unbox_usize(v_i_5633_);
lean_dec(v_i_5633_);
v_res_5645_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11(v___x_320024__boxed_5642_, v_as_5631_, v_sz_boxed_5643_, v_i_boxed_5644_, v_b_5634_, v___y_5635_, v___y_5636_, v___y_5637_, v___y_5638_, v___y_5639_, v___y_5640_);
lean_dec(v___y_5640_);
lean_dec_ref(v___y_5639_);
lean_dec(v___y_5638_);
lean_dec_ref(v___y_5637_);
lean_dec(v___y_5636_);
lean_dec_ref(v___y_5635_);
lean_dec_ref(v_as_5631_);
return v_res_5645_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__17___boxed(lean_object* v___x_5646_, lean_object* v_as_5647_, lean_object* v_sz_5648_, lean_object* v_i_5649_, lean_object* v_b_5650_, lean_object* v___y_5651_, lean_object* v___y_5652_, lean_object* v___y_5653_, lean_object* v___y_5654_, lean_object* v___y_5655_, lean_object* v___y_5656_, lean_object* v___y_5657_){
_start:
{
uint8_t v___x_320075__boxed_5658_; size_t v_sz_boxed_5659_; size_t v_i_boxed_5660_; lean_object* v_res_5661_; 
v___x_320075__boxed_5658_ = lean_unbox(v___x_5646_);
v_sz_boxed_5659_ = lean_unbox_usize(v_sz_5648_);
lean_dec(v_sz_5648_);
v_i_boxed_5660_ = lean_unbox_usize(v_i_5649_);
lean_dec(v_i_5649_);
v_res_5661_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__17(v___x_320075__boxed_5658_, v_as_5647_, v_sz_boxed_5659_, v_i_boxed_5660_, v_b_5650_, v___y_5651_, v___y_5652_, v___y_5653_, v___y_5654_, v___y_5655_, v___y_5656_);
lean_dec(v___y_5656_);
lean_dec_ref(v___y_5655_);
lean_dec(v___y_5654_);
lean_dec_ref(v___y_5653_);
lean_dec(v___y_5652_);
lean_dec_ref(v___y_5651_);
lean_dec_ref(v_as_5647_);
return v_res_5661_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___boxed(lean_object* v_as_5662_, lean_object* v_sz_5663_, lean_object* v_i_5664_, lean_object* v_b_5665_, lean_object* v___y_5666_, lean_object* v___y_5667_, lean_object* v___y_5668_, lean_object* v___y_5669_, lean_object* v___y_5670_, lean_object* v___y_5671_, lean_object* v___y_5672_){
_start:
{
size_t v_sz_boxed_5673_; size_t v_i_boxed_5674_; lean_object* v_res_5675_; 
v_sz_boxed_5673_ = lean_unbox_usize(v_sz_5663_);
lean_dec(v_sz_5663_);
v_i_boxed_5674_ = lean_unbox_usize(v_i_5664_);
lean_dec(v_i_5664_);
v_res_5675_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12(v_as_5662_, v_sz_boxed_5673_, v_i_boxed_5674_, v_b_5665_, v___y_5666_, v___y_5667_, v___y_5668_, v___y_5669_, v___y_5670_, v___y_5671_);
lean_dec(v___y_5671_);
lean_dec_ref(v___y_5670_);
lean_dec(v___y_5669_);
lean_dec_ref(v___y_5668_);
lean_dec(v___y_5667_);
lean_dec_ref(v___y_5666_);
lean_dec_ref(v_as_5662_);
return v_res_5675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___boxed(lean_object* v_reassignment_5676_, lean_object* v_decl_5677_, lean_object* v_a_5678_, lean_object* v_a_5679_, lean_object* v_a_5680_, lean_object* v_a_5681_, lean_object* v_a_5682_, lean_object* v_a_5683_, lean_object* v_a_5684_){
_start:
{
uint8_t v_reassignment_boxed_5685_; lean_object* v_res_5686_; 
v_reassignment_boxed_5685_ = lean_unbox(v_reassignment_5676_);
v_res_5686_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(v_reassignment_boxed_5685_, v_decl_5677_, v_a_5678_, v_a_5679_, v_a_5680_, v_a_5681_, v_a_5682_, v_a_5683_);
lean_dec(v_a_5683_);
lean_dec_ref(v_a_5682_);
lean_dec(v_a_5681_);
lean_dec_ref(v_a_5680_);
lean_dec(v_a_5679_);
lean_dec_ref(v_a_5678_);
return v_res_5686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___boxed(lean_object* v_stx_5687_, lean_object* v_a_5688_, lean_object* v_a_5689_, lean_object* v_a_5690_, lean_object* v_a_5691_, lean_object* v_a_5692_, lean_object* v_a_5693_, lean_object* v_a_5694_){
_start:
{
lean_object* v_res_5695_; 
v_res_5695_ = l_Lean_Elab_Do_InferControlInfo_ofElem(v_stx_5687_, v_a_5688_, v_a_5689_, v_a_5690_, v_a_5691_, v_a_5692_, v_a_5693_);
lean_dec(v_a_5693_);
lean_dec_ref(v_a_5692_);
lean_dec(v_a_5691_);
lean_dec_ref(v_a_5690_);
lean_dec(v_a_5689_);
lean_dec_ref(v_a_5688_);
return v_res_5695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8(lean_object* v_00_u03b1_5696_, lean_object* v___y_5697_, lean_object* v___y_5698_, lean_object* v___y_5699_, lean_object* v___y_5700_, lean_object* v___y_5701_, lean_object* v___y_5702_){
_start:
{
lean_object* v___x_5704_; 
v___x_5704_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
return v___x_5704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___boxed(lean_object* v_00_u03b1_5705_, lean_object* v___y_5706_, lean_object* v___y_5707_, lean_object* v___y_5708_, lean_object* v___y_5709_, lean_object* v___y_5710_, lean_object* v___y_5711_, lean_object* v___y_5712_){
_start:
{
lean_object* v_res_5713_; 
v_res_5713_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8(v_00_u03b1_5705_, v___y_5706_, v___y_5707_, v___y_5708_, v___y_5709_, v___y_5710_, v___y_5711_);
lean_dec(v___y_5711_);
lean_dec_ref(v___y_5710_);
lean_dec(v___y_5709_);
lean_dec_ref(v___y_5708_);
lean_dec(v___y_5707_);
lean_dec_ref(v___y_5706_);
return v_res_5713_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0(lean_object* v_00_u03b2_5714_, lean_object* v_k_5715_, lean_object* v_t_5716_, lean_object* v_h_5717_){
_start:
{
lean_object* v___x_5718_; 
v___x_5718_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(v_k_5715_, v_t_5716_);
return v___x_5718_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___boxed(lean_object* v_00_u03b2_5719_, lean_object* v_k_5720_, lean_object* v_t_5721_, lean_object* v_h_5722_){
_start:
{
lean_object* v_res_5723_; 
v_res_5723_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0(v_00_u03b2_5719_, v_k_5720_, v_t_5721_, v_h_5722_);
lean_dec(v_k_5720_);
return v_res_5723_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7(lean_object* v_00_u03b1_5724_, lean_object* v_ref_5725_, lean_object* v___y_5726_, lean_object* v___y_5727_, lean_object* v___y_5728_, lean_object* v___y_5729_, lean_object* v___y_5730_, lean_object* v___y_5731_){
_start:
{
lean_object* v___x_5733_; 
v___x_5733_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___redArg(v_ref_5725_);
return v___x_5733_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7___boxed(lean_object* v_00_u03b1_5734_, lean_object* v_ref_5735_, lean_object* v___y_5736_, lean_object* v___y_5737_, lean_object* v___y_5738_, lean_object* v___y_5739_, lean_object* v___y_5740_, lean_object* v___y_5741_, lean_object* v___y_5742_){
_start:
{
lean_object* v_res_5743_; 
v_res_5743_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__7(v_00_u03b1_5734_, v_ref_5735_, v___y_5736_, v___y_5737_, v___y_5738_, v___y_5739_, v___y_5740_, v___y_5741_);
lean_dec(v___y_5741_);
lean_dec_ref(v___y_5740_);
lean_dec(v___y_5739_);
lean_dec_ref(v___y_5738_);
lean_dec(v___y_5737_);
lean_dec_ref(v___y_5736_);
return v_res_5743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1(lean_object* v_00_u03b1_5744_, lean_object* v_x_5745_, lean_object* v___y_5746_, lean_object* v___y_5747_, lean_object* v___y_5748_, lean_object* v___y_5749_, lean_object* v___y_5750_, lean_object* v___y_5751_){
_start:
{
lean_object* v___x_5753_; 
v___x_5753_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(v_x_5745_, v___y_5746_, v___y_5747_, v___y_5748_, v___y_5749_, v___y_5750_, v___y_5751_);
return v___x_5753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___boxed(lean_object* v_00_u03b1_5754_, lean_object* v_x_5755_, lean_object* v___y_5756_, lean_object* v___y_5757_, lean_object* v___y_5758_, lean_object* v___y_5759_, lean_object* v___y_5760_, lean_object* v___y_5761_, lean_object* v___y_5762_){
_start:
{
lean_object* v_res_5763_; 
v_res_5763_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1(v_00_u03b1_5754_, v_x_5755_, v___y_5756_, v___y_5757_, v___y_5758_, v___y_5759_, v___y_5760_, v___y_5761_);
lean_dec(v___y_5761_);
lean_dec_ref(v___y_5760_);
lean_dec(v___y_5759_);
lean_dec_ref(v___y_5758_);
lean_dec(v___y_5757_);
lean_dec_ref(v___y_5756_);
return v_res_5763_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3(lean_object* v_stx_5764_, lean_object* v_as_5765_, lean_object* v_as_x27_5766_, lean_object* v_b_5767_, lean_object* v_a_5768_, lean_object* v___y_5769_, lean_object* v___y_5770_, lean_object* v___y_5771_, lean_object* v___y_5772_, lean_object* v___y_5773_, lean_object* v___y_5774_){
_start:
{
lean_object* v___x_5776_; 
v___x_5776_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_stx_5764_, v_as_x27_5766_, v_b_5767_, v___y_5769_, v___y_5770_, v___y_5771_, v___y_5772_, v___y_5773_, v___y_5774_);
return v___x_5776_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___boxed(lean_object* v_stx_5777_, lean_object* v_as_5778_, lean_object* v_as_x27_5779_, lean_object* v_b_5780_, lean_object* v_a_5781_, lean_object* v___y_5782_, lean_object* v___y_5783_, lean_object* v___y_5784_, lean_object* v___y_5785_, lean_object* v___y_5786_, lean_object* v___y_5787_, lean_object* v___y_5788_){
_start:
{
lean_object* v_res_5789_; 
v_res_5789_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3(v_stx_5777_, v_as_5778_, v_as_x27_5779_, v_b_5780_, v_a_5781_, v___y_5782_, v___y_5783_, v___y_5784_, v___y_5785_, v___y_5786_, v___y_5787_);
lean_dec(v___y_5787_);
lean_dec_ref(v___y_5786_);
lean_dec(v___y_5785_);
lean_dec_ref(v___y_5784_);
lean_dec(v___y_5783_);
lean_dec_ref(v___y_5782_);
lean_dec(v_as_x27_5779_);
lean_dec(v_as_5778_);
return v_res_5789_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4(lean_object* v_00_u03b1_5790_, lean_object* v_msg_5791_, lean_object* v___y_5792_, lean_object* v___y_5793_, lean_object* v___y_5794_, lean_object* v___y_5795_, lean_object* v___y_5796_, lean_object* v___y_5797_){
_start:
{
lean_object* v___x_5799_; 
v___x_5799_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___redArg(v_msg_5791_, v___y_5792_, v___y_5793_, v___y_5794_, v___y_5795_, v___y_5796_, v___y_5797_);
return v___x_5799_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___boxed(lean_object* v_00_u03b1_5800_, lean_object* v_msg_5801_, lean_object* v___y_5802_, lean_object* v___y_5803_, lean_object* v___y_5804_, lean_object* v___y_5805_, lean_object* v___y_5806_, lean_object* v___y_5807_, lean_object* v___y_5808_){
_start:
{
lean_object* v_res_5809_; 
v_res_5809_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4(v_00_u03b1_5800_, v_msg_5801_, v___y_5802_, v___y_5803_, v___y_5804_, v___y_5805_, v___y_5806_, v___y_5807_);
lean_dec(v___y_5807_);
lean_dec_ref(v___y_5806_);
lean_dec(v___y_5805_);
lean_dec_ref(v___y_5804_);
lean_dec(v___y_5803_);
lean_dec_ref(v___y_5802_);
return v_res_5809_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2(lean_object* v_cls_5810_, lean_object* v_msg_5811_, lean_object* v___y_5812_, lean_object* v___y_5813_, lean_object* v___y_5814_, lean_object* v___y_5815_, lean_object* v___y_5816_, lean_object* v___y_5817_){
_start:
{
lean_object* v___x_5819_; 
v___x_5819_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___redArg(v_cls_5810_, v_msg_5811_, v___y_5814_, v___y_5815_, v___y_5816_, v___y_5817_);
return v___x_5819_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2___boxed(lean_object* v_cls_5820_, lean_object* v_msg_5821_, lean_object* v___y_5822_, lean_object* v___y_5823_, lean_object* v___y_5824_, lean_object* v___y_5825_, lean_object* v___y_5826_, lean_object* v___y_5827_, lean_object* v___y_5828_){
_start:
{
lean_object* v_res_5829_; 
v_res_5829_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__2(v_cls_5820_, v_msg_5821_, v___y_5822_, v___y_5823_, v___y_5824_, v___y_5825_, v___y_5826_, v___y_5827_);
lean_dec(v___y_5827_);
lean_dec_ref(v___y_5826_);
lean_dec(v___y_5825_);
lean_dec_ref(v___y_5824_);
lean_dec(v___y_5823_);
lean_dec_ref(v___y_5822_);
return v_res_5829_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__4(lean_object* v_as_5830_, lean_object* v_as_x27_5831_, lean_object* v_b_5832_, lean_object* v_a_5833_, lean_object* v___y_5834_, lean_object* v___y_5835_, lean_object* v___y_5836_, lean_object* v___y_5837_, lean_object* v___y_5838_, lean_object* v___y_5839_){
_start:
{
lean_object* v___x_5841_; 
v___x_5841_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__4___redArg(v_as_x27_5831_, v_b_5832_, v___y_5834_, v___y_5835_, v___y_5836_, v___y_5837_, v___y_5838_, v___y_5839_);
return v___x_5841_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__4___boxed(lean_object* v_as_5842_, lean_object* v_as_x27_5843_, lean_object* v_b_5844_, lean_object* v_a_5845_, lean_object* v___y_5846_, lean_object* v___y_5847_, lean_object* v___y_5848_, lean_object* v___y_5849_, lean_object* v___y_5850_, lean_object* v___y_5851_, lean_object* v___y_5852_){
_start:
{
lean_object* v_res_5853_; 
v_res_5853_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__4(v_as_5842_, v_as_x27_5843_, v_b_5844_, v_a_5845_, v___y_5846_, v___y_5847_, v___y_5848_, v___y_5849_, v___y_5850_, v___y_5851_);
lean_dec(v___y_5851_);
lean_dec_ref(v___y_5850_);
lean_dec(v___y_5849_);
lean_dec_ref(v___y_5848_);
lean_dec(v___y_5847_);
lean_dec_ref(v___y_5846_);
lean_dec(v_as_x27_5843_);
lean_dec(v_as_5842_);
return v_res_5853_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__6(lean_object* v_00_u03b1_5854_, lean_object* v_ref_5855_, lean_object* v_msg_5856_, lean_object* v___y_5857_, lean_object* v___y_5858_, lean_object* v___y_5859_, lean_object* v___y_5860_, lean_object* v___y_5861_, lean_object* v___y_5862_){
_start:
{
lean_object* v___x_5864_; 
v___x_5864_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__6___redArg(v_ref_5855_, v_msg_5856_, v___y_5857_, v___y_5858_, v___y_5859_, v___y_5860_, v___y_5861_, v___y_5862_);
return v___x_5864_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__6___boxed(lean_object* v_00_u03b1_5865_, lean_object* v_ref_5866_, lean_object* v_msg_5867_, lean_object* v___y_5868_, lean_object* v___y_5869_, lean_object* v___y_5870_, lean_object* v___y_5871_, lean_object* v___y_5872_, lean_object* v___y_5873_, lean_object* v___y_5874_){
_start:
{
lean_object* v_res_5875_; 
v_res_5875_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__6(v_00_u03b1_5865_, v_ref_5866_, v_msg_5867_, v___y_5868_, v___y_5869_, v___y_5870_, v___y_5871_, v___y_5872_, v___y_5873_);
lean_dec(v___y_5873_);
lean_dec_ref(v___y_5872_);
lean_dec(v___y_5871_);
lean_dec_ref(v___y_5870_);
lean_dec(v___y_5869_);
lean_dec_ref(v___y_5868_);
lean_dec(v_ref_5866_);
return v_res_5875_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12(lean_object* v_msgData_5876_, lean_object* v_macroStack_5877_, lean_object* v___y_5878_, lean_object* v___y_5879_, lean_object* v___y_5880_, lean_object* v___y_5881_, lean_object* v___y_5882_, lean_object* v___y_5883_){
_start:
{
lean_object* v___x_5885_; 
v___x_5885_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___redArg(v_msgData_5876_, v_macroStack_5877_, v___y_5882_);
return v___x_5885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12___boxed(lean_object* v_msgData_5886_, lean_object* v_macroStack_5887_, lean_object* v___y_5888_, lean_object* v___y_5889_, lean_object* v___y_5890_, lean_object* v___y_5891_, lean_object* v___y_5892_, lean_object* v___y_5893_, lean_object* v___y_5894_){
_start:
{
lean_object* v_res_5895_; 
v_res_5895_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4_spec__12(v_msgData_5886_, v_macroStack_5887_, v___y_5888_, v___y_5889_, v___y_5890_, v___y_5891_, v___y_5892_, v___y_5893_);
lean_dec(v___y_5893_);
lean_dec_ref(v___y_5892_);
lean_dec(v___y_5891_);
lean_dec_ref(v___y_5890_);
lean_dec(v___y_5889_);
lean_dec_ref(v___y_5888_);
return v_res_5895_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11(lean_object* v_00_u03b2_5896_, lean_object* v_m_5897_, lean_object* v_a_5898_){
_start:
{
lean_object* v___x_5899_; 
v___x_5899_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11___redArg(v_m_5897_, v_a_5898_);
return v___x_5899_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11___boxed(lean_object* v_00_u03b2_5900_, lean_object* v_m_5901_, lean_object* v_a_5902_){
_start:
{
lean_object* v_res_5903_; 
v_res_5903_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11(v_00_u03b2_5900_, v_m_5901_, v_a_5902_);
lean_dec(v_a_5902_);
lean_dec_ref(v_m_5901_);
return v_res_5903_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29(lean_object* v_00_u03b2_5904_, lean_object* v_x_5905_, lean_object* v_x_5906_){
_start:
{
uint8_t v___x_5907_; 
v___x_5907_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29___redArg(v_x_5905_, v_x_5906_);
return v___x_5907_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29___boxed(lean_object* v_00_u03b2_5908_, lean_object* v_x_5909_, lean_object* v_x_5910_){
_start:
{
uint8_t v_res_5911_; lean_object* v_r_5912_; 
v_res_5911_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29(v_00_u03b2_5908_, v_x_5909_, v_x_5910_);
lean_dec_ref(v_x_5910_);
lean_dec_ref(v_x_5909_);
v_r_5912_ = lean_box(v_res_5911_);
return v_r_5912_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11_spec__32(lean_object* v_00_u03b2_5913_, lean_object* v_a_5914_, lean_object* v_x_5915_){
_start:
{
lean_object* v___x_5916_; 
v___x_5916_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11_spec__32___redArg(v_a_5914_, v_x_5915_);
return v___x_5916_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11_spec__32___boxed(lean_object* v_00_u03b2_5917_, lean_object* v_a_5918_, lean_object* v_x_5919_){
_start:
{
lean_object* v_res_5920_; 
v_res_5920_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__11_spec__32(v_00_u03b2_5917_, v_a_5918_, v_x_5919_);
lean_dec(v_x_5919_);
lean_dec(v_a_5918_);
return v_res_5920_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35(lean_object* v_00_u03b2_5921_, lean_object* v_x_5922_, size_t v_x_5923_, lean_object* v_x_5924_){
_start:
{
uint8_t v___x_5925_; 
v___x_5925_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35___redArg(v_x_5922_, v_x_5923_, v_x_5924_);
return v___x_5925_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35___boxed(lean_object* v_00_u03b2_5926_, lean_object* v_x_5927_, lean_object* v_x_5928_, lean_object* v_x_5929_){
_start:
{
size_t v_x_326527__boxed_5930_; uint8_t v_res_5931_; lean_object* v_r_5932_; 
v_x_326527__boxed_5930_ = lean_unbox_usize(v_x_5928_);
lean_dec(v_x_5928_);
v_res_5931_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35(v_00_u03b2_5926_, v_x_5927_, v_x_326527__boxed_5930_, v_x_5929_);
lean_dec_ref(v_x_5929_);
lean_dec_ref(v_x_5927_);
v_r_5932_ = lean_box(v_res_5931_);
return v_r_5932_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35_spec__39(lean_object* v_00_u03b2_5933_, lean_object* v_keys_5934_, lean_object* v_vals_5935_, lean_object* v_heq_5936_, lean_object* v_i_5937_, lean_object* v_k_5938_){
_start:
{
uint8_t v___x_5939_; 
v___x_5939_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35_spec__39___redArg(v_keys_5934_, v_i_5937_, v_k_5938_);
return v___x_5939_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35_spec__39___boxed(lean_object* v_00_u03b2_5940_, lean_object* v_keys_5941_, lean_object* v_vals_5942_, lean_object* v_heq_5943_, lean_object* v_i_5944_, lean_object* v_k_5945_){
_start:
{
uint8_t v_res_5946_; lean_object* v_r_5947_; 
v_res_5946_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1_spec__3_spec__9_spec__29_spec__35_spec__39(v_00_u03b2_5940_, v_keys_5941_, v_vals_5942_, v_heq_5943_, v_i_5944_, v_k_5945_);
lean_dec_ref(v_k_5945_);
lean_dec_ref(v_vals_5942_);
lean_dec_ref(v_keys_5941_);
v_r_5947_ = lean_box(v_res_5946_);
return v_r_5947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoSeq(lean_object* v_doSeq_5948_, lean_object* v_a_5949_, lean_object* v_a_5950_, lean_object* v_a_5951_, lean_object* v_a_5952_, lean_object* v_a_5953_, lean_object* v_a_5954_){
_start:
{
lean_object* v___x_5956_; 
v___x_5956_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_doSeq_5948_, v_a_5949_, v_a_5950_, v_a_5951_, v_a_5952_, v_a_5953_, v_a_5954_);
return v___x_5956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoSeq___boxed(lean_object* v_doSeq_5957_, lean_object* v_a_5958_, lean_object* v_a_5959_, lean_object* v_a_5960_, lean_object* v_a_5961_, lean_object* v_a_5962_, lean_object* v_a_5963_, lean_object* v_a_5964_){
_start:
{
lean_object* v_res_5965_; 
v_res_5965_ = l_Lean_Elab_Do_inferControlInfoSeq(v_doSeq_5957_, v_a_5958_, v_a_5959_, v_a_5960_, v_a_5961_, v_a_5962_, v_a_5963_);
lean_dec(v_a_5963_);
lean_dec_ref(v_a_5962_);
lean_dec(v_a_5961_);
lean_dec_ref(v_a_5960_);
lean_dec(v_a_5959_);
lean_dec_ref(v_a_5958_);
return v_res_5965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoElem(lean_object* v_doElem_5966_, lean_object* v_a_5967_, lean_object* v_a_5968_, lean_object* v_a_5969_, lean_object* v_a_5970_, lean_object* v_a_5971_, lean_object* v_a_5972_){
_start:
{
lean_object* v___x_5974_; 
v___x_5974_ = l_Lean_Elab_Do_InferControlInfo_ofElem(v_doElem_5966_, v_a_5967_, v_a_5968_, v_a_5969_, v_a_5970_, v_a_5971_, v_a_5972_);
return v___x_5974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoElem___boxed(lean_object* v_doElem_5975_, lean_object* v_a_5976_, lean_object* v_a_5977_, lean_object* v_a_5978_, lean_object* v_a_5979_, lean_object* v_a_5980_, lean_object* v_a_5981_, lean_object* v_a_5982_){
_start:
{
lean_object* v_res_5983_; 
v_res_5983_ = l_Lean_Elab_Do_inferControlInfoElem(v_doElem_5975_, v_a_5976_, v_a_5977_, v_a_5978_, v_a_5979_, v_a_5980_, v_a_5981_);
lean_dec(v_a_5981_);
lean_dec_ref(v_a_5980_);
lean_dec(v_a_5979_);
lean_dec_ref(v_a_5978_);
lean_dec(v_a_5977_);
lean_dec_ref(v_a_5976_);
return v_res_5983_;
}
}
lean_object* runtime_initialize_Lean_Elab_Term(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_PatternVar(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Do_InferControlInfo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Do_instInhabitedControlInfo_default = _init_l_Lean_Elab_Do_instInhabitedControlInfo_default();
lean_mark_persistent(l_Lean_Elab_Do_instInhabitedControlInfo_default);
l_Lean_Elab_Do_instInhabitedControlInfo = _init_l_Lean_Elab_Do_instInhabitedControlInfo();
lean_mark_persistent(l_Lean_Elab_Do_instInhabitedControlInfo);
l_Lean_Elab_Do_ControlInfo_pure = _init_l_Lean_Elab_Do_ControlInfo_pure();
lean_mark_persistent(l_Lean_Elab_Do_ControlInfo_pure);
l_Lean_Elab_Do_ControlInfo_empty = _init_l_Lean_Elab_Do_ControlInfo_empty();
lean_mark_persistent(l_Lean_Elab_Do_ControlInfo_empty);
res = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_39974866____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_Do_controlInfoElemAttribute = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_Do_controlInfoElemAttribute);
lean_dec_ref(res);
res = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Do_InferControlInfo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Term(uint8_t builtin);
lean_object* initialize_Lean_Parser_Do(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_PatternVar(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Do_InferControlInfo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_InferControlInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Do_InferControlInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Do_InferControlInfo(builtin);
}
#ifdef __cplusplus
}
#endif
