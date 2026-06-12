// Lean compiler output
// Module: Lean.Elab.Deriving.FromToJson
// Imports: public import Lean.Elab.Deriving.Basic public import Lean.Elab.Deriving.Util
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_syntax_ident(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
lean_object* l_Lean_Name_getString_x21(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Syntax_mkNumLit(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
lean_object* l_Lean_quoteNameMk(lean_object*);
lean_object* lean_string_intercalate(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkNameLit(lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkHeader(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Array_unzip___redArg(lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getStructureFieldsFlattened(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_posLE(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkContext(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedInductiveVal_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinders___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInstanceCmds(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isInductiveCore(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkDiscrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
lean_object* l_Lean_Elab_registerDerivingHandler(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ToJson"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__1 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__1_value),LEAN_SCALAR_PTR_LITERAL(59, 61, 164, 230, 181, 158, 5, 186)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__2 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "FromJson"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(56, 129, 161, 88, 112, 64, 72, 138)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__1 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__1_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "explicitBinder"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__4 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__4_value),LEAN_SCALAR_PTR_LITERAL(49, 119, 193, 23, 170, 93, 183, 238)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__5 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__5_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__6 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__6_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__7 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__7_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "json"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__9 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__9_value;
static lean_once_cell_t l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__10;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__9_value),LEAN_SCALAR_PTR_LITERAL(69, 242, 190, 241, 110, 39, 195, 20)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__11 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__11_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Json"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__12 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__13_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__12_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__13_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__9_value),LEAN_SCALAR_PTR_LITERAL(97, 53, 111, 111, 136, 165, 95, 9)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__13 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__13_value)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__14 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__15 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__15_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__16 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__16_value;
static lean_once_cell_t l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__17;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__12_value),LEAN_SCALAR_PTR_LITERAL(190, 18, 71, 130, 82, 255, 111, 18)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__18 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__18_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__19_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__12_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__19 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__19_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__19_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__20 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__19_value)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__21 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__21_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__21_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__22 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__22_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__20_value),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__22_value)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__23 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__23_value;
static lean_once_cell_t l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__25 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__25_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkJsonField___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "invalid json field name "};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkJsonField___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkJsonField___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Deriving_FromToJson_mkJsonField___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_FromToJson_mkJsonField___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkJsonField(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkJsonField___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term[_]"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(86, 147, 168, 74, 195, 98, 232, 161)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tuple"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 24, 88, 245, 200, 250, 27, 217)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__6_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__9_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Deriving"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__12_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "FromToJson"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__13_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__14_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__14_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(230, 230, 99, 85, 138, 169, 166, 218)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__14_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(62, 248, 136, 255, 117, 192, 201, 101)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__14_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__14_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__15_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__16_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__17_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__16_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__17_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__17_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__18_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__19_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__19_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__19 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__19_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__19_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__20 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__20_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__21 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__21_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__22_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__22_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__21_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__22 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__22_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__22_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__23 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__23_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__23_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__24 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__24_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__21_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__24_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__25 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__25_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__20_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__25_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__26 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__26_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__18_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__26_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__27 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__27_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__15_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__27_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__28 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__28_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__29 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__29_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__30 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__30_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__30_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "toJson"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__32 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__32_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__32_value),LEAN_SCALAR_PTR_LITERAL(112, 200, 227, 76, 90, 242, 6, 135)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__34 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__34_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__35_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__1_value),LEAN_SCALAR_PTR_LITERAL(59, 61, 164, 230, 181, 158, 5, 186)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__35_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__32_value),LEAN_SCALAR_PTR_LITERAL(240, 112, 235, 135, 88, 35, 83, 81)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__35 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__35_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__35_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__36 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__36_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__36_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__37 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__37_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__38 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__38_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__39_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__39_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__39_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__39_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__39_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__38_value),LEAN_SCALAR_PTR_LITERAL(103, 149, 207, 196, 17, 4, 77, 74)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__39 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__39_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__40 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__40_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__41_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__41_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__41_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__41_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__40_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__41 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__41_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__42 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__42_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__43 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__43_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "opt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__44 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__44_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__45;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__44_value),LEAN_SCALAR_PTR_LITERAL(90, 237, 191, 26, 214, 234, 184, 145)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__46 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__46_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__47_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__47_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__12_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__47_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__44_value),LEAN_SCALAR_PTR_LITERAL(118, 32, 40, 211, 171, 119, 108, 21)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__47 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__47_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__47_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__48 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__48_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__48_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__49 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__49_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term_<|_"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__0_value),LEAN_SCALAR_PTR_LITERAL(152, 38, 96, 140, 215, 46, 31, 82)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__1 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__1_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mkObj"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__2 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__3;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__2_value),LEAN_SCALAR_PTR_LITERAL(173, 3, 159, 142, 30, 42, 60, 15)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__4 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__12_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__2_value),LEAN_SCALAR_PTR_LITERAL(249, 119, 229, 103, 93, 90, 238, 17)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__5 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__6 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__7 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__7_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "<|"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__8 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__8_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "List.flatten"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__9 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__9_value;
static lean_once_cell_t l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__10;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__11 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__11_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "flatten"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__12 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__11_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__13_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__12_value),LEAN_SCALAR_PTR_LITERAL(237, 107, 55, 162, 201, 219, 91, 244)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__13 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__13_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__14 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__13_value)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__15 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__16 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__16_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__14_value),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__16_value)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__17 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__17_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__4___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__4(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__5 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__6 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__10___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__1;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a constructor"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__2 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__3;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__4 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__4_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__5 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__5_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__6 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__6_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__7;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___closed__1_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg___lam__0___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg___lam__0___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "explicit"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__1_value_aux_2),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(141, 201, 75, 195, 250, 223, 114, 184)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__1_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__2_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__3_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__4_value_aux_2),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__4 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__4_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__5 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__5_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__7 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__7_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__35_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__23_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__21_value),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__20_value),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__1_value)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__18_value),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__2_value)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__15_value),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__3_value)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__4_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Json.arr"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__6;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "arr"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__7 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__12_value),LEAN_SCALAR_PTR_LITERAL(190, 18, 71, 130, 82, 255, 111, 18)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(138, 3, 113, 92, 128, 159, 5, 71)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__8 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__12_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(231, 213, 164, 217, 10, 137, 183, 122)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__9 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__10 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__9_value)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__11 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__12 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__10_value),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__12_value)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__13 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__13_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term#[_,]"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__14 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__14_value),LEAN_SCALAR_PTR_LITERAL(69, 119, 178, 128, 145, 112, 206, 247)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__15 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__15_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__16 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__16_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__0_value),LEAN_SCALAR_PTR_LITERAL(9, 208, 235, 82, 91, 230, 203, 159)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__1 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__1_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__2 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__2_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__3 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__3_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__4 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(10, 94, 50, 120, 46, 251, 13, 13)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doLetArrow"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 105, 77, 168, 26, 188, 17, 34)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "let"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__6_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__5_value),LEAN_SCALAR_PTR_LITERAL(5, 186, 227, 151, 19, 40, 136, 241)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doIdDecl"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__8_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__7_value),LEAN_SCALAR_PTR_LITERAL(41, 95, 84, 160, 28, 70, 78, 179)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "←"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__9_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "getObjValAs\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__1;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(152, 254, 156, 248, 14, 254, 53, 146)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__12_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(228, 146, 203, 111, 146, 194, 174, 77)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__8_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(130, 168, 60, 255, 153, 218, 88, 77)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Except.mapError"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__9_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__10;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Except"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "mapError"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(238, 113, 136, 33, 237, 151, 233, 210)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__13_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(78, 82, 246, 42, 96, 35, 111, 130)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__13_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__13_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__14_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__15_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__16_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__17_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__17_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__17_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__16_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__17_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__18_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__19_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__19_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__19_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__18_value),LEAN_SCALAR_PTR_LITERAL(209, 134, 40, 160, 122, 195, 31, 223)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__19 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__19_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__20 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__20_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__21;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__20_value),LEAN_SCALAR_PTR_LITERAL(203, 235, 49, 11, 232, 138, 137, 74)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__22 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__22_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term_++_"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__23 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__23_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__23_value),LEAN_SCALAR_PTR_LITERAL(90, 69, 86, 178, 149, 48, 216, 23)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__24 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__24_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "toString"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__25 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__25_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__26;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__25_value),LEAN_SCALAR_PTR_LITERAL(47, 79, 177, 134, 210, 33, 7, 227)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__27 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__27_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ToString"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__28 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__28_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__28_value),LEAN_SCALAR_PTR_LITERAL(30, 202, 174, 203, 16, 186, 159, 168)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__29_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__25_value),LEAN_SCALAR_PTR_LITERAL(206, 210, 39, 124, 69, 192, 37, 107)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__29 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__29_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__29_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__30 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__30_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__31 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__31_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "\": \""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__32 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__32_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "++"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__33 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__33_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__34 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__34_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__34_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__35 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__35_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\".\""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__36 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__36_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "quotedName"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__37 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__37_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__38_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__38_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__38_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__38_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__38_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__38_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__37_value),LEAN_SCALAR_PTR_LITERAL(217, 120, 158, 75, 195, 162, 2, 130)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__38 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__38_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "structInstField"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(50, 77, 20, 88, 28, 210, 230, 84)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "structInstLVal"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(185, 133, 6, 147, 6, 183, 100, 198)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "structInstFieldDef"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__5_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__4_value),LEAN_SCALAR_PTR_LITERAL(81, 102, 39, 227, 176, 252, 65, 103)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "do"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 206, 135, 90, 45, 65, 187, 80)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__1 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__1_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__2 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__2_value),LEAN_SCALAR_PTR_LITERAL(104, 186, 248, 230, 72, 158, 210, 227)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__3 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__3_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__4 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__4_value),LEAN_SCALAR_PTR_LITERAL(93, 115, 138, 230, 225, 195, 43, 46)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__5 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__5_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doReturn"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__6 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__6_value),LEAN_SCALAR_PTR_LITERAL(210, 201, 30, 244, 146, 7, 54, 39)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__7 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__7_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "return"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__8 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__8_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structInst"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__9 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__10_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__10_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__10_value_aux_2),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__9_value),LEAN_SCALAR_PTR_LITERAL(50, 43, 73, 62, 118, 124, 31, 28)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__10 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__10_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__11 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__11_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "structInstFields"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__12 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__13_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__13_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__13_value_aux_2),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__12_value),LEAN_SCALAR_PTR_LITERAL(0, 82, 141, 43, 62, 171, 163, 69)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__13 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__13_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "optEllipsis"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__14 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__15_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__15_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__15_value_aux_2),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__14_value),LEAN_SCALAR_PTR_LITERAL(13, 1, 242, 203, 207, 188, 181, 160)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__15 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__15_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__16 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__16_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "fromJson\?"};
static const lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__0 = (const lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__1;
static const lean_ctor_object l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(3, 54, 193, 250, 66, 68, 188, 53)}};
static const lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__2 = (const lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__2_value;
static const lean_ctor_object l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(56, 129, 161, 88, 112, 64, 72, 138)}};
static const lean_ctor_object l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__3_value_aux_1),((lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 88, 105, 59, 236, 221, 213, 61)}};
static const lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__3 = (const lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__3_value;
static const lean_ctor_object l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__4 = (const lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__4_value;
static const lean_ctor_object l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__5 = (const lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__5_value;
static const lean_string_object l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "term__[_]_!"};
static const lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__6 = (const lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__6_value;
static const lean_ctor_object l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(20, 145, 92, 47, 59, 8, 18, 13)}};
static const lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__7 = (const lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__7_value;
static const lean_string_object l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "jsons"};
static const lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__8 = (const lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__8_value;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__9;
static const lean_ctor_object l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(60, 31, 226, 89, 73, 25, 74, 85)}};
static const lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__10 = (const lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__10_value;
static const lean_string_object l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__11 = (const lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__11_value;
static const lean_ctor_object l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__12 = (const lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__12_value;
static const lean_string_object l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "!"};
static const lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__13 = (const lean_object*)&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__13_value;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__0_value),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__0_value)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__1_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Json.parseCtorFields"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__2_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__3;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "parseCtorFields"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__4 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__4_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__12_value),LEAN_SCALAR_PTR_LITERAL(190, 18, 71, 130, 82, 255, 111, 18)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__5_value_aux_0),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(125, 67, 110, 155, 4, 21, 244, 27)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__5 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__5_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__12_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6_value_aux_1),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(160, 102, 205, 99, 97, 75, 110, 119)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__7 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__7_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__8 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__8_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bind"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__9 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__9_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__10;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(210, 152, 52, 15, 180, 2, 50, 1)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__11 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__11_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bind"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__12 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__12_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(222, 192, 22, 179, 212, 181, 141, 219)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__13_value_aux_0),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(155, 214, 105, 100, 54, 209, 36, 192)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__13 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__13_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__13_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__14 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__14_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__15 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__15_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "termReturn"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__16 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__16_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__17_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__17_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__17_value_aux_2),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__16_value),LEAN_SCALAR_PTR_LITERAL(199, 245, 184, 22, 191, 152, 219, 48)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__17 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__17_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__18 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__18_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__19;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(73, 239, 30, 105, 8, 60, 178, 241)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__20 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__20_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__21 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__21_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__21_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__22_value_aux_0),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(149, 114, 34, 228, 75, 195, 143, 131)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__22 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__22_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__22_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__23 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__23_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__23_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__24 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__24_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "some"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__25 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__25_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__26;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__25_value),LEAN_SCALAR_PTR_LITERAL(37, 202, 7, 33, 103, 74, 114, 212)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__27 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__27_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__21_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__28_value_aux_0),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__25_value),LEAN_SCALAR_PTR_LITERAL(89, 148, 40, 55, 221, 242, 231, 67)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__28 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__28_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__28_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__29 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__29_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__29_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__30 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__30_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchDiscr"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 51, 127, 238, 206, 239, 57, 130)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__1 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__1_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Json.getTag\?"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__2 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__3;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "getTag\?"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__4 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__12_value),LEAN_SCALAR_PTR_LITERAL(190, 18, 71, 130, 82, 255, 111, 18)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__4_value),LEAN_SCALAR_PTR_LITERAL(247, 237, 110, 57, 79, 163, 143, 153)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__5 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__12_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__4_value),LEAN_SCALAR_PTR_LITERAL(26, 233, 182, 93, 166, 19, 81, 50)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__6 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__7 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__8 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__8_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tag"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__9 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__9_value;
static lean_once_cell_t l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__10;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__9_value),LEAN_SCALAR_PTR_LITERAL(242, 132, 79, 115, 245, 174, 114, 146)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__11 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__11_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Except.error"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__12 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__12_value;
static lean_once_cell_t l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__13;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__14 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(238, 113, 136, 33, 237, 151, 233, 210)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__15_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__14_value),LEAN_SCALAR_PTR_LITERAL(132, 223, 190, 30, 132, 210, 24, 71)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__15 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__16 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__16_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__15_value)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__17 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__17_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__18 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__18_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__16_value),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__18_value)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__19 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__19_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "\"no inductive constructor matched\""};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__20 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__20_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "\"no inductive tag found\""};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__21 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__21_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBody(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBody___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__2_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__3_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__4_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__5_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__6 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__6_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__7 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__7_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__8 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__8_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__9 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__9_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "partial"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__10 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBody(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBody___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__0;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(238, 113, 136, 33, 237, 151, 233, 210)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__1_value)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__2_value),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__4_value)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__5_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__6 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__7;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__8 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__9 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__8_value)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__10 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__11 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__9_value),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__11_value)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__12 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mutual"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__21_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___closed__0_value),LEAN_SCALAR_PTR_LITERAL(55, 205, 8, 5, 164, 77, 17, 1)}};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___closed__1 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___closed__1_value;
static const lean_string_object l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___closed__2 = (const lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonMutualBlock_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonMutualBlock_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonMutualBlock(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonMutualBlock___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonMutualBlock_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonMutualBlock_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1___redArg___closed__0;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__0_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(195, 196, 35, 37, 101, 57, 52, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__0_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__32_value),LEAN_SCALAR_PTR_LITERAL(104, 196, 195, 210, 249, 49, 41, 151)}};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__2 = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__3;
static const lean_string_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__4 = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "fromJson"};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(195, 196, 35, 37, 101, 57, 52, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(45, 186, 66, 232, 156, 87, 3, 205)}};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__0_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__0_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__0_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__1_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__1_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__1_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__2_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__2_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__2_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__3_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__2_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__3_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__3_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__4_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__3_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__4_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__4_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__5_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__4_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__5_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__5_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__6_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__5_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(202, 58, 65, 192, 197, 114, 188, 72)}};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__6_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__6_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__7_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__6_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(50, 189, 2, 165, 47, 51, 78, 0)}};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__7_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__7_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__8_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__7_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(51, 68, 99, 34, 115, 76, 88, 121)}};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__8_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__8_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__9_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__8_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(30, 192, 130, 50, 180, 113, 236, 80)}};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__9_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__9_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__10_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__9_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(236, 226, 103, 203, 38, 155, 77, 185)}};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__10_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__10_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__11_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__10_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(206, 106, 162, 80, 250, 232, 85, 229)}};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__11_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__11_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__12_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__11_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(134, 243, 189, 201, 94, 158, 134, 121)}};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__12_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__12_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__13_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__13_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__13_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__14_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__12_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__13_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(203, 157, 20, 14, 91, 116, 229, 84)}};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__14_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__14_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__15_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__15_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__15_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__16_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__14_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__15_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(142, 166, 56, 153, 109, 155, 101, 207)}};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__16_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__16_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__17_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__16_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(55, 139, 31, 31, 134, 44, 148, 170)}};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__17_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__17_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__18_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__17_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(57, 244, 122, 20, 148, 37, 25, 147)}};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__18_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__18_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__19_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__18_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(127, 114, 158, 70, 153, 110, 255, 193)}};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__19_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__19_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__20_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__19_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(75, 129, 154, 176, 112, 107, 146, 211)}};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__20_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__20_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__21_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__21_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__22_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__22_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__22_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__23_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__23_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__24_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__24_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__24_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__25_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__25_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__26_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__26_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader(lean_object* v_indVal_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_14_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__2));
v___x_15_ = lean_unsigned_to_nat(1u);
v___x_16_ = l_Lean_Elab_Deriving_mkHeader(v___x_14_, v___x_15_, v_indVal_6_, v_a_7_, v_a_8_, v_a_9_, v_a_10_, v_a_11_, v_a_12_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___boxed(lean_object* v_indVal_17_, lean_object* v_a_18_, lean_object* v_a_19_, lean_object* v_a_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_, lean_object* v_a_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader(v_indVal_17_, v_a_18_, v_a_19_, v_a_20_, v_a_21_, v_a_22_, v_a_23_);
lean_dec(v_a_23_);
lean_dec_ref(v_a_22_);
lean_dec(v_a_21_);
lean_dec_ref(v_a_20_);
lean_dec(v_a_19_);
lean_dec_ref(v_a_18_);
return v_res_25_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__10(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__9));
v___x_44_ = l_String_toRawSubstring_x27(v___x_43_);
return v___x_44_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__17(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__12));
v___x_59_ = l_String_toRawSubstring_x27(v___x_58_);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24(void){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = l_Array_mkArray0(lean_box(0));
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader(lean_object* v_indVal_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_86_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__1));
v___x_87_ = lean_unsigned_to_nat(0u);
v___x_88_ = l_Lean_Elab_Deriving_mkHeader(v___x_86_, v___x_87_, v_indVal_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_, v_a_83_, v_a_84_);
if (lean_obj_tag(v___x_88_) == 0)
{
lean_object* v_a_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_136_; 
v_a_89_ = lean_ctor_get(v___x_88_, 0);
v_isSharedCheck_136_ = !lean_is_exclusive(v___x_88_);
if (v_isSharedCheck_136_ == 0)
{
v___x_91_ = v___x_88_;
v_isShared_92_ = v_isSharedCheck_136_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_a_89_);
lean_dec(v___x_88_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_136_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v_ref_93_; lean_object* v_quotContext_94_; lean_object* v_currMacroScope_95_; uint8_t v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v_binders_118_; lean_object* v_argNames_119_; lean_object* v_targetNames_120_; lean_object* v_targetType_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_135_; 
v_ref_93_ = lean_ctor_get(v_a_83_, 5);
v_quotContext_94_ = lean_ctor_get(v_a_83_, 10);
v_currMacroScope_95_ = lean_ctor_get(v_a_83_, 11);
v___x_96_ = 0;
v___x_97_ = l_Lean_SourceInfo_fromRef(v_ref_93_, v___x_96_);
v___x_98_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__5));
v___x_99_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__6));
lean_inc_n(v___x_97_, 7);
v___x_100_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_97_);
lean_ctor_set(v___x_100_, 1, v___x_99_);
v___x_101_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_102_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__10, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__10_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__10);
v___x_103_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__11));
lean_inc_n(v_currMacroScope_95_, 2);
lean_inc_n(v_quotContext_94_, 2);
v___x_104_ = l_Lean_addMacroScope(v_quotContext_94_, v___x_103_, v_currMacroScope_95_);
v___x_105_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__15));
v___x_106_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_106_, 0, v___x_97_);
lean_ctor_set(v___x_106_, 1, v___x_102_);
lean_ctor_set(v___x_106_, 2, v___x_104_);
lean_ctor_set(v___x_106_, 3, v___x_105_);
v___x_107_ = l_Lean_Syntax_node1(v___x_97_, v___x_101_, v___x_106_);
v___x_108_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__16));
v___x_109_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_109_, 0, v___x_97_);
lean_ctor_set(v___x_109_, 1, v___x_108_);
v___x_110_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__17, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__17_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__17);
v___x_111_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__18));
v___x_112_ = l_Lean_addMacroScope(v_quotContext_94_, v___x_111_, v_currMacroScope_95_);
v___x_113_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__23));
v___x_114_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_114_, 0, v___x_97_);
lean_ctor_set(v___x_114_, 1, v___x_110_);
lean_ctor_set(v___x_114_, 2, v___x_112_);
lean_ctor_set(v___x_114_, 3, v___x_113_);
v___x_115_ = l_Lean_Syntax_node2(v___x_97_, v___x_101_, v___x_109_, v___x_114_);
v___x_116_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24);
v___x_117_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_117_, 0, v___x_97_);
lean_ctor_set(v___x_117_, 1, v___x_101_);
lean_ctor_set(v___x_117_, 2, v___x_116_);
v_binders_118_ = lean_ctor_get(v_a_89_, 0);
v_argNames_119_ = lean_ctor_get(v_a_89_, 1);
v_targetNames_120_ = lean_ctor_get(v_a_89_, 2);
v_targetType_121_ = lean_ctor_get(v_a_89_, 3);
v_isSharedCheck_135_ = !lean_is_exclusive(v_a_89_);
if (v_isSharedCheck_135_ == 0)
{
v___x_123_ = v_a_89_;
v_isShared_124_ = v_isSharedCheck_135_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_targetType_121_);
lean_inc(v_targetNames_120_);
lean_inc(v_argNames_119_);
lean_inc(v_binders_118_);
lean_dec(v_a_89_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_135_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_130_; 
v___x_125_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__25));
lean_inc(v___x_97_);
v___x_126_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_126_, 0, v___x_97_);
lean_ctor_set(v___x_126_, 1, v___x_125_);
v___x_127_ = l_Lean_Syntax_node5(v___x_97_, v___x_98_, v___x_100_, v___x_107_, v___x_115_, v___x_117_, v___x_126_);
v___x_128_ = lean_array_push(v_binders_118_, v___x_127_);
if (v_isShared_124_ == 0)
{
lean_ctor_set(v___x_123_, 0, v___x_128_);
v___x_130_ = v___x_123_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v___x_128_);
lean_ctor_set(v_reuseFailAlloc_134_, 1, v_argNames_119_);
lean_ctor_set(v_reuseFailAlloc_134_, 2, v_targetNames_120_);
lean_ctor_set(v_reuseFailAlloc_134_, 3, v_targetType_121_);
v___x_130_ = v_reuseFailAlloc_134_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
lean_object* v___x_132_; 
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 0, v___x_130_);
v___x_132_ = v___x_91_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v___x_130_);
v___x_132_ = v_reuseFailAlloc_133_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
return v___x_132_;
}
}
}
}
}
else
{
return v___x_88_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___boxed(lean_object* v_indVal_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader(v_indVal_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_);
lean_dec(v_a_143_);
lean_dec_ref(v_a_142_);
lean_dec(v_a_141_);
lean_dec_ref(v_a_140_);
lean_dec(v_a_139_);
lean_dec_ref(v_a_138_);
return v_res_145_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_146_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_147_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__0);
v___x_148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_148_, 0, v___x_147_);
return v___x_148_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_149_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__1);
v___x_150_ = lean_unsigned_to_nat(0u);
v___x_151_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
lean_ctor_set(v___x_151_, 1, v___x_150_);
lean_ctor_set(v___x_151_, 2, v___x_150_);
lean_ctor_set(v___x_151_, 3, v___x_150_);
lean_ctor_set(v___x_151_, 4, v___x_149_);
lean_ctor_set(v___x_151_, 5, v___x_149_);
lean_ctor_set(v___x_151_, 6, v___x_149_);
lean_ctor_set(v___x_151_, 7, v___x_149_);
lean_ctor_set(v___x_151_, 8, v___x_149_);
lean_ctor_set(v___x_151_, 9, v___x_149_);
return v___x_151_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_152_ = lean_unsigned_to_nat(32u);
v___x_153_ = lean_mk_empty_array_with_capacity(v___x_152_);
v___x_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_154_, 0, v___x_153_);
return v___x_154_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_155_ = ((size_t)5ULL);
v___x_156_ = lean_unsigned_to_nat(0u);
v___x_157_ = lean_unsigned_to_nat(32u);
v___x_158_ = lean_mk_empty_array_with_capacity(v___x_157_);
v___x_159_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__3);
v___x_160_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_160_, 0, v___x_159_);
lean_ctor_set(v___x_160_, 1, v___x_158_);
lean_ctor_set(v___x_160_, 2, v___x_156_);
lean_ctor_set(v___x_160_, 3, v___x_156_);
lean_ctor_set_usize(v___x_160_, 4, v___x_155_);
return v___x_160_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_161_ = lean_box(1);
v___x_162_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__4);
v___x_163_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__1);
v___x_164_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
lean_ctor_set(v___x_164_, 1, v___x_162_);
lean_ctor_set(v___x_164_, 2, v___x_161_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0(lean_object* v_msgData_165_, lean_object* v___y_166_, lean_object* v___y_167_){
_start:
{
lean_object* v___x_169_; lean_object* v_env_170_; lean_object* v_options_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_169_ = lean_st_ref_get(v___y_167_);
v_env_170_ = lean_ctor_get(v___x_169_, 0);
lean_inc_ref(v_env_170_);
lean_dec(v___x_169_);
v_options_171_ = lean_ctor_get(v___y_166_, 2);
v___x_172_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__2);
v___x_173_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_171_);
v___x_174_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_174_, 0, v_env_170_);
lean_ctor_set(v___x_174_, 1, v___x_172_);
lean_ctor_set(v___x_174_, 2, v___x_173_);
lean_ctor_set(v___x_174_, 3, v_options_171_);
v___x_175_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
lean_ctor_set(v___x_175_, 1, v_msgData_165_);
v___x_176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_176_, 0, v___x_175_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0___boxed(lean_object* v_msgData_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0(v_msgData_177_, v___y_178_, v___y_179_);
lean_dec(v___y_179_);
lean_dec_ref(v___y_178_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0___redArg(lean_object* v_msg_182_, lean_object* v___y_183_, lean_object* v___y_184_){
_start:
{
lean_object* v_ref_186_; lean_object* v___x_187_; lean_object* v_a_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_196_; 
v_ref_186_ = lean_ctor_get(v___y_183_, 5);
v___x_187_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0_spec__0(v_msg_182_, v___y_183_, v___y_184_);
v_a_188_ = lean_ctor_get(v___x_187_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v___x_187_);
if (v_isSharedCheck_196_ == 0)
{
v___x_190_ = v___x_187_;
v_isShared_191_ = v_isSharedCheck_196_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_a_188_);
lean_dec(v___x_187_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_196_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_192_; lean_object* v___x_194_; 
lean_inc(v_ref_186_);
v___x_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_192_, 0, v_ref_186_);
lean_ctor_set(v___x_192_, 1, v_a_188_);
if (v_isShared_191_ == 0)
{
lean_ctor_set_tag(v___x_190_, 1);
lean_ctor_set(v___x_190_, 0, v___x_192_);
v___x_194_ = v___x_190_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v___x_192_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0___redArg___boxed(lean_object* v_msg_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0___redArg(v_msg_197_, v___y_198_, v___y_199_);
lean_dec(v___y_199_);
lean_dec_ref(v___y_198_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__1(lean_object* v_s_202_, lean_object* v_pos_203_){
_start:
{
lean_object* v_str_204_; lean_object* v_startInclusive_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; uint8_t v___x_209_; 
v_str_204_ = lean_ctor_get(v_s_202_, 0);
v_startInclusive_205_ = lean_ctor_get(v_s_202_, 1);
v___x_206_ = lean_nat_add(v_startInclusive_205_, v_pos_203_);
v___x_207_ = lean_nat_sub(v___x_206_, v_startInclusive_205_);
v___x_208_ = lean_unsigned_to_nat(0u);
v___x_209_ = lean_nat_dec_eq(v___x_207_, v___x_208_);
if (v___x_209_ == 0)
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; uint32_t v___x_215_; uint32_t v___x_216_; uint8_t v___x_217_; 
lean_inc(v_startInclusive_205_);
lean_inc_ref(v_str_204_);
v___x_210_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_210_, 0, v_str_204_);
lean_ctor_set(v___x_210_, 1, v_startInclusive_205_);
lean_ctor_set(v___x_210_, 2, v___x_206_);
v___x_211_ = lean_unsigned_to_nat(1u);
v___x_212_ = lean_nat_sub(v___x_207_, v___x_211_);
lean_dec(v___x_207_);
v___x_213_ = l_String_Slice_posLE(v___x_210_, v___x_212_);
lean_dec_ref_known(v___x_210_, 3);
v___x_214_ = lean_nat_add(v_startInclusive_205_, v___x_213_);
v___x_215_ = lean_string_utf8_get_fast(v_str_204_, v___x_214_);
lean_dec(v___x_214_);
v___x_216_ = 63;
v___x_217_ = lean_uint32_dec_eq(v___x_215_, v___x_216_);
if (v___x_217_ == 0)
{
lean_dec(v___x_213_);
return v_pos_203_;
}
else
{
uint8_t v___x_218_; 
v___x_218_ = lean_nat_dec_lt(v___x_213_, v_pos_203_);
if (v___x_218_ == 0)
{
lean_dec(v___x_213_);
return v_pos_203_;
}
else
{
lean_dec(v_pos_203_);
v_pos_203_ = v___x_213_;
goto _start;
}
}
}
else
{
lean_dec(v___x_207_);
lean_dec(v___x_206_);
return v_pos_203_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__1___boxed(lean_object* v_s_220_, lean_object* v_pos_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_String_Slice_Pos_revSkipWhile___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__1(v_s_220_, v_pos_221_);
lean_dec_ref(v_s_220_);
return v_res_222_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_FromToJson_mkJsonField___closed__1(void){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_224_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkJsonField___closed__0));
v___x_225_ = l_Lean_stringToMessageData(v___x_224_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkJsonField(lean_object* v_n_226_, lean_object* v_a_227_, lean_object* v_a_228_){
_start:
{
lean_object* v___y_231_; lean_object* v___y_232_; 
if (lean_obj_tag(v_n_226_) == 1)
{
lean_object* v_pre_237_; 
v_pre_237_ = lean_ctor_get(v_n_226_, 0);
if (lean_obj_tag(v_pre_237_) == 0)
{
lean_object* v_str_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v_s_u2081_243_; uint8_t v___y_245_; uint8_t v___x_251_; 
v_str_238_ = lean_ctor_get(v_n_226_, 1);
lean_inc_ref_n(v_str_238_, 2);
lean_dec_ref_known(v_n_226_, 2);
v___x_239_ = lean_unsigned_to_nat(0u);
v___x_240_ = lean_string_utf8_byte_size(v_str_238_);
v___x_241_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_241_, 0, v_str_238_);
lean_ctor_set(v___x_241_, 1, v___x_239_);
lean_ctor_set(v___x_241_, 2, v___x_240_);
v___x_242_ = l_String_Slice_Pos_revSkipWhile___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__1(v___x_241_, v___x_240_);
lean_dec_ref_known(v___x_241_, 3);
v_s_u2081_243_ = lean_string_utf8_extract(v_str_238_, v___x_239_, v___x_242_);
lean_dec(v___x_242_);
v___x_251_ = lean_string_dec_eq(v_str_238_, v_s_u2081_243_);
lean_dec_ref(v_str_238_);
if (v___x_251_ == 0)
{
uint8_t v___x_252_; 
v___x_252_ = 1;
v___y_245_ = v___x_252_;
goto v___jp_244_;
}
else
{
uint8_t v___x_253_; 
v___x_253_ = 0;
v___y_245_ = v___x_253_;
goto v___jp_244_;
}
v___jp_244_:
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
v___x_246_ = lean_box(2);
v___x_247_ = l_Lean_Syntax_mkStrLit(v_s_u2081_243_, v___x_246_);
v___x_248_ = lean_box(v___y_245_);
v___x_249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_248_);
lean_ctor_set(v___x_249_, 1, v___x_247_);
v___x_250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_250_, 0, v___x_249_);
return v___x_250_;
}
}
else
{
v___y_231_ = v_a_227_;
v___y_232_ = v_a_228_;
goto v___jp_230_;
}
}
else
{
v___y_231_ = v_a_227_;
v___y_232_ = v_a_228_;
goto v___jp_230_;
}
v___jp_230_:
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_233_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkJsonField___closed__1, &l_Lean_Elab_Deriving_FromToJson_mkJsonField___closed__1_once, _init_l_Lean_Elab_Deriving_FromToJson_mkJsonField___closed__1);
v___x_234_ = l_Lean_MessageData_ofName(v_n_226_);
v___x_235_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_235_, 0, v___x_233_);
lean_ctor_set(v___x_235_, 1, v___x_234_);
v___x_236_ = l_Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0___redArg(v___x_235_, v___y_231_, v___y_232_);
return v___x_236_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkJsonField___boxed(lean_object* v_n_254_, lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l_Lean_Elab_Deriving_FromToJson_mkJsonField(v_n_254_, v_a_255_, v_a_256_);
lean_dec(v_a_256_);
lean_dec_ref(v_a_255_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0(lean_object* v_00_u03b1_259_, lean_object* v_msg_260_, lean_object* v___y_261_, lean_object* v___y_262_){
_start:
{
lean_object* v___x_264_; 
v___x_264_ = l_Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0___redArg(v_msg_260_, v___y_261_, v___y_262_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0___boxed(lean_object* v_00_u03b1_265_, lean_object* v_msg_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l_Lean_throwError___at___00Lean_Elab_Deriving_FromToJson_mkJsonField_spec__0(v_00_u03b1_265_, v_msg_266_, v___y_267_, v___y_268_);
lean_dec(v___y_268_);
lean_dec_ref(v___y_267_);
return v_res_270_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10(void){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__9));
v___x_292_ = l_String_toRawSubstring_x27(v___x_291_);
return v___x_292_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33(void){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_345_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__32));
v___x_346_ = l_String_toRawSubstring_x27(v___x_345_);
return v___x_346_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__45(void){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_374_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__44));
v___x_375_ = l_String_toRawSubstring_x27(v___x_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg(lean_object* v_header_388_, size_t v_sz_389_, size_t v_i_390_, lean_object* v_bs_391_, lean_object* v___y_392_, lean_object* v___y_393_){
_start:
{
uint8_t v___x_395_; 
v___x_395_ = lean_usize_dec_lt(v_i_390_, v_sz_389_);
if (v___x_395_ == 0)
{
lean_object* v___x_396_; 
v___x_396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_396_, 0, v_bs_391_);
return v___x_396_;
}
else
{
lean_object* v_v_397_; lean_object* v___x_398_; 
v_v_397_ = lean_array_uget(v_bs_391_, v_i_390_);
lean_inc(v_v_397_);
v___x_398_ = l_Lean_Elab_Deriving_FromToJson_mkJsonField(v_v_397_, v___y_392_, v___y_393_);
if (lean_obj_tag(v___x_398_) == 0)
{
lean_object* v_a_399_; lean_object* v_fst_400_; lean_object* v_snd_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_487_; 
v_a_399_ = lean_ctor_get(v___x_398_, 0);
lean_inc(v_a_399_);
lean_dec_ref_known(v___x_398_, 1);
v_fst_400_ = lean_ctor_get(v_a_399_, 0);
v_snd_401_ = lean_ctor_get(v_a_399_, 1);
v_isSharedCheck_487_ = !lean_is_exclusive(v_a_399_);
if (v_isSharedCheck_487_ == 0)
{
v___x_403_ = v_a_399_;
v_isShared_404_ = v_isSharedCheck_487_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_snd_401_);
lean_inc(v_fst_400_);
lean_dec(v_a_399_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_487_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v_targetNames_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v_bs_x27_408_; lean_object* v_a_410_; lean_object* v___x_415_; lean_object* v___x_416_; uint8_t v___x_417_; 
v_targetNames_405_ = lean_ctor_get(v_header_388_, 2);
v___x_406_ = lean_box(0);
v___x_407_ = lean_unsigned_to_nat(0u);
v_bs_x27_408_ = lean_array_uset(v_bs_391_, v_i_390_, v___x_407_);
v___x_415_ = lean_array_get_borrowed(v___x_406_, v_targetNames_405_, v___x_407_);
lean_inc(v___x_415_);
v___x_416_ = lean_mk_syntax_ident(v___x_415_);
v___x_417_ = lean_unbox(v_fst_400_);
if (v___x_417_ == 0)
{
lean_object* v_ref_418_; lean_object* v_quotContext_419_; lean_object* v_currMacroScope_420_; uint8_t v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_426_; 
v_ref_418_ = lean_ctor_get(v___y_392_, 5);
v_quotContext_419_ = lean_ctor_get(v___y_392_, 10);
v_currMacroScope_420_ = lean_ctor_get(v___y_392_, 11);
v___x_421_ = lean_unbox(v_fst_400_);
lean_dec(v_fst_400_);
v___x_422_ = l_Lean_SourceInfo_fromRef(v_ref_418_, v___x_421_);
v___x_423_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__1));
v___x_424_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__2));
lean_inc(v___x_422_);
if (v_isShared_404_ == 0)
{
lean_ctor_set_tag(v___x_403_, 2);
lean_ctor_set(v___x_403_, 1, v___x_424_);
lean_ctor_set(v___x_403_, 0, v___x_422_);
v___x_426_ = v___x_403_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v___x_422_);
lean_ctor_set(v_reuseFailAlloc_465_, 1, v___x_424_);
v___x_426_ = v_reuseFailAlloc_465_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_427_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_428_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__4));
v___x_429_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__6));
v___x_430_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__6));
lean_inc_n(v___x_422_, 17);
v___x_431_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_431_, 0, v___x_422_);
lean_ctor_set(v___x_431_, 1, v___x_430_);
v___x_432_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__8));
v___x_433_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10);
lean_inc_n(v_currMacroScope_420_, 2);
lean_inc_n(v_quotContext_419_, 2);
v___x_434_ = l_Lean_addMacroScope(v_quotContext_419_, v___x_406_, v_currMacroScope_420_);
v___x_435_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__28));
v___x_436_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_436_, 0, v___x_422_);
lean_ctor_set(v___x_436_, 1, v___x_433_);
lean_ctor_set(v___x_436_, 2, v___x_434_);
lean_ctor_set(v___x_436_, 3, v___x_435_);
v___x_437_ = l_Lean_Syntax_node1(v___x_422_, v___x_432_, v___x_436_);
v___x_438_ = l_Lean_Syntax_node2(v___x_422_, v___x_429_, v___x_431_, v___x_437_);
v___x_439_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__29));
v___x_440_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_440_, 0, v___x_422_);
lean_ctor_set(v___x_440_, 1, v___x_439_);
v___x_441_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_442_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33);
v___x_443_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__34));
v___x_444_ = l_Lean_addMacroScope(v_quotContext_419_, v___x_443_, v_currMacroScope_420_);
v___x_445_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__37));
v___x_446_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_446_, 0, v___x_422_);
lean_ctor_set(v___x_446_, 1, v___x_442_);
lean_ctor_set(v___x_446_, 2, v___x_444_);
lean_ctor_set(v___x_446_, 3, v___x_445_);
v___x_447_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__39));
v___x_448_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__41));
v___x_449_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__25));
v___x_450_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_450_, 0, v___x_422_);
lean_ctor_set(v___x_450_, 1, v___x_449_);
lean_inc_ref(v___x_450_);
lean_inc(v___x_438_);
v___x_451_ = l_Lean_Syntax_node3(v___x_422_, v___x_448_, v___x_438_, v___x_416_, v___x_450_);
v___x_452_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__42));
v___x_453_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_453_, 0, v___x_422_);
lean_ctor_set(v___x_453_, 1, v___x_452_);
v___x_454_ = lean_mk_syntax_ident(v_v_397_);
v___x_455_ = l_Lean_Syntax_node3(v___x_422_, v___x_447_, v___x_451_, v___x_453_, v___x_454_);
v___x_456_ = l_Lean_Syntax_node1(v___x_422_, v___x_427_, v___x_455_);
v___x_457_ = l_Lean_Syntax_node2(v___x_422_, v___x_441_, v___x_446_, v___x_456_);
v___x_458_ = l_Lean_Syntax_node1(v___x_422_, v___x_427_, v___x_457_);
v___x_459_ = l_Lean_Syntax_node3(v___x_422_, v___x_427_, v_snd_401_, v___x_440_, v___x_458_);
v___x_460_ = l_Lean_Syntax_node3(v___x_422_, v___x_428_, v___x_438_, v___x_459_, v___x_450_);
v___x_461_ = l_Lean_Syntax_node1(v___x_422_, v___x_427_, v___x_460_);
v___x_462_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__43));
v___x_463_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_463_, 0, v___x_422_);
lean_ctor_set(v___x_463_, 1, v___x_462_);
v___x_464_ = l_Lean_Syntax_node3(v___x_422_, v___x_423_, v___x_426_, v___x_461_, v___x_463_);
v_a_410_ = v___x_464_;
goto v___jp_409_;
}
}
else
{
lean_object* v_ref_466_; lean_object* v_quotContext_467_; lean_object* v_currMacroScope_468_; uint8_t v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_481_; 
lean_dec(v_fst_400_);
v_ref_466_ = lean_ctor_get(v___y_392_, 5);
v_quotContext_467_ = lean_ctor_get(v___y_392_, 10);
v_currMacroScope_468_ = lean_ctor_get(v___y_392_, 11);
v___x_469_ = 0;
v___x_470_ = l_Lean_SourceInfo_fromRef(v_ref_466_, v___x_469_);
v___x_471_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_472_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__45, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__45_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__45);
v___x_473_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__46));
lean_inc(v_currMacroScope_468_);
lean_inc(v_quotContext_467_);
v___x_474_ = l_Lean_addMacroScope(v_quotContext_467_, v___x_473_, v_currMacroScope_468_);
v___x_475_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__49));
lean_inc_n(v___x_470_, 2);
v___x_476_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_476_, 0, v___x_470_);
lean_ctor_set(v___x_476_, 1, v___x_472_);
lean_ctor_set(v___x_476_, 2, v___x_474_);
lean_ctor_set(v___x_476_, 3, v___x_475_);
v___x_477_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_478_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__39));
v___x_479_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__42));
if (v_isShared_404_ == 0)
{
lean_ctor_set_tag(v___x_403_, 2);
lean_ctor_set(v___x_403_, 1, v___x_479_);
lean_ctor_set(v___x_403_, 0, v___x_470_);
v___x_481_ = v___x_403_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v___x_470_);
lean_ctor_set(v_reuseFailAlloc_486_, 1, v___x_479_);
v___x_481_ = v_reuseFailAlloc_486_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_482_ = lean_mk_syntax_ident(v_v_397_);
lean_inc_n(v___x_470_, 2);
v___x_483_ = l_Lean_Syntax_node3(v___x_470_, v___x_478_, v___x_416_, v___x_481_, v___x_482_);
v___x_484_ = l_Lean_Syntax_node2(v___x_470_, v___x_477_, v_snd_401_, v___x_483_);
v___x_485_ = l_Lean_Syntax_node2(v___x_470_, v___x_471_, v___x_476_, v___x_484_);
v_a_410_ = v___x_485_;
goto v___jp_409_;
}
}
v___jp_409_:
{
size_t v___x_411_; size_t v___x_412_; lean_object* v___x_413_; 
v___x_411_ = ((size_t)1ULL);
v___x_412_ = lean_usize_add(v_i_390_, v___x_411_);
v___x_413_ = lean_array_uset(v_bs_x27_408_, v_i_390_, v_a_410_);
v_i_390_ = v___x_412_;
v_bs_391_ = v___x_413_;
goto _start;
}
}
}
else
{
lean_object* v_a_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_495_; 
lean_dec(v_v_397_);
lean_dec_ref(v_bs_391_);
v_a_488_ = lean_ctor_get(v___x_398_, 0);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_495_ == 0)
{
v___x_490_ = v___x_398_;
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_a_488_);
lean_dec(v___x_398_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_493_; 
if (v_isShared_491_ == 0)
{
v___x_493_ = v___x_490_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_a_488_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
return v___x_493_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___boxed(lean_object* v_header_496_, lean_object* v_sz_497_, lean_object* v_i_498_, lean_object* v_bs_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_){
_start:
{
size_t v_sz_boxed_503_; size_t v_i_boxed_504_; lean_object* v_res_505_; 
v_sz_boxed_503_ = lean_unbox_usize(v_sz_497_);
lean_dec(v_sz_497_);
v_i_boxed_504_ = lean_unbox_usize(v_i_498_);
lean_dec(v_i_498_);
v_res_505_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg(v_header_496_, v_sz_boxed_503_, v_i_boxed_504_, v_bs_499_, v___y_500_, v___y_501_);
lean_dec(v___y_501_);
lean_dec_ref(v___y_500_);
lean_dec_ref(v_header_496_);
return v_res_505_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__3(void){
_start:
{
lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_510_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__2));
v___x_511_ = l_String_toRawSubstring_x27(v___x_510_);
return v___x_511_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__10(void){
_start:
{
lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_526_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__9));
v___x_527_ = l_String_toRawSubstring_x27(v___x_526_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct(lean_object* v_header_544_, lean_object* v_indName_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_){
_start:
{
lean_object* v___x_553_; lean_object* v_env_554_; uint8_t v___x_555_; lean_object* v___x_556_; size_t v_sz_557_; size_t v___x_558_; lean_object* v___x_559_; 
v___x_553_ = lean_st_ref_get(v_a_551_);
v_env_554_ = lean_ctor_get(v___x_553_, 0);
lean_inc_ref(v_env_554_);
lean_dec(v___x_553_);
v___x_555_ = 0;
v___x_556_ = l_Lean_getStructureFieldsFlattened(v_env_554_, v_indName_545_, v___x_555_);
v_sz_557_ = lean_array_size(v___x_556_);
v___x_558_ = ((size_t)0ULL);
v___x_559_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg(v_header_544_, v_sz_557_, v___x_558_, v___x_556_, v_a_550_, v_a_551_);
if (lean_obj_tag(v___x_559_) == 0)
{
lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_600_; 
v_a_560_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_600_ == 0)
{
v___x_562_ = v___x_559_;
v_isShared_563_ = v_isSharedCheck_600_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___x_559_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_600_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v_ref_564_; lean_object* v_quotContext_565_; lean_object* v_currMacroScope_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_598_; 
v_ref_564_ = lean_ctor_get(v_a_550_, 5);
v_quotContext_565_ = lean_ctor_get(v_a_550_, 10);
v_currMacroScope_566_ = lean_ctor_get(v_a_550_, 11);
v___x_567_ = l_Lean_SourceInfo_fromRef(v_ref_564_, v___x_555_);
v___x_568_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__1));
v___x_569_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__3, &l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__3_once, _init_l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__3);
v___x_570_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__4));
lean_inc_n(v_currMacroScope_566_, 2);
lean_inc_n(v_quotContext_565_, 2);
v___x_571_ = l_Lean_addMacroScope(v_quotContext_565_, v___x_570_, v_currMacroScope_566_);
v___x_572_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__7));
lean_inc_n(v___x_567_, 9);
v___x_573_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_573_, 0, v___x_567_);
lean_ctor_set(v___x_573_, 1, v___x_569_);
lean_ctor_set(v___x_573_, 2, v___x_571_);
lean_ctor_set(v___x_573_, 3, v___x_572_);
v___x_574_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__8));
v___x_575_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_575_, 0, v___x_567_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
v___x_576_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_577_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__10, &l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__10_once, _init_l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__10);
v___x_578_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__13));
v___x_579_ = l_Lean_addMacroScope(v_quotContext_565_, v___x_578_, v_currMacroScope_566_);
v___x_580_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__17));
v___x_581_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_581_, 0, v___x_567_);
lean_ctor_set(v___x_581_, 1, v___x_577_);
lean_ctor_set(v___x_581_, 2, v___x_579_);
lean_ctor_set(v___x_581_, 3, v___x_580_);
v___x_582_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_583_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__1));
v___x_584_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__2));
v___x_585_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_585_, 0, v___x_567_);
lean_ctor_set(v___x_585_, 1, v___x_584_);
v___x_586_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24);
v___x_587_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__29));
v___x_588_ = l_Lean_Syntax_SepArray_ofElems(v___x_587_, v_a_560_);
lean_dec(v_a_560_);
v___x_589_ = l_Array_append___redArg(v___x_586_, v___x_588_);
lean_dec_ref(v___x_588_);
v___x_590_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_590_, 0, v___x_567_);
lean_ctor_set(v___x_590_, 1, v___x_582_);
lean_ctor_set(v___x_590_, 2, v___x_589_);
v___x_591_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__43));
v___x_592_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_592_, 0, v___x_567_);
lean_ctor_set(v___x_592_, 1, v___x_591_);
v___x_593_ = l_Lean_Syntax_node3(v___x_567_, v___x_583_, v___x_585_, v___x_590_, v___x_592_);
v___x_594_ = l_Lean_Syntax_node1(v___x_567_, v___x_582_, v___x_593_);
v___x_595_ = l_Lean_Syntax_node2(v___x_567_, v___x_576_, v___x_581_, v___x_594_);
v___x_596_ = l_Lean_Syntax_node3(v___x_567_, v___x_568_, v___x_573_, v___x_575_, v___x_595_);
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 0, v___x_596_);
v___x_598_ = v___x_562_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v___x_596_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
}
else
{
lean_object* v_a_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_608_; 
v_a_601_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_608_ == 0)
{
v___x_603_ = v___x_559_;
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_a_601_);
lean_dec(v___x_559_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_606_; 
if (v_isShared_604_ == 0)
{
v___x_606_ = v___x_603_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_a_601_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___boxed(lean_object* v_header_609_, lean_object* v_indName_610_, lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_){
_start:
{
lean_object* v_res_618_; 
v_res_618_ = l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct(v_header_609_, v_indName_610_, v_a_611_, v_a_612_, v_a_613_, v_a_614_, v_a_615_, v_a_616_);
lean_dec(v_a_616_);
lean_dec_ref(v_a_615_);
lean_dec(v_a_614_);
lean_dec_ref(v_a_613_);
lean_dec(v_a_612_);
lean_dec_ref(v_a_611_);
lean_dec_ref(v_header_609_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0(lean_object* v_header_619_, size_t v_sz_620_, size_t v_i_621_, lean_object* v_bs_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_){
_start:
{
lean_object* v___x_630_; 
v___x_630_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg(v_header_619_, v_sz_620_, v_i_621_, v_bs_622_, v___y_627_, v___y_628_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___boxed(lean_object* v_header_631_, lean_object* v_sz_632_, lean_object* v_i_633_, lean_object* v_bs_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_){
_start:
{
size_t v_sz_boxed_642_; size_t v_i_boxed_643_; lean_object* v_res_644_; 
v_sz_boxed_642_ = lean_unbox_usize(v_sz_632_);
lean_dec(v_sz_632_);
v_i_boxed_643_ = lean_unbox_usize(v_i_633_);
lean_dec(v_i_633_);
v_res_644_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0(v_header_631_, v_sz_boxed_642_, v_i_boxed_643_, v_bs_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_);
lean_dec(v___y_640_);
lean_dec_ref(v___y_639_);
lean_dec(v___y_638_);
lean_dec_ref(v___y_637_);
lean_dec(v___y_636_);
lean_dec_ref(v___y_635_);
lean_dec_ref(v_header_631_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__4___redArg___lam__0(lean_object* v_k_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v_b_648_, lean_object* v_c_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_){
_start:
{
lean_object* v___x_655_; 
lean_inc(v___y_653_);
lean_inc_ref(v___y_652_);
lean_inc(v___y_651_);
lean_inc_ref(v___y_650_);
lean_inc(v___y_647_);
lean_inc_ref(v___y_646_);
v___x_655_ = lean_apply_9(v_k_645_, v_b_648_, v_c_649_, v___y_646_, v___y_647_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, lean_box(0));
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__4___redArg___lam__0___boxed(lean_object* v_k_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v_b_659_, lean_object* v_c_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_){
_start:
{
lean_object* v_res_666_; 
v_res_666_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__4___redArg___lam__0(v_k_656_, v___y_657_, v___y_658_, v_b_659_, v_c_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_);
lean_dec(v___y_664_);
lean_dec_ref(v___y_663_);
lean_dec(v___y_662_);
lean_dec_ref(v___y_661_);
lean_dec(v___y_658_);
lean_dec_ref(v___y_657_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__4___redArg(lean_object* v_type_667_, lean_object* v_k_668_, uint8_t v_cleanupAnnotations_669_, uint8_t v_whnfType_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_){
_start:
{
lean_object* v___f_678_; lean_object* v___x_679_; 
lean_inc(v___y_672_);
lean_inc_ref(v___y_671_);
v___f_678_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__4___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_678_, 0, v_k_668_);
lean_closure_set(v___f_678_, 1, v___y_671_);
lean_closure_set(v___f_678_, 2, v___y_672_);
v___x_679_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_667_, v___f_678_, v_cleanupAnnotations_669_, v_whnfType_670_, v___y_673_, v___y_674_, v___y_675_, v___y_676_);
if (lean_obj_tag(v___x_679_) == 0)
{
return v___x_679_;
}
else
{
lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_687_; 
v_a_680_ = lean_ctor_get(v___x_679_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_679_);
if (v_isSharedCheck_687_ == 0)
{
v___x_682_ = v___x_679_;
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v___x_679_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_685_; 
if (v_isShared_683_ == 0)
{
v___x_685_ = v___x_682_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_a_680_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__4___redArg___boxed(lean_object* v_type_688_, lean_object* v_k_689_, lean_object* v_cleanupAnnotations_690_, lean_object* v_whnfType_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_699_; uint8_t v_whnfType_boxed_700_; lean_object* v_res_701_; 
v_cleanupAnnotations_boxed_699_ = lean_unbox(v_cleanupAnnotations_690_);
v_whnfType_boxed_700_ = lean_unbox(v_whnfType_691_);
v_res_701_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__4___redArg(v_type_688_, v_k_689_, v_cleanupAnnotations_boxed_699_, v_whnfType_boxed_700_, v___y_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_, v___y_697_);
lean_dec(v___y_697_);
lean_dec_ref(v___y_696_);
lean_dec(v___y_695_);
lean_dec_ref(v___y_694_);
lean_dec(v___y_693_);
lean_dec_ref(v___y_692_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__4(lean_object* v_00_u03b1_702_, lean_object* v_type_703_, lean_object* v_k_704_, uint8_t v_cleanupAnnotations_705_, uint8_t v_whnfType_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_){
_start:
{
lean_object* v___x_714_; 
v___x_714_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__4___redArg(v_type_703_, v_k_704_, v_cleanupAnnotations_705_, v_whnfType_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_, v___y_712_);
return v___x_714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__4___boxed(lean_object* v_00_u03b1_715_, lean_object* v_type_716_, lean_object* v_k_717_, lean_object* v_cleanupAnnotations_718_, lean_object* v_whnfType_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_727_; uint8_t v_whnfType_boxed_728_; lean_object* v_res_729_; 
v_cleanupAnnotations_boxed_727_ = lean_unbox(v_cleanupAnnotations_718_);
v_whnfType_boxed_728_ = lean_unbox(v_whnfType_719_);
v_res_729_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__4(v_00_u03b1_715_, v_type_716_, v_k_717_, v_cleanupAnnotations_boxed_727_, v_whnfType_boxed_728_, v___y_720_, v___y_721_, v___y_722_, v___y_723_, v___y_724_, v___y_725_);
lean_dec(v___y_725_);
lean_dec_ref(v___y_724_);
lean_dec(v___y_723_);
lean_dec_ref(v___y_722_);
lean_dec(v___y_721_);
lean_dec_ref(v___y_720_);
return v_res_729_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_730_; 
v___x_730_ = l_instMonadEIO(lean_box(0));
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1(lean_object* v_msg_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_){
_start:
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v_toApplicative_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_838_; 
v___x_745_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__0);
v___x_746_ = l_StateRefT_x27_instMonad___redArg(v___x_745_);
v_toApplicative_747_ = lean_ctor_get(v___x_746_, 0);
v_isSharedCheck_838_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_838_ == 0)
{
lean_object* v_unused_839_; 
v_unused_839_ = lean_ctor_get(v___x_746_, 1);
lean_dec(v_unused_839_);
v___x_749_ = v___x_746_;
v_isShared_750_ = v_isSharedCheck_838_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_toApplicative_747_);
lean_dec(v___x_746_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_838_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v_toFunctor_751_; lean_object* v_toSeq_752_; lean_object* v_toSeqLeft_753_; lean_object* v_toSeqRight_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_836_; 
v_toFunctor_751_ = lean_ctor_get(v_toApplicative_747_, 0);
v_toSeq_752_ = lean_ctor_get(v_toApplicative_747_, 2);
v_toSeqLeft_753_ = lean_ctor_get(v_toApplicative_747_, 3);
v_toSeqRight_754_ = lean_ctor_get(v_toApplicative_747_, 4);
v_isSharedCheck_836_ = !lean_is_exclusive(v_toApplicative_747_);
if (v_isSharedCheck_836_ == 0)
{
lean_object* v_unused_837_; 
v_unused_837_ = lean_ctor_get(v_toApplicative_747_, 1);
lean_dec(v_unused_837_);
v___x_756_ = v_toApplicative_747_;
v_isShared_757_ = v_isSharedCheck_836_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_toSeqRight_754_);
lean_inc(v_toSeqLeft_753_);
lean_inc(v_toSeq_752_);
lean_inc(v_toFunctor_751_);
lean_dec(v_toApplicative_747_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_836_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___f_758_; lean_object* v___f_759_; lean_object* v___f_760_; lean_object* v___f_761_; lean_object* v___x_762_; lean_object* v___f_763_; lean_object* v___f_764_; lean_object* v___f_765_; lean_object* v___x_767_; 
v___f_758_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__1));
v___f_759_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__2));
lean_inc_ref(v_toFunctor_751_);
v___f_760_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_760_, 0, v_toFunctor_751_);
v___f_761_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_761_, 0, v_toFunctor_751_);
v___x_762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_762_, 0, v___f_760_);
lean_ctor_set(v___x_762_, 1, v___f_761_);
v___f_763_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_763_, 0, v_toSeqRight_754_);
v___f_764_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_764_, 0, v_toSeqLeft_753_);
v___f_765_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_765_, 0, v_toSeq_752_);
if (v_isShared_757_ == 0)
{
lean_ctor_set(v___x_756_, 4, v___f_763_);
lean_ctor_set(v___x_756_, 3, v___f_764_);
lean_ctor_set(v___x_756_, 2, v___f_765_);
lean_ctor_set(v___x_756_, 1, v___f_758_);
lean_ctor_set(v___x_756_, 0, v___x_762_);
v___x_767_ = v___x_756_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v___x_762_);
lean_ctor_set(v_reuseFailAlloc_835_, 1, v___f_758_);
lean_ctor_set(v_reuseFailAlloc_835_, 2, v___f_765_);
lean_ctor_set(v_reuseFailAlloc_835_, 3, v___f_764_);
lean_ctor_set(v_reuseFailAlloc_835_, 4, v___f_763_);
v___x_767_ = v_reuseFailAlloc_835_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
lean_object* v___x_769_; 
if (v_isShared_750_ == 0)
{
lean_ctor_set(v___x_749_, 1, v___f_759_);
lean_ctor_set(v___x_749_, 0, v___x_767_);
v___x_769_ = v___x_749_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v___x_767_);
lean_ctor_set(v_reuseFailAlloc_834_, 1, v___f_759_);
v___x_769_ = v_reuseFailAlloc_834_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
lean_object* v___x_770_; lean_object* v_toApplicative_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_832_; 
v___x_770_ = l_StateRefT_x27_instMonad___redArg(v___x_769_);
v_toApplicative_771_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_832_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_832_ == 0)
{
lean_object* v_unused_833_; 
v_unused_833_ = lean_ctor_get(v___x_770_, 1);
lean_dec(v_unused_833_);
v___x_773_ = v___x_770_;
v_isShared_774_ = v_isSharedCheck_832_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_toApplicative_771_);
lean_dec(v___x_770_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_832_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v_toFunctor_775_; lean_object* v_toSeq_776_; lean_object* v_toSeqLeft_777_; lean_object* v_toSeqRight_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_830_; 
v_toFunctor_775_ = lean_ctor_get(v_toApplicative_771_, 0);
v_toSeq_776_ = lean_ctor_get(v_toApplicative_771_, 2);
v_toSeqLeft_777_ = lean_ctor_get(v_toApplicative_771_, 3);
v_toSeqRight_778_ = lean_ctor_get(v_toApplicative_771_, 4);
v_isSharedCheck_830_ = !lean_is_exclusive(v_toApplicative_771_);
if (v_isSharedCheck_830_ == 0)
{
lean_object* v_unused_831_; 
v_unused_831_ = lean_ctor_get(v_toApplicative_771_, 1);
lean_dec(v_unused_831_);
v___x_780_ = v_toApplicative_771_;
v_isShared_781_ = v_isSharedCheck_830_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_toSeqRight_778_);
lean_inc(v_toSeqLeft_777_);
lean_inc(v_toSeq_776_);
lean_inc(v_toFunctor_775_);
lean_dec(v_toApplicative_771_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_830_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___f_782_; lean_object* v___f_783_; lean_object* v___f_784_; lean_object* v___f_785_; lean_object* v___x_786_; lean_object* v___f_787_; lean_object* v___f_788_; lean_object* v___f_789_; lean_object* v___x_791_; 
v___f_782_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__3));
v___f_783_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__4));
lean_inc_ref(v_toFunctor_775_);
v___f_784_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_784_, 0, v_toFunctor_775_);
v___f_785_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_785_, 0, v_toFunctor_775_);
v___x_786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_786_, 0, v___f_784_);
lean_ctor_set(v___x_786_, 1, v___f_785_);
v___f_787_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_787_, 0, v_toSeqRight_778_);
v___f_788_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_788_, 0, v_toSeqLeft_777_);
v___f_789_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_789_, 0, v_toSeq_776_);
if (v_isShared_781_ == 0)
{
lean_ctor_set(v___x_780_, 4, v___f_787_);
lean_ctor_set(v___x_780_, 3, v___f_788_);
lean_ctor_set(v___x_780_, 2, v___f_789_);
lean_ctor_set(v___x_780_, 1, v___f_782_);
lean_ctor_set(v___x_780_, 0, v___x_786_);
v___x_791_ = v___x_780_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v___x_786_);
lean_ctor_set(v_reuseFailAlloc_829_, 1, v___f_782_);
lean_ctor_set(v_reuseFailAlloc_829_, 2, v___f_789_);
lean_ctor_set(v_reuseFailAlloc_829_, 3, v___f_788_);
lean_ctor_set(v_reuseFailAlloc_829_, 4, v___f_787_);
v___x_791_ = v_reuseFailAlloc_829_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
lean_object* v___x_793_; 
if (v_isShared_774_ == 0)
{
lean_ctor_set(v___x_773_, 1, v___f_783_);
lean_ctor_set(v___x_773_, 0, v___x_791_);
v___x_793_ = v___x_773_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v___x_791_);
lean_ctor_set(v_reuseFailAlloc_828_, 1, v___f_783_);
v___x_793_ = v_reuseFailAlloc_828_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
lean_object* v___x_794_; lean_object* v_toApplicative_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_826_; 
v___x_794_ = l_StateRefT_x27_instMonad___redArg(v___x_793_);
v_toApplicative_795_ = lean_ctor_get(v___x_794_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v___x_794_);
if (v_isSharedCheck_826_ == 0)
{
lean_object* v_unused_827_; 
v_unused_827_ = lean_ctor_get(v___x_794_, 1);
lean_dec(v_unused_827_);
v___x_797_ = v___x_794_;
v_isShared_798_ = v_isSharedCheck_826_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_toApplicative_795_);
lean_dec(v___x_794_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_826_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v_toFunctor_799_; lean_object* v_toSeq_800_; lean_object* v_toSeqLeft_801_; lean_object* v_toSeqRight_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_824_; 
v_toFunctor_799_ = lean_ctor_get(v_toApplicative_795_, 0);
v_toSeq_800_ = lean_ctor_get(v_toApplicative_795_, 2);
v_toSeqLeft_801_ = lean_ctor_get(v_toApplicative_795_, 3);
v_toSeqRight_802_ = lean_ctor_get(v_toApplicative_795_, 4);
v_isSharedCheck_824_ = !lean_is_exclusive(v_toApplicative_795_);
if (v_isSharedCheck_824_ == 0)
{
lean_object* v_unused_825_; 
v_unused_825_ = lean_ctor_get(v_toApplicative_795_, 1);
lean_dec(v_unused_825_);
v___x_804_ = v_toApplicative_795_;
v_isShared_805_ = v_isSharedCheck_824_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_toSeqRight_802_);
lean_inc(v_toSeqLeft_801_);
lean_inc(v_toSeq_800_);
lean_inc(v_toFunctor_799_);
lean_dec(v_toApplicative_795_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_824_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
lean_object* v___f_806_; lean_object* v___f_807_; lean_object* v___f_808_; lean_object* v___f_809_; lean_object* v___x_810_; lean_object* v___f_811_; lean_object* v___f_812_; lean_object* v___f_813_; lean_object* v___x_815_; 
v___f_806_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__5));
v___f_807_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___closed__6));
lean_inc_ref(v_toFunctor_799_);
v___f_808_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_808_, 0, v_toFunctor_799_);
v___f_809_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_809_, 0, v_toFunctor_799_);
v___x_810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_810_, 0, v___f_808_);
lean_ctor_set(v___x_810_, 1, v___f_809_);
v___f_811_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_811_, 0, v_toSeqRight_802_);
v___f_812_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_812_, 0, v_toSeqLeft_801_);
v___f_813_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_813_, 0, v_toSeq_800_);
if (v_isShared_805_ == 0)
{
lean_ctor_set(v___x_804_, 4, v___f_811_);
lean_ctor_set(v___x_804_, 3, v___f_812_);
lean_ctor_set(v___x_804_, 2, v___f_813_);
lean_ctor_set(v___x_804_, 1, v___f_806_);
lean_ctor_set(v___x_804_, 0, v___x_810_);
v___x_815_ = v___x_804_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v___x_810_);
lean_ctor_set(v_reuseFailAlloc_823_, 1, v___f_806_);
lean_ctor_set(v_reuseFailAlloc_823_, 2, v___f_813_);
lean_ctor_set(v_reuseFailAlloc_823_, 3, v___f_812_);
lean_ctor_set(v_reuseFailAlloc_823_, 4, v___f_811_);
v___x_815_ = v_reuseFailAlloc_823_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
lean_object* v___x_817_; 
if (v_isShared_798_ == 0)
{
lean_ctor_set(v___x_797_, 1, v___f_807_);
lean_ctor_set(v___x_797_, 0, v___x_815_);
v___x_817_ = v___x_797_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_822_; 
v_reuseFailAlloc_822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_822_, 0, v___x_815_);
lean_ctor_set(v_reuseFailAlloc_822_, 1, v___f_807_);
v___x_817_ = v_reuseFailAlloc_822_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_16398__overap_820_; lean_object* v___x_821_; 
v___x_818_ = lean_box(0);
v___x_819_ = l_instInhabitedOfMonad___redArg(v___x_817_, v___x_818_);
v___x_16398__overap_820_ = lean_panic_fn_borrowed(v___x_819_, v_msg_737_);
lean_dec(v___x_819_);
lean_inc(v___y_743_);
lean_inc_ref(v___y_742_);
lean_inc(v___y_741_);
lean_inc_ref(v___y_740_);
lean_inc(v___y_739_);
lean_inc_ref(v___y_738_);
v___x_821_ = lean_apply_7(v___x_16398__overap_820_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, lean_box(0));
return v___x_821_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1___boxed(lean_object* v_msg_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_){
_start:
{
lean_object* v_res_848_; 
v_res_848_ = l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1(v_msg_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_, v___y_845_, v___y_846_);
lean_dec(v___y_846_);
lean_dec_ref(v___y_845_);
lean_dec(v___y_844_);
lean_dec_ref(v___y_843_);
lean_dec(v___y_842_);
lean_dec_ref(v___y_841_);
return v_res_848_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__10(lean_object* v_opts_849_, lean_object* v_opt_850_){
_start:
{
lean_object* v_name_851_; lean_object* v_defValue_852_; lean_object* v_map_853_; lean_object* v___x_854_; 
v_name_851_ = lean_ctor_get(v_opt_850_, 0);
v_defValue_852_ = lean_ctor_get(v_opt_850_, 1);
v_map_853_ = lean_ctor_get(v_opts_849_, 0);
v___x_854_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_853_, v_name_851_);
if (lean_obj_tag(v___x_854_) == 0)
{
uint8_t v___x_855_; 
v___x_855_ = lean_unbox(v_defValue_852_);
return v___x_855_;
}
else
{
lean_object* v_val_856_; 
v_val_856_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_val_856_);
lean_dec_ref_known(v___x_854_, 1);
if (lean_obj_tag(v_val_856_) == 1)
{
uint8_t v_v_857_; 
v_v_857_ = lean_ctor_get_uint8(v_val_856_, 0);
lean_dec_ref_known(v_val_856_, 0);
return v_v_857_;
}
else
{
uint8_t v___x_858_; 
lean_dec(v_val_856_);
v___x_858_ = lean_unbox(v_defValue_852_);
return v___x_858_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__10___boxed(lean_object* v_opts_859_, lean_object* v_opt_860_){
_start:
{
uint8_t v_res_861_; lean_object* v_r_862_; 
v_res_861_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__10(v_opts_859_, v_opt_860_);
lean_dec_ref(v_opt_860_);
lean_dec_ref(v_opts_859_);
v_r_862_ = lean_box(v_res_861_);
return v_r_862_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__0(void){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_863_ = lean_box(1);
v___x_864_ = l_Lean_MessageData_ofFormat(v___x_863_);
return v___x_864_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__3(void){
_start:
{
lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_868_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__2));
v___x_869_ = l_Lean_MessageData_ofFormat(v___x_868_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11(lean_object* v_x_870_, lean_object* v_x_871_){
_start:
{
if (lean_obj_tag(v_x_871_) == 0)
{
return v_x_870_;
}
else
{
lean_object* v_head_872_; lean_object* v_tail_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_895_; 
v_head_872_ = lean_ctor_get(v_x_871_, 0);
v_tail_873_ = lean_ctor_get(v_x_871_, 1);
v_isSharedCheck_895_ = !lean_is_exclusive(v_x_871_);
if (v_isSharedCheck_895_ == 0)
{
v___x_875_ = v_x_871_;
v_isShared_876_ = v_isSharedCheck_895_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_tail_873_);
lean_inc(v_head_872_);
lean_dec(v_x_871_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_895_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v_before_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_893_; 
v_before_877_ = lean_ctor_get(v_head_872_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v_head_872_);
if (v_isSharedCheck_893_ == 0)
{
lean_object* v_unused_894_; 
v_unused_894_ = lean_ctor_get(v_head_872_, 1);
lean_dec(v_unused_894_);
v___x_879_ = v_head_872_;
v_isShared_880_ = v_isSharedCheck_893_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_before_877_);
lean_dec(v_head_872_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_893_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_881_; lean_object* v___x_883_; 
v___x_881_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__0);
if (v_isShared_880_ == 0)
{
lean_ctor_set_tag(v___x_879_, 7);
lean_ctor_set(v___x_879_, 1, v___x_881_);
lean_ctor_set(v___x_879_, 0, v_x_870_);
v___x_883_ = v___x_879_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v_x_870_);
lean_ctor_set(v_reuseFailAlloc_892_, 1, v___x_881_);
v___x_883_ = v_reuseFailAlloc_892_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
lean_object* v___x_884_; lean_object* v___x_886_; 
v___x_884_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__3);
if (v_isShared_876_ == 0)
{
lean_ctor_set_tag(v___x_875_, 7);
lean_ctor_set(v___x_875_, 1, v___x_884_);
lean_ctor_set(v___x_875_, 0, v___x_883_);
v___x_886_ = v___x_875_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v___x_883_);
lean_ctor_set(v_reuseFailAlloc_891_, 1, v___x_884_);
v___x_886_ = v_reuseFailAlloc_891_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_887_ = l_Lean_MessageData_ofSyntax(v_before_877_);
v___x_888_ = l_Lean_indentD(v___x_887_);
v___x_889_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_889_, 0, v___x_886_);
lean_ctor_set(v___x_889_, 1, v___x_888_);
v_x_870_ = v___x_889_;
v_x_871_ = v_tail_873_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_899_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___redArg___closed__1));
v___x_900_ = l_Lean_MessageData_ofFormat(v___x_899_);
return v___x_900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___redArg(lean_object* v_msgData_901_, lean_object* v_macroStack_902_, lean_object* v___y_903_){
_start:
{
lean_object* v_options_905_; lean_object* v___x_906_; uint8_t v___x_907_; 
v_options_905_ = lean_ctor_get(v___y_903_, 2);
v___x_906_ = l_Lean_Elab_pp_macroStack;
v___x_907_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__10(v_options_905_, v___x_906_);
if (v___x_907_ == 0)
{
lean_object* v___x_908_; 
lean_dec(v_macroStack_902_);
v___x_908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_908_, 0, v_msgData_901_);
return v___x_908_;
}
else
{
if (lean_obj_tag(v_macroStack_902_) == 0)
{
lean_object* v___x_909_; 
v___x_909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_909_, 0, v_msgData_901_);
return v___x_909_;
}
else
{
lean_object* v_head_910_; lean_object* v_after_911_; lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_926_; 
v_head_910_ = lean_ctor_get(v_macroStack_902_, 0);
lean_inc(v_head_910_);
v_after_911_ = lean_ctor_get(v_head_910_, 1);
v_isSharedCheck_926_ = !lean_is_exclusive(v_head_910_);
if (v_isSharedCheck_926_ == 0)
{
lean_object* v_unused_927_; 
v_unused_927_ = lean_ctor_get(v_head_910_, 0);
lean_dec(v_unused_927_);
v___x_913_ = v_head_910_;
v_isShared_914_ = v_isSharedCheck_926_;
goto v_resetjp_912_;
}
else
{
lean_inc(v_after_911_);
lean_dec(v_head_910_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_926_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
lean_object* v___x_915_; lean_object* v___x_917_; 
v___x_915_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__0);
if (v_isShared_914_ == 0)
{
lean_ctor_set_tag(v___x_913_, 7);
lean_ctor_set(v___x_913_, 1, v___x_915_);
lean_ctor_set(v___x_913_, 0, v_msgData_901_);
v___x_917_ = v___x_913_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v_msgData_901_);
lean_ctor_set(v_reuseFailAlloc_925_, 1, v___x_915_);
v___x_917_ = v_reuseFailAlloc_925_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v_msgData_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_918_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2);
v___x_919_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_919_, 0, v___x_917_);
lean_ctor_set(v___x_919_, 1, v___x_918_);
v___x_920_ = l_Lean_MessageData_ofSyntax(v_after_911_);
v___x_921_ = l_Lean_indentD(v___x_920_);
v_msgData_922_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_922_, 0, v___x_919_);
lean_ctor_set(v_msgData_922_, 1, v___x_921_);
v___x_923_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3_spec__11(v_msgData_922_, v_macroStack_902_);
v___x_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_924_, 0, v___x_923_);
return v___x_924_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_msgData_928_, lean_object* v_macroStack_929_, lean_object* v___y_930_, lean_object* v___y_931_){
_start:
{
lean_object* v_res_932_; 
v_res_932_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___redArg(v_msgData_928_, v_macroStack_929_, v___y_930_);
lean_dec_ref(v___y_930_);
return v_res_932_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__2(lean_object* v_msgData_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_){
_start:
{
lean_object* v___x_939_; lean_object* v_env_940_; lean_object* v___x_941_; lean_object* v_mctx_942_; lean_object* v_lctx_943_; lean_object* v_options_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_939_ = lean_st_ref_get(v___y_937_);
v_env_940_ = lean_ctor_get(v___x_939_, 0);
lean_inc_ref(v_env_940_);
lean_dec(v___x_939_);
v___x_941_ = lean_st_ref_get(v___y_935_);
v_mctx_942_ = lean_ctor_get(v___x_941_, 0);
lean_inc_ref(v_mctx_942_);
lean_dec(v___x_941_);
v_lctx_943_ = lean_ctor_get(v___y_934_, 2);
v_options_944_ = lean_ctor_get(v___y_936_, 2);
lean_inc_ref(v_options_944_);
lean_inc_ref(v_lctx_943_);
v___x_945_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_945_, 0, v_env_940_);
lean_ctor_set(v___x_945_, 1, v_mctx_942_);
lean_ctor_set(v___x_945_, 2, v_lctx_943_);
lean_ctor_set(v___x_945_, 3, v_options_944_);
v___x_946_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_946_, 0, v___x_945_);
lean_ctor_set(v___x_946_, 1, v_msgData_933_);
v___x_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_947_, 0, v___x_946_);
return v___x_947_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__2___boxed(lean_object* v_msgData_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_){
_start:
{
lean_object* v_res_954_; 
v_res_954_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__2(v_msgData_948_, v___y_949_, v___y_950_, v___y_951_, v___y_952_);
lean_dec(v___y_952_);
lean_dec_ref(v___y_951_);
lean_dec(v___y_950_);
lean_dec_ref(v___y_949_);
return v_res_954_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0___redArg(lean_object* v_msg_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_){
_start:
{
lean_object* v_ref_963_; lean_object* v___x_964_; lean_object* v_a_965_; lean_object* v_macroStack_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v_a_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_977_; 
v_ref_963_ = lean_ctor_get(v___y_960_, 5);
v___x_964_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__2(v_msg_955_, v___y_958_, v___y_959_, v___y_960_, v___y_961_);
v_a_965_ = lean_ctor_get(v___x_964_, 0);
lean_inc(v_a_965_);
lean_dec_ref(v___x_964_);
v_macroStack_966_ = lean_ctor_get(v___y_956_, 1);
v___x_967_ = l_Lean_Elab_getBetterRef(v_ref_963_, v_macroStack_966_);
lean_inc(v_macroStack_966_);
v___x_968_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___redArg(v_a_965_, v_macroStack_966_, v___y_960_);
v_a_969_ = lean_ctor_get(v___x_968_, 0);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_977_ == 0)
{
v___x_971_ = v___x_968_;
v_isShared_972_ = v_isSharedCheck_977_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_a_969_);
lean_dec(v___x_968_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_977_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v___x_973_; lean_object* v___x_975_; 
v___x_973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_973_, 0, v___x_967_);
lean_ctor_set(v___x_973_, 1, v_a_969_);
if (v_isShared_972_ == 0)
{
lean_ctor_set_tag(v___x_971_, 1);
lean_ctor_set(v___x_971_, 0, v___x_973_);
v___x_975_ = v___x_971_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v___x_973_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0___redArg___boxed(lean_object* v_msg_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_){
_start:
{
lean_object* v_res_986_; 
v_res_986_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0___redArg(v_msg_978_, v___y_979_, v___y_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_);
lean_dec(v___y_984_);
lean_dec_ref(v___y_983_);
lean_dec(v___y_982_);
lean_dec_ref(v___y_981_);
lean_dec(v___y_980_);
lean_dec_ref(v___y_979_);
return v_res_986_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__1(void){
_start:
{
lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_988_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__0));
v___x_989_ = l_Lean_stringToMessageData(v___x_988_);
return v___x_989_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__3(void){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_991_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__2));
v___x_992_ = l_Lean_stringToMessageData(v___x_991_);
return v___x_992_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__7(void){
_start:
{
lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_996_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__6));
v___x_997_ = lean_unsigned_to_nat(11u);
v___x_998_ = lean_unsigned_to_nat(122u);
v___x_999_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__5));
v___x_1000_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__4));
v___x_1001_ = l_mkPanicMessageWithDecl(v___x_1000_, v___x_999_, v___x_998_, v___x_997_, v___x_996_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0(lean_object* v_constName_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_){
_start:
{
lean_object* v___x_1018_; lean_object* v_env_1019_; uint8_t v___x_1020_; lean_object* v___x_1021_; 
v___x_1018_ = lean_st_ref_get(v___y_1008_);
v_env_1019_ = lean_ctor_get(v___x_1018_, 0);
lean_inc_ref(v_env_1019_);
lean_dec(v___x_1018_);
v___x_1020_ = 0;
lean_inc(v_constName_1002_);
v___x_1021_ = l_Lean_Environment_findAsync_x3f(v_env_1019_, v_constName_1002_, v___x_1020_);
if (lean_obj_tag(v___x_1021_) == 1)
{
lean_object* v_val_1022_; uint8_t v_kind_1023_; 
v_val_1022_ = lean_ctor_get(v___x_1021_, 0);
lean_inc(v_val_1022_);
lean_dec_ref_known(v___x_1021_, 1);
v_kind_1023_ = lean_ctor_get_uint8(v_val_1022_, sizeof(void*)*3);
if (v_kind_1023_ == 6)
{
lean_object* v___x_1024_; 
v___x_1024_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_1022_);
if (lean_obj_tag(v___x_1024_) == 6)
{
lean_object* v_val_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
lean_dec(v_constName_1002_);
v_val_1025_ = lean_ctor_get(v___x_1024_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_1024_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_1024_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_val_1025_);
lean_dec(v___x_1024_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1030_; 
if (v_isShared_1028_ == 0)
{
lean_ctor_set_tag(v___x_1027_, 0);
v___x_1030_ = v___x_1027_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v_val_1025_);
v___x_1030_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
return v___x_1030_;
}
}
}
else
{
lean_object* v___x_1033_; lean_object* v___x_1034_; 
lean_dec_ref(v___x_1024_);
v___x_1033_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__7, &l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__7_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__7);
v___x_1034_ = l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__1(v___x_1033_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_, v___y_1008_);
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1043_; 
v_a_1035_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1043_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1043_ == 0)
{
v___x_1037_ = v___x_1034_;
v_isShared_1038_ = v_isSharedCheck_1043_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1034_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1043_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
if (lean_obj_tag(v_a_1035_) == 0)
{
lean_del_object(v___x_1037_);
goto v___jp_1010_;
}
else
{
lean_object* v_val_1039_; lean_object* v___x_1041_; 
lean_dec(v_constName_1002_);
v_val_1039_ = lean_ctor_get(v_a_1035_, 0);
lean_inc(v_val_1039_);
lean_dec_ref_known(v_a_1035_, 1);
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 0, v_val_1039_);
v___x_1041_ = v___x_1037_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v_val_1039_);
v___x_1041_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
return v___x_1041_;
}
}
}
}
else
{
lean_object* v_a_1044_; lean_object* v___x_1046_; uint8_t v_isShared_1047_; uint8_t v_isSharedCheck_1051_; 
lean_dec(v_constName_1002_);
v_a_1044_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1051_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1051_ == 0)
{
v___x_1046_ = v___x_1034_;
v_isShared_1047_ = v_isSharedCheck_1051_;
goto v_resetjp_1045_;
}
else
{
lean_inc(v_a_1044_);
lean_dec(v___x_1034_);
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
}
else
{
lean_dec(v_val_1022_);
goto v___jp_1010_;
}
}
else
{
lean_dec(v___x_1021_);
goto v___jp_1010_;
}
v___jp_1010_:
{
lean_object* v___x_1011_; uint8_t v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1011_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__1);
v___x_1012_ = 0;
v___x_1013_ = l_Lean_MessageData_ofConstName(v_constName_1002_, v___x_1012_);
v___x_1014_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1011_);
lean_ctor_set(v___x_1014_, 1, v___x_1013_);
v___x_1015_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__3, &l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__3_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__3);
v___x_1016_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1014_);
lean_ctor_set(v___x_1016_, 1, v___x_1015_);
v___x_1017_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0___redArg(v___x_1016_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_, v___y_1008_);
return v___x_1017_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___boxed(lean_object* v_constName_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_){
_start:
{
lean_object* v_res_1060_; 
v_res_1060_ = l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0(v_constName_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_);
lean_dec(v___y_1058_);
lean_dec_ref(v___y_1057_);
lean_dec(v___y_1056_);
lean_dec_ref(v___y_1055_);
lean_dec(v___y_1054_);
lean_dec_ref(v___y_1053_);
return v_res_1060_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg(lean_object* v_upperBound_1068_, lean_object* v_a_1069_, lean_object* v_b_1070_, lean_object* v___y_1071_){
_start:
{
uint8_t v___x_1073_; 
v___x_1073_ = lean_nat_dec_lt(v_a_1069_, v_upperBound_1068_);
if (v___x_1073_ == 0)
{
lean_object* v___x_1074_; 
lean_dec(v_a_1069_);
v___x_1074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1074_, 0, v_b_1070_);
return v___x_1074_;
}
else
{
lean_object* v_ref_1075_; uint8_t v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; 
v_ref_1075_ = lean_ctor_get(v___y_1071_, 5);
v___x_1076_ = 0;
v___x_1077_ = l_Lean_SourceInfo_fromRef(v_ref_1075_, v___x_1076_);
v___x_1078_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___closed__1));
v___x_1079_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___closed__2));
lean_inc(v___x_1077_);
v___x_1080_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1077_);
lean_ctor_set(v___x_1080_, 1, v___x_1079_);
v___x_1081_ = l_Lean_Syntax_node1(v___x_1077_, v___x_1078_, v___x_1080_);
v___x_1082_ = lean_array_push(v_b_1070_, v___x_1081_);
v___x_1083_ = lean_unsigned_to_nat(1u);
v___x_1084_ = lean_nat_add(v_a_1069_, v___x_1083_);
lean_dec(v_a_1069_);
v_a_1069_ = v___x_1084_;
v_b_1070_ = v___x_1082_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___boxed(lean_object* v_upperBound_1086_, lean_object* v_a_1087_, lean_object* v_b_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_){
_start:
{
lean_object* v_res_1091_; 
v_res_1091_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg(v_upperBound_1086_, v_a_1087_, v_b_1088_, v___y_1089_);
lean_dec_ref(v___y_1089_);
lean_dec(v_upperBound_1086_);
return v_res_1091_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg___lam__0(lean_object* v_a_1095_, lean_object* v_fst_1096_, lean_object* v_fst_1097_, lean_object* v_____r_1098_, lean_object* v_userNames_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_){
_start:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1107_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg___lam__0___closed__1));
v___x_1108_ = l_Lean_Core_mkFreshUserName(v___x_1107_, v___y_1104_, v___y_1105_);
if (lean_obj_tag(v___x_1108_) == 0)
{
lean_object* v_a_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1124_; 
v_a_1109_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1124_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1111_ = v___x_1108_;
v_isShared_1112_ = v_isSharedCheck_1124_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_a_1109_);
lean_dec(v___x_1108_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1124_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1122_; 
v___x_1113_ = lean_mk_syntax_ident(v_a_1109_);
v___x_1114_ = l_Lean_LocalDecl_type(v_a_1095_);
lean_inc(v___x_1113_);
v___x_1115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1115_, 0, v___x_1113_);
lean_ctor_set(v___x_1115_, 1, v___x_1114_);
v___x_1116_ = lean_array_push(v_fst_1096_, v___x_1115_);
v___x_1117_ = lean_array_push(v_fst_1097_, v___x_1113_);
v___x_1118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1116_);
lean_ctor_set(v___x_1118_, 1, v_userNames_1099_);
v___x_1119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1117_);
lean_ctor_set(v___x_1119_, 1, v___x_1118_);
v___x_1120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1120_, 0, v___x_1119_);
if (v_isShared_1112_ == 0)
{
lean_ctor_set(v___x_1111_, 0, v___x_1120_);
v___x_1122_ = v___x_1111_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v___x_1120_);
v___x_1122_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
return v___x_1122_;
}
}
}
else
{
lean_object* v_a_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1132_; 
lean_dec_ref(v_userNames_1099_);
lean_dec(v_fst_1097_);
lean_dec(v_fst_1096_);
v_a_1125_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1132_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1132_ == 0)
{
v___x_1127_ = v___x_1108_;
v_isShared_1128_ = v_isSharedCheck_1132_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_a_1125_);
lean_dec(v___x_1108_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1132_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1130_; 
if (v_isShared_1128_ == 0)
{
v___x_1130_ = v___x_1127_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v_a_1125_);
v___x_1130_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
return v___x_1130_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg___lam__0___boxed(lean_object* v_a_1133_, lean_object* v_fst_1134_, lean_object* v_fst_1135_, lean_object* v_____r_1136_, lean_object* v_userNames_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_){
_start:
{
lean_object* v_res_1145_; 
v_res_1145_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg___lam__0(v_a_1133_, v_fst_1134_, v_fst_1135_, v_____r_1136_, v_userNames_1137_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_);
lean_dec(v___y_1143_);
lean_dec_ref(v___y_1142_);
lean_dec(v___y_1141_);
lean_dec_ref(v___y_1140_);
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
lean_dec_ref(v_a_1133_);
return v_res_1145_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg(lean_object* v_upperBound_1146_, lean_object* v___x_1147_, lean_object* v_xs_1148_, lean_object* v_a_1149_, lean_object* v_b_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_){
_start:
{
lean_object* v___y_1159_; uint8_t v___x_1181_; 
v___x_1181_ = lean_nat_dec_lt(v_a_1149_, v_upperBound_1146_);
if (v___x_1181_ == 0)
{
lean_object* v___x_1182_; 
lean_dec(v_a_1149_);
v___x_1182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1182_, 0, v_b_1150_);
return v___x_1182_;
}
else
{
lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1183_ = l_Lean_instInhabitedExpr;
v___x_1184_ = lean_nat_add(v___x_1147_, v_a_1149_);
v___x_1185_ = lean_array_get_borrowed(v___x_1183_, v_xs_1148_, v___x_1184_);
lean_dec(v___x_1184_);
v___x_1186_ = l_Lean_Expr_fvarId_x21(v___x_1185_);
v___x_1187_ = l_Lean_FVarId_getDecl___redArg(v___x_1186_, v___y_1153_, v___y_1155_, v___y_1156_);
if (lean_obj_tag(v___x_1187_) == 0)
{
lean_object* v_snd_1188_; lean_object* v_a_1189_; lean_object* v_fst_1190_; lean_object* v_fst_1191_; lean_object* v_snd_1192_; lean_object* v___x_1193_; uint8_t v___x_1194_; 
v_snd_1188_ = lean_ctor_get(v_b_1150_, 1);
lean_inc(v_snd_1188_);
v_a_1189_ = lean_ctor_get(v___x_1187_, 0);
lean_inc(v_a_1189_);
lean_dec_ref_known(v___x_1187_, 1);
v_fst_1190_ = lean_ctor_get(v_b_1150_, 0);
lean_inc(v_fst_1190_);
lean_dec_ref(v_b_1150_);
v_fst_1191_ = lean_ctor_get(v_snd_1188_, 0);
lean_inc(v_fst_1191_);
v_snd_1192_ = lean_ctor_get(v_snd_1188_, 1);
lean_inc(v_snd_1192_);
lean_dec(v_snd_1188_);
v___x_1193_ = l_Lean_LocalDecl_userName(v_a_1189_);
v___x_1194_ = l_Lean_Name_hasMacroScopes(v___x_1193_);
if (v___x_1194_ == 0)
{
lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1195_ = lean_array_push(v_snd_1192_, v___x_1193_);
v___x_1196_ = lean_box(0);
v___x_1197_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg___lam__0(v_a_1189_, v_fst_1191_, v_fst_1190_, v___x_1196_, v___x_1195_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_);
lean_dec(v_a_1189_);
v___y_1159_ = v___x_1197_;
goto v___jp_1158_;
}
else
{
lean_object* v___x_1198_; lean_object* v___x_1199_; 
lean_dec(v___x_1193_);
v___x_1198_ = lean_box(0);
v___x_1199_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg___lam__0(v_a_1189_, v_fst_1191_, v_fst_1190_, v___x_1198_, v_snd_1192_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_);
lean_dec(v_a_1189_);
v___y_1159_ = v___x_1199_;
goto v___jp_1158_;
}
}
else
{
lean_object* v_a_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1207_; 
lean_dec_ref(v_b_1150_);
lean_dec(v_a_1149_);
v_a_1200_ = lean_ctor_get(v___x_1187_, 0);
v_isSharedCheck_1207_ = !lean_is_exclusive(v___x_1187_);
if (v_isSharedCheck_1207_ == 0)
{
v___x_1202_ = v___x_1187_;
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_a_1200_);
lean_dec(v___x_1187_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1205_; 
if (v_isShared_1203_ == 0)
{
v___x_1205_ = v___x_1202_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v_a_1200_);
v___x_1205_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
return v___x_1205_;
}
}
}
}
v___jp_1158_:
{
if (lean_obj_tag(v___y_1159_) == 0)
{
lean_object* v_a_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1172_; 
v_a_1160_ = lean_ctor_get(v___y_1159_, 0);
v_isSharedCheck_1172_ = !lean_is_exclusive(v___y_1159_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1162_ = v___y_1159_;
v_isShared_1163_ = v_isSharedCheck_1172_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_a_1160_);
lean_dec(v___y_1159_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1172_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
if (lean_obj_tag(v_a_1160_) == 0)
{
lean_object* v_a_1164_; lean_object* v___x_1166_; 
lean_dec(v_a_1149_);
v_a_1164_ = lean_ctor_get(v_a_1160_, 0);
lean_inc(v_a_1164_);
lean_dec_ref_known(v_a_1160_, 1);
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 0, v_a_1164_);
v___x_1166_ = v___x_1162_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v_a_1164_);
v___x_1166_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
return v___x_1166_;
}
}
else
{
lean_object* v_a_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
lean_del_object(v___x_1162_);
v_a_1168_ = lean_ctor_get(v_a_1160_, 0);
lean_inc(v_a_1168_);
lean_dec_ref_known(v_a_1160_, 1);
v___x_1169_ = lean_unsigned_to_nat(1u);
v___x_1170_ = lean_nat_add(v_a_1149_, v___x_1169_);
lean_dec(v_a_1149_);
v_a_1149_ = v___x_1170_;
v_b_1150_ = v_a_1168_;
goto _start;
}
}
}
else
{
lean_object* v_a_1173_; lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1180_; 
lean_dec(v_a_1149_);
v_a_1173_ = lean_ctor_get(v___y_1159_, 0);
v_isSharedCheck_1180_ = !lean_is_exclusive(v___y_1159_);
if (v_isSharedCheck_1180_ == 0)
{
v___x_1175_ = v___y_1159_;
v_isShared_1176_ = v_isSharedCheck_1180_;
goto v_resetjp_1174_;
}
else
{
lean_inc(v_a_1173_);
lean_dec(v___y_1159_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1180_;
goto v_resetjp_1174_;
}
v_resetjp_1174_:
{
lean_object* v___x_1178_; 
if (v_isShared_1176_ == 0)
{
v___x_1178_ = v___x_1175_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v_a_1173_);
v___x_1178_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
return v___x_1178_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg___boxed(lean_object* v_upperBound_1208_, lean_object* v___x_1209_, lean_object* v_xs_1210_, lean_object* v_a_1211_, lean_object* v_b_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_){
_start:
{
lean_object* v_res_1220_; 
v_res_1220_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg(v_upperBound_1208_, v___x_1209_, v_xs_1210_, v_a_1211_, v_b_1212_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
lean_dec(v___y_1216_);
lean_dec_ref(v___y_1215_);
lean_dec(v___y_1214_);
lean_dec_ref(v___y_1213_);
lean_dec_ref(v_xs_1210_);
lean_dec(v___x_1209_);
lean_dec(v_upperBound_1208_);
return v_res_1220_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__1(size_t v_sz_1221_, size_t v_i_1222_, lean_object* v_bs_1223_){
_start:
{
uint8_t v___x_1224_; 
v___x_1224_ = lean_usize_dec_lt(v_i_1222_, v_sz_1221_);
if (v___x_1224_ == 0)
{
return v_bs_1223_;
}
else
{
lean_object* v_v_1225_; lean_object* v___x_1226_; lean_object* v_bs_x27_1227_; size_t v___x_1228_; size_t v___x_1229_; lean_object* v___x_1230_; 
v_v_1225_ = lean_array_uget(v_bs_1223_, v_i_1222_);
v___x_1226_ = lean_unsigned_to_nat(0u);
v_bs_x27_1227_ = lean_array_uset(v_bs_1223_, v_i_1222_, v___x_1226_);
v___x_1228_ = ((size_t)1ULL);
v___x_1229_ = lean_usize_add(v_i_1222_, v___x_1228_);
v___x_1230_ = lean_array_uset(v_bs_x27_1227_, v_i_1222_, v_v_1225_);
v_i_1222_ = v___x_1229_;
v_bs_1223_ = v___x_1230_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__1___boxed(lean_object* v_sz_1232_, lean_object* v_i_1233_, lean_object* v_bs_1234_){
_start:
{
size_t v_sz_boxed_1235_; size_t v_i_boxed_1236_; lean_object* v_res_1237_; 
v_sz_boxed_1235_ = lean_unbox_usize(v_sz_1232_);
lean_dec(v_sz_1232_);
v_i_boxed_1236_ = lean_unbox_usize(v_i_1233_);
lean_dec(v_i_1233_);
v_res_1237_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__1(v_sz_boxed_1235_, v_i_boxed_1236_, v_bs_1234_);
return v_res_1237_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6(void){
_start:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1252_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__29));
v___x_1253_ = l_Lean_mkAtom(v___x_1252_);
return v___x_1253_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0(lean_object* v_indVal_1255_, lean_object* v___x_1256_, lean_object* v_alts_1257_, lean_object* v_numFields_1258_, lean_object* v_name_1259_, lean_object* v_rhs_1260_, lean_object* v_a_1261_, lean_object* v_xs_1262_, lean_object* v_x_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_){
_start:
{
lean_object* v_numParams_1271_; lean_object* v_numIndices_1272_; lean_object* v___x_1273_; 
v_numParams_1271_ = lean_ctor_get(v_indVal_1255_, 1);
v_numIndices_1272_ = lean_ctor_get(v_indVal_1255_, 2);
lean_inc_ref(v_alts_1257_);
lean_inc(v___x_1256_);
v___x_1273_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg(v_numIndices_1272_, v___x_1256_, v_alts_1257_, v___y_1268_);
if (lean_obj_tag(v___x_1273_) == 0)
{
lean_object* v_a_1274_; lean_object* v___x_1275_; 
v_a_1274_ = lean_ctor_get(v___x_1273_, 0);
lean_inc(v_a_1274_);
lean_dec_ref_known(v___x_1273_, 1);
lean_inc(v___x_1256_);
v___x_1275_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg(v_numParams_1271_, v___x_1256_, v_alts_1257_, v___y_1268_);
if (lean_obj_tag(v___x_1275_) == 0)
{
lean_object* v_a_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; 
v_a_1276_ = lean_ctor_get(v___x_1275_, 0);
lean_inc(v_a_1276_);
lean_dec_ref_known(v___x_1275_, 1);
v___x_1277_ = lean_mk_empty_array_with_capacity(v___x_1256_);
lean_inc_ref(v___x_1277_);
v___x_1278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1277_);
lean_ctor_set(v___x_1278_, 1, v___x_1277_);
v___x_1279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1279_, 0, v_a_1276_);
lean_ctor_set(v___x_1279_, 1, v___x_1278_);
v___x_1280_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg(v_numFields_1258_, v_numParams_1271_, v_xs_1262_, v___x_1256_, v___x_1279_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_);
if (lean_obj_tag(v___x_1280_) == 0)
{
lean_object* v_a_1281_; lean_object* v_snd_1282_; lean_object* v_fst_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1342_; 
v_a_1281_ = lean_ctor_get(v___x_1280_, 0);
lean_inc(v_a_1281_);
lean_dec_ref_known(v___x_1280_, 1);
v_snd_1282_ = lean_ctor_get(v_a_1281_, 1);
v_fst_1283_ = lean_ctor_get(v_a_1281_, 0);
v_isSharedCheck_1342_ = !lean_is_exclusive(v_a_1281_);
if (v_isSharedCheck_1342_ == 0)
{
v___x_1285_ = v_a_1281_;
v_isShared_1286_ = v_isSharedCheck_1342_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_snd_1282_);
lean_inc(v_fst_1283_);
lean_dec(v_a_1281_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1342_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v_fst_1287_; lean_object* v_snd_1288_; lean_object* v___x_1290_; uint8_t v_isShared_1291_; uint8_t v_isSharedCheck_1341_; 
v_fst_1287_ = lean_ctor_get(v_snd_1282_, 0);
v_snd_1288_ = lean_ctor_get(v_snd_1282_, 1);
v_isSharedCheck_1341_ = !lean_is_exclusive(v_snd_1282_);
if (v_isSharedCheck_1341_ == 0)
{
v___x_1290_ = v_snd_1282_;
v_isShared_1291_ = v_isSharedCheck_1341_;
goto v_resetjp_1289_;
}
else
{
lean_inc(v_snd_1288_);
lean_inc(v_fst_1287_);
lean_dec(v_snd_1282_);
v___x_1290_ = lean_box(0);
v_isShared_1291_ = v_isSharedCheck_1341_;
goto v_resetjp_1289_;
}
v_resetjp_1289_:
{
lean_object* v_ref_1292_; lean_object* v___x_1293_; uint8_t v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1299_; 
v_ref_1292_ = lean_ctor_get(v___y_1268_, 5);
v___x_1293_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_1294_ = 0;
v___x_1295_ = l_Lean_SourceInfo_fromRef(v_ref_1292_, v___x_1294_);
v___x_1296_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__1));
v___x_1297_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__2));
lean_inc(v___x_1295_);
if (v_isShared_1291_ == 0)
{
lean_ctor_set_tag(v___x_1290_, 2);
lean_ctor_set(v___x_1290_, 1, v___x_1297_);
lean_ctor_set(v___x_1290_, 0, v___x_1295_);
v___x_1299_ = v___x_1290_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v___x_1295_);
lean_ctor_set(v_reuseFailAlloc_1340_, 1, v___x_1297_);
v___x_1299_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___y_1309_; lean_object* v___x_1335_; lean_object* v___x_1336_; uint8_t v___x_1337_; 
v___x_1300_ = lean_mk_syntax_ident(v_name_1259_);
lean_inc_n(v___x_1295_, 3);
v___x_1301_ = l_Lean_Syntax_node2(v___x_1295_, v___x_1296_, v___x_1299_, v___x_1300_);
v___x_1302_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_1303_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24);
v___x_1304_ = l_Array_append___redArg(v___x_1303_, v_fst_1283_);
lean_dec(v_fst_1283_);
v___x_1305_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1295_);
lean_ctor_set(v___x_1305_, 1, v___x_1302_);
lean_ctor_set(v___x_1305_, 2, v___x_1304_);
v___x_1306_ = l_Lean_Syntax_node2(v___x_1295_, v___x_1293_, v___x_1301_, v___x_1305_);
v___x_1307_ = lean_array_push(v_a_1274_, v___x_1306_);
v___x_1335_ = lean_array_get_size(v_snd_1288_);
v___x_1336_ = lean_array_get_size(v_fst_1287_);
v___x_1337_ = lean_nat_dec_eq(v___x_1335_, v___x_1336_);
if (v___x_1337_ == 0)
{
lean_object* v___x_1338_; 
lean_dec(v_snd_1288_);
v___x_1338_ = lean_box(0);
v___y_1309_ = v___x_1338_;
goto v___jp_1308_;
}
else
{
lean_object* v___x_1339_; 
v___x_1339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1339_, 0, v_snd_1288_);
v___y_1309_ = v___x_1339_;
goto v___jp_1308_;
}
v___jp_1308_:
{
lean_object* v___x_1310_; 
lean_inc(v___y_1269_);
lean_inc_ref(v___y_1268_);
lean_inc(v___y_1267_);
lean_inc_ref(v___y_1266_);
lean_inc(v___y_1265_);
lean_inc_ref(v___y_1264_);
v___x_1310_ = lean_apply_10(v_rhs_1260_, v_a_1261_, v_fst_1287_, v___y_1309_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_, lean_box(0));
if (lean_obj_tag(v___x_1310_) == 0)
{
lean_object* v_a_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1334_; 
v_a_1311_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1334_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1334_ == 0)
{
v___x_1313_ = v___x_1310_;
v_isShared_1314_ = v_isSharedCheck_1334_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_a_1311_);
lean_dec(v___x_1310_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1334_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1318_; 
v___x_1315_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__4));
v___x_1316_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__5));
lean_inc(v___x_1295_);
if (v_isShared_1286_ == 0)
{
lean_ctor_set_tag(v___x_1285_, 2);
lean_ctor_set(v___x_1285_, 1, v___x_1316_);
lean_ctor_set(v___x_1285_, 0, v___x_1295_);
v___x_1318_ = v___x_1285_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v___x_1295_);
lean_ctor_set(v_reuseFailAlloc_1333_, 1, v___x_1316_);
v___x_1318_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
size_t v_sz_1319_; size_t v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1331_; 
v_sz_1319_ = lean_array_size(v___x_1307_);
v___x_1320_ = ((size_t)0ULL);
v___x_1321_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__1(v_sz_1319_, v___x_1320_, v___x_1307_);
v___x_1322_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6);
v___x_1323_ = l_Lean_mkSepArray(v___x_1321_, v___x_1322_);
lean_dec_ref(v___x_1321_);
v___x_1324_ = l_Array_append___redArg(v___x_1303_, v___x_1323_);
lean_dec_ref(v___x_1323_);
lean_inc_n(v___x_1295_, 3);
v___x_1325_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1295_);
lean_ctor_set(v___x_1325_, 1, v___x_1302_);
lean_ctor_set(v___x_1325_, 2, v___x_1324_);
v___x_1326_ = l_Lean_Syntax_node1(v___x_1295_, v___x_1302_, v___x_1325_);
v___x_1327_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__7));
v___x_1328_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1295_);
lean_ctor_set(v___x_1328_, 1, v___x_1327_);
v___x_1329_ = l_Lean_Syntax_node4(v___x_1295_, v___x_1315_, v___x_1318_, v___x_1326_, v___x_1328_, v_a_1311_);
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 0, v___x_1329_);
v___x_1331_ = v___x_1313_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v___x_1329_);
v___x_1331_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
return v___x_1331_;
}
}
}
}
else
{
lean_dec_ref(v___x_1307_);
lean_dec(v___x_1295_);
lean_del_object(v___x_1285_);
return v___x_1310_;
}
}
}
}
}
}
else
{
lean_object* v_a_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1350_; 
lean_dec(v_a_1274_);
lean_dec_ref(v_a_1261_);
lean_dec_ref(v_rhs_1260_);
lean_dec(v_name_1259_);
v_a_1343_ = lean_ctor_get(v___x_1280_, 0);
v_isSharedCheck_1350_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1345_ = v___x_1280_;
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v___x_1280_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1348_; 
if (v_isShared_1346_ == 0)
{
v___x_1348_ = v___x_1345_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v_a_1343_);
v___x_1348_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
return v___x_1348_;
}
}
}
}
else
{
lean_object* v_a_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1358_; 
lean_dec(v_a_1274_);
lean_dec_ref(v_a_1261_);
lean_dec_ref(v_rhs_1260_);
lean_dec(v_name_1259_);
lean_dec(v___x_1256_);
v_a_1351_ = lean_ctor_get(v___x_1275_, 0);
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1275_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1353_ = v___x_1275_;
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_a_1351_);
lean_dec(v___x_1275_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1356_; 
if (v_isShared_1354_ == 0)
{
v___x_1356_ = v___x_1353_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v_a_1351_);
v___x_1356_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
return v___x_1356_;
}
}
}
}
else
{
lean_object* v_a_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1366_; 
lean_dec_ref(v_a_1261_);
lean_dec_ref(v_rhs_1260_);
lean_dec(v_name_1259_);
lean_dec_ref(v_alts_1257_);
lean_dec(v___x_1256_);
v_a_1359_ = lean_ctor_get(v___x_1273_, 0);
v_isSharedCheck_1366_ = !lean_is_exclusive(v___x_1273_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1361_ = v___x_1273_;
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_a_1359_);
lean_dec(v___x_1273_);
v___x_1361_ = lean_box(0);
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
v_resetjp_1360_:
{
lean_object* v___x_1364_; 
if (v_isShared_1362_ == 0)
{
v___x_1364_ = v___x_1361_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v_a_1359_);
v___x_1364_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
return v___x_1364_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___boxed(lean_object* v_indVal_1367_, lean_object* v___x_1368_, lean_object* v_alts_1369_, lean_object* v_numFields_1370_, lean_object* v_name_1371_, lean_object* v_rhs_1372_, lean_object* v_a_1373_, lean_object* v_xs_1374_, lean_object* v_x_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_){
_start:
{
lean_object* v_res_1383_; 
v_res_1383_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0(v_indVal_1367_, v___x_1368_, v_alts_1369_, v_numFields_1370_, v_name_1371_, v_rhs_1372_, v_a_1373_, v_xs_1374_, v_x_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_);
lean_dec(v___y_1381_);
lean_dec_ref(v___y_1380_);
lean_dec(v___y_1379_);
lean_dec_ref(v___y_1378_);
lean_dec(v___y_1377_);
lean_dec_ref(v___y_1376_);
lean_dec_ref(v_x_1375_);
lean_dec_ref(v_xs_1374_);
lean_dec(v_numFields_1370_);
lean_dec_ref(v_indVal_1367_);
return v_res_1383_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg(lean_object* v_indVal_1386_, lean_object* v_rhs_1387_, lean_object* v_as_x27_1388_, lean_object* v_b_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_){
_start:
{
if (lean_obj_tag(v_as_x27_1388_) == 0)
{
lean_object* v___x_1397_; 
lean_dec_ref(v_rhs_1387_);
lean_dec_ref(v_indVal_1386_);
v___x_1397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1397_, 0, v_b_1389_);
return v___x_1397_;
}
else
{
lean_object* v_head_1398_; lean_object* v_tail_1399_; lean_object* v___x_1400_; 
v_head_1398_ = lean_ctor_get(v_as_x27_1388_, 0);
v_tail_1399_ = lean_ctor_get(v_as_x27_1388_, 1);
lean_inc(v_head_1398_);
v___x_1400_ = l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0(v_head_1398_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
if (lean_obj_tag(v___x_1400_) == 0)
{
lean_object* v_a_1401_; lean_object* v_toConstantVal_1402_; lean_object* v_numFields_1403_; lean_object* v_name_1404_; lean_object* v_type_1405_; lean_object* v___x_1406_; lean_object* v_alts_1407_; lean_object* v___f_1408_; uint8_t v___x_1409_; lean_object* v___x_1410_; 
v_a_1401_ = lean_ctor_get(v___x_1400_, 0);
lean_inc(v_a_1401_);
lean_dec_ref_known(v___x_1400_, 1);
v_toConstantVal_1402_ = lean_ctor_get(v_a_1401_, 0);
v_numFields_1403_ = lean_ctor_get(v_a_1401_, 4);
lean_inc(v_numFields_1403_);
v_name_1404_ = lean_ctor_get(v_toConstantVal_1402_, 0);
lean_inc(v_name_1404_);
v_type_1405_ = lean_ctor_get(v_toConstantVal_1402_, 2);
lean_inc_ref(v_type_1405_);
v___x_1406_ = lean_unsigned_to_nat(0u);
v_alts_1407_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___closed__0));
lean_inc_ref(v_rhs_1387_);
lean_inc_ref(v_indVal_1386_);
v___f_1408_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___boxed), 16, 7);
lean_closure_set(v___f_1408_, 0, v_indVal_1386_);
lean_closure_set(v___f_1408_, 1, v___x_1406_);
lean_closure_set(v___f_1408_, 2, v_alts_1407_);
lean_closure_set(v___f_1408_, 3, v_numFields_1403_);
lean_closure_set(v___f_1408_, 4, v_name_1404_);
lean_closure_set(v___f_1408_, 5, v_rhs_1387_);
lean_closure_set(v___f_1408_, 6, v_a_1401_);
v___x_1409_ = 0;
v___x_1410_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__4___redArg(v_type_1405_, v___f_1408_, v___x_1409_, v___x_1409_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
if (lean_obj_tag(v___x_1410_) == 0)
{
lean_object* v_a_1411_; lean_object* v___x_1412_; 
v_a_1411_ = lean_ctor_get(v___x_1410_, 0);
lean_inc(v_a_1411_);
lean_dec_ref_known(v___x_1410_, 1);
v___x_1412_ = lean_array_push(v_b_1389_, v_a_1411_);
v_as_x27_1388_ = v_tail_1399_;
v_b_1389_ = v___x_1412_;
goto _start;
}
else
{
lean_object* v_a_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1421_; 
lean_dec_ref(v_b_1389_);
lean_dec_ref(v_rhs_1387_);
lean_dec_ref(v_indVal_1386_);
v_a_1414_ = lean_ctor_get(v___x_1410_, 0);
v_isSharedCheck_1421_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1416_ = v___x_1410_;
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_a_1414_);
lean_dec(v___x_1410_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1419_; 
if (v_isShared_1417_ == 0)
{
v___x_1419_ = v___x_1416_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_a_1414_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
return v___x_1419_;
}
}
}
}
else
{
lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1429_; 
lean_dec_ref(v_b_1389_);
lean_dec_ref(v_rhs_1387_);
lean_dec_ref(v_indVal_1386_);
v_a_1422_ = lean_ctor_get(v___x_1400_, 0);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1400_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1424_ = v___x_1400_;
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_dec(v___x_1400_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1427_; 
if (v_isShared_1425_ == 0)
{
v___x_1427_ = v___x_1424_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v_a_1422_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
return v___x_1427_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___boxed(lean_object* v_indVal_1430_, lean_object* v_rhs_1431_, lean_object* v_as_x27_1432_, lean_object* v_b_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_){
_start:
{
lean_object* v_res_1441_; 
v_res_1441_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg(v_indVal_1430_, v_rhs_1431_, v_as_x27_1432_, v_b_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_);
lean_dec(v___y_1439_);
lean_dec_ref(v___y_1438_);
lean_dec(v___y_1437_);
lean_dec_ref(v___y_1436_);
lean_dec(v___y_1435_);
lean_dec_ref(v___y_1434_);
lean_dec(v_as_x27_1432_);
return v_res_1441_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__6(size_t v_sz_1442_, size_t v_i_1443_, lean_object* v_bs_1444_){
_start:
{
uint8_t v___x_1445_; 
v___x_1445_ = lean_usize_dec_lt(v_i_1443_, v_sz_1442_);
if (v___x_1445_ == 0)
{
return v_bs_1444_;
}
else
{
lean_object* v_v_1446_; lean_object* v___x_1447_; lean_object* v_bs_x27_1448_; size_t v___x_1449_; size_t v___x_1450_; lean_object* v___x_1451_; 
v_v_1446_ = lean_array_uget(v_bs_1444_, v_i_1443_);
v___x_1447_ = lean_unsigned_to_nat(0u);
v_bs_x27_1448_ = lean_array_uset(v_bs_1444_, v_i_1443_, v___x_1447_);
v___x_1449_ = ((size_t)1ULL);
v___x_1450_ = lean_usize_add(v_i_1443_, v___x_1449_);
v___x_1451_ = lean_array_uset(v_bs_x27_1448_, v_i_1443_, v_v_1446_);
v_i_1443_ = v___x_1450_;
v_bs_1444_ = v___x_1451_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__6___boxed(lean_object* v_sz_1453_, lean_object* v_i_1454_, lean_object* v_bs_1455_){
_start:
{
size_t v_sz_boxed_1456_; size_t v_i_boxed_1457_; lean_object* v_res_1458_; 
v_sz_boxed_1456_ = lean_unbox_usize(v_sz_1453_);
lean_dec(v_sz_1453_);
v_i_boxed_1457_ = lean_unbox_usize(v_i_1454_);
lean_dec(v_i_1454_);
v_res_1458_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__6(v_sz_boxed_1456_, v_i_boxed_1457_, v_bs_1455_);
return v_res_1458_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts(lean_object* v_indVal_1459_, lean_object* v_rhs_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_, lean_object* v_a_1464_, lean_object* v_a_1465_, lean_object* v_a_1466_){
_start:
{
lean_object* v_ctors_1468_; lean_object* v_alts_1469_; lean_object* v___x_1470_; 
v_ctors_1468_ = lean_ctor_get(v_indVal_1459_, 4);
lean_inc(v_ctors_1468_);
v_alts_1469_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___closed__0));
v___x_1470_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg(v_indVal_1459_, v_rhs_1460_, v_ctors_1468_, v_alts_1469_, v_a_1461_, v_a_1462_, v_a_1463_, v_a_1464_, v_a_1465_, v_a_1466_);
lean_dec(v_ctors_1468_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_object* v_a_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1481_; 
v_a_1471_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1481_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1473_ = v___x_1470_;
v_isShared_1474_ = v_isSharedCheck_1481_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_a_1471_);
lean_dec(v___x_1470_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1481_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
size_t v_sz_1475_; size_t v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1479_; 
v_sz_1475_ = lean_array_size(v_a_1471_);
v___x_1476_ = ((size_t)0ULL);
v___x_1477_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__6(v_sz_1475_, v___x_1476_, v_a_1471_);
if (v_isShared_1474_ == 0)
{
lean_ctor_set(v___x_1473_, 0, v___x_1477_);
v___x_1479_ = v___x_1473_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v___x_1477_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
else
{
return v___x_1470_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts___boxed(lean_object* v_indVal_1482_, lean_object* v_rhs_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts(v_indVal_1482_, v_rhs_1483_, v_a_1484_, v_a_1485_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_);
lean_dec(v_a_1489_);
lean_dec_ref(v_a_1488_);
lean_dec(v_a_1487_);
lean_dec_ref(v_a_1486_);
lean_dec(v_a_1485_);
lean_dec_ref(v_a_1484_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2(lean_object* v_upperBound_1492_, lean_object* v___x_1493_, lean_object* v_xs_1494_, lean_object* v_inst_1495_, lean_object* v_R_1496_, lean_object* v_a_1497_, lean_object* v_b_1498_, lean_object* v_c_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_){
_start:
{
lean_object* v___x_1507_; 
v___x_1507_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg(v_upperBound_1492_, v___x_1493_, v_xs_1494_, v_a_1497_, v_b_1498_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_);
return v___x_1507_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___boxed(lean_object* v_upperBound_1508_, lean_object* v___x_1509_, lean_object* v_xs_1510_, lean_object* v_inst_1511_, lean_object* v_R_1512_, lean_object* v_a_1513_, lean_object* v_b_1514_, lean_object* v_c_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_){
_start:
{
lean_object* v_res_1523_; 
v_res_1523_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2(v_upperBound_1508_, v___x_1509_, v_xs_1510_, v_inst_1511_, v_R_1512_, v_a_1513_, v_b_1514_, v_c_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
lean_dec(v___y_1521_);
lean_dec_ref(v___y_1520_);
lean_dec(v___y_1519_);
lean_dec_ref(v___y_1518_);
lean_dec(v___y_1517_);
lean_dec_ref(v___y_1516_);
lean_dec_ref(v_xs_1510_);
lean_dec(v___x_1509_);
lean_dec(v_upperBound_1508_);
return v_res_1523_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3(lean_object* v_upperBound_1524_, lean_object* v_inst_1525_, lean_object* v_R_1526_, lean_object* v_a_1527_, lean_object* v_b_1528_, lean_object* v_c_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_){
_start:
{
lean_object* v___x_1537_; 
v___x_1537_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg(v_upperBound_1524_, v_a_1527_, v_b_1528_, v___y_1534_);
return v___x_1537_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___boxed(lean_object* v_upperBound_1538_, lean_object* v_inst_1539_, lean_object* v_R_1540_, lean_object* v_a_1541_, lean_object* v_b_1542_, lean_object* v_c_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_){
_start:
{
lean_object* v_res_1551_; 
v_res_1551_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3(v_upperBound_1538_, v_inst_1539_, v_R_1540_, v_a_1541_, v_b_1542_, v_c_1543_, v___y_1544_, v___y_1545_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_);
lean_dec(v___y_1549_);
lean_dec_ref(v___y_1548_);
lean_dec(v___y_1547_);
lean_dec_ref(v___y_1546_);
lean_dec(v___y_1545_);
lean_dec_ref(v___y_1544_);
lean_dec(v_upperBound_1538_);
return v_res_1551_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5(lean_object* v_indVal_1552_, lean_object* v_rhs_1553_, lean_object* v_as_1554_, lean_object* v_as_x27_1555_, lean_object* v_b_1556_, lean_object* v_a_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_){
_start:
{
lean_object* v___x_1565_; 
v___x_1565_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg(v_indVal_1552_, v_rhs_1553_, v_as_x27_1555_, v_b_1556_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_);
return v___x_1565_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___boxed(lean_object* v_indVal_1566_, lean_object* v_rhs_1567_, lean_object* v_as_1568_, lean_object* v_as_x27_1569_, lean_object* v_b_1570_, lean_object* v_a_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_){
_start:
{
lean_object* v_res_1579_; 
v_res_1579_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5(v_indVal_1566_, v_rhs_1567_, v_as_1568_, v_as_x27_1569_, v_b_1570_, v_a_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
lean_dec(v___y_1575_);
lean_dec_ref(v___y_1574_);
lean_dec(v___y_1573_);
lean_dec_ref(v___y_1572_);
lean_dec(v_as_x27_1569_);
lean_dec(v_as_1568_);
return v_res_1579_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0(lean_object* v_00_u03b1_1580_, lean_object* v_msg_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_){
_start:
{
lean_object* v___x_1589_; 
v___x_1589_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0___redArg(v_msg_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1590_, lean_object* v_msg_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_){
_start:
{
lean_object* v_res_1599_; 
v_res_1599_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0(v_00_u03b1_1590_, v_msg_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_);
lean_dec(v___y_1597_);
lean_dec_ref(v___y_1596_);
lean_dec(v___y_1595_);
lean_dec_ref(v___y_1594_);
lean_dec(v___y_1593_);
lean_dec_ref(v___y_1592_);
return v_res_1599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3(lean_object* v_msgData_1600_, lean_object* v_macroStack_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_){
_start:
{
lean_object* v___x_1609_; 
v___x_1609_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___redArg(v_msgData_1600_, v_macroStack_1601_, v___y_1606_);
return v___x_1609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3___boxed(lean_object* v_msgData_1610_, lean_object* v_macroStack_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__3(v_msgData_1610_, v_macroStack_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_);
lean_dec(v___y_1617_);
lean_dec_ref(v___y_1616_);
lean_dec(v___y_1615_);
lean_dec_ref(v___y_1614_);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3___redArg(lean_object* v_a_1626_, lean_object* v___x_1627_, size_t v_sz_1628_, size_t v_i_1629_, lean_object* v_bs_1630_, lean_object* v___y_1631_){
_start:
{
uint8_t v___x_1633_; 
v___x_1633_ = lean_usize_dec_lt(v_i_1629_, v_sz_1628_);
if (v___x_1633_ == 0)
{
lean_object* v___x_1634_; 
lean_dec(v___x_1627_);
v___x_1634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1634_, 0, v_bs_1630_);
return v___x_1634_;
}
else
{
lean_object* v_v_1635_; lean_object* v_toConstantVal_1636_; lean_object* v_fst_1637_; lean_object* v_snd_1638_; lean_object* v_name_1639_; lean_object* v___x_1640_; lean_object* v_bs_x27_1641_; lean_object* v_a_1643_; uint8_t v___x_1648_; 
v_v_1635_ = lean_array_uget_borrowed(v_bs_1630_, v_i_1629_);
v_toConstantVal_1636_ = lean_ctor_get(v_a_1626_, 0);
v_fst_1637_ = lean_ctor_get(v_v_1635_, 0);
lean_inc(v_fst_1637_);
v_snd_1638_ = lean_ctor_get(v_v_1635_, 1);
lean_inc(v_snd_1638_);
v_name_1639_ = lean_ctor_get(v_toConstantVal_1636_, 0);
v___x_1640_ = lean_unsigned_to_nat(0u);
v_bs_x27_1641_ = lean_array_uset(v_bs_1630_, v_i_1629_, v___x_1640_);
v___x_1648_ = l_Lean_Expr_isAppOf(v_snd_1638_, v_name_1639_);
lean_dec(v_snd_1638_);
if (v___x_1648_ == 0)
{
lean_object* v_ref_1649_; lean_object* v_quotContext_1650_; lean_object* v_currMacroScope_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; 
v_ref_1649_ = lean_ctor_get(v___y_1631_, 5);
v_quotContext_1650_ = lean_ctor_get(v___y_1631_, 10);
v_currMacroScope_1651_ = lean_ctor_get(v___y_1631_, 11);
v___x_1652_ = l_Lean_SourceInfo_fromRef(v_ref_1649_, v___x_1648_);
v___x_1653_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_1654_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33);
v___x_1655_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__34));
lean_inc(v_currMacroScope_1651_);
lean_inc(v_quotContext_1650_);
v___x_1656_ = l_Lean_addMacroScope(v_quotContext_1650_, v___x_1655_, v_currMacroScope_1651_);
v___x_1657_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3___redArg___closed__1));
lean_inc_n(v___x_1652_, 2);
v___x_1658_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1658_, 0, v___x_1652_);
lean_ctor_set(v___x_1658_, 1, v___x_1654_);
lean_ctor_set(v___x_1658_, 2, v___x_1656_);
lean_ctor_set(v___x_1658_, 3, v___x_1657_);
v___x_1659_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_1660_ = l_Lean_Syntax_node1(v___x_1652_, v___x_1659_, v_fst_1637_);
v___x_1661_ = l_Lean_Syntax_node2(v___x_1652_, v___x_1653_, v___x_1658_, v___x_1660_);
v_a_1643_ = v___x_1661_;
goto v___jp_1642_;
}
else
{
lean_object* v_ref_1662_; uint8_t v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; 
v_ref_1662_ = lean_ctor_get(v___y_1631_, 5);
v___x_1663_ = 0;
v___x_1664_ = l_Lean_SourceInfo_fromRef(v_ref_1662_, v___x_1663_);
v___x_1665_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_1666_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
lean_inc(v___x_1664_);
v___x_1667_ = l_Lean_Syntax_node1(v___x_1664_, v___x_1666_, v_fst_1637_);
lean_inc(v___x_1627_);
v___x_1668_ = l_Lean_Syntax_node2(v___x_1664_, v___x_1665_, v___x_1627_, v___x_1667_);
v_a_1643_ = v___x_1668_;
goto v___jp_1642_;
}
v___jp_1642_:
{
size_t v___x_1644_; size_t v___x_1645_; lean_object* v___x_1646_; 
v___x_1644_ = ((size_t)1ULL);
v___x_1645_ = lean_usize_add(v_i_1629_, v___x_1644_);
v___x_1646_ = lean_array_uset(v_bs_x27_1641_, v_i_1629_, v_a_1643_);
v_i_1629_ = v___x_1645_;
v_bs_1630_ = v___x_1646_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3___redArg___boxed(lean_object* v_a_1669_, lean_object* v___x_1670_, lean_object* v_sz_1671_, lean_object* v_i_1672_, lean_object* v_bs_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_){
_start:
{
size_t v_sz_boxed_1676_; size_t v_i_boxed_1677_; lean_object* v_res_1678_; 
v_sz_boxed_1676_ = lean_unbox_usize(v_sz_1671_);
lean_dec(v_sz_1671_);
v_i_boxed_1677_ = lean_unbox_usize(v_i_1672_);
lean_dec(v_i_1672_);
v_res_1678_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3___redArg(v_a_1669_, v___x_1670_, v_sz_boxed_1676_, v_i_boxed_1677_, v_bs_1673_, v___y_1674_);
lean_dec_ref(v___y_1674_);
lean_dec_ref(v_a_1669_);
return v_res_1678_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2(lean_object* v_a_1679_, lean_object* v___x_1680_, size_t v_sz_1681_, size_t v_i_1682_, lean_object* v_bs_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_){
_start:
{
uint8_t v___x_1691_; 
v___x_1691_ = lean_usize_dec_lt(v_i_1682_, v_sz_1681_);
if (v___x_1691_ == 0)
{
lean_object* v___x_1692_; 
lean_dec(v___x_1680_);
v___x_1692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1692_, 0, v_bs_1683_);
return v___x_1692_;
}
else
{
lean_object* v_v_1693_; lean_object* v_toConstantVal_1694_; lean_object* v_fst_1695_; lean_object* v_snd_1696_; lean_object* v_name_1697_; lean_object* v___x_1698_; lean_object* v_bs_x27_1699_; lean_object* v_a_1701_; uint8_t v___x_1706_; 
v_v_1693_ = lean_array_uget_borrowed(v_bs_1683_, v_i_1682_);
v_toConstantVal_1694_ = lean_ctor_get(v_a_1679_, 0);
v_fst_1695_ = lean_ctor_get(v_v_1693_, 0);
lean_inc(v_fst_1695_);
v_snd_1696_ = lean_ctor_get(v_v_1693_, 1);
lean_inc(v_snd_1696_);
v_name_1697_ = lean_ctor_get(v_toConstantVal_1694_, 0);
v___x_1698_ = lean_unsigned_to_nat(0u);
v_bs_x27_1699_ = lean_array_uset(v_bs_1683_, v_i_1682_, v___x_1698_);
v___x_1706_ = l_Lean_Expr_isAppOf(v_snd_1696_, v_name_1697_);
lean_dec(v_snd_1696_);
if (v___x_1706_ == 0)
{
lean_object* v_ref_1707_; lean_object* v_quotContext_1708_; lean_object* v_currMacroScope_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
v_ref_1707_ = lean_ctor_get(v___y_1688_, 5);
v_quotContext_1708_ = lean_ctor_get(v___y_1688_, 10);
v_currMacroScope_1709_ = lean_ctor_get(v___y_1688_, 11);
v___x_1710_ = l_Lean_SourceInfo_fromRef(v_ref_1707_, v___x_1706_);
v___x_1711_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_1712_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33);
v___x_1713_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__34));
lean_inc(v_currMacroScope_1709_);
lean_inc(v_quotContext_1708_);
v___x_1714_ = l_Lean_addMacroScope(v_quotContext_1708_, v___x_1713_, v_currMacroScope_1709_);
v___x_1715_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3___redArg___closed__1));
lean_inc_n(v___x_1710_, 2);
v___x_1716_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1716_, 0, v___x_1710_);
lean_ctor_set(v___x_1716_, 1, v___x_1712_);
lean_ctor_set(v___x_1716_, 2, v___x_1714_);
lean_ctor_set(v___x_1716_, 3, v___x_1715_);
v___x_1717_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_1718_ = l_Lean_Syntax_node1(v___x_1710_, v___x_1717_, v_fst_1695_);
v___x_1719_ = l_Lean_Syntax_node2(v___x_1710_, v___x_1711_, v___x_1716_, v___x_1718_);
v_a_1701_ = v___x_1719_;
goto v___jp_1700_;
}
else
{
lean_object* v_ref_1720_; uint8_t v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v_ref_1720_ = lean_ctor_get(v___y_1688_, 5);
v___x_1721_ = 0;
v___x_1722_ = l_Lean_SourceInfo_fromRef(v_ref_1720_, v___x_1721_);
v___x_1723_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_1724_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
lean_inc(v___x_1722_);
v___x_1725_ = l_Lean_Syntax_node1(v___x_1722_, v___x_1724_, v_fst_1695_);
lean_inc(v___x_1680_);
v___x_1726_ = l_Lean_Syntax_node2(v___x_1722_, v___x_1723_, v___x_1680_, v___x_1725_);
v_a_1701_ = v___x_1726_;
goto v___jp_1700_;
}
v___jp_1700_:
{
size_t v___x_1702_; size_t v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; 
v___x_1702_ = ((size_t)1ULL);
v___x_1703_ = lean_usize_add(v_i_1682_, v___x_1702_);
v___x_1704_ = lean_array_uset(v_bs_x27_1699_, v_i_1682_, v_a_1701_);
v___x_1705_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3___redArg(v_a_1679_, v___x_1680_, v_sz_1681_, v___x_1703_, v___x_1704_, v___y_1688_);
return v___x_1705_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2___boxed(lean_object* v_a_1727_, lean_object* v___x_1728_, lean_object* v_sz_1729_, lean_object* v_i_1730_, lean_object* v_bs_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_){
_start:
{
size_t v_sz_boxed_1739_; size_t v_i_boxed_1740_; lean_object* v_res_1741_; 
v_sz_boxed_1739_ = lean_unbox_usize(v_sz_1729_);
lean_dec(v_sz_1729_);
v_i_boxed_1740_ = lean_unbox_usize(v_i_1730_);
lean_dec(v_i_1730_);
v_res_1741_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2(v_a_1727_, v___x_1728_, v_sz_boxed_1739_, v_i_boxed_1740_, v_bs_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_);
lean_dec(v___y_1737_);
lean_dec_ref(v___y_1736_);
lean_dec(v___y_1735_);
lean_dec_ref(v___y_1734_);
lean_dec(v___y_1733_);
lean_dec_ref(v___y_1732_);
lean_dec_ref(v_a_1727_);
return v_res_1741_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1_spec__1___redArg(lean_object* v_userNames_1742_, lean_object* v_a_1743_, lean_object* v___x_1744_, lean_object* v_as_1745_, lean_object* v_i_1746_, lean_object* v_j_1747_, lean_object* v_bs_1748_, lean_object* v___y_1749_){
_start:
{
lean_object* v_zero_1751_; uint8_t v_isZero_1752_; 
v_zero_1751_ = lean_unsigned_to_nat(0u);
v_isZero_1752_ = lean_nat_dec_eq(v_i_1746_, v_zero_1751_);
if (v_isZero_1752_ == 1)
{
lean_object* v___x_1753_; 
lean_dec(v_j_1747_);
lean_dec(v_i_1746_);
lean_dec(v___x_1744_);
v___x_1753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1753_, 0, v_bs_1748_);
return v___x_1753_;
}
else
{
lean_object* v___x_1754_; lean_object* v_toConstantVal_1755_; lean_object* v_fst_1756_; lean_object* v_snd_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1820_; 
v___x_1754_ = lean_array_fget(v_as_1745_, v_j_1747_);
v_toConstantVal_1755_ = lean_ctor_get(v_a_1743_, 0);
v_fst_1756_ = lean_ctor_get(v___x_1754_, 0);
v_snd_1757_ = lean_ctor_get(v___x_1754_, 1);
v_isSharedCheck_1820_ = !lean_is_exclusive(v___x_1754_);
if (v_isSharedCheck_1820_ == 0)
{
v___x_1759_ = v___x_1754_;
v_isShared_1760_ = v_isSharedCheck_1820_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_snd_1757_);
lean_inc(v_fst_1756_);
lean_dec(v___x_1754_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1820_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v_name_1761_; lean_object* v___x_1762_; lean_object* v_one_1763_; lean_object* v_n_1764_; lean_object* v_a_1766_; uint8_t v___x_1800_; 
v_name_1761_ = lean_ctor_get(v_toConstantVal_1755_, 0);
v___x_1762_ = lean_box(0);
v_one_1763_ = lean_unsigned_to_nat(1u);
v_n_1764_ = lean_nat_sub(v_i_1746_, v_one_1763_);
lean_dec(v_i_1746_);
v___x_1800_ = l_Lean_Expr_isAppOf(v_snd_1757_, v_name_1761_);
lean_dec(v_snd_1757_);
if (v___x_1800_ == 0)
{
lean_object* v_ref_1801_; lean_object* v_quotContext_1802_; lean_object* v_currMacroScope_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; 
v_ref_1801_ = lean_ctor_get(v___y_1749_, 5);
v_quotContext_1802_ = lean_ctor_get(v___y_1749_, 10);
v_currMacroScope_1803_ = lean_ctor_get(v___y_1749_, 11);
v___x_1804_ = l_Lean_SourceInfo_fromRef(v_ref_1801_, v___x_1800_);
v___x_1805_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_1806_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33);
v___x_1807_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__34));
lean_inc(v_currMacroScope_1803_);
lean_inc(v_quotContext_1802_);
v___x_1808_ = l_Lean_addMacroScope(v_quotContext_1802_, v___x_1807_, v_currMacroScope_1803_);
v___x_1809_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3___redArg___closed__1));
lean_inc_n(v___x_1804_, 2);
v___x_1810_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1804_);
lean_ctor_set(v___x_1810_, 1, v___x_1806_);
lean_ctor_set(v___x_1810_, 2, v___x_1808_);
lean_ctor_set(v___x_1810_, 3, v___x_1809_);
v___x_1811_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_1812_ = l_Lean_Syntax_node1(v___x_1804_, v___x_1811_, v_fst_1756_);
v___x_1813_ = l_Lean_Syntax_node2(v___x_1804_, v___x_1805_, v___x_1810_, v___x_1812_);
v_a_1766_ = v___x_1813_;
goto v___jp_1765_;
}
else
{
lean_object* v_ref_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; 
v_ref_1814_ = lean_ctor_get(v___y_1749_, 5);
v___x_1815_ = l_Lean_SourceInfo_fromRef(v_ref_1814_, v_isZero_1752_);
v___x_1816_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_1817_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
lean_inc(v___x_1815_);
v___x_1818_ = l_Lean_Syntax_node1(v___x_1815_, v___x_1817_, v_fst_1756_);
lean_inc(v___x_1744_);
v___x_1819_ = l_Lean_Syntax_node2(v___x_1815_, v___x_1816_, v___x_1744_, v___x_1818_);
v_a_1766_ = v___x_1819_;
goto v___jp_1765_;
}
v___jp_1765_:
{
lean_object* v_ref_1767_; lean_object* v_quotContext_1768_; lean_object* v_currMacroScope_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1775_; 
v_ref_1767_ = lean_ctor_get(v___y_1749_, 5);
v_quotContext_1768_ = lean_ctor_get(v___y_1749_, 10);
v_currMacroScope_1769_ = lean_ctor_get(v___y_1749_, 11);
v___x_1770_ = l_Lean_SourceInfo_fromRef(v_ref_1767_, v_isZero_1752_);
v___x_1771_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__4));
v___x_1772_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__6));
v___x_1773_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__6));
lean_inc(v___x_1770_);
if (v_isShared_1760_ == 0)
{
lean_ctor_set_tag(v___x_1759_, 2);
lean_ctor_set(v___x_1759_, 1, v___x_1773_);
lean_ctor_set(v___x_1759_, 0, v___x_1770_);
v___x_1775_ = v___x_1759_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v___x_1770_);
lean_ctor_set(v_reuseFailAlloc_1799_, 1, v___x_1773_);
v___x_1775_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; 
v___x_1776_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__8));
v___x_1777_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10);
lean_inc(v_currMacroScope_1769_);
lean_inc(v_quotContext_1768_);
v___x_1778_ = l_Lean_addMacroScope(v_quotContext_1768_, v___x_1762_, v_currMacroScope_1769_);
v___x_1779_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__28));
lean_inc_n(v___x_1770_, 7);
v___x_1780_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1770_);
lean_ctor_set(v___x_1780_, 1, v___x_1777_);
lean_ctor_set(v___x_1780_, 2, v___x_1778_);
lean_ctor_set(v___x_1780_, 3, v___x_1779_);
v___x_1781_ = l_Lean_Syntax_node1(v___x_1770_, v___x_1776_, v___x_1780_);
v___x_1782_ = l_Lean_Syntax_node2(v___x_1770_, v___x_1772_, v___x_1775_, v___x_1781_);
v___x_1783_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_1784_ = lean_array_get_borrowed(v___x_1762_, v_userNames_1742_, v_j_1747_);
lean_inc(v___x_1784_);
v___x_1785_ = lean_erase_macro_scopes(v___x_1784_);
v___x_1786_ = l_Lean_Name_getString_x21(v___x_1785_);
lean_dec(v___x_1785_);
v___x_1787_ = lean_box(2);
v___x_1788_ = l_Lean_Syntax_mkStrLit(v___x_1786_, v___x_1787_);
v___x_1789_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__29));
v___x_1790_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1790_, 0, v___x_1770_);
lean_ctor_set(v___x_1790_, 1, v___x_1789_);
v___x_1791_ = l_Lean_Syntax_node1(v___x_1770_, v___x_1783_, v_a_1766_);
v___x_1792_ = l_Lean_Syntax_node3(v___x_1770_, v___x_1783_, v___x_1788_, v___x_1790_, v___x_1791_);
v___x_1793_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__25));
v___x_1794_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1794_, 0, v___x_1770_);
lean_ctor_set(v___x_1794_, 1, v___x_1793_);
v___x_1795_ = l_Lean_Syntax_node3(v___x_1770_, v___x_1771_, v___x_1782_, v___x_1792_, v___x_1794_);
v___x_1796_ = lean_nat_add(v_j_1747_, v_one_1763_);
lean_dec(v_j_1747_);
v___x_1797_ = lean_array_push(v_bs_1748_, v___x_1795_);
v_i_1746_ = v_n_1764_;
v_j_1747_ = v___x_1796_;
v_bs_1748_ = v___x_1797_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1_spec__1___redArg___boxed(lean_object* v_userNames_1821_, lean_object* v_a_1822_, lean_object* v___x_1823_, lean_object* v_as_1824_, lean_object* v_i_1825_, lean_object* v_j_1826_, lean_object* v_bs_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_){
_start:
{
lean_object* v_res_1830_; 
v_res_1830_ = l_Array_mapFinIdxM_map___at___00Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1_spec__1___redArg(v_userNames_1821_, v_a_1822_, v___x_1823_, v_as_1824_, v_i_1825_, v_j_1826_, v_bs_1827_, v___y_1828_);
lean_dec_ref(v___y_1828_);
lean_dec_ref(v_as_1824_);
lean_dec_ref(v_a_1822_);
lean_dec_ref(v_userNames_1821_);
return v_res_1830_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1___redArg(lean_object* v_a_1831_, lean_object* v___x_1832_, lean_object* v_userNames_1833_, lean_object* v_as_1834_, lean_object* v_i_1835_, lean_object* v_j_1836_, lean_object* v_bs_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_){
_start:
{
lean_object* v_zero_1845_; uint8_t v_isZero_1846_; 
v_zero_1845_ = lean_unsigned_to_nat(0u);
v_isZero_1846_ = lean_nat_dec_eq(v_i_1835_, v_zero_1845_);
if (v_isZero_1846_ == 1)
{
lean_object* v___x_1847_; 
lean_dec(v___x_1832_);
v___x_1847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1847_, 0, v_bs_1837_);
return v___x_1847_;
}
else
{
lean_object* v___x_1848_; lean_object* v_toConstantVal_1849_; lean_object* v_fst_1850_; lean_object* v_snd_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1914_; 
v___x_1848_ = lean_array_fget(v_as_1834_, v_j_1836_);
v_toConstantVal_1849_ = lean_ctor_get(v_a_1831_, 0);
v_fst_1850_ = lean_ctor_get(v___x_1848_, 0);
v_snd_1851_ = lean_ctor_get(v___x_1848_, 1);
v_isSharedCheck_1914_ = !lean_is_exclusive(v___x_1848_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1853_ = v___x_1848_;
v_isShared_1854_ = v_isSharedCheck_1914_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_snd_1851_);
lean_inc(v_fst_1850_);
lean_dec(v___x_1848_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1914_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v_name_1855_; lean_object* v___x_1856_; lean_object* v_one_1857_; lean_object* v_n_1858_; lean_object* v_a_1860_; uint8_t v___x_1894_; 
v_name_1855_ = lean_ctor_get(v_toConstantVal_1849_, 0);
v___x_1856_ = lean_box(0);
v_one_1857_ = lean_unsigned_to_nat(1u);
v_n_1858_ = lean_nat_sub(v_i_1835_, v_one_1857_);
v___x_1894_ = l_Lean_Expr_isAppOf(v_snd_1851_, v_name_1855_);
lean_dec(v_snd_1851_);
if (v___x_1894_ == 0)
{
lean_object* v_ref_1895_; lean_object* v_quotContext_1896_; lean_object* v_currMacroScope_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; 
v_ref_1895_ = lean_ctor_get(v___y_1842_, 5);
v_quotContext_1896_ = lean_ctor_get(v___y_1842_, 10);
v_currMacroScope_1897_ = lean_ctor_get(v___y_1842_, 11);
v___x_1898_ = l_Lean_SourceInfo_fromRef(v_ref_1895_, v___x_1894_);
v___x_1899_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_1900_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33);
v___x_1901_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__34));
lean_inc(v_currMacroScope_1897_);
lean_inc(v_quotContext_1896_);
v___x_1902_ = l_Lean_addMacroScope(v_quotContext_1896_, v___x_1901_, v_currMacroScope_1897_);
v___x_1903_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3___redArg___closed__1));
lean_inc_n(v___x_1898_, 2);
v___x_1904_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1904_, 0, v___x_1898_);
lean_ctor_set(v___x_1904_, 1, v___x_1900_);
lean_ctor_set(v___x_1904_, 2, v___x_1902_);
lean_ctor_set(v___x_1904_, 3, v___x_1903_);
v___x_1905_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_1906_ = l_Lean_Syntax_node1(v___x_1898_, v___x_1905_, v_fst_1850_);
v___x_1907_ = l_Lean_Syntax_node2(v___x_1898_, v___x_1899_, v___x_1904_, v___x_1906_);
v_a_1860_ = v___x_1907_;
goto v___jp_1859_;
}
else
{
lean_object* v_ref_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; 
v_ref_1908_ = lean_ctor_get(v___y_1842_, 5);
v___x_1909_ = l_Lean_SourceInfo_fromRef(v_ref_1908_, v_isZero_1846_);
v___x_1910_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_1911_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
lean_inc(v___x_1909_);
v___x_1912_ = l_Lean_Syntax_node1(v___x_1909_, v___x_1911_, v_fst_1850_);
lean_inc(v___x_1832_);
v___x_1913_ = l_Lean_Syntax_node2(v___x_1909_, v___x_1910_, v___x_1832_, v___x_1912_);
v_a_1860_ = v___x_1913_;
goto v___jp_1859_;
}
v___jp_1859_:
{
lean_object* v_ref_1861_; lean_object* v_quotContext_1862_; lean_object* v_currMacroScope_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1869_; 
v_ref_1861_ = lean_ctor_get(v___y_1842_, 5);
v_quotContext_1862_ = lean_ctor_get(v___y_1842_, 10);
v_currMacroScope_1863_ = lean_ctor_get(v___y_1842_, 11);
v___x_1864_ = l_Lean_SourceInfo_fromRef(v_ref_1861_, v_isZero_1846_);
v___x_1865_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__4));
v___x_1866_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__6));
v___x_1867_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__6));
lean_inc(v___x_1864_);
if (v_isShared_1854_ == 0)
{
lean_ctor_set_tag(v___x_1853_, 2);
lean_ctor_set(v___x_1853_, 1, v___x_1867_);
lean_ctor_set(v___x_1853_, 0, v___x_1864_);
v___x_1869_ = v___x_1853_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v___x_1864_);
lean_ctor_set(v_reuseFailAlloc_1893_, 1, v___x_1867_);
v___x_1869_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; 
v___x_1870_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__8));
v___x_1871_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10);
lean_inc(v_currMacroScope_1863_);
lean_inc(v_quotContext_1862_);
v___x_1872_ = l_Lean_addMacroScope(v_quotContext_1862_, v___x_1856_, v_currMacroScope_1863_);
v___x_1873_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__28));
lean_inc_n(v___x_1864_, 7);
v___x_1874_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1874_, 0, v___x_1864_);
lean_ctor_set(v___x_1874_, 1, v___x_1871_);
lean_ctor_set(v___x_1874_, 2, v___x_1872_);
lean_ctor_set(v___x_1874_, 3, v___x_1873_);
v___x_1875_ = l_Lean_Syntax_node1(v___x_1864_, v___x_1870_, v___x_1874_);
v___x_1876_ = l_Lean_Syntax_node2(v___x_1864_, v___x_1866_, v___x_1869_, v___x_1875_);
v___x_1877_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_1878_ = lean_array_get_borrowed(v___x_1856_, v_userNames_1833_, v_j_1836_);
lean_inc(v___x_1878_);
v___x_1879_ = lean_erase_macro_scopes(v___x_1878_);
v___x_1880_ = l_Lean_Name_getString_x21(v___x_1879_);
lean_dec(v___x_1879_);
v___x_1881_ = lean_box(2);
v___x_1882_ = l_Lean_Syntax_mkStrLit(v___x_1880_, v___x_1881_);
v___x_1883_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__29));
v___x_1884_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1884_, 0, v___x_1864_);
lean_ctor_set(v___x_1884_, 1, v___x_1883_);
v___x_1885_ = l_Lean_Syntax_node1(v___x_1864_, v___x_1877_, v_a_1860_);
v___x_1886_ = l_Lean_Syntax_node3(v___x_1864_, v___x_1877_, v___x_1882_, v___x_1884_, v___x_1885_);
v___x_1887_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__25));
v___x_1888_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1888_, 0, v___x_1864_);
lean_ctor_set(v___x_1888_, 1, v___x_1887_);
v___x_1889_ = l_Lean_Syntax_node3(v___x_1864_, v___x_1865_, v___x_1876_, v___x_1886_, v___x_1888_);
v___x_1890_ = lean_nat_add(v_j_1836_, v_one_1857_);
v___x_1891_ = lean_array_push(v_bs_1837_, v___x_1889_);
v___x_1892_ = l_Array_mapFinIdxM_map___at___00Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1_spec__1___redArg(v_userNames_1833_, v_a_1831_, v___x_1832_, v_as_1834_, v_n_1858_, v___x_1890_, v___x_1891_, v___y_1842_);
return v___x_1892_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1___redArg___boxed(lean_object* v_a_1915_, lean_object* v___x_1916_, lean_object* v_userNames_1917_, lean_object* v_as_1918_, lean_object* v_i_1919_, lean_object* v_j_1920_, lean_object* v_bs_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_){
_start:
{
lean_object* v_res_1929_; 
v_res_1929_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1___redArg(v_a_1915_, v___x_1916_, v_userNames_1917_, v_as_1918_, v_i_1919_, v_j_1920_, v_bs_1921_, v___y_1922_, v___y_1923_, v___y_1924_, v___y_1925_, v___y_1926_, v___y_1927_);
lean_dec(v___y_1927_);
lean_dec_ref(v___y_1926_);
lean_dec(v___y_1925_);
lean_dec_ref(v___y_1924_);
lean_dec(v___y_1923_);
lean_dec_ref(v___y_1922_);
lean_dec(v_j_1920_);
lean_dec(v_i_1919_);
lean_dec_ref(v_as_1918_);
lean_dec_ref(v_userNames_1917_);
lean_dec_ref(v_a_1915_);
return v_res_1929_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__6(void){
_start:
{
lean_object* v___x_1946_; lean_object* v___x_1947_; 
v___x_1946_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__5));
v___x_1947_ = l_String_toRawSubstring_x27(v___x_1946_);
return v___x_1947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0(lean_object* v___x_1971_, lean_object* v_a_1972_, lean_object* v___x_1973_, lean_object* v_ctor_1974_, lean_object* v_args_1975_, lean_object* v_userNames_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_){
_start:
{
lean_object* v_toConstantVal_1984_; lean_object* v_name_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_2237_; 
v_toConstantVal_1984_ = lean_ctor_get(v_ctor_1974_, 0);
lean_inc_ref(v_toConstantVal_1984_);
lean_dec_ref(v_ctor_1974_);
v_name_1985_ = lean_ctor_get(v_toConstantVal_1984_, 0);
v_isSharedCheck_2237_ = !lean_is_exclusive(v_toConstantVal_1984_);
if (v_isSharedCheck_2237_ == 0)
{
lean_object* v_unused_2238_; lean_object* v_unused_2239_; 
v_unused_2238_ = lean_ctor_get(v_toConstantVal_1984_, 2);
lean_dec(v_unused_2238_);
v_unused_2239_ = lean_ctor_get(v_toConstantVal_1984_, 1);
lean_dec(v_unused_2239_);
v___x_1987_ = v_toConstantVal_1984_;
v_isShared_1988_ = v_isSharedCheck_2237_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_name_1985_);
lean_dec(v_toConstantVal_1984_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_2237_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; uint8_t v___x_1992_; lean_object* v_a_1994_; lean_object* v_xs_2038_; lean_object* v_userNames_2039_; lean_object* v___y_2040_; lean_object* v___y_2041_; lean_object* v___y_2042_; lean_object* v___y_2043_; lean_object* v___y_2044_; lean_object* v___y_2045_; 
v___x_1989_ = lean_erase_macro_scopes(v_name_1985_);
v___x_1990_ = l_Lean_Name_getString_x21(v___x_1989_);
lean_dec(v___x_1989_);
v___x_1991_ = lean_array_get_size(v_args_1975_);
v___x_1992_ = lean_nat_dec_eq(v___x_1991_, v___x_1971_);
if (v___x_1992_ == 0)
{
lean_object* v___x_2111_; uint8_t v___x_2112_; 
v___x_2111_ = lean_unsigned_to_nat(1u);
v___x_2112_ = lean_nat_dec_eq(v___x_1991_, v___x_2111_);
if (v___x_2112_ == 0)
{
if (lean_obj_tag(v_userNames_1976_) == 0)
{
size_t v_sz_2113_; size_t v___x_2114_; lean_object* v___x_2115_; 
lean_del_object(v___x_1987_);
v_sz_2113_ = lean_array_size(v_args_1975_);
v___x_2114_ = ((size_t)0ULL);
v___x_2115_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2(v_a_1972_, v___x_1973_, v_sz_2113_, v___x_2114_, v_args_1975_, v___y_1977_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_, v___y_1982_);
if (lean_obj_tag(v___x_2115_) == 0)
{
lean_object* v_a_2116_; lean_object* v___x_2118_; uint8_t v_isShared_2119_; uint8_t v_isSharedCheck_2182_; 
v_a_2116_ = lean_ctor_get(v___x_2115_, 0);
v_isSharedCheck_2182_ = !lean_is_exclusive(v___x_2115_);
if (v_isSharedCheck_2182_ == 0)
{
v___x_2118_ = v___x_2115_;
v_isShared_2119_ = v_isSharedCheck_2182_;
goto v_resetjp_2117_;
}
else
{
lean_inc(v_a_2116_);
lean_dec(v___x_2115_);
v___x_2118_ = lean_box(0);
v_isShared_2119_ = v_isSharedCheck_2182_;
goto v_resetjp_2117_;
}
v_resetjp_2117_:
{
lean_object* v_ref_2120_; lean_object* v_quotContext_2121_; lean_object* v_currMacroScope_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; size_t v_sz_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2180_; 
v_ref_2120_ = lean_ctor_get(v___y_1981_, 5);
v_quotContext_2121_ = lean_ctor_get(v___y_1981_, 10);
v_currMacroScope_2122_ = lean_ctor_get(v___y_1981_, 11);
v___x_2123_ = l_Lean_SourceInfo_fromRef(v_ref_2120_, v___x_2112_);
v___x_2124_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_2125_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__3, &l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__3_once, _init_l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__3);
v___x_2126_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__4));
lean_inc_n(v_currMacroScope_2122_, 3);
lean_inc_n(v_quotContext_2121_, 3);
v___x_2127_ = l_Lean_addMacroScope(v_quotContext_2121_, v___x_2126_, v_currMacroScope_2122_);
v___x_2128_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__7));
lean_inc_n(v___x_2123_, 21);
v___x_2129_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2129_, 0, v___x_2123_);
lean_ctor_set(v___x_2129_, 1, v___x_2125_);
lean_ctor_set(v___x_2129_, 2, v___x_2127_);
lean_ctor_set(v___x_2129_, 3, v___x_2128_);
v___x_2130_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_2131_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__1));
v___x_2132_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__2));
v___x_2133_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2123_);
lean_ctor_set(v___x_2133_, 1, v___x_2132_);
v___x_2134_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__4));
v___x_2135_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__6));
v___x_2136_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__6));
v___x_2137_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2137_, 0, v___x_2123_);
lean_ctor_set(v___x_2137_, 1, v___x_2136_);
v___x_2138_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__8));
v___x_2139_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10);
v___x_2140_ = lean_box(0);
v___x_2141_ = l_Lean_addMacroScope(v_quotContext_2121_, v___x_2140_, v_currMacroScope_2122_);
v___x_2142_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__4));
v___x_2143_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2143_, 0, v___x_2123_);
lean_ctor_set(v___x_2143_, 1, v___x_2139_);
lean_ctor_set(v___x_2143_, 2, v___x_2141_);
lean_ctor_set(v___x_2143_, 3, v___x_2142_);
v___x_2144_ = l_Lean_Syntax_node1(v___x_2123_, v___x_2138_, v___x_2143_);
v___x_2145_ = l_Lean_Syntax_node2(v___x_2123_, v___x_2135_, v___x_2137_, v___x_2144_);
v___x_2146_ = lean_box(2);
v___x_2147_ = l_Lean_Syntax_mkStrLit(v___x_1990_, v___x_2146_);
v___x_2148_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__29));
v___x_2149_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2149_, 0, v___x_2123_);
lean_ctor_set(v___x_2149_, 1, v___x_2148_);
v___x_2150_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__6, &l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__6_once, _init_l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__6);
v___x_2151_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__8));
v___x_2152_ = l_Lean_addMacroScope(v_quotContext_2121_, v___x_2151_, v_currMacroScope_2122_);
v___x_2153_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__13));
v___x_2154_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2154_, 0, v___x_2123_);
lean_ctor_set(v___x_2154_, 1, v___x_2150_);
lean_ctor_set(v___x_2154_, 2, v___x_2152_);
lean_ctor_set(v___x_2154_, 3, v___x_2153_);
v___x_2155_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__15));
v___x_2156_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__16));
v___x_2157_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2157_, 0, v___x_2123_);
lean_ctor_set(v___x_2157_, 1, v___x_2156_);
v___x_2158_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24);
v_sz_2159_ = lean_array_size(v_a_2116_);
v___x_2160_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__1(v_sz_2159_, v___x_2114_, v_a_2116_);
v___x_2161_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6);
v___x_2162_ = l_Lean_mkSepArray(v___x_2160_, v___x_2161_);
lean_dec_ref(v___x_2160_);
v___x_2163_ = l_Array_append___redArg(v___x_2158_, v___x_2162_);
lean_dec_ref(v___x_2162_);
v___x_2164_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2164_, 0, v___x_2123_);
lean_ctor_set(v___x_2164_, 1, v___x_2130_);
lean_ctor_set(v___x_2164_, 2, v___x_2163_);
v___x_2165_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__43));
v___x_2166_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2166_, 0, v___x_2123_);
lean_ctor_set(v___x_2166_, 1, v___x_2165_);
lean_inc_ref(v___x_2166_);
v___x_2167_ = l_Lean_Syntax_node3(v___x_2123_, v___x_2155_, v___x_2157_, v___x_2164_, v___x_2166_);
v___x_2168_ = l_Lean_Syntax_node1(v___x_2123_, v___x_2130_, v___x_2167_);
v___x_2169_ = l_Lean_Syntax_node2(v___x_2123_, v___x_2124_, v___x_2154_, v___x_2168_);
v___x_2170_ = l_Lean_Syntax_node1(v___x_2123_, v___x_2130_, v___x_2169_);
v___x_2171_ = l_Lean_Syntax_node3(v___x_2123_, v___x_2130_, v___x_2147_, v___x_2149_, v___x_2170_);
v___x_2172_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__25));
v___x_2173_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2173_, 0, v___x_2123_);
lean_ctor_set(v___x_2173_, 1, v___x_2172_);
v___x_2174_ = l_Lean_Syntax_node3(v___x_2123_, v___x_2134_, v___x_2145_, v___x_2171_, v___x_2173_);
v___x_2175_ = l_Lean_Syntax_node1(v___x_2123_, v___x_2130_, v___x_2174_);
v___x_2176_ = l_Lean_Syntax_node3(v___x_2123_, v___x_2131_, v___x_2133_, v___x_2175_, v___x_2166_);
v___x_2177_ = l_Lean_Syntax_node1(v___x_2123_, v___x_2130_, v___x_2176_);
v___x_2178_ = l_Lean_Syntax_node2(v___x_2123_, v___x_2124_, v___x_2129_, v___x_2177_);
if (v_isShared_2119_ == 0)
{
lean_ctor_set(v___x_2118_, 0, v___x_2178_);
v___x_2180_ = v___x_2118_;
goto v_reusejp_2179_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v___x_2178_);
v___x_2180_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2179_;
}
v_reusejp_2179_:
{
return v___x_2180_;
}
}
}
else
{
lean_object* v_a_2183_; lean_object* v___x_2185_; uint8_t v_isShared_2186_; uint8_t v_isSharedCheck_2190_; 
lean_dec_ref(v___x_1990_);
v_a_2183_ = lean_ctor_get(v___x_2115_, 0);
v_isSharedCheck_2190_ = !lean_is_exclusive(v___x_2115_);
if (v_isSharedCheck_2190_ == 0)
{
v___x_2185_ = v___x_2115_;
v_isShared_2186_ = v_isSharedCheck_2190_;
goto v_resetjp_2184_;
}
else
{
lean_inc(v_a_2183_);
lean_dec(v___x_2115_);
v___x_2185_ = lean_box(0);
v_isShared_2186_ = v_isSharedCheck_2190_;
goto v_resetjp_2184_;
}
v_resetjp_2184_:
{
lean_object* v___x_2188_; 
if (v_isShared_2186_ == 0)
{
v___x_2188_ = v___x_2185_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2189_; 
v_reuseFailAlloc_2189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2189_, 0, v_a_2183_);
v___x_2188_ = v_reuseFailAlloc_2189_;
goto v_reusejp_2187_;
}
v_reusejp_2187_:
{
return v___x_2188_;
}
}
}
}
else
{
lean_object* v_val_2191_; 
v_val_2191_ = lean_ctor_get(v_userNames_1976_, 0);
v_xs_2038_ = v_args_1975_;
v_userNames_2039_ = v_val_2191_;
v___y_2040_ = v___y_1977_;
v___y_2041_ = v___y_1978_;
v___y_2042_ = v___y_1979_;
v___y_2043_ = v___y_1980_;
v___y_2044_ = v___y_1981_;
v___y_2045_ = v___y_1982_;
goto v___jp_2037_;
}
}
else
{
lean_object* v___x_2192_; 
v___x_2192_ = lean_array_fget(v_args_1975_, v___x_1971_);
lean_dec_ref(v_args_1975_);
if (lean_obj_tag(v_userNames_1976_) == 0)
{
lean_object* v_toConstantVal_2193_; lean_object* v_fst_2194_; lean_object* v_snd_2195_; lean_object* v_name_2196_; uint8_t v___x_2197_; 
lean_del_object(v___x_1987_);
v_toConstantVal_2193_ = lean_ctor_get(v_a_1972_, 0);
v_fst_2194_ = lean_ctor_get(v___x_2192_, 0);
lean_inc(v_fst_2194_);
v_snd_2195_ = lean_ctor_get(v___x_2192_, 1);
lean_inc(v_snd_2195_);
lean_dec(v___x_2192_);
v_name_2196_ = lean_ctor_get(v_toConstantVal_2193_, 0);
v___x_2197_ = l_Lean_Expr_isAppOf(v_snd_2195_, v_name_2196_);
lean_dec(v_snd_2195_);
if (v___x_2197_ == 0)
{
lean_object* v_ref_2198_; lean_object* v_quotContext_2199_; lean_object* v_currMacroScope_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
lean_dec(v___x_1973_);
v_ref_2198_ = lean_ctor_get(v___y_1981_, 5);
v_quotContext_2199_ = lean_ctor_get(v___y_1981_, 10);
v_currMacroScope_2200_ = lean_ctor_get(v___y_1981_, 11);
v___x_2201_ = l_Lean_SourceInfo_fromRef(v_ref_2198_, v___x_2197_);
v___x_2202_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_2203_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33);
v___x_2204_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__34));
lean_inc(v_currMacroScope_2200_);
lean_inc(v_quotContext_2199_);
v___x_2205_ = l_Lean_addMacroScope(v_quotContext_2199_, v___x_2204_, v_currMacroScope_2200_);
v___x_2206_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3___redArg___closed__1));
lean_inc_n(v___x_2201_, 2);
v___x_2207_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2207_, 0, v___x_2201_);
lean_ctor_set(v___x_2207_, 1, v___x_2203_);
lean_ctor_set(v___x_2207_, 2, v___x_2205_);
lean_ctor_set(v___x_2207_, 3, v___x_2206_);
v___x_2208_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_2209_ = l_Lean_Syntax_node1(v___x_2201_, v___x_2208_, v_fst_2194_);
v___x_2210_ = l_Lean_Syntax_node2(v___x_2201_, v___x_2202_, v___x_2207_, v___x_2209_);
v_a_1994_ = v___x_2210_;
goto v___jp_1993_;
}
else
{
lean_object* v_ref_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; 
v_ref_2211_ = lean_ctor_get(v___y_1981_, 5);
v___x_2212_ = l_Lean_SourceInfo_fromRef(v_ref_2211_, v___x_1992_);
v___x_2213_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_2214_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
lean_inc(v___x_2212_);
v___x_2215_ = l_Lean_Syntax_node1(v___x_2212_, v___x_2214_, v_fst_2194_);
v___x_2216_ = l_Lean_Syntax_node2(v___x_2212_, v___x_2213_, v___x_1973_, v___x_2215_);
v_a_1994_ = v___x_2216_;
goto v___jp_1993_;
}
}
else
{
lean_object* v_val_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; 
v_val_2217_ = lean_ctor_get(v_userNames_1976_, 0);
v___x_2218_ = lean_mk_empty_array_with_capacity(v___x_2111_);
v___x_2219_ = lean_array_push(v___x_2218_, v___x_2192_);
v_xs_2038_ = v___x_2219_;
v_userNames_2039_ = v_val_2217_;
v___y_2040_ = v___y_1977_;
v___y_2041_ = v___y_1978_;
v___y_2042_ = v___y_1979_;
v___y_2043_ = v___y_1980_;
v___y_2044_ = v___y_1981_;
v___y_2045_ = v___y_1982_;
goto v___jp_2037_;
}
}
}
else
{
lean_object* v_ref_2220_; lean_object* v_quotContext_2221_; lean_object* v_currMacroScope_2222_; uint8_t v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; 
lean_del_object(v___x_1987_);
lean_dec_ref(v_args_1975_);
lean_dec(v___x_1973_);
v_ref_2220_ = lean_ctor_get(v___y_1981_, 5);
v_quotContext_2221_ = lean_ctor_get(v___y_1981_, 10);
v_currMacroScope_2222_ = lean_ctor_get(v___y_1981_, 11);
v___x_2223_ = 0;
v___x_2224_ = l_Lean_SourceInfo_fromRef(v_ref_2220_, v___x_2223_);
v___x_2225_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_2226_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__33);
v___x_2227_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__34));
lean_inc(v_currMacroScope_2222_);
lean_inc(v_quotContext_2221_);
v___x_2228_ = l_Lean_addMacroScope(v_quotContext_2221_, v___x_2227_, v_currMacroScope_2222_);
v___x_2229_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3___redArg___closed__1));
lean_inc_n(v___x_2224_, 2);
v___x_2230_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2230_, 0, v___x_2224_);
lean_ctor_set(v___x_2230_, 1, v___x_2226_);
lean_ctor_set(v___x_2230_, 2, v___x_2228_);
lean_ctor_set(v___x_2230_, 3, v___x_2229_);
v___x_2231_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_2232_ = lean_box(2);
v___x_2233_ = l_Lean_Syntax_mkStrLit(v___x_1990_, v___x_2232_);
v___x_2234_ = l_Lean_Syntax_node1(v___x_2224_, v___x_2231_, v___x_2233_);
v___x_2235_ = l_Lean_Syntax_node2(v___x_2224_, v___x_2225_, v___x_2230_, v___x_2234_);
v___x_2236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2236_, 0, v___x_2235_);
return v___x_2236_;
}
v___jp_1993_:
{
lean_object* v_ref_1995_; lean_object* v_quotContext_1996_; lean_object* v_currMacroScope_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; 
v_ref_1995_ = lean_ctor_get(v___y_1981_, 5);
v_quotContext_1996_ = lean_ctor_get(v___y_1981_, 10);
v_currMacroScope_1997_ = lean_ctor_get(v___y_1981_, 11);
v___x_1998_ = l_Lean_SourceInfo_fromRef(v_ref_1995_, v___x_1992_);
v___x_1999_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_2000_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__3, &l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__3_once, _init_l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__3);
v___x_2001_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__4));
lean_inc_n(v_currMacroScope_1997_, 2);
lean_inc_n(v_quotContext_1996_, 2);
v___x_2002_ = l_Lean_addMacroScope(v_quotContext_1996_, v___x_2001_, v_currMacroScope_1997_);
v___x_2003_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__7));
lean_inc_n(v___x_1998_, 15);
v___x_2004_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2004_, 0, v___x_1998_);
lean_ctor_set(v___x_2004_, 1, v___x_2000_);
lean_ctor_set(v___x_2004_, 2, v___x_2002_);
lean_ctor_set(v___x_2004_, 3, v___x_2003_);
v___x_2005_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_2006_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__1));
v___x_2007_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__2));
v___x_2008_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2008_, 0, v___x_1998_);
lean_ctor_set(v___x_2008_, 1, v___x_2007_);
v___x_2009_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__4));
v___x_2010_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__6));
v___x_2011_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__6));
v___x_2012_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2012_, 0, v___x_1998_);
lean_ctor_set(v___x_2012_, 1, v___x_2011_);
v___x_2013_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__8));
v___x_2014_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10);
v___x_2015_ = lean_box(0);
v___x_2016_ = l_Lean_addMacroScope(v_quotContext_1996_, v___x_2015_, v_currMacroScope_1997_);
v___x_2017_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__4));
v___x_2018_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2018_, 0, v___x_1998_);
lean_ctor_set(v___x_2018_, 1, v___x_2014_);
lean_ctor_set(v___x_2018_, 2, v___x_2016_);
lean_ctor_set(v___x_2018_, 3, v___x_2017_);
v___x_2019_ = l_Lean_Syntax_node1(v___x_1998_, v___x_2013_, v___x_2018_);
v___x_2020_ = l_Lean_Syntax_node2(v___x_1998_, v___x_2010_, v___x_2012_, v___x_2019_);
v___x_2021_ = lean_box(2);
v___x_2022_ = l_Lean_Syntax_mkStrLit(v___x_1990_, v___x_2021_);
v___x_2023_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__29));
v___x_2024_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2024_, 0, v___x_1998_);
lean_ctor_set(v___x_2024_, 1, v___x_2023_);
v___x_2025_ = l_Lean_Syntax_node1(v___x_1998_, v___x_2005_, v_a_1994_);
v___x_2026_ = l_Lean_Syntax_node3(v___x_1998_, v___x_2005_, v___x_2022_, v___x_2024_, v___x_2025_);
v___x_2027_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__25));
v___x_2028_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2028_, 0, v___x_1998_);
lean_ctor_set(v___x_2028_, 1, v___x_2027_);
v___x_2029_ = l_Lean_Syntax_node3(v___x_1998_, v___x_2009_, v___x_2020_, v___x_2026_, v___x_2028_);
v___x_2030_ = l_Lean_Syntax_node1(v___x_1998_, v___x_2005_, v___x_2029_);
v___x_2031_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__43));
v___x_2032_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2032_, 0, v___x_1998_);
lean_ctor_set(v___x_2032_, 1, v___x_2031_);
v___x_2033_ = l_Lean_Syntax_node3(v___x_1998_, v___x_2006_, v___x_2008_, v___x_2030_, v___x_2032_);
v___x_2034_ = l_Lean_Syntax_node1(v___x_1998_, v___x_2005_, v___x_2033_);
v___x_2035_ = l_Lean_Syntax_node2(v___x_1998_, v___x_1999_, v___x_2004_, v___x_2034_);
v___x_2036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2036_, 0, v___x_2035_);
return v___x_2036_;
}
v___jp_2037_:
{
lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v_a_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2110_; 
v___x_2046_ = lean_array_get_size(v_xs_2038_);
v___x_2047_ = lean_mk_empty_array_with_capacity(v___x_2046_);
v___x_2048_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1___redArg(v_a_1972_, v___x_1973_, v_userNames_2039_, v_xs_2038_, v___x_2046_, v___x_1971_, v___x_2047_, v___y_2040_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_);
lean_dec_ref(v_xs_2038_);
v_a_2049_ = lean_ctor_get(v___x_2048_, 0);
v_isSharedCheck_2110_ = !lean_is_exclusive(v___x_2048_);
if (v_isSharedCheck_2110_ == 0)
{
v___x_2051_ = v___x_2048_;
v_isShared_2052_ = v_isSharedCheck_2110_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_a_2049_);
lean_dec(v___x_2048_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2110_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v_ref_2053_; lean_object* v_quotContext_2054_; lean_object* v_currMacroScope_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; size_t v_sz_2084_; size_t v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2091_; 
v_ref_2053_ = lean_ctor_get(v___y_2044_, 5);
v_quotContext_2054_ = lean_ctor_get(v___y_2044_, 10);
v_currMacroScope_2055_ = lean_ctor_get(v___y_2044_, 11);
v___x_2056_ = l_Lean_SourceInfo_fromRef(v_ref_2053_, v___x_1992_);
v___x_2057_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_2058_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__3, &l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__3_once, _init_l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__3);
v___x_2059_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__4));
lean_inc_n(v_currMacroScope_2055_, 2);
lean_inc_n(v_quotContext_2054_, 2);
v___x_2060_ = l_Lean_addMacroScope(v_quotContext_2054_, v___x_2059_, v_currMacroScope_2055_);
v___x_2061_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__7));
lean_inc_n(v___x_2056_, 8);
v___x_2062_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2062_, 0, v___x_2056_);
lean_ctor_set(v___x_2062_, 1, v___x_2058_);
lean_ctor_set(v___x_2062_, 2, v___x_2060_);
lean_ctor_set(v___x_2062_, 3, v___x_2061_);
v___x_2063_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_2064_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__1));
v___x_2065_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__2));
v___x_2066_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2056_);
lean_ctor_set(v___x_2066_, 1, v___x_2065_);
v___x_2067_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__4));
v___x_2068_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__6));
v___x_2069_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__6));
v___x_2070_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2070_, 0, v___x_2056_);
lean_ctor_set(v___x_2070_, 1, v___x_2069_);
v___x_2071_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__8));
v___x_2072_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10);
v___x_2073_ = lean_box(0);
v___x_2074_ = l_Lean_addMacroScope(v_quotContext_2054_, v___x_2073_, v_currMacroScope_2055_);
v___x_2075_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__4));
v___x_2076_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2076_, 0, v___x_2056_);
lean_ctor_set(v___x_2076_, 1, v___x_2072_);
lean_ctor_set(v___x_2076_, 2, v___x_2074_);
lean_ctor_set(v___x_2076_, 3, v___x_2075_);
v___x_2077_ = l_Lean_Syntax_node1(v___x_2056_, v___x_2071_, v___x_2076_);
v___x_2078_ = l_Lean_Syntax_node2(v___x_2056_, v___x_2068_, v___x_2070_, v___x_2077_);
v___x_2079_ = lean_box(2);
v___x_2080_ = l_Lean_Syntax_mkStrLit(v___x_1990_, v___x_2079_);
v___x_2081_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__29));
v___x_2082_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2056_);
lean_ctor_set(v___x_2082_, 1, v___x_2081_);
v___x_2083_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24);
v_sz_2084_ = lean_array_size(v_a_2049_);
v___x_2085_ = ((size_t)0ULL);
v___x_2086_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__1(v_sz_2084_, v___x_2085_, v_a_2049_);
v___x_2087_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6);
v___x_2088_ = l_Lean_mkSepArray(v___x_2086_, v___x_2087_);
lean_dec_ref(v___x_2086_);
v___x_2089_ = l_Array_append___redArg(v___x_2083_, v___x_2088_);
lean_dec_ref(v___x_2088_);
if (v_isShared_1988_ == 0)
{
lean_ctor_set_tag(v___x_1987_, 1);
lean_ctor_set(v___x_1987_, 2, v___x_2089_);
lean_ctor_set(v___x_1987_, 1, v___x_2063_);
lean_ctor_set(v___x_1987_, 0, v___x_2056_);
v___x_2091_ = v___x_1987_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v___x_2056_);
lean_ctor_set(v_reuseFailAlloc_2109_, 1, v___x_2063_);
lean_ctor_set(v_reuseFailAlloc_2109_, 2, v___x_2089_);
v___x_2091_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2107_; 
v___x_2092_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__43));
lean_inc_n(v___x_2056_, 11);
v___x_2093_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2093_, 0, v___x_2056_);
lean_ctor_set(v___x_2093_, 1, v___x_2092_);
lean_inc_ref(v___x_2093_);
lean_inc_ref(v___x_2066_);
v___x_2094_ = l_Lean_Syntax_node3(v___x_2056_, v___x_2064_, v___x_2066_, v___x_2091_, v___x_2093_);
v___x_2095_ = l_Lean_Syntax_node1(v___x_2056_, v___x_2063_, v___x_2094_);
lean_inc_ref(v___x_2062_);
v___x_2096_ = l_Lean_Syntax_node2(v___x_2056_, v___x_2057_, v___x_2062_, v___x_2095_);
v___x_2097_ = l_Lean_Syntax_node1(v___x_2056_, v___x_2063_, v___x_2096_);
v___x_2098_ = l_Lean_Syntax_node3(v___x_2056_, v___x_2063_, v___x_2080_, v___x_2082_, v___x_2097_);
v___x_2099_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__25));
v___x_2100_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2100_, 0, v___x_2056_);
lean_ctor_set(v___x_2100_, 1, v___x_2099_);
v___x_2101_ = l_Lean_Syntax_node3(v___x_2056_, v___x_2067_, v___x_2078_, v___x_2098_, v___x_2100_);
v___x_2102_ = l_Lean_Syntax_node1(v___x_2056_, v___x_2063_, v___x_2101_);
v___x_2103_ = l_Lean_Syntax_node3(v___x_2056_, v___x_2064_, v___x_2066_, v___x_2102_, v___x_2093_);
v___x_2104_ = l_Lean_Syntax_node1(v___x_2056_, v___x_2063_, v___x_2103_);
v___x_2105_ = l_Lean_Syntax_node2(v___x_2056_, v___x_2057_, v___x_2062_, v___x_2104_);
if (v_isShared_2052_ == 0)
{
lean_ctor_set(v___x_2051_, 0, v___x_2105_);
v___x_2107_ = v___x_2051_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2108_; 
v_reuseFailAlloc_2108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2108_, 0, v___x_2105_);
v___x_2107_ = v_reuseFailAlloc_2108_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
return v___x_2107_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___boxed(lean_object* v___x_2240_, lean_object* v_a_2241_, lean_object* v___x_2242_, lean_object* v_ctor_2243_, lean_object* v_args_2244_, lean_object* v_userNames_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_){
_start:
{
lean_object* v_res_2253_; 
v_res_2253_ = l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0(v___x_2240_, v_a_2241_, v___x_2242_, v_ctor_2243_, v_args_2244_, v_userNames_2245_, v___y_2246_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_);
lean_dec(v___y_2251_);
lean_dec_ref(v___y_2250_);
lean_dec(v___y_2249_);
lean_dec_ref(v___y_2248_);
lean_dec(v___y_2247_);
lean_dec_ref(v___y_2246_);
lean_dec(v_userNames_2245_);
lean_dec_ref(v_a_2241_);
lean_dec(v___x_2240_);
return v_res_2253_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2255_; lean_object* v___x_2256_; 
v___x_2255_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__0___closed__0));
v___x_2256_ = l_Lean_stringToMessageData(v___x_2255_);
return v___x_2256_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__0(lean_object* v_constName_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_){
_start:
{
lean_object* v___x_2265_; lean_object* v_env_2266_; lean_object* v___x_2267_; 
v___x_2265_ = lean_st_ref_get(v___y_2263_);
v_env_2266_ = lean_ctor_get(v___x_2265_, 0);
lean_inc_ref(v_env_2266_);
lean_dec(v___x_2265_);
lean_inc(v_constName_2257_);
v___x_2267_ = l_Lean_isInductiveCore_x3f(v_env_2266_, v_constName_2257_);
if (lean_obj_tag(v___x_2267_) == 0)
{
lean_object* v___x_2268_; uint8_t v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; 
v___x_2268_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__1);
v___x_2269_ = 0;
v___x_2270_ = l_Lean_MessageData_ofConstName(v_constName_2257_, v___x_2269_);
v___x_2271_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2271_, 0, v___x_2268_);
lean_ctor_set(v___x_2271_, 1, v___x_2270_);
v___x_2272_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__0___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__0___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__0___closed__1);
v___x_2273_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2273_, 0, v___x_2271_);
lean_ctor_set(v___x_2273_, 1, v___x_2272_);
v___x_2274_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0___redArg(v___x_2273_, v___y_2258_, v___y_2259_, v___y_2260_, v___y_2261_, v___y_2262_, v___y_2263_);
return v___x_2274_;
}
else
{
lean_object* v_val_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2282_; 
lean_dec(v_constName_2257_);
v_val_2275_ = lean_ctor_get(v___x_2267_, 0);
v_isSharedCheck_2282_ = !lean_is_exclusive(v___x_2267_);
if (v_isSharedCheck_2282_ == 0)
{
v___x_2277_ = v___x_2267_;
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_val_2275_);
lean_dec(v___x_2267_);
v___x_2277_ = lean_box(0);
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
v_resetjp_2276_:
{
lean_object* v___x_2280_; 
if (v_isShared_2278_ == 0)
{
lean_ctor_set_tag(v___x_2277_, 0);
v___x_2280_ = v___x_2277_;
goto v_reusejp_2279_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v_val_2275_);
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
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__0___boxed(lean_object* v_constName_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_){
_start:
{
lean_object* v_res_2291_; 
v_res_2291_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__0(v_constName_2283_, v___y_2284_, v___y_2285_, v___y_2286_, v___y_2287_, v___y_2288_, v___y_2289_);
lean_dec(v___y_2289_);
lean_dec_ref(v___y_2288_);
lean_dec(v___y_2287_);
lean_dec_ref(v___y_2286_);
lean_dec(v___y_2285_);
lean_dec_ref(v___y_2284_);
return v_res_2291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct(lean_object* v_ctx_2305_, lean_object* v_header_2306_, lean_object* v_indName_2307_, lean_object* v_a_2308_, lean_object* v_a_2309_, lean_object* v_a_2310_, lean_object* v_a_2311_, lean_object* v_a_2312_, lean_object* v_a_2313_){
_start:
{
lean_object* v___x_2315_; 
v___x_2315_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__0(v_indName_2307_, v_a_2308_, v_a_2309_, v_a_2310_, v_a_2311_, v_a_2312_, v_a_2313_);
if (lean_obj_tag(v___x_2315_) == 0)
{
lean_object* v_a_2316_; lean_object* v___x_2317_; 
v_a_2316_ = lean_ctor_get(v___x_2315_, 0);
lean_inc_n(v_a_2316_, 2);
lean_dec_ref_known(v___x_2315_, 1);
v___x_2317_ = l_Lean_Elab_Deriving_mkDiscrs(v_header_2306_, v_a_2316_, v_a_2308_, v_a_2309_, v_a_2310_, v_a_2311_, v_a_2312_, v_a_2313_);
if (lean_obj_tag(v___x_2317_) == 0)
{
lean_object* v_a_2318_; lean_object* v_auxFunNames_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___f_2324_; lean_object* v___x_2325_; 
v_a_2318_ = lean_ctor_get(v___x_2317_, 0);
lean_inc(v_a_2318_);
lean_dec_ref_known(v___x_2317_, 1);
v_auxFunNames_2319_ = lean_ctor_get(v_ctx_2305_, 2);
v___x_2320_ = lean_box(0);
v___x_2321_ = lean_unsigned_to_nat(0u);
v___x_2322_ = lean_array_get_borrowed(v___x_2320_, v_auxFunNames_2319_, v___x_2321_);
lean_inc(v___x_2322_);
v___x_2323_ = lean_mk_syntax_ident(v___x_2322_);
lean_inc(v_a_2316_);
v___f_2324_ = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___boxed), 13, 3);
lean_closure_set(v___f_2324_, 0, v___x_2321_);
lean_closure_set(v___f_2324_, 1, v_a_2316_);
lean_closure_set(v___f_2324_, 2, v___x_2323_);
v___x_2325_ = l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts(v_a_2316_, v___f_2324_, v_a_2308_, v_a_2309_, v_a_2310_, v_a_2311_, v_a_2312_, v_a_2313_);
if (lean_obj_tag(v___x_2325_) == 0)
{
lean_object* v_a_2326_; lean_object* v___x_2328_; uint8_t v_isShared_2329_; uint8_t v_isSharedCheck_2356_; 
v_a_2326_ = lean_ctor_get(v___x_2325_, 0);
v_isSharedCheck_2356_ = !lean_is_exclusive(v___x_2325_);
if (v_isSharedCheck_2356_ == 0)
{
v___x_2328_ = v___x_2325_;
v_isShared_2329_ = v_isSharedCheck_2356_;
goto v_resetjp_2327_;
}
else
{
lean_inc(v_a_2326_);
lean_dec(v___x_2325_);
v___x_2328_ = lean_box(0);
v_isShared_2329_ = v_isSharedCheck_2356_;
goto v_resetjp_2327_;
}
v_resetjp_2327_:
{
lean_object* v_ref_2330_; uint8_t v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; size_t v_sz_2339_; size_t v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2354_; 
v_ref_2330_ = lean_ctor_get(v_a_2312_, 5);
v___x_2331_ = 0;
v___x_2332_ = l_Lean_SourceInfo_fromRef(v_ref_2330_, v___x_2331_);
v___x_2333_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__0));
v___x_2334_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__1));
lean_inc_n(v___x_2332_, 6);
v___x_2335_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2332_);
lean_ctor_set(v___x_2335_, 1, v___x_2333_);
v___x_2336_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_2337_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24);
v___x_2338_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2338_, 0, v___x_2332_);
lean_ctor_set(v___x_2338_, 1, v___x_2336_);
lean_ctor_set(v___x_2338_, 2, v___x_2337_);
v_sz_2339_ = lean_array_size(v_a_2318_);
v___x_2340_ = ((size_t)0ULL);
v___x_2341_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__1(v_sz_2339_, v___x_2340_, v_a_2318_);
v___x_2342_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6);
v___x_2343_ = l_Lean_mkSepArray(v___x_2341_, v___x_2342_);
lean_dec_ref(v___x_2341_);
v___x_2344_ = l_Array_append___redArg(v___x_2337_, v___x_2343_);
lean_dec_ref(v___x_2343_);
v___x_2345_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2345_, 0, v___x_2332_);
lean_ctor_set(v___x_2345_, 1, v___x_2336_);
lean_ctor_set(v___x_2345_, 2, v___x_2344_);
v___x_2346_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__2));
v___x_2347_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2347_, 0, v___x_2332_);
lean_ctor_set(v___x_2347_, 1, v___x_2346_);
v___x_2348_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__4));
v___x_2349_ = l_Array_append___redArg(v___x_2337_, v_a_2326_);
lean_dec(v_a_2326_);
v___x_2350_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2350_, 0, v___x_2332_);
lean_ctor_set(v___x_2350_, 1, v___x_2336_);
lean_ctor_set(v___x_2350_, 2, v___x_2349_);
v___x_2351_ = l_Lean_Syntax_node1(v___x_2332_, v___x_2348_, v___x_2350_);
lean_inc_ref(v___x_2338_);
v___x_2352_ = l_Lean_Syntax_node6(v___x_2332_, v___x_2334_, v___x_2335_, v___x_2338_, v___x_2338_, v___x_2345_, v___x_2347_, v___x_2351_);
if (v_isShared_2329_ == 0)
{
lean_ctor_set(v___x_2328_, 0, v___x_2352_);
v___x_2354_ = v___x_2328_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v___x_2352_);
v___x_2354_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
return v___x_2354_;
}
}
}
else
{
lean_object* v_a_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_2364_; 
lean_dec(v_a_2318_);
v_a_2357_ = lean_ctor_get(v___x_2325_, 0);
v_isSharedCheck_2364_ = !lean_is_exclusive(v___x_2325_);
if (v_isSharedCheck_2364_ == 0)
{
v___x_2359_ = v___x_2325_;
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_a_2357_);
lean_dec(v___x_2325_);
v___x_2359_ = lean_box(0);
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
v_resetjp_2358_:
{
lean_object* v___x_2362_; 
if (v_isShared_2360_ == 0)
{
v___x_2362_ = v___x_2359_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v_a_2357_);
v___x_2362_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
return v___x_2362_;
}
}
}
}
else
{
lean_object* v_a_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2372_; 
lean_dec(v_a_2316_);
v_a_2365_ = lean_ctor_get(v___x_2317_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v___x_2317_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2367_ = v___x_2317_;
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_a_2365_);
lean_dec(v___x_2317_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v___x_2370_; 
if (v_isShared_2368_ == 0)
{
v___x_2370_ = v___x_2367_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v_a_2365_);
v___x_2370_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
return v___x_2370_;
}
}
}
}
else
{
lean_object* v_a_2373_; lean_object* v___x_2375_; uint8_t v_isShared_2376_; uint8_t v_isSharedCheck_2380_; 
lean_dec_ref(v_header_2306_);
v_a_2373_ = lean_ctor_get(v___x_2315_, 0);
v_isSharedCheck_2380_ = !lean_is_exclusive(v___x_2315_);
if (v_isSharedCheck_2380_ == 0)
{
v___x_2375_ = v___x_2315_;
v_isShared_2376_ = v_isSharedCheck_2380_;
goto v_resetjp_2374_;
}
else
{
lean_inc(v_a_2373_);
lean_dec(v___x_2315_);
v___x_2375_ = lean_box(0);
v_isShared_2376_ = v_isSharedCheck_2380_;
goto v_resetjp_2374_;
}
v_resetjp_2374_:
{
lean_object* v___x_2378_; 
if (v_isShared_2376_ == 0)
{
v___x_2378_ = v___x_2375_;
goto v_reusejp_2377_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v_a_2373_);
v___x_2378_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2377_;
}
v_reusejp_2377_:
{
return v___x_2378_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___boxed(lean_object* v_ctx_2381_, lean_object* v_header_2382_, lean_object* v_indName_2383_, lean_object* v_a_2384_, lean_object* v_a_2385_, lean_object* v_a_2386_, lean_object* v_a_2387_, lean_object* v_a_2388_, lean_object* v_a_2389_, lean_object* v_a_2390_){
_start:
{
lean_object* v_res_2391_; 
v_res_2391_ = l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct(v_ctx_2381_, v_header_2382_, v_indName_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_, v_a_2389_);
lean_dec(v_a_2389_);
lean_dec_ref(v_a_2388_);
lean_dec(v_a_2387_);
lean_dec_ref(v_a_2386_);
lean_dec(v_a_2385_);
lean_dec_ref(v_a_2384_);
lean_dec_ref(v_ctx_2381_);
return v_res_2391_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1(lean_object* v_a_2392_, lean_object* v___x_2393_, lean_object* v_userNames_2394_, lean_object* v_as_2395_, lean_object* v_i_2396_, lean_object* v_j_2397_, lean_object* v_inv_2398_, lean_object* v_bs_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_){
_start:
{
lean_object* v___x_2407_; 
v___x_2407_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1___redArg(v_a_2392_, v___x_2393_, v_userNames_2394_, v_as_2395_, v_i_2396_, v_j_2397_, v_bs_2399_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_);
return v___x_2407_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1___boxed(lean_object* v_a_2408_, lean_object* v___x_2409_, lean_object* v_userNames_2410_, lean_object* v_as_2411_, lean_object* v_i_2412_, lean_object* v_j_2413_, lean_object* v_inv_2414_, lean_object* v_bs_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_){
_start:
{
lean_object* v_res_2423_; 
v_res_2423_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1(v_a_2408_, v___x_2409_, v_userNames_2410_, v_as_2411_, v_i_2412_, v_j_2413_, v_inv_2414_, v_bs_2415_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_);
lean_dec(v___y_2421_);
lean_dec_ref(v___y_2420_);
lean_dec(v___y_2419_);
lean_dec_ref(v___y_2418_);
lean_dec(v___y_2417_);
lean_dec_ref(v___y_2416_);
lean_dec(v_j_2413_);
lean_dec(v_i_2412_);
lean_dec_ref(v_as_2411_);
lean_dec_ref(v_userNames_2410_);
lean_dec_ref(v_a_2408_);
return v_res_2423_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1_spec__1(lean_object* v_userNames_2424_, lean_object* v_a_2425_, lean_object* v___x_2426_, lean_object* v_as_2427_, lean_object* v_i_2428_, lean_object* v_j_2429_, lean_object* v_inv_2430_, lean_object* v_bs_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_){
_start:
{
lean_object* v___x_2439_; 
v___x_2439_ = l_Array_mapFinIdxM_map___at___00Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1_spec__1___redArg(v_userNames_2424_, v_a_2425_, v___x_2426_, v_as_2427_, v_i_2428_, v_j_2429_, v_bs_2431_, v___y_2436_);
return v___x_2439_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1_spec__1___boxed(lean_object* v_userNames_2440_, lean_object* v_a_2441_, lean_object* v___x_2442_, lean_object* v_as_2443_, lean_object* v_i_2444_, lean_object* v_j_2445_, lean_object* v_inv_2446_, lean_object* v_bs_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_){
_start:
{
lean_object* v_res_2455_; 
v_res_2455_ = l_Array_mapFinIdxM_map___at___00Array_mapFinIdxM_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__1_spec__1(v_userNames_2440_, v_a_2441_, v___x_2442_, v_as_2443_, v_i_2444_, v_j_2445_, v_inv_2446_, v_bs_2447_, v___y_2448_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_);
lean_dec(v___y_2453_);
lean_dec_ref(v___y_2452_);
lean_dec(v___y_2451_);
lean_dec_ref(v___y_2450_);
lean_dec(v___y_2449_);
lean_dec_ref(v___y_2448_);
lean_dec_ref(v_as_2443_);
lean_dec_ref(v_a_2441_);
lean_dec_ref(v_userNames_2440_);
return v_res_2455_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3(lean_object* v_a_2456_, lean_object* v___x_2457_, size_t v_sz_2458_, size_t v_i_2459_, lean_object* v_bs_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_){
_start:
{
lean_object* v___x_2468_; 
v___x_2468_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3___redArg(v_a_2456_, v___x_2457_, v_sz_2458_, v_i_2459_, v_bs_2460_, v___y_2465_);
return v___x_2468_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3___boxed(lean_object* v_a_2469_, lean_object* v___x_2470_, lean_object* v_sz_2471_, lean_object* v_i_2472_, lean_object* v_bs_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_){
_start:
{
size_t v_sz_boxed_2481_; size_t v_i_boxed_2482_; lean_object* v_res_2483_; 
v_sz_boxed_2481_ = lean_unbox_usize(v_sz_2471_);
lean_dec(v_sz_2471_);
v_i_boxed_2482_ = lean_unbox_usize(v_i_2472_);
lean_dec(v_i_2472_);
v_res_2483_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__2_spec__3(v_a_2469_, v___x_2470_, v_sz_boxed_2481_, v_i_boxed_2482_, v_bs_2473_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_);
lean_dec(v___y_2479_);
lean_dec_ref(v___y_2478_);
lean_dec(v___y_2477_);
lean_dec_ref(v___y_2476_);
lean_dec(v___y_2475_);
lean_dec_ref(v___y_2474_);
lean_dec_ref(v_a_2469_);
return v_res_2483_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2(lean_object* v___x_2510_, lean_object* v___x_2511_, size_t v_sz_2512_, size_t v_i_2513_, lean_object* v_bs_2514_){
_start:
{
uint8_t v___x_2515_; 
v___x_2515_ = lean_usize_dec_lt(v_i_2513_, v_sz_2512_);
if (v___x_2515_ == 0)
{
lean_dec(v___x_2511_);
lean_dec(v___x_2510_);
return v_bs_2514_;
}
else
{
lean_object* v_v_2516_; lean_object* v_fst_2517_; lean_object* v_snd_2518_; lean_object* v___x_2520_; uint8_t v_isShared_2521_; uint8_t v_isSharedCheck_2542_; 
v_v_2516_ = lean_array_uget(v_bs_2514_, v_i_2513_);
v_fst_2517_ = lean_ctor_get(v_v_2516_, 0);
v_snd_2518_ = lean_ctor_get(v_v_2516_, 1);
v_isSharedCheck_2542_ = !lean_is_exclusive(v_v_2516_);
if (v_isSharedCheck_2542_ == 0)
{
v___x_2520_ = v_v_2516_;
v_isShared_2521_ = v_isSharedCheck_2542_;
goto v_resetjp_2519_;
}
else
{
lean_inc(v_snd_2518_);
lean_inc(v_fst_2517_);
lean_dec(v_v_2516_);
v___x_2520_ = lean_box(0);
v_isShared_2521_ = v_isSharedCheck_2542_;
goto v_resetjp_2519_;
}
v_resetjp_2519_:
{
lean_object* v___x_2522_; lean_object* v_bs_x27_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2528_; 
v___x_2522_ = lean_unsigned_to_nat(0u);
v_bs_x27_2523_ = lean_array_uset(v_bs_2514_, v_i_2513_, v___x_2522_);
v___x_2524_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__1));
v___x_2525_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__3));
v___x_2526_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__4));
lean_inc(v___x_2510_);
if (v_isShared_2521_ == 0)
{
lean_ctor_set_tag(v___x_2520_, 2);
lean_ctor_set(v___x_2520_, 1, v___x_2526_);
lean_ctor_set(v___x_2520_, 0, v___x_2510_);
v___x_2528_ = v___x_2520_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2541_; 
v_reuseFailAlloc_2541_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2541_, 0, v___x_2510_);
lean_ctor_set(v_reuseFailAlloc_2541_, 1, v___x_2526_);
v___x_2528_ = v_reuseFailAlloc_2541_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; size_t v___x_2537_; size_t v___x_2538_; lean_object* v___x_2539_; 
v___x_2529_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__6));
lean_inc_n(v___x_2511_, 4);
lean_inc_n(v___x_2510_, 5);
v___x_2530_ = l_Lean_Syntax_node1(v___x_2510_, v___x_2529_, v___x_2511_);
v___x_2531_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__8));
v___x_2532_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__9));
v___x_2533_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2533_, 0, v___x_2510_);
lean_ctor_set(v___x_2533_, 1, v___x_2532_);
v___x_2534_ = l_Lean_Syntax_node4(v___x_2510_, v___x_2531_, v_fst_2517_, v___x_2511_, v___x_2533_, v_snd_2518_);
v___x_2535_ = l_Lean_Syntax_node4(v___x_2510_, v___x_2525_, v___x_2528_, v___x_2511_, v___x_2530_, v___x_2534_);
v___x_2536_ = l_Lean_Syntax_node2(v___x_2510_, v___x_2524_, v___x_2535_, v___x_2511_);
v___x_2537_ = ((size_t)1ULL);
v___x_2538_ = lean_usize_add(v_i_2513_, v___x_2537_);
v___x_2539_ = lean_array_uset(v_bs_x27_2523_, v_i_2513_, v___x_2536_);
v_i_2513_ = v___x_2538_;
v_bs_2514_ = v___x_2539_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___boxed(lean_object* v___x_2543_, lean_object* v___x_2544_, lean_object* v_sz_2545_, lean_object* v_i_2546_, lean_object* v_bs_2547_){
_start:
{
size_t v_sz_boxed_2548_; size_t v_i_boxed_2549_; lean_object* v_res_2550_; 
v_sz_boxed_2548_ = lean_unbox_usize(v_sz_2545_);
lean_dec(v_sz_2545_);
v_i_boxed_2549_ = lean_unbox_usize(v_i_2546_);
lean_dec(v_i_2546_);
v_res_2550_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2(v___x_2543_, v___x_2544_, v_sz_boxed_2548_, v_i_boxed_2549_, v_bs_2547_);
return v_res_2550_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_2552_; lean_object* v___x_2553_; 
v___x_2552_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__0));
v___x_2553_ = l_String_toRawSubstring_x27(v___x_2552_);
return v___x_2553_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__10(void){
_start:
{
lean_object* v___x_2576_; lean_object* v___x_2577_; 
v___x_2576_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__9));
v___x_2577_ = l_String_toRawSubstring_x27(v___x_2576_);
return v___x_2577_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__21(void){
_start:
{
lean_object* v___x_2602_; lean_object* v___x_2603_; 
v___x_2602_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__20));
v___x_2603_ = l_String_toRawSubstring_x27(v___x_2602_);
return v___x_2603_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__26(void){
_start:
{
lean_object* v___x_2610_; lean_object* v___x_2611_; 
v___x_2610_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__25));
v___x_2611_ = l_String_toRawSubstring_x27(v___x_2610_);
return v___x_2611_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg(lean_object* v_indName_2636_, size_t v_sz_2637_, size_t v_i_2638_, lean_object* v_bs_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_){
_start:
{
uint8_t v___x_2643_; 
v___x_2643_ = lean_usize_dec_lt(v_i_2638_, v_sz_2637_);
if (v___x_2643_ == 0)
{
lean_object* v___x_2644_; 
lean_dec(v_indName_2636_);
v___x_2644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2644_, 0, v_bs_2639_);
return v___x_2644_;
}
else
{
lean_object* v_v_2645_; lean_object* v___x_2646_; 
v_v_2645_ = lean_array_uget(v_bs_2639_, v_i_2638_);
lean_inc(v_v_2645_);
v___x_2646_ = l_Lean_Elab_Deriving_FromToJson_mkJsonField(v_v_2645_, v___y_2640_, v___y_2641_);
if (lean_obj_tag(v___x_2646_) == 0)
{
lean_object* v_a_2647_; lean_object* v_ref_2648_; lean_object* v_quotContext_2649_; lean_object* v_currMacroScope_2650_; uint8_t v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v_snd_2665_; lean_object* v___x_2667_; uint8_t v_isShared_2668_; uint8_t v_isSharedCheck_2788_; 
v_a_2647_ = lean_ctor_get(v___x_2646_, 0);
lean_inc(v_a_2647_);
lean_dec_ref_known(v___x_2646_, 1);
v_ref_2648_ = lean_ctor_get(v___y_2640_, 5);
v_quotContext_2649_ = lean_ctor_get(v___y_2640_, 10);
v_currMacroScope_2650_ = lean_ctor_get(v___y_2640_, 11);
v___x_2651_ = 0;
v___x_2652_ = l_Lean_SourceInfo_fromRef(v_ref_2648_, v___x_2651_);
v___x_2653_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_2654_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__1);
v___x_2655_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__2));
lean_inc_n(v_currMacroScope_2650_, 2);
lean_inc_n(v_quotContext_2649_, 2);
v___x_2656_ = l_Lean_addMacroScope(v_quotContext_2649_, v___x_2655_, v_currMacroScope_2650_);
v___x_2657_ = lean_box(0);
v___x_2658_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__5));
lean_inc_n(v___x_2652_, 2);
v___x_2659_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2659_, 0, v___x_2652_);
lean_ctor_set(v___x_2659_, 1, v___x_2654_);
lean_ctor_set(v___x_2659_, 2, v___x_2656_);
lean_ctor_set(v___x_2659_, 3, v___x_2658_);
v___x_2660_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__10, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__10_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__10);
v___x_2661_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__11));
v___x_2662_ = l_Lean_addMacroScope(v_quotContext_2649_, v___x_2661_, v_currMacroScope_2650_);
v___x_2663_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__6));
v___x_2664_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2664_, 0, v___x_2652_);
lean_ctor_set(v___x_2664_, 1, v___x_2660_);
lean_ctor_set(v___x_2664_, 2, v___x_2662_);
lean_ctor_set(v___x_2664_, 3, v___x_2663_);
v_snd_2665_ = lean_ctor_get(v_a_2647_, 1);
v_isSharedCheck_2788_ = !lean_is_exclusive(v_a_2647_);
if (v_isSharedCheck_2788_ == 0)
{
lean_object* v_unused_2789_; 
v_unused_2789_ = lean_ctor_get(v_a_2647_, 0);
lean_dec(v_unused_2789_);
v___x_2667_ = v_a_2647_;
v_isShared_2668_ = v_isSharedCheck_2788_;
goto v_resetjp_2666_;
}
else
{
lean_inc(v_snd_2665_);
lean_dec(v_a_2647_);
v___x_2667_ = lean_box(0);
v_isShared_2668_ = v_isSharedCheck_2788_;
goto v_resetjp_2666_;
}
v_resetjp_2666_:
{
lean_object* v___x_2669_; lean_object* v___x_2671_; 
v___x_2669_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___closed__2));
lean_inc(v___x_2652_);
if (v_isShared_2668_ == 0)
{
lean_ctor_set_tag(v___x_2667_, 2);
lean_ctor_set(v___x_2667_, 1, v___x_2669_);
lean_ctor_set(v___x_2667_, 0, v___x_2652_);
v___x_2671_ = v___x_2667_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2787_; 
v_reuseFailAlloc_2787_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2787_, 0, v___x_2652_);
lean_ctor_set(v_reuseFailAlloc_2787_, 1, v___x_2669_);
v___x_2671_ = v_reuseFailAlloc_2787_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
lean_object* v___x_2672_; lean_object* v_bs_x27_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___y_2718_; lean_object* v___y_2719_; lean_object* v___y_2720_; lean_object* v___y_2721_; lean_object* v___y_2722_; lean_object* v___y_2746_; lean_object* v___x_2773_; 
v___x_2672_ = lean_unsigned_to_nat(0u);
v_bs_x27_2673_ = lean_array_uset(v_bs_2639_, v_i_2638_, v___x_2672_);
v___x_2674_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_2675_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___closed__1));
lean_inc_n(v___x_2652_, 14);
v___x_2676_ = l_Lean_Syntax_node1(v___x_2652_, v___x_2675_, v___x_2671_);
v___x_2677_ = l_Lean_Syntax_node3(v___x_2652_, v___x_2674_, v___x_2664_, v___x_2676_, v_snd_2665_);
v___x_2678_ = l_Lean_Syntax_node2(v___x_2652_, v___x_2653_, v___x_2659_, v___x_2677_);
v___x_2679_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__8));
v___x_2680_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__1));
v___x_2681_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__10, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__10);
v___x_2682_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__13));
lean_inc_n(v_currMacroScope_2650_, 4);
lean_inc_n(v_quotContext_2649_, 4);
v___x_2683_ = l_Lean_addMacroScope(v_quotContext_2649_, v___x_2682_, v_currMacroScope_2650_);
v___x_2684_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__15));
v___x_2685_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2685_, 0, v___x_2652_);
lean_ctor_set(v___x_2685_, 1, v___x_2681_);
lean_ctor_set(v___x_2685_, 2, v___x_2683_);
lean_ctor_set(v___x_2685_, 3, v___x_2684_);
v___x_2686_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__41));
v___x_2687_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__6));
v___x_2688_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__6));
v___x_2689_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2689_, 0, v___x_2652_);
lean_ctor_set(v___x_2689_, 1, v___x_2688_);
v___x_2690_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__8));
v___x_2691_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10);
v___x_2692_ = lean_box(0);
v___x_2693_ = l_Lean_addMacroScope(v_quotContext_2649_, v___x_2692_, v_currMacroScope_2650_);
v___x_2694_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__4));
v___x_2695_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2695_, 0, v___x_2652_);
lean_ctor_set(v___x_2695_, 1, v___x_2691_);
lean_ctor_set(v___x_2695_, 2, v___x_2693_);
lean_ctor_set(v___x_2695_, 3, v___x_2694_);
v___x_2696_ = l_Lean_Syntax_node1(v___x_2652_, v___x_2690_, v___x_2695_);
v___x_2697_ = l_Lean_Syntax_node2(v___x_2652_, v___x_2687_, v___x_2689_, v___x_2696_);
v___x_2698_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__16));
v___x_2699_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__17));
v___x_2700_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2700_, 0, v___x_2652_);
lean_ctor_set(v___x_2700_, 1, v___x_2698_);
v___x_2701_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__19));
v___x_2702_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__21, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__21_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__21);
v___x_2703_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__22));
v___x_2704_ = l_Lean_addMacroScope(v_quotContext_2649_, v___x_2703_, v_currMacroScope_2650_);
v___x_2705_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2705_, 0, v___x_2652_);
lean_ctor_set(v___x_2705_, 1, v___x_2702_);
lean_ctor_set(v___x_2705_, 2, v___x_2704_);
lean_ctor_set(v___x_2705_, 3, v___x_2657_);
lean_inc_ref(v___x_2705_);
v___x_2706_ = l_Lean_Syntax_node1(v___x_2652_, v___x_2674_, v___x_2705_);
v___x_2707_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24);
v___x_2708_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2708_, 0, v___x_2652_);
lean_ctor_set(v___x_2708_, 1, v___x_2674_);
lean_ctor_set(v___x_2708_, 2, v___x_2707_);
v___x_2709_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__7));
v___x_2710_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2710_, 0, v___x_2652_);
lean_ctor_set(v___x_2710_, 1, v___x_2709_);
v___x_2711_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__24));
v___x_2712_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__26, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__26_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__26);
v___x_2713_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__27));
v___x_2714_ = l_Lean_addMacroScope(v_quotContext_2649_, v___x_2713_, v_currMacroScope_2650_);
v___x_2715_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_2716_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2716_, 0, v___x_2652_);
lean_ctor_set(v___x_2716_, 1, v___x_2712_);
lean_ctor_set(v___x_2716_, 2, v___x_2714_);
lean_ctor_set(v___x_2716_, 3, v___x_2715_);
lean_inc(v_indName_2636_);
v___x_2773_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_2657_, v_indName_2636_);
if (lean_obj_tag(v___x_2773_) == 0)
{
lean_object* v___x_2774_; 
lean_inc(v_indName_2636_);
v___x_2774_ = l_Lean_quoteNameMk(v_indName_2636_);
v___y_2746_ = v___x_2774_;
goto v___jp_2745_;
}
else
{
lean_object* v_val_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; 
v_val_2775_ = lean_ctor_get(v___x_2773_, 0);
lean_inc(v_val_2775_);
lean_dec_ref_known(v___x_2773_, 1);
v___x_2776_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__38));
v___x_2777_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__0));
v___x_2778_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__42));
v___x_2779_ = lean_string_intercalate(v___x_2778_, v_val_2775_);
v___x_2780_ = lean_string_append(v___x_2777_, v___x_2779_);
lean_dec_ref(v___x_2779_);
v___x_2781_ = lean_box(2);
v___x_2782_ = l_Lean_Syntax_mkNameLit(v___x_2780_, v___x_2781_);
v___x_2783_ = lean_unsigned_to_nat(1u);
v___x_2784_ = lean_mk_empty_array_with_capacity(v___x_2783_);
v___x_2785_ = lean_array_push(v___x_2784_, v___x_2782_);
v___x_2786_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2786_, 0, v___x_2781_);
lean_ctor_set(v___x_2786_, 1, v___x_2776_);
lean_ctor_set(v___x_2786_, 2, v___x_2785_);
v___y_2746_ = v___x_2786_;
goto v___jp_2745_;
}
v___jp_2717_:
{
lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; size_t v___x_2741_; size_t v___x_2742_; lean_object* v___x_2743_; 
lean_inc_n(v___x_2652_, 15);
v___x_2723_ = l_Lean_Syntax_node1(v___x_2652_, v___x_2674_, v___y_2722_);
v___x_2724_ = l_Lean_Syntax_node2(v___x_2652_, v___x_2653_, v___x_2716_, v___x_2723_);
lean_inc(v___y_2718_);
lean_inc(v___x_2697_);
v___x_2725_ = l_Lean_Syntax_node3(v___x_2652_, v___x_2686_, v___x_2697_, v___x_2724_, v___y_2718_);
lean_inc_n(v___y_2719_, 2);
v___x_2726_ = l_Lean_Syntax_node3(v___x_2652_, v___x_2711_, v___y_2720_, v___y_2719_, v___x_2725_);
v___x_2727_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__32));
v___x_2728_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2728_, 0, v___x_2652_);
lean_ctor_set(v___x_2728_, 1, v___x_2727_);
v___x_2729_ = l_Lean_Syntax_node1(v___x_2652_, v___y_2721_, v___x_2728_);
v___x_2730_ = l_Lean_Syntax_node3(v___x_2652_, v___x_2711_, v___x_2726_, v___y_2719_, v___x_2729_);
v___x_2731_ = l_Lean_Syntax_node3(v___x_2652_, v___x_2711_, v___x_2730_, v___y_2719_, v___x_2705_);
v___x_2732_ = l_Lean_Syntax_node4(v___x_2652_, v___x_2701_, v___x_2706_, v___x_2708_, v___x_2710_, v___x_2731_);
v___x_2733_ = l_Lean_Syntax_node2(v___x_2652_, v___x_2699_, v___x_2700_, v___x_2732_);
v___x_2734_ = l_Lean_Syntax_node3(v___x_2652_, v___x_2686_, v___x_2697_, v___x_2733_, v___y_2718_);
v___x_2735_ = l_Lean_Syntax_node1(v___x_2652_, v___x_2674_, v___x_2734_);
v___x_2736_ = l_Lean_Syntax_node2(v___x_2652_, v___x_2653_, v___x_2685_, v___x_2735_);
v___x_2737_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct___closed__8));
v___x_2738_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2738_, 0, v___x_2652_);
lean_ctor_set(v___x_2738_, 1, v___x_2737_);
v___x_2739_ = l_Lean_Syntax_node3(v___x_2652_, v___x_2680_, v___x_2736_, v___x_2738_, v___x_2678_);
v___x_2740_ = l_Lean_Syntax_node1(v___x_2652_, v___x_2679_, v___x_2739_);
v___x_2741_ = ((size_t)1ULL);
v___x_2742_ = lean_usize_add(v_i_2638_, v___x_2741_);
v___x_2743_ = lean_array_uset(v_bs_x27_2673_, v_i_2638_, v___x_2740_);
v_i_2638_ = v___x_2742_;
v_bs_2639_ = v___x_2743_;
goto _start;
}
v___jp_2745_:
{
lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; 
lean_inc_n(v___x_2652_, 8);
v___x_2747_ = l_Lean_Syntax_node1(v___x_2652_, v___x_2674_, v___y_2746_);
lean_inc_ref(v___x_2716_);
v___x_2748_ = l_Lean_Syntax_node2(v___x_2652_, v___x_2653_, v___x_2716_, v___x_2747_);
v___x_2749_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__25));
v___x_2750_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2750_, 0, v___x_2652_);
lean_ctor_set(v___x_2750_, 1, v___x_2749_);
lean_inc_ref(v___x_2750_);
lean_inc(v___x_2697_);
v___x_2751_ = l_Lean_Syntax_node3(v___x_2652_, v___x_2686_, v___x_2697_, v___x_2748_, v___x_2750_);
v___x_2752_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__33));
v___x_2753_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2753_, 0, v___x_2652_);
lean_ctor_set(v___x_2753_, 1, v___x_2752_);
v___x_2754_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__35));
v___x_2755_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__36));
v___x_2756_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2756_, 0, v___x_2652_);
lean_ctor_set(v___x_2756_, 1, v___x_2755_);
v___x_2757_ = l_Lean_Syntax_node1(v___x_2652_, v___x_2754_, v___x_2756_);
lean_inc_ref(v___x_2753_);
v___x_2758_ = l_Lean_Syntax_node3(v___x_2652_, v___x_2711_, v___x_2751_, v___x_2753_, v___x_2757_);
lean_inc(v_v_2645_);
v___x_2759_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_2657_, v_v_2645_);
if (lean_obj_tag(v___x_2759_) == 0)
{
lean_object* v___x_2760_; 
v___x_2760_ = l_Lean_quoteNameMk(v_v_2645_);
v___y_2718_ = v___x_2750_;
v___y_2719_ = v___x_2753_;
v___y_2720_ = v___x_2758_;
v___y_2721_ = v___x_2754_;
v___y_2722_ = v___x_2760_;
goto v___jp_2717_;
}
else
{
lean_object* v_val_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; 
lean_dec(v_v_2645_);
v_val_2761_ = lean_ctor_get(v___x_2759_, 0);
lean_inc(v_val_2761_);
lean_dec_ref_known(v___x_2759_, 1);
v___x_2762_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__38));
v___x_2763_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__0));
v___x_2764_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__42));
v___x_2765_ = lean_string_intercalate(v___x_2764_, v_val_2761_);
v___x_2766_ = lean_string_append(v___x_2763_, v___x_2765_);
lean_dec_ref(v___x_2765_);
v___x_2767_ = lean_box(2);
v___x_2768_ = l_Lean_Syntax_mkNameLit(v___x_2766_, v___x_2767_);
v___x_2769_ = lean_unsigned_to_nat(1u);
v___x_2770_ = lean_mk_empty_array_with_capacity(v___x_2769_);
v___x_2771_ = lean_array_push(v___x_2770_, v___x_2768_);
v___x_2772_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2772_, 0, v___x_2767_);
lean_ctor_set(v___x_2772_, 1, v___x_2762_);
lean_ctor_set(v___x_2772_, 2, v___x_2771_);
v___y_2718_ = v___x_2750_;
v___y_2719_ = v___x_2753_;
v___y_2720_ = v___x_2758_;
v___y_2721_ = v___x_2754_;
v___y_2722_ = v___x_2772_;
goto v___jp_2717_;
}
}
}
}
}
else
{
lean_object* v_a_2790_; lean_object* v___x_2792_; uint8_t v_isShared_2793_; uint8_t v_isSharedCheck_2797_; 
lean_dec(v_v_2645_);
lean_dec_ref(v_bs_2639_);
lean_dec(v_indName_2636_);
v_a_2790_ = lean_ctor_get(v___x_2646_, 0);
v_isSharedCheck_2797_ = !lean_is_exclusive(v___x_2646_);
if (v_isSharedCheck_2797_ == 0)
{
v___x_2792_ = v___x_2646_;
v_isShared_2793_ = v_isSharedCheck_2797_;
goto v_resetjp_2791_;
}
else
{
lean_inc(v_a_2790_);
lean_dec(v___x_2646_);
v___x_2792_ = lean_box(0);
v_isShared_2793_ = v_isSharedCheck_2797_;
goto v_resetjp_2791_;
}
v_resetjp_2791_:
{
lean_object* v___x_2795_; 
if (v_isShared_2793_ == 0)
{
v___x_2795_ = v___x_2792_;
goto v_reusejp_2794_;
}
else
{
lean_object* v_reuseFailAlloc_2796_; 
v_reuseFailAlloc_2796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2796_, 0, v_a_2790_);
v___x_2795_ = v_reuseFailAlloc_2796_;
goto v_reusejp_2794_;
}
v_reusejp_2794_:
{
return v___x_2795_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___boxed(lean_object* v_indName_2798_, lean_object* v_sz_2799_, lean_object* v_i_2800_, lean_object* v_bs_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_){
_start:
{
size_t v_sz_boxed_2805_; size_t v_i_boxed_2806_; lean_object* v_res_2807_; 
v_sz_boxed_2805_ = lean_unbox_usize(v_sz_2799_);
lean_dec(v_sz_2799_);
v_i_boxed_2806_ = lean_unbox_usize(v_i_2800_);
lean_dec(v_i_2800_);
v_res_2807_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg(v_indName_2798_, v_sz_boxed_2805_, v_i_boxed_2806_, v_bs_2801_, v___y_2802_, v___y_2803_);
lean_dec(v___y_2803_);
lean_dec_ref(v___y_2802_);
return v_res_2807_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3(lean_object* v___x_2827_, lean_object* v___x_2828_, size_t v_sz_2829_, size_t v_i_2830_, lean_object* v_bs_2831_){
_start:
{
uint8_t v___x_2832_; 
v___x_2832_ = lean_usize_dec_lt(v_i_2830_, v_sz_2829_);
if (v___x_2832_ == 0)
{
lean_dec(v___x_2828_);
lean_dec(v___x_2827_);
return v_bs_2831_;
}
else
{
lean_object* v_v_2833_; lean_object* v_fst_2834_; lean_object* v_snd_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2857_; 
v_v_2833_ = lean_array_uget(v_bs_2831_, v_i_2830_);
v_fst_2834_ = lean_ctor_get(v_v_2833_, 0);
v_snd_2835_ = lean_ctor_get(v_v_2833_, 1);
v_isSharedCheck_2857_ = !lean_is_exclusive(v_v_2833_);
if (v_isSharedCheck_2857_ == 0)
{
v___x_2837_ = v_v_2833_;
v_isShared_2838_ = v_isSharedCheck_2857_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_snd_2835_);
lean_inc(v_fst_2834_);
lean_dec(v_v_2833_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2857_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v_bs_x27_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2848_; 
v___x_2839_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_2840_ = lean_unsigned_to_nat(0u);
v_bs_x27_2841_ = lean_array_uset(v_bs_2831_, v_i_2830_, v___x_2840_);
v___x_2842_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__1));
v___x_2843_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__3));
lean_inc(v___x_2828_);
lean_inc_n(v___x_2827_, 2);
v___x_2844_ = l_Lean_Syntax_node2(v___x_2827_, v___x_2843_, v_fst_2834_, v___x_2828_);
v___x_2845_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__5));
v___x_2846_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__6));
if (v_isShared_2838_ == 0)
{
lean_ctor_set_tag(v___x_2837_, 2);
lean_ctor_set(v___x_2837_, 1, v___x_2846_);
lean_ctor_set(v___x_2837_, 0, v___x_2827_);
v___x_2848_ = v___x_2837_;
goto v_reusejp_2847_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v___x_2827_);
lean_ctor_set(v_reuseFailAlloc_2856_, 1, v___x_2846_);
v___x_2848_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2847_;
}
v_reusejp_2847_:
{
lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; size_t v___x_2852_; size_t v___x_2853_; lean_object* v___x_2854_; 
lean_inc_n(v___x_2828_, 3);
lean_inc_n(v___x_2827_, 3);
v___x_2849_ = l_Lean_Syntax_node3(v___x_2827_, v___x_2845_, v___x_2848_, v___x_2828_, v_snd_2835_);
v___x_2850_ = l_Lean_Syntax_node3(v___x_2827_, v___x_2839_, v___x_2828_, v___x_2828_, v___x_2849_);
v___x_2851_ = l_Lean_Syntax_node2(v___x_2827_, v___x_2842_, v___x_2844_, v___x_2850_);
v___x_2852_ = ((size_t)1ULL);
v___x_2853_ = lean_usize_add(v_i_2830_, v___x_2852_);
v___x_2854_ = lean_array_uset(v_bs_x27_2841_, v_i_2830_, v___x_2851_);
v_i_2830_ = v___x_2853_;
v_bs_2831_ = v___x_2854_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___boxed(lean_object* v___x_2858_, lean_object* v___x_2859_, lean_object* v_sz_2860_, lean_object* v_i_2861_, lean_object* v_bs_2862_){
_start:
{
size_t v_sz_boxed_2863_; size_t v_i_boxed_2864_; lean_object* v_res_2865_; 
v_sz_boxed_2863_ = lean_unbox_usize(v_sz_2860_);
lean_dec(v_sz_2860_);
v_i_boxed_2864_ = lean_unbox_usize(v_i_2861_);
lean_dec(v_i_2861_);
v_res_2865_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3(v___x_2858_, v___x_2859_, v_sz_boxed_2863_, v_i_boxed_2864_, v_bs_2862_);
return v_res_2865_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__1(size_t v_sz_2866_, size_t v_i_2867_, lean_object* v_bs_2868_){
_start:
{
uint8_t v___x_2869_; 
v___x_2869_ = lean_usize_dec_lt(v_i_2867_, v_sz_2866_);
if (v___x_2869_ == 0)
{
return v_bs_2868_;
}
else
{
lean_object* v_v_2870_; lean_object* v___x_2871_; lean_object* v_bs_x27_2872_; lean_object* v___x_2873_; size_t v___x_2874_; size_t v___x_2875_; lean_object* v___x_2876_; 
v_v_2870_ = lean_array_uget(v_bs_2868_, v_i_2867_);
v___x_2871_ = lean_unsigned_to_nat(0u);
v_bs_x27_2872_ = lean_array_uset(v_bs_2868_, v_i_2867_, v___x_2871_);
v___x_2873_ = lean_mk_syntax_ident(v_v_2870_);
v___x_2874_ = ((size_t)1ULL);
v___x_2875_ = lean_usize_add(v_i_2867_, v___x_2874_);
v___x_2876_ = lean_array_uset(v_bs_x27_2872_, v_i_2867_, v___x_2873_);
v_i_2867_ = v___x_2875_;
v_bs_2868_ = v___x_2876_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__1___boxed(lean_object* v_sz_2878_, lean_object* v_i_2879_, lean_object* v_bs_2880_){
_start:
{
size_t v_sz_boxed_2881_; size_t v_i_boxed_2882_; lean_object* v_res_2883_; 
v_sz_boxed_2881_ = lean_unbox_usize(v_sz_2878_);
lean_dec(v_sz_2878_);
v_i_boxed_2882_ = lean_unbox_usize(v_i_2879_);
lean_dec(v_i_2879_);
v_res_2883_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__1(v_sz_boxed_2881_, v_i_boxed_2882_, v_bs_2880_);
return v_res_2883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct(lean_object* v_indName_2929_, lean_object* v_a_2930_, lean_object* v_a_2931_, lean_object* v_a_2932_, lean_object* v_a_2933_, lean_object* v_a_2934_, lean_object* v_a_2935_){
_start:
{
lean_object* v___x_2937_; lean_object* v_env_2938_; uint8_t v___x_2939_; lean_object* v___x_2940_; size_t v_sz_2941_; size_t v___x_2942_; lean_object* v___x_2943_; 
v___x_2937_ = lean_st_ref_get(v_a_2935_);
v_env_2938_ = lean_ctor_get(v___x_2937_, 0);
lean_inc_ref(v_env_2938_);
lean_dec(v___x_2937_);
v___x_2939_ = 0;
lean_inc(v_indName_2929_);
v___x_2940_ = l_Lean_getStructureFieldsFlattened(v_env_2938_, v_indName_2929_, v___x_2939_);
v_sz_2941_ = lean_array_size(v___x_2940_);
v___x_2942_ = ((size_t)0ULL);
lean_inc_ref(v___x_2940_);
v___x_2943_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg(v_indName_2929_, v_sz_2941_, v___x_2942_, v___x_2940_, v_a_2934_, v_a_2935_);
if (lean_obj_tag(v___x_2943_) == 0)
{
lean_object* v_a_2944_; lean_object* v___x_2946_; uint8_t v_isShared_2947_; uint8_t v_isSharedCheck_2995_; 
v_a_2944_ = lean_ctor_get(v___x_2943_, 0);
v_isSharedCheck_2995_ = !lean_is_exclusive(v___x_2943_);
if (v_isSharedCheck_2995_ == 0)
{
v___x_2946_ = v___x_2943_;
v_isShared_2947_ = v_isSharedCheck_2995_;
goto v_resetjp_2945_;
}
else
{
lean_inc(v_a_2944_);
lean_dec(v___x_2943_);
v___x_2946_ = lean_box(0);
v_isShared_2947_ = v_isSharedCheck_2995_;
goto v_resetjp_2945_;
}
v_resetjp_2945_:
{
lean_object* v_ref_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; size_t v_sz_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; size_t v_sz_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2993_; 
v_ref_2948_ = lean_ctor_get(v_a_2934_, 5);
v___x_2949_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__1(v_sz_2941_, v___x_2942_, v___x_2940_);
v___x_2950_ = l_Lean_SourceInfo_fromRef(v_ref_2948_, v___x_2939_);
v___x_2951_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__0));
v___x_2952_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__1));
lean_inc_n(v___x_2950_, 17);
v___x_2953_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2953_, 0, v___x_2950_);
lean_ctor_set(v___x_2953_, 1, v___x_2951_);
v___x_2954_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__3));
v___x_2955_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_2956_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24);
v___x_2957_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2957_, 0, v___x_2950_);
lean_ctor_set(v___x_2957_, 1, v___x_2955_);
lean_ctor_set(v___x_2957_, 2, v___x_2956_);
lean_inc_ref_n(v___x_2957_, 6);
v___x_2958_ = l_Lean_Syntax_node1(v___x_2950_, v___x_2954_, v___x_2957_);
v___x_2959_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__5));
v___x_2960_ = l_Array_zip___redArg(v___x_2949_, v_a_2944_);
lean_dec(v_a_2944_);
v_sz_2961_ = lean_array_size(v___x_2960_);
v___x_2962_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2(v___x_2950_, v___x_2957_, v_sz_2961_, v___x_2942_, v___x_2960_);
v___x_2963_ = l_Array_append___redArg(v___x_2956_, v___x_2962_);
lean_dec_ref(v___x_2962_);
v___x_2964_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__1));
v___x_2965_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__7));
v___x_2966_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__8));
v___x_2967_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2967_, 0, v___x_2950_);
lean_ctor_set(v___x_2967_, 1, v___x_2966_);
v___x_2968_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__10));
v___x_2969_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__11));
v___x_2970_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2970_, 0, v___x_2950_);
lean_ctor_set(v___x_2970_, 1, v___x_2969_);
v___x_2971_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__13));
v___x_2972_ = l_Array_zip___redArg(v___x_2949_, v___x_2949_);
lean_dec_ref(v___x_2949_);
v_sz_2973_ = lean_array_size(v___x_2972_);
v___x_2974_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3(v___x_2950_, v___x_2957_, v_sz_2973_, v___x_2942_, v___x_2972_);
v___x_2975_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6);
v___x_2976_ = l_Lean_mkSepArray(v___x_2974_, v___x_2975_);
lean_dec_ref(v___x_2974_);
v___x_2977_ = l_Array_append___redArg(v___x_2956_, v___x_2976_);
lean_dec_ref(v___x_2976_);
v___x_2978_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2978_, 0, v___x_2950_);
lean_ctor_set(v___x_2978_, 1, v___x_2955_);
lean_ctor_set(v___x_2978_, 2, v___x_2977_);
v___x_2979_ = l_Lean_Syntax_node1(v___x_2950_, v___x_2971_, v___x_2978_);
v___x_2980_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__15));
v___x_2981_ = l_Lean_Syntax_node1(v___x_2950_, v___x_2980_, v___x_2957_);
v___x_2982_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__16));
v___x_2983_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2983_, 0, v___x_2950_);
lean_ctor_set(v___x_2983_, 1, v___x_2982_);
v___x_2984_ = l_Lean_Syntax_node6(v___x_2950_, v___x_2968_, v___x_2970_, v___x_2957_, v___x_2979_, v___x_2981_, v___x_2957_, v___x_2983_);
v___x_2985_ = l_Lean_Syntax_node1(v___x_2950_, v___x_2955_, v___x_2984_);
lean_inc(v___x_2958_);
v___x_2986_ = l_Lean_Syntax_node3(v___x_2950_, v___x_2965_, v___x_2967_, v___x_2958_, v___x_2985_);
v___x_2987_ = l_Lean_Syntax_node2(v___x_2950_, v___x_2964_, v___x_2986_, v___x_2957_);
v___x_2988_ = lean_array_push(v___x_2963_, v___x_2987_);
v___x_2989_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2989_, 0, v___x_2950_);
lean_ctor_set(v___x_2989_, 1, v___x_2955_);
lean_ctor_set(v___x_2989_, 2, v___x_2988_);
v___x_2990_ = l_Lean_Syntax_node1(v___x_2950_, v___x_2959_, v___x_2989_);
v___x_2991_ = l_Lean_Syntax_node3(v___x_2950_, v___x_2952_, v___x_2953_, v___x_2958_, v___x_2990_);
if (v_isShared_2947_ == 0)
{
lean_ctor_set(v___x_2946_, 0, v___x_2991_);
v___x_2993_ = v___x_2946_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v___x_2991_);
v___x_2993_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
return v___x_2993_;
}
}
}
else
{
lean_object* v_a_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3003_; 
lean_dec_ref(v___x_2940_);
v_a_2996_ = lean_ctor_get(v___x_2943_, 0);
v_isSharedCheck_3003_ = !lean_is_exclusive(v___x_2943_);
if (v_isSharedCheck_3003_ == 0)
{
v___x_2998_ = v___x_2943_;
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_a_2996_);
lean_dec(v___x_2943_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v___x_3001_; 
if (v_isShared_2999_ == 0)
{
v___x_3001_ = v___x_2998_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v_a_2996_);
v___x_3001_ = v_reuseFailAlloc_3002_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
return v___x_3001_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___boxed(lean_object* v_indName_3004_, lean_object* v_a_3005_, lean_object* v_a_3006_, lean_object* v_a_3007_, lean_object* v_a_3008_, lean_object* v_a_3009_, lean_object* v_a_3010_, lean_object* v_a_3011_){
_start:
{
lean_object* v_res_3012_; 
v_res_3012_ = l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct(v_indName_3004_, v_a_3005_, v_a_3006_, v_a_3007_, v_a_3008_, v_a_3009_, v_a_3010_);
lean_dec(v_a_3010_);
lean_dec_ref(v_a_3009_);
lean_dec(v_a_3008_);
lean_dec_ref(v_a_3007_);
lean_dec(v_a_3006_);
lean_dec_ref(v_a_3005_);
return v_res_3012_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0(lean_object* v_indName_3013_, size_t v_sz_3014_, size_t v_i_3015_, lean_object* v_bs_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_){
_start:
{
lean_object* v___x_3024_; 
v___x_3024_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg(v_indName_3013_, v_sz_3014_, v_i_3015_, v_bs_3016_, v___y_3021_, v___y_3022_);
return v___x_3024_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___boxed(lean_object* v_indName_3025_, lean_object* v_sz_3026_, lean_object* v_i_3027_, lean_object* v_bs_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_){
_start:
{
size_t v_sz_boxed_3036_; size_t v_i_boxed_3037_; lean_object* v_res_3038_; 
v_sz_boxed_3036_ = lean_unbox_usize(v_sz_3026_);
lean_dec(v_sz_3026_);
v_i_boxed_3037_ = lean_unbox_usize(v_i_3027_);
lean_dec(v_i_3027_);
v_res_3038_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0(v_indName_3025_, v_sz_boxed_3036_, v_i_boxed_3037_, v_bs_3028_, v___y_3029_, v___y_3030_, v___y_3031_, v___y_3032_, v___y_3033_, v___y_3034_);
lean_dec(v___y_3034_);
lean_dec_ref(v___y_3033_);
lean_dec(v___y_3032_);
lean_dec_ref(v___y_3031_);
lean_dec(v___y_3030_);
lean_dec_ref(v___y_3029_);
return v_res_3038_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7___redArg___lam__0(lean_object* v_x_3039_, lean_object* v_x_3040_){
_start:
{
lean_object* v_snd_3041_; lean_object* v_snd_3042_; uint8_t v___x_3043_; 
v_snd_3041_ = lean_ctor_get(v_x_3039_, 1);
v_snd_3042_ = lean_ctor_get(v_x_3040_, 1);
v___x_3043_ = lean_nat_dec_lt(v_snd_3041_, v_snd_3042_);
return v___x_3043_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7___redArg___lam__0___boxed(lean_object* v_x_3044_, lean_object* v_x_3045_){
_start:
{
uint8_t v_res_3046_; lean_object* v_r_3047_; 
v_res_3046_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7___redArg___lam__0(v_x_3044_, v_x_3045_);
lean_dec_ref(v_x_3045_);
lean_dec_ref(v_x_3044_);
v_r_3047_ = lean_box(v_res_3046_);
return v_r_3047_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7_spec__8___redArg(lean_object* v_hi_3048_, lean_object* v_pivot_3049_, lean_object* v_as_3050_, lean_object* v_i_3051_, lean_object* v_k_3052_){
_start:
{
uint8_t v___x_3053_; 
v___x_3053_ = lean_nat_dec_lt(v_k_3052_, v_hi_3048_);
if (v___x_3053_ == 0)
{
lean_object* v___x_3054_; lean_object* v___x_3055_; 
lean_dec(v_k_3052_);
v___x_3054_ = lean_array_fswap(v_as_3050_, v_i_3051_, v_hi_3048_);
v___x_3055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3055_, 0, v_i_3051_);
lean_ctor_set(v___x_3055_, 1, v___x_3054_);
return v___x_3055_;
}
else
{
lean_object* v___x_3056_; lean_object* v_snd_3057_; lean_object* v_snd_3058_; uint8_t v___x_3059_; 
v___x_3056_ = lean_array_fget_borrowed(v_as_3050_, v_k_3052_);
v_snd_3057_ = lean_ctor_get(v___x_3056_, 1);
v_snd_3058_ = lean_ctor_get(v_pivot_3049_, 1);
v___x_3059_ = lean_nat_dec_lt(v_snd_3057_, v_snd_3058_);
if (v___x_3059_ == 0)
{
lean_object* v___x_3060_; lean_object* v___x_3061_; 
v___x_3060_ = lean_unsigned_to_nat(1u);
v___x_3061_ = lean_nat_add(v_k_3052_, v___x_3060_);
lean_dec(v_k_3052_);
v_k_3052_ = v___x_3061_;
goto _start;
}
else
{
lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; 
v___x_3063_ = lean_array_fswap(v_as_3050_, v_i_3051_, v_k_3052_);
v___x_3064_ = lean_unsigned_to_nat(1u);
v___x_3065_ = lean_nat_add(v_i_3051_, v___x_3064_);
lean_dec(v_i_3051_);
v___x_3066_ = lean_nat_add(v_k_3052_, v___x_3064_);
lean_dec(v_k_3052_);
v_as_3050_ = v___x_3063_;
v_i_3051_ = v___x_3065_;
v_k_3052_ = v___x_3066_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7_spec__8___redArg___boxed(lean_object* v_hi_3068_, lean_object* v_pivot_3069_, lean_object* v_as_3070_, lean_object* v_i_3071_, lean_object* v_k_3072_){
_start:
{
lean_object* v_res_3073_; 
v_res_3073_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7_spec__8___redArg(v_hi_3068_, v_pivot_3069_, v_as_3070_, v_i_3071_, v_k_3072_);
lean_dec_ref(v_pivot_3069_);
lean_dec(v_hi_3068_);
return v_res_3073_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7___redArg(lean_object* v_n_3074_, lean_object* v_as_3075_, lean_object* v_lo_3076_, lean_object* v_hi_3077_){
_start:
{
lean_object* v___y_3079_; uint8_t v___x_3089_; 
v___x_3089_ = lean_nat_dec_lt(v_lo_3076_, v_hi_3077_);
if (v___x_3089_ == 0)
{
lean_dec(v_lo_3076_);
return v_as_3075_;
}
else
{
lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v_mid_3092_; lean_object* v___y_3094_; lean_object* v___y_3100_; lean_object* v___x_3105_; lean_object* v___x_3106_; uint8_t v___x_3107_; 
v___x_3090_ = lean_nat_add(v_lo_3076_, v_hi_3077_);
v___x_3091_ = lean_unsigned_to_nat(1u);
v_mid_3092_ = lean_nat_shiftr(v___x_3090_, v___x_3091_);
lean_dec(v___x_3090_);
v___x_3105_ = lean_array_fget_borrowed(v_as_3075_, v_mid_3092_);
v___x_3106_ = lean_array_fget_borrowed(v_as_3075_, v_lo_3076_);
v___x_3107_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7___redArg___lam__0(v___x_3105_, v___x_3106_);
if (v___x_3107_ == 0)
{
v___y_3100_ = v_as_3075_;
goto v___jp_3099_;
}
else
{
lean_object* v___x_3108_; 
v___x_3108_ = lean_array_fswap(v_as_3075_, v_lo_3076_, v_mid_3092_);
v___y_3100_ = v___x_3108_;
goto v___jp_3099_;
}
v___jp_3093_:
{
lean_object* v___x_3095_; lean_object* v___x_3096_; uint8_t v___x_3097_; 
v___x_3095_ = lean_array_fget_borrowed(v___y_3094_, v_mid_3092_);
v___x_3096_ = lean_array_fget_borrowed(v___y_3094_, v_hi_3077_);
v___x_3097_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7___redArg___lam__0(v___x_3095_, v___x_3096_);
if (v___x_3097_ == 0)
{
lean_dec(v_mid_3092_);
v___y_3079_ = v___y_3094_;
goto v___jp_3078_;
}
else
{
lean_object* v___x_3098_; 
v___x_3098_ = lean_array_fswap(v___y_3094_, v_mid_3092_, v_hi_3077_);
lean_dec(v_mid_3092_);
v___y_3079_ = v___x_3098_;
goto v___jp_3078_;
}
}
v___jp_3099_:
{
lean_object* v___x_3101_; lean_object* v___x_3102_; uint8_t v___x_3103_; 
v___x_3101_ = lean_array_fget_borrowed(v___y_3100_, v_hi_3077_);
v___x_3102_ = lean_array_fget_borrowed(v___y_3100_, v_lo_3076_);
v___x_3103_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7___redArg___lam__0(v___x_3101_, v___x_3102_);
if (v___x_3103_ == 0)
{
v___y_3094_ = v___y_3100_;
goto v___jp_3093_;
}
else
{
lean_object* v___x_3104_; 
v___x_3104_ = lean_array_fswap(v___y_3100_, v_lo_3076_, v_hi_3077_);
v___y_3094_ = v___x_3104_;
goto v___jp_3093_;
}
}
}
v___jp_3078_:
{
lean_object* v_pivot_3080_; lean_object* v___x_3081_; lean_object* v_fst_3082_; lean_object* v_snd_3083_; uint8_t v___x_3084_; 
v_pivot_3080_ = lean_array_fget(v___y_3079_, v_hi_3077_);
lean_inc_n(v_lo_3076_, 2);
v___x_3081_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7_spec__8___redArg(v_hi_3077_, v_pivot_3080_, v___y_3079_, v_lo_3076_, v_lo_3076_);
lean_dec(v_pivot_3080_);
v_fst_3082_ = lean_ctor_get(v___x_3081_, 0);
lean_inc(v_fst_3082_);
v_snd_3083_ = lean_ctor_get(v___x_3081_, 1);
lean_inc(v_snd_3083_);
lean_dec_ref(v___x_3081_);
v___x_3084_ = lean_nat_dec_le(v_hi_3077_, v_fst_3082_);
if (v___x_3084_ == 0)
{
lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; 
v___x_3085_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7___redArg(v_n_3074_, v_snd_3083_, v_lo_3076_, v_fst_3082_);
v___x_3086_ = lean_unsigned_to_nat(1u);
v___x_3087_ = lean_nat_add(v_fst_3082_, v___x_3086_);
lean_dec(v_fst_3082_);
v_as_3075_ = v___x_3085_;
v_lo_3076_ = v___x_3087_;
goto _start;
}
else
{
lean_dec(v_fst_3082_);
lean_dec(v_lo_3076_);
return v_snd_3083_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7___redArg___boxed(lean_object* v_n_3109_, lean_object* v_as_3110_, lean_object* v_lo_3111_, lean_object* v_hi_3112_){
_start:
{
lean_object* v_res_3113_; 
v_res_3113_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7___redArg(v_n_3109_, v_as_3110_, v_lo_3111_, v_hi_3112_);
lean_dec(v_hi_3112_);
lean_dec(v_n_3109_);
return v_res_3113_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__6(size_t v_sz_3114_, size_t v_i_3115_, lean_object* v_bs_3116_){
_start:
{
uint8_t v___x_3117_; 
v___x_3117_ = lean_usize_dec_lt(v_i_3115_, v_sz_3114_);
if (v___x_3117_ == 0)
{
return v_bs_3116_;
}
else
{
lean_object* v_v_3118_; lean_object* v_fst_3119_; lean_object* v___x_3120_; lean_object* v_bs_x27_3121_; size_t v___x_3122_; size_t v___x_3123_; lean_object* v___x_3124_; 
v_v_3118_ = lean_array_uget_borrowed(v_bs_3116_, v_i_3115_);
v_fst_3119_ = lean_ctor_get(v_v_3118_, 0);
lean_inc(v_fst_3119_);
v___x_3120_ = lean_unsigned_to_nat(0u);
v_bs_x27_3121_ = lean_array_uset(v_bs_3116_, v_i_3115_, v___x_3120_);
v___x_3122_ = ((size_t)1ULL);
v___x_3123_ = lean_usize_add(v_i_3115_, v___x_3122_);
v___x_3124_ = lean_array_uset(v_bs_x27_3121_, v_i_3115_, v_fst_3119_);
v_i_3115_ = v___x_3123_;
v_bs_3116_ = v___x_3124_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__6___boxed(lean_object* v_sz_3126_, lean_object* v_i_3127_, lean_object* v_bs_3128_){
_start:
{
size_t v_sz_boxed_3129_; size_t v_i_boxed_3130_; lean_object* v_res_3131_; 
v_sz_boxed_3129_ = lean_unbox_usize(v_sz_3126_);
lean_dec(v_sz_3126_);
v_i_boxed_3130_ = lean_unbox_usize(v_i_3127_);
lean_dec(v_i_3127_);
v_res_3131_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__6(v_sz_boxed_3129_, v_i_boxed_3130_, v_bs_3128_);
return v_res_3131_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__0(size_t v_sz_3132_, size_t v_i_3133_, lean_object* v_bs_3134_){
_start:
{
uint8_t v___x_3135_; 
v___x_3135_ = lean_usize_dec_lt(v_i_3133_, v_sz_3132_);
if (v___x_3135_ == 0)
{
return v_bs_3134_;
}
else
{
lean_object* v_v_3136_; lean_object* v_fst_3137_; lean_object* v___x_3138_; lean_object* v_bs_x27_3139_; size_t v___x_3140_; size_t v___x_3141_; lean_object* v___x_3142_; 
v_v_3136_ = lean_array_uget_borrowed(v_bs_3134_, v_i_3133_);
v_fst_3137_ = lean_ctor_get(v_v_3136_, 0);
lean_inc(v_fst_3137_);
v___x_3138_ = lean_unsigned_to_nat(0u);
v_bs_x27_3139_ = lean_array_uset(v_bs_3134_, v_i_3133_, v___x_3138_);
v___x_3140_ = ((size_t)1ULL);
v___x_3141_ = lean_usize_add(v_i_3133_, v___x_3140_);
v___x_3142_ = lean_array_uset(v_bs_x27_3139_, v_i_3133_, v_fst_3137_);
v_i_3133_ = v___x_3141_;
v_bs_3134_ = v___x_3142_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__0___boxed(lean_object* v_sz_3144_, lean_object* v_i_3145_, lean_object* v_bs_3146_){
_start:
{
size_t v_sz_boxed_3147_; size_t v_i_boxed_3148_; lean_object* v_res_3149_; 
v_sz_boxed_3147_ = lean_unbox_usize(v_sz_3144_);
lean_dec(v_sz_3144_);
v_i_boxed_3148_ = lean_unbox_usize(v_i_3145_);
lean_dec(v_i_3145_);
v_res_3149_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__0(v_sz_boxed_3147_, v_i_boxed_3148_, v_bs_3146_);
return v_res_3149_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__2(size_t v_sz_3150_, size_t v_i_3151_, lean_object* v_bs_3152_){
_start:
{
uint8_t v___x_3153_; 
v___x_3153_ = lean_usize_dec_lt(v_i_3151_, v_sz_3150_);
if (v___x_3153_ == 0)
{
return v_bs_3152_;
}
else
{
lean_object* v_v_3154_; lean_object* v___x_3155_; lean_object* v_bs_x27_3156_; size_t v___x_3157_; size_t v___x_3158_; lean_object* v___x_3159_; 
v_v_3154_ = lean_array_uget(v_bs_3152_, v_i_3151_);
v___x_3155_ = lean_unsigned_to_nat(0u);
v_bs_x27_3156_ = lean_array_uset(v_bs_3152_, v_i_3151_, v___x_3155_);
v___x_3157_ = ((size_t)1ULL);
v___x_3158_ = lean_usize_add(v_i_3151_, v___x_3157_);
v___x_3159_ = lean_array_uset(v_bs_x27_3156_, v_i_3151_, v_v_3154_);
v_i_3151_ = v___x_3158_;
v_bs_3152_ = v___x_3159_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__2___boxed(lean_object* v_sz_3161_, lean_object* v_i_3162_, lean_object* v_bs_3163_){
_start:
{
size_t v_sz_boxed_3164_; size_t v_i_boxed_3165_; lean_object* v_res_3166_; 
v_sz_boxed_3164_ = lean_unbox_usize(v_sz_3161_);
lean_dec(v_sz_3161_);
v_i_boxed_3165_ = lean_unbox_usize(v_i_3162_);
lean_dec(v_i_3162_);
v_res_3166_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__2(v_sz_boxed_3164_, v_i_boxed_3165_, v_bs_3163_);
return v_res_3166_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_3168_; lean_object* v___x_3169_; 
v___x_3168_ = ((lean_object*)(l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__0));
v___x_3169_ = l_String_toRawSubstring_x27(v___x_3168_);
return v___x_3169_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__9(void){
_start:
{
lean_object* v___x_3186_; lean_object* v___x_3187_; 
v___x_3186_ = ((lean_object*)(l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__8));
v___x_3187_ = l_String_toRawSubstring_x27(v___x_3186_);
return v___x_3187_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg(lean_object* v_indVal_3194_, lean_object* v___x_3195_, lean_object* v_as_3196_, lean_object* v_i_3197_, lean_object* v_j_3198_, lean_object* v_bs_3199_, lean_object* v___y_3200_){
_start:
{
lean_object* v_zero_3202_; uint8_t v_isZero_3203_; 
v_zero_3202_ = lean_unsigned_to_nat(0u);
v_isZero_3203_ = lean_nat_dec_eq(v_i_3197_, v_zero_3202_);
if (v_isZero_3203_ == 1)
{
lean_object* v___x_3204_; 
lean_dec(v_j_3198_);
lean_dec(v_i_3197_);
lean_dec(v___x_3195_);
lean_dec_ref(v_indVal_3194_);
v___x_3204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3204_, 0, v_bs_3199_);
return v___x_3204_;
}
else
{
lean_object* v___x_3205_; lean_object* v_toConstantVal_3206_; lean_object* v_snd_3207_; lean_object* v___x_3209_; uint8_t v_isShared_3210_; uint8_t v_isSharedCheck_3297_; 
v___x_3205_ = lean_array_fget(v_as_3196_, v_j_3198_);
v_toConstantVal_3206_ = lean_ctor_get(v_indVal_3194_, 0);
lean_inc_ref(v_toConstantVal_3206_);
v_snd_3207_ = lean_ctor_get(v___x_3205_, 1);
v_isSharedCheck_3297_ = !lean_is_exclusive(v___x_3205_);
if (v_isSharedCheck_3297_ == 0)
{
lean_object* v_unused_3298_; 
v_unused_3298_ = lean_ctor_get(v___x_3205_, 0);
lean_dec(v_unused_3298_);
v___x_3209_ = v___x_3205_;
v_isShared_3210_ = v_isSharedCheck_3297_;
goto v_resetjp_3208_;
}
else
{
lean_inc(v_snd_3207_);
lean_dec(v___x_3205_);
v___x_3209_ = lean_box(0);
v_isShared_3210_ = v_isSharedCheck_3297_;
goto v_resetjp_3208_;
}
v_resetjp_3208_:
{
lean_object* v_name_3211_; lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3294_; 
v_name_3211_ = lean_ctor_get(v_toConstantVal_3206_, 0);
v_isSharedCheck_3294_ = !lean_is_exclusive(v_toConstantVal_3206_);
if (v_isSharedCheck_3294_ == 0)
{
lean_object* v_unused_3295_; lean_object* v_unused_3296_; 
v_unused_3295_ = lean_ctor_get(v_toConstantVal_3206_, 2);
lean_dec(v_unused_3295_);
v_unused_3296_ = lean_ctor_get(v_toConstantVal_3206_, 1);
lean_dec(v_unused_3296_);
v___x_3213_ = v_toConstantVal_3206_;
v_isShared_3214_ = v_isSharedCheck_3294_;
goto v_resetjp_3212_;
}
else
{
lean_inc(v_name_3211_);
lean_dec(v_toConstantVal_3206_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3294_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
lean_object* v_one_3215_; lean_object* v_n_3216_; lean_object* v_a_3218_; uint8_t v___x_3222_; 
v_one_3215_ = lean_unsigned_to_nat(1u);
v_n_3216_ = lean_nat_sub(v_i_3197_, v_one_3215_);
lean_dec(v_i_3197_);
v___x_3222_ = l_Lean_Expr_isAppOf(v_snd_3207_, v_name_3211_);
lean_dec(v_name_3211_);
lean_dec(v_snd_3207_);
if (v___x_3222_ == 0)
{
lean_object* v_ref_3223_; lean_object* v_quotContext_3224_; lean_object* v_currMacroScope_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3244_; 
v_ref_3223_ = lean_ctor_get(v___y_3200_, 5);
v_quotContext_3224_ = lean_ctor_get(v___y_3200_, 10);
v_currMacroScope_3225_ = lean_ctor_get(v___y_3200_, 11);
v___x_3226_ = l_Lean_SourceInfo_fromRef(v_ref_3223_, v___x_3222_);
v___x_3227_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__8));
v___x_3228_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_3229_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__1, &l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__1_once, _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__1);
v___x_3230_ = ((lean_object*)(l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__2));
lean_inc_n(v_currMacroScope_3225_, 2);
lean_inc_n(v_quotContext_3224_, 2);
v___x_3231_ = l_Lean_addMacroScope(v_quotContext_3224_, v___x_3230_, v_currMacroScope_3225_);
v___x_3232_ = lean_box(0);
v___x_3233_ = ((lean_object*)(l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__5));
lean_inc_n(v___x_3226_, 3);
v___x_3234_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3234_, 0, v___x_3226_);
lean_ctor_set(v___x_3234_, 1, v___x_3229_);
lean_ctor_set(v___x_3234_, 2, v___x_3231_);
lean_ctor_set(v___x_3234_, 3, v___x_3233_);
v___x_3235_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_3236_ = ((lean_object*)(l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__7));
v___x_3237_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__9, &l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__9_once, _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__9);
v___x_3238_ = ((lean_object*)(l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__10));
v___x_3239_ = l_Lean_addMacroScope(v_quotContext_3224_, v___x_3238_, v_currMacroScope_3225_);
v___x_3240_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3240_, 0, v___x_3226_);
lean_ctor_set(v___x_3240_, 1, v___x_3237_);
lean_ctor_set(v___x_3240_, 2, v___x_3239_);
lean_ctor_set(v___x_3240_, 3, v___x_3232_);
v___x_3241_ = ((lean_object*)(l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__12));
v___x_3242_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24);
if (v_isShared_3214_ == 0)
{
lean_ctor_set_tag(v___x_3213_, 1);
lean_ctor_set(v___x_3213_, 2, v___x_3242_);
lean_ctor_set(v___x_3213_, 1, v___x_3241_);
lean_ctor_set(v___x_3213_, 0, v___x_3226_);
v___x_3244_ = v___x_3213_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3260_; 
v_reuseFailAlloc_3260_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3260_, 0, v___x_3226_);
lean_ctor_set(v_reuseFailAlloc_3260_, 1, v___x_3241_);
lean_ctor_set(v_reuseFailAlloc_3260_, 2, v___x_3242_);
v___x_3244_ = v_reuseFailAlloc_3260_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
lean_object* v___x_3245_; lean_object* v___x_3247_; 
v___x_3245_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__2));
lean_inc(v___x_3226_);
if (v_isShared_3210_ == 0)
{
lean_ctor_set_tag(v___x_3209_, 2);
lean_ctor_set(v___x_3209_, 1, v___x_3245_);
lean_ctor_set(v___x_3209_, 0, v___x_3226_);
v___x_3247_ = v___x_3209_;
goto v_reusejp_3246_;
}
else
{
lean_object* v_reuseFailAlloc_3259_; 
v_reuseFailAlloc_3259_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3259_, 0, v___x_3226_);
lean_ctor_set(v_reuseFailAlloc_3259_, 1, v___x_3245_);
v___x_3247_ = v_reuseFailAlloc_3259_;
goto v_reusejp_3246_;
}
v_reusejp_3246_:
{
lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; 
lean_inc(v_j_3198_);
v___x_3248_ = l_Nat_reprFast(v_j_3198_);
v___x_3249_ = lean_box(2);
v___x_3250_ = l_Lean_Syntax_mkNumLit(v___x_3248_, v___x_3249_);
v___x_3251_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__43));
lean_inc_n(v___x_3226_, 5);
v___x_3252_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3252_, 0, v___x_3226_);
lean_ctor_set(v___x_3252_, 1, v___x_3251_);
v___x_3253_ = ((lean_object*)(l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__13));
v___x_3254_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3254_, 0, v___x_3226_);
lean_ctor_set(v___x_3254_, 1, v___x_3253_);
lean_inc_ref(v___x_3244_);
v___x_3255_ = l_Lean_Syntax_node7(v___x_3226_, v___x_3236_, v___x_3240_, v___x_3244_, v___x_3247_, v___x_3250_, v___x_3252_, v___x_3244_, v___x_3254_);
v___x_3256_ = l_Lean_Syntax_node1(v___x_3226_, v___x_3235_, v___x_3255_);
v___x_3257_ = l_Lean_Syntax_node2(v___x_3226_, v___x_3228_, v___x_3234_, v___x_3256_);
v___x_3258_ = l_Lean_Syntax_node1(v___x_3226_, v___x_3227_, v___x_3257_);
v_a_3218_ = v___x_3258_;
goto v___jp_3217_;
}
}
}
else
{
lean_object* v_ref_3261_; lean_object* v_quotContext_3262_; lean_object* v_currMacroScope_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3277_; 
v_ref_3261_ = lean_ctor_get(v___y_3200_, 5);
v_quotContext_3262_ = lean_ctor_get(v___y_3200_, 10);
v_currMacroScope_3263_ = lean_ctor_get(v___y_3200_, 11);
v___x_3264_ = l_Lean_SourceInfo_fromRef(v_ref_3261_, v_isZero_3203_);
v___x_3265_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__8));
v___x_3266_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_3267_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_3268_ = ((lean_object*)(l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__7));
v___x_3269_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__9, &l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__9_once, _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__9);
v___x_3270_ = ((lean_object*)(l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__10));
lean_inc(v_currMacroScope_3263_);
lean_inc(v_quotContext_3262_);
v___x_3271_ = l_Lean_addMacroScope(v_quotContext_3262_, v___x_3270_, v_currMacroScope_3263_);
v___x_3272_ = lean_box(0);
lean_inc_n(v___x_3264_, 2);
v___x_3273_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3273_, 0, v___x_3264_);
lean_ctor_set(v___x_3273_, 1, v___x_3269_);
lean_ctor_set(v___x_3273_, 2, v___x_3271_);
lean_ctor_set(v___x_3273_, 3, v___x_3272_);
v___x_3274_ = ((lean_object*)(l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__12));
v___x_3275_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24);
if (v_isShared_3214_ == 0)
{
lean_ctor_set_tag(v___x_3213_, 1);
lean_ctor_set(v___x_3213_, 2, v___x_3275_);
lean_ctor_set(v___x_3213_, 1, v___x_3274_);
lean_ctor_set(v___x_3213_, 0, v___x_3264_);
v___x_3277_ = v___x_3213_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3293_; 
v_reuseFailAlloc_3293_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3293_, 0, v___x_3264_);
lean_ctor_set(v_reuseFailAlloc_3293_, 1, v___x_3274_);
lean_ctor_set(v_reuseFailAlloc_3293_, 2, v___x_3275_);
v___x_3277_ = v_reuseFailAlloc_3293_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
lean_object* v___x_3278_; lean_object* v___x_3280_; 
v___x_3278_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__2));
lean_inc(v___x_3264_);
if (v_isShared_3210_ == 0)
{
lean_ctor_set_tag(v___x_3209_, 2);
lean_ctor_set(v___x_3209_, 1, v___x_3278_);
lean_ctor_set(v___x_3209_, 0, v___x_3264_);
v___x_3280_ = v___x_3209_;
goto v_reusejp_3279_;
}
else
{
lean_object* v_reuseFailAlloc_3292_; 
v_reuseFailAlloc_3292_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3292_, 0, v___x_3264_);
lean_ctor_set(v_reuseFailAlloc_3292_, 1, v___x_3278_);
v___x_3280_ = v_reuseFailAlloc_3292_;
goto v_reusejp_3279_;
}
v_reusejp_3279_:
{
lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; 
lean_inc(v_j_3198_);
v___x_3281_ = l_Nat_reprFast(v_j_3198_);
v___x_3282_ = lean_box(2);
v___x_3283_ = l_Lean_Syntax_mkNumLit(v___x_3281_, v___x_3282_);
v___x_3284_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__43));
lean_inc_n(v___x_3264_, 5);
v___x_3285_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3285_, 0, v___x_3264_);
lean_ctor_set(v___x_3285_, 1, v___x_3284_);
v___x_3286_ = ((lean_object*)(l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__13));
v___x_3287_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3287_, 0, v___x_3264_);
lean_ctor_set(v___x_3287_, 1, v___x_3286_);
lean_inc_ref(v___x_3277_);
v___x_3288_ = l_Lean_Syntax_node7(v___x_3264_, v___x_3268_, v___x_3273_, v___x_3277_, v___x_3280_, v___x_3283_, v___x_3285_, v___x_3277_, v___x_3287_);
v___x_3289_ = l_Lean_Syntax_node1(v___x_3264_, v___x_3267_, v___x_3288_);
lean_inc(v___x_3195_);
v___x_3290_ = l_Lean_Syntax_node2(v___x_3264_, v___x_3266_, v___x_3195_, v___x_3289_);
v___x_3291_ = l_Lean_Syntax_node1(v___x_3264_, v___x_3265_, v___x_3290_);
v_a_3218_ = v___x_3291_;
goto v___jp_3217_;
}
}
}
v___jp_3217_:
{
lean_object* v___x_3219_; lean_object* v___x_3220_; 
v___x_3219_ = lean_nat_add(v_j_3198_, v_one_3215_);
lean_dec(v_j_3198_);
v___x_3220_ = lean_array_push(v_bs_3199_, v_a_3218_);
v_i_3197_ = v_n_3216_;
v_j_3198_ = v___x_3219_;
v_bs_3199_ = v___x_3220_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___boxed(lean_object* v_indVal_3299_, lean_object* v___x_3300_, lean_object* v_as_3301_, lean_object* v_i_3302_, lean_object* v_j_3303_, lean_object* v_bs_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_){
_start:
{
lean_object* v_res_3307_; 
v_res_3307_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg(v_indVal_3299_, v___x_3300_, v_as_3301_, v_i_3302_, v_j_3303_, v_bs_3304_, v___y_3305_);
lean_dec_ref(v___y_3305_);
lean_dec_ref(v_as_3301_);
return v_res_3307_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__4___redArg___lam__0(lean_object* v_a_3308_, lean_object* v_fst_3309_, lean_object* v_____r_3310_, lean_object* v_userNames_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_){
_start:
{
lean_object* v___x_3319_; lean_object* v___x_3320_; 
v___x_3319_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__2___redArg___lam__0___closed__1));
v___x_3320_ = l_Lean_Core_mkFreshUserName(v___x_3319_, v___y_3316_, v___y_3317_);
if (lean_obj_tag(v___x_3320_) == 0)
{
lean_object* v_a_3321_; lean_object* v___x_3323_; uint8_t v_isShared_3324_; uint8_t v_isSharedCheck_3334_; 
v_a_3321_ = lean_ctor_get(v___x_3320_, 0);
v_isSharedCheck_3334_ = !lean_is_exclusive(v___x_3320_);
if (v_isSharedCheck_3334_ == 0)
{
v___x_3323_ = v___x_3320_;
v_isShared_3324_ = v_isSharedCheck_3334_;
goto v_resetjp_3322_;
}
else
{
lean_inc(v_a_3321_);
lean_dec(v___x_3320_);
v___x_3323_ = lean_box(0);
v_isShared_3324_ = v_isSharedCheck_3334_;
goto v_resetjp_3322_;
}
v_resetjp_3322_:
{
lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3332_; 
v___x_3325_ = lean_mk_syntax_ident(v_a_3321_);
v___x_3326_ = l_Lean_LocalDecl_type(v_a_3308_);
v___x_3327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3327_, 0, v___x_3325_);
lean_ctor_set(v___x_3327_, 1, v___x_3326_);
v___x_3328_ = lean_array_push(v_fst_3309_, v___x_3327_);
v___x_3329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3329_, 0, v___x_3328_);
lean_ctor_set(v___x_3329_, 1, v_userNames_3311_);
v___x_3330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3330_, 0, v___x_3329_);
if (v_isShared_3324_ == 0)
{
lean_ctor_set(v___x_3323_, 0, v___x_3330_);
v___x_3332_ = v___x_3323_;
goto v_reusejp_3331_;
}
else
{
lean_object* v_reuseFailAlloc_3333_; 
v_reuseFailAlloc_3333_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_3335_; lean_object* v___x_3337_; uint8_t v_isShared_3338_; uint8_t v_isSharedCheck_3342_; 
lean_dec_ref(v_userNames_3311_);
lean_dec(v_fst_3309_);
v_a_3335_ = lean_ctor_get(v___x_3320_, 0);
v_isSharedCheck_3342_ = !lean_is_exclusive(v___x_3320_);
if (v_isSharedCheck_3342_ == 0)
{
v___x_3337_ = v___x_3320_;
v_isShared_3338_ = v_isSharedCheck_3342_;
goto v_resetjp_3336_;
}
else
{
lean_inc(v_a_3335_);
lean_dec(v___x_3320_);
v___x_3337_ = lean_box(0);
v_isShared_3338_ = v_isSharedCheck_3342_;
goto v_resetjp_3336_;
}
v_resetjp_3336_:
{
lean_object* v___x_3340_; 
if (v_isShared_3338_ == 0)
{
v___x_3340_ = v___x_3337_;
goto v_reusejp_3339_;
}
else
{
lean_object* v_reuseFailAlloc_3341_; 
v_reuseFailAlloc_3341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3341_, 0, v_a_3335_);
v___x_3340_ = v_reuseFailAlloc_3341_;
goto v_reusejp_3339_;
}
v_reusejp_3339_:
{
return v___x_3340_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__4___redArg___lam__0___boxed(lean_object* v_a_3343_, lean_object* v_fst_3344_, lean_object* v_____r_3345_, lean_object* v_userNames_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_){
_start:
{
lean_object* v_res_3354_; 
v_res_3354_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__4___redArg___lam__0(v_a_3343_, v_fst_3344_, v_____r_3345_, v_userNames_3346_, v___y_3347_, v___y_3348_, v___y_3349_, v___y_3350_, v___y_3351_, v___y_3352_);
lean_dec(v___y_3352_);
lean_dec_ref(v___y_3351_);
lean_dec(v___y_3350_);
lean_dec_ref(v___y_3349_);
lean_dec(v___y_3348_);
lean_dec_ref(v___y_3347_);
lean_dec_ref(v_a_3343_);
return v_res_3354_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__4___redArg(lean_object* v_upperBound_3355_, lean_object* v_indVal_3356_, lean_object* v_xs_3357_, lean_object* v_a_3358_, lean_object* v_b_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_){
_start:
{
lean_object* v___y_3368_; uint8_t v___x_3390_; 
v___x_3390_ = lean_nat_dec_lt(v_a_3358_, v_upperBound_3355_);
if (v___x_3390_ == 0)
{
lean_object* v___x_3391_; 
lean_dec(v_a_3358_);
v___x_3391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3391_, 0, v_b_3359_);
return v___x_3391_;
}
else
{
lean_object* v_numParams_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; 
v_numParams_3392_ = lean_ctor_get(v_indVal_3356_, 1);
v___x_3393_ = l_Lean_instInhabitedExpr;
v___x_3394_ = lean_nat_add(v_numParams_3392_, v_a_3358_);
v___x_3395_ = lean_array_get_borrowed(v___x_3393_, v_xs_3357_, v___x_3394_);
lean_dec(v___x_3394_);
v___x_3396_ = l_Lean_Expr_fvarId_x21(v___x_3395_);
v___x_3397_ = l_Lean_FVarId_getDecl___redArg(v___x_3396_, v___y_3362_, v___y_3364_, v___y_3365_);
if (lean_obj_tag(v___x_3397_) == 0)
{
lean_object* v_a_3398_; lean_object* v_fst_3399_; lean_object* v_snd_3400_; lean_object* v___x_3401_; uint8_t v___x_3402_; 
v_a_3398_ = lean_ctor_get(v___x_3397_, 0);
lean_inc(v_a_3398_);
lean_dec_ref_known(v___x_3397_, 1);
v_fst_3399_ = lean_ctor_get(v_b_3359_, 0);
lean_inc(v_fst_3399_);
v_snd_3400_ = lean_ctor_get(v_b_3359_, 1);
lean_inc(v_snd_3400_);
lean_dec_ref(v_b_3359_);
v___x_3401_ = l_Lean_LocalDecl_userName(v_a_3398_);
v___x_3402_ = l_Lean_Name_hasMacroScopes(v___x_3401_);
if (v___x_3402_ == 0)
{
lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; 
v___x_3403_ = lean_array_push(v_snd_3400_, v___x_3401_);
v___x_3404_ = lean_box(0);
v___x_3405_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__4___redArg___lam__0(v_a_3398_, v_fst_3399_, v___x_3404_, v___x_3403_, v___y_3360_, v___y_3361_, v___y_3362_, v___y_3363_, v___y_3364_, v___y_3365_);
lean_dec(v_a_3398_);
v___y_3368_ = v___x_3405_;
goto v___jp_3367_;
}
else
{
lean_object* v___x_3406_; lean_object* v___x_3407_; 
lean_dec(v___x_3401_);
v___x_3406_ = lean_box(0);
v___x_3407_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__4___redArg___lam__0(v_a_3398_, v_fst_3399_, v___x_3406_, v_snd_3400_, v___y_3360_, v___y_3361_, v___y_3362_, v___y_3363_, v___y_3364_, v___y_3365_);
lean_dec(v_a_3398_);
v___y_3368_ = v___x_3407_;
goto v___jp_3367_;
}
}
else
{
lean_object* v_a_3408_; lean_object* v___x_3410_; uint8_t v_isShared_3411_; uint8_t v_isSharedCheck_3415_; 
lean_dec_ref(v_b_3359_);
lean_dec(v_a_3358_);
v_a_3408_ = lean_ctor_get(v___x_3397_, 0);
v_isSharedCheck_3415_ = !lean_is_exclusive(v___x_3397_);
if (v_isSharedCheck_3415_ == 0)
{
v___x_3410_ = v___x_3397_;
v_isShared_3411_ = v_isSharedCheck_3415_;
goto v_resetjp_3409_;
}
else
{
lean_inc(v_a_3408_);
lean_dec(v___x_3397_);
v___x_3410_ = lean_box(0);
v_isShared_3411_ = v_isSharedCheck_3415_;
goto v_resetjp_3409_;
}
v_resetjp_3409_:
{
lean_object* v___x_3413_; 
if (v_isShared_3411_ == 0)
{
v___x_3413_ = v___x_3410_;
goto v_reusejp_3412_;
}
else
{
lean_object* v_reuseFailAlloc_3414_; 
v_reuseFailAlloc_3414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3414_, 0, v_a_3408_);
v___x_3413_ = v_reuseFailAlloc_3414_;
goto v_reusejp_3412_;
}
v_reusejp_3412_:
{
return v___x_3413_;
}
}
}
}
v___jp_3367_:
{
if (lean_obj_tag(v___y_3368_) == 0)
{
lean_object* v_a_3369_; lean_object* v___x_3371_; uint8_t v_isShared_3372_; uint8_t v_isSharedCheck_3381_; 
v_a_3369_ = lean_ctor_get(v___y_3368_, 0);
v_isSharedCheck_3381_ = !lean_is_exclusive(v___y_3368_);
if (v_isSharedCheck_3381_ == 0)
{
v___x_3371_ = v___y_3368_;
v_isShared_3372_ = v_isSharedCheck_3381_;
goto v_resetjp_3370_;
}
else
{
lean_inc(v_a_3369_);
lean_dec(v___y_3368_);
v___x_3371_ = lean_box(0);
v_isShared_3372_ = v_isSharedCheck_3381_;
goto v_resetjp_3370_;
}
v_resetjp_3370_:
{
if (lean_obj_tag(v_a_3369_) == 0)
{
lean_object* v_a_3373_; lean_object* v___x_3375_; 
lean_dec(v_a_3358_);
v_a_3373_ = lean_ctor_get(v_a_3369_, 0);
lean_inc(v_a_3373_);
lean_dec_ref_known(v_a_3369_, 1);
if (v_isShared_3372_ == 0)
{
lean_ctor_set(v___x_3371_, 0, v_a_3373_);
v___x_3375_ = v___x_3371_;
goto v_reusejp_3374_;
}
else
{
lean_object* v_reuseFailAlloc_3376_; 
v_reuseFailAlloc_3376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3376_, 0, v_a_3373_);
v___x_3375_ = v_reuseFailAlloc_3376_;
goto v_reusejp_3374_;
}
v_reusejp_3374_:
{
return v___x_3375_;
}
}
else
{
lean_object* v_a_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; 
lean_del_object(v___x_3371_);
v_a_3377_ = lean_ctor_get(v_a_3369_, 0);
lean_inc(v_a_3377_);
lean_dec_ref_known(v_a_3369_, 1);
v___x_3378_ = lean_unsigned_to_nat(1u);
v___x_3379_ = lean_nat_add(v_a_3358_, v___x_3378_);
lean_dec(v_a_3358_);
v_a_3358_ = v___x_3379_;
v_b_3359_ = v_a_3377_;
goto _start;
}
}
}
else
{
lean_object* v_a_3382_; lean_object* v___x_3384_; uint8_t v_isShared_3385_; uint8_t v_isSharedCheck_3389_; 
lean_dec(v_a_3358_);
v_a_3382_ = lean_ctor_get(v___y_3368_, 0);
v_isSharedCheck_3389_ = !lean_is_exclusive(v___y_3368_);
if (v_isSharedCheck_3389_ == 0)
{
v___x_3384_ = v___y_3368_;
v_isShared_3385_ = v_isSharedCheck_3389_;
goto v_resetjp_3383_;
}
else
{
lean_inc(v_a_3382_);
lean_dec(v___y_3368_);
v___x_3384_ = lean_box(0);
v_isShared_3385_ = v_isSharedCheck_3389_;
goto v_resetjp_3383_;
}
v_resetjp_3383_:
{
lean_object* v___x_3387_; 
if (v_isShared_3385_ == 0)
{
v___x_3387_ = v___x_3384_;
goto v_reusejp_3386_;
}
else
{
lean_object* v_reuseFailAlloc_3388_; 
v_reuseFailAlloc_3388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3388_, 0, v_a_3382_);
v___x_3387_ = v_reuseFailAlloc_3388_;
goto v_reusejp_3386_;
}
v_reusejp_3386_:
{
return v___x_3387_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__4___redArg___boxed(lean_object* v_upperBound_3416_, lean_object* v_indVal_3417_, lean_object* v_xs_3418_, lean_object* v_a_3419_, lean_object* v_b_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_){
_start:
{
lean_object* v_res_3428_; 
v_res_3428_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__4___redArg(v_upperBound_3416_, v_indVal_3417_, v_xs_3418_, v_a_3419_, v_b_3420_, v___y_3421_, v___y_3422_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_);
lean_dec(v___y_3426_);
lean_dec_ref(v___y_3425_);
lean_dec(v___y_3424_);
lean_dec_ref(v___y_3423_);
lean_dec(v___y_3422_);
lean_dec_ref(v___y_3421_);
lean_dec_ref(v_xs_3418_);
lean_dec_ref(v_indVal_3417_);
lean_dec(v_upperBound_3416_);
return v_res_3428_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__3(size_t v_sz_3429_, size_t v_i_3430_, lean_object* v_bs_3431_){
_start:
{
uint8_t v___x_3432_; 
v___x_3432_ = lean_usize_dec_lt(v_i_3430_, v_sz_3429_);
if (v___x_3432_ == 0)
{
return v_bs_3431_;
}
else
{
lean_object* v_v_3433_; lean_object* v___x_3434_; lean_object* v_bs_x27_3435_; lean_object* v___y_3437_; lean_object* v___x_3442_; lean_object* v___x_3443_; 
v_v_3433_ = lean_array_uget(v_bs_3431_, v_i_3430_);
v___x_3434_ = lean_unsigned_to_nat(0u);
v_bs_x27_3435_ = lean_array_uset(v_bs_3431_, v_i_3430_, v___x_3434_);
v___x_3442_ = lean_box(0);
lean_inc(v_v_3433_);
v___x_3443_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_3442_, v_v_3433_);
if (lean_obj_tag(v___x_3443_) == 0)
{
lean_object* v___x_3444_; 
v___x_3444_ = l_Lean_quoteNameMk(v_v_3433_);
v___y_3437_ = v___x_3444_;
goto v___jp_3436_;
}
else
{
lean_object* v_val_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; 
lean_dec(v_v_3433_);
v_val_3445_ = lean_ctor_get(v___x_3443_, 0);
lean_inc(v_val_3445_);
lean_dec_ref_known(v___x_3443_, 1);
v___x_3446_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__38));
v___x_3447_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0___closed__0));
v___x_3448_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__42));
v___x_3449_ = lean_string_intercalate(v___x_3448_, v_val_3445_);
v___x_3450_ = lean_string_append(v___x_3447_, v___x_3449_);
lean_dec_ref(v___x_3449_);
v___x_3451_ = lean_box(2);
v___x_3452_ = l_Lean_Syntax_mkNameLit(v___x_3450_, v___x_3451_);
v___x_3453_ = lean_unsigned_to_nat(1u);
v___x_3454_ = lean_mk_empty_array_with_capacity(v___x_3453_);
v___x_3455_ = lean_array_push(v___x_3454_, v___x_3452_);
v___x_3456_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3456_, 0, v___x_3451_);
lean_ctor_set(v___x_3456_, 1, v___x_3446_);
lean_ctor_set(v___x_3456_, 2, v___x_3455_);
v___y_3437_ = v___x_3456_;
goto v___jp_3436_;
}
v___jp_3436_:
{
size_t v___x_3438_; size_t v___x_3439_; lean_object* v___x_3440_; 
v___x_3438_ = ((size_t)1ULL);
v___x_3439_ = lean_usize_add(v_i_3430_, v___x_3438_);
v___x_3440_ = lean_array_uset(v_bs_x27_3435_, v_i_3430_, v___y_3437_);
v_i_3430_ = v___x_3439_;
v_bs_3431_ = v___x_3440_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__3___boxed(lean_object* v_sz_3457_, lean_object* v_i_3458_, lean_object* v_bs_3459_){
_start:
{
size_t v_sz_boxed_3460_; size_t v_i_boxed_3461_; lean_object* v_res_3462_; 
v_sz_boxed_3460_ = lean_unbox_usize(v_sz_3457_);
lean_dec(v_sz_3457_);
v_i_boxed_3461_ = lean_unbox_usize(v_i_3458_);
lean_dec(v_i_3458_);
v_res_3462_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__3(v_sz_boxed_3460_, v_i_boxed_3461_, v_bs_3459_);
return v_res_3462_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3468_; lean_object* v___x_3469_; 
v___x_3468_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__2));
v___x_3469_ = l_String_toRawSubstring_x27(v___x_3468_);
return v___x_3469_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__10(void){
_start:
{
lean_object* v___x_3485_; lean_object* v___x_3486_; 
v___x_3485_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__9));
v___x_3486_ = l_String_toRawSubstring_x27(v___x_3485_);
return v___x_3486_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__19(void){
_start:
{
lean_object* v___x_3506_; lean_object* v___x_3507_; 
v___x_3506_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__18));
v___x_3507_ = l_String_toRawSubstring_x27(v___x_3506_);
return v___x_3507_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__26(void){
_start:
{
lean_object* v___x_3521_; lean_object* v___x_3522_; 
v___x_3521_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__25));
v___x_3522_ = l_String_toRawSubstring_x27(v___x_3521_);
return v___x_3522_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0(lean_object* v_numFields_3534_, lean_object* v_indVal_3535_, lean_object* v_ctx_3536_, lean_object* v___x_3537_, lean_object* v___x_3538_, lean_object* v_head_3539_, lean_object* v_xs_3540_, lean_object* v_x_3541_, lean_object* v___y_3542_, lean_object* v___y_3543_, lean_object* v___y_3544_, lean_object* v___y_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_){
_start:
{
lean_object* v_stx_3550_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; 
v___x_3554_ = lean_unsigned_to_nat(0u);
v___x_3555_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__1));
v___x_3556_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__4___redArg(v_numFields_3534_, v_indVal_3535_, v_xs_3540_, v___x_3554_, v___x_3555_, v___y_3542_, v___y_3543_, v___y_3544_, v___y_3545_, v___y_3546_, v___y_3547_);
if (lean_obj_tag(v___x_3556_) == 0)
{
lean_object* v_a_3557_; lean_object* v_fst_3558_; lean_object* v_snd_3559_; lean_object* v___x_3561_; uint8_t v_isShared_3562_; uint8_t v_isSharedCheck_3733_; 
v_a_3557_ = lean_ctor_get(v___x_3556_, 0);
lean_inc(v_a_3557_);
lean_dec_ref_known(v___x_3556_, 1);
v_fst_3558_ = lean_ctor_get(v_a_3557_, 0);
v_snd_3559_ = lean_ctor_get(v_a_3557_, 1);
v_isSharedCheck_3733_ = !lean_is_exclusive(v_a_3557_);
if (v_isSharedCheck_3733_ == 0)
{
v___x_3561_ = v_a_3557_;
v_isShared_3562_ = v_isSharedCheck_3733_;
goto v_resetjp_3560_;
}
else
{
lean_inc(v_snd_3559_);
lean_inc(v_fst_3558_);
lean_dec(v_a_3557_);
v___x_3561_ = lean_box(0);
v_isShared_3562_ = v_isSharedCheck_3733_;
goto v_resetjp_3560_;
}
v_resetjp_3560_:
{
lean_object* v_auxFunNames_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; size_t v_sz_3566_; size_t v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v_a_3572_; lean_object* v_userNamesOpt_3574_; lean_object* v___y_3575_; lean_object* v___x_3693_; uint8_t v___x_3694_; 
v_auxFunNames_3563_ = lean_ctor_get(v_ctx_3536_, 2);
v___x_3564_ = lean_array_get_borrowed(v___x_3537_, v_auxFunNames_3563_, v___x_3554_);
lean_inc(v___x_3564_);
v___x_3565_ = lean_mk_syntax_ident(v___x_3564_);
v_sz_3566_ = lean_array_size(v_fst_3558_);
v___x_3567_ = ((size_t)0ULL);
lean_inc(v_fst_3558_);
v___x_3568_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__0(v_sz_3566_, v___x_3567_, v_fst_3558_);
v___x_3569_ = lean_array_get_size(v_fst_3558_);
v___x_3570_ = lean_mk_empty_array_with_capacity(v___x_3569_);
v___x_3571_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg(v_indVal_3535_, v___x_3565_, v_fst_3558_, v___x_3569_, v___x_3554_, v___x_3570_, v___y_3546_);
lean_dec(v_fst_3558_);
v_a_3572_ = lean_ctor_get(v___x_3571_, 0);
lean_inc(v_a_3572_);
lean_dec_ref(v___x_3571_);
v___x_3693_ = lean_array_get_size(v_snd_3559_);
v___x_3694_ = lean_nat_dec_eq(v___x_3569_, v___x_3693_);
if (v___x_3694_ == 0)
{
lean_object* v_ref_3695_; lean_object* v_quotContext_3696_; lean_object* v_currMacroScope_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; 
lean_dec(v_snd_3559_);
v_ref_3695_ = lean_ctor_get(v___y_3546_, 5);
v_quotContext_3696_ = lean_ctor_get(v___y_3546_, 10);
v_currMacroScope_3697_ = lean_ctor_get(v___y_3546_, 11);
v___x_3698_ = l_Lean_SourceInfo_fromRef(v_ref_3695_, v___x_3694_);
v___x_3699_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__19, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__19_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__19);
v___x_3700_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__20));
lean_inc(v_currMacroScope_3697_);
lean_inc(v_quotContext_3696_);
v___x_3701_ = l_Lean_addMacroScope(v_quotContext_3696_, v___x_3700_, v_currMacroScope_3697_);
v___x_3702_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__24));
v___x_3703_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3703_, 0, v___x_3698_);
lean_ctor_set(v___x_3703_, 1, v___x_3699_);
lean_ctor_set(v___x_3703_, 2, v___x_3701_);
lean_ctor_set(v___x_3703_, 3, v___x_3702_);
v_userNamesOpt_3574_ = v___x_3703_;
v___y_3575_ = v___y_3546_;
goto v___jp_3573_;
}
else
{
lean_object* v_ref_3704_; lean_object* v_quotContext_3705_; lean_object* v_currMacroScope_3706_; uint8_t v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; size_t v_sz_3720_; lean_object* v___x_3721_; size_t v_sz_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; 
v_ref_3704_ = lean_ctor_get(v___y_3546_, 5);
v_quotContext_3705_ = lean_ctor_get(v___y_3546_, 10);
v_currMacroScope_3706_ = lean_ctor_get(v___y_3546_, 11);
v___x_3707_ = 0;
v___x_3708_ = l_Lean_SourceInfo_fromRef(v_ref_3704_, v___x_3707_);
v___x_3709_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_3710_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__26, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__26_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__26);
v___x_3711_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__27));
lean_inc(v_currMacroScope_3706_);
lean_inc(v_quotContext_3705_);
v___x_3712_ = l_Lean_addMacroScope(v_quotContext_3705_, v___x_3711_, v_currMacroScope_3706_);
v___x_3713_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__30));
lean_inc_n(v___x_3708_, 6);
v___x_3714_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3714_, 0, v___x_3708_);
lean_ctor_set(v___x_3714_, 1, v___x_3710_);
lean_ctor_set(v___x_3714_, 2, v___x_3712_);
lean_ctor_set(v___x_3714_, 3, v___x_3713_);
v___x_3715_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_3716_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__15));
v___x_3717_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___lam__0___closed__16));
v___x_3718_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3718_, 0, v___x_3708_);
lean_ctor_set(v___x_3718_, 1, v___x_3717_);
v___x_3719_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24);
v_sz_3720_ = lean_array_size(v_snd_3559_);
v___x_3721_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__3(v_sz_3720_, v___x_3567_, v_snd_3559_);
v_sz_3722_ = lean_array_size(v___x_3721_);
v___x_3723_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__1(v_sz_3722_, v___x_3567_, v___x_3721_);
v___x_3724_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__6);
v___x_3725_ = l_Lean_mkSepArray(v___x_3723_, v___x_3724_);
lean_dec_ref(v___x_3723_);
v___x_3726_ = l_Array_append___redArg(v___x_3719_, v___x_3725_);
lean_dec_ref(v___x_3725_);
v___x_3727_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3727_, 0, v___x_3708_);
lean_ctor_set(v___x_3727_, 1, v___x_3715_);
lean_ctor_set(v___x_3727_, 2, v___x_3726_);
v___x_3728_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__43));
v___x_3729_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3729_, 0, v___x_3708_);
lean_ctor_set(v___x_3729_, 1, v___x_3728_);
v___x_3730_ = l_Lean_Syntax_node3(v___x_3708_, v___x_3716_, v___x_3718_, v___x_3727_, v___x_3729_);
v___x_3731_ = l_Lean_Syntax_node1(v___x_3708_, v___x_3715_, v___x_3730_);
v___x_3732_ = l_Lean_Syntax_node2(v___x_3708_, v___x_3709_, v___x_3714_, v___x_3731_);
v_userNamesOpt_3574_ = v___x_3732_;
v___y_3575_ = v___y_3546_;
goto v___jp_3573_;
}
v___jp_3573_:
{
uint8_t v___x_3576_; 
v___x_3576_ = lean_nat_dec_eq(v_numFields_3534_, v___x_3554_);
if (v___x_3576_ == 0)
{
lean_object* v_ref_3577_; lean_object* v_quotContext_3578_; lean_object* v_currMacroScope_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3587_; 
v_ref_3577_ = lean_ctor_get(v___y_3575_, 5);
v_quotContext_3578_ = lean_ctor_get(v___y_3575_, 10);
v_currMacroScope_3579_ = lean_ctor_get(v___y_3575_, 11);
v___x_3580_ = l_Lean_SourceInfo_fromRef(v_ref_3577_, v___x_3576_);
v___x_3581_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_3582_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__39));
v___x_3583_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__41));
v___x_3584_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__6));
v___x_3585_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__6));
lean_inc(v___x_3580_);
if (v_isShared_3562_ == 0)
{
lean_ctor_set_tag(v___x_3561_, 2);
lean_ctor_set(v___x_3561_, 1, v___x_3585_);
lean_ctor_set(v___x_3561_, 0, v___x_3580_);
v___x_3587_ = v___x_3561_;
goto v_reusejp_3586_;
}
else
{
lean_object* v_reuseFailAlloc_3670_; 
v_reuseFailAlloc_3670_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3670_, 0, v___x_3580_);
lean_ctor_set(v_reuseFailAlloc_3670_, 1, v___x_3585_);
v___x_3587_ = v_reuseFailAlloc_3670_;
goto v_reusejp_3586_;
}
v_reusejp_3586_:
{
lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; size_t v_sz_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; size_t v_sz_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; 
v___x_3588_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__8));
v___x_3589_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__10);
v___x_3590_ = lean_box(0);
lean_inc_n(v_currMacroScope_3579_, 5);
lean_inc_n(v_quotContext_3578_, 5);
v___x_3591_ = l_Lean_addMacroScope(v_quotContext_3578_, v___x_3590_, v_currMacroScope_3579_);
v___x_3592_ = lean_box(0);
v___x_3593_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__28));
lean_inc_n(v___x_3580_, 33);
v___x_3594_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3594_, 0, v___x_3580_);
lean_ctor_set(v___x_3594_, 1, v___x_3589_);
lean_ctor_set(v___x_3594_, 2, v___x_3591_);
lean_ctor_set(v___x_3594_, 3, v___x_3593_);
v___x_3595_ = l_Lean_Syntax_node1(v___x_3580_, v___x_3588_, v___x_3594_);
v___x_3596_ = l_Lean_Syntax_node2(v___x_3580_, v___x_3584_, v___x_3587_, v___x_3595_);
v___x_3597_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__3, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__3_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__3);
v___x_3598_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__5));
v___x_3599_ = l_Lean_addMacroScope(v_quotContext_3578_, v___x_3598_, v_currMacroScope_3579_);
v___x_3600_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__8));
v___x_3601_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3601_, 0, v___x_3580_);
lean_ctor_set(v___x_3601_, 1, v___x_3597_);
lean_ctor_set(v___x_3601_, 2, v___x_3599_);
lean_ctor_set(v___x_3601_, 3, v___x_3600_);
v___x_3602_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_3603_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__10, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__10_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__10);
v___x_3604_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__11));
v___x_3605_ = l_Lean_addMacroScope(v_quotContext_3578_, v___x_3604_, v_currMacroScope_3579_);
v___x_3606_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__15));
v___x_3607_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3607_, 0, v___x_3580_);
lean_ctor_set(v___x_3607_, 1, v___x_3603_);
lean_ctor_set(v___x_3607_, 2, v___x_3605_);
lean_ctor_set(v___x_3607_, 3, v___x_3606_);
v___x_3608_ = lean_box(2);
lean_inc_ref(v___x_3538_);
v___x_3609_ = l_Lean_Syntax_mkStrLit(v___x_3538_, v___x_3608_);
lean_inc(v_numFields_3534_);
v___x_3610_ = l_Nat_reprFast(v_numFields_3534_);
v___x_3611_ = l_Lean_Syntax_mkNumLit(v___x_3610_, v___x_3608_);
v___x_3612_ = l_Lean_Syntax_node4(v___x_3580_, v___x_3602_, v___x_3607_, v___x_3609_, v___x_3611_, v_userNamesOpt_3574_);
v___x_3613_ = l_Lean_Syntax_node2(v___x_3580_, v___x_3581_, v___x_3601_, v___x_3612_);
v___x_3614_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__25));
v___x_3615_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3615_, 0, v___x_3580_);
lean_ctor_set(v___x_3615_, 1, v___x_3614_);
lean_inc_ref(v___x_3615_);
lean_inc(v___x_3596_);
v___x_3616_ = l_Lean_Syntax_node3(v___x_3580_, v___x_3583_, v___x_3596_, v___x_3613_, v___x_3615_);
v___x_3617_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__42));
v___x_3618_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3618_, 0, v___x_3580_);
lean_ctor_set(v___x_3618_, 1, v___x_3617_);
v___x_3619_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__10, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__10_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__10);
v___x_3620_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__11));
v___x_3621_ = l_Lean_addMacroScope(v_quotContext_3578_, v___x_3620_, v_currMacroScope_3579_);
v___x_3622_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__15));
v___x_3623_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3623_, 0, v___x_3580_);
lean_ctor_set(v___x_3623_, 1, v___x_3619_);
lean_ctor_set(v___x_3623_, 2, v___x_3621_);
lean_ctor_set(v___x_3623_, 3, v___x_3622_);
v___x_3624_ = l_Lean_Syntax_node3(v___x_3580_, v___x_3582_, v___x_3616_, v___x_3618_, v___x_3623_);
v___x_3625_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__16));
v___x_3626_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__17));
v___x_3627_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3627_, 0, v___x_3580_);
lean_ctor_set(v___x_3627_, 1, v___x_3625_);
v___x_3628_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__19));
v___x_3629_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__9, &l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__9_once, _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__9);
v___x_3630_ = ((lean_object*)(l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg___closed__10));
v___x_3631_ = l_Lean_addMacroScope(v_quotContext_3578_, v___x_3630_, v_currMacroScope_3579_);
v___x_3632_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3632_, 0, v___x_3580_);
lean_ctor_set(v___x_3632_, 1, v___x_3629_);
lean_ctor_set(v___x_3632_, 2, v___x_3631_);
lean_ctor_set(v___x_3632_, 3, v___x_3592_);
v___x_3633_ = l_Lean_Syntax_node1(v___x_3580_, v___x_3602_, v___x_3632_);
v___x_3634_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24);
v___x_3635_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3635_, 0, v___x_3580_);
lean_ctor_set(v___x_3635_, 1, v___x_3602_);
lean_ctor_set(v___x_3635_, 2, v___x_3634_);
v___x_3636_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__7));
v___x_3637_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3637_, 0, v___x_3580_);
lean_ctor_set(v___x_3637_, 1, v___x_3636_);
v___x_3638_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__0));
v___x_3639_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__1));
v___x_3640_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3640_, 0, v___x_3580_);
lean_ctor_set(v___x_3640_, 1, v___x_3638_);
v___x_3641_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__3));
lean_inc_ref_n(v___x_3635_, 3);
v___x_3642_ = l_Lean_Syntax_node1(v___x_3580_, v___x_3641_, v___x_3635_);
v___x_3643_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__5));
v___x_3644_ = l_Array_zip___redArg(v___x_3568_, v_a_3572_);
lean_dec(v_a_3572_);
v_sz_3645_ = lean_array_size(v___x_3644_);
v___x_3646_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2(v___x_3580_, v___x_3635_, v_sz_3645_, v___x_3567_, v___x_3644_);
v___x_3647_ = l_Array_append___redArg(v___x_3634_, v___x_3646_);
lean_dec_ref(v___x_3646_);
v___x_3648_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__2___closed__1));
v___x_3649_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__7));
v___x_3650_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__8));
v___x_3651_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3651_, 0, v___x_3580_);
lean_ctor_set(v___x_3651_, 1, v___x_3650_);
v___x_3652_ = lean_mk_syntax_ident(v_head_3539_);
v_sz_3653_ = lean_array_size(v___x_3568_);
v___x_3654_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__2(v_sz_3653_, v___x_3567_, v___x_3568_);
v___x_3655_ = l_Array_append___redArg(v___x_3634_, v___x_3654_);
lean_dec_ref(v___x_3654_);
v___x_3656_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3656_, 0, v___x_3580_);
lean_ctor_set(v___x_3656_, 1, v___x_3602_);
lean_ctor_set(v___x_3656_, 2, v___x_3655_);
v___x_3657_ = l_Lean_Syntax_node2(v___x_3580_, v___x_3581_, v___x_3652_, v___x_3656_);
v___x_3658_ = l_Lean_Syntax_node1(v___x_3580_, v___x_3602_, v___x_3657_);
lean_inc(v___x_3642_);
v___x_3659_ = l_Lean_Syntax_node3(v___x_3580_, v___x_3649_, v___x_3651_, v___x_3642_, v___x_3658_);
v___x_3660_ = l_Lean_Syntax_node2(v___x_3580_, v___x_3648_, v___x_3659_, v___x_3635_);
v___x_3661_ = lean_array_push(v___x_3647_, v___x_3660_);
v___x_3662_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3662_, 0, v___x_3580_);
lean_ctor_set(v___x_3662_, 1, v___x_3602_);
lean_ctor_set(v___x_3662_, 2, v___x_3661_);
v___x_3663_ = l_Lean_Syntax_node1(v___x_3580_, v___x_3643_, v___x_3662_);
v___x_3664_ = l_Lean_Syntax_node3(v___x_3580_, v___x_3639_, v___x_3640_, v___x_3642_, v___x_3663_);
v___x_3665_ = l_Lean_Syntax_node4(v___x_3580_, v___x_3628_, v___x_3633_, v___x_3635_, v___x_3637_, v___x_3664_);
v___x_3666_ = l_Lean_Syntax_node2(v___x_3580_, v___x_3626_, v___x_3627_, v___x_3665_);
v___x_3667_ = l_Lean_Syntax_node3(v___x_3580_, v___x_3583_, v___x_3596_, v___x_3666_, v___x_3615_);
v___x_3668_ = l_Lean_Syntax_node1(v___x_3580_, v___x_3602_, v___x_3667_);
v___x_3669_ = l_Lean_Syntax_node2(v___x_3580_, v___x_3581_, v___x_3624_, v___x_3668_);
v_stx_3550_ = v___x_3669_;
goto v___jp_3549_;
}
}
else
{
lean_object* v_ref_3671_; uint8_t v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3677_; 
lean_dec(v_userNamesOpt_3574_);
lean_dec(v_a_3572_);
v_ref_3671_ = lean_ctor_get(v___y_3575_, 5);
v___x_3672_ = 0;
v___x_3673_ = l_Lean_SourceInfo_fromRef(v_ref_3671_, v___x_3672_);
v___x_3674_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__17));
v___x_3675_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__8));
lean_inc(v___x_3673_);
if (v_isShared_3562_ == 0)
{
lean_ctor_set_tag(v___x_3561_, 2);
lean_ctor_set(v___x_3561_, 1, v___x_3675_);
lean_ctor_set(v___x_3561_, 0, v___x_3673_);
v___x_3677_ = v___x_3561_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3692_; 
v_reuseFailAlloc_3692_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3692_, 0, v___x_3673_);
lean_ctor_set(v_reuseFailAlloc_3692_, 1, v___x_3675_);
v___x_3677_ = v_reuseFailAlloc_3692_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; size_t v_sz_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; 
v___x_3678_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct___closed__3));
v___x_3679_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_3680_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24);
lean_inc_n(v___x_3673_, 5);
v___x_3681_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3681_, 0, v___x_3673_);
lean_ctor_set(v___x_3681_, 1, v___x_3679_);
lean_ctor_set(v___x_3681_, 2, v___x_3680_);
v___x_3682_ = l_Lean_Syntax_node1(v___x_3673_, v___x_3678_, v___x_3681_);
v___x_3683_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_3684_ = lean_mk_syntax_ident(v_head_3539_);
v_sz_3685_ = lean_array_size(v___x_3568_);
v___x_3686_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__2(v_sz_3685_, v___x_3567_, v___x_3568_);
v___x_3687_ = l_Array_append___redArg(v___x_3680_, v___x_3686_);
lean_dec_ref(v___x_3686_);
v___x_3688_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3688_, 0, v___x_3673_);
lean_ctor_set(v___x_3688_, 1, v___x_3679_);
lean_ctor_set(v___x_3688_, 2, v___x_3687_);
v___x_3689_ = l_Lean_Syntax_node2(v___x_3673_, v___x_3683_, v___x_3684_, v___x_3688_);
v___x_3690_ = l_Lean_Syntax_node1(v___x_3673_, v___x_3679_, v___x_3689_);
v___x_3691_ = l_Lean_Syntax_node3(v___x_3673_, v___x_3674_, v___x_3677_, v___x_3682_, v___x_3690_);
v_stx_3550_ = v___x_3691_;
goto v___jp_3549_;
}
}
}
}
}
else
{
lean_object* v_a_3734_; lean_object* v___x_3736_; uint8_t v_isShared_3737_; uint8_t v_isSharedCheck_3741_; 
lean_dec(v_head_3539_);
lean_dec_ref(v___x_3538_);
lean_dec_ref(v_indVal_3535_);
lean_dec(v_numFields_3534_);
v_a_3734_ = lean_ctor_get(v___x_3556_, 0);
v_isSharedCheck_3741_ = !lean_is_exclusive(v___x_3556_);
if (v_isSharedCheck_3741_ == 0)
{
v___x_3736_ = v___x_3556_;
v_isShared_3737_ = v_isSharedCheck_3741_;
goto v_resetjp_3735_;
}
else
{
lean_inc(v_a_3734_);
lean_dec(v___x_3556_);
v___x_3736_ = lean_box(0);
v_isShared_3737_ = v_isSharedCheck_3741_;
goto v_resetjp_3735_;
}
v_resetjp_3735_:
{
lean_object* v___x_3739_; 
if (v_isShared_3737_ == 0)
{
v___x_3739_ = v___x_3736_;
goto v_reusejp_3738_;
}
else
{
lean_object* v_reuseFailAlloc_3740_; 
v_reuseFailAlloc_3740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3740_, 0, v_a_3734_);
v___x_3739_ = v_reuseFailAlloc_3740_;
goto v_reusejp_3738_;
}
v_reusejp_3738_:
{
return v___x_3739_;
}
}
}
v___jp_3549_:
{
lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; 
v___x_3551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3551_, 0, v___x_3538_);
lean_ctor_set(v___x_3551_, 1, v_stx_3550_);
v___x_3552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3552_, 0, v___x_3551_);
lean_ctor_set(v___x_3552_, 1, v_numFields_3534_);
v___x_3553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3553_, 0, v___x_3552_);
return v___x_3553_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___boxed(lean_object* v_numFields_3742_, lean_object* v_indVal_3743_, lean_object* v_ctx_3744_, lean_object* v___x_3745_, lean_object* v___x_3746_, lean_object* v_head_3747_, lean_object* v_xs_3748_, lean_object* v_x_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_, lean_object* v___y_3756_){
_start:
{
lean_object* v_res_3757_; 
v_res_3757_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0(v_numFields_3742_, v_indVal_3743_, v_ctx_3744_, v___x_3745_, v___x_3746_, v_head_3747_, v_xs_3748_, v_x_3749_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_, v___y_3754_, v___y_3755_);
lean_dec(v___y_3755_);
lean_dec_ref(v___y_3754_);
lean_dec(v___y_3753_);
lean_dec_ref(v___y_3752_);
lean_dec(v___y_3751_);
lean_dec_ref(v___y_3750_);
lean_dec_ref(v_x_3749_);
lean_dec_ref(v_xs_3748_);
lean_dec(v___x_3745_);
lean_dec_ref(v_ctx_3744_);
return v_res_3757_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5_spec__5___redArg(lean_object* v_ctx_3758_, lean_object* v_indVal_3759_, lean_object* v_as_x27_3760_, lean_object* v_b_3761_, lean_object* v___y_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_, lean_object* v___y_3766_, lean_object* v___y_3767_){
_start:
{
if (lean_obj_tag(v_as_x27_3760_) == 0)
{
lean_object* v___x_3769_; 
lean_dec_ref(v_indVal_3759_);
lean_dec_ref(v_ctx_3758_);
v___x_3769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3769_, 0, v_b_3761_);
return v___x_3769_;
}
else
{
lean_object* v_head_3770_; lean_object* v_tail_3771_; lean_object* v___x_3772_; 
v_head_3770_ = lean_ctor_get(v_as_x27_3760_, 0);
v_tail_3771_ = lean_ctor_get(v_as_x27_3760_, 1);
lean_inc(v_head_3770_);
v___x_3772_ = l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0(v_head_3770_, v___y_3762_, v___y_3763_, v___y_3764_, v___y_3765_, v___y_3766_, v___y_3767_);
if (lean_obj_tag(v___x_3772_) == 0)
{
lean_object* v_a_3773_; lean_object* v_toConstantVal_3774_; lean_object* v_numFields_3775_; lean_object* v_type_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___f_3780_; uint8_t v___x_3781_; lean_object* v___x_3782_; 
v_a_3773_ = lean_ctor_get(v___x_3772_, 0);
lean_inc(v_a_3773_);
lean_dec_ref_known(v___x_3772_, 1);
v_toConstantVal_3774_ = lean_ctor_get(v_a_3773_, 0);
lean_inc_ref(v_toConstantVal_3774_);
v_numFields_3775_ = lean_ctor_get(v_a_3773_, 4);
lean_inc(v_numFields_3775_);
lean_dec(v_a_3773_);
v_type_3776_ = lean_ctor_get(v_toConstantVal_3774_, 2);
lean_inc_ref(v_type_3776_);
lean_dec_ref(v_toConstantVal_3774_);
v___x_3777_ = lean_box(0);
lean_inc_n(v_head_3770_, 2);
v___x_3778_ = lean_erase_macro_scopes(v_head_3770_);
v___x_3779_ = l_Lean_Name_getString_x21(v___x_3778_);
lean_dec(v___x_3778_);
lean_inc_ref(v_ctx_3758_);
lean_inc_ref(v_indVal_3759_);
v___f_3780_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___boxed), 15, 6);
lean_closure_set(v___f_3780_, 0, v_numFields_3775_);
lean_closure_set(v___f_3780_, 1, v_indVal_3759_);
lean_closure_set(v___f_3780_, 2, v_ctx_3758_);
lean_closure_set(v___f_3780_, 3, v___x_3777_);
lean_closure_set(v___f_3780_, 4, v___x_3779_);
lean_closure_set(v___f_3780_, 5, v_head_3770_);
v___x_3781_ = 0;
v___x_3782_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__4___redArg(v_type_3776_, v___f_3780_, v___x_3781_, v___x_3781_, v___y_3762_, v___y_3763_, v___y_3764_, v___y_3765_, v___y_3766_, v___y_3767_);
if (lean_obj_tag(v___x_3782_) == 0)
{
lean_object* v_a_3783_; lean_object* v___x_3784_; 
v_a_3783_ = lean_ctor_get(v___x_3782_, 0);
lean_inc(v_a_3783_);
lean_dec_ref_known(v___x_3782_, 1);
v___x_3784_ = lean_array_push(v_b_3761_, v_a_3783_);
v_as_x27_3760_ = v_tail_3771_;
v_b_3761_ = v___x_3784_;
goto _start;
}
else
{
lean_object* v_a_3786_; lean_object* v___x_3788_; uint8_t v_isShared_3789_; uint8_t v_isSharedCheck_3793_; 
lean_dec_ref(v_b_3761_);
lean_dec_ref(v_indVal_3759_);
lean_dec_ref(v_ctx_3758_);
v_a_3786_ = lean_ctor_get(v___x_3782_, 0);
v_isSharedCheck_3793_ = !lean_is_exclusive(v___x_3782_);
if (v_isSharedCheck_3793_ == 0)
{
v___x_3788_ = v___x_3782_;
v_isShared_3789_ = v_isSharedCheck_3793_;
goto v_resetjp_3787_;
}
else
{
lean_inc(v_a_3786_);
lean_dec(v___x_3782_);
v___x_3788_ = lean_box(0);
v_isShared_3789_ = v_isSharedCheck_3793_;
goto v_resetjp_3787_;
}
v_resetjp_3787_:
{
lean_object* v___x_3791_; 
if (v_isShared_3789_ == 0)
{
v___x_3791_ = v___x_3788_;
goto v_reusejp_3790_;
}
else
{
lean_object* v_reuseFailAlloc_3792_; 
v_reuseFailAlloc_3792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3792_, 0, v_a_3786_);
v___x_3791_ = v_reuseFailAlloc_3792_;
goto v_reusejp_3790_;
}
v_reusejp_3790_:
{
return v___x_3791_;
}
}
}
}
else
{
lean_object* v_a_3794_; lean_object* v___x_3796_; uint8_t v_isShared_3797_; uint8_t v_isSharedCheck_3801_; 
lean_dec_ref(v_b_3761_);
lean_dec_ref(v_indVal_3759_);
lean_dec_ref(v_ctx_3758_);
v_a_3794_ = lean_ctor_get(v___x_3772_, 0);
v_isSharedCheck_3801_ = !lean_is_exclusive(v___x_3772_);
if (v_isSharedCheck_3801_ == 0)
{
v___x_3796_ = v___x_3772_;
v_isShared_3797_ = v_isSharedCheck_3801_;
goto v_resetjp_3795_;
}
else
{
lean_inc(v_a_3794_);
lean_dec(v___x_3772_);
v___x_3796_ = lean_box(0);
v_isShared_3797_ = v_isSharedCheck_3801_;
goto v_resetjp_3795_;
}
v_resetjp_3795_:
{
lean_object* v___x_3799_; 
if (v_isShared_3797_ == 0)
{
v___x_3799_ = v___x_3796_;
goto v_reusejp_3798_;
}
else
{
lean_object* v_reuseFailAlloc_3800_; 
v_reuseFailAlloc_3800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3800_, 0, v_a_3794_);
v___x_3799_ = v_reuseFailAlloc_3800_;
goto v_reusejp_3798_;
}
v_reusejp_3798_:
{
return v___x_3799_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5_spec__5___redArg___boxed(lean_object* v_ctx_3802_, lean_object* v_indVal_3803_, lean_object* v_as_x27_3804_, lean_object* v_b_3805_, lean_object* v___y_3806_, lean_object* v___y_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_, lean_object* v___y_3810_, lean_object* v___y_3811_, lean_object* v___y_3812_){
_start:
{
lean_object* v_res_3813_; 
v_res_3813_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5_spec__5___redArg(v_ctx_3802_, v_indVal_3803_, v_as_x27_3804_, v_b_3805_, v___y_3806_, v___y_3807_, v___y_3808_, v___y_3809_, v___y_3810_, v___y_3811_);
lean_dec(v___y_3811_);
lean_dec_ref(v___y_3810_);
lean_dec(v___y_3809_);
lean_dec_ref(v___y_3808_);
lean_dec(v___y_3807_);
lean_dec_ref(v___y_3806_);
lean_dec(v_as_x27_3804_);
return v_res_3813_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg(lean_object* v_indVal_3814_, lean_object* v_ctx_3815_, lean_object* v_as_3816_, lean_object* v_as_x27_3817_, lean_object* v_b_3818_, lean_object* v___y_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_, lean_object* v___y_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_){
_start:
{
if (lean_obj_tag(v_as_x27_3817_) == 0)
{
lean_object* v___x_3826_; 
lean_dec_ref(v_ctx_3815_);
lean_dec_ref(v_indVal_3814_);
v___x_3826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3826_, 0, v_b_3818_);
return v___x_3826_;
}
else
{
lean_object* v_head_3827_; lean_object* v_tail_3828_; lean_object* v___x_3829_; 
v_head_3827_ = lean_ctor_get(v_as_x27_3817_, 0);
v_tail_3828_ = lean_ctor_get(v_as_x27_3817_, 1);
lean_inc(v_head_3827_);
v___x_3829_ = l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0(v_head_3827_, v___y_3819_, v___y_3820_, v___y_3821_, v___y_3822_, v___y_3823_, v___y_3824_);
if (lean_obj_tag(v___x_3829_) == 0)
{
lean_object* v_a_3830_; lean_object* v_toConstantVal_3831_; lean_object* v_numFields_3832_; lean_object* v_type_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___f_3837_; uint8_t v___x_3838_; lean_object* v___x_3839_; 
v_a_3830_ = lean_ctor_get(v___x_3829_, 0);
lean_inc(v_a_3830_);
lean_dec_ref_known(v___x_3829_, 1);
v_toConstantVal_3831_ = lean_ctor_get(v_a_3830_, 0);
lean_inc_ref(v_toConstantVal_3831_);
v_numFields_3832_ = lean_ctor_get(v_a_3830_, 4);
lean_inc(v_numFields_3832_);
lean_dec(v_a_3830_);
v_type_3833_ = lean_ctor_get(v_toConstantVal_3831_, 2);
lean_inc_ref(v_type_3833_);
lean_dec_ref(v_toConstantVal_3831_);
v___x_3834_ = lean_box(0);
lean_inc_n(v_head_3827_, 2);
v___x_3835_ = lean_erase_macro_scopes(v_head_3827_);
v___x_3836_ = l_Lean_Name_getString_x21(v___x_3835_);
lean_dec(v___x_3835_);
lean_inc_ref(v_ctx_3815_);
lean_inc_ref(v_indVal_3814_);
v___f_3837_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___boxed), 15, 6);
lean_closure_set(v___f_3837_, 0, v_numFields_3832_);
lean_closure_set(v___f_3837_, 1, v_indVal_3814_);
lean_closure_set(v___f_3837_, 2, v_ctx_3815_);
lean_closure_set(v___f_3837_, 3, v___x_3834_);
lean_closure_set(v___f_3837_, 4, v___x_3836_);
lean_closure_set(v___f_3837_, 5, v_head_3827_);
v___x_3838_ = 0;
v___x_3839_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__4___redArg(v_type_3833_, v___f_3837_, v___x_3838_, v___x_3838_, v___y_3819_, v___y_3820_, v___y_3821_, v___y_3822_, v___y_3823_, v___y_3824_);
if (lean_obj_tag(v___x_3839_) == 0)
{
lean_object* v_a_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; 
v_a_3840_ = lean_ctor_get(v___x_3839_, 0);
lean_inc(v_a_3840_);
lean_dec_ref_known(v___x_3839_, 1);
v___x_3841_ = lean_array_push(v_b_3818_, v_a_3840_);
v___x_3842_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5_spec__5___redArg(v_ctx_3815_, v_indVal_3814_, v_tail_3828_, v___x_3841_, v___y_3819_, v___y_3820_, v___y_3821_, v___y_3822_, v___y_3823_, v___y_3824_);
return v___x_3842_;
}
else
{
lean_object* v_a_3843_; lean_object* v___x_3845_; uint8_t v_isShared_3846_; uint8_t v_isSharedCheck_3850_; 
lean_dec_ref(v_b_3818_);
lean_dec_ref(v_ctx_3815_);
lean_dec_ref(v_indVal_3814_);
v_a_3843_ = lean_ctor_get(v___x_3839_, 0);
v_isSharedCheck_3850_ = !lean_is_exclusive(v___x_3839_);
if (v_isSharedCheck_3850_ == 0)
{
v___x_3845_ = v___x_3839_;
v_isShared_3846_ = v_isSharedCheck_3850_;
goto v_resetjp_3844_;
}
else
{
lean_inc(v_a_3843_);
lean_dec(v___x_3839_);
v___x_3845_ = lean_box(0);
v_isShared_3846_ = v_isSharedCheck_3850_;
goto v_resetjp_3844_;
}
v_resetjp_3844_:
{
lean_object* v___x_3848_; 
if (v_isShared_3846_ == 0)
{
v___x_3848_ = v___x_3845_;
goto v_reusejp_3847_;
}
else
{
lean_object* v_reuseFailAlloc_3849_; 
v_reuseFailAlloc_3849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3849_, 0, v_a_3843_);
v___x_3848_ = v_reuseFailAlloc_3849_;
goto v_reusejp_3847_;
}
v_reusejp_3847_:
{
return v___x_3848_;
}
}
}
}
else
{
lean_object* v_a_3851_; lean_object* v___x_3853_; uint8_t v_isShared_3854_; uint8_t v_isSharedCheck_3858_; 
lean_dec_ref(v_b_3818_);
lean_dec_ref(v_ctx_3815_);
lean_dec_ref(v_indVal_3814_);
v_a_3851_ = lean_ctor_get(v___x_3829_, 0);
v_isSharedCheck_3858_ = !lean_is_exclusive(v___x_3829_);
if (v_isSharedCheck_3858_ == 0)
{
v___x_3853_ = v___x_3829_;
v_isShared_3854_ = v_isSharedCheck_3858_;
goto v_resetjp_3852_;
}
else
{
lean_inc(v_a_3851_);
lean_dec(v___x_3829_);
v___x_3853_ = lean_box(0);
v_isShared_3854_ = v_isSharedCheck_3858_;
goto v_resetjp_3852_;
}
v_resetjp_3852_:
{
lean_object* v___x_3856_; 
if (v_isShared_3854_ == 0)
{
v___x_3856_ = v___x_3853_;
goto v_reusejp_3855_;
}
else
{
lean_object* v_reuseFailAlloc_3857_; 
v_reuseFailAlloc_3857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3857_, 0, v_a_3851_);
v___x_3856_ = v_reuseFailAlloc_3857_;
goto v_reusejp_3855_;
}
v_reusejp_3855_:
{
return v___x_3856_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___boxed(lean_object* v_indVal_3859_, lean_object* v_ctx_3860_, lean_object* v_as_3861_, lean_object* v_as_x27_3862_, lean_object* v_b_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_, lean_object* v___y_3866_, lean_object* v___y_3867_, lean_object* v___y_3868_, lean_object* v___y_3869_, lean_object* v___y_3870_){
_start:
{
lean_object* v_res_3871_; 
v_res_3871_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg(v_indVal_3859_, v_ctx_3860_, v_as_3861_, v_as_x27_3862_, v_b_3863_, v___y_3864_, v___y_3865_, v___y_3866_, v___y_3867_, v___y_3868_, v___y_3869_);
lean_dec(v___y_3869_);
lean_dec_ref(v___y_3868_);
lean_dec(v___y_3867_);
lean_dec_ref(v___y_3866_);
lean_dec(v___y_3865_);
lean_dec_ref(v___y_3864_);
lean_dec(v_as_x27_3862_);
lean_dec(v_as_3861_);
return v_res_3871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts(lean_object* v_ctx_3874_, lean_object* v_indVal_3875_, lean_object* v_a_3876_, lean_object* v_a_3877_, lean_object* v_a_3878_, lean_object* v_a_3879_, lean_object* v_a_3880_, lean_object* v_a_3881_){
_start:
{
lean_object* v_ctors_3883_; lean_object* v___x_3884_; lean_object* v_alts_3885_; lean_object* v___x_3886_; 
v_ctors_3883_ = lean_ctor_get(v_indVal_3875_, 4);
lean_inc(v_ctors_3883_);
v___x_3884_ = lean_unsigned_to_nat(0u);
v_alts_3885_ = ((lean_object*)(l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts___closed__0));
v___x_3886_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg(v_indVal_3875_, v_ctx_3874_, v_ctors_3883_, v_ctors_3883_, v_alts_3885_, v_a_3876_, v_a_3877_, v_a_3878_, v_a_3879_, v_a_3880_, v_a_3881_);
lean_dec(v_ctors_3883_);
if (lean_obj_tag(v___x_3886_) == 0)
{
lean_object* v_a_3887_; lean_object* v___x_3889_; uint8_t v_isShared_3890_; uint8_t v_isSharedCheck_3911_; 
v_a_3887_ = lean_ctor_get(v___x_3886_, 0);
v_isSharedCheck_3911_ = !lean_is_exclusive(v___x_3886_);
if (v_isSharedCheck_3911_ == 0)
{
v___x_3889_ = v___x_3886_;
v_isShared_3890_ = v_isSharedCheck_3911_;
goto v_resetjp_3888_;
}
else
{
lean_inc(v_a_3887_);
lean_dec(v___x_3886_);
v___x_3889_ = lean_box(0);
v_isShared_3890_ = v_isSharedCheck_3911_;
goto v_resetjp_3888_;
}
v_resetjp_3888_:
{
lean_object* v___y_3892_; lean_object* v___x_3899_; lean_object* v___y_3901_; lean_object* v___y_3902_; uint8_t v___x_3904_; 
v___x_3899_ = lean_array_get_size(v_a_3887_);
v___x_3904_ = lean_nat_dec_eq(v___x_3899_, v___x_3884_);
if (v___x_3904_ == 0)
{
lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___y_3908_; uint8_t v___x_3910_; 
v___x_3905_ = lean_unsigned_to_nat(1u);
v___x_3906_ = lean_nat_sub(v___x_3899_, v___x_3905_);
v___x_3910_ = lean_nat_dec_le(v___x_3884_, v___x_3906_);
if (v___x_3910_ == 0)
{
lean_inc(v___x_3906_);
v___y_3908_ = v___x_3906_;
goto v___jp_3907_;
}
else
{
v___y_3908_ = v___x_3884_;
goto v___jp_3907_;
}
v___jp_3907_:
{
uint8_t v___x_3909_; 
v___x_3909_ = lean_nat_dec_le(v___y_3908_, v___x_3906_);
if (v___x_3909_ == 0)
{
lean_dec(v___x_3906_);
lean_inc(v___y_3908_);
v___y_3901_ = v___y_3908_;
v___y_3902_ = v___y_3908_;
goto v___jp_3900_;
}
else
{
v___y_3901_ = v___y_3908_;
v___y_3902_ = v___x_3906_;
goto v___jp_3900_;
}
}
}
else
{
v___y_3892_ = v_a_3887_;
goto v___jp_3891_;
}
v___jp_3891_:
{
size_t v_sz_3893_; size_t v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3897_; 
v_sz_3893_ = lean_array_size(v___y_3892_);
v___x_3894_ = ((size_t)0ULL);
v___x_3895_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__6(v_sz_3893_, v___x_3894_, v___y_3892_);
if (v_isShared_3890_ == 0)
{
lean_ctor_set(v___x_3889_, 0, v___x_3895_);
v___x_3897_ = v___x_3889_;
goto v_reusejp_3896_;
}
else
{
lean_object* v_reuseFailAlloc_3898_; 
v_reuseFailAlloc_3898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3898_, 0, v___x_3895_);
v___x_3897_ = v_reuseFailAlloc_3898_;
goto v_reusejp_3896_;
}
v_reusejp_3896_:
{
return v___x_3897_;
}
}
v___jp_3900_:
{
lean_object* v___x_3903_; 
v___x_3903_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7___redArg(v___x_3899_, v_a_3887_, v___y_3901_, v___y_3902_);
lean_dec(v___y_3902_);
v___y_3892_ = v___x_3903_;
goto v___jp_3891_;
}
}
}
else
{
lean_object* v_a_3912_; lean_object* v___x_3914_; uint8_t v_isShared_3915_; uint8_t v_isSharedCheck_3919_; 
v_a_3912_ = lean_ctor_get(v___x_3886_, 0);
v_isSharedCheck_3919_ = !lean_is_exclusive(v___x_3886_);
if (v_isSharedCheck_3919_ == 0)
{
v___x_3914_ = v___x_3886_;
v_isShared_3915_ = v_isSharedCheck_3919_;
goto v_resetjp_3913_;
}
else
{
lean_inc(v_a_3912_);
lean_dec(v___x_3886_);
v___x_3914_ = lean_box(0);
v_isShared_3915_ = v_isSharedCheck_3919_;
goto v_resetjp_3913_;
}
v_resetjp_3913_:
{
lean_object* v___x_3917_; 
if (v_isShared_3915_ == 0)
{
v___x_3917_ = v___x_3914_;
goto v_reusejp_3916_;
}
else
{
lean_object* v_reuseFailAlloc_3918_; 
v_reuseFailAlloc_3918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3918_, 0, v_a_3912_);
v___x_3917_ = v_reuseFailAlloc_3918_;
goto v_reusejp_3916_;
}
v_reusejp_3916_:
{
return v___x_3917_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts___boxed(lean_object* v_ctx_3920_, lean_object* v_indVal_3921_, lean_object* v_a_3922_, lean_object* v_a_3923_, lean_object* v_a_3924_, lean_object* v_a_3925_, lean_object* v_a_3926_, lean_object* v_a_3927_, lean_object* v_a_3928_){
_start:
{
lean_object* v_res_3929_; 
v_res_3929_ = l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts(v_ctx_3920_, v_indVal_3921_, v_a_3922_, v_a_3923_, v_a_3924_, v_a_3925_, v_a_3926_, v_a_3927_);
lean_dec(v_a_3927_);
lean_dec_ref(v_a_3926_);
lean_dec(v_a_3925_);
lean_dec_ref(v_a_3924_);
lean_dec(v_a_3923_);
lean_dec_ref(v_a_3922_);
return v_res_3929_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1(lean_object* v_indVal_3930_, lean_object* v___x_3931_, lean_object* v_as_3932_, lean_object* v_i_3933_, lean_object* v_j_3934_, lean_object* v_inv_3935_, lean_object* v_bs_3936_, lean_object* v___y_3937_, lean_object* v___y_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_){
_start:
{
lean_object* v___x_3944_; 
v___x_3944_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___redArg(v_indVal_3930_, v___x_3931_, v_as_3932_, v_i_3933_, v_j_3934_, v_bs_3936_, v___y_3941_);
return v___x_3944_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1___boxed(lean_object* v_indVal_3945_, lean_object* v___x_3946_, lean_object* v_as_3947_, lean_object* v_i_3948_, lean_object* v_j_3949_, lean_object* v_inv_3950_, lean_object* v_bs_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_, lean_object* v___y_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_){
_start:
{
lean_object* v_res_3959_; 
v_res_3959_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__1(v_indVal_3945_, v___x_3946_, v_as_3947_, v_i_3948_, v_j_3949_, v_inv_3950_, v_bs_3951_, v___y_3952_, v___y_3953_, v___y_3954_, v___y_3955_, v___y_3956_, v___y_3957_);
lean_dec(v___y_3957_);
lean_dec_ref(v___y_3956_);
lean_dec(v___y_3955_);
lean_dec_ref(v___y_3954_);
lean_dec(v___y_3953_);
lean_dec_ref(v___y_3952_);
lean_dec_ref(v_as_3947_);
return v_res_3959_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__4(lean_object* v_upperBound_3960_, lean_object* v_indVal_3961_, lean_object* v_xs_3962_, lean_object* v_inst_3963_, lean_object* v_R_3964_, lean_object* v_a_3965_, lean_object* v_b_3966_, lean_object* v_c_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_, lean_object* v___y_3972_, lean_object* v___y_3973_){
_start:
{
lean_object* v___x_3975_; 
v___x_3975_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__4___redArg(v_upperBound_3960_, v_indVal_3961_, v_xs_3962_, v_a_3965_, v_b_3966_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_);
return v___x_3975_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__4___boxed(lean_object* v_upperBound_3976_, lean_object* v_indVal_3977_, lean_object* v_xs_3978_, lean_object* v_inst_3979_, lean_object* v_R_3980_, lean_object* v_a_3981_, lean_object* v_b_3982_, lean_object* v_c_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_){
_start:
{
lean_object* v_res_3991_; 
v_res_3991_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__4(v_upperBound_3976_, v_indVal_3977_, v_xs_3978_, v_inst_3979_, v_R_3980_, v_a_3981_, v_b_3982_, v_c_3983_, v___y_3984_, v___y_3985_, v___y_3986_, v___y_3987_, v___y_3988_, v___y_3989_);
lean_dec(v___y_3989_);
lean_dec_ref(v___y_3988_);
lean_dec(v___y_3987_);
lean_dec_ref(v___y_3986_);
lean_dec(v___y_3985_);
lean_dec_ref(v___y_3984_);
lean_dec_ref(v_xs_3978_);
lean_dec_ref(v_indVal_3977_);
lean_dec(v_upperBound_3976_);
return v_res_3991_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5(lean_object* v_indVal_3992_, lean_object* v_ctx_3993_, lean_object* v_as_3994_, lean_object* v_as_x27_3995_, lean_object* v_b_3996_, lean_object* v_a_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_){
_start:
{
lean_object* v___x_4005_; 
v___x_4005_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg(v_indVal_3992_, v_ctx_3993_, v_as_3994_, v_as_x27_3995_, v_b_3996_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_, v___y_4003_);
return v___x_4005_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___boxed(lean_object* v_indVal_4006_, lean_object* v_ctx_4007_, lean_object* v_as_4008_, lean_object* v_as_x27_4009_, lean_object* v_b_4010_, lean_object* v_a_4011_, lean_object* v___y_4012_, lean_object* v___y_4013_, lean_object* v___y_4014_, lean_object* v___y_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_){
_start:
{
lean_object* v_res_4019_; 
v_res_4019_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5(v_indVal_4006_, v_ctx_4007_, v_as_4008_, v_as_x27_4009_, v_b_4010_, v_a_4011_, v___y_4012_, v___y_4013_, v___y_4014_, v___y_4015_, v___y_4016_, v___y_4017_);
lean_dec(v___y_4017_);
lean_dec_ref(v___y_4016_);
lean_dec(v___y_4015_);
lean_dec_ref(v___y_4014_);
lean_dec(v___y_4013_);
lean_dec_ref(v___y_4012_);
lean_dec(v_as_x27_4009_);
lean_dec(v_as_4008_);
return v_res_4019_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7(lean_object* v_n_4020_, lean_object* v_as_4021_, lean_object* v_lo_4022_, lean_object* v_hi_4023_, lean_object* v_w_4024_, lean_object* v_hlo_4025_, lean_object* v_hhi_4026_){
_start:
{
lean_object* v___x_4027_; 
v___x_4027_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7___redArg(v_n_4020_, v_as_4021_, v_lo_4022_, v_hi_4023_);
return v___x_4027_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7___boxed(lean_object* v_n_4028_, lean_object* v_as_4029_, lean_object* v_lo_4030_, lean_object* v_hi_4031_, lean_object* v_w_4032_, lean_object* v_hlo_4033_, lean_object* v_hhi_4034_){
_start:
{
lean_object* v_res_4035_; 
v_res_4035_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7(v_n_4028_, v_as_4029_, v_lo_4030_, v_hi_4031_, v_w_4032_, v_hlo_4033_, v_hhi_4034_);
lean_dec(v_hi_4031_);
lean_dec(v_n_4028_);
return v_res_4035_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5_spec__5(lean_object* v_ctx_4036_, lean_object* v_indVal_4037_, lean_object* v_as_4038_, lean_object* v_as_x27_4039_, lean_object* v_b_4040_, lean_object* v_a_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_){
_start:
{
lean_object* v___x_4049_; 
v___x_4049_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5_spec__5___redArg(v_ctx_4036_, v_indVal_4037_, v_as_x27_4039_, v_b_4040_, v___y_4042_, v___y_4043_, v___y_4044_, v___y_4045_, v___y_4046_, v___y_4047_);
return v___x_4049_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5_spec__5___boxed(lean_object* v_ctx_4050_, lean_object* v_indVal_4051_, lean_object* v_as_4052_, lean_object* v_as_x27_4053_, lean_object* v_b_4054_, lean_object* v_a_4055_, lean_object* v___y_4056_, lean_object* v___y_4057_, lean_object* v___y_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_){
_start:
{
lean_object* v_res_4063_; 
v_res_4063_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5_spec__5(v_ctx_4050_, v_indVal_4051_, v_as_4052_, v_as_x27_4053_, v_b_4054_, v_a_4055_, v___y_4056_, v___y_4057_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_);
lean_dec(v___y_4061_);
lean_dec_ref(v___y_4060_);
lean_dec(v___y_4059_);
lean_dec_ref(v___y_4058_);
lean_dec(v___y_4057_);
lean_dec_ref(v___y_4056_);
lean_dec(v_as_x27_4053_);
lean_dec(v_as_4052_);
return v_res_4063_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7_spec__8(lean_object* v_n_4064_, lean_object* v_lo_4065_, lean_object* v_hi_4066_, lean_object* v_hhi_4067_, lean_object* v_pivot_4068_, lean_object* v_as_4069_, lean_object* v_i_4070_, lean_object* v_k_4071_, lean_object* v_ilo_4072_, lean_object* v_ik_4073_, lean_object* v_w_4074_){
_start:
{
lean_object* v___x_4075_; 
v___x_4075_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7_spec__8___redArg(v_hi_4066_, v_pivot_4068_, v_as_4069_, v_i_4070_, v_k_4071_);
return v___x_4075_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7_spec__8___boxed(lean_object* v_n_4076_, lean_object* v_lo_4077_, lean_object* v_hi_4078_, lean_object* v_hhi_4079_, lean_object* v_pivot_4080_, lean_object* v_as_4081_, lean_object* v_i_4082_, lean_object* v_k_4083_, lean_object* v_ilo_4084_, lean_object* v_ik_4085_, lean_object* v_w_4086_){
_start:
{
lean_object* v_res_4087_; 
v_res_4087_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__7_spec__8(v_n_4076_, v_lo_4077_, v_hi_4078_, v_hhi_4079_, v_pivot_4080_, v_as_4081_, v_i_4082_, v_k_4083_, v_ilo_4084_, v_ik_4085_, v_w_4086_);
lean_dec_ref(v_pivot_4080_);
lean_dec(v_hi_4078_);
lean_dec(v_lo_4077_);
lean_dec(v_n_4076_);
return v_res_4087_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_spec__1(lean_object* v___x_4088_, lean_object* v___x_4089_, lean_object* v___x_4090_, size_t v_sz_4091_, size_t v_i_4092_, lean_object* v_bs_4093_){
_start:
{
uint8_t v___x_4094_; 
v___x_4094_ = lean_usize_dec_lt(v_i_4092_, v_sz_4091_);
if (v___x_4094_ == 0)
{
lean_dec(v___x_4090_);
lean_dec(v___x_4089_);
lean_dec(v___x_4088_);
return v_bs_4093_;
}
else
{
lean_object* v_v_4095_; lean_object* v_fst_4096_; lean_object* v_snd_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v_bs_x27_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; size_t v___x_4105_; size_t v___x_4106_; lean_object* v___x_4107_; 
v_v_4095_ = lean_array_uget_borrowed(v_bs_4093_, v_i_4092_);
v_fst_4096_ = lean_ctor_get(v_v_4095_, 0);
lean_inc(v_fst_4096_);
v_snd_4097_ = lean_ctor_get(v_v_4095_, 1);
lean_inc(v_snd_4097_);
v___x_4098_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_4099_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__4));
v___x_4100_ = lean_unsigned_to_nat(0u);
v_bs_x27_4101_ = lean_array_uset(v_bs_4093_, v_i_4092_, v___x_4100_);
lean_inc_n(v___x_4088_, 3);
v___x_4102_ = l_Lean_Syntax_node1(v___x_4088_, v___x_4098_, v_fst_4096_);
v___x_4103_ = l_Lean_Syntax_node1(v___x_4088_, v___x_4098_, v___x_4102_);
lean_inc(v___x_4090_);
lean_inc(v___x_4089_);
v___x_4104_ = l_Lean_Syntax_node4(v___x_4088_, v___x_4099_, v___x_4089_, v___x_4103_, v___x_4090_, v_snd_4097_);
v___x_4105_ = ((size_t)1ULL);
v___x_4106_ = lean_usize_add(v_i_4092_, v___x_4105_);
v___x_4107_ = lean_array_uset(v_bs_x27_4101_, v_i_4092_, v___x_4104_);
v_i_4092_ = v___x_4106_;
v_bs_4093_ = v___x_4107_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_spec__1___boxed(lean_object* v___x_4109_, lean_object* v___x_4110_, lean_object* v___x_4111_, lean_object* v_sz_4112_, lean_object* v_i_4113_, lean_object* v_bs_4114_){
_start:
{
size_t v_sz_boxed_4115_; size_t v_i_boxed_4116_; lean_object* v_res_4117_; 
v_sz_boxed_4115_ = lean_unbox_usize(v_sz_4112_);
lean_dec(v_sz_4112_);
v_i_boxed_4116_ = lean_unbox_usize(v_i_4113_);
lean_dec(v_i_4113_);
v_res_4117_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_spec__1(v___x_4109_, v___x_4110_, v___x_4111_, v_sz_boxed_4115_, v_i_boxed_4116_, v_bs_4114_);
return v_res_4117_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_spec__0(size_t v_sz_4118_, size_t v_i_4119_, lean_object* v_bs_4120_){
_start:
{
uint8_t v___x_4121_; 
v___x_4121_ = lean_usize_dec_lt(v_i_4119_, v_sz_4118_);
if (v___x_4121_ == 0)
{
return v_bs_4120_;
}
else
{
lean_object* v_v_4122_; lean_object* v___x_4123_; lean_object* v_bs_x27_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; size_t v___x_4127_; size_t v___x_4128_; lean_object* v___x_4129_; 
v_v_4122_ = lean_array_uget(v_bs_4120_, v_i_4119_);
v___x_4123_ = lean_unsigned_to_nat(0u);
v_bs_x27_4124_ = lean_array_uset(v_bs_4120_, v_i_4119_, v___x_4123_);
v___x_4125_ = lean_box(2);
v___x_4126_ = l_Lean_Syntax_mkStrLit(v_v_4122_, v___x_4125_);
v___x_4127_ = ((size_t)1ULL);
v___x_4128_ = lean_usize_add(v_i_4119_, v___x_4127_);
v___x_4129_ = lean_array_uset(v_bs_x27_4124_, v_i_4119_, v___x_4126_);
v_i_4119_ = v___x_4128_;
v_bs_4120_ = v___x_4129_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_spec__0___boxed(lean_object* v_sz_4131_, lean_object* v_i_4132_, lean_object* v_bs_4133_){
_start:
{
size_t v_sz_boxed_4134_; size_t v_i_boxed_4135_; lean_object* v_res_4136_; 
v_sz_boxed_4134_ = lean_unbox_usize(v_sz_4131_);
lean_dec(v_sz_4131_);
v_i_boxed_4135_ = lean_unbox_usize(v_i_4132_);
lean_dec(v_i_4132_);
v_res_4136_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_spec__0(v_sz_boxed_4134_, v_i_boxed_4135_, v_bs_4133_);
return v_res_4136_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__3(void){
_start:
{
lean_object* v___x_4144_; lean_object* v___x_4145_; 
v___x_4144_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__2));
v___x_4145_ = l_String_toRawSubstring_x27(v___x_4144_);
return v___x_4145_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__10(void){
_start:
{
lean_object* v___x_4161_; lean_object* v___x_4162_; 
v___x_4161_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__9));
v___x_4162_ = l_String_toRawSubstring_x27(v___x_4161_);
return v___x_4162_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__13(void){
_start:
{
lean_object* v___x_4166_; lean_object* v___x_4167_; 
v___x_4166_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__12));
v___x_4167_ = l_String_toRawSubstring_x27(v___x_4166_);
return v___x_4167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct(lean_object* v_ctx_4185_, lean_object* v_indName_4186_, lean_object* v_a_4187_, lean_object* v_a_4188_, lean_object* v_a_4189_, lean_object* v_a_4190_, lean_object* v_a_4191_, lean_object* v_a_4192_){
_start:
{
lean_object* v___x_4194_; 
v___x_4194_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_spec__0(v_indName_4186_, v_a_4187_, v_a_4188_, v_a_4189_, v_a_4190_, v_a_4191_, v_a_4192_);
if (lean_obj_tag(v___x_4194_) == 0)
{
lean_object* v_a_4195_; lean_object* v___x_4196_; 
v_a_4195_ = lean_ctor_get(v___x_4194_, 0);
lean_inc(v_a_4195_);
lean_dec_ref_known(v___x_4194_, 1);
v___x_4196_ = l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts(v_ctx_4185_, v_a_4195_, v_a_4187_, v_a_4188_, v_a_4189_, v_a_4190_, v_a_4191_, v_a_4192_);
if (lean_obj_tag(v___x_4196_) == 0)
{
lean_object* v_a_4197_; lean_object* v___x_4199_; uint8_t v_isShared_4200_; uint8_t v_isSharedCheck_4310_; 
v_a_4197_ = lean_ctor_get(v___x_4196_, 0);
v_isSharedCheck_4310_ = !lean_is_exclusive(v___x_4196_);
if (v_isSharedCheck_4310_ == 0)
{
v___x_4199_ = v___x_4196_;
v_isShared_4200_ = v_isSharedCheck_4310_;
goto v_resetjp_4198_;
}
else
{
lean_inc(v_a_4197_);
lean_dec(v___x_4196_);
v___x_4199_ = lean_box(0);
v_isShared_4200_ = v_isSharedCheck_4310_;
goto v_resetjp_4198_;
}
v_resetjp_4198_:
{
lean_object* v___x_4201_; lean_object* v_fst_4202_; lean_object* v_snd_4203_; lean_object* v___x_4205_; uint8_t v_isShared_4206_; uint8_t v_isSharedCheck_4309_; 
v___x_4201_ = l_Array_unzip___redArg(v_a_4197_);
lean_dec(v_a_4197_);
v_fst_4202_ = lean_ctor_get(v___x_4201_, 0);
v_snd_4203_ = lean_ctor_get(v___x_4201_, 1);
v_isSharedCheck_4309_ = !lean_is_exclusive(v___x_4201_);
if (v_isSharedCheck_4309_ == 0)
{
v___x_4205_ = v___x_4201_;
v_isShared_4206_ = v_isSharedCheck_4309_;
goto v_resetjp_4204_;
}
else
{
lean_inc(v_snd_4203_);
lean_inc(v_fst_4202_);
lean_dec(v___x_4201_);
v___x_4205_ = lean_box(0);
v_isShared_4206_ = v_isSharedCheck_4309_;
goto v_resetjp_4204_;
}
v_resetjp_4204_:
{
lean_object* v_ref_4207_; lean_object* v_quotContext_4208_; lean_object* v_currMacroScope_4209_; uint8_t v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4215_; 
v_ref_4207_ = lean_ctor_get(v_a_4191_, 5);
v_quotContext_4208_ = lean_ctor_get(v_a_4191_, 10);
v_currMacroScope_4209_ = lean_ctor_get(v_a_4191_, 11);
v___x_4210_ = 0;
v___x_4211_ = l_Lean_SourceInfo_fromRef(v_ref_4207_, v___x_4210_);
v___x_4212_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__0));
v___x_4213_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__1));
lean_inc(v___x_4211_);
if (v_isShared_4206_ == 0)
{
lean_ctor_set_tag(v___x_4205_, 2);
lean_ctor_set(v___x_4205_, 1, v___x_4212_);
lean_ctor_set(v___x_4205_, 0, v___x_4211_);
v___x_4215_ = v___x_4205_;
goto v_reusejp_4214_;
}
else
{
lean_object* v_reuseFailAlloc_4308_; 
v_reuseFailAlloc_4308_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4308_, 0, v___x_4211_);
lean_ctor_set(v_reuseFailAlloc_4308_, 1, v___x_4212_);
v___x_4215_ = v_reuseFailAlloc_4308_;
goto v_reusejp_4214_;
}
v_reusejp_4214_:
{
lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; size_t v_sz_4259_; size_t v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; size_t v_sz_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4306_; 
v___x_4216_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_4217_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24);
lean_inc_n(v___x_4211_, 43);
v___x_4218_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4218_, 0, v___x_4211_);
lean_ctor_set(v___x_4218_, 1, v___x_4216_);
lean_ctor_set(v___x_4218_, 2, v___x_4217_);
v___x_4219_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__1));
v___x_4220_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__31));
v___x_4221_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__3, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__3_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__3);
v___x_4222_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__5));
lean_inc_n(v_currMacroScope_4209_, 6);
lean_inc_n(v_quotContext_4208_, 6);
v___x_4223_ = l_Lean_addMacroScope(v_quotContext_4208_, v___x_4222_, v_currMacroScope_4209_);
v___x_4224_ = lean_box(0);
v___x_4225_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__8));
v___x_4226_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4226_, 0, v___x_4211_);
lean_ctor_set(v___x_4226_, 1, v___x_4221_);
lean_ctor_set(v___x_4226_, 2, v___x_4223_);
lean_ctor_set(v___x_4226_, 3, v___x_4225_);
v___x_4227_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__10, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__10_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__10);
v___x_4228_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__11));
v___x_4229_ = l_Lean_addMacroScope(v_quotContext_4208_, v___x_4228_, v_currMacroScope_4209_);
v___x_4230_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__6));
v___x_4231_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4231_, 0, v___x_4211_);
lean_ctor_set(v___x_4231_, 1, v___x_4227_);
lean_ctor_set(v___x_4231_, 2, v___x_4229_);
lean_ctor_set(v___x_4231_, 3, v___x_4230_);
v___x_4232_ = l_Lean_Syntax_node1(v___x_4211_, v___x_4216_, v___x_4231_);
v___x_4233_ = l_Lean_Syntax_node2(v___x_4211_, v___x_4220_, v___x_4226_, v___x_4232_);
lean_inc_ref_n(v___x_4218_, 5);
v___x_4234_ = l_Lean_Syntax_node2(v___x_4211_, v___x_4219_, v___x_4218_, v___x_4233_);
v___x_4235_ = l_Lean_Syntax_node1(v___x_4211_, v___x_4216_, v___x_4234_);
v___x_4236_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__2));
v___x_4237_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4237_, 0, v___x_4211_);
lean_ctor_set(v___x_4237_, 1, v___x_4236_);
v___x_4238_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct___closed__4));
v___x_4239_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__4));
v___x_4240_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__5));
v___x_4241_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4241_, 0, v___x_4211_);
lean_ctor_set(v___x_4241_, 1, v___x_4240_);
v___x_4242_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__26, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__26_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__26);
v___x_4243_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__27));
v___x_4244_ = l_Lean_addMacroScope(v_quotContext_4208_, v___x_4243_, v_currMacroScope_4209_);
v___x_4245_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__30));
v___x_4246_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4246_, 0, v___x_4211_);
lean_ctor_set(v___x_4246_, 1, v___x_4242_);
lean_ctor_set(v___x_4246_, 2, v___x_4244_);
lean_ctor_set(v___x_4246_, 3, v___x_4245_);
v___x_4247_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__10, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__10_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__10);
v___x_4248_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__11));
v___x_4249_ = l_Lean_addMacroScope(v_quotContext_4208_, v___x_4248_, v_currMacroScope_4209_);
v___x_4250_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4250_, 0, v___x_4211_);
lean_ctor_set(v___x_4250_, 1, v___x_4247_);
lean_ctor_set(v___x_4250_, 2, v___x_4249_);
lean_ctor_set(v___x_4250_, 3, v___x_4224_);
lean_inc_ref(v___x_4250_);
v___x_4251_ = l_Lean_Syntax_node1(v___x_4211_, v___x_4216_, v___x_4250_);
v___x_4252_ = l_Lean_Syntax_node2(v___x_4211_, v___x_4220_, v___x_4246_, v___x_4251_);
v___x_4253_ = l_Lean_Syntax_node1(v___x_4211_, v___x_4216_, v___x_4252_);
v___x_4254_ = l_Lean_Syntax_node1(v___x_4211_, v___x_4216_, v___x_4253_);
v___x_4255_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__7));
v___x_4256_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4256_, 0, v___x_4211_);
lean_ctor_set(v___x_4256_, 1, v___x_4255_);
v___x_4257_ = l_Lean_Syntax_node2(v___x_4211_, v___x_4219_, v___x_4218_, v___x_4250_);
v___x_4258_ = l_Lean_Syntax_node1(v___x_4211_, v___x_4216_, v___x_4257_);
v_sz_4259_ = lean_array_size(v_fst_4202_);
v___x_4260_ = ((size_t)0ULL);
v___x_4261_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_spec__0(v_sz_4259_, v___x_4260_, v_fst_4202_);
v___x_4262_ = l_Array_zip___redArg(v___x_4261_, v_snd_4203_);
lean_dec(v_snd_4203_);
lean_dec_ref(v___x_4261_);
v_sz_4263_ = lean_array_size(v___x_4262_);
lean_inc_ref_n(v___x_4256_, 3);
lean_inc_ref_n(v___x_4241_, 3);
v___x_4264_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_spec__1(v___x_4211_, v___x_4241_, v___x_4256_, v_sz_4263_, v___x_4260_, v___x_4262_);
v___x_4265_ = l_Array_append___redArg(v___x_4217_, v___x_4264_);
lean_dec_ref(v___x_4264_);
v___x_4266_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___closed__1));
v___x_4267_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__3___redArg___closed__2));
v___x_4268_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4268_, 0, v___x_4211_);
lean_ctor_set(v___x_4268_, 1, v___x_4267_);
v___x_4269_ = l_Lean_Syntax_node1(v___x_4211_, v___x_4266_, v___x_4268_);
v___x_4270_ = l_Lean_Syntax_node1(v___x_4211_, v___x_4216_, v___x_4269_);
v___x_4271_ = l_Lean_Syntax_node1(v___x_4211_, v___x_4216_, v___x_4270_);
v___x_4272_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__13, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__13_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__13);
v___x_4273_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__15));
v___x_4274_ = l_Lean_addMacroScope(v_quotContext_4208_, v___x_4273_, v_currMacroScope_4209_);
v___x_4275_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__19));
v___x_4276_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4276_, 0, v___x_4211_);
lean_ctor_set(v___x_4276_, 1, v___x_4272_);
lean_ctor_set(v___x_4276_, 2, v___x_4274_);
lean_ctor_set(v___x_4276_, 3, v___x_4275_);
v___x_4277_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__35));
v___x_4278_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__20));
v___x_4279_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4279_, 0, v___x_4211_);
lean_ctor_set(v___x_4279_, 1, v___x_4278_);
v___x_4280_ = l_Lean_Syntax_node1(v___x_4211_, v___x_4277_, v___x_4279_);
v___x_4281_ = l_Lean_Syntax_node1(v___x_4211_, v___x_4216_, v___x_4280_);
lean_inc_ref(v___x_4276_);
v___x_4282_ = l_Lean_Syntax_node2(v___x_4211_, v___x_4220_, v___x_4276_, v___x_4281_);
v___x_4283_ = l_Lean_Syntax_node4(v___x_4211_, v___x_4239_, v___x_4241_, v___x_4271_, v___x_4256_, v___x_4282_);
v___x_4284_ = lean_array_push(v___x_4265_, v___x_4283_);
v___x_4285_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4285_, 0, v___x_4211_);
lean_ctor_set(v___x_4285_, 1, v___x_4216_);
lean_ctor_set(v___x_4285_, 2, v___x_4284_);
v___x_4286_ = l_Lean_Syntax_node1(v___x_4211_, v___x_4238_, v___x_4285_);
lean_inc_ref(v___x_4237_);
lean_inc_ref(v___x_4215_);
v___x_4287_ = l_Lean_Syntax_node6(v___x_4211_, v___x_4213_, v___x_4215_, v___x_4218_, v___x_4218_, v___x_4258_, v___x_4237_, v___x_4286_);
v___x_4288_ = l_Lean_Syntax_node4(v___x_4211_, v___x_4239_, v___x_4241_, v___x_4254_, v___x_4256_, v___x_4287_);
v___x_4289_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__19, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__19_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__19);
v___x_4290_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__20));
v___x_4291_ = l_Lean_addMacroScope(v_quotContext_4208_, v___x_4290_, v_currMacroScope_4209_);
v___x_4292_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct_mkAlts_spec__5___redArg___lam__0___closed__24));
v___x_4293_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4293_, 0, v___x_4211_);
lean_ctor_set(v___x_4293_, 1, v___x_4289_);
lean_ctor_set(v___x_4293_, 2, v___x_4291_);
lean_ctor_set(v___x_4293_, 3, v___x_4292_);
v___x_4294_ = l_Lean_Syntax_node1(v___x_4211_, v___x_4216_, v___x_4293_);
v___x_4295_ = l_Lean_Syntax_node1(v___x_4211_, v___x_4216_, v___x_4294_);
v___x_4296_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___closed__21));
v___x_4297_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4297_, 0, v___x_4211_);
lean_ctor_set(v___x_4297_, 1, v___x_4296_);
v___x_4298_ = l_Lean_Syntax_node1(v___x_4211_, v___x_4277_, v___x_4297_);
v___x_4299_ = l_Lean_Syntax_node1(v___x_4211_, v___x_4216_, v___x_4298_);
v___x_4300_ = l_Lean_Syntax_node2(v___x_4211_, v___x_4220_, v___x_4276_, v___x_4299_);
v___x_4301_ = l_Lean_Syntax_node4(v___x_4211_, v___x_4239_, v___x_4241_, v___x_4295_, v___x_4256_, v___x_4300_);
v___x_4302_ = l_Lean_Syntax_node2(v___x_4211_, v___x_4216_, v___x_4288_, v___x_4301_);
v___x_4303_ = l_Lean_Syntax_node1(v___x_4211_, v___x_4238_, v___x_4302_);
v___x_4304_ = l_Lean_Syntax_node6(v___x_4211_, v___x_4213_, v___x_4215_, v___x_4218_, v___x_4218_, v___x_4235_, v___x_4237_, v___x_4303_);
if (v_isShared_4200_ == 0)
{
lean_ctor_set(v___x_4199_, 0, v___x_4304_);
v___x_4306_ = v___x_4199_;
goto v_reusejp_4305_;
}
else
{
lean_object* v_reuseFailAlloc_4307_; 
v_reuseFailAlloc_4307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4307_, 0, v___x_4304_);
v___x_4306_ = v_reuseFailAlloc_4307_;
goto v_reusejp_4305_;
}
v_reusejp_4305_:
{
return v___x_4306_;
}
}
}
}
}
else
{
lean_object* v_a_4311_; lean_object* v___x_4313_; uint8_t v_isShared_4314_; uint8_t v_isSharedCheck_4318_; 
v_a_4311_ = lean_ctor_get(v___x_4196_, 0);
v_isSharedCheck_4318_ = !lean_is_exclusive(v___x_4196_);
if (v_isSharedCheck_4318_ == 0)
{
v___x_4313_ = v___x_4196_;
v_isShared_4314_ = v_isSharedCheck_4318_;
goto v_resetjp_4312_;
}
else
{
lean_inc(v_a_4311_);
lean_dec(v___x_4196_);
v___x_4313_ = lean_box(0);
v_isShared_4314_ = v_isSharedCheck_4318_;
goto v_resetjp_4312_;
}
v_resetjp_4312_:
{
lean_object* v___x_4316_; 
if (v_isShared_4314_ == 0)
{
v___x_4316_ = v___x_4313_;
goto v_reusejp_4315_;
}
else
{
lean_object* v_reuseFailAlloc_4317_; 
v_reuseFailAlloc_4317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4317_, 0, v_a_4311_);
v___x_4316_ = v_reuseFailAlloc_4317_;
goto v_reusejp_4315_;
}
v_reusejp_4315_:
{
return v___x_4316_;
}
}
}
}
else
{
lean_object* v_a_4319_; lean_object* v___x_4321_; uint8_t v_isShared_4322_; uint8_t v_isSharedCheck_4326_; 
lean_dec_ref(v_ctx_4185_);
v_a_4319_ = lean_ctor_get(v___x_4194_, 0);
v_isSharedCheck_4326_ = !lean_is_exclusive(v___x_4194_);
if (v_isSharedCheck_4326_ == 0)
{
v___x_4321_ = v___x_4194_;
v_isShared_4322_ = v_isSharedCheck_4326_;
goto v_resetjp_4320_;
}
else
{
lean_inc(v_a_4319_);
lean_dec(v___x_4194_);
v___x_4321_ = lean_box(0);
v_isShared_4322_ = v_isSharedCheck_4326_;
goto v_resetjp_4320_;
}
v_resetjp_4320_:
{
lean_object* v___x_4324_; 
if (v_isShared_4322_ == 0)
{
v___x_4324_ = v___x_4321_;
goto v_reusejp_4323_;
}
else
{
lean_object* v_reuseFailAlloc_4325_; 
v_reuseFailAlloc_4325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4325_, 0, v_a_4319_);
v___x_4324_ = v_reuseFailAlloc_4325_;
goto v_reusejp_4323_;
}
v_reusejp_4323_:
{
return v___x_4324_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct___boxed(lean_object* v_ctx_4327_, lean_object* v_indName_4328_, lean_object* v_a_4329_, lean_object* v_a_4330_, lean_object* v_a_4331_, lean_object* v_a_4332_, lean_object* v_a_4333_, lean_object* v_a_4334_, lean_object* v_a_4335_){
_start:
{
lean_object* v_res_4336_; 
v_res_4336_ = l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct(v_ctx_4327_, v_indName_4328_, v_a_4329_, v_a_4330_, v_a_4331_, v_a_4332_, v_a_4333_, v_a_4334_);
lean_dec(v_a_4334_);
lean_dec_ref(v_a_4333_);
lean_dec(v_a_4332_);
lean_dec_ref(v_a_4331_);
lean_dec(v_a_4330_);
lean_dec_ref(v_a_4329_);
return v_res_4336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBody(lean_object* v_ctx_4337_, lean_object* v_header_4338_, lean_object* v_e_4339_, lean_object* v_a_4340_, lean_object* v_a_4341_, lean_object* v_a_4342_, lean_object* v_a_4343_, lean_object* v_a_4344_, lean_object* v_a_4345_){
_start:
{
lean_object* v___x_4347_; lean_object* v_env_4348_; lean_object* v___x_4349_; lean_object* v_indName_4350_; uint8_t v___x_4351_; 
v___x_4347_ = lean_st_ref_get(v_a_4345_);
v_env_4348_ = lean_ctor_get(v___x_4347_, 0);
lean_inc_ref(v_env_4348_);
lean_dec(v___x_4347_);
v___x_4349_ = l_Lean_Expr_getAppFn(v_e_4339_);
v_indName_4350_ = l_Lean_Expr_constName_x21(v___x_4349_);
lean_dec_ref(v___x_4349_);
lean_inc(v_indName_4350_);
v___x_4351_ = l_Lean_isStructure(v_env_4348_, v_indName_4350_);
if (v___x_4351_ == 0)
{
lean_object* v___x_4352_; 
v___x_4352_ = l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct(v_ctx_4337_, v_header_4338_, v_indName_4350_, v_a_4340_, v_a_4341_, v_a_4342_, v_a_4343_, v_a_4344_, v_a_4345_);
return v___x_4352_;
}
else
{
lean_object* v___x_4353_; 
v___x_4353_ = l_Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct(v_header_4338_, v_indName_4350_, v_a_4340_, v_a_4341_, v_a_4342_, v_a_4343_, v_a_4344_, v_a_4345_);
lean_dec_ref(v_header_4338_);
return v___x_4353_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonBody___boxed(lean_object* v_ctx_4354_, lean_object* v_header_4355_, lean_object* v_e_4356_, lean_object* v_a_4357_, lean_object* v_a_4358_, lean_object* v_a_4359_, lean_object* v_a_4360_, lean_object* v_a_4361_, lean_object* v_a_4362_, lean_object* v_a_4363_){
_start:
{
lean_object* v_res_4364_; 
v_res_4364_ = l_Lean_Elab_Deriving_FromToJson_mkToJsonBody(v_ctx_4354_, v_header_4355_, v_e_4356_, v_a_4357_, v_a_4358_, v_a_4359_, v_a_4360_, v_a_4361_, v_a_4362_);
lean_dec(v_a_4362_);
lean_dec_ref(v_a_4361_);
lean_dec(v_a_4360_);
lean_dec_ref(v_a_4359_);
lean_dec(v_a_4358_);
lean_dec_ref(v_a_4357_);
lean_dec_ref(v_e_4356_);
lean_dec_ref(v_ctx_4354_);
return v_res_4364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0(lean_object* v_targetType_4376_, lean_object* v_ctx_4377_, lean_object* v_a_4378_, uint8_t v_usePartial_4379_, lean_object* v___x_4380_, lean_object* v___x_4381_, lean_object* v_auxFunName_4382_, lean_object* v_binders_4383_, lean_object* v___x_4384_, lean_object* v_argNames_4385_, lean_object* v_x_4386_, lean_object* v___y_4387_, lean_object* v___y_4388_, lean_object* v___y_4389_, lean_object* v___y_4390_, lean_object* v___y_4391_, lean_object* v___y_4392_){
_start:
{
lean_object* v___x_4394_; uint8_t v___x_4395_; lean_object* v___x_4396_; 
v___x_4394_ = lean_box(0);
v___x_4395_ = 1;
v___x_4396_ = l_Lean_Elab_Term_elabTerm(v_targetType_4376_, v___x_4394_, v___x_4395_, v___x_4395_, v___y_4387_, v___y_4388_, v___y_4389_, v___y_4390_, v___y_4391_, v___y_4392_);
if (lean_obj_tag(v___x_4396_) == 0)
{
lean_object* v_a_4397_; lean_object* v___x_4398_; 
v_a_4397_ = lean_ctor_get(v___x_4396_, 0);
lean_inc(v_a_4397_);
lean_dec_ref_known(v___x_4396_, 1);
v___x_4398_ = l_Lean_Elab_Deriving_FromToJson_mkToJsonBody(v_ctx_4377_, v_a_4378_, v_a_4397_, v___y_4387_, v___y_4388_, v___y_4389_, v___y_4390_, v___y_4391_, v___y_4392_);
lean_dec(v_a_4397_);
if (lean_obj_tag(v___x_4398_) == 0)
{
if (v_usePartial_4379_ == 0)
{
lean_object* v_a_4399_; lean_object* v___x_4401_; uint8_t v_isShared_4402_; uint8_t v_isSharedCheck_4460_; 
lean_dec_ref(v_argNames_4385_);
v_a_4399_ = lean_ctor_get(v___x_4398_, 0);
v_isSharedCheck_4460_ = !lean_is_exclusive(v___x_4398_);
if (v_isSharedCheck_4460_ == 0)
{
v___x_4401_ = v___x_4398_;
v_isShared_4402_ = v_isSharedCheck_4460_;
goto v_resetjp_4400_;
}
else
{
lean_inc(v_a_4399_);
lean_dec(v___x_4398_);
v___x_4401_ = lean_box(0);
v_isShared_4402_ = v_isSharedCheck_4460_;
goto v_resetjp_4400_;
}
v_resetjp_4400_:
{
lean_object* v_ref_4403_; lean_object* v_quotContext_4404_; lean_object* v_currMacroScope_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; lean_object* v___x_4408_; lean_object* v___x_4409_; lean_object* v___x_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; lean_object* v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4458_; 
v_ref_4403_ = lean_ctor_get(v___y_4391_, 5);
v_quotContext_4404_ = lean_ctor_get(v___y_4391_, 10);
v_currMacroScope_4405_ = lean_ctor_get(v___y_4391_, 11);
v___x_4406_ = l_Lean_SourceInfo_fromRef(v_ref_4403_, v_usePartial_4379_);
v___x_4407_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__21));
v___x_4408_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__0));
lean_inc_ref_n(v___x_4381_, 7);
lean_inc_ref_n(v___x_4380_, 8);
v___x_4409_ = l_Lean_Name_mkStr4(v___x_4380_, v___x_4381_, v___x_4407_, v___x_4408_);
v___x_4410_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__1));
v___x_4411_ = l_Lean_Name_mkStr4(v___x_4380_, v___x_4381_, v___x_4407_, v___x_4410_);
v___x_4412_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_4413_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24);
lean_inc_n(v___x_4406_, 14);
v___x_4414_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4414_, 0, v___x_4406_);
lean_ctor_set(v___x_4414_, 1, v___x_4412_);
lean_ctor_set(v___x_4414_, 2, v___x_4413_);
lean_inc_ref_n(v___x_4414_, 11);
v___x_4415_ = l_Lean_Syntax_node7(v___x_4406_, v___x_4411_, v___x_4414_, v___x_4414_, v___x_4414_, v___x_4414_, v___x_4414_, v___x_4414_, v___x_4414_);
v___x_4416_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__2));
v___x_4417_ = l_Lean_Name_mkStr4(v___x_4380_, v___x_4381_, v___x_4407_, v___x_4416_);
v___x_4418_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__3));
v___x_4419_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4419_, 0, v___x_4406_);
lean_ctor_set(v___x_4419_, 1, v___x_4418_);
v___x_4420_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__4));
v___x_4421_ = l_Lean_Name_mkStr4(v___x_4380_, v___x_4381_, v___x_4407_, v___x_4420_);
v___x_4422_ = lean_mk_syntax_ident(v_auxFunName_4382_);
v___x_4423_ = l_Lean_Syntax_node2(v___x_4406_, v___x_4421_, v___x_4422_, v___x_4414_);
v___x_4424_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__5));
v___x_4425_ = l_Lean_Name_mkStr4(v___x_4380_, v___x_4381_, v___x_4407_, v___x_4424_);
v___x_4426_ = l_Array_append___redArg(v___x_4413_, v_binders_4383_);
v___x_4427_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4427_, 0, v___x_4406_);
lean_ctor_set(v___x_4427_, 1, v___x_4412_);
lean_ctor_set(v___x_4427_, 2, v___x_4426_);
v___x_4428_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__6));
v___x_4429_ = l_Lean_Name_mkStr4(v___x_4380_, v___x_4381_, v___x_4384_, v___x_4428_);
v___x_4430_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__16));
v___x_4431_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4431_, 0, v___x_4406_);
lean_ctor_set(v___x_4431_, 1, v___x_4430_);
v___x_4432_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__12));
v___x_4433_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__17, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__17_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__17);
v___x_4434_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__18));
lean_inc(v_currMacroScope_4405_);
lean_inc(v_quotContext_4404_);
v___x_4435_ = l_Lean_addMacroScope(v_quotContext_4404_, v___x_4434_, v_currMacroScope_4405_);
v___x_4436_ = l_Lean_Name_mkStr2(v___x_4380_, v___x_4432_);
v___x_4437_ = lean_box(0);
lean_inc(v___x_4436_);
v___x_4438_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4438_, 0, v___x_4436_);
lean_ctor_set(v___x_4438_, 1, v___x_4437_);
v___x_4439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4439_, 0, v___x_4436_);
v___x_4440_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4440_, 0, v___x_4439_);
lean_ctor_set(v___x_4440_, 1, v___x_4437_);
v___x_4441_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4441_, 0, v___x_4438_);
lean_ctor_set(v___x_4441_, 1, v___x_4440_);
v___x_4442_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4442_, 0, v___x_4406_);
lean_ctor_set(v___x_4442_, 1, v___x_4433_);
lean_ctor_set(v___x_4442_, 2, v___x_4435_);
lean_ctor_set(v___x_4442_, 3, v___x_4441_);
v___x_4443_ = l_Lean_Syntax_node2(v___x_4406_, v___x_4429_, v___x_4431_, v___x_4442_);
v___x_4444_ = l_Lean_Syntax_node1(v___x_4406_, v___x_4412_, v___x_4443_);
v___x_4445_ = l_Lean_Syntax_node2(v___x_4406_, v___x_4425_, v___x_4427_, v___x_4444_);
v___x_4446_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__7));
v___x_4447_ = l_Lean_Name_mkStr4(v___x_4380_, v___x_4381_, v___x_4407_, v___x_4446_);
v___x_4448_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__6));
v___x_4449_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4449_, 0, v___x_4406_);
lean_ctor_set(v___x_4449_, 1, v___x_4448_);
v___x_4450_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__8));
v___x_4451_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__9));
v___x_4452_ = l_Lean_Name_mkStr4(v___x_4380_, v___x_4381_, v___x_4450_, v___x_4451_);
v___x_4453_ = l_Lean_Syntax_node2(v___x_4406_, v___x_4452_, v___x_4414_, v___x_4414_);
v___x_4454_ = l_Lean_Syntax_node4(v___x_4406_, v___x_4447_, v___x_4449_, v_a_4399_, v___x_4453_, v___x_4414_);
v___x_4455_ = l_Lean_Syntax_node5(v___x_4406_, v___x_4417_, v___x_4419_, v___x_4423_, v___x_4445_, v___x_4454_, v___x_4414_);
v___x_4456_ = l_Lean_Syntax_node2(v___x_4406_, v___x_4409_, v___x_4415_, v___x_4455_);
if (v_isShared_4402_ == 0)
{
lean_ctor_set(v___x_4401_, 0, v___x_4456_);
v___x_4458_ = v___x_4401_;
goto v_reusejp_4457_;
}
else
{
lean_object* v_reuseFailAlloc_4459_; 
v_reuseFailAlloc_4459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4459_, 0, v___x_4456_);
v___x_4458_ = v_reuseFailAlloc_4459_;
goto v_reusejp_4457_;
}
v_reusejp_4457_:
{
return v___x_4458_;
}
}
}
else
{
lean_object* v_a_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; lean_object* v___x_4464_; 
v_a_4461_ = lean_ctor_get(v___x_4398_, 0);
lean_inc(v_a_4461_);
lean_dec_ref_known(v___x_4398_, 1);
v___x_4462_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__1));
lean_inc_ref(v___x_4380_);
v___x_4463_ = l_Lean_Name_mkStr2(v___x_4380_, v___x_4462_);
v___x_4464_ = l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(v_ctx_4377_, v___x_4463_, v_argNames_4385_, v___y_4387_, v___y_4388_, v___y_4389_, v___y_4390_, v___y_4391_, v___y_4392_);
if (lean_obj_tag(v___x_4464_) == 0)
{
lean_object* v_a_4465_; lean_object* v___x_4466_; 
v_a_4465_ = lean_ctor_get(v___x_4464_, 0);
lean_inc(v_a_4465_);
lean_dec_ref_known(v___x_4464_, 1);
v___x_4466_ = l_Lean_Elab_Deriving_mkLet(v_a_4465_, v_a_4461_, v___y_4387_, v___y_4388_, v___y_4389_, v___y_4390_, v___y_4391_, v___y_4392_);
lean_dec(v_a_4465_);
if (lean_obj_tag(v___x_4466_) == 0)
{
lean_object* v_a_4467_; lean_object* v___x_4469_; uint8_t v_isShared_4470_; uint8_t v_isSharedCheck_4534_; 
v_a_4467_ = lean_ctor_get(v___x_4466_, 0);
v_isSharedCheck_4534_ = !lean_is_exclusive(v___x_4466_);
if (v_isSharedCheck_4534_ == 0)
{
v___x_4469_ = v___x_4466_;
v_isShared_4470_ = v_isSharedCheck_4534_;
goto v_resetjp_4468_;
}
else
{
lean_inc(v_a_4467_);
lean_dec(v___x_4466_);
v___x_4469_ = lean_box(0);
v_isShared_4470_ = v_isSharedCheck_4534_;
goto v_resetjp_4468_;
}
v_resetjp_4468_:
{
lean_object* v_ref_4471_; lean_object* v_quotContext_4472_; lean_object* v_currMacroScope_4473_; uint8_t v___x_4474_; lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; lean_object* v___x_4497_; lean_object* v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_4532_; 
v_ref_4471_ = lean_ctor_get(v___y_4391_, 5);
v_quotContext_4472_ = lean_ctor_get(v___y_4391_, 10);
v_currMacroScope_4473_ = lean_ctor_get(v___y_4391_, 11);
v___x_4474_ = 0;
v___x_4475_ = l_Lean_SourceInfo_fromRef(v_ref_4471_, v___x_4474_);
v___x_4476_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__21));
v___x_4477_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__0));
lean_inc_ref_n(v___x_4381_, 8);
lean_inc_ref_n(v___x_4380_, 9);
v___x_4478_ = l_Lean_Name_mkStr4(v___x_4380_, v___x_4381_, v___x_4476_, v___x_4477_);
v___x_4479_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__1));
v___x_4480_ = l_Lean_Name_mkStr4(v___x_4380_, v___x_4381_, v___x_4476_, v___x_4479_);
v___x_4481_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_4482_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24);
lean_inc_n(v___x_4475_, 17);
v___x_4483_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4483_, 0, v___x_4475_);
lean_ctor_set(v___x_4483_, 1, v___x_4481_);
lean_ctor_set(v___x_4483_, 2, v___x_4482_);
v___x_4484_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__10));
v___x_4485_ = l_Lean_Name_mkStr4(v___x_4380_, v___x_4381_, v___x_4476_, v___x_4484_);
v___x_4486_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4486_, 0, v___x_4475_);
lean_ctor_set(v___x_4486_, 1, v___x_4484_);
v___x_4487_ = l_Lean_Syntax_node1(v___x_4475_, v___x_4485_, v___x_4486_);
v___x_4488_ = l_Lean_Syntax_node1(v___x_4475_, v___x_4481_, v___x_4487_);
lean_inc_ref_n(v___x_4483_, 10);
v___x_4489_ = l_Lean_Syntax_node7(v___x_4475_, v___x_4480_, v___x_4483_, v___x_4483_, v___x_4483_, v___x_4483_, v___x_4483_, v___x_4483_, v___x_4488_);
v___x_4490_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__2));
v___x_4491_ = l_Lean_Name_mkStr4(v___x_4380_, v___x_4381_, v___x_4476_, v___x_4490_);
v___x_4492_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__3));
v___x_4493_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4493_, 0, v___x_4475_);
lean_ctor_set(v___x_4493_, 1, v___x_4492_);
v___x_4494_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__4));
v___x_4495_ = l_Lean_Name_mkStr4(v___x_4380_, v___x_4381_, v___x_4476_, v___x_4494_);
v___x_4496_ = lean_mk_syntax_ident(v_auxFunName_4382_);
v___x_4497_ = l_Lean_Syntax_node2(v___x_4475_, v___x_4495_, v___x_4496_, v___x_4483_);
v___x_4498_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__5));
v___x_4499_ = l_Lean_Name_mkStr4(v___x_4380_, v___x_4381_, v___x_4476_, v___x_4498_);
v___x_4500_ = l_Array_append___redArg(v___x_4482_, v_binders_4383_);
v___x_4501_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4501_, 0, v___x_4475_);
lean_ctor_set(v___x_4501_, 1, v___x_4481_);
lean_ctor_set(v___x_4501_, 2, v___x_4500_);
v___x_4502_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__6));
v___x_4503_ = l_Lean_Name_mkStr4(v___x_4380_, v___x_4381_, v___x_4384_, v___x_4502_);
v___x_4504_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__16));
v___x_4505_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4505_, 0, v___x_4475_);
lean_ctor_set(v___x_4505_, 1, v___x_4504_);
v___x_4506_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__12));
v___x_4507_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__17, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__17_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__17);
v___x_4508_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__18));
lean_inc(v_currMacroScope_4473_);
lean_inc(v_quotContext_4472_);
v___x_4509_ = l_Lean_addMacroScope(v_quotContext_4472_, v___x_4508_, v_currMacroScope_4473_);
v___x_4510_ = l_Lean_Name_mkStr2(v___x_4380_, v___x_4506_);
v___x_4511_ = lean_box(0);
lean_inc(v___x_4510_);
v___x_4512_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4512_, 0, v___x_4510_);
lean_ctor_set(v___x_4512_, 1, v___x_4511_);
v___x_4513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4513_, 0, v___x_4510_);
v___x_4514_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4514_, 0, v___x_4513_);
lean_ctor_set(v___x_4514_, 1, v___x_4511_);
v___x_4515_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4515_, 0, v___x_4512_);
lean_ctor_set(v___x_4515_, 1, v___x_4514_);
v___x_4516_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4516_, 0, v___x_4475_);
lean_ctor_set(v___x_4516_, 1, v___x_4507_);
lean_ctor_set(v___x_4516_, 2, v___x_4509_);
lean_ctor_set(v___x_4516_, 3, v___x_4515_);
v___x_4517_ = l_Lean_Syntax_node2(v___x_4475_, v___x_4503_, v___x_4505_, v___x_4516_);
v___x_4518_ = l_Lean_Syntax_node1(v___x_4475_, v___x_4481_, v___x_4517_);
v___x_4519_ = l_Lean_Syntax_node2(v___x_4475_, v___x_4499_, v___x_4501_, v___x_4518_);
v___x_4520_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__7));
v___x_4521_ = l_Lean_Name_mkStr4(v___x_4380_, v___x_4381_, v___x_4476_, v___x_4520_);
v___x_4522_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__6));
v___x_4523_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4523_, 0, v___x_4475_);
lean_ctor_set(v___x_4523_, 1, v___x_4522_);
v___x_4524_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__8));
v___x_4525_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__9));
v___x_4526_ = l_Lean_Name_mkStr4(v___x_4380_, v___x_4381_, v___x_4524_, v___x_4525_);
v___x_4527_ = l_Lean_Syntax_node2(v___x_4475_, v___x_4526_, v___x_4483_, v___x_4483_);
v___x_4528_ = l_Lean_Syntax_node4(v___x_4475_, v___x_4521_, v___x_4523_, v_a_4467_, v___x_4527_, v___x_4483_);
v___x_4529_ = l_Lean_Syntax_node5(v___x_4475_, v___x_4491_, v___x_4493_, v___x_4497_, v___x_4519_, v___x_4528_, v___x_4483_);
v___x_4530_ = l_Lean_Syntax_node2(v___x_4475_, v___x_4478_, v___x_4489_, v___x_4529_);
if (v_isShared_4470_ == 0)
{
lean_ctor_set(v___x_4469_, 0, v___x_4530_);
v___x_4532_ = v___x_4469_;
goto v_reusejp_4531_;
}
else
{
lean_object* v_reuseFailAlloc_4533_; 
v_reuseFailAlloc_4533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4533_, 0, v___x_4530_);
v___x_4532_ = v_reuseFailAlloc_4533_;
goto v_reusejp_4531_;
}
v_reusejp_4531_:
{
return v___x_4532_;
}
}
}
else
{
lean_dec_ref(v___x_4384_);
lean_dec(v_auxFunName_4382_);
lean_dec_ref(v___x_4381_);
lean_dec_ref(v___x_4380_);
return v___x_4466_;
}
}
else
{
lean_object* v_a_4535_; lean_object* v___x_4537_; uint8_t v_isShared_4538_; uint8_t v_isSharedCheck_4542_; 
lean_dec(v_a_4461_);
lean_dec_ref(v___x_4384_);
lean_dec(v_auxFunName_4382_);
lean_dec_ref(v___x_4381_);
lean_dec_ref(v___x_4380_);
v_a_4535_ = lean_ctor_get(v___x_4464_, 0);
v_isSharedCheck_4542_ = !lean_is_exclusive(v___x_4464_);
if (v_isSharedCheck_4542_ == 0)
{
v___x_4537_ = v___x_4464_;
v_isShared_4538_ = v_isSharedCheck_4542_;
goto v_resetjp_4536_;
}
else
{
lean_inc(v_a_4535_);
lean_dec(v___x_4464_);
v___x_4537_ = lean_box(0);
v_isShared_4538_ = v_isSharedCheck_4542_;
goto v_resetjp_4536_;
}
v_resetjp_4536_:
{
lean_object* v___x_4540_; 
if (v_isShared_4538_ == 0)
{
v___x_4540_ = v___x_4537_;
goto v_reusejp_4539_;
}
else
{
lean_object* v_reuseFailAlloc_4541_; 
v_reuseFailAlloc_4541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4541_, 0, v_a_4535_);
v___x_4540_ = v_reuseFailAlloc_4541_;
goto v_reusejp_4539_;
}
v_reusejp_4539_:
{
return v___x_4540_;
}
}
}
}
}
else
{
lean_dec_ref(v_argNames_4385_);
lean_dec_ref(v___x_4384_);
lean_dec(v_auxFunName_4382_);
lean_dec_ref(v___x_4381_);
lean_dec_ref(v___x_4380_);
return v___x_4398_;
}
}
else
{
lean_object* v_a_4543_; lean_object* v___x_4545_; uint8_t v_isShared_4546_; uint8_t v_isSharedCheck_4550_; 
lean_dec_ref(v_argNames_4385_);
lean_dec_ref(v___x_4384_);
lean_dec(v_auxFunName_4382_);
lean_dec_ref(v___x_4381_);
lean_dec_ref(v___x_4380_);
lean_dec_ref(v_a_4378_);
v_a_4543_ = lean_ctor_get(v___x_4396_, 0);
v_isSharedCheck_4550_ = !lean_is_exclusive(v___x_4396_);
if (v_isSharedCheck_4550_ == 0)
{
v___x_4545_ = v___x_4396_;
v_isShared_4546_ = v_isSharedCheck_4550_;
goto v_resetjp_4544_;
}
else
{
lean_inc(v_a_4543_);
lean_dec(v___x_4396_);
v___x_4545_ = lean_box(0);
v_isShared_4546_ = v_isSharedCheck_4550_;
goto v_resetjp_4544_;
}
v_resetjp_4544_:
{
lean_object* v___x_4548_; 
if (v_isShared_4546_ == 0)
{
v___x_4548_ = v___x_4545_;
goto v_reusejp_4547_;
}
else
{
lean_object* v_reuseFailAlloc_4549_; 
v_reuseFailAlloc_4549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4549_, 0, v_a_4543_);
v___x_4548_ = v_reuseFailAlloc_4549_;
goto v_reusejp_4547_;
}
v_reusejp_4547_:
{
return v___x_4548_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___boxed(lean_object** _args){
lean_object* v_targetType_4551_ = _args[0];
lean_object* v_ctx_4552_ = _args[1];
lean_object* v_a_4553_ = _args[2];
lean_object* v_usePartial_4554_ = _args[3];
lean_object* v___x_4555_ = _args[4];
lean_object* v___x_4556_ = _args[5];
lean_object* v_auxFunName_4557_ = _args[6];
lean_object* v_binders_4558_ = _args[7];
lean_object* v___x_4559_ = _args[8];
lean_object* v_argNames_4560_ = _args[9];
lean_object* v_x_4561_ = _args[10];
lean_object* v___y_4562_ = _args[11];
lean_object* v___y_4563_ = _args[12];
lean_object* v___y_4564_ = _args[13];
lean_object* v___y_4565_ = _args[14];
lean_object* v___y_4566_ = _args[15];
lean_object* v___y_4567_ = _args[16];
lean_object* v___y_4568_ = _args[17];
_start:
{
uint8_t v_usePartial_boxed_4569_; lean_object* v_res_4570_; 
v_usePartial_boxed_4569_ = lean_unbox(v_usePartial_4554_);
v_res_4570_ = l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0(v_targetType_4551_, v_ctx_4552_, v_a_4553_, v_usePartial_boxed_4569_, v___x_4555_, v___x_4556_, v_auxFunName_4557_, v_binders_4558_, v___x_4559_, v_argNames_4560_, v_x_4561_, v___y_4562_, v___y_4563_, v___y_4564_, v___y_4565_, v___y_4566_, v___y_4567_);
lean_dec(v___y_4567_);
lean_dec_ref(v___y_4566_);
lean_dec(v___y_4565_);
lean_dec_ref(v___y_4564_);
lean_dec(v___y_4563_);
lean_dec_ref(v___y_4562_);
lean_dec_ref(v_x_4561_);
lean_dec_ref(v_binders_4558_);
lean_dec_ref(v_ctx_4552_);
return v_res_4570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction(lean_object* v_ctx_4571_, lean_object* v_i_4572_, lean_object* v_a_4573_, lean_object* v_a_4574_, lean_object* v_a_4575_, lean_object* v_a_4576_, lean_object* v_a_4577_, lean_object* v_a_4578_){
_start:
{
lean_object* v_typeInfos_4580_; lean_object* v_auxFunNames_4581_; uint8_t v_usePartial_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; lean_object* v___x_4585_; 
v_typeInfos_4580_ = lean_ctor_get(v_ctx_4571_, 1);
v_auxFunNames_4581_ = lean_ctor_get(v_ctx_4571_, 2);
v_usePartial_4582_ = lean_ctor_get_uint8(v_ctx_4571_, sizeof(void*)*3);
v___x_4583_ = l_Lean_instInhabitedInductiveVal_default;
v___x_4584_ = lean_array_get_borrowed(v___x_4583_, v_typeInfos_4580_, v_i_4572_);
lean_inc(v___x_4584_);
v___x_4585_ = l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader(v___x_4584_, v_a_4573_, v_a_4574_, v_a_4575_, v_a_4576_, v_a_4577_, v_a_4578_);
if (lean_obj_tag(v___x_4585_) == 0)
{
lean_object* v_a_4586_; lean_object* v_binders_4587_; lean_object* v_argNames_4588_; lean_object* v_targetType_4589_; lean_object* v___x_4590_; lean_object* v_auxFunName_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; lean_object* v___x_4595_; lean_object* v___f_4596_; lean_object* v___x_4597_; 
v_a_4586_ = lean_ctor_get(v___x_4585_, 0);
lean_inc(v_a_4586_);
lean_dec_ref_known(v___x_4585_, 1);
v_binders_4587_ = lean_ctor_get(v_a_4586_, 0);
lean_inc_ref_n(v_binders_4587_, 2);
v_argNames_4588_ = lean_ctor_get(v_a_4586_, 1);
lean_inc_ref(v_argNames_4588_);
v_targetType_4589_ = lean_ctor_get(v_a_4586_, 3);
lean_inc(v_targetType_4589_);
v___x_4590_ = lean_box(0);
v_auxFunName_4591_ = lean_array_get(v___x_4590_, v_auxFunNames_4581_, v_i_4572_);
v___x_4592_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0));
v___x_4593_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2));
v___x_4594_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3));
v___x_4595_ = lean_box(v_usePartial_4582_);
v___f_4596_ = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___boxed), 18, 10);
lean_closure_set(v___f_4596_, 0, v_targetType_4589_);
lean_closure_set(v___f_4596_, 1, v_ctx_4571_);
lean_closure_set(v___f_4596_, 2, v_a_4586_);
lean_closure_set(v___f_4596_, 3, v___x_4595_);
lean_closure_set(v___f_4596_, 4, v___x_4592_);
lean_closure_set(v___f_4596_, 5, v___x_4593_);
lean_closure_set(v___f_4596_, 6, v_auxFunName_4591_);
lean_closure_set(v___f_4596_, 7, v_binders_4587_);
lean_closure_set(v___f_4596_, 8, v___x_4594_);
lean_closure_set(v___f_4596_, 9, v_argNames_4588_);
v___x_4597_ = l_Lean_Elab_Term_elabBinders___redArg(v_binders_4587_, v___f_4596_, v_a_4573_, v_a_4574_, v_a_4575_, v_a_4576_, v_a_4577_, v_a_4578_);
return v___x_4597_;
}
else
{
lean_object* v_a_4598_; lean_object* v___x_4600_; uint8_t v_isShared_4601_; uint8_t v_isSharedCheck_4605_; 
lean_dec_ref(v_ctx_4571_);
v_a_4598_ = lean_ctor_get(v___x_4585_, 0);
v_isSharedCheck_4605_ = !lean_is_exclusive(v___x_4585_);
if (v_isSharedCheck_4605_ == 0)
{
v___x_4600_ = v___x_4585_;
v_isShared_4601_ = v_isSharedCheck_4605_;
goto v_resetjp_4599_;
}
else
{
lean_inc(v_a_4598_);
lean_dec(v___x_4585_);
v___x_4600_ = lean_box(0);
v_isShared_4601_ = v_isSharedCheck_4605_;
goto v_resetjp_4599_;
}
v_resetjp_4599_:
{
lean_object* v___x_4603_; 
if (v_isShared_4601_ == 0)
{
v___x_4603_ = v___x_4600_;
goto v_reusejp_4602_;
}
else
{
lean_object* v_reuseFailAlloc_4604_; 
v_reuseFailAlloc_4604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4604_, 0, v_a_4598_);
v___x_4603_ = v_reuseFailAlloc_4604_;
goto v_reusejp_4602_;
}
v_reusejp_4602_:
{
return v___x_4603_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___boxed(lean_object* v_ctx_4606_, lean_object* v_i_4607_, lean_object* v_a_4608_, lean_object* v_a_4609_, lean_object* v_a_4610_, lean_object* v_a_4611_, lean_object* v_a_4612_, lean_object* v_a_4613_, lean_object* v_a_4614_){
_start:
{
lean_object* v_res_4615_; 
v_res_4615_ = l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction(v_ctx_4606_, v_i_4607_, v_a_4608_, v_a_4609_, v_a_4610_, v_a_4611_, v_a_4612_, v_a_4613_);
lean_dec(v_a_4613_);
lean_dec_ref(v_a_4612_);
lean_dec(v_a_4611_);
lean_dec_ref(v_a_4610_);
lean_dec(v_a_4609_);
lean_dec_ref(v_a_4608_);
lean_dec(v_i_4607_);
return v_res_4615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBody(lean_object* v_ctx_4616_, lean_object* v_e_4617_, lean_object* v_a_4618_, lean_object* v_a_4619_, lean_object* v_a_4620_, lean_object* v_a_4621_, lean_object* v_a_4622_, lean_object* v_a_4623_){
_start:
{
lean_object* v___x_4625_; lean_object* v_env_4626_; lean_object* v___x_4627_; lean_object* v_indName_4628_; uint8_t v___x_4629_; 
v___x_4625_ = lean_st_ref_get(v_a_4623_);
v_env_4626_ = lean_ctor_get(v___x_4625_, 0);
lean_inc_ref(v_env_4626_);
lean_dec(v___x_4625_);
v___x_4627_ = l_Lean_Expr_getAppFn(v_e_4617_);
v_indName_4628_ = l_Lean_Expr_constName_x21(v___x_4627_);
lean_dec_ref(v___x_4627_);
lean_inc(v_indName_4628_);
v___x_4629_ = l_Lean_isStructure(v_env_4626_, v_indName_4628_);
if (v___x_4629_ == 0)
{
lean_object* v___x_4630_; 
v___x_4630_ = l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForInduct(v_ctx_4616_, v_indName_4628_, v_a_4618_, v_a_4619_, v_a_4620_, v_a_4621_, v_a_4622_, v_a_4623_);
return v___x_4630_;
}
else
{
lean_object* v___x_4631_; 
lean_dec_ref(v_ctx_4616_);
v___x_4631_ = l_Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct(v_indName_4628_, v_a_4618_, v_a_4619_, v_a_4620_, v_a_4621_, v_a_4622_, v_a_4623_);
return v___x_4631_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonBody___boxed(lean_object* v_ctx_4632_, lean_object* v_e_4633_, lean_object* v_a_4634_, lean_object* v_a_4635_, lean_object* v_a_4636_, lean_object* v_a_4637_, lean_object* v_a_4638_, lean_object* v_a_4639_, lean_object* v_a_4640_){
_start:
{
lean_object* v_res_4641_; 
v_res_4641_ = l_Lean_Elab_Deriving_FromToJson_mkFromJsonBody(v_ctx_4632_, v_e_4633_, v_a_4634_, v_a_4635_, v_a_4636_, v_a_4637_, v_a_4638_, v_a_4639_);
lean_dec(v_a_4639_);
lean_dec_ref(v_a_4638_);
lean_dec(v_a_4637_);
lean_dec_ref(v_a_4636_);
lean_dec(v_a_4635_);
lean_dec_ref(v_a_4634_);
lean_dec_ref(v_e_4633_);
return v_res_4641_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4642_; lean_object* v___x_4643_; 
v___x_4642_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__0___redArg___closed__11));
v___x_4643_ = l_String_toRawSubstring_x27(v___x_4642_);
return v___x_4643_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__7(void){
_start:
{
lean_object* v___x_4658_; lean_object* v___x_4659_; 
v___x_4658_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__6));
v___x_4659_ = l_String_toRawSubstring_x27(v___x_4658_);
return v___x_4659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0(lean_object* v_targetType_4673_, lean_object* v_ctx_4674_, lean_object* v___x_4675_, lean_object* v_argNames_4676_, lean_object* v_indval_4677_, lean_object* v___x_4678_, lean_object* v_auxFunName_4679_, lean_object* v_binders_4680_, lean_object* v___x_4681_, uint8_t v_usePartial_4682_, lean_object* v_x_4683_, lean_object* v___y_4684_, lean_object* v___y_4685_, lean_object* v___y_4686_, lean_object* v___y_4687_, lean_object* v___y_4688_, lean_object* v___y_4689_){
_start:
{
lean_object* v___x_4691_; uint8_t v___x_4692_; lean_object* v___x_4693_; 
v___x_4691_ = lean_box(0);
v___x_4692_ = 1;
v___x_4693_ = l_Lean_Elab_Term_elabTerm(v_targetType_4673_, v___x_4691_, v___x_4692_, v___x_4692_, v___y_4684_, v___y_4685_, v___y_4686_, v___y_4687_, v___y_4688_, v___y_4689_);
if (lean_obj_tag(v___x_4693_) == 0)
{
lean_object* v_a_4694_; lean_object* v___x_4695_; 
v_a_4694_ = lean_ctor_get(v___x_4693_, 0);
lean_inc(v_a_4694_);
lean_dec_ref_known(v___x_4693_, 1);
lean_inc_ref(v_ctx_4674_);
v___x_4695_ = l_Lean_Elab_Deriving_FromToJson_mkFromJsonBody(v_ctx_4674_, v_a_4694_, v___y_4684_, v___y_4685_, v___y_4686_, v___y_4687_, v___y_4688_, v___y_4689_);
lean_dec(v_a_4694_);
if (lean_obj_tag(v___x_4695_) == 0)
{
lean_object* v_a_4696_; 
v_a_4696_ = lean_ctor_get(v___x_4695_, 0);
lean_inc(v_a_4696_);
lean_dec_ref_known(v___x_4695_, 1);
if (v_usePartial_4682_ == 0)
{
uint8_t v_isRec_4784_; 
v_isRec_4784_ = lean_ctor_get_uint8(v_indval_4677_, sizeof(void*)*6);
if (v_isRec_4784_ == 0)
{
lean_object* v___x_4785_; 
lean_dec_ref(v_ctx_4674_);
v___x_4785_ = l_Lean_Elab_Deriving_mkInductiveApp___redArg(v_indval_4677_, v_argNames_4676_, v___y_4688_);
if (lean_obj_tag(v___x_4785_) == 0)
{
lean_object* v_a_4786_; lean_object* v___x_4788_; uint8_t v_isShared_4789_; uint8_t v_isSharedCheck_4850_; 
v_a_4786_ = lean_ctor_get(v___x_4785_, 0);
v_isSharedCheck_4850_ = !lean_is_exclusive(v___x_4785_);
if (v_isSharedCheck_4850_ == 0)
{
v___x_4788_ = v___x_4785_;
v_isShared_4789_ = v_isSharedCheck_4850_;
goto v_resetjp_4787_;
}
else
{
lean_inc(v_a_4786_);
lean_dec(v___x_4785_);
v___x_4788_ = lean_box(0);
v_isShared_4789_ = v_isSharedCheck_4850_;
goto v_resetjp_4787_;
}
v_resetjp_4787_:
{
lean_object* v_ref_4790_; lean_object* v_quotContext_4791_; lean_object* v_currMacroScope_4792_; lean_object* v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; lean_object* v___x_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; lean_object* v___x_4828_; lean_object* v___x_4829_; lean_object* v___x_4830_; lean_object* v___x_4831_; lean_object* v___x_4832_; lean_object* v___x_4833_; lean_object* v___x_4834_; lean_object* v___x_4835_; lean_object* v___x_4836_; lean_object* v___x_4837_; lean_object* v___x_4838_; lean_object* v___x_4839_; lean_object* v___x_4840_; lean_object* v___x_4841_; lean_object* v___x_4842_; lean_object* v___x_4843_; lean_object* v___x_4844_; lean_object* v___x_4845_; lean_object* v___x_4846_; lean_object* v___x_4848_; 
v_ref_4790_ = lean_ctor_get(v___y_4688_, 5);
v_quotContext_4791_ = lean_ctor_get(v___y_4688_, 10);
v_currMacroScope_4792_ = lean_ctor_get(v___y_4688_, 11);
v___x_4793_ = l_Lean_SourceInfo_fromRef(v_ref_4790_, v_isRec_4784_);
v___x_4794_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__21));
v___x_4795_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__0));
lean_inc_ref_n(v___x_4678_, 8);
lean_inc_ref_n(v___x_4675_, 8);
v___x_4796_ = l_Lean_Name_mkStr4(v___x_4675_, v___x_4678_, v___x_4794_, v___x_4795_);
v___x_4797_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__1));
v___x_4798_ = l_Lean_Name_mkStr4(v___x_4675_, v___x_4678_, v___x_4794_, v___x_4797_);
v___x_4799_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_4800_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24);
lean_inc_n(v___x_4793_, 17);
v___x_4801_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4801_, 0, v___x_4793_);
lean_ctor_set(v___x_4801_, 1, v___x_4799_);
lean_ctor_set(v___x_4801_, 2, v___x_4800_);
lean_inc_ref_n(v___x_4801_, 11);
v___x_4802_ = l_Lean_Syntax_node7(v___x_4793_, v___x_4798_, v___x_4801_, v___x_4801_, v___x_4801_, v___x_4801_, v___x_4801_, v___x_4801_, v___x_4801_);
v___x_4803_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__2));
v___x_4804_ = l_Lean_Name_mkStr4(v___x_4675_, v___x_4678_, v___x_4794_, v___x_4803_);
v___x_4805_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__3));
v___x_4806_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4806_, 0, v___x_4793_);
lean_ctor_set(v___x_4806_, 1, v___x_4805_);
v___x_4807_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__4));
v___x_4808_ = l_Lean_Name_mkStr4(v___x_4675_, v___x_4678_, v___x_4794_, v___x_4807_);
v___x_4809_ = lean_mk_syntax_ident(v_auxFunName_4679_);
v___x_4810_ = l_Lean_Syntax_node2(v___x_4793_, v___x_4808_, v___x_4809_, v___x_4801_);
v___x_4811_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__5));
v___x_4812_ = l_Lean_Name_mkStr4(v___x_4675_, v___x_4678_, v___x_4794_, v___x_4811_);
v___x_4813_ = l_Array_append___redArg(v___x_4800_, v_binders_4680_);
v___x_4814_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4814_, 0, v___x_4793_);
lean_ctor_set(v___x_4814_, 1, v___x_4799_);
lean_ctor_set(v___x_4814_, 2, v___x_4813_);
v___x_4815_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__6));
lean_inc_ref(v___x_4681_);
v___x_4816_ = l_Lean_Name_mkStr4(v___x_4675_, v___x_4678_, v___x_4681_, v___x_4815_);
v___x_4817_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__16));
v___x_4818_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4818_, 0, v___x_4793_);
lean_ctor_set(v___x_4818_, 1, v___x_4817_);
v___x_4819_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__30));
v___x_4820_ = l_Lean_Name_mkStr4(v___x_4675_, v___x_4678_, v___x_4681_, v___x_4819_);
v___x_4821_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__0, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__0_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__0);
v___x_4822_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__1));
lean_inc_n(v_currMacroScope_4792_, 2);
lean_inc_n(v_quotContext_4791_, 2);
v___x_4823_ = l_Lean_addMacroScope(v_quotContext_4791_, v___x_4822_, v_currMacroScope_4792_);
v___x_4824_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__5));
v___x_4825_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4825_, 0, v___x_4793_);
lean_ctor_set(v___x_4825_, 1, v___x_4821_);
lean_ctor_set(v___x_4825_, 2, v___x_4823_);
lean_ctor_set(v___x_4825_, 3, v___x_4824_);
v___x_4826_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__7, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__7_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__7);
v___x_4827_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__8));
v___x_4828_ = l_Lean_addMacroScope(v_quotContext_4791_, v___x_4827_, v_currMacroScope_4792_);
v___x_4829_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__12));
v___x_4830_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4830_, 0, v___x_4793_);
lean_ctor_set(v___x_4830_, 1, v___x_4826_);
lean_ctor_set(v___x_4830_, 2, v___x_4828_);
lean_ctor_set(v___x_4830_, 3, v___x_4829_);
v___x_4831_ = l_Lean_Syntax_node2(v___x_4793_, v___x_4799_, v___x_4830_, v_a_4786_);
v___x_4832_ = l_Lean_Syntax_node2(v___x_4793_, v___x_4820_, v___x_4825_, v___x_4831_);
v___x_4833_ = l_Lean_Syntax_node2(v___x_4793_, v___x_4816_, v___x_4818_, v___x_4832_);
v___x_4834_ = l_Lean_Syntax_node1(v___x_4793_, v___x_4799_, v___x_4833_);
v___x_4835_ = l_Lean_Syntax_node2(v___x_4793_, v___x_4812_, v___x_4814_, v___x_4834_);
v___x_4836_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__7));
v___x_4837_ = l_Lean_Name_mkStr4(v___x_4675_, v___x_4678_, v___x_4794_, v___x_4836_);
v___x_4838_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__6));
v___x_4839_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4839_, 0, v___x_4793_);
lean_ctor_set(v___x_4839_, 1, v___x_4838_);
v___x_4840_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__8));
v___x_4841_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__9));
v___x_4842_ = l_Lean_Name_mkStr4(v___x_4675_, v___x_4678_, v___x_4840_, v___x_4841_);
v___x_4843_ = l_Lean_Syntax_node2(v___x_4793_, v___x_4842_, v___x_4801_, v___x_4801_);
v___x_4844_ = l_Lean_Syntax_node4(v___x_4793_, v___x_4837_, v___x_4839_, v_a_4696_, v___x_4843_, v___x_4801_);
v___x_4845_ = l_Lean_Syntax_node5(v___x_4793_, v___x_4804_, v___x_4806_, v___x_4810_, v___x_4835_, v___x_4844_, v___x_4801_);
v___x_4846_ = l_Lean_Syntax_node2(v___x_4793_, v___x_4796_, v___x_4802_, v___x_4845_);
if (v_isShared_4789_ == 0)
{
lean_ctor_set(v___x_4788_, 0, v___x_4846_);
v___x_4848_ = v___x_4788_;
goto v_reusejp_4847_;
}
else
{
lean_object* v_reuseFailAlloc_4849_; 
v_reuseFailAlloc_4849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4849_, 0, v___x_4846_);
v___x_4848_ = v_reuseFailAlloc_4849_;
goto v_reusejp_4847_;
}
v_reusejp_4847_:
{
return v___x_4848_;
}
}
}
else
{
lean_dec(v_a_4696_);
lean_dec_ref(v___x_4681_);
lean_dec(v_auxFunName_4679_);
lean_dec_ref(v___x_4678_);
lean_dec_ref(v___x_4675_);
return v___x_4785_;
}
}
else
{
goto v___jp_4697_;
}
}
else
{
goto v___jp_4697_;
}
v___jp_4697_:
{
lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; 
v___x_4698_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__0));
lean_inc_ref(v___x_4675_);
v___x_4699_ = l_Lean_Name_mkStr2(v___x_4675_, v___x_4698_);
lean_inc_ref(v_argNames_4676_);
v___x_4700_ = l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(v_ctx_4674_, v___x_4699_, v_argNames_4676_, v___y_4684_, v___y_4685_, v___y_4686_, v___y_4687_, v___y_4688_, v___y_4689_);
lean_dec_ref(v_ctx_4674_);
if (lean_obj_tag(v___x_4700_) == 0)
{
lean_object* v_a_4701_; lean_object* v___x_4702_; 
v_a_4701_ = lean_ctor_get(v___x_4700_, 0);
lean_inc(v_a_4701_);
lean_dec_ref_known(v___x_4700_, 1);
v___x_4702_ = l_Lean_Elab_Deriving_mkLet(v_a_4701_, v_a_4696_, v___y_4684_, v___y_4685_, v___y_4686_, v___y_4687_, v___y_4688_, v___y_4689_);
lean_dec(v_a_4701_);
if (lean_obj_tag(v___x_4702_) == 0)
{
lean_object* v_a_4703_; lean_object* v___x_4704_; 
v_a_4703_ = lean_ctor_get(v___x_4702_, 0);
lean_inc(v_a_4703_);
lean_dec_ref_known(v___x_4702_, 1);
v___x_4704_ = l_Lean_Elab_Deriving_mkInductiveApp___redArg(v_indval_4677_, v_argNames_4676_, v___y_4688_);
if (lean_obj_tag(v___x_4704_) == 0)
{
lean_object* v_a_4705_; lean_object* v___x_4707_; uint8_t v_isShared_4708_; uint8_t v_isSharedCheck_4775_; 
v_a_4705_ = lean_ctor_get(v___x_4704_, 0);
v_isSharedCheck_4775_ = !lean_is_exclusive(v___x_4704_);
if (v_isSharedCheck_4775_ == 0)
{
v___x_4707_ = v___x_4704_;
v_isShared_4708_ = v_isSharedCheck_4775_;
goto v_resetjp_4706_;
}
else
{
lean_inc(v_a_4705_);
lean_dec(v___x_4704_);
v___x_4707_ = lean_box(0);
v_isShared_4708_ = v_isSharedCheck_4775_;
goto v_resetjp_4706_;
}
v_resetjp_4706_:
{
lean_object* v_ref_4709_; lean_object* v_quotContext_4710_; lean_object* v_currMacroScope_4711_; uint8_t v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; lean_object* v___x_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; lean_object* v___x_4747_; lean_object* v___x_4748_; lean_object* v___x_4749_; lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; lean_object* v___x_4757_; lean_object* v___x_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; lean_object* v___x_4768_; lean_object* v___x_4769_; lean_object* v___x_4770_; lean_object* v___x_4771_; lean_object* v___x_4773_; 
v_ref_4709_ = lean_ctor_get(v___y_4688_, 5);
v_quotContext_4710_ = lean_ctor_get(v___y_4688_, 10);
v_currMacroScope_4711_ = lean_ctor_get(v___y_4688_, 11);
v___x_4712_ = 0;
v___x_4713_ = l_Lean_SourceInfo_fromRef(v_ref_4709_, v___x_4712_);
v___x_4714_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__21));
v___x_4715_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__0));
lean_inc_ref_n(v___x_4678_, 9);
lean_inc_ref_n(v___x_4675_, 9);
v___x_4716_ = l_Lean_Name_mkStr4(v___x_4675_, v___x_4678_, v___x_4714_, v___x_4715_);
v___x_4717_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__1));
v___x_4718_ = l_Lean_Name_mkStr4(v___x_4675_, v___x_4678_, v___x_4714_, v___x_4717_);
v___x_4719_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_4720_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24);
lean_inc_n(v___x_4713_, 20);
v___x_4721_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4721_, 0, v___x_4713_);
lean_ctor_set(v___x_4721_, 1, v___x_4719_);
lean_ctor_set(v___x_4721_, 2, v___x_4720_);
v___x_4722_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__10));
v___x_4723_ = l_Lean_Name_mkStr4(v___x_4675_, v___x_4678_, v___x_4714_, v___x_4722_);
v___x_4724_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4724_, 0, v___x_4713_);
lean_ctor_set(v___x_4724_, 1, v___x_4722_);
v___x_4725_ = l_Lean_Syntax_node1(v___x_4713_, v___x_4723_, v___x_4724_);
v___x_4726_ = l_Lean_Syntax_node1(v___x_4713_, v___x_4719_, v___x_4725_);
lean_inc_ref_n(v___x_4721_, 10);
v___x_4727_ = l_Lean_Syntax_node7(v___x_4713_, v___x_4718_, v___x_4721_, v___x_4721_, v___x_4721_, v___x_4721_, v___x_4721_, v___x_4721_, v___x_4726_);
v___x_4728_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__2));
v___x_4729_ = l_Lean_Name_mkStr4(v___x_4675_, v___x_4678_, v___x_4714_, v___x_4728_);
v___x_4730_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__3));
v___x_4731_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4731_, 0, v___x_4713_);
lean_ctor_set(v___x_4731_, 1, v___x_4730_);
v___x_4732_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__4));
v___x_4733_ = l_Lean_Name_mkStr4(v___x_4675_, v___x_4678_, v___x_4714_, v___x_4732_);
v___x_4734_ = lean_mk_syntax_ident(v_auxFunName_4679_);
v___x_4735_ = l_Lean_Syntax_node2(v___x_4713_, v___x_4733_, v___x_4734_, v___x_4721_);
v___x_4736_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__5));
v___x_4737_ = l_Lean_Name_mkStr4(v___x_4675_, v___x_4678_, v___x_4714_, v___x_4736_);
v___x_4738_ = l_Array_append___redArg(v___x_4720_, v_binders_4680_);
v___x_4739_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4739_, 0, v___x_4713_);
lean_ctor_set(v___x_4739_, 1, v___x_4719_);
lean_ctor_set(v___x_4739_, 2, v___x_4738_);
v___x_4740_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__6));
lean_inc_ref(v___x_4681_);
v___x_4741_ = l_Lean_Name_mkStr4(v___x_4675_, v___x_4678_, v___x_4681_, v___x_4740_);
v___x_4742_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__16));
v___x_4743_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4743_, 0, v___x_4713_);
lean_ctor_set(v___x_4743_, 1, v___x_4742_);
v___x_4744_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__30));
v___x_4745_ = l_Lean_Name_mkStr4(v___x_4675_, v___x_4678_, v___x_4681_, v___x_4744_);
v___x_4746_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__0, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__0_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__0);
v___x_4747_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__1));
lean_inc_n(v_currMacroScope_4711_, 2);
lean_inc_n(v_quotContext_4710_, 2);
v___x_4748_ = l_Lean_addMacroScope(v_quotContext_4710_, v___x_4747_, v_currMacroScope_4711_);
v___x_4749_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__5));
v___x_4750_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4750_, 0, v___x_4713_);
lean_ctor_set(v___x_4750_, 1, v___x_4746_);
lean_ctor_set(v___x_4750_, 2, v___x_4748_);
lean_ctor_set(v___x_4750_, 3, v___x_4749_);
v___x_4751_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__7, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__7_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__7);
v___x_4752_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__8));
v___x_4753_ = l_Lean_addMacroScope(v_quotContext_4710_, v___x_4752_, v_currMacroScope_4711_);
v___x_4754_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___closed__12));
v___x_4755_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4755_, 0, v___x_4713_);
lean_ctor_set(v___x_4755_, 1, v___x_4751_);
lean_ctor_set(v___x_4755_, 2, v___x_4753_);
lean_ctor_set(v___x_4755_, 3, v___x_4754_);
v___x_4756_ = l_Lean_Syntax_node2(v___x_4713_, v___x_4719_, v___x_4755_, v_a_4705_);
v___x_4757_ = l_Lean_Syntax_node2(v___x_4713_, v___x_4745_, v___x_4750_, v___x_4756_);
v___x_4758_ = l_Lean_Syntax_node2(v___x_4713_, v___x_4741_, v___x_4743_, v___x_4757_);
v___x_4759_ = l_Lean_Syntax_node1(v___x_4713_, v___x_4719_, v___x_4758_);
v___x_4760_ = l_Lean_Syntax_node2(v___x_4713_, v___x_4737_, v___x_4739_, v___x_4759_);
v___x_4761_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__7));
v___x_4762_ = l_Lean_Name_mkStr4(v___x_4675_, v___x_4678_, v___x_4714_, v___x_4761_);
v___x_4763_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonBodyForStruct_spec__3___closed__6));
v___x_4764_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4764_, 0, v___x_4713_);
lean_ctor_set(v___x_4764_, 1, v___x_4763_);
v___x_4765_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__8));
v___x_4766_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction___lam__0___closed__9));
v___x_4767_ = l_Lean_Name_mkStr4(v___x_4675_, v___x_4678_, v___x_4765_, v___x_4766_);
v___x_4768_ = l_Lean_Syntax_node2(v___x_4713_, v___x_4767_, v___x_4721_, v___x_4721_);
v___x_4769_ = l_Lean_Syntax_node4(v___x_4713_, v___x_4762_, v___x_4764_, v_a_4703_, v___x_4768_, v___x_4721_);
v___x_4770_ = l_Lean_Syntax_node5(v___x_4713_, v___x_4729_, v___x_4731_, v___x_4735_, v___x_4760_, v___x_4769_, v___x_4721_);
v___x_4771_ = l_Lean_Syntax_node2(v___x_4713_, v___x_4716_, v___x_4727_, v___x_4770_);
if (v_isShared_4708_ == 0)
{
lean_ctor_set(v___x_4707_, 0, v___x_4771_);
v___x_4773_ = v___x_4707_;
goto v_reusejp_4772_;
}
else
{
lean_object* v_reuseFailAlloc_4774_; 
v_reuseFailAlloc_4774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4774_, 0, v___x_4771_);
v___x_4773_ = v_reuseFailAlloc_4774_;
goto v_reusejp_4772_;
}
v_reusejp_4772_:
{
return v___x_4773_;
}
}
}
else
{
lean_dec(v_a_4703_);
lean_dec_ref(v___x_4681_);
lean_dec(v_auxFunName_4679_);
lean_dec_ref(v___x_4678_);
lean_dec_ref(v___x_4675_);
return v___x_4704_;
}
}
else
{
lean_dec_ref(v___x_4681_);
lean_dec(v_auxFunName_4679_);
lean_dec_ref(v___x_4678_);
lean_dec_ref(v_indval_4677_);
lean_dec_ref(v_argNames_4676_);
lean_dec_ref(v___x_4675_);
return v___x_4702_;
}
}
else
{
lean_object* v_a_4776_; lean_object* v___x_4778_; uint8_t v_isShared_4779_; uint8_t v_isSharedCheck_4783_; 
lean_dec(v_a_4696_);
lean_dec_ref(v___x_4681_);
lean_dec(v_auxFunName_4679_);
lean_dec_ref(v___x_4678_);
lean_dec_ref(v_indval_4677_);
lean_dec_ref(v_argNames_4676_);
lean_dec_ref(v___x_4675_);
v_a_4776_ = lean_ctor_get(v___x_4700_, 0);
v_isSharedCheck_4783_ = !lean_is_exclusive(v___x_4700_);
if (v_isSharedCheck_4783_ == 0)
{
v___x_4778_ = v___x_4700_;
v_isShared_4779_ = v_isSharedCheck_4783_;
goto v_resetjp_4777_;
}
else
{
lean_inc(v_a_4776_);
lean_dec(v___x_4700_);
v___x_4778_ = lean_box(0);
v_isShared_4779_ = v_isSharedCheck_4783_;
goto v_resetjp_4777_;
}
v_resetjp_4777_:
{
lean_object* v___x_4781_; 
if (v_isShared_4779_ == 0)
{
v___x_4781_ = v___x_4778_;
goto v_reusejp_4780_;
}
else
{
lean_object* v_reuseFailAlloc_4782_; 
v_reuseFailAlloc_4782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4782_, 0, v_a_4776_);
v___x_4781_ = v_reuseFailAlloc_4782_;
goto v_reusejp_4780_;
}
v_reusejp_4780_:
{
return v___x_4781_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_4681_);
lean_dec(v_auxFunName_4679_);
lean_dec_ref(v___x_4678_);
lean_dec_ref(v_indval_4677_);
lean_dec_ref(v_argNames_4676_);
lean_dec_ref(v___x_4675_);
lean_dec_ref(v_ctx_4674_);
return v___x_4695_;
}
}
else
{
lean_object* v_a_4851_; lean_object* v___x_4853_; uint8_t v_isShared_4854_; uint8_t v_isSharedCheck_4858_; 
lean_dec_ref(v___x_4681_);
lean_dec(v_auxFunName_4679_);
lean_dec_ref(v___x_4678_);
lean_dec_ref(v_indval_4677_);
lean_dec_ref(v_argNames_4676_);
lean_dec_ref(v___x_4675_);
lean_dec_ref(v_ctx_4674_);
v_a_4851_ = lean_ctor_get(v___x_4693_, 0);
v_isSharedCheck_4858_ = !lean_is_exclusive(v___x_4693_);
if (v_isSharedCheck_4858_ == 0)
{
v___x_4853_ = v___x_4693_;
v_isShared_4854_ = v_isSharedCheck_4858_;
goto v_resetjp_4852_;
}
else
{
lean_inc(v_a_4851_);
lean_dec(v___x_4693_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___boxed(lean_object** _args){
lean_object* v_targetType_4859_ = _args[0];
lean_object* v_ctx_4860_ = _args[1];
lean_object* v___x_4861_ = _args[2];
lean_object* v_argNames_4862_ = _args[3];
lean_object* v_indval_4863_ = _args[4];
lean_object* v___x_4864_ = _args[5];
lean_object* v_auxFunName_4865_ = _args[6];
lean_object* v_binders_4866_ = _args[7];
lean_object* v___x_4867_ = _args[8];
lean_object* v_usePartial_4868_ = _args[9];
lean_object* v_x_4869_ = _args[10];
lean_object* v___y_4870_ = _args[11];
lean_object* v___y_4871_ = _args[12];
lean_object* v___y_4872_ = _args[13];
lean_object* v___y_4873_ = _args[14];
lean_object* v___y_4874_ = _args[15];
lean_object* v___y_4875_ = _args[16];
lean_object* v___y_4876_ = _args[17];
_start:
{
uint8_t v_usePartial_boxed_4877_; lean_object* v_res_4878_; 
v_usePartial_boxed_4877_ = lean_unbox(v_usePartial_4868_);
v_res_4878_ = l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0(v_targetType_4859_, v_ctx_4860_, v___x_4861_, v_argNames_4862_, v_indval_4863_, v___x_4864_, v_auxFunName_4865_, v_binders_4866_, v___x_4867_, v_usePartial_boxed_4877_, v_x_4869_, v___y_4870_, v___y_4871_, v___y_4872_, v___y_4873_, v___y_4874_, v___y_4875_);
lean_dec(v___y_4875_);
lean_dec_ref(v___y_4874_);
lean_dec(v___y_4873_);
lean_dec_ref(v___y_4872_);
lean_dec(v___y_4871_);
lean_dec_ref(v___y_4870_);
lean_dec_ref(v_x_4869_);
lean_dec_ref(v_binders_4866_);
return v_res_4878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction(lean_object* v_ctx_4879_, lean_object* v_i_4880_, lean_object* v_a_4881_, lean_object* v_a_4882_, lean_object* v_a_4883_, lean_object* v_a_4884_, lean_object* v_a_4885_, lean_object* v_a_4886_){
_start:
{
lean_object* v_typeInfos_4888_; lean_object* v_auxFunNames_4889_; uint8_t v_usePartial_4890_; lean_object* v___x_4891_; lean_object* v_indval_4892_; lean_object* v___x_4893_; 
v_typeInfos_4888_ = lean_ctor_get(v_ctx_4879_, 1);
v_auxFunNames_4889_ = lean_ctor_get(v_ctx_4879_, 2);
v_usePartial_4890_ = lean_ctor_get_uint8(v_ctx_4879_, sizeof(void*)*3);
v___x_4891_ = l_Lean_instInhabitedInductiveVal_default;
v_indval_4892_ = lean_array_get(v___x_4891_, v_typeInfos_4888_, v_i_4880_);
lean_inc(v_indval_4892_);
v___x_4893_ = l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader(v_indval_4892_, v_a_4881_, v_a_4882_, v_a_4883_, v_a_4884_, v_a_4885_, v_a_4886_);
if (lean_obj_tag(v___x_4893_) == 0)
{
lean_object* v_a_4894_; lean_object* v_binders_4895_; lean_object* v_argNames_4896_; lean_object* v_targetType_4897_; lean_object* v___x_4898_; lean_object* v_auxFunName_4899_; lean_object* v___x_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; lean_object* v___f_4904_; lean_object* v___x_4905_; 
v_a_4894_ = lean_ctor_get(v___x_4893_, 0);
lean_inc(v_a_4894_);
lean_dec_ref_known(v___x_4893_, 1);
v_binders_4895_ = lean_ctor_get(v_a_4894_, 0);
lean_inc_ref_n(v_binders_4895_, 2);
v_argNames_4896_ = lean_ctor_get(v_a_4894_, 1);
lean_inc_ref(v_argNames_4896_);
v_targetType_4897_ = lean_ctor_get(v_a_4894_, 3);
lean_inc(v_targetType_4897_);
lean_dec(v_a_4894_);
v___x_4898_ = lean_box(0);
v_auxFunName_4899_ = lean_array_get(v___x_4898_, v_auxFunNames_4889_, v_i_4880_);
v___x_4900_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__0));
v___x_4901_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__2));
v___x_4902_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__3));
v___x_4903_ = lean_box(v_usePartial_4890_);
v___f_4904_ = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___lam__0___boxed), 18, 10);
lean_closure_set(v___f_4904_, 0, v_targetType_4897_);
lean_closure_set(v___f_4904_, 1, v_ctx_4879_);
lean_closure_set(v___f_4904_, 2, v___x_4900_);
lean_closure_set(v___f_4904_, 3, v_argNames_4896_);
lean_closure_set(v___f_4904_, 4, v_indval_4892_);
lean_closure_set(v___f_4904_, 5, v___x_4901_);
lean_closure_set(v___f_4904_, 6, v_auxFunName_4899_);
lean_closure_set(v___f_4904_, 7, v_binders_4895_);
lean_closure_set(v___f_4904_, 8, v___x_4902_);
lean_closure_set(v___f_4904_, 9, v___x_4903_);
v___x_4905_ = l_Lean_Elab_Term_elabBinders___redArg(v_binders_4895_, v___f_4904_, v_a_4881_, v_a_4882_, v_a_4883_, v_a_4884_, v_a_4885_, v_a_4886_);
return v___x_4905_;
}
else
{
lean_object* v_a_4906_; lean_object* v___x_4908_; uint8_t v_isShared_4909_; uint8_t v_isSharedCheck_4913_; 
lean_dec(v_indval_4892_);
lean_dec_ref(v_ctx_4879_);
v_a_4906_ = lean_ctor_get(v___x_4893_, 0);
v_isSharedCheck_4913_ = !lean_is_exclusive(v___x_4893_);
if (v_isSharedCheck_4913_ == 0)
{
v___x_4908_ = v___x_4893_;
v_isShared_4909_ = v_isSharedCheck_4913_;
goto v_resetjp_4907_;
}
else
{
lean_inc(v_a_4906_);
lean_dec(v___x_4893_);
v___x_4908_ = lean_box(0);
v_isShared_4909_ = v_isSharedCheck_4913_;
goto v_resetjp_4907_;
}
v_resetjp_4907_:
{
lean_object* v___x_4911_; 
if (v_isShared_4909_ == 0)
{
v___x_4911_ = v___x_4908_;
goto v_reusejp_4910_;
}
else
{
lean_object* v_reuseFailAlloc_4912_; 
v_reuseFailAlloc_4912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4912_, 0, v_a_4906_);
v___x_4911_ = v_reuseFailAlloc_4912_;
goto v_reusejp_4910_;
}
v_reusejp_4910_:
{
return v___x_4911_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction___boxed(lean_object* v_ctx_4914_, lean_object* v_i_4915_, lean_object* v_a_4916_, lean_object* v_a_4917_, lean_object* v_a_4918_, lean_object* v_a_4919_, lean_object* v_a_4920_, lean_object* v_a_4921_, lean_object* v_a_4922_){
_start:
{
lean_object* v_res_4923_; 
v_res_4923_ = l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction(v_ctx_4914_, v_i_4915_, v_a_4916_, v_a_4917_, v_a_4918_, v_a_4919_, v_a_4920_, v_a_4921_);
lean_dec(v_a_4921_);
lean_dec_ref(v_a_4920_);
lean_dec(v_a_4919_);
lean_dec_ref(v_a_4918_);
lean_dec(v_a_4917_);
lean_dec_ref(v_a_4916_);
lean_dec(v_i_4915_);
return v_res_4923_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock_spec__0___redArg(lean_object* v_upperBound_4924_, lean_object* v_ctx_4925_, lean_object* v_a_4926_, lean_object* v_b_4927_, lean_object* v___y_4928_, lean_object* v___y_4929_, lean_object* v___y_4930_, lean_object* v___y_4931_, lean_object* v___y_4932_, lean_object* v___y_4933_){
_start:
{
uint8_t v___x_4935_; 
v___x_4935_ = lean_nat_dec_lt(v_a_4926_, v_upperBound_4924_);
if (v___x_4935_ == 0)
{
lean_object* v___x_4936_; 
lean_dec(v_a_4926_);
lean_dec_ref(v_ctx_4925_);
v___x_4936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4936_, 0, v_b_4927_);
return v___x_4936_;
}
else
{
lean_object* v___x_4937_; 
lean_inc_ref(v_ctx_4925_);
v___x_4937_ = l_Lean_Elab_Deriving_FromToJson_mkToJsonAuxFunction(v_ctx_4925_, v_a_4926_, v___y_4928_, v___y_4929_, v___y_4930_, v___y_4931_, v___y_4932_, v___y_4933_);
if (lean_obj_tag(v___x_4937_) == 0)
{
lean_object* v_a_4938_; lean_object* v___x_4939_; lean_object* v___x_4940_; lean_object* v___x_4941_; 
v_a_4938_ = lean_ctor_get(v___x_4937_, 0);
lean_inc(v_a_4938_);
lean_dec_ref_known(v___x_4937_, 1);
v___x_4939_ = lean_array_push(v_b_4927_, v_a_4938_);
v___x_4940_ = lean_unsigned_to_nat(1u);
v___x_4941_ = lean_nat_add(v_a_4926_, v___x_4940_);
lean_dec(v_a_4926_);
v_a_4926_ = v___x_4941_;
v_b_4927_ = v___x_4939_;
goto _start;
}
else
{
lean_object* v_a_4943_; lean_object* v___x_4945_; uint8_t v_isShared_4946_; uint8_t v_isSharedCheck_4950_; 
lean_dec_ref(v_b_4927_);
lean_dec(v_a_4926_);
lean_dec_ref(v_ctx_4925_);
v_a_4943_ = lean_ctor_get(v___x_4937_, 0);
v_isSharedCheck_4950_ = !lean_is_exclusive(v___x_4937_);
if (v_isSharedCheck_4950_ == 0)
{
v___x_4945_ = v___x_4937_;
v_isShared_4946_ = v_isSharedCheck_4950_;
goto v_resetjp_4944_;
}
else
{
lean_inc(v_a_4943_);
lean_dec(v___x_4937_);
v___x_4945_ = lean_box(0);
v_isShared_4946_ = v_isSharedCheck_4950_;
goto v_resetjp_4944_;
}
v_resetjp_4944_:
{
lean_object* v___x_4948_; 
if (v_isShared_4946_ == 0)
{
v___x_4948_ = v___x_4945_;
goto v_reusejp_4947_;
}
else
{
lean_object* v_reuseFailAlloc_4949_; 
v_reuseFailAlloc_4949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4949_, 0, v_a_4943_);
v___x_4948_ = v_reuseFailAlloc_4949_;
goto v_reusejp_4947_;
}
v_reusejp_4947_:
{
return v___x_4948_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock_spec__0___redArg___boxed(lean_object* v_upperBound_4951_, lean_object* v_ctx_4952_, lean_object* v_a_4953_, lean_object* v_b_4954_, lean_object* v___y_4955_, lean_object* v___y_4956_, lean_object* v___y_4957_, lean_object* v___y_4958_, lean_object* v___y_4959_, lean_object* v___y_4960_, lean_object* v___y_4961_){
_start:
{
lean_object* v_res_4962_; 
v_res_4962_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock_spec__0___redArg(v_upperBound_4951_, v_ctx_4952_, v_a_4953_, v_b_4954_, v___y_4955_, v___y_4956_, v___y_4957_, v___y_4958_, v___y_4959_, v___y_4960_);
lean_dec(v___y_4960_);
lean_dec_ref(v___y_4959_);
lean_dec(v___y_4958_);
lean_dec_ref(v___y_4957_);
lean_dec(v___y_4956_);
lean_dec_ref(v___y_4955_);
lean_dec(v_upperBound_4951_);
return v_res_4962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock(lean_object* v_ctx_4970_, lean_object* v_a_4971_, lean_object* v_a_4972_, lean_object* v_a_4973_, lean_object* v_a_4974_, lean_object* v_a_4975_, lean_object* v_a_4976_){
_start:
{
lean_object* v_typeInfos_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v_auxDefs_4981_; lean_object* v___x_4982_; 
v_typeInfos_4978_ = lean_ctor_get(v_ctx_4970_, 1);
v___x_4979_ = lean_array_get_size(v_typeInfos_4978_);
v___x_4980_ = lean_unsigned_to_nat(0u);
v_auxDefs_4981_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___closed__0));
v___x_4982_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock_spec__0___redArg(v___x_4979_, v_ctx_4970_, v___x_4980_, v_auxDefs_4981_, v_a_4971_, v_a_4972_, v_a_4973_, v_a_4974_, v_a_4975_, v_a_4976_);
if (lean_obj_tag(v___x_4982_) == 0)
{
lean_object* v_a_4983_; lean_object* v___x_4985_; uint8_t v_isShared_4986_; uint8_t v_isSharedCheck_5003_; 
v_a_4983_ = lean_ctor_get(v___x_4982_, 0);
v_isSharedCheck_5003_ = !lean_is_exclusive(v___x_4982_);
if (v_isSharedCheck_5003_ == 0)
{
v___x_4985_ = v___x_4982_;
v_isShared_4986_ = v_isSharedCheck_5003_;
goto v_resetjp_4984_;
}
else
{
lean_inc(v_a_4983_);
lean_dec(v___x_4982_);
v___x_4985_ = lean_box(0);
v_isShared_4986_ = v_isSharedCheck_5003_;
goto v_resetjp_4984_;
}
v_resetjp_4984_:
{
lean_object* v_ref_4987_; uint8_t v___x_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; lean_object* v___x_4994_; lean_object* v___x_4995_; lean_object* v___x_4996_; lean_object* v___x_4997_; lean_object* v___x_4998_; lean_object* v___x_4999_; lean_object* v___x_5001_; 
v_ref_4987_ = lean_ctor_get(v_a_4975_, 5);
v___x_4988_ = 0;
v___x_4989_ = l_Lean_SourceInfo_fromRef(v_ref_4987_, v___x_4988_);
v___x_4990_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___closed__0));
v___x_4991_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___closed__1));
lean_inc_n(v___x_4989_, 3);
v___x_4992_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4992_, 0, v___x_4989_);
lean_ctor_set(v___x_4992_, 1, v___x_4990_);
v___x_4993_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_4994_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24);
v___x_4995_ = l_Array_append___redArg(v___x_4994_, v_a_4983_);
lean_dec(v_a_4983_);
v___x_4996_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4996_, 0, v___x_4989_);
lean_ctor_set(v___x_4996_, 1, v___x_4993_);
lean_ctor_set(v___x_4996_, 2, v___x_4995_);
v___x_4997_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___closed__2));
v___x_4998_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4998_, 0, v___x_4989_);
lean_ctor_set(v___x_4998_, 1, v___x_4997_);
v___x_4999_ = l_Lean_Syntax_node3(v___x_4989_, v___x_4991_, v___x_4992_, v___x_4996_, v___x_4998_);
if (v_isShared_4986_ == 0)
{
lean_ctor_set(v___x_4985_, 0, v___x_4999_);
v___x_5001_ = v___x_4985_;
goto v_reusejp_5000_;
}
else
{
lean_object* v_reuseFailAlloc_5002_; 
v_reuseFailAlloc_5002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5002_, 0, v___x_4999_);
v___x_5001_ = v_reuseFailAlloc_5002_;
goto v_reusejp_5000_;
}
v_reusejp_5000_:
{
return v___x_5001_;
}
}
}
else
{
lean_object* v_a_5004_; lean_object* v___x_5006_; uint8_t v_isShared_5007_; uint8_t v_isSharedCheck_5011_; 
v_a_5004_ = lean_ctor_get(v___x_4982_, 0);
v_isSharedCheck_5011_ = !lean_is_exclusive(v___x_4982_);
if (v_isSharedCheck_5011_ == 0)
{
v___x_5006_ = v___x_4982_;
v_isShared_5007_ = v_isSharedCheck_5011_;
goto v_resetjp_5005_;
}
else
{
lean_inc(v_a_5004_);
lean_dec(v___x_4982_);
v___x_5006_ = lean_box(0);
v_isShared_5007_ = v_isSharedCheck_5011_;
goto v_resetjp_5005_;
}
v_resetjp_5005_:
{
lean_object* v___x_5009_; 
if (v_isShared_5007_ == 0)
{
v___x_5009_ = v___x_5006_;
goto v_reusejp_5008_;
}
else
{
lean_object* v_reuseFailAlloc_5010_; 
v_reuseFailAlloc_5010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5010_, 0, v_a_5004_);
v___x_5009_ = v_reuseFailAlloc_5010_;
goto v_reusejp_5008_;
}
v_reusejp_5008_:
{
return v___x_5009_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___boxed(lean_object* v_ctx_5012_, lean_object* v_a_5013_, lean_object* v_a_5014_, lean_object* v_a_5015_, lean_object* v_a_5016_, lean_object* v_a_5017_, lean_object* v_a_5018_, lean_object* v_a_5019_){
_start:
{
lean_object* v_res_5020_; 
v_res_5020_ = l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock(v_ctx_5012_, v_a_5013_, v_a_5014_, v_a_5015_, v_a_5016_, v_a_5017_, v_a_5018_);
lean_dec(v_a_5018_);
lean_dec_ref(v_a_5017_);
lean_dec(v_a_5016_);
lean_dec_ref(v_a_5015_);
lean_dec(v_a_5014_);
lean_dec_ref(v_a_5013_);
return v_res_5020_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock_spec__0(lean_object* v_upperBound_5021_, lean_object* v_ctx_5022_, lean_object* v_inst_5023_, lean_object* v_R_5024_, lean_object* v_a_5025_, lean_object* v_b_5026_, lean_object* v_c_5027_, lean_object* v___y_5028_, lean_object* v___y_5029_, lean_object* v___y_5030_, lean_object* v___y_5031_, lean_object* v___y_5032_, lean_object* v___y_5033_){
_start:
{
lean_object* v___x_5035_; 
v___x_5035_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock_spec__0___redArg(v_upperBound_5021_, v_ctx_5022_, v_a_5025_, v_b_5026_, v___y_5028_, v___y_5029_, v___y_5030_, v___y_5031_, v___y_5032_, v___y_5033_);
return v___x_5035_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock_spec__0___boxed(lean_object* v_upperBound_5036_, lean_object* v_ctx_5037_, lean_object* v_inst_5038_, lean_object* v_R_5039_, lean_object* v_a_5040_, lean_object* v_b_5041_, lean_object* v_c_5042_, lean_object* v___y_5043_, lean_object* v___y_5044_, lean_object* v___y_5045_, lean_object* v___y_5046_, lean_object* v___y_5047_, lean_object* v___y_5048_, lean_object* v___y_5049_){
_start:
{
lean_object* v_res_5050_; 
v_res_5050_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock_spec__0(v_upperBound_5036_, v_ctx_5037_, v_inst_5038_, v_R_5039_, v_a_5040_, v_b_5041_, v_c_5042_, v___y_5043_, v___y_5044_, v___y_5045_, v___y_5046_, v___y_5047_, v___y_5048_);
lean_dec(v___y_5048_);
lean_dec_ref(v___y_5047_);
lean_dec(v___y_5046_);
lean_dec_ref(v___y_5045_);
lean_dec(v___y_5044_);
lean_dec_ref(v___y_5043_);
lean_dec(v_upperBound_5036_);
return v_res_5050_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonMutualBlock_spec__0___redArg(lean_object* v_upperBound_5051_, lean_object* v_ctx_5052_, lean_object* v_a_5053_, lean_object* v_b_5054_, lean_object* v___y_5055_, lean_object* v___y_5056_, lean_object* v___y_5057_, lean_object* v___y_5058_, lean_object* v___y_5059_, lean_object* v___y_5060_){
_start:
{
uint8_t v___x_5062_; 
v___x_5062_ = lean_nat_dec_lt(v_a_5053_, v_upperBound_5051_);
if (v___x_5062_ == 0)
{
lean_object* v___x_5063_; 
lean_dec(v_a_5053_);
lean_dec_ref(v_ctx_5052_);
v___x_5063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5063_, 0, v_b_5054_);
return v___x_5063_;
}
else
{
lean_object* v___x_5064_; 
lean_inc_ref(v_ctx_5052_);
v___x_5064_ = l_Lean_Elab_Deriving_FromToJson_mkFromJsonAuxFunction(v_ctx_5052_, v_a_5053_, v___y_5055_, v___y_5056_, v___y_5057_, v___y_5058_, v___y_5059_, v___y_5060_);
if (lean_obj_tag(v___x_5064_) == 0)
{
lean_object* v_a_5065_; lean_object* v___x_5066_; lean_object* v___x_5067_; lean_object* v___x_5068_; 
v_a_5065_ = lean_ctor_get(v___x_5064_, 0);
lean_inc(v_a_5065_);
lean_dec_ref_known(v___x_5064_, 1);
v___x_5066_ = lean_array_push(v_b_5054_, v_a_5065_);
v___x_5067_ = lean_unsigned_to_nat(1u);
v___x_5068_ = lean_nat_add(v_a_5053_, v___x_5067_);
lean_dec(v_a_5053_);
v_a_5053_ = v___x_5068_;
v_b_5054_ = v___x_5066_;
goto _start;
}
else
{
lean_object* v_a_5070_; lean_object* v___x_5072_; uint8_t v_isShared_5073_; uint8_t v_isSharedCheck_5077_; 
lean_dec_ref(v_b_5054_);
lean_dec(v_a_5053_);
lean_dec_ref(v_ctx_5052_);
v_a_5070_ = lean_ctor_get(v___x_5064_, 0);
v_isSharedCheck_5077_ = !lean_is_exclusive(v___x_5064_);
if (v_isSharedCheck_5077_ == 0)
{
v___x_5072_ = v___x_5064_;
v_isShared_5073_ = v_isSharedCheck_5077_;
goto v_resetjp_5071_;
}
else
{
lean_inc(v_a_5070_);
lean_dec(v___x_5064_);
v___x_5072_ = lean_box(0);
v_isShared_5073_ = v_isSharedCheck_5077_;
goto v_resetjp_5071_;
}
v_resetjp_5071_:
{
lean_object* v___x_5075_; 
if (v_isShared_5073_ == 0)
{
v___x_5075_ = v___x_5072_;
goto v_reusejp_5074_;
}
else
{
lean_object* v_reuseFailAlloc_5076_; 
v_reuseFailAlloc_5076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5076_, 0, v_a_5070_);
v___x_5075_ = v_reuseFailAlloc_5076_;
goto v_reusejp_5074_;
}
v_reusejp_5074_:
{
return v___x_5075_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonMutualBlock_spec__0___redArg___boxed(lean_object* v_upperBound_5078_, lean_object* v_ctx_5079_, lean_object* v_a_5080_, lean_object* v_b_5081_, lean_object* v___y_5082_, lean_object* v___y_5083_, lean_object* v___y_5084_, lean_object* v___y_5085_, lean_object* v___y_5086_, lean_object* v___y_5087_, lean_object* v___y_5088_){
_start:
{
lean_object* v_res_5089_; 
v_res_5089_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonMutualBlock_spec__0___redArg(v_upperBound_5078_, v_ctx_5079_, v_a_5080_, v_b_5081_, v___y_5082_, v___y_5083_, v___y_5084_, v___y_5085_, v___y_5086_, v___y_5087_);
lean_dec(v___y_5087_);
lean_dec_ref(v___y_5086_);
lean_dec(v___y_5085_);
lean_dec_ref(v___y_5084_);
lean_dec(v___y_5083_);
lean_dec_ref(v___y_5082_);
lean_dec(v_upperBound_5078_);
return v_res_5089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonMutualBlock(lean_object* v_ctx_5090_, lean_object* v_a_5091_, lean_object* v_a_5092_, lean_object* v_a_5093_, lean_object* v_a_5094_, lean_object* v_a_5095_, lean_object* v_a_5096_){
_start:
{
lean_object* v_typeInfos_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v_auxDefs_5101_; lean_object* v___x_5102_; 
v_typeInfos_5098_ = lean_ctor_get(v_ctx_5090_, 1);
v___x_5099_ = lean_array_get_size(v_typeInfos_5098_);
v___x_5100_ = lean_unsigned_to_nat(0u);
v_auxDefs_5101_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__5___redArg___closed__0));
v___x_5102_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonMutualBlock_spec__0___redArg(v___x_5099_, v_ctx_5090_, v___x_5100_, v_auxDefs_5101_, v_a_5091_, v_a_5092_, v_a_5093_, v_a_5094_, v_a_5095_, v_a_5096_);
if (lean_obj_tag(v___x_5102_) == 0)
{
lean_object* v_a_5103_; lean_object* v___x_5105_; uint8_t v_isShared_5106_; uint8_t v_isSharedCheck_5123_; 
v_a_5103_ = lean_ctor_get(v___x_5102_, 0);
v_isSharedCheck_5123_ = !lean_is_exclusive(v___x_5102_);
if (v_isSharedCheck_5123_ == 0)
{
v___x_5105_ = v___x_5102_;
v_isShared_5106_ = v_isSharedCheck_5123_;
goto v_resetjp_5104_;
}
else
{
lean_inc(v_a_5103_);
lean_dec(v___x_5102_);
v___x_5105_ = lean_box(0);
v_isShared_5106_ = v_isSharedCheck_5123_;
goto v_resetjp_5104_;
}
v_resetjp_5104_:
{
lean_object* v_ref_5107_; uint8_t v___x_5108_; lean_object* v___x_5109_; lean_object* v___x_5110_; lean_object* v___x_5111_; lean_object* v___x_5112_; lean_object* v___x_5113_; lean_object* v___x_5114_; lean_object* v___x_5115_; lean_object* v___x_5116_; lean_object* v___x_5117_; lean_object* v___x_5118_; lean_object* v___x_5119_; lean_object* v___x_5121_; 
v_ref_5107_ = lean_ctor_get(v_a_5095_, 5);
v___x_5108_ = 0;
v___x_5109_ = l_Lean_SourceInfo_fromRef(v_ref_5107_, v___x_5108_);
v___x_5110_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___closed__0));
v___x_5111_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___closed__1));
lean_inc_n(v___x_5109_, 3);
v___x_5112_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5112_, 0, v___x_5109_);
lean_ctor_set(v___x_5112_, 1, v___x_5110_);
v___x_5113_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__8));
v___x_5114_ = lean_obj_once(&l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24, &l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24_once, _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__24);
v___x_5115_ = l_Array_append___redArg(v___x_5114_, v_a_5103_);
lean_dec(v_a_5103_);
v___x_5116_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5116_, 0, v___x_5109_);
lean_ctor_set(v___x_5116_, 1, v___x_5113_);
lean_ctor_set(v___x_5116_, 2, v___x_5115_);
v___x_5117_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock___closed__2));
v___x_5118_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5118_, 0, v___x_5109_);
lean_ctor_set(v___x_5118_, 1, v___x_5117_);
v___x_5119_ = l_Lean_Syntax_node3(v___x_5109_, v___x_5111_, v___x_5112_, v___x_5116_, v___x_5118_);
if (v_isShared_5106_ == 0)
{
lean_ctor_set(v___x_5105_, 0, v___x_5119_);
v___x_5121_ = v___x_5105_;
goto v_reusejp_5120_;
}
else
{
lean_object* v_reuseFailAlloc_5122_; 
v_reuseFailAlloc_5122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5122_, 0, v___x_5119_);
v___x_5121_ = v_reuseFailAlloc_5122_;
goto v_reusejp_5120_;
}
v_reusejp_5120_:
{
return v___x_5121_;
}
}
}
else
{
lean_object* v_a_5124_; lean_object* v___x_5126_; uint8_t v_isShared_5127_; uint8_t v_isSharedCheck_5131_; 
v_a_5124_ = lean_ctor_get(v___x_5102_, 0);
v_isSharedCheck_5131_ = !lean_is_exclusive(v___x_5102_);
if (v_isSharedCheck_5131_ == 0)
{
v___x_5126_ = v___x_5102_;
v_isShared_5127_ = v_isSharedCheck_5131_;
goto v_resetjp_5125_;
}
else
{
lean_inc(v_a_5124_);
lean_dec(v___x_5102_);
v___x_5126_ = lean_box(0);
v_isShared_5127_ = v_isSharedCheck_5131_;
goto v_resetjp_5125_;
}
v_resetjp_5125_:
{
lean_object* v___x_5129_; 
if (v_isShared_5127_ == 0)
{
v___x_5129_ = v___x_5126_;
goto v_reusejp_5128_;
}
else
{
lean_object* v_reuseFailAlloc_5130_; 
v_reuseFailAlloc_5130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5130_, 0, v_a_5124_);
v___x_5129_ = v_reuseFailAlloc_5130_;
goto v_reusejp_5128_;
}
v_reusejp_5128_:
{
return v___x_5129_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonMutualBlock___boxed(lean_object* v_ctx_5132_, lean_object* v_a_5133_, lean_object* v_a_5134_, lean_object* v_a_5135_, lean_object* v_a_5136_, lean_object* v_a_5137_, lean_object* v_a_5138_, lean_object* v_a_5139_){
_start:
{
lean_object* v_res_5140_; 
v_res_5140_ = l_Lean_Elab_Deriving_FromToJson_mkFromJsonMutualBlock(v_ctx_5132_, v_a_5133_, v_a_5134_, v_a_5135_, v_a_5136_, v_a_5137_, v_a_5138_);
lean_dec(v_a_5138_);
lean_dec_ref(v_a_5137_);
lean_dec(v_a_5136_);
lean_dec_ref(v_a_5135_);
lean_dec(v_a_5134_);
lean_dec_ref(v_a_5133_);
return v_res_5140_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonMutualBlock_spec__0(lean_object* v_upperBound_5141_, lean_object* v_ctx_5142_, lean_object* v_inst_5143_, lean_object* v_R_5144_, lean_object* v_a_5145_, lean_object* v_b_5146_, lean_object* v_c_5147_, lean_object* v___y_5148_, lean_object* v___y_5149_, lean_object* v___y_5150_, lean_object* v___y_5151_, lean_object* v___y_5152_, lean_object* v___y_5153_){
_start:
{
lean_object* v___x_5155_; 
v___x_5155_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonMutualBlock_spec__0___redArg(v_upperBound_5141_, v_ctx_5142_, v_a_5145_, v_b_5146_, v___y_5148_, v___y_5149_, v___y_5150_, v___y_5151_, v___y_5152_, v___y_5153_);
return v___x_5155_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonMutualBlock_spec__0___boxed(lean_object* v_upperBound_5156_, lean_object* v_ctx_5157_, lean_object* v_inst_5158_, lean_object* v_R_5159_, lean_object* v_a_5160_, lean_object* v_b_5161_, lean_object* v_c_5162_, lean_object* v___y_5163_, lean_object* v___y_5164_, lean_object* v___y_5165_, lean_object* v___y_5166_, lean_object* v___y_5167_, lean_object* v___y_5168_, lean_object* v___y_5169_){
_start:
{
lean_object* v_res_5170_; 
v_res_5170_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonMutualBlock_spec__0(v_upperBound_5156_, v_ctx_5157_, v_inst_5158_, v_R_5159_, v_a_5160_, v_b_5161_, v_c_5162_, v___y_5163_, v___y_5164_, v___y_5165_, v___y_5166_, v___y_5167_, v___y_5168_);
lean_dec(v___y_5168_);
lean_dec_ref(v___y_5167_);
lean_dec(v___y_5166_);
lean_dec_ref(v___y_5165_);
lean_dec(v___y_5164_);
lean_dec_ref(v___y_5163_);
lean_dec(v_upperBound_5156_);
return v_res_5170_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__0(lean_object* v_a_5171_, lean_object* v_a_5172_){
_start:
{
if (lean_obj_tag(v_a_5171_) == 0)
{
lean_object* v___x_5173_; 
v___x_5173_ = l_List_reverse___redArg(v_a_5172_);
return v___x_5173_;
}
else
{
lean_object* v_head_5174_; lean_object* v_tail_5175_; lean_object* v___x_5177_; uint8_t v_isShared_5178_; uint8_t v_isSharedCheck_5184_; 
v_head_5174_ = lean_ctor_get(v_a_5171_, 0);
v_tail_5175_ = lean_ctor_get(v_a_5171_, 1);
v_isSharedCheck_5184_ = !lean_is_exclusive(v_a_5171_);
if (v_isSharedCheck_5184_ == 0)
{
v___x_5177_ = v_a_5171_;
v_isShared_5178_ = v_isSharedCheck_5184_;
goto v_resetjp_5176_;
}
else
{
lean_inc(v_tail_5175_);
lean_inc(v_head_5174_);
lean_dec(v_a_5171_);
v___x_5177_ = lean_box(0);
v_isShared_5178_ = v_isSharedCheck_5184_;
goto v_resetjp_5176_;
}
v_resetjp_5176_:
{
lean_object* v___x_5179_; lean_object* v___x_5181_; 
v___x_5179_ = l_Lean_MessageData_ofSyntax(v_head_5174_);
if (v_isShared_5178_ == 0)
{
lean_ctor_set(v___x_5177_, 1, v_a_5172_);
lean_ctor_set(v___x_5177_, 0, v___x_5179_);
v___x_5181_ = v___x_5177_;
goto v_reusejp_5180_;
}
else
{
lean_object* v_reuseFailAlloc_5183_; 
v_reuseFailAlloc_5183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5183_, 0, v___x_5179_);
lean_ctor_set(v_reuseFailAlloc_5183_, 1, v_a_5172_);
v___x_5181_ = v_reuseFailAlloc_5183_;
goto v_reusejp_5180_;
}
v_reusejp_5180_:
{
v_a_5171_ = v_tail_5175_;
v_a_5172_ = v___x_5181_;
goto _start;
}
}
}
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_5185_; double v___x_5186_; 
v___x_5185_ = lean_unsigned_to_nat(0u);
v___x_5186_ = lean_float_of_nat(v___x_5185_);
return v___x_5186_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1___redArg(lean_object* v_cls_5189_, lean_object* v_msg_5190_, lean_object* v___y_5191_, lean_object* v___y_5192_, lean_object* v___y_5193_, lean_object* v___y_5194_){
_start:
{
lean_object* v_ref_5196_; lean_object* v___x_5197_; lean_object* v_a_5198_; lean_object* v___x_5200_; uint8_t v_isShared_5201_; uint8_t v_isSharedCheck_5242_; 
v_ref_5196_ = lean_ctor_get(v___y_5193_, 5);
v___x_5197_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonBodyForInduct_mkAlts_spec__0_spec__0_spec__2(v_msg_5190_, v___y_5191_, v___y_5192_, v___y_5193_, v___y_5194_);
v_a_5198_ = lean_ctor_get(v___x_5197_, 0);
v_isSharedCheck_5242_ = !lean_is_exclusive(v___x_5197_);
if (v_isSharedCheck_5242_ == 0)
{
v___x_5200_ = v___x_5197_;
v_isShared_5201_ = v_isSharedCheck_5242_;
goto v_resetjp_5199_;
}
else
{
lean_inc(v_a_5198_);
lean_dec(v___x_5197_);
v___x_5200_ = lean_box(0);
v_isShared_5201_ = v_isSharedCheck_5242_;
goto v_resetjp_5199_;
}
v_resetjp_5199_:
{
lean_object* v___x_5202_; lean_object* v_traceState_5203_; lean_object* v_env_5204_; lean_object* v_nextMacroScope_5205_; lean_object* v_ngen_5206_; lean_object* v_auxDeclNGen_5207_; lean_object* v_cache_5208_; lean_object* v_messages_5209_; lean_object* v_infoState_5210_; lean_object* v_snapshotTasks_5211_; lean_object* v___x_5213_; uint8_t v_isShared_5214_; uint8_t v_isSharedCheck_5241_; 
v___x_5202_ = lean_st_ref_take(v___y_5194_);
v_traceState_5203_ = lean_ctor_get(v___x_5202_, 4);
v_env_5204_ = lean_ctor_get(v___x_5202_, 0);
v_nextMacroScope_5205_ = lean_ctor_get(v___x_5202_, 1);
v_ngen_5206_ = lean_ctor_get(v___x_5202_, 2);
v_auxDeclNGen_5207_ = lean_ctor_get(v___x_5202_, 3);
v_cache_5208_ = lean_ctor_get(v___x_5202_, 5);
v_messages_5209_ = lean_ctor_get(v___x_5202_, 6);
v_infoState_5210_ = lean_ctor_get(v___x_5202_, 7);
v_snapshotTasks_5211_ = lean_ctor_get(v___x_5202_, 8);
v_isSharedCheck_5241_ = !lean_is_exclusive(v___x_5202_);
if (v_isSharedCheck_5241_ == 0)
{
v___x_5213_ = v___x_5202_;
v_isShared_5214_ = v_isSharedCheck_5241_;
goto v_resetjp_5212_;
}
else
{
lean_inc(v_snapshotTasks_5211_);
lean_inc(v_infoState_5210_);
lean_inc(v_messages_5209_);
lean_inc(v_cache_5208_);
lean_inc(v_traceState_5203_);
lean_inc(v_auxDeclNGen_5207_);
lean_inc(v_ngen_5206_);
lean_inc(v_nextMacroScope_5205_);
lean_inc(v_env_5204_);
lean_dec(v___x_5202_);
v___x_5213_ = lean_box(0);
v_isShared_5214_ = v_isSharedCheck_5241_;
goto v_resetjp_5212_;
}
v_resetjp_5212_:
{
uint64_t v_tid_5215_; lean_object* v_traces_5216_; lean_object* v___x_5218_; uint8_t v_isShared_5219_; uint8_t v_isSharedCheck_5240_; 
v_tid_5215_ = lean_ctor_get_uint64(v_traceState_5203_, sizeof(void*)*1);
v_traces_5216_ = lean_ctor_get(v_traceState_5203_, 0);
v_isSharedCheck_5240_ = !lean_is_exclusive(v_traceState_5203_);
if (v_isSharedCheck_5240_ == 0)
{
v___x_5218_ = v_traceState_5203_;
v_isShared_5219_ = v_isSharedCheck_5240_;
goto v_resetjp_5217_;
}
else
{
lean_inc(v_traces_5216_);
lean_dec(v_traceState_5203_);
v___x_5218_ = lean_box(0);
v_isShared_5219_ = v_isSharedCheck_5240_;
goto v_resetjp_5217_;
}
v_resetjp_5217_:
{
lean_object* v___x_5220_; double v___x_5221_; uint8_t v___x_5222_; lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5230_; 
v___x_5220_ = lean_box(0);
v___x_5221_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1___redArg___closed__0);
v___x_5222_ = 0;
v___x_5223_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__9));
v___x_5224_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_5224_, 0, v_cls_5189_);
lean_ctor_set(v___x_5224_, 1, v___x_5220_);
lean_ctor_set(v___x_5224_, 2, v___x_5223_);
lean_ctor_set_float(v___x_5224_, sizeof(void*)*3, v___x_5221_);
lean_ctor_set_float(v___x_5224_, sizeof(void*)*3 + 8, v___x_5221_);
lean_ctor_set_uint8(v___x_5224_, sizeof(void*)*3 + 16, v___x_5222_);
v___x_5225_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1___redArg___closed__1));
v___x_5226_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_5226_, 0, v___x_5224_);
lean_ctor_set(v___x_5226_, 1, v_a_5198_);
lean_ctor_set(v___x_5226_, 2, v___x_5225_);
lean_inc(v_ref_5196_);
v___x_5227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5227_, 0, v_ref_5196_);
lean_ctor_set(v___x_5227_, 1, v___x_5226_);
v___x_5228_ = l_Lean_PersistentArray_push___redArg(v_traces_5216_, v___x_5227_);
if (v_isShared_5219_ == 0)
{
lean_ctor_set(v___x_5218_, 0, v___x_5228_);
v___x_5230_ = v___x_5218_;
goto v_reusejp_5229_;
}
else
{
lean_object* v_reuseFailAlloc_5239_; 
v_reuseFailAlloc_5239_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_5239_, 0, v___x_5228_);
lean_ctor_set_uint64(v_reuseFailAlloc_5239_, sizeof(void*)*1, v_tid_5215_);
v___x_5230_ = v_reuseFailAlloc_5239_;
goto v_reusejp_5229_;
}
v_reusejp_5229_:
{
lean_object* v___x_5232_; 
if (v_isShared_5214_ == 0)
{
lean_ctor_set(v___x_5213_, 4, v___x_5230_);
v___x_5232_ = v___x_5213_;
goto v_reusejp_5231_;
}
else
{
lean_object* v_reuseFailAlloc_5238_; 
v_reuseFailAlloc_5238_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5238_, 0, v_env_5204_);
lean_ctor_set(v_reuseFailAlloc_5238_, 1, v_nextMacroScope_5205_);
lean_ctor_set(v_reuseFailAlloc_5238_, 2, v_ngen_5206_);
lean_ctor_set(v_reuseFailAlloc_5238_, 3, v_auxDeclNGen_5207_);
lean_ctor_set(v_reuseFailAlloc_5238_, 4, v___x_5230_);
lean_ctor_set(v_reuseFailAlloc_5238_, 5, v_cache_5208_);
lean_ctor_set(v_reuseFailAlloc_5238_, 6, v_messages_5209_);
lean_ctor_set(v_reuseFailAlloc_5238_, 7, v_infoState_5210_);
lean_ctor_set(v_reuseFailAlloc_5238_, 8, v_snapshotTasks_5211_);
v___x_5232_ = v_reuseFailAlloc_5238_;
goto v_reusejp_5231_;
}
v_reusejp_5231_:
{
lean_object* v___x_5233_; lean_object* v___x_5234_; lean_object* v___x_5236_; 
v___x_5233_ = lean_st_ref_set(v___y_5194_, v___x_5232_);
v___x_5234_ = lean_box(0);
if (v_isShared_5201_ == 0)
{
lean_ctor_set(v___x_5200_, 0, v___x_5234_);
v___x_5236_ = v___x_5200_;
goto v_reusejp_5235_;
}
else
{
lean_object* v_reuseFailAlloc_5237_; 
v_reuseFailAlloc_5237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5237_, 0, v___x_5234_);
v___x_5236_ = v_reuseFailAlloc_5237_;
goto v_reusejp_5235_;
}
v_reusejp_5235_:
{
return v___x_5236_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1___redArg___boxed(lean_object* v_cls_5243_, lean_object* v_msg_5244_, lean_object* v___y_5245_, lean_object* v___y_5246_, lean_object* v___y_5247_, lean_object* v___y_5248_, lean_object* v___y_5249_){
_start:
{
lean_object* v_res_5250_; 
v_res_5250_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1___redArg(v_cls_5243_, v_msg_5244_, v___y_5245_, v___y_5246_, v___y_5247_, v___y_5248_);
lean_dec(v___y_5248_);
lean_dec_ref(v___y_5247_);
lean_dec(v___y_5246_);
lean_dec_ref(v___y_5245_);
return v_res_5250_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__3(void){
_start:
{
lean_object* v___x_5258_; lean_object* v___x_5259_; lean_object* v___x_5260_; 
v___x_5258_ = ((lean_object*)(l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__0));
v___x_5259_ = ((lean_object*)(l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__2));
v___x_5260_ = l_Lean_Name_append(v___x_5259_, v___x_5258_);
return v___x_5260_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__5(void){
_start:
{
lean_object* v___x_5262_; lean_object* v___x_5263_; 
v___x_5262_ = ((lean_object*)(l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__4));
v___x_5263_ = l_Lean_stringToMessageData(v___x_5262_);
return v___x_5263_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance(lean_object* v_declName_5264_, lean_object* v_a_5265_, lean_object* v_a_5266_, lean_object* v_a_5267_, lean_object* v_a_5268_, lean_object* v_a_5269_, lean_object* v_a_5270_){
_start:
{
lean_object* v___x_5272_; lean_object* v___x_5273_; uint8_t v___x_5274_; lean_object* v___x_5275_; 
v___x_5272_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__2));
v___x_5273_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_FromToJson_mkToJsonBodyForStruct_spec__0___redArg___closed__32));
v___x_5274_ = 1;
lean_inc(v_declName_5264_);
v___x_5275_ = l_Lean_Elab_Deriving_mkContext(v___x_5272_, v___x_5273_, v_declName_5264_, v___x_5274_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_, v_a_5269_, v_a_5270_);
if (lean_obj_tag(v___x_5275_) == 0)
{
lean_object* v_a_5276_; lean_object* v___x_5277_; 
v_a_5276_ = lean_ctor_get(v___x_5275_, 0);
lean_inc_n(v_a_5276_, 2);
lean_dec_ref_known(v___x_5275_, 1);
v___x_5277_ = l_Lean_Elab_Deriving_FromToJson_mkToJsonMutualBlock(v_a_5276_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_, v_a_5269_, v_a_5270_);
if (lean_obj_tag(v___x_5277_) == 0)
{
lean_object* v_a_5278_; lean_object* v___x_5279_; lean_object* v___x_5280_; lean_object* v___x_5281_; lean_object* v___x_5282_; 
v_a_5278_ = lean_ctor_get(v___x_5277_, 0);
lean_inc(v_a_5278_);
lean_dec_ref_known(v___x_5277_, 1);
v___x_5279_ = lean_unsigned_to_nat(1u);
v___x_5280_ = lean_mk_empty_array_with_capacity(v___x_5279_);
lean_inc_ref(v___x_5280_);
v___x_5281_ = lean_array_push(v___x_5280_, v_declName_5264_);
v___x_5282_ = l_Lean_Elab_Deriving_mkInstanceCmds(v_a_5276_, v___x_5272_, v___x_5281_, v___x_5274_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_, v_a_5269_, v_a_5270_);
lean_dec_ref(v___x_5281_);
if (lean_obj_tag(v___x_5282_) == 0)
{
lean_object* v_options_5283_; lean_object* v_a_5284_; lean_object* v___x_5286_; uint8_t v_isShared_5287_; uint8_t v_isSharedCheck_5324_; 
v_options_5283_ = lean_ctor_get(v_a_5269_, 2);
v_a_5284_ = lean_ctor_get(v___x_5282_, 0);
v_isSharedCheck_5324_ = !lean_is_exclusive(v___x_5282_);
if (v_isSharedCheck_5324_ == 0)
{
v___x_5286_ = v___x_5282_;
v_isShared_5287_ = v_isSharedCheck_5324_;
goto v_resetjp_5285_;
}
else
{
lean_inc(v_a_5284_);
lean_dec(v___x_5282_);
v___x_5286_ = lean_box(0);
v_isShared_5287_ = v_isSharedCheck_5324_;
goto v_resetjp_5285_;
}
v_resetjp_5285_:
{
lean_object* v_inheritedTraceOptions_5288_; uint8_t v_hasTrace_5289_; lean_object* v___x_5290_; lean_object* v___x_5291_; 
v_inheritedTraceOptions_5288_ = lean_ctor_get(v_a_5269_, 13);
v_hasTrace_5289_ = lean_ctor_get_uint8(v_options_5283_, sizeof(void*)*1);
v___x_5290_ = lean_array_push(v___x_5280_, v_a_5278_);
v___x_5291_ = l_Array_append___redArg(v___x_5290_, v_a_5284_);
lean_dec(v_a_5284_);
if (v_hasTrace_5289_ == 0)
{
lean_object* v___x_5293_; 
if (v_isShared_5287_ == 0)
{
lean_ctor_set(v___x_5286_, 0, v___x_5291_);
v___x_5293_ = v___x_5286_;
goto v_reusejp_5292_;
}
else
{
lean_object* v_reuseFailAlloc_5294_; 
v_reuseFailAlloc_5294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5294_, 0, v___x_5291_);
v___x_5293_ = v_reuseFailAlloc_5294_;
goto v_reusejp_5292_;
}
v_reusejp_5292_:
{
return v___x_5293_;
}
}
else
{
lean_object* v___x_5295_; lean_object* v___x_5296_; uint8_t v___x_5297_; 
v___x_5295_ = ((lean_object*)(l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__0));
v___x_5296_ = lean_obj_once(&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__3, &l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__3_once, _init_l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__3);
v___x_5297_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5288_, v_options_5283_, v___x_5296_);
if (v___x_5297_ == 0)
{
lean_object* v___x_5299_; 
if (v_isShared_5287_ == 0)
{
lean_ctor_set(v___x_5286_, 0, v___x_5291_);
v___x_5299_ = v___x_5286_;
goto v_reusejp_5298_;
}
else
{
lean_object* v_reuseFailAlloc_5300_; 
v_reuseFailAlloc_5300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5300_, 0, v___x_5291_);
v___x_5299_ = v_reuseFailAlloc_5300_;
goto v_reusejp_5298_;
}
v_reusejp_5298_:
{
return v___x_5299_;
}
}
else
{
lean_object* v___x_5301_; lean_object* v___x_5302_; lean_object* v___x_5303_; lean_object* v___x_5304_; lean_object* v___x_5305_; lean_object* v___x_5306_; lean_object* v___x_5307_; 
lean_del_object(v___x_5286_);
v___x_5301_ = lean_obj_once(&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__5, &l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__5_once, _init_l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__5);
lean_inc_ref(v___x_5291_);
v___x_5302_ = lean_array_to_list(v___x_5291_);
v___x_5303_ = lean_box(0);
v___x_5304_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__0(v___x_5302_, v___x_5303_);
v___x_5305_ = l_Lean_MessageData_ofList(v___x_5304_);
v___x_5306_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5306_, 0, v___x_5301_);
lean_ctor_set(v___x_5306_, 1, v___x_5305_);
v___x_5307_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1___redArg(v___x_5295_, v___x_5306_, v_a_5267_, v_a_5268_, v_a_5269_, v_a_5270_);
if (lean_obj_tag(v___x_5307_) == 0)
{
lean_object* v___x_5309_; uint8_t v_isShared_5310_; uint8_t v_isSharedCheck_5314_; 
v_isSharedCheck_5314_ = !lean_is_exclusive(v___x_5307_);
if (v_isSharedCheck_5314_ == 0)
{
lean_object* v_unused_5315_; 
v_unused_5315_ = lean_ctor_get(v___x_5307_, 0);
lean_dec(v_unused_5315_);
v___x_5309_ = v___x_5307_;
v_isShared_5310_ = v_isSharedCheck_5314_;
goto v_resetjp_5308_;
}
else
{
lean_dec(v___x_5307_);
v___x_5309_ = lean_box(0);
v_isShared_5310_ = v_isSharedCheck_5314_;
goto v_resetjp_5308_;
}
v_resetjp_5308_:
{
lean_object* v___x_5312_; 
if (v_isShared_5310_ == 0)
{
lean_ctor_set(v___x_5309_, 0, v___x_5291_);
v___x_5312_ = v___x_5309_;
goto v_reusejp_5311_;
}
else
{
lean_object* v_reuseFailAlloc_5313_; 
v_reuseFailAlloc_5313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5313_, 0, v___x_5291_);
v___x_5312_ = v_reuseFailAlloc_5313_;
goto v_reusejp_5311_;
}
v_reusejp_5311_:
{
return v___x_5312_;
}
}
}
else
{
lean_object* v_a_5316_; lean_object* v___x_5318_; uint8_t v_isShared_5319_; uint8_t v_isSharedCheck_5323_; 
lean_dec_ref(v___x_5291_);
v_a_5316_ = lean_ctor_get(v___x_5307_, 0);
v_isSharedCheck_5323_ = !lean_is_exclusive(v___x_5307_);
if (v_isSharedCheck_5323_ == 0)
{
v___x_5318_ = v___x_5307_;
v_isShared_5319_ = v_isSharedCheck_5323_;
goto v_resetjp_5317_;
}
else
{
lean_inc(v_a_5316_);
lean_dec(v___x_5307_);
v___x_5318_ = lean_box(0);
v_isShared_5319_ = v_isSharedCheck_5323_;
goto v_resetjp_5317_;
}
v_resetjp_5317_:
{
lean_object* v___x_5321_; 
if (v_isShared_5319_ == 0)
{
v___x_5321_ = v___x_5318_;
goto v_reusejp_5320_;
}
else
{
lean_object* v_reuseFailAlloc_5322_; 
v_reuseFailAlloc_5322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5322_, 0, v_a_5316_);
v___x_5321_ = v_reuseFailAlloc_5322_;
goto v_reusejp_5320_;
}
v_reusejp_5320_:
{
return v___x_5321_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_5280_);
lean_dec(v_a_5278_);
return v___x_5282_;
}
}
else
{
lean_object* v_a_5325_; lean_object* v___x_5327_; uint8_t v_isShared_5328_; uint8_t v_isSharedCheck_5332_; 
lean_dec(v_a_5276_);
lean_dec(v_declName_5264_);
v_a_5325_ = lean_ctor_get(v___x_5277_, 0);
v_isSharedCheck_5332_ = !lean_is_exclusive(v___x_5277_);
if (v_isSharedCheck_5332_ == 0)
{
v___x_5327_ = v___x_5277_;
v_isShared_5328_ = v_isSharedCheck_5332_;
goto v_resetjp_5326_;
}
else
{
lean_inc(v_a_5325_);
lean_dec(v___x_5277_);
v___x_5327_ = lean_box(0);
v_isShared_5328_ = v_isSharedCheck_5332_;
goto v_resetjp_5326_;
}
v_resetjp_5326_:
{
lean_object* v___x_5330_; 
if (v_isShared_5328_ == 0)
{
v___x_5330_ = v___x_5327_;
goto v_reusejp_5329_;
}
else
{
lean_object* v_reuseFailAlloc_5331_; 
v_reuseFailAlloc_5331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5331_, 0, v_a_5325_);
v___x_5330_ = v_reuseFailAlloc_5331_;
goto v_reusejp_5329_;
}
v_reusejp_5329_:
{
return v___x_5330_;
}
}
}
}
else
{
lean_object* v_a_5333_; lean_object* v___x_5335_; uint8_t v_isShared_5336_; uint8_t v_isSharedCheck_5340_; 
lean_dec(v_declName_5264_);
v_a_5333_ = lean_ctor_get(v___x_5275_, 0);
v_isSharedCheck_5340_ = !lean_is_exclusive(v___x_5275_);
if (v_isSharedCheck_5340_ == 0)
{
v___x_5335_ = v___x_5275_;
v_isShared_5336_ = v_isSharedCheck_5340_;
goto v_resetjp_5334_;
}
else
{
lean_inc(v_a_5333_);
lean_dec(v___x_5275_);
v___x_5335_ = lean_box(0);
v_isShared_5336_ = v_isSharedCheck_5340_;
goto v_resetjp_5334_;
}
v_resetjp_5334_:
{
lean_object* v___x_5338_; 
if (v_isShared_5336_ == 0)
{
v___x_5338_ = v___x_5335_;
goto v_reusejp_5337_;
}
else
{
lean_object* v_reuseFailAlloc_5339_; 
v_reuseFailAlloc_5339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5339_, 0, v_a_5333_);
v___x_5338_ = v_reuseFailAlloc_5339_;
goto v_reusejp_5337_;
}
v_reusejp_5337_:
{
return v___x_5338_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___boxed(lean_object* v_declName_5341_, lean_object* v_a_5342_, lean_object* v_a_5343_, lean_object* v_a_5344_, lean_object* v_a_5345_, lean_object* v_a_5346_, lean_object* v_a_5347_, lean_object* v_a_5348_){
_start:
{
lean_object* v_res_5349_; 
v_res_5349_ = l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance(v_declName_5341_, v_a_5342_, v_a_5343_, v_a_5344_, v_a_5345_, v_a_5346_, v_a_5347_);
lean_dec(v_a_5347_);
lean_dec_ref(v_a_5346_);
lean_dec(v_a_5345_);
lean_dec_ref(v_a_5344_);
lean_dec(v_a_5343_);
lean_dec_ref(v_a_5342_);
return v_res_5349_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1(lean_object* v_cls_5350_, lean_object* v_msg_5351_, lean_object* v___y_5352_, lean_object* v___y_5353_, lean_object* v___y_5354_, lean_object* v___y_5355_, lean_object* v___y_5356_, lean_object* v___y_5357_){
_start:
{
lean_object* v___x_5359_; 
v___x_5359_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1___redArg(v_cls_5350_, v_msg_5351_, v___y_5354_, v___y_5355_, v___y_5356_, v___y_5357_);
return v___x_5359_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1___boxed(lean_object* v_cls_5360_, lean_object* v_msg_5361_, lean_object* v___y_5362_, lean_object* v___y_5363_, lean_object* v___y_5364_, lean_object* v___y_5365_, lean_object* v___y_5366_, lean_object* v___y_5367_, lean_object* v___y_5368_){
_start:
{
lean_object* v_res_5369_; 
v_res_5369_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1(v_cls_5360_, v_msg_5361_, v___y_5362_, v___y_5363_, v___y_5364_, v___y_5365_, v___y_5366_, v___y_5367_);
lean_dec(v___y_5367_);
lean_dec_ref(v___y_5366_);
lean_dec(v___y_5365_);
lean_dec_ref(v___y_5364_);
lean_dec(v___y_5363_);
lean_dec_ref(v___y_5362_);
return v_res_5369_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___closed__2(void){
_start:
{
lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; 
v___x_5375_ = ((lean_object*)(l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___closed__1));
v___x_5376_ = ((lean_object*)(l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__2));
v___x_5377_ = l_Lean_Name_append(v___x_5376_, v___x_5375_);
return v___x_5377_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance(lean_object* v_declName_5378_, lean_object* v_a_5379_, lean_object* v_a_5380_, lean_object* v_a_5381_, lean_object* v_a_5382_, lean_object* v_a_5383_, lean_object* v_a_5384_){
_start:
{
lean_object* v___x_5386_; lean_object* v___x_5387_; uint8_t v___x_5388_; lean_object* v___x_5389_; 
v___x_5386_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__1));
v___x_5387_ = ((lean_object*)(l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___closed__0));
v___x_5388_ = 1;
lean_inc(v_declName_5378_);
v___x_5389_ = l_Lean_Elab_Deriving_mkContext(v___x_5386_, v___x_5387_, v_declName_5378_, v___x_5388_, v_a_5379_, v_a_5380_, v_a_5381_, v_a_5382_, v_a_5383_, v_a_5384_);
if (lean_obj_tag(v___x_5389_) == 0)
{
lean_object* v_a_5390_; lean_object* v___x_5391_; 
v_a_5390_ = lean_ctor_get(v___x_5389_, 0);
lean_inc_n(v_a_5390_, 2);
lean_dec_ref_known(v___x_5389_, 1);
v___x_5391_ = l_Lean_Elab_Deriving_FromToJson_mkFromJsonMutualBlock(v_a_5390_, v_a_5379_, v_a_5380_, v_a_5381_, v_a_5382_, v_a_5383_, v_a_5384_);
if (lean_obj_tag(v___x_5391_) == 0)
{
lean_object* v_a_5392_; lean_object* v___x_5393_; lean_object* v___x_5394_; lean_object* v___x_5395_; lean_object* v___x_5396_; 
v_a_5392_ = lean_ctor_get(v___x_5391_, 0);
lean_inc(v_a_5392_);
lean_dec_ref_known(v___x_5391_, 1);
v___x_5393_ = lean_unsigned_to_nat(1u);
v___x_5394_ = lean_mk_empty_array_with_capacity(v___x_5393_);
lean_inc_ref(v___x_5394_);
v___x_5395_ = lean_array_push(v___x_5394_, v_declName_5378_);
v___x_5396_ = l_Lean_Elab_Deriving_mkInstanceCmds(v_a_5390_, v___x_5386_, v___x_5395_, v___x_5388_, v_a_5379_, v_a_5380_, v_a_5381_, v_a_5382_, v_a_5383_, v_a_5384_);
lean_dec_ref(v___x_5395_);
if (lean_obj_tag(v___x_5396_) == 0)
{
lean_object* v_options_5397_; lean_object* v_a_5398_; lean_object* v___x_5400_; uint8_t v_isShared_5401_; uint8_t v_isSharedCheck_5438_; 
v_options_5397_ = lean_ctor_get(v_a_5383_, 2);
v_a_5398_ = lean_ctor_get(v___x_5396_, 0);
v_isSharedCheck_5438_ = !lean_is_exclusive(v___x_5396_);
if (v_isSharedCheck_5438_ == 0)
{
v___x_5400_ = v___x_5396_;
v_isShared_5401_ = v_isSharedCheck_5438_;
goto v_resetjp_5399_;
}
else
{
lean_inc(v_a_5398_);
lean_dec(v___x_5396_);
v___x_5400_ = lean_box(0);
v_isShared_5401_ = v_isSharedCheck_5438_;
goto v_resetjp_5399_;
}
v_resetjp_5399_:
{
lean_object* v_inheritedTraceOptions_5402_; uint8_t v_hasTrace_5403_; lean_object* v___x_5404_; lean_object* v___x_5405_; 
v_inheritedTraceOptions_5402_ = lean_ctor_get(v_a_5383_, 13);
v_hasTrace_5403_ = lean_ctor_get_uint8(v_options_5397_, sizeof(void*)*1);
v___x_5404_ = lean_array_push(v___x_5394_, v_a_5392_);
v___x_5405_ = l_Array_append___redArg(v___x_5404_, v_a_5398_);
lean_dec(v_a_5398_);
if (v_hasTrace_5403_ == 0)
{
lean_object* v___x_5407_; 
if (v_isShared_5401_ == 0)
{
lean_ctor_set(v___x_5400_, 0, v___x_5405_);
v___x_5407_ = v___x_5400_;
goto v_reusejp_5406_;
}
else
{
lean_object* v_reuseFailAlloc_5408_; 
v_reuseFailAlloc_5408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5408_, 0, v___x_5405_);
v___x_5407_ = v_reuseFailAlloc_5408_;
goto v_reusejp_5406_;
}
v_reusejp_5406_:
{
return v___x_5407_;
}
}
else
{
lean_object* v___x_5409_; lean_object* v___x_5410_; uint8_t v___x_5411_; 
v___x_5409_ = ((lean_object*)(l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___closed__1));
v___x_5410_ = lean_obj_once(&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___closed__2, &l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___closed__2_once, _init_l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___closed__2);
v___x_5411_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5402_, v_options_5397_, v___x_5410_);
if (v___x_5411_ == 0)
{
lean_object* v___x_5413_; 
if (v_isShared_5401_ == 0)
{
lean_ctor_set(v___x_5400_, 0, v___x_5405_);
v___x_5413_ = v___x_5400_;
goto v_reusejp_5412_;
}
else
{
lean_object* v_reuseFailAlloc_5414_; 
v_reuseFailAlloc_5414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5414_, 0, v___x_5405_);
v___x_5413_ = v_reuseFailAlloc_5414_;
goto v_reusejp_5412_;
}
v_reusejp_5412_:
{
return v___x_5413_;
}
}
else
{
lean_object* v___x_5415_; lean_object* v___x_5416_; lean_object* v___x_5417_; lean_object* v___x_5418_; lean_object* v___x_5419_; lean_object* v___x_5420_; lean_object* v___x_5421_; 
lean_del_object(v___x_5400_);
v___x_5415_ = lean_obj_once(&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__5, &l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__5_once, _init_l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__5);
lean_inc_ref(v___x_5405_);
v___x_5416_ = lean_array_to_list(v___x_5405_);
v___x_5417_ = lean_box(0);
v___x_5418_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__0(v___x_5416_, v___x_5417_);
v___x_5419_ = l_Lean_MessageData_ofList(v___x_5418_);
v___x_5420_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5420_, 0, v___x_5415_);
lean_ctor_set(v___x_5420_, 1, v___x_5419_);
v___x_5421_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance_spec__1___redArg(v___x_5409_, v___x_5420_, v_a_5381_, v_a_5382_, v_a_5383_, v_a_5384_);
if (lean_obj_tag(v___x_5421_) == 0)
{
lean_object* v___x_5423_; uint8_t v_isShared_5424_; uint8_t v_isSharedCheck_5428_; 
v_isSharedCheck_5428_ = !lean_is_exclusive(v___x_5421_);
if (v_isSharedCheck_5428_ == 0)
{
lean_object* v_unused_5429_; 
v_unused_5429_ = lean_ctor_get(v___x_5421_, 0);
lean_dec(v_unused_5429_);
v___x_5423_ = v___x_5421_;
v_isShared_5424_ = v_isSharedCheck_5428_;
goto v_resetjp_5422_;
}
else
{
lean_dec(v___x_5421_);
v___x_5423_ = lean_box(0);
v_isShared_5424_ = v_isSharedCheck_5428_;
goto v_resetjp_5422_;
}
v_resetjp_5422_:
{
lean_object* v___x_5426_; 
if (v_isShared_5424_ == 0)
{
lean_ctor_set(v___x_5423_, 0, v___x_5405_);
v___x_5426_ = v___x_5423_;
goto v_reusejp_5425_;
}
else
{
lean_object* v_reuseFailAlloc_5427_; 
v_reuseFailAlloc_5427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5427_, 0, v___x_5405_);
v___x_5426_ = v_reuseFailAlloc_5427_;
goto v_reusejp_5425_;
}
v_reusejp_5425_:
{
return v___x_5426_;
}
}
}
else
{
lean_object* v_a_5430_; lean_object* v___x_5432_; uint8_t v_isShared_5433_; uint8_t v_isSharedCheck_5437_; 
lean_dec_ref(v___x_5405_);
v_a_5430_ = lean_ctor_get(v___x_5421_, 0);
v_isSharedCheck_5437_ = !lean_is_exclusive(v___x_5421_);
if (v_isSharedCheck_5437_ == 0)
{
v___x_5432_ = v___x_5421_;
v_isShared_5433_ = v_isSharedCheck_5437_;
goto v_resetjp_5431_;
}
else
{
lean_inc(v_a_5430_);
lean_dec(v___x_5421_);
v___x_5432_ = lean_box(0);
v_isShared_5433_ = v_isSharedCheck_5437_;
goto v_resetjp_5431_;
}
v_resetjp_5431_:
{
lean_object* v___x_5435_; 
if (v_isShared_5433_ == 0)
{
v___x_5435_ = v___x_5432_;
goto v_reusejp_5434_;
}
else
{
lean_object* v_reuseFailAlloc_5436_; 
v_reuseFailAlloc_5436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5436_, 0, v_a_5430_);
v___x_5435_ = v_reuseFailAlloc_5436_;
goto v_reusejp_5434_;
}
v_reusejp_5434_:
{
return v___x_5435_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_5394_);
lean_dec(v_a_5392_);
return v___x_5396_;
}
}
else
{
lean_object* v_a_5439_; lean_object* v___x_5441_; uint8_t v_isShared_5442_; uint8_t v_isSharedCheck_5446_; 
lean_dec(v_a_5390_);
lean_dec(v_declName_5378_);
v_a_5439_ = lean_ctor_get(v___x_5391_, 0);
v_isSharedCheck_5446_ = !lean_is_exclusive(v___x_5391_);
if (v_isSharedCheck_5446_ == 0)
{
v___x_5441_ = v___x_5391_;
v_isShared_5442_ = v_isSharedCheck_5446_;
goto v_resetjp_5440_;
}
else
{
lean_inc(v_a_5439_);
lean_dec(v___x_5391_);
v___x_5441_ = lean_box(0);
v_isShared_5442_ = v_isSharedCheck_5446_;
goto v_resetjp_5440_;
}
v_resetjp_5440_:
{
lean_object* v___x_5444_; 
if (v_isShared_5442_ == 0)
{
v___x_5444_ = v___x_5441_;
goto v_reusejp_5443_;
}
else
{
lean_object* v_reuseFailAlloc_5445_; 
v_reuseFailAlloc_5445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5445_, 0, v_a_5439_);
v___x_5444_ = v_reuseFailAlloc_5445_;
goto v_reusejp_5443_;
}
v_reusejp_5443_:
{
return v___x_5444_;
}
}
}
}
else
{
lean_object* v_a_5447_; lean_object* v___x_5449_; uint8_t v_isShared_5450_; uint8_t v_isSharedCheck_5454_; 
lean_dec(v_declName_5378_);
v_a_5447_ = lean_ctor_get(v___x_5389_, 0);
v_isSharedCheck_5454_ = !lean_is_exclusive(v___x_5389_);
if (v_isSharedCheck_5454_ == 0)
{
v___x_5449_ = v___x_5389_;
v_isShared_5450_ = v_isSharedCheck_5454_;
goto v_resetjp_5448_;
}
else
{
lean_inc(v_a_5447_);
lean_dec(v___x_5389_);
v___x_5449_ = lean_box(0);
v_isShared_5450_ = v_isSharedCheck_5454_;
goto v_resetjp_5448_;
}
v_resetjp_5448_:
{
lean_object* v___x_5452_; 
if (v_isShared_5450_ == 0)
{
v___x_5452_ = v___x_5449_;
goto v_reusejp_5451_;
}
else
{
lean_object* v_reuseFailAlloc_5453_; 
v_reuseFailAlloc_5453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5453_, 0, v_a_5447_);
v___x_5452_ = v_reuseFailAlloc_5453_;
goto v_reusejp_5451_;
}
v_reusejp_5451_:
{
return v___x_5452_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___boxed(lean_object* v_declName_5455_, lean_object* v_a_5456_, lean_object* v_a_5457_, lean_object* v_a_5458_, lean_object* v_a_5459_, lean_object* v_a_5460_, lean_object* v_a_5461_, lean_object* v_a_5462_){
_start:
{
lean_object* v_res_5463_; 
v_res_5463_ = l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance(v_declName_5455_, v_a_5456_, v_a_5457_, v_a_5458_, v_a_5459_, v_a_5460_, v_a_5461_);
lean_dec(v_a_5461_);
lean_dec_ref(v_a_5460_);
lean_dec(v_a_5459_);
lean_dec_ref(v_a_5458_);
lean_dec(v_a_5457_);
lean_dec_ref(v_a_5456_);
return v_res_5463_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__0___redArg(lean_object* v_declName_5464_, lean_object* v___y_5465_){
_start:
{
lean_object* v___x_5467_; lean_object* v_env_5468_; uint8_t v___x_5469_; lean_object* v___x_5470_; lean_object* v___x_5471_; 
v___x_5467_ = lean_st_ref_get(v___y_5465_);
v_env_5468_ = lean_ctor_get(v___x_5467_, 0);
lean_inc_ref(v_env_5468_);
lean_dec(v___x_5467_);
v___x_5469_ = l_Lean_isInductiveCore(v_env_5468_, v_declName_5464_);
v___x_5470_ = lean_box(v___x_5469_);
v___x_5471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5471_, 0, v___x_5470_);
return v___x_5471_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__0___redArg___boxed(lean_object* v_declName_5472_, lean_object* v___y_5473_, lean_object* v___y_5474_){
_start:
{
lean_object* v_res_5475_; 
v_res_5475_ = l_Lean_isInductive___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__0___redArg(v_declName_5472_, v___y_5473_);
lean_dec(v___y_5473_);
return v_res_5475_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__0(lean_object* v_declName_5476_, lean_object* v___y_5477_, lean_object* v___y_5478_){
_start:
{
lean_object* v___x_5480_; 
v___x_5480_ = l_Lean_isInductive___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__0___redArg(v_declName_5476_, v___y_5478_);
return v___x_5480_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__0___boxed(lean_object* v_declName_5481_, lean_object* v___y_5482_, lean_object* v___y_5483_, lean_object* v___y_5484_){
_start:
{
lean_object* v_res_5485_; 
v_res_5485_ = l_Lean_isInductive___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__0(v_declName_5481_, v___y_5482_, v___y_5483_);
lean_dec(v___y_5483_);
lean_dec_ref(v___y_5482_);
return v_res_5485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lam__0(uint8_t v_____do__lift_5486_, lean_object* v___y_5487_, lean_object* v___y_5488_){
_start:
{
if (v_____do__lift_5486_ == 0)
{
uint8_t v___x_5490_; lean_object* v___x_5491_; lean_object* v___x_5492_; 
v___x_5490_ = 1;
v___x_5491_ = lean_box(v___x_5490_);
v___x_5492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5492_, 0, v___x_5491_);
return v___x_5492_;
}
else
{
uint8_t v___x_5493_; lean_object* v___x_5494_; lean_object* v___x_5495_; 
v___x_5493_ = 0;
v___x_5494_ = lean_box(v___x_5493_);
v___x_5495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5495_, 0, v___x_5494_);
return v___x_5495_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lam__0___boxed(lean_object* v_____do__lift_5496_, lean_object* v___y_5497_, lean_object* v___y_5498_, lean_object* v___y_5499_){
_start:
{
uint8_t v_____do__lift_2653__boxed_5500_; lean_object* v_res_5501_; 
v_____do__lift_2653__boxed_5500_ = lean_unbox(v_____do__lift_5496_);
v_res_5501_ = l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lam__0(v_____do__lift_2653__boxed_5500_, v___y_5497_, v___y_5498_);
lean_dec(v___y_5498_);
lean_dec_ref(v___y_5497_);
return v_res_5501_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__3(lean_object* v_as_5502_, size_t v_i_5503_, size_t v_stop_5504_, lean_object* v___y_5505_, lean_object* v___y_5506_){
_start:
{
uint8_t v___x_5508_; 
v___x_5508_ = lean_usize_dec_eq(v_i_5503_, v_stop_5504_);
if (v___x_5508_ == 0)
{
uint8_t v___x_5509_; uint8_t v_a_5511_; lean_object* v___x_5517_; lean_object* v___x_5518_; 
v___x_5509_ = 1;
v___x_5517_ = lean_array_uget_borrowed(v_as_5502_, v_i_5503_);
lean_inc(v___x_5517_);
v___x_5518_ = l_Lean_isInductive___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__0___redArg(v___x_5517_, v___y_5506_);
if (lean_obj_tag(v___x_5518_) == 0)
{
lean_object* v_a_5519_; lean_object* v___x_5521_; uint8_t v_isShared_5522_; uint8_t v_isSharedCheck_5528_; 
v_a_5519_ = lean_ctor_get(v___x_5518_, 0);
v_isSharedCheck_5528_ = !lean_is_exclusive(v___x_5518_);
if (v_isSharedCheck_5528_ == 0)
{
v___x_5521_ = v___x_5518_;
v_isShared_5522_ = v_isSharedCheck_5528_;
goto v_resetjp_5520_;
}
else
{
lean_inc(v_a_5519_);
lean_dec(v___x_5518_);
v___x_5521_ = lean_box(0);
v_isShared_5522_ = v_isSharedCheck_5528_;
goto v_resetjp_5520_;
}
v_resetjp_5520_:
{
uint8_t v___x_5523_; 
v___x_5523_ = lean_unbox(v_a_5519_);
lean_dec(v_a_5519_);
if (v___x_5523_ == 0)
{
lean_object* v___x_5524_; lean_object* v___x_5526_; 
v___x_5524_ = lean_box(v___x_5509_);
if (v_isShared_5522_ == 0)
{
lean_ctor_set(v___x_5521_, 0, v___x_5524_);
v___x_5526_ = v___x_5521_;
goto v_reusejp_5525_;
}
else
{
lean_object* v_reuseFailAlloc_5527_; 
v_reuseFailAlloc_5527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5527_, 0, v___x_5524_);
v___x_5526_ = v_reuseFailAlloc_5527_;
goto v_reusejp_5525_;
}
v_reusejp_5525_:
{
return v___x_5526_;
}
}
else
{
lean_del_object(v___x_5521_);
v_a_5511_ = v___x_5508_;
goto v___jp_5510_;
}
}
}
else
{
if (lean_obj_tag(v___x_5518_) == 0)
{
lean_object* v_a_5529_; uint8_t v___x_5530_; 
v_a_5529_ = lean_ctor_get(v___x_5518_, 0);
lean_inc(v_a_5529_);
lean_dec_ref_known(v___x_5518_, 1);
v___x_5530_ = lean_unbox(v_a_5529_);
lean_dec(v_a_5529_);
v_a_5511_ = v___x_5530_;
goto v___jp_5510_;
}
else
{
return v___x_5518_;
}
}
v___jp_5510_:
{
if (v_a_5511_ == 0)
{
size_t v___x_5512_; size_t v___x_5513_; 
v___x_5512_ = ((size_t)1ULL);
v___x_5513_ = lean_usize_add(v_i_5503_, v___x_5512_);
v_i_5503_ = v___x_5513_;
goto _start;
}
else
{
lean_object* v___x_5515_; lean_object* v___x_5516_; 
v___x_5515_ = lean_box(v___x_5509_);
v___x_5516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5516_, 0, v___x_5515_);
return v___x_5516_;
}
}
}
else
{
uint8_t v___x_5531_; lean_object* v___x_5532_; lean_object* v___x_5533_; 
v___x_5531_ = 0;
v___x_5532_ = lean_box(v___x_5531_);
v___x_5533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5533_, 0, v___x_5532_);
return v___x_5533_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__3___boxed(lean_object* v_as_5534_, lean_object* v_i_5535_, lean_object* v_stop_5536_, lean_object* v___y_5537_, lean_object* v___y_5538_, lean_object* v___y_5539_){
_start:
{
size_t v_i_boxed_5540_; size_t v_stop_boxed_5541_; lean_object* v_res_5542_; 
v_i_boxed_5540_ = lean_unbox_usize(v_i_5535_);
lean_dec(v_i_5535_);
v_stop_boxed_5541_ = lean_unbox_usize(v_stop_5536_);
lean_dec(v_stop_5536_);
v_res_5542_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__3(v_as_5534_, v_i_boxed_5540_, v_stop_boxed_5541_, v___y_5537_, v___y_5538_);
lean_dec(v___y_5538_);
lean_dec_ref(v___y_5537_);
lean_dec_ref(v_as_5534_);
return v_res_5542_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__1(lean_object* v_as_5543_, size_t v_i_5544_, size_t v_stop_5545_, lean_object* v_b_5546_, lean_object* v___y_5547_, lean_object* v___y_5548_){
_start:
{
uint8_t v___x_5550_; 
v___x_5550_ = lean_usize_dec_eq(v_i_5544_, v_stop_5545_);
if (v___x_5550_ == 0)
{
lean_object* v___x_5551_; lean_object* v___x_5552_; 
v___x_5551_ = lean_array_uget_borrowed(v_as_5543_, v_i_5544_);
lean_inc(v___x_5551_);
v___x_5552_ = l_Lean_Elab_Command_elabCommand(v___x_5551_, v___y_5547_, v___y_5548_);
if (lean_obj_tag(v___x_5552_) == 0)
{
lean_object* v_a_5553_; size_t v___x_5554_; size_t v___x_5555_; 
v_a_5553_ = lean_ctor_get(v___x_5552_, 0);
lean_inc(v_a_5553_);
lean_dec_ref_known(v___x_5552_, 1);
v___x_5554_ = ((size_t)1ULL);
v___x_5555_ = lean_usize_add(v_i_5544_, v___x_5554_);
v_i_5544_ = v___x_5555_;
v_b_5546_ = v_a_5553_;
goto _start;
}
else
{
return v___x_5552_;
}
}
else
{
lean_object* v___x_5557_; 
v___x_5557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5557_, 0, v_b_5546_);
return v___x_5557_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__1___boxed(lean_object* v_as_5558_, lean_object* v_i_5559_, lean_object* v_stop_5560_, lean_object* v_b_5561_, lean_object* v___y_5562_, lean_object* v___y_5563_, lean_object* v___y_5564_){
_start:
{
size_t v_i_boxed_5565_; size_t v_stop_boxed_5566_; lean_object* v_res_5567_; 
v_i_boxed_5565_ = lean_unbox_usize(v_i_5559_);
lean_dec(v_i_5559_);
v_stop_boxed_5566_ = lean_unbox_usize(v_stop_5560_);
lean_dec(v_stop_5560_);
v_res_5567_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__1(v_as_5558_, v_i_boxed_5565_, v_stop_boxed_5566_, v_b_5561_, v___y_5562_, v___y_5563_);
lean_dec(v___y_5563_);
lean_dec_ref(v___y_5562_);
lean_dec_ref(v_as_5558_);
return v_res_5567_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__2(lean_object* v_as_5568_, size_t v_sz_5569_, size_t v_i_5570_, lean_object* v_b_5571_, lean_object* v___y_5572_, lean_object* v___y_5573_){
_start:
{
lean_object* v_a_5576_; uint8_t v___x_5580_; 
v___x_5580_ = lean_usize_dec_lt(v_i_5570_, v_sz_5569_);
if (v___x_5580_ == 0)
{
lean_object* v___x_5581_; 
v___x_5581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5581_, 0, v_b_5571_);
return v___x_5581_;
}
else
{
lean_object* v_a_5582_; lean_object* v___x_5583_; lean_object* v___x_5584_; 
v_a_5582_ = lean_array_uget_borrowed(v_as_5568_, v_i_5570_);
lean_inc(v_a_5582_);
v___x_5583_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___boxed), 8, 1);
lean_closure_set(v___x_5583_, 0, v_a_5582_);
v___x_5584_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_5583_, v___y_5572_, v___y_5573_);
if (lean_obj_tag(v___x_5584_) == 0)
{
lean_object* v_a_5585_; lean_object* v___x_5586_; lean_object* v___y_5588_; lean_object* v___x_5589_; lean_object* v___x_5590_; uint8_t v___x_5591_; 
v_a_5585_ = lean_ctor_get(v___x_5584_, 0);
lean_inc(v_a_5585_);
lean_dec_ref_known(v___x_5584_, 1);
v___x_5586_ = lean_box(0);
v___x_5589_ = lean_unsigned_to_nat(0u);
v___x_5590_ = lean_array_get_size(v_a_5585_);
v___x_5591_ = lean_nat_dec_lt(v___x_5589_, v___x_5590_);
if (v___x_5591_ == 0)
{
lean_dec(v_a_5585_);
v_a_5576_ = v___x_5586_;
goto v___jp_5575_;
}
else
{
uint8_t v___x_5592_; 
v___x_5592_ = lean_nat_dec_le(v___x_5590_, v___x_5590_);
if (v___x_5592_ == 0)
{
if (v___x_5591_ == 0)
{
lean_dec(v_a_5585_);
v_a_5576_ = v___x_5586_;
goto v___jp_5575_;
}
else
{
size_t v___x_5593_; size_t v___x_5594_; lean_object* v___x_5595_; 
v___x_5593_ = ((size_t)0ULL);
v___x_5594_ = lean_usize_of_nat(v___x_5590_);
v___x_5595_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__1(v_a_5585_, v___x_5593_, v___x_5594_, v___x_5586_, v___y_5572_, v___y_5573_);
lean_dec(v_a_5585_);
v___y_5588_ = v___x_5595_;
goto v___jp_5587_;
}
}
else
{
size_t v___x_5596_; size_t v___x_5597_; lean_object* v___x_5598_; 
v___x_5596_ = ((size_t)0ULL);
v___x_5597_ = lean_usize_of_nat(v___x_5590_);
v___x_5598_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__1(v_a_5585_, v___x_5596_, v___x_5597_, v___x_5586_, v___y_5572_, v___y_5573_);
lean_dec(v_a_5585_);
v___y_5588_ = v___x_5598_;
goto v___jp_5587_;
}
}
v___jp_5587_:
{
if (lean_obj_tag(v___y_5588_) == 0)
{
lean_dec_ref_known(v___y_5588_, 1);
v_a_5576_ = v___x_5586_;
goto v___jp_5575_;
}
else
{
return v___y_5588_;
}
}
}
else
{
lean_object* v_a_5599_; lean_object* v___x_5601_; uint8_t v_isShared_5602_; uint8_t v_isSharedCheck_5606_; 
v_a_5599_ = lean_ctor_get(v___x_5584_, 0);
v_isSharedCheck_5606_ = !lean_is_exclusive(v___x_5584_);
if (v_isSharedCheck_5606_ == 0)
{
v___x_5601_ = v___x_5584_;
v_isShared_5602_ = v_isSharedCheck_5606_;
goto v_resetjp_5600_;
}
else
{
lean_inc(v_a_5599_);
lean_dec(v___x_5584_);
v___x_5601_ = lean_box(0);
v_isShared_5602_ = v_isSharedCheck_5606_;
goto v_resetjp_5600_;
}
v_resetjp_5600_:
{
lean_object* v___x_5604_; 
if (v_isShared_5602_ == 0)
{
v___x_5604_ = v___x_5601_;
goto v_reusejp_5603_;
}
else
{
lean_object* v_reuseFailAlloc_5605_; 
v_reuseFailAlloc_5605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5605_, 0, v_a_5599_);
v___x_5604_ = v_reuseFailAlloc_5605_;
goto v_reusejp_5603_;
}
v_reusejp_5603_:
{
return v___x_5604_;
}
}
}
}
v___jp_5575_:
{
size_t v___x_5577_; size_t v___x_5578_; 
v___x_5577_ = ((size_t)1ULL);
v___x_5578_ = lean_usize_add(v_i_5570_, v___x_5577_);
v_i_5570_ = v___x_5578_;
v_b_5571_ = v_a_5576_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__2___boxed(lean_object* v_as_5607_, lean_object* v_sz_5608_, lean_object* v_i_5609_, lean_object* v_b_5610_, lean_object* v___y_5611_, lean_object* v___y_5612_, lean_object* v___y_5613_){
_start:
{
size_t v_sz_boxed_5614_; size_t v_i_boxed_5615_; lean_object* v_res_5616_; 
v_sz_boxed_5614_ = lean_unbox_usize(v_sz_5608_);
lean_dec(v_sz_5608_);
v_i_boxed_5615_ = lean_unbox_usize(v_i_5609_);
lean_dec(v_i_5609_);
v_res_5616_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__2(v_as_5607_, v_sz_boxed_5614_, v_i_boxed_5615_, v_b_5610_, v___y_5611_, v___y_5612_);
lean_dec(v___y_5612_);
lean_dec_ref(v___y_5611_);
lean_dec_ref(v_as_5607_);
return v_res_5616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler(lean_object* v_declNames_5617_, lean_object* v_a_5618_, lean_object* v_a_5619_){
_start:
{
lean_object* v___x_5621_; lean_object* v___x_5622_; uint8_t v___x_5623_; uint8_t v_a_5625_; lean_object* v___y_5650_; 
v___x_5621_ = lean_unsigned_to_nat(0u);
v___x_5622_ = lean_array_get_size(v_declNames_5617_);
v___x_5623_ = lean_nat_dec_lt(v___x_5621_, v___x_5622_);
if (v___x_5623_ == 0)
{
lean_object* v___x_5654_; 
v___x_5654_ = l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lam__0(v___x_5623_, v_a_5618_, v_a_5619_);
v___y_5650_ = v___x_5654_;
goto v___jp_5649_;
}
else
{
if (v___x_5623_ == 0)
{
v_a_5625_ = v___x_5623_;
goto v___jp_5624_;
}
else
{
size_t v___x_5655_; size_t v___x_5656_; lean_object* v___x_5657_; 
v___x_5655_ = ((size_t)0ULL);
v___x_5656_ = lean_usize_of_nat(v___x_5622_);
v___x_5657_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__3(v_declNames_5617_, v___x_5655_, v___x_5656_, v_a_5618_, v_a_5619_);
if (lean_obj_tag(v___x_5657_) == 0)
{
lean_object* v_a_5658_; uint8_t v___x_5659_; lean_object* v___x_5660_; 
v_a_5658_ = lean_ctor_get(v___x_5657_, 0);
lean_inc(v_a_5658_);
lean_dec_ref_known(v___x_5657_, 1);
v___x_5659_ = lean_unbox(v_a_5658_);
lean_dec(v_a_5658_);
v___x_5660_ = l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lam__0(v___x_5659_, v_a_5618_, v_a_5619_);
v___y_5650_ = v___x_5660_;
goto v___jp_5649_;
}
else
{
v___y_5650_ = v___x_5657_;
goto v___jp_5649_;
}
}
}
v___jp_5624_:
{
if (v___x_5623_ == 0)
{
lean_object* v___x_5626_; lean_object* v___x_5627_; 
v___x_5626_ = lean_box(v___x_5623_);
v___x_5627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5627_, 0, v___x_5626_);
return v___x_5627_;
}
else
{
lean_object* v___x_5628_; size_t v_sz_5629_; size_t v___x_5630_; lean_object* v___x_5631_; 
v___x_5628_ = lean_box(0);
v_sz_5629_ = lean_array_size(v_declNames_5617_);
v___x_5630_ = ((size_t)0ULL);
v___x_5631_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__2(v_declNames_5617_, v_sz_5629_, v___x_5630_, v___x_5628_, v_a_5618_, v_a_5619_);
if (lean_obj_tag(v___x_5631_) == 0)
{
lean_object* v___x_5633_; uint8_t v_isShared_5634_; uint8_t v_isSharedCheck_5639_; 
v_isSharedCheck_5639_ = !lean_is_exclusive(v___x_5631_);
if (v_isSharedCheck_5639_ == 0)
{
lean_object* v_unused_5640_; 
v_unused_5640_ = lean_ctor_get(v___x_5631_, 0);
lean_dec(v_unused_5640_);
v___x_5633_ = v___x_5631_;
v_isShared_5634_ = v_isSharedCheck_5639_;
goto v_resetjp_5632_;
}
else
{
lean_dec(v___x_5631_);
v___x_5633_ = lean_box(0);
v_isShared_5634_ = v_isSharedCheck_5639_;
goto v_resetjp_5632_;
}
v_resetjp_5632_:
{
lean_object* v___x_5635_; lean_object* v___x_5637_; 
v___x_5635_ = lean_box(v_a_5625_);
if (v_isShared_5634_ == 0)
{
lean_ctor_set(v___x_5633_, 0, v___x_5635_);
v___x_5637_ = v___x_5633_;
goto v_reusejp_5636_;
}
else
{
lean_object* v_reuseFailAlloc_5638_; 
v_reuseFailAlloc_5638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5638_, 0, v___x_5635_);
v___x_5637_ = v_reuseFailAlloc_5638_;
goto v_reusejp_5636_;
}
v_reusejp_5636_:
{
return v___x_5637_;
}
}
}
else
{
lean_object* v_a_5641_; lean_object* v___x_5643_; uint8_t v_isShared_5644_; uint8_t v_isSharedCheck_5648_; 
v_a_5641_ = lean_ctor_get(v___x_5631_, 0);
v_isSharedCheck_5648_ = !lean_is_exclusive(v___x_5631_);
if (v_isSharedCheck_5648_ == 0)
{
v___x_5643_ = v___x_5631_;
v_isShared_5644_ = v_isSharedCheck_5648_;
goto v_resetjp_5642_;
}
else
{
lean_inc(v_a_5641_);
lean_dec(v___x_5631_);
v___x_5643_ = lean_box(0);
v_isShared_5644_ = v_isSharedCheck_5648_;
goto v_resetjp_5642_;
}
v_resetjp_5642_:
{
lean_object* v___x_5646_; 
if (v_isShared_5644_ == 0)
{
v___x_5646_ = v___x_5643_;
goto v_reusejp_5645_;
}
else
{
lean_object* v_reuseFailAlloc_5647_; 
v_reuseFailAlloc_5647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5647_, 0, v_a_5641_);
v___x_5646_ = v_reuseFailAlloc_5647_;
goto v_reusejp_5645_;
}
v_reusejp_5645_:
{
return v___x_5646_;
}
}
}
}
}
v___jp_5649_:
{
if (lean_obj_tag(v___y_5650_) == 0)
{
lean_object* v_a_5651_; uint8_t v___x_5652_; 
v_a_5651_ = lean_ctor_get(v___y_5650_, 0);
v___x_5652_ = lean_unbox(v_a_5651_);
if (v___x_5652_ == 0)
{
return v___y_5650_;
}
else
{
uint8_t v___x_5653_; 
lean_inc(v_a_5651_);
lean_dec_ref_known(v___y_5650_, 1);
v___x_5653_ = lean_unbox(v_a_5651_);
lean_dec(v_a_5651_);
v_a_5625_ = v___x_5653_;
goto v___jp_5624_;
}
}
else
{
return v___y_5650_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___boxed(lean_object* v_declNames_5661_, lean_object* v_a_5662_, lean_object* v_a_5663_, lean_object* v_a_5664_){
_start:
{
lean_object* v_res_5665_; 
v_res_5665_ = l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler(v_declNames_5661_, v_a_5662_, v_a_5663_);
lean_dec(v_a_5663_);
lean_dec_ref(v_a_5662_);
lean_dec_ref(v_declNames_5661_);
return v_res_5665_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_spec__0(lean_object* v_as_5666_, size_t v_sz_5667_, size_t v_i_5668_, lean_object* v_b_5669_, lean_object* v___y_5670_, lean_object* v___y_5671_){
_start:
{
lean_object* v_a_5674_; uint8_t v___x_5678_; 
v___x_5678_ = lean_usize_dec_lt(v_i_5668_, v_sz_5667_);
if (v___x_5678_ == 0)
{
lean_object* v___x_5679_; 
v___x_5679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5679_, 0, v_b_5669_);
return v___x_5679_;
}
else
{
lean_object* v_a_5680_; lean_object* v___x_5681_; lean_object* v___x_5682_; 
v_a_5680_ = lean_array_uget_borrowed(v_as_5666_, v_i_5668_);
lean_inc(v_a_5680_);
v___x_5681_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___boxed), 8, 1);
lean_closure_set(v___x_5681_, 0, v_a_5680_);
v___x_5682_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_5681_, v___y_5670_, v___y_5671_);
if (lean_obj_tag(v___x_5682_) == 0)
{
lean_object* v_a_5683_; lean_object* v___x_5684_; lean_object* v___y_5686_; lean_object* v___x_5687_; lean_object* v___x_5688_; uint8_t v___x_5689_; 
v_a_5683_ = lean_ctor_get(v___x_5682_, 0);
lean_inc(v_a_5683_);
lean_dec_ref_known(v___x_5682_, 1);
v___x_5684_ = lean_box(0);
v___x_5687_ = lean_unsigned_to_nat(0u);
v___x_5688_ = lean_array_get_size(v_a_5683_);
v___x_5689_ = lean_nat_dec_lt(v___x_5687_, v___x_5688_);
if (v___x_5689_ == 0)
{
lean_dec(v_a_5683_);
v_a_5674_ = v___x_5684_;
goto v___jp_5673_;
}
else
{
uint8_t v___x_5690_; 
v___x_5690_ = lean_nat_dec_le(v___x_5688_, v___x_5688_);
if (v___x_5690_ == 0)
{
if (v___x_5689_ == 0)
{
lean_dec(v_a_5683_);
v_a_5674_ = v___x_5684_;
goto v___jp_5673_;
}
else
{
size_t v___x_5691_; size_t v___x_5692_; lean_object* v___x_5693_; 
v___x_5691_ = ((size_t)0ULL);
v___x_5692_ = lean_usize_of_nat(v___x_5688_);
v___x_5693_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__1(v_a_5683_, v___x_5691_, v___x_5692_, v___x_5684_, v___y_5670_, v___y_5671_);
lean_dec(v_a_5683_);
v___y_5686_ = v___x_5693_;
goto v___jp_5685_;
}
}
else
{
size_t v___x_5694_; size_t v___x_5695_; lean_object* v___x_5696_; 
v___x_5694_ = ((size_t)0ULL);
v___x_5695_ = lean_usize_of_nat(v___x_5688_);
v___x_5696_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__1(v_a_5683_, v___x_5694_, v___x_5695_, v___x_5684_, v___y_5670_, v___y_5671_);
lean_dec(v_a_5683_);
v___y_5686_ = v___x_5696_;
goto v___jp_5685_;
}
}
v___jp_5685_:
{
if (lean_obj_tag(v___y_5686_) == 0)
{
lean_dec_ref_known(v___y_5686_, 1);
v_a_5674_ = v___x_5684_;
goto v___jp_5673_;
}
else
{
return v___y_5686_;
}
}
}
else
{
lean_object* v_a_5697_; lean_object* v___x_5699_; uint8_t v_isShared_5700_; uint8_t v_isSharedCheck_5704_; 
v_a_5697_ = lean_ctor_get(v___x_5682_, 0);
v_isSharedCheck_5704_ = !lean_is_exclusive(v___x_5682_);
if (v_isSharedCheck_5704_ == 0)
{
v___x_5699_ = v___x_5682_;
v_isShared_5700_ = v_isSharedCheck_5704_;
goto v_resetjp_5698_;
}
else
{
lean_inc(v_a_5697_);
lean_dec(v___x_5682_);
v___x_5699_ = lean_box(0);
v_isShared_5700_ = v_isSharedCheck_5704_;
goto v_resetjp_5698_;
}
v_resetjp_5698_:
{
lean_object* v___x_5702_; 
if (v_isShared_5700_ == 0)
{
v___x_5702_ = v___x_5699_;
goto v_reusejp_5701_;
}
else
{
lean_object* v_reuseFailAlloc_5703_; 
v_reuseFailAlloc_5703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5703_, 0, v_a_5697_);
v___x_5702_ = v_reuseFailAlloc_5703_;
goto v_reusejp_5701_;
}
v_reusejp_5701_:
{
return v___x_5702_;
}
}
}
}
v___jp_5673_:
{
size_t v___x_5675_; size_t v___x_5676_; 
v___x_5675_ = ((size_t)1ULL);
v___x_5676_ = lean_usize_add(v_i_5668_, v___x_5675_);
v_i_5668_ = v___x_5676_;
v_b_5669_ = v_a_5674_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_spec__0___boxed(lean_object* v_as_5705_, lean_object* v_sz_5706_, lean_object* v_i_5707_, lean_object* v_b_5708_, lean_object* v___y_5709_, lean_object* v___y_5710_, lean_object* v___y_5711_){
_start:
{
size_t v_sz_boxed_5712_; size_t v_i_boxed_5713_; lean_object* v_res_5714_; 
v_sz_boxed_5712_ = lean_unbox_usize(v_sz_5706_);
lean_dec(v_sz_5706_);
v_i_boxed_5713_ = lean_unbox_usize(v_i_5707_);
lean_dec(v_i_5707_);
v_res_5714_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_spec__0(v_as_5705_, v_sz_boxed_5712_, v_i_boxed_5713_, v_b_5708_, v___y_5709_, v___y_5710_);
lean_dec(v___y_5710_);
lean_dec_ref(v___y_5709_);
lean_dec_ref(v_as_5705_);
return v_res_5714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler(lean_object* v_declNames_5715_, lean_object* v_a_5716_, lean_object* v_a_5717_){
_start:
{
lean_object* v___x_5719_; lean_object* v___x_5720_; uint8_t v___x_5721_; uint8_t v_a_5723_; lean_object* v___y_5748_; 
v___x_5719_ = lean_unsigned_to_nat(0u);
v___x_5720_ = lean_array_get_size(v_declNames_5715_);
v___x_5721_ = lean_nat_dec_lt(v___x_5719_, v___x_5720_);
if (v___x_5721_ == 0)
{
lean_object* v___x_5752_; 
v___x_5752_ = l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lam__0(v___x_5721_, v_a_5716_, v_a_5717_);
v___y_5748_ = v___x_5752_;
goto v___jp_5747_;
}
else
{
if (v___x_5721_ == 0)
{
v_a_5723_ = v___x_5721_;
goto v___jp_5722_;
}
else
{
size_t v___x_5753_; size_t v___x_5754_; lean_object* v___x_5755_; 
v___x_5753_ = ((size_t)0ULL);
v___x_5754_ = lean_usize_of_nat(v___x_5720_);
v___x_5755_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_spec__3(v_declNames_5715_, v___x_5753_, v___x_5754_, v_a_5716_, v_a_5717_);
if (lean_obj_tag(v___x_5755_) == 0)
{
lean_object* v_a_5756_; uint8_t v___x_5757_; lean_object* v___x_5758_; 
v_a_5756_ = lean_ctor_get(v___x_5755_, 0);
lean_inc(v_a_5756_);
lean_dec_ref_known(v___x_5755_, 1);
v___x_5757_ = lean_unbox(v_a_5756_);
lean_dec(v_a_5756_);
v___x_5758_ = l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lam__0(v___x_5757_, v_a_5716_, v_a_5717_);
v___y_5748_ = v___x_5758_;
goto v___jp_5747_;
}
else
{
v___y_5748_ = v___x_5755_;
goto v___jp_5747_;
}
}
}
v___jp_5722_:
{
if (v___x_5721_ == 0)
{
lean_object* v___x_5724_; lean_object* v___x_5725_; 
v___x_5724_ = lean_box(v___x_5721_);
v___x_5725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5725_, 0, v___x_5724_);
return v___x_5725_;
}
else
{
lean_object* v___x_5726_; size_t v_sz_5727_; size_t v___x_5728_; lean_object* v___x_5729_; 
v___x_5726_ = lean_box(0);
v_sz_5727_ = lean_array_size(v_declNames_5715_);
v___x_5728_ = ((size_t)0ULL);
v___x_5729_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_spec__0(v_declNames_5715_, v_sz_5727_, v___x_5728_, v___x_5726_, v_a_5716_, v_a_5717_);
if (lean_obj_tag(v___x_5729_) == 0)
{
lean_object* v___x_5731_; uint8_t v_isShared_5732_; uint8_t v_isSharedCheck_5737_; 
v_isSharedCheck_5737_ = !lean_is_exclusive(v___x_5729_);
if (v_isSharedCheck_5737_ == 0)
{
lean_object* v_unused_5738_; 
v_unused_5738_ = lean_ctor_get(v___x_5729_, 0);
lean_dec(v_unused_5738_);
v___x_5731_ = v___x_5729_;
v_isShared_5732_ = v_isSharedCheck_5737_;
goto v_resetjp_5730_;
}
else
{
lean_dec(v___x_5729_);
v___x_5731_ = lean_box(0);
v_isShared_5732_ = v_isSharedCheck_5737_;
goto v_resetjp_5730_;
}
v_resetjp_5730_:
{
lean_object* v___x_5733_; lean_object* v___x_5735_; 
v___x_5733_ = lean_box(v_a_5723_);
if (v_isShared_5732_ == 0)
{
lean_ctor_set(v___x_5731_, 0, v___x_5733_);
v___x_5735_ = v___x_5731_;
goto v_reusejp_5734_;
}
else
{
lean_object* v_reuseFailAlloc_5736_; 
v_reuseFailAlloc_5736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5736_, 0, v___x_5733_);
v___x_5735_ = v_reuseFailAlloc_5736_;
goto v_reusejp_5734_;
}
v_reusejp_5734_:
{
return v___x_5735_;
}
}
}
else
{
lean_object* v_a_5739_; lean_object* v___x_5741_; uint8_t v_isShared_5742_; uint8_t v_isSharedCheck_5746_; 
v_a_5739_ = lean_ctor_get(v___x_5729_, 0);
v_isSharedCheck_5746_ = !lean_is_exclusive(v___x_5729_);
if (v_isSharedCheck_5746_ == 0)
{
v___x_5741_ = v___x_5729_;
v_isShared_5742_ = v_isSharedCheck_5746_;
goto v_resetjp_5740_;
}
else
{
lean_inc(v_a_5739_);
lean_dec(v___x_5729_);
v___x_5741_ = lean_box(0);
v_isShared_5742_ = v_isSharedCheck_5746_;
goto v_resetjp_5740_;
}
v_resetjp_5740_:
{
lean_object* v___x_5744_; 
if (v_isShared_5742_ == 0)
{
v___x_5744_ = v___x_5741_;
goto v_reusejp_5743_;
}
else
{
lean_object* v_reuseFailAlloc_5745_; 
v_reuseFailAlloc_5745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5745_, 0, v_a_5739_);
v___x_5744_ = v_reuseFailAlloc_5745_;
goto v_reusejp_5743_;
}
v_reusejp_5743_:
{
return v___x_5744_;
}
}
}
}
}
v___jp_5747_:
{
if (lean_obj_tag(v___y_5748_) == 0)
{
lean_object* v_a_5749_; uint8_t v___x_5750_; 
v_a_5749_ = lean_ctor_get(v___y_5748_, 0);
v___x_5750_ = lean_unbox(v_a_5749_);
if (v___x_5750_ == 0)
{
return v___y_5748_;
}
else
{
uint8_t v___x_5751_; 
lean_inc(v_a_5749_);
lean_dec_ref_known(v___y_5748_, 1);
v___x_5751_ = lean_unbox(v_a_5749_);
lean_dec(v_a_5749_);
v_a_5723_ = v___x_5751_;
goto v___jp_5722_;
}
}
else
{
return v___y_5748_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___boxed(lean_object* v_declNames_5759_, lean_object* v_a_5760_, lean_object* v_a_5761_, lean_object* v_a_5762_){
_start:
{
lean_object* v_res_5763_; 
v_res_5763_ = l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler(v_declNames_5759_, v_a_5760_, v_a_5761_);
lean_dec(v_a_5761_);
lean_dec_ref(v_a_5760_);
lean_dec_ref(v_declNames_5759_);
return v_res_5763_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__21_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5817_; lean_object* v___x_5818_; lean_object* v___x_5819_; 
v___x_5817_ = lean_unsigned_to_nat(2304768170u);
v___x_5818_ = ((lean_object*)(l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__20_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_));
v___x_5819_ = l_Lean_Name_num___override(v___x_5818_, v___x_5817_);
return v___x_5819_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__23_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5821_; lean_object* v___x_5822_; lean_object* v___x_5823_; 
v___x_5821_ = ((lean_object*)(l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__22_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_));
v___x_5822_ = lean_obj_once(&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__21_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__21_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__21_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_);
v___x_5823_ = l_Lean_Name_str___override(v___x_5822_, v___x_5821_);
return v___x_5823_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__25_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5825_; lean_object* v___x_5826_; lean_object* v___x_5827_; 
v___x_5825_ = ((lean_object*)(l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__24_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_));
v___x_5826_ = lean_obj_once(&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__23_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__23_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__23_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_);
v___x_5827_ = l_Lean_Name_str___override(v___x_5826_, v___x_5825_);
return v___x_5827_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__26_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5828_; lean_object* v___x_5829_; lean_object* v___x_5830_; 
v___x_5828_ = lean_unsigned_to_nat(2u);
v___x_5829_ = lean_obj_once(&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__25_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__25_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__25_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_);
v___x_5830_ = l_Lean_Name_num___override(v___x_5829_, v___x_5828_);
return v___x_5830_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5832_; lean_object* v___x_5833_; lean_object* v___x_5834_; 
v___x_5832_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonHeader___closed__2));
v___x_5833_ = ((lean_object*)(l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__0_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_));
v___x_5834_ = l_Lean_Elab_registerDerivingHandler(v___x_5832_, v___x_5833_);
if (lean_obj_tag(v___x_5834_) == 0)
{
lean_object* v___x_5835_; lean_object* v___x_5836_; lean_object* v___x_5837_; 
lean_dec_ref_known(v___x_5834_, 1);
v___x_5835_ = ((lean_object*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonHeader___closed__1));
v___x_5836_ = ((lean_object*)(l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__1_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_));
v___x_5837_ = l_Lean_Elab_registerDerivingHandler(v___x_5835_, v___x_5836_);
if (lean_obj_tag(v___x_5837_) == 0)
{
lean_object* v___x_5838_; uint8_t v___x_5839_; lean_object* v___x_5840_; lean_object* v___x_5841_; 
lean_dec_ref_known(v___x_5837_, 1);
v___x_5838_ = ((lean_object*)(l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkToJsonInstance___closed__0));
v___x_5839_ = 0;
v___x_5840_ = lean_obj_once(&l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__26_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_, &l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__26_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn___closed__26_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_);
v___x_5841_ = l_Lean_registerTraceClass(v___x_5838_, v___x_5839_, v___x_5840_);
if (lean_obj_tag(v___x_5841_) == 0)
{
lean_object* v___x_5842_; lean_object* v___x_5843_; 
lean_dec_ref_known(v___x_5841_, 1);
v___x_5842_ = ((lean_object*)(l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_mkFromJsonInstance___closed__1));
v___x_5843_ = l_Lean_registerTraceClass(v___x_5842_, v___x_5839_, v___x_5840_);
return v___x_5843_;
}
else
{
return v___x_5841_;
}
}
else
{
return v___x_5837_;
}
}
else
{
return v___x_5834_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2____boxed(lean_object* v_a_5844_){
_start:
{
lean_object* v_res_5845_; 
v_res_5845_ = l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_();
return v_res_5845_;
}
}
lean_object* runtime_initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Deriving_Util(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Deriving_FromToJson(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Deriving_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Deriving_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_initFn_00___x40_Lean_Elab_Deriving_FromToJson_2304768170____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Deriving_FromToJson(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Deriving_Util(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Deriving_FromToJson(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Deriving_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Deriving_FromToJson(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Deriving_FromToJson(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Deriving_FromToJson(builtin);
}
#ifdef __cplusplus
}
#endif
