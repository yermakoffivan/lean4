// Lean compiler output
// Module: Lean.Elab.Tactic.Do.Internal.VCGen.Driver
// Imports: public import Lean.Elab.Tactic.Meta public import Lean.Elab.Tactic.Do.Internal.VCGen.Solve public import Lean.Meta.Sym.Grind
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
lean_object* l_Lean_MetavarContext_getExprAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_setTag___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_internalizeAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_grind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_runTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Queue_dequeue_x3f___redArg(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MVarId_setKind___redArg(lean_object*, uint8_t, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
uint8_t l_Lean_Elab_Tactic_Do_SpecAttr_isSpecInvariantType(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_unfoldReducible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Std_Queue_enqueueAll___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_isGrind(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_mkGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Queue_empty(lean_object*);
lean_object* l_Std_Queue_enqueue___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___lam__0___boxed(lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "`grind` failed on goal:"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__1;
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__2_value;
static const lean_array_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 16, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__3_value),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 1, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(1, 0, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___redArg___closed__1;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__8___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__9___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "invariantDotAlt"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__3_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__2_value),LEAN_SCALAR_PTR_LITERAL(174, 218, 225, 197, 89, 244, 133, 64)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "invariantCaseAlt"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__5_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__4_value),LEAN_SCALAR_PTR_LITERAL(163, 146, 32, 128, 83, 151, 179, 6)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "caseArg"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__7_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__6_value),LEAN_SCALAR_PTR_LITERAL(151, 119, 254, 229, 232, 21, 225, 201)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__9_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__9_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__8_value),LEAN_SCALAR_PTR_LITERAL(117, 253, 122, 28, 77, 248, 149, 120)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__12_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__12_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__11_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__13 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__14_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__14_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__14_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__13_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__14_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__15 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__15_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__16 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__16_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "renameI"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__17 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__18_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__18_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__18_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__17_value),LEAN_SCALAR_PTR_LITERAL(20, 41, 101, 89, 107, 117, 242, 244)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__18 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__18_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "rename_i"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__19 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__19_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__20;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__21 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__21_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__22 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__22_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__23_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__23_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__23_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__22_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__23 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__23_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__24 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__24_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "cdotTk"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__25 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__25_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__26_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__25_value),LEAN_SCALAR_PTR_LITERAL(117, 126, 44, 217, 38, 3, 69, 145)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__26 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__26_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__9(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__1___boxed(lean_object**);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PartialOrder"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rel"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__1_value),LEAN_SCALAR_PTR_LITERAL(179, 3, 218, 237, 219, 72, 94, 177)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__2_value),LEAN_SCALAR_PTR_LITERAL(41, 174, 7, 105, 99, 77, 97, 125)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "top"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__4_value),LEAN_SCALAR_PTR_LITERAL(219, 33, 148, 124, 218, 91, 248, 169)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Failed to apply elim_pre rule"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__2___boxed(lean_object**);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "SpecProof.global "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__0_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__1;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "SpecProof.local "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__2 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__2_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__3;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "SpecProof.stx _ "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__4 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__4_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__5;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__6 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__6_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__7;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "No spec matching the monad "};
static const lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__0_value;
static lean_once_cell_t l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__1;
static const lean_string_object l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = " found for program "};
static const lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__2 = (const lean_object*)&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__2_value;
static lean_once_cell_t l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__3;
static const lean_string_object l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = ". Candidates were "};
static const lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__4 = (const lean_object*)&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__4_value;
static lean_once_cell_t l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__5;
static const lean_string_object l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__6 = (const lean_object*)&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__6_value;
static lean_once_cell_t l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__7;
static const lean_string_object l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "No spec found for program "};
static const lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__8 = (const lean_object*)&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__8_value;
static lean_once_cell_t l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__9;
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "Did not know how to decompose weakest precondition for "};
static const lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inv"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "vc"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__2___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__1;
static const lean_array_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__1___redArg___lam__0(lean_object* v_x_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_){
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
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__1___redArg___lam__0___boxed(lean_object* v_x_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__1___redArg___lam__0(v_x_15_, v___y_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__1___redArg(lean_object* v_mvarId_29_, lean_object* v_x_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_){
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
v___f_43_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__1___redArg___lam__0___boxed), 13, 8);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__1___redArg___boxed(lean_object* v_mvarId_53_, lean_object* v_x_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__1___redArg(v_mvarId_53_, v_x_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__1(lean_object* v_00_u03b1_68_, lean_object* v_mvarId_69_, lean_object* v_x_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__1___redArg(v_mvarId_69_, v_x_70_, v___y_71_, v___y_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__1___boxed(lean_object* v_00_u03b1_84_, lean_object* v_mvarId_85_, lean_object* v_x_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__1(v_00_u03b1_84_, v_mvarId_85_, v_x_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
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
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___lam__0(lean_object* v_x_100_){
_start:
{
uint8_t v___x_101_; 
v___x_101_ = 0;
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___lam__0___boxed(lean_object* v_x_102_){
_start:
{
uint8_t v_res_103_; lean_object* v_r_104_; 
v_res_103_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___lam__0(v_x_102_);
lean_dec(v_x_102_);
v_r_104_ = lean_box(v_res_103_);
return v_r_104_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0(uint8_t v___y_113_, uint8_t v_suppressElabErrors_114_, lean_object* v_x_115_){
_start:
{
if (lean_obj_tag(v_x_115_) == 1)
{
lean_object* v_pre_116_; 
v_pre_116_ = lean_ctor_get(v_x_115_, 0);
switch(lean_obj_tag(v_pre_116_))
{
case 1:
{
lean_object* v_pre_117_; 
v_pre_117_ = lean_ctor_get(v_pre_116_, 0);
switch(lean_obj_tag(v_pre_117_))
{
case 0:
{
lean_object* v_str_118_; lean_object* v_str_119_; lean_object* v___x_120_; uint8_t v___x_121_; 
v_str_118_ = lean_ctor_get(v_x_115_, 1);
v_str_119_ = lean_ctor_get(v_pre_116_, 1);
v___x_120_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__0));
v___x_121_ = lean_string_dec_eq(v_str_119_, v___x_120_);
if (v___x_121_ == 0)
{
lean_object* v___x_122_; uint8_t v___x_123_; 
v___x_122_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__1));
v___x_123_ = lean_string_dec_eq(v_str_119_, v___x_122_);
if (v___x_123_ == 0)
{
return v___y_113_;
}
else
{
lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_124_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__2));
v___x_125_ = lean_string_dec_eq(v_str_118_, v___x_124_);
if (v___x_125_ == 0)
{
return v___y_113_;
}
else
{
return v_suppressElabErrors_114_;
}
}
}
else
{
lean_object* v___x_126_; uint8_t v___x_127_; 
v___x_126_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__3));
v___x_127_ = lean_string_dec_eq(v_str_118_, v___x_126_);
if (v___x_127_ == 0)
{
return v___y_113_;
}
else
{
return v_suppressElabErrors_114_;
}
}
}
case 1:
{
lean_object* v_pre_128_; 
v_pre_128_ = lean_ctor_get(v_pre_117_, 0);
if (lean_obj_tag(v_pre_128_) == 0)
{
lean_object* v_str_129_; lean_object* v_str_130_; lean_object* v_str_131_; lean_object* v___x_132_; uint8_t v___x_133_; 
v_str_129_ = lean_ctor_get(v_x_115_, 1);
v_str_130_ = lean_ctor_get(v_pre_116_, 1);
v_str_131_ = lean_ctor_get(v_pre_117_, 1);
v___x_132_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__4));
v___x_133_ = lean_string_dec_eq(v_str_131_, v___x_132_);
if (v___x_133_ == 0)
{
return v___y_113_;
}
else
{
lean_object* v___x_134_; uint8_t v___x_135_; 
v___x_134_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__5));
v___x_135_ = lean_string_dec_eq(v_str_130_, v___x_134_);
if (v___x_135_ == 0)
{
return v___y_113_;
}
else
{
lean_object* v___x_136_; uint8_t v___x_137_; 
v___x_136_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__6));
v___x_137_ = lean_string_dec_eq(v_str_129_, v___x_136_);
if (v___x_137_ == 0)
{
return v___y_113_;
}
else
{
return v_suppressElabErrors_114_;
}
}
}
}
else
{
return v___y_113_;
}
}
default: 
{
return v___y_113_;
}
}
}
case 0:
{
lean_object* v_str_138_; lean_object* v___x_139_; uint8_t v___x_140_; 
v_str_138_ = lean_ctor_get(v_x_115_, 1);
v___x_139_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___closed__7));
v___x_140_ = lean_string_dec_eq(v_str_138_, v___x_139_);
if (v___x_140_ == 0)
{
return v___y_113_;
}
else
{
return v_suppressElabErrors_114_;
}
}
default: 
{
return v___y_113_;
}
}
}
else
{
return v___y_113_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___boxed(lean_object* v___y_141_, lean_object* v_suppressElabErrors_142_, lean_object* v_x_143_){
_start:
{
uint8_t v___y_46000__boxed_144_; uint8_t v_suppressElabErrors_boxed_145_; uint8_t v_res_146_; lean_object* v_r_147_; 
v___y_46000__boxed_144_ = lean_unbox(v___y_141_);
v_suppressElabErrors_boxed_145_ = lean_unbox(v_suppressElabErrors_142_);
v_res_146_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0(v___y_46000__boxed_144_, v_suppressElabErrors_boxed_145_, v_x_143_);
lean_dec(v_x_143_);
v_r_147_ = lean_box(v_res_146_);
return v_r_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2_spec__3(lean_object* v_msgData_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_){
_start:
{
lean_object* v___x_154_; lean_object* v_env_155_; lean_object* v___x_156_; lean_object* v_mctx_157_; lean_object* v_lctx_158_; lean_object* v_options_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_154_ = lean_st_ref_get(v___y_152_);
v_env_155_ = lean_ctor_get(v___x_154_, 0);
lean_inc_ref(v_env_155_);
lean_dec(v___x_154_);
v___x_156_ = lean_st_ref_get(v___y_150_);
v_mctx_157_ = lean_ctor_get(v___x_156_, 0);
lean_inc_ref(v_mctx_157_);
lean_dec(v___x_156_);
v_lctx_158_ = lean_ctor_get(v___y_149_, 2);
v_options_159_ = lean_ctor_get(v___y_151_, 2);
lean_inc_ref(v_options_159_);
lean_inc_ref(v_lctx_158_);
v___x_160_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_160_, 0, v_env_155_);
lean_ctor_set(v___x_160_, 1, v_mctx_157_);
lean_ctor_set(v___x_160_, 2, v_lctx_158_);
lean_ctor_set(v___x_160_, 3, v_options_159_);
v___x_161_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
lean_ctor_set(v___x_161_, 1, v_msgData_148_);
v___x_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_msgData_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2_spec__3(v_msgData_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
return v_res_169_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2_spec__4(lean_object* v_opts_170_, lean_object* v_opt_171_){
_start:
{
lean_object* v_name_172_; lean_object* v_defValue_173_; lean_object* v_map_174_; lean_object* v___x_175_; 
v_name_172_ = lean_ctor_get(v_opt_171_, 0);
v_defValue_173_ = lean_ctor_get(v_opt_171_, 1);
v_map_174_ = lean_ctor_get(v_opts_170_, 0);
v___x_175_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_174_, v_name_172_);
if (lean_obj_tag(v___x_175_) == 0)
{
uint8_t v___x_176_; 
v___x_176_ = lean_unbox(v_defValue_173_);
return v___x_176_;
}
else
{
lean_object* v_val_177_; 
v_val_177_ = lean_ctor_get(v___x_175_, 0);
lean_inc(v_val_177_);
lean_dec_ref_known(v___x_175_, 1);
if (lean_obj_tag(v_val_177_) == 1)
{
uint8_t v_v_178_; 
v_v_178_ = lean_ctor_get_uint8(v_val_177_, 0);
lean_dec_ref_known(v_val_177_, 0);
return v_v_178_;
}
else
{
uint8_t v___x_179_; 
lean_dec(v_val_177_);
v___x_179_ = lean_unbox(v_defValue_173_);
return v___x_179_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_opts_180_, lean_object* v_opt_181_){
_start:
{
uint8_t v_res_182_; lean_object* v_r_183_; 
v_res_182_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2_spec__4(v_opts_180_, v_opt_181_);
lean_dec_ref(v_opt_181_);
lean_dec_ref(v_opts_180_);
v_r_183_ = lean_box(v_res_182_);
return v_r_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg(lean_object* v_ref_185_, lean_object* v_msgData_186_, uint8_t v_severity_187_, uint8_t v_isSilent_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_){
_start:
{
lean_object* v___y_195_; lean_object* v___y_196_; uint8_t v___y_197_; lean_object* v___y_198_; uint8_t v___y_199_; lean_object* v___y_200_; lean_object* v___y_201_; lean_object* v___y_202_; lean_object* v___y_203_; lean_object* v___y_231_; lean_object* v___y_232_; uint8_t v___y_233_; uint8_t v___y_234_; lean_object* v___y_235_; uint8_t v___y_236_; lean_object* v___y_237_; lean_object* v___y_238_; lean_object* v___y_256_; uint8_t v___y_257_; uint8_t v___y_258_; lean_object* v___y_259_; uint8_t v___y_260_; lean_object* v___y_261_; lean_object* v___y_262_; lean_object* v___y_263_; lean_object* v___y_267_; uint8_t v___y_268_; lean_object* v___y_269_; uint8_t v___y_270_; lean_object* v___y_271_; lean_object* v___y_272_; uint8_t v___y_273_; uint8_t v___x_278_; uint8_t v___y_280_; lean_object* v___y_281_; lean_object* v___y_282_; lean_object* v___y_283_; lean_object* v___y_284_; uint8_t v___y_285_; uint8_t v___y_286_; uint8_t v___y_288_; uint8_t v___x_303_; 
v___x_278_ = 2;
v___x_303_ = l_Lean_instBEqMessageSeverity_beq(v_severity_187_, v___x_278_);
if (v___x_303_ == 0)
{
v___y_288_ = v___x_303_;
goto v___jp_287_;
}
else
{
uint8_t v___x_304_; 
lean_inc_ref(v_msgData_186_);
v___x_304_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_186_);
v___y_288_ = v___x_304_;
goto v___jp_287_;
}
v___jp_194_:
{
lean_object* v___x_204_; lean_object* v_currNamespace_205_; lean_object* v_openDecls_206_; lean_object* v_env_207_; lean_object* v_nextMacroScope_208_; lean_object* v_ngen_209_; lean_object* v_auxDeclNGen_210_; lean_object* v_traceState_211_; lean_object* v_cache_212_; lean_object* v_messages_213_; lean_object* v_infoState_214_; lean_object* v_snapshotTasks_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_229_; 
v___x_204_ = lean_st_ref_take(v___y_203_);
v_currNamespace_205_ = lean_ctor_get(v___y_202_, 6);
v_openDecls_206_ = lean_ctor_get(v___y_202_, 7);
v_env_207_ = lean_ctor_get(v___x_204_, 0);
v_nextMacroScope_208_ = lean_ctor_get(v___x_204_, 1);
v_ngen_209_ = lean_ctor_get(v___x_204_, 2);
v_auxDeclNGen_210_ = lean_ctor_get(v___x_204_, 3);
v_traceState_211_ = lean_ctor_get(v___x_204_, 4);
v_cache_212_ = lean_ctor_get(v___x_204_, 5);
v_messages_213_ = lean_ctor_get(v___x_204_, 6);
v_infoState_214_ = lean_ctor_get(v___x_204_, 7);
v_snapshotTasks_215_ = lean_ctor_get(v___x_204_, 8);
v_isSharedCheck_229_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_229_ == 0)
{
v___x_217_ = v___x_204_;
v_isShared_218_ = v_isSharedCheck_229_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_snapshotTasks_215_);
lean_inc(v_infoState_214_);
lean_inc(v_messages_213_);
lean_inc(v_cache_212_);
lean_inc(v_traceState_211_);
lean_inc(v_auxDeclNGen_210_);
lean_inc(v_ngen_209_);
lean_inc(v_nextMacroScope_208_);
lean_inc(v_env_207_);
lean_dec(v___x_204_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_229_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_224_; 
lean_inc(v_openDecls_206_);
lean_inc(v_currNamespace_205_);
v___x_219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_219_, 0, v_currNamespace_205_);
lean_ctor_set(v___x_219_, 1, v_openDecls_206_);
v___x_220_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_220_, 0, v___x_219_);
lean_ctor_set(v___x_220_, 1, v___y_195_);
lean_inc_ref(v___y_200_);
lean_inc_ref(v___y_198_);
v___x_221_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_221_, 0, v___y_198_);
lean_ctor_set(v___x_221_, 1, v___y_196_);
lean_ctor_set(v___x_221_, 2, v___y_201_);
lean_ctor_set(v___x_221_, 3, v___y_200_);
lean_ctor_set(v___x_221_, 4, v___x_220_);
lean_ctor_set_uint8(v___x_221_, sizeof(void*)*5, v___y_199_);
lean_ctor_set_uint8(v___x_221_, sizeof(void*)*5 + 1, v___y_197_);
lean_ctor_set_uint8(v___x_221_, sizeof(void*)*5 + 2, v_isSilent_188_);
v___x_222_ = l_Lean_MessageLog_add(v___x_221_, v_messages_213_);
if (v_isShared_218_ == 0)
{
lean_ctor_set(v___x_217_, 6, v___x_222_);
v___x_224_ = v___x_217_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v_env_207_);
lean_ctor_set(v_reuseFailAlloc_228_, 1, v_nextMacroScope_208_);
lean_ctor_set(v_reuseFailAlloc_228_, 2, v_ngen_209_);
lean_ctor_set(v_reuseFailAlloc_228_, 3, v_auxDeclNGen_210_);
lean_ctor_set(v_reuseFailAlloc_228_, 4, v_traceState_211_);
lean_ctor_set(v_reuseFailAlloc_228_, 5, v_cache_212_);
lean_ctor_set(v_reuseFailAlloc_228_, 6, v___x_222_);
lean_ctor_set(v_reuseFailAlloc_228_, 7, v_infoState_214_);
lean_ctor_set(v_reuseFailAlloc_228_, 8, v_snapshotTasks_215_);
v___x_224_ = v_reuseFailAlloc_228_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_225_ = lean_st_ref_set(v___y_203_, v___x_224_);
v___x_226_ = lean_box(0);
v___x_227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
return v___x_227_;
}
}
}
v___jp_230_:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v_a_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_254_; 
v___x_239_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_186_);
v___x_240_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2_spec__3(v___x_239_, v___y_189_, v___y_190_, v___y_191_, v___y_192_);
v_a_241_ = lean_ctor_get(v___x_240_, 0);
v_isSharedCheck_254_ = !lean_is_exclusive(v___x_240_);
if (v_isSharedCheck_254_ == 0)
{
v___x_243_ = v___x_240_;
v_isShared_244_ = v_isSharedCheck_254_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_a_241_);
lean_dec(v___x_240_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_254_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
lean_inc_ref_n(v___y_237_, 2);
v___x_245_ = l_Lean_FileMap_toPosition(v___y_237_, v___y_232_);
lean_dec(v___y_232_);
v___x_246_ = l_Lean_FileMap_toPosition(v___y_237_, v___y_238_);
lean_dec(v___y_238_);
v___x_247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
v___x_248_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___closed__0));
if (v___y_233_ == 0)
{
lean_del_object(v___x_243_);
lean_dec_ref(v___y_231_);
v___y_195_ = v_a_241_;
v___y_196_ = v___x_245_;
v___y_197_ = v___y_234_;
v___y_198_ = v___y_235_;
v___y_199_ = v___y_236_;
v___y_200_ = v___x_248_;
v___y_201_ = v___x_247_;
v___y_202_ = v___y_191_;
v___y_203_ = v___y_192_;
goto v___jp_194_;
}
else
{
uint8_t v___x_249_; 
lean_inc(v_a_241_);
v___x_249_ = l_Lean_MessageData_hasTag(v___y_231_, v_a_241_);
if (v___x_249_ == 0)
{
lean_object* v___x_250_; lean_object* v___x_252_; 
lean_dec_ref_known(v___x_247_, 1);
lean_dec_ref(v___x_245_);
lean_dec(v_a_241_);
v___x_250_ = lean_box(0);
if (v_isShared_244_ == 0)
{
lean_ctor_set(v___x_243_, 0, v___x_250_);
v___x_252_ = v___x_243_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v___x_250_);
v___x_252_ = v_reuseFailAlloc_253_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
return v___x_252_;
}
}
else
{
lean_del_object(v___x_243_);
v___y_195_ = v_a_241_;
v___y_196_ = v___x_245_;
v___y_197_ = v___y_234_;
v___y_198_ = v___y_235_;
v___y_199_ = v___y_236_;
v___y_200_ = v___x_248_;
v___y_201_ = v___x_247_;
v___y_202_ = v___y_191_;
v___y_203_ = v___y_192_;
goto v___jp_194_;
}
}
}
}
v___jp_255_:
{
lean_object* v___x_264_; 
v___x_264_ = l_Lean_Syntax_getTailPos_x3f(v___y_261_, v___y_260_);
lean_dec(v___y_261_);
if (lean_obj_tag(v___x_264_) == 0)
{
lean_inc(v___y_263_);
v___y_231_ = v___y_256_;
v___y_232_ = v___y_263_;
v___y_233_ = v___y_257_;
v___y_234_ = v___y_258_;
v___y_235_ = v___y_259_;
v___y_236_ = v___y_260_;
v___y_237_ = v___y_262_;
v___y_238_ = v___y_263_;
goto v___jp_230_;
}
else
{
lean_object* v_val_265_; 
v_val_265_ = lean_ctor_get(v___x_264_, 0);
lean_inc(v_val_265_);
lean_dec_ref_known(v___x_264_, 1);
v___y_231_ = v___y_256_;
v___y_232_ = v___y_263_;
v___y_233_ = v___y_257_;
v___y_234_ = v___y_258_;
v___y_235_ = v___y_259_;
v___y_236_ = v___y_260_;
v___y_237_ = v___y_262_;
v___y_238_ = v_val_265_;
goto v___jp_230_;
}
}
v___jp_266_:
{
lean_object* v_ref_274_; lean_object* v___x_275_; 
v_ref_274_ = l_Lean_replaceRef(v_ref_185_, v___y_271_);
v___x_275_ = l_Lean_Syntax_getPos_x3f(v_ref_274_, v___y_270_);
if (lean_obj_tag(v___x_275_) == 0)
{
lean_object* v___x_276_; 
v___x_276_ = lean_unsigned_to_nat(0u);
v___y_256_ = v___y_267_;
v___y_257_ = v___y_268_;
v___y_258_ = v___y_273_;
v___y_259_ = v___y_269_;
v___y_260_ = v___y_270_;
v___y_261_ = v_ref_274_;
v___y_262_ = v___y_272_;
v___y_263_ = v___x_276_;
goto v___jp_255_;
}
else
{
lean_object* v_val_277_; 
v_val_277_ = lean_ctor_get(v___x_275_, 0);
lean_inc(v_val_277_);
lean_dec_ref_known(v___x_275_, 1);
v___y_256_ = v___y_267_;
v___y_257_ = v___y_268_;
v___y_258_ = v___y_273_;
v___y_259_ = v___y_269_;
v___y_260_ = v___y_270_;
v___y_261_ = v_ref_274_;
v___y_262_ = v___y_272_;
v___y_263_ = v_val_277_;
goto v___jp_255_;
}
}
v___jp_279_:
{
if (v___y_286_ == 0)
{
v___y_267_ = v___y_281_;
v___y_268_ = v___y_280_;
v___y_269_ = v___y_282_;
v___y_270_ = v___y_285_;
v___y_271_ = v___y_283_;
v___y_272_ = v___y_284_;
v___y_273_ = v_severity_187_;
goto v___jp_266_;
}
else
{
v___y_267_ = v___y_281_;
v___y_268_ = v___y_280_;
v___y_269_ = v___y_282_;
v___y_270_ = v___y_285_;
v___y_271_ = v___y_283_;
v___y_272_ = v___y_284_;
v___y_273_ = v___x_278_;
goto v___jp_266_;
}
}
v___jp_287_:
{
if (v___y_288_ == 0)
{
lean_object* v_fileName_289_; lean_object* v_fileMap_290_; lean_object* v_options_291_; lean_object* v_ref_292_; uint8_t v_suppressElabErrors_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___f_296_; uint8_t v___x_297_; uint8_t v___x_298_; 
v_fileName_289_ = lean_ctor_get(v___y_191_, 0);
v_fileMap_290_ = lean_ctor_get(v___y_191_, 1);
v_options_291_ = lean_ctor_get(v___y_191_, 2);
v_ref_292_ = lean_ctor_get(v___y_191_, 5);
v_suppressElabErrors_293_ = lean_ctor_get_uint8(v___y_191_, sizeof(void*)*14 + 1);
v___x_294_ = lean_box(v___y_288_);
v___x_295_ = lean_box(v_suppressElabErrors_293_);
v___f_296_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_296_, 0, v___x_294_);
lean_closure_set(v___f_296_, 1, v___x_295_);
v___x_297_ = 1;
v___x_298_ = l_Lean_instBEqMessageSeverity_beq(v_severity_187_, v___x_297_);
if (v___x_298_ == 0)
{
v___y_280_ = v_suppressElabErrors_293_;
v___y_281_ = v___f_296_;
v___y_282_ = v_fileName_289_;
v___y_283_ = v_ref_292_;
v___y_284_ = v_fileMap_290_;
v___y_285_ = v___y_288_;
v___y_286_ = v___x_298_;
goto v___jp_279_;
}
else
{
lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_299_ = l_Lean_warningAsError;
v___x_300_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2_spec__4(v_options_291_, v___x_299_);
v___y_280_ = v_suppressElabErrors_293_;
v___y_281_ = v___f_296_;
v___y_282_ = v_fileName_289_;
v___y_283_ = v_ref_292_;
v___y_284_ = v_fileMap_290_;
v___y_285_ = v___y_288_;
v___y_286_ = v___x_300_;
goto v___jp_279_;
}
}
else
{
lean_object* v___x_301_; lean_object* v___x_302_; 
lean_dec_ref(v_msgData_186_);
v___x_301_ = lean_box(0);
v___x_302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_302_, 0, v___x_301_);
return v___x_302_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_ref_305_, lean_object* v_msgData_306_, lean_object* v_severity_307_, lean_object* v_isSilent_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_){
_start:
{
uint8_t v_severity_boxed_314_; uint8_t v_isSilent_boxed_315_; lean_object* v_res_316_; 
v_severity_boxed_314_ = lean_unbox(v_severity_307_);
v_isSilent_boxed_315_ = lean_unbox(v_isSilent_308_);
v_res_316_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg(v_ref_305_, v_msgData_306_, v_severity_boxed_314_, v_isSilent_boxed_315_, v___y_309_, v___y_310_, v___y_311_, v___y_312_);
lean_dec(v___y_312_);
lean_dec_ref(v___y_311_);
lean_dec(v___y_310_);
lean_dec_ref(v___y_309_);
lean_dec(v_ref_305_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0(lean_object* v_msgData_317_, uint8_t v_severity_318_, uint8_t v_isSilent_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_){
_start:
{
lean_object* v_ref_332_; lean_object* v___x_333_; 
v_ref_332_ = lean_ctor_get(v___y_329_, 5);
v___x_333_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg(v_ref_332_, v_msgData_317_, v_severity_318_, v_isSilent_319_, v___y_327_, v___y_328_, v___y_329_, v___y_330_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0___boxed(lean_object* v_msgData_334_, lean_object* v_severity_335_, lean_object* v_isSilent_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_){
_start:
{
uint8_t v_severity_boxed_349_; uint8_t v_isSilent_boxed_350_; lean_object* v_res_351_; 
v_severity_boxed_349_ = lean_unbox(v_severity_335_);
v_isSilent_boxed_350_ = lean_unbox(v_isSilent_336_);
v_res_351_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0(v_msgData_334_, v_severity_boxed_349_, v_isSilent_boxed_350_, v___y_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_, v___y_342_, v___y_343_, v___y_344_, v___y_345_, v___y_346_, v___y_347_);
lean_dec(v___y_347_);
lean_dec_ref(v___y_346_);
lean_dec(v___y_345_);
lean_dec_ref(v___y_344_);
lean_dec(v___y_343_);
lean_dec_ref(v___y_342_);
lean_dec(v___y_341_);
lean_dec_ref(v___y_340_);
lean_dec(v___y_339_);
lean_dec(v___y_338_);
lean_dec_ref(v___y_337_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0(lean_object* v_msgData_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_){
_start:
{
uint8_t v___x_365_; uint8_t v___x_366_; lean_object* v___x_367_; 
v___x_365_ = 2;
v___x_366_ = 0;
v___x_367_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0(v_msgData_352_, v___x_365_, v___x_366_, v___y_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_, v___y_361_, v___y_362_, v___y_363_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0___boxed(lean_object* v_msgData_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0(v_msgData_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
lean_dec(v___y_373_);
lean_dec_ref(v___y_372_);
lean_dec(v___y_371_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
return v_res_381_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__1(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_383_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__0));
v___x_384_ = l_Lean_stringToMessageData(v___x_383_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run(lean_object* v_goal_399_, lean_object* v_x_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_){
_start:
{
switch(lean_obj_tag(v_x_400_))
{
case 0:
{
lean_object* v_mvarId_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_422_; 
v_mvarId_413_ = lean_ctor_get(v_goal_399_, 1);
v_isSharedCheck_422_ = !lean_is_exclusive(v_goal_399_);
if (v_isSharedCheck_422_ == 0)
{
lean_object* v_unused_423_; 
v_unused_423_ = lean_ctor_get(v_goal_399_, 0);
lean_dec(v_unused_423_);
v___x_415_ = v_goal_399_;
v_isShared_416_ = v_isSharedCheck_422_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_mvarId_413_);
lean_dec(v_goal_399_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_422_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_417_; lean_object* v___x_419_; 
v___x_417_ = lean_box(0);
if (v_isShared_416_ == 0)
{
lean_ctor_set_tag(v___x_415_, 1);
lean_ctor_set(v___x_415_, 1, v___x_417_);
lean_ctor_set(v___x_415_, 0, v_mvarId_413_);
v___x_419_ = v___x_415_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v_mvarId_413_);
lean_ctor_set(v_reuseFailAlloc_421_, 1, v___x_417_);
v___x_419_ = v_reuseFailAlloc_421_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
lean_object* v___x_420_; 
v___x_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_420_, 0, v___x_419_);
return v___x_420_;
}
}
}
case 1:
{
uint8_t v_silent_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v_silent_424_ = lean_ctor_get_uint8(v_x_400_, 0);
lean_dec_ref_known(v_x_400_, 0);
v___x_425_ = lean_st_ref_get(v_a_409_);
v___x_426_ = l_Lean_Meta_Grind_Goal_internalizeAll(v_goal_399_, v_a_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_);
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v_a_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_519_; 
v_a_427_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_519_ == 0)
{
v___x_429_ = v___x_426_;
v_isShared_430_ = v_isSharedCheck_519_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_a_427_);
lean_dec(v___x_426_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_519_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_445_; 
lean_inc(v_a_427_);
v___x_445_ = l_Lean_Meta_Grind_Goal_grind(v_a_427_, v_a_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_);
if (lean_obj_tag(v___x_445_) == 0)
{
lean_object* v_a_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_510_; 
v_a_446_ = lean_ctor_get(v___x_445_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v___x_445_);
if (v_isSharedCheck_510_ == 0)
{
v___x_448_ = v___x_445_;
v_isShared_449_ = v_isSharedCheck_510_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_a_446_);
lean_dec(v___x_445_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_510_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
if (lean_obj_tag(v_a_446_) == 0)
{
lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_504_; 
lean_del_object(v___x_448_);
v_isSharedCheck_504_ = !lean_is_exclusive(v_a_446_);
if (v_isSharedCheck_504_ == 0)
{
lean_object* v_unused_505_; 
v_unused_505_ = lean_ctor_get(v_a_446_, 0);
lean_dec(v_unused_505_);
v___x_451_ = v_a_446_;
v_isShared_452_ = v_isSharedCheck_504_;
goto v_resetjp_450_;
}
else
{
lean_dec(v_a_446_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_504_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
lean_object* v___x_453_; lean_object* v_mctx_454_; lean_object* v_cache_455_; lean_object* v_zetaDeltaFVarIds_456_; lean_object* v_postponed_457_; lean_object* v_diag_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_502_; 
v___x_453_ = lean_st_ref_take(v_a_409_);
v_mctx_454_ = lean_ctor_get(v___x_425_, 0);
lean_inc_ref(v_mctx_454_);
lean_dec(v___x_425_);
v_cache_455_ = lean_ctor_get(v___x_453_, 1);
v_zetaDeltaFVarIds_456_ = lean_ctor_get(v___x_453_, 2);
v_postponed_457_ = lean_ctor_get(v___x_453_, 3);
v_diag_458_ = lean_ctor_get(v___x_453_, 4);
v_isSharedCheck_502_ = !lean_is_exclusive(v___x_453_);
if (v_isSharedCheck_502_ == 0)
{
lean_object* v_unused_503_; 
v_unused_503_ = lean_ctor_get(v___x_453_, 0);
lean_dec(v_unused_503_);
v___x_460_ = v___x_453_;
v_isShared_461_ = v_isSharedCheck_502_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_diag_458_);
lean_inc(v_postponed_457_);
lean_inc(v_zetaDeltaFVarIds_456_);
lean_inc(v_cache_455_);
lean_dec(v___x_453_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_502_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_463_; 
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 0, v_mctx_454_);
v___x_463_ = v___x_460_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_mctx_454_);
lean_ctor_set(v_reuseFailAlloc_501_, 1, v_cache_455_);
lean_ctor_set(v_reuseFailAlloc_501_, 2, v_zetaDeltaFVarIds_456_);
lean_ctor_set(v_reuseFailAlloc_501_, 3, v_postponed_457_);
lean_ctor_set(v_reuseFailAlloc_501_, 4, v_diag_458_);
v___x_463_ = v_reuseFailAlloc_501_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
lean_object* v___x_464_; 
v___x_464_ = lean_st_ref_set(v_a_409_, v___x_463_);
if (v_silent_424_ == 0)
{
lean_object* v_mvarId_465_; lean_object* v___x_466_; lean_object* v___x_468_; 
v_mvarId_465_ = lean_ctor_get(v_a_427_, 1);
v___x_466_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__1);
lean_inc(v_mvarId_465_);
if (v_isShared_452_ == 0)
{
lean_ctor_set_tag(v___x_451_, 1);
lean_ctor_set(v___x_451_, 0, v_mvarId_465_);
v___x_468_ = v___x_451_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_mvarId_465_);
v___x_468_ = v_reuseFailAlloc_500_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_469_ = l_Lean_indentD(v___x_468_);
v___x_470_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_470_, 0, v___x_466_);
lean_ctor_set(v___x_470_, 1, v___x_469_);
v___x_471_ = lean_alloc_closure((void*)(l_Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0___boxed), 13, 1);
lean_closure_set(v___x_471_, 0, v___x_470_);
lean_inc(v_mvarId_465_);
v___x_472_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__1___redArg(v_mvarId_465_, v___x_471_, v_a_401_, v_a_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_);
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v___x_473_; lean_object* v_specBackwardRuleCache_474_; lean_object* v_splitBackwardRuleCache_475_; lean_object* v_logicBackwardRuleCache_476_; lean_object* v_invariants_477_; lean_object* v_vcs_478_; lean_object* v_simpState_479_; lean_object* v_jps_480_; lean_object* v_fuel_481_; lean_object* v_inlineHandledInvariants_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_491_; 
lean_dec_ref_known(v___x_472_, 1);
v___x_473_ = lean_st_ref_take(v_a_402_);
v_specBackwardRuleCache_474_ = lean_ctor_get(v___x_473_, 0);
v_splitBackwardRuleCache_475_ = lean_ctor_get(v___x_473_, 1);
v_logicBackwardRuleCache_476_ = lean_ctor_get(v___x_473_, 2);
v_invariants_477_ = lean_ctor_get(v___x_473_, 3);
v_vcs_478_ = lean_ctor_get(v___x_473_, 4);
v_simpState_479_ = lean_ctor_get(v___x_473_, 5);
v_jps_480_ = lean_ctor_get(v___x_473_, 6);
v_fuel_481_ = lean_ctor_get(v___x_473_, 7);
v_inlineHandledInvariants_482_ = lean_ctor_get(v___x_473_, 8);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_491_ == 0)
{
v___x_484_ = v___x_473_;
v_isShared_485_ = v_isSharedCheck_491_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_inlineHandledInvariants_482_);
lean_inc(v_fuel_481_);
lean_inc(v_jps_480_);
lean_inc(v_simpState_479_);
lean_inc(v_vcs_478_);
lean_inc(v_invariants_477_);
lean_inc(v_logicBackwardRuleCache_476_);
lean_inc(v_splitBackwardRuleCache_475_);
lean_inc(v_specBackwardRuleCache_474_);
lean_dec(v___x_473_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_491_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
uint8_t v___x_486_; lean_object* v___x_488_; 
v___x_486_ = 1;
if (v_isShared_485_ == 0)
{
v___x_488_ = v___x_484_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_specBackwardRuleCache_474_);
lean_ctor_set(v_reuseFailAlloc_490_, 1, v_splitBackwardRuleCache_475_);
lean_ctor_set(v_reuseFailAlloc_490_, 2, v_logicBackwardRuleCache_476_);
lean_ctor_set(v_reuseFailAlloc_490_, 3, v_invariants_477_);
lean_ctor_set(v_reuseFailAlloc_490_, 4, v_vcs_478_);
lean_ctor_set(v_reuseFailAlloc_490_, 5, v_simpState_479_);
lean_ctor_set(v_reuseFailAlloc_490_, 6, v_jps_480_);
lean_ctor_set(v_reuseFailAlloc_490_, 7, v_fuel_481_);
lean_ctor_set(v_reuseFailAlloc_490_, 8, v_inlineHandledInvariants_482_);
v___x_488_ = v_reuseFailAlloc_490_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
lean_object* v___x_489_; 
lean_ctor_set_uint8(v___x_488_, sizeof(void*)*9, v___x_486_);
v___x_489_ = lean_st_ref_set(v_a_402_, v___x_488_);
goto v___jp_431_;
}
}
}
else
{
lean_object* v_a_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_499_; 
lean_del_object(v___x_429_);
lean_dec(v_a_427_);
v_a_492_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_499_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_499_ == 0)
{
v___x_494_ = v___x_472_;
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_a_492_);
lean_dec(v___x_472_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_497_; 
if (v_isShared_495_ == 0)
{
v___x_497_ = v___x_494_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v_a_492_);
v___x_497_ = v_reuseFailAlloc_498_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
return v___x_497_;
}
}
}
}
}
else
{
lean_del_object(v___x_451_);
goto v___jp_431_;
}
}
}
}
}
else
{
lean_object* v___x_506_; lean_object* v___x_508_; 
lean_del_object(v___x_429_);
lean_dec(v_a_427_);
lean_dec(v___x_425_);
v___x_506_ = lean_box(0);
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 0, v___x_506_);
v___x_508_ = v___x_448_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v___x_506_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
}
else
{
lean_object* v_a_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_518_; 
lean_del_object(v___x_429_);
lean_dec(v_a_427_);
lean_dec(v___x_425_);
v_a_511_ = lean_ctor_get(v___x_445_, 0);
v_isSharedCheck_518_ = !lean_is_exclusive(v___x_445_);
if (v_isSharedCheck_518_ == 0)
{
v___x_513_ = v___x_445_;
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_a_511_);
lean_dec(v___x_445_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_516_; 
if (v_isShared_514_ == 0)
{
v___x_516_ = v___x_513_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_a_511_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
}
v___jp_431_:
{
lean_object* v_mvarId_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_443_; 
v_mvarId_432_ = lean_ctor_get(v_a_427_, 1);
v_isSharedCheck_443_ = !lean_is_exclusive(v_a_427_);
if (v_isSharedCheck_443_ == 0)
{
lean_object* v_unused_444_; 
v_unused_444_ = lean_ctor_get(v_a_427_, 0);
lean_dec(v_unused_444_);
v___x_434_ = v_a_427_;
v_isShared_435_ = v_isSharedCheck_443_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_mvarId_432_);
lean_dec(v_a_427_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_443_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_436_; lean_object* v___x_438_; 
v___x_436_ = lean_box(0);
if (v_isShared_435_ == 0)
{
lean_ctor_set_tag(v___x_434_, 1);
lean_ctor_set(v___x_434_, 1, v___x_436_);
lean_ctor_set(v___x_434_, 0, v_mvarId_432_);
v___x_438_ = v___x_434_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_mvarId_432_);
lean_ctor_set(v_reuseFailAlloc_442_, 1, v___x_436_);
v___x_438_ = v_reuseFailAlloc_442_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
lean_object* v___x_440_; 
if (v_isShared_430_ == 0)
{
lean_ctor_set(v___x_429_, 0, v___x_438_);
v___x_440_ = v___x_429_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v___x_438_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
return v___x_440_;
}
}
}
}
}
}
else
{
lean_object* v_a_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_527_; 
lean_dec(v___x_425_);
v_a_520_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_527_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_527_ == 0)
{
v___x_522_ = v___x_426_;
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_a_520_);
lean_dec(v___x_426_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
lean_object* v___x_525_; 
if (v_isShared_523_ == 0)
{
v___x_525_ = v___x_522_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v_a_520_);
v___x_525_ = v_reuseFailAlloc_526_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
return v___x_525_;
}
}
}
}
default: 
{
lean_object* v_tactic_528_; lean_object* v_mvarId_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v_tactic_528_ = lean_ctor_get(v_x_400_, 0);
lean_inc(v_tactic_528_);
lean_dec_ref_known(v_x_400_, 1);
v_mvarId_529_ = lean_ctor_get(v_goal_399_, 1);
lean_inc(v_mvarId_529_);
lean_dec_ref(v_goal_399_);
v___x_530_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__4));
v___x_531_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__5));
v___x_532_ = l_Lean_Elab_runTactic(v_mvarId_529_, v_tactic_528_, v___x_530_, v___x_531_, v_a_408_, v_a_409_, v_a_410_, v_a_411_);
if (lean_obj_tag(v___x_532_) == 0)
{
lean_object* v_a_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_541_; 
v_a_533_ = lean_ctor_get(v___x_532_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_541_ == 0)
{
v___x_535_ = v___x_532_;
v_isShared_536_ = v_isSharedCheck_541_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_a_533_);
lean_dec(v___x_532_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_541_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v_fst_537_; lean_object* v___x_539_; 
v_fst_537_ = lean_ctor_get(v_a_533_, 0);
lean_inc(v_fst_537_);
lean_dec(v_a_533_);
if (v_isShared_536_ == 0)
{
lean_ctor_set(v___x_535_, 0, v_fst_537_);
v___x_539_ = v___x_535_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_fst_537_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
}
else
{
lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_549_; 
v_a_542_ = lean_ctor_get(v___x_532_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_549_ == 0)
{
v___x_544_ = v___x_532_;
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_dec(v___x_532_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_547_; 
if (v_isShared_545_ == 0)
{
v___x_547_ = v___x_544_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_a_542_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___boxed(lean_object* v_goal_550_, lean_object* v_x_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v_a_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run(v_goal_550_, v_x_551_, v_a_552_, v_a_553_, v_a_554_, v_a_555_, v_a_556_, v_a_557_, v_a_558_, v_a_559_, v_a_560_, v_a_561_, v_a_562_);
lean_dec(v_a_562_);
lean_dec_ref(v_a_561_);
lean_dec(v_a_560_);
lean_dec_ref(v_a_559_);
lean_dec(v_a_558_);
lean_dec_ref(v_a_557_);
lean_dec(v_a_556_);
lean_dec_ref(v_a_555_);
lean_dec(v_a_554_);
lean_dec(v_a_553_);
lean_dec_ref(v_a_552_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2(lean_object* v_ref_565_, lean_object* v_msgData_566_, uint8_t v_severity_567_, uint8_t v_isSilent_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_){
_start:
{
lean_object* v___x_581_; 
v___x_581_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___redArg(v_ref_565_, v_msgData_566_, v_severity_567_, v_isSilent_568_, v___y_576_, v___y_577_, v___y_578_, v___y_579_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2___boxed(lean_object* v_ref_582_, lean_object* v_msgData_583_, lean_object* v_severity_584_, lean_object* v_isSilent_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_){
_start:
{
uint8_t v_severity_boxed_598_; uint8_t v_isSilent_boxed_599_; lean_object* v_res_600_; 
v_severity_boxed_598_ = lean_unbox(v_severity_584_);
v_isSilent_boxed_599_ = lean_unbox(v_isSilent_585_);
v_res_600_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2(v_ref_582_, v_msgData_583_, v_severity_boxed_598_, v_isSilent_boxed_599_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_);
lean_dec(v___y_596_);
lean_dec_ref(v___y_595_);
lean_dec(v___y_594_);
lean_dec_ref(v___y_593_);
lean_dec(v___y_592_);
lean_dec_ref(v___y_591_);
lean_dec(v___y_590_);
lean_dec_ref(v___y_589_);
lean_dec(v___y_588_);
lean_dec(v___y_587_);
lean_dec_ref(v___y_586_);
lean_dec(v_ref_582_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__1___redArg(lean_object* v_mvarId_601_, lean_object* v___y_602_){
_start:
{
lean_object* v___x_604_; lean_object* v_mctx_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_604_ = lean_st_ref_get(v___y_602_);
v_mctx_605_ = lean_ctor_get(v___x_604_, 0);
lean_inc_ref(v_mctx_605_);
lean_dec(v___x_604_);
v___x_606_ = l_Lean_MetavarContext_getExprAssignmentCore_x3f(v_mctx_605_, v_mvarId_601_);
lean_dec_ref(v_mctx_605_);
v___x_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_607_, 0, v___x_606_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__1___redArg___boxed(lean_object* v_mvarId_608_, lean_object* v___y_609_, lean_object* v___y_610_){
_start:
{
lean_object* v_res_611_; 
v_res_611_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__1___redArg(v_mvarId_608_, v___y_609_);
lean_dec(v___y_609_);
lean_dec(v_mvarId_608_);
return v_res_611_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__1(lean_object* v_mvarId_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_){
_start:
{
lean_object* v___x_625_; 
v___x_625_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__1___redArg(v_mvarId_612_, v___y_621_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__1___boxed(lean_object* v_mvarId_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__1(v_mvarId_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_);
lean_dec(v___y_637_);
lean_dec_ref(v___y_636_);
lean_dec(v___y_635_);
lean_dec_ref(v___y_634_);
lean_dec(v___y_633_);
lean_dec_ref(v___y_632_);
lean_dec(v___y_631_);
lean_dec_ref(v___y_630_);
lean_dec(v___y_629_);
lean_dec(v___y_628_);
lean_dec_ref(v___y_627_);
lean_dec(v_mvarId_626_);
return v_res_639_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2_spec__5___redArg(lean_object* v_keys_640_, lean_object* v_i_641_, lean_object* v_k_642_){
_start:
{
lean_object* v___x_643_; uint8_t v___x_644_; 
v___x_643_ = lean_array_get_size(v_keys_640_);
v___x_644_ = lean_nat_dec_lt(v_i_641_, v___x_643_);
if (v___x_644_ == 0)
{
lean_dec(v_i_641_);
return v___x_644_;
}
else
{
lean_object* v_k_x27_645_; uint8_t v___x_646_; 
v_k_x27_645_ = lean_array_fget_borrowed(v_keys_640_, v_i_641_);
v___x_646_ = l_Lean_instBEqMVarId_beq(v_k_642_, v_k_x27_645_);
if (v___x_646_ == 0)
{
lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_647_ = lean_unsigned_to_nat(1u);
v___x_648_ = lean_nat_add(v_i_641_, v___x_647_);
lean_dec(v_i_641_);
v_i_641_ = v___x_648_;
goto _start;
}
else
{
lean_dec(v_i_641_);
return v___x_646_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_keys_650_, lean_object* v_i_651_, lean_object* v_k_652_){
_start:
{
uint8_t v_res_653_; lean_object* v_r_654_; 
v_res_653_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2_spec__5___redArg(v_keys_650_, v_i_651_, v_k_652_);
lean_dec(v_k_652_);
lean_dec_ref(v_keys_650_);
v_r_654_ = lean_box(v_res_653_);
return v_r_654_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
size_t v___x_655_; size_t v___x_656_; size_t v___x_657_; 
v___x_655_ = ((size_t)5ULL);
v___x_656_ = ((size_t)1ULL);
v___x_657_ = lean_usize_shift_left(v___x_656_, v___x_655_);
return v___x_657_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___redArg___closed__1(void){
_start:
{
size_t v___x_658_; size_t v___x_659_; size_t v___x_660_; 
v___x_658_ = ((size_t)1ULL);
v___x_659_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___redArg___closed__0);
v___x_660_ = lean_usize_sub(v___x_659_, v___x_658_);
return v___x_660_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___redArg(lean_object* v_x_661_, size_t v_x_662_, lean_object* v_x_663_){
_start:
{
if (lean_obj_tag(v_x_661_) == 0)
{
lean_object* v_es_664_; lean_object* v___x_665_; size_t v___x_666_; size_t v___x_667_; size_t v___x_668_; lean_object* v_j_669_; lean_object* v___x_670_; 
v_es_664_ = lean_ctor_get(v_x_661_, 0);
v___x_665_ = lean_box(2);
v___x_666_ = ((size_t)5ULL);
v___x_667_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___redArg___closed__1);
v___x_668_ = lean_usize_land(v_x_662_, v___x_667_);
v_j_669_ = lean_usize_to_nat(v___x_668_);
v___x_670_ = lean_array_get_borrowed(v___x_665_, v_es_664_, v_j_669_);
lean_dec(v_j_669_);
switch(lean_obj_tag(v___x_670_))
{
case 0:
{
lean_object* v_key_671_; uint8_t v___x_672_; 
v_key_671_ = lean_ctor_get(v___x_670_, 0);
v___x_672_ = l_Lean_instBEqMVarId_beq(v_x_663_, v_key_671_);
return v___x_672_;
}
case 1:
{
lean_object* v_node_673_; size_t v___x_674_; 
v_node_673_ = lean_ctor_get(v___x_670_, 0);
v___x_674_ = lean_usize_shift_right(v_x_662_, v___x_666_);
v_x_661_ = v_node_673_;
v_x_662_ = v___x_674_;
goto _start;
}
default: 
{
uint8_t v___x_676_; 
v___x_676_ = 0;
return v___x_676_;
}
}
}
else
{
lean_object* v_ks_677_; lean_object* v___x_678_; uint8_t v___x_679_; 
v_ks_677_ = lean_ctor_get(v_x_661_, 0);
v___x_678_ = lean_unsigned_to_nat(0u);
v___x_679_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2_spec__5___redArg(v_ks_677_, v___x_678_, v_x_663_);
return v___x_679_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_x_680_, lean_object* v_x_681_, lean_object* v_x_682_){
_start:
{
size_t v_x_48391__boxed_683_; uint8_t v_res_684_; lean_object* v_r_685_; 
v_x_48391__boxed_683_ = lean_unbox_usize(v_x_681_);
lean_dec(v_x_681_);
v_res_684_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___redArg(v_x_680_, v_x_48391__boxed_683_, v_x_682_);
lean_dec(v_x_682_);
lean_dec_ref(v_x_680_);
v_r_685_ = lean_box(v_res_684_);
return v_r_685_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0___redArg(lean_object* v_x_686_, lean_object* v_x_687_){
_start:
{
uint64_t v___x_688_; size_t v___x_689_; uint8_t v___x_690_; 
v___x_688_ = l_Lean_instHashableMVarId_hash(v_x_687_);
v___x_689_ = lean_uint64_to_usize(v___x_688_);
v___x_690_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___redArg(v_x_686_, v___x_689_, v_x_687_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0___redArg___boxed(lean_object* v_x_691_, lean_object* v_x_692_){
_start:
{
uint8_t v_res_693_; lean_object* v_r_694_; 
v_res_693_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0___redArg(v_x_691_, v_x_692_);
lean_dec(v_x_692_);
lean_dec_ref(v_x_691_);
v_r_694_ = lean_box(v_res_693_);
return v_r_694_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0___redArg(lean_object* v_mvarId_695_, lean_object* v___y_696_){
_start:
{
lean_object* v___x_698_; lean_object* v_mctx_699_; lean_object* v_eAssignment_700_; uint8_t v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_698_ = lean_st_ref_get(v___y_696_);
v_mctx_699_ = lean_ctor_get(v___x_698_, 0);
lean_inc_ref(v_mctx_699_);
lean_dec(v___x_698_);
v_eAssignment_700_ = lean_ctor_get(v_mctx_699_, 8);
lean_inc_ref(v_eAssignment_700_);
lean_dec_ref(v_mctx_699_);
v___x_701_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0___redArg(v_eAssignment_700_, v_mvarId_695_);
lean_dec_ref(v_eAssignment_700_);
v___x_702_ = lean_box(v___x_701_);
v___x_703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_703_, 0, v___x_702_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0___redArg___boxed(lean_object* v_mvarId_704_, lean_object* v___y_705_, lean_object* v___y_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0___redArg(v_mvarId_704_, v___y_705_);
lean_dec(v___y_705_);
lean_dec(v_mvarId_704_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__8_spec__10___redArg(lean_object* v_x_708_, lean_object* v_x_709_, lean_object* v_x_710_, lean_object* v_x_711_){
_start:
{
lean_object* v_ks_712_; lean_object* v_vs_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_737_; 
v_ks_712_ = lean_ctor_get(v_x_708_, 0);
v_vs_713_ = lean_ctor_get(v_x_708_, 1);
v_isSharedCheck_737_ = !lean_is_exclusive(v_x_708_);
if (v_isSharedCheck_737_ == 0)
{
v___x_715_ = v_x_708_;
v_isShared_716_ = v_isSharedCheck_737_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_vs_713_);
lean_inc(v_ks_712_);
lean_dec(v_x_708_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_737_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___x_717_; uint8_t v___x_718_; 
v___x_717_ = lean_array_get_size(v_ks_712_);
v___x_718_ = lean_nat_dec_lt(v_x_709_, v___x_717_);
if (v___x_718_ == 0)
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_722_; 
lean_dec(v_x_709_);
v___x_719_ = lean_array_push(v_ks_712_, v_x_710_);
v___x_720_ = lean_array_push(v_vs_713_, v_x_711_);
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 1, v___x_720_);
lean_ctor_set(v___x_715_, 0, v___x_719_);
v___x_722_ = v___x_715_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v___x_719_);
lean_ctor_set(v_reuseFailAlloc_723_, 1, v___x_720_);
v___x_722_ = v_reuseFailAlloc_723_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
return v___x_722_;
}
}
else
{
lean_object* v_k_x27_724_; uint8_t v___x_725_; 
v_k_x27_724_ = lean_array_fget_borrowed(v_ks_712_, v_x_709_);
v___x_725_ = l_Lean_instBEqMVarId_beq(v_x_710_, v_k_x27_724_);
if (v___x_725_ == 0)
{
lean_object* v___x_727_; 
if (v_isShared_716_ == 0)
{
v___x_727_ = v___x_715_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_ks_712_);
lean_ctor_set(v_reuseFailAlloc_731_, 1, v_vs_713_);
v___x_727_ = v_reuseFailAlloc_731_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_728_ = lean_unsigned_to_nat(1u);
v___x_729_ = lean_nat_add(v_x_709_, v___x_728_);
lean_dec(v_x_709_);
v_x_708_ = v___x_727_;
v_x_709_ = v___x_729_;
goto _start;
}
}
else
{
lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_735_; 
v___x_732_ = lean_array_fset(v_ks_712_, v_x_709_, v_x_710_);
v___x_733_ = lean_array_fset(v_vs_713_, v_x_709_, v_x_711_);
lean_dec(v_x_709_);
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 1, v___x_733_);
lean_ctor_set(v___x_715_, 0, v___x_732_);
v___x_735_ = v___x_715_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v___x_732_);
lean_ctor_set(v_reuseFailAlloc_736_, 1, v___x_733_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__8___redArg(lean_object* v_n_738_, lean_object* v_k_739_, lean_object* v_v_740_){
_start:
{
lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_741_ = lean_unsigned_to_nat(0u);
v___x_742_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__8_spec__10___redArg(v_n_738_, v___x_741_, v_k_739_, v_v_740_);
return v___x_742_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_743_; 
v___x_743_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5___redArg(lean_object* v_x_744_, size_t v_x_745_, size_t v_x_746_, lean_object* v_x_747_, lean_object* v_x_748_){
_start:
{
if (lean_obj_tag(v_x_744_) == 0)
{
lean_object* v_es_749_; size_t v___x_750_; size_t v___x_751_; size_t v___x_752_; size_t v___x_753_; lean_object* v_j_754_; lean_object* v___x_755_; uint8_t v___x_756_; 
v_es_749_ = lean_ctor_get(v_x_744_, 0);
v___x_750_ = ((size_t)5ULL);
v___x_751_ = ((size_t)1ULL);
v___x_752_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___redArg___closed__1);
v___x_753_ = lean_usize_land(v_x_745_, v___x_752_);
v_j_754_ = lean_usize_to_nat(v___x_753_);
v___x_755_ = lean_array_get_size(v_es_749_);
v___x_756_ = lean_nat_dec_lt(v_j_754_, v___x_755_);
if (v___x_756_ == 0)
{
lean_dec(v_j_754_);
lean_dec(v_x_748_);
lean_dec(v_x_747_);
return v_x_744_;
}
else
{
lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_793_; 
lean_inc_ref(v_es_749_);
v_isSharedCheck_793_ = !lean_is_exclusive(v_x_744_);
if (v_isSharedCheck_793_ == 0)
{
lean_object* v_unused_794_; 
v_unused_794_ = lean_ctor_get(v_x_744_, 0);
lean_dec(v_unused_794_);
v___x_758_ = v_x_744_;
v_isShared_759_ = v_isSharedCheck_793_;
goto v_resetjp_757_;
}
else
{
lean_dec(v_x_744_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_793_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v_v_760_; lean_object* v___x_761_; lean_object* v_xs_x27_762_; lean_object* v___y_764_; 
v_v_760_ = lean_array_fget(v_es_749_, v_j_754_);
v___x_761_ = lean_box(0);
v_xs_x27_762_ = lean_array_fset(v_es_749_, v_j_754_, v___x_761_);
switch(lean_obj_tag(v_v_760_))
{
case 0:
{
lean_object* v_key_769_; lean_object* v_val_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_780_; 
v_key_769_ = lean_ctor_get(v_v_760_, 0);
v_val_770_ = lean_ctor_get(v_v_760_, 1);
v_isSharedCheck_780_ = !lean_is_exclusive(v_v_760_);
if (v_isSharedCheck_780_ == 0)
{
v___x_772_ = v_v_760_;
v_isShared_773_ = v_isSharedCheck_780_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_val_770_);
lean_inc(v_key_769_);
lean_dec(v_v_760_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_780_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
uint8_t v___x_774_; 
v___x_774_ = l_Lean_instBEqMVarId_beq(v_x_747_, v_key_769_);
if (v___x_774_ == 0)
{
lean_object* v___x_775_; lean_object* v___x_776_; 
lean_del_object(v___x_772_);
v___x_775_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_769_, v_val_770_, v_x_747_, v_x_748_);
v___x_776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_776_, 0, v___x_775_);
v___y_764_ = v___x_776_;
goto v___jp_763_;
}
else
{
lean_object* v___x_778_; 
lean_dec(v_val_770_);
lean_dec(v_key_769_);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 1, v_x_748_);
lean_ctor_set(v___x_772_, 0, v_x_747_);
v___x_778_ = v___x_772_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_x_747_);
lean_ctor_set(v_reuseFailAlloc_779_, 1, v_x_748_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
v___y_764_ = v___x_778_;
goto v___jp_763_;
}
}
}
}
case 1:
{
lean_object* v_node_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_791_; 
v_node_781_ = lean_ctor_get(v_v_760_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v_v_760_);
if (v_isSharedCheck_791_ == 0)
{
v___x_783_ = v_v_760_;
v_isShared_784_ = v_isSharedCheck_791_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_node_781_);
lean_dec(v_v_760_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_791_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
size_t v___x_785_; size_t v___x_786_; lean_object* v___x_787_; lean_object* v___x_789_; 
v___x_785_ = lean_usize_shift_right(v_x_745_, v___x_750_);
v___x_786_ = lean_usize_add(v_x_746_, v___x_751_);
v___x_787_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5___redArg(v_node_781_, v___x_785_, v___x_786_, v_x_747_, v_x_748_);
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 0, v___x_787_);
v___x_789_ = v___x_783_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v___x_787_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
v___y_764_ = v___x_789_;
goto v___jp_763_;
}
}
}
default: 
{
lean_object* v___x_792_; 
v___x_792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_792_, 0, v_x_747_);
lean_ctor_set(v___x_792_, 1, v_x_748_);
v___y_764_ = v___x_792_;
goto v___jp_763_;
}
}
v___jp_763_:
{
lean_object* v___x_765_; lean_object* v___x_767_; 
v___x_765_ = lean_array_fset(v_xs_x27_762_, v_j_754_, v___y_764_);
lean_dec(v_j_754_);
if (v_isShared_759_ == 0)
{
lean_ctor_set(v___x_758_, 0, v___x_765_);
v___x_767_ = v___x_758_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v___x_765_);
v___x_767_ = v_reuseFailAlloc_768_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
return v___x_767_;
}
}
}
}
}
else
{
lean_object* v_ks_795_; lean_object* v_vs_796_; lean_object* v___x_798_; uint8_t v_isShared_799_; uint8_t v_isSharedCheck_816_; 
v_ks_795_ = lean_ctor_get(v_x_744_, 0);
v_vs_796_ = lean_ctor_get(v_x_744_, 1);
v_isSharedCheck_816_ = !lean_is_exclusive(v_x_744_);
if (v_isSharedCheck_816_ == 0)
{
v___x_798_ = v_x_744_;
v_isShared_799_ = v_isSharedCheck_816_;
goto v_resetjp_797_;
}
else
{
lean_inc(v_vs_796_);
lean_inc(v_ks_795_);
lean_dec(v_x_744_);
v___x_798_ = lean_box(0);
v_isShared_799_ = v_isSharedCheck_816_;
goto v_resetjp_797_;
}
v_resetjp_797_:
{
lean_object* v___x_801_; 
if (v_isShared_799_ == 0)
{
v___x_801_ = v___x_798_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v_ks_795_);
lean_ctor_set(v_reuseFailAlloc_815_, 1, v_vs_796_);
v___x_801_ = v_reuseFailAlloc_815_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
lean_object* v_newNode_802_; uint8_t v___y_804_; size_t v___x_810_; uint8_t v___x_811_; 
v_newNode_802_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__8___redArg(v___x_801_, v_x_747_, v_x_748_);
v___x_810_ = ((size_t)7ULL);
v___x_811_ = lean_usize_dec_le(v___x_810_, v_x_746_);
if (v___x_811_ == 0)
{
lean_object* v___x_812_; lean_object* v___x_813_; uint8_t v___x_814_; 
v___x_812_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_802_);
v___x_813_ = lean_unsigned_to_nat(4u);
v___x_814_ = lean_nat_dec_lt(v___x_812_, v___x_813_);
lean_dec(v___x_812_);
v___y_804_ = v___x_814_;
goto v___jp_803_;
}
else
{
v___y_804_ = v___x_811_;
goto v___jp_803_;
}
v___jp_803_:
{
if (v___y_804_ == 0)
{
lean_object* v_ks_805_; lean_object* v_vs_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
v_ks_805_ = lean_ctor_get(v_newNode_802_, 0);
lean_inc_ref(v_ks_805_);
v_vs_806_ = lean_ctor_get(v_newNode_802_, 1);
lean_inc_ref(v_vs_806_);
lean_dec_ref(v_newNode_802_);
v___x_807_ = lean_unsigned_to_nat(0u);
v___x_808_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5___redArg___closed__0);
v___x_809_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__9___redArg(v_x_746_, v_ks_805_, v_vs_806_, v___x_807_, v___x_808_);
lean_dec_ref(v_vs_806_);
lean_dec_ref(v_ks_805_);
return v___x_809_;
}
else
{
return v_newNode_802_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__9___redArg(size_t v_depth_817_, lean_object* v_keys_818_, lean_object* v_vals_819_, lean_object* v_i_820_, lean_object* v_entries_821_){
_start:
{
lean_object* v___x_822_; uint8_t v___x_823_; 
v___x_822_ = lean_array_get_size(v_keys_818_);
v___x_823_ = lean_nat_dec_lt(v_i_820_, v___x_822_);
if (v___x_823_ == 0)
{
lean_dec(v_i_820_);
return v_entries_821_;
}
else
{
lean_object* v_k_824_; lean_object* v_v_825_; uint64_t v___x_826_; size_t v_h_827_; size_t v___x_828_; lean_object* v___x_829_; size_t v___x_830_; size_t v___x_831_; size_t v___x_832_; size_t v_h_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v_k_824_ = lean_array_fget_borrowed(v_keys_818_, v_i_820_);
v_v_825_ = lean_array_fget_borrowed(v_vals_819_, v_i_820_);
v___x_826_ = l_Lean_instHashableMVarId_hash(v_k_824_);
v_h_827_ = lean_uint64_to_usize(v___x_826_);
v___x_828_ = ((size_t)5ULL);
v___x_829_ = lean_unsigned_to_nat(1u);
v___x_830_ = ((size_t)1ULL);
v___x_831_ = lean_usize_sub(v_depth_817_, v___x_830_);
v___x_832_ = lean_usize_mul(v___x_828_, v___x_831_);
v_h_833_ = lean_usize_shift_right(v_h_827_, v___x_832_);
v___x_834_ = lean_nat_add(v_i_820_, v___x_829_);
lean_dec(v_i_820_);
lean_inc(v_v_825_);
lean_inc(v_k_824_);
v___x_835_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5___redArg(v_entries_821_, v_h_833_, v_depth_817_, v_k_824_, v_v_825_);
v_i_820_ = v___x_834_;
v_entries_821_ = v___x_835_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__9___redArg___boxed(lean_object* v_depth_837_, lean_object* v_keys_838_, lean_object* v_vals_839_, lean_object* v_i_840_, lean_object* v_entries_841_){
_start:
{
size_t v_depth_boxed_842_; lean_object* v_res_843_; 
v_depth_boxed_842_ = lean_unbox_usize(v_depth_837_);
lean_dec(v_depth_837_);
v_res_843_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__9___redArg(v_depth_boxed_842_, v_keys_838_, v_vals_839_, v_i_840_, v_entries_841_);
lean_dec_ref(v_vals_839_);
lean_dec_ref(v_keys_838_);
return v_res_843_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v_x_844_, lean_object* v_x_845_, lean_object* v_x_846_, lean_object* v_x_847_, lean_object* v_x_848_){
_start:
{
size_t v_x_48546__boxed_849_; size_t v_x_48547__boxed_850_; lean_object* v_res_851_; 
v_x_48546__boxed_849_ = lean_unbox_usize(v_x_845_);
lean_dec(v_x_845_);
v_x_48547__boxed_850_ = lean_unbox_usize(v_x_846_);
lean_dec(v_x_846_);
v_res_851_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5___redArg(v_x_844_, v_x_48546__boxed_849_, v_x_48547__boxed_850_, v_x_847_, v_x_848_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3___redArg(lean_object* v_x_852_, lean_object* v_x_853_, lean_object* v_x_854_){
_start:
{
uint64_t v___x_855_; size_t v___x_856_; size_t v___x_857_; lean_object* v___x_858_; 
v___x_855_ = l_Lean_instHashableMVarId_hash(v_x_853_);
v___x_856_ = lean_uint64_to_usize(v___x_855_);
v___x_857_ = ((size_t)1ULL);
v___x_858_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5___redArg(v_x_852_, v___x_856_, v___x_857_, v_x_853_, v_x_854_);
return v___x_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2___redArg(lean_object* v_mvarId_859_, lean_object* v_val_860_, lean_object* v___y_861_){
_start:
{
lean_object* v___x_863_; lean_object* v_mctx_864_; lean_object* v_cache_865_; lean_object* v_zetaDeltaFVarIds_866_; lean_object* v_postponed_867_; lean_object* v_diag_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_896_; 
v___x_863_ = lean_st_ref_take(v___y_861_);
v_mctx_864_ = lean_ctor_get(v___x_863_, 0);
v_cache_865_ = lean_ctor_get(v___x_863_, 1);
v_zetaDeltaFVarIds_866_ = lean_ctor_get(v___x_863_, 2);
v_postponed_867_ = lean_ctor_get(v___x_863_, 3);
v_diag_868_ = lean_ctor_get(v___x_863_, 4);
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_896_ == 0)
{
v___x_870_ = v___x_863_;
v_isShared_871_ = v_isSharedCheck_896_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_diag_868_);
lean_inc(v_postponed_867_);
lean_inc(v_zetaDeltaFVarIds_866_);
lean_inc(v_cache_865_);
lean_inc(v_mctx_864_);
lean_dec(v___x_863_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_896_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v_depth_872_; lean_object* v_levelAssignDepth_873_; lean_object* v_lmvarCounter_874_; lean_object* v_mvarCounter_875_; lean_object* v_lDecls_876_; lean_object* v_decls_877_; lean_object* v_userNames_878_; lean_object* v_lAssignment_879_; lean_object* v_eAssignment_880_; lean_object* v_dAssignment_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_895_; 
v_depth_872_ = lean_ctor_get(v_mctx_864_, 0);
v_levelAssignDepth_873_ = lean_ctor_get(v_mctx_864_, 1);
v_lmvarCounter_874_ = lean_ctor_get(v_mctx_864_, 2);
v_mvarCounter_875_ = lean_ctor_get(v_mctx_864_, 3);
v_lDecls_876_ = lean_ctor_get(v_mctx_864_, 4);
v_decls_877_ = lean_ctor_get(v_mctx_864_, 5);
v_userNames_878_ = lean_ctor_get(v_mctx_864_, 6);
v_lAssignment_879_ = lean_ctor_get(v_mctx_864_, 7);
v_eAssignment_880_ = lean_ctor_get(v_mctx_864_, 8);
v_dAssignment_881_ = lean_ctor_get(v_mctx_864_, 9);
v_isSharedCheck_895_ = !lean_is_exclusive(v_mctx_864_);
if (v_isSharedCheck_895_ == 0)
{
v___x_883_ = v_mctx_864_;
v_isShared_884_ = v_isSharedCheck_895_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_dAssignment_881_);
lean_inc(v_eAssignment_880_);
lean_inc(v_lAssignment_879_);
lean_inc(v_userNames_878_);
lean_inc(v_decls_877_);
lean_inc(v_lDecls_876_);
lean_inc(v_mvarCounter_875_);
lean_inc(v_lmvarCounter_874_);
lean_inc(v_levelAssignDepth_873_);
lean_inc(v_depth_872_);
lean_dec(v_mctx_864_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_895_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_885_; lean_object* v___x_887_; 
v___x_885_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3___redArg(v_eAssignment_880_, v_mvarId_859_, v_val_860_);
if (v_isShared_884_ == 0)
{
lean_ctor_set(v___x_883_, 8, v___x_885_);
v___x_887_ = v___x_883_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v_depth_872_);
lean_ctor_set(v_reuseFailAlloc_894_, 1, v_levelAssignDepth_873_);
lean_ctor_set(v_reuseFailAlloc_894_, 2, v_lmvarCounter_874_);
lean_ctor_set(v_reuseFailAlloc_894_, 3, v_mvarCounter_875_);
lean_ctor_set(v_reuseFailAlloc_894_, 4, v_lDecls_876_);
lean_ctor_set(v_reuseFailAlloc_894_, 5, v_decls_877_);
lean_ctor_set(v_reuseFailAlloc_894_, 6, v_userNames_878_);
lean_ctor_set(v_reuseFailAlloc_894_, 7, v_lAssignment_879_);
lean_ctor_set(v_reuseFailAlloc_894_, 8, v___x_885_);
lean_ctor_set(v_reuseFailAlloc_894_, 9, v_dAssignment_881_);
v___x_887_ = v_reuseFailAlloc_894_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
lean_object* v___x_889_; 
if (v_isShared_871_ == 0)
{
lean_ctor_set(v___x_870_, 0, v___x_887_);
v___x_889_ = v___x_870_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v___x_887_);
lean_ctor_set(v_reuseFailAlloc_893_, 1, v_cache_865_);
lean_ctor_set(v_reuseFailAlloc_893_, 2, v_zetaDeltaFVarIds_866_);
lean_ctor_set(v_reuseFailAlloc_893_, 3, v_postponed_867_);
lean_ctor_set(v_reuseFailAlloc_893_, 4, v_diag_868_);
v___x_889_ = v_reuseFailAlloc_893_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_890_ = lean_st_ref_set(v___y_861_, v___x_889_);
v___x_891_ = lean_box(0);
v___x_892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_892_, 0, v___x_891_);
return v___x_892_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2___redArg___boxed(lean_object* v_mvarId_897_, lean_object* v_val_898_, lean_object* v___y_899_, lean_object* v___y_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2___redArg(v_mvarId_897_, v_val_898_, v___y_899_);
lean_dec(v___y_899_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___lam__1(lean_object* v___f_908_, lean_object* v_mv_909_, lean_object* v_tac_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_){
_start:
{
lean_object* v___x_923_; lean_object* v___x_924_; uint8_t v___x_925_; lean_object* v___x_929_; uint8_t v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; 
v___x_923_ = lean_box(0);
v___x_924_ = lean_box(0);
v___x_925_ = 1;
v___x_929_ = lean_box(1);
v___x_930_ = 0;
v___x_931_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__3));
v___x_932_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v___x_932_, 0, v___x_923_);
lean_ctor_set(v___x_932_, 1, v___x_924_);
lean_ctor_set(v___x_932_, 2, v___x_923_);
lean_ctor_set(v___x_932_, 3, v___f_908_);
lean_ctor_set(v___x_932_, 4, v___x_929_);
lean_ctor_set(v___x_932_, 5, v___x_929_);
lean_ctor_set(v___x_932_, 6, v___x_923_);
lean_ctor_set(v___x_932_, 7, v___x_931_);
lean_ctor_set_uint8(v___x_932_, sizeof(void*)*8, v___x_925_);
lean_ctor_set_uint8(v___x_932_, sizeof(void*)*8 + 1, v___x_925_);
lean_ctor_set_uint8(v___x_932_, sizeof(void*)*8 + 2, v___x_925_);
lean_ctor_set_uint8(v___x_932_, sizeof(void*)*8 + 3, v___x_925_);
lean_ctor_set_uint8(v___x_932_, sizeof(void*)*8 + 4, v___x_930_);
lean_ctor_set_uint8(v___x_932_, sizeof(void*)*8 + 5, v___x_930_);
lean_ctor_set_uint8(v___x_932_, sizeof(void*)*8 + 6, v___x_930_);
lean_ctor_set_uint8(v___x_932_, sizeof(void*)*8 + 7, v___x_930_);
lean_ctor_set_uint8(v___x_932_, sizeof(void*)*8 + 8, v___x_925_);
lean_ctor_set_uint8(v___x_932_, sizeof(void*)*8 + 9, v___x_930_);
lean_ctor_set_uint8(v___x_932_, sizeof(void*)*8 + 10, v___x_925_);
v___x_933_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__5));
lean_inc(v_mv_909_);
v___x_934_ = l_Lean_Elab_runTactic(v_mv_909_, v_tac_910_, v___x_932_, v___x_933_, v___y_918_, v___y_919_, v___y_920_, v___y_921_);
if (lean_obj_tag(v___x_934_) == 0)
{
lean_object* v___x_935_; lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_969_; 
lean_dec_ref_known(v___x_934_, 1);
v___x_935_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0___redArg(v_mv_909_, v___y_919_);
v_a_936_ = lean_ctor_get(v___x_935_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_969_ == 0)
{
v___x_938_ = v___x_935_;
v_isShared_939_ = v_isSharedCheck_969_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_a_936_);
lean_dec(v___x_935_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_969_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
uint8_t v___x_940_; 
v___x_940_ = lean_unbox(v_a_936_);
lean_dec(v_a_936_);
if (v___x_940_ == 0)
{
lean_object* v___x_941_; lean_object* v___x_943_; 
lean_dec(v_mv_909_);
v___x_941_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___lam__1___closed__1));
if (v_isShared_939_ == 0)
{
lean_ctor_set(v___x_938_, 0, v___x_941_);
v___x_943_ = v___x_938_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v___x_941_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
}
}
else
{
lean_object* v___x_945_; lean_object* v_a_946_; 
lean_del_object(v___x_938_);
v___x_945_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__1___redArg(v_mv_909_, v___y_919_);
v_a_946_ = lean_ctor_get(v___x_945_, 0);
lean_inc(v_a_946_);
lean_dec_ref(v___x_945_);
if (lean_obj_tag(v_a_946_) == 1)
{
lean_object* v_val_947_; lean_object* v___x_948_; 
v_val_947_ = lean_ctor_get(v_a_946_, 0);
lean_inc(v_val_947_);
lean_dec_ref_known(v_a_946_, 1);
v___x_948_ = l_Lean_Meta_Sym_unfoldReducible(v_val_947_, v___y_918_, v___y_919_, v___y_920_, v___y_921_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v_a_949_; lean_object* v___x_950_; 
v_a_949_ = lean_ctor_get(v___x_948_, 0);
lean_inc(v_a_949_);
lean_dec_ref_known(v___x_948_, 1);
v___x_950_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_949_, v___y_917_);
if (lean_obj_tag(v___x_950_) == 0)
{
lean_object* v_a_951_; lean_object* v___x_952_; 
v_a_951_ = lean_ctor_get(v___x_950_, 0);
lean_inc(v_a_951_);
lean_dec_ref_known(v___x_950_, 1);
v___x_952_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2___redArg(v_mv_909_, v_a_951_, v___y_919_);
lean_dec_ref(v___x_952_);
goto v___jp_926_;
}
else
{
lean_object* v_a_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_960_; 
lean_dec(v_mv_909_);
v_a_953_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_960_ == 0)
{
v___x_955_ = v___x_950_;
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_a_953_);
lean_dec(v___x_950_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v___x_958_; 
if (v_isShared_956_ == 0)
{
v___x_958_ = v___x_955_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_a_953_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
}
}
else
{
lean_object* v_a_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_968_; 
lean_dec(v_mv_909_);
v_a_961_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_968_ == 0)
{
v___x_963_ = v___x_948_;
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_a_961_);
lean_dec(v___x_948_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v___x_966_; 
if (v_isShared_964_ == 0)
{
v___x_966_ = v___x_963_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_a_961_);
v___x_966_ = v_reuseFailAlloc_967_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
return v___x_966_;
}
}
}
}
else
{
lean_dec(v_a_946_);
lean_dec(v_mv_909_);
goto v___jp_926_;
}
}
}
}
else
{
lean_object* v_a_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_977_; 
lean_dec(v_mv_909_);
v_a_970_ = lean_ctor_get(v___x_934_, 0);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_934_);
if (v_isSharedCheck_977_ == 0)
{
v___x_972_ = v___x_934_;
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_a_970_);
lean_dec(v___x_934_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_975_; 
if (v_isShared_973_ == 0)
{
v___x_975_ = v___x_972_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_a_970_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
}
v___jp_926_:
{
lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_927_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___lam__1___closed__0));
v___x_928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_928_, 0, v___x_927_);
return v___x_928_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___lam__1___boxed(lean_object* v___f_978_, lean_object* v_mv_979_, lean_object* v_tac_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_){
_start:
{
lean_object* v_res_993_; 
v_res_993_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___lam__1(v___f_978_, v_mv_979_, v_tac_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_);
lean_dec(v___y_991_);
lean_dec_ref(v___y_990_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
lean_dec(v___y_985_);
lean_dec_ref(v___y_984_);
lean_dec(v___y_983_);
lean_dec(v___y_982_);
lean_dec_ref(v___y_981_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3_spec__5___redArg(lean_object* v_a_994_, lean_object* v_x_995_){
_start:
{
if (lean_obj_tag(v_x_995_) == 0)
{
lean_object* v___x_996_; 
v___x_996_ = lean_box(0);
return v___x_996_;
}
else
{
lean_object* v_key_997_; lean_object* v_value_998_; lean_object* v_tail_999_; uint8_t v___x_1000_; 
v_key_997_ = lean_ctor_get(v_x_995_, 0);
v_value_998_ = lean_ctor_get(v_x_995_, 1);
v_tail_999_ = lean_ctor_get(v_x_995_, 2);
v___x_1000_ = lean_nat_dec_eq(v_key_997_, v_a_994_);
if (v___x_1000_ == 0)
{
v_x_995_ = v_tail_999_;
goto _start;
}
else
{
lean_object* v___x_1002_; 
lean_inc(v_value_998_);
v___x_1002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1002_, 0, v_value_998_);
return v___x_1002_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3_spec__5___redArg___boxed(lean_object* v_a_1003_, lean_object* v_x_1004_){
_start:
{
lean_object* v_res_1005_; 
v_res_1005_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3_spec__5___redArg(v_a_1003_, v_x_1004_);
lean_dec(v_x_1004_);
lean_dec(v_a_1003_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3___redArg(lean_object* v_m_1006_, lean_object* v_a_1007_){
_start:
{
lean_object* v_buckets_1008_; lean_object* v___x_1009_; uint64_t v___x_1010_; uint64_t v___x_1011_; uint64_t v___x_1012_; uint64_t v_fold_1013_; uint64_t v___x_1014_; uint64_t v___x_1015_; uint64_t v___x_1016_; size_t v___x_1017_; size_t v___x_1018_; size_t v___x_1019_; size_t v___x_1020_; size_t v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; 
v_buckets_1008_ = lean_ctor_get(v_m_1006_, 1);
v___x_1009_ = lean_array_get_size(v_buckets_1008_);
v___x_1010_ = lean_uint64_of_nat(v_a_1007_);
v___x_1011_ = 32ULL;
v___x_1012_ = lean_uint64_shift_right(v___x_1010_, v___x_1011_);
v_fold_1013_ = lean_uint64_xor(v___x_1010_, v___x_1012_);
v___x_1014_ = 16ULL;
v___x_1015_ = lean_uint64_shift_right(v_fold_1013_, v___x_1014_);
v___x_1016_ = lean_uint64_xor(v_fold_1013_, v___x_1015_);
v___x_1017_ = lean_uint64_to_usize(v___x_1016_);
v___x_1018_ = lean_usize_of_nat(v___x_1009_);
v___x_1019_ = ((size_t)1ULL);
v___x_1020_ = lean_usize_sub(v___x_1018_, v___x_1019_);
v___x_1021_ = lean_usize_land(v___x_1017_, v___x_1020_);
v___x_1022_ = lean_array_uget_borrowed(v_buckets_1008_, v___x_1021_);
v___x_1023_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3_spec__5___redArg(v_a_1007_, v___x_1022_);
return v___x_1023_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3___redArg___boxed(lean_object* v_m_1024_, lean_object* v_a_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3___redArg(v_m_1024_, v_a_1025_);
lean_dec(v_a_1025_);
lean_dec_ref(v_m_1024_);
return v_res_1026_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__20(void){
_start:
{
lean_object* v___x_1076_; 
v___x_1076_ = l_Array_mkArray0(lean_box(0));
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant(lean_object* v_n_1089_, lean_object* v_mv_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_){
_start:
{
lean_object* v___y_1104_; uint8_t v___y_1105_; lean_object* v___y_1110_; lean_object* v_invariantAlts_1123_; lean_object* v___x_1124_; 
v_invariantAlts_1123_ = lean_ctor_get(v_a_1091_, 5);
v___x_1124_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3___redArg(v_invariantAlts_1123_, v_n_1089_);
if (lean_obj_tag(v___x_1124_) == 1)
{
lean_object* v_val_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1196_; 
v_val_1125_ = lean_ctor_get(v___x_1124_, 0);
v_isSharedCheck_1196_ = !lean_is_exclusive(v___x_1124_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1127_ = v___x_1124_;
v_isShared_1128_ = v_isSharedCheck_1196_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_val_1125_);
lean_dec(v___x_1124_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1196_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___f_1129_; lean_object* v___x_1130_; uint8_t v___x_1131_; 
v___f_1129_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run___closed__2));
v___x_1130_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__3));
lean_inc(v_val_1125_);
v___x_1131_ = l_Lean_Syntax_isOfKind(v_val_1125_, v___x_1130_);
if (v___x_1131_ == 0)
{
lean_object* v___x_1132_; uint8_t v___x_1133_; 
v___x_1132_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__5));
lean_inc(v_val_1125_);
v___x_1133_ = l_Lean_Syntax_isOfKind(v_val_1125_, v___x_1132_);
if (v___x_1133_ == 0)
{
lean_object* v___x_1134_; lean_object* v___x_1136_; 
lean_dec(v_val_1125_);
lean_dec(v_mv_1090_);
v___x_1134_ = lean_box(v___x_1133_);
if (v_isShared_1128_ == 0)
{
lean_ctor_set_tag(v___x_1127_, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1134_);
v___x_1136_ = v___x_1127_;
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
else
{
lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; uint8_t v___x_1141_; 
v___x_1138_ = lean_unsigned_to_nat(1u);
v___x_1139_ = l_Lean_Syntax_getArg(v_val_1125_, v___x_1138_);
v___x_1140_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__7));
lean_inc(v___x_1139_);
v___x_1141_ = l_Lean_Syntax_isOfKind(v___x_1139_, v___x_1140_);
if (v___x_1141_ == 0)
{
lean_object* v___x_1142_; lean_object* v___x_1144_; 
lean_dec(v___x_1139_);
lean_dec(v_val_1125_);
lean_dec(v_mv_1090_);
v___x_1142_ = lean_box(v___x_1141_);
if (v_isShared_1128_ == 0)
{
lean_ctor_set_tag(v___x_1127_, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1142_);
v___x_1144_ = v___x_1127_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1145_; 
v_reuseFailAlloc_1145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1145_, 0, v___x_1142_);
v___x_1144_ = v_reuseFailAlloc_1145_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
return v___x_1144_;
}
}
else
{
lean_object* v_ref_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; 
lean_del_object(v___x_1127_);
v_ref_1146_ = lean_ctor_get(v_a_1100_, 5);
v___x_1147_ = l_Lean_Syntax_getArg(v___x_1139_, v___x_1138_);
lean_dec(v___x_1139_);
v___x_1148_ = lean_unsigned_to_nat(3u);
v___x_1149_ = l_Lean_Syntax_getArg(v_val_1125_, v___x_1148_);
lean_dec(v_val_1125_);
v___x_1150_ = l_Lean_Syntax_getArgs(v___x_1147_);
lean_dec(v___x_1147_);
v___x_1151_ = l_Lean_SourceInfo_fromRef(v_ref_1146_, v___x_1131_);
v___x_1152_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__9));
v___x_1153_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__10));
lean_inc_n(v___x_1151_, 11);
v___x_1154_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1151_);
lean_ctor_set(v___x_1154_, 1, v___x_1153_);
v___x_1155_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__12));
v___x_1156_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__14));
v___x_1157_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__16));
v___x_1158_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__18));
v___x_1159_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__19));
v___x_1160_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1151_);
lean_ctor_set(v___x_1160_, 1, v___x_1159_);
v___x_1161_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__20, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__20_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__20);
v___x_1162_ = l_Array_append___redArg(v___x_1161_, v___x_1150_);
lean_dec_ref(v___x_1150_);
v___x_1163_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1163_, 0, v___x_1151_);
lean_ctor_set(v___x_1163_, 1, v___x_1157_);
lean_ctor_set(v___x_1163_, 2, v___x_1162_);
v___x_1164_ = l_Lean_Syntax_node2(v___x_1151_, v___x_1158_, v___x_1160_, v___x_1163_);
v___x_1165_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__21));
v___x_1166_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1166_, 0, v___x_1151_);
lean_ctor_set(v___x_1166_, 1, v___x_1165_);
v___x_1167_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__22));
v___x_1168_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__23));
v___x_1169_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1169_, 0, v___x_1151_);
lean_ctor_set(v___x_1169_, 1, v___x_1167_);
v___x_1170_ = l_Lean_Syntax_node2(v___x_1151_, v___x_1168_, v___x_1169_, v___x_1149_);
v___x_1171_ = l_Lean_Syntax_node3(v___x_1151_, v___x_1157_, v___x_1164_, v___x_1166_, v___x_1170_);
v___x_1172_ = l_Lean_Syntax_node1(v___x_1151_, v___x_1156_, v___x_1171_);
v___x_1173_ = l_Lean_Syntax_node1(v___x_1151_, v___x_1155_, v___x_1172_);
v___x_1174_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__24));
v___x_1175_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1175_, 0, v___x_1151_);
lean_ctor_set(v___x_1175_, 1, v___x_1174_);
v___x_1176_ = l_Lean_Syntax_node3(v___x_1151_, v___x_1152_, v___x_1154_, v___x_1173_, v___x_1175_);
v___x_1177_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___lam__1(v___f_1129_, v_mv_1090_, v___x_1176_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_, v_a_1097_, v_a_1098_, v_a_1099_, v_a_1100_, v_a_1101_);
v___y_1110_ = v___x_1177_;
goto v___jp_1109_;
}
}
}
else
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; uint8_t v___x_1181_; 
v___x_1178_ = lean_unsigned_to_nat(0u);
v___x_1179_ = l_Lean_Syntax_getArg(v_val_1125_, v___x_1178_);
v___x_1180_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__26));
v___x_1181_ = l_Lean_Syntax_isOfKind(v___x_1179_, v___x_1180_);
if (v___x_1181_ == 0)
{
lean_object* v___x_1182_; lean_object* v___x_1184_; 
lean_dec(v_val_1125_);
lean_dec(v_mv_1090_);
v___x_1182_ = lean_box(v___x_1181_);
if (v_isShared_1128_ == 0)
{
lean_ctor_set_tag(v___x_1127_, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1182_);
v___x_1184_ = v___x_1127_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v___x_1182_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
return v___x_1184_;
}
}
else
{
lean_object* v_ref_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; uint8_t v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; 
lean_del_object(v___x_1127_);
v_ref_1186_ = lean_ctor_get(v_a_1100_, 5);
v___x_1187_ = lean_unsigned_to_nat(1u);
v___x_1188_ = l_Lean_Syntax_getArg(v_val_1125_, v___x_1187_);
lean_dec(v_val_1125_);
v___x_1189_ = 0;
v___x_1190_ = l_Lean_SourceInfo_fromRef(v_ref_1186_, v___x_1189_);
v___x_1191_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__22));
v___x_1192_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___closed__23));
lean_inc(v___x_1190_);
v___x_1193_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1190_);
lean_ctor_set(v___x_1193_, 1, v___x_1191_);
v___x_1194_ = l_Lean_Syntax_node2(v___x_1190_, v___x_1192_, v___x_1193_, v___x_1188_);
v___x_1195_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___lam__1(v___f_1129_, v_mv_1090_, v___x_1194_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_, v_a_1097_, v_a_1098_, v_a_1099_, v_a_1100_, v_a_1101_);
v___y_1110_ = v___x_1195_;
goto v___jp_1109_;
}
}
}
}
else
{
uint8_t v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
lean_dec(v___x_1124_);
lean_dec(v_mv_1090_);
v___x_1197_ = 0;
v___x_1198_ = lean_box(v___x_1197_);
v___x_1199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1198_);
return v___x_1199_;
}
v___jp_1103_:
{
if (v___y_1105_ == 0)
{
lean_object* v___x_1106_; lean_object* v___x_1107_; 
lean_dec_ref(v___y_1104_);
v___x_1106_ = lean_box(v___y_1105_);
v___x_1107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1106_);
return v___x_1107_;
}
else
{
lean_object* v___x_1108_; 
v___x_1108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1108_, 0, v___y_1104_);
return v___x_1108_;
}
}
v___jp_1109_:
{
if (lean_obj_tag(v___y_1110_) == 0)
{
lean_object* v_a_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1119_; 
v_a_1111_ = lean_ctor_get(v___y_1110_, 0);
v_isSharedCheck_1119_ = !lean_is_exclusive(v___y_1110_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1113_ = v___y_1110_;
v_isShared_1114_ = v_isSharedCheck_1119_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_a_1111_);
lean_dec(v___y_1110_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1119_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v_a_1115_; lean_object* v___x_1117_; 
v_a_1115_ = lean_ctor_get(v_a_1111_, 0);
lean_inc(v_a_1115_);
lean_dec(v_a_1111_);
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 0, v_a_1115_);
v___x_1117_ = v___x_1113_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v_a_1115_);
v___x_1117_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
return v___x_1117_;
}
}
}
else
{
lean_object* v_a_1120_; uint8_t v___x_1121_; 
v_a_1120_ = lean_ctor_get(v___y_1110_, 0);
lean_inc(v_a_1120_);
lean_dec_ref_known(v___y_1110_, 1);
v___x_1121_ = l_Lean_Exception_isInterrupt(v_a_1120_);
if (v___x_1121_ == 0)
{
uint8_t v___x_1122_; 
lean_inc(v_a_1120_);
v___x_1122_ = l_Lean_Exception_isRuntime(v_a_1120_);
v___y_1104_ = v_a_1120_;
v___y_1105_ = v___x_1122_;
goto v___jp_1103_;
}
else
{
v___y_1104_ = v_a_1120_;
v___y_1105_ = v___x_1121_;
goto v___jp_1103_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant___boxed(lean_object* v_n_1200_, lean_object* v_mv_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_, lean_object* v_a_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_){
_start:
{
lean_object* v_res_1214_; 
v_res_1214_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant(v_n_1200_, v_mv_1201_, v_a_1202_, v_a_1203_, v_a_1204_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_, v_a_1212_);
lean_dec(v_a_1212_);
lean_dec_ref(v_a_1211_);
lean_dec(v_a_1210_);
lean_dec_ref(v_a_1209_);
lean_dec(v_a_1208_);
lean_dec_ref(v_a_1207_);
lean_dec(v_a_1206_);
lean_dec_ref(v_a_1205_);
lean_dec(v_a_1204_);
lean_dec(v_a_1203_);
lean_dec_ref(v_a_1202_);
lean_dec(v_n_1200_);
return v_res_1214_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0(lean_object* v_mvarId_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_){
_start:
{
lean_object* v___x_1228_; 
v___x_1228_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0___redArg(v_mvarId_1215_, v___y_1224_);
return v___x_1228_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0___boxed(lean_object* v_mvarId_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_){
_start:
{
lean_object* v_res_1242_; 
v_res_1242_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0(v_mvarId_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_);
lean_dec(v___y_1240_);
lean_dec_ref(v___y_1239_);
lean_dec(v___y_1238_);
lean_dec_ref(v___y_1237_);
lean_dec(v___y_1236_);
lean_dec_ref(v___y_1235_);
lean_dec(v___y_1234_);
lean_dec_ref(v___y_1233_);
lean_dec(v___y_1232_);
lean_dec(v___y_1231_);
lean_dec_ref(v___y_1230_);
lean_dec(v_mvarId_1229_);
return v_res_1242_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2(lean_object* v_mvarId_1243_, lean_object* v_val_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_){
_start:
{
lean_object* v___x_1257_; 
v___x_1257_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2___redArg(v_mvarId_1243_, v_val_1244_, v___y_1253_);
return v___x_1257_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2___boxed(lean_object* v_mvarId_1258_, lean_object* v_val_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_){
_start:
{
lean_object* v_res_1272_; 
v_res_1272_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2(v_mvarId_1258_, v_val_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_);
lean_dec(v___y_1270_);
lean_dec_ref(v___y_1269_);
lean_dec(v___y_1268_);
lean_dec_ref(v___y_1267_);
lean_dec(v___y_1266_);
lean_dec_ref(v___y_1265_);
lean_dec(v___y_1264_);
lean_dec_ref(v___y_1263_);
lean_dec(v___y_1262_);
lean_dec(v___y_1261_);
lean_dec_ref(v___y_1260_);
return v_res_1272_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3(lean_object* v_00_u03b2_1273_, lean_object* v_m_1274_, lean_object* v_a_1275_){
_start:
{
lean_object* v___x_1276_; 
v___x_1276_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3___redArg(v_m_1274_, v_a_1275_);
return v___x_1276_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3___boxed(lean_object* v_00_u03b2_1277_, lean_object* v_m_1278_, lean_object* v_a_1279_){
_start:
{
lean_object* v_res_1280_; 
v_res_1280_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3(v_00_u03b2_1277_, v_m_1278_, v_a_1279_);
lean_dec(v_a_1279_);
lean_dec_ref(v_m_1278_);
return v_res_1280_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0(lean_object* v_00_u03b2_1281_, lean_object* v_x_1282_, lean_object* v_x_1283_){
_start:
{
uint8_t v___x_1284_; 
v___x_1284_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0___redArg(v_x_1282_, v_x_1283_);
return v___x_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1285_, lean_object* v_x_1286_, lean_object* v_x_1287_){
_start:
{
uint8_t v_res_1288_; lean_object* v_r_1289_; 
v_res_1288_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0(v_00_u03b2_1285_, v_x_1286_, v_x_1287_);
lean_dec(v_x_1287_);
lean_dec_ref(v_x_1286_);
v_r_1289_ = lean_box(v_res_1288_);
return v_r_1289_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3(lean_object* v_00_u03b2_1290_, lean_object* v_x_1291_, lean_object* v_x_1292_, lean_object* v_x_1293_){
_start:
{
lean_object* v___x_1294_; 
v___x_1294_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3___redArg(v_x_1291_, v_x_1292_, v_x_1293_);
return v___x_1294_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3_spec__5(lean_object* v_00_u03b2_1295_, lean_object* v_a_1296_, lean_object* v_x_1297_){
_start:
{
lean_object* v___x_1298_; 
v___x_1298_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3_spec__5___redArg(v_a_1296_, v_x_1297_);
return v___x_1298_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3_spec__5___boxed(lean_object* v_00_u03b2_1299_, lean_object* v_a_1300_, lean_object* v_x_1301_){
_start:
{
lean_object* v_res_1302_; 
v_res_1302_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__3_spec__5(v_00_u03b2_1299_, v_a_1300_, v_x_1301_);
lean_dec(v_x_1301_);
lean_dec(v_a_1300_);
return v_res_1302_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1303_, lean_object* v_x_1304_, size_t v_x_1305_, lean_object* v_x_1306_){
_start:
{
uint8_t v___x_1307_; 
v___x_1307_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___redArg(v_x_1304_, v_x_1305_, v_x_1306_);
return v___x_1307_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1308_, lean_object* v_x_1309_, lean_object* v_x_1310_, lean_object* v_x_1311_){
_start:
{
size_t v_x_49474__boxed_1312_; uint8_t v_res_1313_; lean_object* v_r_1314_; 
v_x_49474__boxed_1312_ = lean_unbox_usize(v_x_1310_);
lean_dec(v_x_1310_);
v_res_1313_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2(v_00_u03b2_1308_, v_x_1309_, v_x_49474__boxed_1312_, v_x_1311_);
lean_dec(v_x_1311_);
lean_dec_ref(v_x_1309_);
v_r_1314_ = lean_box(v_res_1313_);
return v_r_1314_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_1315_, lean_object* v_x_1316_, size_t v_x_1317_, size_t v_x_1318_, lean_object* v_x_1319_, lean_object* v_x_1320_){
_start:
{
lean_object* v___x_1321_; 
v___x_1321_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5___redArg(v_x_1316_, v_x_1317_, v_x_1318_, v_x_1319_, v_x_1320_);
return v___x_1321_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5___boxed(lean_object* v_00_u03b2_1322_, lean_object* v_x_1323_, lean_object* v_x_1324_, lean_object* v_x_1325_, lean_object* v_x_1326_, lean_object* v_x_1327_){
_start:
{
size_t v_x_49485__boxed_1328_; size_t v_x_49486__boxed_1329_; lean_object* v_res_1330_; 
v_x_49485__boxed_1328_ = lean_unbox_usize(v_x_1324_);
lean_dec(v_x_1324_);
v_x_49486__boxed_1329_ = lean_unbox_usize(v_x_1325_);
lean_dec(v_x_1325_);
v_res_1330_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5(v_00_u03b2_1322_, v_x_1323_, v_x_49485__boxed_1328_, v_x_49486__boxed_1329_, v_x_1326_, v_x_1327_);
return v_res_1330_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_1331_, lean_object* v_keys_1332_, lean_object* v_vals_1333_, lean_object* v_heq_1334_, lean_object* v_i_1335_, lean_object* v_k_1336_){
_start:
{
uint8_t v___x_1337_; 
v___x_1337_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2_spec__5___redArg(v_keys_1332_, v_i_1335_, v_k_1336_);
return v___x_1337_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_1338_, lean_object* v_keys_1339_, lean_object* v_vals_1340_, lean_object* v_heq_1341_, lean_object* v_i_1342_, lean_object* v_k_1343_){
_start:
{
uint8_t v_res_1344_; lean_object* v_r_1345_; 
v_res_1344_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0_spec__2_spec__5(v_00_u03b2_1338_, v_keys_1339_, v_vals_1340_, v_heq_1341_, v_i_1342_, v_k_1343_);
lean_dec(v_k_1343_);
lean_dec_ref(v_vals_1340_);
lean_dec_ref(v_keys_1339_);
v_r_1345_ = lean_box(v_res_1344_);
return v_r_1345_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__8(lean_object* v_00_u03b2_1346_, lean_object* v_n_1347_, lean_object* v_k_1348_, lean_object* v_v_1349_){
_start:
{
lean_object* v___x_1350_; 
v___x_1350_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__8___redArg(v_n_1347_, v_k_1348_, v_v_1349_);
return v___x_1350_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__9(lean_object* v_00_u03b2_1351_, size_t v_depth_1352_, lean_object* v_keys_1353_, lean_object* v_vals_1354_, lean_object* v_heq_1355_, lean_object* v_i_1356_, lean_object* v_entries_1357_){
_start:
{
lean_object* v___x_1358_; 
v___x_1358_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__9___redArg(v_depth_1352_, v_keys_1353_, v_vals_1354_, v_i_1356_, v_entries_1357_);
return v___x_1358_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__9___boxed(lean_object* v_00_u03b2_1359_, lean_object* v_depth_1360_, lean_object* v_keys_1361_, lean_object* v_vals_1362_, lean_object* v_heq_1363_, lean_object* v_i_1364_, lean_object* v_entries_1365_){
_start:
{
size_t v_depth_boxed_1366_; lean_object* v_res_1367_; 
v_depth_boxed_1366_ = lean_unbox_usize(v_depth_1360_);
lean_dec(v_depth_1360_);
v_res_1367_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__9(v_00_u03b2_1359_, v_depth_boxed_1366_, v_keys_1361_, v_vals_1362_, v_heq_1363_, v_i_1364_, v_entries_1365_);
lean_dec_ref(v_vals_1362_);
lean_dec_ref(v_keys_1361_);
return v_res_1367_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__8_spec__10(lean_object* v_00_u03b2_1368_, lean_object* v_x_1369_, lean_object* v_x_1370_, lean_object* v_x_1371_, lean_object* v_x_1372_){
_start:
{
lean_object* v___x_1373_; 
v___x_1373_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__2_spec__3_spec__5_spec__8_spec__10___redArg(v_x_1369_, v_x_1370_, v_x_1371_, v_x_1372_);
return v___x_1373_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_x_1374_, lean_object* v_x_1375_){
_start:
{
if (lean_obj_tag(v_x_1375_) == 0)
{
return v_x_1374_;
}
else
{
lean_object* v_key_1376_; lean_object* v_value_1377_; lean_object* v_tail_1378_; lean_object* v___x_1380_; uint8_t v_isShared_1381_; uint8_t v_isSharedCheck_1401_; 
v_key_1376_ = lean_ctor_get(v_x_1375_, 0);
v_value_1377_ = lean_ctor_get(v_x_1375_, 1);
v_tail_1378_ = lean_ctor_get(v_x_1375_, 2);
v_isSharedCheck_1401_ = !lean_is_exclusive(v_x_1375_);
if (v_isSharedCheck_1401_ == 0)
{
v___x_1380_ = v_x_1375_;
v_isShared_1381_ = v_isSharedCheck_1401_;
goto v_resetjp_1379_;
}
else
{
lean_inc(v_tail_1378_);
lean_inc(v_value_1377_);
lean_inc(v_key_1376_);
lean_dec(v_x_1375_);
v___x_1380_ = lean_box(0);
v_isShared_1381_ = v_isSharedCheck_1401_;
goto v_resetjp_1379_;
}
v_resetjp_1379_:
{
lean_object* v___x_1382_; uint64_t v___x_1383_; uint64_t v___x_1384_; uint64_t v___x_1385_; uint64_t v_fold_1386_; uint64_t v___x_1387_; uint64_t v___x_1388_; uint64_t v___x_1389_; size_t v___x_1390_; size_t v___x_1391_; size_t v___x_1392_; size_t v___x_1393_; size_t v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1397_; 
v___x_1382_ = lean_array_get_size(v_x_1374_);
v___x_1383_ = lean_uint64_of_nat(v_key_1376_);
v___x_1384_ = 32ULL;
v___x_1385_ = lean_uint64_shift_right(v___x_1383_, v___x_1384_);
v_fold_1386_ = lean_uint64_xor(v___x_1383_, v___x_1385_);
v___x_1387_ = 16ULL;
v___x_1388_ = lean_uint64_shift_right(v_fold_1386_, v___x_1387_);
v___x_1389_ = lean_uint64_xor(v_fold_1386_, v___x_1388_);
v___x_1390_ = lean_uint64_to_usize(v___x_1389_);
v___x_1391_ = lean_usize_of_nat(v___x_1382_);
v___x_1392_ = ((size_t)1ULL);
v___x_1393_ = lean_usize_sub(v___x_1391_, v___x_1392_);
v___x_1394_ = lean_usize_land(v___x_1390_, v___x_1393_);
v___x_1395_ = lean_array_uget_borrowed(v_x_1374_, v___x_1394_);
lean_inc(v___x_1395_);
if (v_isShared_1381_ == 0)
{
lean_ctor_set(v___x_1380_, 2, v___x_1395_);
v___x_1397_ = v___x_1380_;
goto v_reusejp_1396_;
}
else
{
lean_object* v_reuseFailAlloc_1400_; 
v_reuseFailAlloc_1400_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1400_, 0, v_key_1376_);
lean_ctor_set(v_reuseFailAlloc_1400_, 1, v_value_1377_);
lean_ctor_set(v_reuseFailAlloc_1400_, 2, v___x_1395_);
v___x_1397_ = v_reuseFailAlloc_1400_;
goto v_reusejp_1396_;
}
v_reusejp_1396_:
{
lean_object* v___x_1398_; 
v___x_1398_ = lean_array_uset(v_x_1374_, v___x_1394_, v___x_1397_);
v_x_1374_ = v___x_1398_;
v_x_1375_ = v_tail_1378_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2___redArg(lean_object* v_i_1402_, lean_object* v_source_1403_, lean_object* v_target_1404_){
_start:
{
lean_object* v___x_1405_; uint8_t v___x_1406_; 
v___x_1405_ = lean_array_get_size(v_source_1403_);
v___x_1406_ = lean_nat_dec_lt(v_i_1402_, v___x_1405_);
if (v___x_1406_ == 0)
{
lean_dec_ref(v_source_1403_);
lean_dec(v_i_1402_);
return v_target_1404_;
}
else
{
lean_object* v_es_1407_; lean_object* v___x_1408_; lean_object* v_source_1409_; lean_object* v_target_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; 
v_es_1407_ = lean_array_fget(v_source_1403_, v_i_1402_);
v___x_1408_ = lean_box(0);
v_source_1409_ = lean_array_fset(v_source_1403_, v_i_1402_, v___x_1408_);
v_target_1410_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4___redArg(v_target_1404_, v_es_1407_);
v___x_1411_ = lean_unsigned_to_nat(1u);
v___x_1412_ = lean_nat_add(v_i_1402_, v___x_1411_);
lean_dec(v_i_1402_);
v_i_1402_ = v___x_1412_;
v_source_1403_ = v_source_1409_;
v_target_1404_ = v_target_1410_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__1___redArg(lean_object* v_data_1414_){
_start:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v_nbuckets_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; 
v___x_1415_ = lean_array_get_size(v_data_1414_);
v___x_1416_ = lean_unsigned_to_nat(2u);
v_nbuckets_1417_ = lean_nat_mul(v___x_1415_, v___x_1416_);
v___x_1418_ = lean_unsigned_to_nat(0u);
v___x_1419_ = lean_box(0);
v___x_1420_ = lean_mk_array(v_nbuckets_1417_, v___x_1419_);
v___x_1421_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2___redArg(v___x_1418_, v_data_1414_, v___x_1420_);
return v___x_1421_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg(lean_object* v_a_1422_, lean_object* v_x_1423_){
_start:
{
if (lean_obj_tag(v_x_1423_) == 0)
{
uint8_t v___x_1424_; 
v___x_1424_ = 0;
return v___x_1424_;
}
else
{
lean_object* v_key_1425_; lean_object* v_tail_1426_; uint8_t v___x_1427_; 
v_key_1425_ = lean_ctor_get(v_x_1423_, 0);
v_tail_1426_ = lean_ctor_get(v_x_1423_, 2);
v___x_1427_ = lean_nat_dec_eq(v_key_1425_, v_a_1422_);
if (v___x_1427_ == 0)
{
v_x_1423_ = v_tail_1426_;
goto _start;
}
else
{
return v___x_1427_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg___boxed(lean_object* v_a_1429_, lean_object* v_x_1430_){
_start:
{
uint8_t v_res_1431_; lean_object* v_r_1432_; 
v_res_1431_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg(v_a_1429_, v_x_1430_);
lean_dec(v_x_1430_);
lean_dec(v_a_1429_);
v_r_1432_ = lean_box(v_res_1431_);
return v_r_1432_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0___redArg(lean_object* v_m_1433_, lean_object* v_a_1434_, lean_object* v_b_1435_){
_start:
{
lean_object* v_size_1436_; lean_object* v_buckets_1437_; lean_object* v___x_1438_; uint64_t v___x_1439_; uint64_t v___x_1440_; uint64_t v___x_1441_; uint64_t v_fold_1442_; uint64_t v___x_1443_; uint64_t v___x_1444_; uint64_t v___x_1445_; size_t v___x_1446_; size_t v___x_1447_; size_t v___x_1448_; size_t v___x_1449_; size_t v___x_1450_; lean_object* v_bkt_1451_; uint8_t v___x_1452_; 
v_size_1436_ = lean_ctor_get(v_m_1433_, 0);
v_buckets_1437_ = lean_ctor_get(v_m_1433_, 1);
v___x_1438_ = lean_array_get_size(v_buckets_1437_);
v___x_1439_ = lean_uint64_of_nat(v_a_1434_);
v___x_1440_ = 32ULL;
v___x_1441_ = lean_uint64_shift_right(v___x_1439_, v___x_1440_);
v_fold_1442_ = lean_uint64_xor(v___x_1439_, v___x_1441_);
v___x_1443_ = 16ULL;
v___x_1444_ = lean_uint64_shift_right(v_fold_1442_, v___x_1443_);
v___x_1445_ = lean_uint64_xor(v_fold_1442_, v___x_1444_);
v___x_1446_ = lean_uint64_to_usize(v___x_1445_);
v___x_1447_ = lean_usize_of_nat(v___x_1438_);
v___x_1448_ = ((size_t)1ULL);
v___x_1449_ = lean_usize_sub(v___x_1447_, v___x_1448_);
v___x_1450_ = lean_usize_land(v___x_1446_, v___x_1449_);
v_bkt_1451_ = lean_array_uget_borrowed(v_buckets_1437_, v___x_1450_);
v___x_1452_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg(v_a_1434_, v_bkt_1451_);
if (v___x_1452_ == 0)
{
lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1473_; 
lean_inc_ref(v_buckets_1437_);
lean_inc(v_size_1436_);
v_isSharedCheck_1473_ = !lean_is_exclusive(v_m_1433_);
if (v_isSharedCheck_1473_ == 0)
{
lean_object* v_unused_1474_; lean_object* v_unused_1475_; 
v_unused_1474_ = lean_ctor_get(v_m_1433_, 1);
lean_dec(v_unused_1474_);
v_unused_1475_ = lean_ctor_get(v_m_1433_, 0);
lean_dec(v_unused_1475_);
v___x_1454_ = v_m_1433_;
v_isShared_1455_ = v_isSharedCheck_1473_;
goto v_resetjp_1453_;
}
else
{
lean_dec(v_m_1433_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1473_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
lean_object* v___x_1456_; lean_object* v_size_x27_1457_; lean_object* v___x_1458_; lean_object* v_buckets_x27_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; uint8_t v___x_1465_; 
v___x_1456_ = lean_unsigned_to_nat(1u);
v_size_x27_1457_ = lean_nat_add(v_size_1436_, v___x_1456_);
lean_dec(v_size_1436_);
lean_inc(v_bkt_1451_);
v___x_1458_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1458_, 0, v_a_1434_);
lean_ctor_set(v___x_1458_, 1, v_b_1435_);
lean_ctor_set(v___x_1458_, 2, v_bkt_1451_);
v_buckets_x27_1459_ = lean_array_uset(v_buckets_1437_, v___x_1450_, v___x_1458_);
v___x_1460_ = lean_unsigned_to_nat(4u);
v___x_1461_ = lean_nat_mul(v_size_x27_1457_, v___x_1460_);
v___x_1462_ = lean_unsigned_to_nat(3u);
v___x_1463_ = lean_nat_div(v___x_1461_, v___x_1462_);
lean_dec(v___x_1461_);
v___x_1464_ = lean_array_get_size(v_buckets_x27_1459_);
v___x_1465_ = lean_nat_dec_le(v___x_1463_, v___x_1464_);
lean_dec(v___x_1463_);
if (v___x_1465_ == 0)
{
lean_object* v_val_1466_; lean_object* v___x_1468_; 
v_val_1466_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__1___redArg(v_buckets_x27_1459_);
if (v_isShared_1455_ == 0)
{
lean_ctor_set(v___x_1454_, 1, v_val_1466_);
lean_ctor_set(v___x_1454_, 0, v_size_x27_1457_);
v___x_1468_ = v___x_1454_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v_size_x27_1457_);
lean_ctor_set(v_reuseFailAlloc_1469_, 1, v_val_1466_);
v___x_1468_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
return v___x_1468_;
}
}
else
{
lean_object* v___x_1471_; 
if (v_isShared_1455_ == 0)
{
lean_ctor_set(v___x_1454_, 1, v_buckets_x27_1459_);
lean_ctor_set(v___x_1454_, 0, v_size_x27_1457_);
v___x_1471_ = v___x_1454_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v_size_x27_1457_);
lean_ctor_set(v_reuseFailAlloc_1472_, 1, v_buckets_x27_1459_);
v___x_1471_ = v_reuseFailAlloc_1472_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
return v___x_1471_;
}
}
}
}
else
{
lean_dec(v_b_1435_);
lean_dec(v_a_1434_);
return v_m_1433_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__1___redArg(lean_object* v___x_1476_, lean_object* v_as_x27_1477_, lean_object* v_b_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_){
_start:
{
if (lean_obj_tag(v_as_x27_1477_) == 0)
{
lean_object* v___x_1491_; 
lean_dec_ref(v___x_1476_);
v___x_1491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1491_, 0, v_b_1478_);
return v___x_1491_;
}
else
{
lean_object* v_head_1492_; lean_object* v_tail_1493_; lean_object* v___x_1494_; 
v_head_1492_ = lean_ctor_get(v_as_x27_1477_, 0);
v_tail_1493_ = lean_ctor_get(v_as_x27_1477_, 1);
lean_inc(v_head_1492_);
v___x_1494_ = l_Lean_MVarId_getType(v_head_1492_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_);
if (lean_obj_tag(v___x_1494_) == 0)
{
lean_object* v_a_1495_; uint8_t v___x_1496_; 
v_a_1495_ = lean_ctor_get(v___x_1494_, 0);
lean_inc(v_a_1495_);
lean_dec_ref_known(v___x_1494_, 1);
lean_inc_ref(v___x_1476_);
v___x_1496_ = l_Lean_Elab_Tactic_Do_SpecAttr_isSpecInvariantType(v___x_1476_, v_a_1495_);
lean_dec(v_a_1495_);
if (v___x_1496_ == 0)
{
lean_object* v___x_1497_; 
lean_inc(v_head_1492_);
v___x_1497_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1497_, 0, v_head_1492_);
lean_ctor_set(v___x_1497_, 1, v_b_1478_);
v_as_x27_1477_ = v_tail_1493_;
v_b_1478_ = v___x_1497_;
goto _start;
}
else
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v_specBackwardRuleCache_1501_; lean_object* v_splitBackwardRuleCache_1502_; lean_object* v_logicBackwardRuleCache_1503_; lean_object* v_invariants_1504_; lean_object* v_vcs_1505_; lean_object* v_simpState_1506_; lean_object* v_jps_1507_; lean_object* v_fuel_1508_; lean_object* v_inlineHandledInvariants_1509_; uint8_t v_dischTacFailed_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1567_; 
v___x_1499_ = lean_st_ref_get(v___y_1480_);
v___x_1500_ = lean_st_ref_take(v___y_1480_);
v_specBackwardRuleCache_1501_ = lean_ctor_get(v___x_1500_, 0);
v_splitBackwardRuleCache_1502_ = lean_ctor_get(v___x_1500_, 1);
v_logicBackwardRuleCache_1503_ = lean_ctor_get(v___x_1500_, 2);
v_invariants_1504_ = lean_ctor_get(v___x_1500_, 3);
v_vcs_1505_ = lean_ctor_get(v___x_1500_, 4);
v_simpState_1506_ = lean_ctor_get(v___x_1500_, 5);
v_jps_1507_ = lean_ctor_get(v___x_1500_, 6);
v_fuel_1508_ = lean_ctor_get(v___x_1500_, 7);
v_inlineHandledInvariants_1509_ = lean_ctor_get(v___x_1500_, 8);
v_dischTacFailed_1510_ = lean_ctor_get_uint8(v___x_1500_, sizeof(void*)*9);
v_isSharedCheck_1567_ = !lean_is_exclusive(v___x_1500_);
if (v_isSharedCheck_1567_ == 0)
{
v___x_1512_ = v___x_1500_;
v_isShared_1513_ = v_isSharedCheck_1567_;
goto v_resetjp_1511_;
}
else
{
lean_inc(v_inlineHandledInvariants_1509_);
lean_inc(v_fuel_1508_);
lean_inc(v_jps_1507_);
lean_inc(v_simpState_1506_);
lean_inc(v_vcs_1505_);
lean_inc(v_invariants_1504_);
lean_inc(v_logicBackwardRuleCache_1503_);
lean_inc(v_splitBackwardRuleCache_1502_);
lean_inc(v_specBackwardRuleCache_1501_);
lean_dec(v___x_1500_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1567_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
lean_object* v___x_1514_; lean_object* v___x_1516_; 
lean_inc(v_head_1492_);
v___x_1514_ = lean_array_push(v_invariants_1504_, v_head_1492_);
if (v_isShared_1513_ == 0)
{
lean_ctor_set(v___x_1512_, 3, v___x_1514_);
v___x_1516_ = v___x_1512_;
goto v_reusejp_1515_;
}
else
{
lean_object* v_reuseFailAlloc_1566_; 
v_reuseFailAlloc_1566_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_1566_, 0, v_specBackwardRuleCache_1501_);
lean_ctor_set(v_reuseFailAlloc_1566_, 1, v_splitBackwardRuleCache_1502_);
lean_ctor_set(v_reuseFailAlloc_1566_, 2, v_logicBackwardRuleCache_1503_);
lean_ctor_set(v_reuseFailAlloc_1566_, 3, v___x_1514_);
lean_ctor_set(v_reuseFailAlloc_1566_, 4, v_vcs_1505_);
lean_ctor_set(v_reuseFailAlloc_1566_, 5, v_simpState_1506_);
lean_ctor_set(v_reuseFailAlloc_1566_, 6, v_jps_1507_);
lean_ctor_set(v_reuseFailAlloc_1566_, 7, v_fuel_1508_);
lean_ctor_set(v_reuseFailAlloc_1566_, 8, v_inlineHandledInvariants_1509_);
lean_ctor_set_uint8(v_reuseFailAlloc_1566_, sizeof(void*)*9, v_dischTacFailed_1510_);
v___x_1516_ = v_reuseFailAlloc_1566_;
goto v_reusejp_1515_;
}
v_reusejp_1515_:
{
lean_object* v___x_1517_; lean_object* v_invariants_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___x_1517_ = lean_st_ref_set(v___y_1480_, v___x_1516_);
v_invariants_1518_ = lean_ctor_get(v___x_1499_, 3);
lean_inc_ref(v_invariants_1518_);
lean_dec(v___x_1499_);
v___x_1519_ = lean_array_get_size(v_invariants_1518_);
lean_dec_ref(v_invariants_1518_);
v___x_1520_ = lean_unsigned_to_nat(1u);
v___x_1521_ = lean_nat_add(v___x_1519_, v___x_1520_);
lean_inc(v_head_1492_);
v___x_1522_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant(v___x_1521_, v_head_1492_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_);
if (lean_obj_tag(v___x_1522_) == 0)
{
lean_object* v_a_1523_; uint8_t v___x_1524_; 
v_a_1523_ = lean_ctor_get(v___x_1522_, 0);
lean_inc(v_a_1523_);
lean_dec_ref_known(v___x_1522_, 1);
v___x_1524_ = lean_unbox(v_a_1523_);
lean_dec(v_a_1523_);
if (v___x_1524_ == 0)
{
uint8_t v___x_1525_; lean_object* v___x_1526_; 
lean_dec(v___x_1521_);
v___x_1525_ = 2;
lean_inc(v_head_1492_);
v___x_1526_ = l_Lean_MVarId_setKind___redArg(v_head_1492_, v___x_1525_, v___y_1487_);
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_dec_ref_known(v___x_1526_, 1);
v_as_x27_1477_ = v_tail_1493_;
goto _start;
}
else
{
lean_object* v_a_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1535_; 
lean_dec(v_b_1478_);
lean_dec_ref(v___x_1476_);
v_a_1528_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1535_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1535_ == 0)
{
v___x_1530_ = v___x_1526_;
v_isShared_1531_ = v_isSharedCheck_1535_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_a_1528_);
lean_dec(v___x_1526_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1535_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
lean_object* v___x_1533_; 
if (v_isShared_1531_ == 0)
{
v___x_1533_ = v___x_1530_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v_a_1528_);
v___x_1533_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
return v___x_1533_;
}
}
}
}
else
{
lean_object* v___x_1536_; lean_object* v_specBackwardRuleCache_1537_; lean_object* v_splitBackwardRuleCache_1538_; lean_object* v_logicBackwardRuleCache_1539_; lean_object* v_invariants_1540_; lean_object* v_vcs_1541_; lean_object* v_simpState_1542_; lean_object* v_jps_1543_; lean_object* v_fuel_1544_; lean_object* v_inlineHandledInvariants_1545_; uint8_t v_dischTacFailed_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1557_; 
v___x_1536_ = lean_st_ref_take(v___y_1480_);
v_specBackwardRuleCache_1537_ = lean_ctor_get(v___x_1536_, 0);
v_splitBackwardRuleCache_1538_ = lean_ctor_get(v___x_1536_, 1);
v_logicBackwardRuleCache_1539_ = lean_ctor_get(v___x_1536_, 2);
v_invariants_1540_ = lean_ctor_get(v___x_1536_, 3);
v_vcs_1541_ = lean_ctor_get(v___x_1536_, 4);
v_simpState_1542_ = lean_ctor_get(v___x_1536_, 5);
v_jps_1543_ = lean_ctor_get(v___x_1536_, 6);
v_fuel_1544_ = lean_ctor_get(v___x_1536_, 7);
v_inlineHandledInvariants_1545_ = lean_ctor_get(v___x_1536_, 8);
v_dischTacFailed_1546_ = lean_ctor_get_uint8(v___x_1536_, sizeof(void*)*9);
v_isSharedCheck_1557_ = !lean_is_exclusive(v___x_1536_);
if (v_isSharedCheck_1557_ == 0)
{
v___x_1548_ = v___x_1536_;
v_isShared_1549_ = v_isSharedCheck_1557_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_inlineHandledInvariants_1545_);
lean_inc(v_fuel_1544_);
lean_inc(v_jps_1543_);
lean_inc(v_simpState_1542_);
lean_inc(v_vcs_1541_);
lean_inc(v_invariants_1540_);
lean_inc(v_logicBackwardRuleCache_1539_);
lean_inc(v_splitBackwardRuleCache_1538_);
lean_inc(v_specBackwardRuleCache_1537_);
lean_dec(v___x_1536_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1557_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1553_; 
v___x_1550_ = lean_box(0);
v___x_1551_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0___redArg(v_inlineHandledInvariants_1545_, v___x_1521_, v___x_1550_);
if (v_isShared_1549_ == 0)
{
lean_ctor_set(v___x_1548_, 8, v___x_1551_);
v___x_1553_ = v___x_1548_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1556_; 
v_reuseFailAlloc_1556_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_1556_, 0, v_specBackwardRuleCache_1537_);
lean_ctor_set(v_reuseFailAlloc_1556_, 1, v_splitBackwardRuleCache_1538_);
lean_ctor_set(v_reuseFailAlloc_1556_, 2, v_logicBackwardRuleCache_1539_);
lean_ctor_set(v_reuseFailAlloc_1556_, 3, v_invariants_1540_);
lean_ctor_set(v_reuseFailAlloc_1556_, 4, v_vcs_1541_);
lean_ctor_set(v_reuseFailAlloc_1556_, 5, v_simpState_1542_);
lean_ctor_set(v_reuseFailAlloc_1556_, 6, v_jps_1543_);
lean_ctor_set(v_reuseFailAlloc_1556_, 7, v_fuel_1544_);
lean_ctor_set(v_reuseFailAlloc_1556_, 8, v___x_1551_);
lean_ctor_set_uint8(v_reuseFailAlloc_1556_, sizeof(void*)*9, v_dischTacFailed_1546_);
v___x_1553_ = v_reuseFailAlloc_1556_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
lean_object* v___x_1554_; 
v___x_1554_ = lean_st_ref_set(v___y_1480_, v___x_1553_);
v_as_x27_1477_ = v_tail_1493_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1565_; 
lean_dec(v___x_1521_);
lean_dec(v_b_1478_);
lean_dec_ref(v___x_1476_);
v_a_1558_ = lean_ctor_get(v___x_1522_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1522_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1560_ = v___x_1522_;
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_a_1558_);
lean_dec(v___x_1522_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
lean_object* v___x_1563_; 
if (v_isShared_1561_ == 0)
{
v___x_1563_ = v___x_1560_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_a_1558_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
return v___x_1563_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1568_; lean_object* v___x_1570_; uint8_t v_isShared_1571_; uint8_t v_isSharedCheck_1575_; 
lean_dec(v_b_1478_);
lean_dec_ref(v___x_1476_);
v_a_1568_ = lean_ctor_get(v___x_1494_, 0);
v_isSharedCheck_1575_ = !lean_is_exclusive(v___x_1494_);
if (v_isSharedCheck_1575_ == 0)
{
v___x_1570_ = v___x_1494_;
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
else
{
lean_inc(v_a_1568_);
lean_dec(v___x_1494_);
v___x_1570_ = lean_box(0);
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
v_resetjp_1569_:
{
lean_object* v___x_1573_; 
if (v_isShared_1571_ == 0)
{
v___x_1573_ = v___x_1570_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1574_; 
v_reuseFailAlloc_1574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1574_, 0, v_a_1568_);
v___x_1573_ = v_reuseFailAlloc_1574_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
return v___x_1573_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__1___redArg___boxed(lean_object* v___x_1576_, lean_object* v_as_x27_1577_, lean_object* v_b_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__1___redArg(v___x_1576_, v_as_x27_1577_, v_b_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
lean_dec(v___y_1589_);
lean_dec_ref(v___y_1588_);
lean_dec(v___y_1587_);
lean_dec_ref(v___y_1586_);
lean_dec(v___y_1585_);
lean_dec_ref(v___y_1584_);
lean_dec(v___y_1583_);
lean_dec_ref(v___y_1582_);
lean_dec(v___y_1581_);
lean_dec(v___y_1580_);
lean_dec_ref(v___y_1579_);
lean_dec(v_as_x27_1577_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals(lean_object* v_subgoals_1592_, lean_object* v_a_1593_, lean_object* v_a_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_, lean_object* v_a_1597_, lean_object* v_a_1598_, lean_object* v_a_1599_, lean_object* v_a_1600_, lean_object* v_a_1601_, lean_object* v_a_1602_, lean_object* v_a_1603_){
_start:
{
lean_object* v___x_1605_; lean_object* v_env_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; 
v___x_1605_ = lean_st_ref_get(v_a_1603_);
v_env_1606_ = lean_ctor_get(v___x_1605_, 0);
lean_inc_ref(v_env_1606_);
lean_dec(v___x_1605_);
v___x_1607_ = lean_box(0);
v___x_1608_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__1___redArg(v_env_1606_, v_subgoals_1592_, v___x_1607_, v_a_1593_, v_a_1594_, v_a_1595_, v_a_1596_, v_a_1597_, v_a_1598_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_, v_a_1603_);
return v___x_1608_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals___boxed(lean_object* v_subgoals_1609_, lean_object* v_a_1610_, lean_object* v_a_1611_, lean_object* v_a_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_, lean_object* v_a_1621_){
_start:
{
lean_object* v_res_1622_; 
v_res_1622_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals(v_subgoals_1609_, v_a_1610_, v_a_1611_, v_a_1612_, v_a_1613_, v_a_1614_, v_a_1615_, v_a_1616_, v_a_1617_, v_a_1618_, v_a_1619_, v_a_1620_);
lean_dec(v_a_1620_);
lean_dec_ref(v_a_1619_);
lean_dec(v_a_1618_);
lean_dec_ref(v_a_1617_);
lean_dec(v_a_1616_);
lean_dec_ref(v_a_1615_);
lean_dec(v_a_1614_);
lean_dec_ref(v_a_1613_);
lean_dec(v_a_1612_);
lean_dec(v_a_1611_);
lean_dec_ref(v_a_1610_);
lean_dec(v_subgoals_1609_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0(lean_object* v_00_u03b2_1623_, lean_object* v_m_1624_, lean_object* v_a_1625_, lean_object* v_b_1626_){
_start:
{
lean_object* v___x_1627_; 
v___x_1627_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0___redArg(v_m_1624_, v_a_1625_, v_b_1626_);
return v___x_1627_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__1(lean_object* v___x_1628_, lean_object* v_as_1629_, lean_object* v_as_x27_1630_, lean_object* v_b_1631_, lean_object* v_a_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_){
_start:
{
lean_object* v___x_1645_; 
v___x_1645_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__1___redArg(v___x_1628_, v_as_x27_1630_, v_b_1631_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_);
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__1___boxed(lean_object** _args){
lean_object* v___x_1646_ = _args[0];
lean_object* v_as_1647_ = _args[1];
lean_object* v_as_x27_1648_ = _args[2];
lean_object* v_b_1649_ = _args[3];
lean_object* v_a_1650_ = _args[4];
lean_object* v___y_1651_ = _args[5];
lean_object* v___y_1652_ = _args[6];
lean_object* v___y_1653_ = _args[7];
lean_object* v___y_1654_ = _args[8];
lean_object* v___y_1655_ = _args[9];
lean_object* v___y_1656_ = _args[10];
lean_object* v___y_1657_ = _args[11];
lean_object* v___y_1658_ = _args[12];
lean_object* v___y_1659_ = _args[13];
lean_object* v___y_1660_ = _args[14];
lean_object* v___y_1661_ = _args[15];
lean_object* v___y_1662_ = _args[16];
_start:
{
lean_object* v_res_1663_; 
v_res_1663_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__1(v___x_1646_, v_as_1647_, v_as_x27_1648_, v_b_1649_, v_a_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_);
lean_dec(v___y_1661_);
lean_dec_ref(v___y_1660_);
lean_dec(v___y_1659_);
lean_dec_ref(v___y_1658_);
lean_dec(v___y_1657_);
lean_dec_ref(v___y_1656_);
lean_dec(v___y_1655_);
lean_dec_ref(v___y_1654_);
lean_dec(v___y_1653_);
lean_dec(v___y_1652_);
lean_dec_ref(v___y_1651_);
lean_dec(v_as_x27_1648_);
lean_dec(v_as_1647_);
return v_res_1663_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__0(lean_object* v_00_u03b2_1664_, lean_object* v_a_1665_, lean_object* v_x_1666_){
_start:
{
uint8_t v___x_1667_; 
v___x_1667_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg(v_a_1665_, v_x_1666_);
return v___x_1667_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1668_, lean_object* v_a_1669_, lean_object* v_x_1670_){
_start:
{
uint8_t v_res_1671_; lean_object* v_r_1672_; 
v_res_1671_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__0(v_00_u03b2_1668_, v_a_1669_, v_x_1670_);
lean_dec(v_x_1670_);
lean_dec(v_a_1669_);
v_r_1672_ = lean_box(v_res_1671_);
return v_r_1672_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__1(lean_object* v_00_u03b2_1673_, lean_object* v_data_1674_){
_start:
{
lean_object* v___x_1675_; 
v___x_1675_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__1___redArg(v_data_1674_);
return v___x_1675_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1676_, lean_object* v_i_1677_, lean_object* v_source_1678_, lean_object* v_target_1679_){
_start:
{
lean_object* v___x_1680_; 
v___x_1680_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2___redArg(v_i_1677_, v_source_1678_, v_target_1679_);
return v___x_1680_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_1681_, lean_object* v_x_1682_, lean_object* v_x_1683_){
_start:
{
lean_object* v___x_1684_; 
v___x_1684_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4___redArg(v_x_1682_, v_x_1683_);
return v___x_1684_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__0___redArg(lean_object* v_as_x27_1685_, lean_object* v_b_1686_, lean_object* v___y_1687_){
_start:
{
if (lean_obj_tag(v_as_x27_1685_) == 0)
{
lean_object* v___x_1689_; 
v___x_1689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1689_, 0, v_b_1686_);
return v___x_1689_;
}
else
{
lean_object* v_head_1690_; lean_object* v_tail_1691_; uint8_t v___x_1692_; lean_object* v___x_1693_; 
v_head_1690_ = lean_ctor_get(v_as_x27_1685_, 0);
v_tail_1691_ = lean_ctor_get(v_as_x27_1685_, 1);
v___x_1692_ = 2;
lean_inc(v_head_1690_);
v___x_1693_ = l_Lean_MVarId_setKind___redArg(v_head_1690_, v___x_1692_, v___y_1687_);
if (lean_obj_tag(v___x_1693_) == 0)
{
lean_object* v___x_1694_; 
lean_dec_ref_known(v___x_1693_, 1);
v___x_1694_ = lean_box(0);
v_as_x27_1685_ = v_tail_1691_;
v_b_1686_ = v___x_1694_;
goto _start;
}
else
{
return v___x_1693_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__0___redArg___boxed(lean_object* v_as_x27_1696_, lean_object* v_b_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_){
_start:
{
lean_object* v_res_1700_; 
v_res_1700_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__0___redArg(v_as_x27_1696_, v_b_1697_, v___y_1698_);
lean_dec(v___y_1698_);
lean_dec(v_as_x27_1696_);
return v_res_1700_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__1___redArg(lean_object* v_msg_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_){
_start:
{
lean_object* v_ref_1707_; lean_object* v___x_1708_; lean_object* v_a_1709_; lean_object* v___x_1711_; uint8_t v_isShared_1712_; uint8_t v_isSharedCheck_1717_; 
v_ref_1707_ = lean_ctor_get(v___y_1704_, 5);
v___x_1708_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__0_spec__0_spec__2_spec__3(v_msg_1701_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_);
v_a_1709_ = lean_ctor_get(v___x_1708_, 0);
v_isSharedCheck_1717_ = !lean_is_exclusive(v___x_1708_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1711_ = v___x_1708_;
v_isShared_1712_ = v_isSharedCheck_1717_;
goto v_resetjp_1710_;
}
else
{
lean_inc(v_a_1709_);
lean_dec(v___x_1708_);
v___x_1711_ = lean_box(0);
v_isShared_1712_ = v_isSharedCheck_1717_;
goto v_resetjp_1710_;
}
v_resetjp_1710_:
{
lean_object* v___x_1713_; lean_object* v___x_1715_; 
lean_inc(v_ref_1707_);
v___x_1713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1713_, 0, v_ref_1707_);
lean_ctor_set(v___x_1713_, 1, v_a_1709_);
if (v_isShared_1712_ == 0)
{
lean_ctor_set_tag(v___x_1711_, 1);
lean_ctor_set(v___x_1711_, 0, v___x_1713_);
v___x_1715_ = v___x_1711_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v___x_1713_);
v___x_1715_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
return v___x_1715_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__1___redArg___boxed(lean_object* v_msg_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_){
_start:
{
lean_object* v_res_1724_; 
v_res_1724_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__1___redArg(v_msg_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_);
lean_dec(v___y_1722_);
lean_dec_ref(v___y_1721_);
lean_dec(v___y_1720_);
lean_dec_ref(v___y_1719_);
return v_res_1724_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__7(void){
_start:
{
lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1739_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__6));
v___x_1740_ = l_Lean_stringToMessageData(v___x_1739_);
return v___x_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC(lean_object* v_goal_1741_, lean_object* v_a_1742_, lean_object* v_a_1743_, lean_object* v_a_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_, lean_object* v_a_1747_, lean_object* v_a_1748_, lean_object* v_a_1749_, lean_object* v_a_1750_, lean_object* v_a_1751_, lean_object* v_a_1752_){
_start:
{
lean_object* v_goal_1755_; lean_object* v___y_1756_; lean_object* v_disch_1757_; lean_object* v___y_1758_; lean_object* v___y_1759_; lean_object* v___y_1760_; lean_object* v___y_1761_; lean_object* v___y_1762_; lean_object* v___y_1763_; lean_object* v___y_1764_; lean_object* v___y_1765_; lean_object* v___y_1766_; lean_object* v___y_1767_; lean_object* v_goal_1809_; lean_object* v___y_1810_; lean_object* v_disch_1811_; uint8_t v_trivial_1812_; lean_object* v___y_1813_; lean_object* v___y_1814_; lean_object* v___y_1815_; lean_object* v___y_1816_; lean_object* v___y_1817_; lean_object* v___y_1818_; lean_object* v___y_1819_; lean_object* v___y_1820_; lean_object* v___y_1821_; lean_object* v___y_1822_; lean_object* v_goal_1852_; lean_object* v___y_1853_; lean_object* v___y_1854_; lean_object* v___y_1855_; lean_object* v___y_1856_; lean_object* v___y_1857_; lean_object* v___y_1858_; lean_object* v___y_1859_; lean_object* v___y_1860_; lean_object* v___y_1861_; lean_object* v___y_1862_; lean_object* v___y_1863_; lean_object* v_mvarId_1866_; lean_object* v___x_1867_; 
v_mvarId_1866_ = lean_ctor_get(v_goal_1741_, 1);
lean_inc(v_mvarId_1866_);
v___x_1867_ = l_Lean_MVarId_getType(v_mvarId_1866_, v_a_1749_, v_a_1750_, v_a_1751_, v_a_1752_);
if (lean_obj_tag(v___x_1867_) == 0)
{
lean_object* v_a_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; uint8_t v___x_1871_; 
v_a_1868_ = lean_ctor_get(v___x_1867_, 0);
lean_inc(v_a_1868_);
lean_dec_ref_known(v___x_1867_, 1);
v___x_1869_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__3));
v___x_1870_ = lean_unsigned_to_nat(4u);
v___x_1871_ = l_Lean_Expr_isAppOfArity(v_a_1868_, v___x_1869_, v___x_1870_);
if (v___x_1871_ == 0)
{
lean_dec(v_a_1868_);
v_goal_1852_ = v_goal_1741_;
v___y_1853_ = v_a_1742_;
v___y_1854_ = v_a_1743_;
v___y_1855_ = v_a_1744_;
v___y_1856_ = v_a_1745_;
v___y_1857_ = v_a_1746_;
v___y_1858_ = v_a_1747_;
v___y_1859_ = v_a_1748_;
v___y_1860_ = v_a_1749_;
v___y_1861_ = v_a_1750_;
v___y_1862_ = v_a_1751_;
v___y_1863_ = v_a_1752_;
goto v___jp_1851_;
}
else
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1872_ = l_Lean_Expr_appFn_x21(v_a_1868_);
lean_dec(v_a_1868_);
v___x_1873_ = l_Lean_Expr_appFn_x21(v___x_1872_);
v___x_1874_ = l_Lean_Expr_appFn_x21(v___x_1873_);
lean_dec_ref(v___x_1873_);
v___x_1875_ = l_Lean_Expr_appArg_x21(v___x_1874_);
lean_dec_ref(v___x_1874_);
if (lean_obj_tag(v___x_1875_) == 3)
{
lean_object* v_u_1876_; 
v_u_1876_ = lean_ctor_get(v___x_1875_, 0);
lean_inc(v_u_1876_);
lean_dec_ref_known(v___x_1875_, 1);
if (lean_obj_tag(v_u_1876_) == 0)
{
lean_object* v___x_1877_; lean_object* v___x_1878_; uint8_t v___x_1879_; 
v___x_1877_ = l_Lean_Expr_appArg_x21(v___x_1872_);
lean_dec_ref(v___x_1872_);
v___x_1878_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__5));
v___x_1879_ = l_Lean_Expr_isAppOf(v___x_1877_, v___x_1878_);
lean_dec_ref(v___x_1877_);
if (v___x_1879_ == 0)
{
v_goal_1852_ = v_goal_1741_;
v___y_1853_ = v_a_1742_;
v___y_1854_ = v_a_1743_;
v___y_1855_ = v_a_1744_;
v___y_1856_ = v_a_1745_;
v___y_1857_ = v_a_1746_;
v___y_1858_ = v_a_1747_;
v___y_1859_ = v_a_1748_;
v___y_1860_ = v_a_1749_;
v___y_1861_ = v_a_1750_;
v___y_1862_ = v_a_1751_;
v___y_1863_ = v_a_1752_;
goto v___jp_1851_;
}
else
{
lean_object* v_elimPreRule_1880_; lean_object* v_disch_1881_; uint8_t v_trivial_1882_; lean_object* v___x_1883_; 
v_elimPreRule_1880_ = lean_ctor_get(v_a_1742_, 1);
v_disch_1881_ = lean_ctor_get(v_a_1742_, 4);
v_trivial_1882_ = lean_ctor_get_uint8(v_a_1742_, sizeof(void*)*7);
lean_inc_ref(v_elimPreRule_1880_);
v___x_1883_ = l_Lean_Meta_Grind_Goal_apply(v_goal_1741_, v_elimPreRule_1880_, v_a_1747_, v_a_1748_, v_a_1749_, v_a_1750_, v_a_1751_, v_a_1752_);
if (lean_obj_tag(v___x_1883_) == 0)
{
lean_object* v_a_1884_; lean_object* v___y_1886_; lean_object* v___y_1887_; lean_object* v___y_1888_; lean_object* v___y_1889_; lean_object* v___y_1890_; lean_object* v___y_1891_; lean_object* v___y_1892_; lean_object* v___y_1893_; lean_object* v___y_1894_; lean_object* v___y_1895_; lean_object* v___y_1896_; 
v_a_1884_ = lean_ctor_get(v___x_1883_, 0);
lean_inc(v_a_1884_);
lean_dec_ref_known(v___x_1883_, 1);
if (lean_obj_tag(v_a_1884_) == 1)
{
lean_object* v_subgoals_1899_; 
v_subgoals_1899_ = lean_ctor_get(v_a_1884_, 0);
lean_inc(v_subgoals_1899_);
lean_dec_ref_known(v_a_1884_, 1);
if (lean_obj_tag(v_subgoals_1899_) == 1)
{
lean_object* v_tail_1900_; 
v_tail_1900_ = lean_ctor_get(v_subgoals_1899_, 1);
if (lean_obj_tag(v_tail_1900_) == 0)
{
lean_object* v_head_1901_; 
v_head_1901_ = lean_ctor_get(v_subgoals_1899_, 0);
lean_inc(v_head_1901_);
lean_dec_ref_known(v_subgoals_1899_, 2);
v_goal_1809_ = v_head_1901_;
v___y_1810_ = v_a_1742_;
v_disch_1811_ = v_disch_1881_;
v_trivial_1812_ = v_trivial_1882_;
v___y_1813_ = v_a_1743_;
v___y_1814_ = v_a_1744_;
v___y_1815_ = v_a_1745_;
v___y_1816_ = v_a_1746_;
v___y_1817_ = v_a_1747_;
v___y_1818_ = v_a_1748_;
v___y_1819_ = v_a_1749_;
v___y_1820_ = v_a_1750_;
v___y_1821_ = v_a_1751_;
v___y_1822_ = v_a_1752_;
goto v___jp_1808_;
}
else
{
lean_dec_ref_known(v_subgoals_1899_, 2);
v___y_1886_ = v_a_1742_;
v___y_1887_ = v_a_1743_;
v___y_1888_ = v_a_1744_;
v___y_1889_ = v_a_1745_;
v___y_1890_ = v_a_1746_;
v___y_1891_ = v_a_1747_;
v___y_1892_ = v_a_1748_;
v___y_1893_ = v_a_1749_;
v___y_1894_ = v_a_1750_;
v___y_1895_ = v_a_1751_;
v___y_1896_ = v_a_1752_;
goto v___jp_1885_;
}
}
else
{
lean_dec(v_subgoals_1899_);
v___y_1886_ = v_a_1742_;
v___y_1887_ = v_a_1743_;
v___y_1888_ = v_a_1744_;
v___y_1889_ = v_a_1745_;
v___y_1890_ = v_a_1746_;
v___y_1891_ = v_a_1747_;
v___y_1892_ = v_a_1748_;
v___y_1893_ = v_a_1749_;
v___y_1894_ = v_a_1750_;
v___y_1895_ = v_a_1751_;
v___y_1896_ = v_a_1752_;
goto v___jp_1885_;
}
}
else
{
lean_dec(v_a_1884_);
v___y_1886_ = v_a_1742_;
v___y_1887_ = v_a_1743_;
v___y_1888_ = v_a_1744_;
v___y_1889_ = v_a_1745_;
v___y_1890_ = v_a_1746_;
v___y_1891_ = v_a_1747_;
v___y_1892_ = v_a_1748_;
v___y_1893_ = v_a_1749_;
v___y_1894_ = v_a_1750_;
v___y_1895_ = v_a_1751_;
v___y_1896_ = v_a_1752_;
goto v___jp_1885_;
}
v___jp_1885_:
{
lean_object* v___x_1897_; lean_object* v___x_1898_; 
v___x_1897_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__7, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__7_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___closed__7);
v___x_1898_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__1___redArg(v___x_1897_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_);
return v___x_1898_;
}
}
else
{
lean_object* v_a_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1909_; 
v_a_1902_ = lean_ctor_get(v___x_1883_, 0);
v_isSharedCheck_1909_ = !lean_is_exclusive(v___x_1883_);
if (v_isSharedCheck_1909_ == 0)
{
v___x_1904_ = v___x_1883_;
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_a_1902_);
lean_dec(v___x_1883_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___x_1907_; 
if (v_isShared_1905_ == 0)
{
v___x_1907_ = v___x_1904_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_a_1902_);
v___x_1907_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
return v___x_1907_;
}
}
}
}
}
else
{
lean_dec(v_u_1876_);
lean_dec_ref(v___x_1872_);
v_goal_1852_ = v_goal_1741_;
v___y_1853_ = v_a_1742_;
v___y_1854_ = v_a_1743_;
v___y_1855_ = v_a_1744_;
v___y_1856_ = v_a_1745_;
v___y_1857_ = v_a_1746_;
v___y_1858_ = v_a_1747_;
v___y_1859_ = v_a_1748_;
v___y_1860_ = v_a_1749_;
v___y_1861_ = v_a_1750_;
v___y_1862_ = v_a_1751_;
v___y_1863_ = v_a_1752_;
goto v___jp_1851_;
}
}
else
{
lean_dec_ref(v___x_1875_);
lean_dec_ref(v___x_1872_);
v_goal_1852_ = v_goal_1741_;
v___y_1853_ = v_a_1742_;
v___y_1854_ = v_a_1743_;
v___y_1855_ = v_a_1744_;
v___y_1856_ = v_a_1745_;
v___y_1857_ = v_a_1746_;
v___y_1858_ = v_a_1747_;
v___y_1859_ = v_a_1748_;
v___y_1860_ = v_a_1749_;
v___y_1861_ = v_a_1750_;
v___y_1862_ = v_a_1751_;
v___y_1863_ = v_a_1752_;
goto v___jp_1851_;
}
}
}
else
{
lean_object* v_a_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1917_; 
lean_dec_ref(v_goal_1741_);
v_a_1910_ = lean_ctor_get(v___x_1867_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1867_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1912_ = v___x_1867_;
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_a_1910_);
lean_dec(v___x_1867_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v___x_1915_; 
if (v_isShared_1913_ == 0)
{
v___x_1915_ = v___x_1912_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_a_1910_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
return v___x_1915_;
}
}
}
v___jp_1754_:
{
lean_object* v___x_1768_; 
lean_inc(v_disch_1757_);
v___x_1768_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run(v_goal_1755_, v_disch_1757_, v___y_1756_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_, v___y_1765_, v___y_1766_, v___y_1767_);
if (lean_obj_tag(v___x_1768_) == 0)
{
lean_object* v_a_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; 
v_a_1769_ = lean_ctor_get(v___x_1768_, 0);
lean_inc(v_a_1769_);
lean_dec_ref_known(v___x_1768_, 1);
v___x_1770_ = lean_box(0);
v___x_1771_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__0___redArg(v_a_1769_, v___x_1770_, v___y_1765_);
if (lean_obj_tag(v___x_1771_) == 0)
{
lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1798_; 
v_isSharedCheck_1798_ = !lean_is_exclusive(v___x_1771_);
if (v_isSharedCheck_1798_ == 0)
{
lean_object* v_unused_1799_; 
v_unused_1799_ = lean_ctor_get(v___x_1771_, 0);
lean_dec(v_unused_1799_);
v___x_1773_ = v___x_1771_;
v_isShared_1774_ = v_isSharedCheck_1798_;
goto v_resetjp_1772_;
}
else
{
lean_dec(v___x_1771_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1798_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1775_; lean_object* v_specBackwardRuleCache_1776_; lean_object* v_splitBackwardRuleCache_1777_; lean_object* v_logicBackwardRuleCache_1778_; lean_object* v_invariants_1779_; lean_object* v_vcs_1780_; lean_object* v_simpState_1781_; lean_object* v_jps_1782_; lean_object* v_fuel_1783_; lean_object* v_inlineHandledInvariants_1784_; uint8_t v_dischTacFailed_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1797_; 
v___x_1775_ = lean_st_ref_take(v___y_1758_);
v_specBackwardRuleCache_1776_ = lean_ctor_get(v___x_1775_, 0);
v_splitBackwardRuleCache_1777_ = lean_ctor_get(v___x_1775_, 1);
v_logicBackwardRuleCache_1778_ = lean_ctor_get(v___x_1775_, 2);
v_invariants_1779_ = lean_ctor_get(v___x_1775_, 3);
v_vcs_1780_ = lean_ctor_get(v___x_1775_, 4);
v_simpState_1781_ = lean_ctor_get(v___x_1775_, 5);
v_jps_1782_ = lean_ctor_get(v___x_1775_, 6);
v_fuel_1783_ = lean_ctor_get(v___x_1775_, 7);
v_inlineHandledInvariants_1784_ = lean_ctor_get(v___x_1775_, 8);
v_dischTacFailed_1785_ = lean_ctor_get_uint8(v___x_1775_, sizeof(void*)*9);
v_isSharedCheck_1797_ = !lean_is_exclusive(v___x_1775_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1787_ = v___x_1775_;
v_isShared_1788_ = v_isSharedCheck_1797_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_inlineHandledInvariants_1784_);
lean_inc(v_fuel_1783_);
lean_inc(v_jps_1782_);
lean_inc(v_simpState_1781_);
lean_inc(v_vcs_1780_);
lean_inc(v_invariants_1779_);
lean_inc(v_logicBackwardRuleCache_1778_);
lean_inc(v_splitBackwardRuleCache_1777_);
lean_inc(v_specBackwardRuleCache_1776_);
lean_dec(v___x_1775_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1797_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___x_1789_; lean_object* v___x_1791_; 
v___x_1789_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_vcs_1780_, v_a_1769_);
if (v_isShared_1788_ == 0)
{
lean_ctor_set(v___x_1787_, 4, v___x_1789_);
v___x_1791_ = v___x_1787_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v_specBackwardRuleCache_1776_);
lean_ctor_set(v_reuseFailAlloc_1796_, 1, v_splitBackwardRuleCache_1777_);
lean_ctor_set(v_reuseFailAlloc_1796_, 2, v_logicBackwardRuleCache_1778_);
lean_ctor_set(v_reuseFailAlloc_1796_, 3, v_invariants_1779_);
lean_ctor_set(v_reuseFailAlloc_1796_, 4, v___x_1789_);
lean_ctor_set(v_reuseFailAlloc_1796_, 5, v_simpState_1781_);
lean_ctor_set(v_reuseFailAlloc_1796_, 6, v_jps_1782_);
lean_ctor_set(v_reuseFailAlloc_1796_, 7, v_fuel_1783_);
lean_ctor_set(v_reuseFailAlloc_1796_, 8, v_inlineHandledInvariants_1784_);
lean_ctor_set_uint8(v_reuseFailAlloc_1796_, sizeof(void*)*9, v_dischTacFailed_1785_);
v___x_1791_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
lean_object* v___x_1792_; lean_object* v___x_1794_; 
v___x_1792_ = lean_st_ref_set(v___y_1758_, v___x_1791_);
if (v_isShared_1774_ == 0)
{
lean_ctor_set(v___x_1773_, 0, v___x_1770_);
v___x_1794_ = v___x_1773_;
goto v_reusejp_1793_;
}
else
{
lean_object* v_reuseFailAlloc_1795_; 
v_reuseFailAlloc_1795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1795_, 0, v___x_1770_);
v___x_1794_ = v_reuseFailAlloc_1795_;
goto v_reusejp_1793_;
}
v_reusejp_1793_:
{
return v___x_1794_;
}
}
}
}
}
else
{
lean_dec(v_a_1769_);
return v___x_1771_;
}
}
else
{
lean_object* v_a_1800_; lean_object* v___x_1802_; uint8_t v_isShared_1803_; uint8_t v_isSharedCheck_1807_; 
v_a_1800_ = lean_ctor_get(v___x_1768_, 0);
v_isSharedCheck_1807_ = !lean_is_exclusive(v___x_1768_);
if (v_isSharedCheck_1807_ == 0)
{
v___x_1802_ = v___x_1768_;
v_isShared_1803_ = v_isSharedCheck_1807_;
goto v_resetjp_1801_;
}
else
{
lean_inc(v_a_1800_);
lean_dec(v___x_1768_);
v___x_1802_ = lean_box(0);
v_isShared_1803_ = v_isSharedCheck_1807_;
goto v_resetjp_1801_;
}
v_resetjp_1801_:
{
lean_object* v___x_1805_; 
if (v_isShared_1803_ == 0)
{
v___x_1805_ = v___x_1802_;
goto v_reusejp_1804_;
}
else
{
lean_object* v_reuseFailAlloc_1806_; 
v_reuseFailAlloc_1806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1806_, 0, v_a_1800_);
v___x_1805_ = v_reuseFailAlloc_1806_;
goto v_reusejp_1804_;
}
v_reusejp_1804_:
{
return v___x_1805_;
}
}
}
}
v___jp_1808_:
{
if (v_trivial_1812_ == 0)
{
v_goal_1755_ = v_goal_1809_;
v___y_1756_ = v___y_1810_;
v_disch_1757_ = v_disch_1811_;
v___y_1758_ = v___y_1813_;
v___y_1759_ = v___y_1814_;
v___y_1760_ = v___y_1815_;
v___y_1761_ = v___y_1816_;
v___y_1762_ = v___y_1817_;
v___y_1763_ = v___y_1818_;
v___y_1764_ = v___y_1819_;
v___y_1765_ = v___y_1820_;
v___y_1766_ = v___y_1821_;
v___y_1767_ = v___y_1822_;
goto v___jp_1754_;
}
else
{
lean_object* v_toGoalState_1823_; lean_object* v_mvarId_1824_; lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1850_; 
v_toGoalState_1823_ = lean_ctor_get(v_goal_1809_, 0);
v_mvarId_1824_ = lean_ctor_get(v_goal_1809_, 1);
v_isSharedCheck_1850_ = !lean_is_exclusive(v_goal_1809_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1826_ = v_goal_1809_;
v_isShared_1827_ = v_isSharedCheck_1850_;
goto v_resetjp_1825_;
}
else
{
lean_inc(v_mvarId_1824_);
lean_inc(v_toGoalState_1823_);
lean_dec(v_goal_1809_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1850_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
lean_object* v___x_1828_; 
v___x_1828_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl(v_mvarId_1824_, v___y_1810_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_);
if (lean_obj_tag(v___x_1828_) == 0)
{
lean_object* v_a_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1841_; 
v_a_1829_ = lean_ctor_get(v___x_1828_, 0);
v_isSharedCheck_1841_ = !lean_is_exclusive(v___x_1828_);
if (v_isSharedCheck_1841_ == 0)
{
v___x_1831_ = v___x_1828_;
v_isShared_1832_ = v_isSharedCheck_1841_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_a_1829_);
lean_dec(v___x_1828_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1841_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
if (lean_obj_tag(v_a_1829_) == 1)
{
lean_object* v_val_1833_; lean_object* v___x_1835_; 
lean_del_object(v___x_1831_);
v_val_1833_ = lean_ctor_get(v_a_1829_, 0);
lean_inc(v_val_1833_);
lean_dec_ref_known(v_a_1829_, 1);
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 1, v_val_1833_);
v___x_1835_ = v___x_1826_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1836_; 
v_reuseFailAlloc_1836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1836_, 0, v_toGoalState_1823_);
lean_ctor_set(v_reuseFailAlloc_1836_, 1, v_val_1833_);
v___x_1835_ = v_reuseFailAlloc_1836_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
v_goal_1755_ = v___x_1835_;
v___y_1756_ = v___y_1810_;
v_disch_1757_ = v_disch_1811_;
v___y_1758_ = v___y_1813_;
v___y_1759_ = v___y_1814_;
v___y_1760_ = v___y_1815_;
v___y_1761_ = v___y_1816_;
v___y_1762_ = v___y_1817_;
v___y_1763_ = v___y_1818_;
v___y_1764_ = v___y_1819_;
v___y_1765_ = v___y_1820_;
v___y_1766_ = v___y_1821_;
v___y_1767_ = v___y_1822_;
goto v___jp_1754_;
}
}
else
{
lean_object* v___x_1837_; lean_object* v___x_1839_; 
lean_dec(v_a_1829_);
lean_del_object(v___x_1826_);
lean_dec_ref(v_toGoalState_1823_);
v___x_1837_ = lean_box(0);
if (v_isShared_1832_ == 0)
{
lean_ctor_set(v___x_1831_, 0, v___x_1837_);
v___x_1839_ = v___x_1831_;
goto v_reusejp_1838_;
}
else
{
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v___x_1837_);
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
lean_del_object(v___x_1826_);
lean_dec_ref(v_toGoalState_1823_);
v_a_1842_ = lean_ctor_get(v___x_1828_, 0);
v_isSharedCheck_1849_ = !lean_is_exclusive(v___x_1828_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1844_ = v___x_1828_;
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
else
{
lean_inc(v_a_1842_);
lean_dec(v___x_1828_);
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
v___jp_1851_:
{
lean_object* v_disch_1864_; uint8_t v_trivial_1865_; 
v_disch_1864_ = lean_ctor_get(v___y_1853_, 4);
v_trivial_1865_ = lean_ctor_get_uint8(v___y_1853_, sizeof(void*)*7);
v_goal_1809_ = v_goal_1852_;
v___y_1810_ = v___y_1853_;
v_disch_1811_ = v_disch_1864_;
v_trivial_1812_ = v_trivial_1865_;
v___y_1813_ = v___y_1854_;
v___y_1814_ = v___y_1855_;
v___y_1815_ = v___y_1856_;
v___y_1816_ = v___y_1857_;
v___y_1817_ = v___y_1858_;
v___y_1818_ = v___y_1859_;
v___y_1819_ = v___y_1860_;
v___y_1820_ = v___y_1861_;
v___y_1821_ = v___y_1862_;
v___y_1822_ = v___y_1863_;
goto v___jp_1808_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC___boxed(lean_object* v_goal_1918_, lean_object* v_a_1919_, lean_object* v_a_1920_, lean_object* v_a_1921_, lean_object* v_a_1922_, lean_object* v_a_1923_, lean_object* v_a_1924_, lean_object* v_a_1925_, lean_object* v_a_1926_, lean_object* v_a_1927_, lean_object* v_a_1928_, lean_object* v_a_1929_, lean_object* v_a_1930_){
_start:
{
lean_object* v_res_1931_; 
v_res_1931_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC(v_goal_1918_, v_a_1919_, v_a_1920_, v_a_1921_, v_a_1922_, v_a_1923_, v_a_1924_, v_a_1925_, v_a_1926_, v_a_1927_, v_a_1928_, v_a_1929_);
lean_dec(v_a_1929_);
lean_dec_ref(v_a_1928_);
lean_dec(v_a_1927_);
lean_dec_ref(v_a_1926_);
lean_dec(v_a_1925_);
lean_dec_ref(v_a_1924_);
lean_dec(v_a_1923_);
lean_dec_ref(v_a_1922_);
lean_dec(v_a_1921_);
lean_dec(v_a_1920_);
lean_dec_ref(v_a_1919_);
return v_res_1931_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__0(lean_object* v_as_1932_, lean_object* v_as_x27_1933_, lean_object* v_b_1934_, lean_object* v_a_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_){
_start:
{
lean_object* v___x_1948_; 
v___x_1948_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__0___redArg(v_as_x27_1933_, v_b_1934_, v___y_1944_);
return v___x_1948_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__0___boxed(lean_object* v_as_1949_, lean_object* v_as_x27_1950_, lean_object* v_b_1951_, lean_object* v_a_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_){
_start:
{
lean_object* v_res_1965_; 
v_res_1965_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__0(v_as_1949_, v_as_x27_1950_, v_b_1951_, v_a_1952_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_);
lean_dec(v___y_1963_);
lean_dec_ref(v___y_1962_);
lean_dec(v___y_1961_);
lean_dec_ref(v___y_1960_);
lean_dec(v___y_1959_);
lean_dec_ref(v___y_1958_);
lean_dec(v___y_1957_);
lean_dec_ref(v___y_1956_);
lean_dec(v___y_1955_);
lean_dec(v___y_1954_);
lean_dec_ref(v___y_1953_);
lean_dec(v_as_x27_1950_);
lean_dec(v_as_1949_);
return v_res_1965_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__1(lean_object* v_00_u03b1_1966_, lean_object* v_msg_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_){
_start:
{
lean_object* v___x_1980_; 
v___x_1980_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__1___redArg(v_msg_1967_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
return v___x_1980_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__1___boxed(lean_object* v_00_u03b1_1981_, lean_object* v_msg_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_){
_start:
{
lean_object* v_res_1995_; 
v_res_1995_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__1(v_00_u03b1_1981_, v_msg_1982_, v___y_1983_, v___y_1984_, v___y_1985_, v___y_1986_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_, v___y_1993_);
lean_dec(v___y_1993_);
lean_dec_ref(v___y_1992_);
lean_dec(v___y_1991_);
lean_dec_ref(v___y_1990_);
lean_dec(v___y_1989_);
lean_dec_ref(v___y_1988_);
lean_dec(v___y_1987_);
lean_dec_ref(v___y_1986_);
lean_dec(v___y_1985_);
lean_dec(v___y_1984_);
lean_dec_ref(v___y_1983_);
return v_res_1995_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__2(lean_object* v_grindSharedGoal_1996_, lean_object* v_scope_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_){
_start:
{
if (lean_obj_tag(v_a_1998_) == 0)
{
lean_object* v___x_2000_; 
lean_dec_ref(v_scope_1997_);
v___x_2000_ = l_List_reverse___redArg(v_a_1999_);
return v___x_2000_;
}
else
{
lean_object* v_head_2001_; lean_object* v_tail_2002_; lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2013_; 
v_head_2001_ = lean_ctor_get(v_a_1998_, 0);
v_tail_2002_ = lean_ctor_get(v_a_1998_, 1);
v_isSharedCheck_2013_ = !lean_is_exclusive(v_a_1998_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_2004_ = v_a_1998_;
v_isShared_2005_ = v_isSharedCheck_2013_;
goto v_resetjp_2003_;
}
else
{
lean_inc(v_tail_2002_);
lean_inc(v_head_2001_);
lean_dec(v_a_1998_);
v___x_2004_ = lean_box(0);
v_isShared_2005_ = v_isSharedCheck_2013_;
goto v_resetjp_2003_;
}
v_resetjp_2003_:
{
lean_object* v_toGoalState_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2010_; 
v_toGoalState_2006_ = lean_ctor_get(v_grindSharedGoal_1996_, 0);
lean_inc_ref(v_toGoalState_2006_);
v___x_2007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2007_, 0, v_toGoalState_2006_);
lean_ctor_set(v___x_2007_, 1, v_head_2001_);
lean_inc_ref(v_scope_1997_);
v___x_2008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2008_, 0, v___x_2007_);
lean_ctor_set(v___x_2008_, 1, v_scope_1997_);
if (v_isShared_2005_ == 0)
{
lean_ctor_set(v___x_2004_, 1, v_a_1999_);
lean_ctor_set(v___x_2004_, 0, v___x_2008_);
v___x_2010_ = v___x_2004_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v___x_2008_);
lean_ctor_set(v_reuseFailAlloc_2012_, 1, v_a_1999_);
v___x_2010_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
v_a_1998_ = v_tail_2002_;
v_a_1999_ = v___x_2010_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__2___boxed(lean_object* v_grindSharedGoal_2014_, lean_object* v_scope_2015_, lean_object* v_a_2016_, lean_object* v_a_2017_){
_start:
{
lean_object* v_res_2018_; 
v_res_2018_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__2(v_grindSharedGoal_2014_, v_scope_2015_, v_a_2016_, v_a_2017_);
lean_dec_ref(v_grindSharedGoal_2014_);
return v_res_2018_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__2(lean_object* v_scope_2019_, lean_object* v_a_2020_, lean_object* v_snd_2021_, lean_object* v_____r_2022_, lean_object* v_grindSharedGoal_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_){
_start:
{
lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; 
v___x_2036_ = lean_box(0);
v___x_2037_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__2(v_grindSharedGoal_2023_, v_scope_2019_, v_a_2020_, v___x_2036_);
v___x_2038_ = l_Std_Queue_enqueueAll___redArg(v___x_2037_, v_snd_2021_);
v___x_2039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2039_, 0, v___x_2038_);
v___x_2040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2040_, 0, v___x_2039_);
return v___x_2040_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__2___boxed(lean_object** _args){
lean_object* v_scope_2041_ = _args[0];
lean_object* v_a_2042_ = _args[1];
lean_object* v_snd_2043_ = _args[2];
lean_object* v_____r_2044_ = _args[3];
lean_object* v_grindSharedGoal_2045_ = _args[4];
lean_object* v___y_2046_ = _args[5];
lean_object* v___y_2047_ = _args[6];
lean_object* v___y_2048_ = _args[7];
lean_object* v___y_2049_ = _args[8];
lean_object* v___y_2050_ = _args[9];
lean_object* v___y_2051_ = _args[10];
lean_object* v___y_2052_ = _args[11];
lean_object* v___y_2053_ = _args[12];
lean_object* v___y_2054_ = _args[13];
lean_object* v___y_2055_ = _args[14];
lean_object* v___y_2056_ = _args[15];
lean_object* v___y_2057_ = _args[16];
_start:
{
lean_object* v_res_2058_; 
v_res_2058_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__2(v_scope_2041_, v_a_2042_, v_snd_2043_, v_____r_2044_, v_grindSharedGoal_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_, v___y_2055_, v___y_2056_);
lean_dec(v___y_2056_);
lean_dec_ref(v___y_2055_);
lean_dec(v___y_2054_);
lean_dec_ref(v___y_2053_);
lean_dec(v___y_2052_);
lean_dec_ref(v___y_2051_);
lean_dec(v___y_2050_);
lean_dec_ref(v___y_2049_);
lean_dec(v___y_2048_);
lean_dec(v___y_2047_);
lean_dec_ref(v___y_2046_);
lean_dec_ref(v_grindSharedGoal_2045_);
return v_res_2058_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2060_; lean_object* v___x_2061_; 
v___x_2060_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__0));
v___x_2061_ = l_Lean_stringToMessageData(v___x_2060_);
return v___x_2061_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__3(void){
_start:
{
lean_object* v___x_2063_; lean_object* v___x_2064_; 
v___x_2063_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__2));
v___x_2064_ = l_Lean_stringToMessageData(v___x_2063_);
return v___x_2064_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__5(void){
_start:
{
lean_object* v___x_2066_; lean_object* v___x_2067_; 
v___x_2066_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__4));
v___x_2067_ = l_Lean_stringToMessageData(v___x_2066_);
return v___x_2067_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__7(void){
_start:
{
lean_object* v___x_2069_; lean_object* v___x_2070_; 
v___x_2069_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__6));
v___x_2070_ = l_Lean_stringToMessageData(v___x_2069_);
return v___x_2070_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1(lean_object* v_a_2071_, lean_object* v_a_2072_){
_start:
{
if (lean_obj_tag(v_a_2071_) == 0)
{
lean_object* v___x_2073_; 
v___x_2073_ = l_List_reverse___redArg(v_a_2072_);
return v___x_2073_;
}
else
{
lean_object* v_head_2074_; lean_object* v_tail_2075_; lean_object* v___x_2077_; uint8_t v_isShared_2078_; uint8_t v_isSharedCheck_2103_; 
v_head_2074_ = lean_ctor_get(v_a_2071_, 0);
v_tail_2075_ = lean_ctor_get(v_a_2071_, 1);
v_isSharedCheck_2103_ = !lean_is_exclusive(v_a_2071_);
if (v_isSharedCheck_2103_ == 0)
{
v___x_2077_ = v_a_2071_;
v_isShared_2078_ = v_isSharedCheck_2103_;
goto v_resetjp_2076_;
}
else
{
lean_inc(v_tail_2075_);
lean_inc(v_head_2074_);
lean_dec(v_a_2071_);
v___x_2077_ = lean_box(0);
v_isShared_2078_ = v_isSharedCheck_2103_;
goto v_resetjp_2076_;
}
v_resetjp_2076_:
{
lean_object* v___y_2080_; 
switch(lean_obj_tag(v_head_2074_))
{
case 0:
{
lean_object* v_declName_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; 
v_declName_2085_ = lean_ctor_get(v_head_2074_, 0);
lean_inc(v_declName_2085_);
lean_dec_ref_known(v_head_2074_, 1);
v___x_2086_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__1, &l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__1_once, _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__1);
v___x_2087_ = l_Lean_MessageData_ofName(v_declName_2085_);
v___x_2088_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2088_, 0, v___x_2086_);
lean_ctor_set(v___x_2088_, 1, v___x_2087_);
v___y_2080_ = v___x_2088_;
goto v___jp_2079_;
}
case 1:
{
lean_object* v_fvarId_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; 
v_fvarId_2089_ = lean_ctor_get(v_head_2074_, 0);
lean_inc(v_fvarId_2089_);
lean_dec_ref_known(v_head_2074_, 1);
v___x_2090_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__3, &l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__3_once, _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__3);
v___x_2091_ = l_Lean_mkFVar(v_fvarId_2089_);
v___x_2092_ = l_Lean_MessageData_ofExpr(v___x_2091_);
v___x_2093_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2093_, 0, v___x_2090_);
lean_ctor_set(v___x_2093_, 1, v___x_2092_);
v___y_2080_ = v___x_2093_;
goto v___jp_2079_;
}
default: 
{
lean_object* v_ref_2094_; lean_object* v_proof_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; 
v_ref_2094_ = lean_ctor_get(v_head_2074_, 1);
lean_inc(v_ref_2094_);
v_proof_2095_ = lean_ctor_get(v_head_2074_, 2);
lean_inc_ref(v_proof_2095_);
lean_dec_ref_known(v_head_2074_, 3);
v___x_2096_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__5, &l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__5_once, _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__5);
v___x_2097_ = l_Lean_MessageData_ofSyntax(v_ref_2094_);
v___x_2098_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2098_, 0, v___x_2096_);
lean_ctor_set(v___x_2098_, 1, v___x_2097_);
v___x_2099_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__7, &l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__7_once, _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1___closed__7);
v___x_2100_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2100_, 0, v___x_2098_);
lean_ctor_set(v___x_2100_, 1, v___x_2099_);
v___x_2101_ = l_Lean_MessageData_ofExpr(v_proof_2095_);
v___x_2102_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2102_, 0, v___x_2100_);
lean_ctor_set(v___x_2102_, 1, v___x_2101_);
v___y_2080_ = v___x_2102_;
goto v___jp_2079_;
}
}
v___jp_2079_:
{
lean_object* v___x_2082_; 
if (v_isShared_2078_ == 0)
{
lean_ctor_set(v___x_2077_, 1, v_a_2072_);
lean_ctor_set(v___x_2077_, 0, v___y_2080_);
v___x_2082_ = v___x_2077_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v___y_2080_);
lean_ctor_set(v_reuseFailAlloc_2084_, 1, v_a_2072_);
v___x_2082_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
v_a_2071_ = v_tail_2075_;
v_a_2072_ = v___x_2082_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__0(size_t v_sz_2104_, size_t v_i_2105_, lean_object* v_bs_2106_){
_start:
{
uint8_t v___x_2107_; 
v___x_2107_ = lean_usize_dec_lt(v_i_2105_, v_sz_2104_);
if (v___x_2107_ == 0)
{
return v_bs_2106_;
}
else
{
lean_object* v_v_2108_; lean_object* v_proof_2109_; lean_object* v___x_2110_; lean_object* v_bs_x27_2111_; size_t v___x_2112_; size_t v___x_2113_; lean_object* v___x_2114_; 
v_v_2108_ = lean_array_uget_borrowed(v_bs_2106_, v_i_2105_);
v_proof_2109_ = lean_ctor_get(v_v_2108_, 1);
lean_inc_ref(v_proof_2109_);
v___x_2110_ = lean_unsigned_to_nat(0u);
v_bs_x27_2111_ = lean_array_uset(v_bs_2106_, v_i_2105_, v___x_2110_);
v___x_2112_ = ((size_t)1ULL);
v___x_2113_ = lean_usize_add(v_i_2105_, v___x_2112_);
v___x_2114_ = lean_array_uset(v_bs_x27_2111_, v_i_2105_, v_proof_2109_);
v_i_2105_ = v___x_2113_;
v_bs_2106_ = v___x_2114_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__0___boxed(lean_object* v_sz_2116_, lean_object* v_i_2117_, lean_object* v_bs_2118_){
_start:
{
size_t v_sz_boxed_2119_; size_t v_i_boxed_2120_; lean_object* v_res_2121_; 
v_sz_boxed_2119_ = lean_unbox_usize(v_sz_2116_);
lean_dec(v_sz_2116_);
v_i_boxed_2120_ = lean_unbox_usize(v_i_2117_);
lean_dec(v_i_2117_);
v_res_2121_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__0(v_sz_boxed_2119_, v_i_boxed_2120_, v_bs_2118_);
return v_res_2121_;
}
}
static lean_object* _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2123_ = ((lean_object*)(l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__0));
v___x_2124_ = l_Lean_stringToMessageData(v___x_2123_);
return v___x_2124_;
}
}
static lean_object* _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__3(void){
_start:
{
lean_object* v___x_2126_; lean_object* v___x_2127_; 
v___x_2126_ = ((lean_object*)(l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__2));
v___x_2127_ = l_Lean_stringToMessageData(v___x_2126_);
return v___x_2127_;
}
}
static lean_object* _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__5(void){
_start:
{
lean_object* v___x_2129_; lean_object* v___x_2130_; 
v___x_2129_ = ((lean_object*)(l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__4));
v___x_2130_ = l_Lean_stringToMessageData(v___x_2129_);
return v___x_2130_;
}
}
static lean_object* _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__7(void){
_start:
{
lean_object* v___x_2132_; lean_object* v___x_2133_; 
v___x_2132_ = ((lean_object*)(l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__6));
v___x_2133_ = l_Lean_stringToMessageData(v___x_2132_);
return v___x_2133_;
}
}
static lean_object* _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__9(void){
_start:
{
lean_object* v___x_2135_; lean_object* v___x_2136_; 
v___x_2135_ = ((lean_object*)(l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__8));
v___x_2136_ = l_Lean_stringToMessageData(v___x_2135_);
return v___x_2136_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1(uint8_t v___x_2137_, lean_object* v_monad_2138_, lean_object* v_e_2139_, lean_object* v_thms_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_){
_start:
{
if (v___x_2137_ == 0)
{
lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; size_t v_sz_2162_; size_t v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
v___x_2153_ = lean_obj_once(&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__1, &l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__1_once, _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__1);
v___x_2154_ = l_Lean_MessageData_ofExpr(v_monad_2138_);
v___x_2155_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2155_, 0, v___x_2153_);
lean_ctor_set(v___x_2155_, 1, v___x_2154_);
v___x_2156_ = lean_obj_once(&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__3, &l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__3_once, _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__3);
v___x_2157_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2157_, 0, v___x_2155_);
lean_ctor_set(v___x_2157_, 1, v___x_2156_);
v___x_2158_ = l_Lean_MessageData_ofExpr(v_e_2139_);
v___x_2159_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2159_, 0, v___x_2157_);
lean_ctor_set(v___x_2159_, 1, v___x_2158_);
v___x_2160_ = lean_obj_once(&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__5, &l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__5_once, _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__5);
v___x_2161_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2161_, 0, v___x_2159_);
lean_ctor_set(v___x_2161_, 1, v___x_2160_);
v_sz_2162_ = lean_array_size(v_thms_2140_);
v___x_2163_ = ((size_t)0ULL);
v___x_2164_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__0(v_sz_2162_, v___x_2163_, v_thms_2140_);
v___x_2165_ = lean_array_to_list(v___x_2164_);
v___x_2166_ = lean_box(0);
v___x_2167_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__1(v___x_2165_, v___x_2166_);
v___x_2168_ = l_Lean_MessageData_ofList(v___x_2167_);
v___x_2169_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2169_, 0, v___x_2161_);
lean_ctor_set(v___x_2169_, 1, v___x_2168_);
v___x_2170_ = lean_obj_once(&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__7, &l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__7_once, _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__7);
v___x_2171_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2171_, 0, v___x_2169_);
lean_ctor_set(v___x_2171_, 1, v___x_2170_);
v___x_2172_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__1___redArg(v___x_2171_, v___y_2148_, v___y_2149_, v___y_2150_, v___y_2151_);
return v___x_2172_;
}
else
{
lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; 
lean_dec_ref(v_thms_2140_);
lean_dec_ref(v_monad_2138_);
v___x_2173_ = lean_obj_once(&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__9, &l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__9_once, _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__9);
v___x_2174_ = l_Lean_MessageData_ofExpr(v_e_2139_);
v___x_2175_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2175_, 0, v___x_2173_);
lean_ctor_set(v___x_2175_, 1, v___x_2174_);
v___x_2176_ = lean_obj_once(&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__7, &l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__7_once, _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___closed__7);
v___x_2177_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2177_, 0, v___x_2175_);
lean_ctor_set(v___x_2177_, 1, v___x_2176_);
v___x_2178_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__1___redArg(v___x_2177_, v___y_2148_, v___y_2149_, v___y_2150_, v___y_2151_);
return v___x_2178_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___boxed(lean_object* v___x_2179_, lean_object* v_monad_2180_, lean_object* v_e_2181_, lean_object* v_thms_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_){
_start:
{
uint8_t v___x_41739__boxed_2195_; lean_object* v_res_2196_; 
v___x_41739__boxed_2195_ = lean_unbox(v___x_2179_);
v_res_2196_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1(v___x_41739__boxed_2195_, v_monad_2180_, v_e_2181_, v_thms_2182_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_);
lean_dec(v___y_2193_);
lean_dec_ref(v___y_2192_);
lean_dec(v___y_2191_);
lean_dec_ref(v___y_2190_);
lean_dec(v___y_2189_);
lean_dec_ref(v___y_2188_);
lean_dec(v___y_2187_);
lean_dec_ref(v___y_2186_);
lean_dec(v___y_2185_);
lean_dec(v___y_2184_);
lean_dec_ref(v___y_2183_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__0(lean_object* v_goal_2197_, lean_object* v_snd_2198_, lean_object* v_target_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_){
_start:
{
lean_object* v___x_2212_; 
v___x_2212_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC(v_goal_2197_, v___y_2200_, v___y_2201_, v___y_2202_, v___y_2203_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_, v___y_2209_, v___y_2210_);
if (lean_obj_tag(v___x_2212_) == 0)
{
lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2220_; 
v_isSharedCheck_2220_ = !lean_is_exclusive(v___x_2212_);
if (v_isSharedCheck_2220_ == 0)
{
lean_object* v_unused_2221_; 
v_unused_2221_ = lean_ctor_get(v___x_2212_, 0);
lean_dec(v_unused_2221_);
v___x_2214_ = v___x_2212_;
v_isShared_2215_ = v_isSharedCheck_2220_;
goto v_resetjp_2213_;
}
else
{
lean_dec(v___x_2212_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2220_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v___x_2216_; lean_object* v___x_2218_; 
v___x_2216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2216_, 0, v_snd_2198_);
if (v_isShared_2215_ == 0)
{
lean_ctor_set(v___x_2214_, 0, v___x_2216_);
v___x_2218_ = v___x_2214_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v___x_2216_);
v___x_2218_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
return v___x_2218_;
}
}
}
else
{
lean_object* v_a_2222_; lean_object* v___x_2224_; uint8_t v_isShared_2225_; uint8_t v_isSharedCheck_2229_; 
lean_dec_ref(v_snd_2198_);
v_a_2222_ = lean_ctor_get(v___x_2212_, 0);
v_isSharedCheck_2229_ = !lean_is_exclusive(v___x_2212_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2224_ = v___x_2212_;
v_isShared_2225_ = v_isSharedCheck_2229_;
goto v_resetjp_2223_;
}
else
{
lean_inc(v_a_2222_);
lean_dec(v___x_2212_);
v___x_2224_ = lean_box(0);
v_isShared_2225_ = v_isSharedCheck_2229_;
goto v_resetjp_2223_;
}
v_resetjp_2223_:
{
lean_object* v___x_2227_; 
if (v_isShared_2225_ == 0)
{
v___x_2227_ = v___x_2224_;
goto v_reusejp_2226_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v_a_2222_);
v___x_2227_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
return v___x_2227_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__0___boxed(lean_object* v_goal_2230_, lean_object* v_snd_2231_, lean_object* v_target_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_){
_start:
{
lean_object* v_res_2245_; 
v_res_2245_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__0(v_goal_2230_, v_snd_2231_, v_target_2232_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_);
lean_dec(v___y_2243_);
lean_dec_ref(v___y_2242_);
lean_dec(v___y_2241_);
lean_dec_ref(v___y_2240_);
lean_dec(v___y_2239_);
lean_dec_ref(v___y_2238_);
lean_dec(v___y_2237_);
lean_dec_ref(v___y_2236_);
lean_dec(v___y_2235_);
lean_dec(v___y_2234_);
lean_dec_ref(v___y_2233_);
lean_dec_ref(v_target_2232_);
return v_res_2245_;
}
}
static lean_object* _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_2247_; lean_object* v___x_2248_; 
v___x_2247_ = ((lean_object*)(l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___closed__0));
v___x_2248_ = l_Lean_stringToMessageData(v___x_2247_);
return v___x_2248_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg(lean_object* v_a_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_){
_start:
{
lean_object* v___y_2263_; lean_object* v___x_2283_; 
lean_inc_ref(v_a_2249_);
v___x_2283_ = l_Std_Queue_dequeue_x3f___redArg(v_a_2249_);
if (lean_obj_tag(v___x_2283_) == 1)
{
lean_object* v_val_2284_; lean_object* v_fst_2285_; lean_object* v_goal_2286_; lean_object* v_snd_2287_; lean_object* v_scope_2288_; lean_object* v_mvarId_2289_; lean_object* v___x_2290_; 
lean_dec_ref(v_a_2249_);
v_val_2284_ = lean_ctor_get(v___x_2283_, 0);
lean_inc(v_val_2284_);
lean_dec_ref_known(v___x_2283_, 1);
v_fst_2285_ = lean_ctor_get(v_val_2284_, 0);
lean_inc(v_fst_2285_);
v_goal_2286_ = lean_ctor_get(v_fst_2285_, 0);
lean_inc_ref(v_goal_2286_);
v_snd_2287_ = lean_ctor_get(v_val_2284_, 1);
lean_inc(v_snd_2287_);
lean_dec(v_val_2284_);
v_scope_2288_ = lean_ctor_get(v_fst_2285_, 1);
lean_inc_ref(v_scope_2288_);
lean_dec(v_fst_2285_);
v_mvarId_2289_ = lean_ctor_get(v_goal_2286_, 1);
lean_inc(v_mvarId_2289_);
v___x_2290_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve(v_scope_2288_, v_mvarId_2289_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
if (lean_obj_tag(v___x_2290_) == 0)
{
lean_object* v_a_2291_; 
v_a_2291_ = lean_ctor_get(v___x_2290_, 0);
lean_inc(v_a_2291_);
lean_dec_ref_known(v___x_2290_, 1);
switch(lean_obj_tag(v_a_2291_))
{
case 2:
{
lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2311_; 
v_isSharedCheck_2311_ = !lean_is_exclusive(v_goal_2286_);
if (v_isSharedCheck_2311_ == 0)
{
lean_object* v_unused_2312_; lean_object* v_unused_2313_; 
v_unused_2312_ = lean_ctor_get(v_goal_2286_, 1);
lean_dec(v_unused_2312_);
v_unused_2313_ = lean_ctor_get(v_goal_2286_, 0);
lean_dec(v_unused_2313_);
v___x_2293_ = v_goal_2286_;
v_isShared_2294_ = v_isSharedCheck_2311_;
goto v_resetjp_2292_;
}
else
{
lean_dec(v_goal_2286_);
v___x_2293_ = lean_box(0);
v_isShared_2294_ = v_isSharedCheck_2311_;
goto v_resetjp_2292_;
}
v_resetjp_2292_:
{
lean_object* v_e_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2299_; 
v_e_2295_ = lean_ctor_get(v_a_2291_, 0);
lean_inc_ref(v_e_2295_);
lean_dec_ref_known(v_a_2291_, 1);
v___x_2296_ = lean_obj_once(&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___closed__1, &l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___closed__1_once, _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___closed__1);
v___x_2297_ = l_Lean_MessageData_ofExpr(v_e_2295_);
if (v_isShared_2294_ == 0)
{
lean_ctor_set_tag(v___x_2293_, 7);
lean_ctor_set(v___x_2293_, 1, v___x_2297_);
lean_ctor_set(v___x_2293_, 0, v___x_2296_);
v___x_2299_ = v___x_2293_;
goto v_reusejp_2298_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v___x_2296_);
lean_ctor_set(v_reuseFailAlloc_2310_, 1, v___x_2297_);
v___x_2299_ = v_reuseFailAlloc_2310_;
goto v_reusejp_2298_;
}
v_reusejp_2298_:
{
lean_object* v___x_2300_; 
v___x_2300_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC_spec__1___redArg(v___x_2299_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
if (lean_obj_tag(v___x_2300_) == 0)
{
lean_dec_ref_known(v___x_2300_, 1);
v_a_2249_ = v_snd_2287_;
goto _start;
}
else
{
lean_object* v_a_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2309_; 
lean_dec(v_snd_2287_);
v_a_2302_ = lean_ctor_get(v___x_2300_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2300_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2304_ = v___x_2300_;
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_a_2302_);
lean_dec(v___x_2300_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
lean_object* v___x_2307_; 
if (v_isShared_2305_ == 0)
{
v___x_2307_ = v___x_2304_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v_a_2302_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
}
}
}
}
case 3:
{
uint8_t v_errorOnMissingSpec_2314_; 
v_errorOnMissingSpec_2314_ = lean_ctor_get_uint8(v___y_2250_, sizeof(void*)*7 + 2);
if (v_errorOnMissingSpec_2314_ == 0)
{
lean_object* v___x_2315_; 
lean_dec_ref_known(v_a_2291_, 3);
v___x_2315_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_emitVC(v_goal_2286_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
if (lean_obj_tag(v___x_2315_) == 0)
{
lean_dec_ref_known(v___x_2315_, 1);
v_a_2249_ = v_snd_2287_;
goto _start;
}
else
{
lean_object* v_a_2317_; lean_object* v___x_2319_; uint8_t v_isShared_2320_; uint8_t v_isSharedCheck_2324_; 
lean_dec(v_snd_2287_);
v_a_2317_ = lean_ctor_get(v___x_2315_, 0);
v_isSharedCheck_2324_ = !lean_is_exclusive(v___x_2315_);
if (v_isSharedCheck_2324_ == 0)
{
v___x_2319_ = v___x_2315_;
v_isShared_2320_ = v_isSharedCheck_2324_;
goto v_resetjp_2318_;
}
else
{
lean_inc(v_a_2317_);
lean_dec(v___x_2315_);
v___x_2319_ = lean_box(0);
v_isShared_2320_ = v_isSharedCheck_2324_;
goto v_resetjp_2318_;
}
v_resetjp_2318_:
{
lean_object* v___x_2322_; 
if (v_isShared_2320_ == 0)
{
v___x_2322_ = v___x_2319_;
goto v_reusejp_2321_;
}
else
{
lean_object* v_reuseFailAlloc_2323_; 
v_reuseFailAlloc_2323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2323_, 0, v_a_2317_);
v___x_2322_ = v_reuseFailAlloc_2323_;
goto v_reusejp_2321_;
}
v_reusejp_2321_:
{
return v___x_2322_;
}
}
}
}
else
{
lean_object* v_e_2325_; lean_object* v_monad_2326_; lean_object* v_thms_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; uint8_t v___x_2330_; lean_object* v___x_2331_; lean_object* v___y_2332_; lean_object* v___x_2333_; 
lean_inc(v_mvarId_2289_);
lean_dec_ref(v_goal_2286_);
v_e_2325_ = lean_ctor_get(v_a_2291_, 0);
lean_inc_ref(v_e_2325_);
v_monad_2326_ = lean_ctor_get(v_a_2291_, 1);
lean_inc_ref(v_monad_2326_);
v_thms_2327_ = lean_ctor_get(v_a_2291_, 2);
lean_inc_ref(v_thms_2327_);
lean_dec_ref_known(v_a_2291_, 3);
v___x_2328_ = lean_array_get_size(v_thms_2327_);
v___x_2329_ = lean_unsigned_to_nat(0u);
v___x_2330_ = lean_nat_dec_eq(v___x_2328_, v___x_2329_);
v___x_2331_ = lean_box(v___x_2330_);
v___y_2332_ = lean_alloc_closure((void*)(l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__1___boxed), 16, 4);
lean_closure_set(v___y_2332_, 0, v___x_2331_);
lean_closure_set(v___y_2332_, 1, v_monad_2326_);
lean_closure_set(v___y_2332_, 2, v_e_2325_);
lean_closure_set(v___y_2332_, 3, v_thms_2327_);
v___x_2333_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_run_spec__1___redArg(v_mvarId_2289_, v___y_2332_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
if (lean_obj_tag(v___x_2333_) == 0)
{
lean_dec_ref_known(v___x_2333_, 1);
v_a_2249_ = v_snd_2287_;
goto _start;
}
else
{
lean_object* v_a_2335_; lean_object* v___x_2337_; uint8_t v_isShared_2338_; uint8_t v_isSharedCheck_2342_; 
lean_dec(v_snd_2287_);
v_a_2335_ = lean_ctor_get(v___x_2333_, 0);
v_isSharedCheck_2342_ = !lean_is_exclusive(v___x_2333_);
if (v_isSharedCheck_2342_ == 0)
{
v___x_2337_ = v___x_2333_;
v_isShared_2338_ = v_isSharedCheck_2342_;
goto v_resetjp_2336_;
}
else
{
lean_inc(v_a_2335_);
lean_dec(v___x_2333_);
v___x_2337_ = lean_box(0);
v_isShared_2338_ = v_isSharedCheck_2342_;
goto v_resetjp_2336_;
}
v_resetjp_2336_:
{
lean_object* v___x_2340_; 
if (v_isShared_2338_ == 0)
{
v___x_2340_ = v___x_2337_;
goto v_reusejp_2339_;
}
else
{
lean_object* v_reuseFailAlloc_2341_; 
v_reuseFailAlloc_2341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2341_, 0, v_a_2335_);
v___x_2340_ = v_reuseFailAlloc_2341_;
goto v_reusejp_2339_;
}
v_reusejp_2339_:
{
return v___x_2340_;
}
}
}
}
}
case 4:
{
lean_object* v_scope_2343_; lean_object* v_subgoals_2344_; lean_object* v___x_2345_; 
v_scope_2343_ = lean_ctor_get(v_a_2291_, 0);
lean_inc_ref(v_scope_2343_);
v_subgoals_2344_ = lean_ctor_get(v_a_2291_, 1);
lean_inc(v_subgoals_2344_);
lean_dec_ref_known(v_a_2291_, 2);
v___x_2345_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_handleInvariantSubgoals(v_subgoals_2344_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
lean_dec(v_subgoals_2344_);
if (lean_obj_tag(v___x_2345_) == 0)
{
lean_object* v_a_2346_; lean_object* v_disch_2347_; uint8_t v___y_2349_; uint8_t v___x_2364_; 
v_a_2346_ = lean_ctor_get(v___x_2345_, 0);
lean_inc(v_a_2346_);
lean_dec_ref_known(v___x_2345_, 1);
v_disch_2347_ = lean_ctor_get(v___y_2250_, 4);
v___x_2364_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_dischargeTactic_isGrind(v_disch_2347_);
if (v___x_2364_ == 0)
{
v___y_2349_ = v___x_2364_;
goto v___jp_2348_;
}
else
{
lean_object* v___x_2365_; lean_object* v___x_2366_; uint8_t v___x_2367_; 
v___x_2365_ = lean_unsigned_to_nat(1u);
v___x_2366_ = l_List_lengthTR___redArg(v_a_2346_);
v___x_2367_ = lean_nat_dec_lt(v___x_2365_, v___x_2366_);
lean_dec(v___x_2366_);
v___y_2349_ = v___x_2367_;
goto v___jp_2348_;
}
v___jp_2348_:
{
if (v___y_2349_ == 0)
{
lean_object* v___x_2350_; lean_object* v___x_2351_; 
v___x_2350_ = lean_box(0);
v___x_2351_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__2(v_scope_2343_, v_a_2346_, v_snd_2287_, v___x_2350_, v_goal_2286_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
lean_dec_ref(v_goal_2286_);
v___y_2263_ = v___x_2351_;
goto v___jp_2262_;
}
else
{
lean_object* v___x_2352_; 
v___x_2352_ = l_Lean_Meta_Grind_Goal_internalizeAll(v_goal_2286_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
if (lean_obj_tag(v___x_2352_) == 0)
{
lean_object* v_a_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; 
v_a_2353_ = lean_ctor_get(v___x_2352_, 0);
lean_inc(v_a_2353_);
lean_dec_ref_known(v___x_2352_, 1);
v___x_2354_ = lean_box(0);
v___x_2355_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__2(v_scope_2343_, v_a_2346_, v_snd_2287_, v___x_2354_, v_a_2353_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
lean_dec(v_a_2353_);
v___y_2263_ = v___x_2355_;
goto v___jp_2262_;
}
else
{
lean_object* v_a_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2363_; 
lean_dec(v_a_2346_);
lean_dec_ref(v_scope_2343_);
lean_dec(v_snd_2287_);
v_a_2356_ = lean_ctor_get(v___x_2352_, 0);
v_isSharedCheck_2363_ = !lean_is_exclusive(v___x_2352_);
if (v_isSharedCheck_2363_ == 0)
{
v___x_2358_ = v___x_2352_;
v_isShared_2359_ = v_isSharedCheck_2363_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_a_2356_);
lean_dec(v___x_2352_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2363_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
lean_object* v___x_2361_; 
if (v_isShared_2359_ == 0)
{
v___x_2361_ = v___x_2358_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2362_; 
v_reuseFailAlloc_2362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2362_, 0, v_a_2356_);
v___x_2361_ = v_reuseFailAlloc_2362_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
return v___x_2361_;
}
}
}
}
}
}
else
{
lean_object* v_a_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2375_; 
lean_dec_ref(v_scope_2343_);
lean_dec(v_snd_2287_);
lean_dec_ref(v_goal_2286_);
v_a_2368_ = lean_ctor_get(v___x_2345_, 0);
v_isSharedCheck_2375_ = !lean_is_exclusive(v___x_2345_);
if (v_isSharedCheck_2375_ == 0)
{
v___x_2370_ = v___x_2345_;
v_isShared_2371_ = v_isSharedCheck_2375_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_a_2368_);
lean_dec(v___x_2345_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2375_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
lean_object* v___x_2373_; 
if (v_isShared_2371_ == 0)
{
v___x_2373_ = v___x_2370_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v_a_2368_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
return v___x_2373_;
}
}
}
}
default: 
{
lean_object* v_target_2376_; lean_object* v___x_2377_; 
v_target_2376_ = lean_ctor_get(v_a_2291_, 0);
lean_inc_ref(v_target_2376_);
lean_dec(v_a_2291_);
v___x_2377_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___lam__0(v_goal_2286_, v_snd_2287_, v_target_2376_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
lean_dec_ref(v_target_2376_);
v___y_2263_ = v___x_2377_;
goto v___jp_2262_;
}
}
}
else
{
lean_object* v_a_2378_; lean_object* v___x_2380_; uint8_t v_isShared_2381_; uint8_t v_isSharedCheck_2385_; 
lean_dec(v_snd_2287_);
lean_dec_ref(v_goal_2286_);
v_a_2378_ = lean_ctor_get(v___x_2290_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v___x_2290_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2380_ = v___x_2290_;
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
else
{
lean_inc(v_a_2378_);
lean_dec(v___x_2290_);
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
else
{
lean_object* v___x_2386_; 
lean_dec(v___x_2283_);
v___x_2386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2386_, 0, v_a_2249_);
return v___x_2386_;
}
v___jp_2262_:
{
if (lean_obj_tag(v___y_2263_) == 0)
{
lean_object* v_a_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2274_; 
v_a_2264_ = lean_ctor_get(v___y_2263_, 0);
v_isSharedCheck_2274_ = !lean_is_exclusive(v___y_2263_);
if (v_isSharedCheck_2274_ == 0)
{
v___x_2266_ = v___y_2263_;
v_isShared_2267_ = v_isSharedCheck_2274_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_a_2264_);
lean_dec(v___y_2263_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2274_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
if (lean_obj_tag(v_a_2264_) == 0)
{
lean_object* v_a_2268_; lean_object* v___x_2270_; 
v_a_2268_ = lean_ctor_get(v_a_2264_, 0);
lean_inc(v_a_2268_);
lean_dec_ref_known(v_a_2264_, 1);
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 0, v_a_2268_);
v___x_2270_ = v___x_2266_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v_a_2268_);
v___x_2270_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
return v___x_2270_;
}
}
else
{
lean_object* v_a_2272_; 
lean_del_object(v___x_2266_);
v_a_2272_ = lean_ctor_get(v_a_2264_, 0);
lean_inc(v_a_2272_);
lean_dec_ref_known(v_a_2264_, 1);
v_a_2249_ = v_a_2272_;
goto _start;
}
}
}
else
{
lean_object* v_a_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2282_; 
v_a_2275_ = lean_ctor_get(v___y_2263_, 0);
v_isSharedCheck_2282_ = !lean_is_exclusive(v___y_2263_);
if (v_isSharedCheck_2282_ == 0)
{
v___x_2277_ = v___y_2263_;
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_a_2275_);
lean_dec(v___y_2263_);
v___x_2277_ = lean_box(0);
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
v_resetjp_2276_:
{
lean_object* v___x_2280_; 
if (v_isShared_2278_ == 0)
{
v___x_2280_ = v___x_2277_;
goto v_reusejp_2279_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v_a_2275_);
v___x_2280_ = v_reuseFailAlloc_2281_;
goto v_reusejp_2279_;
}
v_reusejp_2279_:
{
return v___x_2280_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg___boxed(lean_object* v_a_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_){
_start:
{
lean_object* v_res_2400_; 
v_res_2400_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg(v_a_2387_, v___y_2388_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_);
lean_dec(v___y_2398_);
lean_dec_ref(v___y_2397_);
lean_dec(v___y_2396_);
lean_dec_ref(v___y_2395_);
lean_dec(v___y_2394_);
lean_dec_ref(v___y_2393_);
lean_dec(v___y_2392_);
lean_dec_ref(v___y_2391_);
lean_dec(v___y_2390_);
lean_dec(v___y_2389_);
lean_dec_ref(v___y_2388_);
return v_res_2400_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work___closed__0(void){
_start:
{
lean_object* v___x_2401_; 
v___x_2401_ = l_Std_Queue_empty(lean_box(0));
return v___x_2401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work(lean_object* v_scope_2402_, lean_object* v_goal_2403_, lean_object* v_a_2404_, lean_object* v_a_2405_, lean_object* v_a_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_, lean_object* v_a_2410_, lean_object* v_a_2411_, lean_object* v_a_2412_, lean_object* v_a_2413_, lean_object* v_a_2414_){
_start:
{
lean_object* v___x_2416_; 
v___x_2416_ = l_Lean_Meta_Grind_mkGoal(v_goal_2403_, v_a_2406_, v_a_2407_, v_a_2408_, v_a_2409_, v_a_2410_, v_a_2411_, v_a_2412_, v_a_2413_, v_a_2414_);
if (lean_obj_tag(v___x_2416_) == 0)
{
lean_object* v_a_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; 
v_a_2417_ = lean_ctor_get(v___x_2416_, 0);
lean_inc(v_a_2417_);
lean_dec_ref_known(v___x_2416_, 1);
v___x_2418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2418_, 0, v_a_2417_);
lean_ctor_set(v___x_2418_, 1, v_scope_2402_);
v___x_2419_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work___closed__0, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work___closed__0_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work___closed__0);
v___x_2420_ = l_Std_Queue_enqueue___redArg(v___x_2418_, v___x_2419_);
v___x_2421_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg(v___x_2420_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_, v_a_2408_, v_a_2409_, v_a_2410_, v_a_2411_, v_a_2412_, v_a_2413_, v_a_2414_);
if (lean_obj_tag(v___x_2421_) == 0)
{
lean_object* v___x_2423_; uint8_t v_isShared_2424_; uint8_t v_isSharedCheck_2429_; 
v_isSharedCheck_2429_ = !lean_is_exclusive(v___x_2421_);
if (v_isSharedCheck_2429_ == 0)
{
lean_object* v_unused_2430_; 
v_unused_2430_ = lean_ctor_get(v___x_2421_, 0);
lean_dec(v_unused_2430_);
v___x_2423_ = v___x_2421_;
v_isShared_2424_ = v_isSharedCheck_2429_;
goto v_resetjp_2422_;
}
else
{
lean_dec(v___x_2421_);
v___x_2423_ = lean_box(0);
v_isShared_2424_ = v_isSharedCheck_2429_;
goto v_resetjp_2422_;
}
v_resetjp_2422_:
{
lean_object* v___x_2425_; lean_object* v___x_2427_; 
v___x_2425_ = lean_box(0);
if (v_isShared_2424_ == 0)
{
lean_ctor_set(v___x_2423_, 0, v___x_2425_);
v___x_2427_ = v___x_2423_;
goto v_reusejp_2426_;
}
else
{
lean_object* v_reuseFailAlloc_2428_; 
v_reuseFailAlloc_2428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2428_, 0, v___x_2425_);
v___x_2427_ = v_reuseFailAlloc_2428_;
goto v_reusejp_2426_;
}
v_reusejp_2426_:
{
return v___x_2427_;
}
}
}
else
{
lean_object* v_a_2431_; lean_object* v___x_2433_; uint8_t v_isShared_2434_; uint8_t v_isSharedCheck_2438_; 
v_a_2431_ = lean_ctor_get(v___x_2421_, 0);
v_isSharedCheck_2438_ = !lean_is_exclusive(v___x_2421_);
if (v_isSharedCheck_2438_ == 0)
{
v___x_2433_ = v___x_2421_;
v_isShared_2434_ = v_isSharedCheck_2438_;
goto v_resetjp_2432_;
}
else
{
lean_inc(v_a_2431_);
lean_dec(v___x_2421_);
v___x_2433_ = lean_box(0);
v_isShared_2434_ = v_isSharedCheck_2438_;
goto v_resetjp_2432_;
}
v_resetjp_2432_:
{
lean_object* v___x_2436_; 
if (v_isShared_2434_ == 0)
{
v___x_2436_ = v___x_2433_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v_a_2431_);
v___x_2436_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
return v___x_2436_;
}
}
}
}
else
{
lean_object* v_a_2439_; lean_object* v___x_2441_; uint8_t v_isShared_2442_; uint8_t v_isSharedCheck_2446_; 
lean_dec_ref(v_scope_2402_);
v_a_2439_ = lean_ctor_get(v___x_2416_, 0);
v_isSharedCheck_2446_ = !lean_is_exclusive(v___x_2416_);
if (v_isSharedCheck_2446_ == 0)
{
v___x_2441_ = v___x_2416_;
v_isShared_2442_ = v_isSharedCheck_2446_;
goto v_resetjp_2440_;
}
else
{
lean_inc(v_a_2439_);
lean_dec(v___x_2416_);
v___x_2441_ = lean_box(0);
v_isShared_2442_ = v_isSharedCheck_2446_;
goto v_resetjp_2440_;
}
v_resetjp_2440_:
{
lean_object* v___x_2444_; 
if (v_isShared_2442_ == 0)
{
v___x_2444_ = v___x_2441_;
goto v_reusejp_2443_;
}
else
{
lean_object* v_reuseFailAlloc_2445_; 
v_reuseFailAlloc_2445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2445_, 0, v_a_2439_);
v___x_2444_ = v_reuseFailAlloc_2445_;
goto v_reusejp_2443_;
}
v_reusejp_2443_:
{
return v___x_2444_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work___boxed(lean_object* v_scope_2447_, lean_object* v_goal_2448_, lean_object* v_a_2449_, lean_object* v_a_2450_, lean_object* v_a_2451_, lean_object* v_a_2452_, lean_object* v_a_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_, lean_object* v_a_2457_, lean_object* v_a_2458_, lean_object* v_a_2459_, lean_object* v_a_2460_){
_start:
{
lean_object* v_res_2461_; 
v_res_2461_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work(v_scope_2447_, v_goal_2448_, v_a_2449_, v_a_2450_, v_a_2451_, v_a_2452_, v_a_2453_, v_a_2454_, v_a_2455_, v_a_2456_, v_a_2457_, v_a_2458_, v_a_2459_);
lean_dec(v_a_2459_);
lean_dec_ref(v_a_2458_);
lean_dec(v_a_2457_);
lean_dec_ref(v_a_2456_);
lean_dec(v_a_2455_);
lean_dec_ref(v_a_2454_);
lean_dec(v_a_2453_);
lean_dec_ref(v_a_2452_);
lean_dec(v_a_2451_);
lean_dec(v_a_2450_);
lean_dec_ref(v_a_2449_);
return v_res_2461_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3(lean_object* v_inst_2462_, lean_object* v_a_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_){
_start:
{
lean_object* v___x_2476_; 
v___x_2476_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___redArg(v_a_2463_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_, v___y_2471_, v___y_2472_, v___y_2473_, v___y_2474_);
return v___x_2476_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3___boxed(lean_object* v_inst_2477_, lean_object* v_a_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_){
_start:
{
lean_object* v_res_2491_; 
v_res_2491_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work_spec__3(v_inst_2477_, v_a_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_, v___y_2488_, v___y_2489_);
lean_dec(v___y_2489_);
lean_dec_ref(v___y_2488_);
lean_dec(v___y_2487_);
lean_dec_ref(v___y_2486_);
lean_dec(v___y_2485_);
lean_dec_ref(v___y_2484_);
lean_dec(v___y_2483_);
lean_dec_ref(v___y_2482_);
lean_dec(v___y_2481_);
lean_dec(v___y_2480_);
lean_dec_ref(v___y_2479_);
return v_res_2491_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__0___redArg(lean_object* v_mvarId_2492_, lean_object* v___y_2493_){
_start:
{
lean_object* v___x_2495_; lean_object* v_mctx_2496_; lean_object* v_eAssignment_2497_; uint8_t v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; 
v___x_2495_ = lean_st_ref_get(v___y_2493_);
v_mctx_2496_ = lean_ctor_get(v___x_2495_, 0);
lean_inc_ref(v_mctx_2496_);
lean_dec(v___x_2495_);
v_eAssignment_2497_ = lean_ctor_get(v_mctx_2496_, 8);
lean_inc_ref(v_eAssignment_2497_);
lean_dec_ref(v_mctx_2496_);
v___x_2498_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryInlineInvariant_spec__0_spec__0___redArg(v_eAssignment_2497_, v_mvarId_2492_);
lean_dec_ref(v_eAssignment_2497_);
v___x_2499_ = lean_box(v___x_2498_);
v___x_2500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2500_, 0, v___x_2499_);
return v___x_2500_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__0___redArg___boxed(lean_object* v_mvarId_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_){
_start:
{
lean_object* v_res_2504_; 
v_res_2504_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__0___redArg(v_mvarId_2501_, v___y_2502_);
lean_dec(v___y_2502_);
lean_dec(v_mvarId_2501_);
return v_res_2504_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__3(lean_object* v_as_2505_, size_t v_i_2506_, size_t v_stop_2507_, lean_object* v_b_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_){
_start:
{
lean_object* v_a_2520_; uint8_t v___x_2524_; 
v___x_2524_ = lean_usize_dec_eq(v_i_2506_, v_stop_2507_);
if (v___x_2524_ == 0)
{
lean_object* v___x_2525_; lean_object* v___x_2528_; 
v___x_2525_ = lean_array_uget_borrowed(v_as_2505_, v_i_2506_);
v___x_2528_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__0___redArg(v___x_2525_, v___y_2515_);
if (lean_obj_tag(v___x_2528_) == 0)
{
lean_object* v_a_2529_; uint8_t v___x_2530_; 
v_a_2529_ = lean_ctor_get(v___x_2528_, 0);
lean_inc(v_a_2529_);
lean_dec_ref_known(v___x_2528_, 1);
v___x_2530_ = lean_unbox(v_a_2529_);
lean_dec(v_a_2529_);
if (v___x_2530_ == 0)
{
goto v___jp_2526_;
}
else
{
v_a_2520_ = v_b_2508_;
goto v___jp_2519_;
}
}
else
{
if (lean_obj_tag(v___x_2528_) == 0)
{
lean_object* v_a_2531_; uint8_t v___x_2532_; 
v_a_2531_ = lean_ctor_get(v___x_2528_, 0);
lean_inc(v_a_2531_);
lean_dec_ref_known(v___x_2528_, 1);
v___x_2532_ = lean_unbox(v_a_2531_);
lean_dec(v_a_2531_);
if (v___x_2532_ == 0)
{
v_a_2520_ = v_b_2508_;
goto v___jp_2519_;
}
else
{
goto v___jp_2526_;
}
}
else
{
lean_object* v_a_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2540_; 
lean_dec_ref(v_b_2508_);
v_a_2533_ = lean_ctor_get(v___x_2528_, 0);
v_isSharedCheck_2540_ = !lean_is_exclusive(v___x_2528_);
if (v_isSharedCheck_2540_ == 0)
{
v___x_2535_ = v___x_2528_;
v_isShared_2536_ = v_isSharedCheck_2540_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_a_2533_);
lean_dec(v___x_2528_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2540_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v___x_2538_; 
if (v_isShared_2536_ == 0)
{
v___x_2538_ = v___x_2535_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v_a_2533_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
return v___x_2538_;
}
}
}
}
v___jp_2526_:
{
lean_object* v___x_2527_; 
lean_inc(v___x_2525_);
v___x_2527_ = lean_array_push(v_b_2508_, v___x_2525_);
v_a_2520_ = v___x_2527_;
goto v___jp_2519_;
}
}
else
{
lean_object* v___x_2541_; 
v___x_2541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2541_, 0, v_b_2508_);
return v___x_2541_;
}
v___jp_2519_:
{
size_t v___x_2521_; size_t v___x_2522_; 
v___x_2521_ = ((size_t)1ULL);
v___x_2522_ = lean_usize_add(v_i_2506_, v___x_2521_);
v_i_2506_ = v___x_2522_;
v_b_2508_ = v_a_2520_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__3___boxed(lean_object* v_as_2542_, lean_object* v_i_2543_, lean_object* v_stop_2544_, lean_object* v_b_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_){
_start:
{
size_t v_i_boxed_2556_; size_t v_stop_boxed_2557_; lean_object* v_res_2558_; 
v_i_boxed_2556_ = lean_unbox_usize(v_i_2543_);
lean_dec(v_i_2543_);
v_stop_boxed_2557_ = lean_unbox_usize(v_stop_2544_);
lean_dec(v_stop_2544_);
v_res_2558_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__3(v_as_2542_, v_i_boxed_2556_, v_stop_boxed_2557_, v_b_2545_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_, v___y_2554_);
lean_dec(v___y_2554_);
lean_dec_ref(v___y_2553_);
lean_dec(v___y_2552_);
lean_dec_ref(v___y_2551_);
lean_dec(v___y_2550_);
lean_dec_ref(v___y_2549_);
lean_dec(v___y_2548_);
lean_dec_ref(v___y_2547_);
lean_dec(v___y_2546_);
lean_dec_ref(v_as_2542_);
return v_res_2558_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__1___redArg(lean_object* v___x_2560_, lean_object* v_range_2561_, lean_object* v_b_2562_, lean_object* v_i_2563_, lean_object* v___y_2564_){
_start:
{
lean_object* v_stop_2566_; lean_object* v_step_2567_; uint8_t v___x_2568_; 
v_stop_2566_ = lean_ctor_get(v_range_2561_, 1);
v_step_2567_ = lean_ctor_get(v_range_2561_, 2);
v___x_2568_ = lean_nat_dec_lt(v_i_2563_, v_stop_2566_);
if (v___x_2568_ == 0)
{
lean_object* v___x_2569_; 
lean_dec(v_i_2563_);
v___x_2569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2569_, 0, v_b_2562_);
return v___x_2569_;
}
else
{
lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; 
v___x_2570_ = lean_unsigned_to_nat(1u);
v___x_2571_ = lean_array_fget_borrowed(v___x_2560_, v_i_2563_);
v___x_2572_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__1___redArg___closed__0));
v___x_2573_ = lean_nat_add(v_i_2563_, v___x_2570_);
v___x_2574_ = l_Nat_reprFast(v___x_2573_);
v___x_2575_ = lean_string_append(v___x_2572_, v___x_2574_);
lean_dec_ref(v___x_2574_);
v___x_2576_ = lean_box(0);
v___x_2577_ = l_Lean_Name_str___override(v___x_2576_, v___x_2575_);
lean_inc(v___x_2571_);
v___x_2578_ = l_Lean_MVarId_setTag___redArg(v___x_2571_, v___x_2577_, v___y_2564_);
if (lean_obj_tag(v___x_2578_) == 0)
{
lean_object* v___x_2579_; lean_object* v___x_2580_; 
lean_dec_ref_known(v___x_2578_, 1);
v___x_2579_ = lean_box(0);
v___x_2580_ = lean_nat_add(v_i_2563_, v_step_2567_);
lean_dec(v_i_2563_);
v_b_2562_ = v___x_2579_;
v_i_2563_ = v___x_2580_;
goto _start;
}
else
{
lean_dec(v_i_2563_);
return v___x_2578_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__1___redArg___boxed(lean_object* v___x_2582_, lean_object* v_range_2583_, lean_object* v_b_2584_, lean_object* v_i_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_){
_start:
{
lean_object* v_res_2588_; 
v_res_2588_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__1___redArg(v___x_2582_, v_range_2583_, v_b_2584_, v_i_2585_, v___y_2586_);
lean_dec(v___y_2586_);
lean_dec_ref(v_range_2583_);
lean_dec_ref(v___x_2582_);
return v_res_2588_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__2___redArg(lean_object* v___x_2590_, lean_object* v_range_2591_, lean_object* v_b_2592_, lean_object* v_i_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_){
_start:
{
lean_object* v_stop_2599_; lean_object* v_step_2600_; uint8_t v___x_2601_; 
v_stop_2599_ = lean_ctor_get(v_range_2591_, 1);
v_step_2600_ = lean_ctor_get(v_range_2591_, 2);
v___x_2601_ = lean_nat_dec_lt(v_i_2593_, v_stop_2599_);
if (v___x_2601_ == 0)
{
lean_object* v___x_2602_; 
lean_dec(v_i_2593_);
v___x_2602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2602_, 0, v_b_2592_);
return v___x_2602_;
}
else
{
lean_object* v___x_2603_; lean_object* v___x_2604_; 
v___x_2603_ = lean_array_fget_borrowed(v___x_2590_, v_i_2593_);
lean_inc(v___x_2603_);
v___x_2604_ = l_Lean_MVarId_getTag(v___x_2603_, v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_);
if (lean_obj_tag(v___x_2604_) == 0)
{
lean_object* v_a_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; 
v_a_2605_ = lean_ctor_get(v___x_2604_, 0);
lean_inc(v_a_2605_);
lean_dec_ref_known(v___x_2604_, 1);
v___x_2606_ = lean_unsigned_to_nat(1u);
v___x_2607_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__2___redArg___closed__0));
v___x_2608_ = lean_nat_add(v_i_2593_, v___x_2606_);
v___x_2609_ = l_Nat_reprFast(v___x_2608_);
v___x_2610_ = lean_string_append(v___x_2607_, v___x_2609_);
lean_dec_ref(v___x_2609_);
v___x_2611_ = lean_box(0);
v___x_2612_ = l_Lean_Name_str___override(v___x_2611_, v___x_2610_);
v___x_2613_ = lean_erase_macro_scopes(v_a_2605_);
v___x_2614_ = l_Lean_Name_append(v___x_2612_, v___x_2613_);
lean_inc(v___x_2603_);
v___x_2615_ = l_Lean_MVarId_setTag___redArg(v___x_2603_, v___x_2614_, v___y_2595_);
if (lean_obj_tag(v___x_2615_) == 0)
{
lean_object* v___x_2616_; lean_object* v___x_2617_; 
lean_dec_ref_known(v___x_2615_, 1);
v___x_2616_ = lean_box(0);
v___x_2617_ = lean_nat_add(v_i_2593_, v_step_2600_);
lean_dec(v_i_2593_);
v_b_2592_ = v___x_2616_;
v_i_2593_ = v___x_2617_;
goto _start;
}
else
{
lean_dec(v_i_2593_);
return v___x_2615_;
}
}
else
{
lean_object* v_a_2619_; lean_object* v___x_2621_; uint8_t v_isShared_2622_; uint8_t v_isSharedCheck_2626_; 
lean_dec(v_i_2593_);
v_a_2619_ = lean_ctor_get(v___x_2604_, 0);
v_isSharedCheck_2626_ = !lean_is_exclusive(v___x_2604_);
if (v_isSharedCheck_2626_ == 0)
{
v___x_2621_ = v___x_2604_;
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
else
{
lean_inc(v_a_2619_);
lean_dec(v___x_2604_);
v___x_2621_ = lean_box(0);
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
v_resetjp_2620_:
{
lean_object* v___x_2624_; 
if (v_isShared_2622_ == 0)
{
v___x_2624_ = v___x_2621_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v_a_2619_);
v___x_2624_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
return v___x_2624_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__2___redArg___boxed(lean_object* v___x_2627_, lean_object* v_range_2628_, lean_object* v_b_2629_, lean_object* v_i_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_){
_start:
{
lean_object* v_res_2636_; 
v_res_2636_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__2___redArg(v___x_2627_, v_range_2628_, v_b_2629_, v_i_2630_, v___y_2631_, v___y_2632_, v___y_2633_, v___y_2634_);
lean_dec(v___y_2634_);
lean_dec_ref(v___y_2633_);
lean_dec(v___y_2632_);
lean_dec_ref(v___y_2631_);
lean_dec_ref(v_range_2628_);
lean_dec_ref(v___x_2627_);
return v_res_2636_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__0(void){
_start:
{
lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; 
v___x_2637_ = lean_box(0);
v___x_2638_ = lean_unsigned_to_nat(16u);
v___x_2639_ = lean_mk_array(v___x_2638_, v___x_2637_);
return v___x_2639_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__1(void){
_start:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; 
v___x_2640_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__0, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__0_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__0);
v___x_2641_ = lean_unsigned_to_nat(0u);
v___x_2642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2642_, 0, v___x_2641_);
lean_ctor_set(v___x_2642_, 1, v___x_2640_);
return v___x_2642_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__3(void){
_start:
{
lean_object* v___x_2645_; 
v___x_2645_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2645_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__4(void){
_start:
{
lean_object* v___x_2646_; lean_object* v___x_2647_; 
v___x_2646_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__3, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__3_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__3);
v___x_2647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2647_, 0, v___x_2646_);
return v___x_2647_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__5(void){
_start:
{
lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; 
v___x_2648_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__4, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__4_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__4);
v___x_2649_ = lean_unsigned_to_nat(0u);
v___x_2650_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2650_, 0, v___x_2649_);
lean_ctor_set(v___x_2650_, 1, v___x_2648_);
lean_ctor_set(v___x_2650_, 2, v___x_2648_);
lean_ctor_set(v___x_2650_, 3, v___x_2648_);
return v___x_2650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main(lean_object* v_goal_2651_, lean_object* v_ctx_2652_, lean_object* v_scope_2653_, lean_object* v_stepLimit_x3f_2654_, lean_object* v_a_2655_, lean_object* v_a_2656_, lean_object* v_a_2657_, lean_object* v_a_2658_, lean_object* v_a_2659_, lean_object* v_a_2660_, lean_object* v_a_2661_, lean_object* v_a_2662_, lean_object* v_a_2663_){
_start:
{
lean_object* v___y_2666_; uint8_t v___y_2667_; lean_object* v___y_2668_; lean_object* v___y_2669_; lean_object* v___y_2673_; uint8_t v___y_2674_; lean_object* v___y_2675_; lean_object* v___y_2676_; lean_object* v___y_2677_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___y_2692_; 
v___x_2686_ = lean_unsigned_to_nat(0u);
v___x_2687_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__1);
v___x_2688_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__2));
v___x_2689_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__5, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__5_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___closed__5);
v___x_2690_ = lean_box(1);
if (lean_obj_tag(v_stepLimit_x3f_2654_) == 0)
{
lean_object* v___x_2742_; 
v___x_2742_ = lean_box(1);
v___y_2692_ = v___x_2742_;
goto v___jp_2691_;
}
else
{
lean_object* v_val_2743_; lean_object* v___x_2745_; uint8_t v_isShared_2746_; uint8_t v_isSharedCheck_2750_; 
v_val_2743_ = lean_ctor_get(v_stepLimit_x3f_2654_, 0);
v_isSharedCheck_2750_ = !lean_is_exclusive(v_stepLimit_x3f_2654_);
if (v_isSharedCheck_2750_ == 0)
{
v___x_2745_ = v_stepLimit_x3f_2654_;
v_isShared_2746_ = v_isSharedCheck_2750_;
goto v_resetjp_2744_;
}
else
{
lean_inc(v_val_2743_);
lean_dec(v_stepLimit_x3f_2654_);
v___x_2745_ = lean_box(0);
v_isShared_2746_ = v_isSharedCheck_2750_;
goto v_resetjp_2744_;
}
v_resetjp_2744_:
{
lean_object* v___x_2748_; 
if (v_isShared_2746_ == 0)
{
lean_ctor_set_tag(v___x_2745_, 0);
v___x_2748_ = v___x_2745_;
goto v_reusejp_2747_;
}
else
{
lean_object* v_reuseFailAlloc_2749_; 
v_reuseFailAlloc_2749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2749_, 0, v_val_2743_);
v___x_2748_ = v_reuseFailAlloc_2749_;
goto v_reusejp_2747_;
}
v_reusejp_2747_:
{
v___y_2692_ = v___x_2748_;
goto v___jp_2691_;
}
}
}
v___jp_2665_:
{
lean_object* v___x_2670_; lean_object* v___x_2671_; 
v___x_2670_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2670_, 0, v___y_2668_);
lean_ctor_set(v___x_2670_, 1, v___y_2666_);
lean_ctor_set(v___x_2670_, 2, v___y_2669_);
lean_ctor_set_uint8(v___x_2670_, sizeof(void*)*3, v___y_2667_);
v___x_2671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2671_, 0, v___x_2670_);
return v___x_2671_;
}
v___jp_2672_:
{
if (lean_obj_tag(v___y_2677_) == 0)
{
lean_dec_ref_known(v___y_2677_, 1);
v___y_2666_ = v___y_2673_;
v___y_2667_ = v___y_2674_;
v___y_2668_ = v___y_2675_;
v___y_2669_ = v___y_2676_;
goto v___jp_2665_;
}
else
{
lean_object* v_a_2678_; lean_object* v___x_2680_; uint8_t v_isShared_2681_; uint8_t v_isSharedCheck_2685_; 
lean_dec_ref(v___y_2676_);
lean_dec_ref(v___y_2675_);
lean_dec_ref(v___y_2673_);
v_a_2678_ = lean_ctor_get(v___y_2677_, 0);
v_isSharedCheck_2685_ = !lean_is_exclusive(v___y_2677_);
if (v_isSharedCheck_2685_ == 0)
{
v___x_2680_ = v___y_2677_;
v_isShared_2681_ = v_isSharedCheck_2685_;
goto v_resetjp_2679_;
}
else
{
lean_inc(v_a_2678_);
lean_dec(v___y_2677_);
v___x_2680_ = lean_box(0);
v_isShared_2681_ = v_isSharedCheck_2685_;
goto v_resetjp_2679_;
}
v_resetjp_2679_:
{
lean_object* v___x_2683_; 
if (v_isShared_2681_ == 0)
{
v___x_2683_ = v___x_2680_;
goto v_reusejp_2682_;
}
else
{
lean_object* v_reuseFailAlloc_2684_; 
v_reuseFailAlloc_2684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2684_, 0, v_a_2678_);
v___x_2683_ = v_reuseFailAlloc_2684_;
goto v_reusejp_2682_;
}
v_reusejp_2682_:
{
return v___x_2683_;
}
}
}
}
v___jp_2691_:
{
uint8_t v___x_2693_; lean_object* v_initState_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; 
v___x_2693_ = 0;
v_initState_2694_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_initState_2694_, 0, v___x_2687_);
lean_ctor_set(v_initState_2694_, 1, v___x_2687_);
lean_ctor_set(v_initState_2694_, 2, v___x_2687_);
lean_ctor_set(v_initState_2694_, 3, v___x_2688_);
lean_ctor_set(v_initState_2694_, 4, v___x_2688_);
lean_ctor_set(v_initState_2694_, 5, v___x_2689_);
lean_ctor_set(v_initState_2694_, 6, v___x_2690_);
lean_ctor_set(v_initState_2694_, 7, v___y_2692_);
lean_ctor_set(v_initState_2694_, 8, v___x_2687_);
lean_ctor_set_uint8(v_initState_2694_, sizeof(void*)*9, v___x_2693_);
v___x_2695_ = lean_st_mk_ref(v_initState_2694_);
v___x_2696_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_work(v_scope_2653_, v_goal_2651_, v_ctx_2652_, v___x_2695_, v_a_2655_, v_a_2656_, v_a_2657_, v_a_2658_, v_a_2659_, v_a_2660_, v_a_2661_, v_a_2662_, v_a_2663_);
if (lean_obj_tag(v___x_2696_) == 0)
{
lean_object* v___x_2697_; lean_object* v_invariants_2698_; lean_object* v_vcs_2699_; lean_object* v_inlineHandledInvariants_2700_; uint8_t v_dischTacFailed_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; 
lean_dec_ref_known(v___x_2696_, 1);
v___x_2697_ = lean_st_ref_get(v___x_2695_);
lean_dec(v___x_2695_);
v_invariants_2698_ = lean_ctor_get(v___x_2697_, 3);
lean_inc_ref(v_invariants_2698_);
v_vcs_2699_ = lean_ctor_get(v___x_2697_, 4);
lean_inc_ref(v_vcs_2699_);
v_inlineHandledInvariants_2700_ = lean_ctor_get(v___x_2697_, 8);
lean_inc_ref(v_inlineHandledInvariants_2700_);
v_dischTacFailed_2701_ = lean_ctor_get_uint8(v___x_2697_, sizeof(void*)*9);
lean_dec(v___x_2697_);
v___x_2702_ = lean_array_get_size(v_invariants_2698_);
v___x_2703_ = lean_unsigned_to_nat(1u);
v___x_2704_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2704_, 0, v___x_2686_);
lean_ctor_set(v___x_2704_, 1, v___x_2702_);
lean_ctor_set(v___x_2704_, 2, v___x_2703_);
v___x_2705_ = lean_box(0);
v___x_2706_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__1___redArg(v_invariants_2698_, v___x_2704_, v___x_2705_, v___x_2686_, v_a_2661_);
lean_dec_ref_known(v___x_2704_, 3);
if (lean_obj_tag(v___x_2706_) == 0)
{
lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; 
lean_dec_ref_known(v___x_2706_, 1);
v___x_2707_ = lean_array_get_size(v_vcs_2699_);
v___x_2708_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2708_, 0, v___x_2686_);
lean_ctor_set(v___x_2708_, 1, v___x_2707_);
lean_ctor_set(v___x_2708_, 2, v___x_2703_);
v___x_2709_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__2___redArg(v_vcs_2699_, v___x_2708_, v___x_2705_, v___x_2686_, v_a_2660_, v_a_2661_, v_a_2662_, v_a_2663_);
lean_dec_ref_known(v___x_2708_, 3);
if (lean_obj_tag(v___x_2709_) == 0)
{
uint8_t v___x_2710_; 
lean_dec_ref_known(v___x_2709_, 1);
v___x_2710_ = lean_nat_dec_lt(v___x_2686_, v___x_2707_);
if (v___x_2710_ == 0)
{
v___y_2666_ = v_vcs_2699_;
v___y_2667_ = v_dischTacFailed_2701_;
v___y_2668_ = v_invariants_2698_;
v___y_2669_ = v_inlineHandledInvariants_2700_;
goto v___jp_2665_;
}
else
{
uint8_t v___x_2711_; 
v___x_2711_ = lean_nat_dec_le(v___x_2707_, v___x_2707_);
if (v___x_2711_ == 0)
{
if (v___x_2710_ == 0)
{
v___y_2666_ = v_vcs_2699_;
v___y_2667_ = v_dischTacFailed_2701_;
v___y_2668_ = v_invariants_2698_;
v___y_2669_ = v_inlineHandledInvariants_2700_;
goto v___jp_2665_;
}
else
{
size_t v___x_2712_; size_t v___x_2713_; lean_object* v___x_2714_; 
v___x_2712_ = ((size_t)0ULL);
v___x_2713_ = lean_usize_of_nat(v___x_2707_);
v___x_2714_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__3(v_vcs_2699_, v___x_2712_, v___x_2713_, v___x_2688_, v_a_2655_, v_a_2656_, v_a_2657_, v_a_2658_, v_a_2659_, v_a_2660_, v_a_2661_, v_a_2662_, v_a_2663_);
v___y_2673_ = v_vcs_2699_;
v___y_2674_ = v_dischTacFailed_2701_;
v___y_2675_ = v_invariants_2698_;
v___y_2676_ = v_inlineHandledInvariants_2700_;
v___y_2677_ = v___x_2714_;
goto v___jp_2672_;
}
}
else
{
size_t v___x_2715_; size_t v___x_2716_; lean_object* v___x_2717_; 
v___x_2715_ = ((size_t)0ULL);
v___x_2716_ = lean_usize_of_nat(v___x_2707_);
v___x_2717_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__3(v_vcs_2699_, v___x_2715_, v___x_2716_, v___x_2688_, v_a_2655_, v_a_2656_, v_a_2657_, v_a_2658_, v_a_2659_, v_a_2660_, v_a_2661_, v_a_2662_, v_a_2663_);
v___y_2673_ = v_vcs_2699_;
v___y_2674_ = v_dischTacFailed_2701_;
v___y_2675_ = v_invariants_2698_;
v___y_2676_ = v_inlineHandledInvariants_2700_;
v___y_2677_ = v___x_2717_;
goto v___jp_2672_;
}
}
}
else
{
lean_object* v_a_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2725_; 
lean_dec_ref(v_inlineHandledInvariants_2700_);
lean_dec_ref(v_vcs_2699_);
lean_dec_ref(v_invariants_2698_);
v_a_2718_ = lean_ctor_get(v___x_2709_, 0);
v_isSharedCheck_2725_ = !lean_is_exclusive(v___x_2709_);
if (v_isSharedCheck_2725_ == 0)
{
v___x_2720_ = v___x_2709_;
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_a_2718_);
lean_dec(v___x_2709_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
lean_object* v___x_2723_; 
if (v_isShared_2721_ == 0)
{
v___x_2723_ = v___x_2720_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2724_, 0, v_a_2718_);
v___x_2723_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
return v___x_2723_;
}
}
}
}
else
{
lean_object* v_a_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2733_; 
lean_dec_ref(v_inlineHandledInvariants_2700_);
lean_dec_ref(v_vcs_2699_);
lean_dec_ref(v_invariants_2698_);
v_a_2726_ = lean_ctor_get(v___x_2706_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2706_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2728_ = v___x_2706_;
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_a_2726_);
lean_dec(v___x_2706_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2731_; 
if (v_isShared_2729_ == 0)
{
v___x_2731_ = v___x_2728_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_a_2726_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
return v___x_2731_;
}
}
}
}
else
{
lean_object* v_a_2734_; lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2741_; 
lean_dec(v___x_2695_);
v_a_2734_ = lean_ctor_get(v___x_2696_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2696_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2736_ = v___x_2696_;
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
else
{
lean_inc(v_a_2734_);
lean_dec(v___x_2696_);
v___x_2736_ = lean_box(0);
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
v_resetjp_2735_:
{
lean_object* v___x_2739_; 
if (v_isShared_2737_ == 0)
{
v___x_2739_ = v___x_2736_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v_a_2734_);
v___x_2739_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
return v___x_2739_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main___boxed(lean_object* v_goal_2751_, lean_object* v_ctx_2752_, lean_object* v_scope_2753_, lean_object* v_stepLimit_x3f_2754_, lean_object* v_a_2755_, lean_object* v_a_2756_, lean_object* v_a_2757_, lean_object* v_a_2758_, lean_object* v_a_2759_, lean_object* v_a_2760_, lean_object* v_a_2761_, lean_object* v_a_2762_, lean_object* v_a_2763_, lean_object* v_a_2764_){
_start:
{
lean_object* v_res_2765_; 
v_res_2765_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main(v_goal_2751_, v_ctx_2752_, v_scope_2753_, v_stepLimit_x3f_2754_, v_a_2755_, v_a_2756_, v_a_2757_, v_a_2758_, v_a_2759_, v_a_2760_, v_a_2761_, v_a_2762_, v_a_2763_);
lean_dec(v_a_2763_);
lean_dec_ref(v_a_2762_);
lean_dec(v_a_2761_);
lean_dec_ref(v_a_2760_);
lean_dec(v_a_2759_);
lean_dec_ref(v_a_2758_);
lean_dec(v_a_2757_);
lean_dec_ref(v_a_2756_);
lean_dec(v_a_2755_);
lean_dec_ref(v_ctx_2752_);
return v_res_2765_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__0(lean_object* v_mvarId_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_){
_start:
{
lean_object* v___x_2777_; 
v___x_2777_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__0___redArg(v_mvarId_2766_, v___y_2773_);
return v___x_2777_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__0___boxed(lean_object* v_mvarId_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_){
_start:
{
lean_object* v_res_2789_; 
v_res_2789_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__0(v_mvarId_2778_, v___y_2779_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_, v___y_2785_, v___y_2786_, v___y_2787_);
lean_dec(v___y_2787_);
lean_dec_ref(v___y_2786_);
lean_dec(v___y_2785_);
lean_dec_ref(v___y_2784_);
lean_dec(v___y_2783_);
lean_dec_ref(v___y_2782_);
lean_dec(v___y_2781_);
lean_dec_ref(v___y_2780_);
lean_dec(v___y_2779_);
lean_dec(v_mvarId_2778_);
return v_res_2789_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__1(lean_object* v___x_2790_, lean_object* v_range_2791_, lean_object* v_b_2792_, lean_object* v_i_2793_, lean_object* v_hs_2794_, lean_object* v_hl_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_){
_start:
{
lean_object* v___x_2806_; 
v___x_2806_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__1___redArg(v___x_2790_, v_range_2791_, v_b_2792_, v_i_2793_, v___y_2802_);
return v___x_2806_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__1___boxed(lean_object* v___x_2807_, lean_object* v_range_2808_, lean_object* v_b_2809_, lean_object* v_i_2810_, lean_object* v_hs_2811_, lean_object* v_hl_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_){
_start:
{
lean_object* v_res_2823_; 
v_res_2823_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__1(v___x_2807_, v_range_2808_, v_b_2809_, v_i_2810_, v_hs_2811_, v_hl_2812_, v___y_2813_, v___y_2814_, v___y_2815_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_, v___y_2821_);
lean_dec(v___y_2821_);
lean_dec_ref(v___y_2820_);
lean_dec(v___y_2819_);
lean_dec_ref(v___y_2818_);
lean_dec(v___y_2817_);
lean_dec_ref(v___y_2816_);
lean_dec(v___y_2815_);
lean_dec_ref(v___y_2814_);
lean_dec(v___y_2813_);
lean_dec_ref(v_range_2808_);
lean_dec_ref(v___x_2807_);
return v_res_2823_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__2(lean_object* v___x_2824_, lean_object* v_range_2825_, lean_object* v_b_2826_, lean_object* v_i_2827_, lean_object* v_hs_2828_, lean_object* v_hl_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_){
_start:
{
lean_object* v___x_2840_; 
v___x_2840_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__2___redArg(v___x_2824_, v_range_2825_, v_b_2826_, v_i_2827_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_);
return v___x_2840_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__2___boxed(lean_object* v___x_2841_, lean_object* v_range_2842_, lean_object* v_b_2843_, lean_object* v_i_2844_, lean_object* v_hs_2845_, lean_object* v_hl_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_){
_start:
{
lean_object* v_res_2857_; 
v_res_2857_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_main_spec__2(v___x_2841_, v_range_2842_, v_b_2843_, v_i_2844_, v_hs_2845_, v_hl_2846_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
lean_dec(v___y_2855_);
lean_dec_ref(v___y_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec_ref(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v_range_2842_);
lean_dec_ref(v___x_2841_);
return v_res_2857_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
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
