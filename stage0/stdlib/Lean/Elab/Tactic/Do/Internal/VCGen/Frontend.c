// Lean compiler output
// Module: Lean.Elab.Tactic.Do.Internal.VCGen.Frontend
// Imports: public import Lean.Elab.Tactic.Do.VCGen.SuggestInvariant public import Lean.Elab.Tactic.Do.VCGen public import Lean.Elab.Tactic.Do.Internal.VCGen.Context public import Lean.Elab.Tactic.Do.Internal.VCGen.Driver public import Lean.Meta.Sym.Simp.Attr public import Lean.Meta.Sym.Simp.ControlFlow public import Lean.Meta.Sym.Simp.EvalGround public import Lean.Meta.Sym.Simp.Forall public import Lean.Meta.Sym.Simp.Rewrite public import Lean.Meta.Sym.Simp.Simproc public import Lean.Elab.Tactic.Grind.Main public import Lean.Elab.Tactic.Grind.Basic
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
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpArrowTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpControl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_getSymSimpTheorems___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_dischargeNone___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Theorems_rewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Meta_Sym_Simp_Theorems_insert(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Meta_Sym_Simp_evalGround___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkTheoremFromExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_realizeGlobalConstNoOverload(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkTheoremFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
lean_object* l_Lean_Elab_Tactic_mkGrindParams(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_elabGrindConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_elabConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
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
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_getSpecTheorems___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_SymM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremFromConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_insert(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremFromLocal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resolveId_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabCDotFunctionAlias_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_isLocalIdent_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_erase(lean_object*, lean_object*);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_getSpecSimpTheorems___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_mkSimpContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getPropHyps(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_isErased(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_empty(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Meta_Grind_mkDefaultParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
extern lean_object* l_Lean_Elab_Tactic_Do_mvcgen_warning;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkGoalCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_GrindM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_elabInvariants(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_processHypotheses(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mvcgen"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(199, 186, 72, 71, 180, 239, 13, 70)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__5___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__5___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__5(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__6___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__6___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__6(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpErase"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__3_value),LEAN_SCALAR_PTR_LITERAL(216, 24, 229, 171, 59, 186, 144, 157)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpLemma"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__6_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__6_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(38, 215, 101, 250, 181, 108, 118, 102)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "simpStar"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__8_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__8_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__8_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__7_value),LEAN_SCALAR_PTR_LITERAL(125, 38, 251, 225, 228, 173, 11, 37)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Could not resolve spec theorem `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__9_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__10;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__11_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "entails_cons_intro"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__4_value),LEAN_SCALAR_PTR_LITERAL(121, 192, 217, 126, 138, 217, 120, 234)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "entails_nil_pure_intro"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__6_value),LEAN_SCALAR_PTR_LITERAL(77, 71, 95, 197, 218, 24, 130, 149)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "entails_nil_intro"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__8_value),LEAN_SCALAR_PTR_LITERAL(209, 42, 38, 114, 220, 245, 181, 209)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "apply_pure_cons_entails_l"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__11_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__10_value),LEAN_SCALAR_PTR_LITERAL(88, 114, 58, 244, 248, 249, 100, 189)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__11_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "apply_pure_cons_entails_r"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__13_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__13_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__13_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__12_value),LEAN_SCALAR_PTR_LITERAL(36, 125, 0, 206, 159, 122, 18, 62)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__13_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "down_pure_intro"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__15_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__15_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__15_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__14_value),LEAN_SCALAR_PTR_LITERAL(242, 230, 134, 253, 236, 36, 160, 34)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__15_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "pure_elim'"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__16 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__16_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__17_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__17_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__17_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__16_value),LEAN_SCALAR_PTR_LITERAL(146, 100, 201, 175, 219, 207, 33, 227)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__17_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "pure_intro"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__18_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__19_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__19_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__19_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__18_value),LEAN_SCALAR_PTR_LITERAL(212, 52, 84, 252, 44, 75, 13, 225)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__19 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__19_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "PostCond"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__20_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "entails"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__21_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rfl"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__22 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__22_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__23_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__23_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__20_value),LEAN_SCALAR_PTR_LITERAL(124, 92, 27, 8, 188, 224, 25, 47)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__23_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__23_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__21_value),LEAN_SCALAR_PTR_LITERAL(32, 111, 255, 27, 103, 9, 244, 9)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__23_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__22_value),LEAN_SCALAR_PTR_LITERAL(106, 198, 3, 218, 176, 38, 40, 252)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__23 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__23_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__24 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__24_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__25_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__25_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__20_value),LEAN_SCALAR_PTR_LITERAL(124, 92, 27, 8, 188, 224, 25, 47)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__25_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__25_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__21_value),LEAN_SCALAR_PTR_LITERAL(32, 111, 255, 27, 103, 9, 244, 9)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__25_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__24_value),LEAN_SCALAR_PTR_LITERAL(152, 24, 212, 180, 51, 184, 242, 134)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__25 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__25_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ExceptConds"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__26 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__26_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__27_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__27_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__26_value),LEAN_SCALAR_PTR_LITERAL(244, 224, 84, 66, 133, 22, 35, 247)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__27_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__27_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__21_value),LEAN_SCALAR_PTR_LITERAL(72, 205, 41, 157, 129, 142, 231, 99)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__27_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__22_value),LEAN_SCALAR_PTR_LITERAL(114, 214, 92, 55, 221, 19, 3, 63)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__27 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__27_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pure"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__28 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__28_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__29_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__29_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__26_value),LEAN_SCALAR_PTR_LITERAL(244, 224, 84, 66, 133, 22, 35, 247)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__29_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__29_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__21_value),LEAN_SCALAR_PTR_LITERAL(72, 205, 41, 157, 129, 142, 231, 99)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__29_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__28_value),LEAN_SCALAR_PTR_LITERAL(177, 127, 46, 135, 84, 167, 103, 90)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__29 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__29_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "entails_false"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__30 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__30_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__31_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__31_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__26_value),LEAN_SCALAR_PTR_LITERAL(244, 224, 84, 66, 133, 22, 35, 247)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__31_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__30_value),LEAN_SCALAR_PTR_LITERAL(130, 197, 58, 234, 180, 192, 166, 113)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__31 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__31_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "entails_true"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__32 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__32_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__33_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__33_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__26_value),LEAN_SCALAR_PTR_LITERAL(244, 224, 84, 66, 133, 22, 35, 247)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__33_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__32_value),LEAN_SCALAR_PTR_LITERAL(246, 50, 98, 188, 214, 243, 38, 248)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__33 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__33_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Triple"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__34 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__34_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "of_entails_wp"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__35 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__35_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__36_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__36_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__36_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__36_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__34_value),LEAN_SCALAR_PTR_LITERAL(31, 48, 165, 224, 255, 99, 7, 166)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__36_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__35_value),LEAN_SCALAR_PTR_LITERAL(191, 31, 210, 183, 145, 91, 10, 79)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__36 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__36_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__37 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__37_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__38 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__38_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__37_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__39_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__38_value),LEAN_SCALAR_PTR_LITERAL(58, 46, 244, 208, 18, 71, 77, 162)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__39 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__39_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__40;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__41;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__42 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__42_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__43 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__43_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__44_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__44_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__44_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__44_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__44_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__44_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__43_value),LEAN_SCALAR_PTR_LITERAL(50, 13, 241, 145, 67, 153, 105, 177)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__44 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__44_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__45 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__45_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__46_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__46_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__46_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__46_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__46_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__45_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__46 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__46_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__47 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__47_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__47_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__48 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__48_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "configItem"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__49 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__49_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__50_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__50_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__50_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__50_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__50_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__50_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__49_value),LEAN_SCALAR_PTR_LITERAL(205, 9, 236, 192, 59, 252, 178, 140)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__50 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__50_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "posConfigItem"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__51 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__51_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__52_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__52_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__52_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__52_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__52_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__51_value),LEAN_SCALAR_PTR_LITERAL(232, 137, 50, 117, 152, 182, 155, 132)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__52 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__52_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__53 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__53_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "unfoldPartialApp"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__54 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__54_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__55;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__54_value),LEAN_SCALAR_PTR_LITERAL(49, 203, 120, 209, 69, 128, 204, 215)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__56 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__56_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "negConfigItem"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__57 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__57_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__58_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__58_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__58_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__58_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__57_value),LEAN_SCALAR_PTR_LITERAL(196, 29, 29, 161, 247, 206, 181, 221)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__58 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__58_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__59 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__59_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zeta"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__60 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__60_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__61;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__60_value),LEAN_SCALAR_PTR_LITERAL(56, 247, 87, 81, 188, 35, 250, 148)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__62 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__62_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__63;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__64 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__64_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__65 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__65_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__66 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__66_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_SpecAttr_getSpecSimpTheorems___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__67 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__67_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__68_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__68;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__69_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__69;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__70_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__70;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__71_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__71;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__72_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__72;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__73_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__73;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "mvcgen': the `leave` config option is currently ignored."};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__2_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__1_value),LEAN_SCALAR_PTR_LITERAL(150, 98, 0, 78, 28, 79, 28, 100)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindSeq"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__5_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__5_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__4_value),LEAN_SCALAR_PTR_LITERAL(158, 229, 98, 59, 247, 194, 34, 174)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_simp___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_dischargeNone___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__0_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__1___boxed, .m_arity = 12, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__0_value)} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__3;
static const lean_array_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 153, .m_capacity = 153, .m_length = 148, .m_data = "named Sym.simp variants are not yet supported in `mvcgen'`; use `mvcgen' simplifying_assumptions [thm₁, thm₂, ...]` with the default variant instead"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*13 + 32, .m_other = 13, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(1000) << 1) | 1)),((lean_object*)(((size_t)(1000) << 1) | 1)),((lean_object*)(((size_t)(100000) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(1000) << 1) | 1)),((lean_object*)(((size_t)(1048576) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 1),LEAN_SCALAR_PTR_LITERAL(0, 0, 1, 0, 1, 1, 1, 1),LEAN_SCALAR_PTR_LITERAL(1, 0, 1, 1, 1, 1, 1, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 1, 1, 0, 1, 1)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "tacticTry_"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac___closed__2_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac___closed__1_value),LEAN_SCALAR_PTR_LITERAL(34, 109, 187, 155, 23, 130, 33, 152)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inv"};
static const lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__0 = (const lean_object*)&l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "Could not parse invariant label; expected `inv<n>`."};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__0_value)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__1_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__2;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Duplicate invariant alternative for `inv"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__4_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "invariantDotAlt"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(174, 218, 225, 197, 89, 244, 133, 64)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "invariantCaseAlt"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__2_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(163, 146, 32, 128, 83, 151, 179, 6)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Expected `invariantDotAlt` or `invariantCaseAlt`."};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__4_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "caseArg"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__6 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__6_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(151, 119, 254, 229, 232, 21, 225, 201)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__8 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__8_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__9_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(37, 194, 68, 106, 254, 181, 31, 191)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__9 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__9_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "Alternation between labelled and bulleted invariants is not supported."};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__10 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__10_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "cdotTk"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__12 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__12_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__13_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(117, 126, 44, 217, 38, 3, 69, 145)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__13 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__13_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "invariantAlts"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__0_value),LEAN_SCALAR_PTR_LITERAL(30, 41, 254, 250, 50, 69, 99, 10)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "invariantsKW"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__4_value),LEAN_SCALAR_PTR_LITERAL(113, 87, 251, 76, 123, 116, 93, 232)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "token"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "invariants\? "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__6_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__7_value),LEAN_SCALAR_PTR_LITERAL(241, 40, 134, 186, 103, 193, 43, 220)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Invariant alternative `inv"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "` does not match any invariant goal."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 1, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 145, .m_capacity = 145, .m_length = 144, .m_data = "The `mvcgen'` tactic is an experimental drop-in replacement for `mvcgen` that will eventually replace it. Avoid using it in production projects."};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__1_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "pre-tactic failed on at least one VC; see errors above"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__1;
static const lean_array_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 78, .m_data = "`mvcgen' invariants\?` (suggest mode) is not supported inside `sym => …` blocks"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mvcgen'"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(230, 164, 188, 44, 114, 250, 122, 123)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__3_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__4_value),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__5_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 58, 227, 168, 195, 28, 19, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__6_value),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 242, 56, 182, 153, 42, 114, 203)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__7_value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(132, 236, 244, 1, 128, 181, 211, 156)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "VCGen"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__9_value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(175, 167, 22, 210, 240, 170, 245, 185)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__11_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Frontend"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__12_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__11_value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(18, 209, 67, 183, 120, 233, 44, 242)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__13 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__13_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(147, 197, 196, 233, 158, 77, 49, 202)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__14_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__14_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(254, 108, 164, 213, 221, 37, 180, 229)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__15 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__15_value),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(12, 84, 138, 219, 247, 214, 26, 16)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__16 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__16_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__16_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(73, 168, 135, 192, 193, 202, 29, 136)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__17 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__17_value),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(109, 141, 169, 199, 171, 247, 59, 245)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__18 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__18_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__18_value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(64, 59, 250, 17, 189, 47, 163, 133)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__19 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__19_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "evalSymMVCGen'"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__20 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__20_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__19_value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(19, 92, 242, 121, 57, 23, 92, 131)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__21 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__21_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 41, .m_data = "`mvcgen'` step inside `sym => …` blocks. "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__0_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__0_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__0_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(172, 206, 51, 98, 251, 95, 173, 15)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "elabMVCGen'"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__2_value_aux_0),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__2_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__2_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(232, 135, 166, 206, 84, 210, 155, 104)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__2_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(207, 201, 16, 251, 167, 255, 54, 189)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Tactic-level `mvcgen'`. "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg(lean_object* v_x_7_, lean_object* v_goals_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_, lean_object* v_a_13_, lean_object* v_a_14_){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_16_ = lean_st_mk_ref(v_goals_8_);
v___x_17_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__2));
lean_inc(v_a_14_);
lean_inc_ref(v_a_13_);
lean_inc(v_a_12_);
lean_inc_ref(v_a_11_);
lean_inc(v_a_10_);
lean_inc_ref(v_a_9_);
lean_inc(v___x_16_);
v___x_18_ = lean_apply_9(v_x_7_, v___x_17_, v___x_16_, v_a_9_, v_a_10_, v_a_11_, v_a_12_, v_a_13_, v_a_14_, lean_box(0));
if (lean_obj_tag(v___x_18_) == 0)
{
lean_object* v_a_19_; lean_object* v___x_21_; uint8_t v_isShared_22_; uint8_t v_isSharedCheck_27_; 
v_a_19_ = lean_ctor_get(v___x_18_, 0);
v_isSharedCheck_27_ = !lean_is_exclusive(v___x_18_);
if (v_isSharedCheck_27_ == 0)
{
v___x_21_ = v___x_18_;
v_isShared_22_ = v_isSharedCheck_27_;
goto v_resetjp_20_;
}
else
{
lean_inc(v_a_19_);
lean_dec(v___x_18_);
v___x_21_ = lean_box(0);
v_isShared_22_ = v_isSharedCheck_27_;
goto v_resetjp_20_;
}
v_resetjp_20_:
{
lean_object* v___x_23_; lean_object* v___x_25_; 
v___x_23_ = lean_st_ref_get(v___x_16_);
lean_dec(v___x_16_);
lean_dec(v___x_23_);
if (v_isShared_22_ == 0)
{
v___x_25_ = v___x_21_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_a_19_);
v___x_25_ = v_reuseFailAlloc_26_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
return v___x_25_;
}
}
}
else
{
lean_dec(v___x_16_);
return v___x_18_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___boxed(lean_object* v_x_28_, lean_object* v_goals_29_, lean_object* v_a_30_, lean_object* v_a_31_, lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg(v_x_28_, v_goals_29_, v_a_30_, v_a_31_, v_a_32_, v_a_33_, v_a_34_, v_a_35_);
lean_dec(v_a_35_);
lean_dec_ref(v_a_34_);
lean_dec(v_a_33_);
lean_dec_ref(v_a_32_);
lean_dec(v_a_31_);
lean_dec_ref(v_a_30_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM(lean_object* v_00_u03b1_38_, lean_object* v_x_39_, lean_object* v_goals_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg(v_x_39_, v_goals_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___boxed(lean_object* v_00_u03b1_49_, lean_object* v_x_50_, lean_object* v_goals_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM(v_00_u03b1_49_, v_x_50_, v_goals_51_, v_a_52_, v_a_53_, v_a_54_, v_a_55_, v_a_56_, v_a_57_);
lean_dec(v_a_57_);
lean_dec_ref(v_a_56_);
lean_dec(v_a_55_);
lean_dec_ref(v_a_54_);
lean_dec(v_a_53_);
lean_dec_ref(v_a_52_);
return v_res_59_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = lean_box(0);
v___x_61_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_62_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v___x_60_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0___redArg(){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0___redArg___closed__0);
v___x_65_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0___redArg___boxed(lean_object* v___y_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0___redArg();
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0(lean_object* v_00_u03b1_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0___redArg();
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0___boxed(lean_object* v_00_u03b1_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0(v_00_u03b1_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_);
lean_dec(v___y_83_);
lean_dec_ref(v___y_82_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
return v_res_85_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__5___closed__0(void){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_86_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__5___closed__1(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_87_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__5___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__5___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__5___closed__0);
v___x_88_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__5(lean_object* v_00_u03b2_89_){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__5___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__5___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__5___closed__1);
return v___x_90_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__6___closed__0(void){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_91_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__6___closed__1(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__6___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__6___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__6___closed__0);
v___x_93_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__6(lean_object* v_00_u03b2_94_){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__6___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__6___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__6___closed__1);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__4___redArg(lean_object* v_as_96_, size_t v_sz_97_, size_t v_i_98_, lean_object* v_b_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_){
_start:
{
lean_object* v_a_106_; uint8_t v___x_110_; 
v___x_110_ = lean_usize_dec_lt(v_i_98_, v_sz_97_);
if (v___x_110_ == 0)
{
lean_object* v___x_111_; 
v___x_111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_111_, 0, v_b_99_);
return v___x_111_;
}
else
{
lean_object* v_a_112_; lean_object* v___x_113_; uint8_t v___x_114_; 
v_a_112_ = lean_array_uget_borrowed(v_as_96_, v_i_98_);
lean_inc(v_a_112_);
v___x_113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_113_, 0, v_a_112_);
lean_inc_ref(v_b_99_);
v___x_114_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_isErased(v_b_99_, v___x_113_);
if (v___x_114_ == 0)
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = lean_unsigned_to_nat(1000u);
lean_inc(v_a_112_);
v___x_116_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremFromLocal(v_a_112_, v___x_115_, v___y_100_, v___y_101_, v___y_102_, v___y_103_);
if (lean_obj_tag(v___x_116_) == 0)
{
lean_object* v_a_117_; lean_object* v___x_118_; 
v_a_117_ = lean_ctor_get(v___x_116_, 0);
lean_inc(v_a_117_);
lean_dec_ref_known(v___x_116_, 1);
v___x_118_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_insert(v_b_99_, v_a_117_);
v_a_106_ = v___x_118_;
goto v___jp_105_;
}
else
{
lean_object* v_a_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_130_; 
v_a_119_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_130_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_130_ == 0)
{
v___x_121_ = v___x_116_;
v_isShared_122_ = v_isSharedCheck_130_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_a_119_);
lean_dec(v___x_116_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_130_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
uint8_t v___y_124_; uint8_t v___x_128_; 
v___x_128_ = l_Lean_Exception_isInterrupt(v_a_119_);
if (v___x_128_ == 0)
{
uint8_t v___x_129_; 
lean_inc(v_a_119_);
v___x_129_ = l_Lean_Exception_isRuntime(v_a_119_);
v___y_124_ = v___x_129_;
goto v___jp_123_;
}
else
{
v___y_124_ = v___x_128_;
goto v___jp_123_;
}
v___jp_123_:
{
if (v___y_124_ == 0)
{
lean_del_object(v___x_121_);
lean_dec(v_a_119_);
v_a_106_ = v_b_99_;
goto v___jp_105_;
}
else
{
lean_object* v___x_126_; 
lean_dec_ref(v_b_99_);
if (v_isShared_122_ == 0)
{
v___x_126_ = v___x_121_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v_a_119_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
}
}
}
}
else
{
v_a_106_ = v_b_99_;
goto v___jp_105_;
}
}
v___jp_105_:
{
size_t v___x_107_; size_t v___x_108_; 
v___x_107_ = ((size_t)1ULL);
v___x_108_ = lean_usize_add(v_i_98_, v___x_107_);
v_i_98_ = v___x_108_;
v_b_99_ = v_a_106_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__4___redArg___boxed(lean_object* v_as_131_, lean_object* v_sz_132_, lean_object* v_i_133_, lean_object* v_b_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_){
_start:
{
size_t v_sz_boxed_140_; size_t v_i_boxed_141_; lean_object* v_res_142_; 
v_sz_boxed_140_ = lean_unbox_usize(v_sz_132_);
lean_dec(v_sz_132_);
v_i_boxed_141_ = lean_unbox_usize(v_i_133_);
lean_dec(v_i_133_);
v_res_142_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__4___redArg(v_as_131_, v_sz_boxed_140_, v_i_boxed_141_, v_b_134_, v___y_135_, v___y_136_, v___y_137_, v___y_138_);
lean_dec(v___y_138_);
lean_dec_ref(v___y_137_);
lean_dec(v___y_136_);
lean_dec_ref(v___y_135_);
lean_dec_ref(v_as_131_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___lam__0(lean_object* v_fst_143_, lean_object* v_fst_144_, lean_object* v_specThm_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_){
_start:
{
lean_object* v_proof_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v_proof_153_ = lean_ctor_get(v_specThm_145_, 2);
lean_inc_ref(v_proof_153_);
lean_dec_ref(v_specThm_145_);
v___x_154_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_erase(v_fst_143_, v_proof_153_);
v___x_155_ = lean_box(0);
v___x_156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_156_, 0, v___x_154_);
lean_ctor_set(v___x_156_, 1, v_fst_144_);
v___x_157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_157_, 0, v___x_155_);
lean_ctor_set(v___x_157_, 1, v___x_156_);
v___x_158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___lam__0___boxed(lean_object* v_fst_159_, lean_object* v_fst_160_, lean_object* v_specThm_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___lam__0(v_fst_159_, v_fst_160_, v_specThm_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
lean_dec(v___y_163_);
lean_dec_ref(v___y_162_);
return v_res_169_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__0(void){
_start:
{
lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_170_ = lean_box(1);
v___x_171_ = l_Lean_MessageData_ofFormat(v___x_170_);
return v___x_171_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__3(void){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_175_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__2));
v___x_176_ = l_Lean_MessageData_ofFormat(v___x_175_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6(lean_object* v_x_177_, lean_object* v_x_178_){
_start:
{
if (lean_obj_tag(v_x_178_) == 0)
{
return v_x_177_;
}
else
{
lean_object* v_head_179_; lean_object* v_tail_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_202_; 
v_head_179_ = lean_ctor_get(v_x_178_, 0);
v_tail_180_ = lean_ctor_get(v_x_178_, 1);
v_isSharedCheck_202_ = !lean_is_exclusive(v_x_178_);
if (v_isSharedCheck_202_ == 0)
{
v___x_182_ = v_x_178_;
v_isShared_183_ = v_isSharedCheck_202_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_tail_180_);
lean_inc(v_head_179_);
lean_dec(v_x_178_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_202_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v_before_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_200_; 
v_before_184_ = lean_ctor_get(v_head_179_, 0);
v_isSharedCheck_200_ = !lean_is_exclusive(v_head_179_);
if (v_isSharedCheck_200_ == 0)
{
lean_object* v_unused_201_; 
v_unused_201_ = lean_ctor_get(v_head_179_, 1);
lean_dec(v_unused_201_);
v___x_186_ = v_head_179_;
v_isShared_187_ = v_isSharedCheck_200_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_before_184_);
lean_dec(v_head_179_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_200_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_188_; lean_object* v___x_190_; 
v___x_188_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__0);
if (v_isShared_187_ == 0)
{
lean_ctor_set_tag(v___x_186_, 7);
lean_ctor_set(v___x_186_, 1, v___x_188_);
lean_ctor_set(v___x_186_, 0, v_x_177_);
v___x_190_ = v___x_186_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v_x_177_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v___x_188_);
v___x_190_ = v_reuseFailAlloc_199_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
lean_object* v___x_191_; lean_object* v___x_193_; 
v___x_191_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__3);
if (v_isShared_183_ == 0)
{
lean_ctor_set_tag(v___x_182_, 7);
lean_ctor_set(v___x_182_, 1, v___x_191_);
lean_ctor_set(v___x_182_, 0, v___x_190_);
v___x_193_ = v___x_182_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v___x_190_);
lean_ctor_set(v_reuseFailAlloc_198_, 1, v___x_191_);
v___x_193_ = v_reuseFailAlloc_198_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_194_ = l_Lean_MessageData_ofSyntax(v_before_184_);
v___x_195_ = l_Lean_indentD(v___x_194_);
v___x_196_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_193_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
v_x_177_ = v___x_196_;
v_x_178_ = v_tail_180_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__5(lean_object* v_opts_203_, lean_object* v_opt_204_){
_start:
{
lean_object* v_name_205_; lean_object* v_defValue_206_; lean_object* v_map_207_; lean_object* v___x_208_; 
v_name_205_ = lean_ctor_get(v_opt_204_, 0);
v_defValue_206_ = lean_ctor_get(v_opt_204_, 1);
v_map_207_ = lean_ctor_get(v_opts_203_, 0);
v___x_208_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_207_, v_name_205_);
if (lean_obj_tag(v___x_208_) == 0)
{
uint8_t v___x_209_; 
v___x_209_ = lean_unbox(v_defValue_206_);
return v___x_209_;
}
else
{
lean_object* v_val_210_; 
v_val_210_ = lean_ctor_get(v___x_208_, 0);
lean_inc(v_val_210_);
lean_dec_ref_known(v___x_208_, 1);
if (lean_obj_tag(v_val_210_) == 1)
{
uint8_t v_v_211_; 
v_v_211_ = lean_ctor_get_uint8(v_val_210_, 0);
lean_dec_ref_known(v_val_210_, 0);
return v_v_211_;
}
else
{
uint8_t v___x_212_; 
lean_dec(v_val_210_);
v___x_212_ = lean_unbox(v_defValue_206_);
return v___x_212_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__5___boxed(lean_object* v_opts_213_, lean_object* v_opt_214_){
_start:
{
uint8_t v_res_215_; lean_object* v_r_216_; 
v_res_215_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__5(v_opts_213_, v_opt_214_);
lean_dec_ref(v_opt_214_);
lean_dec_ref(v_opts_213_);
v_r_216_ = lean_box(v_res_215_);
return v_r_216_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_220_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___redArg___closed__1));
v___x_221_ = l_Lean_MessageData_ofFormat(v___x_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___redArg(lean_object* v_msgData_222_, lean_object* v_macroStack_223_, lean_object* v___y_224_){
_start:
{
lean_object* v_options_226_; lean_object* v___x_227_; uint8_t v___x_228_; 
v_options_226_ = lean_ctor_get(v___y_224_, 2);
v___x_227_ = l_Lean_Elab_pp_macroStack;
v___x_228_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__5(v_options_226_, v___x_227_);
if (v___x_228_ == 0)
{
lean_object* v___x_229_; 
lean_dec(v_macroStack_223_);
v___x_229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_229_, 0, v_msgData_222_);
return v___x_229_;
}
else
{
if (lean_obj_tag(v_macroStack_223_) == 0)
{
lean_object* v___x_230_; 
v___x_230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_230_, 0, v_msgData_222_);
return v___x_230_;
}
else
{
lean_object* v_head_231_; lean_object* v_after_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_247_; 
v_head_231_ = lean_ctor_get(v_macroStack_223_, 0);
lean_inc(v_head_231_);
v_after_232_ = lean_ctor_get(v_head_231_, 1);
v_isSharedCheck_247_ = !lean_is_exclusive(v_head_231_);
if (v_isSharedCheck_247_ == 0)
{
lean_object* v_unused_248_; 
v_unused_248_ = lean_ctor_get(v_head_231_, 0);
lean_dec(v_unused_248_);
v___x_234_ = v_head_231_;
v_isShared_235_ = v_isSharedCheck_247_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_after_232_);
lean_dec(v_head_231_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_247_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v___x_236_; lean_object* v___x_238_; 
v___x_236_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6___closed__0);
if (v_isShared_235_ == 0)
{
lean_ctor_set_tag(v___x_234_, 7);
lean_ctor_set(v___x_234_, 1, v___x_236_);
lean_ctor_set(v___x_234_, 0, v_msgData_222_);
v___x_238_ = v___x_234_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v_msgData_222_);
lean_ctor_set(v_reuseFailAlloc_246_, 1, v___x_236_);
v___x_238_ = v_reuseFailAlloc_246_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v_msgData_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_239_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___redArg___closed__2);
v___x_240_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_238_);
lean_ctor_set(v___x_240_, 1, v___x_239_);
v___x_241_ = l_Lean_MessageData_ofSyntax(v_after_232_);
v___x_242_ = l_Lean_indentD(v___x_241_);
v_msgData_243_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_243_, 0, v___x_240_);
lean_ctor_set(v_msgData_243_, 1, v___x_242_);
v___x_244_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__6(v_msgData_243_, v_macroStack_223_);
v___x_245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
return v___x_245_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___redArg___boxed(lean_object* v_msgData_249_, lean_object* v_macroStack_250_, lean_object* v___y_251_, lean_object* v___y_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___redArg(v_msgData_249_, v_macroStack_250_, v___y_251_);
lean_dec_ref(v___y_251_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__1(lean_object* v_msgData_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_){
_start:
{
lean_object* v___x_260_; lean_object* v_env_261_; lean_object* v___x_262_; lean_object* v_mctx_263_; lean_object* v_lctx_264_; lean_object* v_options_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_260_ = lean_st_ref_get(v___y_258_);
v_env_261_ = lean_ctor_get(v___x_260_, 0);
lean_inc_ref(v_env_261_);
lean_dec(v___x_260_);
v___x_262_ = lean_st_ref_get(v___y_256_);
v_mctx_263_ = lean_ctor_get(v___x_262_, 0);
lean_inc_ref(v_mctx_263_);
lean_dec(v___x_262_);
v_lctx_264_ = lean_ctor_get(v___y_255_, 2);
v_options_265_ = lean_ctor_get(v___y_257_, 2);
lean_inc_ref(v_options_265_);
lean_inc_ref(v_lctx_264_);
v___x_266_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_266_, 0, v_env_261_);
lean_ctor_set(v___x_266_, 1, v_mctx_263_);
lean_ctor_set(v___x_266_, 2, v_lctx_264_);
lean_ctor_set(v___x_266_, 3, v_options_265_);
v___x_267_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_267_, 0, v___x_266_);
lean_ctor_set(v___x_267_, 1, v_msgData_254_);
v___x_268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_268_, 0, v___x_267_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__1___boxed(lean_object* v_msgData_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__1(v_msgData_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_);
lean_dec(v___y_273_);
lean_dec_ref(v___y_272_);
lean_dec(v___y_271_);
lean_dec_ref(v___y_270_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1___redArg(lean_object* v_msg_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_){
_start:
{
lean_object* v_ref_284_; lean_object* v___x_285_; lean_object* v_a_286_; lean_object* v_macroStack_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v_a_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_298_; 
v_ref_284_ = lean_ctor_get(v___y_281_, 5);
v___x_285_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__1(v_msg_276_, v___y_279_, v___y_280_, v___y_281_, v___y_282_);
v_a_286_ = lean_ctor_get(v___x_285_, 0);
lean_inc(v_a_286_);
lean_dec_ref(v___x_285_);
v_macroStack_287_ = lean_ctor_get(v___y_277_, 1);
v___x_288_ = l_Lean_Elab_getBetterRef(v_ref_284_, v_macroStack_287_);
lean_inc(v_macroStack_287_);
v___x_289_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___redArg(v_a_286_, v_macroStack_287_, v___y_281_);
v_a_290_ = lean_ctor_get(v___x_289_, 0);
v_isSharedCheck_298_ = !lean_is_exclusive(v___x_289_);
if (v_isSharedCheck_298_ == 0)
{
v___x_292_ = v___x_289_;
v_isShared_293_ = v_isSharedCheck_298_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_a_290_);
lean_dec(v___x_289_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_298_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_294_; lean_object* v___x_296_; 
v___x_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_288_);
lean_ctor_set(v___x_294_, 1, v_a_290_);
if (v_isShared_293_ == 0)
{
lean_ctor_set_tag(v___x_292_, 1);
lean_ctor_set(v___x_292_, 0, v___x_294_);
v___x_296_ = v___x_292_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v___x_294_);
v___x_296_ = v_reuseFailAlloc_297_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
return v___x_296_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1___redArg___boxed(lean_object* v_msg_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1___redArg(v_msg_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_);
lean_dec(v___y_305_);
lean_dec_ref(v___y_304_);
lean_dec(v___y_303_);
lean_dec_ref(v___y_302_);
lean_dec(v___y_301_);
lean_dec_ref(v___y_300_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__13___redArg(lean_object* v_ref_308_, lean_object* v_msg_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_){
_start:
{
lean_object* v_fileName_317_; lean_object* v_fileMap_318_; lean_object* v_options_319_; lean_object* v_currRecDepth_320_; lean_object* v_maxRecDepth_321_; lean_object* v_ref_322_; lean_object* v_currNamespace_323_; lean_object* v_openDecls_324_; lean_object* v_initHeartbeats_325_; lean_object* v_maxHeartbeats_326_; lean_object* v_quotContext_327_; lean_object* v_currMacroScope_328_; uint8_t v_diag_329_; lean_object* v_cancelTk_x3f_330_; uint8_t v_suppressElabErrors_331_; lean_object* v_inheritedTraceOptions_332_; lean_object* v_ref_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v_fileName_317_ = lean_ctor_get(v___y_314_, 0);
v_fileMap_318_ = lean_ctor_get(v___y_314_, 1);
v_options_319_ = lean_ctor_get(v___y_314_, 2);
v_currRecDepth_320_ = lean_ctor_get(v___y_314_, 3);
v_maxRecDepth_321_ = lean_ctor_get(v___y_314_, 4);
v_ref_322_ = lean_ctor_get(v___y_314_, 5);
v_currNamespace_323_ = lean_ctor_get(v___y_314_, 6);
v_openDecls_324_ = lean_ctor_get(v___y_314_, 7);
v_initHeartbeats_325_ = lean_ctor_get(v___y_314_, 8);
v_maxHeartbeats_326_ = lean_ctor_get(v___y_314_, 9);
v_quotContext_327_ = lean_ctor_get(v___y_314_, 10);
v_currMacroScope_328_ = lean_ctor_get(v___y_314_, 11);
v_diag_329_ = lean_ctor_get_uint8(v___y_314_, sizeof(void*)*14);
v_cancelTk_x3f_330_ = lean_ctor_get(v___y_314_, 12);
v_suppressElabErrors_331_ = lean_ctor_get_uint8(v___y_314_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_332_ = lean_ctor_get(v___y_314_, 13);
v_ref_333_ = l_Lean_replaceRef(v_ref_308_, v_ref_322_);
lean_inc_ref(v_inheritedTraceOptions_332_);
lean_inc(v_cancelTk_x3f_330_);
lean_inc(v_currMacroScope_328_);
lean_inc(v_quotContext_327_);
lean_inc(v_maxHeartbeats_326_);
lean_inc(v_initHeartbeats_325_);
lean_inc(v_openDecls_324_);
lean_inc(v_currNamespace_323_);
lean_inc(v_maxRecDepth_321_);
lean_inc(v_currRecDepth_320_);
lean_inc_ref(v_options_319_);
lean_inc_ref(v_fileMap_318_);
lean_inc_ref(v_fileName_317_);
v___x_334_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_334_, 0, v_fileName_317_);
lean_ctor_set(v___x_334_, 1, v_fileMap_318_);
lean_ctor_set(v___x_334_, 2, v_options_319_);
lean_ctor_set(v___x_334_, 3, v_currRecDepth_320_);
lean_ctor_set(v___x_334_, 4, v_maxRecDepth_321_);
lean_ctor_set(v___x_334_, 5, v_ref_333_);
lean_ctor_set(v___x_334_, 6, v_currNamespace_323_);
lean_ctor_set(v___x_334_, 7, v_openDecls_324_);
lean_ctor_set(v___x_334_, 8, v_initHeartbeats_325_);
lean_ctor_set(v___x_334_, 9, v_maxHeartbeats_326_);
lean_ctor_set(v___x_334_, 10, v_quotContext_327_);
lean_ctor_set(v___x_334_, 11, v_currMacroScope_328_);
lean_ctor_set(v___x_334_, 12, v_cancelTk_x3f_330_);
lean_ctor_set(v___x_334_, 13, v_inheritedTraceOptions_332_);
lean_ctor_set_uint8(v___x_334_, sizeof(void*)*14, v_diag_329_);
lean_ctor_set_uint8(v___x_334_, sizeof(void*)*14 + 1, v_suppressElabErrors_331_);
v___x_335_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1___redArg(v_msg_309_, v___y_310_, v___y_311_, v___y_312_, v___y_313_, v___x_334_, v___y_315_);
lean_dec_ref_known(v___x_334_, 14);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__13___redArg___boxed(lean_object* v_ref_336_, lean_object* v_msg_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__13___redArg(v_ref_336_, v_msg_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_, v___y_342_, v___y_343_);
lean_dec(v___y_343_);
lean_dec_ref(v___y_342_);
lean_dec(v___y_341_);
lean_dec_ref(v___y_340_);
lean_dec(v___y_339_);
lean_dec_ref(v___y_338_);
lean_dec(v_ref_336_);
return v_res_345_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__0(void){
_start:
{
lean_object* v___x_346_; 
v___x_346_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_346_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1(void){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_347_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__0);
v___x_348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_348_, 0, v___x_347_);
return v___x_348_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__2(void){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_349_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1);
v___x_350_ = lean_unsigned_to_nat(0u);
v___x_351_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
lean_ctor_set(v___x_351_, 1, v___x_350_);
lean_ctor_set(v___x_351_, 2, v___x_350_);
lean_ctor_set(v___x_351_, 3, v___x_350_);
lean_ctor_set(v___x_351_, 4, v___x_349_);
lean_ctor_set(v___x_351_, 5, v___x_349_);
lean_ctor_set(v___x_351_, 6, v___x_349_);
lean_ctor_set(v___x_351_, 7, v___x_349_);
lean_ctor_set(v___x_351_, 8, v___x_349_);
lean_ctor_set(v___x_351_, 9, v___x_349_);
return v___x_351_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__3(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_352_ = lean_unsigned_to_nat(32u);
v___x_353_ = lean_mk_empty_array_with_capacity(v___x_352_);
v___x_354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_354_, 0, v___x_353_);
return v___x_354_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__4(void){
_start:
{
size_t v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_355_ = ((size_t)5ULL);
v___x_356_ = lean_unsigned_to_nat(0u);
v___x_357_ = lean_unsigned_to_nat(32u);
v___x_358_ = lean_mk_empty_array_with_capacity(v___x_357_);
v___x_359_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__3);
v___x_360_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_360_, 0, v___x_359_);
lean_ctor_set(v___x_360_, 1, v___x_358_);
lean_ctor_set(v___x_360_, 2, v___x_356_);
lean_ctor_set(v___x_360_, 3, v___x_356_);
lean_ctor_set_usize(v___x_360_, 4, v___x_355_);
return v___x_360_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__5(void){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_361_ = lean_box(1);
v___x_362_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__4);
v___x_363_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1);
v___x_364_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_364_, 0, v___x_363_);
lean_ctor_set(v___x_364_, 1, v___x_362_);
lean_ctor_set(v___x_364_, 2, v___x_361_);
return v___x_364_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7(void){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_366_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__6));
v___x_367_ = l_Lean_stringToMessageData(v___x_366_);
return v___x_367_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__9(void){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_369_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__8));
v___x_370_ = l_Lean_stringToMessageData(v___x_369_);
return v___x_370_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__11(void){
_start:
{
lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_372_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__10));
v___x_373_ = l_Lean_stringToMessageData(v___x_372_);
return v___x_373_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__13(void){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__12));
v___x_376_ = l_Lean_stringToMessageData(v___x_375_);
return v___x_376_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__15(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__14));
v___x_379_ = l_Lean_stringToMessageData(v___x_378_);
return v___x_379_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__17(void){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_381_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__16));
v___x_382_ = l_Lean_stringToMessageData(v___x_381_);
return v___x_382_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__19(void){
_start:
{
lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_384_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__18));
v___x_385_ = l_Lean_stringToMessageData(v___x_384_);
return v___x_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg(lean_object* v_msg_386_, lean_object* v_declHint_387_, lean_object* v___y_388_){
_start:
{
lean_object* v___x_390_; lean_object* v_env_391_; uint8_t v___x_392_; 
v___x_390_ = lean_st_ref_get(v___y_388_);
v_env_391_ = lean_ctor_get(v___x_390_, 0);
lean_inc_ref(v_env_391_);
lean_dec(v___x_390_);
v___x_392_ = l_Lean_Name_isAnonymous(v_declHint_387_);
if (v___x_392_ == 0)
{
uint8_t v_isExporting_393_; 
v_isExporting_393_ = lean_ctor_get_uint8(v_env_391_, sizeof(void*)*8);
if (v_isExporting_393_ == 0)
{
lean_object* v___x_394_; 
lean_dec_ref(v_env_391_);
lean_dec(v_declHint_387_);
v___x_394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_394_, 0, v_msg_386_);
return v___x_394_;
}
else
{
lean_object* v___x_395_; uint8_t v___x_396_; 
lean_inc_ref(v_env_391_);
v___x_395_ = l_Lean_Environment_setExporting(v_env_391_, v___x_392_);
lean_inc(v_declHint_387_);
lean_inc_ref(v___x_395_);
v___x_396_ = l_Lean_Environment_contains(v___x_395_, v_declHint_387_, v_isExporting_393_);
if (v___x_396_ == 0)
{
lean_object* v___x_397_; 
lean_dec_ref(v___x_395_);
lean_dec_ref(v_env_391_);
lean_dec(v_declHint_387_);
v___x_397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_397_, 0, v_msg_386_);
return v___x_397_;
}
else
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v_c_403_; lean_object* v___x_404_; 
v___x_398_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__2);
v___x_399_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__5);
v___x_400_ = l_Lean_Options_empty;
v___x_401_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_401_, 0, v___x_395_);
lean_ctor_set(v___x_401_, 1, v___x_398_);
lean_ctor_set(v___x_401_, 2, v___x_399_);
lean_ctor_set(v___x_401_, 3, v___x_400_);
lean_inc(v_declHint_387_);
v___x_402_ = l_Lean_MessageData_ofConstName(v_declHint_387_, v___x_392_);
v_c_403_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_403_, 0, v___x_401_);
lean_ctor_set(v_c_403_, 1, v___x_402_);
v___x_404_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_391_, v_declHint_387_);
if (lean_obj_tag(v___x_404_) == 0)
{
lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
lean_dec_ref(v_env_391_);
lean_dec(v_declHint_387_);
v___x_405_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7);
v___x_406_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
lean_ctor_set(v___x_406_, 1, v_c_403_);
v___x_407_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__9);
v___x_408_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_408_, 0, v___x_406_);
lean_ctor_set(v___x_408_, 1, v___x_407_);
v___x_409_ = l_Lean_MessageData_note(v___x_408_);
v___x_410_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_410_, 0, v_msg_386_);
lean_ctor_set(v___x_410_, 1, v___x_409_);
v___x_411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_411_, 0, v___x_410_);
return v___x_411_;
}
else
{
lean_object* v_val_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_447_; 
v_val_412_ = lean_ctor_get(v___x_404_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_447_ == 0)
{
v___x_414_ = v___x_404_;
v_isShared_415_ = v_isSharedCheck_447_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_val_412_);
lean_dec(v___x_404_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_447_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v_mod_419_; uint8_t v___x_420_; 
v___x_416_ = lean_box(0);
v___x_417_ = l_Lean_Environment_header(v_env_391_);
lean_dec_ref(v_env_391_);
v___x_418_ = l_Lean_EnvironmentHeader_moduleNames(v___x_417_);
v_mod_419_ = lean_array_get(v___x_416_, v___x_418_, v_val_412_);
lean_dec(v_val_412_);
lean_dec_ref(v___x_418_);
v___x_420_ = l_Lean_isPrivateName(v_declHint_387_);
lean_dec(v_declHint_387_);
if (v___x_420_ == 0)
{
lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_432_; 
v___x_421_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__11);
v___x_422_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_422_, 0, v___x_421_);
lean_ctor_set(v___x_422_, 1, v_c_403_);
v___x_423_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__13);
v___x_424_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_424_, 0, v___x_422_);
lean_ctor_set(v___x_424_, 1, v___x_423_);
v___x_425_ = l_Lean_MessageData_ofName(v_mod_419_);
v___x_426_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_426_, 0, v___x_424_);
lean_ctor_set(v___x_426_, 1, v___x_425_);
v___x_427_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__15);
v___x_428_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_428_, 0, v___x_426_);
lean_ctor_set(v___x_428_, 1, v___x_427_);
v___x_429_ = l_Lean_MessageData_note(v___x_428_);
v___x_430_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_430_, 0, v_msg_386_);
lean_ctor_set(v___x_430_, 1, v___x_429_);
if (v_isShared_415_ == 0)
{
lean_ctor_set_tag(v___x_414_, 0);
lean_ctor_set(v___x_414_, 0, v___x_430_);
v___x_432_ = v___x_414_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v___x_430_);
v___x_432_ = v_reuseFailAlloc_433_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
return v___x_432_;
}
}
else
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_445_; 
v___x_434_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7);
v___x_435_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_435_, 0, v___x_434_);
lean_ctor_set(v___x_435_, 1, v_c_403_);
v___x_436_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__17);
v___x_437_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_437_, 0, v___x_435_);
lean_ctor_set(v___x_437_, 1, v___x_436_);
v___x_438_ = l_Lean_MessageData_ofName(v_mod_419_);
v___x_439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_439_, 0, v___x_437_);
lean_ctor_set(v___x_439_, 1, v___x_438_);
v___x_440_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__19);
v___x_441_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_441_, 0, v___x_439_);
lean_ctor_set(v___x_441_, 1, v___x_440_);
v___x_442_ = l_Lean_MessageData_note(v___x_441_);
v___x_443_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_443_, 0, v_msg_386_);
lean_ctor_set(v___x_443_, 1, v___x_442_);
if (v_isShared_415_ == 0)
{
lean_ctor_set_tag(v___x_414_, 0);
lean_ctor_set(v___x_414_, 0, v___x_443_);
v___x_445_ = v___x_414_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v___x_443_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_448_; 
lean_dec_ref(v_env_391_);
lean_dec(v_declHint_387_);
v___x_448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_448_, 0, v_msg_386_);
return v___x_448_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___boxed(lean_object* v_msg_449_, lean_object* v_declHint_450_, lean_object* v___y_451_, lean_object* v___y_452_){
_start:
{
lean_object* v_res_453_; 
v_res_453_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg(v_msg_449_, v_declHint_450_, v___y_451_);
lean_dec(v___y_451_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12(lean_object* v_msg_454_, lean_object* v_declHint_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_){
_start:
{
lean_object* v___x_463_; lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_473_; 
v___x_463_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg(v_msg_454_, v_declHint_455_, v___y_461_);
v_a_464_ = lean_ctor_get(v___x_463_, 0);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_473_ == 0)
{
v___x_466_ = v___x_463_;
v_isShared_467_ = v_isSharedCheck_473_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v___x_463_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_473_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_471_; 
v___x_468_ = l_Lean_unknownIdentifierMessageTag;
v___x_469_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_469_, 0, v___x_468_);
lean_ctor_set(v___x_469_, 1, v_a_464_);
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 0, v___x_469_);
v___x_471_ = v___x_466_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v___x_469_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12___boxed(lean_object* v_msg_474_, lean_object* v_declHint_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12(v_msg_474_, v_declHint_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_);
lean_dec(v___y_481_);
lean_dec_ref(v___y_480_);
lean_dec(v___y_479_);
lean_dec_ref(v___y_478_);
lean_dec(v___y_477_);
lean_dec_ref(v___y_476_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9___redArg(lean_object* v_ref_484_, lean_object* v_msg_485_, lean_object* v_declHint_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_){
_start:
{
lean_object* v___x_494_; lean_object* v_a_495_; lean_object* v___x_496_; 
v___x_494_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12(v_msg_485_, v_declHint_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_);
v_a_495_ = lean_ctor_get(v___x_494_, 0);
lean_inc(v_a_495_);
lean_dec_ref(v___x_494_);
v___x_496_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__13___redArg(v_ref_484_, v_a_495_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9___redArg___boxed(lean_object* v_ref_497_, lean_object* v_msg_498_, lean_object* v_declHint_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9___redArg(v_ref_497_, v_msg_498_, v_declHint_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_);
lean_dec(v___y_505_);
lean_dec_ref(v___y_504_);
lean_dec(v___y_503_);
lean_dec_ref(v___y_502_);
lean_dec(v___y_501_);
lean_dec_ref(v___y_500_);
lean_dec(v_ref_497_);
return v_res_507_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_509_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__0));
v___x_510_ = l_Lean_stringToMessageData(v___x_509_);
return v___x_510_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_512_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__2));
v___x_513_ = l_Lean_stringToMessageData(v___x_512_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg(lean_object* v_ref_514_, lean_object* v_constName_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_){
_start:
{
lean_object* v___x_523_; uint8_t v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_523_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__1);
v___x_524_ = 0;
lean_inc(v_constName_515_);
v___x_525_ = l_Lean_MessageData_ofConstName(v_constName_515_, v___x_524_);
v___x_526_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_526_, 0, v___x_523_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
v___x_527_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__3);
v___x_528_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_528_, 0, v___x_526_);
lean_ctor_set(v___x_528_, 1, v___x_527_);
v___x_529_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9___redArg(v_ref_514_, v___x_528_, v_constName_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___boxed(lean_object* v_ref_530_, lean_object* v_constName_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg(v_ref_530_, v_constName_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_, v___y_536_, v___y_537_);
lean_dec(v___y_537_);
lean_dec_ref(v___y_536_);
lean_dec(v___y_535_);
lean_dec_ref(v___y_534_);
lean_dec(v___y_533_);
lean_dec_ref(v___y_532_);
lean_dec(v_ref_530_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2___redArg(lean_object* v_constName_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
lean_object* v_ref_548_; lean_object* v___x_549_; 
v_ref_548_ = lean_ctor_get(v___y_545_, 5);
v___x_549_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg(v_ref_548_, v_constName_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2___redArg___boxed(lean_object* v_constName_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2___redArg(v_constName_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
lean_dec(v___y_552_);
lean_dec_ref(v___y_551_);
return v_res_558_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__10(void){
_start:
{
lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_581_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__9));
v___x_582_ = l_Lean_stringToMessageData(v___x_581_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3(lean_object* v_as_584_, size_t v_sz_585_, size_t v_i_586_, lean_object* v_b_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_){
_start:
{
lean_object* v_a_596_; uint8_t v___x_600_; 
v___x_600_ = lean_usize_dec_lt(v_i_586_, v_sz_585_);
if (v___x_600_ == 0)
{
lean_object* v___x_601_; 
v___x_601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_601_, 0, v_b_587_);
return v___x_601_;
}
else
{
lean_object* v_snd_602_; lean_object* v_fst_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_837_; 
v_snd_602_ = lean_ctor_get(v_b_587_, 1);
v_fst_603_ = lean_ctor_get(v_b_587_, 0);
v_isSharedCheck_837_ = !lean_is_exclusive(v_b_587_);
if (v_isSharedCheck_837_ == 0)
{
v___x_605_ = v_b_587_;
v_isShared_606_ = v_isSharedCheck_837_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_snd_602_);
lean_inc(v_fst_603_);
lean_dec(v_b_587_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_837_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v_fst_607_; lean_object* v_snd_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_836_; 
v_fst_607_ = lean_ctor_get(v_snd_602_, 0);
v_snd_608_ = lean_ctor_get(v_snd_602_, 1);
v_isSharedCheck_836_ = !lean_is_exclusive(v_snd_602_);
if (v_isSharedCheck_836_ == 0)
{
v___x_610_ = v_snd_602_;
v_isShared_611_ = v_isSharedCheck_836_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_snd_608_);
lean_inc(v_fst_607_);
lean_dec(v_snd_602_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_836_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v_fst_613_; lean_object* v_snd_614_; lean_object* v_fst_622_; lean_object* v_snd_623_; lean_object* v_fst_627_; lean_object* v_snd_628_; lean_object* v___x_631_; lean_object* v_a_632_; lean_object* v___y_634_; uint8_t v___y_635_; lean_object* v___y_639_; uint8_t v___y_640_; lean_object* v___y_648_; uint8_t v___y_649_; lean_object* v_a_653_; lean_object* v___y_657_; lean_object* v___x_663_; lean_object* v___x_664_; uint8_t v___x_665_; 
v___x_631_ = lean_unsigned_to_nat(1u);
v_a_632_ = lean_array_uget_borrowed(v_as_584_, v_i_586_);
lean_inc(v_a_632_);
v___x_663_ = l_Lean_Syntax_getKind(v_a_632_);
v___x_664_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__4));
v___x_665_ = lean_name_eq(v___x_663_, v___x_664_);
if (v___x_665_ == 0)
{
lean_object* v___x_666_; uint8_t v___x_667_; 
lean_del_object(v___x_610_);
lean_del_object(v___x_605_);
v___x_666_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__6));
v___x_667_ = lean_name_eq(v___x_663_, v___x_666_);
if (v___x_667_ == 0)
{
lean_object* v___x_668_; uint8_t v___x_669_; 
v___x_668_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__8));
v___x_669_ = lean_name_eq(v___x_663_, v___x_668_);
lean_dec(v___x_663_);
if (v___x_669_ == 0)
{
lean_object* v___x_670_; 
v___x_670_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0___redArg();
if (lean_obj_tag(v___x_670_) == 0)
{
lean_object* v___x_671_; lean_object* v___x_672_; 
lean_dec_ref_known(v___x_670_, 1);
v___x_671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_671_, 0, v_fst_607_);
lean_ctor_set(v___x_671_, 1, v_snd_608_);
v___x_672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_672_, 0, v_fst_603_);
lean_ctor_set(v___x_672_, 1, v___x_671_);
v_a_596_ = v___x_672_;
goto v___jp_595_;
}
else
{
lean_object* v_a_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_680_; 
lean_dec(v_snd_608_);
lean_dec(v_fst_607_);
lean_dec(v_fst_603_);
v_a_673_ = lean_ctor_get(v___x_670_, 0);
v_isSharedCheck_680_ = !lean_is_exclusive(v___x_670_);
if (v_isSharedCheck_680_ == 0)
{
v___x_675_ = v___x_670_;
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_a_673_);
lean_dec(v___x_670_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_678_; 
if (v_isShared_676_ == 0)
{
v___x_678_ = v___x_675_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v_a_673_);
v___x_678_ = v_reuseFailAlloc_679_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
return v___x_678_;
}
}
}
}
else
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
lean_dec(v_snd_608_);
lean_inc(v_a_632_);
v___x_681_ = lean_array_push(v_fst_607_, v_a_632_);
v___x_682_ = lean_box(v___x_600_);
v___x_683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_683_, 0, v___x_681_);
lean_ctor_set(v___x_683_, 1, v___x_682_);
v___x_684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_684_, 0, v_fst_603_);
lean_ctor_set(v___x_684_, 1, v___x_683_);
v_a_596_ = v___x_684_;
goto v___jp_595_;
}
}
else
{
lean_object* v___x_685_; lean_object* v___x_686_; uint8_t v___x_687_; 
lean_dec(v___x_663_);
v___x_685_ = lean_unsigned_to_nat(0u);
v___x_686_ = l_Lean_Syntax_getArg(v_a_632_, v___x_685_);
v___x_687_ = l_Lean_Syntax_isNone(v___x_686_);
lean_dec(v___x_686_);
if (v___x_687_ == 0)
{
goto v___jp_643_;
}
else
{
lean_object* v___x_688_; uint8_t v___x_689_; 
v___x_688_ = l_Lean_Syntax_getArg(v_a_632_, v___x_631_);
v___x_689_ = l_Lean_Syntax_isNone(v___x_688_);
lean_dec(v___x_688_);
if (v___x_689_ == 0)
{
goto v___jp_643_;
}
else
{
lean_object* v___x_690_; 
v___x_690_ = l_Lean_Meta_saveState___redArg(v___y_591_, v___y_593_);
if (lean_obj_tag(v___x_690_) == 0)
{
lean_object* v_a_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v___y_697_; lean_object* v___y_698_; lean_object* v___y_699_; lean_object* v___y_700_; lean_object* v___y_736_; lean_object* v___x_763_; lean_object* v___x_764_; 
v_a_691_ = lean_ctor_get(v___x_690_, 0);
lean_inc(v_a_691_);
lean_dec_ref_known(v___x_690_, 1);
v___x_692_ = lean_unsigned_to_nat(2u);
v___x_693_ = l_Lean_Syntax_getArg(v_a_632_, v___x_692_);
v___x_763_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__11));
lean_inc(v___x_693_);
v___x_764_ = l_Lean_Elab_Term_resolveId_x3f(v___x_693_, v___x_763_, v___x_600_, v___y_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
if (lean_obj_tag(v___x_764_) == 0)
{
lean_dec(v_a_691_);
v___y_736_ = v___x_764_;
goto v___jp_735_;
}
else
{
lean_object* v_a_765_; uint8_t v___y_767_; uint8_t v___x_778_; 
v_a_765_ = lean_ctor_get(v___x_764_, 0);
lean_inc(v_a_765_);
v___x_778_ = l_Lean_Exception_isInterrupt(v_a_765_);
if (v___x_778_ == 0)
{
uint8_t v___x_779_; 
v___x_779_ = l_Lean_Exception_isRuntime(v_a_765_);
v___y_767_ = v___x_779_;
goto v___jp_766_;
}
else
{
lean_dec(v_a_765_);
v___y_767_ = v___x_778_;
goto v___jp_766_;
}
v___jp_766_:
{
if (v___y_767_ == 0)
{
lean_object* v___x_768_; 
lean_dec_ref_known(v___x_764_, 1);
v___x_768_ = l_Lean_Meta_SavedState_restore___redArg(v_a_691_, v___y_591_, v___y_593_);
lean_dec(v_a_691_);
if (lean_obj_tag(v___x_768_) == 0)
{
lean_object* v___x_769_; 
lean_dec_ref_known(v___x_768_, 1);
lean_inc(v___x_693_);
v___x_769_ = l_Lean_Elab_Term_elabCDotFunctionAlias_x3f(v___x_693_, v___y_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
v___y_736_ = v___x_769_;
goto v___jp_735_;
}
else
{
lean_object* v_a_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_777_; 
lean_dec(v___x_693_);
lean_dec(v_snd_608_);
lean_dec(v_fst_607_);
lean_dec(v_fst_603_);
v_a_770_ = lean_ctor_get(v___x_768_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_777_ == 0)
{
v___x_772_ = v___x_768_;
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_a_770_);
lean_dec(v___x_768_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_775_; 
if (v_isShared_773_ == 0)
{
v___x_775_ = v___x_772_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_a_770_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
return v___x_775_;
}
}
}
}
else
{
lean_dec(v_a_691_);
v___y_736_ = v___x_764_;
goto v___jp_735_;
}
}
}
v___jp_694_:
{
lean_object* v_fileName_701_; lean_object* v_fileMap_702_; lean_object* v_options_703_; lean_object* v_currRecDepth_704_; lean_object* v_maxRecDepth_705_; lean_object* v_ref_706_; lean_object* v_currNamespace_707_; lean_object* v_openDecls_708_; lean_object* v_initHeartbeats_709_; lean_object* v_maxHeartbeats_710_; lean_object* v_quotContext_711_; lean_object* v_currMacroScope_712_; uint8_t v_diag_713_; lean_object* v_cancelTk_x3f_714_; uint8_t v_suppressElabErrors_715_; lean_object* v_inheritedTraceOptions_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v_ref_722_; lean_object* v___x_723_; lean_object* v___x_724_; 
v_fileName_701_ = lean_ctor_get(v___y_699_, 0);
v_fileMap_702_ = lean_ctor_get(v___y_699_, 1);
v_options_703_ = lean_ctor_get(v___y_699_, 2);
v_currRecDepth_704_ = lean_ctor_get(v___y_699_, 3);
v_maxRecDepth_705_ = lean_ctor_get(v___y_699_, 4);
v_ref_706_ = lean_ctor_get(v___y_699_, 5);
v_currNamespace_707_ = lean_ctor_get(v___y_699_, 6);
v_openDecls_708_ = lean_ctor_get(v___y_699_, 7);
v_initHeartbeats_709_ = lean_ctor_get(v___y_699_, 8);
v_maxHeartbeats_710_ = lean_ctor_get(v___y_699_, 9);
v_quotContext_711_ = lean_ctor_get(v___y_699_, 10);
v_currMacroScope_712_ = lean_ctor_get(v___y_699_, 11);
v_diag_713_ = lean_ctor_get_uint8(v___y_699_, sizeof(void*)*14);
v_cancelTk_x3f_714_ = lean_ctor_get(v___y_699_, 12);
v_suppressElabErrors_715_ = lean_ctor_get_uint8(v___y_699_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_716_ = lean_ctor_get(v___y_699_, 13);
v___x_717_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__10);
lean_inc(v___x_693_);
v___x_718_ = l_Lean_MessageData_ofSyntax(v___x_693_);
v___x_719_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_719_, 0, v___x_717_);
lean_ctor_set(v___x_719_, 1, v___x_718_);
v___x_720_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg___closed__3);
v___x_721_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_721_, 0, v___x_719_);
lean_ctor_set(v___x_721_, 1, v___x_720_);
v_ref_722_ = l_Lean_replaceRef(v___x_693_, v_ref_706_);
lean_dec(v___x_693_);
lean_inc_ref(v_inheritedTraceOptions_716_);
lean_inc(v_cancelTk_x3f_714_);
lean_inc(v_currMacroScope_712_);
lean_inc(v_quotContext_711_);
lean_inc(v_maxHeartbeats_710_);
lean_inc(v_initHeartbeats_709_);
lean_inc(v_openDecls_708_);
lean_inc(v_currNamespace_707_);
lean_inc(v_maxRecDepth_705_);
lean_inc(v_currRecDepth_704_);
lean_inc_ref(v_options_703_);
lean_inc_ref(v_fileMap_702_);
lean_inc_ref(v_fileName_701_);
v___x_723_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_723_, 0, v_fileName_701_);
lean_ctor_set(v___x_723_, 1, v_fileMap_702_);
lean_ctor_set(v___x_723_, 2, v_options_703_);
lean_ctor_set(v___x_723_, 3, v_currRecDepth_704_);
lean_ctor_set(v___x_723_, 4, v_maxRecDepth_705_);
lean_ctor_set(v___x_723_, 5, v_ref_722_);
lean_ctor_set(v___x_723_, 6, v_currNamespace_707_);
lean_ctor_set(v___x_723_, 7, v_openDecls_708_);
lean_ctor_set(v___x_723_, 8, v_initHeartbeats_709_);
lean_ctor_set(v___x_723_, 9, v_maxHeartbeats_710_);
lean_ctor_set(v___x_723_, 10, v_quotContext_711_);
lean_ctor_set(v___x_723_, 11, v_currMacroScope_712_);
lean_ctor_set(v___x_723_, 12, v_cancelTk_x3f_714_);
lean_ctor_set(v___x_723_, 13, v_inheritedTraceOptions_716_);
lean_ctor_set_uint8(v___x_723_, sizeof(void*)*14, v_diag_713_);
lean_ctor_set_uint8(v___x_723_, sizeof(void*)*14 + 1, v_suppressElabErrors_715_);
v___x_724_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1___redArg(v___x_721_, v___y_695_, v___y_696_, v___y_697_, v___y_698_, v___x_723_, v___y_700_);
lean_dec_ref_known(v___x_723_, 14);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_object* v___x_725_; lean_object* v___x_726_; 
lean_dec_ref_known(v___x_724_, 1);
v___x_725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_725_, 0, v_fst_607_);
lean_ctor_set(v___x_725_, 1, v_snd_608_);
v___x_726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_726_, 0, v_fst_603_);
lean_ctor_set(v___x_726_, 1, v___x_725_);
v_a_596_ = v___x_726_;
goto v___jp_595_;
}
else
{
lean_object* v_a_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_734_; 
lean_dec(v_snd_608_);
lean_dec(v_fst_607_);
lean_dec(v_fst_603_);
v_a_727_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_734_ == 0)
{
v___x_729_ = v___x_724_;
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_a_727_);
lean_dec(v___x_724_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_732_; 
if (v_isShared_730_ == 0)
{
v___x_732_ = v___x_729_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_a_727_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
}
v___jp_735_:
{
if (lean_obj_tag(v___y_736_) == 0)
{
lean_object* v_a_737_; 
v_a_737_ = lean_ctor_get(v___y_736_, 0);
lean_inc(v_a_737_);
lean_dec_ref_known(v___y_736_, 1);
if (lean_obj_tag(v_a_737_) == 1)
{
lean_object* v_val_738_; 
v_val_738_ = lean_ctor_get(v_a_737_, 0);
lean_inc(v_val_738_);
lean_dec_ref_known(v_a_737_, 1);
switch(lean_obj_tag(v_val_738_))
{
case 4:
{
lean_object* v_declName_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
lean_dec(v___x_693_);
v_declName_739_ = lean_ctor_get(v_val_738_, 0);
lean_inc(v_declName_739_);
lean_dec_ref_known(v_val_738_, 2);
v___x_740_ = lean_unsigned_to_nat(1000u);
v___x_741_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremFromConst(v_declName_739_, v___x_740_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v_a_742_; lean_object* v___x_743_; 
v_a_742_ = lean_ctor_get(v___x_741_, 0);
lean_inc(v_a_742_);
lean_dec_ref_known(v___x_741_, 1);
v___x_743_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_insert(v_fst_603_, v_a_742_);
v_fst_627_ = v___x_743_;
v_snd_628_ = v_fst_607_;
goto v___jp_626_;
}
else
{
lean_object* v_a_744_; uint8_t v___x_745_; 
v_a_744_ = lean_ctor_get(v___x_741_, 0);
lean_inc(v_a_744_);
lean_dec_ref_known(v___x_741_, 1);
v___x_745_ = l_Lean_Exception_isInterrupt(v_a_744_);
if (v___x_745_ == 0)
{
uint8_t v___x_746_; 
lean_inc(v_a_744_);
v___x_746_ = l_Lean_Exception_isRuntime(v_a_744_);
v___y_634_ = v_a_744_;
v___y_635_ = v___x_746_;
goto v___jp_633_;
}
else
{
v___y_634_ = v_a_744_;
v___y_635_ = v___x_745_;
goto v___jp_633_;
}
}
}
case 1:
{
lean_object* v_fvarId_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
lean_dec(v___x_693_);
v_fvarId_747_ = lean_ctor_get(v_val_738_, 0);
lean_inc(v_fvarId_747_);
lean_dec_ref_known(v_val_738_, 1);
v___x_748_ = lean_unsigned_to_nat(1000u);
v___x_749_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremFromLocal(v_fvarId_747_, v___x_748_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_object* v_a_750_; lean_object* v___x_751_; 
v_a_750_ = lean_ctor_get(v___x_749_, 0);
lean_inc(v_a_750_);
lean_dec_ref_known(v___x_749_, 1);
v___x_751_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_insert(v_fst_603_, v_a_750_);
v_fst_622_ = v___x_751_;
v_snd_623_ = v_fst_607_;
goto v___jp_621_;
}
else
{
lean_object* v_a_752_; uint8_t v___x_753_; 
v_a_752_ = lean_ctor_get(v___x_749_, 0);
lean_inc(v_a_752_);
lean_dec_ref_known(v___x_749_, 1);
v___x_753_ = l_Lean_Exception_isInterrupt(v_a_752_);
if (v___x_753_ == 0)
{
uint8_t v___x_754_; 
lean_inc(v_a_752_);
v___x_754_ = l_Lean_Exception_isRuntime(v_a_752_);
v___y_639_ = v_a_752_;
v___y_640_ = v___x_754_;
goto v___jp_638_;
}
else
{
v___y_639_ = v_a_752_;
v___y_640_ = v___x_753_;
goto v___jp_638_;
}
}
}
default: 
{
lean_dec(v_val_738_);
v___y_695_ = v___y_588_;
v___y_696_ = v___y_589_;
v___y_697_ = v___y_590_;
v___y_698_ = v___y_591_;
v___y_699_ = v___y_592_;
v___y_700_ = v___y_593_;
goto v___jp_694_;
}
}
}
else
{
lean_dec(v_a_737_);
v___y_695_ = v___y_588_;
v___y_696_ = v___y_589_;
v___y_697_ = v___y_590_;
v___y_698_ = v___y_591_;
v___y_699_ = v___y_592_;
v___y_700_ = v___y_593_;
goto v___jp_694_;
}
}
else
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_762_; 
lean_dec(v___x_693_);
lean_dec(v_snd_608_);
lean_dec(v_fst_607_);
lean_dec(v_fst_603_);
v_a_755_ = lean_ctor_get(v___y_736_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___y_736_);
if (v_isSharedCheck_762_ == 0)
{
v___x_757_ = v___y_736_;
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v___y_736_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_760_; 
if (v_isShared_758_ == 0)
{
v___x_760_ = v___x_757_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_a_755_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
}
}
}
else
{
lean_object* v_a_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_787_; 
lean_dec(v_snd_608_);
lean_dec(v_fst_607_);
lean_dec(v_fst_603_);
v_a_780_ = lean_ctor_get(v___x_690_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_787_ == 0)
{
v___x_782_ = v___x_690_;
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_a_780_);
lean_dec(v___x_690_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_785_; 
if (v_isShared_783_ == 0)
{
v___x_785_ = v___x_782_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_a_780_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_788_; lean_object* v___x_789_; 
lean_dec(v___x_663_);
v___x_788_ = l_Lean_Syntax_getArg(v_a_632_, v___x_631_);
lean_inc(v___x_788_);
v___x_789_ = l_Lean_Elab_Term_isLocalIdent_x3f(v___x_788_, v___y_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
if (lean_obj_tag(v___x_789_) == 0)
{
lean_object* v_a_790_; 
v_a_790_ = lean_ctor_get(v___x_789_, 0);
lean_inc(v_a_790_);
lean_dec_ref_known(v___x_789_, 1);
if (lean_obj_tag(v_a_790_) == 1)
{
lean_object* v_val_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; 
lean_dec(v___x_788_);
v_val_791_ = lean_ctor_get(v_a_790_, 0);
lean_inc(v_val_791_);
lean_dec_ref_known(v_a_790_, 1);
v___x_792_ = l_Lean_Expr_fvarId_x21(v_val_791_);
lean_dec(v_val_791_);
v___x_793_ = lean_unsigned_to_nat(1000u);
v___x_794_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremFromLocal(v___x_792_, v___x_793_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
if (lean_obj_tag(v___x_794_) == 0)
{
lean_object* v_a_795_; lean_object* v___x_796_; 
v_a_795_ = lean_ctor_get(v___x_794_, 0);
lean_inc(v_a_795_);
lean_dec_ref_known(v___x_794_, 1);
lean_inc(v_fst_607_);
lean_inc(v_fst_603_);
v___x_796_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___lam__0(v_fst_603_, v_fst_607_, v_a_795_, v___y_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
v___y_657_ = v___x_796_;
goto v___jp_656_;
}
else
{
lean_object* v_a_797_; 
v_a_797_ = lean_ctor_get(v___x_794_, 0);
lean_inc(v_a_797_);
lean_dec_ref_known(v___x_794_, 1);
v_a_653_ = v_a_797_;
goto v___jp_652_;
}
}
else
{
lean_object* v___x_798_; lean_object* v___x_799_; 
lean_dec(v_a_790_);
v___x_798_ = lean_box(0);
lean_inc(v___x_788_);
v___x_799_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v___x_788_, v___x_798_, v___y_592_, v___y_593_);
if (lean_obj_tag(v___x_799_) == 0)
{
lean_object* v_a_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
lean_dec(v___x_788_);
v_a_800_ = lean_ctor_get(v___x_799_, 0);
lean_inc(v_a_800_);
lean_dec_ref_known(v___x_799_, 1);
v___x_801_ = lean_unsigned_to_nat(1000u);
v___x_802_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremFromConst(v_a_800_, v___x_801_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
if (lean_obj_tag(v___x_802_) == 0)
{
lean_object* v_a_803_; lean_object* v___x_804_; 
v_a_803_ = lean_ctor_get(v___x_802_, 0);
lean_inc(v_a_803_);
lean_dec_ref_known(v___x_802_, 1);
lean_inc(v_fst_607_);
lean_inc(v_fst_603_);
v___x_804_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___lam__0(v_fst_603_, v_fst_607_, v_a_803_, v___y_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
v___y_657_ = v___x_804_;
goto v___jp_656_;
}
else
{
lean_object* v_a_805_; 
v_a_805_ = lean_ctor_get(v___x_802_, 0);
lean_inc(v_a_805_);
lean_dec_ref_known(v___x_802_, 1);
v_a_653_ = v_a_805_;
goto v___jp_652_;
}
}
else
{
lean_object* v_a_806_; uint8_t v___y_808_; uint8_t v___x_833_; 
v_a_806_ = lean_ctor_get(v___x_799_, 0);
lean_inc(v_a_806_);
lean_dec_ref_known(v___x_799_, 1);
v___x_833_ = l_Lean_Exception_isInterrupt(v_a_806_);
if (v___x_833_ == 0)
{
uint8_t v___x_834_; 
lean_inc(v_a_806_);
v___x_834_ = l_Lean_Exception_isRuntime(v_a_806_);
v___y_808_ = v___x_834_;
goto v___jp_807_;
}
else
{
v___y_808_ = v___x_833_;
goto v___jp_807_;
}
v___jp_807_:
{
if (v___y_808_ == 0)
{
lean_object* v_fileName_809_; lean_object* v_fileMap_810_; lean_object* v_options_811_; lean_object* v_currRecDepth_812_; lean_object* v_maxRecDepth_813_; lean_object* v_ref_814_; lean_object* v_currNamespace_815_; lean_object* v_openDecls_816_; lean_object* v_initHeartbeats_817_; lean_object* v_maxHeartbeats_818_; lean_object* v_quotContext_819_; lean_object* v_currMacroScope_820_; uint8_t v_diag_821_; lean_object* v_cancelTk_x3f_822_; uint8_t v_suppressElabErrors_823_; lean_object* v_inheritedTraceOptions_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v_ref_827_; lean_object* v___x_828_; lean_object* v___x_829_; 
lean_dec(v_a_806_);
v_fileName_809_ = lean_ctor_get(v___y_592_, 0);
v_fileMap_810_ = lean_ctor_get(v___y_592_, 1);
v_options_811_ = lean_ctor_get(v___y_592_, 2);
v_currRecDepth_812_ = lean_ctor_get(v___y_592_, 3);
v_maxRecDepth_813_ = lean_ctor_get(v___y_592_, 4);
v_ref_814_ = lean_ctor_get(v___y_592_, 5);
v_currNamespace_815_ = lean_ctor_get(v___y_592_, 6);
v_openDecls_816_ = lean_ctor_get(v___y_592_, 7);
v_initHeartbeats_817_ = lean_ctor_get(v___y_592_, 8);
v_maxHeartbeats_818_ = lean_ctor_get(v___y_592_, 9);
v_quotContext_819_ = lean_ctor_get(v___y_592_, 10);
v_currMacroScope_820_ = lean_ctor_get(v___y_592_, 11);
v_diag_821_ = lean_ctor_get_uint8(v___y_592_, sizeof(void*)*14);
v_cancelTk_x3f_822_ = lean_ctor_get(v___y_592_, 12);
v_suppressElabErrors_823_ = lean_ctor_get_uint8(v___y_592_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_824_ = lean_ctor_get(v___y_592_, 13);
v___x_825_ = l_Lean_Syntax_getId(v___x_788_);
v___x_826_ = lean_erase_macro_scopes(v___x_825_);
v_ref_827_ = l_Lean_replaceRef(v___x_788_, v_ref_814_);
lean_dec(v___x_788_);
lean_inc_ref(v_inheritedTraceOptions_824_);
lean_inc(v_cancelTk_x3f_822_);
lean_inc(v_currMacroScope_820_);
lean_inc(v_quotContext_819_);
lean_inc(v_maxHeartbeats_818_);
lean_inc(v_initHeartbeats_817_);
lean_inc(v_openDecls_816_);
lean_inc(v_currNamespace_815_);
lean_inc(v_maxRecDepth_813_);
lean_inc(v_currRecDepth_812_);
lean_inc_ref(v_options_811_);
lean_inc_ref(v_fileMap_810_);
lean_inc_ref(v_fileName_809_);
v___x_828_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_828_, 0, v_fileName_809_);
lean_ctor_set(v___x_828_, 1, v_fileMap_810_);
lean_ctor_set(v___x_828_, 2, v_options_811_);
lean_ctor_set(v___x_828_, 3, v_currRecDepth_812_);
lean_ctor_set(v___x_828_, 4, v_maxRecDepth_813_);
lean_ctor_set(v___x_828_, 5, v_ref_827_);
lean_ctor_set(v___x_828_, 6, v_currNamespace_815_);
lean_ctor_set(v___x_828_, 7, v_openDecls_816_);
lean_ctor_set(v___x_828_, 8, v_initHeartbeats_817_);
lean_ctor_set(v___x_828_, 9, v_maxHeartbeats_818_);
lean_ctor_set(v___x_828_, 10, v_quotContext_819_);
lean_ctor_set(v___x_828_, 11, v_currMacroScope_820_);
lean_ctor_set(v___x_828_, 12, v_cancelTk_x3f_822_);
lean_ctor_set(v___x_828_, 13, v_inheritedTraceOptions_824_);
lean_ctor_set_uint8(v___x_828_, sizeof(void*)*14, v_diag_821_);
lean_ctor_set_uint8(v___x_828_, sizeof(void*)*14 + 1, v_suppressElabErrors_823_);
v___x_829_ = l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2___redArg(v___x_826_, v___y_588_, v___y_589_, v___y_590_, v___y_591_, v___x_828_, v___y_593_);
lean_dec_ref_known(v___x_828_, 14);
if (lean_obj_tag(v___x_829_) == 0)
{
lean_object* v_a_830_; lean_object* v___x_831_; 
v_a_830_ = lean_ctor_get(v___x_829_, 0);
lean_inc(v_a_830_);
lean_dec_ref_known(v___x_829_, 1);
lean_inc(v_fst_607_);
lean_inc(v_fst_603_);
v___x_831_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___lam__0(v_fst_603_, v_fst_607_, v_a_830_, v___y_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
v___y_657_ = v___x_831_;
goto v___jp_656_;
}
else
{
lean_object* v_a_832_; 
v_a_832_ = lean_ctor_get(v___x_829_, 0);
lean_inc(v_a_832_);
lean_dec_ref_known(v___x_829_, 1);
v_a_653_ = v_a_832_;
goto v___jp_652_;
}
}
else
{
lean_dec(v___x_788_);
v_a_653_ = v_a_806_;
goto v___jp_652_;
}
}
}
}
}
else
{
lean_object* v_a_835_; 
lean_dec(v___x_788_);
v_a_835_ = lean_ctor_get(v___x_789_, 0);
lean_inc(v_a_835_);
lean_dec_ref_known(v___x_789_, 1);
v_a_653_ = v_a_835_;
goto v___jp_652_;
}
}
v___jp_612_:
{
lean_object* v___x_616_; 
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 0, v_snd_614_);
v___x_616_ = v___x_610_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_snd_614_);
lean_ctor_set(v_reuseFailAlloc_620_, 1, v_snd_608_);
v___x_616_ = v_reuseFailAlloc_620_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
lean_object* v___x_618_; 
if (v_isShared_606_ == 0)
{
lean_ctor_set(v___x_605_, 1, v___x_616_);
lean_ctor_set(v___x_605_, 0, v_fst_613_);
v___x_618_ = v___x_605_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_fst_613_);
lean_ctor_set(v_reuseFailAlloc_619_, 1, v___x_616_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
v_a_596_ = v___x_618_;
goto v___jp_595_;
}
}
}
v___jp_621_:
{
lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_624_, 0, v_snd_623_);
lean_ctor_set(v___x_624_, 1, v_snd_608_);
v___x_625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_625_, 0, v_fst_622_);
lean_ctor_set(v___x_625_, 1, v___x_624_);
v_a_596_ = v___x_625_;
goto v___jp_595_;
}
v___jp_626_:
{
lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_629_, 0, v_snd_628_);
lean_ctor_set(v___x_629_, 1, v_snd_608_);
v___x_630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_630_, 0, v_fst_627_);
lean_ctor_set(v___x_630_, 1, v___x_629_);
v_a_596_ = v___x_630_;
goto v___jp_595_;
}
v___jp_633_:
{
if (v___y_635_ == 0)
{
lean_object* v___x_636_; 
lean_dec_ref(v___y_634_);
lean_inc(v_a_632_);
v___x_636_ = lean_array_push(v_fst_607_, v_a_632_);
v_fst_627_ = v_fst_603_;
v_snd_628_ = v___x_636_;
goto v___jp_626_;
}
else
{
lean_object* v___x_637_; 
lean_dec(v_snd_608_);
lean_dec(v_fst_607_);
lean_dec(v_fst_603_);
v___x_637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_637_, 0, v___y_634_);
return v___x_637_;
}
}
v___jp_638_:
{
if (v___y_640_ == 0)
{
lean_object* v___x_641_; 
lean_dec_ref(v___y_639_);
lean_inc(v_a_632_);
v___x_641_ = lean_array_push(v_fst_607_, v_a_632_);
v_fst_622_ = v_fst_603_;
v_snd_623_ = v___x_641_;
goto v___jp_621_;
}
else
{
lean_object* v___x_642_; 
lean_dec(v_snd_608_);
lean_dec(v_fst_607_);
lean_dec(v_fst_603_);
v___x_642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_642_, 0, v___y_639_);
return v___x_642_;
}
}
v___jp_643_:
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
lean_inc(v_a_632_);
v___x_644_ = lean_array_push(v_fst_607_, v_a_632_);
v___x_645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_645_, 0, v___x_644_);
lean_ctor_set(v___x_645_, 1, v_snd_608_);
v___x_646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_646_, 0, v_fst_603_);
lean_ctor_set(v___x_646_, 1, v___x_645_);
v_a_596_ = v___x_646_;
goto v___jp_595_;
}
v___jp_647_:
{
if (v___y_649_ == 0)
{
lean_object* v___x_650_; 
lean_dec_ref(v___y_648_);
lean_inc(v_a_632_);
v___x_650_ = lean_array_push(v_fst_607_, v_a_632_);
v_fst_613_ = v_fst_603_;
v_snd_614_ = v___x_650_;
goto v___jp_612_;
}
else
{
lean_object* v___x_651_; 
lean_del_object(v___x_610_);
lean_dec(v_snd_608_);
lean_dec(v_fst_607_);
lean_del_object(v___x_605_);
lean_dec(v_fst_603_);
v___x_651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_651_, 0, v___y_648_);
return v___x_651_;
}
}
v___jp_652_:
{
uint8_t v___x_654_; 
v___x_654_ = l_Lean_Exception_isInterrupt(v_a_653_);
if (v___x_654_ == 0)
{
uint8_t v___x_655_; 
lean_inc_ref(v_a_653_);
v___x_655_ = l_Lean_Exception_isRuntime(v_a_653_);
v___y_648_ = v_a_653_;
v___y_649_ = v___x_655_;
goto v___jp_647_;
}
else
{
v___y_648_ = v_a_653_;
v___y_649_ = v___x_654_;
goto v___jp_647_;
}
}
v___jp_656_:
{
if (lean_obj_tag(v___y_657_) == 0)
{
lean_object* v_a_658_; lean_object* v_snd_659_; lean_object* v_fst_660_; lean_object* v_snd_661_; 
lean_dec(v_fst_607_);
lean_dec(v_fst_603_);
v_a_658_ = lean_ctor_get(v___y_657_, 0);
lean_inc(v_a_658_);
lean_dec_ref_known(v___y_657_, 1);
v_snd_659_ = lean_ctor_get(v_a_658_, 1);
lean_inc(v_snd_659_);
lean_dec(v_a_658_);
v_fst_660_ = lean_ctor_get(v_snd_659_, 0);
lean_inc(v_fst_660_);
v_snd_661_ = lean_ctor_get(v_snd_659_, 1);
lean_inc(v_snd_661_);
lean_dec(v_snd_659_);
v_fst_613_ = v_fst_660_;
v_snd_614_ = v_snd_661_;
goto v___jp_612_;
}
else
{
lean_object* v_a_662_; 
v_a_662_ = lean_ctor_get(v___y_657_, 0);
lean_inc(v_a_662_);
lean_dec_ref_known(v___y_657_, 1);
v_a_653_ = v_a_662_;
goto v___jp_652_;
}
}
}
}
}
v___jp_595_:
{
size_t v___x_597_; size_t v___x_598_; 
v___x_597_ = ((size_t)1ULL);
v___x_598_ = lean_usize_add(v_i_586_, v___x_597_);
v_i_586_ = v___x_598_;
v_b_587_ = v_a_596_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___boxed(lean_object* v_as_838_, lean_object* v_sz_839_, lean_object* v_i_840_, lean_object* v_b_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_){
_start:
{
size_t v_sz_boxed_849_; size_t v_i_boxed_850_; lean_object* v_res_851_; 
v_sz_boxed_849_ = lean_unbox_usize(v_sz_839_);
lean_dec(v_sz_839_);
v_i_boxed_850_ = lean_unbox_usize(v_i_840_);
lean_dec(v_i_840_);
v_res_851_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3(v_as_838_, v_sz_boxed_849_, v_i_boxed_850_, v_b_841_, v___y_842_, v___y_843_, v___y_844_, v___y_845_, v___y_846_, v___y_847_);
lean_dec(v___y_847_);
lean_dec_ref(v___y_846_);
lean_dec(v___y_845_);
lean_dec_ref(v___y_844_);
lean_dec(v___y_843_);
lean_dec_ref(v___y_842_);
lean_dec_ref(v_as_838_);
return v_res_851_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__40(void){
_start:
{
lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_959_ = lean_box(0);
v___x_960_ = lean_unsigned_to_nat(16u);
v___x_961_ = lean_mk_array(v___x_960_, v___x_959_);
return v___x_961_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__41(void){
_start:
{
lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_962_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__40, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__40_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__40);
v___x_963_ = lean_unsigned_to_nat(0u);
v___x_964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_964_, 0, v___x_963_);
lean_ctor_set(v___x_964_, 1, v___x_962_);
return v___x_964_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__55(void){
_start:
{
lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_998_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__54));
v___x_999_ = l_String_toRawSubstring_x27(v___x_998_);
return v___x_999_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__61(void){
_start:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1010_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__60));
v___x_1011_ = l_String_toRawSubstring_x27(v___x_1010_);
return v___x_1011_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__63(void){
_start:
{
lean_object* v___x_1014_; 
v___x_1014_ = l_Array_mkArray0(lean_box(0));
return v___x_1014_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__68(void){
_start:
{
lean_object* v___x_1019_; 
v___x_1019_ = l_Lean_Meta_DiscrTree_empty(lean_box(0));
return v___x_1019_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__69(void){
_start:
{
lean_object* v___x_1020_; 
v___x_1020_ = l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__5(lean_box(0));
return v___x_1020_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__70(void){
_start:
{
lean_object* v___x_1021_; 
v___x_1021_ = l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__6(lean_box(0));
return v___x_1021_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__71(void){
_start:
{
lean_object* v___x_1022_; 
v___x_1022_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1022_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__72(void){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1023_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__71, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__71_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__71);
v___x_1024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1023_);
return v___x_1024_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__73(void){
_start:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; 
v___x_1025_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__72, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__72_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__72);
v___x_1026_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__70, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__70_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__70);
v___x_1027_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__69, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__69_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__69);
v___x_1028_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__68, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__68_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__68);
v___x_1029_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1028_);
lean_ctor_set(v___x_1029_, 1, v___x_1028_);
lean_ctor_set(v___x_1029_, 2, v___x_1027_);
lean_ctor_set(v___x_1029_, 3, v___x_1026_);
lean_ctor_set(v___x_1029_, 4, v___x_1027_);
lean_ctor_set(v___x_1029_, 5, v___x_1025_);
return v___x_1029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext(lean_object* v_lemmas_1030_, lean_object* v_goal_1031_, uint8_t v_ignoreStarArg_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_){
_start:
{
lean_object* v___x_1040_; 
v___x_1040_ = l_Lean_Elab_Tactic_Do_SpecAttr_getSpecTheorems___redArg(v_a_1038_);
if (lean_obj_tag(v___x_1040_) == 0)
{
lean_object* v_a_1041_; lean_object* v___x_1042_; uint8_t v___x_1043_; lean_object* v___y_1045_; lean_object* v_specThms_1046_; lean_object* v___y_1047_; lean_object* v___y_1048_; lean_object* v___y_1049_; lean_object* v___y_1050_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; size_t v_sz_1255_; size_t v___x_1256_; lean_object* v___x_1257_; 
v_a_1041_ = lean_ctor_get(v___x_1040_, 0);
lean_inc(v_a_1041_);
lean_dec_ref_known(v___x_1040_, 1);
v___x_1042_ = lean_unsigned_to_nat(0u);
v___x_1043_ = 0;
v___x_1250_ = lean_unsigned_to_nat(1u);
v___x_1251_ = l_Lean_Syntax_getArg(v_lemmas_1030_, v___x_1250_);
v___x_1252_ = l_Lean_Syntax_getSepArgs(v___x_1251_);
lean_dec(v___x_1251_);
v___x_1253_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__42));
v___x_1254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1254_, 0, v_a_1041_);
lean_ctor_set(v___x_1254_, 1, v___x_1253_);
v_sz_1255_ = lean_array_size(v___x_1252_);
v___x_1256_ = ((size_t)0ULL);
v___x_1257_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3(v___x_1252_, v_sz_1255_, v___x_1256_, v___x_1254_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_);
lean_dec_ref(v___x_1252_);
if (lean_obj_tag(v___x_1257_) == 0)
{
lean_object* v_a_1258_; lean_object* v_snd_1259_; lean_object* v_fst_1260_; lean_object* v___x_1262_; uint8_t v_isShared_1263_; uint8_t v_isSharedCheck_1364_; 
v_a_1258_ = lean_ctor_get(v___x_1257_, 0);
lean_inc(v_a_1258_);
lean_dec_ref_known(v___x_1257_, 1);
v_snd_1259_ = lean_ctor_get(v_a_1258_, 1);
v_fst_1260_ = lean_ctor_get(v_a_1258_, 0);
v_isSharedCheck_1364_ = !lean_is_exclusive(v_a_1258_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1262_ = v_a_1258_;
v_isShared_1263_ = v_isSharedCheck_1364_;
goto v_resetjp_1261_;
}
else
{
lean_inc(v_snd_1259_);
lean_inc(v_fst_1260_);
lean_dec(v_a_1258_);
v___x_1262_ = lean_box(0);
v_isShared_1263_ = v_isSharedCheck_1364_;
goto v_resetjp_1261_;
}
v_resetjp_1261_:
{
lean_object* v_fst_1264_; lean_object* v_snd_1265_; lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1363_; 
v_fst_1264_ = lean_ctor_get(v_snd_1259_, 0);
v_snd_1265_ = lean_ctor_get(v_snd_1259_, 1);
v_isSharedCheck_1363_ = !lean_is_exclusive(v_snd_1259_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1267_ = v_snd_1259_;
v_isShared_1268_ = v_isSharedCheck_1363_;
goto v_resetjp_1266_;
}
else
{
lean_inc(v_snd_1265_);
lean_inc(v_fst_1264_);
lean_dec(v_snd_1259_);
v___x_1267_ = lean_box(0);
v_isShared_1268_ = v_isSharedCheck_1363_;
goto v_resetjp_1266_;
}
v_resetjp_1266_:
{
lean_object* v_ref_1269_; lean_object* v_quotContext_1270_; lean_object* v_currMacroScope_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1276_; 
v_ref_1269_ = lean_ctor_get(v_a_1037_, 5);
v_quotContext_1270_ = lean_ctor_get(v_a_1037_, 10);
v_currMacroScope_1271_ = lean_ctor_get(v_a_1037_, 11);
v___x_1272_ = l_Lean_SourceInfo_fromRef(v_ref_1269_, v___x_1043_);
v___x_1273_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__43));
v___x_1274_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__44));
lean_inc(v___x_1272_);
if (v_isShared_1268_ == 0)
{
lean_ctor_set_tag(v___x_1267_, 2);
lean_ctor_set(v___x_1267_, 1, v___x_1273_);
lean_ctor_set(v___x_1267_, 0, v___x_1272_);
v___x_1276_ = v___x_1267_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v___x_1272_);
lean_ctor_set(v_reuseFailAlloc_1362_, 1, v___x_1273_);
v___x_1276_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1283_; 
v___x_1277_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__46));
v___x_1278_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__48));
v___x_1279_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__50));
v___x_1280_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__52));
v___x_1281_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__53));
lean_inc(v___x_1272_);
if (v_isShared_1263_ == 0)
{
lean_ctor_set_tag(v___x_1262_, 2);
lean_ctor_set(v___x_1262_, 1, v___x_1281_);
lean_ctor_set(v___x_1262_, 0, v___x_1272_);
v___x_1283_ = v___x_1262_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v___x_1272_);
lean_ctor_set(v_reuseFailAlloc_1361_, 1, v___x_1281_);
v___x_1283_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; uint8_t v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1284_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__55, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__55_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__55);
v___x_1285_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__56));
lean_inc_n(v_currMacroScope_1271_, 2);
lean_inc_n(v_quotContext_1270_, 2);
v___x_1286_ = l_Lean_addMacroScope(v_quotContext_1270_, v___x_1285_, v_currMacroScope_1271_);
v___x_1287_ = lean_box(0);
lean_inc_n(v___x_1272_, 14);
v___x_1288_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1272_);
lean_ctor_set(v___x_1288_, 1, v___x_1284_);
lean_ctor_set(v___x_1288_, 2, v___x_1286_);
lean_ctor_set(v___x_1288_, 3, v___x_1287_);
v___x_1289_ = l_Lean_Syntax_node2(v___x_1272_, v___x_1280_, v___x_1283_, v___x_1288_);
v___x_1290_ = l_Lean_Syntax_node1(v___x_1272_, v___x_1279_, v___x_1289_);
v___x_1291_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__58));
v___x_1292_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__59));
v___x_1293_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1272_);
lean_ctor_set(v___x_1293_, 1, v___x_1292_);
v___x_1294_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__61, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__61_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__61);
v___x_1295_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__62));
v___x_1296_ = l_Lean_addMacroScope(v_quotContext_1270_, v___x_1295_, v_currMacroScope_1271_);
v___x_1297_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1272_);
lean_ctor_set(v___x_1297_, 1, v___x_1294_);
lean_ctor_set(v___x_1297_, 2, v___x_1296_);
lean_ctor_set(v___x_1297_, 3, v___x_1287_);
v___x_1298_ = l_Lean_Syntax_node2(v___x_1272_, v___x_1291_, v___x_1293_, v___x_1297_);
v___x_1299_ = l_Lean_Syntax_node1(v___x_1272_, v___x_1279_, v___x_1298_);
v___x_1300_ = l_Lean_Syntax_node2(v___x_1272_, v___x_1278_, v___x_1290_, v___x_1299_);
v___x_1301_ = l_Lean_Syntax_node1(v___x_1272_, v___x_1277_, v___x_1300_);
v___x_1302_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__63, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__63_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__63);
v___x_1303_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1303_, 0, v___x_1272_);
lean_ctor_set(v___x_1303_, 1, v___x_1278_);
lean_ctor_set(v___x_1303_, 2, v___x_1302_);
v___x_1304_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__64));
v___x_1305_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1272_);
lean_ctor_set(v___x_1305_, 1, v___x_1304_);
v___x_1306_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__65));
v___x_1307_ = l_Lean_Syntax_SepArray_ofElems(v___x_1306_, v_fst_1264_);
lean_dec(v_fst_1264_);
v___x_1308_ = l_Array_append___redArg(v___x_1302_, v___x_1307_);
lean_dec_ref(v___x_1307_);
v___x_1309_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1309_, 0, v___x_1272_);
lean_ctor_set(v___x_1309_, 1, v___x_1278_);
lean_ctor_set(v___x_1309_, 2, v___x_1308_);
v___x_1310_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__66));
v___x_1311_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1272_);
lean_ctor_set(v___x_1311_, 1, v___x_1310_);
v___x_1312_ = l_Lean_Syntax_node3(v___x_1272_, v___x_1278_, v___x_1305_, v___x_1309_, v___x_1311_);
lean_inc_ref_n(v___x_1303_, 2);
v___x_1313_ = l_Lean_Syntax_node6(v___x_1272_, v___x_1274_, v___x_1276_, v___x_1301_, v___x_1303_, v___x_1303_, v___x_1312_, v___x_1303_);
v___x_1314_ = 0;
v___x_1315_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__67));
v___x_1316_ = lean_box(v___x_1043_);
v___x_1317_ = lean_box(v___x_1314_);
v___x_1318_ = lean_box(v_ignoreStarArg_1032_);
v___x_1319_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_mkSimpContext___boxed), 14, 5);
lean_closure_set(v___x_1319_, 0, v___x_1313_);
lean_closure_set(v___x_1319_, 1, v___x_1316_);
lean_closure_set(v___x_1319_, 2, v___x_1317_);
lean_closure_set(v___x_1319_, 3, v___x_1318_);
lean_closure_set(v___x_1319_, 4, v___x_1315_);
v___x_1320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1320_, 0, v_goal_1031_);
lean_ctor_set(v___x_1320_, 1, v___x_1287_);
v___x_1321_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg(v___x_1319_, v___x_1320_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_);
if (lean_obj_tag(v___x_1321_) == 0)
{
lean_object* v_a_1322_; lean_object* v___y_1324_; lean_object* v_ctx_1347_; lean_object* v_simpTheorems_1348_; lean_object* v___x_1349_; uint8_t v___x_1350_; 
v_a_1322_ = lean_ctor_get(v___x_1321_, 0);
lean_inc(v_a_1322_);
lean_dec_ref_known(v___x_1321_, 1);
v_ctx_1347_ = lean_ctor_get(v_a_1322_, 0);
lean_inc_ref(v_ctx_1347_);
lean_dec(v_a_1322_);
v_simpTheorems_1348_ = lean_ctor_get(v_ctx_1347_, 6);
lean_inc_ref(v_simpTheorems_1348_);
lean_dec_ref(v_ctx_1347_);
v___x_1349_ = lean_array_get_size(v_simpTheorems_1348_);
v___x_1350_ = lean_nat_dec_lt(v___x_1042_, v___x_1349_);
if (v___x_1350_ == 0)
{
lean_object* v___x_1351_; 
lean_dec_ref(v_simpTheorems_1348_);
v___x_1351_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__73, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__73_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__73);
v___y_1324_ = v___x_1351_;
goto v___jp_1323_;
}
else
{
lean_object* v___x_1352_; 
v___x_1352_ = lean_array_fget(v_simpTheorems_1348_, v___x_1042_);
lean_dec_ref(v_simpTheorems_1348_);
v___y_1324_ = v___x_1352_;
goto v___jp_1323_;
}
v___jp_1323_:
{
uint8_t v___x_1325_; 
v___x_1325_ = lean_unbox(v_snd_1265_);
lean_dec(v_snd_1265_);
if (v___x_1325_ == 0)
{
v___y_1045_ = v___y_1324_;
v_specThms_1046_ = v_fst_1260_;
v___y_1047_ = v_a_1035_;
v___y_1048_ = v_a_1036_;
v___y_1049_ = v_a_1037_;
v___y_1050_ = v_a_1038_;
goto v___jp_1044_;
}
else
{
if (v_ignoreStarArg_1032_ == 0)
{
lean_object* v___x_1326_; 
v___x_1326_ = l_Lean_Meta_getPropHyps(v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_);
if (lean_obj_tag(v___x_1326_) == 0)
{
lean_object* v_a_1327_; size_t v_sz_1328_; lean_object* v___x_1329_; 
v_a_1327_ = lean_ctor_get(v___x_1326_, 0);
lean_inc(v_a_1327_);
lean_dec_ref_known(v___x_1326_, 1);
v_sz_1328_ = lean_array_size(v_a_1327_);
v___x_1329_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__4___redArg(v_a_1327_, v_sz_1328_, v___x_1256_, v_fst_1260_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_);
lean_dec(v_a_1327_);
if (lean_obj_tag(v___x_1329_) == 0)
{
lean_object* v_a_1330_; 
v_a_1330_ = lean_ctor_get(v___x_1329_, 0);
lean_inc(v_a_1330_);
lean_dec_ref_known(v___x_1329_, 1);
v___y_1045_ = v___y_1324_;
v_specThms_1046_ = v_a_1330_;
v___y_1047_ = v_a_1035_;
v___y_1048_ = v_a_1036_;
v___y_1049_ = v_a_1037_;
v___y_1050_ = v_a_1038_;
goto v___jp_1044_;
}
else
{
lean_object* v_a_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1338_; 
lean_dec_ref(v___y_1324_);
v_a_1331_ = lean_ctor_get(v___x_1329_, 0);
v_isSharedCheck_1338_ = !lean_is_exclusive(v___x_1329_);
if (v_isSharedCheck_1338_ == 0)
{
v___x_1333_ = v___x_1329_;
v_isShared_1334_ = v_isSharedCheck_1338_;
goto v_resetjp_1332_;
}
else
{
lean_inc(v_a_1331_);
lean_dec(v___x_1329_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1338_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
lean_object* v___x_1336_; 
if (v_isShared_1334_ == 0)
{
v___x_1336_ = v___x_1333_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1337_; 
v_reuseFailAlloc_1337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1337_, 0, v_a_1331_);
v___x_1336_ = v_reuseFailAlloc_1337_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
return v___x_1336_;
}
}
}
}
else
{
lean_object* v_a_1339_; lean_object* v___x_1341_; uint8_t v_isShared_1342_; uint8_t v_isSharedCheck_1346_; 
lean_dec_ref(v___y_1324_);
lean_dec(v_fst_1260_);
v_a_1339_ = lean_ctor_get(v___x_1326_, 0);
v_isSharedCheck_1346_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1346_ == 0)
{
v___x_1341_ = v___x_1326_;
v_isShared_1342_ = v_isSharedCheck_1346_;
goto v_resetjp_1340_;
}
else
{
lean_inc(v_a_1339_);
lean_dec(v___x_1326_);
v___x_1341_ = lean_box(0);
v_isShared_1342_ = v_isSharedCheck_1346_;
goto v_resetjp_1340_;
}
v_resetjp_1340_:
{
lean_object* v___x_1344_; 
if (v_isShared_1342_ == 0)
{
v___x_1344_ = v___x_1341_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v_a_1339_);
v___x_1344_ = v_reuseFailAlloc_1345_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
return v___x_1344_;
}
}
}
}
else
{
v___y_1045_ = v___y_1324_;
v_specThms_1046_ = v_fst_1260_;
v___y_1047_ = v_a_1035_;
v___y_1048_ = v_a_1036_;
v___y_1049_ = v_a_1037_;
v___y_1050_ = v_a_1038_;
goto v___jp_1044_;
}
}
}
}
else
{
lean_object* v_a_1353_; lean_object* v___x_1355_; uint8_t v_isShared_1356_; uint8_t v_isSharedCheck_1360_; 
lean_dec(v_snd_1265_);
lean_dec(v_fst_1260_);
v_a_1353_ = lean_ctor_get(v___x_1321_, 0);
v_isSharedCheck_1360_ = !lean_is_exclusive(v___x_1321_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1355_ = v___x_1321_;
v_isShared_1356_ = v_isSharedCheck_1360_;
goto v_resetjp_1354_;
}
else
{
lean_inc(v_a_1353_);
lean_dec(v___x_1321_);
v___x_1355_ = lean_box(0);
v_isShared_1356_ = v_isSharedCheck_1360_;
goto v_resetjp_1354_;
}
v_resetjp_1354_:
{
lean_object* v___x_1358_; 
if (v_isShared_1356_ == 0)
{
v___x_1358_ = v___x_1355_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v_a_1353_);
v___x_1358_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
return v___x_1358_;
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
lean_object* v_a_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1372_; 
lean_dec(v_goal_1031_);
v_a_1365_ = lean_ctor_get(v___x_1257_, 0);
v_isSharedCheck_1372_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1372_ == 0)
{
v___x_1367_ = v___x_1257_;
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_a_1365_);
lean_dec(v___x_1257_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___x_1370_; 
if (v_isShared_1368_ == 0)
{
v___x_1370_ = v___x_1367_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v_a_1365_);
v___x_1370_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
return v___x_1370_;
}
}
}
v___jp_1044_:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1051_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__5));
v___x_1052_ = lean_box(0);
v___x_1053_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1051_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1053_) == 0)
{
lean_object* v_a_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
v_a_1054_ = lean_ctor_get(v___x_1053_, 0);
lean_inc(v_a_1054_);
lean_dec_ref_known(v___x_1053_, 1);
v___x_1055_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__7));
v___x_1056_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1055_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1056_) == 0)
{
lean_object* v_a_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; 
v_a_1057_ = lean_ctor_get(v___x_1056_, 0);
lean_inc(v_a_1057_);
lean_dec_ref_known(v___x_1056_, 1);
v___x_1058_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__9));
v___x_1059_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1058_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1059_) == 0)
{
lean_object* v_a_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; 
v_a_1060_ = lean_ctor_get(v___x_1059_, 0);
lean_inc(v_a_1060_);
lean_dec_ref_known(v___x_1059_, 1);
v___x_1061_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__11));
v___x_1062_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1061_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1062_) == 0)
{
lean_object* v_a_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
v_a_1063_ = lean_ctor_get(v___x_1062_, 0);
lean_inc(v_a_1063_);
lean_dec_ref_known(v___x_1062_, 1);
v___x_1064_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__13));
v___x_1065_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1064_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1065_) == 0)
{
lean_object* v_a_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; 
v_a_1066_ = lean_ctor_get(v___x_1065_, 0);
lean_inc(v_a_1066_);
lean_dec_ref_known(v___x_1065_, 1);
v___x_1067_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__15));
v___x_1068_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1067_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1068_) == 0)
{
lean_object* v_a_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; 
v_a_1069_ = lean_ctor_get(v___x_1068_, 0);
lean_inc(v_a_1069_);
lean_dec_ref_known(v___x_1068_, 1);
v___x_1070_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__17));
v___x_1071_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1070_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1071_) == 0)
{
lean_object* v_a_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
v_a_1072_ = lean_ctor_get(v___x_1071_, 0);
lean_inc(v_a_1072_);
lean_dec_ref_known(v___x_1071_, 1);
v___x_1073_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__19));
v___x_1074_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1073_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1074_) == 0)
{
lean_object* v_a_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v_a_1075_ = lean_ctor_get(v___x_1074_, 0);
lean_inc(v_a_1075_);
lean_dec_ref_known(v___x_1074_, 1);
v___x_1076_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__23));
v___x_1077_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1076_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v_a_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; 
v_a_1078_ = lean_ctor_get(v___x_1077_, 0);
lean_inc(v_a_1078_);
lean_dec_ref_known(v___x_1077_, 1);
v___x_1079_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__25));
v___x_1080_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1079_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_object* v_a_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v_a_1081_ = lean_ctor_get(v___x_1080_, 0);
lean_inc(v_a_1081_);
lean_dec_ref_known(v___x_1080_, 1);
v___x_1082_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__27));
v___x_1083_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1082_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
lean_inc(v_a_1084_);
lean_dec_ref_known(v___x_1083_, 1);
v___x_1085_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__29));
v___x_1086_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1085_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1086_) == 0)
{
lean_object* v_a_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; 
v_a_1087_ = lean_ctor_get(v___x_1086_, 0);
lean_inc(v_a_1087_);
lean_dec_ref_known(v___x_1086_, 1);
v___x_1088_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__31));
v___x_1089_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1088_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1089_) == 0)
{
lean_object* v_a_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; 
v_a_1090_ = lean_ctor_get(v___x_1089_, 0);
lean_inc(v_a_1090_);
lean_dec_ref_known(v___x_1089_, 1);
v___x_1091_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__33));
v___x_1092_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1091_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_object* v_a_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v_a_1093_ = lean_ctor_get(v___x_1092_, 0);
lean_inc(v_a_1093_);
lean_dec_ref_known(v___x_1092_, 1);
v___x_1094_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__36));
v___x_1095_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1094_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1095_) == 0)
{
lean_object* v_a_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
v_a_1096_ = lean_ctor_get(v___x_1095_, 0);
lean_inc(v_a_1096_);
lean_dec_ref_known(v___x_1095_, 1);
v___x_1097_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__39));
v___x_1098_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1097_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1098_) == 0)
{
lean_object* v_a_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v_a_1099_ = lean_ctor_get(v___x_1098_, 0);
lean_inc(v_a_1099_);
lean_dec_ref_known(v___x_1098_, 1);
v___x_1100_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___boxed), 9, 2);
lean_closure_set(v___x_1100_, 0, v_specThms_1046_);
lean_closure_set(v___x_1100_, 1, v___y_1045_);
v___x_1101_ = l_Lean_Meta_Sym_SymM_run___redArg(v___x_1100_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1101_) == 0)
{
lean_object* v_a_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1113_; 
v_a_1102_ = lean_ctor_get(v___x_1101_, 0);
v_isSharedCheck_1113_ = !lean_is_exclusive(v___x_1101_);
if (v_isSharedCheck_1113_ == 0)
{
v___x_1104_ = v___x_1101_;
v_isShared_1105_ = v_isSharedCheck_1113_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_a_1102_);
lean_dec(v___x_1101_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1113_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1106_; uint8_t v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1111_; 
v___x_1106_ = lean_box(0);
v___x_1107_ = 1;
v___x_1108_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__41, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__41_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__41);
v___x_1109_ = lean_alloc_ctor(0, 20, 4);
lean_ctor_set(v___x_1109_, 0, v_a_1102_);
lean_ctor_set(v___x_1109_, 1, v_a_1054_);
lean_ctor_set(v___x_1109_, 2, v_a_1057_);
lean_ctor_set(v___x_1109_, 3, v_a_1060_);
lean_ctor_set(v___x_1109_, 4, v_a_1063_);
lean_ctor_set(v___x_1109_, 5, v_a_1066_);
lean_ctor_set(v___x_1109_, 6, v_a_1069_);
lean_ctor_set(v___x_1109_, 7, v_a_1072_);
lean_ctor_set(v___x_1109_, 8, v_a_1075_);
lean_ctor_set(v___x_1109_, 9, v_a_1078_);
lean_ctor_set(v___x_1109_, 10, v_a_1081_);
lean_ctor_set(v___x_1109_, 11, v_a_1084_);
lean_ctor_set(v___x_1109_, 12, v_a_1087_);
lean_ctor_set(v___x_1109_, 13, v_a_1090_);
lean_ctor_set(v___x_1109_, 14, v_a_1093_);
lean_ctor_set(v___x_1109_, 15, v_a_1096_);
lean_ctor_set(v___x_1109_, 16, v_a_1099_);
lean_ctor_set(v___x_1109_, 17, v___x_1052_);
lean_ctor_set(v___x_1109_, 18, v___x_1106_);
lean_ctor_set(v___x_1109_, 19, v___x_1108_);
lean_ctor_set_uint8(v___x_1109_, sizeof(void*)*20, v___x_1107_);
lean_ctor_set_uint8(v___x_1109_, sizeof(void*)*20 + 1, v___x_1043_);
lean_ctor_set_uint8(v___x_1109_, sizeof(void*)*20 + 2, v___x_1107_);
lean_ctor_set_uint8(v___x_1109_, sizeof(void*)*20 + 3, v___x_1043_);
if (v_isShared_1105_ == 0)
{
lean_ctor_set(v___x_1104_, 0, v___x_1109_);
v___x_1111_ = v___x_1104_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v___x_1109_);
v___x_1111_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
return v___x_1111_;
}
}
}
else
{
lean_object* v_a_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1121_; 
lean_dec(v_a_1099_);
lean_dec(v_a_1096_);
lean_dec(v_a_1093_);
lean_dec(v_a_1090_);
lean_dec(v_a_1087_);
lean_dec(v_a_1084_);
lean_dec(v_a_1081_);
lean_dec(v_a_1078_);
lean_dec(v_a_1075_);
lean_dec(v_a_1072_);
lean_dec(v_a_1069_);
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
v_a_1114_ = lean_ctor_get(v___x_1101_, 0);
v_isSharedCheck_1121_ = !lean_is_exclusive(v___x_1101_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1116_ = v___x_1101_;
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_a_1114_);
lean_dec(v___x_1101_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___x_1119_; 
if (v_isShared_1117_ == 0)
{
v___x_1119_ = v___x_1116_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v_a_1114_);
v___x_1119_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
return v___x_1119_;
}
}
}
}
else
{
lean_object* v_a_1122_; lean_object* v___x_1124_; uint8_t v_isShared_1125_; uint8_t v_isSharedCheck_1129_; 
lean_dec(v_a_1096_);
lean_dec(v_a_1093_);
lean_dec(v_a_1090_);
lean_dec(v_a_1087_);
lean_dec(v_a_1084_);
lean_dec(v_a_1081_);
lean_dec(v_a_1078_);
lean_dec(v_a_1075_);
lean_dec(v_a_1072_);
lean_dec(v_a_1069_);
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1122_ = lean_ctor_get(v___x_1098_, 0);
v_isSharedCheck_1129_ = !lean_is_exclusive(v___x_1098_);
if (v_isSharedCheck_1129_ == 0)
{
v___x_1124_ = v___x_1098_;
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
else
{
lean_inc(v_a_1122_);
lean_dec(v___x_1098_);
v___x_1124_ = lean_box(0);
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
v_resetjp_1123_:
{
lean_object* v___x_1127_; 
if (v_isShared_1125_ == 0)
{
v___x_1127_ = v___x_1124_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v_a_1122_);
v___x_1127_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
return v___x_1127_;
}
}
}
}
else
{
lean_object* v_a_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1137_; 
lean_dec(v_a_1093_);
lean_dec(v_a_1090_);
lean_dec(v_a_1087_);
lean_dec(v_a_1084_);
lean_dec(v_a_1081_);
lean_dec(v_a_1078_);
lean_dec(v_a_1075_);
lean_dec(v_a_1072_);
lean_dec(v_a_1069_);
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1130_ = lean_ctor_get(v___x_1095_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1132_ = v___x_1095_;
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_a_1130_);
lean_dec(v___x_1095_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1135_; 
if (v_isShared_1133_ == 0)
{
v___x_1135_ = v___x_1132_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_a_1130_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
return v___x_1135_;
}
}
}
}
else
{
lean_object* v_a_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1145_; 
lean_dec(v_a_1090_);
lean_dec(v_a_1087_);
lean_dec(v_a_1084_);
lean_dec(v_a_1081_);
lean_dec(v_a_1078_);
lean_dec(v_a_1075_);
lean_dec(v_a_1072_);
lean_dec(v_a_1069_);
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1138_ = lean_ctor_get(v___x_1092_, 0);
v_isSharedCheck_1145_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1145_ == 0)
{
v___x_1140_ = v___x_1092_;
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
else
{
lean_inc(v_a_1138_);
lean_dec(v___x_1092_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v___x_1143_; 
if (v_isShared_1141_ == 0)
{
v___x_1143_ = v___x_1140_;
goto v_reusejp_1142_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v_a_1138_);
v___x_1143_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1142_;
}
v_reusejp_1142_:
{
return v___x_1143_;
}
}
}
}
else
{
lean_object* v_a_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1153_; 
lean_dec(v_a_1087_);
lean_dec(v_a_1084_);
lean_dec(v_a_1081_);
lean_dec(v_a_1078_);
lean_dec(v_a_1075_);
lean_dec(v_a_1072_);
lean_dec(v_a_1069_);
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1146_ = lean_ctor_get(v___x_1089_, 0);
v_isSharedCheck_1153_ = !lean_is_exclusive(v___x_1089_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1148_ = v___x_1089_;
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_a_1146_);
lean_dec(v___x_1089_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___x_1151_; 
if (v_isShared_1149_ == 0)
{
v___x_1151_ = v___x_1148_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v_a_1146_);
v___x_1151_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
return v___x_1151_;
}
}
}
}
else
{
lean_object* v_a_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1161_; 
lean_dec(v_a_1084_);
lean_dec(v_a_1081_);
lean_dec(v_a_1078_);
lean_dec(v_a_1075_);
lean_dec(v_a_1072_);
lean_dec(v_a_1069_);
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1154_ = lean_ctor_get(v___x_1086_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1156_ = v___x_1086_;
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_a_1154_);
lean_dec(v___x_1086_);
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
else
{
lean_object* v_a_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1169_; 
lean_dec(v_a_1081_);
lean_dec(v_a_1078_);
lean_dec(v_a_1075_);
lean_dec(v_a_1072_);
lean_dec(v_a_1069_);
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1162_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1169_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1169_ == 0)
{
v___x_1164_ = v___x_1083_;
v_isShared_1165_ = v_isSharedCheck_1169_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_a_1162_);
lean_dec(v___x_1083_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1169_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v___x_1167_; 
if (v_isShared_1165_ == 0)
{
v___x_1167_ = v___x_1164_;
goto v_reusejp_1166_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v_a_1162_);
v___x_1167_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1166_;
}
v_reusejp_1166_:
{
return v___x_1167_;
}
}
}
}
else
{
lean_object* v_a_1170_; lean_object* v___x_1172_; uint8_t v_isShared_1173_; uint8_t v_isSharedCheck_1177_; 
lean_dec(v_a_1078_);
lean_dec(v_a_1075_);
lean_dec(v_a_1072_);
lean_dec(v_a_1069_);
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1170_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1177_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1177_ == 0)
{
v___x_1172_ = v___x_1080_;
v_isShared_1173_ = v_isSharedCheck_1177_;
goto v_resetjp_1171_;
}
else
{
lean_inc(v_a_1170_);
lean_dec(v___x_1080_);
v___x_1172_ = lean_box(0);
v_isShared_1173_ = v_isSharedCheck_1177_;
goto v_resetjp_1171_;
}
v_resetjp_1171_:
{
lean_object* v___x_1175_; 
if (v_isShared_1173_ == 0)
{
v___x_1175_ = v___x_1172_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v_a_1170_);
v___x_1175_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
return v___x_1175_;
}
}
}
}
else
{
lean_object* v_a_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1185_; 
lean_dec(v_a_1075_);
lean_dec(v_a_1072_);
lean_dec(v_a_1069_);
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1178_ = lean_ctor_get(v___x_1077_, 0);
v_isSharedCheck_1185_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1180_ = v___x_1077_;
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_a_1178_);
lean_dec(v___x_1077_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v___x_1183_; 
if (v_isShared_1181_ == 0)
{
v___x_1183_ = v___x_1180_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v_a_1178_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
}
}
}
}
else
{
lean_object* v_a_1186_; lean_object* v___x_1188_; uint8_t v_isShared_1189_; uint8_t v_isSharedCheck_1193_; 
lean_dec(v_a_1072_);
lean_dec(v_a_1069_);
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1186_ = lean_ctor_get(v___x_1074_, 0);
v_isSharedCheck_1193_ = !lean_is_exclusive(v___x_1074_);
if (v_isSharedCheck_1193_ == 0)
{
v___x_1188_ = v___x_1074_;
v_isShared_1189_ = v_isSharedCheck_1193_;
goto v_resetjp_1187_;
}
else
{
lean_inc(v_a_1186_);
lean_dec(v___x_1074_);
v___x_1188_ = lean_box(0);
v_isShared_1189_ = v_isSharedCheck_1193_;
goto v_resetjp_1187_;
}
v_resetjp_1187_:
{
lean_object* v___x_1191_; 
if (v_isShared_1189_ == 0)
{
v___x_1191_ = v___x_1188_;
goto v_reusejp_1190_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_a_1186_);
v___x_1191_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1190_;
}
v_reusejp_1190_:
{
return v___x_1191_;
}
}
}
}
else
{
lean_object* v_a_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1201_; 
lean_dec(v_a_1069_);
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1194_ = lean_ctor_get(v___x_1071_, 0);
v_isSharedCheck_1201_ = !lean_is_exclusive(v___x_1071_);
if (v_isSharedCheck_1201_ == 0)
{
v___x_1196_ = v___x_1071_;
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_a_1194_);
lean_dec(v___x_1071_);
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
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1202_ = lean_ctor_get(v___x_1068_, 0);
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1204_ = v___x_1068_;
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_a_1202_);
lean_dec(v___x_1068_);
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
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1210_ = lean_ctor_get(v___x_1065_, 0);
v_isSharedCheck_1217_ = !lean_is_exclusive(v___x_1065_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1212_ = v___x_1065_;
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_a_1210_);
lean_dec(v___x_1065_);
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
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1218_ = lean_ctor_get(v___x_1062_, 0);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1220_ = v___x_1062_;
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_a_1218_);
lean_dec(v___x_1062_);
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
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1226_ = lean_ctor_get(v___x_1059_, 0);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1059_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1228_ = v___x_1059_;
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_a_1226_);
lean_dec(v___x_1059_);
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
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1234_ = lean_ctor_get(v___x_1056_, 0);
v_isSharedCheck_1241_ = !lean_is_exclusive(v___x_1056_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1236_ = v___x_1056_;
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_a_1234_);
lean_dec(v___x_1056_);
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
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1242_ = lean_ctor_get(v___x_1053_, 0);
v_isSharedCheck_1249_ = !lean_is_exclusive(v___x_1053_);
if (v_isSharedCheck_1249_ == 0)
{
v___x_1244_ = v___x_1053_;
v_isShared_1245_ = v_isSharedCheck_1249_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_a_1242_);
lean_dec(v___x_1053_);
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
}
else
{
lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1380_; 
lean_dec(v_goal_1031_);
v_a_1373_ = lean_ctor_get(v___x_1040_, 0);
v_isSharedCheck_1380_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1375_ = v___x_1040_;
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___x_1040_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1378_; 
if (v_isShared_1376_ == 0)
{
v___x_1378_ = v___x_1375_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v_a_1373_);
v___x_1378_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
return v___x_1378_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___boxed(lean_object* v_lemmas_1381_, lean_object* v_goal_1382_, lean_object* v_ignoreStarArg_1383_, lean_object* v_a_1384_, lean_object* v_a_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_, lean_object* v_a_1389_, lean_object* v_a_1390_){
_start:
{
uint8_t v_ignoreStarArg_boxed_1391_; lean_object* v_res_1392_; 
v_ignoreStarArg_boxed_1391_ = lean_unbox(v_ignoreStarArg_1383_);
v_res_1392_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext(v_lemmas_1381_, v_goal_1382_, v_ignoreStarArg_boxed_1391_, v_a_1384_, v_a_1385_, v_a_1386_, v_a_1387_, v_a_1388_, v_a_1389_);
lean_dec(v_a_1389_);
lean_dec_ref(v_a_1388_);
lean_dec(v_a_1387_);
lean_dec_ref(v_a_1386_);
lean_dec(v_a_1385_);
lean_dec_ref(v_a_1384_);
lean_dec(v_lemmas_1381_);
return v_res_1392_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1(lean_object* v_00_u03b1_1393_, lean_object* v_msg_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_){
_start:
{
lean_object* v___x_1402_; 
v___x_1402_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1___redArg(v_msg_1394_, v___y_1395_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_);
return v___x_1402_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1___boxed(lean_object* v_00_u03b1_1403_, lean_object* v_msg_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_){
_start:
{
lean_object* v_res_1412_; 
v_res_1412_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1(v_00_u03b1_1403_, v_msg_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_);
lean_dec(v___y_1410_);
lean_dec_ref(v___y_1409_);
lean_dec(v___y_1408_);
lean_dec_ref(v___y_1407_);
lean_dec(v___y_1406_);
lean_dec_ref(v___y_1405_);
return v_res_1412_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2(lean_object* v_00_u03b1_1413_, lean_object* v_constName_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_){
_start:
{
lean_object* v___x_1422_; 
v___x_1422_ = l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2___redArg(v_constName_1414_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_);
return v___x_1422_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2___boxed(lean_object* v_00_u03b1_1423_, lean_object* v_constName_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_){
_start:
{
lean_object* v_res_1432_; 
v_res_1432_ = l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2(v_00_u03b1_1423_, v_constName_1424_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_);
lean_dec(v___y_1430_);
lean_dec_ref(v___y_1429_);
lean_dec(v___y_1428_);
lean_dec_ref(v___y_1427_);
lean_dec(v___y_1426_);
lean_dec_ref(v___y_1425_);
return v_res_1432_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__4(lean_object* v_as_1433_, size_t v_sz_1434_, size_t v_i_1435_, lean_object* v_b_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_){
_start:
{
lean_object* v___x_1444_; 
v___x_1444_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__4___redArg(v_as_1433_, v_sz_1434_, v_i_1435_, v_b_1436_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__4___boxed(lean_object* v_as_1445_, lean_object* v_sz_1446_, lean_object* v_i_1447_, lean_object* v_b_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_){
_start:
{
size_t v_sz_boxed_1456_; size_t v_i_boxed_1457_; lean_object* v_res_1458_; 
v_sz_boxed_1456_ = lean_unbox_usize(v_sz_1446_);
lean_dec(v_sz_1446_);
v_i_boxed_1457_ = lean_unbox_usize(v_i_1447_);
lean_dec(v_i_1447_);
v_res_1458_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__4(v_as_1445_, v_sz_boxed_1456_, v_i_boxed_1457_, v_b_1448_, v___y_1449_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_);
lean_dec(v___y_1454_);
lean_dec_ref(v___y_1453_);
lean_dec(v___y_1452_);
lean_dec_ref(v___y_1451_);
lean_dec(v___y_1450_);
lean_dec_ref(v___y_1449_);
lean_dec_ref(v_as_1445_);
return v_res_1458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2(lean_object* v_msgData_1459_, lean_object* v_macroStack_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_){
_start:
{
lean_object* v___x_1468_; 
v___x_1468_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___redArg(v_msgData_1459_, v_macroStack_1460_, v___y_1465_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2___boxed(lean_object* v_msgData_1469_, lean_object* v_macroStack_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2(v_msgData_1469_, v_macroStack_1470_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_);
lean_dec(v___y_1476_);
lean_dec_ref(v___y_1475_);
lean_dec(v___y_1474_);
lean_dec_ref(v___y_1473_);
lean_dec(v___y_1472_);
lean_dec_ref(v___y_1471_);
return v_res_1478_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4(lean_object* v_00_u03b1_1479_, lean_object* v_ref_1480_, lean_object* v_constName_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_){
_start:
{
lean_object* v___x_1489_; 
v___x_1489_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___redArg(v_ref_1480_, v_constName_1481_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_);
return v___x_1489_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4___boxed(lean_object* v_00_u03b1_1490_, lean_object* v_ref_1491_, lean_object* v_constName_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_){
_start:
{
lean_object* v_res_1500_; 
v_res_1500_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4(v_00_u03b1_1490_, v_ref_1491_, v_constName_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_);
lean_dec(v___y_1498_);
lean_dec_ref(v___y_1497_);
lean_dec(v___y_1496_);
lean_dec_ref(v___y_1495_);
lean_dec(v___y_1494_);
lean_dec_ref(v___y_1493_);
lean_dec(v_ref_1491_);
return v_res_1500_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9(lean_object* v_00_u03b1_1501_, lean_object* v_ref_1502_, lean_object* v_msg_1503_, lean_object* v_declHint_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
lean_object* v___x_1512_; 
v___x_1512_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9___redArg(v_ref_1502_, v_msg_1503_, v_declHint_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_);
return v___x_1512_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9___boxed(lean_object* v_00_u03b1_1513_, lean_object* v_ref_1514_, lean_object* v_msg_1515_, lean_object* v_declHint_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_){
_start:
{
lean_object* v_res_1524_; 
v_res_1524_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9(v_00_u03b1_1513_, v_ref_1514_, v_msg_1515_, v_declHint_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_);
lean_dec(v___y_1522_);
lean_dec_ref(v___y_1521_);
lean_dec(v___y_1520_);
lean_dec_ref(v___y_1519_);
lean_dec(v___y_1518_);
lean_dec_ref(v___y_1517_);
lean_dec(v_ref_1514_);
return v_res_1524_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13(lean_object* v_msg_1525_, lean_object* v_declHint_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_){
_start:
{
lean_object* v___x_1534_; 
v___x_1534_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg(v_msg_1525_, v_declHint_1526_, v___y_1532_);
return v___x_1534_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___boxed(lean_object* v_msg_1535_, lean_object* v_declHint_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_){
_start:
{
lean_object* v_res_1544_; 
v_res_1544_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13(v_msg_1535_, v_declHint_1536_, v___y_1537_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_);
lean_dec(v___y_1542_);
lean_dec_ref(v___y_1541_);
lean_dec(v___y_1540_);
lean_dec_ref(v___y_1539_);
lean_dec(v___y_1538_);
lean_dec_ref(v___y_1537_);
return v_res_1544_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__13(lean_object* v_00_u03b1_1545_, lean_object* v_ref_1546_, lean_object* v_msg_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_){
_start:
{
lean_object* v___x_1555_; 
v___x_1555_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__13___redArg(v_ref_1546_, v_msg_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_);
return v___x_1555_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__13___boxed(lean_object* v_00_u03b1_1556_, lean_object* v_ref_1557_, lean_object* v_msg_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_){
_start:
{
lean_object* v_res_1566_; 
v_res_1566_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__13(v_00_u03b1_1556_, v_ref_1557_, v_msg_1558_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_);
lean_dec(v___y_1564_);
lean_dec_ref(v___y_1563_);
lean_dec(v___y_1562_);
lean_dec_ref(v___y_1561_);
lean_dec(v___y_1560_);
lean_dec_ref(v___y_1559_);
lean_dec(v_ref_1557_);
return v_res_1566_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0(uint8_t v___y_1574_, uint8_t v_suppressElabErrors_1575_, lean_object* v_x_1576_){
_start:
{
if (lean_obj_tag(v_x_1576_) == 1)
{
lean_object* v_pre_1577_; 
v_pre_1577_ = lean_ctor_get(v_x_1576_, 0);
switch(lean_obj_tag(v_pre_1577_))
{
case 1:
{
lean_object* v_pre_1578_; 
v_pre_1578_ = lean_ctor_get(v_pre_1577_, 0);
switch(lean_obj_tag(v_pre_1578_))
{
case 0:
{
lean_object* v_str_1579_; lean_object* v_str_1580_; lean_object* v___x_1581_; uint8_t v___x_1582_; 
v_str_1579_ = lean_ctor_get(v_x_1576_, 1);
v_str_1580_ = lean_ctor_get(v_pre_1577_, 1);
v___x_1581_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__0));
v___x_1582_ = lean_string_dec_eq(v_str_1580_, v___x_1581_);
if (v___x_1582_ == 0)
{
lean_object* v___x_1583_; uint8_t v___x_1584_; 
v___x_1583_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__3___closed__2));
v___x_1584_ = lean_string_dec_eq(v_str_1580_, v___x_1583_);
if (v___x_1584_ == 0)
{
return v___y_1574_;
}
else
{
lean_object* v___x_1585_; uint8_t v___x_1586_; 
v___x_1585_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__1));
v___x_1586_ = lean_string_dec_eq(v_str_1579_, v___x_1585_);
if (v___x_1586_ == 0)
{
return v___y_1574_;
}
else
{
return v_suppressElabErrors_1575_;
}
}
}
else
{
lean_object* v___x_1587_; uint8_t v___x_1588_; 
v___x_1587_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__2));
v___x_1588_ = lean_string_dec_eq(v_str_1579_, v___x_1587_);
if (v___x_1588_ == 0)
{
return v___y_1574_;
}
else
{
return v_suppressElabErrors_1575_;
}
}
}
case 1:
{
lean_object* v_pre_1589_; 
v_pre_1589_ = lean_ctor_get(v_pre_1578_, 0);
if (lean_obj_tag(v_pre_1589_) == 0)
{
lean_object* v_str_1590_; lean_object* v_str_1591_; lean_object* v_str_1592_; lean_object* v___x_1593_; uint8_t v___x_1594_; 
v_str_1590_ = lean_ctor_get(v_x_1576_, 1);
v_str_1591_ = lean_ctor_get(v_pre_1577_, 1);
v_str_1592_ = lean_ctor_get(v_pre_1578_, 1);
v___x_1593_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__3));
v___x_1594_ = lean_string_dec_eq(v_str_1592_, v___x_1593_);
if (v___x_1594_ == 0)
{
return v___y_1574_;
}
else
{
lean_object* v___x_1595_; uint8_t v___x_1596_; 
v___x_1595_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__4));
v___x_1596_ = lean_string_dec_eq(v_str_1591_, v___x_1595_);
if (v___x_1596_ == 0)
{
return v___y_1574_;
}
else
{
lean_object* v___x_1597_; uint8_t v___x_1598_; 
v___x_1597_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__5));
v___x_1598_ = lean_string_dec_eq(v_str_1590_, v___x_1597_);
if (v___x_1598_ == 0)
{
return v___y_1574_;
}
else
{
return v_suppressElabErrors_1575_;
}
}
}
}
else
{
return v___y_1574_;
}
}
default: 
{
return v___y_1574_;
}
}
}
case 0:
{
lean_object* v_str_1599_; lean_object* v___x_1600_; uint8_t v___x_1601_; 
v_str_1599_ = lean_ctor_get(v_x_1576_, 1);
v___x_1600_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__6));
v___x_1601_ = lean_string_dec_eq(v_str_1599_, v___x_1600_);
if (v___x_1601_ == 0)
{
return v___y_1574_;
}
else
{
return v_suppressElabErrors_1575_;
}
}
default: 
{
return v___y_1574_;
}
}
}
else
{
return v___y_1574_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___boxed(lean_object* v___y_1602_, lean_object* v_suppressElabErrors_1603_, lean_object* v_x_1604_){
_start:
{
uint8_t v___y_2865__boxed_1605_; uint8_t v_suppressElabErrors_boxed_1606_; uint8_t v_res_1607_; lean_object* v_r_1608_; 
v___y_2865__boxed_1605_ = lean_unbox(v___y_1602_);
v_suppressElabErrors_boxed_1606_ = lean_unbox(v_suppressElabErrors_1603_);
v_res_1607_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0(v___y_2865__boxed_1605_, v_suppressElabErrors_boxed_1606_, v_x_1604_);
lean_dec(v_x_1604_);
v_r_1608_ = lean_box(v_res_1607_);
return v_r_1608_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1(lean_object* v_ref_1610_, lean_object* v_msgData_1611_, uint8_t v_severity_1612_, uint8_t v_isSilent_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_){
_start:
{
uint8_t v___y_1620_; lean_object* v___y_1621_; lean_object* v___y_1622_; lean_object* v___y_1623_; lean_object* v___y_1624_; lean_object* v___y_1625_; uint8_t v___y_1626_; lean_object* v___y_1627_; lean_object* v___y_1628_; lean_object* v___y_1656_; uint8_t v___y_1657_; uint8_t v___y_1658_; lean_object* v___y_1659_; lean_object* v___y_1660_; lean_object* v___y_1661_; uint8_t v___y_1662_; lean_object* v___y_1663_; lean_object* v___y_1681_; uint8_t v___y_1682_; uint8_t v___y_1683_; lean_object* v___y_1684_; lean_object* v___y_1685_; lean_object* v___y_1686_; uint8_t v___y_1687_; lean_object* v___y_1688_; lean_object* v___y_1692_; uint8_t v___y_1693_; uint8_t v___y_1694_; lean_object* v___y_1695_; lean_object* v___y_1696_; lean_object* v___y_1697_; uint8_t v___y_1698_; uint8_t v___x_1703_; uint8_t v___y_1705_; lean_object* v___y_1706_; lean_object* v___y_1707_; lean_object* v___y_1708_; lean_object* v___y_1709_; uint8_t v___y_1710_; uint8_t v___y_1711_; uint8_t v___y_1713_; uint8_t v___x_1728_; 
v___x_1703_ = 2;
v___x_1728_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1612_, v___x_1703_);
if (v___x_1728_ == 0)
{
v___y_1713_ = v___x_1728_;
goto v___jp_1712_;
}
else
{
uint8_t v___x_1729_; 
lean_inc_ref(v_msgData_1611_);
v___x_1729_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1611_);
v___y_1713_ = v___x_1729_;
goto v___jp_1712_;
}
v___jp_1619_:
{
lean_object* v___x_1629_; lean_object* v_currNamespace_1630_; lean_object* v_openDecls_1631_; lean_object* v_env_1632_; lean_object* v_nextMacroScope_1633_; lean_object* v_ngen_1634_; lean_object* v_auxDeclNGen_1635_; lean_object* v_traceState_1636_; lean_object* v_cache_1637_; lean_object* v_messages_1638_; lean_object* v_infoState_1639_; lean_object* v_snapshotTasks_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1654_; 
v___x_1629_ = lean_st_ref_take(v___y_1628_);
v_currNamespace_1630_ = lean_ctor_get(v___y_1627_, 6);
v_openDecls_1631_ = lean_ctor_get(v___y_1627_, 7);
v_env_1632_ = lean_ctor_get(v___x_1629_, 0);
v_nextMacroScope_1633_ = lean_ctor_get(v___x_1629_, 1);
v_ngen_1634_ = lean_ctor_get(v___x_1629_, 2);
v_auxDeclNGen_1635_ = lean_ctor_get(v___x_1629_, 3);
v_traceState_1636_ = lean_ctor_get(v___x_1629_, 4);
v_cache_1637_ = lean_ctor_get(v___x_1629_, 5);
v_messages_1638_ = lean_ctor_get(v___x_1629_, 6);
v_infoState_1639_ = lean_ctor_get(v___x_1629_, 7);
v_snapshotTasks_1640_ = lean_ctor_get(v___x_1629_, 8);
v_isSharedCheck_1654_ = !lean_is_exclusive(v___x_1629_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1642_ = v___x_1629_;
v_isShared_1643_ = v_isSharedCheck_1654_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_snapshotTasks_1640_);
lean_inc(v_infoState_1639_);
lean_inc(v_messages_1638_);
lean_inc(v_cache_1637_);
lean_inc(v_traceState_1636_);
lean_inc(v_auxDeclNGen_1635_);
lean_inc(v_ngen_1634_);
lean_inc(v_nextMacroScope_1633_);
lean_inc(v_env_1632_);
lean_dec(v___x_1629_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1654_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1649_; 
lean_inc(v_openDecls_1631_);
lean_inc(v_currNamespace_1630_);
v___x_1644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1644_, 0, v_currNamespace_1630_);
lean_ctor_set(v___x_1644_, 1, v_openDecls_1631_);
v___x_1645_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1645_, 0, v___x_1644_);
lean_ctor_set(v___x_1645_, 1, v___y_1625_);
lean_inc_ref(v___y_1624_);
lean_inc_ref(v___y_1622_);
v___x_1646_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1646_, 0, v___y_1622_);
lean_ctor_set(v___x_1646_, 1, v___y_1623_);
lean_ctor_set(v___x_1646_, 2, v___y_1621_);
lean_ctor_set(v___x_1646_, 3, v___y_1624_);
lean_ctor_set(v___x_1646_, 4, v___x_1645_);
lean_ctor_set_uint8(v___x_1646_, sizeof(void*)*5, v___y_1620_);
lean_ctor_set_uint8(v___x_1646_, sizeof(void*)*5 + 1, v___y_1626_);
lean_ctor_set_uint8(v___x_1646_, sizeof(void*)*5 + 2, v_isSilent_1613_);
v___x_1647_ = l_Lean_MessageLog_add(v___x_1646_, v_messages_1638_);
if (v_isShared_1643_ == 0)
{
lean_ctor_set(v___x_1642_, 6, v___x_1647_);
v___x_1649_ = v___x_1642_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v_env_1632_);
lean_ctor_set(v_reuseFailAlloc_1653_, 1, v_nextMacroScope_1633_);
lean_ctor_set(v_reuseFailAlloc_1653_, 2, v_ngen_1634_);
lean_ctor_set(v_reuseFailAlloc_1653_, 3, v_auxDeclNGen_1635_);
lean_ctor_set(v_reuseFailAlloc_1653_, 4, v_traceState_1636_);
lean_ctor_set(v_reuseFailAlloc_1653_, 5, v_cache_1637_);
lean_ctor_set(v_reuseFailAlloc_1653_, 6, v___x_1647_);
lean_ctor_set(v_reuseFailAlloc_1653_, 7, v_infoState_1639_);
lean_ctor_set(v_reuseFailAlloc_1653_, 8, v_snapshotTasks_1640_);
v___x_1649_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; 
v___x_1650_ = lean_st_ref_set(v___y_1628_, v___x_1649_);
v___x_1651_ = lean_box(0);
v___x_1652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1652_, 0, v___x_1651_);
return v___x_1652_;
}
}
}
v___jp_1655_:
{
lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1679_; 
v___x_1664_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1611_);
v___x_1665_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__1(v___x_1664_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_);
v_a_1666_ = lean_ctor_get(v___x_1665_, 0);
v_isSharedCheck_1679_ = !lean_is_exclusive(v___x_1665_);
if (v_isSharedCheck_1679_ == 0)
{
v___x_1668_ = v___x_1665_;
v_isShared_1669_ = v_isSharedCheck_1679_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v___x_1665_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1679_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; 
lean_inc_ref_n(v___y_1661_, 2);
v___x_1670_ = l_Lean_FileMap_toPosition(v___y_1661_, v___y_1660_);
lean_dec(v___y_1660_);
v___x_1671_ = l_Lean_FileMap_toPosition(v___y_1661_, v___y_1663_);
lean_dec(v___y_1663_);
v___x_1672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1672_, 0, v___x_1671_);
v___x_1673_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___closed__0));
if (v___y_1658_ == 0)
{
lean_del_object(v___x_1668_);
lean_dec_ref(v___y_1656_);
v___y_1620_ = v___y_1657_;
v___y_1621_ = v___x_1672_;
v___y_1622_ = v___y_1659_;
v___y_1623_ = v___x_1670_;
v___y_1624_ = v___x_1673_;
v___y_1625_ = v_a_1666_;
v___y_1626_ = v___y_1662_;
v___y_1627_ = v___y_1616_;
v___y_1628_ = v___y_1617_;
goto v___jp_1619_;
}
else
{
uint8_t v___x_1674_; 
lean_inc(v_a_1666_);
v___x_1674_ = l_Lean_MessageData_hasTag(v___y_1656_, v_a_1666_);
if (v___x_1674_ == 0)
{
lean_object* v___x_1675_; lean_object* v___x_1677_; 
lean_dec_ref_known(v___x_1672_, 1);
lean_dec_ref(v___x_1670_);
lean_dec(v_a_1666_);
v___x_1675_ = lean_box(0);
if (v_isShared_1669_ == 0)
{
lean_ctor_set(v___x_1668_, 0, v___x_1675_);
v___x_1677_ = v___x_1668_;
goto v_reusejp_1676_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v___x_1675_);
v___x_1677_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1676_;
}
v_reusejp_1676_:
{
return v___x_1677_;
}
}
else
{
lean_del_object(v___x_1668_);
v___y_1620_ = v___y_1657_;
v___y_1621_ = v___x_1672_;
v___y_1622_ = v___y_1659_;
v___y_1623_ = v___x_1670_;
v___y_1624_ = v___x_1673_;
v___y_1625_ = v_a_1666_;
v___y_1626_ = v___y_1662_;
v___y_1627_ = v___y_1616_;
v___y_1628_ = v___y_1617_;
goto v___jp_1619_;
}
}
}
}
v___jp_1680_:
{
lean_object* v___x_1689_; 
v___x_1689_ = l_Lean_Syntax_getTailPos_x3f(v___y_1685_, v___y_1682_);
lean_dec(v___y_1685_);
if (lean_obj_tag(v___x_1689_) == 0)
{
lean_inc(v___y_1688_);
v___y_1656_ = v___y_1681_;
v___y_1657_ = v___y_1682_;
v___y_1658_ = v___y_1683_;
v___y_1659_ = v___y_1684_;
v___y_1660_ = v___y_1688_;
v___y_1661_ = v___y_1686_;
v___y_1662_ = v___y_1687_;
v___y_1663_ = v___y_1688_;
goto v___jp_1655_;
}
else
{
lean_object* v_val_1690_; 
v_val_1690_ = lean_ctor_get(v___x_1689_, 0);
lean_inc(v_val_1690_);
lean_dec_ref_known(v___x_1689_, 1);
v___y_1656_ = v___y_1681_;
v___y_1657_ = v___y_1682_;
v___y_1658_ = v___y_1683_;
v___y_1659_ = v___y_1684_;
v___y_1660_ = v___y_1688_;
v___y_1661_ = v___y_1686_;
v___y_1662_ = v___y_1687_;
v___y_1663_ = v_val_1690_;
goto v___jp_1655_;
}
}
v___jp_1691_:
{
lean_object* v_ref_1699_; lean_object* v___x_1700_; 
v_ref_1699_ = l_Lean_replaceRef(v_ref_1610_, v___y_1697_);
v___x_1700_ = l_Lean_Syntax_getPos_x3f(v_ref_1699_, v___y_1693_);
if (lean_obj_tag(v___x_1700_) == 0)
{
lean_object* v___x_1701_; 
v___x_1701_ = lean_unsigned_to_nat(0u);
v___y_1681_ = v___y_1692_;
v___y_1682_ = v___y_1693_;
v___y_1683_ = v___y_1694_;
v___y_1684_ = v___y_1695_;
v___y_1685_ = v_ref_1699_;
v___y_1686_ = v___y_1696_;
v___y_1687_ = v___y_1698_;
v___y_1688_ = v___x_1701_;
goto v___jp_1680_;
}
else
{
lean_object* v_val_1702_; 
v_val_1702_ = lean_ctor_get(v___x_1700_, 0);
lean_inc(v_val_1702_);
lean_dec_ref_known(v___x_1700_, 1);
v___y_1681_ = v___y_1692_;
v___y_1682_ = v___y_1693_;
v___y_1683_ = v___y_1694_;
v___y_1684_ = v___y_1695_;
v___y_1685_ = v_ref_1699_;
v___y_1686_ = v___y_1696_;
v___y_1687_ = v___y_1698_;
v___y_1688_ = v_val_1702_;
goto v___jp_1680_;
}
}
v___jp_1704_:
{
if (v___y_1711_ == 0)
{
v___y_1692_ = v___y_1707_;
v___y_1693_ = v___y_1710_;
v___y_1694_ = v___y_1705_;
v___y_1695_ = v___y_1706_;
v___y_1696_ = v___y_1709_;
v___y_1697_ = v___y_1708_;
v___y_1698_ = v_severity_1612_;
goto v___jp_1691_;
}
else
{
v___y_1692_ = v___y_1707_;
v___y_1693_ = v___y_1710_;
v___y_1694_ = v___y_1705_;
v___y_1695_ = v___y_1706_;
v___y_1696_ = v___y_1709_;
v___y_1697_ = v___y_1708_;
v___y_1698_ = v___x_1703_;
goto v___jp_1691_;
}
}
v___jp_1712_:
{
if (v___y_1713_ == 0)
{
lean_object* v_fileName_1714_; lean_object* v_fileMap_1715_; lean_object* v_options_1716_; lean_object* v_ref_1717_; uint8_t v_suppressElabErrors_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___f_1721_; uint8_t v___x_1722_; uint8_t v___x_1723_; 
v_fileName_1714_ = lean_ctor_get(v___y_1616_, 0);
v_fileMap_1715_ = lean_ctor_get(v___y_1616_, 1);
v_options_1716_ = lean_ctor_get(v___y_1616_, 2);
v_ref_1717_ = lean_ctor_get(v___y_1616_, 5);
v_suppressElabErrors_1718_ = lean_ctor_get_uint8(v___y_1616_, sizeof(void*)*14 + 1);
v___x_1719_ = lean_box(v___y_1713_);
v___x_1720_ = lean_box(v_suppressElabErrors_1718_);
v___f_1721_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1721_, 0, v___x_1719_);
lean_closure_set(v___f_1721_, 1, v___x_1720_);
v___x_1722_ = 1;
v___x_1723_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1612_, v___x_1722_);
if (v___x_1723_ == 0)
{
v___y_1705_ = v_suppressElabErrors_1718_;
v___y_1706_ = v_fileName_1714_;
v___y_1707_ = v___f_1721_;
v___y_1708_ = v_ref_1717_;
v___y_1709_ = v_fileMap_1715_;
v___y_1710_ = v___y_1713_;
v___y_1711_ = v___x_1723_;
goto v___jp_1704_;
}
else
{
lean_object* v___x_1724_; uint8_t v___x_1725_; 
v___x_1724_ = l_Lean_warningAsError;
v___x_1725_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__5(v_options_1716_, v___x_1724_);
v___y_1705_ = v_suppressElabErrors_1718_;
v___y_1706_ = v_fileName_1714_;
v___y_1707_ = v___f_1721_;
v___y_1708_ = v_ref_1717_;
v___y_1709_ = v_fileMap_1715_;
v___y_1710_ = v___y_1713_;
v___y_1711_ = v___x_1725_;
goto v___jp_1704_;
}
}
else
{
lean_object* v___x_1726_; lean_object* v___x_1727_; 
lean_dec_ref(v_msgData_1611_);
v___x_1726_ = lean_box(0);
v___x_1727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1727_, 0, v___x_1726_);
return v___x_1727_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_1730_, lean_object* v_msgData_1731_, lean_object* v_severity_1732_, lean_object* v_isSilent_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_){
_start:
{
uint8_t v_severity_boxed_1739_; uint8_t v_isSilent_boxed_1740_; lean_object* v_res_1741_; 
v_severity_boxed_1739_ = lean_unbox(v_severity_1732_);
v_isSilent_boxed_1740_ = lean_unbox(v_isSilent_1733_);
v_res_1741_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1(v_ref_1730_, v_msgData_1731_, v_severity_boxed_1739_, v_isSilent_boxed_1740_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_);
lean_dec(v___y_1737_);
lean_dec_ref(v___y_1736_);
lean_dec(v___y_1735_);
lean_dec_ref(v___y_1734_);
lean_dec(v_ref_1730_);
return v_res_1741_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0(lean_object* v_msgData_1742_, uint8_t v_severity_1743_, uint8_t v_isSilent_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_){
_start:
{
lean_object* v_ref_1750_; lean_object* v___x_1751_; 
v_ref_1750_ = lean_ctor_get(v___y_1747_, 5);
v___x_1751_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1(v_ref_1750_, v_msgData_1742_, v_severity_1743_, v_isSilent_1744_, v___y_1745_, v___y_1746_, v___y_1747_, v___y_1748_);
return v___x_1751_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0___boxed(lean_object* v_msgData_1752_, lean_object* v_severity_1753_, lean_object* v_isSilent_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_){
_start:
{
uint8_t v_severity_boxed_1760_; uint8_t v_isSilent_boxed_1761_; lean_object* v_res_1762_; 
v_severity_boxed_1760_ = lean_unbox(v_severity_1753_);
v_isSilent_boxed_1761_ = lean_unbox(v_isSilent_1754_);
v_res_1762_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0(v_msgData_1752_, v_severity_boxed_1760_, v_isSilent_boxed_1761_, v___y_1755_, v___y_1756_, v___y_1757_, v___y_1758_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v___y_1756_);
lean_dec_ref(v___y_1755_);
return v_res_1762_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0(lean_object* v_msgData_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_){
_start:
{
uint8_t v___x_1769_; uint8_t v___x_1770_; lean_object* v___x_1771_; 
v___x_1769_ = 1;
v___x_1770_ = 0;
v___x_1771_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0(v_msgData_1763_, v___x_1769_, v___x_1770_, v___y_1764_, v___y_1765_, v___y_1766_, v___y_1767_);
return v___x_1771_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0___boxed(lean_object* v_msgData_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_){
_start:
{
lean_object* v_res_1778_; 
v_res_1778_ = l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0(v_msgData_1772_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_);
lean_dec(v___y_1776_);
lean_dec_ref(v___y_1775_);
lean_dec(v___y_1774_);
lean_dec_ref(v___y_1773_);
return v_res_1778_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__2(void){
_start:
{
lean_object* v___x_1782_; lean_object* v___x_1783_; 
v___x_1782_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__1));
v___x_1783_ = l_Lean_MessageData_ofFormat(v___x_1782_);
return v___x_1783_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig(lean_object* v_config_1784_, lean_object* v_a_1785_, lean_object* v_a_1786_, lean_object* v_a_1787_, lean_object* v_a_1788_){
_start:
{
uint8_t v_leave_1790_; 
v_leave_1790_ = lean_ctor_get_uint8(v_config_1784_, sizeof(void*)*1 + 1);
if (v_leave_1790_ == 0)
{
lean_object* v___x_1791_; lean_object* v___x_1792_; 
v___x_1791_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__2, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__2);
v___x_1792_ = l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0(v___x_1791_, v_a_1785_, v_a_1786_, v_a_1787_, v_a_1788_);
return v___x_1792_;
}
else
{
lean_object* v___x_1793_; lean_object* v___x_1794_; 
v___x_1793_ = lean_box(0);
v___x_1794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1794_, 0, v___x_1793_);
return v___x_1794_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___boxed(lean_object* v_config_1795_, lean_object* v_a_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_){
_start:
{
lean_object* v_res_1801_; 
v_res_1801_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig(v_config_1795_, v_a_1796_, v_a_1797_, v_a_1798_, v_a_1799_);
lean_dec(v_a_1799_);
lean_dec_ref(v_a_1798_);
lean_dec(v_a_1797_);
lean_dec_ref(v_a_1796_);
lean_dec_ref(v_config_1795_);
return v_res_1801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams(lean_object* v_grindStx_1818_, lean_object* v_goal_1819_, lean_object* v_a_1820_, lean_object* v_a_1821_, lean_object* v_a_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_, lean_object* v_a_1825_){
_start:
{
lean_object* v___y_1828_; lean_object* v___y_1829_; lean_object* v___y_1830_; lean_object* v___y_1831_; uint8_t v___y_1832_; lean_object* v___y_1833_; lean_object* v___y_1834_; lean_object* v___y_1835_; lean_object* v___y_1836_; lean_object* v___y_1840_; lean_object* v___y_1841_; lean_object* v___y_1842_; lean_object* v___y_1843_; lean_object* v___y_1844_; lean_object* v___y_1845_; lean_object* v___y_1846_; lean_object* v___y_1847_; uint8_t v___y_1848_; lean_object* v___x_1851_; uint8_t v___x_1852_; 
v___x_1851_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__2));
lean_inc(v_grindStx_1818_);
v___x_1852_ = l_Lean_Syntax_isOfKind(v_grindStx_1818_, v___x_1851_);
if (v___x_1852_ == 0)
{
lean_object* v___x_1853_; 
lean_dec(v_goal_1819_);
lean_dec(v_grindStx_1818_);
v___x_1853_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0___redArg();
return v___x_1853_;
}
else
{
lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; uint8_t v___x_1857_; lean_object* v___y_1859_; lean_object* v___y_1860_; lean_object* v___y_1861_; lean_object* v___y_1862_; lean_object* v___y_1863_; lean_object* v___y_1864_; lean_object* v___y_1865_; lean_object* v___y_1866_; 
v___x_1854_ = lean_unsigned_to_nat(1u);
v___x_1855_ = l_Lean_Syntax_getArg(v_grindStx_1818_, v___x_1854_);
v___x_1856_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__46));
lean_inc(v___x_1855_);
v___x_1857_ = l_Lean_Syntax_isOfKind(v___x_1855_, v___x_1856_);
if (v___x_1857_ == 0)
{
lean_object* v___x_1893_; 
lean_dec(v___x_1855_);
lean_dec(v_goal_1819_);
lean_dec(v_grindStx_1818_);
v___x_1893_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0___redArg();
return v___x_1893_;
}
else
{
lean_object* v___x_1894_; lean_object* v___y_1896_; lean_object* v_grindParams_1897_; lean_object* v___y_1898_; lean_object* v___y_1899_; lean_object* v___y_1900_; lean_object* v___y_1901_; lean_object* v___y_1902_; lean_object* v___y_1903_; lean_object* v_only_1914_; lean_object* v___y_1915_; lean_object* v___y_1916_; lean_object* v___y_1917_; lean_object* v___y_1918_; lean_object* v___y_1919_; lean_object* v___y_1920_; lean_object* v___x_1930_; uint8_t v___x_1931_; 
v___x_1894_ = lean_unsigned_to_nat(2u);
v___x_1930_ = l_Lean_Syntax_getArg(v_grindStx_1818_, v___x_1894_);
v___x_1931_ = l_Lean_Syntax_isNone(v___x_1930_);
if (v___x_1931_ == 0)
{
uint8_t v___x_1932_; 
lean_inc(v___x_1930_);
v___x_1932_ = l_Lean_Syntax_matchesNull(v___x_1930_, v___x_1854_);
if (v___x_1932_ == 0)
{
lean_object* v___x_1933_; 
lean_dec(v___x_1930_);
lean_dec(v___x_1855_);
lean_dec(v_goal_1819_);
lean_dec(v_grindStx_1818_);
v___x_1933_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0___redArg();
return v___x_1933_;
}
else
{
lean_object* v___x_1934_; lean_object* v_only_1935_; lean_object* v___x_1936_; 
v___x_1934_ = lean_unsigned_to_nat(0u);
v_only_1935_ = l_Lean_Syntax_getArg(v___x_1930_, v___x_1934_);
lean_dec(v___x_1930_);
v___x_1936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1936_, 0, v_only_1935_);
v_only_1914_ = v___x_1936_;
v___y_1915_ = v_a_1820_;
v___y_1916_ = v_a_1821_;
v___y_1917_ = v_a_1822_;
v___y_1918_ = v_a_1823_;
v___y_1919_ = v_a_1824_;
v___y_1920_ = v_a_1825_;
goto v___jp_1913_;
}
}
else
{
lean_object* v___x_1937_; 
lean_dec(v___x_1930_);
v___x_1937_ = lean_box(0);
v_only_1914_ = v___x_1937_;
v___y_1915_ = v_a_1820_;
v___y_1916_ = v_a_1821_;
v___y_1917_ = v_a_1822_;
v___y_1918_ = v_a_1823_;
v___y_1919_ = v_a_1824_;
v___y_1920_ = v_a_1825_;
goto v___jp_1913_;
}
v___jp_1895_:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; uint8_t v___x_1906_; 
v___x_1904_ = lean_unsigned_to_nat(4u);
v___x_1905_ = l_Lean_Syntax_getArg(v_grindStx_1818_, v___x_1904_);
lean_dec(v_grindStx_1818_);
v___x_1906_ = l_Lean_Syntax_isNone(v___x_1905_);
if (v___x_1906_ == 0)
{
uint8_t v___x_1907_; 
lean_inc(v___x_1905_);
v___x_1907_ = l_Lean_Syntax_matchesNull(v___x_1905_, v___x_1894_);
if (v___x_1907_ == 0)
{
lean_object* v___x_1908_; 
lean_dec(v___x_1905_);
lean_dec(v_grindParams_1897_);
lean_dec(v___y_1896_);
lean_dec(v___x_1855_);
lean_dec(v_goal_1819_);
v___x_1908_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0___redArg();
return v___x_1908_;
}
else
{
lean_object* v___x_1909_; lean_object* v___x_1910_; uint8_t v___x_1911_; 
v___x_1909_ = l_Lean_Syntax_getArg(v___x_1905_, v___x_1854_);
lean_dec(v___x_1905_);
v___x_1910_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__5));
v___x_1911_ = l_Lean_Syntax_isOfKind(v___x_1909_, v___x_1910_);
if (v___x_1911_ == 0)
{
lean_object* v___x_1912_; 
lean_dec(v_grindParams_1897_);
lean_dec(v___y_1896_);
lean_dec(v___x_1855_);
lean_dec(v_goal_1819_);
v___x_1912_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0___redArg();
return v___x_1912_;
}
else
{
v___y_1859_ = v___y_1896_;
v___y_1860_ = v_grindParams_1897_;
v___y_1861_ = v___y_1898_;
v___y_1862_ = v___y_1899_;
v___y_1863_ = v___y_1900_;
v___y_1864_ = v___y_1901_;
v___y_1865_ = v___y_1902_;
v___y_1866_ = v___y_1903_;
goto v___jp_1858_;
}
}
}
else
{
lean_dec(v___x_1905_);
v___y_1859_ = v___y_1896_;
v___y_1860_ = v_grindParams_1897_;
v___y_1861_ = v___y_1898_;
v___y_1862_ = v___y_1899_;
v___y_1863_ = v___y_1900_;
v___y_1864_ = v___y_1901_;
v___y_1865_ = v___y_1902_;
v___y_1866_ = v___y_1903_;
goto v___jp_1858_;
}
}
v___jp_1913_:
{
lean_object* v___x_1921_; lean_object* v___x_1922_; uint8_t v___x_1923_; 
v___x_1921_ = lean_unsigned_to_nat(3u);
v___x_1922_ = l_Lean_Syntax_getArg(v_grindStx_1818_, v___x_1921_);
v___x_1923_ = l_Lean_Syntax_isNone(v___x_1922_);
if (v___x_1923_ == 0)
{
uint8_t v___x_1924_; 
lean_inc(v___x_1922_);
v___x_1924_ = l_Lean_Syntax_matchesNull(v___x_1922_, v___x_1921_);
if (v___x_1924_ == 0)
{
lean_object* v___x_1925_; 
lean_dec(v___x_1922_);
lean_dec(v_only_1914_);
lean_dec(v___x_1855_);
lean_dec(v_goal_1819_);
lean_dec(v_grindStx_1818_);
v___x_1925_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__0___redArg();
return v___x_1925_;
}
else
{
lean_object* v___x_1926_; lean_object* v_grindParams_1927_; lean_object* v___x_1928_; 
v___x_1926_ = l_Lean_Syntax_getArg(v___x_1922_, v___x_1854_);
lean_dec(v___x_1922_);
v_grindParams_1927_ = l_Lean_Syntax_getArgs(v___x_1926_);
lean_dec(v___x_1926_);
v___x_1928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1928_, 0, v_grindParams_1927_);
v___y_1896_ = v_only_1914_;
v_grindParams_1897_ = v___x_1928_;
v___y_1898_ = v___y_1915_;
v___y_1899_ = v___y_1916_;
v___y_1900_ = v___y_1917_;
v___y_1901_ = v___y_1918_;
v___y_1902_ = v___y_1919_;
v___y_1903_ = v___y_1920_;
goto v___jp_1895_;
}
}
else
{
lean_object* v___x_1929_; 
lean_dec(v___x_1922_);
v___x_1929_ = lean_box(0);
v___y_1896_ = v_only_1914_;
v_grindParams_1897_ = v___x_1929_;
v___y_1898_ = v___y_1915_;
v___y_1899_ = v___y_1916_;
v___y_1900_ = v___y_1917_;
v___y_1901_ = v___y_1918_;
v___y_1902_ = v___y_1919_;
v___y_1903_ = v___y_1920_;
goto v___jp_1895_;
}
}
}
v___jp_1858_:
{
uint8_t v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; 
v___x_1867_ = 0;
v___x_1868_ = lean_unsigned_to_nat(9u);
v___x_1869_ = lean_unsigned_to_nat(5u);
v___x_1870_ = lean_unsigned_to_nat(8u);
v___x_1871_ = lean_unsigned_to_nat(1000u);
v___x_1872_ = lean_unsigned_to_nat(100000u);
v___x_1873_ = lean_unsigned_to_nat(1024u);
v___x_1874_ = lean_unsigned_to_nat(1048576u);
v___x_1875_ = lean_unsigned_to_nat(10u);
v___x_1876_ = lean_unsigned_to_nat(50u);
v___x_1877_ = lean_box(0);
v___x_1878_ = lean_alloc_ctor(0, 13, 32);
lean_ctor_set(v___x_1878_, 0, v___x_1868_);
lean_ctor_set(v___x_1878_, 1, v___x_1869_);
lean_ctor_set(v___x_1878_, 2, v___x_1870_);
lean_ctor_set(v___x_1878_, 3, v___x_1870_);
lean_ctor_set(v___x_1878_, 4, v___x_1871_);
lean_ctor_set(v___x_1878_, 5, v___x_1871_);
lean_ctor_set(v___x_1878_, 6, v___x_1872_);
lean_ctor_set(v___x_1878_, 7, v___x_1873_);
lean_ctor_set(v___x_1878_, 8, v___x_1871_);
lean_ctor_set(v___x_1878_, 9, v___x_1874_);
lean_ctor_set(v___x_1878_, 10, v___x_1875_);
lean_ctor_set(v___x_1878_, 11, v___x_1876_);
lean_ctor_set(v___x_1878_, 12, v___x_1877_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13, v___x_1867_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 1, v___x_1867_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 2, v___x_1867_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 3, v___x_1867_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 4, v___x_1867_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 5, v___x_1857_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 6, v___x_1857_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 7, v___x_1857_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 8, v___x_1867_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 9, v___x_1867_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 10, v___x_1857_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 11, v___x_1867_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 12, v___x_1857_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 13, v___x_1857_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 14, v___x_1857_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 15, v___x_1857_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 16, v___x_1857_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 17, v___x_1867_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 18, v___x_1857_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 19, v___x_1857_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 20, v___x_1857_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 21, v___x_1857_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 22, v___x_1857_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 23, v___x_1857_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 24, v___x_1857_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 25, v___x_1857_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 26, v___x_1857_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 27, v___x_1857_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 28, v___x_1857_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 29, v___x_1867_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 30, v___x_1857_);
lean_ctor_set_uint8(v___x_1878_, sizeof(void*)*13 + 31, v___x_1857_);
v___x_1879_ = lean_box(v___x_1857_);
v___x_1880_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabGrindConfig___boxed), 12, 3);
lean_closure_set(v___x_1880_, 0, v___x_1855_);
lean_closure_set(v___x_1880_, 1, v___x_1878_);
lean_closure_set(v___x_1880_, 2, v___x_1879_);
v___x_1881_ = lean_box(0);
v___x_1882_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg(v___x_1880_, v___x_1881_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_, v___y_1866_);
if (lean_obj_tag(v___x_1882_) == 0)
{
if (lean_obj_tag(v___y_1859_) == 0)
{
lean_object* v_a_1883_; 
v_a_1883_ = lean_ctor_get(v___x_1882_, 0);
lean_inc(v_a_1883_);
lean_dec_ref_known(v___x_1882_, 1);
v___y_1840_ = v_a_1883_;
v___y_1841_ = v___y_1866_;
v___y_1842_ = v___y_1862_;
v___y_1843_ = v___y_1860_;
v___y_1844_ = v___y_1865_;
v___y_1845_ = v___y_1863_;
v___y_1846_ = v___y_1861_;
v___y_1847_ = v___y_1864_;
v___y_1848_ = v___x_1867_;
goto v___jp_1839_;
}
else
{
lean_object* v_a_1884_; 
lean_dec_ref_known(v___y_1859_, 1);
v_a_1884_ = lean_ctor_get(v___x_1882_, 0);
lean_inc(v_a_1884_);
lean_dec_ref_known(v___x_1882_, 1);
v___y_1840_ = v_a_1884_;
v___y_1841_ = v___y_1866_;
v___y_1842_ = v___y_1862_;
v___y_1843_ = v___y_1860_;
v___y_1844_ = v___y_1865_;
v___y_1845_ = v___y_1863_;
v___y_1846_ = v___y_1861_;
v___y_1847_ = v___y_1864_;
v___y_1848_ = v___x_1857_;
goto v___jp_1839_;
}
}
else
{
lean_object* v_a_1885_; lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1892_; 
lean_dec(v___y_1860_);
lean_dec(v___y_1859_);
lean_dec(v_goal_1819_);
v_a_1885_ = lean_ctor_get(v___x_1882_, 0);
v_isSharedCheck_1892_ = !lean_is_exclusive(v___x_1882_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1887_ = v___x_1882_;
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
else
{
lean_inc(v_a_1885_);
lean_dec(v___x_1882_);
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
}
v___jp_1827_:
{
lean_object* v___x_1837_; lean_object* v___x_1838_; 
v___x_1837_ = l_Lean_Syntax_TSepArray_getElems___redArg(v___y_1836_);
lean_dec_ref(v___y_1836_);
v___x_1838_ = l_Lean_Elab_Tactic_mkGrindParams(v___y_1829_, v___y_1832_, v___x_1837_, v_goal_1819_, v___y_1835_, v___y_1830_, v___y_1833_, v___y_1834_, v___y_1831_, v___y_1828_);
lean_dec_ref(v___x_1837_);
return v___x_1838_;
}
v___jp_1839_:
{
if (lean_obj_tag(v___y_1843_) == 0)
{
lean_object* v___x_1849_; 
v___x_1849_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__0));
v___y_1828_ = v___y_1841_;
v___y_1829_ = v___y_1840_;
v___y_1830_ = v___y_1842_;
v___y_1831_ = v___y_1844_;
v___y_1832_ = v___y_1848_;
v___y_1833_ = v___y_1845_;
v___y_1834_ = v___y_1847_;
v___y_1835_ = v___y_1846_;
v___y_1836_ = v___x_1849_;
goto v___jp_1827_;
}
else
{
lean_object* v_val_1850_; 
v_val_1850_ = lean_ctor_get(v___y_1843_, 0);
lean_inc(v_val_1850_);
lean_dec_ref_known(v___y_1843_, 1);
v___y_1828_ = v___y_1841_;
v___y_1829_ = v___y_1840_;
v___y_1830_ = v___y_1842_;
v___y_1831_ = v___y_1844_;
v___y_1832_ = v___y_1848_;
v___y_1833_ = v___y_1845_;
v___y_1834_ = v___y_1847_;
v___y_1835_ = v___y_1846_;
v___y_1836_ = v_val_1850_;
goto v___jp_1827_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___boxed(lean_object* v_grindStx_1938_, lean_object* v_goal_1939_, lean_object* v_a_1940_, lean_object* v_a_1941_, lean_object* v_a_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_){
_start:
{
lean_object* v_res_1947_; 
v_res_1947_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams(v_grindStx_1938_, v_goal_1939_, v_a_1940_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_);
lean_dec(v_a_1945_);
lean_dec_ref(v_a_1944_);
lean_dec(v_a_1943_);
lean_dec_ref(v_a_1942_);
lean_dec(v_a_1941_);
lean_dec_ref(v_a_1940_);
return v_res_1947_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0(lean_object* v_x_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_){
_start:
{
lean_object* v___x_1961_; lean_object* v___x_1962_; 
v___x_1961_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0___closed__0));
v___x_1962_ = l_Lean_Meta_Sym_Simp_simpArrowTelescope(v___x_1961_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_, v___y_1959_);
return v___x_1962_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0___boxed(lean_object* v_x_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_){
_start:
{
lean_object* v_res_1975_; 
v_res_1975_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0(v_x_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_);
lean_dec(v___y_1973_);
lean_dec_ref(v___y_1972_);
lean_dec(v___y_1971_);
lean_dec_ref(v___y_1970_);
lean_dec(v___y_1969_);
lean_dec_ref(v___y_1968_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec(v___y_1965_);
return v_res_1975_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__1(lean_object* v___f_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_){
_start:
{
lean_object* v___x_1988_; 
lean_inc_ref(v___y_1977_);
v___x_1988_ = l_Lean_Meta_Sym_Simp_simpControl(v___y_1977_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_, v___y_1985_, v___y_1986_);
if (lean_obj_tag(v___x_1988_) == 0)
{
lean_object* v_a_1989_; lean_object* v___x_1990_; 
v_a_1989_ = lean_ctor_get(v___x_1988_, 0);
lean_inc(v_a_1989_);
v___x_1990_ = lean_box(0);
if (lean_obj_tag(v_a_1989_) == 0)
{
uint8_t v_done_1991_; 
v_done_1991_ = lean_ctor_get_uint8(v_a_1989_, 0);
if (v_done_1991_ == 0)
{
uint8_t v_contextDependent_1992_; lean_object* v___x_1993_; 
lean_dec_ref_known(v___x_1988_, 1);
v_contextDependent_1992_ = lean_ctor_get_uint8(v_a_1989_, 1);
lean_dec_ref_known(v_a_1989_, 0);
v___x_1993_ = lean_apply_12(v___f_1976_, v___x_1990_, v___y_1977_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_, v___y_1985_, v___y_1986_, lean_box(0));
if (lean_obj_tag(v___x_1993_) == 0)
{
lean_object* v_a_1994_; uint8_t v___y_1996_; 
v_a_1994_ = lean_ctor_get(v___x_1993_, 0);
lean_inc(v_a_1994_);
if (v_contextDependent_1992_ == 0)
{
lean_dec(v_a_1994_);
return v___x_1993_;
}
else
{
if (lean_obj_tag(v_a_1994_) == 0)
{
uint8_t v_contextDependent_2006_; 
v_contextDependent_2006_ = lean_ctor_get_uint8(v_a_1994_, 1);
v___y_1996_ = v_contextDependent_2006_;
goto v___jp_1995_;
}
else
{
uint8_t v_contextDependent_2007_; 
v_contextDependent_2007_ = lean_ctor_get_uint8(v_a_1994_, sizeof(void*)*2 + 1);
v___y_1996_ = v_contextDependent_2007_;
goto v___jp_1995_;
}
}
v___jp_1995_:
{
if (v___y_1996_ == 0)
{
lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2004_; 
v_isSharedCheck_2004_ = !lean_is_exclusive(v___x_1993_);
if (v_isSharedCheck_2004_ == 0)
{
lean_object* v_unused_2005_; 
v_unused_2005_ = lean_ctor_get(v___x_1993_, 0);
lean_dec(v_unused_2005_);
v___x_1998_ = v___x_1993_;
v_isShared_1999_ = v_isSharedCheck_2004_;
goto v_resetjp_1997_;
}
else
{
lean_dec(v___x_1993_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2004_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
lean_object* v___x_2000_; lean_object* v___x_2002_; 
v___x_2000_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1994_);
if (v_isShared_1999_ == 0)
{
lean_ctor_set(v___x_1998_, 0, v___x_2000_);
v___x_2002_ = v___x_1998_;
goto v_reusejp_2001_;
}
else
{
lean_object* v_reuseFailAlloc_2003_; 
v_reuseFailAlloc_2003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2003_, 0, v___x_2000_);
v___x_2002_ = v_reuseFailAlloc_2003_;
goto v_reusejp_2001_;
}
v_reusejp_2001_:
{
return v___x_2002_;
}
}
}
else
{
lean_dec(v_a_1994_);
return v___x_1993_;
}
}
}
else
{
return v___x_1993_;
}
}
else
{
lean_dec_ref_known(v_a_1989_, 0);
lean_dec(v___y_1986_);
lean_dec_ref(v___y_1985_);
lean_dec(v___y_1984_);
lean_dec_ref(v___y_1983_);
lean_dec(v___y_1982_);
lean_dec_ref(v___y_1981_);
lean_dec(v___y_1980_);
lean_dec_ref(v___y_1979_);
lean_dec(v___y_1978_);
lean_dec_ref(v___y_1977_);
lean_dec_ref(v___f_1976_);
return v___x_1988_;
}
}
else
{
uint8_t v_done_2008_; 
v_done_2008_ = lean_ctor_get_uint8(v_a_1989_, sizeof(void*)*2);
if (v_done_2008_ == 0)
{
lean_object* v_e_x27_2009_; lean_object* v_proof_2010_; uint8_t v_contextDependent_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2061_; 
lean_dec_ref_known(v___x_1988_, 1);
v_e_x27_2009_ = lean_ctor_get(v_a_1989_, 0);
v_proof_2010_ = lean_ctor_get(v_a_1989_, 1);
v_contextDependent_2011_ = lean_ctor_get_uint8(v_a_1989_, sizeof(void*)*2 + 1);
v_isSharedCheck_2061_ = !lean_is_exclusive(v_a_1989_);
if (v_isSharedCheck_2061_ == 0)
{
v___x_2013_ = v_a_1989_;
v_isShared_2014_ = v_isSharedCheck_2061_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_proof_2010_);
lean_inc(v_e_x27_2009_);
lean_dec(v_a_1989_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2061_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v___x_2015_; 
lean_inc(v___y_1986_);
lean_inc_ref(v___y_1985_);
lean_inc(v___y_1984_);
lean_inc_ref(v___y_1983_);
lean_inc(v___y_1982_);
lean_inc_ref(v_e_x27_2009_);
v___x_2015_ = lean_apply_12(v___f_1976_, v___x_1990_, v_e_x27_2009_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_, v___y_1985_, v___y_1986_, lean_box(0));
if (lean_obj_tag(v___x_2015_) == 0)
{
lean_object* v_a_2016_; lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2060_; 
v_a_2016_ = lean_ctor_get(v___x_2015_, 0);
v_isSharedCheck_2060_ = !lean_is_exclusive(v___x_2015_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2018_ = v___x_2015_;
v_isShared_2019_ = v_isSharedCheck_2060_;
goto v_resetjp_2017_;
}
else
{
lean_inc(v_a_2016_);
lean_dec(v___x_2015_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2060_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
if (lean_obj_tag(v_a_2016_) == 0)
{
uint8_t v_done_2020_; uint8_t v_contextDependent_2021_; uint8_t v___y_2023_; 
lean_dec(v___y_1986_);
lean_dec_ref(v___y_1985_);
lean_dec(v___y_1984_);
lean_dec_ref(v___y_1983_);
lean_dec(v___y_1982_);
lean_dec_ref(v___y_1977_);
v_done_2020_ = lean_ctor_get_uint8(v_a_2016_, 0);
v_contextDependent_2021_ = lean_ctor_get_uint8(v_a_2016_, 1);
lean_dec_ref_known(v_a_2016_, 0);
if (v_contextDependent_2011_ == 0)
{
v___y_2023_ = v_contextDependent_2021_;
goto v___jp_2022_;
}
else
{
v___y_2023_ = v_contextDependent_2011_;
goto v___jp_2022_;
}
v___jp_2022_:
{
lean_object* v___x_2025_; 
if (v_isShared_2014_ == 0)
{
v___x_2025_ = v___x_2013_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v_e_x27_2009_);
lean_ctor_set(v_reuseFailAlloc_2029_, 1, v_proof_2010_);
v___x_2025_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
lean_object* v___x_2027_; 
lean_ctor_set_uint8(v___x_2025_, sizeof(void*)*2, v_done_2020_);
lean_ctor_set_uint8(v___x_2025_, sizeof(void*)*2 + 1, v___y_2023_);
if (v_isShared_2019_ == 0)
{
lean_ctor_set(v___x_2018_, 0, v___x_2025_);
v___x_2027_ = v___x_2018_;
goto v_reusejp_2026_;
}
else
{
lean_object* v_reuseFailAlloc_2028_; 
v_reuseFailAlloc_2028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2028_, 0, v___x_2025_);
v___x_2027_ = v_reuseFailAlloc_2028_;
goto v_reusejp_2026_;
}
v_reusejp_2026_:
{
return v___x_2027_;
}
}
}
}
else
{
lean_object* v_e_x27_2030_; lean_object* v_proof_2031_; uint8_t v_done_2032_; uint8_t v_contextDependent_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2059_; 
lean_del_object(v___x_2018_);
lean_del_object(v___x_2013_);
v_e_x27_2030_ = lean_ctor_get(v_a_2016_, 0);
v_proof_2031_ = lean_ctor_get(v_a_2016_, 1);
v_done_2032_ = lean_ctor_get_uint8(v_a_2016_, sizeof(void*)*2);
v_contextDependent_2033_ = lean_ctor_get_uint8(v_a_2016_, sizeof(void*)*2 + 1);
v_isSharedCheck_2059_ = !lean_is_exclusive(v_a_2016_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2035_ = v_a_2016_;
v_isShared_2036_ = v_isSharedCheck_2059_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_proof_2031_);
lean_inc(v_e_x27_2030_);
lean_dec(v_a_2016_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2059_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v___x_2037_; 
lean_inc_ref(v_e_x27_2030_);
v___x_2037_ = l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(v___y_1977_, v_e_x27_2009_, v_proof_2010_, v_e_x27_2030_, v_proof_2031_, v___y_1982_, v___y_1983_, v___y_1984_, v___y_1985_, v___y_1986_);
lean_dec(v___y_1986_);
lean_dec_ref(v___y_1985_);
lean_dec(v___y_1984_);
lean_dec_ref(v___y_1983_);
lean_dec(v___y_1982_);
if (lean_obj_tag(v___x_2037_) == 0)
{
lean_object* v_a_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2050_; 
v_a_2038_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2050_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2040_ = v___x_2037_;
v_isShared_2041_ = v_isSharedCheck_2050_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_a_2038_);
lean_dec(v___x_2037_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2050_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
uint8_t v___y_2043_; 
if (v_contextDependent_2011_ == 0)
{
v___y_2043_ = v_contextDependent_2033_;
goto v___jp_2042_;
}
else
{
v___y_2043_ = v_contextDependent_2011_;
goto v___jp_2042_;
}
v___jp_2042_:
{
lean_object* v___x_2045_; 
if (v_isShared_2036_ == 0)
{
lean_ctor_set(v___x_2035_, 1, v_a_2038_);
v___x_2045_ = v___x_2035_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_e_x27_2030_);
lean_ctor_set(v_reuseFailAlloc_2049_, 1, v_a_2038_);
lean_ctor_set_uint8(v_reuseFailAlloc_2049_, sizeof(void*)*2, v_done_2032_);
v___x_2045_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
lean_object* v___x_2047_; 
lean_ctor_set_uint8(v___x_2045_, sizeof(void*)*2 + 1, v___y_2043_);
if (v_isShared_2041_ == 0)
{
lean_ctor_set(v___x_2040_, 0, v___x_2045_);
v___x_2047_ = v___x_2040_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2048_; 
v_reuseFailAlloc_2048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2048_, 0, v___x_2045_);
v___x_2047_ = v_reuseFailAlloc_2048_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
return v___x_2047_;
}
}
}
}
}
else
{
lean_object* v_a_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2058_; 
lean_del_object(v___x_2035_);
lean_dec_ref(v_e_x27_2030_);
v_a_2051_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2058_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2058_ == 0)
{
v___x_2053_ = v___x_2037_;
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_a_2051_);
lean_dec(v___x_2037_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2056_; 
if (v_isShared_2054_ == 0)
{
v___x_2056_ = v___x_2053_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v_a_2051_);
v___x_2056_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
return v___x_2056_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_2013_);
lean_dec_ref(v_proof_2010_);
lean_dec_ref(v_e_x27_2009_);
lean_dec(v___y_1986_);
lean_dec_ref(v___y_1985_);
lean_dec(v___y_1984_);
lean_dec_ref(v___y_1983_);
lean_dec(v___y_1982_);
lean_dec_ref(v___y_1977_);
return v___x_2015_;
}
}
}
else
{
lean_dec_ref_known(v_a_1989_, 2);
lean_dec(v___y_1986_);
lean_dec_ref(v___y_1985_);
lean_dec(v___y_1984_);
lean_dec_ref(v___y_1983_);
lean_dec(v___y_1982_);
lean_dec_ref(v___y_1981_);
lean_dec(v___y_1980_);
lean_dec_ref(v___y_1979_);
lean_dec(v___y_1978_);
lean_dec_ref(v___y_1977_);
lean_dec_ref(v___f_1976_);
return v___x_1988_;
}
}
}
else
{
lean_dec(v___y_1986_);
lean_dec_ref(v___y_1985_);
lean_dec(v___y_1984_);
lean_dec_ref(v___y_1983_);
lean_dec(v___y_1982_);
lean_dec_ref(v___y_1981_);
lean_dec(v___y_1980_);
lean_dec_ref(v___y_1979_);
lean_dec(v___y_1978_);
lean_dec_ref(v___y_1977_);
lean_dec_ref(v___f_1976_);
return v___x_1988_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__1___boxed(lean_object* v___f_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_){
_start:
{
lean_object* v_res_2074_; 
v_res_2074_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__1(v___f_2062_, v___y_2063_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_);
return v_res_2074_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2(lean_object* v_a_2076_, lean_object* v_x_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_){
_start:
{
lean_object* v___x_2089_; lean_object* v___x_2090_; 
v___x_2089_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___closed__0));
v___x_2090_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_a_2076_, v___x_2089_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_);
return v___x_2090_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___boxed(lean_object* v_a_2091_, lean_object* v_x_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_){
_start:
{
lean_object* v_res_2104_; 
v_res_2104_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2(v_a_2091_, v_x_2092_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_, v___y_2097_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_);
lean_dec(v___y_2102_);
lean_dec_ref(v___y_2101_);
lean_dec(v___y_2100_);
lean_dec_ref(v___y_2099_);
lean_dec(v___y_2098_);
lean_dec_ref(v___y_2097_);
lean_dec(v___y_2096_);
lean_dec_ref(v___y_2095_);
lean_dec(v___y_2094_);
lean_dec_ref(v_a_2091_);
return v_res_2104_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__4(lean_object* v___f_2105_, lean_object* v___x_2106_, lean_object* v___f_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_){
_start:
{
lean_object* v___y_2120_; lean_object* v___y_2121_; uint8_t v___y_2122_; uint8_t v___y_2123_; lean_object* v___y_2127_; lean_object* v___y_2128_; uint8_t v___y_2129_; uint8_t v___y_2130_; lean_object* v___y_2134_; lean_object* v_e_x27_2135_; lean_object* v_proof_2136_; uint8_t v_done_2137_; uint8_t v_contextDependent_2138_; lean_object* v___y_2161_; lean_object* v___y_2162_; uint8_t v___y_2163_; lean_object* v___y_2167_; lean_object* v_a_2168_; lean_object* v___y_2181_; lean_object* v___x_2183_; 
lean_inc_ref(v___y_2108_);
v___x_2183_ = l_Lean_Meta_Sym_Simp_evalGround___redArg(v___x_2106_, v___y_2108_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_);
if (lean_obj_tag(v___x_2183_) == 0)
{
lean_object* v_a_2184_; lean_object* v___x_2185_; 
v_a_2184_ = lean_ctor_get(v___x_2183_, 0);
lean_inc(v_a_2184_);
v___x_2185_ = lean_box(0);
if (lean_obj_tag(v_a_2184_) == 0)
{
uint8_t v_done_2186_; 
v_done_2186_ = lean_ctor_get_uint8(v_a_2184_, 0);
if (v_done_2186_ == 0)
{
uint8_t v_contextDependent_2187_; lean_object* v___x_2188_; 
lean_dec_ref_known(v___x_2183_, 1);
v_contextDependent_2187_ = lean_ctor_get_uint8(v_a_2184_, 1);
lean_dec_ref_known(v_a_2184_, 0);
lean_inc(v___y_2117_);
lean_inc_ref(v___y_2116_);
lean_inc(v___y_2115_);
lean_inc_ref(v___y_2114_);
lean_inc(v___y_2113_);
lean_inc_ref(v___y_2112_);
lean_inc(v___y_2111_);
lean_inc_ref(v___y_2110_);
lean_inc(v___y_2109_);
lean_inc_ref(v___y_2108_);
v___x_2188_ = lean_apply_12(v___f_2107_, v___x_2185_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_, lean_box(0));
if (lean_obj_tag(v___x_2188_) == 0)
{
lean_object* v_a_2189_; uint8_t v___y_2191_; 
v_a_2189_ = lean_ctor_get(v___x_2188_, 0);
lean_inc(v_a_2189_);
if (v_contextDependent_2187_ == 0)
{
v___y_2167_ = v___x_2188_;
v_a_2168_ = v_a_2189_;
goto v___jp_2166_;
}
else
{
if (lean_obj_tag(v_a_2189_) == 0)
{
uint8_t v_contextDependent_2201_; 
v_contextDependent_2201_ = lean_ctor_get_uint8(v_a_2189_, 1);
v___y_2191_ = v_contextDependent_2201_;
goto v___jp_2190_;
}
else
{
uint8_t v_contextDependent_2202_; 
v_contextDependent_2202_ = lean_ctor_get_uint8(v_a_2189_, sizeof(void*)*2 + 1);
v___y_2191_ = v_contextDependent_2202_;
goto v___jp_2190_;
}
}
v___jp_2190_:
{
if (v___y_2191_ == 0)
{
lean_object* v___x_2193_; uint8_t v_isShared_2194_; uint8_t v_isSharedCheck_2199_; 
v_isSharedCheck_2199_ = !lean_is_exclusive(v___x_2188_);
if (v_isSharedCheck_2199_ == 0)
{
lean_object* v_unused_2200_; 
v_unused_2200_ = lean_ctor_get(v___x_2188_, 0);
lean_dec(v_unused_2200_);
v___x_2193_ = v___x_2188_;
v_isShared_2194_ = v_isSharedCheck_2199_;
goto v_resetjp_2192_;
}
else
{
lean_dec(v___x_2188_);
v___x_2193_ = lean_box(0);
v_isShared_2194_ = v_isSharedCheck_2199_;
goto v_resetjp_2192_;
}
v_resetjp_2192_:
{
lean_object* v___x_2195_; lean_object* v___x_2197_; 
v___x_2195_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_2189_);
lean_inc_ref(v___x_2195_);
if (v_isShared_2194_ == 0)
{
lean_ctor_set(v___x_2193_, 0, v___x_2195_);
v___x_2197_ = v___x_2193_;
goto v_reusejp_2196_;
}
else
{
lean_object* v_reuseFailAlloc_2198_; 
v_reuseFailAlloc_2198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2198_, 0, v___x_2195_);
v___x_2197_ = v_reuseFailAlloc_2198_;
goto v_reusejp_2196_;
}
v_reusejp_2196_:
{
v___y_2167_ = v___x_2197_;
v_a_2168_ = v___x_2195_;
goto v___jp_2166_;
}
}
}
else
{
v___y_2167_ = v___x_2188_;
v_a_2168_ = v_a_2189_;
goto v___jp_2166_;
}
}
}
else
{
lean_dec(v___y_2117_);
lean_dec_ref(v___y_2116_);
lean_dec(v___y_2115_);
lean_dec_ref(v___y_2114_);
lean_dec(v___y_2113_);
lean_dec_ref(v___y_2112_);
lean_dec(v___y_2111_);
lean_dec_ref(v___y_2110_);
lean_dec(v___y_2109_);
lean_dec_ref(v___y_2108_);
lean_dec_ref(v___f_2105_);
return v___x_2188_;
}
}
else
{
lean_dec_ref_known(v_a_2184_, 0);
lean_dec_ref(v___f_2107_);
v___y_2181_ = v___x_2183_;
goto v___jp_2180_;
}
}
else
{
uint8_t v_done_2203_; 
v_done_2203_ = lean_ctor_get_uint8(v_a_2184_, sizeof(void*)*2);
if (v_done_2203_ == 0)
{
lean_object* v_e_x27_2204_; lean_object* v_proof_2205_; uint8_t v_contextDependent_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2256_; 
lean_dec_ref_known(v___x_2183_, 1);
v_e_x27_2204_ = lean_ctor_get(v_a_2184_, 0);
v_proof_2205_ = lean_ctor_get(v_a_2184_, 1);
v_contextDependent_2206_ = lean_ctor_get_uint8(v_a_2184_, sizeof(void*)*2 + 1);
v_isSharedCheck_2256_ = !lean_is_exclusive(v_a_2184_);
if (v_isSharedCheck_2256_ == 0)
{
v___x_2208_ = v_a_2184_;
v_isShared_2209_ = v_isSharedCheck_2256_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_proof_2205_);
lean_inc(v_e_x27_2204_);
lean_dec(v_a_2184_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2256_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v___x_2210_; 
lean_inc(v___y_2117_);
lean_inc_ref(v___y_2116_);
lean_inc(v___y_2115_);
lean_inc_ref(v___y_2114_);
lean_inc(v___y_2113_);
lean_inc_ref(v___y_2112_);
lean_inc(v___y_2111_);
lean_inc_ref(v___y_2110_);
lean_inc(v___y_2109_);
lean_inc_ref(v_e_x27_2204_);
v___x_2210_ = lean_apply_12(v___f_2107_, v___x_2185_, v_e_x27_2204_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_, lean_box(0));
if (lean_obj_tag(v___x_2210_) == 0)
{
lean_object* v_a_2211_; lean_object* v___x_2213_; uint8_t v_isShared_2214_; uint8_t v_isSharedCheck_2255_; 
v_a_2211_ = lean_ctor_get(v___x_2210_, 0);
v_isSharedCheck_2255_ = !lean_is_exclusive(v___x_2210_);
if (v_isSharedCheck_2255_ == 0)
{
v___x_2213_ = v___x_2210_;
v_isShared_2214_ = v_isSharedCheck_2255_;
goto v_resetjp_2212_;
}
else
{
lean_inc(v_a_2211_);
lean_dec(v___x_2210_);
v___x_2213_ = lean_box(0);
v_isShared_2214_ = v_isSharedCheck_2255_;
goto v_resetjp_2212_;
}
v_resetjp_2212_:
{
if (lean_obj_tag(v_a_2211_) == 0)
{
uint8_t v_done_2215_; uint8_t v_contextDependent_2216_; uint8_t v___y_2218_; 
v_done_2215_ = lean_ctor_get_uint8(v_a_2211_, 0);
v_contextDependent_2216_ = lean_ctor_get_uint8(v_a_2211_, 1);
lean_dec_ref_known(v_a_2211_, 0);
if (v_contextDependent_2206_ == 0)
{
v___y_2218_ = v_contextDependent_2216_;
goto v___jp_2217_;
}
else
{
v___y_2218_ = v_contextDependent_2206_;
goto v___jp_2217_;
}
v___jp_2217_:
{
lean_object* v___x_2220_; 
lean_inc_ref(v_proof_2205_);
lean_inc_ref(v_e_x27_2204_);
if (v_isShared_2209_ == 0)
{
v___x_2220_ = v___x_2208_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2224_; 
v_reuseFailAlloc_2224_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2224_, 0, v_e_x27_2204_);
lean_ctor_set(v_reuseFailAlloc_2224_, 1, v_proof_2205_);
v___x_2220_ = v_reuseFailAlloc_2224_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
lean_object* v___x_2222_; 
lean_ctor_set_uint8(v___x_2220_, sizeof(void*)*2, v_done_2215_);
lean_ctor_set_uint8(v___x_2220_, sizeof(void*)*2 + 1, v___y_2218_);
if (v_isShared_2214_ == 0)
{
lean_ctor_set(v___x_2213_, 0, v___x_2220_);
v___x_2222_ = v___x_2213_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2223_; 
v_reuseFailAlloc_2223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2223_, 0, v___x_2220_);
v___x_2222_ = v_reuseFailAlloc_2223_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
v___y_2134_ = v___x_2222_;
v_e_x27_2135_ = v_e_x27_2204_;
v_proof_2136_ = v_proof_2205_;
v_done_2137_ = v_done_2215_;
v_contextDependent_2138_ = v___y_2218_;
goto v___jp_2133_;
}
}
}
}
else
{
lean_object* v_e_x27_2225_; lean_object* v_proof_2226_; uint8_t v_done_2227_; uint8_t v_contextDependent_2228_; lean_object* v___x_2230_; uint8_t v_isShared_2231_; uint8_t v_isSharedCheck_2254_; 
lean_del_object(v___x_2213_);
lean_del_object(v___x_2208_);
v_e_x27_2225_ = lean_ctor_get(v_a_2211_, 0);
v_proof_2226_ = lean_ctor_get(v_a_2211_, 1);
v_done_2227_ = lean_ctor_get_uint8(v_a_2211_, sizeof(void*)*2);
v_contextDependent_2228_ = lean_ctor_get_uint8(v_a_2211_, sizeof(void*)*2 + 1);
v_isSharedCheck_2254_ = !lean_is_exclusive(v_a_2211_);
if (v_isSharedCheck_2254_ == 0)
{
v___x_2230_ = v_a_2211_;
v_isShared_2231_ = v_isSharedCheck_2254_;
goto v_resetjp_2229_;
}
else
{
lean_inc(v_proof_2226_);
lean_inc(v_e_x27_2225_);
lean_dec(v_a_2211_);
v___x_2230_ = lean_box(0);
v_isShared_2231_ = v_isSharedCheck_2254_;
goto v_resetjp_2229_;
}
v_resetjp_2229_:
{
lean_object* v___x_2232_; 
lean_inc_ref(v_e_x27_2225_);
lean_inc_ref(v___y_2108_);
v___x_2232_ = l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(v___y_2108_, v_e_x27_2204_, v_proof_2205_, v_e_x27_2225_, v_proof_2226_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_);
if (lean_obj_tag(v___x_2232_) == 0)
{
lean_object* v_a_2233_; lean_object* v___x_2235_; uint8_t v_isShared_2236_; uint8_t v_isSharedCheck_2245_; 
v_a_2233_ = lean_ctor_get(v___x_2232_, 0);
v_isSharedCheck_2245_ = !lean_is_exclusive(v___x_2232_);
if (v_isSharedCheck_2245_ == 0)
{
v___x_2235_ = v___x_2232_;
v_isShared_2236_ = v_isSharedCheck_2245_;
goto v_resetjp_2234_;
}
else
{
lean_inc(v_a_2233_);
lean_dec(v___x_2232_);
v___x_2235_ = lean_box(0);
v_isShared_2236_ = v_isSharedCheck_2245_;
goto v_resetjp_2234_;
}
v_resetjp_2234_:
{
uint8_t v___y_2238_; 
if (v_contextDependent_2206_ == 0)
{
v___y_2238_ = v_contextDependent_2228_;
goto v___jp_2237_;
}
else
{
v___y_2238_ = v_contextDependent_2206_;
goto v___jp_2237_;
}
v___jp_2237_:
{
lean_object* v___x_2240_; 
lean_inc(v_a_2233_);
lean_inc_ref(v_e_x27_2225_);
if (v_isShared_2231_ == 0)
{
lean_ctor_set(v___x_2230_, 1, v_a_2233_);
v___x_2240_ = v___x_2230_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2244_; 
v_reuseFailAlloc_2244_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2244_, 0, v_e_x27_2225_);
lean_ctor_set(v_reuseFailAlloc_2244_, 1, v_a_2233_);
lean_ctor_set_uint8(v_reuseFailAlloc_2244_, sizeof(void*)*2, v_done_2227_);
v___x_2240_ = v_reuseFailAlloc_2244_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
lean_object* v___x_2242_; 
lean_ctor_set_uint8(v___x_2240_, sizeof(void*)*2 + 1, v___y_2238_);
if (v_isShared_2236_ == 0)
{
lean_ctor_set(v___x_2235_, 0, v___x_2240_);
v___x_2242_ = v___x_2235_;
goto v_reusejp_2241_;
}
else
{
lean_object* v_reuseFailAlloc_2243_; 
v_reuseFailAlloc_2243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2243_, 0, v___x_2240_);
v___x_2242_ = v_reuseFailAlloc_2243_;
goto v_reusejp_2241_;
}
v_reusejp_2241_:
{
v___y_2134_ = v___x_2242_;
v_e_x27_2135_ = v_e_x27_2225_;
v_proof_2136_ = v_a_2233_;
v_done_2137_ = v_done_2227_;
v_contextDependent_2138_ = v___y_2238_;
goto v___jp_2133_;
}
}
}
}
}
else
{
lean_object* v_a_2246_; lean_object* v___x_2248_; uint8_t v_isShared_2249_; uint8_t v_isSharedCheck_2253_; 
lean_del_object(v___x_2230_);
lean_dec_ref(v_e_x27_2225_);
lean_dec(v___y_2117_);
lean_dec_ref(v___y_2116_);
lean_dec(v___y_2115_);
lean_dec_ref(v___y_2114_);
lean_dec(v___y_2113_);
lean_dec_ref(v___y_2112_);
lean_dec(v___y_2111_);
lean_dec_ref(v___y_2110_);
lean_dec(v___y_2109_);
lean_dec_ref(v___y_2108_);
lean_dec_ref(v___f_2105_);
v_a_2246_ = lean_ctor_get(v___x_2232_, 0);
v_isSharedCheck_2253_ = !lean_is_exclusive(v___x_2232_);
if (v_isSharedCheck_2253_ == 0)
{
v___x_2248_ = v___x_2232_;
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
else
{
lean_inc(v_a_2246_);
lean_dec(v___x_2232_);
v___x_2248_ = lean_box(0);
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
v_resetjp_2247_:
{
lean_object* v___x_2251_; 
if (v_isShared_2249_ == 0)
{
v___x_2251_ = v___x_2248_;
goto v_reusejp_2250_;
}
else
{
lean_object* v_reuseFailAlloc_2252_; 
v_reuseFailAlloc_2252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2252_, 0, v_a_2246_);
v___x_2251_ = v_reuseFailAlloc_2252_;
goto v_reusejp_2250_;
}
v_reusejp_2250_:
{
return v___x_2251_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_2208_);
lean_dec_ref(v_proof_2205_);
lean_dec_ref(v_e_x27_2204_);
lean_dec(v___y_2117_);
lean_dec_ref(v___y_2116_);
lean_dec(v___y_2115_);
lean_dec_ref(v___y_2114_);
lean_dec(v___y_2113_);
lean_dec_ref(v___y_2112_);
lean_dec(v___y_2111_);
lean_dec_ref(v___y_2110_);
lean_dec(v___y_2109_);
lean_dec_ref(v___y_2108_);
lean_dec_ref(v___f_2105_);
return v___x_2210_;
}
}
}
else
{
lean_dec_ref_known(v_a_2184_, 2);
lean_dec_ref(v___f_2107_);
v___y_2181_ = v___x_2183_;
goto v___jp_2180_;
}
}
}
else
{
lean_dec_ref(v___f_2107_);
v___y_2181_ = v___x_2183_;
goto v___jp_2180_;
}
v___jp_2119_:
{
lean_object* v___x_2124_; lean_object* v___x_2125_; 
v___x_2124_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2124_, 0, v___y_2121_);
lean_ctor_set(v___x_2124_, 1, v___y_2120_);
lean_ctor_set_uint8(v___x_2124_, sizeof(void*)*2, v___y_2122_);
lean_ctor_set_uint8(v___x_2124_, sizeof(void*)*2 + 1, v___y_2123_);
v___x_2125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2125_, 0, v___x_2124_);
return v___x_2125_;
}
v___jp_2126_:
{
lean_object* v___x_2131_; lean_object* v___x_2132_; 
v___x_2131_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2131_, 0, v___y_2128_);
lean_ctor_set(v___x_2131_, 1, v___y_2127_);
lean_ctor_set_uint8(v___x_2131_, sizeof(void*)*2, v___y_2129_);
lean_ctor_set_uint8(v___x_2131_, sizeof(void*)*2 + 1, v___y_2130_);
v___x_2132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2132_, 0, v___x_2131_);
return v___x_2132_;
}
v___jp_2133_:
{
if (v_done_2137_ == 0)
{
lean_object* v___x_2139_; lean_object* v___x_2140_; 
lean_dec_ref(v___y_2134_);
v___x_2139_ = lean_box(0);
lean_inc(v___y_2117_);
lean_inc_ref(v___y_2116_);
lean_inc(v___y_2115_);
lean_inc_ref(v___y_2114_);
lean_inc(v___y_2113_);
lean_inc_ref(v_e_x27_2135_);
v___x_2140_ = lean_apply_12(v___f_2105_, v___x_2139_, v_e_x27_2135_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_, lean_box(0));
if (lean_obj_tag(v___x_2140_) == 0)
{
lean_object* v_a_2141_; 
v_a_2141_ = lean_ctor_get(v___x_2140_, 0);
lean_inc(v_a_2141_);
lean_dec_ref_known(v___x_2140_, 1);
if (lean_obj_tag(v_a_2141_) == 0)
{
lean_dec(v___y_2117_);
lean_dec_ref(v___y_2116_);
lean_dec(v___y_2115_);
lean_dec_ref(v___y_2114_);
lean_dec(v___y_2113_);
lean_dec_ref(v___y_2108_);
if (v_contextDependent_2138_ == 0)
{
uint8_t v_done_2142_; uint8_t v_contextDependent_2143_; 
v_done_2142_ = lean_ctor_get_uint8(v_a_2141_, 0);
v_contextDependent_2143_ = lean_ctor_get_uint8(v_a_2141_, 1);
lean_dec_ref_known(v_a_2141_, 0);
v___y_2120_ = v_proof_2136_;
v___y_2121_ = v_e_x27_2135_;
v___y_2122_ = v_done_2142_;
v___y_2123_ = v_contextDependent_2143_;
goto v___jp_2119_;
}
else
{
uint8_t v_done_2144_; 
v_done_2144_ = lean_ctor_get_uint8(v_a_2141_, 0);
lean_dec_ref_known(v_a_2141_, 0);
v___y_2120_ = v_proof_2136_;
v___y_2121_ = v_e_x27_2135_;
v___y_2122_ = v_done_2144_;
v___y_2123_ = v_contextDependent_2138_;
goto v___jp_2119_;
}
}
else
{
lean_object* v_e_x27_2145_; lean_object* v_proof_2146_; uint8_t v_done_2147_; uint8_t v_contextDependent_2148_; lean_object* v___x_2149_; 
v_e_x27_2145_ = lean_ctor_get(v_a_2141_, 0);
lean_inc_ref_n(v_e_x27_2145_, 2);
v_proof_2146_ = lean_ctor_get(v_a_2141_, 1);
lean_inc_ref(v_proof_2146_);
v_done_2147_ = lean_ctor_get_uint8(v_a_2141_, sizeof(void*)*2);
v_contextDependent_2148_ = lean_ctor_get_uint8(v_a_2141_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_2141_, 2);
v___x_2149_ = l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(v___y_2108_, v_e_x27_2135_, v_proof_2136_, v_e_x27_2145_, v_proof_2146_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_);
lean_dec(v___y_2117_);
lean_dec_ref(v___y_2116_);
lean_dec(v___y_2115_);
lean_dec_ref(v___y_2114_);
lean_dec(v___y_2113_);
if (lean_obj_tag(v___x_2149_) == 0)
{
if (v_contextDependent_2138_ == 0)
{
lean_object* v_a_2150_; 
v_a_2150_ = lean_ctor_get(v___x_2149_, 0);
lean_inc(v_a_2150_);
lean_dec_ref_known(v___x_2149_, 1);
v___y_2127_ = v_a_2150_;
v___y_2128_ = v_e_x27_2145_;
v___y_2129_ = v_done_2147_;
v___y_2130_ = v_contextDependent_2148_;
goto v___jp_2126_;
}
else
{
lean_object* v_a_2151_; 
v_a_2151_ = lean_ctor_get(v___x_2149_, 0);
lean_inc(v_a_2151_);
lean_dec_ref_known(v___x_2149_, 1);
v___y_2127_ = v_a_2151_;
v___y_2128_ = v_e_x27_2145_;
v___y_2129_ = v_done_2147_;
v___y_2130_ = v_contextDependent_2138_;
goto v___jp_2126_;
}
}
else
{
lean_object* v_a_2152_; lean_object* v___x_2154_; uint8_t v_isShared_2155_; uint8_t v_isSharedCheck_2159_; 
lean_dec_ref(v_e_x27_2145_);
v_a_2152_ = lean_ctor_get(v___x_2149_, 0);
v_isSharedCheck_2159_ = !lean_is_exclusive(v___x_2149_);
if (v_isSharedCheck_2159_ == 0)
{
v___x_2154_ = v___x_2149_;
v_isShared_2155_ = v_isSharedCheck_2159_;
goto v_resetjp_2153_;
}
else
{
lean_inc(v_a_2152_);
lean_dec(v___x_2149_);
v___x_2154_ = lean_box(0);
v_isShared_2155_ = v_isSharedCheck_2159_;
goto v_resetjp_2153_;
}
v_resetjp_2153_:
{
lean_object* v___x_2157_; 
if (v_isShared_2155_ == 0)
{
v___x_2157_ = v___x_2154_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v_a_2152_);
v___x_2157_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
return v___x_2157_;
}
}
}
}
}
else
{
lean_dec_ref(v_proof_2136_);
lean_dec_ref(v_e_x27_2135_);
lean_dec(v___y_2117_);
lean_dec_ref(v___y_2116_);
lean_dec(v___y_2115_);
lean_dec_ref(v___y_2114_);
lean_dec(v___y_2113_);
lean_dec_ref(v___y_2108_);
return v___x_2140_;
}
}
else
{
lean_dec_ref(v_proof_2136_);
lean_dec_ref(v_e_x27_2135_);
lean_dec(v___y_2117_);
lean_dec_ref(v___y_2116_);
lean_dec(v___y_2115_);
lean_dec_ref(v___y_2114_);
lean_dec(v___y_2113_);
lean_dec_ref(v___y_2112_);
lean_dec(v___y_2111_);
lean_dec_ref(v___y_2110_);
lean_dec(v___y_2109_);
lean_dec_ref(v___y_2108_);
lean_dec_ref(v___f_2105_);
return v___y_2134_;
}
}
v___jp_2160_:
{
if (v___y_2163_ == 0)
{
lean_object* v___x_2164_; lean_object* v___x_2165_; 
lean_dec_ref(v___y_2161_);
v___x_2164_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v___y_2162_);
v___x_2165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2165_, 0, v___x_2164_);
return v___x_2165_;
}
else
{
lean_dec_ref(v___y_2162_);
return v___y_2161_;
}
}
v___jp_2166_:
{
if (lean_obj_tag(v_a_2168_) == 0)
{
uint8_t v_done_2169_; 
v_done_2169_ = lean_ctor_get_uint8(v_a_2168_, 0);
if (v_done_2169_ == 0)
{
uint8_t v_contextDependent_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
lean_dec_ref(v___y_2167_);
v_contextDependent_2170_ = lean_ctor_get_uint8(v_a_2168_, 1);
lean_dec_ref_known(v_a_2168_, 0);
v___x_2171_ = lean_box(0);
v___x_2172_ = lean_apply_12(v___f_2105_, v___x_2171_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_, lean_box(0));
if (lean_obj_tag(v___x_2172_) == 0)
{
if (v_contextDependent_2170_ == 0)
{
return v___x_2172_;
}
else
{
lean_object* v_a_2173_; 
v_a_2173_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_a_2173_);
if (lean_obj_tag(v_a_2173_) == 0)
{
uint8_t v_contextDependent_2174_; 
v_contextDependent_2174_ = lean_ctor_get_uint8(v_a_2173_, 1);
v___y_2161_ = v___x_2172_;
v___y_2162_ = v_a_2173_;
v___y_2163_ = v_contextDependent_2174_;
goto v___jp_2160_;
}
else
{
uint8_t v_contextDependent_2175_; 
v_contextDependent_2175_ = lean_ctor_get_uint8(v_a_2173_, sizeof(void*)*2 + 1);
v___y_2161_ = v___x_2172_;
v___y_2162_ = v_a_2173_;
v___y_2163_ = v_contextDependent_2175_;
goto v___jp_2160_;
}
}
}
else
{
return v___x_2172_;
}
}
else
{
lean_dec_ref_known(v_a_2168_, 0);
lean_dec(v___y_2117_);
lean_dec_ref(v___y_2116_);
lean_dec(v___y_2115_);
lean_dec_ref(v___y_2114_);
lean_dec(v___y_2113_);
lean_dec_ref(v___y_2112_);
lean_dec(v___y_2111_);
lean_dec_ref(v___y_2110_);
lean_dec(v___y_2109_);
lean_dec_ref(v___y_2108_);
lean_dec_ref(v___f_2105_);
return v___y_2167_;
}
}
else
{
lean_object* v_e_x27_2176_; lean_object* v_proof_2177_; uint8_t v_done_2178_; uint8_t v_contextDependent_2179_; 
v_e_x27_2176_ = lean_ctor_get(v_a_2168_, 0);
lean_inc_ref(v_e_x27_2176_);
v_proof_2177_ = lean_ctor_get(v_a_2168_, 1);
lean_inc_ref(v_proof_2177_);
v_done_2178_ = lean_ctor_get_uint8(v_a_2168_, sizeof(void*)*2);
v_contextDependent_2179_ = lean_ctor_get_uint8(v_a_2168_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_2168_, 2);
v___y_2134_ = v___y_2167_;
v_e_x27_2135_ = v_e_x27_2176_;
v_proof_2136_ = v_proof_2177_;
v_done_2137_ = v_done_2178_;
v_contextDependent_2138_ = v_contextDependent_2179_;
goto v___jp_2133_;
}
}
v___jp_2180_:
{
if (lean_obj_tag(v___y_2181_) == 0)
{
lean_object* v_a_2182_; 
v_a_2182_ = lean_ctor_get(v___y_2181_, 0);
lean_inc(v_a_2182_);
v___y_2167_ = v___y_2181_;
v_a_2168_ = v_a_2182_;
goto v___jp_2166_;
}
else
{
lean_dec(v___y_2117_);
lean_dec_ref(v___y_2116_);
lean_dec(v___y_2115_);
lean_dec_ref(v___y_2114_);
lean_dec(v___y_2113_);
lean_dec_ref(v___y_2112_);
lean_dec(v___y_2111_);
lean_dec_ref(v___y_2110_);
lean_dec(v___y_2109_);
lean_dec_ref(v___y_2108_);
lean_dec_ref(v___f_2105_);
return v___y_2181_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__4___boxed(lean_object* v___f_2257_, lean_object* v___x_2258_, lean_object* v___f_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_){
_start:
{
lean_object* v_res_2271_; 
v_res_2271_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__4(v___f_2257_, v___x_2258_, v___f_2259_, v___y_2260_, v___y_2261_, v___y_2262_, v___y_2263_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_, v___y_2268_, v___y_2269_);
lean_dec(v___x_2258_);
return v_res_2271_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__3(lean_object* v___x_2272_, lean_object* v___f_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_){
_start:
{
lean_object* v___x_2285_; 
lean_inc_ref(v___y_2274_);
v___x_2285_ = l_Lean_Meta_Sym_Simp_evalGround___redArg(v___x_2272_, v___y_2274_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_);
if (lean_obj_tag(v___x_2285_) == 0)
{
lean_object* v_a_2286_; lean_object* v___x_2287_; 
v_a_2286_ = lean_ctor_get(v___x_2285_, 0);
lean_inc(v_a_2286_);
v___x_2287_ = lean_box(0);
if (lean_obj_tag(v_a_2286_) == 0)
{
uint8_t v_done_2288_; 
v_done_2288_ = lean_ctor_get_uint8(v_a_2286_, 0);
if (v_done_2288_ == 0)
{
uint8_t v_contextDependent_2289_; lean_object* v___x_2290_; 
lean_dec_ref_known(v___x_2285_, 1);
v_contextDependent_2289_ = lean_ctor_get_uint8(v_a_2286_, 1);
lean_dec_ref_known(v_a_2286_, 0);
v___x_2290_ = lean_apply_12(v___f_2273_, v___x_2287_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_, lean_box(0));
if (lean_obj_tag(v___x_2290_) == 0)
{
lean_object* v_a_2291_; uint8_t v___y_2293_; 
v_a_2291_ = lean_ctor_get(v___x_2290_, 0);
lean_inc(v_a_2291_);
if (v_contextDependent_2289_ == 0)
{
lean_dec(v_a_2291_);
return v___x_2290_;
}
else
{
if (lean_obj_tag(v_a_2291_) == 0)
{
uint8_t v_contextDependent_2303_; 
v_contextDependent_2303_ = lean_ctor_get_uint8(v_a_2291_, 1);
v___y_2293_ = v_contextDependent_2303_;
goto v___jp_2292_;
}
else
{
uint8_t v_contextDependent_2304_; 
v_contextDependent_2304_ = lean_ctor_get_uint8(v_a_2291_, sizeof(void*)*2 + 1);
v___y_2293_ = v_contextDependent_2304_;
goto v___jp_2292_;
}
}
v___jp_2292_:
{
if (v___y_2293_ == 0)
{
lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2301_; 
v_isSharedCheck_2301_ = !lean_is_exclusive(v___x_2290_);
if (v_isSharedCheck_2301_ == 0)
{
lean_object* v_unused_2302_; 
v_unused_2302_ = lean_ctor_get(v___x_2290_, 0);
lean_dec(v_unused_2302_);
v___x_2295_ = v___x_2290_;
v_isShared_2296_ = v_isSharedCheck_2301_;
goto v_resetjp_2294_;
}
else
{
lean_dec(v___x_2290_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2301_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
lean_object* v___x_2297_; lean_object* v___x_2299_; 
v___x_2297_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_2291_);
if (v_isShared_2296_ == 0)
{
lean_ctor_set(v___x_2295_, 0, v___x_2297_);
v___x_2299_ = v___x_2295_;
goto v_reusejp_2298_;
}
else
{
lean_object* v_reuseFailAlloc_2300_; 
v_reuseFailAlloc_2300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2300_, 0, v___x_2297_);
v___x_2299_ = v_reuseFailAlloc_2300_;
goto v_reusejp_2298_;
}
v_reusejp_2298_:
{
return v___x_2299_;
}
}
}
else
{
lean_dec(v_a_2291_);
return v___x_2290_;
}
}
}
else
{
return v___x_2290_;
}
}
else
{
lean_dec_ref_known(v_a_2286_, 0);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
lean_dec(v___y_2275_);
lean_dec_ref(v___y_2274_);
lean_dec_ref(v___f_2273_);
return v___x_2285_;
}
}
else
{
uint8_t v_done_2305_; 
v_done_2305_ = lean_ctor_get_uint8(v_a_2286_, sizeof(void*)*2);
if (v_done_2305_ == 0)
{
lean_object* v_e_x27_2306_; lean_object* v_proof_2307_; uint8_t v_contextDependent_2308_; lean_object* v___x_2310_; uint8_t v_isShared_2311_; uint8_t v_isSharedCheck_2358_; 
lean_dec_ref_known(v___x_2285_, 1);
v_e_x27_2306_ = lean_ctor_get(v_a_2286_, 0);
v_proof_2307_ = lean_ctor_get(v_a_2286_, 1);
v_contextDependent_2308_ = lean_ctor_get_uint8(v_a_2286_, sizeof(void*)*2 + 1);
v_isSharedCheck_2358_ = !lean_is_exclusive(v_a_2286_);
if (v_isSharedCheck_2358_ == 0)
{
v___x_2310_ = v_a_2286_;
v_isShared_2311_ = v_isSharedCheck_2358_;
goto v_resetjp_2309_;
}
else
{
lean_inc(v_proof_2307_);
lean_inc(v_e_x27_2306_);
lean_dec(v_a_2286_);
v___x_2310_ = lean_box(0);
v_isShared_2311_ = v_isSharedCheck_2358_;
goto v_resetjp_2309_;
}
v_resetjp_2309_:
{
lean_object* v___x_2312_; 
lean_inc(v___y_2283_);
lean_inc_ref(v___y_2282_);
lean_inc(v___y_2281_);
lean_inc_ref(v___y_2280_);
lean_inc(v___y_2279_);
lean_inc_ref(v_e_x27_2306_);
v___x_2312_ = lean_apply_12(v___f_2273_, v___x_2287_, v_e_x27_2306_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_, lean_box(0));
if (lean_obj_tag(v___x_2312_) == 0)
{
lean_object* v_a_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2357_; 
v_a_2313_ = lean_ctor_get(v___x_2312_, 0);
v_isSharedCheck_2357_ = !lean_is_exclusive(v___x_2312_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2315_ = v___x_2312_;
v_isShared_2316_ = v_isSharedCheck_2357_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_a_2313_);
lean_dec(v___x_2312_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2357_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
if (lean_obj_tag(v_a_2313_) == 0)
{
uint8_t v_done_2317_; uint8_t v_contextDependent_2318_; uint8_t v___y_2320_; 
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2274_);
v_done_2317_ = lean_ctor_get_uint8(v_a_2313_, 0);
v_contextDependent_2318_ = lean_ctor_get_uint8(v_a_2313_, 1);
lean_dec_ref_known(v_a_2313_, 0);
if (v_contextDependent_2308_ == 0)
{
v___y_2320_ = v_contextDependent_2318_;
goto v___jp_2319_;
}
else
{
v___y_2320_ = v_contextDependent_2308_;
goto v___jp_2319_;
}
v___jp_2319_:
{
lean_object* v___x_2322_; 
if (v_isShared_2311_ == 0)
{
v___x_2322_ = v___x_2310_;
goto v_reusejp_2321_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v_e_x27_2306_);
lean_ctor_set(v_reuseFailAlloc_2326_, 1, v_proof_2307_);
v___x_2322_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2321_;
}
v_reusejp_2321_:
{
lean_object* v___x_2324_; 
lean_ctor_set_uint8(v___x_2322_, sizeof(void*)*2, v_done_2317_);
lean_ctor_set_uint8(v___x_2322_, sizeof(void*)*2 + 1, v___y_2320_);
if (v_isShared_2316_ == 0)
{
lean_ctor_set(v___x_2315_, 0, v___x_2322_);
v___x_2324_ = v___x_2315_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v___x_2322_);
v___x_2324_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
return v___x_2324_;
}
}
}
}
else
{
lean_object* v_e_x27_2327_; lean_object* v_proof_2328_; uint8_t v_done_2329_; uint8_t v_contextDependent_2330_; lean_object* v___x_2332_; uint8_t v_isShared_2333_; uint8_t v_isSharedCheck_2356_; 
lean_del_object(v___x_2315_);
lean_del_object(v___x_2310_);
v_e_x27_2327_ = lean_ctor_get(v_a_2313_, 0);
v_proof_2328_ = lean_ctor_get(v_a_2313_, 1);
v_done_2329_ = lean_ctor_get_uint8(v_a_2313_, sizeof(void*)*2);
v_contextDependent_2330_ = lean_ctor_get_uint8(v_a_2313_, sizeof(void*)*2 + 1);
v_isSharedCheck_2356_ = !lean_is_exclusive(v_a_2313_);
if (v_isSharedCheck_2356_ == 0)
{
v___x_2332_ = v_a_2313_;
v_isShared_2333_ = v_isSharedCheck_2356_;
goto v_resetjp_2331_;
}
else
{
lean_inc(v_proof_2328_);
lean_inc(v_e_x27_2327_);
lean_dec(v_a_2313_);
v___x_2332_ = lean_box(0);
v_isShared_2333_ = v_isSharedCheck_2356_;
goto v_resetjp_2331_;
}
v_resetjp_2331_:
{
lean_object* v___x_2334_; 
lean_inc_ref(v_e_x27_2327_);
v___x_2334_ = l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(v___y_2274_, v_e_x27_2306_, v_proof_2307_, v_e_x27_2327_, v_proof_2328_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec(v___y_2279_);
if (lean_obj_tag(v___x_2334_) == 0)
{
lean_object* v_a_2335_; lean_object* v___x_2337_; uint8_t v_isShared_2338_; uint8_t v_isSharedCheck_2347_; 
v_a_2335_ = lean_ctor_get(v___x_2334_, 0);
v_isSharedCheck_2347_ = !lean_is_exclusive(v___x_2334_);
if (v_isSharedCheck_2347_ == 0)
{
v___x_2337_ = v___x_2334_;
v_isShared_2338_ = v_isSharedCheck_2347_;
goto v_resetjp_2336_;
}
else
{
lean_inc(v_a_2335_);
lean_dec(v___x_2334_);
v___x_2337_ = lean_box(0);
v_isShared_2338_ = v_isSharedCheck_2347_;
goto v_resetjp_2336_;
}
v_resetjp_2336_:
{
uint8_t v___y_2340_; 
if (v_contextDependent_2308_ == 0)
{
v___y_2340_ = v_contextDependent_2330_;
goto v___jp_2339_;
}
else
{
v___y_2340_ = v_contextDependent_2308_;
goto v___jp_2339_;
}
v___jp_2339_:
{
lean_object* v___x_2342_; 
if (v_isShared_2333_ == 0)
{
lean_ctor_set(v___x_2332_, 1, v_a_2335_);
v___x_2342_ = v___x_2332_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v_e_x27_2327_);
lean_ctor_set(v_reuseFailAlloc_2346_, 1, v_a_2335_);
lean_ctor_set_uint8(v_reuseFailAlloc_2346_, sizeof(void*)*2, v_done_2329_);
v___x_2342_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
lean_object* v___x_2344_; 
lean_ctor_set_uint8(v___x_2342_, sizeof(void*)*2 + 1, v___y_2340_);
if (v_isShared_2338_ == 0)
{
lean_ctor_set(v___x_2337_, 0, v___x_2342_);
v___x_2344_ = v___x_2337_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v___x_2342_);
v___x_2344_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
return v___x_2344_;
}
}
}
}
}
else
{
lean_object* v_a_2348_; lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2355_; 
lean_del_object(v___x_2332_);
lean_dec_ref(v_e_x27_2327_);
v_a_2348_ = lean_ctor_get(v___x_2334_, 0);
v_isSharedCheck_2355_ = !lean_is_exclusive(v___x_2334_);
if (v_isSharedCheck_2355_ == 0)
{
v___x_2350_ = v___x_2334_;
v_isShared_2351_ = v_isSharedCheck_2355_;
goto v_resetjp_2349_;
}
else
{
lean_inc(v_a_2348_);
lean_dec(v___x_2334_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2355_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
lean_object* v___x_2353_; 
if (v_isShared_2351_ == 0)
{
v___x_2353_ = v___x_2350_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v_a_2348_);
v___x_2353_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
return v___x_2353_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_2310_);
lean_dec_ref(v_proof_2307_);
lean_dec_ref(v_e_x27_2306_);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2274_);
return v___x_2312_;
}
}
}
else
{
lean_dec_ref_known(v_a_2286_, 2);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
lean_dec(v___y_2275_);
lean_dec_ref(v___y_2274_);
lean_dec_ref(v___f_2273_);
return v___x_2285_;
}
}
}
else
{
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
lean_dec(v___y_2275_);
lean_dec_ref(v___y_2274_);
lean_dec_ref(v___f_2273_);
return v___x_2285_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__3___boxed(lean_object* v___x_2359_, lean_object* v___f_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_){
_start:
{
lean_object* v_res_2372_; 
v_res_2372_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__3(v___x_2359_, v___f_2360_, v___y_2361_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_, v___y_2368_, v___y_2369_, v___y_2370_);
lean_dec(v___x_2359_);
return v_res_2372_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___redArg(lean_object* v_msg_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_){
_start:
{
lean_object* v_ref_2379_; lean_object* v___x_2380_; lean_object* v_a_2381_; lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2389_; 
v_ref_2379_ = lean_ctor_get(v___y_2376_, 5);
v___x_2380_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__1(v_msg_2373_, v___y_2374_, v___y_2375_, v___y_2376_, v___y_2377_);
v_a_2381_ = lean_ctor_get(v___x_2380_, 0);
v_isSharedCheck_2389_ = !lean_is_exclusive(v___x_2380_);
if (v_isSharedCheck_2389_ == 0)
{
v___x_2383_ = v___x_2380_;
v_isShared_2384_ = v_isSharedCheck_2389_;
goto v_resetjp_2382_;
}
else
{
lean_inc(v_a_2381_);
lean_dec(v___x_2380_);
v___x_2383_ = lean_box(0);
v_isShared_2384_ = v_isSharedCheck_2389_;
goto v_resetjp_2382_;
}
v_resetjp_2382_:
{
lean_object* v___x_2385_; lean_object* v___x_2387_; 
lean_inc(v_ref_2379_);
v___x_2385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2385_, 0, v_ref_2379_);
lean_ctor_set(v___x_2385_, 1, v_a_2381_);
if (v_isShared_2384_ == 0)
{
lean_ctor_set_tag(v___x_2383_, 1);
lean_ctor_set(v___x_2383_, 0, v___x_2385_);
v___x_2387_ = v___x_2383_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v___x_2385_);
v___x_2387_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
return v___x_2387_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___redArg___boxed(lean_object* v_msg_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_){
_start:
{
lean_object* v_res_2396_; 
v_res_2396_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___redArg(v_msg_2390_, v___y_2391_, v___y_2392_, v___y_2393_, v___y_2394_);
lean_dec(v___y_2394_);
lean_dec_ref(v___y_2393_);
lean_dec(v___y_2392_);
lean_dec_ref(v___y_2391_);
return v_res_2396_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___redArg(lean_object* v_as_2397_, size_t v_sz_2398_, size_t v_i_2399_, lean_object* v_b_2400_){
_start:
{
uint8_t v___x_2402_; 
v___x_2402_ = lean_usize_dec_lt(v_i_2399_, v_sz_2398_);
if (v___x_2402_ == 0)
{
lean_object* v___x_2403_; 
v___x_2403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2403_, 0, v_b_2400_);
return v___x_2403_;
}
else
{
lean_object* v_a_2404_; lean_object* v___x_2405_; size_t v___x_2406_; size_t v___x_2407_; 
v_a_2404_ = lean_array_uget_borrowed(v_as_2397_, v_i_2399_);
lean_inc(v_a_2404_);
v___x_2405_ = l_Lean_Meta_Sym_Simp_Theorems_insert(v_b_2400_, v_a_2404_);
v___x_2406_ = ((size_t)1ULL);
v___x_2407_ = lean_usize_add(v_i_2399_, v___x_2406_);
v_i_2399_ = v___x_2407_;
v_b_2400_ = v___x_2405_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___redArg___boxed(lean_object* v_as_2409_, lean_object* v_sz_2410_, lean_object* v_i_2411_, lean_object* v_b_2412_, lean_object* v___y_2413_){
_start:
{
size_t v_sz_boxed_2414_; size_t v_i_boxed_2415_; lean_object* v_res_2416_; 
v_sz_boxed_2414_ = lean_unbox_usize(v_sz_2410_);
lean_dec(v_sz_2410_);
v_i_boxed_2415_ = lean_unbox_usize(v_i_2411_);
lean_dec(v_i_2411_);
v_res_2416_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___redArg(v_as_2409_, v_sz_boxed_2414_, v_i_boxed_2415_, v_b_2412_);
lean_dec_ref(v_as_2409_);
return v_res_2416_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__1(lean_object* v___x_2417_, lean_object* v_as_2418_, size_t v_sz_2419_, size_t v_i_2420_, lean_object* v_b_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_){
_start:
{
lean_object* v_a_2428_; uint8_t v___x_2432_; 
v___x_2432_ = lean_usize_dec_lt(v_i_2420_, v_sz_2419_);
if (v___x_2432_ == 0)
{
lean_object* v___x_2433_; 
v___x_2433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2433_, 0, v_b_2421_);
return v___x_2433_;
}
else
{
lean_object* v_a_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; 
v_a_2434_ = lean_array_uget_borrowed(v_as_2418_, v_i_2420_);
v___x_2435_ = l_Lean_TSyntax_getId(v_a_2434_);
v___x_2436_ = l_Lean_LocalContext_findFromUserName_x3f(v___x_2417_, v___x_2435_);
lean_dec(v___x_2435_);
if (lean_obj_tag(v___x_2436_) == 1)
{
lean_object* v_val_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; 
v_val_2437_ = lean_ctor_get(v___x_2436_, 0);
lean_inc(v_val_2437_);
lean_dec_ref_known(v___x_2436_, 1);
v___x_2438_ = l_Lean_LocalDecl_toExpr(v_val_2437_);
v___x_2439_ = l_Lean_Meta_Sym_Simp_mkTheoremFromExpr(v___x_2438_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_);
if (lean_obj_tag(v___x_2439_) == 0)
{
lean_object* v_a_2440_; lean_object* v___x_2441_; 
v_a_2440_ = lean_ctor_get(v___x_2439_, 0);
lean_inc(v_a_2440_);
lean_dec_ref_known(v___x_2439_, 1);
v___x_2441_ = lean_array_push(v_b_2421_, v_a_2440_);
v_a_2428_ = v___x_2441_;
goto v___jp_2427_;
}
else
{
lean_object* v_a_2442_; lean_object* v___x_2444_; uint8_t v_isShared_2445_; uint8_t v_isSharedCheck_2449_; 
lean_dec_ref(v_b_2421_);
v_a_2442_ = lean_ctor_get(v___x_2439_, 0);
v_isSharedCheck_2449_ = !lean_is_exclusive(v___x_2439_);
if (v_isSharedCheck_2449_ == 0)
{
v___x_2444_ = v___x_2439_;
v_isShared_2445_ = v_isSharedCheck_2449_;
goto v_resetjp_2443_;
}
else
{
lean_inc(v_a_2442_);
lean_dec(v___x_2439_);
v___x_2444_ = lean_box(0);
v_isShared_2445_ = v_isSharedCheck_2449_;
goto v_resetjp_2443_;
}
v_resetjp_2443_:
{
lean_object* v___x_2447_; 
if (v_isShared_2445_ == 0)
{
v___x_2447_ = v___x_2444_;
goto v_reusejp_2446_;
}
else
{
lean_object* v_reuseFailAlloc_2448_; 
v_reuseFailAlloc_2448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2448_, 0, v_a_2442_);
v___x_2447_ = v_reuseFailAlloc_2448_;
goto v_reusejp_2446_;
}
v_reusejp_2446_:
{
return v___x_2447_;
}
}
}
}
else
{
lean_object* v___x_2450_; 
lean_dec(v___x_2436_);
lean_inc(v_a_2434_);
v___x_2450_ = l_Lean_realizeGlobalConstNoOverload(v_a_2434_, v___y_2424_, v___y_2425_);
if (lean_obj_tag(v___x_2450_) == 0)
{
lean_object* v_a_2451_; lean_object* v___x_2452_; 
v_a_2451_ = lean_ctor_get(v___x_2450_, 0);
lean_inc(v_a_2451_);
lean_dec_ref_known(v___x_2450_, 1);
v___x_2452_ = l_Lean_Meta_Sym_Simp_mkTheoremFromDecl(v_a_2451_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_);
if (lean_obj_tag(v___x_2452_) == 0)
{
lean_object* v_a_2453_; lean_object* v___x_2454_; 
v_a_2453_ = lean_ctor_get(v___x_2452_, 0);
lean_inc(v_a_2453_);
lean_dec_ref_known(v___x_2452_, 1);
v___x_2454_ = lean_array_push(v_b_2421_, v_a_2453_);
v_a_2428_ = v___x_2454_;
goto v___jp_2427_;
}
else
{
lean_object* v_a_2455_; lean_object* v___x_2457_; uint8_t v_isShared_2458_; uint8_t v_isSharedCheck_2462_; 
lean_dec_ref(v_b_2421_);
v_a_2455_ = lean_ctor_get(v___x_2452_, 0);
v_isSharedCheck_2462_ = !lean_is_exclusive(v___x_2452_);
if (v_isSharedCheck_2462_ == 0)
{
v___x_2457_ = v___x_2452_;
v_isShared_2458_ = v_isSharedCheck_2462_;
goto v_resetjp_2456_;
}
else
{
lean_inc(v_a_2455_);
lean_dec(v___x_2452_);
v___x_2457_ = lean_box(0);
v_isShared_2458_ = v_isSharedCheck_2462_;
goto v_resetjp_2456_;
}
v_resetjp_2456_:
{
lean_object* v___x_2460_; 
if (v_isShared_2458_ == 0)
{
v___x_2460_ = v___x_2457_;
goto v_reusejp_2459_;
}
else
{
lean_object* v_reuseFailAlloc_2461_; 
v_reuseFailAlloc_2461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2461_, 0, v_a_2455_);
v___x_2460_ = v_reuseFailAlloc_2461_;
goto v_reusejp_2459_;
}
v_reusejp_2459_:
{
return v___x_2460_;
}
}
}
}
else
{
lean_object* v_a_2463_; lean_object* v___x_2465_; uint8_t v_isShared_2466_; uint8_t v_isSharedCheck_2470_; 
lean_dec_ref(v_b_2421_);
v_a_2463_ = lean_ctor_get(v___x_2450_, 0);
v_isSharedCheck_2470_ = !lean_is_exclusive(v___x_2450_);
if (v_isSharedCheck_2470_ == 0)
{
v___x_2465_ = v___x_2450_;
v_isShared_2466_ = v_isSharedCheck_2470_;
goto v_resetjp_2464_;
}
else
{
lean_inc(v_a_2463_);
lean_dec(v___x_2450_);
v___x_2465_ = lean_box(0);
v_isShared_2466_ = v_isSharedCheck_2470_;
goto v_resetjp_2464_;
}
v_resetjp_2464_:
{
lean_object* v___x_2468_; 
if (v_isShared_2466_ == 0)
{
v___x_2468_ = v___x_2465_;
goto v_reusejp_2467_;
}
else
{
lean_object* v_reuseFailAlloc_2469_; 
v_reuseFailAlloc_2469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2469_, 0, v_a_2463_);
v___x_2468_ = v_reuseFailAlloc_2469_;
goto v_reusejp_2467_;
}
v_reusejp_2467_:
{
return v___x_2468_;
}
}
}
}
}
v___jp_2427_:
{
size_t v___x_2429_; size_t v___x_2430_; 
v___x_2429_ = ((size_t)1ULL);
v___x_2430_ = lean_usize_add(v_i_2420_, v___x_2429_);
v_i_2420_ = v___x_2430_;
v_b_2421_ = v_a_2428_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__1___boxed(lean_object* v___x_2471_, lean_object* v_as_2472_, lean_object* v_sz_2473_, lean_object* v_i_2474_, lean_object* v_b_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_){
_start:
{
size_t v_sz_boxed_2481_; size_t v_i_boxed_2482_; lean_object* v_res_2483_; 
v_sz_boxed_2481_ = lean_unbox_usize(v_sz_2473_);
lean_dec(v_sz_2473_);
v_i_boxed_2482_ = lean_unbox_usize(v_i_2474_);
lean_dec(v_i_2474_);
v_res_2483_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__1(v___x_2471_, v_as_2472_, v_sz_boxed_2481_, v_i_boxed_2482_, v_b_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_);
lean_dec(v___y_2479_);
lean_dec_ref(v___y_2478_);
lean_dec(v___y_2477_);
lean_dec_ref(v___y_2476_);
lean_dec_ref(v_as_2472_);
lean_dec_ref(v___x_2471_);
return v_res_2483_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__2(void){
_start:
{
lean_object* v___x_2487_; 
v___x_2487_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2487_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__3(void){
_start:
{
lean_object* v___x_2488_; lean_object* v___x_2489_; 
v___x_2488_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__2, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__2);
v___x_2489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2489_, 0, v___x_2488_);
return v___x_2489_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__6(void){
_start:
{
lean_object* v___x_2493_; lean_object* v___x_2494_; 
v___x_2493_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__5));
v___x_2494_ = l_Lean_stringToMessageData(v___x_2493_);
return v___x_2494_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts(lean_object* v_variantId_x3f_2495_, lean_object* v_extraIds_x3f_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_, lean_object* v_a_2499_, lean_object* v_a_2500_){
_start:
{
lean_object* v___f_2502_; lean_object* v_post_2504_; lean_object* v_extraThms_2508_; lean_object* v___y_2509_; lean_object* v___y_2510_; lean_object* v___y_2511_; lean_object* v___y_2512_; lean_object* v___y_2545_; lean_object* v___y_2546_; lean_object* v___y_2547_; lean_object* v___y_2548_; lean_object* v___y_2565_; 
v___f_2502_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__1));
if (lean_obj_tag(v_variantId_x3f_2495_) == 0)
{
lean_object* v___x_2577_; 
v___x_2577_ = lean_box(0);
v___y_2565_ = v___x_2577_;
goto v___jp_2564_;
}
else
{
lean_object* v_val_2578_; lean_object* v___x_2579_; 
v_val_2578_ = lean_ctor_get(v_variantId_x3f_2495_, 0);
v___x_2579_ = l_Lean_TSyntax_getId(v_val_2578_);
v___y_2565_ = v___x_2579_;
goto v___jp_2564_;
}
v___jp_2503_:
{
lean_object* v___x_2505_; lean_object* v___x_2506_; 
v___x_2505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2505_, 0, v___f_2502_);
lean_ctor_set(v___x_2505_, 1, v_post_2504_);
v___x_2506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2506_, 0, v___x_2505_);
return v___x_2506_;
}
v___jp_2507_:
{
lean_object* v___x_2513_; 
v___x_2513_ = l_Lean_Meta_Sym_Simp_getSymSimpTheorems___redArg(v___y_2512_);
if (lean_obj_tag(v___x_2513_) == 0)
{
lean_object* v_a_2514_; lean_object* v___f_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; uint8_t v___x_2519_; 
v_a_2514_ = lean_ctor_get(v___x_2513_, 0);
lean_inc(v_a_2514_);
lean_dec_ref_known(v___x_2513_, 1);
v___f_2515_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___boxed), 13, 1);
lean_closure_set(v___f_2515_, 0, v_a_2514_);
v___x_2516_ = lean_unsigned_to_nat(255u);
v___x_2517_ = lean_array_get_size(v_extraThms_2508_);
v___x_2518_ = lean_unsigned_to_nat(0u);
v___x_2519_ = lean_nat_dec_eq(v___x_2517_, v___x_2518_);
if (v___x_2519_ == 0)
{
lean_object* v___x_2520_; size_t v_sz_2521_; size_t v___x_2522_; lean_object* v___x_2523_; 
v___x_2520_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__3, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__3);
v_sz_2521_ = lean_array_size(v_extraThms_2508_);
v___x_2522_ = ((size_t)0ULL);
v___x_2523_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___redArg(v_extraThms_2508_, v_sz_2521_, v___x_2522_, v___x_2520_);
lean_dec_ref(v_extraThms_2508_);
if (lean_obj_tag(v___x_2523_) == 0)
{
lean_object* v_a_2524_; lean_object* v___f_2525_; lean_object* v___f_2526_; 
v_a_2524_ = lean_ctor_get(v___x_2523_, 0);
lean_inc(v_a_2524_);
lean_dec_ref_known(v___x_2523_, 1);
v___f_2525_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___boxed), 13, 1);
lean_closure_set(v___f_2525_, 0, v_a_2524_);
v___f_2526_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__4___boxed), 14, 3);
lean_closure_set(v___f_2526_, 0, v___f_2525_);
lean_closure_set(v___f_2526_, 1, v___x_2516_);
lean_closure_set(v___f_2526_, 2, v___f_2515_);
v_post_2504_ = v___f_2526_;
goto v___jp_2503_;
}
else
{
lean_object* v_a_2527_; lean_object* v___x_2529_; uint8_t v_isShared_2530_; uint8_t v_isSharedCheck_2534_; 
lean_dec_ref(v___f_2515_);
v_a_2527_ = lean_ctor_get(v___x_2523_, 0);
v_isSharedCheck_2534_ = !lean_is_exclusive(v___x_2523_);
if (v_isSharedCheck_2534_ == 0)
{
v___x_2529_ = v___x_2523_;
v_isShared_2530_ = v_isSharedCheck_2534_;
goto v_resetjp_2528_;
}
else
{
lean_inc(v_a_2527_);
lean_dec(v___x_2523_);
v___x_2529_ = lean_box(0);
v_isShared_2530_ = v_isSharedCheck_2534_;
goto v_resetjp_2528_;
}
v_resetjp_2528_:
{
lean_object* v___x_2532_; 
if (v_isShared_2530_ == 0)
{
v___x_2532_ = v___x_2529_;
goto v_reusejp_2531_;
}
else
{
lean_object* v_reuseFailAlloc_2533_; 
v_reuseFailAlloc_2533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2533_, 0, v_a_2527_);
v___x_2532_ = v_reuseFailAlloc_2533_;
goto v_reusejp_2531_;
}
v_reusejp_2531_:
{
return v___x_2532_;
}
}
}
}
else
{
lean_object* v___f_2535_; 
lean_dec_ref(v_extraThms_2508_);
v___f_2535_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__3___boxed), 13, 2);
lean_closure_set(v___f_2535_, 0, v___x_2516_);
lean_closure_set(v___f_2535_, 1, v___f_2515_);
v_post_2504_ = v___f_2535_;
goto v___jp_2503_;
}
}
else
{
lean_object* v_a_2536_; lean_object* v___x_2538_; uint8_t v_isShared_2539_; uint8_t v_isSharedCheck_2543_; 
lean_dec_ref(v_extraThms_2508_);
v_a_2536_ = lean_ctor_get(v___x_2513_, 0);
v_isSharedCheck_2543_ = !lean_is_exclusive(v___x_2513_);
if (v_isSharedCheck_2543_ == 0)
{
v___x_2538_ = v___x_2513_;
v_isShared_2539_ = v_isSharedCheck_2543_;
goto v_resetjp_2537_;
}
else
{
lean_inc(v_a_2536_);
lean_dec(v___x_2513_);
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
v___jp_2544_:
{
lean_object* v_extraThms_2549_; 
v_extraThms_2549_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__4));
if (lean_obj_tag(v_extraIds_x3f_2496_) == 1)
{
lean_object* v_val_2550_; lean_object* v_lctx_2551_; size_t v_sz_2552_; size_t v___x_2553_; lean_object* v___x_2554_; 
v_val_2550_ = lean_ctor_get(v_extraIds_x3f_2496_, 0);
v_lctx_2551_ = lean_ctor_get(v___y_2545_, 2);
v_sz_2552_ = lean_array_size(v_val_2550_);
v___x_2553_ = ((size_t)0ULL);
v___x_2554_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__1(v_lctx_2551_, v_val_2550_, v_sz_2552_, v___x_2553_, v_extraThms_2549_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_);
if (lean_obj_tag(v___x_2554_) == 0)
{
lean_object* v_a_2555_; 
v_a_2555_ = lean_ctor_get(v___x_2554_, 0);
lean_inc(v_a_2555_);
lean_dec_ref_known(v___x_2554_, 1);
v_extraThms_2508_ = v_a_2555_;
v___y_2509_ = v___y_2545_;
v___y_2510_ = v___y_2546_;
v___y_2511_ = v___y_2547_;
v___y_2512_ = v___y_2548_;
goto v___jp_2507_;
}
else
{
lean_object* v_a_2556_; lean_object* v___x_2558_; uint8_t v_isShared_2559_; uint8_t v_isSharedCheck_2563_; 
v_a_2556_ = lean_ctor_get(v___x_2554_, 0);
v_isSharedCheck_2563_ = !lean_is_exclusive(v___x_2554_);
if (v_isSharedCheck_2563_ == 0)
{
v___x_2558_ = v___x_2554_;
v_isShared_2559_ = v_isSharedCheck_2563_;
goto v_resetjp_2557_;
}
else
{
lean_inc(v_a_2556_);
lean_dec(v___x_2554_);
v___x_2558_ = lean_box(0);
v_isShared_2559_ = v_isSharedCheck_2563_;
goto v_resetjp_2557_;
}
v_resetjp_2557_:
{
lean_object* v___x_2561_; 
if (v_isShared_2559_ == 0)
{
v___x_2561_ = v___x_2558_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2562_; 
v_reuseFailAlloc_2562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2562_, 0, v_a_2556_);
v___x_2561_ = v_reuseFailAlloc_2562_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
return v___x_2561_;
}
}
}
}
else
{
v_extraThms_2508_ = v_extraThms_2549_;
v___y_2509_ = v___y_2545_;
v___y_2510_ = v___y_2546_;
v___y_2511_ = v___y_2547_;
v___y_2512_ = v___y_2548_;
goto v___jp_2507_;
}
}
v___jp_2564_:
{
uint8_t v___x_2566_; 
v___x_2566_ = l_Lean_Name_isAnonymous(v___y_2565_);
lean_dec(v___y_2565_);
if (v___x_2566_ == 0)
{
lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v_a_2569_; lean_object* v___x_2571_; uint8_t v_isShared_2572_; uint8_t v_isSharedCheck_2576_; 
v___x_2567_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__6, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__6);
v___x_2568_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___redArg(v___x_2567_, v_a_2497_, v_a_2498_, v_a_2499_, v_a_2500_);
v_a_2569_ = lean_ctor_get(v___x_2568_, 0);
v_isSharedCheck_2576_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2576_ == 0)
{
v___x_2571_ = v___x_2568_;
v_isShared_2572_ = v_isSharedCheck_2576_;
goto v_resetjp_2570_;
}
else
{
lean_inc(v_a_2569_);
lean_dec(v___x_2568_);
v___x_2571_ = lean_box(0);
v_isShared_2572_ = v_isSharedCheck_2576_;
goto v_resetjp_2570_;
}
v_resetjp_2570_:
{
lean_object* v___x_2574_; 
if (v_isShared_2572_ == 0)
{
v___x_2574_ = v___x_2571_;
goto v_reusejp_2573_;
}
else
{
lean_object* v_reuseFailAlloc_2575_; 
v_reuseFailAlloc_2575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2575_, 0, v_a_2569_);
v___x_2574_ = v_reuseFailAlloc_2575_;
goto v_reusejp_2573_;
}
v_reusejp_2573_:
{
return v___x_2574_;
}
}
}
else
{
v___y_2545_ = v_a_2497_;
v___y_2546_ = v_a_2498_;
v___y_2547_ = v_a_2499_;
v___y_2548_ = v_a_2500_;
goto v___jp_2544_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___boxed(lean_object* v_variantId_x3f_2580_, lean_object* v_extraIds_x3f_2581_, lean_object* v_a_2582_, lean_object* v_a_2583_, lean_object* v_a_2584_, lean_object* v_a_2585_, lean_object* v_a_2586_){
_start:
{
lean_object* v_res_2587_; 
v_res_2587_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts(v_variantId_x3f_2580_, v_extraIds_x3f_2581_, v_a_2582_, v_a_2583_, v_a_2584_, v_a_2585_);
lean_dec(v_a_2585_);
lean_dec_ref(v_a_2584_);
lean_dec(v_a_2583_);
lean_dec_ref(v_a_2582_);
lean_dec(v_extraIds_x3f_2581_);
lean_dec(v_variantId_x3f_2580_);
return v_res_2587_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0(lean_object* v_as_2588_, size_t v_sz_2589_, size_t v_i_2590_, lean_object* v_b_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_){
_start:
{
lean_object* v___x_2597_; 
v___x_2597_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___redArg(v_as_2588_, v_sz_2589_, v_i_2590_, v_b_2591_);
return v___x_2597_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___boxed(lean_object* v_as_2598_, lean_object* v_sz_2599_, lean_object* v_i_2600_, lean_object* v_b_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_){
_start:
{
size_t v_sz_boxed_2607_; size_t v_i_boxed_2608_; lean_object* v_res_2609_; 
v_sz_boxed_2607_ = lean_unbox_usize(v_sz_2599_);
lean_dec(v_sz_2599_);
v_i_boxed_2608_ = lean_unbox_usize(v_i_2600_);
lean_dec(v_i_2600_);
v_res_2609_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0(v_as_2598_, v_sz_boxed_2607_, v_i_boxed_2608_, v_b_2601_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_);
lean_dec(v___y_2605_);
lean_dec_ref(v___y_2604_);
lean_dec(v___y_2603_);
lean_dec_ref(v___y_2602_);
lean_dec_ref(v_as_2598_);
return v_res_2609_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2(lean_object* v_00_u03b1_2610_, lean_object* v_msg_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_){
_start:
{
lean_object* v___x_2617_; 
v___x_2617_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___redArg(v_msg_2611_, v___y_2612_, v___y_2613_, v___y_2614_, v___y_2615_);
return v___x_2617_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___boxed(lean_object* v_00_u03b1_2618_, lean_object* v_msg_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_){
_start:
{
lean_object* v_res_2625_; 
v_res_2625_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2(v_00_u03b1_2618_, v_msg_2619_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_);
lean_dec(v___y_2623_);
lean_dec_ref(v___y_2622_);
lean_dec(v___y_2621_);
lean_dec_ref(v___y_2620_);
return v_res_2625_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions_spec__0(size_t v_sz_2626_, size_t v_i_2627_, lean_object* v_bs_2628_){
_start:
{
uint8_t v___x_2629_; 
v___x_2629_ = lean_usize_dec_lt(v_i_2627_, v_sz_2626_);
if (v___x_2629_ == 0)
{
return v_bs_2628_;
}
else
{
lean_object* v_v_2630_; lean_object* v___x_2631_; lean_object* v_bs_x27_2632_; size_t v___x_2633_; size_t v___x_2634_; lean_object* v___x_2635_; 
v_v_2630_ = lean_array_uget(v_bs_2628_, v_i_2627_);
v___x_2631_ = lean_unsigned_to_nat(0u);
v_bs_x27_2632_ = lean_array_uset(v_bs_2628_, v_i_2627_, v___x_2631_);
v___x_2633_ = ((size_t)1ULL);
v___x_2634_ = lean_usize_add(v_i_2627_, v___x_2633_);
v___x_2635_ = lean_array_uset(v_bs_x27_2632_, v_i_2627_, v_v_2630_);
v_i_2627_ = v___x_2634_;
v_bs_2628_ = v___x_2635_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions_spec__0___boxed(lean_object* v_sz_2637_, lean_object* v_i_2638_, lean_object* v_bs_2639_){
_start:
{
size_t v_sz_boxed_2640_; size_t v_i_boxed_2641_; lean_object* v_res_2642_; 
v_sz_boxed_2640_ = lean_unbox_usize(v_sz_2637_);
lean_dec(v_sz_2637_);
v_i_boxed_2641_ = lean_unbox_usize(v_i_2638_);
lean_dec(v_i_2638_);
v_res_2642_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions_spec__0(v_sz_boxed_2640_, v_i_boxed_2641_, v_bs_2639_);
return v_res_2642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions(lean_object* v_simpClause_2643_, lean_object* v_a_2644_, lean_object* v_a_2645_, lean_object* v_a_2646_, lean_object* v_a_2647_){
_start:
{
lean_object* v___y_2650_; lean_object* v___y_2651_; lean_object* v___x_2670_; lean_object* v___x_2671_; uint8_t v___x_2672_; 
v___x_2670_ = l_Lean_Syntax_getNumArgs(v_simpClause_2643_);
v___x_2671_ = lean_unsigned_to_nat(0u);
v___x_2672_ = lean_nat_dec_eq(v___x_2670_, v___x_2671_);
lean_dec(v___x_2670_);
if (v___x_2672_ == 0)
{
lean_object* v___x_2673_; lean_object* v___y_2675_; lean_object* v___y_2676_; lean_object* v___y_2684_; lean_object* v___x_2690_; lean_object* v___x_2694_; uint8_t v___x_2695_; 
v___x_2673_ = lean_unsigned_to_nat(1u);
v___x_2690_ = l_Lean_Syntax_getArg(v_simpClause_2643_, v___x_2673_);
v___x_2694_ = l_Lean_Syntax_getNumArgs(v___x_2690_);
v___x_2695_ = lean_nat_dec_eq(v___x_2694_, v___x_2671_);
lean_dec(v___x_2694_);
if (v___x_2695_ == 0)
{
goto v___jp_2691_;
}
else
{
if (v___x_2672_ == 0)
{
lean_object* v___x_2696_; 
lean_dec(v___x_2690_);
v___x_2696_ = lean_box(0);
v___y_2684_ = v___x_2696_;
goto v___jp_2683_;
}
else
{
goto v___jp_2691_;
}
}
v___jp_2674_:
{
lean_object* v___x_2677_; lean_object* v___x_2678_; size_t v_sz_2679_; size_t v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; 
v___x_2677_ = l_Lean_Syntax_getArg(v___y_2675_, v___x_2673_);
lean_dec(v___y_2675_);
v___x_2678_ = l_Lean_Syntax_getSepArgs(v___x_2677_);
lean_dec(v___x_2677_);
v_sz_2679_ = lean_array_size(v___x_2678_);
v___x_2680_ = ((size_t)0ULL);
v___x_2681_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions_spec__0(v_sz_2679_, v___x_2680_, v___x_2678_);
v___x_2682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2682_, 0, v___x_2681_);
v___y_2650_ = v___y_2676_;
v___y_2651_ = v___x_2682_;
goto v___jp_2649_;
}
v___jp_2683_:
{
lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; uint8_t v___x_2688_; 
v___x_2685_ = lean_unsigned_to_nat(2u);
v___x_2686_ = l_Lean_Syntax_getArg(v_simpClause_2643_, v___x_2685_);
v___x_2687_ = l_Lean_Syntax_getNumArgs(v___x_2686_);
v___x_2688_ = lean_nat_dec_eq(v___x_2687_, v___x_2671_);
lean_dec(v___x_2687_);
if (v___x_2688_ == 0)
{
v___y_2675_ = v___x_2686_;
v___y_2676_ = v___y_2684_;
goto v___jp_2674_;
}
else
{
if (v___x_2672_ == 0)
{
lean_object* v___x_2689_; 
lean_dec(v___x_2686_);
v___x_2689_ = lean_box(0);
v___y_2650_ = v___y_2684_;
v___y_2651_ = v___x_2689_;
goto v___jp_2649_;
}
else
{
v___y_2675_ = v___x_2686_;
v___y_2676_ = v___y_2684_;
goto v___jp_2674_;
}
}
}
v___jp_2691_:
{
lean_object* v___x_2692_; lean_object* v___x_2693_; 
v___x_2692_ = l_Lean_Syntax_getArg(v___x_2690_, v___x_2671_);
lean_dec(v___x_2690_);
v___x_2693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2693_, 0, v___x_2692_);
v___y_2684_ = v___x_2693_;
goto v___jp_2683_;
}
}
else
{
lean_object* v___x_2697_; lean_object* v___x_2698_; 
v___x_2697_ = lean_box(0);
v___x_2698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2698_, 0, v___x_2697_);
return v___x_2698_;
}
v___jp_2649_:
{
lean_object* v___x_2652_; 
v___x_2652_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts(v___y_2650_, v___y_2651_, v_a_2644_, v_a_2645_, v_a_2646_, v_a_2647_);
lean_dec(v___y_2651_);
lean_dec(v___y_2650_);
if (lean_obj_tag(v___x_2652_) == 0)
{
lean_object* v_a_2653_; lean_object* v___x_2655_; uint8_t v_isShared_2656_; uint8_t v_isSharedCheck_2661_; 
v_a_2653_ = lean_ctor_get(v___x_2652_, 0);
v_isSharedCheck_2661_ = !lean_is_exclusive(v___x_2652_);
if (v_isSharedCheck_2661_ == 0)
{
v___x_2655_ = v___x_2652_;
v_isShared_2656_ = v_isSharedCheck_2661_;
goto v_resetjp_2654_;
}
else
{
lean_inc(v_a_2653_);
lean_dec(v___x_2652_);
v___x_2655_ = lean_box(0);
v_isShared_2656_ = v_isSharedCheck_2661_;
goto v_resetjp_2654_;
}
v_resetjp_2654_:
{
lean_object* v___x_2657_; lean_object* v___x_2659_; 
v___x_2657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2657_, 0, v_a_2653_);
if (v_isShared_2656_ == 0)
{
lean_ctor_set(v___x_2655_, 0, v___x_2657_);
v___x_2659_ = v___x_2655_;
goto v_reusejp_2658_;
}
else
{
lean_object* v_reuseFailAlloc_2660_; 
v_reuseFailAlloc_2660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2660_, 0, v___x_2657_);
v___x_2659_ = v_reuseFailAlloc_2660_;
goto v_reusejp_2658_;
}
v_reusejp_2658_:
{
return v___x_2659_;
}
}
}
else
{
lean_object* v_a_2662_; lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2669_; 
v_a_2662_ = lean_ctor_get(v___x_2652_, 0);
v_isSharedCheck_2669_ = !lean_is_exclusive(v___x_2652_);
if (v_isSharedCheck_2669_ == 0)
{
v___x_2664_ = v___x_2652_;
v_isShared_2665_ = v_isSharedCheck_2669_;
goto v_resetjp_2663_;
}
else
{
lean_inc(v_a_2662_);
lean_dec(v___x_2652_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2669_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
lean_object* v___x_2667_; 
if (v_isShared_2665_ == 0)
{
v___x_2667_ = v___x_2664_;
goto v_reusejp_2666_;
}
else
{
lean_object* v_reuseFailAlloc_2668_; 
v_reuseFailAlloc_2668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2668_, 0, v_a_2662_);
v___x_2667_ = v_reuseFailAlloc_2668_;
goto v_reusejp_2666_;
}
v_reusejp_2666_:
{
return v___x_2667_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions___boxed(lean_object* v_simpClause_2699_, lean_object* v_a_2700_, lean_object* v_a_2701_, lean_object* v_a_2702_, lean_object* v_a_2703_, lean_object* v_a_2704_){
_start:
{
lean_object* v_res_2705_; 
v_res_2705_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions(v_simpClause_2699_, v_a_2700_, v_a_2701_, v_a_2702_, v_a_2703_);
lean_dec(v_a_2703_);
lean_dec_ref(v_a_2702_);
lean_dec(v_a_2701_);
lean_dec_ref(v_a_2700_);
lean_dec(v_simpClause_2699_);
return v_res_2705_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac(lean_object* v_goal_2725_, lean_object* v_withPreTac_2726_, lean_object* v_a_2727_, lean_object* v_a_2728_, lean_object* v_a_2729_, lean_object* v_a_2730_, lean_object* v_a_2731_, lean_object* v_a_2732_){
_start:
{
uint8_t v___x_2734_; uint8_t v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; 
v___x_2734_ = 0;
v___x_2735_ = 1;
v___x_2736_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac___closed__0));
v___x_2737_ = l_Lean_Meta_Grind_mkDefaultParams(v___x_2736_, v_a_2729_, v_a_2730_, v_a_2731_, v_a_2732_);
if (lean_obj_tag(v___x_2737_) == 0)
{
lean_object* v_a_2738_; lean_object* v___x_2740_; uint8_t v_isShared_2741_; uint8_t v_isSharedCheck_2787_; 
v_a_2738_ = lean_ctor_get(v___x_2737_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v___x_2737_);
if (v_isSharedCheck_2787_ == 0)
{
v___x_2740_ = v___x_2737_;
v_isShared_2741_ = v_isSharedCheck_2787_;
goto v_resetjp_2739_;
}
else
{
lean_inc(v_a_2738_);
lean_dec(v___x_2737_);
v___x_2740_ = lean_box(0);
v_isShared_2741_ = v_isSharedCheck_2787_;
goto v_resetjp_2739_;
}
v_resetjp_2739_:
{
uint8_t v_fst_2743_; lean_object* v_snd_2744_; lean_object* v___x_2772_; lean_object* v___x_2773_; uint8_t v___x_2774_; 
v___x_2772_ = l_Lean_Syntax_getNumArgs(v_withPreTac_2726_);
v___x_2773_ = lean_unsigned_to_nat(0u);
v___x_2774_ = lean_nat_dec_eq(v___x_2772_, v___x_2773_);
lean_dec(v___x_2772_);
if (v___x_2774_ == 0)
{
lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; uint8_t v___x_2779_; 
v___x_2775_ = lean_unsigned_to_nat(1u);
v___x_2776_ = l_Lean_Syntax_getArg(v_withPreTac_2726_, v___x_2775_);
lean_inc(v___x_2776_);
v___x_2777_ = l_Lean_Syntax_getKind(v___x_2776_);
v___x_2778_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac___closed__2));
v___x_2779_ = lean_name_eq(v___x_2777_, v___x_2778_);
lean_dec(v___x_2777_);
if (v___x_2779_ == 0)
{
v_fst_2743_ = v___x_2734_;
v_snd_2744_ = v___x_2776_;
goto v___jp_2742_;
}
else
{
lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; 
v___x_2780_ = l_Lean_Syntax_getArg(v___x_2776_, v___x_2775_);
lean_dec(v___x_2776_);
v___x_2781_ = l_Lean_Syntax_getArg(v___x_2780_, v___x_2773_);
lean_dec(v___x_2780_);
v___x_2782_ = l_Lean_Syntax_getArg(v___x_2781_, v___x_2773_);
lean_dec(v___x_2781_);
v___x_2783_ = l_Lean_Syntax_getArg(v___x_2782_, v___x_2773_);
lean_dec(v___x_2782_);
v_fst_2743_ = v___x_2735_;
v_snd_2744_ = v___x_2783_;
goto v___jp_2742_;
}
}
else
{
lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; 
lean_del_object(v___x_2740_);
lean_dec(v_goal_2725_);
v___x_2784_ = lean_box(0);
v___x_2785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2785_, 0, v___x_2784_);
lean_ctor_set(v___x_2785_, 1, v_a_2738_);
v___x_2786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2786_, 0, v___x_2785_);
return v___x_2786_;
}
v___jp_2742_:
{
lean_object* v___x_2745_; lean_object* v___x_2746_; uint8_t v___x_2747_; 
lean_inc(v_snd_2744_);
v___x_2745_ = l_Lean_Syntax_getKind(v_snd_2744_);
v___x_2746_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams___closed__2));
v___x_2747_ = lean_name_eq(v___x_2745_, v___x_2746_);
lean_dec(v___x_2745_);
if (v___x_2747_ == 0)
{
lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2751_; 
lean_dec(v_goal_2725_);
v___x_2748_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2748_, 0, v_snd_2744_);
v___x_2749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2749_, 0, v___x_2748_);
lean_ctor_set(v___x_2749_, 1, v_a_2738_);
if (v_isShared_2741_ == 0)
{
lean_ctor_set(v___x_2740_, 0, v___x_2749_);
v___x_2751_ = v___x_2740_;
goto v_reusejp_2750_;
}
else
{
lean_object* v_reuseFailAlloc_2752_; 
v_reuseFailAlloc_2752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2752_, 0, v___x_2749_);
v___x_2751_ = v_reuseFailAlloc_2752_;
goto v_reusejp_2750_;
}
v_reusejp_2750_:
{
return v___x_2751_;
}
}
else
{
lean_object* v___x_2753_; 
lean_del_object(v___x_2740_);
lean_dec(v_a_2738_);
v___x_2753_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabGrindParams(v_snd_2744_, v_goal_2725_, v_a_2727_, v_a_2728_, v_a_2729_, v_a_2730_, v_a_2731_, v_a_2732_);
if (lean_obj_tag(v___x_2753_) == 0)
{
lean_object* v_a_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2763_; 
v_a_2754_ = lean_ctor_get(v___x_2753_, 0);
v_isSharedCheck_2763_ = !lean_is_exclusive(v___x_2753_);
if (v_isSharedCheck_2763_ == 0)
{
v___x_2756_ = v___x_2753_;
v_isShared_2757_ = v_isSharedCheck_2763_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_a_2754_);
lean_dec(v___x_2753_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2763_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2761_; 
v___x_2758_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2758_, 0, v_fst_2743_);
v___x_2759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2759_, 0, v___x_2758_);
lean_ctor_set(v___x_2759_, 1, v_a_2754_);
if (v_isShared_2757_ == 0)
{
lean_ctor_set(v___x_2756_, 0, v___x_2759_);
v___x_2761_ = v___x_2756_;
goto v_reusejp_2760_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v___x_2759_);
v___x_2761_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2760_;
}
v_reusejp_2760_:
{
return v___x_2761_;
}
}
}
else
{
lean_object* v_a_2764_; lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2771_; 
v_a_2764_ = lean_ctor_get(v___x_2753_, 0);
v_isSharedCheck_2771_ = !lean_is_exclusive(v___x_2753_);
if (v_isSharedCheck_2771_ == 0)
{
v___x_2766_ = v___x_2753_;
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
else
{
lean_inc(v_a_2764_);
lean_dec(v___x_2753_);
v___x_2766_ = lean_box(0);
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
v_resetjp_2765_:
{
lean_object* v___x_2769_; 
if (v_isShared_2767_ == 0)
{
v___x_2769_ = v___x_2766_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2770_; 
v_reuseFailAlloc_2770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2770_, 0, v_a_2764_);
v___x_2769_ = v_reuseFailAlloc_2770_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
return v___x_2769_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2788_; lean_object* v___x_2790_; uint8_t v_isShared_2791_; uint8_t v_isSharedCheck_2795_; 
lean_dec(v_goal_2725_);
v_a_2788_ = lean_ctor_get(v___x_2737_, 0);
v_isSharedCheck_2795_ = !lean_is_exclusive(v___x_2737_);
if (v_isSharedCheck_2795_ == 0)
{
v___x_2790_ = v___x_2737_;
v_isShared_2791_ = v_isSharedCheck_2795_;
goto v_resetjp_2789_;
}
else
{
lean_inc(v_a_2788_);
lean_dec(v___x_2737_);
v___x_2790_ = lean_box(0);
v_isShared_2791_ = v_isSharedCheck_2795_;
goto v_resetjp_2789_;
}
v_resetjp_2789_:
{
lean_object* v___x_2793_; 
if (v_isShared_2791_ == 0)
{
v___x_2793_ = v___x_2790_;
goto v_reusejp_2792_;
}
else
{
lean_object* v_reuseFailAlloc_2794_; 
v_reuseFailAlloc_2794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2794_, 0, v_a_2788_);
v___x_2793_ = v_reuseFailAlloc_2794_;
goto v_reusejp_2792_;
}
v_reusejp_2792_:
{
return v___x_2793_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac___boxed(lean_object* v_goal_2796_, lean_object* v_withPreTac_2797_, lean_object* v_a_2798_, lean_object* v_a_2799_, lean_object* v_a_2800_, lean_object* v_a_2801_, lean_object* v_a_2802_, lean_object* v_a_2803_, lean_object* v_a_2804_){
_start:
{
lean_object* v_res_2805_; 
v_res_2805_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac(v_goal_2796_, v_withPreTac_2797_, v_a_2798_, v_a_2799_, v_a_2800_, v_a_2801_, v_a_2802_, v_a_2803_);
lean_dec(v_a_2803_);
lean_dec_ref(v_a_2802_);
lean_dec(v_a_2801_);
lean_dec_ref(v_a_2800_);
lean_dec(v_a_2799_);
lean_dec_ref(v_a_2798_);
lean_dec(v_withPreTac_2797_);
return v_res_2805_;
}
}
static lean_object* _init_l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; 
v___x_2807_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__0));
v___x_2808_ = lean_string_utf8_byte_size(v___x_2807_);
return v___x_2808_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg(lean_object* v_s_2809_){
_start:
{
lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; uint8_t v___x_2813_; 
v___x_2810_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__0));
v___x_2811_ = lean_string_utf8_byte_size(v_s_2809_);
v___x_2812_ = lean_obj_once(&l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__1, &l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__1_once, _init_l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__1);
v___x_2813_ = lean_nat_dec_le(v___x_2812_, v___x_2811_);
if (v___x_2813_ == 0)
{
lean_object* v___x_2814_; 
lean_dec_ref(v_s_2809_);
v___x_2814_ = lean_box(0);
return v___x_2814_;
}
else
{
lean_object* v___x_2815_; uint8_t v___x_2816_; 
v___x_2815_ = lean_unsigned_to_nat(0u);
v___x_2816_ = lean_string_memcmp(v_s_2809_, v___x_2810_, v___x_2815_, v___x_2815_, v___x_2812_);
if (v___x_2816_ == 0)
{
lean_object* v___x_2817_; 
lean_dec_ref(v_s_2809_);
v___x_2817_ = lean_box(0);
return v___x_2817_;
}
else
{
lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; 
lean_inc_ref(v_s_2809_);
v___x_2818_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2818_, 0, v_s_2809_);
lean_ctor_set(v___x_2818_, 1, v___x_2815_);
lean_ctor_set(v___x_2818_, 2, v___x_2811_);
v___x_2819_ = l_String_Slice_pos_x21(v___x_2818_, v___x_2812_);
lean_dec_ref_known(v___x_2818_, 3);
v___x_2820_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2820_, 0, v_s_2809_);
lean_ctor_set(v___x_2820_, 1, v___x_2819_);
lean_ctor_set(v___x_2820_, 2, v___x_2811_);
v___x_2821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2821_, 0, v___x_2820_);
return v___x_2821_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2(lean_object* v_s_2822_, lean_object* v_pat_2823_){
_start:
{
lean_object* v___x_2824_; 
v___x_2824_ = l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg(v_s_2822_);
return v___x_2824_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___boxed(lean_object* v_s_2825_, lean_object* v_pat_2826_){
_start:
{
lean_object* v_res_2827_; 
v_res_2827_ = l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2(v_s_2825_, v_pat_2826_);
lean_dec_ref(v_pat_2826_);
return v_res_2827_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg(lean_object* v_a_2828_, lean_object* v_x_2829_){
_start:
{
if (lean_obj_tag(v_x_2829_) == 0)
{
uint8_t v___x_2830_; 
v___x_2830_ = 0;
return v___x_2830_;
}
else
{
lean_object* v_key_2831_; lean_object* v_tail_2832_; uint8_t v___x_2833_; 
v_key_2831_ = lean_ctor_get(v_x_2829_, 0);
v_tail_2832_ = lean_ctor_get(v_x_2829_, 2);
v___x_2833_ = lean_nat_dec_eq(v_key_2831_, v_a_2828_);
if (v___x_2833_ == 0)
{
v_x_2829_ = v_tail_2832_;
goto _start;
}
else
{
return v___x_2833_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg___boxed(lean_object* v_a_2835_, lean_object* v_x_2836_){
_start:
{
uint8_t v_res_2837_; lean_object* v_r_2838_; 
v_res_2837_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg(v_a_2835_, v_x_2836_);
lean_dec(v_x_2836_);
lean_dec(v_a_2835_);
v_r_2838_ = lean_box(v_res_2837_);
return v_r_2838_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(lean_object* v_m_2839_, lean_object* v_a_2840_){
_start:
{
lean_object* v_buckets_2841_; lean_object* v___x_2842_; uint64_t v___x_2843_; uint64_t v___x_2844_; uint64_t v___x_2845_; uint64_t v_fold_2846_; uint64_t v___x_2847_; uint64_t v___x_2848_; uint64_t v___x_2849_; size_t v___x_2850_; size_t v___x_2851_; size_t v___x_2852_; size_t v___x_2853_; size_t v___x_2854_; lean_object* v___x_2855_; uint8_t v___x_2856_; 
v_buckets_2841_ = lean_ctor_get(v_m_2839_, 1);
v___x_2842_ = lean_array_get_size(v_buckets_2841_);
v___x_2843_ = lean_uint64_of_nat(v_a_2840_);
v___x_2844_ = 32ULL;
v___x_2845_ = lean_uint64_shift_right(v___x_2843_, v___x_2844_);
v_fold_2846_ = lean_uint64_xor(v___x_2843_, v___x_2845_);
v___x_2847_ = 16ULL;
v___x_2848_ = lean_uint64_shift_right(v_fold_2846_, v___x_2847_);
v___x_2849_ = lean_uint64_xor(v_fold_2846_, v___x_2848_);
v___x_2850_ = lean_uint64_to_usize(v___x_2849_);
v___x_2851_ = lean_usize_of_nat(v___x_2842_);
v___x_2852_ = ((size_t)1ULL);
v___x_2853_ = lean_usize_sub(v___x_2851_, v___x_2852_);
v___x_2854_ = lean_usize_land(v___x_2850_, v___x_2853_);
v___x_2855_ = lean_array_uget_borrowed(v_buckets_2841_, v___x_2854_);
v___x_2856_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg(v_a_2840_, v___x_2855_);
return v___x_2856_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg___boxed(lean_object* v_m_2857_, lean_object* v_a_2858_){
_start:
{
uint8_t v_res_2859_; lean_object* v_r_2860_; 
v_res_2859_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(v_m_2857_, v_a_2858_);
lean_dec(v_a_2858_);
lean_dec_ref(v_m_2857_);
v_r_2860_ = lean_box(v_res_2859_);
return v_r_2860_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__2___redArg(lean_object* v_a_2861_, lean_object* v_b_2862_, lean_object* v_x_2863_){
_start:
{
if (lean_obj_tag(v_x_2863_) == 0)
{
lean_dec(v_b_2862_);
lean_dec(v_a_2861_);
return v_x_2863_;
}
else
{
lean_object* v_key_2864_; lean_object* v_value_2865_; lean_object* v_tail_2866_; lean_object* v___x_2868_; uint8_t v_isShared_2869_; uint8_t v_isSharedCheck_2878_; 
v_key_2864_ = lean_ctor_get(v_x_2863_, 0);
v_value_2865_ = lean_ctor_get(v_x_2863_, 1);
v_tail_2866_ = lean_ctor_get(v_x_2863_, 2);
v_isSharedCheck_2878_ = !lean_is_exclusive(v_x_2863_);
if (v_isSharedCheck_2878_ == 0)
{
v___x_2868_ = v_x_2863_;
v_isShared_2869_ = v_isSharedCheck_2878_;
goto v_resetjp_2867_;
}
else
{
lean_inc(v_tail_2866_);
lean_inc(v_value_2865_);
lean_inc(v_key_2864_);
lean_dec(v_x_2863_);
v___x_2868_ = lean_box(0);
v_isShared_2869_ = v_isSharedCheck_2878_;
goto v_resetjp_2867_;
}
v_resetjp_2867_:
{
uint8_t v___x_2870_; 
v___x_2870_ = lean_nat_dec_eq(v_key_2864_, v_a_2861_);
if (v___x_2870_ == 0)
{
lean_object* v___x_2871_; lean_object* v___x_2873_; 
v___x_2871_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__2___redArg(v_a_2861_, v_b_2862_, v_tail_2866_);
if (v_isShared_2869_ == 0)
{
lean_ctor_set(v___x_2868_, 2, v___x_2871_);
v___x_2873_ = v___x_2868_;
goto v_reusejp_2872_;
}
else
{
lean_object* v_reuseFailAlloc_2874_; 
v_reuseFailAlloc_2874_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2874_, 0, v_key_2864_);
lean_ctor_set(v_reuseFailAlloc_2874_, 1, v_value_2865_);
lean_ctor_set(v_reuseFailAlloc_2874_, 2, v___x_2871_);
v___x_2873_ = v_reuseFailAlloc_2874_;
goto v_reusejp_2872_;
}
v_reusejp_2872_:
{
return v___x_2873_;
}
}
else
{
lean_object* v___x_2876_; 
lean_dec(v_value_2865_);
lean_dec(v_key_2864_);
if (v_isShared_2869_ == 0)
{
lean_ctor_set(v___x_2868_, 1, v_b_2862_);
lean_ctor_set(v___x_2868_, 0, v_a_2861_);
v___x_2876_ = v___x_2868_;
goto v_reusejp_2875_;
}
else
{
lean_object* v_reuseFailAlloc_2877_; 
v_reuseFailAlloc_2877_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2877_, 0, v_a_2861_);
lean_ctor_set(v_reuseFailAlloc_2877_, 1, v_b_2862_);
lean_ctor_set(v_reuseFailAlloc_2877_, 2, v_tail_2866_);
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
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3_spec__6___redArg(lean_object* v_x_2879_, lean_object* v_x_2880_){
_start:
{
if (lean_obj_tag(v_x_2880_) == 0)
{
return v_x_2879_;
}
else
{
lean_object* v_key_2881_; lean_object* v_value_2882_; lean_object* v_tail_2883_; lean_object* v___x_2885_; uint8_t v_isShared_2886_; uint8_t v_isSharedCheck_2906_; 
v_key_2881_ = lean_ctor_get(v_x_2880_, 0);
v_value_2882_ = lean_ctor_get(v_x_2880_, 1);
v_tail_2883_ = lean_ctor_get(v_x_2880_, 2);
v_isSharedCheck_2906_ = !lean_is_exclusive(v_x_2880_);
if (v_isSharedCheck_2906_ == 0)
{
v___x_2885_ = v_x_2880_;
v_isShared_2886_ = v_isSharedCheck_2906_;
goto v_resetjp_2884_;
}
else
{
lean_inc(v_tail_2883_);
lean_inc(v_value_2882_);
lean_inc(v_key_2881_);
lean_dec(v_x_2880_);
v___x_2885_ = lean_box(0);
v_isShared_2886_ = v_isSharedCheck_2906_;
goto v_resetjp_2884_;
}
v_resetjp_2884_:
{
lean_object* v___x_2887_; uint64_t v___x_2888_; uint64_t v___x_2889_; uint64_t v___x_2890_; uint64_t v_fold_2891_; uint64_t v___x_2892_; uint64_t v___x_2893_; uint64_t v___x_2894_; size_t v___x_2895_; size_t v___x_2896_; size_t v___x_2897_; size_t v___x_2898_; size_t v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2902_; 
v___x_2887_ = lean_array_get_size(v_x_2879_);
v___x_2888_ = lean_uint64_of_nat(v_key_2881_);
v___x_2889_ = 32ULL;
v___x_2890_ = lean_uint64_shift_right(v___x_2888_, v___x_2889_);
v_fold_2891_ = lean_uint64_xor(v___x_2888_, v___x_2890_);
v___x_2892_ = 16ULL;
v___x_2893_ = lean_uint64_shift_right(v_fold_2891_, v___x_2892_);
v___x_2894_ = lean_uint64_xor(v_fold_2891_, v___x_2893_);
v___x_2895_ = lean_uint64_to_usize(v___x_2894_);
v___x_2896_ = lean_usize_of_nat(v___x_2887_);
v___x_2897_ = ((size_t)1ULL);
v___x_2898_ = lean_usize_sub(v___x_2896_, v___x_2897_);
v___x_2899_ = lean_usize_land(v___x_2895_, v___x_2898_);
v___x_2900_ = lean_array_uget_borrowed(v_x_2879_, v___x_2899_);
lean_inc(v___x_2900_);
if (v_isShared_2886_ == 0)
{
lean_ctor_set(v___x_2885_, 2, v___x_2900_);
v___x_2902_ = v___x_2885_;
goto v_reusejp_2901_;
}
else
{
lean_object* v_reuseFailAlloc_2905_; 
v_reuseFailAlloc_2905_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2905_, 0, v_key_2881_);
lean_ctor_set(v_reuseFailAlloc_2905_, 1, v_value_2882_);
lean_ctor_set(v_reuseFailAlloc_2905_, 2, v___x_2900_);
v___x_2902_ = v_reuseFailAlloc_2905_;
goto v_reusejp_2901_;
}
v_reusejp_2901_:
{
lean_object* v___x_2903_; 
v___x_2903_ = lean_array_uset(v_x_2879_, v___x_2899_, v___x_2902_);
v_x_2879_ = v___x_2903_;
v_x_2880_ = v_tail_2883_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3___redArg(lean_object* v_i_2907_, lean_object* v_source_2908_, lean_object* v_target_2909_){
_start:
{
lean_object* v___x_2910_; uint8_t v___x_2911_; 
v___x_2910_ = lean_array_get_size(v_source_2908_);
v___x_2911_ = lean_nat_dec_lt(v_i_2907_, v___x_2910_);
if (v___x_2911_ == 0)
{
lean_dec_ref(v_source_2908_);
lean_dec(v_i_2907_);
return v_target_2909_;
}
else
{
lean_object* v_es_2912_; lean_object* v___x_2913_; lean_object* v_source_2914_; lean_object* v_target_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; 
v_es_2912_ = lean_array_fget(v_source_2908_, v_i_2907_);
v___x_2913_ = lean_box(0);
v_source_2914_ = lean_array_fset(v_source_2908_, v_i_2907_, v___x_2913_);
v_target_2915_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3_spec__6___redArg(v_target_2909_, v_es_2912_);
v___x_2916_ = lean_unsigned_to_nat(1u);
v___x_2917_ = lean_nat_add(v_i_2907_, v___x_2916_);
lean_dec(v_i_2907_);
v_i_2907_ = v___x_2917_;
v_source_2908_ = v_source_2914_;
v_target_2909_ = v_target_2915_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1___redArg(lean_object* v_data_2919_){
_start:
{
lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v_nbuckets_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; 
v___x_2920_ = lean_array_get_size(v_data_2919_);
v___x_2921_ = lean_unsigned_to_nat(2u);
v_nbuckets_2922_ = lean_nat_mul(v___x_2920_, v___x_2921_);
v___x_2923_ = lean_unsigned_to_nat(0u);
v___x_2924_ = lean_box(0);
v___x_2925_ = lean_mk_array(v_nbuckets_2922_, v___x_2924_);
v___x_2926_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3___redArg(v___x_2923_, v_data_2919_, v___x_2925_);
return v___x_2926_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0___redArg(lean_object* v_m_2927_, lean_object* v_a_2928_, lean_object* v_b_2929_){
_start:
{
lean_object* v_size_2930_; lean_object* v_buckets_2931_; lean_object* v___x_2933_; uint8_t v_isShared_2934_; uint8_t v_isSharedCheck_2974_; 
v_size_2930_ = lean_ctor_get(v_m_2927_, 0);
v_buckets_2931_ = lean_ctor_get(v_m_2927_, 1);
v_isSharedCheck_2974_ = !lean_is_exclusive(v_m_2927_);
if (v_isSharedCheck_2974_ == 0)
{
v___x_2933_ = v_m_2927_;
v_isShared_2934_ = v_isSharedCheck_2974_;
goto v_resetjp_2932_;
}
else
{
lean_inc(v_buckets_2931_);
lean_inc(v_size_2930_);
lean_dec(v_m_2927_);
v___x_2933_ = lean_box(0);
v_isShared_2934_ = v_isSharedCheck_2974_;
goto v_resetjp_2932_;
}
v_resetjp_2932_:
{
lean_object* v___x_2935_; uint64_t v___x_2936_; uint64_t v___x_2937_; uint64_t v___x_2938_; uint64_t v_fold_2939_; uint64_t v___x_2940_; uint64_t v___x_2941_; uint64_t v___x_2942_; size_t v___x_2943_; size_t v___x_2944_; size_t v___x_2945_; size_t v___x_2946_; size_t v___x_2947_; lean_object* v_bkt_2948_; uint8_t v___x_2949_; 
v___x_2935_ = lean_array_get_size(v_buckets_2931_);
v___x_2936_ = lean_uint64_of_nat(v_a_2928_);
v___x_2937_ = 32ULL;
v___x_2938_ = lean_uint64_shift_right(v___x_2936_, v___x_2937_);
v_fold_2939_ = lean_uint64_xor(v___x_2936_, v___x_2938_);
v___x_2940_ = 16ULL;
v___x_2941_ = lean_uint64_shift_right(v_fold_2939_, v___x_2940_);
v___x_2942_ = lean_uint64_xor(v_fold_2939_, v___x_2941_);
v___x_2943_ = lean_uint64_to_usize(v___x_2942_);
v___x_2944_ = lean_usize_of_nat(v___x_2935_);
v___x_2945_ = ((size_t)1ULL);
v___x_2946_ = lean_usize_sub(v___x_2944_, v___x_2945_);
v___x_2947_ = lean_usize_land(v___x_2943_, v___x_2946_);
v_bkt_2948_ = lean_array_uget_borrowed(v_buckets_2931_, v___x_2947_);
v___x_2949_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg(v_a_2928_, v_bkt_2948_);
if (v___x_2949_ == 0)
{
lean_object* v___x_2950_; lean_object* v_size_x27_2951_; lean_object* v___x_2952_; lean_object* v_buckets_x27_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; uint8_t v___x_2959_; 
v___x_2950_ = lean_unsigned_to_nat(1u);
v_size_x27_2951_ = lean_nat_add(v_size_2930_, v___x_2950_);
lean_dec(v_size_2930_);
lean_inc(v_bkt_2948_);
v___x_2952_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2952_, 0, v_a_2928_);
lean_ctor_set(v___x_2952_, 1, v_b_2929_);
lean_ctor_set(v___x_2952_, 2, v_bkt_2948_);
v_buckets_x27_2953_ = lean_array_uset(v_buckets_2931_, v___x_2947_, v___x_2952_);
v___x_2954_ = lean_unsigned_to_nat(4u);
v___x_2955_ = lean_nat_mul(v_size_x27_2951_, v___x_2954_);
v___x_2956_ = lean_unsigned_to_nat(3u);
v___x_2957_ = lean_nat_div(v___x_2955_, v___x_2956_);
lean_dec(v___x_2955_);
v___x_2958_ = lean_array_get_size(v_buckets_x27_2953_);
v___x_2959_ = lean_nat_dec_le(v___x_2957_, v___x_2958_);
lean_dec(v___x_2957_);
if (v___x_2959_ == 0)
{
lean_object* v_val_2960_; lean_object* v___x_2962_; 
v_val_2960_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1___redArg(v_buckets_x27_2953_);
if (v_isShared_2934_ == 0)
{
lean_ctor_set(v___x_2933_, 1, v_val_2960_);
lean_ctor_set(v___x_2933_, 0, v_size_x27_2951_);
v___x_2962_ = v___x_2933_;
goto v_reusejp_2961_;
}
else
{
lean_object* v_reuseFailAlloc_2963_; 
v_reuseFailAlloc_2963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2963_, 0, v_size_x27_2951_);
lean_ctor_set(v_reuseFailAlloc_2963_, 1, v_val_2960_);
v___x_2962_ = v_reuseFailAlloc_2963_;
goto v_reusejp_2961_;
}
v_reusejp_2961_:
{
return v___x_2962_;
}
}
else
{
lean_object* v___x_2965_; 
if (v_isShared_2934_ == 0)
{
lean_ctor_set(v___x_2933_, 1, v_buckets_x27_2953_);
lean_ctor_set(v___x_2933_, 0, v_size_x27_2951_);
v___x_2965_ = v___x_2933_;
goto v_reusejp_2964_;
}
else
{
lean_object* v_reuseFailAlloc_2966_; 
v_reuseFailAlloc_2966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2966_, 0, v_size_x27_2951_);
lean_ctor_set(v_reuseFailAlloc_2966_, 1, v_buckets_x27_2953_);
v___x_2965_ = v_reuseFailAlloc_2966_;
goto v_reusejp_2964_;
}
v_reusejp_2964_:
{
return v___x_2965_;
}
}
}
else
{
lean_object* v___x_2967_; lean_object* v_buckets_x27_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2972_; 
lean_inc(v_bkt_2948_);
v___x_2967_ = lean_box(0);
v_buckets_x27_2968_ = lean_array_uset(v_buckets_2931_, v___x_2947_, v___x_2967_);
v___x_2969_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__2___redArg(v_a_2928_, v_b_2929_, v_bkt_2948_);
v___x_2970_ = lean_array_uset(v_buckets_x27_2968_, v___x_2947_, v___x_2969_);
if (v_isShared_2934_ == 0)
{
lean_ctor_set(v___x_2933_, 1, v___x_2970_);
v___x_2972_ = v___x_2933_;
goto v_reusejp_2971_;
}
else
{
lean_object* v_reuseFailAlloc_2973_; 
v_reuseFailAlloc_2973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2973_, 0, v_size_2930_);
lean_ctor_set(v_reuseFailAlloc_2973_, 1, v___x_2970_);
v___x_2972_ = v_reuseFailAlloc_2973_;
goto v_reusejp_2971_;
}
v_reusejp_2971_:
{
return v___x_2972_;
}
}
}
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2978_; lean_object* v___x_2979_; 
v___x_2978_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__1));
v___x_2979_ = l_Lean_MessageData_ofFormat(v___x_2978_);
return v___x_2979_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0(lean_object* v_fst_2984_, lean_object* v___x_2985_, lean_object* v___x_2986_, lean_object* v___x_2987_, lean_object* v_a_2988_, lean_object* v___x_2989_, lean_object* v___x_2990_, lean_object* v_____r_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_){
_start:
{
uint8_t v___x_2999_; lean_object* v___y_3023_; lean_object* v_val_3030_; uint8_t v___x_3048_; 
v___x_2999_ = 0;
lean_inc(v___x_2986_);
v___x_3048_ = l_Lean_Syntax_isOfKind(v___x_2986_, v___x_2987_);
if (v___x_3048_ == 0)
{
lean_object* v___x_3049_; 
v___x_3049_ = lean_nat_add(v_a_2988_, v___x_2989_);
v_val_3030_ = v___x_3049_;
goto v___jp_3029_;
}
else
{
lean_object* v___x_3050_; lean_object* v___x_3051_; uint8_t v___x_3052_; 
v___x_3050_ = l_Lean_Syntax_getArg(v___x_2986_, v___x_2990_);
v___x_3051_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__5));
lean_inc(v___x_3050_);
v___x_3052_ = l_Lean_Syntax_isOfKind(v___x_3050_, v___x_3051_);
if (v___x_3052_ == 0)
{
lean_object* v___x_3053_; 
lean_dec(v___x_3050_);
v___x_3053_ = lean_nat_add(v_a_2988_, v___x_2989_);
v_val_3030_ = v___x_3053_;
goto v___jp_3029_;
}
else
{
lean_object* v___x_3054_; 
v___x_3054_ = l_Lean_TSyntax_getId(v___x_3050_);
lean_dec(v___x_3050_);
if (lean_obj_tag(v___x_3054_) == 1)
{
lean_object* v_pre_3055_; 
v_pre_3055_ = lean_ctor_get(v___x_3054_, 0);
lean_inc(v_pre_3055_);
if (lean_obj_tag(v_pre_3055_) == 0)
{
lean_object* v_str_3056_; lean_object* v___x_3057_; 
v_str_3056_ = lean_ctor_get(v___x_3054_, 1);
lean_inc_ref(v_str_3056_);
lean_dec_ref_known(v___x_3054_, 2);
v___x_3057_ = l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg(v_str_3056_);
if (lean_obj_tag(v___x_3057_) == 0)
{
lean_dec(v___x_2985_);
goto v___jp_3000_;
}
else
{
lean_object* v_val_3058_; lean_object* v___x_3059_; 
v_val_3058_ = lean_ctor_get(v___x_3057_, 0);
lean_inc(v_val_3058_);
lean_dec_ref_known(v___x_3057_, 1);
v___x_3059_ = l_String_Slice_toNat_x3f(v_val_3058_);
lean_dec(v_val_3058_);
if (lean_obj_tag(v___x_3059_) == 1)
{
lean_object* v_val_3060_; 
v_val_3060_ = lean_ctor_get(v___x_3059_, 0);
lean_inc(v_val_3060_);
lean_dec_ref_known(v___x_3059_, 1);
v_val_3030_ = v_val_3060_;
goto v___jp_3029_;
}
else
{
lean_dec(v___x_3059_);
lean_dec(v___x_2985_);
goto v___jp_3000_;
}
}
}
else
{
lean_dec(v_pre_3055_);
lean_dec_ref_known(v___x_3054_, 2);
lean_dec(v___x_2985_);
goto v___jp_3000_;
}
}
else
{
lean_dec(v___x_3054_);
lean_dec(v___x_2985_);
goto v___jp_3000_;
}
}
}
v___jp_3000_:
{
lean_object* v___x_3001_; lean_object* v___x_3002_; 
v___x_3001_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__2, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__2);
v___x_3002_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__13___redArg(v___x_2986_, v___x_3001_, v___y_2992_, v___y_2993_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_);
lean_dec(v___x_2986_);
if (lean_obj_tag(v___x_3002_) == 0)
{
lean_object* v___x_3004_; uint8_t v_isShared_3005_; uint8_t v_isSharedCheck_3012_; 
v_isSharedCheck_3012_ = !lean_is_exclusive(v___x_3002_);
if (v_isSharedCheck_3012_ == 0)
{
lean_object* v_unused_3013_; 
v_unused_3013_ = lean_ctor_get(v___x_3002_, 0);
lean_dec(v_unused_3013_);
v___x_3004_ = v___x_3002_;
v_isShared_3005_ = v_isSharedCheck_3012_;
goto v_resetjp_3003_;
}
else
{
lean_dec(v___x_3002_);
v___x_3004_ = lean_box(0);
v_isShared_3005_ = v_isSharedCheck_3012_;
goto v_resetjp_3003_;
}
v_resetjp_3003_:
{
lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3010_; 
v___x_3006_ = lean_box(v___x_2999_);
v___x_3007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3007_, 0, v_fst_2984_);
lean_ctor_set(v___x_3007_, 1, v___x_3006_);
v___x_3008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3008_, 0, v___x_3007_);
if (v_isShared_3005_ == 0)
{
lean_ctor_set(v___x_3004_, 0, v___x_3008_);
v___x_3010_ = v___x_3004_;
goto v_reusejp_3009_;
}
else
{
lean_object* v_reuseFailAlloc_3011_; 
v_reuseFailAlloc_3011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3011_, 0, v___x_3008_);
v___x_3010_ = v_reuseFailAlloc_3011_;
goto v_reusejp_3009_;
}
v_reusejp_3009_:
{
return v___x_3010_;
}
}
}
else
{
lean_object* v_a_3014_; lean_object* v___x_3016_; uint8_t v_isShared_3017_; uint8_t v_isSharedCheck_3021_; 
lean_dec(v_fst_2984_);
v_a_3014_ = lean_ctor_get(v___x_3002_, 0);
v_isSharedCheck_3021_ = !lean_is_exclusive(v___x_3002_);
if (v_isSharedCheck_3021_ == 0)
{
v___x_3016_ = v___x_3002_;
v_isShared_3017_ = v_isSharedCheck_3021_;
goto v_resetjp_3015_;
}
else
{
lean_inc(v_a_3014_);
lean_dec(v___x_3002_);
v___x_3016_ = lean_box(0);
v_isShared_3017_ = v_isSharedCheck_3021_;
goto v_resetjp_3015_;
}
v_resetjp_3015_:
{
lean_object* v___x_3019_; 
if (v_isShared_3017_ == 0)
{
v___x_3019_ = v___x_3016_;
goto v_reusejp_3018_;
}
else
{
lean_object* v_reuseFailAlloc_3020_; 
v_reuseFailAlloc_3020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3020_, 0, v_a_3014_);
v___x_3019_ = v_reuseFailAlloc_3020_;
goto v_reusejp_3018_;
}
v_reusejp_3018_:
{
return v___x_3019_;
}
}
}
}
v___jp_3022_:
{
lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; 
v___x_3024_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0___redArg(v_fst_2984_, v___y_3023_, v___x_2985_);
v___x_3025_ = lean_box(v___x_2999_);
v___x_3026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3026_, 0, v___x_3024_);
lean_ctor_set(v___x_3026_, 1, v___x_3025_);
v___x_3027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3027_, 0, v___x_3026_);
v___x_3028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3028_, 0, v___x_3027_);
return v___x_3028_;
}
v___jp_3029_:
{
uint8_t v___x_3031_; 
v___x_3031_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(v_fst_2984_, v_val_3030_);
if (v___x_3031_ == 0)
{
lean_dec(v___x_2986_);
v___y_3023_ = v_val_3030_;
goto v___jp_3022_;
}
else
{
lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; 
v___x_3032_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__3));
lean_inc(v_val_3030_);
v___x_3033_ = l_Nat_reprFast(v_val_3030_);
v___x_3034_ = lean_string_append(v___x_3032_, v___x_3033_);
lean_dec_ref(v___x_3033_);
v___x_3035_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__14));
v___x_3036_ = lean_string_append(v___x_3034_, v___x_3035_);
v___x_3037_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3037_, 0, v___x_3036_);
v___x_3038_ = l_Lean_MessageData_ofFormat(v___x_3037_);
v___x_3039_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__13___redArg(v___x_2986_, v___x_3038_, v___y_2992_, v___y_2993_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_);
lean_dec(v___x_2986_);
if (lean_obj_tag(v___x_3039_) == 0)
{
lean_dec_ref_known(v___x_3039_, 1);
v___y_3023_ = v_val_3030_;
goto v___jp_3022_;
}
else
{
lean_object* v_a_3040_; lean_object* v___x_3042_; uint8_t v_isShared_3043_; uint8_t v_isSharedCheck_3047_; 
lean_dec(v_val_3030_);
lean_dec(v___x_2985_);
lean_dec(v_fst_2984_);
v_a_3040_ = lean_ctor_get(v___x_3039_, 0);
v_isSharedCheck_3047_ = !lean_is_exclusive(v___x_3039_);
if (v_isSharedCheck_3047_ == 0)
{
v___x_3042_ = v___x_3039_;
v_isShared_3043_ = v_isSharedCheck_3047_;
goto v_resetjp_3041_;
}
else
{
lean_inc(v_a_3040_);
lean_dec(v___x_3039_);
v___x_3042_ = lean_box(0);
v_isShared_3043_ = v_isSharedCheck_3047_;
goto v_resetjp_3041_;
}
v_resetjp_3041_:
{
lean_object* v___x_3045_; 
if (v_isShared_3043_ == 0)
{
v___x_3045_ = v___x_3042_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3046_; 
v_reuseFailAlloc_3046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3046_, 0, v_a_3040_);
v___x_3045_ = v_reuseFailAlloc_3046_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
return v___x_3045_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___boxed(lean_object* v_fst_3061_, lean_object* v___x_3062_, lean_object* v___x_3063_, lean_object* v___x_3064_, lean_object* v_a_3065_, lean_object* v___x_3066_, lean_object* v___x_3067_, lean_object* v_____r_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_){
_start:
{
lean_object* v_res_3076_; 
v_res_3076_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0(v_fst_3061_, v___x_3062_, v___x_3063_, v___x_3064_, v_a_3065_, v___x_3066_, v___x_3067_, v_____r_3068_, v___y_3069_, v___y_3070_, v___y_3071_, v___y_3072_, v___y_3073_, v___y_3074_);
lean_dec(v___y_3074_);
lean_dec_ref(v___y_3073_);
lean_dec(v___y_3072_);
lean_dec_ref(v___y_3071_);
lean_dec(v___y_3070_);
lean_dec_ref(v___y_3069_);
lean_dec(v___x_3067_);
lean_dec(v___x_3066_);
lean_dec(v_a_3065_);
lean_dec(v___x_3064_);
return v_res_3076_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__1(lean_object* v_a_3077_, lean_object* v___x_3078_, lean_object* v_fst_3079_, lean_object* v___x_3080_, lean_object* v_____r_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_){
_start:
{
uint8_t v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; 
v___x_3089_ = 1;
v___x_3090_ = lean_nat_add(v_a_3077_, v___x_3078_);
v___x_3091_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0___redArg(v_fst_3079_, v___x_3090_, v___x_3080_);
v___x_3092_ = lean_box(v___x_3089_);
v___x_3093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3093_, 0, v___x_3091_);
lean_ctor_set(v___x_3093_, 1, v___x_3092_);
v___x_3094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3094_, 0, v___x_3093_);
v___x_3095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3095_, 0, v___x_3094_);
return v___x_3095_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__1___boxed(lean_object* v_a_3096_, lean_object* v___x_3097_, lean_object* v_fst_3098_, lean_object* v___x_3099_, lean_object* v_____r_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_){
_start:
{
lean_object* v_res_3108_; 
v_res_3108_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__1(v_a_3096_, v___x_3097_, v_fst_3098_, v___x_3099_, v_____r_3100_, v___y_3101_, v___y_3102_, v___y_3103_, v___y_3104_, v___y_3105_, v___y_3106_);
lean_dec(v___y_3106_);
lean_dec_ref(v___y_3105_);
lean_dec(v___y_3104_);
lean_dec_ref(v___y_3103_);
lean_dec(v___y_3102_);
lean_dec_ref(v___y_3101_);
lean_dec(v___x_3097_);
lean_dec(v_a_3096_);
return v_res_3108_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5(void){
_start:
{
lean_object* v___x_3122_; lean_object* v___x_3123_; 
v___x_3122_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__4));
v___x_3123_ = l_Lean_stringToMessageData(v___x_3122_);
return v___x_3123_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11(void){
_start:
{
lean_object* v___x_3135_; lean_object* v___x_3136_; 
v___x_3135_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__10));
v___x_3136_ = l_Lean_stringToMessageData(v___x_3135_);
return v___x_3136_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg(lean_object* v_upperBound_3141_, lean_object* v_alts_3142_, lean_object* v___x_3143_, lean_object* v_a_3144_, lean_object* v_b_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_){
_start:
{
uint8_t v___x_3153_; 
v___x_3153_ = lean_nat_dec_lt(v_a_3144_, v_upperBound_3141_);
if (v___x_3153_ == 0)
{
lean_object* v___x_3154_; 
lean_dec(v_a_3144_);
v___x_3154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3154_, 0, v_b_3145_);
return v___x_3154_;
}
else
{
lean_object* v_fst_3155_; lean_object* v_snd_3156_; lean_object* v___x_3158_; uint8_t v_isShared_3159_; uint8_t v_isSharedCheck_3271_; 
v_fst_3155_ = lean_ctor_get(v_b_3145_, 0);
v_snd_3156_ = lean_ctor_get(v_b_3145_, 1);
v_isSharedCheck_3271_ = !lean_is_exclusive(v_b_3145_);
if (v_isSharedCheck_3271_ == 0)
{
v___x_3158_ = v_b_3145_;
v_isShared_3159_ = v_isSharedCheck_3271_;
goto v_resetjp_3157_;
}
else
{
lean_inc(v_snd_3156_);
lean_inc(v_fst_3155_);
lean_dec(v_b_3145_);
v___x_3158_ = lean_box(0);
v_isShared_3159_ = v_isSharedCheck_3271_;
goto v_resetjp_3157_;
}
v_resetjp_3157_:
{
lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v_a_3163_; lean_object* v___y_3167_; lean_object* v___x_3186_; lean_object* v___x_3187_; uint8_t v___x_3188_; 
v___x_3160_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1));
v___x_3161_ = lean_unsigned_to_nat(1u);
v___x_3186_ = lean_unsigned_to_nat(0u);
v___x_3187_ = lean_array_fget_borrowed(v_alts_3142_, v_a_3144_);
lean_inc(v___x_3187_);
v___x_3188_ = l_Lean_Syntax_isOfKind(v___x_3187_, v___x_3160_);
if (v___x_3188_ == 0)
{
lean_object* v___x_3189_; uint8_t v___x_3190_; 
v___x_3189_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3));
lean_inc(v___x_3187_);
v___x_3190_ = l_Lean_Syntax_isOfKind(v___x_3187_, v___x_3189_);
if (v___x_3190_ == 0)
{
lean_object* v___x_3191_; lean_object* v___x_3192_; 
v___x_3191_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5);
v___x_3192_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__13___redArg(v___x_3187_, v___x_3191_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_);
if (lean_obj_tag(v___x_3192_) == 0)
{
lean_object* v___x_3194_; 
lean_dec_ref_known(v___x_3192_, 1);
if (v_isShared_3159_ == 0)
{
v___x_3194_ = v___x_3158_;
goto v_reusejp_3193_;
}
else
{
lean_object* v_reuseFailAlloc_3195_; 
v_reuseFailAlloc_3195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3195_, 0, v_fst_3155_);
lean_ctor_set(v_reuseFailAlloc_3195_, 1, v_snd_3156_);
v___x_3194_ = v_reuseFailAlloc_3195_;
goto v_reusejp_3193_;
}
v_reusejp_3193_:
{
v_a_3163_ = v___x_3194_;
goto v___jp_3162_;
}
}
else
{
lean_object* v_a_3196_; lean_object* v___x_3198_; uint8_t v_isShared_3199_; uint8_t v_isSharedCheck_3203_; 
lean_del_object(v___x_3158_);
lean_dec(v_snd_3156_);
lean_dec(v_fst_3155_);
lean_dec(v_a_3144_);
v_a_3196_ = lean_ctor_get(v___x_3192_, 0);
v_isSharedCheck_3203_ = !lean_is_exclusive(v___x_3192_);
if (v_isSharedCheck_3203_ == 0)
{
v___x_3198_ = v___x_3192_;
v_isShared_3199_ = v_isSharedCheck_3203_;
goto v_resetjp_3197_;
}
else
{
lean_inc(v_a_3196_);
lean_dec(v___x_3192_);
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
else
{
lean_object* v___x_3204_; lean_object* v___x_3205_; uint8_t v___x_3206_; 
v___x_3204_ = l_Lean_Syntax_getArg(v___x_3187_, v___x_3161_);
v___x_3205_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7));
lean_inc(v___x_3204_);
v___x_3206_ = l_Lean_Syntax_isOfKind(v___x_3204_, v___x_3205_);
if (v___x_3206_ == 0)
{
lean_object* v___x_3207_; lean_object* v___x_3208_; 
lean_dec(v___x_3204_);
v___x_3207_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5);
v___x_3208_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__13___redArg(v___x_3187_, v___x_3207_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_);
if (lean_obj_tag(v___x_3208_) == 0)
{
lean_object* v___x_3210_; 
lean_dec_ref_known(v___x_3208_, 1);
if (v_isShared_3159_ == 0)
{
v___x_3210_ = v___x_3158_;
goto v_reusejp_3209_;
}
else
{
lean_object* v_reuseFailAlloc_3211_; 
v_reuseFailAlloc_3211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3211_, 0, v_fst_3155_);
lean_ctor_set(v_reuseFailAlloc_3211_, 1, v_snd_3156_);
v___x_3210_ = v_reuseFailAlloc_3211_;
goto v_reusejp_3209_;
}
v_reusejp_3209_:
{
v_a_3163_ = v___x_3210_;
goto v___jp_3162_;
}
}
else
{
lean_object* v_a_3212_; lean_object* v___x_3214_; uint8_t v_isShared_3215_; uint8_t v_isSharedCheck_3219_; 
lean_del_object(v___x_3158_);
lean_dec(v_snd_3156_);
lean_dec(v_fst_3155_);
lean_dec(v_a_3144_);
v_a_3212_ = lean_ctor_get(v___x_3208_, 0);
v_isSharedCheck_3219_ = !lean_is_exclusive(v___x_3208_);
if (v_isSharedCheck_3219_ == 0)
{
v___x_3214_ = v___x_3208_;
v_isShared_3215_ = v_isSharedCheck_3219_;
goto v_resetjp_3213_;
}
else
{
lean_inc(v_a_3212_);
lean_dec(v___x_3208_);
v___x_3214_ = lean_box(0);
v_isShared_3215_ = v_isSharedCheck_3219_;
goto v_resetjp_3213_;
}
v_resetjp_3213_:
{
lean_object* v___x_3217_; 
if (v_isShared_3215_ == 0)
{
v___x_3217_ = v___x_3214_;
goto v_reusejp_3216_;
}
else
{
lean_object* v_reuseFailAlloc_3218_; 
v_reuseFailAlloc_3218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3218_, 0, v_a_3212_);
v___x_3217_ = v_reuseFailAlloc_3218_;
goto v_reusejp_3216_;
}
v_reusejp_3216_:
{
return v___x_3217_;
}
}
}
}
else
{
lean_object* v___x_3220_; lean_object* v___x_3221_; uint8_t v___x_3235_; 
lean_del_object(v___x_3158_);
v___x_3220_ = l_Lean_Syntax_getArg(v___x_3204_, v___x_3186_);
lean_dec(v___x_3204_);
v___x_3221_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__9));
v___x_3235_ = lean_unbox(v_snd_3156_);
lean_dec(v_snd_3156_);
if (v___x_3235_ == 1)
{
goto v___jp_3222_;
}
else
{
if (v___x_3188_ == 0)
{
lean_object* v___x_3236_; lean_object* v___x_3237_; 
v___x_3236_ = lean_box(0);
lean_inc(v___x_3187_);
v___x_3237_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0(v_fst_3155_, v___x_3187_, v___x_3220_, v___x_3221_, v_a_3144_, v___x_3161_, v___x_3186_, v___x_3236_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_);
v___y_3167_ = v___x_3237_;
goto v___jp_3166_;
}
else
{
goto v___jp_3222_;
}
}
v___jp_3222_:
{
lean_object* v___x_3223_; lean_object* v___x_3224_; 
v___x_3223_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11);
v___x_3224_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__13___redArg(v___x_3187_, v___x_3223_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_);
if (lean_obj_tag(v___x_3224_) == 0)
{
lean_object* v_a_3225_; lean_object* v___x_3226_; 
v_a_3225_ = lean_ctor_get(v___x_3224_, 0);
lean_inc(v_a_3225_);
lean_dec_ref_known(v___x_3224_, 1);
lean_inc(v___x_3187_);
v___x_3226_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0(v_fst_3155_, v___x_3187_, v___x_3220_, v___x_3221_, v_a_3144_, v___x_3161_, v___x_3186_, v_a_3225_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_);
v___y_3167_ = v___x_3226_;
goto v___jp_3166_;
}
else
{
lean_object* v_a_3227_; lean_object* v___x_3229_; uint8_t v_isShared_3230_; uint8_t v_isSharedCheck_3234_; 
lean_dec(v___x_3220_);
lean_dec(v_fst_3155_);
lean_dec(v_a_3144_);
v_a_3227_ = lean_ctor_get(v___x_3224_, 0);
v_isSharedCheck_3234_ = !lean_is_exclusive(v___x_3224_);
if (v_isSharedCheck_3234_ == 0)
{
v___x_3229_ = v___x_3224_;
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
else
{
lean_inc(v_a_3227_);
lean_dec(v___x_3224_);
v___x_3229_ = lean_box(0);
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
v_resetjp_3228_:
{
lean_object* v___x_3232_; 
if (v_isShared_3230_ == 0)
{
v___x_3232_ = v___x_3229_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(1, 1, 0);
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
}
}
else
{
lean_object* v___x_3238_; lean_object* v___x_3239_; uint8_t v___x_3240_; 
v___x_3238_ = l_Lean_Syntax_getArg(v___x_3187_, v___x_3186_);
v___x_3239_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__13));
v___x_3240_ = l_Lean_Syntax_isOfKind(v___x_3238_, v___x_3239_);
if (v___x_3240_ == 0)
{
lean_object* v___x_3241_; lean_object* v___x_3242_; 
v___x_3241_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5);
v___x_3242_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__13___redArg(v___x_3187_, v___x_3241_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_);
if (lean_obj_tag(v___x_3242_) == 0)
{
lean_object* v___x_3244_; 
lean_dec_ref_known(v___x_3242_, 1);
if (v_isShared_3159_ == 0)
{
v___x_3244_ = v___x_3158_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v_fst_3155_);
lean_ctor_set(v_reuseFailAlloc_3245_, 1, v_snd_3156_);
v___x_3244_ = v_reuseFailAlloc_3245_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
v_a_3163_ = v___x_3244_;
goto v___jp_3162_;
}
}
else
{
lean_object* v_a_3246_; lean_object* v___x_3248_; uint8_t v_isShared_3249_; uint8_t v_isSharedCheck_3253_; 
lean_del_object(v___x_3158_);
lean_dec(v_snd_3156_);
lean_dec(v_fst_3155_);
lean_dec(v_a_3144_);
v_a_3246_ = lean_ctor_get(v___x_3242_, 0);
v_isSharedCheck_3253_ = !lean_is_exclusive(v___x_3242_);
if (v_isSharedCheck_3253_ == 0)
{
v___x_3248_ = v___x_3242_;
v_isShared_3249_ = v_isSharedCheck_3253_;
goto v_resetjp_3247_;
}
else
{
lean_inc(v_a_3246_);
lean_dec(v___x_3242_);
v___x_3248_ = lean_box(0);
v_isShared_3249_ = v_isSharedCheck_3253_;
goto v_resetjp_3247_;
}
v_resetjp_3247_:
{
lean_object* v___x_3251_; 
if (v_isShared_3249_ == 0)
{
v___x_3251_ = v___x_3248_;
goto v_reusejp_3250_;
}
else
{
lean_object* v_reuseFailAlloc_3252_; 
v_reuseFailAlloc_3252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3252_, 0, v_a_3246_);
v___x_3251_ = v_reuseFailAlloc_3252_;
goto v_reusejp_3250_;
}
v_reusejp_3250_:
{
return v___x_3251_;
}
}
}
}
else
{
uint8_t v___x_3267_; 
lean_del_object(v___x_3158_);
v___x_3267_ = lean_unbox(v_snd_3156_);
lean_dec(v_snd_3156_);
if (v___x_3267_ == 0)
{
goto v___jp_3254_;
}
else
{
uint8_t v___x_3268_; 
v___x_3268_ = lean_nat_dec_eq(v___x_3143_, v___x_3186_);
if (v___x_3268_ == 0)
{
lean_object* v___x_3269_; lean_object* v___x_3270_; 
v___x_3269_ = lean_box(0);
lean_inc(v___x_3187_);
v___x_3270_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__1(v_a_3144_, v___x_3161_, v_fst_3155_, v___x_3187_, v___x_3269_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_);
v___y_3167_ = v___x_3270_;
goto v___jp_3166_;
}
else
{
goto v___jp_3254_;
}
}
v___jp_3254_:
{
lean_object* v___x_3255_; lean_object* v___x_3256_; 
v___x_3255_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11);
v___x_3256_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__2_spec__4_spec__9_spec__13___redArg(v___x_3187_, v___x_3255_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_);
if (lean_obj_tag(v___x_3256_) == 0)
{
lean_object* v_a_3257_; lean_object* v___x_3258_; 
v_a_3257_ = lean_ctor_get(v___x_3256_, 0);
lean_inc(v_a_3257_);
lean_dec_ref_known(v___x_3256_, 1);
lean_inc(v___x_3187_);
v___x_3258_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__1(v_a_3144_, v___x_3161_, v_fst_3155_, v___x_3187_, v_a_3257_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_);
v___y_3167_ = v___x_3258_;
goto v___jp_3166_;
}
else
{
lean_object* v_a_3259_; lean_object* v___x_3261_; uint8_t v_isShared_3262_; uint8_t v_isSharedCheck_3266_; 
lean_dec(v_fst_3155_);
lean_dec(v_a_3144_);
v_a_3259_ = lean_ctor_get(v___x_3256_, 0);
v_isSharedCheck_3266_ = !lean_is_exclusive(v___x_3256_);
if (v_isSharedCheck_3266_ == 0)
{
v___x_3261_ = v___x_3256_;
v_isShared_3262_ = v_isSharedCheck_3266_;
goto v_resetjp_3260_;
}
else
{
lean_inc(v_a_3259_);
lean_dec(v___x_3256_);
v___x_3261_ = lean_box(0);
v_isShared_3262_ = v_isSharedCheck_3266_;
goto v_resetjp_3260_;
}
v_resetjp_3260_:
{
lean_object* v___x_3264_; 
if (v_isShared_3262_ == 0)
{
v___x_3264_ = v___x_3261_;
goto v_reusejp_3263_;
}
else
{
lean_object* v_reuseFailAlloc_3265_; 
v_reuseFailAlloc_3265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3265_, 0, v_a_3259_);
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
}
v___jp_3162_:
{
lean_object* v___x_3164_; 
v___x_3164_ = lean_nat_add(v_a_3144_, v___x_3161_);
lean_dec(v_a_3144_);
v_a_3144_ = v___x_3164_;
v_b_3145_ = v_a_3163_;
goto _start;
}
v___jp_3166_:
{
if (lean_obj_tag(v___y_3167_) == 0)
{
lean_object* v_a_3168_; lean_object* v___x_3170_; uint8_t v_isShared_3171_; uint8_t v_isSharedCheck_3177_; 
v_a_3168_ = lean_ctor_get(v___y_3167_, 0);
v_isSharedCheck_3177_ = !lean_is_exclusive(v___y_3167_);
if (v_isSharedCheck_3177_ == 0)
{
v___x_3170_ = v___y_3167_;
v_isShared_3171_ = v_isSharedCheck_3177_;
goto v_resetjp_3169_;
}
else
{
lean_inc(v_a_3168_);
lean_dec(v___y_3167_);
v___x_3170_ = lean_box(0);
v_isShared_3171_ = v_isSharedCheck_3177_;
goto v_resetjp_3169_;
}
v_resetjp_3169_:
{
if (lean_obj_tag(v_a_3168_) == 0)
{
lean_object* v_a_3172_; lean_object* v___x_3174_; 
lean_dec(v_a_3144_);
v_a_3172_ = lean_ctor_get(v_a_3168_, 0);
lean_inc(v_a_3172_);
lean_dec_ref_known(v_a_3168_, 1);
if (v_isShared_3171_ == 0)
{
lean_ctor_set(v___x_3170_, 0, v_a_3172_);
v___x_3174_ = v___x_3170_;
goto v_reusejp_3173_;
}
else
{
lean_object* v_reuseFailAlloc_3175_; 
v_reuseFailAlloc_3175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3175_, 0, v_a_3172_);
v___x_3174_ = v_reuseFailAlloc_3175_;
goto v_reusejp_3173_;
}
v_reusejp_3173_:
{
return v___x_3174_;
}
}
else
{
lean_object* v_a_3176_; 
lean_del_object(v___x_3170_);
v_a_3176_ = lean_ctor_get(v_a_3168_, 0);
lean_inc(v_a_3176_);
lean_dec_ref_known(v_a_3168_, 1);
v_a_3163_ = v_a_3176_;
goto v___jp_3162_;
}
}
}
else
{
lean_object* v_a_3178_; lean_object* v___x_3180_; uint8_t v_isShared_3181_; uint8_t v_isSharedCheck_3185_; 
lean_dec(v_a_3144_);
v_a_3178_ = lean_ctor_get(v___y_3167_, 0);
v_isSharedCheck_3185_ = !lean_is_exclusive(v___y_3167_);
if (v_isSharedCheck_3185_ == 0)
{
v___x_3180_ = v___y_3167_;
v_isShared_3181_ = v_isSharedCheck_3185_;
goto v_resetjp_3179_;
}
else
{
lean_inc(v_a_3178_);
lean_dec(v___y_3167_);
v___x_3180_ = lean_box(0);
v_isShared_3181_ = v_isSharedCheck_3185_;
goto v_resetjp_3179_;
}
v_resetjp_3179_:
{
lean_object* v___x_3183_; 
if (v_isShared_3181_ == 0)
{
v___x_3183_ = v___x_3180_;
goto v_reusejp_3182_;
}
else
{
lean_object* v_reuseFailAlloc_3184_; 
v_reuseFailAlloc_3184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3184_, 0, v_a_3178_);
v___x_3183_ = v_reuseFailAlloc_3184_;
goto v_reusejp_3182_;
}
v_reusejp_3182_:
{
return v___x_3183_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___boxed(lean_object* v_upperBound_3272_, lean_object* v_alts_3273_, lean_object* v___x_3274_, lean_object* v_a_3275_, lean_object* v_b_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_){
_start:
{
lean_object* v_res_3284_; 
v_res_3284_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg(v_upperBound_3272_, v_alts_3273_, v___x_3274_, v_a_3275_, v_b_3276_, v___y_3277_, v___y_3278_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_);
lean_dec(v___y_3282_);
lean_dec_ref(v___y_3281_);
lean_dec(v___y_3280_);
lean_dec_ref(v___y_3279_);
lean_dec(v___y_3278_);
lean_dec_ref(v___y_3277_);
lean_dec(v___x_3274_);
lean_dec_ref(v_alts_3273_);
lean_dec(v_upperBound_3272_);
return v_res_3284_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2(void){
_start:
{
uint8_t v_dotOrCase_3291_; lean_object* v_map_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; 
v_dotOrCase_3291_ = 2;
v_map_3292_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__41, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__41_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__41);
v___x_3293_ = lean_box(v_dotOrCase_3291_);
v___x_3294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3294_, 0, v_map_3292_);
lean_ctor_set(v___x_3294_, 1, v___x_3293_);
return v___x_3294_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3(void){
_start:
{
lean_object* v___x_3295_; lean_object* v___x_3296_; 
v___x_3295_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__41, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__41_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__41);
v___x_3296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3296_, 0, v___x_3295_);
return v___x_3296_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap(lean_object* v_stx_3308_, lean_object* v_a_3309_, lean_object* v_a_3310_, lean_object* v_a_3311_, lean_object* v_a_3312_, lean_object* v_a_3313_, lean_object* v_a_3314_){
_start:
{
lean_object* v___x_3316_; 
v___x_3316_ = l_Lean_Syntax_getOptional_x3f(v_stx_3308_);
if (lean_obj_tag(v___x_3316_) == 1)
{
lean_object* v_val_3317_; lean_object* v___x_3319_; uint8_t v_isShared_3320_; uint8_t v_isSharedCheck_3426_; 
v_val_3317_ = lean_ctor_get(v___x_3316_, 0);
v_isSharedCheck_3426_ = !lean_is_exclusive(v___x_3316_);
if (v_isSharedCheck_3426_ == 0)
{
v___x_3319_ = v___x_3316_;
v_isShared_3320_ = v_isSharedCheck_3426_;
goto v_resetjp_3318_;
}
else
{
lean_inc(v_val_3317_);
lean_dec(v___x_3316_);
v___x_3319_ = lean_box(0);
v_isShared_3320_ = v_isSharedCheck_3426_;
goto v_resetjp_3318_;
}
v_resetjp_3318_:
{
lean_object* v___x_3321_; uint8_t v___x_3322_; 
v___x_3321_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1));
lean_inc(v_val_3317_);
v___x_3322_ = l_Lean_Syntax_isOfKind(v_val_3317_, v___x_3321_);
if (v___x_3322_ == 0)
{
if (v___x_3322_ == 0)
{
lean_object* v___x_3323_; lean_object* v___x_3324_; 
lean_del_object(v___x_3319_);
lean_dec(v_val_3317_);
v___x_3323_ = lean_box(0);
v___x_3324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3324_, 0, v___x_3323_);
return v___x_3324_;
}
else
{
lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v_alts_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; uint8_t v___x_3330_; 
v___x_3325_ = lean_unsigned_to_nat(1u);
v___x_3326_ = l_Lean_Syntax_getArg(v_val_3317_, v___x_3325_);
lean_dec(v_val_3317_);
v_alts_3327_ = l_Lean_Syntax_getArgs(v___x_3326_);
lean_dec(v___x_3326_);
v___x_3328_ = lean_array_get_size(v_alts_3327_);
v___x_3329_ = lean_unsigned_to_nat(0u);
v___x_3330_ = lean_nat_dec_eq(v___x_3328_, v___x_3329_);
if (v___x_3330_ == 0)
{
lean_object* v___x_3331_; lean_object* v___x_3332_; 
v___x_3331_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2);
v___x_3332_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg(v___x_3328_, v_alts_3327_, v___x_3328_, v___x_3329_, v___x_3331_, v_a_3309_, v_a_3310_, v_a_3311_, v_a_3312_, v_a_3313_, v_a_3314_);
lean_dec_ref(v_alts_3327_);
if (lean_obj_tag(v___x_3332_) == 0)
{
lean_object* v_a_3333_; lean_object* v___x_3335_; uint8_t v_isShared_3336_; uint8_t v_isSharedCheck_3344_; 
v_a_3333_ = lean_ctor_get(v___x_3332_, 0);
v_isSharedCheck_3344_ = !lean_is_exclusive(v___x_3332_);
if (v_isSharedCheck_3344_ == 0)
{
v___x_3335_ = v___x_3332_;
v_isShared_3336_ = v_isSharedCheck_3344_;
goto v_resetjp_3334_;
}
else
{
lean_inc(v_a_3333_);
lean_dec(v___x_3332_);
v___x_3335_ = lean_box(0);
v_isShared_3336_ = v_isSharedCheck_3344_;
goto v_resetjp_3334_;
}
v_resetjp_3334_:
{
lean_object* v_fst_3337_; lean_object* v___x_3339_; 
v_fst_3337_ = lean_ctor_get(v_a_3333_, 0);
lean_inc(v_fst_3337_);
lean_dec(v_a_3333_);
if (v_isShared_3320_ == 0)
{
lean_ctor_set(v___x_3319_, 0, v_fst_3337_);
v___x_3339_ = v___x_3319_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3343_; 
v_reuseFailAlloc_3343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3343_, 0, v_fst_3337_);
v___x_3339_ = v_reuseFailAlloc_3343_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
lean_object* v___x_3341_; 
if (v_isShared_3336_ == 0)
{
lean_ctor_set(v___x_3335_, 0, v___x_3339_);
v___x_3341_ = v___x_3335_;
goto v_reusejp_3340_;
}
else
{
lean_object* v_reuseFailAlloc_3342_; 
v_reuseFailAlloc_3342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3342_, 0, v___x_3339_);
v___x_3341_ = v_reuseFailAlloc_3342_;
goto v_reusejp_3340_;
}
v_reusejp_3340_:
{
return v___x_3341_;
}
}
}
}
else
{
lean_object* v_a_3345_; lean_object* v___x_3347_; uint8_t v_isShared_3348_; uint8_t v_isSharedCheck_3352_; 
lean_del_object(v___x_3319_);
v_a_3345_ = lean_ctor_get(v___x_3332_, 0);
v_isSharedCheck_3352_ = !lean_is_exclusive(v___x_3332_);
if (v_isSharedCheck_3352_ == 0)
{
v___x_3347_ = v___x_3332_;
v_isShared_3348_ = v_isSharedCheck_3352_;
goto v_resetjp_3346_;
}
else
{
lean_inc(v_a_3345_);
lean_dec(v___x_3332_);
v___x_3347_ = lean_box(0);
v_isShared_3348_ = v_isSharedCheck_3352_;
goto v_resetjp_3346_;
}
v_resetjp_3346_:
{
lean_object* v___x_3350_; 
if (v_isShared_3348_ == 0)
{
v___x_3350_ = v___x_3347_;
goto v_reusejp_3349_;
}
else
{
lean_object* v_reuseFailAlloc_3351_; 
v_reuseFailAlloc_3351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3351_, 0, v_a_3345_);
v___x_3350_ = v_reuseFailAlloc_3351_;
goto v_reusejp_3349_;
}
v_reusejp_3349_:
{
return v___x_3350_;
}
}
}
}
else
{
lean_object* v___x_3353_; lean_object* v___x_3354_; 
lean_dec_ref(v_alts_3327_);
lean_del_object(v___x_3319_);
v___x_3353_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3);
v___x_3354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3354_, 0, v___x_3353_);
return v___x_3354_;
}
}
}
else
{
lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; uint8_t v___x_3358_; 
v___x_3355_ = lean_unsigned_to_nat(0u);
v___x_3356_ = l_Lean_Syntax_getArg(v_val_3317_, v___x_3355_);
v___x_3357_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5));
lean_inc(v___x_3356_);
v___x_3358_ = l_Lean_Syntax_isOfKind(v___x_3356_, v___x_3357_);
if (v___x_3358_ == 0)
{
lean_dec(v___x_3356_);
if (v___x_3322_ == 0)
{
lean_object* v___x_3359_; lean_object* v___x_3360_; 
lean_del_object(v___x_3319_);
lean_dec(v_val_3317_);
v___x_3359_ = lean_box(0);
v___x_3360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3360_, 0, v___x_3359_);
return v___x_3360_;
}
else
{
lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v_alts_3363_; lean_object* v___x_3364_; uint8_t v___x_3365_; 
v___x_3361_ = lean_unsigned_to_nat(1u);
v___x_3362_ = l_Lean_Syntax_getArg(v_val_3317_, v___x_3361_);
lean_dec(v_val_3317_);
v_alts_3363_ = l_Lean_Syntax_getArgs(v___x_3362_);
lean_dec(v___x_3362_);
v___x_3364_ = lean_array_get_size(v_alts_3363_);
v___x_3365_ = lean_nat_dec_eq(v___x_3364_, v___x_3355_);
if (v___x_3365_ == 0)
{
lean_object* v___x_3366_; lean_object* v___x_3367_; 
v___x_3366_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2);
v___x_3367_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg(v___x_3364_, v_alts_3363_, v___x_3364_, v___x_3355_, v___x_3366_, v_a_3309_, v_a_3310_, v_a_3311_, v_a_3312_, v_a_3313_, v_a_3314_);
lean_dec_ref(v_alts_3363_);
if (lean_obj_tag(v___x_3367_) == 0)
{
lean_object* v_a_3368_; lean_object* v___x_3370_; uint8_t v_isShared_3371_; uint8_t v_isSharedCheck_3379_; 
v_a_3368_ = lean_ctor_get(v___x_3367_, 0);
v_isSharedCheck_3379_ = !lean_is_exclusive(v___x_3367_);
if (v_isSharedCheck_3379_ == 0)
{
v___x_3370_ = v___x_3367_;
v_isShared_3371_ = v_isSharedCheck_3379_;
goto v_resetjp_3369_;
}
else
{
lean_inc(v_a_3368_);
lean_dec(v___x_3367_);
v___x_3370_ = lean_box(0);
v_isShared_3371_ = v_isSharedCheck_3379_;
goto v_resetjp_3369_;
}
v_resetjp_3369_:
{
lean_object* v_fst_3372_; lean_object* v___x_3374_; 
v_fst_3372_ = lean_ctor_get(v_a_3368_, 0);
lean_inc(v_fst_3372_);
lean_dec(v_a_3368_);
if (v_isShared_3320_ == 0)
{
lean_ctor_set(v___x_3319_, 0, v_fst_3372_);
v___x_3374_ = v___x_3319_;
goto v_reusejp_3373_;
}
else
{
lean_object* v_reuseFailAlloc_3378_; 
v_reuseFailAlloc_3378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3378_, 0, v_fst_3372_);
v___x_3374_ = v_reuseFailAlloc_3378_;
goto v_reusejp_3373_;
}
v_reusejp_3373_:
{
lean_object* v___x_3376_; 
if (v_isShared_3371_ == 0)
{
lean_ctor_set(v___x_3370_, 0, v___x_3374_);
v___x_3376_ = v___x_3370_;
goto v_reusejp_3375_;
}
else
{
lean_object* v_reuseFailAlloc_3377_; 
v_reuseFailAlloc_3377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3377_, 0, v___x_3374_);
v___x_3376_ = v_reuseFailAlloc_3377_;
goto v_reusejp_3375_;
}
v_reusejp_3375_:
{
return v___x_3376_;
}
}
}
}
else
{
lean_object* v_a_3380_; lean_object* v___x_3382_; uint8_t v_isShared_3383_; uint8_t v_isSharedCheck_3387_; 
lean_del_object(v___x_3319_);
v_a_3380_ = lean_ctor_get(v___x_3367_, 0);
v_isSharedCheck_3387_ = !lean_is_exclusive(v___x_3367_);
if (v_isSharedCheck_3387_ == 0)
{
v___x_3382_ = v___x_3367_;
v_isShared_3383_ = v_isSharedCheck_3387_;
goto v_resetjp_3381_;
}
else
{
lean_inc(v_a_3380_);
lean_dec(v___x_3367_);
v___x_3382_ = lean_box(0);
v_isShared_3383_ = v_isSharedCheck_3387_;
goto v_resetjp_3381_;
}
v_resetjp_3381_:
{
lean_object* v___x_3385_; 
if (v_isShared_3383_ == 0)
{
v___x_3385_ = v___x_3382_;
goto v_reusejp_3384_;
}
else
{
lean_object* v_reuseFailAlloc_3386_; 
v_reuseFailAlloc_3386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3386_, 0, v_a_3380_);
v___x_3385_ = v_reuseFailAlloc_3386_;
goto v_reusejp_3384_;
}
v_reusejp_3384_:
{
return v___x_3385_;
}
}
}
}
else
{
lean_object* v___x_3388_; lean_object* v___x_3389_; 
lean_dec_ref(v_alts_3363_);
lean_del_object(v___x_3319_);
v___x_3388_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3);
v___x_3389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3389_, 0, v___x_3388_);
return v___x_3389_;
}
}
}
else
{
lean_object* v___x_3390_; lean_object* v___x_3391_; uint8_t v___x_3392_; 
v___x_3390_ = l_Lean_Syntax_getArg(v___x_3356_, v___x_3355_);
lean_dec(v___x_3356_);
v___x_3391_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__8));
v___x_3392_ = l_Lean_Syntax_isOfKind(v___x_3390_, v___x_3391_);
if (v___x_3392_ == 0)
{
if (v___x_3322_ == 0)
{
lean_object* v___x_3393_; lean_object* v___x_3394_; 
lean_del_object(v___x_3319_);
lean_dec(v_val_3317_);
v___x_3393_ = lean_box(0);
v___x_3394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3394_, 0, v___x_3393_);
return v___x_3394_;
}
else
{
lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v_alts_3397_; lean_object* v___x_3398_; uint8_t v___x_3399_; 
v___x_3395_ = lean_unsigned_to_nat(1u);
v___x_3396_ = l_Lean_Syntax_getArg(v_val_3317_, v___x_3395_);
lean_dec(v_val_3317_);
v_alts_3397_ = l_Lean_Syntax_getArgs(v___x_3396_);
lean_dec(v___x_3396_);
v___x_3398_ = lean_array_get_size(v_alts_3397_);
v___x_3399_ = lean_nat_dec_eq(v___x_3398_, v___x_3355_);
if (v___x_3399_ == 0)
{
lean_object* v___x_3400_; lean_object* v___x_3401_; 
v___x_3400_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2);
v___x_3401_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg(v___x_3398_, v_alts_3397_, v___x_3398_, v___x_3355_, v___x_3400_, v_a_3309_, v_a_3310_, v_a_3311_, v_a_3312_, v_a_3313_, v_a_3314_);
lean_dec_ref(v_alts_3397_);
if (lean_obj_tag(v___x_3401_) == 0)
{
lean_object* v_a_3402_; lean_object* v___x_3404_; uint8_t v_isShared_3405_; uint8_t v_isSharedCheck_3413_; 
v_a_3402_ = lean_ctor_get(v___x_3401_, 0);
v_isSharedCheck_3413_ = !lean_is_exclusive(v___x_3401_);
if (v_isSharedCheck_3413_ == 0)
{
v___x_3404_ = v___x_3401_;
v_isShared_3405_ = v_isSharedCheck_3413_;
goto v_resetjp_3403_;
}
else
{
lean_inc(v_a_3402_);
lean_dec(v___x_3401_);
v___x_3404_ = lean_box(0);
v_isShared_3405_ = v_isSharedCheck_3413_;
goto v_resetjp_3403_;
}
v_resetjp_3403_:
{
lean_object* v_fst_3406_; lean_object* v___x_3408_; 
v_fst_3406_ = lean_ctor_get(v_a_3402_, 0);
lean_inc(v_fst_3406_);
lean_dec(v_a_3402_);
if (v_isShared_3320_ == 0)
{
lean_ctor_set(v___x_3319_, 0, v_fst_3406_);
v___x_3408_ = v___x_3319_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3412_; 
v_reuseFailAlloc_3412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3412_, 0, v_fst_3406_);
v___x_3408_ = v_reuseFailAlloc_3412_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
lean_object* v___x_3410_; 
if (v_isShared_3405_ == 0)
{
lean_ctor_set(v___x_3404_, 0, v___x_3408_);
v___x_3410_ = v___x_3404_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3411_; 
v_reuseFailAlloc_3411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3411_, 0, v___x_3408_);
v___x_3410_ = v_reuseFailAlloc_3411_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
return v___x_3410_;
}
}
}
}
else
{
lean_object* v_a_3414_; lean_object* v___x_3416_; uint8_t v_isShared_3417_; uint8_t v_isSharedCheck_3421_; 
lean_del_object(v___x_3319_);
v_a_3414_ = lean_ctor_get(v___x_3401_, 0);
v_isSharedCheck_3421_ = !lean_is_exclusive(v___x_3401_);
if (v_isSharedCheck_3421_ == 0)
{
v___x_3416_ = v___x_3401_;
v_isShared_3417_ = v_isSharedCheck_3421_;
goto v_resetjp_3415_;
}
else
{
lean_inc(v_a_3414_);
lean_dec(v___x_3401_);
v___x_3416_ = lean_box(0);
v_isShared_3417_ = v_isSharedCheck_3421_;
goto v_resetjp_3415_;
}
v_resetjp_3415_:
{
lean_object* v___x_3419_; 
if (v_isShared_3417_ == 0)
{
v___x_3419_ = v___x_3416_;
goto v_reusejp_3418_;
}
else
{
lean_object* v_reuseFailAlloc_3420_; 
v_reuseFailAlloc_3420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3420_, 0, v_a_3414_);
v___x_3419_ = v_reuseFailAlloc_3420_;
goto v_reusejp_3418_;
}
v_reusejp_3418_:
{
return v___x_3419_;
}
}
}
}
else
{
lean_object* v___x_3422_; lean_object* v___x_3423_; 
lean_dec_ref(v_alts_3397_);
lean_del_object(v___x_3319_);
v___x_3422_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3);
v___x_3423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3423_, 0, v___x_3422_);
return v___x_3423_;
}
}
}
else
{
lean_object* v___x_3424_; lean_object* v___x_3425_; 
lean_del_object(v___x_3319_);
lean_dec(v_val_3317_);
v___x_3424_ = lean_box(0);
v___x_3425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3425_, 0, v___x_3424_);
return v___x_3425_;
}
}
}
}
}
else
{
lean_object* v___x_3427_; lean_object* v___x_3428_; 
lean_dec(v___x_3316_);
v___x_3427_ = lean_box(0);
v___x_3428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3428_, 0, v___x_3427_);
return v___x_3428_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___boxed(lean_object* v_stx_3429_, lean_object* v_a_3430_, lean_object* v_a_3431_, lean_object* v_a_3432_, lean_object* v_a_3433_, lean_object* v_a_3434_, lean_object* v_a_3435_, lean_object* v_a_3436_){
_start:
{
lean_object* v_res_3437_; 
v_res_3437_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap(v_stx_3429_, v_a_3430_, v_a_3431_, v_a_3432_, v_a_3433_, v_a_3434_, v_a_3435_);
lean_dec(v_a_3435_);
lean_dec_ref(v_a_3434_);
lean_dec(v_a_3433_);
lean_dec_ref(v_a_3432_);
lean_dec(v_a_3431_);
lean_dec_ref(v_a_3430_);
lean_dec(v_stx_3429_);
return v_res_3437_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0(lean_object* v_00_u03b2_3438_, lean_object* v_m_3439_, lean_object* v_a_3440_, lean_object* v_b_3441_){
_start:
{
lean_object* v___x_3442_; 
v___x_3442_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0___redArg(v_m_3439_, v_a_3440_, v_b_3441_);
return v___x_3442_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1(lean_object* v_00_u03b2_3443_, lean_object* v_m_3444_, lean_object* v_a_3445_){
_start:
{
uint8_t v___x_3446_; 
v___x_3446_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(v_m_3444_, v_a_3445_);
return v___x_3446_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___boxed(lean_object* v_00_u03b2_3447_, lean_object* v_m_3448_, lean_object* v_a_3449_){
_start:
{
uint8_t v_res_3450_; lean_object* v_r_3451_; 
v_res_3450_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1(v_00_u03b2_3447_, v_m_3448_, v_a_3449_);
lean_dec(v_a_3449_);
lean_dec_ref(v_m_3448_);
v_r_3451_ = lean_box(v_res_3450_);
return v_r_3451_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3(lean_object* v_upperBound_3452_, lean_object* v_alts_3453_, lean_object* v___x_3454_, lean_object* v_inst_3455_, lean_object* v_R_3456_, lean_object* v_a_3457_, lean_object* v_b_3458_, lean_object* v_c_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_){
_start:
{
lean_object* v___x_3467_; 
v___x_3467_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg(v_upperBound_3452_, v_alts_3453_, v___x_3454_, v_a_3457_, v_b_3458_, v___y_3460_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
return v___x_3467_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___boxed(lean_object* v_upperBound_3468_, lean_object* v_alts_3469_, lean_object* v___x_3470_, lean_object* v_inst_3471_, lean_object* v_R_3472_, lean_object* v_a_3473_, lean_object* v_b_3474_, lean_object* v_c_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_){
_start:
{
lean_object* v_res_3483_; 
v_res_3483_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3(v_upperBound_3468_, v_alts_3469_, v___x_3470_, v_inst_3471_, v_R_3472_, v_a_3473_, v_b_3474_, v_c_3475_, v___y_3476_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_);
lean_dec(v___y_3481_);
lean_dec_ref(v___y_3480_);
lean_dec(v___y_3479_);
lean_dec_ref(v___y_3478_);
lean_dec(v___y_3477_);
lean_dec_ref(v___y_3476_);
lean_dec(v___x_3470_);
lean_dec_ref(v_alts_3469_);
lean_dec(v_upperBound_3468_);
return v_res_3483_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0(lean_object* v_00_u03b2_3484_, lean_object* v_a_3485_, lean_object* v_x_3486_){
_start:
{
uint8_t v___x_3487_; 
v___x_3487_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg(v_a_3485_, v_x_3486_);
return v___x_3487_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3488_, lean_object* v_a_3489_, lean_object* v_x_3490_){
_start:
{
uint8_t v_res_3491_; lean_object* v_r_3492_; 
v_res_3491_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0(v_00_u03b2_3488_, v_a_3489_, v_x_3490_);
lean_dec(v_x_3490_);
lean_dec(v_a_3489_);
v_r_3492_ = lean_box(v_res_3491_);
return v_r_3492_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1(lean_object* v_00_u03b2_3493_, lean_object* v_data_3494_){
_start:
{
lean_object* v___x_3495_; 
v___x_3495_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1___redArg(v_data_3494_);
return v___x_3495_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__2(lean_object* v_00_u03b2_3496_, lean_object* v_a_3497_, lean_object* v_b_3498_, lean_object* v_x_3499_){
_start:
{
lean_object* v___x_3500_; 
v___x_3500_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__2___redArg(v_a_3497_, v_b_3498_, v_x_3499_);
return v___x_3500_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_3501_, lean_object* v_i_3502_, lean_object* v_source_3503_, lean_object* v_target_3504_){
_start:
{
lean_object* v___x_3505_; 
v___x_3505_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3___redArg(v_i_3502_, v_source_3503_, v_target_3504_);
return v___x_3505_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3_spec__6(lean_object* v_00_u03b2_3506_, lean_object* v_x_3507_, lean_object* v_x_3508_){
_start:
{
lean_object* v___x_3509_; 
v___x_3509_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3_spec__6___redArg(v_x_3507_, v_x_3508_);
return v___x_3509_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___redArg(lean_object* v_a_3510_, lean_object* v_x_3511_){
_start:
{
if (lean_obj_tag(v_x_3511_) == 0)
{
lean_object* v___x_3512_; 
v___x_3512_ = lean_box(0);
return v___x_3512_;
}
else
{
lean_object* v_key_3513_; lean_object* v_value_3514_; lean_object* v_tail_3515_; uint8_t v___x_3516_; 
v_key_3513_ = lean_ctor_get(v_x_3511_, 0);
v_value_3514_ = lean_ctor_get(v_x_3511_, 1);
v_tail_3515_ = lean_ctor_get(v_x_3511_, 2);
v___x_3516_ = lean_nat_dec_eq(v_key_3513_, v_a_3510_);
if (v___x_3516_ == 0)
{
v_x_3511_ = v_tail_3515_;
goto _start;
}
else
{
lean_object* v___x_3518_; 
lean_inc(v_value_3514_);
v___x_3518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3518_, 0, v_value_3514_);
return v___x_3518_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___redArg___boxed(lean_object* v_a_3519_, lean_object* v_x_3520_){
_start:
{
lean_object* v_res_3521_; 
v_res_3521_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___redArg(v_a_3519_, v_x_3520_);
lean_dec(v_x_3520_);
lean_dec(v_a_3519_);
return v_res_3521_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg(lean_object* v_m_3522_, lean_object* v_a_3523_){
_start:
{
lean_object* v_buckets_3524_; lean_object* v___x_3525_; uint64_t v___x_3526_; uint64_t v___x_3527_; uint64_t v___x_3528_; uint64_t v_fold_3529_; uint64_t v___x_3530_; uint64_t v___x_3531_; uint64_t v___x_3532_; size_t v___x_3533_; size_t v___x_3534_; size_t v___x_3535_; size_t v___x_3536_; size_t v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; 
v_buckets_3524_ = lean_ctor_get(v_m_3522_, 1);
v___x_3525_ = lean_array_get_size(v_buckets_3524_);
v___x_3526_ = lean_uint64_of_nat(v_a_3523_);
v___x_3527_ = 32ULL;
v___x_3528_ = lean_uint64_shift_right(v___x_3526_, v___x_3527_);
v_fold_3529_ = lean_uint64_xor(v___x_3526_, v___x_3528_);
v___x_3530_ = 16ULL;
v___x_3531_ = lean_uint64_shift_right(v_fold_3529_, v___x_3530_);
v___x_3532_ = lean_uint64_xor(v_fold_3529_, v___x_3531_);
v___x_3533_ = lean_uint64_to_usize(v___x_3532_);
v___x_3534_ = lean_usize_of_nat(v___x_3525_);
v___x_3535_ = ((size_t)1ULL);
v___x_3536_ = lean_usize_sub(v___x_3534_, v___x_3535_);
v___x_3537_ = lean_usize_land(v___x_3533_, v___x_3536_);
v___x_3538_ = lean_array_uget_borrowed(v_buckets_3524_, v___x_3537_);
v___x_3539_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___redArg(v_a_3523_, v___x_3538_);
return v___x_3539_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg___boxed(lean_object* v_m_3540_, lean_object* v_a_3541_){
_start:
{
lean_object* v_res_3542_; 
v_res_3542_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg(v_m_3540_, v_a_3541_);
lean_dec(v_a_3541_);
lean_dec_ref(v_m_3540_);
return v_res_3542_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__5___redArg(lean_object* v_m_3543_, lean_object* v_a_3544_, lean_object* v_b_3545_){
_start:
{
lean_object* v_size_3546_; lean_object* v_buckets_3547_; lean_object* v___x_3548_; uint64_t v___x_3549_; uint64_t v___x_3550_; uint64_t v___x_3551_; uint64_t v_fold_3552_; uint64_t v___x_3553_; uint64_t v___x_3554_; uint64_t v___x_3555_; size_t v___x_3556_; size_t v___x_3557_; size_t v___x_3558_; size_t v___x_3559_; size_t v___x_3560_; lean_object* v_bkt_3561_; uint8_t v___x_3562_; 
v_size_3546_ = lean_ctor_get(v_m_3543_, 0);
v_buckets_3547_ = lean_ctor_get(v_m_3543_, 1);
v___x_3548_ = lean_array_get_size(v_buckets_3547_);
v___x_3549_ = lean_uint64_of_nat(v_a_3544_);
v___x_3550_ = 32ULL;
v___x_3551_ = lean_uint64_shift_right(v___x_3549_, v___x_3550_);
v_fold_3552_ = lean_uint64_xor(v___x_3549_, v___x_3551_);
v___x_3553_ = 16ULL;
v___x_3554_ = lean_uint64_shift_right(v_fold_3552_, v___x_3553_);
v___x_3555_ = lean_uint64_xor(v_fold_3552_, v___x_3554_);
v___x_3556_ = lean_uint64_to_usize(v___x_3555_);
v___x_3557_ = lean_usize_of_nat(v___x_3548_);
v___x_3558_ = ((size_t)1ULL);
v___x_3559_ = lean_usize_sub(v___x_3557_, v___x_3558_);
v___x_3560_ = lean_usize_land(v___x_3556_, v___x_3559_);
v_bkt_3561_ = lean_array_uget_borrowed(v_buckets_3547_, v___x_3560_);
v___x_3562_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg(v_a_3544_, v_bkt_3561_);
if (v___x_3562_ == 0)
{
lean_object* v___x_3564_; uint8_t v_isShared_3565_; uint8_t v_isSharedCheck_3583_; 
lean_inc_ref(v_buckets_3547_);
lean_inc(v_size_3546_);
v_isSharedCheck_3583_ = !lean_is_exclusive(v_m_3543_);
if (v_isSharedCheck_3583_ == 0)
{
lean_object* v_unused_3584_; lean_object* v_unused_3585_; 
v_unused_3584_ = lean_ctor_get(v_m_3543_, 1);
lean_dec(v_unused_3584_);
v_unused_3585_ = lean_ctor_get(v_m_3543_, 0);
lean_dec(v_unused_3585_);
v___x_3564_ = v_m_3543_;
v_isShared_3565_ = v_isSharedCheck_3583_;
goto v_resetjp_3563_;
}
else
{
lean_dec(v_m_3543_);
v___x_3564_ = lean_box(0);
v_isShared_3565_ = v_isSharedCheck_3583_;
goto v_resetjp_3563_;
}
v_resetjp_3563_:
{
lean_object* v___x_3566_; lean_object* v_size_x27_3567_; lean_object* v___x_3568_; lean_object* v_buckets_x27_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; uint8_t v___x_3575_; 
v___x_3566_ = lean_unsigned_to_nat(1u);
v_size_x27_3567_ = lean_nat_add(v_size_3546_, v___x_3566_);
lean_dec(v_size_3546_);
lean_inc(v_bkt_3561_);
v___x_3568_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3568_, 0, v_a_3544_);
lean_ctor_set(v___x_3568_, 1, v_b_3545_);
lean_ctor_set(v___x_3568_, 2, v_bkt_3561_);
v_buckets_x27_3569_ = lean_array_uset(v_buckets_3547_, v___x_3560_, v___x_3568_);
v___x_3570_ = lean_unsigned_to_nat(4u);
v___x_3571_ = lean_nat_mul(v_size_x27_3567_, v___x_3570_);
v___x_3572_ = lean_unsigned_to_nat(3u);
v___x_3573_ = lean_nat_div(v___x_3571_, v___x_3572_);
lean_dec(v___x_3571_);
v___x_3574_ = lean_array_get_size(v_buckets_x27_3569_);
v___x_3575_ = lean_nat_dec_le(v___x_3573_, v___x_3574_);
lean_dec(v___x_3573_);
if (v___x_3575_ == 0)
{
lean_object* v_val_3576_; lean_object* v___x_3578_; 
v_val_3576_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1___redArg(v_buckets_x27_3569_);
if (v_isShared_3565_ == 0)
{
lean_ctor_set(v___x_3564_, 1, v_val_3576_);
lean_ctor_set(v___x_3564_, 0, v_size_x27_3567_);
v___x_3578_ = v___x_3564_;
goto v_reusejp_3577_;
}
else
{
lean_object* v_reuseFailAlloc_3579_; 
v_reuseFailAlloc_3579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3579_, 0, v_size_x27_3567_);
lean_ctor_set(v_reuseFailAlloc_3579_, 1, v_val_3576_);
v___x_3578_ = v_reuseFailAlloc_3579_;
goto v_reusejp_3577_;
}
v_reusejp_3577_:
{
return v___x_3578_;
}
}
else
{
lean_object* v___x_3581_; 
if (v_isShared_3565_ == 0)
{
lean_ctor_set(v___x_3564_, 1, v_buckets_x27_3569_);
lean_ctor_set(v___x_3564_, 0, v_size_x27_3567_);
v___x_3581_ = v___x_3564_;
goto v_reusejp_3580_;
}
else
{
lean_object* v_reuseFailAlloc_3582_; 
v_reuseFailAlloc_3582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3582_, 0, v_size_x27_3567_);
lean_ctor_set(v_reuseFailAlloc_3582_, 1, v_buckets_x27_3569_);
v___x_3581_ = v_reuseFailAlloc_3582_;
goto v_reusejp_3580_;
}
v_reusejp_3580_:
{
return v___x_3581_;
}
}
}
}
else
{
lean_dec(v_b_3545_);
lean_dec(v_a_3544_);
return v_m_3543_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___redArg(lean_object* v_upperBound_3586_, lean_object* v_alts_3587_, lean_object* v_invariants_3588_, lean_object* v_a_3589_, lean_object* v_b_3590_, lean_object* v___y_3591_, lean_object* v___y_3592_, lean_object* v___y_3593_, lean_object* v___y_3594_, lean_object* v___y_3595_, lean_object* v___y_3596_){
_start:
{
lean_object* v_a_3599_; uint8_t v___x_3603_; 
v___x_3603_ = lean_nat_dec_lt(v_a_3589_, v_upperBound_3586_);
if (v___x_3603_ == 0)
{
lean_object* v___x_3604_; 
lean_dec(v_a_3589_);
v___x_3604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3604_, 0, v_b_3590_);
return v___x_3604_;
}
else
{
lean_object* v___x_3605_; lean_object* v___x_3606_; uint8_t v___x_3607_; 
v___x_3605_ = lean_unsigned_to_nat(1u);
v___x_3606_ = lean_nat_add(v_a_3589_, v___x_3605_);
v___x_3607_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(v_b_3590_, v___x_3606_);
if (v___x_3607_ == 0)
{
lean_object* v___x_3608_; 
v___x_3608_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg(v_alts_3587_, v___x_3606_);
if (lean_obj_tag(v___x_3608_) == 1)
{
lean_object* v___x_3609_; lean_object* v___x_3610_; 
lean_dec_ref_known(v___x_3608_, 1);
v___x_3609_ = lean_array_fget_borrowed(v_invariants_3588_, v_a_3589_);
lean_inc(v___x_3609_);
v___x_3610_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant(v_alts_3587_, v___x_3606_, v___x_3609_, v___y_3591_, v___y_3592_, v___y_3593_, v___y_3594_, v___y_3595_, v___y_3596_);
if (lean_obj_tag(v___x_3610_) == 0)
{
lean_object* v___x_3611_; lean_object* v___x_3612_; 
lean_dec_ref_known(v___x_3610_, 1);
v___x_3611_ = lean_box(0);
v___x_3612_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__5___redArg(v_b_3590_, v___x_3606_, v___x_3611_);
v_a_3599_ = v___x_3612_;
goto v___jp_3598_;
}
else
{
lean_object* v_a_3613_; lean_object* v___x_3615_; uint8_t v_isShared_3616_; uint8_t v_isSharedCheck_3620_; 
lean_dec(v___x_3606_);
lean_dec_ref(v_b_3590_);
lean_dec(v_a_3589_);
v_a_3613_ = lean_ctor_get(v___x_3610_, 0);
v_isSharedCheck_3620_ = !lean_is_exclusive(v___x_3610_);
if (v_isSharedCheck_3620_ == 0)
{
v___x_3615_ = v___x_3610_;
v_isShared_3616_ = v_isSharedCheck_3620_;
goto v_resetjp_3614_;
}
else
{
lean_inc(v_a_3613_);
lean_dec(v___x_3610_);
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
else
{
lean_dec(v___x_3608_);
lean_dec(v___x_3606_);
v_a_3599_ = v_b_3590_;
goto v___jp_3598_;
}
}
else
{
lean_dec(v___x_3606_);
v_a_3599_ = v_b_3590_;
goto v___jp_3598_;
}
}
v___jp_3598_:
{
lean_object* v___x_3600_; lean_object* v___x_3601_; 
v___x_3600_ = lean_unsigned_to_nat(1u);
v___x_3601_ = lean_nat_add(v_a_3589_, v___x_3600_);
lean_dec(v_a_3589_);
v_a_3589_ = v___x_3601_;
v_b_3590_ = v_a_3599_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___redArg___boxed(lean_object* v_upperBound_3621_, lean_object* v_alts_3622_, lean_object* v_invariants_3623_, lean_object* v_a_3624_, lean_object* v_b_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_){
_start:
{
lean_object* v_res_3633_; 
v_res_3633_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___redArg(v_upperBound_3621_, v_alts_3622_, v_invariants_3623_, v_a_3624_, v_b_3625_, v___y_3626_, v___y_3627_, v___y_3628_, v___y_3629_, v___y_3630_, v___y_3631_);
lean_dec(v___y_3631_);
lean_dec_ref(v___y_3630_);
lean_dec(v___y_3629_);
lean_dec_ref(v___y_3628_);
lean_dec(v___y_3627_);
lean_dec_ref(v___y_3626_);
lean_dec_ref(v_invariants_3623_);
lean_dec_ref(v_alts_3622_);
lean_dec(v_upperBound_3621_);
return v_res_3633_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___redArg(lean_object* v_ref_3634_, lean_object* v_msgData_3635_, uint8_t v_severity_3636_, uint8_t v_isSilent_3637_, lean_object* v___y_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_){
_start:
{
lean_object* v___y_3644_; lean_object* v___y_3645_; lean_object* v___y_3646_; uint8_t v___y_3647_; uint8_t v___y_3648_; lean_object* v___y_3649_; lean_object* v___y_3650_; lean_object* v___y_3651_; lean_object* v___y_3652_; lean_object* v___y_3680_; lean_object* v___y_3681_; lean_object* v___y_3682_; uint8_t v___y_3683_; uint8_t v___y_3684_; lean_object* v___y_3685_; uint8_t v___y_3686_; lean_object* v___y_3687_; lean_object* v___y_3705_; lean_object* v___y_3706_; lean_object* v___y_3707_; lean_object* v___y_3708_; uint8_t v___y_3709_; uint8_t v___y_3710_; uint8_t v___y_3711_; lean_object* v___y_3712_; lean_object* v___y_3716_; lean_object* v___y_3717_; lean_object* v___y_3718_; lean_object* v___y_3719_; uint8_t v___y_3720_; uint8_t v___y_3721_; uint8_t v___y_3722_; uint8_t v___x_3727_; lean_object* v___y_3729_; lean_object* v___y_3730_; lean_object* v___y_3731_; lean_object* v___y_3732_; uint8_t v___y_3733_; uint8_t v___y_3734_; uint8_t v___y_3735_; uint8_t v___y_3737_; uint8_t v___x_3752_; 
v___x_3727_ = 2;
v___x_3752_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3636_, v___x_3727_);
if (v___x_3752_ == 0)
{
v___y_3737_ = v___x_3752_;
goto v___jp_3736_;
}
else
{
uint8_t v___x_3753_; 
lean_inc_ref(v_msgData_3635_);
v___x_3753_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_3635_);
v___y_3737_ = v___x_3753_;
goto v___jp_3736_;
}
v___jp_3643_:
{
lean_object* v___x_3653_; lean_object* v_currNamespace_3654_; lean_object* v_openDecls_3655_; lean_object* v_env_3656_; lean_object* v_nextMacroScope_3657_; lean_object* v_ngen_3658_; lean_object* v_auxDeclNGen_3659_; lean_object* v_traceState_3660_; lean_object* v_cache_3661_; lean_object* v_messages_3662_; lean_object* v_infoState_3663_; lean_object* v_snapshotTasks_3664_; lean_object* v___x_3666_; uint8_t v_isShared_3667_; uint8_t v_isSharedCheck_3678_; 
v___x_3653_ = lean_st_ref_take(v___y_3652_);
v_currNamespace_3654_ = lean_ctor_get(v___y_3651_, 6);
v_openDecls_3655_ = lean_ctor_get(v___y_3651_, 7);
v_env_3656_ = lean_ctor_get(v___x_3653_, 0);
v_nextMacroScope_3657_ = lean_ctor_get(v___x_3653_, 1);
v_ngen_3658_ = lean_ctor_get(v___x_3653_, 2);
v_auxDeclNGen_3659_ = lean_ctor_get(v___x_3653_, 3);
v_traceState_3660_ = lean_ctor_get(v___x_3653_, 4);
v_cache_3661_ = lean_ctor_get(v___x_3653_, 5);
v_messages_3662_ = lean_ctor_get(v___x_3653_, 6);
v_infoState_3663_ = lean_ctor_get(v___x_3653_, 7);
v_snapshotTasks_3664_ = lean_ctor_get(v___x_3653_, 8);
v_isSharedCheck_3678_ = !lean_is_exclusive(v___x_3653_);
if (v_isSharedCheck_3678_ == 0)
{
v___x_3666_ = v___x_3653_;
v_isShared_3667_ = v_isSharedCheck_3678_;
goto v_resetjp_3665_;
}
else
{
lean_inc(v_snapshotTasks_3664_);
lean_inc(v_infoState_3663_);
lean_inc(v_messages_3662_);
lean_inc(v_cache_3661_);
lean_inc(v_traceState_3660_);
lean_inc(v_auxDeclNGen_3659_);
lean_inc(v_ngen_3658_);
lean_inc(v_nextMacroScope_3657_);
lean_inc(v_env_3656_);
lean_dec(v___x_3653_);
v___x_3666_ = lean_box(0);
v_isShared_3667_ = v_isSharedCheck_3678_;
goto v_resetjp_3665_;
}
v_resetjp_3665_:
{
lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3673_; 
lean_inc(v_openDecls_3655_);
lean_inc(v_currNamespace_3654_);
v___x_3668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3668_, 0, v_currNamespace_3654_);
lean_ctor_set(v___x_3668_, 1, v_openDecls_3655_);
v___x_3669_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3669_, 0, v___x_3668_);
lean_ctor_set(v___x_3669_, 1, v___y_3644_);
lean_inc_ref(v___y_3645_);
lean_inc_ref(v___y_3646_);
v___x_3670_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_3670_, 0, v___y_3646_);
lean_ctor_set(v___x_3670_, 1, v___y_3650_);
lean_ctor_set(v___x_3670_, 2, v___y_3649_);
lean_ctor_set(v___x_3670_, 3, v___y_3645_);
lean_ctor_set(v___x_3670_, 4, v___x_3669_);
lean_ctor_set_uint8(v___x_3670_, sizeof(void*)*5, v___y_3648_);
lean_ctor_set_uint8(v___x_3670_, sizeof(void*)*5 + 1, v___y_3647_);
lean_ctor_set_uint8(v___x_3670_, sizeof(void*)*5 + 2, v_isSilent_3637_);
v___x_3671_ = l_Lean_MessageLog_add(v___x_3670_, v_messages_3662_);
if (v_isShared_3667_ == 0)
{
lean_ctor_set(v___x_3666_, 6, v___x_3671_);
v___x_3673_ = v___x_3666_;
goto v_reusejp_3672_;
}
else
{
lean_object* v_reuseFailAlloc_3677_; 
v_reuseFailAlloc_3677_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3677_, 0, v_env_3656_);
lean_ctor_set(v_reuseFailAlloc_3677_, 1, v_nextMacroScope_3657_);
lean_ctor_set(v_reuseFailAlloc_3677_, 2, v_ngen_3658_);
lean_ctor_set(v_reuseFailAlloc_3677_, 3, v_auxDeclNGen_3659_);
lean_ctor_set(v_reuseFailAlloc_3677_, 4, v_traceState_3660_);
lean_ctor_set(v_reuseFailAlloc_3677_, 5, v_cache_3661_);
lean_ctor_set(v_reuseFailAlloc_3677_, 6, v___x_3671_);
lean_ctor_set(v_reuseFailAlloc_3677_, 7, v_infoState_3663_);
lean_ctor_set(v_reuseFailAlloc_3677_, 8, v_snapshotTasks_3664_);
v___x_3673_ = v_reuseFailAlloc_3677_;
goto v_reusejp_3672_;
}
v_reusejp_3672_:
{
lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; 
v___x_3674_ = lean_st_ref_set(v___y_3652_, v___x_3673_);
v___x_3675_ = lean_box(0);
v___x_3676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3676_, 0, v___x_3675_);
return v___x_3676_;
}
}
}
v___jp_3679_:
{
lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v_a_3690_; lean_object* v___x_3692_; uint8_t v_isShared_3693_; uint8_t v_isSharedCheck_3703_; 
v___x_3688_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_3635_);
v___x_3689_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__1(v___x_3688_, v___y_3638_, v___y_3639_, v___y_3640_, v___y_3641_);
v_a_3690_ = lean_ctor_get(v___x_3689_, 0);
v_isSharedCheck_3703_ = !lean_is_exclusive(v___x_3689_);
if (v_isSharedCheck_3703_ == 0)
{
v___x_3692_ = v___x_3689_;
v_isShared_3693_ = v_isSharedCheck_3703_;
goto v_resetjp_3691_;
}
else
{
lean_inc(v_a_3690_);
lean_dec(v___x_3689_);
v___x_3692_ = lean_box(0);
v_isShared_3693_ = v_isSharedCheck_3703_;
goto v_resetjp_3691_;
}
v_resetjp_3691_:
{
lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; 
lean_inc_ref_n(v___y_3682_, 2);
v___x_3694_ = l_Lean_FileMap_toPosition(v___y_3682_, v___y_3685_);
lean_dec(v___y_3685_);
v___x_3695_ = l_Lean_FileMap_toPosition(v___y_3682_, v___y_3687_);
lean_dec(v___y_3687_);
v___x_3696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3696_, 0, v___x_3695_);
v___x_3697_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___closed__0));
if (v___y_3686_ == 0)
{
lean_del_object(v___x_3692_);
lean_dec_ref(v___y_3680_);
v___y_3644_ = v_a_3690_;
v___y_3645_ = v___x_3697_;
v___y_3646_ = v___y_3681_;
v___y_3647_ = v___y_3684_;
v___y_3648_ = v___y_3683_;
v___y_3649_ = v___x_3696_;
v___y_3650_ = v___x_3694_;
v___y_3651_ = v___y_3640_;
v___y_3652_ = v___y_3641_;
goto v___jp_3643_;
}
else
{
uint8_t v___x_3698_; 
lean_inc(v_a_3690_);
v___x_3698_ = l_Lean_MessageData_hasTag(v___y_3680_, v_a_3690_);
if (v___x_3698_ == 0)
{
lean_object* v___x_3699_; lean_object* v___x_3701_; 
lean_dec_ref_known(v___x_3696_, 1);
lean_dec_ref(v___x_3694_);
lean_dec(v_a_3690_);
v___x_3699_ = lean_box(0);
if (v_isShared_3693_ == 0)
{
lean_ctor_set(v___x_3692_, 0, v___x_3699_);
v___x_3701_ = v___x_3692_;
goto v_reusejp_3700_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v___x_3699_);
v___x_3701_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3700_;
}
v_reusejp_3700_:
{
return v___x_3701_;
}
}
else
{
lean_del_object(v___x_3692_);
v___y_3644_ = v_a_3690_;
v___y_3645_ = v___x_3697_;
v___y_3646_ = v___y_3681_;
v___y_3647_ = v___y_3684_;
v___y_3648_ = v___y_3683_;
v___y_3649_ = v___x_3696_;
v___y_3650_ = v___x_3694_;
v___y_3651_ = v___y_3640_;
v___y_3652_ = v___y_3641_;
goto v___jp_3643_;
}
}
}
}
v___jp_3704_:
{
lean_object* v___x_3713_; 
v___x_3713_ = l_Lean_Syntax_getTailPos_x3f(v___y_3707_, v___y_3710_);
lean_dec(v___y_3707_);
if (lean_obj_tag(v___x_3713_) == 0)
{
lean_inc(v___y_3712_);
v___y_3680_ = v___y_3705_;
v___y_3681_ = v___y_3706_;
v___y_3682_ = v___y_3708_;
v___y_3683_ = v___y_3710_;
v___y_3684_ = v___y_3709_;
v___y_3685_ = v___y_3712_;
v___y_3686_ = v___y_3711_;
v___y_3687_ = v___y_3712_;
goto v___jp_3679_;
}
else
{
lean_object* v_val_3714_; 
v_val_3714_ = lean_ctor_get(v___x_3713_, 0);
lean_inc(v_val_3714_);
lean_dec_ref_known(v___x_3713_, 1);
v___y_3680_ = v___y_3705_;
v___y_3681_ = v___y_3706_;
v___y_3682_ = v___y_3708_;
v___y_3683_ = v___y_3710_;
v___y_3684_ = v___y_3709_;
v___y_3685_ = v___y_3712_;
v___y_3686_ = v___y_3711_;
v___y_3687_ = v_val_3714_;
goto v___jp_3679_;
}
}
v___jp_3715_:
{
lean_object* v_ref_3723_; lean_object* v___x_3724_; 
v_ref_3723_ = l_Lean_replaceRef(v_ref_3634_, v___y_3719_);
v___x_3724_ = l_Lean_Syntax_getPos_x3f(v_ref_3723_, v___y_3720_);
if (lean_obj_tag(v___x_3724_) == 0)
{
lean_object* v___x_3725_; 
v___x_3725_ = lean_unsigned_to_nat(0u);
v___y_3705_ = v___y_3716_;
v___y_3706_ = v___y_3717_;
v___y_3707_ = v_ref_3723_;
v___y_3708_ = v___y_3718_;
v___y_3709_ = v___y_3722_;
v___y_3710_ = v___y_3720_;
v___y_3711_ = v___y_3721_;
v___y_3712_ = v___x_3725_;
goto v___jp_3704_;
}
else
{
lean_object* v_val_3726_; 
v_val_3726_ = lean_ctor_get(v___x_3724_, 0);
lean_inc(v_val_3726_);
lean_dec_ref_known(v___x_3724_, 1);
v___y_3705_ = v___y_3716_;
v___y_3706_ = v___y_3717_;
v___y_3707_ = v_ref_3723_;
v___y_3708_ = v___y_3718_;
v___y_3709_ = v___y_3722_;
v___y_3710_ = v___y_3720_;
v___y_3711_ = v___y_3721_;
v___y_3712_ = v_val_3726_;
goto v___jp_3704_;
}
}
v___jp_3728_:
{
if (v___y_3735_ == 0)
{
v___y_3716_ = v___y_3729_;
v___y_3717_ = v___y_3730_;
v___y_3718_ = v___y_3732_;
v___y_3719_ = v___y_3731_;
v___y_3720_ = v___y_3734_;
v___y_3721_ = v___y_3733_;
v___y_3722_ = v_severity_3636_;
goto v___jp_3715_;
}
else
{
v___y_3716_ = v___y_3729_;
v___y_3717_ = v___y_3730_;
v___y_3718_ = v___y_3732_;
v___y_3719_ = v___y_3731_;
v___y_3720_ = v___y_3734_;
v___y_3721_ = v___y_3733_;
v___y_3722_ = v___x_3727_;
goto v___jp_3715_;
}
}
v___jp_3736_:
{
if (v___y_3737_ == 0)
{
lean_object* v_fileName_3738_; lean_object* v_fileMap_3739_; lean_object* v_options_3740_; lean_object* v_ref_3741_; uint8_t v_suppressElabErrors_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___f_3745_; uint8_t v___x_3746_; uint8_t v___x_3747_; 
v_fileName_3738_ = lean_ctor_get(v___y_3640_, 0);
v_fileMap_3739_ = lean_ctor_get(v___y_3640_, 1);
v_options_3740_ = lean_ctor_get(v___y_3640_, 2);
v_ref_3741_ = lean_ctor_get(v___y_3640_, 5);
v_suppressElabErrors_3742_ = lean_ctor_get_uint8(v___y_3640_, sizeof(void*)*14 + 1);
v___x_3743_ = lean_box(v___y_3737_);
v___x_3744_ = lean_box(v_suppressElabErrors_3742_);
v___f_3745_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3745_, 0, v___x_3743_);
lean_closure_set(v___f_3745_, 1, v___x_3744_);
v___x_3746_ = 1;
v___x_3747_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3636_, v___x_3746_);
if (v___x_3747_ == 0)
{
v___y_3729_ = v___f_3745_;
v___y_3730_ = v_fileName_3738_;
v___y_3731_ = v_ref_3741_;
v___y_3732_ = v_fileMap_3739_;
v___y_3733_ = v_suppressElabErrors_3742_;
v___y_3734_ = v___y_3737_;
v___y_3735_ = v___x_3747_;
goto v___jp_3728_;
}
else
{
lean_object* v___x_3748_; uint8_t v___x_3749_; 
v___x_3748_ = l_Lean_warningAsError;
v___x_3749_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__5(v_options_3740_, v___x_3748_);
v___y_3729_ = v___f_3745_;
v___y_3730_ = v_fileName_3738_;
v___y_3731_ = v_ref_3741_;
v___y_3732_ = v_fileMap_3739_;
v___y_3733_ = v_suppressElabErrors_3742_;
v___y_3734_ = v___y_3737_;
v___y_3735_ = v___x_3749_;
goto v___jp_3728_;
}
}
else
{
lean_object* v___x_3750_; lean_object* v___x_3751_; 
lean_dec_ref(v_msgData_3635_);
v___x_3750_ = lean_box(0);
v___x_3751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3751_, 0, v___x_3750_);
return v___x_3751_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___redArg___boxed(lean_object* v_ref_3754_, lean_object* v_msgData_3755_, lean_object* v_severity_3756_, lean_object* v_isSilent_3757_, lean_object* v___y_3758_, lean_object* v___y_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_, lean_object* v___y_3762_){
_start:
{
uint8_t v_severity_boxed_3763_; uint8_t v_isSilent_boxed_3764_; lean_object* v_res_3765_; 
v_severity_boxed_3763_ = lean_unbox(v_severity_3756_);
v_isSilent_boxed_3764_ = lean_unbox(v_isSilent_3757_);
v_res_3765_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___redArg(v_ref_3754_, v_msgData_3755_, v_severity_boxed_3763_, v_isSilent_boxed_3764_, v___y_3758_, v___y_3759_, v___y_3760_, v___y_3761_);
lean_dec(v___y_3761_);
lean_dec_ref(v___y_3760_);
lean_dec(v___y_3759_);
lean_dec_ref(v___y_3758_);
lean_dec(v_ref_3754_);
return v_res_3765_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0(lean_object* v_ref_3766_, lean_object* v_msgData_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_, lean_object* v___y_3773_){
_start:
{
uint8_t v___x_3775_; uint8_t v___x_3776_; lean_object* v___x_3777_; 
v___x_3775_ = 1;
v___x_3776_ = 0;
v___x_3777_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___redArg(v_ref_3766_, v_msgData_3767_, v___x_3775_, v___x_3776_, v___y_3770_, v___y_3771_, v___y_3772_, v___y_3773_);
return v___x_3777_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0___boxed(lean_object* v_ref_3778_, lean_object* v_msgData_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_, lean_object* v___y_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_){
_start:
{
lean_object* v_res_3787_; 
v_res_3787_ = l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0(v_ref_3778_, v_msgData_3779_, v___y_3780_, v___y_3781_, v___y_3782_, v___y_3783_, v___y_3784_, v___y_3785_);
lean_dec(v___y_3785_);
lean_dec_ref(v___y_3784_);
lean_dec(v___y_3783_);
lean_dec_ref(v___y_3782_);
lean_dec(v___y_3781_);
lean_dec_ref(v___y_3780_);
lean_dec(v_ref_3778_);
return v_res_3787_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1(lean_object* v_a_3790_, lean_object* v_as_3791_, size_t v_sz_3792_, size_t v_i_3793_, lean_object* v_b_3794_, lean_object* v___y_3795_, lean_object* v___y_3796_, lean_object* v___y_3797_, lean_object* v___y_3798_, lean_object* v___y_3799_, lean_object* v___y_3800_){
_start:
{
lean_object* v_a_3803_; uint8_t v___x_3807_; 
v___x_3807_ = lean_usize_dec_lt(v_i_3793_, v_sz_3792_);
if (v___x_3807_ == 0)
{
lean_object* v___x_3808_; 
v___x_3808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3808_, 0, v_b_3794_);
return v___x_3808_;
}
else
{
lean_object* v_a_3809_; lean_object* v_fst_3810_; lean_object* v_snd_3811_; lean_object* v___x_3812_; uint8_t v___x_3813_; 
v_a_3809_ = lean_array_uget_borrowed(v_as_3791_, v_i_3793_);
v_fst_3810_ = lean_ctor_get(v_a_3809_, 0);
v_snd_3811_ = lean_ctor_get(v_a_3809_, 1);
v___x_3812_ = lean_box(0);
v___x_3813_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(v_a_3790_, v_fst_3810_);
if (v___x_3813_ == 0)
{
lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; 
v___x_3814_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__0));
lean_inc(v_fst_3810_);
v___x_3815_ = l_Nat_reprFast(v_fst_3810_);
v___x_3816_ = lean_string_append(v___x_3814_, v___x_3815_);
lean_dec_ref(v___x_3815_);
v___x_3817_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__1));
v___x_3818_ = lean_string_append(v___x_3816_, v___x_3817_);
v___x_3819_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3819_, 0, v___x_3818_);
v___x_3820_ = l_Lean_MessageData_ofFormat(v___x_3819_);
v___x_3821_ = l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0(v_snd_3811_, v___x_3820_, v___y_3795_, v___y_3796_, v___y_3797_, v___y_3798_, v___y_3799_, v___y_3800_);
if (lean_obj_tag(v___x_3821_) == 0)
{
lean_dec_ref_known(v___x_3821_, 1);
v_a_3803_ = v___x_3812_;
goto v___jp_3802_;
}
else
{
return v___x_3821_;
}
}
else
{
v_a_3803_ = v___x_3812_;
goto v___jp_3802_;
}
}
v___jp_3802_:
{
size_t v___x_3804_; size_t v___x_3805_; 
v___x_3804_ = ((size_t)1ULL);
v___x_3805_ = lean_usize_add(v_i_3793_, v___x_3804_);
v_i_3793_ = v___x_3805_;
v_b_3794_ = v_a_3803_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___boxed(lean_object* v_a_3822_, lean_object* v_as_3823_, lean_object* v_sz_3824_, lean_object* v_i_3825_, lean_object* v_b_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_){
_start:
{
size_t v_sz_boxed_3834_; size_t v_i_boxed_3835_; lean_object* v_res_3836_; 
v_sz_boxed_3834_ = lean_unbox_usize(v_sz_3824_);
lean_dec(v_sz_3824_);
v_i_boxed_3835_ = lean_unbox_usize(v_i_3825_);
lean_dec(v_i_3825_);
v_res_3836_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1(v_a_3822_, v_as_3823_, v_sz_boxed_3834_, v_i_boxed_3835_, v_b_3826_, v___y_3827_, v___y_3828_, v___y_3829_, v___y_3830_, v___y_3831_, v___y_3832_);
lean_dec(v___y_3832_);
lean_dec_ref(v___y_3831_);
lean_dec(v___y_3830_);
lean_dec_ref(v___y_3829_);
lean_dec(v___y_3828_);
lean_dec_ref(v___y_3827_);
lean_dec_ref(v_as_3823_);
lean_dec_ref(v_a_3822_);
return v_res_3836_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__2(lean_object* v_x_3837_, lean_object* v_x_3838_){
_start:
{
if (lean_obj_tag(v_x_3838_) == 0)
{
return v_x_3837_;
}
else
{
lean_object* v_key_3839_; lean_object* v_value_3840_; lean_object* v_tail_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; 
v_key_3839_ = lean_ctor_get(v_x_3838_, 0);
v_value_3840_ = lean_ctor_get(v_x_3838_, 1);
v_tail_3841_ = lean_ctor_get(v_x_3838_, 2);
lean_inc(v_value_3840_);
lean_inc(v_key_3839_);
v___x_3842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3842_, 0, v_key_3839_);
lean_ctor_set(v___x_3842_, 1, v_value_3840_);
v___x_3843_ = lean_array_push(v_x_3837_, v___x_3842_);
v_x_3837_ = v___x_3843_;
v_x_3838_ = v_tail_3841_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__2___boxed(lean_object* v_x_3845_, lean_object* v_x_3846_){
_start:
{
lean_object* v_res_3847_; 
v_res_3847_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__2(v_x_3845_, v_x_3846_);
lean_dec(v_x_3846_);
return v_res_3847_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__3(lean_object* v_as_3848_, size_t v_i_3849_, size_t v_stop_3850_, lean_object* v_b_3851_){
_start:
{
uint8_t v___x_3852_; 
v___x_3852_ = lean_usize_dec_eq(v_i_3849_, v_stop_3850_);
if (v___x_3852_ == 0)
{
lean_object* v___x_3853_; lean_object* v___x_3854_; size_t v___x_3855_; size_t v___x_3856_; 
v___x_3853_ = lean_array_uget_borrowed(v_as_3848_, v_i_3849_);
v___x_3854_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__2(v_b_3851_, v___x_3853_);
v___x_3855_ = ((size_t)1ULL);
v___x_3856_ = lean_usize_add(v_i_3849_, v___x_3855_);
v_i_3849_ = v___x_3856_;
v_b_3851_ = v___x_3854_;
goto _start;
}
else
{
return v_b_3851_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__3___boxed(lean_object* v_as_3858_, lean_object* v_i_3859_, lean_object* v_stop_3860_, lean_object* v_b_3861_){
_start:
{
size_t v_i_boxed_3862_; size_t v_stop_boxed_3863_; lean_object* v_res_3864_; 
v_i_boxed_3862_ = lean_unbox_usize(v_i_3859_);
lean_dec(v_i_3859_);
v_stop_boxed_3863_ = lean_unbox_usize(v_stop_3860_);
lean_dec(v_stop_3860_);
v_res_3864_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__3(v_as_3858_, v_i_boxed_3862_, v_stop_boxed_3863_, v_b_3861_);
lean_dec_ref(v_as_3858_);
return v_res_3864_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants(lean_object* v_alts_3865_, lean_object* v_invariants_3866_, lean_object* v_inlineHandled_3867_, lean_object* v_a_3868_, lean_object* v_a_3869_, lean_object* v_a_3870_, lean_object* v_a_3871_, lean_object* v_a_3872_, lean_object* v_a_3873_){
_start:
{
lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; 
v___x_3875_ = lean_unsigned_to_nat(0u);
v___x_3876_ = lean_array_get_size(v_invariants_3866_);
v___x_3877_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___redArg(v___x_3876_, v_alts_3865_, v_invariants_3866_, v___x_3875_, v_inlineHandled_3867_, v_a_3868_, v_a_3869_, v_a_3870_, v_a_3871_, v_a_3872_, v_a_3873_);
if (lean_obj_tag(v___x_3877_) == 0)
{
lean_object* v_a_3878_; lean_object* v___y_3880_; lean_object* v_size_3893_; lean_object* v_buckets_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; uint8_t v___x_3897_; 
v_a_3878_ = lean_ctor_get(v___x_3877_, 0);
lean_inc(v_a_3878_);
lean_dec_ref_known(v___x_3877_, 1);
v_size_3893_ = lean_ctor_get(v_alts_3865_, 0);
v_buckets_3894_ = lean_ctor_get(v_alts_3865_, 1);
v___x_3895_ = lean_mk_empty_array_with_capacity(v_size_3893_);
v___x_3896_ = lean_array_get_size(v_buckets_3894_);
v___x_3897_ = lean_nat_dec_lt(v___x_3875_, v___x_3896_);
if (v___x_3897_ == 0)
{
v___y_3880_ = v___x_3895_;
goto v___jp_3879_;
}
else
{
uint8_t v___x_3898_; 
v___x_3898_ = lean_nat_dec_le(v___x_3896_, v___x_3896_);
if (v___x_3898_ == 0)
{
if (v___x_3897_ == 0)
{
v___y_3880_ = v___x_3895_;
goto v___jp_3879_;
}
else
{
size_t v___x_3899_; size_t v___x_3900_; lean_object* v___x_3901_; 
v___x_3899_ = ((size_t)0ULL);
v___x_3900_ = lean_usize_of_nat(v___x_3896_);
v___x_3901_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__3(v_buckets_3894_, v___x_3899_, v___x_3900_, v___x_3895_);
v___y_3880_ = v___x_3901_;
goto v___jp_3879_;
}
}
else
{
size_t v___x_3902_; size_t v___x_3903_; lean_object* v___x_3904_; 
v___x_3902_ = ((size_t)0ULL);
v___x_3903_ = lean_usize_of_nat(v___x_3896_);
v___x_3904_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__3(v_buckets_3894_, v___x_3902_, v___x_3903_, v___x_3895_);
v___y_3880_ = v___x_3904_;
goto v___jp_3879_;
}
}
v___jp_3879_:
{
lean_object* v___x_3881_; size_t v_sz_3882_; size_t v___x_3883_; lean_object* v___x_3884_; 
v___x_3881_ = lean_box(0);
v_sz_3882_ = lean_array_size(v___y_3880_);
v___x_3883_ = ((size_t)0ULL);
v___x_3884_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1(v_a_3878_, v___y_3880_, v_sz_3882_, v___x_3883_, v___x_3881_, v_a_3868_, v_a_3869_, v_a_3870_, v_a_3871_, v_a_3872_, v_a_3873_);
lean_dec_ref(v___y_3880_);
lean_dec(v_a_3878_);
if (lean_obj_tag(v___x_3884_) == 0)
{
lean_object* v___x_3886_; uint8_t v_isShared_3887_; uint8_t v_isSharedCheck_3891_; 
v_isSharedCheck_3891_ = !lean_is_exclusive(v___x_3884_);
if (v_isSharedCheck_3891_ == 0)
{
lean_object* v_unused_3892_; 
v_unused_3892_ = lean_ctor_get(v___x_3884_, 0);
lean_dec(v_unused_3892_);
v___x_3886_ = v___x_3884_;
v_isShared_3887_ = v_isSharedCheck_3891_;
goto v_resetjp_3885_;
}
else
{
lean_dec(v___x_3884_);
v___x_3886_ = lean_box(0);
v_isShared_3887_ = v_isSharedCheck_3891_;
goto v_resetjp_3885_;
}
v_resetjp_3885_:
{
lean_object* v___x_3889_; 
if (v_isShared_3887_ == 0)
{
lean_ctor_set(v___x_3886_, 0, v___x_3881_);
v___x_3889_ = v___x_3886_;
goto v_reusejp_3888_;
}
else
{
lean_object* v_reuseFailAlloc_3890_; 
v_reuseFailAlloc_3890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3890_, 0, v___x_3881_);
v___x_3889_ = v_reuseFailAlloc_3890_;
goto v_reusejp_3888_;
}
v_reusejp_3888_:
{
return v___x_3889_;
}
}
}
else
{
return v___x_3884_;
}
}
}
else
{
lean_object* v_a_3905_; lean_object* v___x_3907_; uint8_t v_isShared_3908_; uint8_t v_isSharedCheck_3912_; 
v_a_3905_ = lean_ctor_get(v___x_3877_, 0);
v_isSharedCheck_3912_ = !lean_is_exclusive(v___x_3877_);
if (v_isSharedCheck_3912_ == 0)
{
v___x_3907_ = v___x_3877_;
v_isShared_3908_ = v_isSharedCheck_3912_;
goto v_resetjp_3906_;
}
else
{
lean_inc(v_a_3905_);
lean_dec(v___x_3877_);
v___x_3907_ = lean_box(0);
v_isShared_3908_ = v_isSharedCheck_3912_;
goto v_resetjp_3906_;
}
v_resetjp_3906_:
{
lean_object* v___x_3910_; 
if (v_isShared_3908_ == 0)
{
v___x_3910_ = v___x_3907_;
goto v_reusejp_3909_;
}
else
{
lean_object* v_reuseFailAlloc_3911_; 
v_reuseFailAlloc_3911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3911_, 0, v_a_3905_);
v___x_3910_ = v_reuseFailAlloc_3911_;
goto v_reusejp_3909_;
}
v_reusejp_3909_:
{
return v___x_3910_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants___boxed(lean_object* v_alts_3913_, lean_object* v_invariants_3914_, lean_object* v_inlineHandled_3915_, lean_object* v_a_3916_, lean_object* v_a_3917_, lean_object* v_a_3918_, lean_object* v_a_3919_, lean_object* v_a_3920_, lean_object* v_a_3921_, lean_object* v_a_3922_){
_start:
{
lean_object* v_res_3923_; 
v_res_3923_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants(v_alts_3913_, v_invariants_3914_, v_inlineHandled_3915_, v_a_3916_, v_a_3917_, v_a_3918_, v_a_3919_, v_a_3920_, v_a_3921_);
lean_dec(v_a_3921_);
lean_dec_ref(v_a_3920_);
lean_dec(v_a_3919_);
lean_dec_ref(v_a_3918_);
lean_dec(v_a_3917_);
lean_dec_ref(v_a_3916_);
lean_dec_ref(v_invariants_3914_);
lean_dec_ref(v_alts_3913_);
return v_res_3923_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4(lean_object* v_00_u03b2_3924_, lean_object* v_m_3925_, lean_object* v_a_3926_){
_start:
{
lean_object* v___x_3927_; 
v___x_3927_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg(v_m_3925_, v_a_3926_);
return v___x_3927_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___boxed(lean_object* v_00_u03b2_3928_, lean_object* v_m_3929_, lean_object* v_a_3930_){
_start:
{
lean_object* v_res_3931_; 
v_res_3931_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4(v_00_u03b2_3928_, v_m_3929_, v_a_3930_);
lean_dec(v_a_3930_);
lean_dec_ref(v_m_3929_);
return v_res_3931_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__5(lean_object* v_00_u03b2_3932_, lean_object* v_m_3933_, lean_object* v_a_3934_, lean_object* v_b_3935_){
_start:
{
lean_object* v___x_3936_; 
v___x_3936_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__5___redArg(v_m_3933_, v_a_3934_, v_b_3935_);
return v___x_3936_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6(lean_object* v_upperBound_3937_, lean_object* v_alts_3938_, lean_object* v_invariants_3939_, lean_object* v_inst_3940_, lean_object* v_R_3941_, lean_object* v_a_3942_, lean_object* v_b_3943_, lean_object* v_c_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_){
_start:
{
lean_object* v___x_3952_; 
v___x_3952_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___redArg(v_upperBound_3937_, v_alts_3938_, v_invariants_3939_, v_a_3942_, v_b_3943_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_, v___y_3949_, v___y_3950_);
return v___x_3952_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___boxed(lean_object* v_upperBound_3953_, lean_object* v_alts_3954_, lean_object* v_invariants_3955_, lean_object* v_inst_3956_, lean_object* v_R_3957_, lean_object* v_a_3958_, lean_object* v_b_3959_, lean_object* v_c_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_){
_start:
{
lean_object* v_res_3968_; 
v_res_3968_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6(v_upperBound_3953_, v_alts_3954_, v_invariants_3955_, v_inst_3956_, v_R_3957_, v_a_3958_, v_b_3959_, v_c_3960_, v___y_3961_, v___y_3962_, v___y_3963_, v___y_3964_, v___y_3965_, v___y_3966_);
lean_dec(v___y_3966_);
lean_dec_ref(v___y_3965_);
lean_dec(v___y_3964_);
lean_dec_ref(v___y_3963_);
lean_dec(v___y_3962_);
lean_dec_ref(v___y_3961_);
lean_dec_ref(v_invariants_3955_);
lean_dec_ref(v_alts_3954_);
lean_dec(v_upperBound_3953_);
return v_res_3968_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0(lean_object* v_ref_3969_, lean_object* v_msgData_3970_, uint8_t v_severity_3971_, uint8_t v_isSilent_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_){
_start:
{
lean_object* v___x_3980_; 
v___x_3980_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___redArg(v_ref_3969_, v_msgData_3970_, v_severity_3971_, v_isSilent_3972_, v___y_3975_, v___y_3976_, v___y_3977_, v___y_3978_);
return v___x_3980_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___boxed(lean_object* v_ref_3981_, lean_object* v_msgData_3982_, lean_object* v_severity_3983_, lean_object* v_isSilent_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_){
_start:
{
uint8_t v_severity_boxed_3992_; uint8_t v_isSilent_boxed_3993_; lean_object* v_res_3994_; 
v_severity_boxed_3992_ = lean_unbox(v_severity_3983_);
v_isSilent_boxed_3993_ = lean_unbox(v_isSilent_3984_);
v_res_3994_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0(v_ref_3981_, v_msgData_3982_, v_severity_boxed_3992_, v_isSilent_boxed_3993_, v___y_3985_, v___y_3986_, v___y_3987_, v___y_3988_, v___y_3989_, v___y_3990_);
lean_dec(v___y_3990_);
lean_dec_ref(v___y_3989_);
lean_dec(v___y_3988_);
lean_dec_ref(v___y_3987_);
lean_dec(v___y_3986_);
lean_dec_ref(v___y_3985_);
lean_dec(v_ref_3981_);
return v_res_3994_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5(lean_object* v_00_u03b2_3995_, lean_object* v_a_3996_, lean_object* v_x_3997_){
_start:
{
lean_object* v___x_3998_; 
v___x_3998_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___redArg(v_a_3996_, v_x_3997_);
return v___x_3998_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___boxed(lean_object* v_00_u03b2_3999_, lean_object* v_a_4000_, lean_object* v_x_4001_){
_start:
{
lean_object* v_res_4002_; 
v_res_4002_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5(v_00_u03b2_3999_, v_a_4000_, v_x_4001_);
lean_dec(v_x_4001_);
lean_dec(v_a_4000_);
return v_res_4002_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___lam__0(lean_object* v_x_4003_, lean_object* v___y_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_){
_start:
{
lean_object* v___x_4011_; 
lean_inc(v___y_4005_);
lean_inc_ref(v___y_4004_);
v___x_4011_ = lean_apply_7(v_x_4003_, v___y_4004_, v___y_4005_, v___y_4006_, v___y_4007_, v___y_4008_, v___y_4009_, lean_box(0));
return v___x_4011_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___lam__0___boxed(lean_object* v_x_4012_, lean_object* v___y_4013_, lean_object* v___y_4014_, lean_object* v___y_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_){
_start:
{
lean_object* v_res_4020_; 
v_res_4020_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___lam__0(v_x_4012_, v___y_4013_, v___y_4014_, v___y_4015_, v___y_4016_, v___y_4017_, v___y_4018_);
lean_dec(v___y_4014_);
lean_dec_ref(v___y_4013_);
return v_res_4020_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg(lean_object* v_mvarId_4021_, lean_object* v_x_4022_, lean_object* v___y_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_){
_start:
{
lean_object* v___f_4030_; lean_object* v___x_4031_; 
lean_inc(v___y_4024_);
lean_inc_ref(v___y_4023_);
v___f_4030_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4030_, 0, v_x_4022_);
lean_closure_set(v___f_4030_, 1, v___y_4023_);
lean_closure_set(v___f_4030_, 2, v___y_4024_);
v___x_4031_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_4021_, v___f_4030_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_);
if (lean_obj_tag(v___x_4031_) == 0)
{
return v___x_4031_;
}
else
{
lean_object* v_a_4032_; lean_object* v___x_4034_; uint8_t v_isShared_4035_; uint8_t v_isSharedCheck_4039_; 
v_a_4032_ = lean_ctor_get(v___x_4031_, 0);
v_isSharedCheck_4039_ = !lean_is_exclusive(v___x_4031_);
if (v_isSharedCheck_4039_ == 0)
{
v___x_4034_ = v___x_4031_;
v_isShared_4035_ = v_isSharedCheck_4039_;
goto v_resetjp_4033_;
}
else
{
lean_inc(v_a_4032_);
lean_dec(v___x_4031_);
v___x_4034_ = lean_box(0);
v_isShared_4035_ = v_isSharedCheck_4039_;
goto v_resetjp_4033_;
}
v_resetjp_4033_:
{
lean_object* v___x_4037_; 
if (v_isShared_4035_ == 0)
{
v___x_4037_ = v___x_4034_;
goto v_reusejp_4036_;
}
else
{
lean_object* v_reuseFailAlloc_4038_; 
v_reuseFailAlloc_4038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4038_, 0, v_a_4032_);
v___x_4037_ = v_reuseFailAlloc_4038_;
goto v_reusejp_4036_;
}
v_reusejp_4036_:
{
return v___x_4037_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___boxed(lean_object* v_mvarId_4040_, lean_object* v_x_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_){
_start:
{
lean_object* v_res_4049_; 
v_res_4049_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg(v_mvarId_4040_, v_x_4041_, v___y_4042_, v___y_4043_, v___y_4044_, v___y_4045_, v___y_4046_, v___y_4047_);
lean_dec(v___y_4047_);
lean_dec_ref(v___y_4046_);
lean_dec(v___y_4045_);
lean_dec_ref(v___y_4044_);
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
return v_res_4049_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1(lean_object* v_00_u03b1_4050_, lean_object* v_mvarId_4051_, lean_object* v_x_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_, lean_object* v___y_4056_, lean_object* v___y_4057_, lean_object* v___y_4058_){
_start:
{
lean_object* v___x_4060_; 
v___x_4060_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg(v_mvarId_4051_, v_x_4052_, v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_);
return v___x_4060_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___boxed(lean_object* v_00_u03b1_4061_, lean_object* v_mvarId_4062_, lean_object* v_x_4063_, lean_object* v___y_4064_, lean_object* v___y_4065_, lean_object* v___y_4066_, lean_object* v___y_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_){
_start:
{
lean_object* v_res_4071_; 
v_res_4071_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1(v_00_u03b1_4061_, v_mvarId_4062_, v_x_4063_, v___y_4064_, v___y_4065_, v___y_4066_, v___y_4067_, v___y_4068_, v___y_4069_);
lean_dec(v___y_4069_);
lean_dec_ref(v___y_4068_);
lean_dec(v___y_4067_);
lean_dec_ref(v___y_4066_);
lean_dec(v___y_4065_);
lean_dec_ref(v___y_4064_);
return v_res_4071_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___redArg(lean_object* v_ref_4072_, lean_object* v_msgData_4073_, uint8_t v_severity_4074_, uint8_t v_isSilent_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_){
_start:
{
lean_object* v___y_4082_; lean_object* v___y_4083_; uint8_t v___y_4084_; lean_object* v___y_4085_; uint8_t v___y_4086_; lean_object* v___y_4087_; lean_object* v___y_4088_; lean_object* v___y_4089_; lean_object* v___y_4090_; lean_object* v___y_4118_; uint8_t v___y_4119_; uint8_t v___y_4120_; lean_object* v___y_4121_; lean_object* v___y_4122_; lean_object* v___y_4123_; uint8_t v___y_4124_; lean_object* v___y_4125_; lean_object* v___y_4143_; uint8_t v___y_4144_; lean_object* v___y_4145_; uint8_t v___y_4146_; lean_object* v___y_4147_; lean_object* v___y_4148_; uint8_t v___y_4149_; lean_object* v___y_4150_; lean_object* v___y_4154_; uint8_t v___y_4155_; uint8_t v___y_4156_; lean_object* v___y_4157_; lean_object* v___y_4158_; lean_object* v___y_4159_; uint8_t v___y_4160_; uint8_t v___x_4165_; uint8_t v___y_4167_; lean_object* v___y_4168_; lean_object* v___y_4169_; lean_object* v___y_4170_; lean_object* v___y_4171_; uint8_t v___y_4172_; uint8_t v___y_4173_; uint8_t v___y_4175_; uint8_t v___x_4190_; 
v___x_4165_ = 2;
v___x_4190_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4074_, v___x_4165_);
if (v___x_4190_ == 0)
{
v___y_4175_ = v___x_4190_;
goto v___jp_4174_;
}
else
{
uint8_t v___x_4191_; 
lean_inc_ref(v_msgData_4073_);
v___x_4191_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_4073_);
v___y_4175_ = v___x_4191_;
goto v___jp_4174_;
}
v___jp_4081_:
{
lean_object* v___x_4091_; lean_object* v_currNamespace_4092_; lean_object* v_openDecls_4093_; lean_object* v_env_4094_; lean_object* v_nextMacroScope_4095_; lean_object* v_ngen_4096_; lean_object* v_auxDeclNGen_4097_; lean_object* v_traceState_4098_; lean_object* v_cache_4099_; lean_object* v_messages_4100_; lean_object* v_infoState_4101_; lean_object* v_snapshotTasks_4102_; lean_object* v___x_4104_; uint8_t v_isShared_4105_; uint8_t v_isSharedCheck_4116_; 
v___x_4091_ = lean_st_ref_take(v___y_4090_);
v_currNamespace_4092_ = lean_ctor_get(v___y_4089_, 6);
v_openDecls_4093_ = lean_ctor_get(v___y_4089_, 7);
v_env_4094_ = lean_ctor_get(v___x_4091_, 0);
v_nextMacroScope_4095_ = lean_ctor_get(v___x_4091_, 1);
v_ngen_4096_ = lean_ctor_get(v___x_4091_, 2);
v_auxDeclNGen_4097_ = lean_ctor_get(v___x_4091_, 3);
v_traceState_4098_ = lean_ctor_get(v___x_4091_, 4);
v_cache_4099_ = lean_ctor_get(v___x_4091_, 5);
v_messages_4100_ = lean_ctor_get(v___x_4091_, 6);
v_infoState_4101_ = lean_ctor_get(v___x_4091_, 7);
v_snapshotTasks_4102_ = lean_ctor_get(v___x_4091_, 8);
v_isSharedCheck_4116_ = !lean_is_exclusive(v___x_4091_);
if (v_isSharedCheck_4116_ == 0)
{
v___x_4104_ = v___x_4091_;
v_isShared_4105_ = v_isSharedCheck_4116_;
goto v_resetjp_4103_;
}
else
{
lean_inc(v_snapshotTasks_4102_);
lean_inc(v_infoState_4101_);
lean_inc(v_messages_4100_);
lean_inc(v_cache_4099_);
lean_inc(v_traceState_4098_);
lean_inc(v_auxDeclNGen_4097_);
lean_inc(v_ngen_4096_);
lean_inc(v_nextMacroScope_4095_);
lean_inc(v_env_4094_);
lean_dec(v___x_4091_);
v___x_4104_ = lean_box(0);
v_isShared_4105_ = v_isSharedCheck_4116_;
goto v_resetjp_4103_;
}
v_resetjp_4103_:
{
lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4111_; 
lean_inc(v_openDecls_4093_);
lean_inc(v_currNamespace_4092_);
v___x_4106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4106_, 0, v_currNamespace_4092_);
lean_ctor_set(v___x_4106_, 1, v_openDecls_4093_);
v___x_4107_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4107_, 0, v___x_4106_);
lean_ctor_set(v___x_4107_, 1, v___y_4082_);
lean_inc_ref(v___y_4088_);
lean_inc_ref(v___y_4085_);
v___x_4108_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_4108_, 0, v___y_4085_);
lean_ctor_set(v___x_4108_, 1, v___y_4087_);
lean_ctor_set(v___x_4108_, 2, v___y_4083_);
lean_ctor_set(v___x_4108_, 3, v___y_4088_);
lean_ctor_set(v___x_4108_, 4, v___x_4107_);
lean_ctor_set_uint8(v___x_4108_, sizeof(void*)*5, v___y_4084_);
lean_ctor_set_uint8(v___x_4108_, sizeof(void*)*5 + 1, v___y_4086_);
lean_ctor_set_uint8(v___x_4108_, sizeof(void*)*5 + 2, v_isSilent_4075_);
v___x_4109_ = l_Lean_MessageLog_add(v___x_4108_, v_messages_4100_);
if (v_isShared_4105_ == 0)
{
lean_ctor_set(v___x_4104_, 6, v___x_4109_);
v___x_4111_ = v___x_4104_;
goto v_reusejp_4110_;
}
else
{
lean_object* v_reuseFailAlloc_4115_; 
v_reuseFailAlloc_4115_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4115_, 0, v_env_4094_);
lean_ctor_set(v_reuseFailAlloc_4115_, 1, v_nextMacroScope_4095_);
lean_ctor_set(v_reuseFailAlloc_4115_, 2, v_ngen_4096_);
lean_ctor_set(v_reuseFailAlloc_4115_, 3, v_auxDeclNGen_4097_);
lean_ctor_set(v_reuseFailAlloc_4115_, 4, v_traceState_4098_);
lean_ctor_set(v_reuseFailAlloc_4115_, 5, v_cache_4099_);
lean_ctor_set(v_reuseFailAlloc_4115_, 6, v___x_4109_);
lean_ctor_set(v_reuseFailAlloc_4115_, 7, v_infoState_4101_);
lean_ctor_set(v_reuseFailAlloc_4115_, 8, v_snapshotTasks_4102_);
v___x_4111_ = v_reuseFailAlloc_4115_;
goto v_reusejp_4110_;
}
v_reusejp_4110_:
{
lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; 
v___x_4112_ = lean_st_ref_set(v___y_4090_, v___x_4111_);
v___x_4113_ = lean_box(0);
v___x_4114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4114_, 0, v___x_4113_);
return v___x_4114_;
}
}
}
v___jp_4117_:
{
lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v_a_4128_; lean_object* v___x_4130_; uint8_t v_isShared_4131_; uint8_t v_isSharedCheck_4141_; 
v___x_4126_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_4073_);
v___x_4127_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__1(v___x_4126_, v___y_4076_, v___y_4077_, v___y_4078_, v___y_4079_);
v_a_4128_ = lean_ctor_get(v___x_4127_, 0);
v_isSharedCheck_4141_ = !lean_is_exclusive(v___x_4127_);
if (v_isSharedCheck_4141_ == 0)
{
v___x_4130_ = v___x_4127_;
v_isShared_4131_ = v_isSharedCheck_4141_;
goto v_resetjp_4129_;
}
else
{
lean_inc(v_a_4128_);
lean_dec(v___x_4127_);
v___x_4130_ = lean_box(0);
v_isShared_4131_ = v_isSharedCheck_4141_;
goto v_resetjp_4129_;
}
v_resetjp_4129_:
{
lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; 
lean_inc_ref_n(v___y_4122_, 2);
v___x_4132_ = l_Lean_FileMap_toPosition(v___y_4122_, v___y_4121_);
lean_dec(v___y_4121_);
v___x_4133_ = l_Lean_FileMap_toPosition(v___y_4122_, v___y_4125_);
lean_dec(v___y_4125_);
v___x_4134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4134_, 0, v___x_4133_);
v___x_4135_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___closed__0));
if (v___y_4119_ == 0)
{
lean_del_object(v___x_4130_);
lean_dec_ref(v___y_4118_);
v___y_4082_ = v_a_4128_;
v___y_4083_ = v___x_4134_;
v___y_4084_ = v___y_4120_;
v___y_4085_ = v___y_4123_;
v___y_4086_ = v___y_4124_;
v___y_4087_ = v___x_4132_;
v___y_4088_ = v___x_4135_;
v___y_4089_ = v___y_4078_;
v___y_4090_ = v___y_4079_;
goto v___jp_4081_;
}
else
{
uint8_t v___x_4136_; 
lean_inc(v_a_4128_);
v___x_4136_ = l_Lean_MessageData_hasTag(v___y_4118_, v_a_4128_);
if (v___x_4136_ == 0)
{
lean_object* v___x_4137_; lean_object* v___x_4139_; 
lean_dec_ref_known(v___x_4134_, 1);
lean_dec_ref(v___x_4132_);
lean_dec(v_a_4128_);
v___x_4137_ = lean_box(0);
if (v_isShared_4131_ == 0)
{
lean_ctor_set(v___x_4130_, 0, v___x_4137_);
v___x_4139_ = v___x_4130_;
goto v_reusejp_4138_;
}
else
{
lean_object* v_reuseFailAlloc_4140_; 
v_reuseFailAlloc_4140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4140_, 0, v___x_4137_);
v___x_4139_ = v_reuseFailAlloc_4140_;
goto v_reusejp_4138_;
}
v_reusejp_4138_:
{
return v___x_4139_;
}
}
else
{
lean_del_object(v___x_4130_);
v___y_4082_ = v_a_4128_;
v___y_4083_ = v___x_4134_;
v___y_4084_ = v___y_4120_;
v___y_4085_ = v___y_4123_;
v___y_4086_ = v___y_4124_;
v___y_4087_ = v___x_4132_;
v___y_4088_ = v___x_4135_;
v___y_4089_ = v___y_4078_;
v___y_4090_ = v___y_4079_;
goto v___jp_4081_;
}
}
}
}
v___jp_4142_:
{
lean_object* v___x_4151_; 
v___x_4151_ = l_Lean_Syntax_getTailPos_x3f(v___y_4145_, v___y_4146_);
lean_dec(v___y_4145_);
if (lean_obj_tag(v___x_4151_) == 0)
{
lean_inc(v___y_4150_);
v___y_4118_ = v___y_4143_;
v___y_4119_ = v___y_4144_;
v___y_4120_ = v___y_4146_;
v___y_4121_ = v___y_4150_;
v___y_4122_ = v___y_4147_;
v___y_4123_ = v___y_4148_;
v___y_4124_ = v___y_4149_;
v___y_4125_ = v___y_4150_;
goto v___jp_4117_;
}
else
{
lean_object* v_val_4152_; 
v_val_4152_ = lean_ctor_get(v___x_4151_, 0);
lean_inc(v_val_4152_);
lean_dec_ref_known(v___x_4151_, 1);
v___y_4118_ = v___y_4143_;
v___y_4119_ = v___y_4144_;
v___y_4120_ = v___y_4146_;
v___y_4121_ = v___y_4150_;
v___y_4122_ = v___y_4147_;
v___y_4123_ = v___y_4148_;
v___y_4124_ = v___y_4149_;
v___y_4125_ = v_val_4152_;
goto v___jp_4117_;
}
}
v___jp_4153_:
{
lean_object* v_ref_4161_; lean_object* v___x_4162_; 
v_ref_4161_ = l_Lean_replaceRef(v_ref_4072_, v___y_4159_);
v___x_4162_ = l_Lean_Syntax_getPos_x3f(v_ref_4161_, v___y_4156_);
if (lean_obj_tag(v___x_4162_) == 0)
{
lean_object* v___x_4163_; 
v___x_4163_ = lean_unsigned_to_nat(0u);
v___y_4143_ = v___y_4154_;
v___y_4144_ = v___y_4155_;
v___y_4145_ = v_ref_4161_;
v___y_4146_ = v___y_4156_;
v___y_4147_ = v___y_4157_;
v___y_4148_ = v___y_4158_;
v___y_4149_ = v___y_4160_;
v___y_4150_ = v___x_4163_;
goto v___jp_4142_;
}
else
{
lean_object* v_val_4164_; 
v_val_4164_ = lean_ctor_get(v___x_4162_, 0);
lean_inc(v_val_4164_);
lean_dec_ref_known(v___x_4162_, 1);
v___y_4143_ = v___y_4154_;
v___y_4144_ = v___y_4155_;
v___y_4145_ = v_ref_4161_;
v___y_4146_ = v___y_4156_;
v___y_4147_ = v___y_4157_;
v___y_4148_ = v___y_4158_;
v___y_4149_ = v___y_4160_;
v___y_4150_ = v_val_4164_;
goto v___jp_4142_;
}
}
v___jp_4166_:
{
if (v___y_4173_ == 0)
{
v___y_4154_ = v___y_4170_;
v___y_4155_ = v___y_4167_;
v___y_4156_ = v___y_4172_;
v___y_4157_ = v___y_4168_;
v___y_4158_ = v___y_4169_;
v___y_4159_ = v___y_4171_;
v___y_4160_ = v_severity_4074_;
goto v___jp_4153_;
}
else
{
v___y_4154_ = v___y_4170_;
v___y_4155_ = v___y_4167_;
v___y_4156_ = v___y_4172_;
v___y_4157_ = v___y_4168_;
v___y_4158_ = v___y_4169_;
v___y_4159_ = v___y_4171_;
v___y_4160_ = v___x_4165_;
goto v___jp_4153_;
}
}
v___jp_4174_:
{
if (v___y_4175_ == 0)
{
lean_object* v_fileName_4176_; lean_object* v_fileMap_4177_; lean_object* v_options_4178_; lean_object* v_ref_4179_; uint8_t v_suppressElabErrors_4180_; lean_object* v___x_4181_; lean_object* v___x_4182_; lean_object* v___f_4183_; uint8_t v___x_4184_; uint8_t v___x_4185_; 
v_fileName_4176_ = lean_ctor_get(v___y_4078_, 0);
v_fileMap_4177_ = lean_ctor_get(v___y_4078_, 1);
v_options_4178_ = lean_ctor_get(v___y_4078_, 2);
v_ref_4179_ = lean_ctor_get(v___y_4078_, 5);
v_suppressElabErrors_4180_ = lean_ctor_get_uint8(v___y_4078_, sizeof(void*)*14 + 1);
v___x_4181_ = lean_box(v___y_4175_);
v___x_4182_ = lean_box(v_suppressElabErrors_4180_);
v___f_4183_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4183_, 0, v___x_4181_);
lean_closure_set(v___f_4183_, 1, v___x_4182_);
v___x_4184_ = 1;
v___x_4185_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4074_, v___x_4184_);
if (v___x_4185_ == 0)
{
v___y_4167_ = v_suppressElabErrors_4180_;
v___y_4168_ = v_fileMap_4177_;
v___y_4169_ = v_fileName_4176_;
v___y_4170_ = v___f_4183_;
v___y_4171_ = v_ref_4179_;
v___y_4172_ = v___y_4175_;
v___y_4173_ = v___x_4185_;
goto v___jp_4166_;
}
else
{
lean_object* v___x_4186_; uint8_t v___x_4187_; 
v___x_4186_ = l_Lean_warningAsError;
v___x_4187_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__5(v_options_4178_, v___x_4186_);
v___y_4167_ = v_suppressElabErrors_4180_;
v___y_4168_ = v_fileMap_4177_;
v___y_4169_ = v_fileName_4176_;
v___y_4170_ = v___f_4183_;
v___y_4171_ = v_ref_4179_;
v___y_4172_ = v___y_4175_;
v___y_4173_ = v___x_4187_;
goto v___jp_4166_;
}
}
else
{
lean_object* v___x_4188_; lean_object* v___x_4189_; 
lean_dec_ref(v_msgData_4073_);
v___x_4188_ = lean_box(0);
v___x_4189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4189_, 0, v___x_4188_);
return v___x_4189_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___redArg___boxed(lean_object* v_ref_4192_, lean_object* v_msgData_4193_, lean_object* v_severity_4194_, lean_object* v_isSilent_4195_, lean_object* v___y_4196_, lean_object* v___y_4197_, lean_object* v___y_4198_, lean_object* v___y_4199_, lean_object* v___y_4200_){
_start:
{
uint8_t v_severity_boxed_4201_; uint8_t v_isSilent_boxed_4202_; lean_object* v_res_4203_; 
v_severity_boxed_4201_ = lean_unbox(v_severity_4194_);
v_isSilent_boxed_4202_ = lean_unbox(v_isSilent_4195_);
v_res_4203_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___redArg(v_ref_4192_, v_msgData_4193_, v_severity_boxed_4201_, v_isSilent_boxed_4202_, v___y_4196_, v___y_4197_, v___y_4198_, v___y_4199_);
lean_dec(v___y_4199_);
lean_dec_ref(v___y_4198_);
lean_dec(v___y_4197_);
lean_dec_ref(v___y_4196_);
lean_dec(v_ref_4192_);
return v_res_4203_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0(lean_object* v_ref_4204_, lean_object* v_msgData_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_){
_start:
{
uint8_t v___x_4213_; uint8_t v___x_4214_; lean_object* v___x_4215_; 
v___x_4213_ = 1;
v___x_4214_ = 0;
v___x_4215_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___redArg(v_ref_4204_, v_msgData_4205_, v___x_4213_, v___x_4214_, v___y_4208_, v___y_4209_, v___y_4210_, v___y_4211_);
return v___x_4215_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0___boxed(lean_object* v_ref_4216_, lean_object* v_msgData_4217_, lean_object* v___y_4218_, lean_object* v___y_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_, lean_object* v___y_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_){
_start:
{
lean_object* v_res_4225_; 
v_res_4225_ = l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0(v_ref_4216_, v_msgData_4217_, v___y_4218_, v___y_4219_, v___y_4220_, v___y_4221_, v___y_4222_, v___y_4223_);
lean_dec(v___y_4223_);
lean_dec_ref(v___y_4222_);
lean_dec(v___y_4221_);
lean_dec_ref(v___y_4220_);
lean_dec(v___y_4219_);
lean_dec_ref(v___y_4218_);
lean_dec(v_ref_4216_);
return v_res_4225_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4233_; lean_object* v___x_4234_; 
v___x_4233_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__2));
v___x_4234_ = l_Lean_MessageData_ofFormat(v___x_4233_);
return v___x_4234_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0(lean_object* v_stx_4235_, lean_object* v_goal_4236_, lean_object* v___y_4237_, lean_object* v___y_4238_, lean_object* v___y_4239_, lean_object* v___y_4240_, lean_object* v___y_4241_, lean_object* v___y_4242_){
_start:
{
lean_object* v___y_4245_; lean_object* v___y_4246_; uint8_t v___y_4247_; lean_object* v___y_4248_; lean_object* v___y_4249_; lean_object* v___y_4250_; lean_object* v___y_4251_; lean_object* v___y_4252_; lean_object* v___y_4253_; lean_object* v___y_4254_; lean_object* v___y_4255_; uint8_t v___y_4256_; uint8_t v___y_4257_; lean_object* v___y_4258_; lean_object* v___y_4259_; lean_object* v___y_4260_; lean_object* v___y_4261_; lean_object* v___y_4262_; lean_object* v___y_4263_; lean_object* v___y_4264_; uint8_t v___y_4265_; lean_object* v___y_4266_; lean_object* v___y_4267_; lean_object* v___y_4268_; lean_object* v___y_4269_; lean_object* v___y_4270_; lean_object* v___y_4271_; lean_object* v___y_4276_; lean_object* v___y_4277_; lean_object* v___y_4278_; lean_object* v___y_4279_; lean_object* v___y_4280_; lean_object* v___y_4281_; lean_object* v_options_4403_; lean_object* v___x_4404_; uint8_t v___x_4405_; 
v_options_4403_ = lean_ctor_get(v___y_4241_, 2);
v___x_4404_ = l_Lean_Elab_Tactic_Do_mvcgen_warning;
v___x_4405_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__2_spec__5(v_options_4403_, v___x_4404_);
if (v___x_4405_ == 0)
{
v___y_4276_ = v___y_4237_;
v___y_4277_ = v___y_4238_;
v___y_4278_ = v___y_4239_;
v___y_4279_ = v___y_4240_;
v___y_4280_ = v___y_4241_;
v___y_4281_ = v___y_4242_;
goto v___jp_4275_;
}
else
{
lean_object* v___x_4406_; lean_object* v___x_4407_; 
v___x_4406_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__3, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__3);
v___x_4407_ = l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0(v_stx_4235_, v___x_4406_, v___y_4237_, v___y_4238_, v___y_4239_, v___y_4240_, v___y_4241_, v___y_4242_);
if (lean_obj_tag(v___x_4407_) == 0)
{
lean_dec_ref_known(v___x_4407_, 1);
v___y_4276_ = v___y_4237_;
v___y_4277_ = v___y_4238_;
v___y_4278_ = v___y_4239_;
v___y_4279_ = v___y_4240_;
v___y_4280_ = v___y_4241_;
v___y_4281_ = v___y_4242_;
goto v___jp_4275_;
}
else
{
lean_object* v_a_4408_; lean_object* v___x_4410_; uint8_t v_isShared_4411_; uint8_t v_isSharedCheck_4415_; 
lean_dec(v_goal_4236_);
v_a_4408_ = lean_ctor_get(v___x_4407_, 0);
v_isSharedCheck_4415_ = !lean_is_exclusive(v___x_4407_);
if (v_isSharedCheck_4415_ == 0)
{
v___x_4410_ = v___x_4407_;
v_isShared_4411_ = v_isSharedCheck_4415_;
goto v_resetjp_4409_;
}
else
{
lean_inc(v_a_4408_);
lean_dec(v___x_4407_);
v___x_4410_ = lean_box(0);
v_isShared_4411_ = v_isSharedCheck_4415_;
goto v_resetjp_4409_;
}
v_resetjp_4409_:
{
lean_object* v___x_4413_; 
if (v_isShared_4411_ == 0)
{
v___x_4413_ = v___x_4410_;
goto v_reusejp_4412_;
}
else
{
lean_object* v_reuseFailAlloc_4414_; 
v_reuseFailAlloc_4414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4414_, 0, v_a_4408_);
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
v___jp_4244_:
{
lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; 
v___x_4272_ = lean_alloc_ctor(0, 20, 4);
lean_ctor_set(v___x_4272_, 0, v___y_4259_);
lean_ctor_set(v___x_4272_, 1, v___y_4255_);
lean_ctor_set(v___x_4272_, 2, v___y_4269_);
lean_ctor_set(v___x_4272_, 3, v___y_4266_);
lean_ctor_set(v___x_4272_, 4, v___y_4258_);
lean_ctor_set(v___x_4272_, 5, v___y_4268_);
lean_ctor_set(v___x_4272_, 6, v___y_4249_);
lean_ctor_set(v___x_4272_, 7, v___y_4248_);
lean_ctor_set(v___x_4272_, 8, v___y_4263_);
lean_ctor_set(v___x_4272_, 9, v___y_4250_);
lean_ctor_set(v___x_4272_, 10, v___y_4246_);
lean_ctor_set(v___x_4272_, 11, v___y_4262_);
lean_ctor_set(v___x_4272_, 12, v___y_4253_);
lean_ctor_set(v___x_4272_, 13, v___y_4251_);
lean_ctor_set(v___x_4272_, 14, v___y_4264_);
lean_ctor_set(v___x_4272_, 15, v___y_4267_);
lean_ctor_set(v___x_4272_, 16, v___y_4270_);
lean_ctor_set(v___x_4272_, 17, v___y_4261_);
lean_ctor_set(v___x_4272_, 18, v___y_4254_);
lean_ctor_set(v___x_4272_, 19, v___y_4271_);
lean_ctor_set_uint8(v___x_4272_, sizeof(void*)*20, v___y_4247_);
lean_ctor_set_uint8(v___x_4272_, sizeof(void*)*20 + 1, v___y_4256_);
lean_ctor_set_uint8(v___x_4272_, sizeof(void*)*20 + 2, v___y_4265_);
lean_ctor_set_uint8(v___x_4272_, sizeof(void*)*20 + 3, v___y_4257_);
v___x_4273_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4273_, 0, v___y_4252_);
lean_ctor_set(v___x_4273_, 1, v___x_4272_);
lean_ctor_set(v___x_4273_, 2, v___y_4260_);
lean_ctor_set(v___x_4273_, 3, v___y_4245_);
v___x_4274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4274_, 0, v___x_4273_);
return v___x_4274_;
}
v___jp_4275_:
{
lean_object* v___x_4282_; lean_object* v___x_4283_; uint8_t v___x_4284_; uint8_t v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; 
v___x_4282_ = lean_unsigned_to_nat(1u);
v___x_4283_ = l_Lean_Syntax_getArg(v_stx_4235_, v___x_4282_);
v___x_4284_ = 1;
v___x_4285_ = 0;
v___x_4286_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__0));
v___x_4287_ = lean_box(v___x_4284_);
v___x_4288_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_elabConfig___boxed), 12, 3);
lean_closure_set(v___x_4288_, 0, v___x_4283_);
lean_closure_set(v___x_4288_, 1, v___x_4286_);
lean_closure_set(v___x_4288_, 2, v___x_4287_);
v___x_4289_ = lean_box(0);
v___x_4290_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg(v___x_4288_, v___x_4289_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_, v___y_4280_, v___y_4281_);
if (lean_obj_tag(v___x_4290_) == 0)
{
lean_object* v_a_4291_; lean_object* v___x_4292_; 
v_a_4291_ = lean_ctor_get(v___x_4290_, 0);
lean_inc(v_a_4291_);
lean_dec_ref_known(v___x_4290_, 1);
v___x_4292_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig(v_a_4291_, v___y_4278_, v___y_4279_, v___y_4280_, v___y_4281_);
if (lean_obj_tag(v___x_4292_) == 0)
{
lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; 
lean_dec_ref_known(v___x_4292_, 1);
v___x_4293_ = lean_unsigned_to_nat(2u);
v___x_4294_ = l_Lean_Syntax_getArg(v_stx_4235_, v___x_4293_);
lean_inc(v_goal_4236_);
v___x_4295_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext(v___x_4294_, v_goal_4236_, v___x_4285_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_, v___y_4280_, v___y_4281_);
lean_dec(v___x_4294_);
if (lean_obj_tag(v___x_4295_) == 0)
{
lean_object* v_a_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; 
v_a_4296_ = lean_ctor_get(v___x_4295_, 0);
lean_inc(v_a_4296_);
lean_dec_ref_known(v___x_4295_, 1);
v___x_4297_ = lean_unsigned_to_nat(4u);
v___x_4298_ = l_Lean_Syntax_getArg(v_stx_4235_, v___x_4297_);
v___x_4299_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions(v___x_4298_, v___y_4278_, v___y_4279_, v___y_4280_, v___y_4281_);
lean_dec(v___x_4298_);
if (lean_obj_tag(v___x_4299_) == 0)
{
lean_object* v_a_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; 
v_a_4300_ = lean_ctor_get(v___x_4299_, 0);
lean_inc(v_a_4300_);
lean_dec_ref_known(v___x_4299_, 1);
v___x_4301_ = lean_unsigned_to_nat(5u);
v___x_4302_ = l_Lean_Syntax_getArg(v_stx_4235_, v___x_4301_);
v___x_4303_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabPreTac(v_goal_4236_, v___x_4302_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_, v___y_4280_, v___y_4281_);
lean_dec(v___x_4302_);
if (lean_obj_tag(v___x_4303_) == 0)
{
lean_object* v_a_4304_; lean_object* v_fst_4305_; lean_object* v_snd_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; 
v_a_4304_ = lean_ctor_get(v___x_4303_, 0);
lean_inc(v_a_4304_);
lean_dec_ref_known(v___x_4303_, 1);
v_fst_4305_ = lean_ctor_get(v_a_4304_, 0);
lean_inc(v_fst_4305_);
v_snd_4306_ = lean_ctor_get(v_a_4304_, 1);
lean_inc(v_snd_4306_);
lean_dec(v_a_4304_);
v___x_4307_ = lean_unsigned_to_nat(3u);
v___x_4308_ = l_Lean_Syntax_getArg(v_stx_4235_, v___x_4307_);
v___x_4309_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap(v___x_4308_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_, v___y_4280_, v___y_4281_);
lean_dec(v___x_4308_);
if (lean_obj_tag(v___x_4309_) == 0)
{
lean_object* v_a_4310_; 
v_a_4310_ = lean_ctor_get(v___x_4309_, 0);
lean_inc(v_a_4310_);
lean_dec_ref_known(v___x_4309_, 1);
if (lean_obj_tag(v_a_4310_) == 0)
{
lean_object* v_specThms_4311_; lean_object* v_entailsConsIntroRule_4312_; lean_object* v_entailsNilPureIntroRule_4313_; lean_object* v_entailsNilIntroRule_4314_; lean_object* v_applyPureConsEntailsLRule_4315_; lean_object* v_applyPureConsEntailsRRule_4316_; lean_object* v_downPureIntroRule_4317_; lean_object* v_pureElimRule_4318_; lean_object* v_pureIntroRule_4319_; lean_object* v_postCondEntailsRflRule_4320_; lean_object* v_postCondEntailsMkRule_4321_; lean_object* v_exceptCondsEntailsRflRule_4322_; lean_object* v_exceptCondsEntailsPureRule_4323_; lean_object* v_exceptCondsEntailsFalseRule_4324_; lean_object* v_exceptCondsEntailsTrueRule_4325_; lean_object* v_tripleOfEntailsWPRule_4326_; lean_object* v_andIntroRule_4327_; uint8_t v_trivial_4328_; uint8_t v_jp_4329_; uint8_t v_errorOnMissingSpec_4330_; uint8_t v_debug_4331_; lean_object* v___x_4332_; 
v_specThms_4311_ = lean_ctor_get(v_a_4296_, 0);
lean_inc_ref(v_specThms_4311_);
v_entailsConsIntroRule_4312_ = lean_ctor_get(v_a_4296_, 1);
lean_inc_ref(v_entailsConsIntroRule_4312_);
v_entailsNilPureIntroRule_4313_ = lean_ctor_get(v_a_4296_, 2);
lean_inc_ref(v_entailsNilPureIntroRule_4313_);
v_entailsNilIntroRule_4314_ = lean_ctor_get(v_a_4296_, 3);
lean_inc_ref(v_entailsNilIntroRule_4314_);
v_applyPureConsEntailsLRule_4315_ = lean_ctor_get(v_a_4296_, 4);
lean_inc_ref(v_applyPureConsEntailsLRule_4315_);
v_applyPureConsEntailsRRule_4316_ = lean_ctor_get(v_a_4296_, 5);
lean_inc_ref(v_applyPureConsEntailsRRule_4316_);
v_downPureIntroRule_4317_ = lean_ctor_get(v_a_4296_, 6);
lean_inc_ref(v_downPureIntroRule_4317_);
v_pureElimRule_4318_ = lean_ctor_get(v_a_4296_, 7);
lean_inc_ref(v_pureElimRule_4318_);
v_pureIntroRule_4319_ = lean_ctor_get(v_a_4296_, 8);
lean_inc_ref(v_pureIntroRule_4319_);
v_postCondEntailsRflRule_4320_ = lean_ctor_get(v_a_4296_, 9);
lean_inc_ref(v_postCondEntailsRflRule_4320_);
v_postCondEntailsMkRule_4321_ = lean_ctor_get(v_a_4296_, 10);
lean_inc_ref(v_postCondEntailsMkRule_4321_);
v_exceptCondsEntailsRflRule_4322_ = lean_ctor_get(v_a_4296_, 11);
lean_inc_ref(v_exceptCondsEntailsRflRule_4322_);
v_exceptCondsEntailsPureRule_4323_ = lean_ctor_get(v_a_4296_, 12);
lean_inc_ref(v_exceptCondsEntailsPureRule_4323_);
v_exceptCondsEntailsFalseRule_4324_ = lean_ctor_get(v_a_4296_, 13);
lean_inc_ref(v_exceptCondsEntailsFalseRule_4324_);
v_exceptCondsEntailsTrueRule_4325_ = lean_ctor_get(v_a_4296_, 14);
lean_inc_ref(v_exceptCondsEntailsTrueRule_4325_);
v_tripleOfEntailsWPRule_4326_ = lean_ctor_get(v_a_4296_, 15);
lean_inc_ref(v_tripleOfEntailsWPRule_4326_);
v_andIntroRule_4327_ = lean_ctor_get(v_a_4296_, 16);
lean_inc_ref(v_andIntroRule_4327_);
lean_dec(v_a_4296_);
v_trivial_4328_ = lean_ctor_get_uint8(v_a_4291_, sizeof(void*)*1);
v_jp_4329_ = lean_ctor_get_uint8(v_a_4291_, sizeof(void*)*1 + 3);
v_errorOnMissingSpec_4330_ = lean_ctor_get_uint8(v_a_4291_, sizeof(void*)*1 + 4);
v_debug_4331_ = lean_ctor_get_uint8(v_a_4291_, sizeof(void*)*1 + 5);
v___x_4332_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__41, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__41_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext___closed__41);
v___y_4245_ = v_a_4310_;
v___y_4246_ = v_postCondEntailsMkRule_4321_;
v___y_4247_ = v_trivial_4328_;
v___y_4248_ = v_pureElimRule_4318_;
v___y_4249_ = v_downPureIntroRule_4317_;
v___y_4250_ = v_postCondEntailsRflRule_4320_;
v___y_4251_ = v_exceptCondsEntailsFalseRule_4324_;
v___y_4252_ = v_a_4291_;
v___y_4253_ = v_exceptCondsEntailsPureRule_4323_;
v___y_4254_ = v_fst_4305_;
v___y_4255_ = v_entailsConsIntroRule_4312_;
v___y_4256_ = v_jp_4329_;
v___y_4257_ = v_debug_4331_;
v___y_4258_ = v_applyPureConsEntailsLRule_4315_;
v___y_4259_ = v_specThms_4311_;
v___y_4260_ = v_snd_4306_;
v___y_4261_ = v_a_4300_;
v___y_4262_ = v_exceptCondsEntailsRflRule_4322_;
v___y_4263_ = v_pureIntroRule_4319_;
v___y_4264_ = v_exceptCondsEntailsTrueRule_4325_;
v___y_4265_ = v_errorOnMissingSpec_4330_;
v___y_4266_ = v_entailsNilIntroRule_4314_;
v___y_4267_ = v_tripleOfEntailsWPRule_4326_;
v___y_4268_ = v_applyPureConsEntailsRRule_4316_;
v___y_4269_ = v_entailsNilPureIntroRule_4313_;
v___y_4270_ = v_andIntroRule_4327_;
v___y_4271_ = v___x_4332_;
goto v___jp_4244_;
}
else
{
lean_object* v_specThms_4333_; lean_object* v_entailsConsIntroRule_4334_; lean_object* v_entailsNilPureIntroRule_4335_; lean_object* v_entailsNilIntroRule_4336_; lean_object* v_applyPureConsEntailsLRule_4337_; lean_object* v_applyPureConsEntailsRRule_4338_; lean_object* v_downPureIntroRule_4339_; lean_object* v_pureElimRule_4340_; lean_object* v_pureIntroRule_4341_; lean_object* v_postCondEntailsRflRule_4342_; lean_object* v_postCondEntailsMkRule_4343_; lean_object* v_exceptCondsEntailsRflRule_4344_; lean_object* v_exceptCondsEntailsPureRule_4345_; lean_object* v_exceptCondsEntailsFalseRule_4346_; lean_object* v_exceptCondsEntailsTrueRule_4347_; lean_object* v_tripleOfEntailsWPRule_4348_; lean_object* v_andIntroRule_4349_; uint8_t v_trivial_4350_; uint8_t v_jp_4351_; uint8_t v_errorOnMissingSpec_4352_; uint8_t v_debug_4353_; lean_object* v_val_4354_; 
v_specThms_4333_ = lean_ctor_get(v_a_4296_, 0);
lean_inc_ref(v_specThms_4333_);
v_entailsConsIntroRule_4334_ = lean_ctor_get(v_a_4296_, 1);
lean_inc_ref(v_entailsConsIntroRule_4334_);
v_entailsNilPureIntroRule_4335_ = lean_ctor_get(v_a_4296_, 2);
lean_inc_ref(v_entailsNilPureIntroRule_4335_);
v_entailsNilIntroRule_4336_ = lean_ctor_get(v_a_4296_, 3);
lean_inc_ref(v_entailsNilIntroRule_4336_);
v_applyPureConsEntailsLRule_4337_ = lean_ctor_get(v_a_4296_, 4);
lean_inc_ref(v_applyPureConsEntailsLRule_4337_);
v_applyPureConsEntailsRRule_4338_ = lean_ctor_get(v_a_4296_, 5);
lean_inc_ref(v_applyPureConsEntailsRRule_4338_);
v_downPureIntroRule_4339_ = lean_ctor_get(v_a_4296_, 6);
lean_inc_ref(v_downPureIntroRule_4339_);
v_pureElimRule_4340_ = lean_ctor_get(v_a_4296_, 7);
lean_inc_ref(v_pureElimRule_4340_);
v_pureIntroRule_4341_ = lean_ctor_get(v_a_4296_, 8);
lean_inc_ref(v_pureIntroRule_4341_);
v_postCondEntailsRflRule_4342_ = lean_ctor_get(v_a_4296_, 9);
lean_inc_ref(v_postCondEntailsRflRule_4342_);
v_postCondEntailsMkRule_4343_ = lean_ctor_get(v_a_4296_, 10);
lean_inc_ref(v_postCondEntailsMkRule_4343_);
v_exceptCondsEntailsRflRule_4344_ = lean_ctor_get(v_a_4296_, 11);
lean_inc_ref(v_exceptCondsEntailsRflRule_4344_);
v_exceptCondsEntailsPureRule_4345_ = lean_ctor_get(v_a_4296_, 12);
lean_inc_ref(v_exceptCondsEntailsPureRule_4345_);
v_exceptCondsEntailsFalseRule_4346_ = lean_ctor_get(v_a_4296_, 13);
lean_inc_ref(v_exceptCondsEntailsFalseRule_4346_);
v_exceptCondsEntailsTrueRule_4347_ = lean_ctor_get(v_a_4296_, 14);
lean_inc_ref(v_exceptCondsEntailsTrueRule_4347_);
v_tripleOfEntailsWPRule_4348_ = lean_ctor_get(v_a_4296_, 15);
lean_inc_ref(v_tripleOfEntailsWPRule_4348_);
v_andIntroRule_4349_ = lean_ctor_get(v_a_4296_, 16);
lean_inc_ref(v_andIntroRule_4349_);
lean_dec(v_a_4296_);
v_trivial_4350_ = lean_ctor_get_uint8(v_a_4291_, sizeof(void*)*1);
v_jp_4351_ = lean_ctor_get_uint8(v_a_4291_, sizeof(void*)*1 + 3);
v_errorOnMissingSpec_4352_ = lean_ctor_get_uint8(v_a_4291_, sizeof(void*)*1 + 4);
v_debug_4353_ = lean_ctor_get_uint8(v_a_4291_, sizeof(void*)*1 + 5);
v_val_4354_ = lean_ctor_get(v_a_4310_, 0);
lean_inc(v_val_4354_);
v___y_4245_ = v_a_4310_;
v___y_4246_ = v_postCondEntailsMkRule_4343_;
v___y_4247_ = v_trivial_4350_;
v___y_4248_ = v_pureElimRule_4340_;
v___y_4249_ = v_downPureIntroRule_4339_;
v___y_4250_ = v_postCondEntailsRflRule_4342_;
v___y_4251_ = v_exceptCondsEntailsFalseRule_4346_;
v___y_4252_ = v_a_4291_;
v___y_4253_ = v_exceptCondsEntailsPureRule_4345_;
v___y_4254_ = v_fst_4305_;
v___y_4255_ = v_entailsConsIntroRule_4334_;
v___y_4256_ = v_jp_4351_;
v___y_4257_ = v_debug_4353_;
v___y_4258_ = v_applyPureConsEntailsLRule_4337_;
v___y_4259_ = v_specThms_4333_;
v___y_4260_ = v_snd_4306_;
v___y_4261_ = v_a_4300_;
v___y_4262_ = v_exceptCondsEntailsRflRule_4344_;
v___y_4263_ = v_pureIntroRule_4341_;
v___y_4264_ = v_exceptCondsEntailsTrueRule_4347_;
v___y_4265_ = v_errorOnMissingSpec_4352_;
v___y_4266_ = v_entailsNilIntroRule_4336_;
v___y_4267_ = v_tripleOfEntailsWPRule_4348_;
v___y_4268_ = v_applyPureConsEntailsRRule_4338_;
v___y_4269_ = v_entailsNilPureIntroRule_4335_;
v___y_4270_ = v_andIntroRule_4349_;
v___y_4271_ = v_val_4354_;
goto v___jp_4244_;
}
}
else
{
lean_object* v_a_4355_; lean_object* v___x_4357_; uint8_t v_isShared_4358_; uint8_t v_isSharedCheck_4362_; 
lean_dec(v_snd_4306_);
lean_dec(v_fst_4305_);
lean_dec(v_a_4300_);
lean_dec(v_a_4296_);
lean_dec(v_a_4291_);
v_a_4355_ = lean_ctor_get(v___x_4309_, 0);
v_isSharedCheck_4362_ = !lean_is_exclusive(v___x_4309_);
if (v_isSharedCheck_4362_ == 0)
{
v___x_4357_ = v___x_4309_;
v_isShared_4358_ = v_isSharedCheck_4362_;
goto v_resetjp_4356_;
}
else
{
lean_inc(v_a_4355_);
lean_dec(v___x_4309_);
v___x_4357_ = lean_box(0);
v_isShared_4358_ = v_isSharedCheck_4362_;
goto v_resetjp_4356_;
}
v_resetjp_4356_:
{
lean_object* v___x_4360_; 
if (v_isShared_4358_ == 0)
{
v___x_4360_ = v___x_4357_;
goto v_reusejp_4359_;
}
else
{
lean_object* v_reuseFailAlloc_4361_; 
v_reuseFailAlloc_4361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4361_, 0, v_a_4355_);
v___x_4360_ = v_reuseFailAlloc_4361_;
goto v_reusejp_4359_;
}
v_reusejp_4359_:
{
return v___x_4360_;
}
}
}
}
else
{
lean_object* v_a_4363_; lean_object* v___x_4365_; uint8_t v_isShared_4366_; uint8_t v_isSharedCheck_4370_; 
lean_dec(v_a_4300_);
lean_dec(v_a_4296_);
lean_dec(v_a_4291_);
v_a_4363_ = lean_ctor_get(v___x_4303_, 0);
v_isSharedCheck_4370_ = !lean_is_exclusive(v___x_4303_);
if (v_isSharedCheck_4370_ == 0)
{
v___x_4365_ = v___x_4303_;
v_isShared_4366_ = v_isSharedCheck_4370_;
goto v_resetjp_4364_;
}
else
{
lean_inc(v_a_4363_);
lean_dec(v___x_4303_);
v___x_4365_ = lean_box(0);
v_isShared_4366_ = v_isSharedCheck_4370_;
goto v_resetjp_4364_;
}
v_resetjp_4364_:
{
lean_object* v___x_4368_; 
if (v_isShared_4366_ == 0)
{
v___x_4368_ = v___x_4365_;
goto v_reusejp_4367_;
}
else
{
lean_object* v_reuseFailAlloc_4369_; 
v_reuseFailAlloc_4369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4369_, 0, v_a_4363_);
v___x_4368_ = v_reuseFailAlloc_4369_;
goto v_reusejp_4367_;
}
v_reusejp_4367_:
{
return v___x_4368_;
}
}
}
}
else
{
lean_object* v_a_4371_; lean_object* v___x_4373_; uint8_t v_isShared_4374_; uint8_t v_isSharedCheck_4378_; 
lean_dec(v_a_4296_);
lean_dec(v_a_4291_);
lean_dec(v_goal_4236_);
v_a_4371_ = lean_ctor_get(v___x_4299_, 0);
v_isSharedCheck_4378_ = !lean_is_exclusive(v___x_4299_);
if (v_isSharedCheck_4378_ == 0)
{
v___x_4373_ = v___x_4299_;
v_isShared_4374_ = v_isSharedCheck_4378_;
goto v_resetjp_4372_;
}
else
{
lean_inc(v_a_4371_);
lean_dec(v___x_4299_);
v___x_4373_ = lean_box(0);
v_isShared_4374_ = v_isSharedCheck_4378_;
goto v_resetjp_4372_;
}
v_resetjp_4372_:
{
lean_object* v___x_4376_; 
if (v_isShared_4374_ == 0)
{
v___x_4376_ = v___x_4373_;
goto v_reusejp_4375_;
}
else
{
lean_object* v_reuseFailAlloc_4377_; 
v_reuseFailAlloc_4377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4377_, 0, v_a_4371_);
v___x_4376_ = v_reuseFailAlloc_4377_;
goto v_reusejp_4375_;
}
v_reusejp_4375_:
{
return v___x_4376_;
}
}
}
}
else
{
lean_object* v_a_4379_; lean_object* v___x_4381_; uint8_t v_isShared_4382_; uint8_t v_isSharedCheck_4386_; 
lean_dec(v_a_4291_);
lean_dec(v_goal_4236_);
v_a_4379_ = lean_ctor_get(v___x_4295_, 0);
v_isSharedCheck_4386_ = !lean_is_exclusive(v___x_4295_);
if (v_isSharedCheck_4386_ == 0)
{
v___x_4381_ = v___x_4295_;
v_isShared_4382_ = v_isSharedCheck_4386_;
goto v_resetjp_4380_;
}
else
{
lean_inc(v_a_4379_);
lean_dec(v___x_4295_);
v___x_4381_ = lean_box(0);
v_isShared_4382_ = v_isSharedCheck_4386_;
goto v_resetjp_4380_;
}
v_resetjp_4380_:
{
lean_object* v___x_4384_; 
if (v_isShared_4382_ == 0)
{
v___x_4384_ = v___x_4381_;
goto v_reusejp_4383_;
}
else
{
lean_object* v_reuseFailAlloc_4385_; 
v_reuseFailAlloc_4385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4385_, 0, v_a_4379_);
v___x_4384_ = v_reuseFailAlloc_4385_;
goto v_reusejp_4383_;
}
v_reusejp_4383_:
{
return v___x_4384_;
}
}
}
}
else
{
lean_object* v_a_4387_; lean_object* v___x_4389_; uint8_t v_isShared_4390_; uint8_t v_isSharedCheck_4394_; 
lean_dec(v_a_4291_);
lean_dec(v_goal_4236_);
v_a_4387_ = lean_ctor_get(v___x_4292_, 0);
v_isSharedCheck_4394_ = !lean_is_exclusive(v___x_4292_);
if (v_isSharedCheck_4394_ == 0)
{
v___x_4389_ = v___x_4292_;
v_isShared_4390_ = v_isSharedCheck_4394_;
goto v_resetjp_4388_;
}
else
{
lean_inc(v_a_4387_);
lean_dec(v___x_4292_);
v___x_4389_ = lean_box(0);
v_isShared_4390_ = v_isSharedCheck_4394_;
goto v_resetjp_4388_;
}
v_resetjp_4388_:
{
lean_object* v___x_4392_; 
if (v_isShared_4390_ == 0)
{
v___x_4392_ = v___x_4389_;
goto v_reusejp_4391_;
}
else
{
lean_object* v_reuseFailAlloc_4393_; 
v_reuseFailAlloc_4393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4393_, 0, v_a_4387_);
v___x_4392_ = v_reuseFailAlloc_4393_;
goto v_reusejp_4391_;
}
v_reusejp_4391_:
{
return v___x_4392_;
}
}
}
}
else
{
lean_object* v_a_4395_; lean_object* v___x_4397_; uint8_t v_isShared_4398_; uint8_t v_isSharedCheck_4402_; 
lean_dec(v_goal_4236_);
v_a_4395_ = lean_ctor_get(v___x_4290_, 0);
v_isSharedCheck_4402_ = !lean_is_exclusive(v___x_4290_);
if (v_isSharedCheck_4402_ == 0)
{
v___x_4397_ = v___x_4290_;
v_isShared_4398_ = v_isSharedCheck_4402_;
goto v_resetjp_4396_;
}
else
{
lean_inc(v_a_4395_);
lean_dec(v___x_4290_);
v___x_4397_ = lean_box(0);
v_isShared_4398_ = v_isSharedCheck_4402_;
goto v_resetjp_4396_;
}
v_resetjp_4396_:
{
lean_object* v___x_4400_; 
if (v_isShared_4398_ == 0)
{
v___x_4400_ = v___x_4397_;
goto v_reusejp_4399_;
}
else
{
lean_object* v_reuseFailAlloc_4401_; 
v_reuseFailAlloc_4401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4401_, 0, v_a_4395_);
v___x_4400_ = v_reuseFailAlloc_4401_;
goto v_reusejp_4399_;
}
v_reusejp_4399_:
{
return v___x_4400_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___boxed(lean_object* v_stx_4416_, lean_object* v_goal_4417_, lean_object* v___y_4418_, lean_object* v___y_4419_, lean_object* v___y_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_, lean_object* v___y_4423_, lean_object* v___y_4424_){
_start:
{
lean_object* v_res_4425_; 
v_res_4425_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0(v_stx_4416_, v_goal_4417_, v___y_4418_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_, v___y_4423_);
lean_dec(v___y_4423_);
lean_dec_ref(v___y_4422_);
lean_dec(v___y_4421_);
lean_dec_ref(v___y_4420_);
lean_dec(v___y_4419_);
lean_dec_ref(v___y_4418_);
lean_dec(v_stx_4416_);
return v_res_4425_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs(lean_object* v_stx_4426_, lean_object* v_goal_4427_, lean_object* v_a_4428_, lean_object* v_a_4429_, lean_object* v_a_4430_, lean_object* v_a_4431_, lean_object* v_a_4432_, lean_object* v_a_4433_){
_start:
{
lean_object* v___f_4435_; lean_object* v___x_4436_; 
lean_inc(v_goal_4427_);
v___f_4435_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___boxed), 9, 2);
lean_closure_set(v___f_4435_, 0, v_stx_4426_);
lean_closure_set(v___f_4435_, 1, v_goal_4427_);
v___x_4436_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg(v_goal_4427_, v___f_4435_, v_a_4428_, v_a_4429_, v_a_4430_, v_a_4431_, v_a_4432_, v_a_4433_);
return v___x_4436_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___boxed(lean_object* v_stx_4437_, lean_object* v_goal_4438_, lean_object* v_a_4439_, lean_object* v_a_4440_, lean_object* v_a_4441_, lean_object* v_a_4442_, lean_object* v_a_4443_, lean_object* v_a_4444_, lean_object* v_a_4445_){
_start:
{
lean_object* v_res_4446_; 
v_res_4446_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs(v_stx_4437_, v_goal_4438_, v_a_4439_, v_a_4440_, v_a_4441_, v_a_4442_, v_a_4443_, v_a_4444_);
lean_dec(v_a_4444_);
lean_dec_ref(v_a_4443_);
lean_dec(v_a_4442_);
lean_dec_ref(v_a_4441_);
lean_dec(v_a_4440_);
lean_dec_ref(v_a_4439_);
return v_res_4446_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0(lean_object* v_ref_4447_, lean_object* v_msgData_4448_, uint8_t v_severity_4449_, uint8_t v_isSilent_4450_, lean_object* v___y_4451_, lean_object* v___y_4452_, lean_object* v___y_4453_, lean_object* v___y_4454_, lean_object* v___y_4455_, lean_object* v___y_4456_){
_start:
{
lean_object* v___x_4458_; 
v___x_4458_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___redArg(v_ref_4447_, v_msgData_4448_, v_severity_4449_, v_isSilent_4450_, v___y_4453_, v___y_4454_, v___y_4455_, v___y_4456_);
return v___x_4458_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___boxed(lean_object* v_ref_4459_, lean_object* v_msgData_4460_, lean_object* v_severity_4461_, lean_object* v_isSilent_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_, lean_object* v___y_4466_, lean_object* v___y_4467_, lean_object* v___y_4468_, lean_object* v___y_4469_){
_start:
{
uint8_t v_severity_boxed_4470_; uint8_t v_isSilent_boxed_4471_; lean_object* v_res_4472_; 
v_severity_boxed_4470_ = lean_unbox(v_severity_4461_);
v_isSilent_boxed_4471_ = lean_unbox(v_isSilent_4462_);
v_res_4472_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0(v_ref_4459_, v_msgData_4460_, v_severity_boxed_4470_, v_isSilent_boxed_4471_, v___y_4463_, v___y_4464_, v___y_4465_, v___y_4466_, v___y_4467_, v___y_4468_);
lean_dec(v___y_4468_);
lean_dec_ref(v___y_4467_);
lean_dec(v___y_4466_);
lean_dec_ref(v___y_4465_);
lean_dec(v___y_4464_);
lean_dec_ref(v___y_4463_);
lean_dec(v_ref_4459_);
return v_res_4472_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__0(lean_object* v_a_4473_, lean_object* v_ctx_4474_, lean_object* v_stepLimit_4475_, lean_object* v_invariantAlts_x3f_4476_, lean_object* v___y_4477_, lean_object* v___y_4478_, lean_object* v___y_4479_, lean_object* v___y_4480_, lean_object* v___y_4481_, lean_object* v___y_4482_, lean_object* v___y_4483_, lean_object* v___y_4484_, lean_object* v___y_4485_){
_start:
{
lean_object* v___x_4487_; 
v___x_4487_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_run(v_a_4473_, v_ctx_4474_, v_stepLimit_4475_, v___y_4477_, v___y_4478_, v___y_4479_, v___y_4480_, v___y_4481_, v___y_4482_, v___y_4483_, v___y_4484_, v___y_4485_);
if (lean_obj_tag(v___x_4487_) == 0)
{
if (lean_obj_tag(v_invariantAlts_x3f_4476_) == 1)
{
lean_object* v_a_4488_; lean_object* v_val_4489_; lean_object* v_invariants_4490_; lean_object* v_inlineHandledInvariants_4491_; lean_object* v___x_4492_; 
v_a_4488_ = lean_ctor_get(v___x_4487_, 0);
lean_inc(v_a_4488_);
lean_dec_ref_known(v___x_4487_, 1);
v_val_4489_ = lean_ctor_get(v_invariantAlts_x3f_4476_, 0);
v_invariants_4490_ = lean_ctor_get(v_a_4488_, 0);
v_inlineHandledInvariants_4491_ = lean_ctor_get(v_a_4488_, 2);
lean_inc_ref(v_inlineHandledInvariants_4491_);
v___x_4492_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants(v_val_4489_, v_invariants_4490_, v_inlineHandledInvariants_4491_, v___y_4480_, v___y_4481_, v___y_4482_, v___y_4483_, v___y_4484_, v___y_4485_);
if (lean_obj_tag(v___x_4492_) == 0)
{
lean_object* v___x_4494_; uint8_t v_isShared_4495_; uint8_t v_isSharedCheck_4499_; 
v_isSharedCheck_4499_ = !lean_is_exclusive(v___x_4492_);
if (v_isSharedCheck_4499_ == 0)
{
lean_object* v_unused_4500_; 
v_unused_4500_ = lean_ctor_get(v___x_4492_, 0);
lean_dec(v_unused_4500_);
v___x_4494_ = v___x_4492_;
v_isShared_4495_ = v_isSharedCheck_4499_;
goto v_resetjp_4493_;
}
else
{
lean_dec(v___x_4492_);
v___x_4494_ = lean_box(0);
v_isShared_4495_ = v_isSharedCheck_4499_;
goto v_resetjp_4493_;
}
v_resetjp_4493_:
{
lean_object* v___x_4497_; 
if (v_isShared_4495_ == 0)
{
lean_ctor_set(v___x_4494_, 0, v_a_4488_);
v___x_4497_ = v___x_4494_;
goto v_reusejp_4496_;
}
else
{
lean_object* v_reuseFailAlloc_4498_; 
v_reuseFailAlloc_4498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4498_, 0, v_a_4488_);
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
lean_object* v_a_4501_; lean_object* v___x_4503_; uint8_t v_isShared_4504_; uint8_t v_isSharedCheck_4508_; 
lean_dec(v_a_4488_);
v_a_4501_ = lean_ctor_get(v___x_4492_, 0);
v_isSharedCheck_4508_ = !lean_is_exclusive(v___x_4492_);
if (v_isSharedCheck_4508_ == 0)
{
v___x_4503_ = v___x_4492_;
v_isShared_4504_ = v_isSharedCheck_4508_;
goto v_resetjp_4502_;
}
else
{
lean_inc(v_a_4501_);
lean_dec(v___x_4492_);
v___x_4503_ = lean_box(0);
v_isShared_4504_ = v_isSharedCheck_4508_;
goto v_resetjp_4502_;
}
v_resetjp_4502_:
{
lean_object* v___x_4506_; 
if (v_isShared_4504_ == 0)
{
v___x_4506_ = v___x_4503_;
goto v_reusejp_4505_;
}
else
{
lean_object* v_reuseFailAlloc_4507_; 
v_reuseFailAlloc_4507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4507_, 0, v_a_4501_);
v___x_4506_ = v_reuseFailAlloc_4507_;
goto v_reusejp_4505_;
}
v_reusejp_4505_:
{
return v___x_4506_;
}
}
}
}
else
{
return v___x_4487_;
}
}
else
{
return v___x_4487_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__0___boxed(lean_object* v_a_4509_, lean_object* v_ctx_4510_, lean_object* v_stepLimit_4511_, lean_object* v_invariantAlts_x3f_4512_, lean_object* v___y_4513_, lean_object* v___y_4514_, lean_object* v___y_4515_, lean_object* v___y_4516_, lean_object* v___y_4517_, lean_object* v___y_4518_, lean_object* v___y_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_, lean_object* v___y_4522_){
_start:
{
lean_object* v_res_4523_; 
v_res_4523_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__0(v_a_4509_, v_ctx_4510_, v_stepLimit_4511_, v_invariantAlts_x3f_4512_, v___y_4513_, v___y_4514_, v___y_4515_, v___y_4516_, v___y_4517_, v___y_4518_, v___y_4519_, v___y_4520_, v___y_4521_);
lean_dec(v___y_4521_);
lean_dec_ref(v___y_4520_);
lean_dec(v___y_4519_);
lean_dec_ref(v___y_4518_);
lean_dec(v___y_4517_);
lean_dec_ref(v___y_4516_);
lean_dec(v___y_4515_);
lean_dec_ref(v___y_4514_);
lean_dec(v___y_4513_);
lean_dec(v_invariantAlts_x3f_4512_);
lean_dec_ref(v_ctx_4510_);
return v_res_4523_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__1(lean_object* v_x_4524_, lean_object* v_x_4525_, lean_object* v___y_4526_, lean_object* v___y_4527_, lean_object* v___y_4528_, lean_object* v___y_4529_, lean_object* v___y_4530_, lean_object* v___y_4531_, lean_object* v___y_4532_, lean_object* v___y_4533_, lean_object* v___y_4534_){
_start:
{
if (lean_obj_tag(v_x_4524_) == 0)
{
lean_object* v___x_4536_; lean_object* v___x_4537_; 
v___x_4536_ = l_List_reverse___redArg(v_x_4525_);
v___x_4537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4537_, 0, v___x_4536_);
return v___x_4537_;
}
else
{
lean_object* v_head_4538_; lean_object* v_tail_4539_; lean_object* v___x_4541_; uint8_t v_isShared_4542_; uint8_t v_isSharedCheck_4557_; 
v_head_4538_ = lean_ctor_get(v_x_4524_, 0);
v_tail_4539_ = lean_ctor_get(v_x_4524_, 1);
v_isSharedCheck_4557_ = !lean_is_exclusive(v_x_4524_);
if (v_isSharedCheck_4557_ == 0)
{
v___x_4541_ = v_x_4524_;
v_isShared_4542_ = v_isSharedCheck_4557_;
goto v_resetjp_4540_;
}
else
{
lean_inc(v_tail_4539_);
lean_inc(v_head_4538_);
lean_dec(v_x_4524_);
v___x_4541_ = lean_box(0);
v_isShared_4542_ = v_isSharedCheck_4557_;
goto v_resetjp_4540_;
}
v_resetjp_4540_:
{
lean_object* v___x_4543_; 
v___x_4543_ = l_Lean_Meta_Grind_mkGoalCore(v_head_4538_, v___y_4526_, v___y_4527_, v___y_4528_, v___y_4529_, v___y_4530_, v___y_4531_, v___y_4532_, v___y_4533_, v___y_4534_);
if (lean_obj_tag(v___x_4543_) == 0)
{
lean_object* v_a_4544_; lean_object* v___x_4546_; 
v_a_4544_ = lean_ctor_get(v___x_4543_, 0);
lean_inc(v_a_4544_);
lean_dec_ref_known(v___x_4543_, 1);
if (v_isShared_4542_ == 0)
{
lean_ctor_set(v___x_4541_, 1, v_x_4525_);
lean_ctor_set(v___x_4541_, 0, v_a_4544_);
v___x_4546_ = v___x_4541_;
goto v_reusejp_4545_;
}
else
{
lean_object* v_reuseFailAlloc_4548_; 
v_reuseFailAlloc_4548_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4548_, 0, v_a_4544_);
lean_ctor_set(v_reuseFailAlloc_4548_, 1, v_x_4525_);
v___x_4546_ = v_reuseFailAlloc_4548_;
goto v_reusejp_4545_;
}
v_reusejp_4545_:
{
v_x_4524_ = v_tail_4539_;
v_x_4525_ = v___x_4546_;
goto _start;
}
}
else
{
lean_object* v_a_4549_; lean_object* v___x_4551_; uint8_t v_isShared_4552_; uint8_t v_isSharedCheck_4556_; 
lean_del_object(v___x_4541_);
lean_dec(v_tail_4539_);
lean_dec(v_x_4525_);
v_a_4549_ = lean_ctor_get(v___x_4543_, 0);
v_isSharedCheck_4556_ = !lean_is_exclusive(v___x_4543_);
if (v_isSharedCheck_4556_ == 0)
{
v___x_4551_ = v___x_4543_;
v_isShared_4552_ = v_isSharedCheck_4556_;
goto v_resetjp_4550_;
}
else
{
lean_inc(v_a_4549_);
lean_dec(v___x_4543_);
v___x_4551_ = lean_box(0);
v_isShared_4552_ = v_isSharedCheck_4556_;
goto v_resetjp_4550_;
}
v_resetjp_4550_:
{
lean_object* v___x_4554_; 
if (v_isShared_4552_ == 0)
{
v___x_4554_ = v___x_4551_;
goto v_reusejp_4553_;
}
else
{
lean_object* v_reuseFailAlloc_4555_; 
v_reuseFailAlloc_4555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4555_, 0, v_a_4549_);
v___x_4554_ = v_reuseFailAlloc_4555_;
goto v_reusejp_4553_;
}
v_reusejp_4553_:
{
return v___x_4554_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__1___boxed(lean_object* v_x_4558_, lean_object* v_x_4559_, lean_object* v___y_4560_, lean_object* v___y_4561_, lean_object* v___y_4562_, lean_object* v___y_4563_, lean_object* v___y_4564_, lean_object* v___y_4565_, lean_object* v___y_4566_, lean_object* v___y_4567_, lean_object* v___y_4568_, lean_object* v___y_4569_){
_start:
{
lean_object* v_res_4570_; 
v_res_4570_ = l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__1(v_x_4558_, v_x_4559_, v___y_4560_, v___y_4561_, v___y_4562_, v___y_4563_, v___y_4564_, v___y_4565_, v___y_4566_, v___y_4567_, v___y_4568_);
lean_dec(v___y_4568_);
lean_dec_ref(v___y_4567_);
lean_dec(v___y_4566_);
lean_dec_ref(v___y_4565_);
lean_dec(v___y_4564_);
lean_dec_ref(v___y_4563_);
lean_dec(v___y_4562_);
lean_dec_ref(v___y_4561_);
lean_dec(v___y_4560_);
return v_res_4570_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__2(lean_object* v_x_4571_, lean_object* v_x_4572_, lean_object* v___y_4573_, lean_object* v___y_4574_, lean_object* v___y_4575_, lean_object* v___y_4576_, lean_object* v___y_4577_, lean_object* v___y_4578_, lean_object* v___y_4579_, lean_object* v___y_4580_, lean_object* v___y_4581_){
_start:
{
if (lean_obj_tag(v_x_4571_) == 0)
{
lean_object* v___x_4583_; lean_object* v___x_4584_; 
v___x_4583_ = l_List_reverse___redArg(v_x_4572_);
v___x_4584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4584_, 0, v___x_4583_);
return v___x_4584_;
}
else
{
lean_object* v_head_4585_; lean_object* v_tail_4586_; lean_object* v___x_4588_; uint8_t v_isShared_4589_; uint8_t v_isSharedCheck_4605_; 
v_head_4585_ = lean_ctor_get(v_x_4571_, 0);
v_tail_4586_ = lean_ctor_get(v_x_4571_, 1);
v_isSharedCheck_4605_ = !lean_is_exclusive(v_x_4571_);
if (v_isSharedCheck_4605_ == 0)
{
v___x_4588_ = v_x_4571_;
v_isShared_4589_ = v_isSharedCheck_4605_;
goto v_resetjp_4587_;
}
else
{
lean_inc(v_tail_4586_);
lean_inc(v_head_4585_);
lean_dec(v_x_4571_);
v___x_4588_ = lean_box(0);
v_isShared_4589_ = v_isSharedCheck_4605_;
goto v_resetjp_4587_;
}
v_resetjp_4587_:
{
lean_object* v___x_4590_; lean_object* v___x_4591_; 
v___x_4590_ = lean_box(0);
v___x_4591_ = l_Lean_Meta_Grind_processHypotheses(v_head_4585_, v___x_4590_, v___y_4573_, v___y_4574_, v___y_4575_, v___y_4576_, v___y_4577_, v___y_4578_, v___y_4579_, v___y_4580_, v___y_4581_);
if (lean_obj_tag(v___x_4591_) == 0)
{
lean_object* v_a_4592_; lean_object* v___x_4594_; 
v_a_4592_ = lean_ctor_get(v___x_4591_, 0);
lean_inc(v_a_4592_);
lean_dec_ref_known(v___x_4591_, 1);
if (v_isShared_4589_ == 0)
{
lean_ctor_set(v___x_4588_, 1, v_x_4572_);
lean_ctor_set(v___x_4588_, 0, v_a_4592_);
v___x_4594_ = v___x_4588_;
goto v_reusejp_4593_;
}
else
{
lean_object* v_reuseFailAlloc_4596_; 
v_reuseFailAlloc_4596_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4596_, 0, v_a_4592_);
lean_ctor_set(v_reuseFailAlloc_4596_, 1, v_x_4572_);
v___x_4594_ = v_reuseFailAlloc_4596_;
goto v_reusejp_4593_;
}
v_reusejp_4593_:
{
v_x_4571_ = v_tail_4586_;
v_x_4572_ = v___x_4594_;
goto _start;
}
}
else
{
lean_object* v_a_4597_; lean_object* v___x_4599_; uint8_t v_isShared_4600_; uint8_t v_isSharedCheck_4604_; 
lean_del_object(v___x_4588_);
lean_dec(v_tail_4586_);
lean_dec(v_x_4572_);
v_a_4597_ = lean_ctor_get(v___x_4591_, 0);
v_isSharedCheck_4604_ = !lean_is_exclusive(v___x_4591_);
if (v_isSharedCheck_4604_ == 0)
{
v___x_4599_ = v___x_4591_;
v_isShared_4600_ = v_isSharedCheck_4604_;
goto v_resetjp_4598_;
}
else
{
lean_inc(v_a_4597_);
lean_dec(v___x_4591_);
v___x_4599_ = lean_box(0);
v_isShared_4600_ = v_isSharedCheck_4604_;
goto v_resetjp_4598_;
}
v_resetjp_4598_:
{
lean_object* v___x_4602_; 
if (v_isShared_4600_ == 0)
{
v___x_4602_ = v___x_4599_;
goto v_reusejp_4601_;
}
else
{
lean_object* v_reuseFailAlloc_4603_; 
v_reuseFailAlloc_4603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4603_, 0, v_a_4597_);
v___x_4602_ = v_reuseFailAlloc_4603_;
goto v_reusejp_4601_;
}
v_reusejp_4601_:
{
return v___x_4602_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__2___boxed(lean_object* v_x_4606_, lean_object* v_x_4607_, lean_object* v___y_4608_, lean_object* v___y_4609_, lean_object* v___y_4610_, lean_object* v___y_4611_, lean_object* v___y_4612_, lean_object* v___y_4613_, lean_object* v___y_4614_, lean_object* v___y_4615_, lean_object* v___y_4616_, lean_object* v___y_4617_){
_start:
{
lean_object* v_res_4618_; 
v_res_4618_ = l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__2(v_x_4606_, v_x_4607_, v___y_4608_, v___y_4609_, v___y_4610_, v___y_4611_, v___y_4612_, v___y_4613_, v___y_4614_, v___y_4615_, v___y_4616_);
lean_dec(v___y_4616_);
lean_dec_ref(v___y_4615_);
lean_dec(v___y_4614_);
lean_dec_ref(v___y_4613_);
lean_dec(v___y_4612_);
lean_dec_ref(v___y_4611_);
lean_dec(v___y_4610_);
lean_dec_ref(v___y_4609_);
lean_dec(v___y_4608_);
return v_res_4618_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__1(lean_object* v___x_4619_, lean_object* v___x_4620_, lean_object* v_vcs_4621_, lean_object* v___y_4622_, lean_object* v___y_4623_, lean_object* v___y_4624_, lean_object* v___y_4625_, lean_object* v___y_4626_, lean_object* v___y_4627_, lean_object* v___y_4628_, lean_object* v___y_4629_, lean_object* v___y_4630_){
_start:
{
lean_object* v___x_4632_; 
lean_inc(v___x_4620_);
v___x_4632_ = l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__1(v___x_4619_, v___x_4620_, v___y_4622_, v___y_4623_, v___y_4624_, v___y_4625_, v___y_4626_, v___y_4627_, v___y_4628_, v___y_4629_, v___y_4630_);
if (lean_obj_tag(v___x_4632_) == 0)
{
lean_object* v_a_4633_; lean_object* v___x_4634_; lean_object* v___x_4635_; 
v_a_4633_ = lean_ctor_get(v___x_4632_, 0);
lean_inc(v_a_4633_);
lean_dec_ref_known(v___x_4632_, 1);
v___x_4634_ = lean_array_to_list(v_vcs_4621_);
v___x_4635_ = l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__2(v___x_4634_, v___x_4620_, v___y_4622_, v___y_4623_, v___y_4624_, v___y_4625_, v___y_4626_, v___y_4627_, v___y_4628_, v___y_4629_, v___y_4630_);
if (lean_obj_tag(v___x_4635_) == 0)
{
lean_object* v_a_4636_; lean_object* v___x_4638_; uint8_t v_isShared_4639_; uint8_t v_isSharedCheck_4644_; 
v_a_4636_ = lean_ctor_get(v___x_4635_, 0);
v_isSharedCheck_4644_ = !lean_is_exclusive(v___x_4635_);
if (v_isSharedCheck_4644_ == 0)
{
v___x_4638_ = v___x_4635_;
v_isShared_4639_ = v_isSharedCheck_4644_;
goto v_resetjp_4637_;
}
else
{
lean_inc(v_a_4636_);
lean_dec(v___x_4635_);
v___x_4638_ = lean_box(0);
v_isShared_4639_ = v_isSharedCheck_4644_;
goto v_resetjp_4637_;
}
v_resetjp_4637_:
{
lean_object* v___x_4640_; lean_object* v___x_4642_; 
v___x_4640_ = l_List_appendTR___redArg(v_a_4633_, v_a_4636_);
if (v_isShared_4639_ == 0)
{
lean_ctor_set(v___x_4638_, 0, v___x_4640_);
v___x_4642_ = v___x_4638_;
goto v_reusejp_4641_;
}
else
{
lean_object* v_reuseFailAlloc_4643_; 
v_reuseFailAlloc_4643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4643_, 0, v___x_4640_);
v___x_4642_ = v_reuseFailAlloc_4643_;
goto v_reusejp_4641_;
}
v_reusejp_4641_:
{
return v___x_4642_;
}
}
}
else
{
lean_dec(v_a_4633_);
return v___x_4635_;
}
}
else
{
lean_dec_ref(v_vcs_4621_);
lean_dec(v___x_4620_);
return v___x_4632_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__1___boxed(lean_object* v___x_4645_, lean_object* v___x_4646_, lean_object* v_vcs_4647_, lean_object* v___y_4648_, lean_object* v___y_4649_, lean_object* v___y_4650_, lean_object* v___y_4651_, lean_object* v___y_4652_, lean_object* v___y_4653_, lean_object* v___y_4654_, lean_object* v___y_4655_, lean_object* v___y_4656_, lean_object* v___y_4657_){
_start:
{
lean_object* v_res_4658_; 
v_res_4658_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__1(v___x_4645_, v___x_4646_, v_vcs_4647_, v___y_4648_, v___y_4649_, v___y_4650_, v___y_4651_, v___y_4652_, v___y_4653_, v___y_4654_, v___y_4655_, v___y_4656_);
lean_dec(v___y_4656_);
lean_dec_ref(v___y_4655_);
lean_dec(v___y_4654_);
lean_dec_ref(v___y_4653_);
lean_dec(v___y_4652_);
lean_dec_ref(v___y_4651_);
lean_dec(v___y_4650_);
lean_dec_ref(v___y_4649_);
lean_dec(v___y_4648_);
return v_res_4658_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3___redArg(lean_object* v_msg_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_, lean_object* v___y_4662_, lean_object* v___y_4663_){
_start:
{
lean_object* v_ref_4665_; lean_object* v___x_4666_; lean_object* v_a_4667_; lean_object* v___x_4669_; uint8_t v_isShared_4670_; uint8_t v_isSharedCheck_4675_; 
v_ref_4665_ = lean_ctor_get(v___y_4662_, 5);
v___x_4666_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__1(v_msg_4659_, v___y_4660_, v___y_4661_, v___y_4662_, v___y_4663_);
v_a_4667_ = lean_ctor_get(v___x_4666_, 0);
v_isSharedCheck_4675_ = !lean_is_exclusive(v___x_4666_);
if (v_isSharedCheck_4675_ == 0)
{
v___x_4669_ = v___x_4666_;
v_isShared_4670_ = v_isSharedCheck_4675_;
goto v_resetjp_4668_;
}
else
{
lean_inc(v_a_4667_);
lean_dec(v___x_4666_);
v___x_4669_ = lean_box(0);
v_isShared_4670_ = v_isSharedCheck_4675_;
goto v_resetjp_4668_;
}
v_resetjp_4668_:
{
lean_object* v___x_4671_; lean_object* v___x_4673_; 
lean_inc(v_ref_4665_);
v___x_4671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4671_, 0, v_ref_4665_);
lean_ctor_set(v___x_4671_, 1, v_a_4667_);
if (v_isShared_4670_ == 0)
{
lean_ctor_set_tag(v___x_4669_, 1);
lean_ctor_set(v___x_4669_, 0, v___x_4671_);
v___x_4673_ = v___x_4669_;
goto v_reusejp_4672_;
}
else
{
lean_object* v_reuseFailAlloc_4674_; 
v_reuseFailAlloc_4674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4674_, 0, v___x_4671_);
v___x_4673_ = v_reuseFailAlloc_4674_;
goto v_reusejp_4672_;
}
v_reusejp_4672_:
{
return v___x_4673_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3___redArg___boxed(lean_object* v_msg_4676_, lean_object* v___y_4677_, lean_object* v___y_4678_, lean_object* v___y_4679_, lean_object* v___y_4680_, lean_object* v___y_4681_){
_start:
{
lean_object* v_res_4682_; 
v_res_4682_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3___redArg(v_msg_4676_, v___y_4677_, v___y_4678_, v___y_4679_, v___y_4680_);
lean_dec(v___y_4680_);
lean_dec_ref(v___y_4679_);
lean_dec(v___y_4678_);
lean_dec_ref(v___y_4677_);
return v_res_4682_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__6___redArg(lean_object* v_keys_4683_, lean_object* v_i_4684_, lean_object* v_k_4685_){
_start:
{
lean_object* v___x_4686_; uint8_t v___x_4687_; 
v___x_4686_ = lean_array_get_size(v_keys_4683_);
v___x_4687_ = lean_nat_dec_lt(v_i_4684_, v___x_4686_);
if (v___x_4687_ == 0)
{
lean_dec(v_i_4684_);
return v___x_4687_;
}
else
{
lean_object* v_k_x27_4688_; uint8_t v___x_4689_; 
v_k_x27_4688_ = lean_array_fget_borrowed(v_keys_4683_, v_i_4684_);
v___x_4689_ = l_Lean_instBEqMVarId_beq(v_k_4685_, v_k_x27_4688_);
if (v___x_4689_ == 0)
{
lean_object* v___x_4690_; lean_object* v___x_4691_; 
v___x_4690_ = lean_unsigned_to_nat(1u);
v___x_4691_ = lean_nat_add(v_i_4684_, v___x_4690_);
lean_dec(v_i_4684_);
v_i_4684_ = v___x_4691_;
goto _start;
}
else
{
lean_dec(v_i_4684_);
return v___x_4689_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__6___redArg___boxed(lean_object* v_keys_4693_, lean_object* v_i_4694_, lean_object* v_k_4695_){
_start:
{
uint8_t v_res_4696_; lean_object* v_r_4697_; 
v_res_4696_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__6___redArg(v_keys_4693_, v_i_4694_, v_k_4695_);
lean_dec(v_k_4695_);
lean_dec_ref(v_keys_4693_);
v_r_4697_ = lean_box(v_res_4696_);
return v_r_4697_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
size_t v___x_4698_; size_t v___x_4699_; size_t v___x_4700_; 
v___x_4698_ = ((size_t)5ULL);
v___x_4699_ = ((size_t)1ULL);
v___x_4700_ = lean_usize_shift_left(v___x_4699_, v___x_4698_);
return v___x_4700_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_4701_; size_t v___x_4702_; size_t v___x_4703_; 
v___x_4701_ = ((size_t)1ULL);
v___x_4702_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_4703_ = lean_usize_sub(v___x_4702_, v___x_4701_);
return v___x_4703_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg(lean_object* v_x_4704_, size_t v_x_4705_, lean_object* v_x_4706_){
_start:
{
if (lean_obj_tag(v_x_4704_) == 0)
{
lean_object* v_es_4707_; lean_object* v___x_4708_; size_t v___x_4709_; size_t v___x_4710_; size_t v___x_4711_; lean_object* v_j_4712_; lean_object* v___x_4713_; 
v_es_4707_ = lean_ctor_get(v_x_4704_, 0);
v___x_4708_ = lean_box(2);
v___x_4709_ = ((size_t)5ULL);
v___x_4710_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_4711_ = lean_usize_land(v_x_4705_, v___x_4710_);
v_j_4712_ = lean_usize_to_nat(v___x_4711_);
v___x_4713_ = lean_array_get_borrowed(v___x_4708_, v_es_4707_, v_j_4712_);
lean_dec(v_j_4712_);
switch(lean_obj_tag(v___x_4713_))
{
case 0:
{
lean_object* v_key_4714_; uint8_t v___x_4715_; 
v_key_4714_ = lean_ctor_get(v___x_4713_, 0);
v___x_4715_ = l_Lean_instBEqMVarId_beq(v_x_4706_, v_key_4714_);
return v___x_4715_;
}
case 1:
{
lean_object* v_node_4716_; size_t v___x_4717_; 
v_node_4716_ = lean_ctor_get(v___x_4713_, 0);
v___x_4717_ = lean_usize_shift_right(v_x_4705_, v___x_4709_);
v_x_4704_ = v_node_4716_;
v_x_4705_ = v___x_4717_;
goto _start;
}
default: 
{
uint8_t v___x_4719_; 
v___x_4719_ = 0;
return v___x_4719_;
}
}
}
else
{
lean_object* v_ks_4720_; lean_object* v___x_4721_; uint8_t v___x_4722_; 
v_ks_4720_ = lean_ctor_get(v_x_4704_, 0);
v___x_4721_ = lean_unsigned_to_nat(0u);
v___x_4722_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__6___redArg(v_ks_4720_, v___x_4721_, v_x_4706_);
return v___x_4722_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_4723_, lean_object* v_x_4724_, lean_object* v_x_4725_){
_start:
{
size_t v_x_9305__boxed_4726_; uint8_t v_res_4727_; lean_object* v_r_4728_; 
v_x_9305__boxed_4726_ = lean_unbox_usize(v_x_4724_);
lean_dec(v_x_4724_);
v_res_4727_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg(v_x_4723_, v_x_9305__boxed_4726_, v_x_4725_);
lean_dec(v_x_4725_);
lean_dec_ref(v_x_4723_);
v_r_4728_ = lean_box(v_res_4727_);
return v_r_4728_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___redArg(lean_object* v_x_4729_, lean_object* v_x_4730_){
_start:
{
uint64_t v___x_4731_; size_t v___x_4732_; uint8_t v___x_4733_; 
v___x_4731_ = l_Lean_instHashableMVarId_hash(v_x_4730_);
v___x_4732_ = lean_uint64_to_usize(v___x_4731_);
v___x_4733_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg(v_x_4729_, v___x_4732_, v_x_4730_);
return v___x_4733_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___redArg___boxed(lean_object* v_x_4734_, lean_object* v_x_4735_){
_start:
{
uint8_t v_res_4736_; lean_object* v_r_4737_; 
v_res_4736_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___redArg(v_x_4734_, v_x_4735_);
lean_dec(v_x_4735_);
lean_dec_ref(v_x_4734_);
v_r_4737_ = lean_box(v_res_4736_);
return v_r_4737_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___redArg(lean_object* v_mvarId_4738_, lean_object* v___y_4739_){
_start:
{
lean_object* v___x_4741_; lean_object* v_mctx_4742_; lean_object* v_eAssignment_4743_; uint8_t v___x_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; 
v___x_4741_ = lean_st_ref_get(v___y_4739_);
v_mctx_4742_ = lean_ctor_get(v___x_4741_, 0);
lean_inc_ref(v_mctx_4742_);
lean_dec(v___x_4741_);
v_eAssignment_4743_ = lean_ctor_get(v_mctx_4742_, 8);
lean_inc_ref(v_eAssignment_4743_);
lean_dec_ref(v_mctx_4742_);
v___x_4744_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___redArg(v_eAssignment_4743_, v_mvarId_4738_);
lean_dec_ref(v_eAssignment_4743_);
v___x_4745_ = lean_box(v___x_4744_);
v___x_4746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4746_, 0, v___x_4745_);
return v___x_4746_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___redArg___boxed(lean_object* v_mvarId_4747_, lean_object* v___y_4748_, lean_object* v___y_4749_){
_start:
{
lean_object* v_res_4750_; 
v_res_4750_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___redArg(v_mvarId_4747_, v___y_4748_);
lean_dec(v___y_4748_);
lean_dec(v_mvarId_4747_);
return v_res_4750_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__4(lean_object* v_as_4751_, size_t v_i_4752_, size_t v_stop_4753_, lean_object* v_b_4754_, lean_object* v___y_4755_, lean_object* v___y_4756_, lean_object* v___y_4757_, lean_object* v___y_4758_, lean_object* v___y_4759_, lean_object* v___y_4760_, lean_object* v___y_4761_, lean_object* v___y_4762_){
_start:
{
lean_object* v_a_4765_; uint8_t v___x_4769_; 
v___x_4769_ = lean_usize_dec_eq(v_i_4752_, v_stop_4753_);
if (v___x_4769_ == 0)
{
lean_object* v___x_4770_; lean_object* v___x_4773_; 
v___x_4770_ = lean_array_uget_borrowed(v_as_4751_, v_i_4752_);
v___x_4773_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___redArg(v___x_4770_, v___y_4760_);
if (lean_obj_tag(v___x_4773_) == 0)
{
lean_object* v_a_4774_; uint8_t v___x_4775_; 
v_a_4774_ = lean_ctor_get(v___x_4773_, 0);
lean_inc(v_a_4774_);
lean_dec_ref_known(v___x_4773_, 1);
v___x_4775_ = lean_unbox(v_a_4774_);
lean_dec(v_a_4774_);
if (v___x_4775_ == 0)
{
goto v___jp_4771_;
}
else
{
v_a_4765_ = v_b_4754_;
goto v___jp_4764_;
}
}
else
{
if (lean_obj_tag(v___x_4773_) == 0)
{
lean_object* v_a_4776_; uint8_t v___x_4777_; 
v_a_4776_ = lean_ctor_get(v___x_4773_, 0);
lean_inc(v_a_4776_);
lean_dec_ref_known(v___x_4773_, 1);
v___x_4777_ = lean_unbox(v_a_4776_);
lean_dec(v_a_4776_);
if (v___x_4777_ == 0)
{
v_a_4765_ = v_b_4754_;
goto v___jp_4764_;
}
else
{
goto v___jp_4771_;
}
}
else
{
lean_object* v_a_4778_; lean_object* v___x_4780_; uint8_t v_isShared_4781_; uint8_t v_isSharedCheck_4785_; 
lean_dec_ref(v_b_4754_);
v_a_4778_ = lean_ctor_get(v___x_4773_, 0);
v_isSharedCheck_4785_ = !lean_is_exclusive(v___x_4773_);
if (v_isSharedCheck_4785_ == 0)
{
v___x_4780_ = v___x_4773_;
v_isShared_4781_ = v_isSharedCheck_4785_;
goto v_resetjp_4779_;
}
else
{
lean_inc(v_a_4778_);
lean_dec(v___x_4773_);
v___x_4780_ = lean_box(0);
v_isShared_4781_ = v_isSharedCheck_4785_;
goto v_resetjp_4779_;
}
v_resetjp_4779_:
{
lean_object* v___x_4783_; 
if (v_isShared_4781_ == 0)
{
v___x_4783_ = v___x_4780_;
goto v_reusejp_4782_;
}
else
{
lean_object* v_reuseFailAlloc_4784_; 
v_reuseFailAlloc_4784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4784_, 0, v_a_4778_);
v___x_4783_ = v_reuseFailAlloc_4784_;
goto v_reusejp_4782_;
}
v_reusejp_4782_:
{
return v___x_4783_;
}
}
}
}
v___jp_4771_:
{
lean_object* v___x_4772_; 
lean_inc(v___x_4770_);
v___x_4772_ = lean_array_push(v_b_4754_, v___x_4770_);
v_a_4765_ = v___x_4772_;
goto v___jp_4764_;
}
}
else
{
lean_object* v___x_4786_; 
v___x_4786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4786_, 0, v_b_4754_);
return v___x_4786_;
}
v___jp_4764_:
{
size_t v___x_4766_; size_t v___x_4767_; 
v___x_4766_ = ((size_t)1ULL);
v___x_4767_ = lean_usize_add(v_i_4752_, v___x_4766_);
v_i_4752_ = v___x_4767_;
v_b_4754_ = v_a_4765_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__4___boxed(lean_object* v_as_4787_, lean_object* v_i_4788_, lean_object* v_stop_4789_, lean_object* v_b_4790_, lean_object* v___y_4791_, lean_object* v___y_4792_, lean_object* v___y_4793_, lean_object* v___y_4794_, lean_object* v___y_4795_, lean_object* v___y_4796_, lean_object* v___y_4797_, lean_object* v___y_4798_, lean_object* v___y_4799_){
_start:
{
size_t v_i_boxed_4800_; size_t v_stop_boxed_4801_; lean_object* v_res_4802_; 
v_i_boxed_4800_ = lean_unbox_usize(v_i_4788_);
lean_dec(v_i_4788_);
v_stop_boxed_4801_ = lean_unbox_usize(v_stop_4789_);
lean_dec(v_stop_4789_);
v_res_4802_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__4(v_as_4787_, v_i_boxed_4800_, v_stop_boxed_4801_, v_b_4790_, v___y_4791_, v___y_4792_, v___y_4793_, v___y_4794_, v___y_4795_, v___y_4796_, v___y_4797_, v___y_4798_);
lean_dec(v___y_4798_);
lean_dec_ref(v___y_4797_);
lean_dec(v___y_4796_);
lean_dec_ref(v___y_4795_);
lean_dec(v___y_4794_);
lean_dec_ref(v___y_4793_);
lean_dec(v___y_4792_);
lean_dec_ref(v___y_4791_);
lean_dec_ref(v_as_4787_);
return v_res_4802_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__1(void){
_start:
{
lean_object* v___x_4804_; lean_object* v___x_4805_; 
v___x_4804_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__0));
v___x_4805_ = l_Lean_stringToMessageData(v___x_4804_);
return v___x_4805_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__4(void){
_start:
{
lean_object* v___x_4809_; lean_object* v___x_4810_; 
v___x_4809_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__3));
v___x_4810_ = l_Lean_stringToMessageData(v___x_4809_);
return v___x_4810_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27(lean_object* v_stx_4811_, lean_object* v_a_4812_, lean_object* v_a_4813_, lean_object* v_a_4814_, lean_object* v_a_4815_, lean_object* v_a_4816_, lean_object* v_a_4817_, lean_object* v_a_4818_, lean_object* v_a_4819_){
_start:
{
lean_object* v___y_4822_; lean_object* v___y_4823_; lean_object* v___y_4824_; lean_object* v___y_4825_; lean_object* v___y_4826_; lean_object* v___y_4827_; lean_object* v___y_4828_; lean_object* v___y_4829_; lean_object* v___y_4830_; lean_object* v___y_4831_; lean_object* v_a_4832_; lean_object* v___y_4860_; lean_object* v___y_4861_; lean_object* v___y_4862_; lean_object* v___y_4863_; lean_object* v___y_4864_; lean_object* v___y_4865_; lean_object* v___y_4866_; lean_object* v___y_4867_; lean_object* v___y_4868_; lean_object* v___y_4869_; lean_object* v___y_4870_; lean_object* v___x_4880_; 
v___x_4880_ = l_Lean_Elab_Tactic_Grind_getMainGoal___redArg(v_a_4813_, v_a_4816_, v_a_4817_, v_a_4818_, v_a_4819_);
if (lean_obj_tag(v___x_4880_) == 0)
{
lean_object* v_a_4881_; lean_object* v_mvarId_4882_; lean_object* v___x_4883_; 
v_a_4881_ = lean_ctor_get(v___x_4880_, 0);
lean_inc(v_a_4881_);
lean_dec_ref_known(v___x_4880_, 1);
v_mvarId_4882_ = lean_ctor_get(v_a_4881_, 1);
lean_inc(v_mvarId_4882_);
lean_inc(v_stx_4811_);
v___x_4883_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs(v_stx_4811_, v_mvarId_4882_, v_a_4814_, v_a_4815_, v_a_4816_, v_a_4817_, v_a_4818_, v_a_4819_);
if (lean_obj_tag(v___x_4883_) == 0)
{
lean_object* v_a_4884_; lean_object* v_config_4885_; lean_object* v_ctx_4886_; lean_object* v_invariantAlts_x3f_4887_; lean_object* v___y_4889_; lean_object* v___y_4890_; lean_object* v___y_4891_; lean_object* v___y_4892_; lean_object* v___y_4893_; lean_object* v___y_4894_; lean_object* v___y_4895_; lean_object* v___y_4896_; 
v_a_4884_ = lean_ctor_get(v___x_4883_, 0);
lean_inc(v_a_4884_);
lean_dec_ref_known(v___x_4883_, 1);
v_config_4885_ = lean_ctor_get(v_a_4884_, 0);
lean_inc_ref(v_config_4885_);
v_ctx_4886_ = lean_ctor_get(v_a_4884_, 1);
lean_inc_ref(v_ctx_4886_);
v_invariantAlts_x3f_4887_ = lean_ctor_get(v_a_4884_, 3);
lean_inc(v_invariantAlts_x3f_4887_);
lean_dec(v_a_4884_);
if (lean_obj_tag(v_invariantAlts_x3f_4887_) == 0)
{
lean_object* v___x_4922_; lean_object* v___x_4923_; uint8_t v___x_4924_; 
v___x_4922_ = lean_unsigned_to_nat(3u);
v___x_4923_ = l_Lean_Syntax_getArg(v_stx_4811_, v___x_4922_);
lean_dec(v_stx_4811_);
v___x_4924_ = l_Lean_Syntax_isNone(v___x_4923_);
lean_dec(v___x_4923_);
if (v___x_4924_ == 0)
{
lean_object* v___x_4925_; lean_object* v___x_4926_; 
lean_dec_ref(v_ctx_4886_);
lean_dec_ref(v_config_4885_);
lean_dec(v_a_4881_);
v___x_4925_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__4, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__4_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__4);
v___x_4926_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3___redArg(v___x_4925_, v_a_4816_, v_a_4817_, v_a_4818_, v_a_4819_);
return v___x_4926_;
}
else
{
v___y_4889_ = v_a_4812_;
v___y_4890_ = v_a_4813_;
v___y_4891_ = v_a_4814_;
v___y_4892_ = v_a_4815_;
v___y_4893_ = v_a_4816_;
v___y_4894_ = v_a_4817_;
v___y_4895_ = v_a_4818_;
v___y_4896_ = v_a_4819_;
goto v___jp_4888_;
}
}
else
{
lean_dec(v_stx_4811_);
v___y_4889_ = v_a_4812_;
v___y_4890_ = v_a_4813_;
v___y_4891_ = v_a_4814_;
v___y_4892_ = v_a_4815_;
v___y_4893_ = v_a_4816_;
v___y_4894_ = v_a_4817_;
v___y_4895_ = v_a_4818_;
v___y_4896_ = v_a_4819_;
goto v___jp_4888_;
}
v___jp_4888_:
{
lean_object* v_stepLimit_4897_; lean_object* v___f_4898_; lean_object* v___x_4899_; 
v_stepLimit_4897_ = lean_ctor_get(v_config_4885_, 0);
lean_inc(v_stepLimit_4897_);
lean_dec_ref(v_config_4885_);
v___f_4898_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__0___boxed), 14, 4);
lean_closure_set(v___f_4898_, 0, v_a_4881_);
lean_closure_set(v___f_4898_, 1, v_ctx_4886_);
lean_closure_set(v___f_4898_, 2, v_stepLimit_4897_);
lean_closure_set(v___f_4898_, 3, v_invariantAlts_x3f_4887_);
v___x_4899_ = l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(v___f_4898_, v___y_4889_, v___y_4890_, v___y_4893_, v___y_4894_, v___y_4895_, v___y_4896_);
if (lean_obj_tag(v___x_4899_) == 0)
{
lean_object* v_a_4900_; lean_object* v_invariants_4901_; lean_object* v_vcs_4902_; lean_object* v___x_4903_; lean_object* v___x_4904_; lean_object* v___x_4905_; uint8_t v___x_4906_; 
v_a_4900_ = lean_ctor_get(v___x_4899_, 0);
lean_inc(v_a_4900_);
lean_dec_ref_known(v___x_4899_, 1);
v_invariants_4901_ = lean_ctor_get(v_a_4900_, 0);
v_vcs_4902_ = lean_ctor_get(v_a_4900_, 1);
lean_inc_ref(v_vcs_4902_);
v___x_4903_ = lean_unsigned_to_nat(0u);
v___x_4904_ = lean_array_get_size(v_invariants_4901_);
v___x_4905_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__2));
v___x_4906_ = lean_nat_dec_lt(v___x_4903_, v___x_4904_);
if (v___x_4906_ == 0)
{
v___y_4822_ = v_vcs_4902_;
v___y_4823_ = v___y_4896_;
v___y_4824_ = v___y_4892_;
v___y_4825_ = v___y_4893_;
v___y_4826_ = v_a_4900_;
v___y_4827_ = v___y_4889_;
v___y_4828_ = v___y_4890_;
v___y_4829_ = v___y_4895_;
v___y_4830_ = v___y_4891_;
v___y_4831_ = v___y_4894_;
v_a_4832_ = v___x_4905_;
goto v___jp_4821_;
}
else
{
uint8_t v___x_4907_; 
v___x_4907_ = lean_nat_dec_le(v___x_4904_, v___x_4904_);
if (v___x_4907_ == 0)
{
if (v___x_4906_ == 0)
{
v___y_4822_ = v_vcs_4902_;
v___y_4823_ = v___y_4896_;
v___y_4824_ = v___y_4892_;
v___y_4825_ = v___y_4893_;
v___y_4826_ = v_a_4900_;
v___y_4827_ = v___y_4889_;
v___y_4828_ = v___y_4890_;
v___y_4829_ = v___y_4895_;
v___y_4830_ = v___y_4891_;
v___y_4831_ = v___y_4894_;
v_a_4832_ = v___x_4905_;
goto v___jp_4821_;
}
else
{
size_t v___x_4908_; size_t v___x_4909_; lean_object* v___x_4910_; 
v___x_4908_ = ((size_t)0ULL);
v___x_4909_ = lean_usize_of_nat(v___x_4904_);
v___x_4910_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__4(v_invariants_4901_, v___x_4908_, v___x_4909_, v___x_4905_, v___y_4889_, v___y_4890_, v___y_4891_, v___y_4892_, v___y_4893_, v___y_4894_, v___y_4895_, v___y_4896_);
v___y_4860_ = v_vcs_4902_;
v___y_4861_ = v___y_4896_;
v___y_4862_ = v___y_4892_;
v___y_4863_ = v___y_4893_;
v___y_4864_ = v___y_4889_;
v___y_4865_ = v_a_4900_;
v___y_4866_ = v___y_4890_;
v___y_4867_ = v___y_4895_;
v___y_4868_ = v___y_4891_;
v___y_4869_ = v___y_4894_;
v___y_4870_ = v___x_4910_;
goto v___jp_4859_;
}
}
else
{
size_t v___x_4911_; size_t v___x_4912_; lean_object* v___x_4913_; 
v___x_4911_ = ((size_t)0ULL);
v___x_4912_ = lean_usize_of_nat(v___x_4904_);
v___x_4913_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__4(v_invariants_4901_, v___x_4911_, v___x_4912_, v___x_4905_, v___y_4889_, v___y_4890_, v___y_4891_, v___y_4892_, v___y_4893_, v___y_4894_, v___y_4895_, v___y_4896_);
v___y_4860_ = v_vcs_4902_;
v___y_4861_ = v___y_4896_;
v___y_4862_ = v___y_4892_;
v___y_4863_ = v___y_4893_;
v___y_4864_ = v___y_4889_;
v___y_4865_ = v_a_4900_;
v___y_4866_ = v___y_4890_;
v___y_4867_ = v___y_4895_;
v___y_4868_ = v___y_4891_;
v___y_4869_ = v___y_4894_;
v___y_4870_ = v___x_4913_;
goto v___jp_4859_;
}
}
}
else
{
lean_object* v_a_4914_; lean_object* v___x_4916_; uint8_t v_isShared_4917_; uint8_t v_isSharedCheck_4921_; 
v_a_4914_ = lean_ctor_get(v___x_4899_, 0);
v_isSharedCheck_4921_ = !lean_is_exclusive(v___x_4899_);
if (v_isSharedCheck_4921_ == 0)
{
v___x_4916_ = v___x_4899_;
v_isShared_4917_ = v_isSharedCheck_4921_;
goto v_resetjp_4915_;
}
else
{
lean_inc(v_a_4914_);
lean_dec(v___x_4899_);
v___x_4916_ = lean_box(0);
v_isShared_4917_ = v_isSharedCheck_4921_;
goto v_resetjp_4915_;
}
v_resetjp_4915_:
{
lean_object* v___x_4919_; 
if (v_isShared_4917_ == 0)
{
v___x_4919_ = v___x_4916_;
goto v_reusejp_4918_;
}
else
{
lean_object* v_reuseFailAlloc_4920_; 
v_reuseFailAlloc_4920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4920_, 0, v_a_4914_);
v___x_4919_ = v_reuseFailAlloc_4920_;
goto v_reusejp_4918_;
}
v_reusejp_4918_:
{
return v___x_4919_;
}
}
}
}
}
else
{
lean_object* v_a_4927_; lean_object* v___x_4929_; uint8_t v_isShared_4930_; uint8_t v_isSharedCheck_4934_; 
lean_dec(v_a_4881_);
lean_dec(v_stx_4811_);
v_a_4927_ = lean_ctor_get(v___x_4883_, 0);
v_isSharedCheck_4934_ = !lean_is_exclusive(v___x_4883_);
if (v_isSharedCheck_4934_ == 0)
{
v___x_4929_ = v___x_4883_;
v_isShared_4930_ = v_isSharedCheck_4934_;
goto v_resetjp_4928_;
}
else
{
lean_inc(v_a_4927_);
lean_dec(v___x_4883_);
v___x_4929_ = lean_box(0);
v_isShared_4930_ = v_isSharedCheck_4934_;
goto v_resetjp_4928_;
}
v_resetjp_4928_:
{
lean_object* v___x_4932_; 
if (v_isShared_4930_ == 0)
{
v___x_4932_ = v___x_4929_;
goto v_reusejp_4931_;
}
else
{
lean_object* v_reuseFailAlloc_4933_; 
v_reuseFailAlloc_4933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4933_, 0, v_a_4927_);
v___x_4932_ = v_reuseFailAlloc_4933_;
goto v_reusejp_4931_;
}
v_reusejp_4931_:
{
return v___x_4932_;
}
}
}
}
else
{
lean_object* v_a_4935_; lean_object* v___x_4937_; uint8_t v_isShared_4938_; uint8_t v_isSharedCheck_4942_; 
lean_dec(v_stx_4811_);
v_a_4935_ = lean_ctor_get(v___x_4880_, 0);
v_isSharedCheck_4942_ = !lean_is_exclusive(v___x_4880_);
if (v_isSharedCheck_4942_ == 0)
{
v___x_4937_ = v___x_4880_;
v_isShared_4938_ = v_isSharedCheck_4942_;
goto v_resetjp_4936_;
}
else
{
lean_inc(v_a_4935_);
lean_dec(v___x_4880_);
v___x_4937_ = lean_box(0);
v_isShared_4938_ = v_isSharedCheck_4942_;
goto v_resetjp_4936_;
}
v_resetjp_4936_:
{
lean_object* v___x_4940_; 
if (v_isShared_4938_ == 0)
{
v___x_4940_ = v___x_4937_;
goto v_reusejp_4939_;
}
else
{
lean_object* v_reuseFailAlloc_4941_; 
v_reuseFailAlloc_4941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4941_, 0, v_a_4935_);
v___x_4940_ = v_reuseFailAlloc_4941_;
goto v_reusejp_4939_;
}
v_reusejp_4939_:
{
return v___x_4940_;
}
}
}
v___jp_4821_:
{
lean_object* v___x_4833_; lean_object* v___x_4834_; lean_object* v___f_4835_; lean_object* v___x_4836_; 
v___x_4833_ = lean_array_to_list(v_a_4832_);
v___x_4834_ = lean_box(0);
v___f_4835_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__1___boxed), 13, 3);
lean_closure_set(v___f_4835_, 0, v___x_4833_);
lean_closure_set(v___f_4835_, 1, v___x_4834_);
lean_closure_set(v___f_4835_, 2, v___y_4822_);
v___x_4836_ = l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(v___f_4835_, v___y_4827_, v___y_4828_, v___y_4825_, v___y_4831_, v___y_4829_, v___y_4823_);
if (lean_obj_tag(v___x_4836_) == 0)
{
lean_object* v_a_4837_; lean_object* v___x_4838_; 
v_a_4837_ = lean_ctor_get(v___x_4836_, 0);
lean_inc(v_a_4837_);
lean_dec_ref_known(v___x_4836_, 1);
v___x_4838_ = l_Lean_Elab_Tactic_Grind_replaceMainGoal___redArg(v_a_4837_, v___y_4828_, v___y_4825_, v___y_4831_, v___y_4829_, v___y_4823_);
if (lean_obj_tag(v___x_4838_) == 0)
{
lean_object* v___x_4840_; uint8_t v_isShared_4841_; uint8_t v_isSharedCheck_4849_; 
v_isSharedCheck_4849_ = !lean_is_exclusive(v___x_4838_);
if (v_isSharedCheck_4849_ == 0)
{
lean_object* v_unused_4850_; 
v_unused_4850_ = lean_ctor_get(v___x_4838_, 0);
lean_dec(v_unused_4850_);
v___x_4840_ = v___x_4838_;
v_isShared_4841_ = v_isSharedCheck_4849_;
goto v_resetjp_4839_;
}
else
{
lean_dec(v___x_4838_);
v___x_4840_ = lean_box(0);
v_isShared_4841_ = v_isSharedCheck_4849_;
goto v_resetjp_4839_;
}
v_resetjp_4839_:
{
uint8_t v_preTacFailed_4842_; 
v_preTacFailed_4842_ = lean_ctor_get_uint8(v___y_4826_, sizeof(void*)*3);
lean_dec_ref(v___y_4826_);
if (v_preTacFailed_4842_ == 0)
{
lean_object* v___x_4843_; lean_object* v___x_4845_; 
v___x_4843_ = lean_box(0);
if (v_isShared_4841_ == 0)
{
lean_ctor_set(v___x_4840_, 0, v___x_4843_);
v___x_4845_ = v___x_4840_;
goto v_reusejp_4844_;
}
else
{
lean_object* v_reuseFailAlloc_4846_; 
v_reuseFailAlloc_4846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4846_, 0, v___x_4843_);
v___x_4845_ = v_reuseFailAlloc_4846_;
goto v_reusejp_4844_;
}
v_reusejp_4844_:
{
return v___x_4845_;
}
}
else
{
lean_object* v___x_4847_; lean_object* v___x_4848_; 
lean_del_object(v___x_4840_);
v___x_4847_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__1, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__1);
v___x_4848_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3___redArg(v___x_4847_, v___y_4825_, v___y_4831_, v___y_4829_, v___y_4823_);
return v___x_4848_;
}
}
}
else
{
lean_dec_ref(v___y_4826_);
return v___x_4838_;
}
}
else
{
lean_object* v_a_4851_; lean_object* v___x_4853_; uint8_t v_isShared_4854_; uint8_t v_isSharedCheck_4858_; 
lean_dec_ref(v___y_4826_);
v_a_4851_ = lean_ctor_get(v___x_4836_, 0);
v_isSharedCheck_4858_ = !lean_is_exclusive(v___x_4836_);
if (v_isSharedCheck_4858_ == 0)
{
v___x_4853_ = v___x_4836_;
v_isShared_4854_ = v_isSharedCheck_4858_;
goto v_resetjp_4852_;
}
else
{
lean_inc(v_a_4851_);
lean_dec(v___x_4836_);
v___x_4853_ = lean_box(0);
v_isShared_4854_ = v_isSharedCheck_4858_;
goto v_resetjp_4852_;
}
v_resetjp_4852_:
{
lean_object* v___x_4856_; 
if (v_isShared_4854_ == 0)
{
v___x_4856_ = v___x_4853_;
goto v_reusejp_4855_;
}
else
{
lean_object* v_reuseFailAlloc_4857_; 
v_reuseFailAlloc_4857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4857_, 0, v_a_4851_);
v___x_4856_ = v_reuseFailAlloc_4857_;
goto v_reusejp_4855_;
}
v_reusejp_4855_:
{
return v___x_4856_;
}
}
}
}
v___jp_4859_:
{
if (lean_obj_tag(v___y_4870_) == 0)
{
lean_object* v_a_4871_; 
v_a_4871_ = lean_ctor_get(v___y_4870_, 0);
lean_inc(v_a_4871_);
lean_dec_ref_known(v___y_4870_, 1);
v___y_4822_ = v___y_4860_;
v___y_4823_ = v___y_4861_;
v___y_4824_ = v___y_4862_;
v___y_4825_ = v___y_4863_;
v___y_4826_ = v___y_4865_;
v___y_4827_ = v___y_4864_;
v___y_4828_ = v___y_4866_;
v___y_4829_ = v___y_4867_;
v___y_4830_ = v___y_4868_;
v___y_4831_ = v___y_4869_;
v_a_4832_ = v_a_4871_;
goto v___jp_4821_;
}
else
{
lean_object* v_a_4872_; lean_object* v___x_4874_; uint8_t v_isShared_4875_; uint8_t v_isSharedCheck_4879_; 
lean_dec_ref(v___y_4865_);
lean_dec_ref(v___y_4860_);
v_a_4872_ = lean_ctor_get(v___y_4870_, 0);
v_isSharedCheck_4879_ = !lean_is_exclusive(v___y_4870_);
if (v_isSharedCheck_4879_ == 0)
{
v___x_4874_ = v___y_4870_;
v_isShared_4875_ = v_isSharedCheck_4879_;
goto v_resetjp_4873_;
}
else
{
lean_inc(v_a_4872_);
lean_dec(v___y_4870_);
v___x_4874_ = lean_box(0);
v_isShared_4875_ = v_isSharedCheck_4879_;
goto v_resetjp_4873_;
}
v_resetjp_4873_:
{
lean_object* v___x_4877_; 
if (v_isShared_4875_ == 0)
{
v___x_4877_ = v___x_4874_;
goto v_reusejp_4876_;
}
else
{
lean_object* v_reuseFailAlloc_4878_; 
v_reuseFailAlloc_4878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4878_, 0, v_a_4872_);
v___x_4877_ = v_reuseFailAlloc_4878_;
goto v_reusejp_4876_;
}
v_reusejp_4876_:
{
return v___x_4877_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___boxed(lean_object* v_stx_4943_, lean_object* v_a_4944_, lean_object* v_a_4945_, lean_object* v_a_4946_, lean_object* v_a_4947_, lean_object* v_a_4948_, lean_object* v_a_4949_, lean_object* v_a_4950_, lean_object* v_a_4951_, lean_object* v_a_4952_){
_start:
{
lean_object* v_res_4953_; 
v_res_4953_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27(v_stx_4943_, v_a_4944_, v_a_4945_, v_a_4946_, v_a_4947_, v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_);
lean_dec(v_a_4951_);
lean_dec_ref(v_a_4950_);
lean_dec(v_a_4949_);
lean_dec_ref(v_a_4948_);
lean_dec(v_a_4947_);
lean_dec_ref(v_a_4946_);
lean_dec(v_a_4945_);
lean_dec_ref(v_a_4944_);
return v_res_4953_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0(lean_object* v_mvarId_4954_, lean_object* v___y_4955_, lean_object* v___y_4956_, lean_object* v___y_4957_, lean_object* v___y_4958_, lean_object* v___y_4959_, lean_object* v___y_4960_, lean_object* v___y_4961_, lean_object* v___y_4962_){
_start:
{
lean_object* v___x_4964_; 
v___x_4964_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___redArg(v_mvarId_4954_, v___y_4960_);
return v___x_4964_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___boxed(lean_object* v_mvarId_4965_, lean_object* v___y_4966_, lean_object* v___y_4967_, lean_object* v___y_4968_, lean_object* v___y_4969_, lean_object* v___y_4970_, lean_object* v___y_4971_, lean_object* v___y_4972_, lean_object* v___y_4973_, lean_object* v___y_4974_){
_start:
{
lean_object* v_res_4975_; 
v_res_4975_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0(v_mvarId_4965_, v___y_4966_, v___y_4967_, v___y_4968_, v___y_4969_, v___y_4970_, v___y_4971_, v___y_4972_, v___y_4973_);
lean_dec(v___y_4973_);
lean_dec_ref(v___y_4972_);
lean_dec(v___y_4971_);
lean_dec_ref(v___y_4970_);
lean_dec(v___y_4969_);
lean_dec_ref(v___y_4968_);
lean_dec(v___y_4967_);
lean_dec_ref(v___y_4966_);
lean_dec(v_mvarId_4965_);
return v_res_4975_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3(lean_object* v_00_u03b1_4976_, lean_object* v_msg_4977_, lean_object* v___y_4978_, lean_object* v___y_4979_, lean_object* v___y_4980_, lean_object* v___y_4981_, lean_object* v___y_4982_, lean_object* v___y_4983_, lean_object* v___y_4984_, lean_object* v___y_4985_){
_start:
{
lean_object* v___x_4987_; 
v___x_4987_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3___redArg(v_msg_4977_, v___y_4982_, v___y_4983_, v___y_4984_, v___y_4985_);
return v___x_4987_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3___boxed(lean_object* v_00_u03b1_4988_, lean_object* v_msg_4989_, lean_object* v___y_4990_, lean_object* v___y_4991_, lean_object* v___y_4992_, lean_object* v___y_4993_, lean_object* v___y_4994_, lean_object* v___y_4995_, lean_object* v___y_4996_, lean_object* v___y_4997_, lean_object* v___y_4998_){
_start:
{
lean_object* v_res_4999_; 
v_res_4999_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3(v_00_u03b1_4988_, v_msg_4989_, v___y_4990_, v___y_4991_, v___y_4992_, v___y_4993_, v___y_4994_, v___y_4995_, v___y_4996_, v___y_4997_);
lean_dec(v___y_4997_);
lean_dec_ref(v___y_4996_);
lean_dec(v___y_4995_);
lean_dec_ref(v___y_4994_);
lean_dec(v___y_4993_);
lean_dec_ref(v___y_4992_);
lean_dec(v___y_4991_);
lean_dec_ref(v___y_4990_);
return v_res_4999_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0(lean_object* v_00_u03b2_5000_, lean_object* v_x_5001_, lean_object* v_x_5002_){
_start:
{
uint8_t v___x_5003_; 
v___x_5003_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___redArg(v_x_5001_, v_x_5002_);
return v___x_5003_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___boxed(lean_object* v_00_u03b2_5004_, lean_object* v_x_5005_, lean_object* v_x_5006_){
_start:
{
uint8_t v_res_5007_; lean_object* v_r_5008_; 
v_res_5007_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0(v_00_u03b2_5004_, v_x_5005_, v_x_5006_);
lean_dec(v_x_5006_);
lean_dec_ref(v_x_5005_);
v_r_5008_ = lean_box(v_res_5007_);
return v_r_5008_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_5009_, lean_object* v_x_5010_, size_t v_x_5011_, lean_object* v_x_5012_){
_start:
{
uint8_t v___x_5013_; 
v___x_5013_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg(v_x_5010_, v_x_5011_, v_x_5012_);
return v___x_5013_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_5014_, lean_object* v_x_5015_, lean_object* v_x_5016_, lean_object* v_x_5017_){
_start:
{
size_t v_x_9778__boxed_5018_; uint8_t v_res_5019_; lean_object* v_r_5020_; 
v_x_9778__boxed_5018_ = lean_unbox_usize(v_x_5016_);
lean_dec(v_x_5016_);
v_res_5019_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1(v_00_u03b2_5014_, v_x_5015_, v_x_9778__boxed_5018_, v_x_5017_);
lean_dec(v_x_5017_);
lean_dec_ref(v_x_5015_);
v_r_5020_ = lean_box(v_res_5019_);
return v_r_5020_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__6(lean_object* v_00_u03b2_5021_, lean_object* v_keys_5022_, lean_object* v_vals_5023_, lean_object* v_heq_5024_, lean_object* v_i_5025_, lean_object* v_k_5026_){
_start:
{
uint8_t v___x_5027_; 
v___x_5027_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__6___redArg(v_keys_5022_, v_i_5025_, v_k_5026_);
return v___x_5027_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__6___boxed(lean_object* v_00_u03b2_5028_, lean_object* v_keys_5029_, lean_object* v_vals_5030_, lean_object* v_heq_5031_, lean_object* v_i_5032_, lean_object* v_k_5033_){
_start:
{
uint8_t v_res_5034_; lean_object* v_r_5035_; 
v_res_5034_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__6(v_00_u03b2_5028_, v_keys_5029_, v_vals_5030_, v_heq_5031_, v_i_5032_, v_k_5033_);
lean_dec(v_k_5033_);
lean_dec_ref(v_vals_5030_);
lean_dec_ref(v_keys_5029_);
v_r_5035_ = lean_box(v_res_5034_);
return v_r_5035_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1(){
_start:
{
lean_object* v___x_5094_; lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; 
v___x_5094_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_5095_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1));
v___x_5096_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__21));
v___x_5097_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___boxed), 10, 0);
v___x_5098_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5094_, v___x_5095_, v___x_5096_, v___x_5097_);
return v___x_5098_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___boxed(lean_object* v_a_5099_){
_start:
{
lean_object* v_res_5100_; 
v_res_5100_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1();
return v_res_5100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3(){
_start:
{
lean_object* v___x_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; 
v___x_5103_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__21));
v___x_5104_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3___closed__0));
v___x_5105_ = l_Lean_addBuiltinDocString(v___x_5103_, v___x_5104_);
return v___x_5105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3___boxed(lean_object* v_a_5106_){
_start:
{
lean_object* v_res_5107_; 
v_res_5107_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3();
return v_res_5107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0(lean_object* v_a_5108_, lean_object* v_config_5109_, lean_object* v_ctx_5110_, lean_object* v_invariantAlts_x3f_5111_, lean_object* v___y_5112_, lean_object* v___y_5113_, lean_object* v___y_5114_, lean_object* v___y_5115_, lean_object* v___y_5116_, lean_object* v___y_5117_, lean_object* v___y_5118_, lean_object* v___y_5119_, lean_object* v___y_5120_){
_start:
{
lean_object* v___x_5122_; 
v___x_5122_ = l_Lean_Meta_Grind_mkGoalCore(v_a_5108_, v___y_5112_, v___y_5113_, v___y_5114_, v___y_5115_, v___y_5116_, v___y_5117_, v___y_5118_, v___y_5119_, v___y_5120_);
if (lean_obj_tag(v___x_5122_) == 0)
{
lean_object* v_a_5123_; lean_object* v_stepLimit_5124_; lean_object* v___x_5125_; 
v_a_5123_ = lean_ctor_get(v___x_5122_, 0);
lean_inc(v_a_5123_);
lean_dec_ref_known(v___x_5122_, 1);
v_stepLimit_5124_ = lean_ctor_get(v_config_5109_, 0);
lean_inc(v_stepLimit_5124_);
lean_dec_ref(v_config_5109_);
v___x_5125_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_run(v_a_5123_, v_ctx_5110_, v_stepLimit_5124_, v___y_5112_, v___y_5113_, v___y_5114_, v___y_5115_, v___y_5116_, v___y_5117_, v___y_5118_, v___y_5119_, v___y_5120_);
if (lean_obj_tag(v___x_5125_) == 0)
{
if (lean_obj_tag(v_invariantAlts_x3f_5111_) == 1)
{
lean_object* v_a_5126_; lean_object* v_val_5127_; lean_object* v_invariants_5128_; lean_object* v_inlineHandledInvariants_5129_; lean_object* v___x_5130_; 
v_a_5126_ = lean_ctor_get(v___x_5125_, 0);
lean_inc(v_a_5126_);
lean_dec_ref_known(v___x_5125_, 1);
v_val_5127_ = lean_ctor_get(v_invariantAlts_x3f_5111_, 0);
v_invariants_5128_ = lean_ctor_get(v_a_5126_, 0);
v_inlineHandledInvariants_5129_ = lean_ctor_get(v_a_5126_, 2);
lean_inc_ref(v_inlineHandledInvariants_5129_);
v___x_5130_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants(v_val_5127_, v_invariants_5128_, v_inlineHandledInvariants_5129_, v___y_5115_, v___y_5116_, v___y_5117_, v___y_5118_, v___y_5119_, v___y_5120_);
if (lean_obj_tag(v___x_5130_) == 0)
{
lean_object* v___x_5132_; uint8_t v_isShared_5133_; uint8_t v_isSharedCheck_5137_; 
v_isSharedCheck_5137_ = !lean_is_exclusive(v___x_5130_);
if (v_isSharedCheck_5137_ == 0)
{
lean_object* v_unused_5138_; 
v_unused_5138_ = lean_ctor_get(v___x_5130_, 0);
lean_dec(v_unused_5138_);
v___x_5132_ = v___x_5130_;
v_isShared_5133_ = v_isSharedCheck_5137_;
goto v_resetjp_5131_;
}
else
{
lean_dec(v___x_5130_);
v___x_5132_ = lean_box(0);
v_isShared_5133_ = v_isSharedCheck_5137_;
goto v_resetjp_5131_;
}
v_resetjp_5131_:
{
lean_object* v___x_5135_; 
if (v_isShared_5133_ == 0)
{
lean_ctor_set(v___x_5132_, 0, v_a_5126_);
v___x_5135_ = v___x_5132_;
goto v_reusejp_5134_;
}
else
{
lean_object* v_reuseFailAlloc_5136_; 
v_reuseFailAlloc_5136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5136_, 0, v_a_5126_);
v___x_5135_ = v_reuseFailAlloc_5136_;
goto v_reusejp_5134_;
}
v_reusejp_5134_:
{
return v___x_5135_;
}
}
}
else
{
lean_object* v_a_5139_; lean_object* v___x_5141_; uint8_t v_isShared_5142_; uint8_t v_isSharedCheck_5146_; 
lean_dec(v_a_5126_);
v_a_5139_ = lean_ctor_get(v___x_5130_, 0);
v_isSharedCheck_5146_ = !lean_is_exclusive(v___x_5130_);
if (v_isSharedCheck_5146_ == 0)
{
v___x_5141_ = v___x_5130_;
v_isShared_5142_ = v_isSharedCheck_5146_;
goto v_resetjp_5140_;
}
else
{
lean_inc(v_a_5139_);
lean_dec(v___x_5130_);
v___x_5141_ = lean_box(0);
v_isShared_5142_ = v_isSharedCheck_5146_;
goto v_resetjp_5140_;
}
v_resetjp_5140_:
{
lean_object* v___x_5144_; 
if (v_isShared_5142_ == 0)
{
v___x_5144_ = v___x_5141_;
goto v_reusejp_5143_;
}
else
{
lean_object* v_reuseFailAlloc_5145_; 
v_reuseFailAlloc_5145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5145_, 0, v_a_5139_);
v___x_5144_ = v_reuseFailAlloc_5145_;
goto v_reusejp_5143_;
}
v_reusejp_5143_:
{
return v___x_5144_;
}
}
}
}
else
{
return v___x_5125_;
}
}
else
{
return v___x_5125_;
}
}
else
{
lean_object* v_a_5147_; lean_object* v___x_5149_; uint8_t v_isShared_5150_; uint8_t v_isSharedCheck_5154_; 
lean_dec_ref(v_config_5109_);
v_a_5147_ = lean_ctor_get(v___x_5122_, 0);
v_isSharedCheck_5154_ = !lean_is_exclusive(v___x_5122_);
if (v_isSharedCheck_5154_ == 0)
{
v___x_5149_ = v___x_5122_;
v_isShared_5150_ = v_isSharedCheck_5154_;
goto v_resetjp_5148_;
}
else
{
lean_inc(v_a_5147_);
lean_dec(v___x_5122_);
v___x_5149_ = lean_box(0);
v_isShared_5150_ = v_isSharedCheck_5154_;
goto v_resetjp_5148_;
}
v_resetjp_5148_:
{
lean_object* v___x_5152_; 
if (v_isShared_5150_ == 0)
{
v___x_5152_ = v___x_5149_;
goto v_reusejp_5151_;
}
else
{
lean_object* v_reuseFailAlloc_5153_; 
v_reuseFailAlloc_5153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5153_, 0, v_a_5147_);
v___x_5152_ = v_reuseFailAlloc_5153_;
goto v_reusejp_5151_;
}
v_reusejp_5151_:
{
return v___x_5152_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___boxed(lean_object* v_a_5155_, lean_object* v_config_5156_, lean_object* v_ctx_5157_, lean_object* v_invariantAlts_x3f_5158_, lean_object* v___y_5159_, lean_object* v___y_5160_, lean_object* v___y_5161_, lean_object* v___y_5162_, lean_object* v___y_5163_, lean_object* v___y_5164_, lean_object* v___y_5165_, lean_object* v___y_5166_, lean_object* v___y_5167_, lean_object* v___y_5168_){
_start:
{
lean_object* v_res_5169_; 
v_res_5169_ = l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0(v_a_5155_, v_config_5156_, v_ctx_5157_, v_invariantAlts_x3f_5158_, v___y_5159_, v___y_5160_, v___y_5161_, v___y_5162_, v___y_5163_, v___y_5164_, v___y_5165_, v___y_5166_, v___y_5167_);
lean_dec(v___y_5167_);
lean_dec_ref(v___y_5166_);
lean_dec(v___y_5165_);
lean_dec_ref(v___y_5164_);
lean_dec(v___y_5163_);
lean_dec_ref(v___y_5162_);
lean_dec(v___y_5161_);
lean_dec_ref(v___y_5160_);
lean_dec(v___y_5159_);
lean_dec(v_invariantAlts_x3f_5158_);
lean_dec_ref(v_ctx_5157_);
return v_res_5169_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__4(size_t v_sz_5170_, size_t v_i_5171_, lean_object* v_bs_5172_){
_start:
{
uint8_t v___x_5173_; 
v___x_5173_ = lean_usize_dec_lt(v_i_5171_, v_sz_5170_);
if (v___x_5173_ == 0)
{
return v_bs_5172_;
}
else
{
lean_object* v_v_5174_; lean_object* v_mvarId_5175_; lean_object* v___x_5176_; lean_object* v_bs_x27_5177_; size_t v___x_5178_; size_t v___x_5179_; lean_object* v___x_5180_; 
v_v_5174_ = lean_array_uget_borrowed(v_bs_5172_, v_i_5171_);
v_mvarId_5175_ = lean_ctor_get(v_v_5174_, 1);
lean_inc(v_mvarId_5175_);
v___x_5176_ = lean_unsigned_to_nat(0u);
v_bs_x27_5177_ = lean_array_uset(v_bs_5172_, v_i_5171_, v___x_5176_);
v___x_5178_ = ((size_t)1ULL);
v___x_5179_ = lean_usize_add(v_i_5171_, v___x_5178_);
v___x_5180_ = lean_array_uset(v_bs_x27_5177_, v_i_5171_, v_mvarId_5175_);
v_i_5171_ = v___x_5179_;
v_bs_5172_ = v___x_5180_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__4___boxed(lean_object* v_sz_5182_, lean_object* v_i_5183_, lean_object* v_bs_5184_){
_start:
{
size_t v_sz_boxed_5185_; size_t v_i_boxed_5186_; lean_object* v_res_5187_; 
v_sz_boxed_5185_ = lean_unbox_usize(v_sz_5182_);
lean_dec(v_sz_5182_);
v_i_boxed_5186_ = lean_unbox_usize(v_i_5183_);
lean_dec(v_i_5183_);
v_res_5187_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__4(v_sz_boxed_5185_, v_i_boxed_5186_, v_bs_5184_);
return v_res_5187_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__2___redArg(lean_object* v_msg_5188_, lean_object* v___y_5189_, lean_object* v___y_5190_, lean_object* v___y_5191_, lean_object* v___y_5192_){
_start:
{
lean_object* v_ref_5194_; lean_object* v___x_5195_; lean_object* v_a_5196_; lean_object* v___x_5198_; uint8_t v_isShared_5199_; uint8_t v_isSharedCheck_5204_; 
v_ref_5194_ = lean_ctor_get(v___y_5191_, 5);
v___x_5195_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecContext_spec__1_spec__1(v_msg_5188_, v___y_5189_, v___y_5190_, v___y_5191_, v___y_5192_);
v_a_5196_ = lean_ctor_get(v___x_5195_, 0);
v_isSharedCheck_5204_ = !lean_is_exclusive(v___x_5195_);
if (v_isSharedCheck_5204_ == 0)
{
v___x_5198_ = v___x_5195_;
v_isShared_5199_ = v_isSharedCheck_5204_;
goto v_resetjp_5197_;
}
else
{
lean_inc(v_a_5196_);
lean_dec(v___x_5195_);
v___x_5198_ = lean_box(0);
v_isShared_5199_ = v_isSharedCheck_5204_;
goto v_resetjp_5197_;
}
v_resetjp_5197_:
{
lean_object* v___x_5200_; lean_object* v___x_5202_; 
lean_inc(v_ref_5194_);
v___x_5200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5200_, 0, v_ref_5194_);
lean_ctor_set(v___x_5200_, 1, v_a_5196_);
if (v_isShared_5199_ == 0)
{
lean_ctor_set_tag(v___x_5198_, 1);
lean_ctor_set(v___x_5198_, 0, v___x_5200_);
v___x_5202_ = v___x_5198_;
goto v_reusejp_5201_;
}
else
{
lean_object* v_reuseFailAlloc_5203_; 
v_reuseFailAlloc_5203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5203_, 0, v___x_5200_);
v___x_5202_ = v_reuseFailAlloc_5203_;
goto v_reusejp_5201_;
}
v_reusejp_5201_:
{
return v___x_5202_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__2___redArg___boxed(lean_object* v_msg_5205_, lean_object* v___y_5206_, lean_object* v___y_5207_, lean_object* v___y_5208_, lean_object* v___y_5209_, lean_object* v___y_5210_){
_start:
{
lean_object* v_res_5211_; 
v_res_5211_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__2___redArg(v_msg_5205_, v___y_5206_, v___y_5207_, v___y_5208_, v___y_5209_);
lean_dec(v___y_5209_);
lean_dec_ref(v___y_5208_);
lean_dec(v___y_5207_);
lean_dec_ref(v___y_5206_);
return v_res_5211_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__1(lean_object* v_a_5212_, lean_object* v_a_5213_){
_start:
{
if (lean_obj_tag(v_a_5212_) == 0)
{
lean_object* v___x_5214_; 
v___x_5214_ = l_List_reverse___redArg(v_a_5213_);
return v___x_5214_;
}
else
{
lean_object* v_head_5215_; lean_object* v_tail_5216_; lean_object* v___x_5218_; uint8_t v_isShared_5219_; uint8_t v_isSharedCheck_5225_; 
v_head_5215_ = lean_ctor_get(v_a_5212_, 0);
v_tail_5216_ = lean_ctor_get(v_a_5212_, 1);
v_isSharedCheck_5225_ = !lean_is_exclusive(v_a_5212_);
if (v_isSharedCheck_5225_ == 0)
{
v___x_5218_ = v_a_5212_;
v_isShared_5219_ = v_isSharedCheck_5225_;
goto v_resetjp_5217_;
}
else
{
lean_inc(v_tail_5216_);
lean_inc(v_head_5215_);
lean_dec(v_a_5212_);
v___x_5218_ = lean_box(0);
v_isShared_5219_ = v_isSharedCheck_5225_;
goto v_resetjp_5217_;
}
v_resetjp_5217_:
{
lean_object* v_mvarId_5220_; lean_object* v___x_5222_; 
v_mvarId_5220_ = lean_ctor_get(v_head_5215_, 1);
lean_inc(v_mvarId_5220_);
lean_dec(v_head_5215_);
if (v_isShared_5219_ == 0)
{
lean_ctor_set(v___x_5218_, 1, v_a_5213_);
lean_ctor_set(v___x_5218_, 0, v_mvarId_5220_);
v___x_5222_ = v___x_5218_;
goto v_reusejp_5221_;
}
else
{
lean_object* v_reuseFailAlloc_5224_; 
v_reuseFailAlloc_5224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5224_, 0, v_mvarId_5220_);
lean_ctor_set(v_reuseFailAlloc_5224_, 1, v_a_5213_);
v___x_5222_ = v_reuseFailAlloc_5224_;
goto v_reusejp_5221_;
}
v_reusejp_5221_:
{
v_a_5212_ = v_tail_5216_;
v_a_5213_ = v___x_5222_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg(lean_object* v_mvarId_5226_, lean_object* v___y_5227_){
_start:
{
lean_object* v___x_5229_; lean_object* v_mctx_5230_; lean_object* v_eAssignment_5231_; uint8_t v___x_5232_; lean_object* v___x_5233_; lean_object* v___x_5234_; 
v___x_5229_ = lean_st_ref_get(v___y_5227_);
v_mctx_5230_ = lean_ctor_get(v___x_5229_, 0);
lean_inc_ref(v_mctx_5230_);
lean_dec(v___x_5229_);
v_eAssignment_5231_ = lean_ctor_get(v_mctx_5230_, 8);
lean_inc_ref(v_eAssignment_5231_);
lean_dec_ref(v_mctx_5230_);
v___x_5232_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___redArg(v_eAssignment_5231_, v_mvarId_5226_);
lean_dec_ref(v_eAssignment_5231_);
v___x_5233_ = lean_box(v___x_5232_);
v___x_5234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5234_, 0, v___x_5233_);
return v___x_5234_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg___boxed(lean_object* v_mvarId_5235_, lean_object* v___y_5236_, lean_object* v___y_5237_){
_start:
{
lean_object* v_res_5238_; 
v_res_5238_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg(v_mvarId_5235_, v___y_5236_);
lean_dec(v___y_5236_);
lean_dec(v_mvarId_5235_);
return v_res_5238_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__3(lean_object* v_as_5239_, size_t v_i_5240_, size_t v_stop_5241_, lean_object* v_b_5242_, lean_object* v___y_5243_, lean_object* v___y_5244_, lean_object* v___y_5245_, lean_object* v___y_5246_, lean_object* v___y_5247_, lean_object* v___y_5248_, lean_object* v___y_5249_, lean_object* v___y_5250_){
_start:
{
lean_object* v_a_5253_; uint8_t v___x_5257_; 
v___x_5257_ = lean_usize_dec_eq(v_i_5240_, v_stop_5241_);
if (v___x_5257_ == 0)
{
lean_object* v___x_5258_; lean_object* v___x_5261_; 
v___x_5258_ = lean_array_uget_borrowed(v_as_5239_, v_i_5240_);
v___x_5261_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg(v___x_5258_, v___y_5248_);
if (lean_obj_tag(v___x_5261_) == 0)
{
lean_object* v_a_5262_; uint8_t v___x_5263_; 
v_a_5262_ = lean_ctor_get(v___x_5261_, 0);
lean_inc(v_a_5262_);
lean_dec_ref_known(v___x_5261_, 1);
v___x_5263_ = lean_unbox(v_a_5262_);
lean_dec(v_a_5262_);
if (v___x_5263_ == 0)
{
goto v___jp_5259_;
}
else
{
v_a_5253_ = v_b_5242_;
goto v___jp_5252_;
}
}
else
{
if (lean_obj_tag(v___x_5261_) == 0)
{
lean_object* v_a_5264_; uint8_t v___x_5265_; 
v_a_5264_ = lean_ctor_get(v___x_5261_, 0);
lean_inc(v_a_5264_);
lean_dec_ref_known(v___x_5261_, 1);
v___x_5265_ = lean_unbox(v_a_5264_);
lean_dec(v_a_5264_);
if (v___x_5265_ == 0)
{
v_a_5253_ = v_b_5242_;
goto v___jp_5252_;
}
else
{
goto v___jp_5259_;
}
}
else
{
lean_object* v_a_5266_; lean_object* v___x_5268_; uint8_t v_isShared_5269_; uint8_t v_isSharedCheck_5273_; 
lean_dec_ref(v_b_5242_);
v_a_5266_ = lean_ctor_get(v___x_5261_, 0);
v_isSharedCheck_5273_ = !lean_is_exclusive(v___x_5261_);
if (v_isSharedCheck_5273_ == 0)
{
v___x_5268_ = v___x_5261_;
v_isShared_5269_ = v_isSharedCheck_5273_;
goto v_resetjp_5267_;
}
else
{
lean_inc(v_a_5266_);
lean_dec(v___x_5261_);
v___x_5268_ = lean_box(0);
v_isShared_5269_ = v_isSharedCheck_5273_;
goto v_resetjp_5267_;
}
v_resetjp_5267_:
{
lean_object* v___x_5271_; 
if (v_isShared_5269_ == 0)
{
v___x_5271_ = v___x_5268_;
goto v_reusejp_5270_;
}
else
{
lean_object* v_reuseFailAlloc_5272_; 
v_reuseFailAlloc_5272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5272_, 0, v_a_5266_);
v___x_5271_ = v_reuseFailAlloc_5272_;
goto v_reusejp_5270_;
}
v_reusejp_5270_:
{
return v___x_5271_;
}
}
}
}
v___jp_5259_:
{
lean_object* v___x_5260_; 
lean_inc(v___x_5258_);
v___x_5260_ = lean_array_push(v_b_5242_, v___x_5258_);
v_a_5253_ = v___x_5260_;
goto v___jp_5252_;
}
}
else
{
lean_object* v___x_5274_; 
v___x_5274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5274_, 0, v_b_5242_);
return v___x_5274_;
}
v___jp_5252_:
{
size_t v___x_5254_; size_t v___x_5255_; 
v___x_5254_ = ((size_t)1ULL);
v___x_5255_ = lean_usize_add(v_i_5240_, v___x_5254_);
v_i_5240_ = v___x_5255_;
v_b_5242_ = v_a_5253_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__3___boxed(lean_object* v_as_5275_, lean_object* v_i_5276_, lean_object* v_stop_5277_, lean_object* v_b_5278_, lean_object* v___y_5279_, lean_object* v___y_5280_, lean_object* v___y_5281_, lean_object* v___y_5282_, lean_object* v___y_5283_, lean_object* v___y_5284_, lean_object* v___y_5285_, lean_object* v___y_5286_, lean_object* v___y_5287_){
_start:
{
size_t v_i_boxed_5288_; size_t v_stop_boxed_5289_; lean_object* v_res_5290_; 
v_i_boxed_5288_ = lean_unbox_usize(v_i_5276_);
lean_dec(v_i_5276_);
v_stop_boxed_5289_ = lean_unbox_usize(v_stop_5277_);
lean_dec(v_stop_5277_);
v_res_5290_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__3(v_as_5275_, v_i_boxed_5288_, v_stop_boxed_5289_, v_b_5278_, v___y_5279_, v___y_5280_, v___y_5281_, v___y_5282_, v___y_5283_, v___y_5284_, v___y_5285_, v___y_5286_);
lean_dec(v___y_5286_);
lean_dec_ref(v___y_5285_);
lean_dec(v___y_5284_);
lean_dec_ref(v___y_5283_);
lean_dec(v___y_5282_);
lean_dec_ref(v___y_5281_);
lean_dec(v___y_5280_);
lean_dec_ref(v___y_5279_);
lean_dec_ref(v_as_5275_);
return v_res_5290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__1(lean_object* v_stx_5291_, lean_object* v___y_5292_, lean_object* v___y_5293_, lean_object* v___y_5294_, lean_object* v___y_5295_, lean_object* v___y_5296_, lean_object* v___y_5297_, lean_object* v___y_5298_, lean_object* v___y_5299_){
_start:
{
lean_object* v___x_5301_; 
v___x_5301_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_5293_, v___y_5296_, v___y_5297_, v___y_5298_, v___y_5299_);
if (lean_obj_tag(v___x_5301_) == 0)
{
lean_object* v_a_5302_; lean_object* v___x_5303_; 
v_a_5302_ = lean_ctor_get(v___x_5301_, 0);
lean_inc_n(v_a_5302_, 2);
lean_dec_ref_known(v___x_5301_, 1);
lean_inc(v_stx_5291_);
v___x_5303_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs(v_stx_5291_, v_a_5302_, v___y_5294_, v___y_5295_, v___y_5296_, v___y_5297_, v___y_5298_, v___y_5299_);
if (lean_obj_tag(v___x_5303_) == 0)
{
lean_object* v_a_5304_; lean_object* v_config_5305_; lean_object* v_ctx_5306_; lean_object* v_params_5307_; lean_object* v_invariantAlts_x3f_5308_; lean_object* v___f_5309_; lean_object* v___x_5310_; lean_object* v___x_5311_; 
v_a_5304_ = lean_ctor_get(v___x_5303_, 0);
lean_inc(v_a_5304_);
lean_dec_ref_known(v___x_5303_, 1);
v_config_5305_ = lean_ctor_get(v_a_5304_, 0);
lean_inc_ref(v_config_5305_);
v_ctx_5306_ = lean_ctor_get(v_a_5304_, 1);
lean_inc_ref(v_ctx_5306_);
v_params_5307_ = lean_ctor_get(v_a_5304_, 2);
lean_inc_ref(v_params_5307_);
v_invariantAlts_x3f_5308_ = lean_ctor_get(v_a_5304_, 3);
lean_inc_n(v_invariantAlts_x3f_5308_, 2);
lean_dec(v_a_5304_);
v___f_5309_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___boxed), 14, 4);
lean_closure_set(v___f_5309_, 0, v_a_5302_);
lean_closure_set(v___f_5309_, 1, v_config_5305_);
lean_closure_set(v___f_5309_, 2, v_ctx_5306_);
lean_closure_set(v___f_5309_, 3, v_invariantAlts_x3f_5308_);
v___x_5310_ = lean_box(0);
v___x_5311_ = l_Lean_Meta_Grind_GrindM_run___redArg(v___f_5309_, v_params_5307_, v___x_5310_, v___y_5296_, v___y_5297_, v___y_5298_, v___y_5299_);
if (lean_obj_tag(v___x_5311_) == 0)
{
lean_object* v_a_5312_; lean_object* v___y_5314_; lean_object* v___y_5315_; lean_object* v___y_5316_; lean_object* v___y_5317_; lean_object* v___y_5318_; lean_object* v___y_5319_; lean_object* v___y_5320_; lean_object* v___y_5321_; lean_object* v_a_5322_; lean_object* v___y_5343_; lean_object* v___y_5344_; lean_object* v___y_5345_; lean_object* v___y_5346_; lean_object* v___y_5347_; lean_object* v___y_5348_; lean_object* v___y_5349_; lean_object* v___y_5350_; lean_object* v___y_5351_; lean_object* v___y_5362_; lean_object* v___y_5363_; lean_object* v___y_5364_; lean_object* v___y_5365_; lean_object* v___y_5366_; lean_object* v___y_5367_; lean_object* v___y_5368_; lean_object* v___y_5369_; 
v_a_5312_ = lean_ctor_get(v___x_5311_, 0);
lean_inc(v_a_5312_);
lean_dec_ref_known(v___x_5311_, 1);
if (lean_obj_tag(v_invariantAlts_x3f_5308_) == 0)
{
lean_object* v_invariants_5382_; lean_object* v_vcs_5383_; lean_object* v___x_5384_; lean_object* v___x_5385_; size_t v_sz_5386_; size_t v___x_5387_; lean_object* v___x_5388_; lean_object* v___x_5389_; lean_object* v___x_5390_; 
v_invariants_5382_ = lean_ctor_get(v_a_5312_, 0);
v_vcs_5383_ = lean_ctor_get(v_a_5312_, 1);
v___x_5384_ = lean_unsigned_to_nat(3u);
v___x_5385_ = l_Lean_Syntax_getArg(v_stx_5291_, v___x_5384_);
lean_dec(v_stx_5291_);
v_sz_5386_ = lean_array_size(v_vcs_5383_);
v___x_5387_ = ((size_t)0ULL);
lean_inc_ref(v_vcs_5383_);
v___x_5388_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__4(v_sz_5386_, v___x_5387_, v_vcs_5383_);
v___x_5389_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_suggestInvariant___boxed), 11, 1);
lean_closure_set(v___x_5389_, 0, v___x_5388_);
v___x_5390_ = l_Lean_Elab_Tactic_Do_elabInvariants(v___x_5385_, v_invariants_5382_, v___x_5389_, v___y_5292_, v___y_5293_, v___y_5294_, v___y_5295_, v___y_5296_, v___y_5297_, v___y_5298_, v___y_5299_);
lean_dec(v___x_5385_);
if (lean_obj_tag(v___x_5390_) == 0)
{
lean_dec_ref_known(v___x_5390_, 1);
v___y_5362_ = v___y_5292_;
v___y_5363_ = v___y_5293_;
v___y_5364_ = v___y_5294_;
v___y_5365_ = v___y_5295_;
v___y_5366_ = v___y_5296_;
v___y_5367_ = v___y_5297_;
v___y_5368_ = v___y_5298_;
v___y_5369_ = v___y_5299_;
goto v___jp_5361_;
}
else
{
lean_dec(v_a_5312_);
return v___x_5390_;
}
}
else
{
lean_dec_ref_known(v_invariantAlts_x3f_5308_, 1);
lean_dec(v_stx_5291_);
v___y_5362_ = v___y_5292_;
v___y_5363_ = v___y_5293_;
v___y_5364_ = v___y_5294_;
v___y_5365_ = v___y_5295_;
v___y_5366_ = v___y_5296_;
v___y_5367_ = v___y_5297_;
v___y_5368_ = v___y_5298_;
v___y_5369_ = v___y_5299_;
goto v___jp_5361_;
}
v___jp_5313_:
{
lean_object* v_vcs_5323_; uint8_t v_preTacFailed_5324_; lean_object* v___x_5325_; lean_object* v___x_5326_; lean_object* v___x_5327_; lean_object* v___x_5328_; lean_object* v___x_5329_; lean_object* v___x_5330_; 
v_vcs_5323_ = lean_ctor_get(v_a_5312_, 1);
lean_inc_ref(v_vcs_5323_);
v_preTacFailed_5324_ = lean_ctor_get_uint8(v_a_5312_, sizeof(void*)*3);
lean_dec(v_a_5312_);
v___x_5325_ = lean_array_to_list(v_a_5322_);
v___x_5326_ = lean_array_to_list(v_vcs_5323_);
v___x_5327_ = lean_box(0);
v___x_5328_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__1(v___x_5326_, v___x_5327_);
v___x_5329_ = l_List_appendTR___redArg(v___x_5325_, v___x_5328_);
v___x_5330_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_5329_, v___y_5314_, v___y_5315_, v___y_5318_, v___y_5321_, v___y_5320_);
if (lean_obj_tag(v___x_5330_) == 0)
{
lean_object* v___x_5332_; uint8_t v_isShared_5333_; uint8_t v_isSharedCheck_5340_; 
v_isSharedCheck_5340_ = !lean_is_exclusive(v___x_5330_);
if (v_isSharedCheck_5340_ == 0)
{
lean_object* v_unused_5341_; 
v_unused_5341_ = lean_ctor_get(v___x_5330_, 0);
lean_dec(v_unused_5341_);
v___x_5332_ = v___x_5330_;
v_isShared_5333_ = v_isSharedCheck_5340_;
goto v_resetjp_5331_;
}
else
{
lean_dec(v___x_5330_);
v___x_5332_ = lean_box(0);
v_isShared_5333_ = v_isSharedCheck_5340_;
goto v_resetjp_5331_;
}
v_resetjp_5331_:
{
if (v_preTacFailed_5324_ == 0)
{
lean_object* v___x_5334_; lean_object* v___x_5336_; 
v___x_5334_ = lean_box(0);
if (v_isShared_5333_ == 0)
{
lean_ctor_set(v___x_5332_, 0, v___x_5334_);
v___x_5336_ = v___x_5332_;
goto v_reusejp_5335_;
}
else
{
lean_object* v_reuseFailAlloc_5337_; 
v_reuseFailAlloc_5337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5337_, 0, v___x_5334_);
v___x_5336_ = v_reuseFailAlloc_5337_;
goto v_reusejp_5335_;
}
v_reusejp_5335_:
{
return v___x_5336_;
}
}
else
{
lean_object* v___x_5338_; lean_object* v___x_5339_; 
lean_del_object(v___x_5332_);
v___x_5338_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__1, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__1);
v___x_5339_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__2___redArg(v___x_5338_, v___y_5315_, v___y_5318_, v___y_5321_, v___y_5320_);
return v___x_5339_;
}
}
}
else
{
return v___x_5330_;
}
}
v___jp_5342_:
{
if (lean_obj_tag(v___y_5351_) == 0)
{
lean_object* v_a_5352_; 
v_a_5352_ = lean_ctor_get(v___y_5351_, 0);
lean_inc(v_a_5352_);
lean_dec_ref_known(v___y_5351_, 1);
v___y_5314_ = v___y_5343_;
v___y_5315_ = v___y_5344_;
v___y_5316_ = v___y_5345_;
v___y_5317_ = v___y_5346_;
v___y_5318_ = v___y_5347_;
v___y_5319_ = v___y_5349_;
v___y_5320_ = v___y_5348_;
v___y_5321_ = v___y_5350_;
v_a_5322_ = v_a_5352_;
goto v___jp_5313_;
}
else
{
lean_object* v_a_5353_; lean_object* v___x_5355_; uint8_t v_isShared_5356_; uint8_t v_isSharedCheck_5360_; 
lean_dec(v_a_5312_);
v_a_5353_ = lean_ctor_get(v___y_5351_, 0);
v_isSharedCheck_5360_ = !lean_is_exclusive(v___y_5351_);
if (v_isSharedCheck_5360_ == 0)
{
v___x_5355_ = v___y_5351_;
v_isShared_5356_ = v_isSharedCheck_5360_;
goto v_resetjp_5354_;
}
else
{
lean_inc(v_a_5353_);
lean_dec(v___y_5351_);
v___x_5355_ = lean_box(0);
v_isShared_5356_ = v_isSharedCheck_5360_;
goto v_resetjp_5354_;
}
v_resetjp_5354_:
{
lean_object* v___x_5358_; 
if (v_isShared_5356_ == 0)
{
v___x_5358_ = v___x_5355_;
goto v_reusejp_5357_;
}
else
{
lean_object* v_reuseFailAlloc_5359_; 
v_reuseFailAlloc_5359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5359_, 0, v_a_5353_);
v___x_5358_ = v_reuseFailAlloc_5359_;
goto v_reusejp_5357_;
}
v_reusejp_5357_:
{
return v___x_5358_;
}
}
}
}
v___jp_5361_:
{
lean_object* v_invariants_5370_; lean_object* v___x_5371_; lean_object* v___x_5372_; lean_object* v___x_5373_; uint8_t v___x_5374_; 
v_invariants_5370_ = lean_ctor_get(v_a_5312_, 0);
v___x_5371_ = lean_unsigned_to_nat(0u);
v___x_5372_ = lean_array_get_size(v_invariants_5370_);
v___x_5373_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___closed__2));
v___x_5374_ = lean_nat_dec_lt(v___x_5371_, v___x_5372_);
if (v___x_5374_ == 0)
{
v___y_5314_ = v___y_5363_;
v___y_5315_ = v___y_5366_;
v___y_5316_ = v___y_5364_;
v___y_5317_ = v___y_5365_;
v___y_5318_ = v___y_5367_;
v___y_5319_ = v___y_5362_;
v___y_5320_ = v___y_5369_;
v___y_5321_ = v___y_5368_;
v_a_5322_ = v___x_5373_;
goto v___jp_5313_;
}
else
{
uint8_t v___x_5375_; 
v___x_5375_ = lean_nat_dec_le(v___x_5372_, v___x_5372_);
if (v___x_5375_ == 0)
{
if (v___x_5374_ == 0)
{
v___y_5314_ = v___y_5363_;
v___y_5315_ = v___y_5366_;
v___y_5316_ = v___y_5364_;
v___y_5317_ = v___y_5365_;
v___y_5318_ = v___y_5367_;
v___y_5319_ = v___y_5362_;
v___y_5320_ = v___y_5369_;
v___y_5321_ = v___y_5368_;
v_a_5322_ = v___x_5373_;
goto v___jp_5313_;
}
else
{
size_t v___x_5376_; size_t v___x_5377_; lean_object* v___x_5378_; 
v___x_5376_ = ((size_t)0ULL);
v___x_5377_ = lean_usize_of_nat(v___x_5372_);
v___x_5378_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__3(v_invariants_5370_, v___x_5376_, v___x_5377_, v___x_5373_, v___y_5362_, v___y_5363_, v___y_5364_, v___y_5365_, v___y_5366_, v___y_5367_, v___y_5368_, v___y_5369_);
v___y_5343_ = v___y_5363_;
v___y_5344_ = v___y_5366_;
v___y_5345_ = v___y_5364_;
v___y_5346_ = v___y_5365_;
v___y_5347_ = v___y_5367_;
v___y_5348_ = v___y_5369_;
v___y_5349_ = v___y_5362_;
v___y_5350_ = v___y_5368_;
v___y_5351_ = v___x_5378_;
goto v___jp_5342_;
}
}
else
{
size_t v___x_5379_; size_t v___x_5380_; lean_object* v___x_5381_; 
v___x_5379_ = ((size_t)0ULL);
v___x_5380_ = lean_usize_of_nat(v___x_5372_);
v___x_5381_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__3(v_invariants_5370_, v___x_5379_, v___x_5380_, v___x_5373_, v___y_5362_, v___y_5363_, v___y_5364_, v___y_5365_, v___y_5366_, v___y_5367_, v___y_5368_, v___y_5369_);
v___y_5343_ = v___y_5363_;
v___y_5344_ = v___y_5366_;
v___y_5345_ = v___y_5364_;
v___y_5346_ = v___y_5365_;
v___y_5347_ = v___y_5367_;
v___y_5348_ = v___y_5369_;
v___y_5349_ = v___y_5362_;
v___y_5350_ = v___y_5368_;
v___y_5351_ = v___x_5381_;
goto v___jp_5342_;
}
}
}
}
else
{
lean_object* v_a_5391_; lean_object* v___x_5393_; uint8_t v_isShared_5394_; uint8_t v_isSharedCheck_5398_; 
lean_dec(v_invariantAlts_x3f_5308_);
lean_dec(v_stx_5291_);
v_a_5391_ = lean_ctor_get(v___x_5311_, 0);
v_isSharedCheck_5398_ = !lean_is_exclusive(v___x_5311_);
if (v_isSharedCheck_5398_ == 0)
{
v___x_5393_ = v___x_5311_;
v_isShared_5394_ = v_isSharedCheck_5398_;
goto v_resetjp_5392_;
}
else
{
lean_inc(v_a_5391_);
lean_dec(v___x_5311_);
v___x_5393_ = lean_box(0);
v_isShared_5394_ = v_isSharedCheck_5398_;
goto v_resetjp_5392_;
}
v_resetjp_5392_:
{
lean_object* v___x_5396_; 
if (v_isShared_5394_ == 0)
{
v___x_5396_ = v___x_5393_;
goto v_reusejp_5395_;
}
else
{
lean_object* v_reuseFailAlloc_5397_; 
v_reuseFailAlloc_5397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5397_, 0, v_a_5391_);
v___x_5396_ = v_reuseFailAlloc_5397_;
goto v_reusejp_5395_;
}
v_reusejp_5395_:
{
return v___x_5396_;
}
}
}
}
else
{
lean_object* v_a_5399_; lean_object* v___x_5401_; uint8_t v_isShared_5402_; uint8_t v_isSharedCheck_5406_; 
lean_dec(v_a_5302_);
lean_dec(v_stx_5291_);
v_a_5399_ = lean_ctor_get(v___x_5303_, 0);
v_isSharedCheck_5406_ = !lean_is_exclusive(v___x_5303_);
if (v_isSharedCheck_5406_ == 0)
{
v___x_5401_ = v___x_5303_;
v_isShared_5402_ = v_isSharedCheck_5406_;
goto v_resetjp_5400_;
}
else
{
lean_inc(v_a_5399_);
lean_dec(v___x_5303_);
v___x_5401_ = lean_box(0);
v_isShared_5402_ = v_isSharedCheck_5406_;
goto v_resetjp_5400_;
}
v_resetjp_5400_:
{
lean_object* v___x_5404_; 
if (v_isShared_5402_ == 0)
{
v___x_5404_ = v___x_5401_;
goto v_reusejp_5403_;
}
else
{
lean_object* v_reuseFailAlloc_5405_; 
v_reuseFailAlloc_5405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5405_, 0, v_a_5399_);
v___x_5404_ = v_reuseFailAlloc_5405_;
goto v_reusejp_5403_;
}
v_reusejp_5403_:
{
return v___x_5404_;
}
}
}
}
else
{
lean_object* v_a_5407_; lean_object* v___x_5409_; uint8_t v_isShared_5410_; uint8_t v_isSharedCheck_5414_; 
lean_dec(v_stx_5291_);
v_a_5407_ = lean_ctor_get(v___x_5301_, 0);
v_isSharedCheck_5414_ = !lean_is_exclusive(v___x_5301_);
if (v_isSharedCheck_5414_ == 0)
{
v___x_5409_ = v___x_5301_;
v_isShared_5410_ = v_isSharedCheck_5414_;
goto v_resetjp_5408_;
}
else
{
lean_inc(v_a_5407_);
lean_dec(v___x_5301_);
v___x_5409_ = lean_box(0);
v_isShared_5410_ = v_isSharedCheck_5414_;
goto v_resetjp_5408_;
}
v_resetjp_5408_:
{
lean_object* v___x_5412_; 
if (v_isShared_5410_ == 0)
{
v___x_5412_ = v___x_5409_;
goto v_reusejp_5411_;
}
else
{
lean_object* v_reuseFailAlloc_5413_; 
v_reuseFailAlloc_5413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5413_, 0, v_a_5407_);
v___x_5412_ = v_reuseFailAlloc_5413_;
goto v_reusejp_5411_;
}
v_reusejp_5411_:
{
return v___x_5412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__1___boxed(lean_object* v_stx_5415_, lean_object* v___y_5416_, lean_object* v___y_5417_, lean_object* v___y_5418_, lean_object* v___y_5419_, lean_object* v___y_5420_, lean_object* v___y_5421_, lean_object* v___y_5422_, lean_object* v___y_5423_, lean_object* v___y_5424_){
_start:
{
lean_object* v_res_5425_; 
v_res_5425_ = l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__1(v_stx_5415_, v___y_5416_, v___y_5417_, v___y_5418_, v___y_5419_, v___y_5420_, v___y_5421_, v___y_5422_, v___y_5423_);
lean_dec(v___y_5423_);
lean_dec_ref(v___y_5422_);
lean_dec(v___y_5421_);
lean_dec_ref(v___y_5420_);
lean_dec(v___y_5419_);
lean_dec_ref(v___y_5418_);
lean_dec(v___y_5417_);
lean_dec_ref(v___y_5416_);
return v_res_5425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27(lean_object* v_stx_5426_, lean_object* v_a_5427_, lean_object* v_a_5428_, lean_object* v_a_5429_, lean_object* v_a_5430_, lean_object* v_a_5431_, lean_object* v_a_5432_, lean_object* v_a_5433_, lean_object* v_a_5434_){
_start:
{
lean_object* v___f_5436_; lean_object* v___x_5437_; 
v___f_5436_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__1___boxed), 10, 1);
lean_closure_set(v___f_5436_, 0, v_stx_5426_);
v___x_5437_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_5436_, v_a_5427_, v_a_5428_, v_a_5429_, v_a_5430_, v_a_5431_, v_a_5432_, v_a_5433_, v_a_5434_);
return v___x_5437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___boxed(lean_object* v_stx_5438_, lean_object* v_a_5439_, lean_object* v_a_5440_, lean_object* v_a_5441_, lean_object* v_a_5442_, lean_object* v_a_5443_, lean_object* v_a_5444_, lean_object* v_a_5445_, lean_object* v_a_5446_, lean_object* v_a_5447_){
_start:
{
lean_object* v_res_5448_; 
v_res_5448_ = l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27(v_stx_5438_, v_a_5439_, v_a_5440_, v_a_5441_, v_a_5442_, v_a_5443_, v_a_5444_, v_a_5445_, v_a_5446_);
lean_dec(v_a_5446_);
lean_dec_ref(v_a_5445_);
lean_dec(v_a_5444_);
lean_dec_ref(v_a_5443_);
lean_dec(v_a_5442_);
lean_dec_ref(v_a_5441_);
lean_dec(v_a_5440_);
lean_dec_ref(v_a_5439_);
return v_res_5448_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0(lean_object* v_mvarId_5449_, lean_object* v___y_5450_, lean_object* v___y_5451_, lean_object* v___y_5452_, lean_object* v___y_5453_, lean_object* v___y_5454_, lean_object* v___y_5455_, lean_object* v___y_5456_, lean_object* v___y_5457_){
_start:
{
lean_object* v___x_5459_; 
v___x_5459_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg(v_mvarId_5449_, v___y_5455_);
return v___x_5459_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___boxed(lean_object* v_mvarId_5460_, lean_object* v___y_5461_, lean_object* v___y_5462_, lean_object* v___y_5463_, lean_object* v___y_5464_, lean_object* v___y_5465_, lean_object* v___y_5466_, lean_object* v___y_5467_, lean_object* v___y_5468_, lean_object* v___y_5469_){
_start:
{
lean_object* v_res_5470_; 
v_res_5470_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0(v_mvarId_5460_, v___y_5461_, v___y_5462_, v___y_5463_, v___y_5464_, v___y_5465_, v___y_5466_, v___y_5467_, v___y_5468_);
lean_dec(v___y_5468_);
lean_dec_ref(v___y_5467_);
lean_dec(v___y_5466_);
lean_dec_ref(v___y_5465_);
lean_dec(v___y_5464_);
lean_dec_ref(v___y_5463_);
lean_dec(v___y_5462_);
lean_dec_ref(v___y_5461_);
lean_dec(v_mvarId_5460_);
return v_res_5470_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__2(lean_object* v_00_u03b1_5471_, lean_object* v_msg_5472_, lean_object* v___y_5473_, lean_object* v___y_5474_, lean_object* v___y_5475_, lean_object* v___y_5476_, lean_object* v___y_5477_, lean_object* v___y_5478_, lean_object* v___y_5479_, lean_object* v___y_5480_){
_start:
{
lean_object* v___x_5482_; 
v___x_5482_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__2___redArg(v_msg_5472_, v___y_5477_, v___y_5478_, v___y_5479_, v___y_5480_);
return v___x_5482_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__2___boxed(lean_object* v_00_u03b1_5483_, lean_object* v_msg_5484_, lean_object* v___y_5485_, lean_object* v___y_5486_, lean_object* v___y_5487_, lean_object* v___y_5488_, lean_object* v___y_5489_, lean_object* v___y_5490_, lean_object* v___y_5491_, lean_object* v___y_5492_, lean_object* v___y_5493_){
_start:
{
lean_object* v_res_5494_; 
v_res_5494_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__2(v_00_u03b1_5483_, v_msg_5484_, v___y_5485_, v___y_5486_, v___y_5487_, v___y_5488_, v___y_5489_, v___y_5490_, v___y_5491_, v___y_5492_);
lean_dec(v___y_5492_);
lean_dec_ref(v___y_5491_);
lean_dec(v___y_5490_);
lean_dec_ref(v___y_5489_);
lean_dec(v___y_5488_);
lean_dec_ref(v___y_5487_);
lean_dec(v___y_5486_);
lean_dec_ref(v___y_5485_);
return v_res_5494_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1(){
_start:
{
lean_object* v___x_5509_; lean_object* v___x_5510_; lean_object* v___x_5511_; lean_object* v___x_5512_; lean_object* v___x_5513_; 
v___x_5509_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_5510_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__0));
v___x_5511_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__2));
v___x_5512_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___boxed), 10, 0);
v___x_5513_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5509_, v___x_5510_, v___x_5511_, v___x_5512_);
return v___x_5513_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___boxed(lean_object* v_a_5514_){
_start:
{
lean_object* v_res_5515_; 
v_res_5515_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1();
return v_res_5515_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3(){
_start:
{
lean_object* v___x_5518_; lean_object* v___x_5519_; lean_object* v___x_5520_; 
v___x_5518_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__2));
v___x_5519_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3___closed__0));
v___x_5520_ = l_Lean_addBuiltinDocString(v___x_5518_, v___x_5519_);
return v___x_5520_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3___boxed(lean_object* v_a_5521_){
_start:
{
lean_object* v_res_5522_; 
v_res_5522_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3();
return v_res_5522_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_VCGen(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Attr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_EvalGround(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_VCGen(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_EvalGround(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Grind_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Grind_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_VCGen(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Attr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_EvalGround(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Grind_Main(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Grind_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_VCGen(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_EvalGround(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Grind_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Grind_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend(builtin);
}
#ifdef __cplusplus
}
#endif
