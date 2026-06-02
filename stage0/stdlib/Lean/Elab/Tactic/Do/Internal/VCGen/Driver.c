// Lean compiler output
// Module: Lean.Elab.Tactic.Do.Internal.VCGen.Driver
// Imports: public import Lean.Elab.Tactic.Meta public import Lean.Elab.Tactic.Do.Internal.VCGen.Context public import Lean.Elab.Tactic.Do.Internal.VCGen.Solve public import Lean.Meta.Sym.Grind
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
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
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_processHypotheses___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_grind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
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
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_runTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_mkGoalCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_setKind___redArg(lean_object*, uint8_t, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_Sym_preprocessMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_outOfFuel___redArg(lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Tactic_Do_SpecAttr_isSpecInvariantType(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getExprAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_unfoldReducible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_setTag___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "`grind` failed on goal:"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__1;
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__2_value;
static const lean_array_object l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 16, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__3_value),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 1, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(1, 0, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__1;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "invariantDotAlt"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__3_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__2_value),LEAN_SCALAR_PTR_LITERAL(174, 218, 225, 197, 89, 244, 133, 64)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "invariantCaseAlt"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__5_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__4_value),LEAN_SCALAR_PTR_LITERAL(163, 146, 32, 128, 83, 151, 179, 6)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "caseArg"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__7_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__6_value),LEAN_SCALAR_PTR_LITERAL(151, 119, 254, 229, 232, 21, 225, 201)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__9_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__8_value),LEAN_SCALAR_PTR_LITERAL(117, 253, 122, 28, 77, 248, 149, 120)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__12_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__12_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__12_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__11_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__12_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__14_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__14_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__14_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__13_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__14_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__15_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__16 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__16_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "renameI"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__17_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__18_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__18_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__18_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__17_value),LEAN_SCALAR_PTR_LITERAL(20, 41, 101, 89, 107, 117, 242, 244)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__18_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "rename_i"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__19 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__19_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__20;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__21_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__22 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__22_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__23_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__23_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__23_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__22_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__23 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__23_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__24 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__24_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "cdotTk"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__25 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__25_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__26_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__25_value),LEAN_SCALAR_PTR_LITERAL(117, 126, 44, 217, 38, 3, 69, 145)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__26 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__26_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1___boxed(lean_object**);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_emitVC_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_emitVC_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Do_Internal_VCGen_emitVC___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_emitVC___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_emitVC___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_emitVC(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_emitVC___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_emitVC_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_emitVC_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "SpecProof.global "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__0_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__1;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "SpecProof.local "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__2 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__2_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__3;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "SpecProof.stx _ "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__4 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__4_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__5;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__6 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__6_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__7;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "No spec matching the monad "};
static const lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__0_value;
static lean_once_cell_t l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__1;
static const lean_string_object l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = " found for program "};
static const lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__2 = (const lean_object*)&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__2_value;
static lean_once_cell_t l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__3;
static const lean_string_object l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = ". Candidates were "};
static const lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__4 = (const lean_object*)&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__4_value;
static lean_once_cell_t l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__5;
static const lean_string_object l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__6 = (const lean_object*)&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__6_value;
static lean_once_cell_t l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__7;
static const lean_string_object l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "No spec found for program "};
static const lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__8 = (const lean_object*)&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__8_value;
static lean_once_cell_t l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__9;
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "Did not know how to decompose weakest precondition for "};
static const lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_work(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_work___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "vc"};
static const lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___redArg___closed__0 = (const lean_object*)&l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inv"};
static const lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___redArg___closed__0 = (const lean_object*)&l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__1___redArg___lam__0(lean_object* v_x_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_){
_start:
{
lean_object* v___x_14_; 
lean_inc(v___y_8_);
lean_inc_ref(v___y_7_);
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
lean_inc(v___y_4_);
lean_inc(v___y_3_);
lean_inc_ref(v___y_2_);
v___x_14_ = lean_apply_12(v_x_1_, v___y_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, v___y_11_, v___y_12_, lean_box(0));
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__1___redArg___lam__0___boxed(lean_object* v_x_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__1___redArg___lam__0(v_x_15_, v___y_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
lean_dec(v___y_22_);
lean_dec_ref(v___y_21_);
lean_dec(v___y_20_);
lean_dec_ref(v___y_19_);
lean_dec(v___y_18_);
lean_dec(v___y_17_);
lean_dec_ref(v___y_16_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__1___redArg(lean_object* v_mvarId_29_, lean_object* v_x_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_){
_start:
{
lean_object* v___f_43_; lean_object* v___x_44_; 
lean_inc(v___y_37_);
lean_inc_ref(v___y_36_);
lean_inc(v___y_35_);
lean_inc_ref(v___y_34_);
lean_inc(v___y_33_);
lean_inc(v___y_32_);
lean_inc_ref(v___y_31_);
v___f_43_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__1___redArg___lam__0___boxed), 13, 8);
lean_closure_set(v___f_43_, 0, v_x_30_);
lean_closure_set(v___f_43_, 1, v___y_31_);
lean_closure_set(v___f_43_, 2, v___y_32_);
lean_closure_set(v___f_43_, 3, v___y_33_);
lean_closure_set(v___f_43_, 4, v___y_34_);
lean_closure_set(v___f_43_, 5, v___y_35_);
lean_closure_set(v___f_43_, 6, v___y_36_);
lean_closure_set(v___f_43_, 7, v___y_37_);
v___x_44_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_29_, v___f_43_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
if (lean_obj_tag(v___x_44_) == 0)
{
return v___x_44_;
}
else
{
lean_object* v_a_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_52_; 
v_a_45_ = lean_ctor_get(v___x_44_, 0);
v_isSharedCheck_52_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_52_ == 0)
{
v___x_47_ = v___x_44_;
v_isShared_48_ = v_isSharedCheck_52_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_a_45_);
lean_dec(v___x_44_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_52_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_50_; 
if (v_isShared_48_ == 0)
{
v___x_50_ = v___x_47_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v_a_45_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__1___redArg___boxed(lean_object* v_mvarId_53_, lean_object* v_x_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__1___redArg(v_mvarId_53_, v_x_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
lean_dec(v___y_63_);
lean_dec_ref(v___y_62_);
lean_dec(v___y_61_);
lean_dec_ref(v___y_60_);
lean_dec(v___y_59_);
lean_dec_ref(v___y_58_);
lean_dec(v___y_57_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__1(lean_object* v_00_u03b1_68_, lean_object* v_mvarId_69_, lean_object* v_x_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__1___redArg(v_mvarId_69_, v_x_70_, v___y_71_, v___y_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__1___boxed(lean_object* v_00_u03b1_84_, lean_object* v_mvarId_85_, lean_object* v_x_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__1(v_00_u03b1_84_, v_mvarId_85_, v_x_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
lean_dec(v___y_95_);
lean_dec_ref(v___y_94_);
lean_dec(v___y_93_);
lean_dec_ref(v___y_92_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
lean_dec(v___y_89_);
lean_dec(v___y_88_);
lean_dec_ref(v___y_87_);
return v_res_99_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___lam__0(lean_object* v_x_100_){
_start:
{
uint8_t v___x_101_; 
v___x_101_ = 0;
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___lam__0___boxed(lean_object* v_x_102_){
_start:
{
uint8_t v_res_103_; lean_object* v_r_104_; 
v_res_103_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___lam__0(v_x_102_);
lean_dec(v_x_102_);
v_r_104_ = lean_box(v_res_103_);
return v_r_104_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__2___redArg(lean_object* v_x_105_, lean_object* v_x_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_){
_start:
{
if (lean_obj_tag(v_x_105_) == 0)
{
lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_117_ = l_List_reverse___redArg(v_x_106_);
v___x_118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_118_, 0, v___x_117_);
return v___x_118_;
}
else
{
lean_object* v_head_119_; lean_object* v_tail_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_138_; 
v_head_119_ = lean_ctor_get(v_x_105_, 0);
v_tail_120_ = lean_ctor_get(v_x_105_, 1);
v_isSharedCheck_138_ = !lean_is_exclusive(v_x_105_);
if (v_isSharedCheck_138_ == 0)
{
v___x_122_ = v_x_105_;
v_isShared_123_ = v_isSharedCheck_138_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_tail_120_);
lean_inc(v_head_119_);
lean_dec(v_x_105_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_138_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_124_; 
v___x_124_ = l_Lean_Meta_Grind_mkGoalCore(v_head_119_, v___y_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_);
if (lean_obj_tag(v___x_124_) == 0)
{
lean_object* v_a_125_; lean_object* v___x_127_; 
v_a_125_ = lean_ctor_get(v___x_124_, 0);
lean_inc(v_a_125_);
lean_dec_ref_known(v___x_124_, 1);
if (v_isShared_123_ == 0)
{
lean_ctor_set(v___x_122_, 1, v_x_106_);
lean_ctor_set(v___x_122_, 0, v_a_125_);
v___x_127_ = v___x_122_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_a_125_);
lean_ctor_set(v_reuseFailAlloc_129_, 1, v_x_106_);
v___x_127_ = v_reuseFailAlloc_129_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
v_x_105_ = v_tail_120_;
v_x_106_ = v___x_127_;
goto _start;
}
}
else
{
lean_object* v_a_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_137_; 
lean_del_object(v___x_122_);
lean_dec(v_tail_120_);
lean_dec(v_x_106_);
v_a_130_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_137_ == 0)
{
v___x_132_ = v___x_124_;
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_a_130_);
lean_dec(v___x_124_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_135_; 
if (v_isShared_133_ == 0)
{
v___x_135_ = v___x_132_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v_a_130_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
return v___x_135_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__2___redArg___boxed(lean_object* v_x_139_, lean_object* v_x_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_){
_start:
{
lean_object* v_res_151_; 
v_res_151_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__2___redArg(v_x_139_, v_x_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_);
lean_dec(v___y_149_);
lean_dec_ref(v___y_148_);
lean_dec(v___y_147_);
lean_dec_ref(v___y_146_);
lean_dec(v___y_145_);
lean_dec_ref(v___y_144_);
lean_dec(v___y_143_);
lean_dec_ref(v___y_142_);
lean_dec(v___y_141_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2_spec__4(lean_object* v_msgData_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_){
_start:
{
lean_object* v___x_158_; lean_object* v_env_159_; lean_object* v___x_160_; lean_object* v_mctx_161_; lean_object* v_lctx_162_; lean_object* v_options_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_158_ = lean_st_ref_get(v___y_156_);
v_env_159_ = lean_ctor_get(v___x_158_, 0);
lean_inc_ref(v_env_159_);
lean_dec(v___x_158_);
v___x_160_ = lean_st_ref_get(v___y_154_);
v_mctx_161_ = lean_ctor_get(v___x_160_, 0);
lean_inc_ref(v_mctx_161_);
lean_dec(v___x_160_);
v_lctx_162_ = lean_ctor_get(v___y_153_, 2);
v_options_163_ = lean_ctor_get(v___y_155_, 2);
lean_inc_ref(v_options_163_);
lean_inc_ref(v_lctx_162_);
v___x_164_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_164_, 0, v_env_159_);
lean_ctor_set(v___x_164_, 1, v_mctx_161_);
lean_ctor_set(v___x_164_, 2, v_lctx_162_);
lean_ctor_set(v___x_164_, 3, v_options_163_);
v___x_165_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
lean_ctor_set(v___x_165_, 1, v_msgData_152_);
v___x_166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_166_, 0, v___x_165_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_msgData_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2_spec__4(v_msgData_167_, v___y_168_, v___y_169_, v___y_170_, v___y_171_);
lean_dec(v___y_171_);
lean_dec_ref(v___y_170_);
lean_dec(v___y_169_);
lean_dec_ref(v___y_168_);
return v_res_173_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2_spec__5(lean_object* v_opts_174_, lean_object* v_opt_175_){
_start:
{
lean_object* v_name_176_; lean_object* v_defValue_177_; lean_object* v_map_178_; lean_object* v___x_179_; 
v_name_176_ = lean_ctor_get(v_opt_175_, 0);
v_defValue_177_ = lean_ctor_get(v_opt_175_, 1);
v_map_178_ = lean_ctor_get(v_opts_174_, 0);
v___x_179_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_178_, v_name_176_);
if (lean_obj_tag(v___x_179_) == 0)
{
uint8_t v___x_180_; 
v___x_180_ = lean_unbox(v_defValue_177_);
return v___x_180_;
}
else
{
lean_object* v_val_181_; 
v_val_181_ = lean_ctor_get(v___x_179_, 0);
lean_inc(v_val_181_);
lean_dec_ref_known(v___x_179_, 1);
if (lean_obj_tag(v_val_181_) == 1)
{
uint8_t v_v_182_; 
v_v_182_ = lean_ctor_get_uint8(v_val_181_, 0);
lean_dec_ref_known(v_val_181_, 0);
return v_v_182_;
}
else
{
uint8_t v___x_183_; 
lean_dec(v_val_181_);
v___x_183_ = lean_unbox(v_defValue_177_);
return v___x_183_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_opts_184_, lean_object* v_opt_185_){
_start:
{
uint8_t v_res_186_; lean_object* v_r_187_; 
v_res_186_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2_spec__5(v_opts_184_, v_opt_185_);
lean_dec_ref(v_opt_185_);
lean_dec_ref(v_opts_184_);
v_r_187_ = lean_box(v_res_186_);
return v_r_187_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0(uint8_t v___y_196_, uint8_t v_suppressElabErrors_197_, lean_object* v_x_198_){
_start:
{
if (lean_obj_tag(v_x_198_) == 1)
{
lean_object* v_pre_199_; 
v_pre_199_ = lean_ctor_get(v_x_198_, 0);
switch(lean_obj_tag(v_pre_199_))
{
case 1:
{
lean_object* v_pre_200_; 
v_pre_200_ = lean_ctor_get(v_pre_199_, 0);
switch(lean_obj_tag(v_pre_200_))
{
case 0:
{
lean_object* v_str_201_; lean_object* v_str_202_; lean_object* v___x_203_; uint8_t v___x_204_; 
v_str_201_ = lean_ctor_get(v_x_198_, 1);
v_str_202_ = lean_ctor_get(v_pre_199_, 1);
v___x_203_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__0));
v___x_204_ = lean_string_dec_eq(v_str_202_, v___x_203_);
if (v___x_204_ == 0)
{
lean_object* v___x_205_; uint8_t v___x_206_; 
v___x_205_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1));
v___x_206_ = lean_string_dec_eq(v_str_202_, v___x_205_);
if (v___x_206_ == 0)
{
return v___y_196_;
}
else
{
lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_207_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__2));
v___x_208_ = lean_string_dec_eq(v_str_201_, v___x_207_);
if (v___x_208_ == 0)
{
return v___y_196_;
}
else
{
return v_suppressElabErrors_197_;
}
}
}
else
{
lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_209_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__3));
v___x_210_ = lean_string_dec_eq(v_str_201_, v___x_209_);
if (v___x_210_ == 0)
{
return v___y_196_;
}
else
{
return v_suppressElabErrors_197_;
}
}
}
case 1:
{
lean_object* v_pre_211_; 
v_pre_211_ = lean_ctor_get(v_pre_200_, 0);
if (lean_obj_tag(v_pre_211_) == 0)
{
lean_object* v_str_212_; lean_object* v_str_213_; lean_object* v_str_214_; lean_object* v___x_215_; uint8_t v___x_216_; 
v_str_212_ = lean_ctor_get(v_x_198_, 1);
v_str_213_ = lean_ctor_get(v_pre_199_, 1);
v_str_214_ = lean_ctor_get(v_pre_200_, 1);
v___x_215_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__4));
v___x_216_ = lean_string_dec_eq(v_str_214_, v___x_215_);
if (v___x_216_ == 0)
{
return v___y_196_;
}
else
{
lean_object* v___x_217_; uint8_t v___x_218_; 
v___x_217_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__5));
v___x_218_ = lean_string_dec_eq(v_str_213_, v___x_217_);
if (v___x_218_ == 0)
{
return v___y_196_;
}
else
{
lean_object* v___x_219_; uint8_t v___x_220_; 
v___x_219_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__6));
v___x_220_ = lean_string_dec_eq(v_str_212_, v___x_219_);
if (v___x_220_ == 0)
{
return v___y_196_;
}
else
{
return v_suppressElabErrors_197_;
}
}
}
}
else
{
return v___y_196_;
}
}
default: 
{
return v___y_196_;
}
}
}
case 0:
{
lean_object* v_str_221_; lean_object* v___x_222_; uint8_t v___x_223_; 
v_str_221_ = lean_ctor_get(v_x_198_, 1);
v___x_222_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__7));
v___x_223_ = lean_string_dec_eq(v_str_221_, v___x_222_);
if (v___x_223_ == 0)
{
return v___y_196_;
}
else
{
return v_suppressElabErrors_197_;
}
}
default: 
{
return v___y_196_;
}
}
}
else
{
return v___y_196_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___boxed(lean_object* v___y_224_, lean_object* v_suppressElabErrors_225_, lean_object* v_x_226_){
_start:
{
uint8_t v___y_42568__boxed_227_; uint8_t v_suppressElabErrors_boxed_228_; uint8_t v_res_229_; lean_object* v_r_230_; 
v___y_42568__boxed_227_ = lean_unbox(v___y_224_);
v_suppressElabErrors_boxed_228_ = lean_unbox(v_suppressElabErrors_225_);
v_res_229_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0(v___y_42568__boxed_227_, v_suppressElabErrors_boxed_228_, v_x_226_);
lean_dec(v_x_226_);
v_r_230_ = lean_box(v_res_229_);
return v_r_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg(lean_object* v_ref_232_, lean_object* v_msgData_233_, uint8_t v_severity_234_, uint8_t v_isSilent_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_){
_start:
{
lean_object* v___y_242_; lean_object* v___y_243_; uint8_t v___y_244_; uint8_t v___y_245_; lean_object* v___y_246_; lean_object* v___y_247_; lean_object* v___y_248_; lean_object* v___y_249_; lean_object* v___y_250_; lean_object* v___y_278_; lean_object* v___y_279_; uint8_t v___y_280_; lean_object* v___y_281_; uint8_t v___y_282_; uint8_t v___y_283_; lean_object* v___y_284_; lean_object* v___y_285_; lean_object* v___y_303_; lean_object* v___y_304_; uint8_t v___y_305_; lean_object* v___y_306_; uint8_t v___y_307_; uint8_t v___y_308_; lean_object* v___y_309_; lean_object* v___y_310_; lean_object* v___y_314_; lean_object* v___y_315_; lean_object* v___y_316_; uint8_t v___y_317_; uint8_t v___y_318_; lean_object* v___y_319_; uint8_t v___y_320_; uint8_t v___x_325_; lean_object* v___y_327_; lean_object* v___y_328_; lean_object* v___y_329_; uint8_t v___y_330_; lean_object* v___y_331_; uint8_t v___y_332_; uint8_t v___y_333_; uint8_t v___y_335_; uint8_t v___x_350_; 
v___x_325_ = 2;
v___x_350_ = l_Lean_instBEqMessageSeverity_beq(v_severity_234_, v___x_325_);
if (v___x_350_ == 0)
{
v___y_335_ = v___x_350_;
goto v___jp_334_;
}
else
{
uint8_t v___x_351_; 
lean_inc_ref(v_msgData_233_);
v___x_351_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_233_);
v___y_335_ = v___x_351_;
goto v___jp_334_;
}
v___jp_241_:
{
lean_object* v___x_251_; lean_object* v_currNamespace_252_; lean_object* v_openDecls_253_; lean_object* v_env_254_; lean_object* v_nextMacroScope_255_; lean_object* v_ngen_256_; lean_object* v_auxDeclNGen_257_; lean_object* v_traceState_258_; lean_object* v_cache_259_; lean_object* v_messages_260_; lean_object* v_infoState_261_; lean_object* v_snapshotTasks_262_; lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_276_; 
v___x_251_ = lean_st_ref_take(v___y_250_);
v_currNamespace_252_ = lean_ctor_get(v___y_249_, 6);
v_openDecls_253_ = lean_ctor_get(v___y_249_, 7);
v_env_254_ = lean_ctor_get(v___x_251_, 0);
v_nextMacroScope_255_ = lean_ctor_get(v___x_251_, 1);
v_ngen_256_ = lean_ctor_get(v___x_251_, 2);
v_auxDeclNGen_257_ = lean_ctor_get(v___x_251_, 3);
v_traceState_258_ = lean_ctor_get(v___x_251_, 4);
v_cache_259_ = lean_ctor_get(v___x_251_, 5);
v_messages_260_ = lean_ctor_get(v___x_251_, 6);
v_infoState_261_ = lean_ctor_get(v___x_251_, 7);
v_snapshotTasks_262_ = lean_ctor_get(v___x_251_, 8);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_276_ == 0)
{
v___x_264_ = v___x_251_;
v_isShared_265_ = v_isSharedCheck_276_;
goto v_resetjp_263_;
}
else
{
lean_inc(v_snapshotTasks_262_);
lean_inc(v_infoState_261_);
lean_inc(v_messages_260_);
lean_inc(v_cache_259_);
lean_inc(v_traceState_258_);
lean_inc(v_auxDeclNGen_257_);
lean_inc(v_ngen_256_);
lean_inc(v_nextMacroScope_255_);
lean_inc(v_env_254_);
lean_dec(v___x_251_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_276_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_271_; 
lean_inc(v_openDecls_253_);
lean_inc(v_currNamespace_252_);
v___x_266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_266_, 0, v_currNamespace_252_);
lean_ctor_set(v___x_266_, 1, v_openDecls_253_);
v___x_267_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_267_, 0, v___x_266_);
lean_ctor_set(v___x_267_, 1, v___y_247_);
lean_inc_ref(v___y_248_);
lean_inc_ref(v___y_243_);
v___x_268_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_268_, 0, v___y_243_);
lean_ctor_set(v___x_268_, 1, v___y_246_);
lean_ctor_set(v___x_268_, 2, v___y_242_);
lean_ctor_set(v___x_268_, 3, v___y_248_);
lean_ctor_set(v___x_268_, 4, v___x_267_);
lean_ctor_set_uint8(v___x_268_, sizeof(void*)*5, v___y_245_);
lean_ctor_set_uint8(v___x_268_, sizeof(void*)*5 + 1, v___y_244_);
lean_ctor_set_uint8(v___x_268_, sizeof(void*)*5 + 2, v_isSilent_235_);
v___x_269_ = l_Lean_MessageLog_add(v___x_268_, v_messages_260_);
if (v_isShared_265_ == 0)
{
lean_ctor_set(v___x_264_, 6, v___x_269_);
v___x_271_ = v___x_264_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_env_254_);
lean_ctor_set(v_reuseFailAlloc_275_, 1, v_nextMacroScope_255_);
lean_ctor_set(v_reuseFailAlloc_275_, 2, v_ngen_256_);
lean_ctor_set(v_reuseFailAlloc_275_, 3, v_auxDeclNGen_257_);
lean_ctor_set(v_reuseFailAlloc_275_, 4, v_traceState_258_);
lean_ctor_set(v_reuseFailAlloc_275_, 5, v_cache_259_);
lean_ctor_set(v_reuseFailAlloc_275_, 6, v___x_269_);
lean_ctor_set(v_reuseFailAlloc_275_, 7, v_infoState_261_);
lean_ctor_set(v_reuseFailAlloc_275_, 8, v_snapshotTasks_262_);
v___x_271_ = v_reuseFailAlloc_275_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_272_ = lean_st_ref_set(v___y_250_, v___x_271_);
v___x_273_ = lean_box(0);
v___x_274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_274_, 0, v___x_273_);
return v___x_274_;
}
}
}
v___jp_277_:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v_a_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_301_; 
v___x_286_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_233_);
v___x_287_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2_spec__4(v___x_286_, v___y_236_, v___y_237_, v___y_238_, v___y_239_);
v_a_288_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_301_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_301_ == 0)
{
v___x_290_ = v___x_287_;
v_isShared_291_ = v_isSharedCheck_301_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_a_288_);
lean_dec(v___x_287_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_301_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
lean_inc_ref_n(v___y_281_, 2);
v___x_292_ = l_Lean_FileMap_toPosition(v___y_281_, v___y_284_);
lean_dec(v___y_284_);
v___x_293_ = l_Lean_FileMap_toPosition(v___y_281_, v___y_285_);
lean_dec(v___y_285_);
v___x_294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
v___x_295_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___closed__0));
if (v___y_282_ == 0)
{
lean_del_object(v___x_290_);
lean_dec_ref(v___y_278_);
v___y_242_ = v___x_294_;
v___y_243_ = v___y_279_;
v___y_244_ = v___y_280_;
v___y_245_ = v___y_283_;
v___y_246_ = v___x_292_;
v___y_247_ = v_a_288_;
v___y_248_ = v___x_295_;
v___y_249_ = v___y_238_;
v___y_250_ = v___y_239_;
goto v___jp_241_;
}
else
{
uint8_t v___x_296_; 
lean_inc(v_a_288_);
v___x_296_ = l_Lean_MessageData_hasTag(v___y_278_, v_a_288_);
if (v___x_296_ == 0)
{
lean_object* v___x_297_; lean_object* v___x_299_; 
lean_dec_ref_known(v___x_294_, 1);
lean_dec_ref(v___x_292_);
lean_dec(v_a_288_);
v___x_297_ = lean_box(0);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 0, v___x_297_);
v___x_299_ = v___x_290_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v___x_297_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
return v___x_299_;
}
}
else
{
lean_del_object(v___x_290_);
v___y_242_ = v___x_294_;
v___y_243_ = v___y_279_;
v___y_244_ = v___y_280_;
v___y_245_ = v___y_283_;
v___y_246_ = v___x_292_;
v___y_247_ = v_a_288_;
v___y_248_ = v___x_295_;
v___y_249_ = v___y_238_;
v___y_250_ = v___y_239_;
goto v___jp_241_;
}
}
}
}
v___jp_302_:
{
lean_object* v___x_311_; 
v___x_311_ = l_Lean_Syntax_getTailPos_x3f(v___y_309_, v___y_308_);
lean_dec(v___y_309_);
if (lean_obj_tag(v___x_311_) == 0)
{
lean_inc(v___y_310_);
v___y_278_ = v___y_303_;
v___y_279_ = v___y_304_;
v___y_280_ = v___y_305_;
v___y_281_ = v___y_306_;
v___y_282_ = v___y_307_;
v___y_283_ = v___y_308_;
v___y_284_ = v___y_310_;
v___y_285_ = v___y_310_;
goto v___jp_277_;
}
else
{
lean_object* v_val_312_; 
v_val_312_ = lean_ctor_get(v___x_311_, 0);
lean_inc(v_val_312_);
lean_dec_ref_known(v___x_311_, 1);
v___y_278_ = v___y_303_;
v___y_279_ = v___y_304_;
v___y_280_ = v___y_305_;
v___y_281_ = v___y_306_;
v___y_282_ = v___y_307_;
v___y_283_ = v___y_308_;
v___y_284_ = v___y_310_;
v___y_285_ = v_val_312_;
goto v___jp_277_;
}
}
v___jp_313_:
{
lean_object* v_ref_321_; lean_object* v___x_322_; 
v_ref_321_ = l_Lean_replaceRef(v_ref_232_, v___y_319_);
v___x_322_ = l_Lean_Syntax_getPos_x3f(v_ref_321_, v___y_318_);
if (lean_obj_tag(v___x_322_) == 0)
{
lean_object* v___x_323_; 
v___x_323_ = lean_unsigned_to_nat(0u);
v___y_303_ = v___y_314_;
v___y_304_ = v___y_315_;
v___y_305_ = v___y_320_;
v___y_306_ = v___y_316_;
v___y_307_ = v___y_317_;
v___y_308_ = v___y_318_;
v___y_309_ = v_ref_321_;
v___y_310_ = v___x_323_;
goto v___jp_302_;
}
else
{
lean_object* v_val_324_; 
v_val_324_ = lean_ctor_get(v___x_322_, 0);
lean_inc(v_val_324_);
lean_dec_ref_known(v___x_322_, 1);
v___y_303_ = v___y_314_;
v___y_304_ = v___y_315_;
v___y_305_ = v___y_320_;
v___y_306_ = v___y_316_;
v___y_307_ = v___y_317_;
v___y_308_ = v___y_318_;
v___y_309_ = v_ref_321_;
v___y_310_ = v_val_324_;
goto v___jp_302_;
}
}
v___jp_326_:
{
if (v___y_333_ == 0)
{
v___y_314_ = v___y_328_;
v___y_315_ = v___y_327_;
v___y_316_ = v___y_329_;
v___y_317_ = v___y_330_;
v___y_318_ = v___y_332_;
v___y_319_ = v___y_331_;
v___y_320_ = v_severity_234_;
goto v___jp_313_;
}
else
{
v___y_314_ = v___y_328_;
v___y_315_ = v___y_327_;
v___y_316_ = v___y_329_;
v___y_317_ = v___y_330_;
v___y_318_ = v___y_332_;
v___y_319_ = v___y_331_;
v___y_320_ = v___x_325_;
goto v___jp_313_;
}
}
v___jp_334_:
{
if (v___y_335_ == 0)
{
lean_object* v_fileName_336_; lean_object* v_fileMap_337_; lean_object* v_options_338_; lean_object* v_ref_339_; uint8_t v_suppressElabErrors_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___f_343_; uint8_t v___x_344_; uint8_t v___x_345_; 
v_fileName_336_ = lean_ctor_get(v___y_238_, 0);
v_fileMap_337_ = lean_ctor_get(v___y_238_, 1);
v_options_338_ = lean_ctor_get(v___y_238_, 2);
v_ref_339_ = lean_ctor_get(v___y_238_, 5);
v_suppressElabErrors_340_ = lean_ctor_get_uint8(v___y_238_, sizeof(void*)*14 + 1);
v___x_341_ = lean_box(v___y_335_);
v___x_342_ = lean_box(v_suppressElabErrors_340_);
v___f_343_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_343_, 0, v___x_341_);
lean_closure_set(v___f_343_, 1, v___x_342_);
v___x_344_ = 1;
v___x_345_ = l_Lean_instBEqMessageSeverity_beq(v_severity_234_, v___x_344_);
if (v___x_345_ == 0)
{
v___y_327_ = v_fileName_336_;
v___y_328_ = v___f_343_;
v___y_329_ = v_fileMap_337_;
v___y_330_ = v_suppressElabErrors_340_;
v___y_331_ = v_ref_339_;
v___y_332_ = v___y_335_;
v___y_333_ = v___x_345_;
goto v___jp_326_;
}
else
{
lean_object* v___x_346_; uint8_t v___x_347_; 
v___x_346_ = l_Lean_warningAsError;
v___x_347_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2_spec__5(v_options_338_, v___x_346_);
v___y_327_ = v_fileName_336_;
v___y_328_ = v___f_343_;
v___y_329_ = v_fileMap_337_;
v___y_330_ = v_suppressElabErrors_340_;
v___y_331_ = v_ref_339_;
v___y_332_ = v___y_335_;
v___y_333_ = v___x_347_;
goto v___jp_326_;
}
}
else
{
lean_object* v___x_348_; lean_object* v___x_349_; 
lean_dec_ref(v_msgData_233_);
v___x_348_ = lean_box(0);
v___x_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
return v___x_349_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_ref_352_, lean_object* v_msgData_353_, lean_object* v_severity_354_, lean_object* v_isSilent_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
uint8_t v_severity_boxed_361_; uint8_t v_isSilent_boxed_362_; lean_object* v_res_363_; 
v_severity_boxed_361_ = lean_unbox(v_severity_354_);
v_isSilent_boxed_362_ = lean_unbox(v_isSilent_355_);
v_res_363_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg(v_ref_352_, v_msgData_353_, v_severity_boxed_361_, v_isSilent_boxed_362_, v___y_356_, v___y_357_, v___y_358_, v___y_359_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
lean_dec(v_ref_352_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0(lean_object* v_msgData_364_, uint8_t v_severity_365_, uint8_t v_isSilent_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_){
_start:
{
lean_object* v_ref_379_; lean_object* v___x_380_; 
v_ref_379_ = lean_ctor_get(v___y_376_, 5);
v___x_380_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg(v_ref_379_, v_msgData_364_, v_severity_365_, v_isSilent_366_, v___y_374_, v___y_375_, v___y_376_, v___y_377_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0___boxed(lean_object* v_msgData_381_, lean_object* v_severity_382_, lean_object* v_isSilent_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_){
_start:
{
uint8_t v_severity_boxed_396_; uint8_t v_isSilent_boxed_397_; lean_object* v_res_398_; 
v_severity_boxed_396_ = lean_unbox(v_severity_382_);
v_isSilent_boxed_397_ = lean_unbox(v_isSilent_383_);
v_res_398_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0(v_msgData_381_, v_severity_boxed_396_, v_isSilent_boxed_397_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_);
lean_dec(v___y_394_);
lean_dec_ref(v___y_393_);
lean_dec(v___y_392_);
lean_dec_ref(v___y_391_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec(v___y_386_);
lean_dec(v___y_385_);
lean_dec_ref(v___y_384_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0(lean_object* v_msgData_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_){
_start:
{
uint8_t v___x_412_; uint8_t v___x_413_; lean_object* v___x_414_; 
v___x_412_ = 2;
v___x_413_ = 0;
v___x_414_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0(v_msgData_399_, v___x_412_, v___x_413_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_, v___y_407_, v___y_408_, v___y_409_, v___y_410_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0___boxed(lean_object* v_msgData_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0(v_msgData_415_, v___y_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_);
lean_dec(v___y_426_);
lean_dec_ref(v___y_425_);
lean_dec(v___y_424_);
lean_dec_ref(v___y_423_);
lean_dec(v___y_422_);
lean_dec_ref(v___y_421_);
lean_dec(v___y_420_);
lean_dec_ref(v___y_419_);
lean_dec(v___y_418_);
lean_dec(v___y_417_);
lean_dec_ref(v___y_416_);
return v_res_428_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__1(void){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_430_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__0));
v___x_431_ = l_Lean_stringToMessageData(v___x_430_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run(lean_object* v_x_446_, lean_object* v_x_447_, lean_object* v_a_448_, lean_object* v_a_449_, lean_object* v_a_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_, lean_object* v_a_458_){
_start:
{
switch(lean_obj_tag(v_x_446_))
{
case 0:
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_464_ = lean_box(0);
v___x_465_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_465_, 0, v_x_447_);
lean_ctor_set(v___x_465_, 1, v___x_464_);
v___x_466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_466_, 0, v___x_465_);
return v___x_466_;
}
case 1:
{
uint8_t v_silent_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v_silent_467_ = lean_ctor_get_uint8(v_x_446_, 0);
lean_dec_ref_known(v_x_446_, 0);
v___x_468_ = lean_st_ref_get(v_a_456_);
lean_inc_ref(v_x_447_);
v___x_469_ = l_Lean_Meta_Grind_Goal_grind(v_x_447_, v_a_450_, v_a_451_, v_a_452_, v_a_453_, v_a_454_, v_a_455_, v_a_456_, v_a_457_, v_a_458_);
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v_a_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_533_; 
v_a_470_ = lean_ctor_get(v___x_469_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_533_ == 0)
{
v___x_472_ = v___x_469_;
v_isShared_473_ = v_isSharedCheck_533_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_a_470_);
lean_dec(v___x_469_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_533_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
if (lean_obj_tag(v_a_470_) == 0)
{
lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_527_; 
lean_del_object(v___x_472_);
v_isSharedCheck_527_ = !lean_is_exclusive(v_a_470_);
if (v_isSharedCheck_527_ == 0)
{
lean_object* v_unused_528_; 
v_unused_528_ = lean_ctor_get(v_a_470_, 0);
lean_dec(v_unused_528_);
v___x_475_ = v_a_470_;
v_isShared_476_ = v_isSharedCheck_527_;
goto v_resetjp_474_;
}
else
{
lean_dec(v_a_470_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_527_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_477_; lean_object* v_mctx_478_; lean_object* v_cache_479_; lean_object* v_zetaDeltaFVarIds_480_; lean_object* v_postponed_481_; lean_object* v_diag_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_525_; 
v___x_477_ = lean_st_ref_take(v_a_456_);
v_mctx_478_ = lean_ctor_get(v___x_468_, 0);
lean_inc_ref(v_mctx_478_);
lean_dec(v___x_468_);
v_cache_479_ = lean_ctor_get(v___x_477_, 1);
v_zetaDeltaFVarIds_480_ = lean_ctor_get(v___x_477_, 2);
v_postponed_481_ = lean_ctor_get(v___x_477_, 3);
v_diag_482_ = lean_ctor_get(v___x_477_, 4);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_477_);
if (v_isSharedCheck_525_ == 0)
{
lean_object* v_unused_526_; 
v_unused_526_ = lean_ctor_get(v___x_477_, 0);
lean_dec(v_unused_526_);
v___x_484_ = v___x_477_;
v_isShared_485_ = v_isSharedCheck_525_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_diag_482_);
lean_inc(v_postponed_481_);
lean_inc(v_zetaDeltaFVarIds_480_);
lean_inc(v_cache_479_);
lean_dec(v___x_477_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_525_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_487_; 
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 0, v_mctx_478_);
v___x_487_ = v___x_484_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_mctx_478_);
lean_ctor_set(v_reuseFailAlloc_524_, 1, v_cache_479_);
lean_ctor_set(v_reuseFailAlloc_524_, 2, v_zetaDeltaFVarIds_480_);
lean_ctor_set(v_reuseFailAlloc_524_, 3, v_postponed_481_);
lean_ctor_set(v_reuseFailAlloc_524_, 4, v_diag_482_);
v___x_487_ = v_reuseFailAlloc_524_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
lean_object* v___x_488_; 
v___x_488_ = lean_st_ref_set(v_a_456_, v___x_487_);
if (v_silent_467_ == 0)
{
lean_object* v_mvarId_489_; lean_object* v___x_490_; lean_object* v___x_492_; 
v_mvarId_489_ = lean_ctor_get(v_x_447_, 1);
v___x_490_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__1);
lean_inc(v_mvarId_489_);
if (v_isShared_476_ == 0)
{
lean_ctor_set_tag(v___x_475_, 1);
lean_ctor_set(v___x_475_, 0, v_mvarId_489_);
v___x_492_ = v___x_475_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v_mvarId_489_);
v___x_492_ = v_reuseFailAlloc_523_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_493_ = l_Lean_indentD(v___x_492_);
v___x_494_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_494_, 0, v___x_490_);
lean_ctor_set(v___x_494_, 1, v___x_493_);
v___x_495_ = lean_alloc_closure((void*)(l_Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0___boxed), 13, 1);
lean_closure_set(v___x_495_, 0, v___x_494_);
lean_inc(v_mvarId_489_);
v___x_496_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__1___redArg(v_mvarId_489_, v___x_495_, v_a_448_, v_a_449_, v_a_450_, v_a_451_, v_a_452_, v_a_453_, v_a_454_, v_a_455_, v_a_456_, v_a_457_, v_a_458_);
if (lean_obj_tag(v___x_496_) == 0)
{
lean_object* v___x_497_; lean_object* v_specBackwardRuleCache_498_; lean_object* v_splitBackwardRuleCache_499_; lean_object* v_invariants_500_; lean_object* v_vcs_501_; lean_object* v_simpState_502_; lean_object* v_jps_503_; lean_object* v_fuel_504_; lean_object* v_inlineHandledInvariants_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_514_; 
lean_dec_ref_known(v___x_496_, 1);
v___x_497_ = lean_st_ref_take(v_a_449_);
v_specBackwardRuleCache_498_ = lean_ctor_get(v___x_497_, 0);
v_splitBackwardRuleCache_499_ = lean_ctor_get(v___x_497_, 1);
v_invariants_500_ = lean_ctor_get(v___x_497_, 2);
v_vcs_501_ = lean_ctor_get(v___x_497_, 3);
v_simpState_502_ = lean_ctor_get(v___x_497_, 4);
v_jps_503_ = lean_ctor_get(v___x_497_, 5);
v_fuel_504_ = lean_ctor_get(v___x_497_, 6);
v_inlineHandledInvariants_505_ = lean_ctor_get(v___x_497_, 7);
v_isSharedCheck_514_ = !lean_is_exclusive(v___x_497_);
if (v_isSharedCheck_514_ == 0)
{
v___x_507_ = v___x_497_;
v_isShared_508_ = v_isSharedCheck_514_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_inlineHandledInvariants_505_);
lean_inc(v_fuel_504_);
lean_inc(v_jps_503_);
lean_inc(v_simpState_502_);
lean_inc(v_vcs_501_);
lean_inc(v_invariants_500_);
lean_inc(v_splitBackwardRuleCache_499_);
lean_inc(v_specBackwardRuleCache_498_);
lean_dec(v___x_497_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_514_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
uint8_t v___x_509_; lean_object* v___x_511_; 
v___x_509_ = 1;
if (v_isShared_508_ == 0)
{
v___x_511_ = v___x_507_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v_specBackwardRuleCache_498_);
lean_ctor_set(v_reuseFailAlloc_513_, 1, v_splitBackwardRuleCache_499_);
lean_ctor_set(v_reuseFailAlloc_513_, 2, v_invariants_500_);
lean_ctor_set(v_reuseFailAlloc_513_, 3, v_vcs_501_);
lean_ctor_set(v_reuseFailAlloc_513_, 4, v_simpState_502_);
lean_ctor_set(v_reuseFailAlloc_513_, 5, v_jps_503_);
lean_ctor_set(v_reuseFailAlloc_513_, 6, v_fuel_504_);
lean_ctor_set(v_reuseFailAlloc_513_, 7, v_inlineHandledInvariants_505_);
v___x_511_ = v_reuseFailAlloc_513_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
lean_object* v___x_512_; 
lean_ctor_set_uint8(v___x_511_, sizeof(void*)*8, v___x_509_);
v___x_512_ = lean_st_ref_set(v_a_449_, v___x_511_);
goto v___jp_460_;
}
}
}
else
{
lean_object* v_a_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_522_; 
lean_dec_ref(v_x_447_);
v_a_515_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_522_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_522_ == 0)
{
v___x_517_ = v___x_496_;
v_isShared_518_ = v_isSharedCheck_522_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_a_515_);
lean_dec(v___x_496_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_522_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_520_; 
if (v_isShared_518_ == 0)
{
v___x_520_ = v___x_517_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v_a_515_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
return v___x_520_;
}
}
}
}
}
else
{
lean_del_object(v___x_475_);
goto v___jp_460_;
}
}
}
}
}
else
{
lean_object* v___x_529_; lean_object* v___x_531_; 
lean_dec(v___x_468_);
lean_dec_ref(v_x_447_);
v___x_529_ = lean_box(0);
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 0, v___x_529_);
v___x_531_ = v___x_472_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v___x_529_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
}
else
{
lean_object* v_a_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_541_; 
lean_dec(v___x_468_);
lean_dec_ref(v_x_447_);
v_a_534_ = lean_ctor_get(v___x_469_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_541_ == 0)
{
v___x_536_ = v___x_469_;
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_a_534_);
lean_dec(v___x_469_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v___x_539_; 
if (v_isShared_537_ == 0)
{
v___x_539_ = v___x_536_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_a_534_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
}
}
default: 
{
lean_object* v_tac_542_; lean_object* v_mvarId_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v_tac_542_ = lean_ctor_get(v_x_446_, 0);
lean_inc(v_tac_542_);
lean_dec_ref_known(v_x_446_, 1);
v_mvarId_543_ = lean_ctor_get(v_x_447_, 1);
lean_inc(v_mvarId_543_);
lean_dec_ref(v_x_447_);
v___x_544_ = lean_box(0);
v___x_545_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__4));
v___x_546_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__5));
v___x_547_ = l_Lean_Elab_runTactic(v_mvarId_543_, v_tac_542_, v___x_545_, v___x_546_, v_a_455_, v_a_456_, v_a_457_, v_a_458_);
if (lean_obj_tag(v___x_547_) == 0)
{
lean_object* v_a_548_; lean_object* v_fst_549_; lean_object* v___x_550_; 
v_a_548_ = lean_ctor_get(v___x_547_, 0);
lean_inc(v_a_548_);
lean_dec_ref_known(v___x_547_, 1);
v_fst_549_ = lean_ctor_get(v_a_548_, 0);
lean_inc(v_fst_549_);
lean_dec(v_a_548_);
v___x_550_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__2___redArg(v_fst_549_, v___x_544_, v_a_450_, v_a_451_, v_a_452_, v_a_453_, v_a_454_, v_a_455_, v_a_456_, v_a_457_, v_a_458_);
return v___x_550_;
}
else
{
lean_object* v_a_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_558_; 
v_a_551_ = lean_ctor_get(v___x_547_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_547_);
if (v_isSharedCheck_558_ == 0)
{
v___x_553_ = v___x_547_;
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_a_551_);
lean_dec(v___x_547_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_556_; 
if (v_isShared_554_ == 0)
{
v___x_556_ = v___x_553_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_a_551_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
}
}
}
v___jp_460_:
{
lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_461_ = lean_box(0);
v___x_462_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_462_, 0, v_x_447_);
lean_ctor_set(v___x_462_, 1, v___x_461_);
v___x_463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_463_, 0, v___x_462_);
return v___x_463_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___boxed(lean_object* v_x_559_, lean_object* v_x_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run(v_x_559_, v_x_560_, v_a_561_, v_a_562_, v_a_563_, v_a_564_, v_a_565_, v_a_566_, v_a_567_, v_a_568_, v_a_569_, v_a_570_, v_a_571_);
lean_dec(v_a_571_);
lean_dec_ref(v_a_570_);
lean_dec(v_a_569_);
lean_dec_ref(v_a_568_);
lean_dec(v_a_567_);
lean_dec_ref(v_a_566_);
lean_dec(v_a_565_);
lean_dec_ref(v_a_564_);
lean_dec(v_a_563_);
lean_dec(v_a_562_);
lean_dec_ref(v_a_561_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__2(lean_object* v_x_574_, lean_object* v_x_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_){
_start:
{
lean_object* v___x_588_; 
v___x_588_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__2___redArg(v_x_574_, v_x_575_, v___y_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__2___boxed(lean_object* v_x_589_, lean_object* v_x_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_){
_start:
{
lean_object* v_res_603_; 
v_res_603_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__2(v_x_589_, v_x_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
lean_dec(v___y_601_);
lean_dec_ref(v___y_600_);
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
lean_dec(v___y_597_);
lean_dec_ref(v___y_596_);
lean_dec(v___y_595_);
lean_dec_ref(v___y_594_);
lean_dec(v___y_593_);
lean_dec(v___y_592_);
lean_dec_ref(v___y_591_);
return v_res_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2(lean_object* v_ref_604_, lean_object* v_msgData_605_, uint8_t v_severity_606_, uint8_t v_isSilent_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_){
_start:
{
lean_object* v___x_620_; 
v___x_620_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___redArg(v_ref_604_, v_msgData_605_, v_severity_606_, v_isSilent_607_, v___y_615_, v___y_616_, v___y_617_, v___y_618_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2___boxed(lean_object* v_ref_621_, lean_object* v_msgData_622_, lean_object* v_severity_623_, lean_object* v_isSilent_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_){
_start:
{
uint8_t v_severity_boxed_637_; uint8_t v_isSilent_boxed_638_; lean_object* v_res_639_; 
v_severity_boxed_637_ = lean_unbox(v_severity_623_);
v_isSilent_boxed_638_ = lean_unbox(v_isSilent_624_);
v_res_639_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2(v_ref_621_, v_msgData_622_, v_severity_boxed_637_, v_isSilent_boxed_638_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_, v___y_634_, v___y_635_);
lean_dec(v___y_635_);
lean_dec_ref(v___y_634_);
lean_dec(v___y_633_);
lean_dec_ref(v___y_632_);
lean_dec(v___y_631_);
lean_dec_ref(v___y_630_);
lean_dec(v___y_629_);
lean_dec_ref(v___y_628_);
lean_dec(v___y_627_);
lean_dec(v___y_626_);
lean_dec_ref(v___y_625_);
lean_dec(v_ref_621_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2___redArg(lean_object* v_mvarId_640_, lean_object* v___y_641_){
_start:
{
lean_object* v___x_643_; lean_object* v_mctx_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_643_ = lean_st_ref_get(v___y_641_);
v_mctx_644_ = lean_ctor_get(v___x_643_, 0);
lean_inc_ref(v_mctx_644_);
lean_dec(v___x_643_);
v___x_645_ = l_Lean_MetavarContext_getExprAssignmentCore_x3f(v_mctx_644_, v_mvarId_640_);
lean_dec_ref(v_mctx_644_);
v___x_646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_646_, 0, v___x_645_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2___redArg___boxed(lean_object* v_mvarId_647_, lean_object* v___y_648_, lean_object* v___y_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2___redArg(v_mvarId_647_, v___y_648_);
lean_dec(v___y_648_);
lean_dec(v_mvarId_647_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2(lean_object* v_mvarId_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_){
_start:
{
lean_object* v___x_659_; 
v___x_659_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2___redArg(v_mvarId_651_, v___y_655_);
return v___x_659_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2___boxed(lean_object* v_mvarId_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_){
_start:
{
lean_object* v_res_668_; 
v_res_668_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2(v_mvarId_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_, v___y_665_, v___y_666_);
lean_dec(v___y_666_);
lean_dec_ref(v___y_665_);
lean_dec(v___y_664_);
lean_dec_ref(v___y_663_);
lean_dec(v___y_662_);
lean_dec_ref(v___y_661_);
lean_dec(v_mvarId_660_);
return v_res_668_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___redArg(lean_object* v_keys_669_, lean_object* v_i_670_, lean_object* v_k_671_){
_start:
{
lean_object* v___x_672_; uint8_t v___x_673_; 
v___x_672_ = lean_array_get_size(v_keys_669_);
v___x_673_ = lean_nat_dec_lt(v_i_670_, v___x_672_);
if (v___x_673_ == 0)
{
lean_dec(v_i_670_);
return v___x_673_;
}
else
{
lean_object* v_k_x27_674_; uint8_t v___x_675_; 
v_k_x27_674_ = lean_array_fget_borrowed(v_keys_669_, v_i_670_);
v___x_675_ = l_Lean_instBEqMVarId_beq(v_k_671_, v_k_x27_674_);
if (v___x_675_ == 0)
{
lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_676_ = lean_unsigned_to_nat(1u);
v___x_677_ = lean_nat_add(v_i_670_, v___x_676_);
lean_dec(v_i_670_);
v_i_670_ = v___x_677_;
goto _start;
}
else
{
lean_dec(v_i_670_);
return v___x_675_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___redArg___boxed(lean_object* v_keys_679_, lean_object* v_i_680_, lean_object* v_k_681_){
_start:
{
uint8_t v_res_682_; lean_object* v_r_683_; 
v_res_682_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___redArg(v_keys_679_, v_i_680_, v_k_681_);
lean_dec(v_k_681_);
lean_dec_ref(v_keys_679_);
v_r_683_ = lean_box(v_res_682_);
return v_r_683_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__0(void){
_start:
{
size_t v___x_684_; size_t v___x_685_; size_t v___x_686_; 
v___x_684_ = ((size_t)5ULL);
v___x_685_ = ((size_t)1ULL);
v___x_686_ = lean_usize_shift_left(v___x_685_, v___x_684_);
return v___x_686_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_687_; size_t v___x_688_; size_t v___x_689_; 
v___x_687_ = ((size_t)1ULL);
v___x_688_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__0);
v___x_689_ = lean_usize_sub(v___x_688_, v___x_687_);
return v___x_689_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg(lean_object* v_x_690_, size_t v_x_691_, lean_object* v_x_692_){
_start:
{
if (lean_obj_tag(v_x_690_) == 0)
{
lean_object* v_es_693_; lean_object* v___x_694_; size_t v___x_695_; size_t v___x_696_; size_t v___x_697_; lean_object* v_j_698_; lean_object* v___x_699_; 
v_es_693_ = lean_ctor_get(v_x_690_, 0);
v___x_694_ = lean_box(2);
v___x_695_ = ((size_t)5ULL);
v___x_696_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__1);
v___x_697_ = lean_usize_land(v_x_691_, v___x_696_);
v_j_698_ = lean_usize_to_nat(v___x_697_);
v___x_699_ = lean_array_get_borrowed(v___x_694_, v_es_693_, v_j_698_);
lean_dec(v_j_698_);
switch(lean_obj_tag(v___x_699_))
{
case 0:
{
lean_object* v_key_700_; uint8_t v___x_701_; 
v_key_700_ = lean_ctor_get(v___x_699_, 0);
v___x_701_ = l_Lean_instBEqMVarId_beq(v_x_692_, v_key_700_);
return v___x_701_;
}
case 1:
{
lean_object* v_node_702_; size_t v___x_703_; 
v_node_702_ = lean_ctor_get(v___x_699_, 0);
v___x_703_ = lean_usize_shift_right(v_x_691_, v___x_695_);
v_x_690_ = v_node_702_;
v_x_691_ = v___x_703_;
goto _start;
}
default: 
{
uint8_t v___x_705_; 
v___x_705_ = 0;
return v___x_705_;
}
}
}
else
{
lean_object* v_ks_706_; lean_object* v___x_707_; uint8_t v___x_708_; 
v_ks_706_ = lean_ctor_get(v_x_690_, 0);
v___x_707_ = lean_unsigned_to_nat(0u);
v___x_708_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___redArg(v_ks_706_, v___x_707_, v_x_692_);
return v___x_708_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_x_709_, lean_object* v_x_710_, lean_object* v_x_711_){
_start:
{
size_t v_x_17592__boxed_712_; uint8_t v_res_713_; lean_object* v_r_714_; 
v_x_17592__boxed_712_ = lean_unbox_usize(v_x_710_);
lean_dec(v_x_710_);
v_res_713_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg(v_x_709_, v_x_17592__boxed_712_, v_x_711_);
lean_dec(v_x_711_);
lean_dec_ref(v_x_709_);
v_r_714_ = lean_box(v_res_713_);
return v_r_714_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2___redArg(lean_object* v_x_715_, lean_object* v_x_716_){
_start:
{
uint64_t v___x_717_; size_t v___x_718_; uint8_t v___x_719_; 
v___x_717_ = l_Lean_instHashableMVarId_hash(v_x_716_);
v___x_718_ = lean_uint64_to_usize(v___x_717_);
v___x_719_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg(v_x_715_, v___x_718_, v_x_716_);
return v___x_719_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2___redArg___boxed(lean_object* v_x_720_, lean_object* v_x_721_){
_start:
{
uint8_t v_res_722_; lean_object* v_r_723_; 
v_res_722_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2___redArg(v_x_720_, v_x_721_);
lean_dec(v_x_721_);
lean_dec_ref(v_x_720_);
v_r_723_ = lean_box(v_res_722_);
return v_r_723_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1___redArg(lean_object* v_mvarId_724_, lean_object* v___y_725_){
_start:
{
lean_object* v___x_727_; lean_object* v_mctx_728_; lean_object* v_eAssignment_729_; uint8_t v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
v___x_727_ = lean_st_ref_get(v___y_725_);
v_mctx_728_ = lean_ctor_get(v___x_727_, 0);
lean_inc_ref(v_mctx_728_);
lean_dec(v___x_727_);
v_eAssignment_729_ = lean_ctor_get(v_mctx_728_, 8);
lean_inc_ref(v_eAssignment_729_);
lean_dec_ref(v_mctx_728_);
v___x_730_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2___redArg(v_eAssignment_729_, v_mvarId_724_);
lean_dec_ref(v_eAssignment_729_);
v___x_731_ = lean_box(v___x_730_);
v___x_732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_732_, 0, v___x_731_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1___redArg___boxed(lean_object* v_mvarId_733_, lean_object* v___y_734_, lean_object* v___y_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1___redArg(v_mvarId_733_, v___y_734_);
lean_dec(v___y_734_);
lean_dec(v_mvarId_733_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9_spec__10___redArg(lean_object* v_x_737_, lean_object* v_x_738_, lean_object* v_x_739_, lean_object* v_x_740_){
_start:
{
lean_object* v_ks_741_; lean_object* v_vs_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_766_; 
v_ks_741_ = lean_ctor_get(v_x_737_, 0);
v_vs_742_ = lean_ctor_get(v_x_737_, 1);
v_isSharedCheck_766_ = !lean_is_exclusive(v_x_737_);
if (v_isSharedCheck_766_ == 0)
{
v___x_744_ = v_x_737_;
v_isShared_745_ = v_isSharedCheck_766_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_vs_742_);
lean_inc(v_ks_741_);
lean_dec(v_x_737_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_766_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_746_; uint8_t v___x_747_; 
v___x_746_ = lean_array_get_size(v_ks_741_);
v___x_747_ = lean_nat_dec_lt(v_x_738_, v___x_746_);
if (v___x_747_ == 0)
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_751_; 
lean_dec(v_x_738_);
v___x_748_ = lean_array_push(v_ks_741_, v_x_739_);
v___x_749_ = lean_array_push(v_vs_742_, v_x_740_);
if (v_isShared_745_ == 0)
{
lean_ctor_set(v___x_744_, 1, v___x_749_);
lean_ctor_set(v___x_744_, 0, v___x_748_);
v___x_751_ = v___x_744_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v___x_748_);
lean_ctor_set(v_reuseFailAlloc_752_, 1, v___x_749_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
return v___x_751_;
}
}
else
{
lean_object* v_k_x27_753_; uint8_t v___x_754_; 
v_k_x27_753_ = lean_array_fget_borrowed(v_ks_741_, v_x_738_);
v___x_754_ = l_Lean_instBEqMVarId_beq(v_x_739_, v_k_x27_753_);
if (v___x_754_ == 0)
{
lean_object* v___x_756_; 
if (v_isShared_745_ == 0)
{
v___x_756_ = v___x_744_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_ks_741_);
lean_ctor_set(v_reuseFailAlloc_760_, 1, v_vs_742_);
v___x_756_ = v_reuseFailAlloc_760_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_757_ = lean_unsigned_to_nat(1u);
v___x_758_ = lean_nat_add(v_x_738_, v___x_757_);
lean_dec(v_x_738_);
v_x_737_ = v___x_756_;
v_x_738_ = v___x_758_;
goto _start;
}
}
else
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_764_; 
v___x_761_ = lean_array_fset(v_ks_741_, v_x_738_, v_x_739_);
v___x_762_ = lean_array_fset(v_vs_742_, v_x_738_, v_x_740_);
lean_dec(v_x_738_);
if (v_isShared_745_ == 0)
{
lean_ctor_set(v___x_744_, 1, v___x_762_);
lean_ctor_set(v___x_744_, 0, v___x_761_);
v___x_764_ = v___x_744_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v___x_761_);
lean_ctor_set(v_reuseFailAlloc_765_, 1, v___x_762_);
v___x_764_ = v_reuseFailAlloc_765_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
return v___x_764_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9___redArg(lean_object* v_n_767_, lean_object* v_k_768_, lean_object* v_v_769_){
_start:
{
lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_770_ = lean_unsigned_to_nat(0u);
v___x_771_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9_spec__10___redArg(v_n_767_, v___x_770_, v_k_768_, v_v_769_);
return v___x_771_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_772_; 
v___x_772_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_772_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg(lean_object* v_x_773_, size_t v_x_774_, size_t v_x_775_, lean_object* v_x_776_, lean_object* v_x_777_){
_start:
{
if (lean_obj_tag(v_x_773_) == 0)
{
lean_object* v_es_778_; size_t v___x_779_; size_t v___x_780_; size_t v___x_781_; size_t v___x_782_; lean_object* v_j_783_; lean_object* v___x_784_; uint8_t v___x_785_; 
v_es_778_ = lean_ctor_get(v_x_773_, 0);
v___x_779_ = ((size_t)5ULL);
v___x_780_ = ((size_t)1ULL);
v___x_781_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__1);
v___x_782_ = lean_usize_land(v_x_774_, v___x_781_);
v_j_783_ = lean_usize_to_nat(v___x_782_);
v___x_784_ = lean_array_get_size(v_es_778_);
v___x_785_ = lean_nat_dec_lt(v_j_783_, v___x_784_);
if (v___x_785_ == 0)
{
lean_dec(v_j_783_);
lean_dec(v_x_777_);
lean_dec(v_x_776_);
return v_x_773_;
}
else
{
lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_822_; 
lean_inc_ref(v_es_778_);
v_isSharedCheck_822_ = !lean_is_exclusive(v_x_773_);
if (v_isSharedCheck_822_ == 0)
{
lean_object* v_unused_823_; 
v_unused_823_ = lean_ctor_get(v_x_773_, 0);
lean_dec(v_unused_823_);
v___x_787_ = v_x_773_;
v_isShared_788_ = v_isSharedCheck_822_;
goto v_resetjp_786_;
}
else
{
lean_dec(v_x_773_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_822_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v_v_789_; lean_object* v___x_790_; lean_object* v_xs_x27_791_; lean_object* v___y_793_; 
v_v_789_ = lean_array_fget(v_es_778_, v_j_783_);
v___x_790_ = lean_box(0);
v_xs_x27_791_ = lean_array_fset(v_es_778_, v_j_783_, v___x_790_);
switch(lean_obj_tag(v_v_789_))
{
case 0:
{
lean_object* v_key_798_; lean_object* v_val_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_809_; 
v_key_798_ = lean_ctor_get(v_v_789_, 0);
v_val_799_ = lean_ctor_get(v_v_789_, 1);
v_isSharedCheck_809_ = !lean_is_exclusive(v_v_789_);
if (v_isSharedCheck_809_ == 0)
{
v___x_801_ = v_v_789_;
v_isShared_802_ = v_isSharedCheck_809_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_val_799_);
lean_inc(v_key_798_);
lean_dec(v_v_789_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_809_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
uint8_t v___x_803_; 
v___x_803_ = l_Lean_instBEqMVarId_beq(v_x_776_, v_key_798_);
if (v___x_803_ == 0)
{
lean_object* v___x_804_; lean_object* v___x_805_; 
lean_del_object(v___x_801_);
v___x_804_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_798_, v_val_799_, v_x_776_, v_x_777_);
v___x_805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_805_, 0, v___x_804_);
v___y_793_ = v___x_805_;
goto v___jp_792_;
}
else
{
lean_object* v___x_807_; 
lean_dec(v_val_799_);
lean_dec(v_key_798_);
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 1, v_x_777_);
lean_ctor_set(v___x_801_, 0, v_x_776_);
v___x_807_ = v___x_801_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v_x_776_);
lean_ctor_set(v_reuseFailAlloc_808_, 1, v_x_777_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
v___y_793_ = v___x_807_;
goto v___jp_792_;
}
}
}
}
case 1:
{
lean_object* v_node_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_820_; 
v_node_810_ = lean_ctor_get(v_v_789_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v_v_789_);
if (v_isSharedCheck_820_ == 0)
{
v___x_812_ = v_v_789_;
v_isShared_813_ = v_isSharedCheck_820_;
goto v_resetjp_811_;
}
else
{
lean_inc(v_node_810_);
lean_dec(v_v_789_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_820_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
size_t v___x_814_; size_t v___x_815_; lean_object* v___x_816_; lean_object* v___x_818_; 
v___x_814_ = lean_usize_shift_right(v_x_774_, v___x_779_);
v___x_815_ = lean_usize_add(v_x_775_, v___x_780_);
v___x_816_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg(v_node_810_, v___x_814_, v___x_815_, v_x_776_, v_x_777_);
if (v_isShared_813_ == 0)
{
lean_ctor_set(v___x_812_, 0, v___x_816_);
v___x_818_ = v___x_812_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v___x_816_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
v___y_793_ = v___x_818_;
goto v___jp_792_;
}
}
}
default: 
{
lean_object* v___x_821_; 
v___x_821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_821_, 0, v_x_776_);
lean_ctor_set(v___x_821_, 1, v_x_777_);
v___y_793_ = v___x_821_;
goto v___jp_792_;
}
}
v___jp_792_:
{
lean_object* v___x_794_; lean_object* v___x_796_; 
v___x_794_ = lean_array_fset(v_xs_x27_791_, v_j_783_, v___y_793_);
lean_dec(v_j_783_);
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 0, v___x_794_);
v___x_796_ = v___x_787_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v___x_794_);
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
}
else
{
lean_object* v_ks_824_; lean_object* v_vs_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_845_; 
v_ks_824_ = lean_ctor_get(v_x_773_, 0);
v_vs_825_ = lean_ctor_get(v_x_773_, 1);
v_isSharedCheck_845_ = !lean_is_exclusive(v_x_773_);
if (v_isSharedCheck_845_ == 0)
{
v___x_827_ = v_x_773_;
v_isShared_828_ = v_isSharedCheck_845_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_vs_825_);
lean_inc(v_ks_824_);
lean_dec(v_x_773_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_845_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v___x_830_; 
if (v_isShared_828_ == 0)
{
v___x_830_ = v___x_827_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v_ks_824_);
lean_ctor_set(v_reuseFailAlloc_844_, 1, v_vs_825_);
v___x_830_ = v_reuseFailAlloc_844_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
lean_object* v_newNode_831_; uint8_t v___y_833_; size_t v___x_839_; uint8_t v___x_840_; 
v_newNode_831_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9___redArg(v___x_830_, v_x_776_, v_x_777_);
v___x_839_ = ((size_t)7ULL);
v___x_840_ = lean_usize_dec_le(v___x_839_, v_x_775_);
if (v___x_840_ == 0)
{
lean_object* v___x_841_; lean_object* v___x_842_; uint8_t v___x_843_; 
v___x_841_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_831_);
v___x_842_ = lean_unsigned_to_nat(4u);
v___x_843_ = lean_nat_dec_lt(v___x_841_, v___x_842_);
lean_dec(v___x_841_);
v___y_833_ = v___x_843_;
goto v___jp_832_;
}
else
{
v___y_833_ = v___x_840_;
goto v___jp_832_;
}
v___jp_832_:
{
if (v___y_833_ == 0)
{
lean_object* v_ks_834_; lean_object* v_vs_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v_ks_834_ = lean_ctor_get(v_newNode_831_, 0);
lean_inc_ref(v_ks_834_);
v_vs_835_ = lean_ctor_get(v_newNode_831_, 1);
lean_inc_ref(v_vs_835_);
lean_dec_ref(v_newNode_831_);
v___x_836_ = lean_unsigned_to_nat(0u);
v___x_837_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___closed__0);
v___x_838_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___redArg(v_x_775_, v_ks_834_, v_vs_835_, v___x_836_, v___x_837_);
lean_dec_ref(v_vs_835_);
lean_dec_ref(v_ks_834_);
return v___x_838_;
}
else
{
return v_newNode_831_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___redArg(size_t v_depth_846_, lean_object* v_keys_847_, lean_object* v_vals_848_, lean_object* v_i_849_, lean_object* v_entries_850_){
_start:
{
lean_object* v___x_851_; uint8_t v___x_852_; 
v___x_851_ = lean_array_get_size(v_keys_847_);
v___x_852_ = lean_nat_dec_lt(v_i_849_, v___x_851_);
if (v___x_852_ == 0)
{
lean_dec(v_i_849_);
return v_entries_850_;
}
else
{
lean_object* v_k_853_; lean_object* v_v_854_; uint64_t v___x_855_; size_t v_h_856_; size_t v___x_857_; lean_object* v___x_858_; size_t v___x_859_; size_t v___x_860_; size_t v___x_861_; size_t v_h_862_; lean_object* v___x_863_; lean_object* v___x_864_; 
v_k_853_ = lean_array_fget_borrowed(v_keys_847_, v_i_849_);
v_v_854_ = lean_array_fget_borrowed(v_vals_848_, v_i_849_);
v___x_855_ = l_Lean_instHashableMVarId_hash(v_k_853_);
v_h_856_ = lean_uint64_to_usize(v___x_855_);
v___x_857_ = ((size_t)5ULL);
v___x_858_ = lean_unsigned_to_nat(1u);
v___x_859_ = ((size_t)1ULL);
v___x_860_ = lean_usize_sub(v_depth_846_, v___x_859_);
v___x_861_ = lean_usize_mul(v___x_857_, v___x_860_);
v_h_862_ = lean_usize_shift_right(v_h_856_, v___x_861_);
v___x_863_ = lean_nat_add(v_i_849_, v___x_858_);
lean_dec(v_i_849_);
lean_inc(v_v_854_);
lean_inc(v_k_853_);
v___x_864_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg(v_entries_850_, v_h_862_, v_depth_846_, v_k_853_, v_v_854_);
v_i_849_ = v___x_863_;
v_entries_850_ = v___x_864_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___redArg___boxed(lean_object* v_depth_866_, lean_object* v_keys_867_, lean_object* v_vals_868_, lean_object* v_i_869_, lean_object* v_entries_870_){
_start:
{
size_t v_depth_boxed_871_; lean_object* v_res_872_; 
v_depth_boxed_871_ = lean_unbox_usize(v_depth_866_);
lean_dec(v_depth_866_);
v_res_872_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___redArg(v_depth_boxed_871_, v_keys_867_, v_vals_868_, v_i_869_, v_entries_870_);
lean_dec_ref(v_vals_868_);
lean_dec_ref(v_keys_867_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___boxed(lean_object* v_x_873_, lean_object* v_x_874_, lean_object* v_x_875_, lean_object* v_x_876_, lean_object* v_x_877_){
_start:
{
size_t v_x_17747__boxed_878_; size_t v_x_17748__boxed_879_; lean_object* v_res_880_; 
v_x_17747__boxed_878_ = lean_unbox_usize(v_x_874_);
lean_dec(v_x_874_);
v_x_17748__boxed_879_ = lean_unbox_usize(v_x_875_);
lean_dec(v_x_875_);
v_res_880_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg(v_x_873_, v_x_17747__boxed_878_, v_x_17748__boxed_879_, v_x_876_, v_x_877_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5___redArg(lean_object* v_x_881_, lean_object* v_x_882_, lean_object* v_x_883_){
_start:
{
uint64_t v___x_884_; size_t v___x_885_; size_t v___x_886_; lean_object* v___x_887_; 
v___x_884_ = l_Lean_instHashableMVarId_hash(v_x_882_);
v___x_885_ = lean_uint64_to_usize(v___x_884_);
v___x_886_ = ((size_t)1ULL);
v___x_887_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg(v_x_881_, v___x_885_, v___x_886_, v_x_882_, v_x_883_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3___redArg(lean_object* v_mvarId_888_, lean_object* v_val_889_, lean_object* v___y_890_){
_start:
{
lean_object* v___x_892_; lean_object* v_mctx_893_; lean_object* v_cache_894_; lean_object* v_zetaDeltaFVarIds_895_; lean_object* v_postponed_896_; lean_object* v_diag_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_925_; 
v___x_892_ = lean_st_ref_take(v___y_890_);
v_mctx_893_ = lean_ctor_get(v___x_892_, 0);
v_cache_894_ = lean_ctor_get(v___x_892_, 1);
v_zetaDeltaFVarIds_895_ = lean_ctor_get(v___x_892_, 2);
v_postponed_896_ = lean_ctor_get(v___x_892_, 3);
v_diag_897_ = lean_ctor_get(v___x_892_, 4);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_892_);
if (v_isSharedCheck_925_ == 0)
{
v___x_899_ = v___x_892_;
v_isShared_900_ = v_isSharedCheck_925_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_diag_897_);
lean_inc(v_postponed_896_);
lean_inc(v_zetaDeltaFVarIds_895_);
lean_inc(v_cache_894_);
lean_inc(v_mctx_893_);
lean_dec(v___x_892_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_925_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v_depth_901_; lean_object* v_levelAssignDepth_902_; lean_object* v_lmvarCounter_903_; lean_object* v_mvarCounter_904_; lean_object* v_lDecls_905_; lean_object* v_decls_906_; lean_object* v_userNames_907_; lean_object* v_lAssignment_908_; lean_object* v_eAssignment_909_; lean_object* v_dAssignment_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_924_; 
v_depth_901_ = lean_ctor_get(v_mctx_893_, 0);
v_levelAssignDepth_902_ = lean_ctor_get(v_mctx_893_, 1);
v_lmvarCounter_903_ = lean_ctor_get(v_mctx_893_, 2);
v_mvarCounter_904_ = lean_ctor_get(v_mctx_893_, 3);
v_lDecls_905_ = lean_ctor_get(v_mctx_893_, 4);
v_decls_906_ = lean_ctor_get(v_mctx_893_, 5);
v_userNames_907_ = lean_ctor_get(v_mctx_893_, 6);
v_lAssignment_908_ = lean_ctor_get(v_mctx_893_, 7);
v_eAssignment_909_ = lean_ctor_get(v_mctx_893_, 8);
v_dAssignment_910_ = lean_ctor_get(v_mctx_893_, 9);
v_isSharedCheck_924_ = !lean_is_exclusive(v_mctx_893_);
if (v_isSharedCheck_924_ == 0)
{
v___x_912_ = v_mctx_893_;
v_isShared_913_ = v_isSharedCheck_924_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_dAssignment_910_);
lean_inc(v_eAssignment_909_);
lean_inc(v_lAssignment_908_);
lean_inc(v_userNames_907_);
lean_inc(v_decls_906_);
lean_inc(v_lDecls_905_);
lean_inc(v_mvarCounter_904_);
lean_inc(v_lmvarCounter_903_);
lean_inc(v_levelAssignDepth_902_);
lean_inc(v_depth_901_);
lean_dec(v_mctx_893_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_924_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_914_; lean_object* v___x_916_; 
v___x_914_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5___redArg(v_eAssignment_909_, v_mvarId_888_, v_val_889_);
if (v_isShared_913_ == 0)
{
lean_ctor_set(v___x_912_, 8, v___x_914_);
v___x_916_ = v___x_912_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v_depth_901_);
lean_ctor_set(v_reuseFailAlloc_923_, 1, v_levelAssignDepth_902_);
lean_ctor_set(v_reuseFailAlloc_923_, 2, v_lmvarCounter_903_);
lean_ctor_set(v_reuseFailAlloc_923_, 3, v_mvarCounter_904_);
lean_ctor_set(v_reuseFailAlloc_923_, 4, v_lDecls_905_);
lean_ctor_set(v_reuseFailAlloc_923_, 5, v_decls_906_);
lean_ctor_set(v_reuseFailAlloc_923_, 6, v_userNames_907_);
lean_ctor_set(v_reuseFailAlloc_923_, 7, v_lAssignment_908_);
lean_ctor_set(v_reuseFailAlloc_923_, 8, v___x_914_);
lean_ctor_set(v_reuseFailAlloc_923_, 9, v_dAssignment_910_);
v___x_916_ = v_reuseFailAlloc_923_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
lean_object* v___x_918_; 
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 0, v___x_916_);
v___x_918_ = v___x_899_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v___x_916_);
lean_ctor_set(v_reuseFailAlloc_922_, 1, v_cache_894_);
lean_ctor_set(v_reuseFailAlloc_922_, 2, v_zetaDeltaFVarIds_895_);
lean_ctor_set(v_reuseFailAlloc_922_, 3, v_postponed_896_);
lean_ctor_set(v_reuseFailAlloc_922_, 4, v_diag_897_);
v___x_918_ = v_reuseFailAlloc_922_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_919_ = lean_st_ref_set(v___y_890_, v___x_918_);
v___x_920_ = lean_box(0);
v___x_921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_921_, 0, v___x_920_);
return v___x_921_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3___redArg___boxed(lean_object* v_mvarId_926_, lean_object* v_val_927_, lean_object* v___y_928_, lean_object* v___y_929_){
_start:
{
lean_object* v_res_930_; 
v_res_930_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3___redArg(v_mvarId_926_, v_val_927_, v___y_928_);
lean_dec(v___y_928_);
return v_res_930_;
}
}
static uint64_t _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__2(void){
_start:
{
uint8_t v___x_937_; uint64_t v___x_938_; 
v___x_937_ = 1;
v___x_938_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_937_);
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1(lean_object* v___f_939_, lean_object* v_mv_940_, lean_object* v_val_941_, lean_object* v_tac_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_){
_start:
{
lean_object* v___x_950_; lean_object* v___x_951_; uint8_t v___x_952_; lean_object* v___x_956_; uint8_t v___x_957_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v_fileName_996_; lean_object* v_fileMap_997_; lean_object* v_options_998_; lean_object* v_currRecDepth_999_; lean_object* v_maxRecDepth_1000_; lean_object* v_ref_1001_; lean_object* v_currNamespace_1002_; lean_object* v_openDecls_1003_; lean_object* v_initHeartbeats_1004_; lean_object* v_maxHeartbeats_1005_; lean_object* v_quotContext_1006_; lean_object* v_currMacroScope_1007_; uint8_t v_diag_1008_; lean_object* v_cancelTk_x3f_1009_; uint8_t v_suppressElabErrors_1010_; lean_object* v_inheritedTraceOptions_1011_; lean_object* v___x_1012_; uint8_t v_foApprox_1013_; uint8_t v_ctxApprox_1014_; uint8_t v_quasiPatternApprox_1015_; uint8_t v_constApprox_1016_; uint8_t v_isDefEqStuckEx_1017_; uint8_t v_unificationHints_1018_; uint8_t v_proofIrrelevance_1019_; uint8_t v_assignSyntheticOpaque_1020_; uint8_t v_offsetCnstrs_1021_; uint8_t v_etaStruct_1022_; uint8_t v_univApprox_1023_; uint8_t v_iota_1024_; uint8_t v_beta_1025_; uint8_t v_proj_1026_; uint8_t v_zeta_1027_; uint8_t v_zetaDelta_1028_; uint8_t v_zetaUnused_1029_; uint8_t v_zetaHave_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1068_; 
v___x_950_ = lean_box(0);
v___x_951_ = lean_box(0);
v___x_952_ = 1;
v___x_956_ = lean_box(1);
v___x_957_ = 0;
v___x_994_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__3));
v___x_995_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v___x_995_, 0, v___x_950_);
lean_ctor_set(v___x_995_, 1, v___x_951_);
lean_ctor_set(v___x_995_, 2, v___x_950_);
lean_ctor_set(v___x_995_, 3, v___f_939_);
lean_ctor_set(v___x_995_, 4, v___x_956_);
lean_ctor_set(v___x_995_, 5, v___x_956_);
lean_ctor_set(v___x_995_, 6, v___x_950_);
lean_ctor_set(v___x_995_, 7, v___x_994_);
lean_ctor_set_uint8(v___x_995_, sizeof(void*)*8, v___x_952_);
lean_ctor_set_uint8(v___x_995_, sizeof(void*)*8 + 1, v___x_952_);
lean_ctor_set_uint8(v___x_995_, sizeof(void*)*8 + 2, v___x_952_);
lean_ctor_set_uint8(v___x_995_, sizeof(void*)*8 + 3, v___x_952_);
lean_ctor_set_uint8(v___x_995_, sizeof(void*)*8 + 4, v___x_957_);
lean_ctor_set_uint8(v___x_995_, sizeof(void*)*8 + 5, v___x_957_);
lean_ctor_set_uint8(v___x_995_, sizeof(void*)*8 + 6, v___x_957_);
lean_ctor_set_uint8(v___x_995_, sizeof(void*)*8 + 7, v___x_957_);
lean_ctor_set_uint8(v___x_995_, sizeof(void*)*8 + 8, v___x_952_);
lean_ctor_set_uint8(v___x_995_, sizeof(void*)*8 + 9, v___x_957_);
lean_ctor_set_uint8(v___x_995_, sizeof(void*)*8 + 10, v___x_952_);
v_fileName_996_ = lean_ctor_get(v___y_947_, 0);
v_fileMap_997_ = lean_ctor_get(v___y_947_, 1);
v_options_998_ = lean_ctor_get(v___y_947_, 2);
v_currRecDepth_999_ = lean_ctor_get(v___y_947_, 3);
v_maxRecDepth_1000_ = lean_ctor_get(v___y_947_, 4);
v_ref_1001_ = lean_ctor_get(v___y_947_, 5);
v_currNamespace_1002_ = lean_ctor_get(v___y_947_, 6);
v_openDecls_1003_ = lean_ctor_get(v___y_947_, 7);
v_initHeartbeats_1004_ = lean_ctor_get(v___y_947_, 8);
v_maxHeartbeats_1005_ = lean_ctor_get(v___y_947_, 9);
v_quotContext_1006_ = lean_ctor_get(v___y_947_, 10);
v_currMacroScope_1007_ = lean_ctor_get(v___y_947_, 11);
v_diag_1008_ = lean_ctor_get_uint8(v___y_947_, sizeof(void*)*14);
v_cancelTk_x3f_1009_ = lean_ctor_get(v___y_947_, 12);
v_suppressElabErrors_1010_ = lean_ctor_get_uint8(v___y_947_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1011_ = lean_ctor_get(v___y_947_, 13);
v___x_1012_ = l_Lean_Meta_Context_config(v___y_945_);
v_foApprox_1013_ = lean_ctor_get_uint8(v___x_1012_, 0);
v_ctxApprox_1014_ = lean_ctor_get_uint8(v___x_1012_, 1);
v_quasiPatternApprox_1015_ = lean_ctor_get_uint8(v___x_1012_, 2);
v_constApprox_1016_ = lean_ctor_get_uint8(v___x_1012_, 3);
v_isDefEqStuckEx_1017_ = lean_ctor_get_uint8(v___x_1012_, 4);
v_unificationHints_1018_ = lean_ctor_get_uint8(v___x_1012_, 5);
v_proofIrrelevance_1019_ = lean_ctor_get_uint8(v___x_1012_, 6);
v_assignSyntheticOpaque_1020_ = lean_ctor_get_uint8(v___x_1012_, 7);
v_offsetCnstrs_1021_ = lean_ctor_get_uint8(v___x_1012_, 8);
v_etaStruct_1022_ = lean_ctor_get_uint8(v___x_1012_, 10);
v_univApprox_1023_ = lean_ctor_get_uint8(v___x_1012_, 11);
v_iota_1024_ = lean_ctor_get_uint8(v___x_1012_, 12);
v_beta_1025_ = lean_ctor_get_uint8(v___x_1012_, 13);
v_proj_1026_ = lean_ctor_get_uint8(v___x_1012_, 14);
v_zeta_1027_ = lean_ctor_get_uint8(v___x_1012_, 15);
v_zetaDelta_1028_ = lean_ctor_get_uint8(v___x_1012_, 16);
v_zetaUnused_1029_ = lean_ctor_get_uint8(v___x_1012_, 17);
v_zetaHave_1030_ = lean_ctor_get_uint8(v___x_1012_, 18);
v_isSharedCheck_1068_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1032_ = v___x_1012_;
v_isShared_1033_ = v_isSharedCheck_1068_;
goto v_resetjp_1031_;
}
else
{
lean_dec(v___x_1012_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1068_;
goto v_resetjp_1031_;
}
v___jp_953_:
{
lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_954_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__0));
v___x_955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_955_, 0, v___x_954_);
return v___x_955_;
}
v___jp_958_:
{
lean_object* v___x_959_; lean_object* v_a_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_993_; 
v___x_959_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1___redArg(v_mv_940_, v___y_946_);
v_a_960_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_993_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_993_ == 0)
{
v___x_962_ = v___x_959_;
v_isShared_963_ = v_isSharedCheck_993_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_a_960_);
lean_dec(v___x_959_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_993_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
uint8_t v___x_964_; 
v___x_964_ = lean_unbox(v_a_960_);
lean_dec(v_a_960_);
if (v___x_964_ == 0)
{
lean_object* v___x_965_; lean_object* v___x_967_; 
lean_dec(v_mv_940_);
v___x_965_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__1));
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 0, v___x_965_);
v___x_967_ = v___x_962_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v___x_965_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
return v___x_967_;
}
}
else
{
lean_object* v___x_969_; lean_object* v_a_970_; 
lean_del_object(v___x_962_);
v___x_969_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2___redArg(v_mv_940_, v___y_946_);
v_a_970_ = lean_ctor_get(v___x_969_, 0);
lean_inc(v_a_970_);
lean_dec_ref(v___x_969_);
if (lean_obj_tag(v_a_970_) == 1)
{
lean_object* v_val_971_; lean_object* v___x_972_; 
v_val_971_ = lean_ctor_get(v_a_970_, 0);
lean_inc(v_val_971_);
lean_dec_ref_known(v_a_970_, 1);
v___x_972_ = l_Lean_Meta_Sym_unfoldReducible(v_val_971_, v___y_945_, v___y_946_, v___y_947_, v___y_948_);
if (lean_obj_tag(v___x_972_) == 0)
{
lean_object* v_a_973_; lean_object* v___x_974_; 
v_a_973_ = lean_ctor_get(v___x_972_, 0);
lean_inc(v_a_973_);
lean_dec_ref_known(v___x_972_, 1);
v___x_974_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_973_, v___y_944_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_a_975_; lean_object* v___x_976_; 
v_a_975_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_a_975_);
lean_dec_ref_known(v___x_974_, 1);
v___x_976_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3___redArg(v_mv_940_, v_a_975_, v___y_946_);
lean_dec_ref(v___x_976_);
goto v___jp_953_;
}
else
{
lean_object* v_a_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_984_; 
lean_dec(v_mv_940_);
v_a_977_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_984_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_984_ == 0)
{
v___x_979_ = v___x_974_;
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_a_977_);
lean_dec(v___x_974_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v___x_982_; 
if (v_isShared_980_ == 0)
{
v___x_982_ = v___x_979_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v_a_977_);
v___x_982_ = v_reuseFailAlloc_983_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
return v___x_982_;
}
}
}
}
else
{
lean_object* v_a_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_992_; 
lean_dec(v_mv_940_);
v_a_985_ = lean_ctor_get(v___x_972_, 0);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_992_ == 0)
{
v___x_987_ = v___x_972_;
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_a_985_);
lean_dec(v___x_972_);
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
else
{
lean_dec(v_a_970_);
lean_dec(v_mv_940_);
goto v___jp_953_;
}
}
}
}
v_resetjp_1031_:
{
uint8_t v_trackZetaDelta_1034_; lean_object* v_zetaDeltaSet_1035_; lean_object* v_lctx_1036_; lean_object* v_localInstances_1037_; lean_object* v_defEqCtx_x3f_1038_; lean_object* v_synthPendingDepth_1039_; lean_object* v_canUnfold_x3f_1040_; uint8_t v_univApprox_1041_; uint8_t v_inTypeClassResolution_1042_; uint8_t v_cacheInferType_1043_; uint8_t v___x_1044_; lean_object* v_config_1046_; 
v_trackZetaDelta_1034_ = lean_ctor_get_uint8(v___y_945_, sizeof(void*)*7);
v_zetaDeltaSet_1035_ = lean_ctor_get(v___y_945_, 1);
v_lctx_1036_ = lean_ctor_get(v___y_945_, 2);
v_localInstances_1037_ = lean_ctor_get(v___y_945_, 3);
v_defEqCtx_x3f_1038_ = lean_ctor_get(v___y_945_, 4);
v_synthPendingDepth_1039_ = lean_ctor_get(v___y_945_, 5);
v_canUnfold_x3f_1040_ = lean_ctor_get(v___y_945_, 6);
v_univApprox_1041_ = lean_ctor_get_uint8(v___y_945_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1042_ = lean_ctor_get_uint8(v___y_945_, sizeof(void*)*7 + 2);
v_cacheInferType_1043_ = lean_ctor_get_uint8(v___y_945_, sizeof(void*)*7 + 3);
v___x_1044_ = 1;
if (v_isShared_1033_ == 0)
{
v_config_1046_ = v___x_1032_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, 0, v_foApprox_1013_);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, 1, v_ctxApprox_1014_);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, 2, v_quasiPatternApprox_1015_);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, 3, v_constApprox_1016_);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, 4, v_isDefEqStuckEx_1017_);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, 5, v_unificationHints_1018_);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, 6, v_proofIrrelevance_1019_);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, 7, v_assignSyntheticOpaque_1020_);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, 8, v_offsetCnstrs_1021_);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, 10, v_etaStruct_1022_);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, 11, v_univApprox_1023_);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, 12, v_iota_1024_);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, 13, v_beta_1025_);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, 14, v_proj_1026_);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, 15, v_zeta_1027_);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, 16, v_zetaDelta_1028_);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, 17, v_zetaUnused_1029_);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, 18, v_zetaHave_1030_);
v_config_1046_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
uint64_t v___x_1047_; uint64_t v___x_1048_; uint64_t v___x_1049_; lean_object* v___x_1050_; lean_object* v_ref_1051_; lean_object* v___x_1052_; uint64_t v___x_1053_; uint64_t v___x_1054_; uint64_t v_key_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; 
lean_ctor_set_uint8(v_config_1046_, 9, v___x_1044_);
v___x_1047_ = l_Lean_Meta_Context_configKey(v___y_945_);
v___x_1048_ = 3ULL;
v___x_1049_ = lean_uint64_shift_right(v___x_1047_, v___x_1048_);
v___x_1050_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__5));
v_ref_1051_ = l_Lean_replaceRef(v_val_941_, v_ref_1001_);
lean_inc_ref(v_inheritedTraceOptions_1011_);
lean_inc(v_cancelTk_x3f_1009_);
lean_inc(v_currMacroScope_1007_);
lean_inc(v_quotContext_1006_);
lean_inc(v_maxHeartbeats_1005_);
lean_inc(v_initHeartbeats_1004_);
lean_inc(v_openDecls_1003_);
lean_inc(v_currNamespace_1002_);
lean_inc(v_maxRecDepth_1000_);
lean_inc(v_currRecDepth_999_);
lean_inc_ref(v_options_998_);
lean_inc_ref(v_fileMap_997_);
lean_inc_ref(v_fileName_996_);
v___x_1052_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_1052_, 0, v_fileName_996_);
lean_ctor_set(v___x_1052_, 1, v_fileMap_997_);
lean_ctor_set(v___x_1052_, 2, v_options_998_);
lean_ctor_set(v___x_1052_, 3, v_currRecDepth_999_);
lean_ctor_set(v___x_1052_, 4, v_maxRecDepth_1000_);
lean_ctor_set(v___x_1052_, 5, v_ref_1051_);
lean_ctor_set(v___x_1052_, 6, v_currNamespace_1002_);
lean_ctor_set(v___x_1052_, 7, v_openDecls_1003_);
lean_ctor_set(v___x_1052_, 8, v_initHeartbeats_1004_);
lean_ctor_set(v___x_1052_, 9, v_maxHeartbeats_1005_);
lean_ctor_set(v___x_1052_, 10, v_quotContext_1006_);
lean_ctor_set(v___x_1052_, 11, v_currMacroScope_1007_);
lean_ctor_set(v___x_1052_, 12, v_cancelTk_x3f_1009_);
lean_ctor_set(v___x_1052_, 13, v_inheritedTraceOptions_1011_);
lean_ctor_set_uint8(v___x_1052_, sizeof(void*)*14, v_diag_1008_);
lean_ctor_set_uint8(v___x_1052_, sizeof(void*)*14 + 1, v_suppressElabErrors_1010_);
v___x_1053_ = lean_uint64_shift_left(v___x_1049_, v___x_1048_);
v___x_1054_ = lean_uint64_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__2, &l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__2_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__2);
v_key_1055_ = lean_uint64_lor(v___x_1053_, v___x_1054_);
v___x_1056_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1056_, 0, v_config_1046_);
lean_ctor_set_uint64(v___x_1056_, sizeof(void*)*1, v_key_1055_);
lean_inc(v_canUnfold_x3f_1040_);
lean_inc(v_synthPendingDepth_1039_);
lean_inc(v_defEqCtx_x3f_1038_);
lean_inc_ref(v_localInstances_1037_);
lean_inc_ref(v_lctx_1036_);
lean_inc(v_zetaDeltaSet_1035_);
v___x_1057_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1057_, 0, v___x_1056_);
lean_ctor_set(v___x_1057_, 1, v_zetaDeltaSet_1035_);
lean_ctor_set(v___x_1057_, 2, v_lctx_1036_);
lean_ctor_set(v___x_1057_, 3, v_localInstances_1037_);
lean_ctor_set(v___x_1057_, 4, v_defEqCtx_x3f_1038_);
lean_ctor_set(v___x_1057_, 5, v_synthPendingDepth_1039_);
lean_ctor_set(v___x_1057_, 6, v_canUnfold_x3f_1040_);
lean_ctor_set_uint8(v___x_1057_, sizeof(void*)*7, v_trackZetaDelta_1034_);
lean_ctor_set_uint8(v___x_1057_, sizeof(void*)*7 + 1, v_univApprox_1041_);
lean_ctor_set_uint8(v___x_1057_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1042_);
lean_ctor_set_uint8(v___x_1057_, sizeof(void*)*7 + 3, v_cacheInferType_1043_);
lean_inc(v_mv_940_);
v___x_1058_ = l_Lean_Elab_runTactic(v_mv_940_, v_tac_942_, v___x_995_, v___x_1050_, v___x_1057_, v___y_946_, v___x_1052_, v___y_948_);
lean_dec_ref_known(v___x_1052_, 14);
lean_dec_ref_known(v___x_1057_, 7);
if (lean_obj_tag(v___x_1058_) == 0)
{
lean_dec_ref_known(v___x_1058_, 1);
goto v___jp_958_;
}
else
{
if (lean_obj_tag(v___x_1058_) == 0)
{
lean_dec_ref_known(v___x_1058_, 1);
goto v___jp_958_;
}
else
{
lean_object* v_a_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1066_; 
lean_dec(v_mv_940_);
v_a_1059_ = lean_ctor_get(v___x_1058_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v___x_1058_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1061_ = v___x_1058_;
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_a_1059_);
lean_dec(v___x_1058_);
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
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___boxed(lean_object* v___f_1069_, lean_object* v_mv_1070_, lean_object* v_val_1071_, lean_object* v_tac_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_){
_start:
{
lean_object* v_res_1080_; 
v_res_1080_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1(v___f_1069_, v_mv_1070_, v_val_1071_, v_tac_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_);
lean_dec(v___y_1078_);
lean_dec_ref(v___y_1077_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v_val_1071_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0___redArg(lean_object* v_a_1081_, lean_object* v_x_1082_){
_start:
{
if (lean_obj_tag(v_x_1082_) == 0)
{
lean_object* v___x_1083_; 
v___x_1083_ = lean_box(0);
return v___x_1083_;
}
else
{
lean_object* v_key_1084_; lean_object* v_value_1085_; lean_object* v_tail_1086_; uint8_t v___x_1087_; 
v_key_1084_ = lean_ctor_get(v_x_1082_, 0);
v_value_1085_ = lean_ctor_get(v_x_1082_, 1);
v_tail_1086_ = lean_ctor_get(v_x_1082_, 2);
v___x_1087_ = lean_nat_dec_eq(v_key_1084_, v_a_1081_);
if (v___x_1087_ == 0)
{
v_x_1082_ = v_tail_1086_;
goto _start;
}
else
{
lean_object* v___x_1089_; 
lean_inc(v_value_1085_);
v___x_1089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1089_, 0, v_value_1085_);
return v___x_1089_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0___redArg___boxed(lean_object* v_a_1090_, lean_object* v_x_1091_){
_start:
{
lean_object* v_res_1092_; 
v_res_1092_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0___redArg(v_a_1090_, v_x_1091_);
lean_dec(v_x_1091_);
lean_dec(v_a_1090_);
return v_res_1092_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0___redArg(lean_object* v_m_1093_, lean_object* v_a_1094_){
_start:
{
lean_object* v_buckets_1095_; lean_object* v___x_1096_; uint64_t v___x_1097_; uint64_t v___x_1098_; uint64_t v___x_1099_; uint64_t v_fold_1100_; uint64_t v___x_1101_; uint64_t v___x_1102_; uint64_t v___x_1103_; size_t v___x_1104_; size_t v___x_1105_; size_t v___x_1106_; size_t v___x_1107_; size_t v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; 
v_buckets_1095_ = lean_ctor_get(v_m_1093_, 1);
v___x_1096_ = lean_array_get_size(v_buckets_1095_);
v___x_1097_ = lean_uint64_of_nat(v_a_1094_);
v___x_1098_ = 32ULL;
v___x_1099_ = lean_uint64_shift_right(v___x_1097_, v___x_1098_);
v_fold_1100_ = lean_uint64_xor(v___x_1097_, v___x_1099_);
v___x_1101_ = 16ULL;
v___x_1102_ = lean_uint64_shift_right(v_fold_1100_, v___x_1101_);
v___x_1103_ = lean_uint64_xor(v_fold_1100_, v___x_1102_);
v___x_1104_ = lean_uint64_to_usize(v___x_1103_);
v___x_1105_ = lean_usize_of_nat(v___x_1096_);
v___x_1106_ = ((size_t)1ULL);
v___x_1107_ = lean_usize_sub(v___x_1105_, v___x_1106_);
v___x_1108_ = lean_usize_land(v___x_1104_, v___x_1107_);
v___x_1109_ = lean_array_uget_borrowed(v_buckets_1095_, v___x_1108_);
v___x_1110_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0___redArg(v_a_1094_, v___x_1109_);
return v___x_1110_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0___redArg___boxed(lean_object* v_m_1111_, lean_object* v_a_1112_){
_start:
{
lean_object* v_res_1113_; 
v_res_1113_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0___redArg(v_m_1111_, v_a_1112_);
lean_dec(v_a_1112_);
lean_dec_ref(v_m_1111_);
return v_res_1113_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__20(void){
_start:
{
lean_object* v___x_1163_; 
v___x_1163_ = l_Array_mkArray0(lean_box(0));
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant(lean_object* v_invariantAlts_1176_, lean_object* v_n_1177_, lean_object* v_mv_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_){
_start:
{
lean_object* v___y_1187_; uint8_t v___y_1188_; lean_object* v___y_1193_; lean_object* v___x_1206_; 
v___x_1206_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0___redArg(v_invariantAlts_1176_, v_n_1177_);
if (lean_obj_tag(v___x_1206_) == 1)
{
lean_object* v_val_1207_; lean_object* v___x_1209_; uint8_t v_isShared_1210_; uint8_t v_isSharedCheck_1278_; 
v_val_1207_ = lean_ctor_get(v___x_1206_, 0);
v_isSharedCheck_1278_ = !lean_is_exclusive(v___x_1206_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1209_ = v___x_1206_;
v_isShared_1210_ = v_isSharedCheck_1278_;
goto v_resetjp_1208_;
}
else
{
lean_inc(v_val_1207_);
lean_dec(v___x_1206_);
v___x_1209_ = lean_box(0);
v_isShared_1210_ = v_isSharedCheck_1278_;
goto v_resetjp_1208_;
}
v_resetjp_1208_:
{
lean_object* v___f_1211_; lean_object* v___x_1212_; uint8_t v___x_1213_; 
v___f_1211_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run___closed__2));
v___x_1212_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__3));
lean_inc(v_val_1207_);
v___x_1213_ = l_Lean_Syntax_isOfKind(v_val_1207_, v___x_1212_);
if (v___x_1213_ == 0)
{
lean_object* v___x_1214_; uint8_t v___x_1215_; 
v___x_1214_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__5));
lean_inc(v_val_1207_);
v___x_1215_ = l_Lean_Syntax_isOfKind(v_val_1207_, v___x_1214_);
if (v___x_1215_ == 0)
{
lean_object* v___x_1216_; lean_object* v___x_1218_; 
lean_dec(v_val_1207_);
lean_dec(v_mv_1178_);
v___x_1216_ = lean_box(v___x_1215_);
if (v_isShared_1210_ == 0)
{
lean_ctor_set_tag(v___x_1209_, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1216_);
v___x_1218_ = v___x_1209_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v___x_1216_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
return v___x_1218_;
}
}
else
{
lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; uint8_t v___x_1223_; 
v___x_1220_ = lean_unsigned_to_nat(1u);
v___x_1221_ = l_Lean_Syntax_getArg(v_val_1207_, v___x_1220_);
v___x_1222_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__7));
lean_inc(v___x_1221_);
v___x_1223_ = l_Lean_Syntax_isOfKind(v___x_1221_, v___x_1222_);
if (v___x_1223_ == 0)
{
lean_object* v___x_1224_; lean_object* v___x_1226_; 
lean_dec(v___x_1221_);
lean_dec(v_val_1207_);
lean_dec(v_mv_1178_);
v___x_1224_ = lean_box(v___x_1223_);
if (v_isShared_1210_ == 0)
{
lean_ctor_set_tag(v___x_1209_, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1224_);
v___x_1226_ = v___x_1209_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v___x_1224_);
v___x_1226_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
return v___x_1226_;
}
}
else
{
lean_object* v_ref_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v_args_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; 
lean_del_object(v___x_1209_);
v_ref_1228_ = lean_ctor_get(v_a_1183_, 5);
v___x_1229_ = l_Lean_Syntax_getArg(v___x_1221_, v___x_1220_);
lean_dec(v___x_1221_);
v___x_1230_ = lean_unsigned_to_nat(3u);
v___x_1231_ = l_Lean_Syntax_getArg(v_val_1207_, v___x_1230_);
v_args_1232_ = l_Lean_Syntax_getArgs(v___x_1229_);
lean_dec(v___x_1229_);
v___x_1233_ = l_Lean_SourceInfo_fromRef(v_ref_1228_, v___x_1213_);
v___x_1234_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__9));
v___x_1235_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__10));
lean_inc_n(v___x_1233_, 11);
v___x_1236_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1236_, 0, v___x_1233_);
lean_ctor_set(v___x_1236_, 1, v___x_1235_);
v___x_1237_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__12));
v___x_1238_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__14));
v___x_1239_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__16));
v___x_1240_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__18));
v___x_1241_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__19));
v___x_1242_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1242_, 0, v___x_1233_);
lean_ctor_set(v___x_1242_, 1, v___x_1241_);
v___x_1243_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__20, &l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__20_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__20);
v___x_1244_ = l_Array_append___redArg(v___x_1243_, v_args_1232_);
lean_dec_ref(v_args_1232_);
v___x_1245_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1233_);
lean_ctor_set(v___x_1245_, 1, v___x_1239_);
lean_ctor_set(v___x_1245_, 2, v___x_1244_);
v___x_1246_ = l_Lean_Syntax_node2(v___x_1233_, v___x_1240_, v___x_1242_, v___x_1245_);
v___x_1247_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__21));
v___x_1248_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1248_, 0, v___x_1233_);
lean_ctor_set(v___x_1248_, 1, v___x_1247_);
v___x_1249_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__22));
v___x_1250_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__23));
v___x_1251_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1233_);
lean_ctor_set(v___x_1251_, 1, v___x_1249_);
v___x_1252_ = l_Lean_Syntax_node2(v___x_1233_, v___x_1250_, v___x_1251_, v___x_1231_);
v___x_1253_ = l_Lean_Syntax_node3(v___x_1233_, v___x_1239_, v___x_1246_, v___x_1248_, v___x_1252_);
v___x_1254_ = l_Lean_Syntax_node1(v___x_1233_, v___x_1238_, v___x_1253_);
v___x_1255_ = l_Lean_Syntax_node1(v___x_1233_, v___x_1237_, v___x_1254_);
v___x_1256_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__24));
v___x_1257_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1257_, 0, v___x_1233_);
lean_ctor_set(v___x_1257_, 1, v___x_1256_);
v___x_1258_ = l_Lean_Syntax_node3(v___x_1233_, v___x_1234_, v___x_1236_, v___x_1255_, v___x_1257_);
v___x_1259_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1(v___f_1211_, v_mv_1178_, v_val_1207_, v___x_1258_, v_a_1179_, v_a_1180_, v_a_1181_, v_a_1182_, v_a_1183_, v_a_1184_);
lean_dec(v_val_1207_);
v___y_1193_ = v___x_1259_;
goto v___jp_1192_;
}
}
}
else
{
lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; uint8_t v___x_1263_; 
v___x_1260_ = lean_unsigned_to_nat(0u);
v___x_1261_ = l_Lean_Syntax_getArg(v_val_1207_, v___x_1260_);
v___x_1262_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__26));
v___x_1263_ = l_Lean_Syntax_isOfKind(v___x_1261_, v___x_1262_);
if (v___x_1263_ == 0)
{
lean_object* v___x_1264_; lean_object* v___x_1266_; 
lean_dec(v_val_1207_);
lean_dec(v_mv_1178_);
v___x_1264_ = lean_box(v___x_1263_);
if (v_isShared_1210_ == 0)
{
lean_ctor_set_tag(v___x_1209_, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1264_);
v___x_1266_ = v___x_1209_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v___x_1264_);
v___x_1266_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
return v___x_1266_;
}
}
else
{
lean_object* v_ref_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; uint8_t v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; 
lean_del_object(v___x_1209_);
v_ref_1268_ = lean_ctor_get(v_a_1183_, 5);
v___x_1269_ = lean_unsigned_to_nat(1u);
v___x_1270_ = l_Lean_Syntax_getArg(v_val_1207_, v___x_1269_);
v___x_1271_ = 0;
v___x_1272_ = l_Lean_SourceInfo_fromRef(v_ref_1268_, v___x_1271_);
v___x_1273_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__22));
v___x_1274_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__23));
lean_inc(v___x_1272_);
v___x_1275_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1272_);
lean_ctor_set(v___x_1275_, 1, v___x_1273_);
v___x_1276_ = l_Lean_Syntax_node2(v___x_1272_, v___x_1274_, v___x_1275_, v___x_1270_);
v___x_1277_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1(v___f_1211_, v_mv_1178_, v_val_1207_, v___x_1276_, v_a_1179_, v_a_1180_, v_a_1181_, v_a_1182_, v_a_1183_, v_a_1184_);
lean_dec(v_val_1207_);
v___y_1193_ = v___x_1277_;
goto v___jp_1192_;
}
}
}
}
else
{
uint8_t v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; 
lean_dec(v___x_1206_);
lean_dec(v_mv_1178_);
v___x_1279_ = 0;
v___x_1280_ = lean_box(v___x_1279_);
v___x_1281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1281_, 0, v___x_1280_);
return v___x_1281_;
}
v___jp_1186_:
{
if (v___y_1188_ == 0)
{
lean_object* v___x_1189_; lean_object* v___x_1190_; 
lean_dec_ref(v___y_1187_);
v___x_1189_ = lean_box(v___y_1188_);
v___x_1190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1189_);
return v___x_1190_;
}
else
{
lean_object* v___x_1191_; 
v___x_1191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1191_, 0, v___y_1187_);
return v___x_1191_;
}
}
v___jp_1192_:
{
if (lean_obj_tag(v___y_1193_) == 0)
{
lean_object* v_a_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1202_; 
v_a_1194_ = lean_ctor_get(v___y_1193_, 0);
v_isSharedCheck_1202_ = !lean_is_exclusive(v___y_1193_);
if (v_isSharedCheck_1202_ == 0)
{
v___x_1196_ = v___y_1193_;
v_isShared_1197_ = v_isSharedCheck_1202_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_a_1194_);
lean_dec(v___y_1193_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1202_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v_a_1198_; lean_object* v___x_1200_; 
v_a_1198_ = lean_ctor_get(v_a_1194_, 0);
lean_inc(v_a_1198_);
lean_dec(v_a_1194_);
if (v_isShared_1197_ == 0)
{
lean_ctor_set(v___x_1196_, 0, v_a_1198_);
v___x_1200_ = v___x_1196_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v_a_1198_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
return v___x_1200_;
}
}
}
else
{
lean_object* v_a_1203_; uint8_t v___x_1204_; 
v_a_1203_ = lean_ctor_get(v___y_1193_, 0);
lean_inc(v_a_1203_);
lean_dec_ref_known(v___y_1193_, 1);
v___x_1204_ = l_Lean_Exception_isInterrupt(v_a_1203_);
if (v___x_1204_ == 0)
{
uint8_t v___x_1205_; 
lean_inc(v_a_1203_);
v___x_1205_ = l_Lean_Exception_isRuntime(v_a_1203_);
v___y_1187_ = v_a_1203_;
v___y_1188_ = v___x_1205_;
goto v___jp_1186_;
}
else
{
v___y_1187_ = v_a_1203_;
v___y_1188_ = v___x_1204_;
goto v___jp_1186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___boxed(lean_object* v_invariantAlts_1282_, lean_object* v_n_1283_, lean_object* v_mv_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_, lean_object* v_a_1290_, lean_object* v_a_1291_){
_start:
{
lean_object* v_res_1292_; 
v_res_1292_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant(v_invariantAlts_1282_, v_n_1283_, v_mv_1284_, v_a_1285_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_, v_a_1290_);
lean_dec(v_a_1290_);
lean_dec_ref(v_a_1289_);
lean_dec(v_a_1288_);
lean_dec_ref(v_a_1287_);
lean_dec(v_a_1286_);
lean_dec_ref(v_a_1285_);
lean_dec(v_n_1283_);
lean_dec_ref(v_invariantAlts_1282_);
return v_res_1292_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0(lean_object* v_00_u03b2_1293_, lean_object* v_m_1294_, lean_object* v_a_1295_){
_start:
{
lean_object* v___x_1296_; 
v___x_1296_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0___redArg(v_m_1294_, v_a_1295_);
return v___x_1296_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0___boxed(lean_object* v_00_u03b2_1297_, lean_object* v_m_1298_, lean_object* v_a_1299_){
_start:
{
lean_object* v_res_1300_; 
v_res_1300_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0(v_00_u03b2_1297_, v_m_1298_, v_a_1299_);
lean_dec(v_a_1299_);
lean_dec_ref(v_m_1298_);
return v_res_1300_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1(lean_object* v_mvarId_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_){
_start:
{
lean_object* v___x_1309_; 
v___x_1309_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1___redArg(v_mvarId_1301_, v___y_1305_);
return v___x_1309_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1___boxed(lean_object* v_mvarId_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_){
_start:
{
lean_object* v_res_1318_; 
v_res_1318_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1(v_mvarId_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_);
lean_dec(v___y_1316_);
lean_dec_ref(v___y_1315_);
lean_dec(v___y_1314_);
lean_dec_ref(v___y_1313_);
lean_dec(v___y_1312_);
lean_dec_ref(v___y_1311_);
lean_dec(v_mvarId_1310_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3(lean_object* v_mvarId_1319_, lean_object* v_val_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_){
_start:
{
lean_object* v___x_1328_; 
v___x_1328_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3___redArg(v_mvarId_1319_, v_val_1320_, v___y_1324_);
return v___x_1328_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3___boxed(lean_object* v_mvarId_1329_, lean_object* v_val_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_){
_start:
{
lean_object* v_res_1338_; 
v_res_1338_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3(v_mvarId_1329_, v_val_1330_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_);
lean_dec(v___y_1336_);
lean_dec_ref(v___y_1335_);
lean_dec(v___y_1334_);
lean_dec_ref(v___y_1333_);
lean_dec(v___y_1332_);
lean_dec_ref(v___y_1331_);
return v_res_1338_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0(lean_object* v_00_u03b2_1339_, lean_object* v_a_1340_, lean_object* v_x_1341_){
_start:
{
lean_object* v___x_1342_; 
v___x_1342_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0___redArg(v_a_1340_, v_x_1341_);
return v___x_1342_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1343_, lean_object* v_a_1344_, lean_object* v_x_1345_){
_start:
{
lean_object* v_res_1346_; 
v_res_1346_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0(v_00_u03b2_1343_, v_a_1344_, v_x_1345_);
lean_dec(v_x_1345_);
lean_dec(v_a_1344_);
return v_res_1346_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2(lean_object* v_00_u03b2_1347_, lean_object* v_x_1348_, lean_object* v_x_1349_){
_start:
{
uint8_t v___x_1350_; 
v___x_1350_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2___redArg(v_x_1348_, v_x_1349_);
return v___x_1350_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1351_, lean_object* v_x_1352_, lean_object* v_x_1353_){
_start:
{
uint8_t v_res_1354_; lean_object* v_r_1355_; 
v_res_1354_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2(v_00_u03b2_1351_, v_x_1352_, v_x_1353_);
lean_dec(v_x_1353_);
lean_dec_ref(v_x_1352_);
v_r_1355_ = lean_box(v_res_1354_);
return v_r_1355_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5(lean_object* v_00_u03b2_1356_, lean_object* v_x_1357_, lean_object* v_x_1358_, lean_object* v_x_1359_){
_start:
{
lean_object* v___x_1360_; 
v___x_1360_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5___redArg(v_x_1357_, v_x_1358_, v_x_1359_);
return v___x_1360_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_1361_, lean_object* v_x_1362_, size_t v_x_1363_, lean_object* v_x_1364_){
_start:
{
uint8_t v___x_1365_; 
v___x_1365_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg(v_x_1362_, v_x_1363_, v_x_1364_);
return v___x_1365_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_1366_, lean_object* v_x_1367_, lean_object* v_x_1368_, lean_object* v_x_1369_){
_start:
{
size_t v_x_18672__boxed_1370_; uint8_t v_res_1371_; lean_object* v_r_1372_; 
v_x_18672__boxed_1370_ = lean_unbox_usize(v_x_1368_);
lean_dec(v_x_1368_);
v_res_1371_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4(v_00_u03b2_1366_, v_x_1367_, v_x_18672__boxed_1370_, v_x_1369_);
lean_dec(v_x_1369_);
lean_dec_ref(v_x_1367_);
v_r_1372_ = lean_box(v_res_1371_);
return v_r_1372_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7(lean_object* v_00_u03b2_1373_, lean_object* v_x_1374_, size_t v_x_1375_, size_t v_x_1376_, lean_object* v_x_1377_, lean_object* v_x_1378_){
_start:
{
lean_object* v___x_1379_; 
v___x_1379_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg(v_x_1374_, v_x_1375_, v_x_1376_, v_x_1377_, v_x_1378_);
return v___x_1379_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___boxed(lean_object* v_00_u03b2_1380_, lean_object* v_x_1381_, lean_object* v_x_1382_, lean_object* v_x_1383_, lean_object* v_x_1384_, lean_object* v_x_1385_){
_start:
{
size_t v_x_18683__boxed_1386_; size_t v_x_18684__boxed_1387_; lean_object* v_res_1388_; 
v_x_18683__boxed_1386_ = lean_unbox_usize(v_x_1382_);
lean_dec(v_x_1382_);
v_x_18684__boxed_1387_ = lean_unbox_usize(v_x_1383_);
lean_dec(v_x_1383_);
v_res_1388_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7(v_00_u03b2_1380_, v_x_1381_, v_x_18683__boxed_1386_, v_x_18684__boxed_1387_, v_x_1384_, v_x_1385_);
return v_res_1388_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6(lean_object* v_00_u03b2_1389_, lean_object* v_keys_1390_, lean_object* v_vals_1391_, lean_object* v_heq_1392_, lean_object* v_i_1393_, lean_object* v_k_1394_){
_start:
{
uint8_t v___x_1395_; 
v___x_1395_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___redArg(v_keys_1390_, v_i_1393_, v_k_1394_);
return v___x_1395_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___boxed(lean_object* v_00_u03b2_1396_, lean_object* v_keys_1397_, lean_object* v_vals_1398_, lean_object* v_heq_1399_, lean_object* v_i_1400_, lean_object* v_k_1401_){
_start:
{
uint8_t v_res_1402_; lean_object* v_r_1403_; 
v_res_1402_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6(v_00_u03b2_1396_, v_keys_1397_, v_vals_1398_, v_heq_1399_, v_i_1400_, v_k_1401_);
lean_dec(v_k_1401_);
lean_dec_ref(v_vals_1398_);
lean_dec_ref(v_keys_1397_);
v_r_1403_ = lean_box(v_res_1402_);
return v_r_1403_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9(lean_object* v_00_u03b2_1404_, lean_object* v_n_1405_, lean_object* v_k_1406_, lean_object* v_v_1407_){
_start:
{
lean_object* v___x_1408_; 
v___x_1408_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9___redArg(v_n_1405_, v_k_1406_, v_v_1407_);
return v___x_1408_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10(lean_object* v_00_u03b2_1409_, size_t v_depth_1410_, lean_object* v_keys_1411_, lean_object* v_vals_1412_, lean_object* v_heq_1413_, lean_object* v_i_1414_, lean_object* v_entries_1415_){
_start:
{
lean_object* v___x_1416_; 
v___x_1416_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___redArg(v_depth_1410_, v_keys_1411_, v_vals_1412_, v_i_1414_, v_entries_1415_);
return v___x_1416_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___boxed(lean_object* v_00_u03b2_1417_, lean_object* v_depth_1418_, lean_object* v_keys_1419_, lean_object* v_vals_1420_, lean_object* v_heq_1421_, lean_object* v_i_1422_, lean_object* v_entries_1423_){
_start:
{
size_t v_depth_boxed_1424_; lean_object* v_res_1425_; 
v_depth_boxed_1424_ = lean_unbox_usize(v_depth_1418_);
lean_dec(v_depth_1418_);
v_res_1425_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10(v_00_u03b2_1417_, v_depth_boxed_1424_, v_keys_1419_, v_vals_1420_, v_heq_1421_, v_i_1422_, v_entries_1423_);
lean_dec_ref(v_vals_1420_);
lean_dec_ref(v_keys_1419_);
return v_res_1425_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9_spec__10(lean_object* v_00_u03b2_1426_, lean_object* v_x_1427_, lean_object* v_x_1428_, lean_object* v_x_1429_, lean_object* v_x_1430_){
_start:
{
lean_object* v___x_1431_; 
v___x_1431_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9_spec__10___redArg(v_x_1427_, v_x_1428_, v_x_1429_, v_x_1430_);
return v___x_1431_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg(lean_object* v_a_1432_, lean_object* v_x_1433_){
_start:
{
if (lean_obj_tag(v_x_1433_) == 0)
{
uint8_t v___x_1434_; 
v___x_1434_ = 0;
return v___x_1434_;
}
else
{
lean_object* v_key_1435_; lean_object* v_tail_1436_; uint8_t v___x_1437_; 
v_key_1435_ = lean_ctor_get(v_x_1433_, 0);
v_tail_1436_ = lean_ctor_get(v_x_1433_, 2);
v___x_1437_ = lean_nat_dec_eq(v_key_1435_, v_a_1432_);
if (v___x_1437_ == 0)
{
v_x_1433_ = v_tail_1436_;
goto _start;
}
else
{
return v___x_1437_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg___boxed(lean_object* v_a_1439_, lean_object* v_x_1440_){
_start:
{
uint8_t v_res_1441_; lean_object* v_r_1442_; 
v_res_1441_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg(v_a_1439_, v_x_1440_);
lean_dec(v_x_1440_);
lean_dec(v_a_1439_);
v_r_1442_ = lean_box(v_res_1441_);
return v_r_1442_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_x_1443_, lean_object* v_x_1444_){
_start:
{
if (lean_obj_tag(v_x_1444_) == 0)
{
return v_x_1443_;
}
else
{
lean_object* v_key_1445_; lean_object* v_value_1446_; lean_object* v_tail_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1470_; 
v_key_1445_ = lean_ctor_get(v_x_1444_, 0);
v_value_1446_ = lean_ctor_get(v_x_1444_, 1);
v_tail_1447_ = lean_ctor_get(v_x_1444_, 2);
v_isSharedCheck_1470_ = !lean_is_exclusive(v_x_1444_);
if (v_isSharedCheck_1470_ == 0)
{
v___x_1449_ = v_x_1444_;
v_isShared_1450_ = v_isSharedCheck_1470_;
goto v_resetjp_1448_;
}
else
{
lean_inc(v_tail_1447_);
lean_inc(v_value_1446_);
lean_inc(v_key_1445_);
lean_dec(v_x_1444_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1470_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1451_; uint64_t v___x_1452_; uint64_t v___x_1453_; uint64_t v___x_1454_; uint64_t v_fold_1455_; uint64_t v___x_1456_; uint64_t v___x_1457_; uint64_t v___x_1458_; size_t v___x_1459_; size_t v___x_1460_; size_t v___x_1461_; size_t v___x_1462_; size_t v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1466_; 
v___x_1451_ = lean_array_get_size(v_x_1443_);
v___x_1452_ = lean_uint64_of_nat(v_key_1445_);
v___x_1453_ = 32ULL;
v___x_1454_ = lean_uint64_shift_right(v___x_1452_, v___x_1453_);
v_fold_1455_ = lean_uint64_xor(v___x_1452_, v___x_1454_);
v___x_1456_ = 16ULL;
v___x_1457_ = lean_uint64_shift_right(v_fold_1455_, v___x_1456_);
v___x_1458_ = lean_uint64_xor(v_fold_1455_, v___x_1457_);
v___x_1459_ = lean_uint64_to_usize(v___x_1458_);
v___x_1460_ = lean_usize_of_nat(v___x_1451_);
v___x_1461_ = ((size_t)1ULL);
v___x_1462_ = lean_usize_sub(v___x_1460_, v___x_1461_);
v___x_1463_ = lean_usize_land(v___x_1459_, v___x_1462_);
v___x_1464_ = lean_array_uget_borrowed(v_x_1443_, v___x_1463_);
lean_inc(v___x_1464_);
if (v_isShared_1450_ == 0)
{
lean_ctor_set(v___x_1449_, 2, v___x_1464_);
v___x_1466_ = v___x_1449_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v_key_1445_);
lean_ctor_set(v_reuseFailAlloc_1469_, 1, v_value_1446_);
lean_ctor_set(v_reuseFailAlloc_1469_, 2, v___x_1464_);
v___x_1466_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
lean_object* v___x_1467_; 
v___x_1467_ = lean_array_uset(v_x_1443_, v___x_1463_, v___x_1466_);
v_x_1443_ = v___x_1467_;
v_x_1444_ = v_tail_1447_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2___redArg(lean_object* v_i_1471_, lean_object* v_source_1472_, lean_object* v_target_1473_){
_start:
{
lean_object* v___x_1474_; uint8_t v___x_1475_; 
v___x_1474_ = lean_array_get_size(v_source_1472_);
v___x_1475_ = lean_nat_dec_lt(v_i_1471_, v___x_1474_);
if (v___x_1475_ == 0)
{
lean_dec_ref(v_source_1472_);
lean_dec(v_i_1471_);
return v_target_1473_;
}
else
{
lean_object* v_es_1476_; lean_object* v___x_1477_; lean_object* v_source_1478_; lean_object* v_target_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; 
v_es_1476_ = lean_array_fget(v_source_1472_, v_i_1471_);
v___x_1477_ = lean_box(0);
v_source_1478_ = lean_array_fset(v_source_1472_, v_i_1471_, v___x_1477_);
v_target_1479_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4___redArg(v_target_1473_, v_es_1476_);
v___x_1480_ = lean_unsigned_to_nat(1u);
v___x_1481_ = lean_nat_add(v_i_1471_, v___x_1480_);
lean_dec(v_i_1471_);
v_i_1471_ = v___x_1481_;
v_source_1472_ = v_source_1478_;
v_target_1473_ = v_target_1479_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1___redArg(lean_object* v_data_1483_){
_start:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v_nbuckets_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; 
v___x_1484_ = lean_array_get_size(v_data_1483_);
v___x_1485_ = lean_unsigned_to_nat(2u);
v_nbuckets_1486_ = lean_nat_mul(v___x_1484_, v___x_1485_);
v___x_1487_ = lean_unsigned_to_nat(0u);
v___x_1488_ = lean_box(0);
v___x_1489_ = lean_mk_array(v_nbuckets_1486_, v___x_1488_);
v___x_1490_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2___redArg(v___x_1487_, v_data_1483_, v___x_1489_);
return v___x_1490_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0___redArg(lean_object* v_m_1491_, lean_object* v_a_1492_, lean_object* v_b_1493_){
_start:
{
lean_object* v_size_1494_; lean_object* v_buckets_1495_; lean_object* v___x_1496_; uint64_t v___x_1497_; uint64_t v___x_1498_; uint64_t v___x_1499_; uint64_t v_fold_1500_; uint64_t v___x_1501_; uint64_t v___x_1502_; uint64_t v___x_1503_; size_t v___x_1504_; size_t v___x_1505_; size_t v___x_1506_; size_t v___x_1507_; size_t v___x_1508_; lean_object* v_bkt_1509_; uint8_t v___x_1510_; 
v_size_1494_ = lean_ctor_get(v_m_1491_, 0);
v_buckets_1495_ = lean_ctor_get(v_m_1491_, 1);
v___x_1496_ = lean_array_get_size(v_buckets_1495_);
v___x_1497_ = lean_uint64_of_nat(v_a_1492_);
v___x_1498_ = 32ULL;
v___x_1499_ = lean_uint64_shift_right(v___x_1497_, v___x_1498_);
v_fold_1500_ = lean_uint64_xor(v___x_1497_, v___x_1499_);
v___x_1501_ = 16ULL;
v___x_1502_ = lean_uint64_shift_right(v_fold_1500_, v___x_1501_);
v___x_1503_ = lean_uint64_xor(v_fold_1500_, v___x_1502_);
v___x_1504_ = lean_uint64_to_usize(v___x_1503_);
v___x_1505_ = lean_usize_of_nat(v___x_1496_);
v___x_1506_ = ((size_t)1ULL);
v___x_1507_ = lean_usize_sub(v___x_1505_, v___x_1506_);
v___x_1508_ = lean_usize_land(v___x_1504_, v___x_1507_);
v_bkt_1509_ = lean_array_uget_borrowed(v_buckets_1495_, v___x_1508_);
v___x_1510_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg(v_a_1492_, v_bkt_1509_);
if (v___x_1510_ == 0)
{
lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1531_; 
lean_inc_ref(v_buckets_1495_);
lean_inc(v_size_1494_);
v_isSharedCheck_1531_ = !lean_is_exclusive(v_m_1491_);
if (v_isSharedCheck_1531_ == 0)
{
lean_object* v_unused_1532_; lean_object* v_unused_1533_; 
v_unused_1532_ = lean_ctor_get(v_m_1491_, 1);
lean_dec(v_unused_1532_);
v_unused_1533_ = lean_ctor_get(v_m_1491_, 0);
lean_dec(v_unused_1533_);
v___x_1512_ = v_m_1491_;
v_isShared_1513_ = v_isSharedCheck_1531_;
goto v_resetjp_1511_;
}
else
{
lean_dec(v_m_1491_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1531_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
lean_object* v___x_1514_; lean_object* v_size_x27_1515_; lean_object* v___x_1516_; lean_object* v_buckets_x27_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; uint8_t v___x_1523_; 
v___x_1514_ = lean_unsigned_to_nat(1u);
v_size_x27_1515_ = lean_nat_add(v_size_1494_, v___x_1514_);
lean_dec(v_size_1494_);
lean_inc(v_bkt_1509_);
v___x_1516_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1516_, 0, v_a_1492_);
lean_ctor_set(v___x_1516_, 1, v_b_1493_);
lean_ctor_set(v___x_1516_, 2, v_bkt_1509_);
v_buckets_x27_1517_ = lean_array_uset(v_buckets_1495_, v___x_1508_, v___x_1516_);
v___x_1518_ = lean_unsigned_to_nat(4u);
v___x_1519_ = lean_nat_mul(v_size_x27_1515_, v___x_1518_);
v___x_1520_ = lean_unsigned_to_nat(3u);
v___x_1521_ = lean_nat_div(v___x_1519_, v___x_1520_);
lean_dec(v___x_1519_);
v___x_1522_ = lean_array_get_size(v_buckets_x27_1517_);
v___x_1523_ = lean_nat_dec_le(v___x_1521_, v___x_1522_);
lean_dec(v___x_1521_);
if (v___x_1523_ == 0)
{
lean_object* v_val_1524_; lean_object* v___x_1526_; 
v_val_1524_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1___redArg(v_buckets_x27_1517_);
if (v_isShared_1513_ == 0)
{
lean_ctor_set(v___x_1512_, 1, v_val_1524_);
lean_ctor_set(v___x_1512_, 0, v_size_x27_1515_);
v___x_1526_ = v___x_1512_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v_size_x27_1515_);
lean_ctor_set(v_reuseFailAlloc_1527_, 1, v_val_1524_);
v___x_1526_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
return v___x_1526_;
}
}
else
{
lean_object* v___x_1529_; 
if (v_isShared_1513_ == 0)
{
lean_ctor_set(v___x_1512_, 1, v_buckets_x27_1517_);
lean_ctor_set(v___x_1512_, 0, v_size_x27_1515_);
v___x_1529_ = v___x_1512_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v_size_x27_1515_);
lean_ctor_set(v_reuseFailAlloc_1530_, 1, v_buckets_x27_1517_);
v___x_1529_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
return v___x_1529_;
}
}
}
}
else
{
lean_dec(v_b_1493_);
lean_dec(v_a_1492_);
return v_m_1491_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1___redArg(lean_object* v___x_1534_, lean_object* v_as_x27_1535_, lean_object* v_b_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_){
_start:
{
if (lean_obj_tag(v_as_x27_1535_) == 0)
{
lean_object* v___x_1546_; 
lean_dec_ref(v___x_1534_);
v___x_1546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1546_, 0, v_b_1536_);
return v___x_1546_;
}
else
{
lean_object* v_head_1547_; lean_object* v_tail_1548_; lean_object* v___x_1549_; 
v_head_1547_ = lean_ctor_get(v_as_x27_1535_, 0);
v_tail_1548_ = lean_ctor_get(v_as_x27_1535_, 1);
lean_inc(v_head_1547_);
v___x_1549_ = l_Lean_MVarId_getType(v_head_1547_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_);
if (lean_obj_tag(v___x_1549_) == 0)
{
lean_object* v_a_1550_; uint8_t v___x_1551_; 
v_a_1550_ = lean_ctor_get(v___x_1549_, 0);
lean_inc(v_a_1550_);
lean_dec_ref_known(v___x_1549_, 1);
lean_inc_ref(v___x_1534_);
v___x_1551_ = l_Lean_Elab_Tactic_Do_SpecAttr_isSpecInvariantType(v___x_1534_, v_a_1550_);
lean_dec(v_a_1550_);
if (v___x_1551_ == 0)
{
lean_object* v___x_1552_; 
lean_inc(v_head_1547_);
v___x_1552_ = lean_array_push(v_b_1536_, v_head_1547_);
v_as_x27_1535_ = v_tail_1548_;
v_b_1536_ = v___x_1552_;
goto _start;
}
else
{
lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v_specBackwardRuleCache_1556_; lean_object* v_splitBackwardRuleCache_1557_; lean_object* v_invariants_1558_; lean_object* v_vcs_1559_; lean_object* v_simpState_1560_; lean_object* v_jps_1561_; lean_object* v_fuel_1562_; lean_object* v_inlineHandledInvariants_1563_; uint8_t v_preTacFailed_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1621_; 
v___x_1554_ = lean_st_ref_get(v___y_1538_);
v___x_1555_ = lean_st_ref_take(v___y_1538_);
v_specBackwardRuleCache_1556_ = lean_ctor_get(v___x_1555_, 0);
v_splitBackwardRuleCache_1557_ = lean_ctor_get(v___x_1555_, 1);
v_invariants_1558_ = lean_ctor_get(v___x_1555_, 2);
v_vcs_1559_ = lean_ctor_get(v___x_1555_, 3);
v_simpState_1560_ = lean_ctor_get(v___x_1555_, 4);
v_jps_1561_ = lean_ctor_get(v___x_1555_, 5);
v_fuel_1562_ = lean_ctor_get(v___x_1555_, 6);
v_inlineHandledInvariants_1563_ = lean_ctor_get(v___x_1555_, 7);
v_preTacFailed_1564_ = lean_ctor_get_uint8(v___x_1555_, sizeof(void*)*8);
v_isSharedCheck_1621_ = !lean_is_exclusive(v___x_1555_);
if (v_isSharedCheck_1621_ == 0)
{
v___x_1566_ = v___x_1555_;
v_isShared_1567_ = v_isSharedCheck_1621_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_inlineHandledInvariants_1563_);
lean_inc(v_fuel_1562_);
lean_inc(v_jps_1561_);
lean_inc(v_simpState_1560_);
lean_inc(v_vcs_1559_);
lean_inc(v_invariants_1558_);
lean_inc(v_splitBackwardRuleCache_1557_);
lean_inc(v_specBackwardRuleCache_1556_);
lean_dec(v___x_1555_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1621_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1568_; lean_object* v___x_1570_; 
lean_inc(v_head_1547_);
v___x_1568_ = lean_array_push(v_invariants_1558_, v_head_1547_);
if (v_isShared_1567_ == 0)
{
lean_ctor_set(v___x_1566_, 2, v___x_1568_);
v___x_1570_ = v___x_1566_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v_specBackwardRuleCache_1556_);
lean_ctor_set(v_reuseFailAlloc_1620_, 1, v_splitBackwardRuleCache_1557_);
lean_ctor_set(v_reuseFailAlloc_1620_, 2, v___x_1568_);
lean_ctor_set(v_reuseFailAlloc_1620_, 3, v_vcs_1559_);
lean_ctor_set(v_reuseFailAlloc_1620_, 4, v_simpState_1560_);
lean_ctor_set(v_reuseFailAlloc_1620_, 5, v_jps_1561_);
lean_ctor_set(v_reuseFailAlloc_1620_, 6, v_fuel_1562_);
lean_ctor_set(v_reuseFailAlloc_1620_, 7, v_inlineHandledInvariants_1563_);
lean_ctor_set_uint8(v_reuseFailAlloc_1620_, sizeof(void*)*8, v_preTacFailed_1564_);
v___x_1570_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
lean_object* v___x_1571_; lean_object* v_invariants_1572_; lean_object* v_invariantAlts_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1571_ = lean_st_ref_set(v___y_1538_, v___x_1570_);
v_invariants_1572_ = lean_ctor_get(v___x_1554_, 2);
lean_inc_ref(v_invariants_1572_);
lean_dec(v___x_1554_);
v_invariantAlts_1573_ = lean_ctor_get(v___y_1537_, 19);
v___x_1574_ = lean_array_get_size(v_invariants_1572_);
lean_dec_ref(v_invariants_1572_);
v___x_1575_ = lean_unsigned_to_nat(1u);
v___x_1576_ = lean_nat_add(v___x_1574_, v___x_1575_);
lean_inc(v_head_1547_);
v___x_1577_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant(v_invariantAlts_1573_, v___x_1576_, v_head_1547_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_);
if (lean_obj_tag(v___x_1577_) == 0)
{
lean_object* v_a_1578_; uint8_t v___x_1579_; 
v_a_1578_ = lean_ctor_get(v___x_1577_, 0);
lean_inc(v_a_1578_);
lean_dec_ref_known(v___x_1577_, 1);
v___x_1579_ = lean_unbox(v_a_1578_);
lean_dec(v_a_1578_);
if (v___x_1579_ == 0)
{
uint8_t v___x_1580_; lean_object* v___x_1581_; 
lean_dec(v___x_1576_);
v___x_1580_ = 2;
lean_inc(v_head_1547_);
v___x_1581_ = l_Lean_MVarId_setKind___redArg(v_head_1547_, v___x_1580_, v___y_1542_);
if (lean_obj_tag(v___x_1581_) == 0)
{
lean_dec_ref_known(v___x_1581_, 1);
v_as_x27_1535_ = v_tail_1548_;
goto _start;
}
else
{
lean_object* v_a_1583_; lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1590_; 
lean_dec_ref(v_b_1536_);
lean_dec_ref(v___x_1534_);
v_a_1583_ = lean_ctor_get(v___x_1581_, 0);
v_isSharedCheck_1590_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1585_ = v___x_1581_;
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
else
{
lean_inc(v_a_1583_);
lean_dec(v___x_1581_);
v___x_1585_ = lean_box(0);
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
v_resetjp_1584_:
{
lean_object* v___x_1588_; 
if (v_isShared_1586_ == 0)
{
v___x_1588_ = v___x_1585_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v_a_1583_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
return v___x_1588_;
}
}
}
}
else
{
lean_object* v___x_1591_; lean_object* v_specBackwardRuleCache_1592_; lean_object* v_splitBackwardRuleCache_1593_; lean_object* v_invariants_1594_; lean_object* v_vcs_1595_; lean_object* v_simpState_1596_; lean_object* v_jps_1597_; lean_object* v_fuel_1598_; lean_object* v_inlineHandledInvariants_1599_; uint8_t v_preTacFailed_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1611_; 
v___x_1591_ = lean_st_ref_take(v___y_1538_);
v_specBackwardRuleCache_1592_ = lean_ctor_get(v___x_1591_, 0);
v_splitBackwardRuleCache_1593_ = lean_ctor_get(v___x_1591_, 1);
v_invariants_1594_ = lean_ctor_get(v___x_1591_, 2);
v_vcs_1595_ = lean_ctor_get(v___x_1591_, 3);
v_simpState_1596_ = lean_ctor_get(v___x_1591_, 4);
v_jps_1597_ = lean_ctor_get(v___x_1591_, 5);
v_fuel_1598_ = lean_ctor_get(v___x_1591_, 6);
v_inlineHandledInvariants_1599_ = lean_ctor_get(v___x_1591_, 7);
v_preTacFailed_1600_ = lean_ctor_get_uint8(v___x_1591_, sizeof(void*)*8);
v_isSharedCheck_1611_ = !lean_is_exclusive(v___x_1591_);
if (v_isSharedCheck_1611_ == 0)
{
v___x_1602_ = v___x_1591_;
v_isShared_1603_ = v_isSharedCheck_1611_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_inlineHandledInvariants_1599_);
lean_inc(v_fuel_1598_);
lean_inc(v_jps_1597_);
lean_inc(v_simpState_1596_);
lean_inc(v_vcs_1595_);
lean_inc(v_invariants_1594_);
lean_inc(v_splitBackwardRuleCache_1593_);
lean_inc(v_specBackwardRuleCache_1592_);
lean_dec(v___x_1591_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1611_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1607_; 
v___x_1604_ = lean_box(0);
v___x_1605_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0___redArg(v_inlineHandledInvariants_1599_, v___x_1576_, v___x_1604_);
if (v_isShared_1603_ == 0)
{
lean_ctor_set(v___x_1602_, 7, v___x_1605_);
v___x_1607_ = v___x_1602_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v_specBackwardRuleCache_1592_);
lean_ctor_set(v_reuseFailAlloc_1610_, 1, v_splitBackwardRuleCache_1593_);
lean_ctor_set(v_reuseFailAlloc_1610_, 2, v_invariants_1594_);
lean_ctor_set(v_reuseFailAlloc_1610_, 3, v_vcs_1595_);
lean_ctor_set(v_reuseFailAlloc_1610_, 4, v_simpState_1596_);
lean_ctor_set(v_reuseFailAlloc_1610_, 5, v_jps_1597_);
lean_ctor_set(v_reuseFailAlloc_1610_, 6, v_fuel_1598_);
lean_ctor_set(v_reuseFailAlloc_1610_, 7, v___x_1605_);
lean_ctor_set_uint8(v_reuseFailAlloc_1610_, sizeof(void*)*8, v_preTacFailed_1600_);
v___x_1607_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
lean_object* v___x_1608_; 
v___x_1608_ = lean_st_ref_set(v___y_1538_, v___x_1607_);
v_as_x27_1535_ = v_tail_1548_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1612_; lean_object* v___x_1614_; uint8_t v_isShared_1615_; uint8_t v_isSharedCheck_1619_; 
lean_dec(v___x_1576_);
lean_dec_ref(v_b_1536_);
lean_dec_ref(v___x_1534_);
v_a_1612_ = lean_ctor_get(v___x_1577_, 0);
v_isSharedCheck_1619_ = !lean_is_exclusive(v___x_1577_);
if (v_isSharedCheck_1619_ == 0)
{
v___x_1614_ = v___x_1577_;
v_isShared_1615_ = v_isSharedCheck_1619_;
goto v_resetjp_1613_;
}
else
{
lean_inc(v_a_1612_);
lean_dec(v___x_1577_);
v___x_1614_ = lean_box(0);
v_isShared_1615_ = v_isSharedCheck_1619_;
goto v_resetjp_1613_;
}
v_resetjp_1613_:
{
lean_object* v___x_1617_; 
if (v_isShared_1615_ == 0)
{
v___x_1617_ = v___x_1614_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v_a_1612_);
v___x_1617_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
return v___x_1617_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1629_; 
lean_dec_ref(v_b_1536_);
lean_dec_ref(v___x_1534_);
v_a_1622_ = lean_ctor_get(v___x_1549_, 0);
v_isSharedCheck_1629_ = !lean_is_exclusive(v___x_1549_);
if (v_isSharedCheck_1629_ == 0)
{
v___x_1624_ = v___x_1549_;
v_isShared_1625_ = v_isSharedCheck_1629_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_a_1622_);
lean_dec(v___x_1549_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1629_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
lean_object* v___x_1627_; 
if (v_isShared_1625_ == 0)
{
v___x_1627_ = v___x_1624_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v_a_1622_);
v___x_1627_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
return v___x_1627_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1___redArg___boxed(lean_object* v___x_1630_, lean_object* v_as_x27_1631_, lean_object* v_b_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1___redArg(v___x_1630_, v_as_x27_1631_, v_b_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_);
lean_dec(v___y_1640_);
lean_dec_ref(v___y_1639_);
lean_dec(v___y_1638_);
lean_dec_ref(v___y_1637_);
lean_dec(v___y_1636_);
lean_dec_ref(v___y_1635_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1633_);
lean_dec(v_as_x27_1631_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals(lean_object* v_subgoals_1645_, lean_object* v_a_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_, lean_object* v_a_1654_, lean_object* v_a_1655_, lean_object* v_a_1656_){
_start:
{
lean_object* v___x_1658_; lean_object* v_env_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1658_ = lean_st_ref_get(v_a_1656_);
v_env_1659_ = lean_ctor_get(v___x_1658_, 0);
lean_inc_ref(v_env_1659_);
lean_dec(v___x_1658_);
v___x_1660_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals___closed__0));
v___x_1661_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1___redArg(v_env_1659_, v_subgoals_1645_, v___x_1660_, v_a_1646_, v_a_1647_, v_a_1651_, v_a_1652_, v_a_1653_, v_a_1654_, v_a_1655_, v_a_1656_);
return v___x_1661_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals___boxed(lean_object* v_subgoals_1662_, lean_object* v_a_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_){
_start:
{
lean_object* v_res_1675_; 
v_res_1675_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals(v_subgoals_1662_, v_a_1663_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_, v_a_1668_, v_a_1669_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_);
lean_dec(v_a_1673_);
lean_dec_ref(v_a_1672_);
lean_dec(v_a_1671_);
lean_dec_ref(v_a_1670_);
lean_dec(v_a_1669_);
lean_dec_ref(v_a_1668_);
lean_dec(v_a_1667_);
lean_dec_ref(v_a_1666_);
lean_dec(v_a_1665_);
lean_dec(v_a_1664_);
lean_dec_ref(v_a_1663_);
lean_dec(v_subgoals_1662_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0(lean_object* v_00_u03b2_1676_, lean_object* v_m_1677_, lean_object* v_a_1678_, lean_object* v_b_1679_){
_start:
{
lean_object* v___x_1680_; 
v___x_1680_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0___redArg(v_m_1677_, v_a_1678_, v_b_1679_);
return v___x_1680_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1(lean_object* v___x_1681_, lean_object* v_as_1682_, lean_object* v_as_x27_1683_, lean_object* v_b_1684_, lean_object* v_a_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_){
_start:
{
lean_object* v___x_1698_; 
v___x_1698_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1___redArg(v___x_1681_, v_as_x27_1683_, v_b_1684_, v___y_1686_, v___y_1687_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_);
return v___x_1698_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1___boxed(lean_object** _args){
lean_object* v___x_1699_ = _args[0];
lean_object* v_as_1700_ = _args[1];
lean_object* v_as_x27_1701_ = _args[2];
lean_object* v_b_1702_ = _args[3];
lean_object* v_a_1703_ = _args[4];
lean_object* v___y_1704_ = _args[5];
lean_object* v___y_1705_ = _args[6];
lean_object* v___y_1706_ = _args[7];
lean_object* v___y_1707_ = _args[8];
lean_object* v___y_1708_ = _args[9];
lean_object* v___y_1709_ = _args[10];
lean_object* v___y_1710_ = _args[11];
lean_object* v___y_1711_ = _args[12];
lean_object* v___y_1712_ = _args[13];
lean_object* v___y_1713_ = _args[14];
lean_object* v___y_1714_ = _args[15];
lean_object* v___y_1715_ = _args[16];
_start:
{
lean_object* v_res_1716_; 
v_res_1716_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1(v___x_1699_, v_as_1700_, v_as_x27_1701_, v_b_1702_, v_a_1703_, v___y_1704_, v___y_1705_, v___y_1706_, v___y_1707_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_);
lean_dec(v___y_1714_);
lean_dec_ref(v___y_1713_);
lean_dec(v___y_1712_);
lean_dec_ref(v___y_1711_);
lean_dec(v___y_1710_);
lean_dec_ref(v___y_1709_);
lean_dec(v___y_1708_);
lean_dec_ref(v___y_1707_);
lean_dec(v___y_1706_);
lean_dec(v___y_1705_);
lean_dec_ref(v___y_1704_);
lean_dec(v_as_x27_1701_);
lean_dec(v_as_1700_);
return v_res_1716_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0(lean_object* v_00_u03b2_1717_, lean_object* v_a_1718_, lean_object* v_x_1719_){
_start:
{
uint8_t v___x_1720_; 
v___x_1720_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg(v_a_1718_, v_x_1719_);
return v___x_1720_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1721_, lean_object* v_a_1722_, lean_object* v_x_1723_){
_start:
{
uint8_t v_res_1724_; lean_object* v_r_1725_; 
v_res_1724_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0(v_00_u03b2_1721_, v_a_1722_, v_x_1723_);
lean_dec(v_x_1723_);
lean_dec(v_a_1722_);
v_r_1725_ = lean_box(v_res_1724_);
return v_r_1725_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1(lean_object* v_00_u03b2_1726_, lean_object* v_data_1727_){
_start:
{
lean_object* v___x_1728_; 
v___x_1728_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1___redArg(v_data_1727_);
return v___x_1728_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1729_, lean_object* v_i_1730_, lean_object* v_source_1731_, lean_object* v_target_1732_){
_start:
{
lean_object* v___x_1733_; 
v___x_1733_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2___redArg(v_i_1730_, v_source_1731_, v_target_1732_);
return v___x_1733_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_1734_, lean_object* v_x_1735_, lean_object* v_x_1736_){
_start:
{
lean_object* v___x_1737_; 
v___x_1737_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4___redArg(v_x_1735_, v_x_1736_);
return v___x_1737_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_emitVC_spec__0___redArg(lean_object* v_as_x27_1738_, lean_object* v_b_1739_, lean_object* v___y_1740_){
_start:
{
if (lean_obj_tag(v_as_x27_1738_) == 0)
{
lean_object* v___x_1742_; 
v___x_1742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1742_, 0, v_b_1739_);
return v___x_1742_;
}
else
{
lean_object* v_head_1743_; lean_object* v_tail_1744_; lean_object* v_mvarId_1745_; uint8_t v___x_1746_; lean_object* v___x_1747_; 
v_head_1743_ = lean_ctor_get(v_as_x27_1738_, 0);
v_tail_1744_ = lean_ctor_get(v_as_x27_1738_, 1);
v_mvarId_1745_ = lean_ctor_get(v_head_1743_, 1);
v___x_1746_ = 2;
lean_inc(v_mvarId_1745_);
v___x_1747_ = l_Lean_MVarId_setKind___redArg(v_mvarId_1745_, v___x_1746_, v___y_1740_);
if (lean_obj_tag(v___x_1747_) == 0)
{
lean_object* v___x_1748_; 
lean_dec_ref_known(v___x_1747_, 1);
lean_inc(v_head_1743_);
v___x_1748_ = lean_array_push(v_b_1739_, v_head_1743_);
v_as_x27_1738_ = v_tail_1744_;
v_b_1739_ = v___x_1748_;
goto _start;
}
else
{
lean_object* v_a_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1757_; 
lean_dec_ref(v_b_1739_);
v_a_1750_ = lean_ctor_get(v___x_1747_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1752_ = v___x_1747_;
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_a_1750_);
lean_dec(v___x_1747_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1755_; 
if (v_isShared_1753_ == 0)
{
v___x_1755_ = v___x_1752_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_a_1750_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_emitVC_spec__0___redArg___boxed(lean_object* v_as_x27_1758_, lean_object* v_b_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_){
_start:
{
lean_object* v_res_1762_; 
v_res_1762_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_emitVC_spec__0___redArg(v_as_x27_1758_, v_b_1759_, v___y_1760_);
lean_dec(v___y_1760_);
lean_dec(v_as_x27_1758_);
return v_res_1762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_emitVC(lean_object* v_goal_1765_, lean_object* v_a_1766_, lean_object* v_a_1767_, lean_object* v_a_1768_, lean_object* v_a_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_, lean_object* v_a_1773_, lean_object* v_a_1774_, lean_object* v_a_1775_, lean_object* v_a_1776_){
_start:
{
lean_object* v_preTac_1778_; uint8_t v_trivial_1779_; lean_object* v___x_1780_; 
v_preTac_1778_ = lean_ctor_get(v_a_1766_, 18);
v_trivial_1779_ = lean_ctor_get_uint8(v_a_1766_, sizeof(void*)*20);
v___x_1780_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_processHypotheses___redArg(v_preTac_1778_, v_goal_1765_, v_a_1768_, v_a_1769_, v_a_1770_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_, v_a_1775_, v_a_1776_);
if (lean_obj_tag(v___x_1780_) == 0)
{
lean_object* v_a_1781_; lean_object* v___x_1782_; lean_object* v_mvarId_1784_; lean_object* v___y_1785_; lean_object* v___y_1786_; lean_object* v___y_1787_; lean_object* v___y_1788_; lean_object* v___y_1789_; lean_object* v___y_1790_; lean_object* v___y_1791_; lean_object* v___y_1792_; lean_object* v___y_1793_; lean_object* v___y_1794_; lean_object* v___y_1795_; 
v_a_1781_ = lean_ctor_get(v___x_1780_, 0);
lean_inc(v_a_1781_);
lean_dec_ref_known(v___x_1780_, 1);
v___x_1782_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_emitVC___closed__0));
if (v_trivial_1779_ == 0)
{
lean_object* v_mvarId_1853_; 
v_mvarId_1853_ = lean_ctor_get(v_a_1781_, 1);
lean_inc(v_mvarId_1853_);
v_mvarId_1784_ = v_mvarId_1853_;
v___y_1785_ = v_a_1766_;
v___y_1786_ = v_a_1767_;
v___y_1787_ = v_a_1768_;
v___y_1788_ = v_a_1769_;
v___y_1789_ = v_a_1770_;
v___y_1790_ = v_a_1771_;
v___y_1791_ = v_a_1772_;
v___y_1792_ = v_a_1773_;
v___y_1793_ = v_a_1774_;
v___y_1794_ = v_a_1775_;
v___y_1795_ = v_a_1776_;
goto v___jp_1783_;
}
else
{
lean_object* v_mvarId_1854_; lean_object* v___x_1855_; 
v_mvarId_1854_ = lean_ctor_get(v_a_1781_, 1);
lean_inc(v_mvarId_1854_);
v___x_1855_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl(v_mvarId_1854_, v_a_1766_, v_a_1767_, v_a_1768_, v_a_1769_, v_a_1770_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_, v_a_1775_, v_a_1776_);
if (lean_obj_tag(v___x_1855_) == 0)
{
lean_object* v_a_1856_; lean_object* v___x_1858_; uint8_t v_isShared_1859_; uint8_t v_isSharedCheck_1865_; 
v_a_1856_ = lean_ctor_get(v___x_1855_, 0);
v_isSharedCheck_1865_ = !lean_is_exclusive(v___x_1855_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1858_ = v___x_1855_;
v_isShared_1859_ = v_isSharedCheck_1865_;
goto v_resetjp_1857_;
}
else
{
lean_inc(v_a_1856_);
lean_dec(v___x_1855_);
v___x_1858_ = lean_box(0);
v_isShared_1859_ = v_isSharedCheck_1865_;
goto v_resetjp_1857_;
}
v_resetjp_1857_:
{
if (lean_obj_tag(v_a_1856_) == 1)
{
lean_object* v_val_1860_; 
lean_del_object(v___x_1858_);
v_val_1860_ = lean_ctor_get(v_a_1856_, 0);
lean_inc(v_val_1860_);
lean_dec_ref_known(v_a_1856_, 1);
v_mvarId_1784_ = v_val_1860_;
v___y_1785_ = v_a_1766_;
v___y_1786_ = v_a_1767_;
v___y_1787_ = v_a_1768_;
v___y_1788_ = v_a_1769_;
v___y_1789_ = v_a_1770_;
v___y_1790_ = v_a_1771_;
v___y_1791_ = v_a_1772_;
v___y_1792_ = v_a_1773_;
v___y_1793_ = v_a_1774_;
v___y_1794_ = v_a_1775_;
v___y_1795_ = v_a_1776_;
goto v___jp_1783_;
}
else
{
lean_object* v___x_1861_; lean_object* v___x_1863_; 
lean_dec(v_a_1856_);
lean_dec(v_a_1781_);
v___x_1861_ = lean_box(0);
if (v_isShared_1859_ == 0)
{
lean_ctor_set(v___x_1858_, 0, v___x_1861_);
v___x_1863_ = v___x_1858_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v___x_1861_);
v___x_1863_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
return v___x_1863_;
}
}
}
}
else
{
lean_object* v_a_1866_; lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1873_; 
lean_dec(v_a_1781_);
v_a_1866_ = lean_ctor_get(v___x_1855_, 0);
v_isSharedCheck_1873_ = !lean_is_exclusive(v___x_1855_);
if (v_isSharedCheck_1873_ == 0)
{
v___x_1868_ = v___x_1855_;
v_isShared_1869_ = v_isSharedCheck_1873_;
goto v_resetjp_1867_;
}
else
{
lean_inc(v_a_1866_);
lean_dec(v___x_1855_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1873_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v___x_1871_; 
if (v_isShared_1869_ == 0)
{
v___x_1871_ = v___x_1868_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v_a_1866_);
v___x_1871_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
return v___x_1871_;
}
}
}
}
v___jp_1783_:
{
lean_object* v_toGoalState_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1851_; 
v_toGoalState_1796_ = lean_ctor_get(v_a_1781_, 0);
v_isSharedCheck_1851_ = !lean_is_exclusive(v_a_1781_);
if (v_isSharedCheck_1851_ == 0)
{
lean_object* v_unused_1852_; 
v_unused_1852_ = lean_ctor_get(v_a_1781_, 1);
lean_dec(v_unused_1852_);
v___x_1798_ = v_a_1781_;
v_isShared_1799_ = v_isSharedCheck_1851_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_toGoalState_1796_);
lean_dec(v_a_1781_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1851_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v_preTac_1800_; lean_object* v___x_1802_; 
v_preTac_1800_ = lean_ctor_get(v___y_1785_, 18);
if (v_isShared_1799_ == 0)
{
lean_ctor_set(v___x_1798_, 1, v_mvarId_1784_);
v___x_1802_ = v___x_1798_;
goto v_reusejp_1801_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v_toGoalState_1796_);
lean_ctor_set(v_reuseFailAlloc_1850_, 1, v_mvarId_1784_);
v___x_1802_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1801_;
}
v_reusejp_1801_:
{
lean_object* v___x_1803_; 
lean_inc(v_preTac_1800_);
v___x_1803_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run(v_preTac_1800_, v___x_1802_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_);
if (lean_obj_tag(v___x_1803_) == 0)
{
lean_object* v_a_1804_; lean_object* v___x_1805_; 
v_a_1804_ = lean_ctor_get(v___x_1803_, 0);
lean_inc(v_a_1804_);
lean_dec_ref_known(v___x_1803_, 1);
v___x_1805_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_emitVC_spec__0___redArg(v_a_1804_, v___x_1782_, v___y_1793_);
lean_dec(v_a_1804_);
if (lean_obj_tag(v___x_1805_) == 0)
{
lean_object* v_a_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1833_; 
v_a_1806_ = lean_ctor_get(v___x_1805_, 0);
v_isSharedCheck_1833_ = !lean_is_exclusive(v___x_1805_);
if (v_isSharedCheck_1833_ == 0)
{
v___x_1808_ = v___x_1805_;
v_isShared_1809_ = v_isSharedCheck_1833_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_a_1806_);
lean_dec(v___x_1805_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1833_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v___x_1810_; lean_object* v_specBackwardRuleCache_1811_; lean_object* v_splitBackwardRuleCache_1812_; lean_object* v_invariants_1813_; lean_object* v_vcs_1814_; lean_object* v_simpState_1815_; lean_object* v_jps_1816_; lean_object* v_fuel_1817_; lean_object* v_inlineHandledInvariants_1818_; uint8_t v_preTacFailed_1819_; lean_object* v___x_1821_; uint8_t v_isShared_1822_; uint8_t v_isSharedCheck_1832_; 
v___x_1810_ = lean_st_ref_take(v___y_1786_);
v_specBackwardRuleCache_1811_ = lean_ctor_get(v___x_1810_, 0);
v_splitBackwardRuleCache_1812_ = lean_ctor_get(v___x_1810_, 1);
v_invariants_1813_ = lean_ctor_get(v___x_1810_, 2);
v_vcs_1814_ = lean_ctor_get(v___x_1810_, 3);
v_simpState_1815_ = lean_ctor_get(v___x_1810_, 4);
v_jps_1816_ = lean_ctor_get(v___x_1810_, 5);
v_fuel_1817_ = lean_ctor_get(v___x_1810_, 6);
v_inlineHandledInvariants_1818_ = lean_ctor_get(v___x_1810_, 7);
v_preTacFailed_1819_ = lean_ctor_get_uint8(v___x_1810_, sizeof(void*)*8);
v_isSharedCheck_1832_ = !lean_is_exclusive(v___x_1810_);
if (v_isSharedCheck_1832_ == 0)
{
v___x_1821_ = v___x_1810_;
v_isShared_1822_ = v_isSharedCheck_1832_;
goto v_resetjp_1820_;
}
else
{
lean_inc(v_inlineHandledInvariants_1818_);
lean_inc(v_fuel_1817_);
lean_inc(v_jps_1816_);
lean_inc(v_simpState_1815_);
lean_inc(v_vcs_1814_);
lean_inc(v_invariants_1813_);
lean_inc(v_splitBackwardRuleCache_1812_);
lean_inc(v_specBackwardRuleCache_1811_);
lean_dec(v___x_1810_);
v___x_1821_ = lean_box(0);
v_isShared_1822_ = v_isSharedCheck_1832_;
goto v_resetjp_1820_;
}
v_resetjp_1820_:
{
lean_object* v___x_1823_; lean_object* v___x_1825_; 
v___x_1823_ = l_Array_append___redArg(v_vcs_1814_, v_a_1806_);
lean_dec(v_a_1806_);
if (v_isShared_1822_ == 0)
{
lean_ctor_set(v___x_1821_, 3, v___x_1823_);
v___x_1825_ = v___x_1821_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v_specBackwardRuleCache_1811_);
lean_ctor_set(v_reuseFailAlloc_1831_, 1, v_splitBackwardRuleCache_1812_);
lean_ctor_set(v_reuseFailAlloc_1831_, 2, v_invariants_1813_);
lean_ctor_set(v_reuseFailAlloc_1831_, 3, v___x_1823_);
lean_ctor_set(v_reuseFailAlloc_1831_, 4, v_simpState_1815_);
lean_ctor_set(v_reuseFailAlloc_1831_, 5, v_jps_1816_);
lean_ctor_set(v_reuseFailAlloc_1831_, 6, v_fuel_1817_);
lean_ctor_set(v_reuseFailAlloc_1831_, 7, v_inlineHandledInvariants_1818_);
lean_ctor_set_uint8(v_reuseFailAlloc_1831_, sizeof(void*)*8, v_preTacFailed_1819_);
v___x_1825_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1829_; 
v___x_1826_ = lean_st_ref_set(v___y_1786_, v___x_1825_);
v___x_1827_ = lean_box(0);
if (v_isShared_1809_ == 0)
{
lean_ctor_set(v___x_1808_, 0, v___x_1827_);
v___x_1829_ = v___x_1808_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v___x_1827_);
v___x_1829_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1828_;
}
v_reusejp_1828_:
{
return v___x_1829_;
}
}
}
}
}
else
{
lean_object* v_a_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1841_; 
v_a_1834_ = lean_ctor_get(v___x_1805_, 0);
v_isSharedCheck_1841_ = !lean_is_exclusive(v___x_1805_);
if (v_isSharedCheck_1841_ == 0)
{
v___x_1836_ = v___x_1805_;
v_isShared_1837_ = v_isSharedCheck_1841_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_a_1834_);
lean_dec(v___x_1805_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1841_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
lean_object* v___x_1839_; 
if (v_isShared_1837_ == 0)
{
v___x_1839_ = v___x_1836_;
goto v_reusejp_1838_;
}
else
{
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v_a_1834_);
v___x_1839_ = v_reuseFailAlloc_1840_;
goto v_reusejp_1838_;
}
v_reusejp_1838_:
{
return v___x_1839_;
}
}
}
}
else
{
lean_object* v_a_1842_; lean_object* v___x_1844_; uint8_t v_isShared_1845_; uint8_t v_isSharedCheck_1849_; 
v_a_1842_ = lean_ctor_get(v___x_1803_, 0);
v_isSharedCheck_1849_ = !lean_is_exclusive(v___x_1803_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1844_ = v___x_1803_;
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
else
{
lean_inc(v_a_1842_);
lean_dec(v___x_1803_);
v___x_1844_ = lean_box(0);
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
v_resetjp_1843_:
{
lean_object* v___x_1847_; 
if (v_isShared_1845_ == 0)
{
v___x_1847_ = v___x_1844_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_a_1842_);
v___x_1847_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
return v___x_1847_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1881_; 
v_a_1874_ = lean_ctor_get(v___x_1780_, 0);
v_isSharedCheck_1881_ = !lean_is_exclusive(v___x_1780_);
if (v_isSharedCheck_1881_ == 0)
{
v___x_1876_ = v___x_1780_;
v_isShared_1877_ = v_isSharedCheck_1881_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_a_1874_);
lean_dec(v___x_1780_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1881_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1879_; 
if (v_isShared_1877_ == 0)
{
v___x_1879_ = v___x_1876_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v_a_1874_);
v___x_1879_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
return v___x_1879_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_emitVC___boxed(lean_object* v_goal_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_, lean_object* v_a_1885_, lean_object* v_a_1886_, lean_object* v_a_1887_, lean_object* v_a_1888_, lean_object* v_a_1889_, lean_object* v_a_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_){
_start:
{
lean_object* v_res_1895_; 
v_res_1895_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_emitVC(v_goal_1882_, v_a_1883_, v_a_1884_, v_a_1885_, v_a_1886_, v_a_1887_, v_a_1888_, v_a_1889_, v_a_1890_, v_a_1891_, v_a_1892_, v_a_1893_);
lean_dec(v_a_1893_);
lean_dec_ref(v_a_1892_);
lean_dec(v_a_1891_);
lean_dec_ref(v_a_1890_);
lean_dec(v_a_1889_);
lean_dec_ref(v_a_1888_);
lean_dec(v_a_1887_);
lean_dec_ref(v_a_1886_);
lean_dec(v_a_1885_);
lean_dec(v_a_1884_);
lean_dec_ref(v_a_1883_);
return v_res_1895_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_emitVC_spec__0(lean_object* v_as_1896_, lean_object* v_as_x27_1897_, lean_object* v_b_1898_, lean_object* v_a_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_){
_start:
{
lean_object* v___x_1912_; 
v___x_1912_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_emitVC_spec__0___redArg(v_as_x27_1897_, v_b_1898_, v___y_1908_);
return v___x_1912_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_emitVC_spec__0___boxed(lean_object* v_as_1913_, lean_object* v_as_x27_1914_, lean_object* v_b_1915_, lean_object* v_a_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_){
_start:
{
lean_object* v_res_1929_; 
v_res_1929_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_emitVC_spec__0(v_as_1913_, v_as_x27_1914_, v_b_1915_, v_a_1916_, v___y_1917_, v___y_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_, v___y_1923_, v___y_1924_, v___y_1925_, v___y_1926_, v___y_1927_);
lean_dec(v___y_1927_);
lean_dec_ref(v___y_1926_);
lean_dec(v___y_1925_);
lean_dec_ref(v___y_1924_);
lean_dec(v___y_1923_);
lean_dec_ref(v___y_1922_);
lean_dec(v___y_1921_);
lean_dec_ref(v___y_1920_);
lean_dec(v___y_1919_);
lean_dec(v___y_1918_);
lean_dec_ref(v___y_1917_);
lean_dec(v_as_x27_1914_);
lean_dec(v_as_1913_);
return v_res_1929_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0___redArg(lean_object* v_msg_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_){
_start:
{
lean_object* v_ref_1936_; lean_object* v___x_1937_; lean_object* v_a_1938_; lean_object* v___x_1940_; uint8_t v_isShared_1941_; uint8_t v_isSharedCheck_1946_; 
v_ref_1936_ = lean_ctor_get(v___y_1933_, 5);
v___x_1937_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__0_spec__0_spec__2_spec__4(v_msg_1930_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_);
v_a_1938_ = lean_ctor_get(v___x_1937_, 0);
v_isSharedCheck_1946_ = !lean_is_exclusive(v___x_1937_);
if (v_isSharedCheck_1946_ == 0)
{
v___x_1940_ = v___x_1937_;
v_isShared_1941_ = v_isSharedCheck_1946_;
goto v_resetjp_1939_;
}
else
{
lean_inc(v_a_1938_);
lean_dec(v___x_1937_);
v___x_1940_ = lean_box(0);
v_isShared_1941_ = v_isSharedCheck_1946_;
goto v_resetjp_1939_;
}
v_resetjp_1939_:
{
lean_object* v___x_1942_; lean_object* v___x_1944_; 
lean_inc(v_ref_1936_);
v___x_1942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1942_, 0, v_ref_1936_);
lean_ctor_set(v___x_1942_, 1, v_a_1938_);
if (v_isShared_1941_ == 0)
{
lean_ctor_set_tag(v___x_1940_, 1);
lean_ctor_set(v___x_1940_, 0, v___x_1942_);
v___x_1944_ = v___x_1940_;
goto v_reusejp_1943_;
}
else
{
lean_object* v_reuseFailAlloc_1945_; 
v_reuseFailAlloc_1945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1945_, 0, v___x_1942_);
v___x_1944_ = v_reuseFailAlloc_1945_;
goto v_reusejp_1943_;
}
v_reusejp_1943_:
{
return v___x_1944_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0___redArg___boxed(lean_object* v_msg_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_){
_start:
{
lean_object* v_res_1953_; 
v_res_1953_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0___redArg(v_msg_1947_, v___y_1948_, v___y_1949_, v___y_1950_, v___y_1951_);
lean_dec(v___y_1951_);
lean_dec_ref(v___y_1950_);
lean_dec(v___y_1949_);
lean_dec_ref(v___y_1948_);
return v_res_1953_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0(lean_object* v_00_u03b1_1954_, lean_object* v_msg_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_){
_start:
{
lean_object* v___x_1968_; 
v___x_1968_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0___redArg(v_msg_1955_, v___y_1963_, v___y_1964_, v___y_1965_, v___y_1966_);
return v___x_1968_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0___boxed(lean_object* v_00_u03b1_1969_, lean_object* v_msg_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_){
_start:
{
lean_object* v_res_1983_; 
v_res_1983_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0(v_00_u03b1_1969_, v_msg_1970_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_);
lean_dec(v___y_1981_);
lean_dec_ref(v___y_1980_);
lean_dec(v___y_1979_);
lean_dec_ref(v___y_1978_);
lean_dec(v___y_1977_);
lean_dec_ref(v___y_1976_);
lean_dec(v___y_1975_);
lean_dec_ref(v___y_1974_);
lean_dec(v___y_1973_);
lean_dec(v___y_1972_);
lean_dec_ref(v___y_1971_);
return v_res_1983_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3(lean_object* v_goal_1984_, size_t v_sz_1985_, size_t v_i_1986_, lean_object* v_bs_1987_){
_start:
{
uint8_t v___x_1988_; 
v___x_1988_ = lean_usize_dec_lt(v_i_1986_, v_sz_1985_);
if (v___x_1988_ == 0)
{
return v_bs_1987_;
}
else
{
lean_object* v_toGoalState_1989_; lean_object* v_v_1990_; lean_object* v___x_1991_; lean_object* v_bs_x27_1992_; lean_object* v___x_1993_; size_t v___x_1994_; size_t v___x_1995_; lean_object* v___x_1996_; 
v_toGoalState_1989_ = lean_ctor_get(v_goal_1984_, 0);
v_v_1990_ = lean_array_uget(v_bs_1987_, v_i_1986_);
v___x_1991_ = lean_unsigned_to_nat(0u);
v_bs_x27_1992_ = lean_array_uset(v_bs_1987_, v_i_1986_, v___x_1991_);
lean_inc_ref(v_toGoalState_1989_);
v___x_1993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1993_, 0, v_toGoalState_1989_);
lean_ctor_set(v___x_1993_, 1, v_v_1990_);
v___x_1994_ = ((size_t)1ULL);
v___x_1995_ = lean_usize_add(v_i_1986_, v___x_1994_);
v___x_1996_ = lean_array_uset(v_bs_x27_1992_, v_i_1986_, v___x_1993_);
v_i_1986_ = v___x_1995_;
v_bs_1987_ = v___x_1996_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___boxed(lean_object* v_goal_1998_, lean_object* v_sz_1999_, lean_object* v_i_2000_, lean_object* v_bs_2001_){
_start:
{
size_t v_sz_boxed_2002_; size_t v_i_boxed_2003_; lean_object* v_res_2004_; 
v_sz_boxed_2002_ = lean_unbox_usize(v_sz_1999_);
lean_dec(v_sz_1999_);
v_i_boxed_2003_ = lean_unbox_usize(v_i_2000_);
lean_dec(v_i_2000_);
v_res_2004_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3(v_goal_1998_, v_sz_boxed_2002_, v_i_boxed_2003_, v_bs_2001_);
lean_dec_ref(v_goal_1998_);
return v_res_2004_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__2(lean_object* v_a_2005_, lean_object* v___x_2006_, lean_object* v_goal_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_){
_start:
{
lean_object* v___x_2020_; size_t v_sz_2021_; size_t v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; 
v___x_2020_ = l_Array_reverse___redArg(v_a_2005_);
v_sz_2021_ = lean_array_size(v___x_2020_);
v___x_2022_ = ((size_t)0ULL);
v___x_2023_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3(v_goal_2007_, v_sz_2021_, v___x_2022_, v___x_2020_);
v___x_2024_ = l_Array_append___redArg(v___x_2006_, v___x_2023_);
lean_dec_ref(v___x_2023_);
v___x_2025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2025_, 0, v___x_2024_);
v___x_2026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2026_, 0, v___x_2025_);
return v___x_2026_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__2___boxed(lean_object* v_a_2027_, lean_object* v___x_2028_, lean_object* v_goal_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_){
_start:
{
lean_object* v_res_2042_; 
v_res_2042_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__2(v_a_2027_, v___x_2028_, v_goal_2029_, v___y_2030_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_);
lean_dec(v___y_2040_);
lean_dec_ref(v___y_2039_);
lean_dec(v___y_2038_);
lean_dec_ref(v___y_2037_);
lean_dec(v___y_2036_);
lean_dec_ref(v___y_2035_);
lean_dec(v___y_2034_);
lean_dec_ref(v___y_2033_);
lean_dec(v___y_2032_);
lean_dec(v___y_2031_);
lean_dec_ref(v___y_2030_);
lean_dec_ref(v_goal_2029_);
return v_res_2042_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__1(void){
_start:
{
lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2044_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__0));
v___x_2045_ = l_Lean_stringToMessageData(v___x_2044_);
return v___x_2045_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__3(void){
_start:
{
lean_object* v___x_2047_; lean_object* v___x_2048_; 
v___x_2047_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__2));
v___x_2048_ = l_Lean_stringToMessageData(v___x_2047_);
return v___x_2048_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__5(void){
_start:
{
lean_object* v___x_2050_; lean_object* v___x_2051_; 
v___x_2050_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__4));
v___x_2051_ = l_Lean_stringToMessageData(v___x_2050_);
return v___x_2051_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__7(void){
_start:
{
lean_object* v___x_2053_; lean_object* v___x_2054_; 
v___x_2053_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__6));
v___x_2054_ = l_Lean_stringToMessageData(v___x_2053_);
return v___x_2054_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2(lean_object* v_a_2055_, lean_object* v_a_2056_){
_start:
{
if (lean_obj_tag(v_a_2055_) == 0)
{
lean_object* v___x_2057_; 
v___x_2057_ = l_List_reverse___redArg(v_a_2056_);
return v___x_2057_;
}
else
{
lean_object* v_head_2058_; lean_object* v_tail_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2087_; 
v_head_2058_ = lean_ctor_get(v_a_2055_, 0);
v_tail_2059_ = lean_ctor_get(v_a_2055_, 1);
v_isSharedCheck_2087_ = !lean_is_exclusive(v_a_2055_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2061_ = v_a_2055_;
v_isShared_2062_ = v_isSharedCheck_2087_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_tail_2059_);
lean_inc(v_head_2058_);
lean_dec(v_a_2055_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2087_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
lean_object* v___y_2064_; 
switch(lean_obj_tag(v_head_2058_))
{
case 0:
{
lean_object* v_declName_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; 
v_declName_2069_ = lean_ctor_get(v_head_2058_, 0);
lean_inc(v_declName_2069_);
lean_dec_ref_known(v_head_2058_, 1);
v___x_2070_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__1, &l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__1_once, _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__1);
v___x_2071_ = l_Lean_MessageData_ofName(v_declName_2069_);
v___x_2072_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2072_, 0, v___x_2070_);
lean_ctor_set(v___x_2072_, 1, v___x_2071_);
v___y_2064_ = v___x_2072_;
goto v___jp_2063_;
}
case 1:
{
lean_object* v_fvarId_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
v_fvarId_2073_ = lean_ctor_get(v_head_2058_, 0);
lean_inc(v_fvarId_2073_);
lean_dec_ref_known(v_head_2058_, 1);
v___x_2074_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__3, &l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__3_once, _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__3);
v___x_2075_ = l_Lean_mkFVar(v_fvarId_2073_);
v___x_2076_ = l_Lean_MessageData_ofExpr(v___x_2075_);
v___x_2077_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2077_, 0, v___x_2074_);
lean_ctor_set(v___x_2077_, 1, v___x_2076_);
v___y_2064_ = v___x_2077_;
goto v___jp_2063_;
}
default: 
{
lean_object* v_ref_2078_; lean_object* v_proof_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; 
v_ref_2078_ = lean_ctor_get(v_head_2058_, 1);
lean_inc(v_ref_2078_);
v_proof_2079_ = lean_ctor_get(v_head_2058_, 2);
lean_inc_ref(v_proof_2079_);
lean_dec_ref_known(v_head_2058_, 3);
v___x_2080_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__5, &l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__5_once, _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__5);
v___x_2081_ = l_Lean_MessageData_ofSyntax(v_ref_2078_);
v___x_2082_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2080_);
lean_ctor_set(v___x_2082_, 1, v___x_2081_);
v___x_2083_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__7, &l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__7_once, _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___closed__7);
v___x_2084_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2082_);
lean_ctor_set(v___x_2084_, 1, v___x_2083_);
v___x_2085_ = l_Lean_MessageData_ofExpr(v_proof_2079_);
v___x_2086_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2086_, 0, v___x_2084_);
lean_ctor_set(v___x_2086_, 1, v___x_2085_);
v___y_2064_ = v___x_2086_;
goto v___jp_2063_;
}
}
v___jp_2063_:
{
lean_object* v___x_2066_; 
if (v_isShared_2062_ == 0)
{
lean_ctor_set(v___x_2061_, 1, v_a_2056_);
lean_ctor_set(v___x_2061_, 0, v___y_2064_);
v___x_2066_ = v___x_2061_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v___y_2064_);
lean_ctor_set(v_reuseFailAlloc_2068_, 1, v_a_2056_);
v___x_2066_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
v_a_2055_ = v_tail_2059_;
v_a_2056_ = v___x_2066_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1(size_t v_sz_2088_, size_t v_i_2089_, lean_object* v_bs_2090_){
_start:
{
uint8_t v___x_2091_; 
v___x_2091_ = lean_usize_dec_lt(v_i_2089_, v_sz_2088_);
if (v___x_2091_ == 0)
{
return v_bs_2090_;
}
else
{
lean_object* v_v_2092_; lean_object* v_proof_2093_; lean_object* v___x_2094_; lean_object* v_bs_x27_2095_; size_t v___x_2096_; size_t v___x_2097_; lean_object* v___x_2098_; 
v_v_2092_ = lean_array_uget_borrowed(v_bs_2090_, v_i_2089_);
v_proof_2093_ = lean_ctor_get(v_v_2092_, 1);
lean_inc_ref(v_proof_2093_);
v___x_2094_ = lean_unsigned_to_nat(0u);
v_bs_x27_2095_ = lean_array_uset(v_bs_2090_, v_i_2089_, v___x_2094_);
v___x_2096_ = ((size_t)1ULL);
v___x_2097_ = lean_usize_add(v_i_2089_, v___x_2096_);
v___x_2098_ = lean_array_uset(v_bs_x27_2095_, v_i_2089_, v_proof_2093_);
v_i_2089_ = v___x_2097_;
v_bs_2090_ = v___x_2098_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1___boxed(lean_object* v_sz_2100_, lean_object* v_i_2101_, lean_object* v_bs_2102_){
_start:
{
size_t v_sz_boxed_2103_; size_t v_i_boxed_2104_; lean_object* v_res_2105_; 
v_sz_boxed_2103_ = lean_unbox_usize(v_sz_2100_);
lean_dec(v_sz_2100_);
v_i_boxed_2104_ = lean_unbox_usize(v_i_2101_);
lean_dec(v_i_2101_);
v_res_2105_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1(v_sz_boxed_2103_, v_i_boxed_2104_, v_bs_2102_);
return v_res_2105_;
}
}
static lean_object* _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2107_; lean_object* v___x_2108_; 
v___x_2107_ = ((lean_object*)(l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__0));
v___x_2108_ = l_Lean_stringToMessageData(v___x_2107_);
return v___x_2108_;
}
}
static lean_object* _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__3(void){
_start:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2110_ = ((lean_object*)(l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__2));
v___x_2111_ = l_Lean_stringToMessageData(v___x_2110_);
return v___x_2111_;
}
}
static lean_object* _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__5(void){
_start:
{
lean_object* v___x_2113_; lean_object* v___x_2114_; 
v___x_2113_ = ((lean_object*)(l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__4));
v___x_2114_ = l_Lean_stringToMessageData(v___x_2113_);
return v___x_2114_;
}
}
static lean_object* _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__7(void){
_start:
{
lean_object* v___x_2116_; lean_object* v___x_2117_; 
v___x_2116_ = ((lean_object*)(l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__6));
v___x_2117_ = l_Lean_stringToMessageData(v___x_2116_);
return v___x_2117_;
}
}
static lean_object* _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__9(void){
_start:
{
lean_object* v___x_2119_; lean_object* v___x_2120_; 
v___x_2119_ = ((lean_object*)(l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__8));
v___x_2120_ = l_Lean_stringToMessageData(v___x_2119_);
return v___x_2120_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1(uint8_t v___x_2121_, lean_object* v_monad_2122_, lean_object* v_e_2123_, lean_object* v_thms_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_){
_start:
{
if (v___x_2121_ == 0)
{
lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; size_t v_sz_2146_; size_t v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; 
v___x_2137_ = lean_obj_once(&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__1, &l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__1_once, _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__1);
v___x_2138_ = l_Lean_MessageData_ofExpr(v_monad_2122_);
v___x_2139_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2139_, 0, v___x_2137_);
lean_ctor_set(v___x_2139_, 1, v___x_2138_);
v___x_2140_ = lean_obj_once(&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__3, &l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__3_once, _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__3);
v___x_2141_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2141_, 0, v___x_2139_);
lean_ctor_set(v___x_2141_, 1, v___x_2140_);
v___x_2142_ = l_Lean_MessageData_ofExpr(v_e_2123_);
v___x_2143_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2143_, 0, v___x_2141_);
lean_ctor_set(v___x_2143_, 1, v___x_2142_);
v___x_2144_ = lean_obj_once(&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__5, &l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__5_once, _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__5);
v___x_2145_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2145_, 0, v___x_2143_);
lean_ctor_set(v___x_2145_, 1, v___x_2144_);
v_sz_2146_ = lean_array_size(v_thms_2124_);
v___x_2147_ = ((size_t)0ULL);
v___x_2148_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1(v_sz_2146_, v___x_2147_, v_thms_2124_);
v___x_2149_ = lean_array_to_list(v___x_2148_);
v___x_2150_ = lean_box(0);
v___x_2151_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2(v___x_2149_, v___x_2150_);
v___x_2152_ = l_Lean_MessageData_ofList(v___x_2151_);
v___x_2153_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2153_, 0, v___x_2145_);
lean_ctor_set(v___x_2153_, 1, v___x_2152_);
v___x_2154_ = lean_obj_once(&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__7, &l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__7_once, _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__7);
v___x_2155_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2155_, 0, v___x_2153_);
lean_ctor_set(v___x_2155_, 1, v___x_2154_);
v___x_2156_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0___redArg(v___x_2155_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_);
return v___x_2156_;
}
else
{
lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; 
lean_dec_ref(v_thms_2124_);
lean_dec_ref(v_monad_2122_);
v___x_2157_ = lean_obj_once(&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__9, &l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__9_once, _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__9);
v___x_2158_ = l_Lean_MessageData_ofExpr(v_e_2123_);
v___x_2159_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2159_, 0, v___x_2157_);
lean_ctor_set(v___x_2159_, 1, v___x_2158_);
v___x_2160_ = lean_obj_once(&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__7, &l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__7_once, _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___closed__7);
v___x_2161_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2161_, 0, v___x_2159_);
lean_ctor_set(v___x_2161_, 1, v___x_2160_);
v___x_2162_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0___redArg(v___x_2161_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_);
return v___x_2162_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___boxed(lean_object* v___x_2163_, lean_object* v_monad_2164_, lean_object* v_e_2165_, lean_object* v_thms_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_){
_start:
{
uint8_t v___x_78618__boxed_2179_; lean_object* v_res_2180_; 
v___x_78618__boxed_2179_ = lean_unbox(v___x_2163_);
v_res_2180_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1(v___x_78618__boxed_2179_, v_monad_2164_, v_e_2165_, v_thms_2166_, v___y_2167_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_);
lean_dec(v___y_2177_);
lean_dec_ref(v___y_2176_);
lean_dec(v___y_2175_);
lean_dec_ref(v___y_2174_);
lean_dec(v___y_2173_);
lean_dec_ref(v___y_2172_);
lean_dec(v___y_2171_);
lean_dec_ref(v___y_2170_);
lean_dec(v___y_2169_);
lean_dec(v___y_2168_);
lean_dec_ref(v___y_2167_);
return v_res_2180_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__0(lean_object* v___x_2181_, lean_object* v___x_2182_, lean_object* v_target_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_){
_start:
{
lean_object* v___x_2196_; 
v___x_2196_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_emitVC(v___x_2181_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_, v___y_2194_);
if (lean_obj_tag(v___x_2196_) == 0)
{
lean_object* v___x_2198_; uint8_t v_isShared_2199_; uint8_t v_isSharedCheck_2204_; 
v_isSharedCheck_2204_ = !lean_is_exclusive(v___x_2196_);
if (v_isSharedCheck_2204_ == 0)
{
lean_object* v_unused_2205_; 
v_unused_2205_ = lean_ctor_get(v___x_2196_, 0);
lean_dec(v_unused_2205_);
v___x_2198_ = v___x_2196_;
v_isShared_2199_ = v_isSharedCheck_2204_;
goto v_resetjp_2197_;
}
else
{
lean_dec(v___x_2196_);
v___x_2198_ = lean_box(0);
v_isShared_2199_ = v_isSharedCheck_2204_;
goto v_resetjp_2197_;
}
v_resetjp_2197_:
{
lean_object* v___x_2200_; lean_object* v___x_2202_; 
v___x_2200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2200_, 0, v___x_2182_);
if (v_isShared_2199_ == 0)
{
lean_ctor_set(v___x_2198_, 0, v___x_2200_);
v___x_2202_ = v___x_2198_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v___x_2200_);
v___x_2202_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2201_;
}
v_reusejp_2201_:
{
return v___x_2202_;
}
}
}
else
{
lean_object* v_a_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2213_; 
lean_dec_ref(v___x_2182_);
v_a_2206_ = lean_ctor_get(v___x_2196_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2196_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2208_ = v___x_2196_;
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_a_2206_);
lean_dec(v___x_2196_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v___x_2211_; 
if (v_isShared_2209_ == 0)
{
v___x_2211_ = v___x_2208_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v_a_2206_);
v___x_2211_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
return v___x_2211_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__0___boxed(lean_object* v___x_2214_, lean_object* v___x_2215_, lean_object* v_target_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_){
_start:
{
lean_object* v_res_2229_; 
v_res_2229_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__0(v___x_2214_, v___x_2215_, v_target_2216_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_, v___y_2227_);
lean_dec(v___y_2227_);
lean_dec_ref(v___y_2226_);
lean_dec(v___y_2225_);
lean_dec_ref(v___y_2224_);
lean_dec(v___y_2223_);
lean_dec_ref(v___y_2222_);
lean_dec(v___y_2221_);
lean_dec_ref(v___y_2220_);
lean_dec(v___y_2219_);
lean_dec(v___y_2218_);
lean_dec_ref(v___y_2217_);
lean_dec_ref(v_target_2216_);
return v_res_2229_;
}
}
static lean_object* _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_2231_; lean_object* v___x_2232_; 
v___x_2231_ = ((lean_object*)(l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___closed__0));
v___x_2232_ = l_Lean_stringToMessageData(v___x_2231_);
return v___x_2232_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg(lean_object* v_a_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_){
_start:
{
lean_object* v___y_2247_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; uint8_t v___x_2270_; 
v___x_2267_ = lean_array_get_size(v_a_2233_);
v___x_2268_ = lean_unsigned_to_nat(1u);
v___x_2269_ = lean_nat_sub(v___x_2267_, v___x_2268_);
v___x_2270_ = lean_nat_dec_lt(v___x_2269_, v___x_2267_);
if (v___x_2270_ == 0)
{
lean_object* v___x_2271_; 
lean_dec(v___x_2269_);
v___x_2271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2271_, 0, v_a_2233_);
return v___x_2271_;
}
else
{
lean_object* v___x_2272_; 
v___x_2272_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_outOfFuel___redArg(v___y_2235_);
if (lean_obj_tag(v___x_2272_) == 0)
{
lean_object* v_a_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; uint8_t v___x_2276_; 
v_a_2273_ = lean_ctor_get(v___x_2272_, 0);
lean_inc(v_a_2273_);
lean_dec_ref_known(v___x_2272_, 1);
v___x_2274_ = lean_array_fget(v_a_2233_, v___x_2269_);
lean_dec(v___x_2269_);
v___x_2275_ = lean_array_pop(v_a_2233_);
v___x_2276_ = lean_unbox(v_a_2273_);
lean_dec(v_a_2273_);
if (v___x_2276_ == 0)
{
lean_object* v_mvarId_2277_; lean_object* v___x_2278_; 
v_mvarId_2277_ = lean_ctor_get(v___x_2274_, 1);
lean_inc(v_mvarId_2277_);
v___x_2278_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_solve(v_mvarId_2277_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
if (lean_obj_tag(v___x_2278_) == 0)
{
lean_object* v_a_2279_; 
v_a_2279_ = lean_ctor_get(v___x_2278_, 0);
lean_inc(v_a_2279_);
lean_dec_ref_known(v___x_2278_, 1);
switch(lean_obj_tag(v_a_2279_))
{
case 2:
{
lean_object* v___x_2281_; uint8_t v_isShared_2282_; uint8_t v_isSharedCheck_2300_; 
lean_inc(v_mvarId_2277_);
v_isSharedCheck_2300_ = !lean_is_exclusive(v___x_2274_);
if (v_isSharedCheck_2300_ == 0)
{
lean_object* v_unused_2301_; lean_object* v_unused_2302_; 
v_unused_2301_ = lean_ctor_get(v___x_2274_, 1);
lean_dec(v_unused_2301_);
v_unused_2302_ = lean_ctor_get(v___x_2274_, 0);
lean_dec(v_unused_2302_);
v___x_2281_ = v___x_2274_;
v_isShared_2282_ = v_isSharedCheck_2300_;
goto v_resetjp_2280_;
}
else
{
lean_dec(v___x_2274_);
v___x_2281_ = lean_box(0);
v_isShared_2282_ = v_isSharedCheck_2300_;
goto v_resetjp_2280_;
}
v_resetjp_2280_:
{
lean_object* v_e_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2287_; 
v_e_2283_ = lean_ctor_get(v_a_2279_, 0);
lean_inc_ref(v_e_2283_);
lean_dec_ref_known(v_a_2279_, 1);
v___x_2284_ = lean_obj_once(&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___closed__1, &l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___closed__1_once, _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___closed__1);
v___x_2285_ = l_Lean_MessageData_ofExpr(v_e_2283_);
if (v_isShared_2282_ == 0)
{
lean_ctor_set_tag(v___x_2281_, 7);
lean_ctor_set(v___x_2281_, 1, v___x_2285_);
lean_ctor_set(v___x_2281_, 0, v___x_2284_);
v___x_2287_ = v___x_2281_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v___x_2284_);
lean_ctor_set(v_reuseFailAlloc_2299_, 1, v___x_2285_);
v___x_2287_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
lean_object* v___x_2288_; lean_object* v___x_2289_; 
v___x_2288_ = lean_alloc_closure((void*)(l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0___boxed), 14, 2);
lean_closure_set(v___x_2288_, 0, lean_box(0));
lean_closure_set(v___x_2288_, 1, v___x_2287_);
v___x_2289_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__1___redArg(v_mvarId_2277_, v___x_2288_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
if (lean_obj_tag(v___x_2289_) == 0)
{
lean_dec_ref_known(v___x_2289_, 1);
v_a_2233_ = v___x_2275_;
goto _start;
}
else
{
lean_object* v_a_2291_; lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2298_; 
lean_dec_ref(v___x_2275_);
v_a_2291_ = lean_ctor_get(v___x_2289_, 0);
v_isSharedCheck_2298_ = !lean_is_exclusive(v___x_2289_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2293_ = v___x_2289_;
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
else
{
lean_inc(v_a_2291_);
lean_dec(v___x_2289_);
v___x_2293_ = lean_box(0);
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
v_resetjp_2292_:
{
lean_object* v___x_2296_; 
if (v_isShared_2294_ == 0)
{
v___x_2296_ = v___x_2293_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v_a_2291_);
v___x_2296_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
return v___x_2296_;
}
}
}
}
}
}
case 3:
{
uint8_t v_errorOnMissingSpec_2303_; 
v_errorOnMissingSpec_2303_ = lean_ctor_get_uint8(v___y_2234_, sizeof(void*)*20 + 2);
if (v_errorOnMissingSpec_2303_ == 0)
{
lean_object* v___x_2304_; 
lean_dec_ref_known(v_a_2279_, 3);
v___x_2304_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_emitVC(v___x_2274_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
if (lean_obj_tag(v___x_2304_) == 0)
{
lean_dec_ref_known(v___x_2304_, 1);
v_a_2233_ = v___x_2275_;
goto _start;
}
else
{
lean_object* v_a_2306_; lean_object* v___x_2308_; uint8_t v_isShared_2309_; uint8_t v_isSharedCheck_2313_; 
lean_dec_ref(v___x_2275_);
v_a_2306_ = lean_ctor_get(v___x_2304_, 0);
v_isSharedCheck_2313_ = !lean_is_exclusive(v___x_2304_);
if (v_isSharedCheck_2313_ == 0)
{
v___x_2308_ = v___x_2304_;
v_isShared_2309_ = v_isSharedCheck_2313_;
goto v_resetjp_2307_;
}
else
{
lean_inc(v_a_2306_);
lean_dec(v___x_2304_);
v___x_2308_ = lean_box(0);
v_isShared_2309_ = v_isSharedCheck_2313_;
goto v_resetjp_2307_;
}
v_resetjp_2307_:
{
lean_object* v___x_2311_; 
if (v_isShared_2309_ == 0)
{
v___x_2311_ = v___x_2308_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v_a_2306_);
v___x_2311_ = v_reuseFailAlloc_2312_;
goto v_reusejp_2310_;
}
v_reusejp_2310_:
{
return v___x_2311_;
}
}
}
}
else
{
lean_object* v_e_2314_; lean_object* v_monad_2315_; lean_object* v_thms_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; uint8_t v___x_2319_; lean_object* v___x_2320_; lean_object* v___y_2321_; lean_object* v___x_2322_; 
lean_inc(v_mvarId_2277_);
lean_dec(v___x_2274_);
v_e_2314_ = lean_ctor_get(v_a_2279_, 0);
lean_inc_ref(v_e_2314_);
v_monad_2315_ = lean_ctor_get(v_a_2279_, 1);
lean_inc_ref(v_monad_2315_);
v_thms_2316_ = lean_ctor_get(v_a_2279_, 2);
lean_inc_ref(v_thms_2316_);
lean_dec_ref_known(v_a_2279_, 3);
v___x_2317_ = lean_array_get_size(v_thms_2316_);
v___x_2318_ = lean_unsigned_to_nat(0u);
v___x_2319_ = lean_nat_dec_eq(v___x_2317_, v___x_2318_);
v___x_2320_ = lean_box(v___x_2319_);
v___y_2321_ = lean_alloc_closure((void*)(l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__1___boxed), 16, 4);
lean_closure_set(v___y_2321_, 0, v___x_2320_);
lean_closure_set(v___y_2321_, 1, v_monad_2315_);
lean_closure_set(v___y_2321_, 2, v_e_2314_);
lean_closure_set(v___y_2321_, 3, v_thms_2316_);
v___x_2322_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_run_spec__1___redArg(v_mvarId_2277_, v___y_2321_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
if (lean_obj_tag(v___x_2322_) == 0)
{
lean_dec_ref_known(v___x_2322_, 1);
v_a_2233_ = v___x_2275_;
goto _start;
}
else
{
lean_object* v_a_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2331_; 
lean_dec_ref(v___x_2275_);
v_a_2324_ = lean_ctor_get(v___x_2322_, 0);
v_isSharedCheck_2331_ = !lean_is_exclusive(v___x_2322_);
if (v_isSharedCheck_2331_ == 0)
{
v___x_2326_ = v___x_2322_;
v_isShared_2327_ = v_isSharedCheck_2331_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_a_2324_);
lean_dec(v___x_2322_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2331_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v___x_2329_; 
if (v_isShared_2327_ == 0)
{
v___x_2329_ = v___x_2326_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2330_; 
v_reuseFailAlloc_2330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2330_, 0, v_a_2324_);
v___x_2329_ = v_reuseFailAlloc_2330_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
return v___x_2329_;
}
}
}
}
}
case 4:
{
lean_object* v_subgoals_2332_; lean_object* v___x_2333_; 
v_subgoals_2332_ = lean_ctor_get(v_a_2279_, 0);
lean_inc(v_subgoals_2332_);
lean_dec_ref_known(v_a_2279_, 1);
v___x_2333_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals(v_subgoals_2332_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
lean_dec(v_subgoals_2332_);
if (lean_obj_tag(v___x_2333_) == 0)
{
lean_object* v_a_2334_; lean_object* v___x_2335_; uint8_t v___x_2336_; 
v_a_2334_ = lean_ctor_get(v___x_2333_, 0);
lean_inc(v_a_2334_);
lean_dec_ref_known(v___x_2333_, 1);
v___x_2335_ = lean_array_get_size(v_a_2334_);
v___x_2336_ = lean_nat_dec_lt(v___x_2268_, v___x_2335_);
if (v___x_2336_ == 0)
{
lean_object* v___x_2337_; 
v___x_2337_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__2(v_a_2334_, v___x_2275_, v___x_2274_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
lean_dec(v___x_2274_);
v___y_2247_ = v___x_2337_;
goto v___jp_2246_;
}
else
{
lean_object* v_preTac_2338_; lean_object* v___x_2339_; 
v_preTac_2338_ = lean_ctor_get(v___y_2234_, 18);
v___x_2339_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_PreTac_processHypotheses___redArg(v_preTac_2338_, v___x_2274_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
if (lean_obj_tag(v___x_2339_) == 0)
{
lean_object* v_a_2340_; lean_object* v___x_2341_; 
v_a_2340_ = lean_ctor_get(v___x_2339_, 0);
lean_inc(v_a_2340_);
lean_dec_ref_known(v___x_2339_, 1);
v___x_2341_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__2(v_a_2334_, v___x_2275_, v_a_2340_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
lean_dec(v_a_2340_);
v___y_2247_ = v___x_2341_;
goto v___jp_2246_;
}
else
{
lean_object* v_a_2342_; lean_object* v___x_2344_; uint8_t v_isShared_2345_; uint8_t v_isSharedCheck_2349_; 
lean_dec(v_a_2334_);
lean_dec_ref(v___x_2275_);
v_a_2342_ = lean_ctor_get(v___x_2339_, 0);
v_isSharedCheck_2349_ = !lean_is_exclusive(v___x_2339_);
if (v_isSharedCheck_2349_ == 0)
{
v___x_2344_ = v___x_2339_;
v_isShared_2345_ = v_isSharedCheck_2349_;
goto v_resetjp_2343_;
}
else
{
lean_inc(v_a_2342_);
lean_dec(v___x_2339_);
v___x_2344_ = lean_box(0);
v_isShared_2345_ = v_isSharedCheck_2349_;
goto v_resetjp_2343_;
}
v_resetjp_2343_:
{
lean_object* v___x_2347_; 
if (v_isShared_2345_ == 0)
{
v___x_2347_ = v___x_2344_;
goto v_reusejp_2346_;
}
else
{
lean_object* v_reuseFailAlloc_2348_; 
v_reuseFailAlloc_2348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2348_, 0, v_a_2342_);
v___x_2347_ = v_reuseFailAlloc_2348_;
goto v_reusejp_2346_;
}
v_reusejp_2346_:
{
return v___x_2347_;
}
}
}
}
}
else
{
lean_object* v_a_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2357_; 
lean_dec_ref(v___x_2275_);
lean_dec(v___x_2274_);
v_a_2350_ = lean_ctor_get(v___x_2333_, 0);
v_isSharedCheck_2357_ = !lean_is_exclusive(v___x_2333_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2352_ = v___x_2333_;
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_a_2350_);
lean_dec(v___x_2333_);
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
default: 
{
lean_object* v_target_2358_; lean_object* v___x_2359_; 
v_target_2358_ = lean_ctor_get(v_a_2279_, 0);
lean_inc_ref(v_target_2358_);
lean_dec(v_a_2279_);
v___x_2359_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___lam__0(v___x_2274_, v___x_2275_, v_target_2358_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
lean_dec_ref(v_target_2358_);
v___y_2247_ = v___x_2359_;
goto v___jp_2246_;
}
}
}
else
{
lean_object* v_a_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2367_; 
lean_dec_ref(v___x_2275_);
lean_dec(v___x_2274_);
v_a_2360_ = lean_ctor_get(v___x_2278_, 0);
v_isSharedCheck_2367_ = !lean_is_exclusive(v___x_2278_);
if (v_isSharedCheck_2367_ == 0)
{
v___x_2362_ = v___x_2278_;
v_isShared_2363_ = v_isSharedCheck_2367_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_a_2360_);
lean_dec(v___x_2278_);
v___x_2362_ = lean_box(0);
v_isShared_2363_ = v_isSharedCheck_2367_;
goto v_resetjp_2361_;
}
v_resetjp_2361_:
{
lean_object* v___x_2365_; 
if (v_isShared_2363_ == 0)
{
v___x_2365_ = v___x_2362_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2366_; 
v_reuseFailAlloc_2366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2366_, 0, v_a_2360_);
v___x_2365_ = v_reuseFailAlloc_2366_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
return v___x_2365_;
}
}
}
}
else
{
lean_object* v___x_2368_; 
v___x_2368_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_emitVC(v___x_2274_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
if (lean_obj_tag(v___x_2368_) == 0)
{
lean_dec_ref_known(v___x_2368_, 1);
v_a_2233_ = v___x_2275_;
goto _start;
}
else
{
lean_object* v_a_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2377_; 
lean_dec_ref(v___x_2275_);
v_a_2370_ = lean_ctor_get(v___x_2368_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___x_2368_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2372_ = v___x_2368_;
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
else
{
lean_inc(v_a_2370_);
lean_dec(v___x_2368_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
v_resetjp_2371_:
{
lean_object* v___x_2375_; 
if (v_isShared_2373_ == 0)
{
v___x_2375_ = v___x_2372_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_a_2370_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
}
}
}
else
{
lean_object* v_a_2378_; lean_object* v___x_2380_; uint8_t v_isShared_2381_; uint8_t v_isSharedCheck_2385_; 
lean_dec(v___x_2269_);
lean_dec_ref(v_a_2233_);
v_a_2378_ = lean_ctor_get(v___x_2272_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v___x_2272_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2380_ = v___x_2272_;
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
else
{
lean_inc(v_a_2378_);
lean_dec(v___x_2272_);
v___x_2380_ = lean_box(0);
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
v_resetjp_2379_:
{
lean_object* v___x_2383_; 
if (v_isShared_2381_ == 0)
{
v___x_2383_ = v___x_2380_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v_a_2378_);
v___x_2383_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
return v___x_2383_;
}
}
}
}
v___jp_2246_:
{
if (lean_obj_tag(v___y_2247_) == 0)
{
lean_object* v_a_2248_; lean_object* v___x_2250_; uint8_t v_isShared_2251_; uint8_t v_isSharedCheck_2258_; 
v_a_2248_ = lean_ctor_get(v___y_2247_, 0);
v_isSharedCheck_2258_ = !lean_is_exclusive(v___y_2247_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2250_ = v___y_2247_;
v_isShared_2251_ = v_isSharedCheck_2258_;
goto v_resetjp_2249_;
}
else
{
lean_inc(v_a_2248_);
lean_dec(v___y_2247_);
v___x_2250_ = lean_box(0);
v_isShared_2251_ = v_isSharedCheck_2258_;
goto v_resetjp_2249_;
}
v_resetjp_2249_:
{
if (lean_obj_tag(v_a_2248_) == 0)
{
lean_object* v_a_2252_; lean_object* v___x_2254_; 
v_a_2252_ = lean_ctor_get(v_a_2248_, 0);
lean_inc(v_a_2252_);
lean_dec_ref_known(v_a_2248_, 1);
if (v_isShared_2251_ == 0)
{
lean_ctor_set(v___x_2250_, 0, v_a_2252_);
v___x_2254_ = v___x_2250_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v_a_2252_);
v___x_2254_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
return v___x_2254_;
}
}
else
{
lean_object* v_a_2256_; 
lean_del_object(v___x_2250_);
v_a_2256_ = lean_ctor_get(v_a_2248_, 0);
lean_inc(v_a_2256_);
lean_dec_ref_known(v_a_2248_, 1);
v_a_2233_ = v_a_2256_;
goto _start;
}
}
}
else
{
lean_object* v_a_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2266_; 
v_a_2259_ = lean_ctor_get(v___y_2247_, 0);
v_isSharedCheck_2266_ = !lean_is_exclusive(v___y_2247_);
if (v_isSharedCheck_2266_ == 0)
{
v___x_2261_ = v___y_2247_;
v_isShared_2262_ = v_isSharedCheck_2266_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_a_2259_);
lean_dec(v___y_2247_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2266_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
lean_object* v___x_2264_; 
if (v_isShared_2262_ == 0)
{
v___x_2264_ = v___x_2261_;
goto v_reusejp_2263_;
}
else
{
lean_object* v_reuseFailAlloc_2265_; 
v_reuseFailAlloc_2265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2265_, 0, v_a_2259_);
v___x_2264_ = v_reuseFailAlloc_2265_;
goto v_reusejp_2263_;
}
v_reusejp_2263_:
{
return v___x_2264_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg___boxed(lean_object* v_a_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_){
_start:
{
lean_object* v_res_2399_; 
v_res_2399_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg(v_a_2386_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_);
lean_dec(v___y_2397_);
lean_dec_ref(v___y_2396_);
lean_dec(v___y_2395_);
lean_dec_ref(v___y_2394_);
lean_dec(v___y_2393_);
lean_dec_ref(v___y_2392_);
lean_dec(v___y_2391_);
lean_dec_ref(v___y_2390_);
lean_dec(v___y_2389_);
lean_dec(v___y_2388_);
lean_dec_ref(v___y_2387_);
return v_res_2399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_work(lean_object* v_goal_2400_, lean_object* v_a_2401_, lean_object* v_a_2402_, lean_object* v_a_2403_, lean_object* v_a_2404_, lean_object* v_a_2405_, lean_object* v_a_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_, lean_object* v_a_2410_, lean_object* v_a_2411_){
_start:
{
lean_object* v_toGoalState_2413_; lean_object* v_mvarId_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2452_; 
v_toGoalState_2413_ = lean_ctor_get(v_goal_2400_, 0);
v_mvarId_2414_ = lean_ctor_get(v_goal_2400_, 1);
v_isSharedCheck_2452_ = !lean_is_exclusive(v_goal_2400_);
if (v_isSharedCheck_2452_ == 0)
{
v___x_2416_ = v_goal_2400_;
v_isShared_2417_ = v_isSharedCheck_2452_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_mvarId_2414_);
lean_inc(v_toGoalState_2413_);
lean_dec(v_goal_2400_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2452_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
lean_object* v___x_2418_; 
v___x_2418_ = l_Lean_Meta_Sym_preprocessMVar(v_mvarId_2414_, v_a_2406_, v_a_2407_, v_a_2408_, v_a_2409_, v_a_2410_, v_a_2411_);
if (lean_obj_tag(v___x_2418_) == 0)
{
lean_object* v_a_2419_; lean_object* v___x_2421_; 
v_a_2419_ = lean_ctor_get(v___x_2418_, 0);
lean_inc(v_a_2419_);
lean_dec_ref_known(v___x_2418_, 1);
if (v_isShared_2417_ == 0)
{
lean_ctor_set(v___x_2416_, 1, v_a_2419_);
v___x_2421_ = v___x_2416_;
goto v_reusejp_2420_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v_toGoalState_2413_);
lean_ctor_set(v_reuseFailAlloc_2443_, 1, v_a_2419_);
v___x_2421_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2420_;
}
v_reusejp_2420_:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; 
v___x_2422_ = lean_unsigned_to_nat(1u);
v___x_2423_ = lean_mk_empty_array_with_capacity(v___x_2422_);
v___x_2424_ = lean_array_push(v___x_2423_, v___x_2421_);
v___x_2425_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg(v___x_2424_, v_a_2401_, v_a_2402_, v_a_2403_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_, v_a_2408_, v_a_2409_, v_a_2410_, v_a_2411_);
if (lean_obj_tag(v___x_2425_) == 0)
{
lean_object* v___x_2427_; uint8_t v_isShared_2428_; uint8_t v_isSharedCheck_2433_; 
v_isSharedCheck_2433_ = !lean_is_exclusive(v___x_2425_);
if (v_isSharedCheck_2433_ == 0)
{
lean_object* v_unused_2434_; 
v_unused_2434_ = lean_ctor_get(v___x_2425_, 0);
lean_dec(v_unused_2434_);
v___x_2427_ = v___x_2425_;
v_isShared_2428_ = v_isSharedCheck_2433_;
goto v_resetjp_2426_;
}
else
{
lean_dec(v___x_2425_);
v___x_2427_ = lean_box(0);
v_isShared_2428_ = v_isSharedCheck_2433_;
goto v_resetjp_2426_;
}
v_resetjp_2426_:
{
lean_object* v___x_2429_; lean_object* v___x_2431_; 
v___x_2429_ = lean_box(0);
if (v_isShared_2428_ == 0)
{
lean_ctor_set(v___x_2427_, 0, v___x_2429_);
v___x_2431_ = v___x_2427_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v___x_2429_);
v___x_2431_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
return v___x_2431_;
}
}
}
else
{
lean_object* v_a_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2442_; 
v_a_2435_ = lean_ctor_get(v___x_2425_, 0);
v_isSharedCheck_2442_ = !lean_is_exclusive(v___x_2425_);
if (v_isSharedCheck_2442_ == 0)
{
v___x_2437_ = v___x_2425_;
v_isShared_2438_ = v_isSharedCheck_2442_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_a_2435_);
lean_dec(v___x_2425_);
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
}
else
{
lean_object* v_a_2444_; lean_object* v___x_2446_; uint8_t v_isShared_2447_; uint8_t v_isSharedCheck_2451_; 
lean_del_object(v___x_2416_);
lean_dec_ref(v_toGoalState_2413_);
v_a_2444_ = lean_ctor_get(v___x_2418_, 0);
v_isSharedCheck_2451_ = !lean_is_exclusive(v___x_2418_);
if (v_isSharedCheck_2451_ == 0)
{
v___x_2446_ = v___x_2418_;
v_isShared_2447_ = v_isSharedCheck_2451_;
goto v_resetjp_2445_;
}
else
{
lean_inc(v_a_2444_);
lean_dec(v___x_2418_);
v___x_2446_ = lean_box(0);
v_isShared_2447_ = v_isSharedCheck_2451_;
goto v_resetjp_2445_;
}
v_resetjp_2445_:
{
lean_object* v___x_2449_; 
if (v_isShared_2447_ == 0)
{
v___x_2449_ = v___x_2446_;
goto v_reusejp_2448_;
}
else
{
lean_object* v_reuseFailAlloc_2450_; 
v_reuseFailAlloc_2450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2450_, 0, v_a_2444_);
v___x_2449_ = v_reuseFailAlloc_2450_;
goto v_reusejp_2448_;
}
v_reusejp_2448_:
{
return v___x_2449_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_work___boxed(lean_object* v_goal_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_, lean_object* v_a_2457_, lean_object* v_a_2458_, lean_object* v_a_2459_, lean_object* v_a_2460_, lean_object* v_a_2461_, lean_object* v_a_2462_, lean_object* v_a_2463_, lean_object* v_a_2464_, lean_object* v_a_2465_){
_start:
{
lean_object* v_res_2466_; 
v_res_2466_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_work(v_goal_2453_, v_a_2454_, v_a_2455_, v_a_2456_, v_a_2457_, v_a_2458_, v_a_2459_, v_a_2460_, v_a_2461_, v_a_2462_, v_a_2463_, v_a_2464_);
lean_dec(v_a_2464_);
lean_dec_ref(v_a_2463_);
lean_dec(v_a_2462_);
lean_dec_ref(v_a_2461_);
lean_dec(v_a_2460_);
lean_dec_ref(v_a_2459_);
lean_dec(v_a_2458_);
lean_dec_ref(v_a_2457_);
lean_dec(v_a_2456_);
lean_dec(v_a_2455_);
lean_dec_ref(v_a_2454_);
return v_res_2466_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4(lean_object* v_inst_2467_, lean_object* v_a_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_){
_start:
{
lean_object* v___x_2481_; 
v___x_2481_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___redArg(v_a_2468_, v___y_2469_, v___y_2470_, v___y_2471_, v___y_2472_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_);
return v___x_2481_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___boxed(lean_object* v_inst_2482_, lean_object* v_a_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_){
_start:
{
lean_object* v_res_2496_; 
v_res_2496_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4(v_inst_2482_, v_a_2483_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_, v___y_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_);
lean_dec(v___y_2494_);
lean_dec_ref(v___y_2493_);
lean_dec(v___y_2492_);
lean_dec_ref(v___y_2491_);
lean_dec(v___y_2490_);
lean_dec_ref(v___y_2489_);
lean_dec(v___y_2488_);
lean_dec_ref(v___y_2487_);
lean_dec(v___y_2486_);
lean_dec(v___y_2485_);
lean_dec_ref(v___y_2484_);
return v_res_2496_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___redArg(lean_object* v_as_2498_, lean_object* v_i_2499_, lean_object* v_j_2500_, lean_object* v_bs_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_){
_start:
{
lean_object* v_zero_2507_; uint8_t v_isZero_2508_; 
v_zero_2507_ = lean_unsigned_to_nat(0u);
v_isZero_2508_ = lean_nat_dec_eq(v_i_2499_, v_zero_2507_);
if (v_isZero_2508_ == 1)
{
lean_object* v___x_2509_; 
lean_dec(v_j_2500_);
lean_dec(v_i_2499_);
v___x_2509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2509_, 0, v_bs_2501_);
return v___x_2509_;
}
else
{
lean_object* v___x_2510_; lean_object* v_mvarId_2511_; lean_object* v___x_2512_; 
v___x_2510_ = lean_array_fget_borrowed(v_as_2498_, v_j_2500_);
v_mvarId_2511_ = lean_ctor_get(v___x_2510_, 1);
lean_inc(v_mvarId_2511_);
v___x_2512_ = l_Lean_MVarId_getTag(v_mvarId_2511_, v___y_2502_, v___y_2503_, v___y_2504_, v___y_2505_);
if (lean_obj_tag(v___x_2512_) == 0)
{
lean_object* v_a_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; 
v_a_2513_ = lean_ctor_get(v___x_2512_, 0);
lean_inc(v_a_2513_);
lean_dec_ref_known(v___x_2512_, 1);
v___x_2514_ = ((lean_object*)(l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___redArg___closed__0));
v___x_2515_ = lean_unsigned_to_nat(1u);
v___x_2516_ = lean_nat_add(v_j_2500_, v___x_2515_);
lean_dec(v_j_2500_);
lean_inc(v___x_2516_);
v___x_2517_ = l_Nat_reprFast(v___x_2516_);
v___x_2518_ = lean_string_append(v___x_2514_, v___x_2517_);
lean_dec_ref(v___x_2517_);
v___x_2519_ = lean_box(0);
v___x_2520_ = l_Lean_Name_str___override(v___x_2519_, v___x_2518_);
v___x_2521_ = lean_erase_macro_scopes(v_a_2513_);
v___x_2522_ = l_Lean_Name_append(v___x_2520_, v___x_2521_);
lean_inc(v_mvarId_2511_);
v___x_2523_ = l_Lean_MVarId_setTag___redArg(v_mvarId_2511_, v___x_2522_, v___y_2503_);
if (lean_obj_tag(v___x_2523_) == 0)
{
lean_object* v_a_2524_; lean_object* v_n_2525_; lean_object* v___x_2526_; 
v_a_2524_ = lean_ctor_get(v___x_2523_, 0);
lean_inc(v_a_2524_);
lean_dec_ref_known(v___x_2523_, 1);
v_n_2525_ = lean_nat_sub(v_i_2499_, v___x_2515_);
lean_dec(v_i_2499_);
v___x_2526_ = lean_array_push(v_bs_2501_, v_a_2524_);
v_i_2499_ = v_n_2525_;
v_j_2500_ = v___x_2516_;
v_bs_2501_ = v___x_2526_;
goto _start;
}
else
{
lean_object* v_a_2528_; lean_object* v___x_2530_; uint8_t v_isShared_2531_; uint8_t v_isSharedCheck_2535_; 
lean_dec(v___x_2516_);
lean_dec_ref(v_bs_2501_);
lean_dec(v_i_2499_);
v_a_2528_ = lean_ctor_get(v___x_2523_, 0);
v_isSharedCheck_2535_ = !lean_is_exclusive(v___x_2523_);
if (v_isSharedCheck_2535_ == 0)
{
v___x_2530_ = v___x_2523_;
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
else
{
lean_inc(v_a_2528_);
lean_dec(v___x_2523_);
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
else
{
lean_object* v_a_2536_; lean_object* v___x_2538_; uint8_t v_isShared_2539_; uint8_t v_isSharedCheck_2543_; 
lean_dec_ref(v_bs_2501_);
lean_dec(v_j_2500_);
lean_dec(v_i_2499_);
v_a_2536_ = lean_ctor_get(v___x_2512_, 0);
v_isSharedCheck_2543_ = !lean_is_exclusive(v___x_2512_);
if (v_isSharedCheck_2543_ == 0)
{
v___x_2538_ = v___x_2512_;
v_isShared_2539_ = v_isSharedCheck_2543_;
goto v_resetjp_2537_;
}
else
{
lean_inc(v_a_2536_);
lean_dec(v___x_2512_);
v___x_2538_ = lean_box(0);
v_isShared_2539_ = v_isSharedCheck_2543_;
goto v_resetjp_2537_;
}
v_resetjp_2537_:
{
lean_object* v___x_2541_; 
if (v_isShared_2539_ == 0)
{
v___x_2541_ = v___x_2538_;
goto v_reusejp_2540_;
}
else
{
lean_object* v_reuseFailAlloc_2542_; 
v_reuseFailAlloc_2542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2542_, 0, v_a_2536_);
v___x_2541_ = v_reuseFailAlloc_2542_;
goto v_reusejp_2540_;
}
v_reusejp_2540_:
{
return v___x_2541_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___redArg___boxed(lean_object* v_as_2544_, lean_object* v_i_2545_, lean_object* v_j_2546_, lean_object* v_bs_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_){
_start:
{
lean_object* v_res_2553_; 
v_res_2553_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___redArg(v_as_2544_, v_i_2545_, v_j_2546_, v_bs_2547_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_);
lean_dec(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec(v___y_2549_);
lean_dec_ref(v___y_2548_);
lean_dec_ref(v_as_2544_);
return v_res_2553_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___redArg(lean_object* v_as_2555_, lean_object* v_i_2556_, lean_object* v_j_2557_, lean_object* v_bs_2558_, lean_object* v___y_2559_){
_start:
{
lean_object* v_zero_2561_; uint8_t v_isZero_2562_; 
v_zero_2561_ = lean_unsigned_to_nat(0u);
v_isZero_2562_ = lean_nat_dec_eq(v_i_2556_, v_zero_2561_);
if (v_isZero_2562_ == 1)
{
lean_object* v___x_2563_; 
lean_dec(v_j_2557_);
lean_dec(v_i_2556_);
v___x_2563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2563_, 0, v_bs_2558_);
return v___x_2563_;
}
else
{
lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
v___x_2564_ = lean_array_fget_borrowed(v_as_2555_, v_j_2557_);
v___x_2565_ = ((lean_object*)(l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___redArg___closed__0));
v___x_2566_ = lean_unsigned_to_nat(1u);
v___x_2567_ = lean_nat_add(v_j_2557_, v___x_2566_);
lean_dec(v_j_2557_);
lean_inc(v___x_2567_);
v___x_2568_ = l_Nat_reprFast(v___x_2567_);
v___x_2569_ = lean_string_append(v___x_2565_, v___x_2568_);
lean_dec_ref(v___x_2568_);
v___x_2570_ = lean_box(0);
v___x_2571_ = l_Lean_Name_str___override(v___x_2570_, v___x_2569_);
lean_inc(v___x_2564_);
v___x_2572_ = l_Lean_MVarId_setTag___redArg(v___x_2564_, v___x_2571_, v___y_2559_);
if (lean_obj_tag(v___x_2572_) == 0)
{
lean_object* v_a_2573_; lean_object* v_n_2574_; lean_object* v___x_2575_; 
v_a_2573_ = lean_ctor_get(v___x_2572_, 0);
lean_inc(v_a_2573_);
lean_dec_ref_known(v___x_2572_, 1);
v_n_2574_ = lean_nat_sub(v_i_2556_, v___x_2566_);
lean_dec(v_i_2556_);
v___x_2575_ = lean_array_push(v_bs_2558_, v_a_2573_);
v_i_2556_ = v_n_2574_;
v_j_2557_ = v___x_2567_;
v_bs_2558_ = v___x_2575_;
goto _start;
}
else
{
lean_object* v_a_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_2584_; 
lean_dec(v___x_2567_);
lean_dec_ref(v_bs_2558_);
lean_dec(v_i_2556_);
v_a_2577_ = lean_ctor_get(v___x_2572_, 0);
v_isSharedCheck_2584_ = !lean_is_exclusive(v___x_2572_);
if (v_isSharedCheck_2584_ == 0)
{
v___x_2579_ = v___x_2572_;
v_isShared_2580_ = v_isSharedCheck_2584_;
goto v_resetjp_2578_;
}
else
{
lean_inc(v_a_2577_);
lean_dec(v___x_2572_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_2584_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
lean_object* v___x_2582_; 
if (v_isShared_2580_ == 0)
{
v___x_2582_ = v___x_2579_;
goto v_reusejp_2581_;
}
else
{
lean_object* v_reuseFailAlloc_2583_; 
v_reuseFailAlloc_2583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2583_, 0, v_a_2577_);
v___x_2582_ = v_reuseFailAlloc_2583_;
goto v_reusejp_2581_;
}
v_reusejp_2581_:
{
return v___x_2582_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___redArg___boxed(lean_object* v_as_2585_, lean_object* v_i_2586_, lean_object* v_j_2587_, lean_object* v_bs_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_){
_start:
{
lean_object* v_res_2591_; 
v_res_2591_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___redArg(v_as_2585_, v_i_2586_, v_j_2587_, v_bs_2588_, v___y_2589_);
lean_dec(v___y_2589_);
lean_dec_ref(v_as_2585_);
return v_res_2591_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0___redArg(lean_object* v_mvarId_2592_, lean_object* v___y_2593_){
_start:
{
lean_object* v___x_2595_; lean_object* v_mctx_2596_; lean_object* v_eAssignment_2597_; uint8_t v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2595_ = lean_st_ref_get(v___y_2593_);
v_mctx_2596_ = lean_ctor_get(v___x_2595_, 0);
lean_inc_ref(v_mctx_2596_);
lean_dec(v___x_2595_);
v_eAssignment_2597_ = lean_ctor_get(v_mctx_2596_, 8);
lean_inc_ref(v_eAssignment_2597_);
lean_dec_ref(v_mctx_2596_);
v___x_2598_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2___redArg(v_eAssignment_2597_, v_mvarId_2592_);
lean_dec_ref(v_eAssignment_2597_);
v___x_2599_ = lean_box(v___x_2598_);
v___x_2600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2600_, 0, v___x_2599_);
return v___x_2600_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0___redArg___boxed(lean_object* v_mvarId_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_){
_start:
{
lean_object* v_res_2604_; 
v_res_2604_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0___redArg(v_mvarId_2601_, v___y_2602_);
lean_dec(v___y_2602_);
lean_dec(v_mvarId_2601_);
return v_res_2604_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__3(lean_object* v_as_2605_, size_t v_i_2606_, size_t v_stop_2607_, lean_object* v_b_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_){
_start:
{
lean_object* v_a_2620_; uint8_t v___x_2624_; 
v___x_2624_ = lean_usize_dec_eq(v_i_2606_, v_stop_2607_);
if (v___x_2624_ == 0)
{
lean_object* v___x_2625_; lean_object* v_mvarId_2628_; lean_object* v___x_2629_; 
v___x_2625_ = lean_array_uget_borrowed(v_as_2605_, v_i_2606_);
v_mvarId_2628_ = lean_ctor_get(v___x_2625_, 1);
v___x_2629_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0___redArg(v_mvarId_2628_, v___y_2615_);
if (lean_obj_tag(v___x_2629_) == 0)
{
lean_object* v_a_2630_; uint8_t v___x_2631_; 
v_a_2630_ = lean_ctor_get(v___x_2629_, 0);
lean_inc(v_a_2630_);
lean_dec_ref_known(v___x_2629_, 1);
v___x_2631_ = lean_unbox(v_a_2630_);
lean_dec(v_a_2630_);
if (v___x_2631_ == 0)
{
goto v___jp_2626_;
}
else
{
v_a_2620_ = v_b_2608_;
goto v___jp_2619_;
}
}
else
{
if (lean_obj_tag(v___x_2629_) == 0)
{
lean_object* v_a_2632_; uint8_t v___x_2633_; 
v_a_2632_ = lean_ctor_get(v___x_2629_, 0);
lean_inc(v_a_2632_);
lean_dec_ref_known(v___x_2629_, 1);
v___x_2633_ = lean_unbox(v_a_2632_);
lean_dec(v_a_2632_);
if (v___x_2633_ == 0)
{
v_a_2620_ = v_b_2608_;
goto v___jp_2619_;
}
else
{
goto v___jp_2626_;
}
}
else
{
lean_object* v_a_2634_; lean_object* v___x_2636_; uint8_t v_isShared_2637_; uint8_t v_isSharedCheck_2641_; 
lean_dec_ref(v_b_2608_);
v_a_2634_ = lean_ctor_get(v___x_2629_, 0);
v_isSharedCheck_2641_ = !lean_is_exclusive(v___x_2629_);
if (v_isSharedCheck_2641_ == 0)
{
v___x_2636_ = v___x_2629_;
v_isShared_2637_ = v_isSharedCheck_2641_;
goto v_resetjp_2635_;
}
else
{
lean_inc(v_a_2634_);
lean_dec(v___x_2629_);
v___x_2636_ = lean_box(0);
v_isShared_2637_ = v_isSharedCheck_2641_;
goto v_resetjp_2635_;
}
v_resetjp_2635_:
{
lean_object* v___x_2639_; 
if (v_isShared_2637_ == 0)
{
v___x_2639_ = v___x_2636_;
goto v_reusejp_2638_;
}
else
{
lean_object* v_reuseFailAlloc_2640_; 
v_reuseFailAlloc_2640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2640_, 0, v_a_2634_);
v___x_2639_ = v_reuseFailAlloc_2640_;
goto v_reusejp_2638_;
}
v_reusejp_2638_:
{
return v___x_2639_;
}
}
}
}
v___jp_2626_:
{
lean_object* v___x_2627_; 
lean_inc(v___x_2625_);
v___x_2627_ = lean_array_push(v_b_2608_, v___x_2625_);
v_a_2620_ = v___x_2627_;
goto v___jp_2619_;
}
}
else
{
lean_object* v___x_2642_; 
v___x_2642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2642_, 0, v_b_2608_);
return v___x_2642_;
}
v___jp_2619_:
{
size_t v___x_2621_; size_t v___x_2622_; 
v___x_2621_ = ((size_t)1ULL);
v___x_2622_ = lean_usize_add(v_i_2606_, v___x_2621_);
v_i_2606_ = v___x_2622_;
v_b_2608_ = v_a_2620_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__3___boxed(lean_object* v_as_2643_, lean_object* v_i_2644_, lean_object* v_stop_2645_, lean_object* v_b_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_){
_start:
{
size_t v_i_boxed_2657_; size_t v_stop_boxed_2658_; lean_object* v_res_2659_; 
v_i_boxed_2657_ = lean_unbox_usize(v_i_2644_);
lean_dec(v_i_2644_);
v_stop_boxed_2658_ = lean_unbox_usize(v_stop_2645_);
lean_dec(v_stop_2645_);
v_res_2659_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__3(v_as_2643_, v_i_boxed_2657_, v_stop_boxed_2658_, v_b_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_);
lean_dec(v___y_2655_);
lean_dec_ref(v___y_2654_);
lean_dec(v___y_2653_);
lean_dec_ref(v___y_2652_);
lean_dec(v___y_2651_);
lean_dec_ref(v___y_2650_);
lean_dec(v___y_2649_);
lean_dec_ref(v___y_2648_);
lean_dec(v___y_2647_);
lean_dec_ref(v_as_2643_);
return v_res_2659_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__0(void){
_start:
{
lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; 
v___x_2660_ = lean_box(0);
v___x_2661_ = lean_unsigned_to_nat(16u);
v___x_2662_ = lean_mk_array(v___x_2661_, v___x_2660_);
return v___x_2662_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__1(void){
_start:
{
lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; 
v___x_2663_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__0, &l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__0_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__0);
v___x_2664_ = lean_unsigned_to_nat(0u);
v___x_2665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2665_, 0, v___x_2664_);
lean_ctor_set(v___x_2665_, 1, v___x_2663_);
return v___x_2665_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__2(void){
_start:
{
lean_object* v___x_2666_; 
v___x_2666_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2666_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__3(void){
_start:
{
lean_object* v___x_2667_; lean_object* v___x_2668_; 
v___x_2667_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__2, &l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__2_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__2);
v___x_2668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2668_, 0, v___x_2667_);
return v___x_2668_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__4(void){
_start:
{
lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; 
v___x_2669_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__3, &l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__3_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__3);
v___x_2670_ = lean_unsigned_to_nat(0u);
v___x_2671_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2671_, 0, v___x_2670_);
lean_ctor_set(v___x_2671_, 1, v___x_2669_);
lean_ctor_set(v___x_2671_, 2, v___x_2669_);
lean_ctor_set(v___x_2671_, 3, v___x_2669_);
return v___x_2671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_run(lean_object* v_goal_2672_, lean_object* v_ctx_2673_, lean_object* v_stepLimit_x3f_2674_, lean_object* v_a_2675_, lean_object* v_a_2676_, lean_object* v_a_2677_, lean_object* v_a_2678_, lean_object* v_a_2679_, lean_object* v_a_2680_, lean_object* v_a_2681_, lean_object* v_a_2682_, lean_object* v_a_2683_){
_start:
{
lean_object* v___y_2686_; lean_object* v___y_2687_; uint8_t v___y_2688_; lean_object* v_a_2689_; lean_object* v___y_2693_; lean_object* v___y_2694_; uint8_t v___y_2695_; lean_object* v___y_2696_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___y_2712_; 
v___x_2706_ = lean_unsigned_to_nat(0u);
v___x_2707_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__1);
v___x_2708_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals___closed__0));
v___x_2709_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__4, &l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__4_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__4);
v___x_2710_ = lean_box(1);
if (lean_obj_tag(v_stepLimit_x3f_2674_) == 0)
{
lean_object* v___x_2760_; 
v___x_2760_ = lean_box(1);
v___y_2712_ = v___x_2760_;
goto v___jp_2711_;
}
else
{
lean_object* v_val_2761_; lean_object* v___x_2763_; uint8_t v_isShared_2764_; uint8_t v_isSharedCheck_2768_; 
v_val_2761_ = lean_ctor_get(v_stepLimit_x3f_2674_, 0);
v_isSharedCheck_2768_ = !lean_is_exclusive(v_stepLimit_x3f_2674_);
if (v_isSharedCheck_2768_ == 0)
{
v___x_2763_ = v_stepLimit_x3f_2674_;
v_isShared_2764_ = v_isSharedCheck_2768_;
goto v_resetjp_2762_;
}
else
{
lean_inc(v_val_2761_);
lean_dec(v_stepLimit_x3f_2674_);
v___x_2763_ = lean_box(0);
v_isShared_2764_ = v_isSharedCheck_2768_;
goto v_resetjp_2762_;
}
v_resetjp_2762_:
{
lean_object* v___x_2766_; 
if (v_isShared_2764_ == 0)
{
lean_ctor_set_tag(v___x_2763_, 0);
v___x_2766_ = v___x_2763_;
goto v_reusejp_2765_;
}
else
{
lean_object* v_reuseFailAlloc_2767_; 
v_reuseFailAlloc_2767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2767_, 0, v_val_2761_);
v___x_2766_ = v_reuseFailAlloc_2767_;
goto v_reusejp_2765_;
}
v_reusejp_2765_:
{
v___y_2712_ = v___x_2766_;
goto v___jp_2711_;
}
}
}
v___jp_2685_:
{
lean_object* v___x_2690_; lean_object* v___x_2691_; 
v___x_2690_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2690_, 0, v___y_2687_);
lean_ctor_set(v___x_2690_, 1, v_a_2689_);
lean_ctor_set(v___x_2690_, 2, v___y_2686_);
lean_ctor_set_uint8(v___x_2690_, sizeof(void*)*3, v___y_2688_);
v___x_2691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2691_, 0, v___x_2690_);
return v___x_2691_;
}
v___jp_2692_:
{
if (lean_obj_tag(v___y_2696_) == 0)
{
lean_object* v_a_2697_; 
v_a_2697_ = lean_ctor_get(v___y_2696_, 0);
lean_inc(v_a_2697_);
lean_dec_ref_known(v___y_2696_, 1);
v___y_2686_ = v___y_2693_;
v___y_2687_ = v___y_2694_;
v___y_2688_ = v___y_2695_;
v_a_2689_ = v_a_2697_;
goto v___jp_2685_;
}
else
{
lean_object* v_a_2698_; lean_object* v___x_2700_; uint8_t v_isShared_2701_; uint8_t v_isSharedCheck_2705_; 
lean_dec_ref(v___y_2694_);
lean_dec_ref(v___y_2693_);
v_a_2698_ = lean_ctor_get(v___y_2696_, 0);
v_isSharedCheck_2705_ = !lean_is_exclusive(v___y_2696_);
if (v_isSharedCheck_2705_ == 0)
{
v___x_2700_ = v___y_2696_;
v_isShared_2701_ = v_isSharedCheck_2705_;
goto v_resetjp_2699_;
}
else
{
lean_inc(v_a_2698_);
lean_dec(v___y_2696_);
v___x_2700_ = lean_box(0);
v_isShared_2701_ = v_isSharedCheck_2705_;
goto v_resetjp_2699_;
}
v_resetjp_2699_:
{
lean_object* v___x_2703_; 
if (v_isShared_2701_ == 0)
{
v___x_2703_ = v___x_2700_;
goto v_reusejp_2702_;
}
else
{
lean_object* v_reuseFailAlloc_2704_; 
v_reuseFailAlloc_2704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v_a_2698_);
v___x_2703_ = v_reuseFailAlloc_2704_;
goto v_reusejp_2702_;
}
v_reusejp_2702_:
{
return v___x_2703_;
}
}
}
}
v___jp_2711_:
{
uint8_t v___x_2713_; lean_object* v_initState_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; 
v___x_2713_ = 0;
v_initState_2714_ = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(v_initState_2714_, 0, v___x_2707_);
lean_ctor_set(v_initState_2714_, 1, v___x_2707_);
lean_ctor_set(v_initState_2714_, 2, v___x_2708_);
lean_ctor_set(v_initState_2714_, 3, v___x_2708_);
lean_ctor_set(v_initState_2714_, 4, v___x_2709_);
lean_ctor_set(v_initState_2714_, 5, v___x_2710_);
lean_ctor_set(v_initState_2714_, 6, v___y_2712_);
lean_ctor_set(v_initState_2714_, 7, v___x_2707_);
lean_ctor_set_uint8(v_initState_2714_, sizeof(void*)*8, v___x_2713_);
v___x_2715_ = lean_st_mk_ref(v_initState_2714_);
v___x_2716_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_work(v_goal_2672_, v_ctx_2673_, v___x_2715_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_, v_a_2679_, v_a_2680_, v_a_2681_, v_a_2682_, v_a_2683_);
if (lean_obj_tag(v___x_2716_) == 0)
{
lean_object* v___x_2717_; lean_object* v_invariants_2718_; lean_object* v_vcs_2719_; lean_object* v_inlineHandledInvariants_2720_; uint8_t v_preTacFailed_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; 
lean_dec_ref_known(v___x_2716_, 1);
v___x_2717_ = lean_st_ref_get(v___x_2715_);
lean_dec(v___x_2715_);
v_invariants_2718_ = lean_ctor_get(v___x_2717_, 2);
lean_inc_ref(v_invariants_2718_);
v_vcs_2719_ = lean_ctor_get(v___x_2717_, 3);
lean_inc_ref(v_vcs_2719_);
v_inlineHandledInvariants_2720_ = lean_ctor_get(v___x_2717_, 7);
lean_inc_ref(v_inlineHandledInvariants_2720_);
v_preTacFailed_2721_ = lean_ctor_get_uint8(v___x_2717_, sizeof(void*)*8);
lean_dec(v___x_2717_);
v___x_2722_ = lean_array_get_size(v_invariants_2718_);
v___x_2723_ = lean_mk_empty_array_with_capacity(v___x_2722_);
v___x_2724_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___redArg(v_invariants_2718_, v___x_2722_, v___x_2706_, v___x_2723_, v_a_2681_);
if (lean_obj_tag(v___x_2724_) == 0)
{
lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; 
lean_dec_ref_known(v___x_2724_, 1);
v___x_2725_ = lean_array_get_size(v_vcs_2719_);
v___x_2726_ = lean_mk_empty_array_with_capacity(v___x_2725_);
v___x_2727_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___redArg(v_vcs_2719_, v___x_2725_, v___x_2706_, v___x_2726_, v_a_2680_, v_a_2681_, v_a_2682_, v_a_2683_);
if (lean_obj_tag(v___x_2727_) == 0)
{
uint8_t v___x_2728_; 
lean_dec_ref_known(v___x_2727_, 1);
v___x_2728_ = lean_nat_dec_lt(v___x_2706_, v___x_2725_);
if (v___x_2728_ == 0)
{
lean_dec_ref(v_vcs_2719_);
v___y_2686_ = v_inlineHandledInvariants_2720_;
v___y_2687_ = v_invariants_2718_;
v___y_2688_ = v_preTacFailed_2721_;
v_a_2689_ = v___x_2708_;
goto v___jp_2685_;
}
else
{
uint8_t v___x_2729_; 
v___x_2729_ = lean_nat_dec_le(v___x_2725_, v___x_2725_);
if (v___x_2729_ == 0)
{
if (v___x_2728_ == 0)
{
lean_dec_ref(v_vcs_2719_);
v___y_2686_ = v_inlineHandledInvariants_2720_;
v___y_2687_ = v_invariants_2718_;
v___y_2688_ = v_preTacFailed_2721_;
v_a_2689_ = v___x_2708_;
goto v___jp_2685_;
}
else
{
size_t v___x_2730_; size_t v___x_2731_; lean_object* v___x_2732_; 
v___x_2730_ = ((size_t)0ULL);
v___x_2731_ = lean_usize_of_nat(v___x_2725_);
v___x_2732_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__3(v_vcs_2719_, v___x_2730_, v___x_2731_, v___x_2708_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_, v_a_2679_, v_a_2680_, v_a_2681_, v_a_2682_, v_a_2683_);
lean_dec_ref(v_vcs_2719_);
v___y_2693_ = v_inlineHandledInvariants_2720_;
v___y_2694_ = v_invariants_2718_;
v___y_2695_ = v_preTacFailed_2721_;
v___y_2696_ = v___x_2732_;
goto v___jp_2692_;
}
}
else
{
size_t v___x_2733_; size_t v___x_2734_; lean_object* v___x_2735_; 
v___x_2733_ = ((size_t)0ULL);
v___x_2734_ = lean_usize_of_nat(v___x_2725_);
v___x_2735_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__3(v_vcs_2719_, v___x_2733_, v___x_2734_, v___x_2708_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_, v_a_2679_, v_a_2680_, v_a_2681_, v_a_2682_, v_a_2683_);
lean_dec_ref(v_vcs_2719_);
v___y_2693_ = v_inlineHandledInvariants_2720_;
v___y_2694_ = v_invariants_2718_;
v___y_2695_ = v_preTacFailed_2721_;
v___y_2696_ = v___x_2735_;
goto v___jp_2692_;
}
}
}
else
{
lean_object* v_a_2736_; lean_object* v___x_2738_; uint8_t v_isShared_2739_; uint8_t v_isSharedCheck_2743_; 
lean_dec_ref(v_inlineHandledInvariants_2720_);
lean_dec_ref(v_vcs_2719_);
lean_dec_ref(v_invariants_2718_);
v_a_2736_ = lean_ctor_get(v___x_2727_, 0);
v_isSharedCheck_2743_ = !lean_is_exclusive(v___x_2727_);
if (v_isSharedCheck_2743_ == 0)
{
v___x_2738_ = v___x_2727_;
v_isShared_2739_ = v_isSharedCheck_2743_;
goto v_resetjp_2737_;
}
else
{
lean_inc(v_a_2736_);
lean_dec(v___x_2727_);
v___x_2738_ = lean_box(0);
v_isShared_2739_ = v_isSharedCheck_2743_;
goto v_resetjp_2737_;
}
v_resetjp_2737_:
{
lean_object* v___x_2741_; 
if (v_isShared_2739_ == 0)
{
v___x_2741_ = v___x_2738_;
goto v_reusejp_2740_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v_a_2736_);
v___x_2741_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2740_;
}
v_reusejp_2740_:
{
return v___x_2741_;
}
}
}
}
else
{
lean_object* v_a_2744_; lean_object* v___x_2746_; uint8_t v_isShared_2747_; uint8_t v_isSharedCheck_2751_; 
lean_dec_ref(v_inlineHandledInvariants_2720_);
lean_dec_ref(v_vcs_2719_);
lean_dec_ref(v_invariants_2718_);
v_a_2744_ = lean_ctor_get(v___x_2724_, 0);
v_isSharedCheck_2751_ = !lean_is_exclusive(v___x_2724_);
if (v_isSharedCheck_2751_ == 0)
{
v___x_2746_ = v___x_2724_;
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
else
{
lean_inc(v_a_2744_);
lean_dec(v___x_2724_);
v___x_2746_ = lean_box(0);
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
v_resetjp_2745_:
{
lean_object* v___x_2749_; 
if (v_isShared_2747_ == 0)
{
v___x_2749_ = v___x_2746_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2750_; 
v_reuseFailAlloc_2750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2750_, 0, v_a_2744_);
v___x_2749_ = v_reuseFailAlloc_2750_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
return v___x_2749_;
}
}
}
}
else
{
lean_object* v_a_2752_; lean_object* v___x_2754_; uint8_t v_isShared_2755_; uint8_t v_isSharedCheck_2759_; 
lean_dec(v___x_2715_);
v_a_2752_ = lean_ctor_get(v___x_2716_, 0);
v_isSharedCheck_2759_ = !lean_is_exclusive(v___x_2716_);
if (v_isSharedCheck_2759_ == 0)
{
v___x_2754_ = v___x_2716_;
v_isShared_2755_ = v_isSharedCheck_2759_;
goto v_resetjp_2753_;
}
else
{
lean_inc(v_a_2752_);
lean_dec(v___x_2716_);
v___x_2754_ = lean_box(0);
v_isShared_2755_ = v_isSharedCheck_2759_;
goto v_resetjp_2753_;
}
v_resetjp_2753_:
{
lean_object* v___x_2757_; 
if (v_isShared_2755_ == 0)
{
v___x_2757_ = v___x_2754_;
goto v_reusejp_2756_;
}
else
{
lean_object* v_reuseFailAlloc_2758_; 
v_reuseFailAlloc_2758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2758_, 0, v_a_2752_);
v___x_2757_ = v_reuseFailAlloc_2758_;
goto v_reusejp_2756_;
}
v_reusejp_2756_:
{
return v___x_2757_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_run___boxed(lean_object* v_goal_2769_, lean_object* v_ctx_2770_, lean_object* v_stepLimit_x3f_2771_, lean_object* v_a_2772_, lean_object* v_a_2773_, lean_object* v_a_2774_, lean_object* v_a_2775_, lean_object* v_a_2776_, lean_object* v_a_2777_, lean_object* v_a_2778_, lean_object* v_a_2779_, lean_object* v_a_2780_, lean_object* v_a_2781_){
_start:
{
lean_object* v_res_2782_; 
v_res_2782_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_run(v_goal_2769_, v_ctx_2770_, v_stepLimit_x3f_2771_, v_a_2772_, v_a_2773_, v_a_2774_, v_a_2775_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_, v_a_2780_);
lean_dec(v_a_2780_);
lean_dec_ref(v_a_2779_);
lean_dec(v_a_2778_);
lean_dec_ref(v_a_2777_);
lean_dec(v_a_2776_);
lean_dec_ref(v_a_2775_);
lean_dec(v_a_2774_);
lean_dec_ref(v_a_2773_);
lean_dec(v_a_2772_);
lean_dec_ref(v_ctx_2770_);
return v_res_2782_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0(lean_object* v_mvarId_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_){
_start:
{
lean_object* v___x_2794_; 
v___x_2794_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0___redArg(v_mvarId_2783_, v___y_2790_);
return v___x_2794_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0___boxed(lean_object* v_mvarId_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_){
_start:
{
lean_object* v_res_2806_; 
v_res_2806_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0(v_mvarId_2795_, v___y_2796_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, v___y_2803_, v___y_2804_);
lean_dec(v___y_2804_);
lean_dec_ref(v___y_2803_);
lean_dec(v___y_2802_);
lean_dec_ref(v___y_2801_);
lean_dec(v___y_2800_);
lean_dec_ref(v___y_2799_);
lean_dec(v___y_2798_);
lean_dec_ref(v___y_2797_);
lean_dec(v___y_2796_);
lean_dec(v_mvarId_2795_);
return v_res_2806_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1(lean_object* v_as_2807_, lean_object* v_i_2808_, lean_object* v_j_2809_, lean_object* v_inv_2810_, lean_object* v_bs_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_){
_start:
{
lean_object* v___x_2822_; 
v___x_2822_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___redArg(v_as_2807_, v_i_2808_, v_j_2809_, v_bs_2811_, v___y_2818_);
return v___x_2822_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___boxed(lean_object* v_as_2823_, lean_object* v_i_2824_, lean_object* v_j_2825_, lean_object* v_inv_2826_, lean_object* v_bs_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_){
_start:
{
lean_object* v_res_2838_; 
v_res_2838_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1(v_as_2823_, v_i_2824_, v_j_2825_, v_inv_2826_, v_bs_2827_, v___y_2828_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_);
lean_dec(v___y_2836_);
lean_dec_ref(v___y_2835_);
lean_dec(v___y_2834_);
lean_dec_ref(v___y_2833_);
lean_dec(v___y_2832_);
lean_dec_ref(v___y_2831_);
lean_dec(v___y_2830_);
lean_dec_ref(v___y_2829_);
lean_dec(v___y_2828_);
lean_dec_ref(v_as_2823_);
return v_res_2838_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2(lean_object* v_as_2839_, lean_object* v_i_2840_, lean_object* v_j_2841_, lean_object* v_inv_2842_, lean_object* v_bs_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_){
_start:
{
lean_object* v___x_2854_; 
v___x_2854_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___redArg(v_as_2839_, v_i_2840_, v_j_2841_, v_bs_2843_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_);
return v___x_2854_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___boxed(lean_object* v_as_2855_, lean_object* v_i_2856_, lean_object* v_j_2857_, lean_object* v_inv_2858_, lean_object* v_bs_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_){
_start:
{
lean_object* v_res_2870_; 
v_res_2870_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2(v_as_2855_, v_i_2856_, v_j_2857_, v_inv_2858_, v_bs_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_, v___y_2867_, v___y_2868_);
lean_dec(v___y_2868_);
lean_dec_ref(v___y_2867_);
lean_dec(v___y_2866_);
lean_dec_ref(v___y_2865_);
lean_dec(v___y_2864_);
lean_dec_ref(v___y_2863_);
lean_dec(v___y_2862_);
lean_dec_ref(v___y_2861_);
lean_dec(v___y_2860_);
lean_dec_ref(v_as_2855_);
return v_res_2870_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Solve(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Grind(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Solve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Solve(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Grind(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Solve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(builtin);
}
#ifdef __cplusplus
}
#endif
