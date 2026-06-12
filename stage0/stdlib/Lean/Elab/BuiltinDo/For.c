// Lean compiler output
// Module: Lean.Elab.BuiltinDo.For
// Imports: public import Lean.Elab.BuiltinDo.Basic meta import Lean.Parser.Do import Init.Control.Do import Lean.Meta.ProdN
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
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_mkPUnit___redArg(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getLabeledTarget_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getContinueCont___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_continueWithUnit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarFromUserName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_mkMonadApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkSimpleThunk(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_getDoConfigLabel_x3f(lean_object*);
uint8_t l_Lean_Parser_Term_getDoConfigCapture(lean_object*);
lean_object* l_Lean_Macro_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_macroAttribute;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Array_mkArray2___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_Pi_instInhabited___redArg___lam__0(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkProdMkN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_mkPureApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zipIdx___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_mkNone(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkSome(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Meta_getLocalDeclFromUserName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Elab_Term_addTermInfo_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_getDecLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isLevelDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Do_getBreakCont___redArg(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_mkPUnitUnit___redArg(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Do_bindMutVarsFromTuple(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_enterLoopBody___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addLocalVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_mkBindApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Elab_Term_mkInstMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_ensureUnitAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_checkMutVarsForShadowing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_inferControlInfoSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getReturnCont___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
extern lean_object* l_Lean_Elab_Do_doElemElabAttribute;
static const lean_string_object l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__1_spec__1___closed__0 = (const lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__1_spec__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__1_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__1_spec__1___closed__1 = (const lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__1_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "explicit"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__2_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Std.toStream"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__3_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__4;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__5_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "toStream"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__6 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__6_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__7_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(165, 78, 6, 120, 105, 250, 102, 183)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__7_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ToStream"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__8 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__8_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__9_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(131, 221, 81, 225, 58, 10, 156, 107)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__9_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(10, 224, 141, 229, 184, 244, 208, 180)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__9 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__9_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__10 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__10_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__11 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__11_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__12 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__12_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__13 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__13_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__14 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__14_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__15 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__15_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "__s"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__16 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__16_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(222, 33, 185, 180, 14, 135, 99, 223)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__17 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__17_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__18 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__18_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doLet"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__19 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__19_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "let"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__20 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__20_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mut"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__21 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__21_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__22 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__22_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__23;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__24 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__24_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letIdDecl"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__25 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__25_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "letId"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__26 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__26_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__27 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__27_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__28 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__28_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doMatch"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__29 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__29_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__30 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__30_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchDiscr"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__31 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__31_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Std.Stream.next\?"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__32 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__32_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__33;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Stream"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__34 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__34_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "next\?"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__35 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__35_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__36_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__36_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(131, 33, 225, 197, 4, 77, 215, 237)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__36_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(223, 69, 181, 194, 149, 37, 29, 54)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__36 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__36_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__36_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__37 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__37_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__37_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__38 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__38_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__39 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__39_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__40 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__40_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__41 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__41_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__42 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__42_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__43 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__43_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__44;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__43_value),LEAN_SCALAR_PTR_LITERAL(73, 239, 30, 105, 8, 60, 178, 241)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__45 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__45_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__46 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__46_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__46_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__47_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__43_value),LEAN_SCALAR_PTR_LITERAL(149, 114, 34, 228, 75, 195, 143, 131)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__47 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__47_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__47_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__48 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__48_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__48_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__49 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__49_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__50 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__50_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "some"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__51 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__51_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__52;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__51_value),LEAN_SCALAR_PTR_LITERAL(37, 202, 7, 33, 103, 74, 114, 212)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__53 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__53_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__54_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__46_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__54_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__51_value),LEAN_SCALAR_PTR_LITERAL(89, 148, 40, 55, 221, 242, 231, 67)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__54 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__54_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__54_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__55 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__55_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__55_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__56 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__56_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tuple"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__57 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__57_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__58 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__58_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__59 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__59_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__60 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__60_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__60_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__61 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__61_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__62 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__62_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__63;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__64 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__64_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__65 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__65_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__66 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__66_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__67 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__67_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "s'"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__68 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__68_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__69_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__69;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__68_value),LEAN_SCALAR_PTR_LITERAL(203, 110, 194, 112, 150, 40, 11, 92)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__70 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__70_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__71 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__71_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doReassign"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__72 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__72_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "letIdDeclNoBinders"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__73 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__73_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doNested"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__74 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__74_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "do"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__75 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__75_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__76 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__76_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doBreak"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__77 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__77_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "break"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__78 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__78_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 84, .m_capacity = 84, .m_length = 83, .m_data = "`(capture := false)` on a multi-collection `for` requires a `(label := ...)` option"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__79 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__79_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "configItem"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__80 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__80_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "valConfigItem"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__81 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__81_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "label"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__82 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__82_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__83_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__83;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__82_value),LEAN_SCALAR_PTR_LITERAL(16, 195, 177, 11, 70, 212, 216, 195)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__84 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__84_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "The proof annotation here has not been implemented yet."};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__85 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__85_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__2_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doForDecl"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__3_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__4_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__4_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__4_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(149, 147, 251, 147, 43, 72, 7, 132)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__4_value;
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "in"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__1_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__1_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__1_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__74_value),LEAN_SCALAR_PTR_LITERAL(220, 154, 41, 109, 103, 76, 110, 63)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__2_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__2_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__2_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(104, 186, 248, 230, 72, 158, 210, 227)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__3_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__3_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__3_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(93, 115, 138, 230, 225, 195, 43, 46)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__3 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__4_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__4_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__4_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(10, 94, 50, 120, 46, 251, 13, 13)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__4 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__4_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doFor"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__5 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__6_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__6_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__6_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__5_value),LEAN_SCALAR_PTR_LITERAL(164, 12, 178, 2, 144, 97, 71, 235)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__6 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__6_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "for"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__7 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__7_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__8 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__8_value;
static const lean_array_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__9 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__9_value;
static const lean_array_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__10 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__11_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__11_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__11_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__11 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__12_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__12_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__12_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__29_value),LEAN_SCALAR_PTR_LITERAL(29, 50, 175, 23, 122, 111, 148, 60)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__12 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__12_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__13_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__13_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__13_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__31_value),LEAN_SCALAR_PTR_LITERAL(99, 51, 127, 238, 206, 239, 57, 130)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__13 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__14_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__14_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__14_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__14 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__14_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__15_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__15_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__15_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__41_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__15 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__15_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_expandDoFor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Do_expandDoFor___closed__0 = (const lean_object*)&l_Lean_Elab_Do_expandDoFor___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoFor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_expandDoFor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_Do_expandDoFor___closed__1 = (const lean_object*)&l_Lean_Elab_Do_expandDoFor___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoFor(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoFor___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor___regBuiltin_Lean_Elab_Do_expandDoFor__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "expandDoFor"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor___regBuiltin_Lean_Elab_Do_expandDoFor__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor___regBuiltin_Lean_Elab_Do_expandDoFor__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor___regBuiltin_Lean_Elab_Do_expandDoFor__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor___regBuiltin_Lean_Elab_Do_expandDoFor__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor___regBuiltin_Lean_Elab_Do_expandDoFor__1___closed__1_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__64_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor___regBuiltin_Lean_Elab_Do_expandDoFor__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor___regBuiltin_Lean_Elab_Do_expandDoFor__1___closed__1_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__65_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor___regBuiltin_Lean_Elab_Do_expandDoFor__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor___regBuiltin_Lean_Elab_Do_expandDoFor__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor___regBuiltin_Lean_Elab_Do_expandDoFor__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(92, 157, 21, 52, 135, 185, 36, 254)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor___regBuiltin_Lean_Elab_Do_expandDoFor__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor___regBuiltin_Lean_Elab_Do_expandDoFor__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor___regBuiltin_Lean_Elab_Do_expandDoFor__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor___regBuiltin_Lean_Elab_Do_expandDoFor__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_return_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_return_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_return_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_return_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_break_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_break_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_break_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_break_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_continue_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_continue_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_continue_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_continue_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "r"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__0_value),LEAN_SCALAR_PTR_LITERAL(201, 206, 29, 183, 206, 15, 98, 41)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(168, 60, 211, 188, 58, 220, 100, 184)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__2_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Break"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__3 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__3_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "runK"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__4 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__4_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "match_1"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__5 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__3_value),LEAN_SCALAR_PTR_LITERAL(25, 204, 143, 3, 84, 67, 92, 151)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 178, 64, 100, 79, 118, 122, 28)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__5_value),LEAN_SCALAR_PTR_LITERAL(199, 194, 234, 57, 172, 104, 157, 179)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__6 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__6_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Prod"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__7 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__7_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fst"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__8 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__7_value),LEAN_SCALAR_PTR_LITERAL(121, 119, 164, 206, 221, 118, 48, 212)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__8_value),LEAN_SCALAR_PTR_LITERAL(170, 44, 236, 58, 247, 164, 254, 114)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__9 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoFor_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoFor_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoFor_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoFor_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoFor_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoFor_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_elabDoFor_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_elabDoFor_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "__r"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__3___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__3___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(38, 26, 183, 93, 43, 136, 227, 87)}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__3___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__3___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Elab_Do_elabDoFor_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Elab_Do_elabDoFor_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_elabDoFor_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_elabDoFor_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "__b"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___redArg___closed__0_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 78, 75, 70, 81, 218, 223, 182)}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "__c"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__7___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__7___redArg___closed__0_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__7___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(112, 73, 1, 111, 65, 2, 155, 239)}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__7___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__7___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__8___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__9(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoFor_spec__11(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoFor_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoFor_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoFor_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoFor_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoFor_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "done"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Unit"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unit"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(87, 186, 243, 194, 96, 12, 218, 7)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ForInStep"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_elabDoFor_spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_elabDoFor_spec__14___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = "Internal error in the `do` elaborator: unused tunneled jump continuation"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15___closed__0_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15___closed__1;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__1;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__2 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__3 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__4 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__5 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__5_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__6 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__6_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__7 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19_spec__24___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19_spec__24(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19_spec__24___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19___closed__0 = (const lean_object*)&l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__18(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__18___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoFor_spec__17(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoFor_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Early returning "};
static const lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = " but the info said there is no early return"};
static const lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "yield"};
static const lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__4___boxed(lean_object**);
static const lean_ctor_object l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(153, 23, 255, 201, 194, 179, 65, 111)}};
static const lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__5___closed__0 = (const lean_object*)&l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__5___closed__0_value;
static const lean_ctor_object l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___redArg___closed__1_value)}};
static const lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__5___closed__1 = (const lean_object*)&l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__5___closed__1_value;
static const lean_ctor_object l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__5___closed__1_value)}};
static const lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__5___closed__2 = (const lean_object*)&l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__5___closed__2_value;
static const lean_ctor_object l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__5___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__5___boxed__const__1 = (const lean_object*)&l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__5___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__5___boxed(lean_object**);
static const lean_closure_object l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___closed__0 = (const lean_object*)&l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor___lam__3___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Do_elabDoFor___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Membership"};
static const lean_object* l_Lean_Elab_Do_elabDoFor___lam__4___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoFor___lam__4___closed__0_value;
static const lean_string_object l_Lean_Elab_Do_elabDoFor___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mem"};
static const lean_object* l_Lean_Elab_Do_elabDoFor___lam__4___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoFor___lam__4___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoFor___lam__4___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoFor___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(205, 217, 109, 94, 255, 55, 82, 109)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoFor___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoFor___lam__4___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoFor___lam__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(224, 90, 126, 237, 128, 148, 153, 69)}};
static const lean_object* l_Lean_Elab_Do_elabDoFor___lam__4___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoFor___lam__4___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoFor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ForIn"};
static const lean_object* l_Lean_Elab_Do_elabDoFor___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoFor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 152, 230, 155, 97, 233, 45, 158)}};
static const lean_object* l_Lean_Elab_Do_elabDoFor___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoFor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "forIn"};
static const lean_object* l_Lean_Elab_Do_elabDoFor___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoFor___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 152, 230, 155, 97, 233, 45, 158)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoFor___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__2_value),LEAN_SCALAR_PTR_LITERAL(9, 12, 142, 239, 44, 138, 10, 93)}};
static const lean_object* l_Lean_Elab_Do_elabDoFor___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoFor___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoFor___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(205, 217, 109, 94, 255, 55, 82, 109)}};
static const lean_object* l_Lean_Elab_Do_elabDoFor___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__4_value;
static const lean_string_object l_Lean_Elab_Do_elabDoFor___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "d"};
static const lean_object* l_Lean_Elab_Do_elabDoFor___closed__5 = (const lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoFor___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__5_value),LEAN_SCALAR_PTR_LITERAL(48, 234, 148, 175, 115, 149, 2, 231)}};
static const lean_object* l_Lean_Elab_Do_elabDoFor___closed__6 = (const lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__6_value;
static const lean_string_object l_Lean_Elab_Do_elabDoFor___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ForIn'"};
static const lean_object* l_Lean_Elab_Do_elabDoFor___closed__7 = (const lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoFor___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__7_value),LEAN_SCALAR_PTR_LITERAL(75, 251, 229, 162, 252, 35, 196, 120)}};
static const lean_object* l_Lean_Elab_Do_elabDoFor___closed__8 = (const lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__8_value;
static const lean_string_object l_Lean_Elab_Do_elabDoFor___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "forIn'"};
static const lean_object* l_Lean_Elab_Do_elabDoFor___closed__9 = (const lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoFor___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__7_value),LEAN_SCALAR_PTR_LITERAL(75, 251, 229, 162, 252, 35, 196, 120)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoFor___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__10_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__9_value),LEAN_SCALAR_PTR_LITERAL(10, 254, 232, 131, 195, 189, 138, 93)}};
static const lean_object* l_Lean_Elab_Do_elabDoFor___closed__10 = (const lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__10_value;
static const lean_array_object l_Lean_Elab_Do_elabDoFor___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Do_elabDoFor___closed__11 = (const lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__11_value;
static const lean_string_object l_Lean_Elab_Do_elabDoFor___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "α"};
static const lean_object* l_Lean_Elab_Do_elabDoFor___closed__12 = (const lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoFor___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__12_value),LEAN_SCALAR_PTR_LITERAL(102, 24, 27, 80, 217, 159, 184, 13)}};
static const lean_object* l_Lean_Elab_Do_elabDoFor___closed__13 = (const lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__13_value;
static const lean_string_object l_Lean_Elab_Do_elabDoFor___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "ρ"};
static const lean_object* l_Lean_Elab_Do_elabDoFor___closed__14 = (const lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoFor___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__14_value),LEAN_SCALAR_PTR_LITERAL(148, 87, 172, 24, 54, 35, 28, 246)}};
static const lean_object* l_Lean_Elab_Do_elabDoFor___closed__15 = (const lean_object*)&l_Lean_Elab_Do_elabDoFor___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___boxed(lean_object**);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor___regBuiltin_Lean_Elab_Do_elabDoFor__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "elabDoFor"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor___regBuiltin_Lean_Elab_Do_elabDoFor__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor___regBuiltin_Lean_Elab_Do_elabDoFor__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor___regBuiltin_Lean_Elab_Do_elabDoFor__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor___regBuiltin_Lean_Elab_Do_elabDoFor__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor___regBuiltin_Lean_Elab_Do_elabDoFor__1___closed__1_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__64_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor___regBuiltin_Lean_Elab_Do_elabDoFor__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor___regBuiltin_Lean_Elab_Do_elabDoFor__1___closed__1_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__65_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor___regBuiltin_Lean_Elab_Do_elabDoFor__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor___regBuiltin_Lean_Elab_Do_elabDoFor__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor___regBuiltin_Lean_Elab_Do_elabDoFor__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(41, 135, 12, 29, 130, 81, 226, 183)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor___regBuiltin_Lean_Elab_Do_elabDoFor__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor___regBuiltin_Lean_Elab_Do_elabDoFor__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor___regBuiltin_Lean_Elab_Do_elabDoFor__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor___regBuiltin_Lean_Elab_Do_elabDoFor__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__1_spec__1(lean_object* v___y_4_, lean_object* v___y_5_){
_start:
{
lean_object* v_macroScope_6_; lean_object* v_traceMsgs_7_; lean_object* v_expandedMacroDecls_8_; lean_object* v___x_10_; uint8_t v_isShared_11_; uint8_t v_isSharedCheck_21_; 
v_macroScope_6_ = lean_ctor_get(v___y_5_, 0);
v_traceMsgs_7_ = lean_ctor_get(v___y_5_, 1);
v_expandedMacroDecls_8_ = lean_ctor_get(v___y_5_, 2);
v_isSharedCheck_21_ = !lean_is_exclusive(v___y_5_);
if (v_isSharedCheck_21_ == 0)
{
v___x_10_ = v___y_5_;
v_isShared_11_ = v_isSharedCheck_21_;
goto v_resetjp_9_;
}
else
{
lean_inc(v_expandedMacroDecls_8_);
lean_inc(v_traceMsgs_7_);
lean_inc(v_macroScope_6_);
lean_dec(v___y_5_);
v___x_10_ = lean_box(0);
v_isShared_11_ = v_isSharedCheck_21_;
goto v_resetjp_9_;
}
v_resetjp_9_:
{
lean_object* v_quotContext_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_17_; 
v_quotContext_12_ = lean_ctor_get(v___y_4_, 1);
v___x_13_ = ((lean_object*)(l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__1_spec__1___closed__1));
v___x_14_ = lean_unsigned_to_nat(1u);
v___x_15_ = lean_nat_add(v_macroScope_6_, v___x_14_);
if (v_isShared_11_ == 0)
{
lean_ctor_set(v___x_10_, 0, v___x_15_);
v___x_17_ = v___x_10_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_20_; 
v_reuseFailAlloc_20_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_20_, 0, v___x_15_);
lean_ctor_set(v_reuseFailAlloc_20_, 1, v_traceMsgs_7_);
lean_ctor_set(v_reuseFailAlloc_20_, 2, v_expandedMacroDecls_8_);
v___x_17_ = v_reuseFailAlloc_20_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
lean_object* v___x_18_; lean_object* v___x_19_; 
lean_inc(v_quotContext_12_);
v___x_18_ = l_Lean_addMacroScope(v_quotContext_12_, v___x_13_, v_macroScope_6_);
v___x_19_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_19_, 0, v___x_18_);
lean_ctor_set(v___x_19_, 1, v___x_17_);
return v___x_19_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__1_spec__1___boxed(lean_object* v___y_22_, lean_object* v___y_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__1_spec__1(v___y_22_, v___y_23_);
lean_dec_ref(v___y_22_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__1(lean_object* v_ref_25_, uint8_t v_canonical_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v___x_29_; lean_object* v_a_30_; lean_object* v_a_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_39_; 
v___x_29_ = l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__1_spec__1(v___y_27_, v___y_28_);
v_a_30_ = lean_ctor_get(v___x_29_, 0);
v_a_31_ = lean_ctor_get(v___x_29_, 1);
v_isSharedCheck_39_ = !lean_is_exclusive(v___x_29_);
if (v_isSharedCheck_39_ == 0)
{
v___x_33_ = v___x_29_;
v_isShared_34_ = v_isSharedCheck_39_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_a_31_);
lean_inc(v_a_30_);
lean_dec(v___x_29_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_39_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___x_35_; lean_object* v___x_37_; 
v___x_35_ = l_Lean_mkIdentFrom(v_ref_25_, v_a_30_, v_canonical_26_);
if (v_isShared_34_ == 0)
{
lean_ctor_set(v___x_33_, 0, v___x_35_);
v___x_37_ = v___x_33_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_38_; 
v_reuseFailAlloc_38_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_38_, 0, v___x_35_);
lean_ctor_set(v_reuseFailAlloc_38_, 1, v_a_31_);
v___x_37_ = v_reuseFailAlloc_38_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
return v___x_37_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__1___boxed(lean_object* v_ref_40_, lean_object* v_canonical_41_, lean_object* v___y_42_, lean_object* v___y_43_){
_start:
{
uint8_t v_canonical_boxed_44_; lean_object* v_res_45_; 
v_canonical_boxed_44_ = lean_unbox(v_canonical_41_);
v_res_45_ = l_Lean_Elab_Term_mkFreshIdent___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__1(v_ref_40_, v_canonical_boxed_44_, v___y_42_, v___y_43_);
lean_dec_ref(v___y_42_);
lean_dec(v_ref_40_);
return v_res_45_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__4(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__3));
v___x_51_ = l_String_toRawSubstring_x27(v___x_50_);
return v___x_51_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__23(void){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = l_Array_mkArray0(lean_box(0));
return v___x_81_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__33(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_91_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__32));
v___x_92_ = l_String_toRawSubstring_x27(v___x_91_);
return v___x_92_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__44(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__43));
v___x_111_ = l_String_toRawSubstring_x27(v___x_110_);
return v___x_111_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__52(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__51));
v___x_127_ = l_String_toRawSubstring_x27(v___x_126_);
return v___x_127_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__63(void){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__62));
v___x_147_ = l_String_toRawSubstring_x27(v___x_146_);
return v___x_147_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__69(void){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_153_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__68));
v___x_154_ = l_String_toRawSubstring_x27(v___x_153_);
return v___x_154_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__83(void){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__82));
v___x_170_ = l_String_toRawSubstring_x27(v___x_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1(lean_object* v___x_174_, lean_object* v___x_175_, lean_object* v___x_176_, lean_object* v___x_177_, lean_object* v___x_178_, lean_object* v___x_179_, lean_object* v___f_180_, lean_object* v_fst_181_, lean_object* v_snd_182_, lean_object* v_cfg_183_, lean_object* v_x_184_, lean_object* v_h_x3f_185_, lean_object* v___y_186_, lean_object* v___y_187_){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v_breakStx_191_; lean_object* v___y_192_; lean_object* v_quotContext_193_; lean_object* v_currMacroScope_194_; lean_object* v_ref_195_; lean_object* v___y_196_; lean_object* v___y_412_; lean_object* v___y_413_; lean_object* v___y_431_; 
v___x_188_ = l_Lean_Syntax_getArg(v___x_174_, v___x_175_);
v___x_189_ = l_Lean_Syntax_getArg(v___x_174_, v___x_176_);
if (lean_obj_tag(v_h_x3f_185_) == 1)
{
lean_object* v_val_479_; lean_object* v___x_480_; lean_object* v___x_481_; 
v_val_479_ = lean_ctor_get(v_h_x3f_185_, 0);
v___x_480_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__85));
v___x_481_ = l_Lean_Macro_throwErrorAt___redArg(v_val_479_, v___x_480_, v___y_186_, v___y_187_);
if (lean_obj_tag(v___x_481_) == 0)
{
lean_object* v_a_482_; 
v_a_482_ = lean_ctor_get(v___x_481_, 1);
lean_inc(v_a_482_);
lean_dec_ref_known(v___x_481_, 2);
v___y_431_ = v_a_482_;
goto v___jp_430_;
}
else
{
lean_object* v_a_483_; lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_491_; 
lean_dec(v___x_189_);
lean_dec(v___x_188_);
lean_dec(v_snd_182_);
lean_dec(v_fst_181_);
lean_dec_ref(v___f_180_);
lean_dec_ref(v___x_179_);
lean_dec_ref(v___x_178_);
lean_dec_ref(v___x_177_);
v_a_483_ = lean_ctor_get(v___x_481_, 0);
v_a_484_ = lean_ctor_get(v___x_481_, 1);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_481_);
if (v_isSharedCheck_491_ == 0)
{
v___x_486_ = v___x_481_;
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_inc(v_a_483_);
lean_dec(v___x_481_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_489_; 
if (v_isShared_487_ == 0)
{
v___x_489_ = v___x_486_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_a_483_);
lean_ctor_set(v_reuseFailAlloc_490_, 1, v_a_484_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
}
}
else
{
v___y_431_ = v___y_187_;
goto v___jp_430_;
}
v___jp_190_:
{
lean_object* v_ref_197_; uint8_t v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v_macroScope_220_; lean_object* v_traceMsgs_221_; lean_object* v_expandedMacroDecls_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_410_; 
v_ref_197_ = l_Lean_replaceRef(v___x_189_, v_ref_195_);
v___x_198_ = 0;
v___x_199_ = l_Lean_SourceInfo_fromRef(v_ref_197_, v___x_198_);
lean_dec(v_ref_197_);
v___x_200_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__0));
lean_inc_ref_n(v___x_179_, 3);
lean_inc_ref_n(v___x_178_, 3);
lean_inc_ref_n(v___x_177_, 3);
v___x_201_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_200_);
v___x_202_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__1));
v___x_203_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_202_);
v___x_204_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__2));
lean_inc_n(v___x_199_, 6);
v___x_205_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_205_, 0, v___x_199_);
lean_ctor_set(v___x_205_, 1, v___x_204_);
v___x_206_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__4, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__4_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__4);
v___x_207_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__7));
lean_inc(v_currMacroScope_194_);
lean_inc(v_quotContext_193_);
v___x_208_ = l_Lean_addMacroScope(v_quotContext_193_, v___x_207_, v_currMacroScope_194_);
v___x_209_ = lean_box(0);
v___x_210_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__11));
v___x_211_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_211_, 0, v___x_199_);
lean_ctor_set(v___x_211_, 1, v___x_206_);
lean_ctor_set(v___x_211_, 2, v___x_208_);
lean_ctor_set(v___x_211_, 3, v___x_210_);
lean_inc(v___x_203_);
v___x_212_ = l_Lean_Syntax_node2(v___x_199_, v___x_203_, v___x_205_, v___x_211_);
v___x_213_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__13));
v___x_214_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__14));
v___x_215_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_214_);
v___x_216_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__15));
v___x_217_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_199_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
lean_inc(v___x_215_);
v___x_218_ = l_Lean_Syntax_node1(v___x_199_, v___x_215_, v___x_217_);
lean_inc(v___x_189_);
lean_inc_n(v___x_218_, 2);
v___x_219_ = l_Lean_Syntax_node4(v___x_199_, v___x_213_, v___x_218_, v___x_218_, v___x_218_, v___x_189_);
v_macroScope_220_ = lean_ctor_get(v___y_196_, 0);
v_traceMsgs_221_ = lean_ctor_get(v___y_196_, 1);
v_expandedMacroDecls_222_ = lean_ctor_get(v___y_196_, 2);
v_isSharedCheck_410_ = !lean_is_exclusive(v___y_196_);
if (v_isSharedCheck_410_ == 0)
{
v___x_224_ = v___y_196_;
v_isShared_225_ = v_isSharedCheck_410_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_expandedMacroDecls_222_);
lean_inc(v_traceMsgs_221_);
lean_inc(v_macroScope_220_);
lean_dec(v___y_196_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_410_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___x_226_; lean_object* v___x_228_; 
v___x_226_ = lean_nat_add(v_macroScope_220_, v___x_175_);
if (v_isShared_225_ == 0)
{
lean_ctor_set(v___x_224_, 0, v___x_226_);
v___x_228_ = v___x_224_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v___x_226_);
lean_ctor_set(v_reuseFailAlloc_409_, 1, v_traceMsgs_221_);
lean_ctor_set(v_reuseFailAlloc_409_, 2, v_expandedMacroDecls_222_);
v___x_228_ = v_reuseFailAlloc_409_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
lean_object* v___x_229_; 
lean_inc_ref(v___f_180_);
lean_inc_ref(v___y_192_);
lean_inc(v_ref_195_);
v___x_229_ = lean_apply_3(v___f_180_, v_ref_195_, v___y_192_, v___x_228_);
if (lean_obj_tag(v___x_229_) == 0)
{
lean_object* v_a_230_; lean_object* v_a_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; 
v_a_230_ = lean_ctor_get(v___x_229_, 0);
lean_inc_n(v_a_230_, 9);
v_a_231_ = lean_ctor_get(v___x_229_, 1);
lean_inc(v_a_231_);
lean_dec_ref_known(v___x_229_, 2);
lean_inc(v___x_201_);
v___x_232_ = l_Lean_Syntax_node2(v___x_199_, v___x_201_, v___x_212_, v___x_219_);
v___x_233_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__17));
lean_inc(v_quotContext_193_);
v___x_234_ = l_Lean_addMacroScope(v_quotContext_193_, v___x_233_, v_macroScope_220_);
v___x_235_ = l_Lean_mkIdentFrom(v___x_189_, v___x_234_, v___x_198_);
lean_dec(v___x_189_);
v___x_236_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__18));
lean_inc_ref_n(v___x_179_, 6);
lean_inc_ref_n(v___x_178_, 6);
lean_inc_ref_n(v___x_177_, 6);
v___x_237_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_236_);
v___x_238_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__19));
v___x_239_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_238_);
v___x_240_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__20));
v___x_241_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_241_, 0, v_a_230_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
v___x_242_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__21));
v___x_243_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_243_, 0, v_a_230_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
v___x_244_ = l_Lean_Syntax_node1(v_a_230_, v___x_213_, v___x_243_);
v___x_245_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__22));
v___x_246_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_245_);
v___x_247_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__23, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__23_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__23);
v___x_248_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_248_, 0, v_a_230_);
lean_ctor_set(v___x_248_, 1, v___x_213_);
lean_ctor_set(v___x_248_, 2, v___x_247_);
lean_inc_ref_n(v___x_248_, 3);
v___x_249_ = l_Lean_Syntax_node1(v_a_230_, v___x_246_, v___x_248_);
v___x_250_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__24));
v___x_251_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_250_);
v___x_252_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__25));
v___x_253_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_252_);
v___x_254_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__26));
v___x_255_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_254_);
lean_inc(v___x_235_);
lean_inc(v___x_255_);
v___x_256_ = l_Lean_Syntax_node1(v_a_230_, v___x_255_, v___x_235_);
v___x_257_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__27));
v___x_258_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_258_, 0, v_a_230_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___x_259_ = l_Lean_Syntax_node5(v_a_230_, v___x_253_, v___x_256_, v___x_248_, v___x_248_, v___x_258_, v___x_232_);
lean_inc_ref(v___y_192_);
lean_inc(v_ref_195_);
v___x_260_ = lean_apply_3(v___f_180_, v_ref_195_, v___y_192_, v_a_231_);
if (lean_obj_tag(v___x_260_) == 0)
{
lean_object* v_a_261_; lean_object* v_a_262_; lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_390_; 
v_a_261_ = lean_ctor_get(v___x_260_, 0);
v_a_262_ = lean_ctor_get(v___x_260_, 1);
v_isSharedCheck_390_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_390_ == 0)
{
v___x_264_ = v___x_260_;
v_isShared_265_ = v_isSharedCheck_390_;
goto v_resetjp_263_;
}
else
{
lean_inc(v_a_262_);
lean_inc(v_a_261_);
lean_dec(v___x_260_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_390_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_388_; 
lean_inc_n(v_a_230_, 2);
v___x_266_ = l_Lean_Syntax_node1(v_a_230_, v___x_251_, v___x_259_);
v___x_267_ = l_Lean_Syntax_node4(v_a_230_, v___x_239_, v___x_241_, v___x_244_, v___x_249_, v___x_266_);
lean_inc_n(v___x_237_, 4);
v___x_268_ = l_Lean_Syntax_node2(v_a_230_, v___x_237_, v___x_267_, v___x_248_);
v___x_269_ = lean_array_push(v_fst_181_, v___x_268_);
v___x_270_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__28));
lean_inc_ref_n(v___x_179_, 11);
lean_inc_ref_n(v___x_178_, 11);
lean_inc_ref_n(v___x_177_, 13);
v___x_271_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_270_);
v___x_272_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__29));
v___x_273_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_272_);
v___x_274_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__30));
lean_inc_n(v_a_261_, 53);
v___x_275_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_275_, 0, v_a_261_);
lean_ctor_set(v___x_275_, 1, v___x_274_);
v___x_276_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_276_, 0, v_a_261_);
lean_ctor_set(v___x_276_, 1, v___x_213_);
lean_ctor_set(v___x_276_, 2, v___x_247_);
v___x_277_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__31));
v___x_278_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_277_);
v___x_279_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_279_, 0, v_a_261_);
lean_ctor_set(v___x_279_, 1, v___x_204_);
v___x_280_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__33, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__33_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__33);
v___x_281_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__36));
lean_inc_n(v_currMacroScope_194_, 4);
lean_inc_n(v_quotContext_193_, 4);
v___x_282_ = l_Lean_addMacroScope(v_quotContext_193_, v___x_281_, v_currMacroScope_194_);
v___x_283_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__38));
v___x_284_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_284_, 0, v_a_261_);
lean_ctor_set(v___x_284_, 1, v___x_280_);
lean_ctor_set(v___x_284_, 2, v___x_282_);
lean_ctor_set(v___x_284_, 3, v___x_283_);
v___x_285_ = l_Lean_Syntax_node2(v_a_261_, v___x_203_, v___x_279_, v___x_284_);
v___x_286_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_286_, 0, v_a_261_);
lean_ctor_set(v___x_286_, 1, v___x_216_);
v___x_287_ = l_Lean_Syntax_node1(v_a_261_, v___x_215_, v___x_286_);
lean_inc(v___x_235_);
lean_inc_n(v___x_287_, 2);
v___x_288_ = l_Lean_Syntax_node4(v_a_261_, v___x_213_, v___x_287_, v___x_287_, v___x_287_, v___x_235_);
lean_inc(v___x_201_);
v___x_289_ = l_Lean_Syntax_node2(v_a_261_, v___x_201_, v___x_285_, v___x_288_);
lean_inc_ref_n(v___x_276_, 10);
v___x_290_ = l_Lean_Syntax_node2(v_a_261_, v___x_278_, v___x_276_, v___x_289_);
v___x_291_ = l_Lean_Syntax_node1(v_a_261_, v___x_213_, v___x_290_);
v___x_292_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__39));
v___x_293_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_293_, 0, v_a_261_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
v___x_294_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__40));
v___x_295_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_294_);
v___x_296_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__41));
v___x_297_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_296_);
v___x_298_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__42));
v___x_299_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_299_, 0, v_a_261_);
lean_ctor_set(v___x_299_, 1, v___x_298_);
v___x_300_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__44, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__44_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__44);
v___x_301_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__45));
v___x_302_ = l_Lean_addMacroScope(v_quotContext_193_, v___x_301_, v_currMacroScope_194_);
v___x_303_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__49));
v___x_304_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_304_, 0, v_a_261_);
lean_ctor_set(v___x_304_, 1, v___x_300_);
lean_ctor_set(v___x_304_, 2, v___x_302_);
lean_ctor_set(v___x_304_, 3, v___x_303_);
v___x_305_ = l_Lean_Syntax_node1(v_a_261_, v___x_213_, v___x_304_);
v___x_306_ = l_Lean_Syntax_node1(v_a_261_, v___x_213_, v___x_305_);
v___x_307_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__50));
v___x_308_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_308_, 0, v_a_261_);
lean_ctor_set(v___x_308_, 1, v___x_307_);
v___x_309_ = l_Lean_Syntax_node2(v_a_261_, v___x_237_, v_breakStx_191_, v___x_276_);
v___x_310_ = l_Lean_Syntax_node1(v_a_261_, v___x_213_, v___x_309_);
lean_inc_n(v___x_271_, 2);
v___x_311_ = l_Lean_Syntax_node1(v_a_261_, v___x_271_, v___x_310_);
lean_inc_ref(v___x_308_);
lean_inc_ref(v___x_299_);
lean_inc(v___x_297_);
v___x_312_ = l_Lean_Syntax_node4(v_a_261_, v___x_297_, v___x_299_, v___x_306_, v___x_308_, v___x_311_);
v___x_313_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__52, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__52_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__52);
v___x_314_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__53));
v___x_315_ = l_Lean_addMacroScope(v_quotContext_193_, v___x_314_, v_currMacroScope_194_);
v___x_316_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__56));
v___x_317_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_317_, 0, v_a_261_);
lean_ctor_set(v___x_317_, 1, v___x_313_);
lean_ctor_set(v___x_317_, 2, v___x_315_);
lean_ctor_set(v___x_317_, 3, v___x_316_);
v___x_318_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__57));
v___x_319_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_318_);
v___x_320_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__58));
v___x_321_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_320_);
v___x_322_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__59));
v___x_323_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_323_, 0, v_a_261_);
lean_ctor_set(v___x_323_, 1, v___x_322_);
v___x_324_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__61));
v___x_325_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__63, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__63_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__63);
v___x_326_ = lean_box(0);
v___x_327_ = l_Lean_addMacroScope(v_quotContext_193_, v___x_326_, v_currMacroScope_194_);
v___x_328_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__64));
v___x_329_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__65));
v___x_330_ = l_Lean_Name_mkStr3(v___x_177_, v___x_328_, v___x_329_);
v___x_331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_331_, 0, v___x_330_);
v___x_332_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__66));
v___x_333_ = l_Lean_Name_mkStr2(v___x_177_, v___x_332_);
v___x_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
v___x_335_ = l_Lean_Name_mkStr3(v___x_177_, v___x_178_, v___x_179_);
v___x_336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
v___x_337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
lean_ctor_set(v___x_337_, 1, v___x_209_);
v___x_338_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_338_, 0, v___x_334_);
lean_ctor_set(v___x_338_, 1, v___x_337_);
v___x_339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_339_, 0, v___x_331_);
lean_ctor_set(v___x_339_, 1, v___x_338_);
v___x_340_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_340_, 0, v_a_261_);
lean_ctor_set(v___x_340_, 1, v___x_325_);
lean_ctor_set(v___x_340_, 2, v___x_327_);
lean_ctor_set(v___x_340_, 3, v___x_339_);
v___x_341_ = l_Lean_Syntax_node1(v_a_261_, v___x_324_, v___x_340_);
v___x_342_ = l_Lean_Syntax_node2(v_a_261_, v___x_321_, v___x_323_, v___x_341_);
v___x_343_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__67));
v___x_344_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_344_, 0, v_a_261_);
lean_ctor_set(v___x_344_, 1, v___x_343_);
v___x_345_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__69, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__69_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__69);
v___x_346_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__70));
v___x_347_ = l_Lean_addMacroScope(v_quotContext_193_, v___x_346_, v_currMacroScope_194_);
v___x_348_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_348_, 0, v_a_261_);
lean_ctor_set(v___x_348_, 1, v___x_345_);
lean_ctor_set(v___x_348_, 2, v___x_347_);
lean_ctor_set(v___x_348_, 3, v___x_209_);
lean_inc_ref(v___x_348_);
v___x_349_ = l_Lean_Syntax_node1(v_a_261_, v___x_213_, v___x_348_);
v___x_350_ = l_Lean_Syntax_node3(v_a_261_, v___x_213_, v___x_188_, v___x_344_, v___x_349_);
v___x_351_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__71));
v___x_352_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_352_, 0, v_a_261_);
lean_ctor_set(v___x_352_, 1, v___x_351_);
v___x_353_ = l_Lean_Syntax_node3(v_a_261_, v___x_319_, v___x_342_, v___x_350_, v___x_352_);
v___x_354_ = l_Lean_Syntax_node1(v_a_261_, v___x_213_, v___x_353_);
v___x_355_ = l_Lean_Syntax_node2(v_a_261_, v___x_201_, v___x_317_, v___x_354_);
v___x_356_ = l_Lean_Syntax_node1(v_a_261_, v___x_213_, v___x_355_);
v___x_357_ = l_Lean_Syntax_node1(v_a_261_, v___x_213_, v___x_356_);
v___x_358_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__72));
v___x_359_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_358_);
v___x_360_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__73));
v___x_361_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_360_);
v___x_362_ = l_Lean_Syntax_node1(v_a_261_, v___x_255_, v___x_235_);
v___x_363_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_363_, 0, v_a_261_);
lean_ctor_set(v___x_363_, 1, v___x_257_);
v___x_364_ = l_Lean_Syntax_node5(v_a_261_, v___x_361_, v___x_362_, v___x_276_, v___x_276_, v___x_363_, v___x_348_);
v___x_365_ = l_Lean_Syntax_node1(v_a_261_, v___x_359_, v___x_364_);
v___x_366_ = l_Lean_Syntax_node2(v_a_261_, v___x_237_, v___x_365_, v___x_276_);
v___x_367_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__74));
v___x_368_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_367_);
v___x_369_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__75));
v___x_370_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_370_, 0, v_a_261_);
lean_ctor_set(v___x_370_, 1, v___x_369_);
v___x_371_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__76));
v___x_372_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_371_);
v___x_373_ = l_Lean_Syntax_node1(v_a_261_, v___x_372_, v___x_276_);
v___x_374_ = l_Lean_Syntax_node3(v_a_261_, v___x_368_, v___x_370_, v___x_373_, v_snd_182_);
v___x_375_ = l_Lean_Syntax_node2(v_a_261_, v___x_237_, v___x_374_, v___x_276_);
v___x_376_ = l_Lean_Syntax_node2(v_a_261_, v___x_213_, v___x_366_, v___x_375_);
v___x_377_ = l_Lean_Syntax_node1(v_a_261_, v___x_271_, v___x_376_);
v___x_378_ = l_Lean_Syntax_node4(v_a_261_, v___x_297_, v___x_299_, v___x_357_, v___x_308_, v___x_377_);
v___x_379_ = l_Lean_Syntax_node2(v_a_261_, v___x_213_, v___x_312_, v___x_378_);
v___x_380_ = l_Lean_Syntax_node1(v_a_261_, v___x_295_, v___x_379_);
v___x_381_ = l_Lean_Syntax_node7(v_a_261_, v___x_273_, v___x_275_, v___x_276_, v___x_276_, v___x_276_, v___x_291_, v___x_293_, v___x_380_);
v___x_382_ = l_Lean_Syntax_node2(v_a_261_, v___x_237_, v___x_381_, v___x_276_);
v___x_383_ = l_Lean_Syntax_node1(v_a_261_, v___x_213_, v___x_382_);
v___x_384_ = l_Lean_Syntax_node1(v_a_261_, v___x_271_, v___x_383_);
v___x_385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_385_, 0, v___x_269_);
lean_ctor_set(v___x_385_, 1, v___x_384_);
v___x_386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_386_, 0, v___x_385_);
if (v_isShared_265_ == 0)
{
lean_ctor_set(v___x_264_, 0, v___x_386_);
v___x_388_ = v___x_264_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v___x_386_);
lean_ctor_set(v_reuseFailAlloc_389_, 1, v_a_262_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
else
{
lean_object* v_a_391_; lean_object* v_a_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_399_; 
lean_dec(v___x_259_);
lean_dec(v___x_255_);
lean_dec(v___x_251_);
lean_dec(v___x_249_);
lean_dec_ref_known(v___x_248_, 3);
lean_dec(v___x_244_);
lean_dec_ref_known(v___x_241_, 2);
lean_dec(v___x_239_);
lean_dec(v___x_237_);
lean_dec(v___x_235_);
lean_dec(v_a_230_);
lean_dec(v___x_215_);
lean_dec(v___x_203_);
lean_dec(v___x_201_);
lean_dec(v_currMacroScope_194_);
lean_dec(v_quotContext_193_);
lean_dec(v_breakStx_191_);
lean_dec(v___x_188_);
lean_dec(v_snd_182_);
lean_dec(v_fst_181_);
lean_dec_ref(v___x_179_);
lean_dec_ref(v___x_178_);
lean_dec_ref(v___x_177_);
v_a_391_ = lean_ctor_get(v___x_260_, 0);
v_a_392_ = lean_ctor_get(v___x_260_, 1);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_399_ == 0)
{
v___x_394_ = v___x_260_;
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_a_392_);
lean_inc(v_a_391_);
lean_dec(v___x_260_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_397_; 
if (v_isShared_395_ == 0)
{
v___x_397_ = v___x_394_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_a_391_);
lean_ctor_set(v_reuseFailAlloc_398_, 1, v_a_392_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
}
}
else
{
lean_object* v_a_400_; lean_object* v_a_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_408_; 
lean_dec(v_macroScope_220_);
lean_dec(v___x_219_);
lean_dec(v___x_215_);
lean_dec(v___x_212_);
lean_dec(v___x_203_);
lean_dec(v___x_201_);
lean_dec(v___x_199_);
lean_dec(v_currMacroScope_194_);
lean_dec(v_quotContext_193_);
lean_dec(v_breakStx_191_);
lean_dec(v___x_189_);
lean_dec(v___x_188_);
lean_dec(v_snd_182_);
lean_dec(v_fst_181_);
lean_dec_ref(v___f_180_);
lean_dec_ref(v___x_179_);
lean_dec_ref(v___x_178_);
lean_dec_ref(v___x_177_);
v_a_400_ = lean_ctor_get(v___x_229_, 0);
v_a_401_ = lean_ctor_get(v___x_229_, 1);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_229_);
if (v_isSharedCheck_408_ == 0)
{
v___x_403_ = v___x_229_;
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_a_401_);
lean_inc(v_a_400_);
lean_dec(v___x_229_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_406_; 
if (v_isShared_404_ == 0)
{
v___x_406_ = v___x_403_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_a_400_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v_a_401_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
}
}
}
v___jp_411_:
{
lean_object* v_quotContext_414_; lean_object* v_currMacroScope_415_; lean_object* v_ref_416_; uint8_t v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v_quotContext_414_ = lean_ctor_get(v___y_412_, 1);
v_currMacroScope_415_ = lean_ctor_get(v___y_412_, 2);
v_ref_416_ = lean_ctor_get(v___y_412_, 5);
v___x_417_ = 0;
v___x_418_ = l_Lean_SourceInfo_fromRef(v_ref_416_, v___x_417_);
v___x_419_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__77));
lean_inc_ref_n(v___x_179_, 2);
lean_inc_ref_n(v___x_178_, 2);
lean_inc_ref_n(v___x_177_, 2);
v___x_420_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_419_);
v___x_421_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__78));
lean_inc_n(v___x_418_, 3);
v___x_422_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_422_, 0, v___x_418_);
lean_ctor_set(v___x_422_, 1, v___x_421_);
v___x_423_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__76));
v___x_424_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_423_);
v___x_425_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__13));
v___x_426_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__23, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__23_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__23);
v___x_427_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_427_, 0, v___x_418_);
lean_ctor_set(v___x_427_, 1, v___x_425_);
lean_ctor_set(v___x_427_, 2, v___x_426_);
v___x_428_ = l_Lean_Syntax_node1(v___x_418_, v___x_424_, v___x_427_);
v___x_429_ = l_Lean_Syntax_node2(v___x_418_, v___x_420_, v___x_422_, v___x_428_);
lean_inc(v_currMacroScope_415_);
lean_inc(v_quotContext_414_);
v_breakStx_191_ = v___x_429_;
v___y_192_ = v___y_412_;
v_quotContext_193_ = v_quotContext_414_;
v_currMacroScope_194_ = v_currMacroScope_415_;
v_ref_195_ = v_ref_416_;
v___y_196_ = v___y_413_;
goto v___jp_190_;
}
v___jp_430_:
{
lean_object* v___x_432_; 
v___x_432_ = l_Lean_Parser_Term_getDoConfigLabel_x3f(v_cfg_183_);
if (lean_obj_tag(v___x_432_) == 0)
{
uint8_t v___x_433_; 
v___x_433_ = l_Lean_Parser_Term_getDoConfigCapture(v_cfg_183_);
if (v___x_433_ == 0)
{
lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_434_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__79));
v___x_435_ = l_Lean_Macro_throwErrorAt___redArg(v_cfg_183_, v___x_434_, v___y_186_, v___y_431_);
if (lean_obj_tag(v___x_435_) == 0)
{
lean_object* v_a_436_; 
v_a_436_ = lean_ctor_get(v___x_435_, 1);
lean_inc(v_a_436_);
lean_dec_ref_known(v___x_435_, 2);
v___y_412_ = v___y_186_;
v___y_413_ = v_a_436_;
goto v___jp_411_;
}
else
{
lean_object* v_a_437_; lean_object* v_a_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_445_; 
lean_dec(v___x_189_);
lean_dec(v___x_188_);
lean_dec(v_snd_182_);
lean_dec(v_fst_181_);
lean_dec_ref(v___f_180_);
lean_dec_ref(v___x_179_);
lean_dec_ref(v___x_178_);
lean_dec_ref(v___x_177_);
v_a_437_ = lean_ctor_get(v___x_435_, 0);
v_a_438_ = lean_ctor_get(v___x_435_, 1);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_445_ == 0)
{
v___x_440_ = v___x_435_;
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_a_438_);
lean_inc(v_a_437_);
lean_dec(v___x_435_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_443_; 
if (v_isShared_441_ == 0)
{
v___x_443_ = v___x_440_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_a_437_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v_a_438_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
}
}
else
{
v___y_412_ = v___y_186_;
v___y_413_ = v___y_431_;
goto v___jp_411_;
}
}
else
{
lean_object* v_val_446_; lean_object* v_quotContext_447_; lean_object* v_currMacroScope_448_; lean_object* v_ref_449_; uint8_t v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v_val_446_ = lean_ctor_get(v___x_432_, 0);
lean_inc(v_val_446_);
lean_dec_ref_known(v___x_432_, 1);
v_quotContext_447_ = lean_ctor_get(v___y_186_, 1);
v_currMacroScope_448_ = lean_ctor_get(v___y_186_, 2);
v_ref_449_ = lean_ctor_get(v___y_186_, 5);
v___x_450_ = 0;
v___x_451_ = l_Lean_SourceInfo_fromRef(v_ref_449_, v___x_450_);
v___x_452_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__77));
lean_inc_ref_n(v___x_179_, 4);
lean_inc_ref_n(v___x_178_, 4);
lean_inc_ref_n(v___x_177_, 4);
v___x_453_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_452_);
v___x_454_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__78));
lean_inc_n(v___x_451_, 9);
v___x_455_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_455_, 0, v___x_451_);
lean_ctor_set(v___x_455_, 1, v___x_454_);
v___x_456_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__76));
v___x_457_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_456_);
v___x_458_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__13));
v___x_459_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__80));
v___x_460_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_459_);
v___x_461_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__81));
v___x_462_ = l_Lean_Name_mkStr4(v___x_177_, v___x_178_, v___x_179_, v___x_461_);
v___x_463_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__59));
v___x_464_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_464_, 0, v___x_451_);
lean_ctor_set(v___x_464_, 1, v___x_463_);
v___x_465_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__83, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__83_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__83);
v___x_466_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__84));
lean_inc_n(v_currMacroScope_448_, 2);
lean_inc_n(v_quotContext_447_, 2);
v___x_467_ = l_Lean_addMacroScope(v_quotContext_447_, v___x_466_, v_currMacroScope_448_);
v___x_468_ = lean_box(0);
v___x_469_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_469_, 0, v___x_451_);
lean_ctor_set(v___x_469_, 1, v___x_465_);
lean_ctor_set(v___x_469_, 2, v___x_467_);
lean_ctor_set(v___x_469_, 3, v___x_468_);
v___x_470_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__27));
v___x_471_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_471_, 0, v___x_451_);
lean_ctor_set(v___x_471_, 1, v___x_470_);
v___x_472_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__71));
v___x_473_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_473_, 0, v___x_451_);
lean_ctor_set(v___x_473_, 1, v___x_472_);
v___x_474_ = l_Lean_Syntax_node5(v___x_451_, v___x_462_, v___x_464_, v___x_469_, v___x_471_, v_val_446_, v___x_473_);
v___x_475_ = l_Lean_Syntax_node1(v___x_451_, v___x_460_, v___x_474_);
v___x_476_ = l_Lean_Syntax_node1(v___x_451_, v___x_458_, v___x_475_);
v___x_477_ = l_Lean_Syntax_node1(v___x_451_, v___x_457_, v___x_476_);
v___x_478_ = l_Lean_Syntax_node2(v___x_451_, v___x_453_, v___x_455_, v___x_477_);
v_breakStx_191_ = v___x_478_;
v___y_192_ = v___y_186_;
v_quotContext_193_ = v_quotContext_447_;
v_currMacroScope_194_ = v_currMacroScope_448_;
v_ref_195_ = v_ref_449_;
v___y_196_ = v___y_431_;
goto v___jp_190_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___boxed(lean_object* v___x_492_, lean_object* v___x_493_, lean_object* v___x_494_, lean_object* v___x_495_, lean_object* v___x_496_, lean_object* v___x_497_, lean_object* v___f_498_, lean_object* v_fst_499_, lean_object* v_snd_500_, lean_object* v_cfg_501_, lean_object* v_x_502_, lean_object* v_h_x3f_503_, lean_object* v___y_504_, lean_object* v___y_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1(v___x_492_, v___x_493_, v___x_494_, v___x_495_, v___x_496_, v___x_497_, v___f_498_, v_fst_499_, v_snd_500_, v_cfg_501_, v_x_502_, v_h_x3f_503_, v___y_504_, v___y_505_);
lean_dec_ref(v___y_504_);
lean_dec(v_h_x3f_503_);
lean_dec(v_cfg_501_);
lean_dec(v___x_494_);
lean_dec(v___x_493_);
lean_dec(v___x_492_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__0(lean_object* v_____do__lift_507_, lean_object* v___y_508_, lean_object* v___y_509_){
_start:
{
uint8_t v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_510_ = 0;
v___x_511_ = l_Lean_SourceInfo_fromRef(v_____do__lift_507_, v___x_510_);
v___x_512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_512_, 0, v___x_511_);
lean_ctor_set(v___x_512_, 1, v___y_509_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__0___boxed(lean_object* v_____do__lift_513_, lean_object* v___y_514_, lean_object* v___y_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__0(v_____do__lift_513_, v___y_514_, v___y_515_);
lean_dec_ref(v___y_514_);
lean_dec(v_____do__lift_513_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg(lean_object* v_cfg_527_, lean_object* v_a_528_, lean_object* v_b_529_, lean_object* v___y_530_, lean_object* v___y_531_){
_start:
{
lean_object* v_array_532_; lean_object* v_start_533_; lean_object* v_stop_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_626_; 
v_array_532_ = lean_ctor_get(v_a_528_, 0);
v_start_533_ = lean_ctor_get(v_a_528_, 1);
v_stop_534_ = lean_ctor_get(v_a_528_, 2);
v_isSharedCheck_626_ = !lean_is_exclusive(v_a_528_);
if (v_isSharedCheck_626_ == 0)
{
v___x_536_ = v_a_528_;
v_isShared_537_ = v_isSharedCheck_626_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_stop_534_);
lean_inc(v_start_533_);
lean_inc(v_array_532_);
lean_dec(v_a_528_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_626_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
uint8_t v___x_538_; 
v___x_538_ = lean_nat_dec_lt(v_start_533_, v_stop_534_);
if (v___x_538_ == 0)
{
lean_object* v___x_539_; 
lean_del_object(v___x_536_);
lean_dec(v_stop_534_);
lean_dec(v_start_533_);
lean_dec_ref(v_array_532_);
v___x_539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_539_, 0, v_b_529_);
lean_ctor_set(v___x_539_, 1, v___y_531_);
return v___x_539_;
}
else
{
lean_object* v_fst_540_; lean_object* v_snd_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_625_; 
v_fst_540_ = lean_ctor_get(v_b_529_, 0);
v_snd_541_ = lean_ctor_get(v_b_529_, 1);
v_isSharedCheck_625_ = !lean_is_exclusive(v_b_529_);
if (v_isSharedCheck_625_ == 0)
{
v___x_543_ = v_b_529_;
v_isShared_544_ = v_isSharedCheck_625_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_snd_541_);
lean_inc(v_fst_540_);
lean_dec(v_b_529_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_625_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_552_; 
v___x_545_ = lean_unsigned_to_nat(1u);
v___x_546_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__0));
v___x_547_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__1));
v___x_548_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__2));
v___x_549_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__4));
v___x_550_ = lean_nat_add(v_start_533_, v___x_545_);
lean_inc_ref(v_array_532_);
if (v_isShared_537_ == 0)
{
lean_ctor_set(v___x_536_, 1, v___x_550_);
v___x_552_ = v___x_536_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_array_532_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v___x_550_);
lean_ctor_set(v_reuseFailAlloc_624_, 2, v_stop_534_);
v___x_552_ = v_reuseFailAlloc_624_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
lean_object* v___y_554_; lean_object* v___x_578_; uint8_t v___x_579_; 
v___x_578_ = lean_array_fget(v_array_532_, v_start_533_);
lean_dec(v_start_533_);
lean_dec_ref(v_array_532_);
lean_inc(v___x_578_);
v___x_579_ = l_Lean_Syntax_isOfKind(v___x_578_, v___x_549_);
if (v___x_579_ == 0)
{
lean_object* v___x_580_; 
lean_dec(v___x_578_);
v___x_580_ = l_Lean_Macro_throwUnsupported___redArg(v___y_531_);
if (lean_obj_tag(v___x_580_) == 0)
{
lean_object* v_a_581_; lean_object* v___x_583_; 
v_a_581_ = lean_ctor_get(v___x_580_, 1);
lean_inc(v_a_581_);
lean_dec_ref_known(v___x_580_, 2);
if (v_isShared_544_ == 0)
{
v___x_583_ = v___x_543_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v_fst_540_);
lean_ctor_set(v_reuseFailAlloc_585_, 1, v_snd_541_);
v___x_583_ = v_reuseFailAlloc_585_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
v_a_528_ = v___x_552_;
v_b_529_ = v___x_583_;
v___y_531_ = v_a_581_;
goto _start;
}
}
else
{
lean_object* v_a_586_; lean_object* v_a_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_594_; 
lean_dec_ref(v___x_552_);
lean_del_object(v___x_543_);
lean_dec(v_snd_541_);
lean_dec(v_fst_540_);
v_a_586_ = lean_ctor_get(v___x_580_, 0);
v_a_587_ = lean_ctor_get(v___x_580_, 1);
v_isSharedCheck_594_ = !lean_is_exclusive(v___x_580_);
if (v_isSharedCheck_594_ == 0)
{
v___x_589_ = v___x_580_;
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_a_587_);
lean_inc(v_a_586_);
lean_dec(v___x_580_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_592_; 
if (v_isShared_590_ == 0)
{
v___x_592_ = v___x_589_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v_a_586_);
lean_ctor_set(v_reuseFailAlloc_593_, 1, v_a_587_);
v___x_592_ = v_reuseFailAlloc_593_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
return v___x_592_;
}
}
}
}
else
{
lean_object* v___f_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; uint8_t v___x_599_; 
v___f_595_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__5));
v___x_596_ = lean_unsigned_to_nat(3u);
v___x_597_ = lean_unsigned_to_nat(0u);
v___x_598_ = l_Lean_Syntax_getArg(v___x_578_, v___x_597_);
v___x_599_ = l_Lean_Syntax_isNone(v___x_598_);
if (v___x_599_ == 0)
{
lean_object* v___x_600_; uint8_t v___x_601_; 
v___x_600_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_598_);
v___x_601_ = l_Lean_Syntax_matchesNull(v___x_598_, v___x_600_);
if (v___x_601_ == 0)
{
lean_object* v___x_602_; 
lean_dec(v___x_598_);
lean_dec(v___x_578_);
v___x_602_ = l_Lean_Macro_throwUnsupported___redArg(v___y_531_);
if (lean_obj_tag(v___x_602_) == 0)
{
lean_object* v_a_603_; lean_object* v___x_605_; 
v_a_603_ = lean_ctor_get(v___x_602_, 1);
lean_inc(v_a_603_);
lean_dec_ref_known(v___x_602_, 2);
if (v_isShared_544_ == 0)
{
v___x_605_ = v___x_543_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_fst_540_);
lean_ctor_set(v_reuseFailAlloc_607_, 1, v_snd_541_);
v___x_605_ = v_reuseFailAlloc_607_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
v_a_528_ = v___x_552_;
v_b_529_ = v___x_605_;
v___y_531_ = v_a_603_;
goto _start;
}
}
else
{
lean_object* v_a_608_; lean_object* v_a_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_616_; 
lean_dec_ref(v___x_552_);
lean_del_object(v___x_543_);
lean_dec(v_snd_541_);
lean_dec(v_fst_540_);
v_a_608_ = lean_ctor_get(v___x_602_, 0);
v_a_609_ = lean_ctor_get(v___x_602_, 1);
v_isSharedCheck_616_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_616_ == 0)
{
v___x_611_ = v___x_602_;
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_a_609_);
lean_inc(v_a_608_);
lean_dec(v___x_602_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_614_; 
if (v_isShared_612_ == 0)
{
v___x_614_ = v___x_611_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v_a_608_);
lean_ctor_set(v_reuseFailAlloc_615_, 1, v_a_609_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
}
}
}
}
else
{
lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
lean_del_object(v___x_543_);
v___x_617_ = l_Lean_Syntax_getArg(v___x_598_, v___x_597_);
lean_dec(v___x_598_);
v___x_618_ = lean_box(0);
v___x_619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_619_, 0, v___x_617_);
v___x_620_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1(v___x_578_, v___x_545_, v___x_596_, v___x_546_, v___x_547_, v___x_548_, v___f_595_, v_fst_540_, v_snd_541_, v_cfg_527_, v___x_618_, v___x_619_, v___y_530_, v___y_531_);
lean_dec_ref_known(v___x_619_, 1);
lean_dec(v___x_578_);
v___y_554_ = v___x_620_;
goto v___jp_553_;
}
}
else
{
lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
lean_dec(v___x_598_);
lean_del_object(v___x_543_);
v___x_621_ = lean_box(0);
v___x_622_ = lean_box(0);
v___x_623_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1(v___x_578_, v___x_545_, v___x_596_, v___x_546_, v___x_547_, v___x_548_, v___f_595_, v_fst_540_, v_snd_541_, v_cfg_527_, v___x_621_, v___x_622_, v___y_530_, v___y_531_);
lean_dec(v___x_578_);
v___y_554_ = v___x_623_;
goto v___jp_553_;
}
}
v___jp_553_:
{
if (lean_obj_tag(v___y_554_) == 0)
{
lean_object* v_a_555_; 
v_a_555_ = lean_ctor_get(v___y_554_, 0);
lean_inc(v_a_555_);
if (lean_obj_tag(v_a_555_) == 0)
{
lean_object* v_a_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_564_; 
lean_dec_ref(v___x_552_);
v_a_556_ = lean_ctor_get(v___y_554_, 1);
v_isSharedCheck_564_ = !lean_is_exclusive(v___y_554_);
if (v_isSharedCheck_564_ == 0)
{
lean_object* v_unused_565_; 
v_unused_565_ = lean_ctor_get(v___y_554_, 0);
lean_dec(v_unused_565_);
v___x_558_ = v___y_554_;
v_isShared_559_ = v_isSharedCheck_564_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_a_556_);
lean_dec(v___y_554_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_564_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v_a_560_; lean_object* v___x_562_; 
v_a_560_ = lean_ctor_get(v_a_555_, 0);
lean_inc(v_a_560_);
lean_dec_ref_known(v_a_555_, 1);
if (v_isShared_559_ == 0)
{
lean_ctor_set(v___x_558_, 0, v_a_560_);
v___x_562_ = v___x_558_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_a_560_);
lean_ctor_set(v_reuseFailAlloc_563_, 1, v_a_556_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
else
{
lean_object* v_a_566_; lean_object* v_a_567_; 
v_a_566_ = lean_ctor_get(v___y_554_, 1);
lean_inc(v_a_566_);
lean_dec_ref_known(v___y_554_, 2);
v_a_567_ = lean_ctor_get(v_a_555_, 0);
lean_inc(v_a_567_);
lean_dec_ref_known(v_a_555_, 1);
v_a_528_ = v___x_552_;
v_b_529_ = v_a_567_;
v___y_531_ = v_a_566_;
goto _start;
}
}
else
{
lean_object* v_a_569_; lean_object* v_a_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_577_; 
lean_dec_ref(v___x_552_);
v_a_569_ = lean_ctor_get(v___y_554_, 0);
v_a_570_ = lean_ctor_get(v___y_554_, 1);
v_isSharedCheck_577_ = !lean_is_exclusive(v___y_554_);
if (v_isSharedCheck_577_ == 0)
{
v___x_572_ = v___y_554_;
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_a_570_);
lean_inc(v_a_569_);
lean_dec(v___y_554_);
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
v_reuseFailAlloc_576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_a_569_);
lean_ctor_set(v_reuseFailAlloc_576_, 1, v_a_570_);
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
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___boxed(lean_object* v_cfg_627_, lean_object* v_a_628_, lean_object* v_b_629_, lean_object* v___y_630_, lean_object* v___y_631_){
_start:
{
lean_object* v_res_632_; 
v_res_632_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg(v_cfg_627_, v_a_628_, v_b_629_, v___y_630_, v___y_631_);
lean_dec_ref(v___y_630_);
lean_dec(v_cfg_627_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand(lean_object* v_tk_691_, lean_object* v_decls_692_, lean_object* v_cfg_693_, lean_object* v_body_694_, lean_object* v_a_695_, lean_object* v_a_696_){
_start:
{
lean_object* v___x_697_; lean_object* v___y_699_; lean_object* v___y_700_; lean_object* v___y_701_; lean_object* v___y_702_; lean_object* v___y_703_; lean_object* v___y_704_; lean_object* v___y_705_; lean_object* v___y_706_; lean_object* v___y_707_; lean_object* v___y_708_; lean_object* v___y_709_; lean_object* v___y_710_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; uint8_t v___x_735_; lean_object* v___y_737_; lean_object* v___y_738_; lean_object* v___y_739_; lean_object* v___y_740_; lean_object* v_x_741_; lean_object* v_body_742_; lean_object* v___y_743_; lean_object* v___y_744_; lean_object* v_h_x3f_784_; lean_object* v___y_785_; lean_object* v___y_786_; 
v___x_697_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__4));
v___x_732_ = lean_box(0);
v___x_733_ = lean_unsigned_to_nat(0u);
v___x_734_ = lean_array_get_borrowed(v___x_732_, v_decls_692_, v___x_733_);
lean_inc(v___x_734_);
v___x_735_ = l_Lean_Syntax_isOfKind(v___x_734_, v___x_697_);
if (v___x_735_ == 0)
{
lean_object* v___x_849_; 
lean_dec(v_body_694_);
lean_dec(v_cfg_693_);
lean_dec_ref(v_decls_692_);
v___x_849_ = l_Lean_Macro_throwUnsupported___redArg(v_a_696_);
return v___x_849_;
}
else
{
lean_object* v___x_850_; uint8_t v___x_851_; 
v___x_850_ = l_Lean_Syntax_getArg(v___x_734_, v___x_733_);
v___x_851_ = l_Lean_Syntax_isNone(v___x_850_);
if (v___x_851_ == 0)
{
lean_object* v___x_852_; uint8_t v___x_853_; 
v___x_852_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_850_);
v___x_853_ = l_Lean_Syntax_matchesNull(v___x_850_, v___x_852_);
if (v___x_853_ == 0)
{
lean_object* v___x_854_; 
lean_dec(v___x_850_);
lean_dec(v_body_694_);
lean_dec(v_cfg_693_);
lean_dec_ref(v_decls_692_);
v___x_854_ = l_Lean_Macro_throwUnsupported___redArg(v_a_696_);
return v___x_854_;
}
else
{
lean_object* v_h_x3f_855_; lean_object* v___x_856_; 
v_h_x3f_855_ = l_Lean_Syntax_getArg(v___x_850_, v___x_733_);
lean_dec(v___x_850_);
v___x_856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_856_, 0, v_h_x3f_855_);
v_h_x3f_784_ = v___x_856_;
v___y_785_ = v_a_695_;
v___y_786_ = v_a_696_;
goto v___jp_783_;
}
}
else
{
lean_object* v___x_857_; 
lean_dec(v___x_850_);
v___x_857_ = lean_box(0);
v_h_x3f_784_ = v___x_857_;
v___y_785_ = v_a_695_;
v___y_786_ = v_a_696_;
goto v___jp_783_;
}
}
v___jp_698_:
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
lean_inc_ref_n(v___y_707_, 3);
v___x_711_ = l_Array_append___redArg(v___y_707_, v___y_710_);
lean_dec_ref(v___y_710_);
lean_inc_n(v___y_709_, 4);
lean_inc_n(v___y_700_, 11);
v___x_712_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_712_, 0, v___y_700_);
lean_ctor_set(v___x_712_, 1, v___y_709_);
lean_ctor_set(v___x_712_, 2, v___x_711_);
v___x_713_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__0));
v___x_714_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_714_, 0, v___y_700_);
lean_ctor_set(v___x_714_, 1, v___x_713_);
v___x_715_ = l_Lean_Syntax_node4(v___y_700_, v___x_697_, v___x_712_, v___y_705_, v___x_714_, v___y_703_);
v___x_716_ = l_Lean_Syntax_node1(v___y_700_, v___y_709_, v___x_715_);
v___x_717_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__75));
v___x_718_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_718_, 0, v___y_700_);
lean_ctor_set(v___x_718_, 1, v___x_717_);
lean_inc_ref(v___x_718_);
lean_inc(v___y_699_);
v___x_719_ = l_Lean_Syntax_node5(v___y_700_, v___y_699_, v___y_704_, v_cfg_693_, v___x_716_, v___x_718_, v___y_706_);
v___x_720_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_720_, 0, v___y_700_);
lean_ctor_set(v___x_720_, 1, v___y_709_);
lean_ctor_set(v___x_720_, 2, v___y_707_);
lean_inc_ref(v___x_720_);
lean_inc(v___y_702_);
v___x_721_ = l_Lean_Syntax_node2(v___y_700_, v___y_702_, v___x_719_, v___x_720_);
v___x_722_ = lean_array_push(v___y_701_, v___x_721_);
v___x_723_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__1));
v___x_724_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__2));
v___x_725_ = l_Lean_Syntax_node1(v___y_700_, v___x_724_, v___x_720_);
v___x_726_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__3));
v___x_727_ = l_Array_append___redArg(v___y_707_, v___x_722_);
lean_dec_ref(v___x_722_);
v___x_728_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_728_, 0, v___y_700_);
lean_ctor_set(v___x_728_, 1, v___y_709_);
lean_ctor_set(v___x_728_, 2, v___x_727_);
v___x_729_ = l_Lean_Syntax_node1(v___y_700_, v___x_726_, v___x_728_);
v___x_730_ = l_Lean_Syntax_node3(v___y_700_, v___x_723_, v___x_718_, v___x_725_, v___x_729_);
v___x_731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_731_, 0, v___x_730_);
lean_ctor_set(v___x_731_, 1, v___y_708_);
return v___x_731_;
}
v___jp_736_:
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v___x_745_ = lean_array_get_size(v_decls_692_);
v___x_746_ = l_Array_toSubarray___redArg(v_decls_692_, v___y_738_, v___x_745_);
lean_inc_ref(v___y_740_);
v___x_747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_747_, 0, v___y_740_);
lean_ctor_set(v___x_747_, 1, v_body_742_);
v___x_748_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg(v_cfg_693_, v___x_746_, v___x_747_, v___y_743_, v___y_744_);
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v_a_750_; lean_object* v_fst_751_; lean_object* v_snd_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_773_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_749_);
v_a_750_ = lean_ctor_get(v___x_748_, 1);
lean_inc(v_a_750_);
lean_dec_ref_known(v___x_748_, 2);
v_fst_751_ = lean_ctor_get(v_a_749_, 0);
v_snd_752_ = lean_ctor_get(v_a_749_, 1);
v_isSharedCheck_773_ = !lean_is_exclusive(v_a_749_);
if (v_isSharedCheck_773_ == 0)
{
v___x_754_ = v_a_749_;
v_isShared_755_ = v_isSharedCheck_773_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_snd_752_);
lean_inc(v_fst_751_);
lean_dec(v_a_749_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_773_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v_ref_756_; uint8_t v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_764_; 
v_ref_756_ = lean_ctor_get(v___y_743_, 5);
v___x_757_ = 0;
v___x_758_ = l_Lean_SourceInfo_fromRef(v_ref_756_, v___x_757_);
v___x_759_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__4));
v___x_760_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__6));
v___x_761_ = l_Lean_SourceInfo_fromRef(v_tk_691_, v___x_735_);
v___x_762_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__7));
if (v_isShared_755_ == 0)
{
lean_ctor_set_tag(v___x_754_, 2);
lean_ctor_set(v___x_754_, 1, v___x_762_);
lean_ctor_set(v___x_754_, 0, v___x_761_);
v___x_764_ = v___x_754_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v___x_761_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v___x_762_);
v___x_764_ = v_reuseFailAlloc_772_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_765_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__13));
v___x_766_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__23, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__23_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__23);
if (lean_obj_tag(v___y_739_) == 1)
{
lean_object* v_val_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v_val_767_ = lean_ctor_get(v___y_739_, 0);
lean_inc(v_val_767_);
lean_dec_ref_known(v___y_739_, 1);
v___x_768_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__8));
lean_inc(v___x_758_);
v___x_769_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_769_, 0, v___x_758_);
lean_ctor_set(v___x_769_, 1, v___x_768_);
v___x_770_ = l_Array_mkArray2___redArg(v_val_767_, v___x_769_);
v___y_699_ = v___x_760_;
v___y_700_ = v___x_758_;
v___y_701_ = v_fst_751_;
v___y_702_ = v___x_759_;
v___y_703_ = v___y_737_;
v___y_704_ = v___x_764_;
v___y_705_ = v_x_741_;
v___y_706_ = v_snd_752_;
v___y_707_ = v___x_766_;
v___y_708_ = v_a_750_;
v___y_709_ = v___x_765_;
v___y_710_ = v___x_770_;
goto v___jp_698_;
}
else
{
lean_object* v___x_771_; 
lean_dec(v___y_739_);
v___x_771_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__9));
v___y_699_ = v___x_760_;
v___y_700_ = v___x_758_;
v___y_701_ = v_fst_751_;
v___y_702_ = v___x_759_;
v___y_703_ = v___y_737_;
v___y_704_ = v___x_764_;
v___y_705_ = v_x_741_;
v___y_706_ = v_snd_752_;
v___y_707_ = v___x_766_;
v___y_708_ = v_a_750_;
v___y_709_ = v___x_765_;
v___y_710_ = v___x_771_;
goto v___jp_698_;
}
}
}
}
else
{
lean_object* v_a_774_; lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
lean_dec(v_x_741_);
lean_dec(v___y_739_);
lean_dec(v___y_737_);
lean_dec(v_cfg_693_);
v_a_774_ = lean_ctor_get(v___x_748_, 0);
v_a_775_ = lean_ctor_get(v___x_748_, 1);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_782_ == 0)
{
v___x_777_ = v___x_748_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_inc(v_a_774_);
lean_dec(v___x_748_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_774_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v_a_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
}
v___jp_783_:
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v_doElems_791_; uint8_t v___x_792_; 
v___x_787_ = lean_unsigned_to_nat(1u);
v___x_788_ = l_Lean_Syntax_getArg(v___x_734_, v___x_787_);
v___x_789_ = lean_unsigned_to_nat(3u);
v___x_790_ = l_Lean_Syntax_getArg(v___x_734_, v___x_789_);
v_doElems_791_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__10));
v___x_792_ = l_Lean_Syntax_isIdent(v___x_788_);
if (v___x_792_ == 0)
{
lean_object* v___x_793_; uint8_t v___x_794_; 
v___x_793_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__11));
lean_inc(v___x_788_);
v___x_794_ = l_Lean_Syntax_isOfKind(v___x_788_, v___x_793_);
if (v___x_794_ == 0)
{
lean_object* v___x_795_; 
v___x_795_ = l_Lean_Elab_Term_mkFreshIdent___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__1(v___x_788_, v___x_794_, v___y_785_, v___y_786_);
if (lean_obj_tag(v___x_795_) == 0)
{
lean_object* v_a_796_; lean_object* v_a_797_; lean_object* v_ref_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v_a_796_ = lean_ctor_get(v___x_795_, 0);
lean_inc_n(v_a_796_, 2);
v_a_797_ = lean_ctor_get(v___x_795_, 1);
lean_inc(v_a_797_);
lean_dec_ref_known(v___x_795_, 2);
v_ref_798_ = lean_ctor_get(v___y_785_, 5);
v___x_799_ = l_Lean_SourceInfo_fromRef(v_ref_798_, v___x_794_);
v___x_800_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__3));
v___x_801_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__13));
v___x_802_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__4));
v___x_803_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__12));
v___x_804_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__30));
lean_inc_n(v___x_799_, 15);
v___x_805_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_805_, 0, v___x_799_);
lean_ctor_set(v___x_805_, 1, v___x_804_);
v___x_806_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__23, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__23_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__23);
v___x_807_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_807_, 0, v___x_799_);
lean_ctor_set(v___x_807_, 1, v___x_801_);
lean_ctor_set(v___x_807_, 2, v___x_806_);
v___x_808_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__13));
lean_inc_ref_n(v___x_807_, 4);
v___x_809_ = l_Lean_Syntax_node2(v___x_799_, v___x_808_, v___x_807_, v_a_796_);
v___x_810_ = l_Lean_Syntax_node1(v___x_799_, v___x_801_, v___x_809_);
v___x_811_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__39));
v___x_812_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_812_, 0, v___x_799_);
lean_ctor_set(v___x_812_, 1, v___x_811_);
v___x_813_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__14));
v___x_814_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__15));
v___x_815_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__42));
v___x_816_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_816_, 0, v___x_799_);
lean_ctor_set(v___x_816_, 1, v___x_815_);
v___x_817_ = l_Lean_Syntax_node1(v___x_799_, v___x_801_, v___x_788_);
v___x_818_ = l_Lean_Syntax_node1(v___x_799_, v___x_801_, v___x_817_);
v___x_819_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__50));
v___x_820_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_820_, 0, v___x_799_);
lean_ctor_set(v___x_820_, 1, v___x_819_);
v___x_821_ = l_Lean_Syntax_node4(v___x_799_, v___x_814_, v___x_816_, v___x_818_, v___x_820_, v_body_694_);
v___x_822_ = l_Lean_Syntax_node1(v___x_799_, v___x_801_, v___x_821_);
v___x_823_ = l_Lean_Syntax_node1(v___x_799_, v___x_813_, v___x_822_);
v___x_824_ = l_Lean_Syntax_node7(v___x_799_, v___x_803_, v___x_805_, v___x_807_, v___x_807_, v___x_807_, v___x_810_, v___x_812_, v___x_823_);
v___x_825_ = l_Lean_Syntax_node2(v___x_799_, v___x_802_, v___x_824_, v___x_807_);
v___x_826_ = l_Lean_Syntax_node1(v___x_799_, v___x_801_, v___x_825_);
v___x_827_ = l_Lean_Syntax_node1(v___x_799_, v___x_800_, v___x_826_);
v___y_737_ = v___x_790_;
v___y_738_ = v___x_787_;
v___y_739_ = v_h_x3f_784_;
v___y_740_ = v_doElems_791_;
v_x_741_ = v_a_796_;
v_body_742_ = v___x_827_;
v___y_743_ = v___y_785_;
v___y_744_ = v_a_797_;
goto v___jp_736_;
}
else
{
lean_object* v_a_828_; lean_object* v_a_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_836_; 
lean_dec(v___x_790_);
lean_dec(v___x_788_);
lean_dec(v_h_x3f_784_);
lean_dec(v_body_694_);
lean_dec(v_cfg_693_);
lean_dec_ref(v_decls_692_);
v_a_828_ = lean_ctor_get(v___x_795_, 0);
v_a_829_ = lean_ctor_get(v___x_795_, 1);
v_isSharedCheck_836_ = !lean_is_exclusive(v___x_795_);
if (v_isSharedCheck_836_ == 0)
{
v___x_831_ = v___x_795_;
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_a_829_);
lean_inc(v_a_828_);
lean_dec(v___x_795_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v___x_834_; 
if (v_isShared_832_ == 0)
{
v___x_834_ = v___x_831_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v_a_828_);
lean_ctor_set(v_reuseFailAlloc_835_, 1, v_a_829_);
v___x_834_ = v_reuseFailAlloc_835_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
return v___x_834_;
}
}
}
}
else
{
lean_object* v___x_837_; 
v___x_837_ = l_Lean_Elab_Term_mkFreshIdent___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__1(v___x_788_, v___x_792_, v___y_785_, v___y_786_);
lean_dec(v___x_788_);
if (lean_obj_tag(v___x_837_) == 0)
{
lean_object* v_a_838_; lean_object* v_a_839_; 
v_a_838_ = lean_ctor_get(v___x_837_, 0);
lean_inc(v_a_838_);
v_a_839_ = lean_ctor_get(v___x_837_, 1);
lean_inc(v_a_839_);
lean_dec_ref_known(v___x_837_, 2);
v___y_737_ = v___x_790_;
v___y_738_ = v___x_787_;
v___y_739_ = v_h_x3f_784_;
v___y_740_ = v_doElems_791_;
v_x_741_ = v_a_838_;
v_body_742_ = v_body_694_;
v___y_743_ = v___y_785_;
v___y_744_ = v_a_839_;
goto v___jp_736_;
}
else
{
lean_object* v_a_840_; lean_object* v_a_841_; lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_848_; 
lean_dec(v___x_790_);
lean_dec(v_h_x3f_784_);
lean_dec(v_body_694_);
lean_dec(v_cfg_693_);
lean_dec_ref(v_decls_692_);
v_a_840_ = lean_ctor_get(v___x_837_, 0);
v_a_841_ = lean_ctor_get(v___x_837_, 1);
v_isSharedCheck_848_ = !lean_is_exclusive(v___x_837_);
if (v_isSharedCheck_848_ == 0)
{
v___x_843_ = v___x_837_;
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
else
{
lean_inc(v_a_841_);
lean_inc(v_a_840_);
lean_dec(v___x_837_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
lean_object* v___x_846_; 
if (v_isShared_844_ == 0)
{
v___x_846_ = v___x_843_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v_a_840_);
lean_ctor_set(v_reuseFailAlloc_847_, 1, v_a_841_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
}
}
else
{
v___y_737_ = v___x_790_;
v___y_738_ = v___x_787_;
v___y_739_ = v_h_x3f_784_;
v___y_740_ = v_doElems_791_;
v_x_741_ = v___x_788_;
v_body_742_ = v_body_694_;
v___y_743_ = v___y_785_;
v___y_744_ = v___y_786_;
goto v___jp_736_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___boxed(lean_object* v_tk_858_, lean_object* v_decls_859_, lean_object* v_cfg_860_, lean_object* v_body_861_, lean_object* v_a_862_, lean_object* v_a_863_){
_start:
{
lean_object* v_res_864_; 
v_res_864_ = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand(v_tk_858_, v_decls_859_, v_cfg_860_, v_body_861_, v_a_862_, v_a_863_);
lean_dec_ref(v_a_862_);
lean_dec(v_tk_858_);
return v_res_864_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0(lean_object* v_cfg_865_, lean_object* v_inst_866_, lean_object* v_R_867_, lean_object* v_a_868_, lean_object* v_b_869_, lean_object* v_c_870_, lean_object* v___y_871_, lean_object* v___y_872_){
_start:
{
lean_object* v___x_873_; 
v___x_873_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg(v_cfg_865_, v_a_868_, v_b_869_, v___y_871_, v___y_872_);
return v___x_873_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___boxed(lean_object* v_cfg_874_, lean_object* v_inst_875_, lean_object* v_R_876_, lean_object* v_a_877_, lean_object* v_b_878_, lean_object* v_c_879_, lean_object* v___y_880_, lean_object* v___y_881_){
_start:
{
lean_object* v_res_882_; 
v_res_882_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0(v_cfg_874_, v_inst_875_, v_R_876_, v_a_877_, v_b_878_, v_c_879_, v___y_880_, v___y_881_);
lean_dec_ref(v___y_880_);
lean_dec(v_cfg_874_);
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoFor(lean_object* v_stx_886_, lean_object* v_a_887_, lean_object* v_a_888_){
_start:
{
lean_object* v___x_889_; uint8_t v___x_890_; 
v___x_889_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__6));
lean_inc(v_stx_886_);
v___x_890_ = l_Lean_Syntax_isOfKind(v_stx_886_, v___x_889_);
if (v___x_890_ == 0)
{
lean_object* v___x_891_; 
lean_dec(v_stx_886_);
v___x_891_ = l_Lean_Macro_throwUnsupported___redArg(v_a_888_);
return v___x_891_;
}
else
{
lean_object* v___x_892_; lean_object* v_cfg_893_; lean_object* v___x_894_; uint8_t v___x_895_; 
v___x_892_ = lean_unsigned_to_nat(1u);
v_cfg_893_ = l_Lean_Syntax_getArg(v_stx_886_, v___x_892_);
v___x_894_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__2));
lean_inc(v_cfg_893_);
v___x_895_ = l_Lean_Syntax_isOfKind(v_cfg_893_, v___x_894_);
if (v___x_895_ == 0)
{
lean_object* v___x_896_; 
lean_dec(v_cfg_893_);
lean_dec(v_stx_886_);
v___x_896_ = l_Lean_Macro_throwUnsupported___redArg(v_a_888_);
return v___x_896_;
}
else
{
lean_object* v___x_897_; lean_object* v_tk_898_; lean_object* v___x_899_; lean_object* v___x_900_; uint8_t v___x_901_; 
v___x_897_ = lean_unsigned_to_nat(0u);
v_tk_898_ = l_Lean_Syntax_getArg(v_stx_886_, v___x_897_);
v___x_899_ = lean_unsigned_to_nat(2u);
v___x_900_ = l_Lean_Syntax_getArg(v_stx_886_, v___x_899_);
lean_inc(v___x_900_);
v___x_901_ = l_Lean_Syntax_matchesNull(v___x_900_, v___x_892_);
if (v___x_901_ == 0)
{
lean_object* v___x_902_; lean_object* v_body_903_; lean_object* v_decls_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_902_ = lean_unsigned_to_nat(4u);
v_body_903_ = l_Lean_Syntax_getArg(v_stx_886_, v___x_902_);
lean_dec(v_stx_886_);
v_decls_904_ = l_Lean_Syntax_getArgs(v___x_900_);
lean_dec(v___x_900_);
v___x_905_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_decls_904_);
lean_dec_ref(v_decls_904_);
v___x_906_ = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand(v_tk_898_, v___x_905_, v_cfg_893_, v_body_903_, v_a_887_, v_a_888_);
lean_dec(v_tk_898_);
return v___x_906_;
}
else
{
lean_object* v___x_907_; lean_object* v___y_909_; lean_object* v___y_910_; lean_object* v___x_920_; uint8_t v___x_921_; 
v___x_907_ = l_Lean_Syntax_getArg(v___x_900_, v___x_897_);
v___x_920_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__4));
lean_inc(v___x_907_);
v___x_921_ = l_Lean_Syntax_isOfKind(v___x_907_, v___x_920_);
if (v___x_921_ == 0)
{
lean_object* v___x_922_; lean_object* v_body_923_; lean_object* v_decls_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
lean_dec(v___x_907_);
v___x_922_ = lean_unsigned_to_nat(4u);
v_body_923_ = l_Lean_Syntax_getArg(v_stx_886_, v___x_922_);
lean_dec(v_stx_886_);
v_decls_924_ = l_Lean_Syntax_getArgs(v___x_900_);
lean_dec(v___x_900_);
v___x_925_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_decls_924_);
lean_dec_ref(v_decls_924_);
v___x_926_ = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand(v_tk_898_, v___x_925_, v_cfg_893_, v_body_923_, v_a_887_, v_a_888_);
lean_dec(v_tk_898_);
return v___x_926_;
}
else
{
lean_object* v___x_927_; uint8_t v___x_928_; 
v___x_927_ = l_Lean_Syntax_getArg(v___x_907_, v___x_897_);
v___x_928_ = l_Lean_Syntax_isNone(v___x_927_);
if (v___x_928_ == 0)
{
uint8_t v___x_929_; 
v___x_929_ = l_Lean_Syntax_matchesNull(v___x_927_, v___x_899_);
if (v___x_929_ == 0)
{
lean_object* v___x_930_; lean_object* v_body_931_; lean_object* v_decls_932_; lean_object* v___x_933_; lean_object* v___x_934_; 
lean_dec(v___x_907_);
v___x_930_ = lean_unsigned_to_nat(4u);
v_body_931_ = l_Lean_Syntax_getArg(v_stx_886_, v___x_930_);
lean_dec(v_stx_886_);
v_decls_932_ = l_Lean_Syntax_getArgs(v___x_900_);
lean_dec(v___x_900_);
v___x_933_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_decls_932_);
lean_dec_ref(v_decls_932_);
v___x_934_ = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand(v_tk_898_, v___x_933_, v_cfg_893_, v_body_931_, v_a_887_, v_a_888_);
lean_dec(v_tk_898_);
return v___x_934_;
}
else
{
v___y_909_ = v_a_887_;
v___y_910_ = v_a_888_;
goto v___jp_908_;
}
}
else
{
lean_dec(v___x_927_);
v___y_909_ = v_a_887_;
v___y_910_ = v_a_888_;
goto v___jp_908_;
}
}
v___jp_908_:
{
lean_object* v___x_911_; lean_object* v___x_912_; uint8_t v___x_913_; 
v___x_911_ = l_Lean_Syntax_getArg(v___x_907_, v___x_892_);
lean_dec(v___x_907_);
v___x_912_ = ((lean_object*)(l_Lean_Elab_Do_expandDoFor___closed__1));
v___x_913_ = l_Lean_Syntax_isOfKind(v___x_911_, v___x_912_);
if (v___x_913_ == 0)
{
lean_object* v___x_914_; lean_object* v_body_915_; lean_object* v_decls_916_; lean_object* v___x_917_; lean_object* v___x_918_; 
v___x_914_ = lean_unsigned_to_nat(4u);
v_body_915_ = l_Lean_Syntax_getArg(v_stx_886_, v___x_914_);
lean_dec(v_stx_886_);
v_decls_916_ = l_Lean_Syntax_getArgs(v___x_900_);
lean_dec(v___x_900_);
v___x_917_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_decls_916_);
lean_dec_ref(v_decls_916_);
v___x_918_ = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand(v_tk_898_, v___x_917_, v_cfg_893_, v_body_915_, v___y_909_, v___y_910_);
lean_dec(v_tk_898_);
return v___x_918_;
}
else
{
lean_object* v___x_919_; 
lean_dec(v___x_900_);
lean_dec(v_tk_898_);
lean_dec(v_cfg_893_);
lean_dec(v_stx_886_);
v___x_919_ = l_Lean_Macro_throwUnsupported___redArg(v___y_910_);
return v___x_919_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoFor___boxed(lean_object* v_stx_935_, lean_object* v_a_936_, lean_object* v_a_937_){
_start:
{
lean_object* v_res_938_; 
v_res_938_ = l_Lean_Elab_Do_expandDoFor(v_stx_935_, v_a_936_, v_a_937_);
lean_dec_ref(v_a_936_);
return v_res_938_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor___regBuiltin_Lean_Elab_Do_expandDoFor__1(){
_start:
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_946_ = l_Lean_Elab_macroAttribute;
v___x_947_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__6));
v___x_948_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor___regBuiltin_Lean_Elab_Do_expandDoFor__1___closed__1));
v___x_949_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_expandDoFor___boxed), 3, 0);
v___x_950_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_946_, v___x_947_, v___x_948_, v___x_949_);
return v___x_950_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor___regBuiltin_Lean_Elab_Do_expandDoFor__1___boxed(lean_object* v_a_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor___regBuiltin_Lean_Elab_Do_expandDoFor__1();
return v_res_952_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_ctorIdx(uint8_t v_x_953_){
_start:
{
switch(v_x_953_)
{
case 0:
{
lean_object* v___x_954_; 
v___x_954_ = lean_unsigned_to_nat(0u);
return v___x_954_;
}
case 1:
{
lean_object* v___x_955_; 
v___x_955_ = lean_unsigned_to_nat(1u);
return v___x_955_;
}
default: 
{
lean_object* v___x_956_; 
v___x_956_ = lean_unsigned_to_nat(2u);
return v___x_956_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_ctorIdx___boxed(lean_object* v_x_957_){
_start:
{
uint8_t v_x_boxed_958_; lean_object* v_res_959_; 
v_x_boxed_958_ = lean_unbox(v_x_957_);
v_res_959_ = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_ctorIdx(v_x_boxed_958_);
return v_res_959_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_toCtorIdx(uint8_t v_x_960_){
_start:
{
lean_object* v___x_961_; 
v___x_961_ = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_ctorIdx(v_x_960_);
return v___x_961_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_toCtorIdx___boxed(lean_object* v_x_962_){
_start:
{
uint8_t v_x_4__boxed_963_; lean_object* v_res_964_; 
v_x_4__boxed_963_ = lean_unbox(v_x_962_);
v_res_964_ = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_toCtorIdx(v_x_4__boxed_963_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_ctorElim___redArg(lean_object* v_k_965_){
_start:
{
lean_inc(v_k_965_);
return v_k_965_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_ctorElim___redArg___boxed(lean_object* v_k_966_){
_start:
{
lean_object* v_res_967_; 
v_res_967_ = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_ctorElim___redArg(v_k_966_);
lean_dec(v_k_966_);
return v_res_967_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_ctorElim(lean_object* v_motive_968_, lean_object* v_ctorIdx_969_, uint8_t v_t_970_, lean_object* v_h_971_, lean_object* v_k_972_){
_start:
{
lean_inc(v_k_972_);
return v_k_972_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_ctorElim___boxed(lean_object* v_motive_973_, lean_object* v_ctorIdx_974_, lean_object* v_t_975_, lean_object* v_h_976_, lean_object* v_k_977_){
_start:
{
uint8_t v_t_boxed_978_; lean_object* v_res_979_; 
v_t_boxed_978_ = lean_unbox(v_t_975_);
v_res_979_ = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_ctorElim(v_motive_973_, v_ctorIdx_974_, v_t_boxed_978_, v_h_976_, v_k_977_);
lean_dec(v_k_977_);
lean_dec(v_ctorIdx_974_);
return v_res_979_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_return_elim___redArg(lean_object* v_return_980_){
_start:
{
lean_inc(v_return_980_);
return v_return_980_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_return_elim___redArg___boxed(lean_object* v_return_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_return_elim___redArg(v_return_981_);
lean_dec(v_return_981_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_return_elim(lean_object* v_motive_983_, uint8_t v_t_984_, lean_object* v_h_985_, lean_object* v_return_986_){
_start:
{
lean_inc(v_return_986_);
return v_return_986_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_return_elim___boxed(lean_object* v_motive_987_, lean_object* v_t_988_, lean_object* v_h_989_, lean_object* v_return_990_){
_start:
{
uint8_t v_t_boxed_991_; lean_object* v_res_992_; 
v_t_boxed_991_ = lean_unbox(v_t_988_);
v_res_992_ = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_return_elim(v_motive_987_, v_t_boxed_991_, v_h_989_, v_return_990_);
lean_dec(v_return_990_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_break_elim___redArg(lean_object* v_break_993_){
_start:
{
lean_inc(v_break_993_);
return v_break_993_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_break_elim___redArg___boxed(lean_object* v_break_994_){
_start:
{
lean_object* v_res_995_; 
v_res_995_ = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_break_elim___redArg(v_break_994_);
lean_dec(v_break_994_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_break_elim(lean_object* v_motive_996_, uint8_t v_t_997_, lean_object* v_h_998_, lean_object* v_break_999_){
_start:
{
lean_inc(v_break_999_);
return v_break_999_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_break_elim___boxed(lean_object* v_motive_1000_, lean_object* v_t_1001_, lean_object* v_h_1002_, lean_object* v_break_1003_){
_start:
{
uint8_t v_t_boxed_1004_; lean_object* v_res_1005_; 
v_t_boxed_1004_ = lean_unbox(v_t_1001_);
v_res_1005_ = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_break_elim(v_motive_1000_, v_t_boxed_1004_, v_h_1002_, v_break_1003_);
lean_dec(v_break_1003_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_continue_elim___redArg(lean_object* v_continue_1006_){
_start:
{
lean_inc(v_continue_1006_);
return v_continue_1006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_continue_elim___redArg___boxed(lean_object* v_continue_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_continue_elim___redArg(v_continue_1007_);
lean_dec(v_continue_1007_);
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_continue_elim(lean_object* v_motive_1009_, uint8_t v_t_1010_, lean_object* v_h_1011_, lean_object* v_continue_1012_){
_start:
{
lean_inc(v_continue_1012_);
return v_continue_1012_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_continue_elim___boxed(lean_object* v_motive_1013_, lean_object* v_t_1014_, lean_object* v_h_1015_, lean_object* v_continue_1016_){
_start:
{
uint8_t v_t_boxed_1017_; lean_object* v_res_1018_; 
v_t_boxed_1017_ = lean_unbox(v_t_1014_);
v_res_1018_ = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_JumpKind_continue_elim(v_motive_1013_, v_t_boxed_1017_, v_h_1015_, v_continue_1016_);
lean_dec(v_continue_1016_);
return v_res_1018_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___lam__0(lean_object* v_afterLoop_1019_, lean_object* v_r_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_){
_start:
{
lean_object* v___x_1029_; 
lean_inc(v___y_1027_);
lean_inc_ref(v___y_1026_);
lean_inc(v___y_1025_);
lean_inc_ref(v___y_1024_);
lean_inc(v___y_1023_);
lean_inc_ref(v___y_1022_);
lean_inc_ref(v___y_1021_);
lean_inc_ref(v_r_1020_);
v___x_1029_ = lean_apply_9(v_afterLoop_1019_, v_r_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_, lean_box(0));
if (lean_obj_tag(v___x_1029_) == 0)
{
lean_object* v_a_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; uint8_t v___x_1034_; uint8_t v___x_1035_; uint8_t v___x_1036_; lean_object* v___x_1037_; 
v_a_1030_ = lean_ctor_get(v___x_1029_, 0);
lean_inc(v_a_1030_);
lean_dec_ref_known(v___x_1029_, 1);
v___x_1031_ = lean_unsigned_to_nat(1u);
v___x_1032_ = lean_mk_empty_array_with_capacity(v___x_1031_);
v___x_1033_ = lean_array_push(v___x_1032_, v_r_1020_);
v___x_1034_ = 0;
v___x_1035_ = 1;
v___x_1036_ = 1;
v___x_1037_ = l_Lean_Meta_mkLambdaFVars(v___x_1033_, v_a_1030_, v___x_1034_, v___x_1035_, v___x_1034_, v___x_1035_, v___x_1036_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_);
lean_dec_ref(v___x_1033_);
return v___x_1037_;
}
else
{
lean_dec_ref(v_r_1020_);
return v___x_1029_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___lam__0___boxed(lean_object* v_afterLoop_1038_, lean_object* v_r_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_){
_start:
{
lean_object* v_res_1048_; 
v_res_1048_ = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___lam__0(v_afterLoop_1038_, v_r_1039_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec(v___y_1044_);
lean_dec_ref(v___y_1043_);
lean_dec(v___y_1042_);
lean_dec_ref(v___y_1041_);
lean_dec_ref(v___y_1040_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___redArg___lam__0(lean_object* v_k_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v_b_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_){
_start:
{
lean_object* v___x_1059_; 
lean_inc(v___y_1057_);
lean_inc_ref(v___y_1056_);
lean_inc(v___y_1055_);
lean_inc_ref(v___y_1054_);
lean_inc(v___y_1052_);
lean_inc_ref(v___y_1051_);
lean_inc_ref(v___y_1050_);
v___x_1059_ = lean_apply_9(v_k_1049_, v_b_1053_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_, lean_box(0));
return v___x_1059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v_b_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_){
_start:
{
lean_object* v_res_1070_; 
v_res_1070_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___redArg___lam__0(v_k_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v_b_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_);
lean_dec(v___y_1068_);
lean_dec_ref(v___y_1067_);
lean_dec(v___y_1066_);
lean_dec_ref(v___y_1065_);
lean_dec(v___y_1063_);
lean_dec_ref(v___y_1062_);
lean_dec_ref(v___y_1061_);
return v_res_1070_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___redArg(lean_object* v_name_1071_, uint8_t v_bi_1072_, lean_object* v_type_1073_, lean_object* v_k_1074_, uint8_t v_kind_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_){
_start:
{
lean_object* v___f_1084_; lean_object* v___x_1085_; 
lean_inc(v___y_1078_);
lean_inc_ref(v___y_1077_);
lean_inc_ref(v___y_1076_);
v___f_1084_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1084_, 0, v_k_1074_);
lean_closure_set(v___f_1084_, 1, v___y_1076_);
lean_closure_set(v___f_1084_, 2, v___y_1077_);
lean_closure_set(v___f_1084_, 3, v___y_1078_);
v___x_1085_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1071_, v_bi_1072_, v_type_1073_, v___f_1084_, v_kind_1075_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_);
if (lean_obj_tag(v___x_1085_) == 0)
{
return v___x_1085_;
}
else
{
lean_object* v_a_1086_; lean_object* v___x_1088_; uint8_t v_isShared_1089_; uint8_t v_isSharedCheck_1093_; 
v_a_1086_ = lean_ctor_get(v___x_1085_, 0);
v_isSharedCheck_1093_ = !lean_is_exclusive(v___x_1085_);
if (v_isSharedCheck_1093_ == 0)
{
v___x_1088_ = v___x_1085_;
v_isShared_1089_ = v_isSharedCheck_1093_;
goto v_resetjp_1087_;
}
else
{
lean_inc(v_a_1086_);
lean_dec(v___x_1085_);
v___x_1088_ = lean_box(0);
v_isShared_1089_ = v_isSharedCheck_1093_;
goto v_resetjp_1087_;
}
v_resetjp_1087_:
{
lean_object* v___x_1091_; 
if (v_isShared_1089_ == 0)
{
v___x_1091_ = v___x_1088_;
goto v_reusejp_1090_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v_a_1086_);
v___x_1091_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
return v___x_1091_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___redArg___boxed(lean_object* v_name_1094_, lean_object* v_bi_1095_, lean_object* v_type_1096_, lean_object* v_k_1097_, lean_object* v_kind_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_){
_start:
{
uint8_t v_bi_boxed_1107_; uint8_t v_kind_boxed_1108_; lean_object* v_res_1109_; 
v_bi_boxed_1107_ = lean_unbox(v_bi_1095_);
v_kind_boxed_1108_ = lean_unbox(v_kind_1098_);
v_res_1109_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___redArg(v_name_1094_, v_bi_boxed_1107_, v_type_1096_, v_k_1097_, v_kind_boxed_1108_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_);
lean_dec(v___y_1105_);
lean_dec_ref(v___y_1104_);
lean_dec(v___y_1103_);
lean_dec_ref(v___y_1102_);
lean_dec(v___y_1101_);
lean_dec_ref(v___y_1100_);
lean_dec_ref(v___y_1099_);
return v_res_1109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0___redArg(lean_object* v_name_1110_, lean_object* v_type_1111_, lean_object* v_k_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_){
_start:
{
uint8_t v___x_1121_; uint8_t v___x_1122_; lean_object* v___x_1123_; 
v___x_1121_ = 0;
v___x_1122_ = 0;
v___x_1123_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___redArg(v_name_1110_, v___x_1121_, v_type_1111_, v_k_1112_, v___x_1122_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_);
return v___x_1123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0___redArg___boxed(lean_object* v_name_1124_, lean_object* v_type_1125_, lean_object* v_k_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_){
_start:
{
lean_object* v_res_1135_; 
v_res_1135_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0___redArg(v_name_1124_, v_type_1125_, v_k_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_);
lean_dec(v___y_1133_);
lean_dec_ref(v___y_1132_);
lean_dec(v___y_1131_);
lean_dec_ref(v___y_1130_);
lean_dec(v___y_1129_);
lean_dec_ref(v___y_1128_);
lean_dec_ref(v___y_1127_);
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch(lean_object* v_dec_1153_, lean_object* v_mi_1154_, lean_object* v_loopMutVars_1155_, lean_object* v_tunnels_1156_, lean_object* v_00_u03b3_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_){
_start:
{
if (lean_obj_tag(v_a_1158_) == 0)
{
lean_object* v___x_1167_; 
lean_dec_ref(v_00_u03b3_1157_);
lean_dec_ref(v_mi_1154_);
v___x_1167_ = l_Lean_Elab_Do_DoElemCont_continueWithUnit(v_dec_1153_, v_a_1159_, v_a_1160_, v_a_1161_, v_a_1162_, v_a_1163_, v_a_1164_, v_a_1165_);
return v___x_1167_;
}
else
{
lean_object* v_head_1168_; lean_object* v_tail_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1244_; 
v_head_1168_ = lean_ctor_get(v_a_1158_, 0);
v_tail_1169_ = lean_ctor_get(v_a_1158_, 1);
v_isSharedCheck_1244_ = !lean_is_exclusive(v_a_1158_);
if (v_isSharedCheck_1244_ == 0)
{
v___x_1171_ = v_a_1158_;
v_isShared_1172_ = v_isSharedCheck_1244_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_tail_1169_);
lean_inc(v_head_1168_);
lean_dec(v_a_1158_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1244_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v_varName_1173_; lean_object* v_payloadType_1174_; lean_object* v_afterLoop_1175_; lean_object* v___x_1176_; 
v_varName_1173_ = lean_ctor_get(v_head_1168_, 1);
lean_inc(v_varName_1173_);
v_payloadType_1174_ = lean_ctor_get(v_head_1168_, 2);
lean_inc_ref(v_payloadType_1174_);
v_afterLoop_1175_ = lean_ctor_get(v_head_1168_, 3);
lean_inc_ref(v_afterLoop_1175_);
lean_dec(v_head_1168_);
v___x_1176_ = l_Lean_Meta_getFVarFromUserName(v_varName_1173_, v_a_1162_, v_a_1163_, v_a_1164_, v_a_1165_);
if (lean_obj_tag(v___x_1176_) == 0)
{
lean_object* v_a_1177_; lean_object* v___f_1178_; lean_object* v_slot_1180_; lean_object* v___y_1181_; lean_object* v___y_1182_; lean_object* v___y_1183_; lean_object* v___y_1184_; lean_object* v___y_1185_; lean_object* v___y_1186_; lean_object* v___y_1187_; uint8_t v___y_1231_; lean_object* v___x_1238_; lean_object* v___x_1239_; uint8_t v___x_1240_; 
v_a_1177_ = lean_ctor_get(v___x_1176_, 0);
lean_inc(v_a_1177_);
lean_dec_ref_known(v___x_1176_, 1);
v___f_1178_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___lam__0___boxed), 10, 1);
lean_closure_set(v___f_1178_, 0, v_afterLoop_1175_);
v___x_1238_ = lean_array_get_size(v_tunnels_1156_);
v___x_1239_ = lean_unsigned_to_nat(1u);
v___x_1240_ = lean_nat_dec_eq(v___x_1238_, v___x_1239_);
if (v___x_1240_ == 0)
{
v___y_1231_ = v___x_1240_;
goto v___jp_1230_;
}
else
{
lean_object* v___x_1241_; lean_object* v___x_1242_; uint8_t v___x_1243_; 
v___x_1241_ = lean_array_get_size(v_loopMutVars_1155_);
v___x_1242_ = lean_unsigned_to_nat(0u);
v___x_1243_ = lean_nat_dec_eq(v___x_1241_, v___x_1242_);
v___y_1231_ = v___x_1243_;
goto v___jp_1230_;
}
v___jp_1179_:
{
lean_object* v___x_1188_; 
lean_inc(v___y_1187_);
lean_inc_ref(v___y_1186_);
lean_inc(v___y_1185_);
lean_inc_ref(v___y_1184_);
lean_inc_ref(v_slot_1180_);
v___x_1188_ = lean_infer_type(v_slot_1180_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_);
if (lean_obj_tag(v___x_1188_) == 0)
{
lean_object* v_a_1189_; lean_object* v___x_1190_; 
v_a_1189_ = lean_ctor_get(v___x_1188_, 0);
lean_inc(v_a_1189_);
lean_dec_ref_known(v___x_1188_, 1);
lean_inc_ref(v_00_u03b3_1157_);
v___x_1190_ = l_Lean_Elab_Do_mkMonadApp(v_00_u03b3_1157_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_);
if (lean_obj_tag(v___x_1190_) == 0)
{
lean_object* v_a_1191_; lean_object* v_u_1192_; lean_object* v_v_1193_; lean_object* v___x_1194_; 
v_a_1191_ = lean_ctor_get(v___x_1190_, 0);
lean_inc(v_a_1191_);
lean_dec_ref_known(v___x_1190_, 1);
v_u_1192_ = lean_ctor_get(v_mi_1154_, 1);
lean_inc(v_u_1192_);
v_v_1193_ = lean_ctor_get(v_mi_1154_, 2);
lean_inc(v_v_1193_);
v___x_1194_ = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch(v_dec_1153_, v_mi_1154_, v_loopMutVars_1155_, v_tunnels_1156_, v_00_u03b3_1157_, v_tail_1169_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_);
if (lean_obj_tag(v___x_1194_) == 0)
{
lean_object* v_a_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; 
v_a_1195_ = lean_ctor_get(v___x_1194_, 0);
lean_inc(v_a_1195_);
lean_dec_ref_known(v___x_1194_, 1);
v___x_1196_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__1));
v___x_1197_ = l_Lean_Core_mkFreshUserName(v___x_1196_, v___y_1186_, v___y_1187_);
if (lean_obj_tag(v___x_1197_) == 0)
{
lean_object* v_a_1198_; lean_object* v___x_1199_; uint8_t v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1206_; 
v_a_1198_ = lean_ctor_get(v___x_1197_, 0);
lean_inc(v_a_1198_);
lean_dec_ref_known(v___x_1197_, 1);
v___x_1199_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__2));
v___x_1200_ = 0;
v___x_1201_ = l_Lean_mkLambda(v___x_1199_, v___x_1200_, v_a_1189_, v_a_1191_);
v___x_1202_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__6));
v___x_1203_ = l_Lean_Level_succ___override(v_v_1193_);
v___x_1204_ = lean_box(0);
if (v_isShared_1172_ == 0)
{
lean_ctor_set(v___x_1171_, 1, v___x_1204_);
lean_ctor_set(v___x_1171_, 0, v___x_1203_);
v___x_1206_ = v___x_1171_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v___x_1203_);
lean_ctor_set(v_reuseFailAlloc_1221_, 1, v___x_1204_);
v___x_1206_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1207_, 0, v_u_1192_);
lean_ctor_set(v___x_1207_, 1, v___x_1206_);
v___x_1208_ = l_Lean_mkConst(v___x_1202_, v___x_1207_);
lean_inc_ref(v_payloadType_1174_);
v___x_1209_ = l_Lean_mkApp3(v___x_1208_, v_payloadType_1174_, v___x_1201_, v_slot_1180_);
v___x_1210_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0___redArg(v_a_1198_, v_payloadType_1174_, v___f_1178_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_);
if (lean_obj_tag(v___x_1210_) == 0)
{
lean_object* v_a_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1220_; 
v_a_1211_ = lean_ctor_get(v___x_1210_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v___x_1210_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1213_ = v___x_1210_;
v_isShared_1214_ = v_isSharedCheck_1220_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_a_1211_);
lean_dec(v___x_1210_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1220_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1218_; 
v___x_1215_ = l_Lean_mkSimpleThunk(v_a_1195_);
v___x_1216_ = l_Lean_mkAppB(v___x_1209_, v_a_1211_, v___x_1215_);
if (v_isShared_1214_ == 0)
{
lean_ctor_set(v___x_1213_, 0, v___x_1216_);
v___x_1218_ = v___x_1213_;
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
}
else
{
lean_dec_ref(v___x_1209_);
lean_dec(v_a_1195_);
return v___x_1210_;
}
}
}
else
{
lean_object* v_a_1222_; lean_object* v___x_1224_; uint8_t v_isShared_1225_; uint8_t v_isSharedCheck_1229_; 
lean_dec(v_a_1195_);
lean_dec(v_v_1193_);
lean_dec(v_u_1192_);
lean_dec(v_a_1191_);
lean_dec(v_a_1189_);
lean_dec_ref(v_slot_1180_);
lean_dec_ref(v___f_1178_);
lean_dec_ref(v_payloadType_1174_);
lean_del_object(v___x_1171_);
v_a_1222_ = lean_ctor_get(v___x_1197_, 0);
v_isSharedCheck_1229_ = !lean_is_exclusive(v___x_1197_);
if (v_isSharedCheck_1229_ == 0)
{
v___x_1224_ = v___x_1197_;
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
else
{
lean_inc(v_a_1222_);
lean_dec(v___x_1197_);
v___x_1224_ = lean_box(0);
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
v_resetjp_1223_:
{
lean_object* v___x_1227_; 
if (v_isShared_1225_ == 0)
{
v___x_1227_ = v___x_1224_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v_a_1222_);
v___x_1227_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
return v___x_1227_;
}
}
}
}
else
{
lean_dec(v_v_1193_);
lean_dec(v_u_1192_);
lean_dec(v_a_1191_);
lean_dec(v_a_1189_);
lean_dec_ref(v_slot_1180_);
lean_dec_ref(v___f_1178_);
lean_dec_ref(v_payloadType_1174_);
lean_del_object(v___x_1171_);
return v___x_1194_;
}
}
else
{
lean_dec(v_a_1189_);
lean_dec_ref(v_slot_1180_);
lean_dec_ref(v___f_1178_);
lean_dec_ref(v_payloadType_1174_);
lean_del_object(v___x_1171_);
lean_dec(v_tail_1169_);
lean_dec_ref(v_00_u03b3_1157_);
lean_dec_ref(v_mi_1154_);
lean_dec_ref(v_dec_1153_);
return v___x_1190_;
}
}
else
{
lean_dec_ref(v_slot_1180_);
lean_dec_ref(v___f_1178_);
lean_dec_ref(v_payloadType_1174_);
lean_del_object(v___x_1171_);
lean_dec(v_tail_1169_);
lean_dec_ref(v_00_u03b3_1157_);
lean_dec_ref(v_mi_1154_);
lean_dec_ref(v_dec_1153_);
return v___x_1188_;
}
}
v___jp_1230_:
{
if (v___y_1231_ == 0)
{
v_slot_1180_ = v_a_1177_;
v___y_1181_ = v_a_1159_;
v___y_1182_ = v_a_1160_;
v___y_1183_ = v_a_1161_;
v___y_1184_ = v_a_1162_;
v___y_1185_ = v_a_1163_;
v___y_1186_ = v_a_1164_;
v___y_1187_ = v_a_1165_;
goto v___jp_1179_;
}
else
{
lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; 
v___x_1232_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___closed__9));
v___x_1233_ = lean_unsigned_to_nat(1u);
v___x_1234_ = lean_mk_empty_array_with_capacity(v___x_1233_);
v___x_1235_ = lean_array_push(v___x_1234_, v_a_1177_);
v___x_1236_ = l_Lean_Meta_mkAppM(v___x_1232_, v___x_1235_, v_a_1162_, v_a_1163_, v_a_1164_, v_a_1165_);
if (lean_obj_tag(v___x_1236_) == 0)
{
lean_object* v_a_1237_; 
v_a_1237_ = lean_ctor_get(v___x_1236_, 0);
lean_inc(v_a_1237_);
lean_dec_ref_known(v___x_1236_, 1);
v_slot_1180_ = v_a_1237_;
v___y_1181_ = v_a_1159_;
v___y_1182_ = v_a_1160_;
v___y_1183_ = v_a_1161_;
v___y_1184_ = v_a_1162_;
v___y_1185_ = v_a_1163_;
v___y_1186_ = v_a_1164_;
v___y_1187_ = v_a_1165_;
goto v___jp_1179_;
}
else
{
lean_dec_ref(v___f_1178_);
lean_dec_ref(v_payloadType_1174_);
lean_del_object(v___x_1171_);
lean_dec(v_tail_1169_);
lean_dec_ref(v_00_u03b3_1157_);
lean_dec_ref(v_mi_1154_);
lean_dec_ref(v_dec_1153_);
return v___x_1236_;
}
}
}
}
else
{
lean_dec_ref(v_afterLoop_1175_);
lean_dec_ref(v_payloadType_1174_);
lean_del_object(v___x_1171_);
lean_dec(v_tail_1169_);
lean_dec_ref(v_00_u03b3_1157_);
lean_dec_ref(v_mi_1154_);
lean_dec_ref(v_dec_1153_);
return v___x_1176_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___boxed(lean_object* v_dec_1245_, lean_object* v_mi_1246_, lean_object* v_loopMutVars_1247_, lean_object* v_tunnels_1248_, lean_object* v_00_u03b3_1249_, lean_object* v_a_1250_, lean_object* v_a_1251_, lean_object* v_a_1252_, lean_object* v_a_1253_, lean_object* v_a_1254_, lean_object* v_a_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_, lean_object* v_a_1258_){
_start:
{
lean_object* v_res_1259_; 
v_res_1259_ = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch(v_dec_1245_, v_mi_1246_, v_loopMutVars_1247_, v_tunnels_1248_, v_00_u03b3_1249_, v_a_1250_, v_a_1251_, v_a_1252_, v_a_1253_, v_a_1254_, v_a_1255_, v_a_1256_, v_a_1257_);
lean_dec(v_a_1257_);
lean_dec_ref(v_a_1256_);
lean_dec(v_a_1255_);
lean_dec_ref(v_a_1254_);
lean_dec(v_a_1253_);
lean_dec_ref(v_a_1252_);
lean_dec_ref(v_a_1251_);
lean_dec_ref(v_tunnels_1248_);
lean_dec_ref(v_loopMutVars_1247_);
return v_res_1259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0(lean_object* v_00_u03b1_1260_, lean_object* v_name_1261_, uint8_t v_bi_1262_, lean_object* v_type_1263_, lean_object* v_k_1264_, uint8_t v_kind_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_){
_start:
{
lean_object* v___x_1274_; 
v___x_1274_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___redArg(v_name_1261_, v_bi_1262_, v_type_1263_, v_k_1264_, v_kind_1265_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_);
return v___x_1274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1275_, lean_object* v_name_1276_, lean_object* v_bi_1277_, lean_object* v_type_1278_, lean_object* v_k_1279_, lean_object* v_kind_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_){
_start:
{
uint8_t v_bi_boxed_1289_; uint8_t v_kind_boxed_1290_; lean_object* v_res_1291_; 
v_bi_boxed_1289_ = lean_unbox(v_bi_1277_);
v_kind_boxed_1290_ = lean_unbox(v_kind_1280_);
v_res_1291_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0(v_00_u03b1_1275_, v_name_1276_, v_bi_boxed_1289_, v_type_1278_, v_k_1279_, v_kind_boxed_1290_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_);
lean_dec(v___y_1287_);
lean_dec_ref(v___y_1286_);
lean_dec(v___y_1285_);
lean_dec_ref(v___y_1284_);
lean_dec(v___y_1283_);
lean_dec_ref(v___y_1282_);
lean_dec_ref(v___y_1281_);
return v_res_1291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0(lean_object* v_00_u03b1_1292_, lean_object* v_name_1293_, lean_object* v_type_1294_, lean_object* v_k_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_){
_start:
{
lean_object* v___x_1304_; 
v___x_1304_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0___redArg(v_name_1293_, v_type_1294_, v_k_1295_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
return v___x_1304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0___boxed(lean_object* v_00_u03b1_1305_, lean_object* v_name_1306_, lean_object* v_type_1307_, lean_object* v_k_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_){
_start:
{
lean_object* v_res_1317_; 
v_res_1317_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0(v_00_u03b1_1305_, v_name_1306_, v_type_1307_, v_k_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
lean_dec(v___y_1315_);
lean_dec_ref(v___y_1314_);
lean_dec(v___y_1313_);
lean_dec_ref(v___y_1312_);
lean_dec(v___y_1311_);
lean_dec_ref(v___y_1310_);
lean_dec_ref(v___y_1309_);
return v_res_1317_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1318_ = lean_box(0);
v___x_1319_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_1320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1319_);
lean_ctor_set(v___x_1320_, 1, v___x_1318_);
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0___redArg(){
_start:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1322_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0___redArg___closed__0);
v___x_1323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1322_);
return v___x_1323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0___redArg___boxed(lean_object* v___y_1324_){
_start:
{
lean_object* v_res_1325_; 
v_res_1325_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0___redArg();
return v_res_1325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0(lean_object* v_00_u03b1_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_){
_start:
{
lean_object* v___x_1335_; 
v___x_1335_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0___redArg();
return v___x_1335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0___boxed(lean_object* v_00_u03b1_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_){
_start:
{
lean_object* v_res_1345_; 
v_res_1345_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0(v_00_u03b1_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_);
lean_dec(v___y_1343_);
lean_dec_ref(v___y_1342_);
lean_dec(v___y_1341_);
lean_dec_ref(v___y_1340_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
lean_dec_ref(v___y_1337_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoFor_spec__1_spec__1(lean_object* v_msgData_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_){
_start:
{
lean_object* v___x_1352_; lean_object* v_env_1353_; lean_object* v___x_1354_; lean_object* v_mctx_1355_; lean_object* v_lctx_1356_; lean_object* v_options_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1352_ = lean_st_ref_get(v___y_1350_);
v_env_1353_ = lean_ctor_get(v___x_1352_, 0);
lean_inc_ref(v_env_1353_);
lean_dec(v___x_1352_);
v___x_1354_ = lean_st_ref_get(v___y_1348_);
v_mctx_1355_ = lean_ctor_get(v___x_1354_, 0);
lean_inc_ref(v_mctx_1355_);
lean_dec(v___x_1354_);
v_lctx_1356_ = lean_ctor_get(v___y_1347_, 2);
v_options_1357_ = lean_ctor_get(v___y_1349_, 2);
lean_inc_ref(v_options_1357_);
lean_inc_ref(v_lctx_1356_);
v___x_1358_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1358_, 0, v_env_1353_);
lean_ctor_set(v___x_1358_, 1, v_mctx_1355_);
lean_ctor_set(v___x_1358_, 2, v_lctx_1356_);
lean_ctor_set(v___x_1358_, 3, v_options_1357_);
v___x_1359_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1359_, 0, v___x_1358_);
lean_ctor_set(v___x_1359_, 1, v_msgData_1346_);
v___x_1360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1360_, 0, v___x_1359_);
return v___x_1360_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoFor_spec__1_spec__1___boxed(lean_object* v_msgData_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_){
_start:
{
lean_object* v_res_1367_; 
v_res_1367_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoFor_spec__1_spec__1(v_msgData_1361_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_);
lean_dec(v___y_1365_);
lean_dec_ref(v___y_1364_);
lean_dec(v___y_1363_);
lean_dec_ref(v___y_1362_);
return v_res_1367_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoFor_spec__1___redArg(lean_object* v_msg_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_){
_start:
{
lean_object* v_ref_1374_; lean_object* v___x_1375_; lean_object* v_a_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1384_; 
v_ref_1374_ = lean_ctor_get(v___y_1371_, 5);
v___x_1375_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoFor_spec__1_spec__1(v_msg_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_);
v_a_1376_ = lean_ctor_get(v___x_1375_, 0);
v_isSharedCheck_1384_ = !lean_is_exclusive(v___x_1375_);
if (v_isSharedCheck_1384_ == 0)
{
v___x_1378_ = v___x_1375_;
v_isShared_1379_ = v_isSharedCheck_1384_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_a_1376_);
lean_dec(v___x_1375_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1384_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
lean_object* v___x_1380_; lean_object* v___x_1382_; 
lean_inc(v_ref_1374_);
v___x_1380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1380_, 0, v_ref_1374_);
lean_ctor_set(v___x_1380_, 1, v_a_1376_);
if (v_isShared_1379_ == 0)
{
lean_ctor_set_tag(v___x_1378_, 1);
lean_ctor_set(v___x_1378_, 0, v___x_1380_);
v___x_1382_ = v___x_1378_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v___x_1380_);
v___x_1382_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
return v___x_1382_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoFor_spec__1___redArg___boxed(lean_object* v_msg_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_){
_start:
{
lean_object* v_res_1391_; 
v_res_1391_ = l_Lean_throwError___at___00Lean_Elab_Do_elabDoFor_spec__1___redArg(v_msg_1385_, v___y_1386_, v___y_1387_, v___y_1388_, v___y_1389_);
lean_dec(v___y_1389_);
lean_dec_ref(v___y_1388_);
lean_dec(v___y_1387_);
lean_dec_ref(v___y_1386_);
return v_res_1391_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoFor_spec__1(lean_object* v_00_u03b1_1392_, lean_object* v_msg_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_){
_start:
{
lean_object* v___x_1402_; 
v___x_1402_ = l_Lean_throwError___at___00Lean_Elab_Do_elabDoFor_spec__1___redArg(v_msg_1393_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_);
return v___x_1402_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoFor_spec__1___boxed(lean_object* v_00_u03b1_1403_, lean_object* v_msg_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_){
_start:
{
lean_object* v_res_1413_; 
v_res_1413_ = l_Lean_throwError___at___00Lean_Elab_Do_elabDoFor_spec__1(v_00_u03b1_1403_, v_msg_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_);
lean_dec(v___y_1411_);
lean_dec_ref(v___y_1410_);
lean_dec(v___y_1409_);
lean_dec_ref(v___y_1408_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
lean_dec_ref(v___y_1405_);
return v_res_1413_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_elabDoFor_spec__2(lean_object* v_init_1414_, lean_object* v_x_1415_){
_start:
{
if (lean_obj_tag(v_x_1415_) == 0)
{
lean_object* v_k_1416_; lean_object* v_v_1417_; lean_object* v_l_1418_; lean_object* v_r_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; 
v_k_1416_ = lean_ctor_get(v_x_1415_, 1);
v_v_1417_ = lean_ctor_get(v_x_1415_, 2);
v_l_1418_ = lean_ctor_get(v_x_1415_, 3);
v_r_1419_ = lean_ctor_get(v_x_1415_, 4);
v___x_1420_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_elabDoFor_spec__2(v_init_1414_, v_r_1419_);
lean_inc(v_v_1417_);
lean_inc(v_k_1416_);
v___x_1421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1421_, 0, v_k_1416_);
lean_ctor_set(v___x_1421_, 1, v_v_1417_);
v___x_1422_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1421_);
lean_ctor_set(v___x_1422_, 1, v___x_1420_);
v_init_1414_ = v___x_1422_;
v_x_1415_ = v_l_1418_;
goto _start;
}
else
{
return v_init_1414_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_elabDoFor_spec__2___boxed(lean_object* v_init_1424_, lean_object* v_x_1425_){
_start:
{
lean_object* v_res_1426_; 
v_res_1426_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_elabDoFor_spec__2(v_init_1424_, v_x_1425_);
lean_dec(v_x_1425_);
return v_res_1426_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__3___redArg(lean_object* v_a_1430_, lean_object* v_as_x27_1431_, lean_object* v_b_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_){
_start:
{
if (lean_obj_tag(v_as_x27_1431_) == 0)
{
lean_object* v___x_1437_; 
lean_dec_ref(v_a_1430_);
v___x_1437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1437_, 0, v_b_1432_);
return v___x_1437_;
}
else
{
lean_object* v_head_1438_; lean_object* v_tail_1439_; lean_object* v_fst_1440_; lean_object* v_val_1442_; lean_object* v___y_1443_; lean_object* v___y_1444_; lean_object* v___x_1462_; uint8_t v___x_1463_; 
v_head_1438_ = lean_ctor_get(v_as_x27_1431_, 0);
v_tail_1439_ = lean_ctor_get(v_as_x27_1431_, 1);
v_fst_1440_ = lean_ctor_get(v_head_1438_, 0);
v___x_1462_ = lean_box(0);
v___x_1463_ = lean_name_eq(v_fst_1440_, v___x_1462_);
if (v___x_1463_ == 0)
{
lean_object* v___x_1464_; 
v___x_1464_ = l_Lean_Elab_Do_getLabeledTarget_x3f___redArg(v_fst_1440_, v___y_1433_);
if (lean_obj_tag(v___x_1464_) == 0)
{
lean_object* v_a_1465_; 
v_a_1465_ = lean_ctor_get(v___x_1464_, 0);
lean_inc(v_a_1465_);
lean_dec_ref_known(v___x_1464_, 1);
if (lean_obj_tag(v_a_1465_) == 1)
{
lean_object* v_val_1466_; 
v_val_1466_ = lean_ctor_get(v_a_1465_, 0);
lean_inc(v_val_1466_);
lean_dec_ref_known(v_a_1465_, 1);
if (lean_obj_tag(v_val_1466_) == 0)
{
lean_object* v_returnCont_1467_; 
v_returnCont_1467_ = lean_ctor_get(v_val_1466_, 0);
lean_inc_ref(v_returnCont_1467_);
lean_dec_ref_known(v_val_1466_, 1);
v_val_1442_ = v_returnCont_1467_;
v___y_1443_ = v___y_1434_;
v___y_1444_ = v___y_1435_;
goto v___jp_1441_;
}
else
{
lean_dec(v_val_1466_);
v_as_x27_1431_ = v_tail_1439_;
goto _start;
}
}
else
{
lean_dec(v_a_1465_);
v_as_x27_1431_ = v_tail_1439_;
goto _start;
}
}
else
{
lean_object* v_a_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1477_; 
lean_dec_ref(v_b_1432_);
lean_dec_ref(v_a_1430_);
v_a_1470_ = lean_ctor_get(v___x_1464_, 0);
v_isSharedCheck_1477_ = !lean_is_exclusive(v___x_1464_);
if (v_isSharedCheck_1477_ == 0)
{
v___x_1472_ = v___x_1464_;
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_a_1470_);
lean_dec(v___x_1464_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1475_; 
if (v_isShared_1473_ == 0)
{
v___x_1475_ = v___x_1472_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v_a_1470_);
v___x_1475_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
return v___x_1475_;
}
}
}
}
else
{
lean_inc_ref(v_a_1430_);
v_val_1442_ = v_a_1430_;
v___y_1443_ = v___y_1434_;
v___y_1444_ = v___y_1435_;
goto v___jp_1441_;
}
v___jp_1441_:
{
lean_object* v___x_1445_; lean_object* v___x_1446_; 
v___x_1445_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__3___redArg___closed__1));
v___x_1446_ = l_Lean_Core_mkFreshUserName(v___x_1445_, v___y_1443_, v___y_1444_);
if (lean_obj_tag(v___x_1446_) == 0)
{
lean_object* v_a_1447_; lean_object* v_resultType_1448_; lean_object* v_k_1449_; uint8_t v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
v_a_1447_ = lean_ctor_get(v___x_1446_, 0);
lean_inc(v_a_1447_);
lean_dec_ref_known(v___x_1446_, 1);
v_resultType_1448_ = lean_ctor_get(v_val_1442_, 0);
lean_inc_ref(v_resultType_1448_);
v_k_1449_ = lean_ctor_get(v_val_1442_, 1);
lean_inc_ref(v_k_1449_);
lean_dec_ref(v_val_1442_);
v___x_1450_ = 0;
lean_inc(v_fst_1440_);
v___x_1451_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1451_, 0, v_fst_1440_);
lean_ctor_set(v___x_1451_, 1, v_a_1447_);
lean_ctor_set(v___x_1451_, 2, v_resultType_1448_);
lean_ctor_set(v___x_1451_, 3, v_k_1449_);
lean_ctor_set_uint8(v___x_1451_, sizeof(void*)*4, v___x_1450_);
v___x_1452_ = lean_array_push(v_b_1432_, v___x_1451_);
v_as_x27_1431_ = v_tail_1439_;
v_b_1432_ = v___x_1452_;
goto _start;
}
else
{
lean_object* v_a_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1461_; 
lean_dec_ref(v_val_1442_);
lean_dec_ref(v_b_1432_);
lean_dec_ref(v_a_1430_);
v_a_1454_ = lean_ctor_get(v___x_1446_, 0);
v_isSharedCheck_1461_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1456_ = v___x_1446_;
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_a_1454_);
lean_dec(v___x_1446_);
v___x_1456_ = lean_box(0);
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
v_resetjp_1455_:
{
lean_object* v___x_1459_; 
if (v_isShared_1457_ == 0)
{
v___x_1459_ = v___x_1456_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v_a_1454_);
v___x_1459_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
return v___x_1459_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__3___redArg___boxed(lean_object* v_a_1478_, lean_object* v_as_x27_1479_, lean_object* v_b_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_){
_start:
{
lean_object* v_res_1485_; 
v_res_1485_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__3___redArg(v_a_1478_, v_as_x27_1479_, v_b_1480_, v___y_1481_, v___y_1482_, v___y_1483_);
lean_dec(v___y_1483_);
lean_dec_ref(v___y_1482_);
lean_dec_ref(v___y_1481_);
lean_dec(v_as_x27_1479_);
return v_res_1485_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__3(lean_object* v_a_1486_, lean_object* v_as_1487_, lean_object* v_as_x27_1488_, lean_object* v_b_1489_, lean_object* v_a_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_){
_start:
{
lean_object* v___x_1499_; 
v___x_1499_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__3___redArg(v_a_1486_, v_as_x27_1488_, v_b_1489_, v___y_1491_, v___y_1496_, v___y_1497_);
return v___x_1499_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__3___boxed(lean_object* v_a_1500_, lean_object* v_as_1501_, lean_object* v_as_x27_1502_, lean_object* v_b_1503_, lean_object* v_a_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_){
_start:
{
lean_object* v_res_1513_; 
v_res_1513_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__3(v_a_1500_, v_as_1501_, v_as_x27_1502_, v_b_1503_, v_a_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_);
lean_dec(v___y_1511_);
lean_dec_ref(v___y_1510_);
lean_dec(v___y_1509_);
lean_dec_ref(v___y_1508_);
lean_dec(v___y_1507_);
lean_dec_ref(v___y_1506_);
lean_dec_ref(v___y_1505_);
lean_dec(v_as_x27_1502_);
lean_dec(v_as_1501_);
return v_res_1513_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Elab_Do_elabDoFor_spec__4(lean_object* v_a_1514_, lean_object* v_x_1515_){
_start:
{
if (lean_obj_tag(v_x_1515_) == 0)
{
uint8_t v___x_1516_; 
v___x_1516_ = 0;
return v___x_1516_;
}
else
{
lean_object* v_head_1517_; lean_object* v_tail_1518_; uint8_t v___x_1519_; 
v_head_1517_ = lean_ctor_get(v_x_1515_, 0);
v_tail_1518_ = lean_ctor_get(v_x_1515_, 1);
v___x_1519_ = lean_name_eq(v_a_1514_, v_head_1517_);
if (v___x_1519_ == 0)
{
v_x_1515_ = v_tail_1518_;
goto _start;
}
else
{
return v___x_1519_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Elab_Do_elabDoFor_spec__4___boxed(lean_object* v_a_1521_, lean_object* v_x_1522_){
_start:
{
uint8_t v_res_1523_; lean_object* v_r_1524_; 
v_res_1523_ = l_List_elem___at___00Lean_Elab_Do_elabDoFor_spec__4(v_a_1521_, v_x_1522_);
lean_dec(v_x_1522_);
lean_dec(v_a_1521_);
v_r_1524_ = lean_box(v_res_1523_);
return v_r_1524_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_elabDoFor_spec__5(lean_object* v_init_1525_, lean_object* v_x_1526_){
_start:
{
if (lean_obj_tag(v_x_1526_) == 0)
{
lean_object* v_k_1527_; lean_object* v_l_1528_; lean_object* v_r_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; 
v_k_1527_ = lean_ctor_get(v_x_1526_, 1);
v_l_1528_ = lean_ctor_get(v_x_1526_, 3);
v_r_1529_ = lean_ctor_get(v_x_1526_, 4);
v___x_1530_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_elabDoFor_spec__5(v_init_1525_, v_r_1529_);
lean_inc(v_k_1527_);
v___x_1531_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1531_, 0, v_k_1527_);
lean_ctor_set(v___x_1531_, 1, v___x_1530_);
v_init_1525_ = v___x_1531_;
v_x_1526_ = v_l_1528_;
goto _start;
}
else
{
return v_init_1525_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_elabDoFor_spec__5___boxed(lean_object* v_init_1533_, lean_object* v_x_1534_){
_start:
{
lean_object* v_res_1535_; 
v_res_1535_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_elabDoFor_spec__5(v_init_1533_, v_x_1534_);
lean_dec(v_x_1534_);
return v_res_1535_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___redArg___lam__0(lean_object* v_val_1536_, lean_object* v_x_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_){
_start:
{
lean_object* v___x_1546_; 
lean_inc(v___y_1544_);
lean_inc_ref(v___y_1543_);
lean_inc(v___y_1542_);
lean_inc_ref(v___y_1541_);
lean_inc(v___y_1540_);
lean_inc_ref(v___y_1539_);
lean_inc_ref(v___y_1538_);
v___x_1546_ = lean_apply_8(v_val_1536_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_, lean_box(0));
return v___x_1546_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___redArg___lam__0___boxed(lean_object* v_val_1547_, lean_object* v_x_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_){
_start:
{
lean_object* v_res_1557_; 
v_res_1557_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___redArg___lam__0(v_val_1547_, v_x_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_);
lean_dec(v___y_1555_);
lean_dec_ref(v___y_1554_);
lean_dec(v___y_1553_);
lean_dec_ref(v___y_1552_);
lean_dec(v___y_1551_);
lean_dec_ref(v___y_1550_);
lean_dec_ref(v___y_1549_);
lean_dec_ref(v_x_1548_);
return v_res_1557_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___redArg(lean_object* v___x_1561_, lean_object* v_as_x27_1562_, lean_object* v_b_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_){
_start:
{
if (lean_obj_tag(v_as_x27_1562_) == 0)
{
lean_object* v___x_1568_; 
v___x_1568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1568_, 0, v_b_1563_);
return v___x_1568_;
}
else
{
lean_object* v_head_1569_; lean_object* v_tail_1570_; lean_object* v_val_1572_; lean_object* v___y_1573_; lean_object* v___y_1574_; lean_object* v___y_1575_; uint8_t v___x_1602_; 
v_head_1569_ = lean_ctor_get(v_as_x27_1562_, 0);
v_tail_1570_ = lean_ctor_get(v_as_x27_1562_, 1);
v___x_1602_ = l_List_elem___at___00Lean_Elab_Do_elabDoFor_spec__4(v_head_1569_, v___x_1561_);
if (v___x_1602_ == 0)
{
lean_object* v___x_1603_; uint8_t v___x_1604_; 
v___x_1603_ = lean_box(0);
v___x_1604_ = lean_name_eq(v_head_1569_, v___x_1603_);
if (v___x_1604_ == 0)
{
lean_object* v___x_1605_; 
v___x_1605_ = l_Lean_Elab_Do_getLabeledTarget_x3f___redArg(v_head_1569_, v___y_1564_);
if (lean_obj_tag(v___x_1605_) == 0)
{
lean_object* v_a_1606_; 
v_a_1606_ = lean_ctor_get(v___x_1605_, 0);
lean_inc(v_a_1606_);
lean_dec_ref_known(v___x_1605_, 1);
if (lean_obj_tag(v_a_1606_) == 1)
{
lean_object* v_val_1607_; 
v_val_1607_ = lean_ctor_get(v_a_1606_, 0);
lean_inc(v_val_1607_);
lean_dec_ref_known(v_a_1606_, 1);
if (lean_obj_tag(v_val_1607_) == 1)
{
lean_object* v_breakCont_1608_; 
v_breakCont_1608_ = lean_ctor_get(v_val_1607_, 0);
lean_inc_ref(v_breakCont_1608_);
lean_dec_ref_known(v_val_1607_, 2);
v_val_1572_ = v_breakCont_1608_;
v___y_1573_ = v___y_1564_;
v___y_1574_ = v___y_1565_;
v___y_1575_ = v___y_1566_;
goto v___jp_1571_;
}
else
{
lean_dec(v_val_1607_);
v_as_x27_1562_ = v_tail_1570_;
goto _start;
}
}
else
{
lean_dec(v_a_1606_);
v_as_x27_1562_ = v_tail_1570_;
goto _start;
}
}
else
{
lean_object* v_a_1611_; lean_object* v___x_1613_; uint8_t v_isShared_1614_; uint8_t v_isSharedCheck_1618_; 
lean_dec_ref(v_b_1563_);
v_a_1611_ = lean_ctor_get(v___x_1605_, 0);
v_isSharedCheck_1618_ = !lean_is_exclusive(v___x_1605_);
if (v_isSharedCheck_1618_ == 0)
{
v___x_1613_ = v___x_1605_;
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
else
{
lean_inc(v_a_1611_);
lean_dec(v___x_1605_);
v___x_1613_ = lean_box(0);
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
v_resetjp_1612_:
{
lean_object* v___x_1616_; 
if (v_isShared_1614_ == 0)
{
v___x_1616_ = v___x_1613_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v_a_1611_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
}
}
else
{
lean_object* v___x_1619_; 
v___x_1619_ = l_Lean_Elab_Do_getBreakCont___redArg(v___y_1564_);
if (lean_obj_tag(v___x_1619_) == 0)
{
lean_object* v_a_1620_; 
v_a_1620_ = lean_ctor_get(v___x_1619_, 0);
lean_inc(v_a_1620_);
lean_dec_ref_known(v___x_1619_, 1);
if (lean_obj_tag(v_a_1620_) == 1)
{
lean_object* v_val_1621_; 
v_val_1621_ = lean_ctor_get(v_a_1620_, 0);
lean_inc(v_val_1621_);
lean_dec_ref_known(v_a_1620_, 1);
v_val_1572_ = v_val_1621_;
v___y_1573_ = v___y_1564_;
v___y_1574_ = v___y_1565_;
v___y_1575_ = v___y_1566_;
goto v___jp_1571_;
}
else
{
lean_dec(v_a_1620_);
v_as_x27_1562_ = v_tail_1570_;
goto _start;
}
}
else
{
lean_object* v_a_1623_; lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1630_; 
lean_dec_ref(v_b_1563_);
v_a_1623_ = lean_ctor_get(v___x_1619_, 0);
v_isSharedCheck_1630_ = !lean_is_exclusive(v___x_1619_);
if (v_isSharedCheck_1630_ == 0)
{
v___x_1625_ = v___x_1619_;
v_isShared_1626_ = v_isSharedCheck_1630_;
goto v_resetjp_1624_;
}
else
{
lean_inc(v_a_1623_);
lean_dec(v___x_1619_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1630_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
lean_object* v___x_1628_; 
if (v_isShared_1626_ == 0)
{
v___x_1628_ = v___x_1625_;
goto v_reusejp_1627_;
}
else
{
lean_object* v_reuseFailAlloc_1629_; 
v_reuseFailAlloc_1629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1629_, 0, v_a_1623_);
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
else
{
v_as_x27_1562_ = v_tail_1570_;
goto _start;
}
v___jp_1571_:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1576_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___redArg___closed__1));
v___x_1577_ = l_Lean_Core_mkFreshUserName(v___x_1576_, v___y_1574_, v___y_1575_);
if (lean_obj_tag(v___x_1577_) == 0)
{
lean_object* v_a_1578_; lean_object* v___x_1579_; 
v_a_1578_ = lean_ctor_get(v___x_1577_, 0);
lean_inc(v_a_1578_);
lean_dec_ref_known(v___x_1577_, 1);
v___x_1579_ = l_Lean_Elab_Do_mkPUnit___redArg(v___y_1573_);
if (lean_obj_tag(v___x_1579_) == 0)
{
lean_object* v_a_1580_; lean_object* v___f_1581_; uint8_t v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; 
v_a_1580_ = lean_ctor_get(v___x_1579_, 0);
lean_inc(v_a_1580_);
lean_dec_ref_known(v___x_1579_, 1);
v___f_1581_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___redArg___lam__0___boxed), 10, 1);
lean_closure_set(v___f_1581_, 0, v_val_1572_);
v___x_1582_ = 1;
lean_inc(v_head_1569_);
v___x_1583_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1583_, 0, v_head_1569_);
lean_ctor_set(v___x_1583_, 1, v_a_1578_);
lean_ctor_set(v___x_1583_, 2, v_a_1580_);
lean_ctor_set(v___x_1583_, 3, v___f_1581_);
lean_ctor_set_uint8(v___x_1583_, sizeof(void*)*4, v___x_1582_);
v___x_1584_ = lean_array_push(v_b_1563_, v___x_1583_);
v_as_x27_1562_ = v_tail_1570_;
v_b_1563_ = v___x_1584_;
goto _start;
}
else
{
lean_object* v_a_1586_; lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1593_; 
lean_dec(v_a_1578_);
lean_dec_ref(v_val_1572_);
lean_dec_ref(v_b_1563_);
v_a_1586_ = lean_ctor_get(v___x_1579_, 0);
v_isSharedCheck_1593_ = !lean_is_exclusive(v___x_1579_);
if (v_isSharedCheck_1593_ == 0)
{
v___x_1588_ = v___x_1579_;
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
else
{
lean_inc(v_a_1586_);
lean_dec(v___x_1579_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
lean_object* v___x_1591_; 
if (v_isShared_1589_ == 0)
{
v___x_1591_ = v___x_1588_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v_a_1586_);
v___x_1591_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
return v___x_1591_;
}
}
}
}
else
{
lean_object* v_a_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1601_; 
lean_dec_ref(v_val_1572_);
lean_dec_ref(v_b_1563_);
v_a_1594_ = lean_ctor_get(v___x_1577_, 0);
v_isSharedCheck_1601_ = !lean_is_exclusive(v___x_1577_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1596_ = v___x_1577_;
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
else
{
lean_inc(v_a_1594_);
lean_dec(v___x_1577_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
lean_object* v___x_1599_; 
if (v_isShared_1597_ == 0)
{
v___x_1599_ = v___x_1596_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v_a_1594_);
v___x_1599_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
return v___x_1599_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___redArg___boxed(lean_object* v___x_1632_, lean_object* v_as_x27_1633_, lean_object* v_b_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_){
_start:
{
lean_object* v_res_1639_; 
v_res_1639_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___redArg(v___x_1632_, v_as_x27_1633_, v_b_1634_, v___y_1635_, v___y_1636_, v___y_1637_);
lean_dec(v___y_1637_);
lean_dec_ref(v___y_1636_);
lean_dec_ref(v___y_1635_);
lean_dec(v_as_x27_1633_);
lean_dec(v___x_1632_);
return v_res_1639_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6(lean_object* v___x_1640_, lean_object* v_as_1641_, lean_object* v_as_x27_1642_, lean_object* v_b_1643_, lean_object* v_a_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_){
_start:
{
lean_object* v___x_1653_; 
v___x_1653_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___redArg(v___x_1640_, v_as_x27_1642_, v_b_1643_, v___y_1645_, v___y_1650_, v___y_1651_);
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___boxed(lean_object* v___x_1654_, lean_object* v_as_1655_, lean_object* v_as_x27_1656_, lean_object* v_b_1657_, lean_object* v_a_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_){
_start:
{
lean_object* v_res_1667_; 
v_res_1667_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6(v___x_1654_, v_as_1655_, v_as_x27_1656_, v_b_1657_, v_a_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_);
lean_dec(v___y_1665_);
lean_dec_ref(v___y_1664_);
lean_dec(v___y_1663_);
lean_dec_ref(v___y_1662_);
lean_dec(v___y_1661_);
lean_dec_ref(v___y_1660_);
lean_dec_ref(v___y_1659_);
lean_dec(v_as_x27_1656_);
lean_dec(v_as_1655_);
lean_dec(v___x_1654_);
return v_res_1667_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__7___redArg(lean_object* v___x_1671_, lean_object* v_as_x27_1672_, lean_object* v_b_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_){
_start:
{
if (lean_obj_tag(v_as_x27_1672_) == 0)
{
lean_object* v___x_1678_; 
v___x_1678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1678_, 0, v_b_1673_);
return v___x_1678_;
}
else
{
lean_object* v_head_1679_; lean_object* v_tail_1680_; lean_object* v_val_1682_; lean_object* v___y_1683_; lean_object* v___y_1684_; lean_object* v___y_1685_; uint8_t v___x_1712_; 
v_head_1679_ = lean_ctor_get(v_as_x27_1672_, 0);
v_tail_1680_ = lean_ctor_get(v_as_x27_1672_, 1);
v___x_1712_ = l_List_elem___at___00Lean_Elab_Do_elabDoFor_spec__4(v_head_1679_, v___x_1671_);
if (v___x_1712_ == 0)
{
lean_object* v___x_1713_; uint8_t v___x_1714_; 
v___x_1713_ = lean_box(0);
v___x_1714_ = lean_name_eq(v_head_1679_, v___x_1713_);
if (v___x_1714_ == 0)
{
lean_object* v___x_1715_; 
v___x_1715_ = l_Lean_Elab_Do_getLabeledTarget_x3f___redArg(v_head_1679_, v___y_1674_);
if (lean_obj_tag(v___x_1715_) == 0)
{
lean_object* v_a_1716_; 
v_a_1716_ = lean_ctor_get(v___x_1715_, 0);
lean_inc(v_a_1716_);
lean_dec_ref_known(v___x_1715_, 1);
if (lean_obj_tag(v_a_1716_) == 1)
{
lean_object* v_val_1717_; 
v_val_1717_ = lean_ctor_get(v_a_1716_, 0);
lean_inc(v_val_1717_);
lean_dec_ref_known(v_a_1716_, 1);
if (lean_obj_tag(v_val_1717_) == 1)
{
lean_object* v_continueCont_1718_; 
v_continueCont_1718_ = lean_ctor_get(v_val_1717_, 1);
lean_inc_ref(v_continueCont_1718_);
lean_dec_ref_known(v_val_1717_, 2);
v_val_1682_ = v_continueCont_1718_;
v___y_1683_ = v___y_1674_;
v___y_1684_ = v___y_1675_;
v___y_1685_ = v___y_1676_;
goto v___jp_1681_;
}
else
{
lean_dec(v_val_1717_);
v_as_x27_1672_ = v_tail_1680_;
goto _start;
}
}
else
{
lean_dec(v_a_1716_);
v_as_x27_1672_ = v_tail_1680_;
goto _start;
}
}
else
{
lean_object* v_a_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1728_; 
lean_dec_ref(v_b_1673_);
v_a_1721_ = lean_ctor_get(v___x_1715_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1715_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1723_ = v___x_1715_;
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_a_1721_);
lean_dec(v___x_1715_);
v___x_1723_ = lean_box(0);
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
v_resetjp_1722_:
{
lean_object* v___x_1726_; 
if (v_isShared_1724_ == 0)
{
v___x_1726_ = v___x_1723_;
goto v_reusejp_1725_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v_a_1721_);
v___x_1726_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1725_;
}
v_reusejp_1725_:
{
return v___x_1726_;
}
}
}
}
else
{
lean_object* v___x_1729_; 
v___x_1729_ = l_Lean_Elab_Do_getContinueCont___redArg(v___y_1674_);
if (lean_obj_tag(v___x_1729_) == 0)
{
lean_object* v_a_1730_; 
v_a_1730_ = lean_ctor_get(v___x_1729_, 0);
lean_inc(v_a_1730_);
lean_dec_ref_known(v___x_1729_, 1);
if (lean_obj_tag(v_a_1730_) == 1)
{
lean_object* v_val_1731_; 
v_val_1731_ = lean_ctor_get(v_a_1730_, 0);
lean_inc(v_val_1731_);
lean_dec_ref_known(v_a_1730_, 1);
v_val_1682_ = v_val_1731_;
v___y_1683_ = v___y_1674_;
v___y_1684_ = v___y_1675_;
v___y_1685_ = v___y_1676_;
goto v___jp_1681_;
}
else
{
lean_dec(v_a_1730_);
v_as_x27_1672_ = v_tail_1680_;
goto _start;
}
}
else
{
lean_object* v_a_1733_; lean_object* v___x_1735_; uint8_t v_isShared_1736_; uint8_t v_isSharedCheck_1740_; 
lean_dec_ref(v_b_1673_);
v_a_1733_ = lean_ctor_get(v___x_1729_, 0);
v_isSharedCheck_1740_ = !lean_is_exclusive(v___x_1729_);
if (v_isSharedCheck_1740_ == 0)
{
v___x_1735_ = v___x_1729_;
v_isShared_1736_ = v_isSharedCheck_1740_;
goto v_resetjp_1734_;
}
else
{
lean_inc(v_a_1733_);
lean_dec(v___x_1729_);
v___x_1735_ = lean_box(0);
v_isShared_1736_ = v_isSharedCheck_1740_;
goto v_resetjp_1734_;
}
v_resetjp_1734_:
{
lean_object* v___x_1738_; 
if (v_isShared_1736_ == 0)
{
v___x_1738_ = v___x_1735_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v_a_1733_);
v___x_1738_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
return v___x_1738_;
}
}
}
}
}
else
{
v_as_x27_1672_ = v_tail_1680_;
goto _start;
}
v___jp_1681_:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1686_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__7___redArg___closed__1));
v___x_1687_ = l_Lean_Core_mkFreshUserName(v___x_1686_, v___y_1684_, v___y_1685_);
if (lean_obj_tag(v___x_1687_) == 0)
{
lean_object* v_a_1688_; lean_object* v___x_1689_; 
v_a_1688_ = lean_ctor_get(v___x_1687_, 0);
lean_inc(v_a_1688_);
lean_dec_ref_known(v___x_1687_, 1);
v___x_1689_ = l_Lean_Elab_Do_mkPUnit___redArg(v___y_1683_);
if (lean_obj_tag(v___x_1689_) == 0)
{
lean_object* v_a_1690_; lean_object* v___f_1691_; uint8_t v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; 
v_a_1690_ = lean_ctor_get(v___x_1689_, 0);
lean_inc(v_a_1690_);
lean_dec_ref_known(v___x_1689_, 1);
v___f_1691_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___redArg___lam__0___boxed), 10, 1);
lean_closure_set(v___f_1691_, 0, v_val_1682_);
v___x_1692_ = 2;
lean_inc(v_head_1679_);
v___x_1693_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1693_, 0, v_head_1679_);
lean_ctor_set(v___x_1693_, 1, v_a_1688_);
lean_ctor_set(v___x_1693_, 2, v_a_1690_);
lean_ctor_set(v___x_1693_, 3, v___f_1691_);
lean_ctor_set_uint8(v___x_1693_, sizeof(void*)*4, v___x_1692_);
v___x_1694_ = lean_array_push(v_b_1673_, v___x_1693_);
v_as_x27_1672_ = v_tail_1680_;
v_b_1673_ = v___x_1694_;
goto _start;
}
else
{
lean_object* v_a_1696_; lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1703_; 
lean_dec(v_a_1688_);
lean_dec_ref(v_val_1682_);
lean_dec_ref(v_b_1673_);
v_a_1696_ = lean_ctor_get(v___x_1689_, 0);
v_isSharedCheck_1703_ = !lean_is_exclusive(v___x_1689_);
if (v_isSharedCheck_1703_ == 0)
{
v___x_1698_ = v___x_1689_;
v_isShared_1699_ = v_isSharedCheck_1703_;
goto v_resetjp_1697_;
}
else
{
lean_inc(v_a_1696_);
lean_dec(v___x_1689_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1703_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
lean_object* v___x_1701_; 
if (v_isShared_1699_ == 0)
{
v___x_1701_ = v___x_1698_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v_a_1696_);
v___x_1701_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
return v___x_1701_;
}
}
}
}
else
{
lean_object* v_a_1704_; lean_object* v___x_1706_; uint8_t v_isShared_1707_; uint8_t v_isSharedCheck_1711_; 
lean_dec_ref(v_val_1682_);
lean_dec_ref(v_b_1673_);
v_a_1704_ = lean_ctor_get(v___x_1687_, 0);
v_isSharedCheck_1711_ = !lean_is_exclusive(v___x_1687_);
if (v_isSharedCheck_1711_ == 0)
{
v___x_1706_ = v___x_1687_;
v_isShared_1707_ = v_isSharedCheck_1711_;
goto v_resetjp_1705_;
}
else
{
lean_inc(v_a_1704_);
lean_dec(v___x_1687_);
v___x_1706_ = lean_box(0);
v_isShared_1707_ = v_isSharedCheck_1711_;
goto v_resetjp_1705_;
}
v_resetjp_1705_:
{
lean_object* v___x_1709_; 
if (v_isShared_1707_ == 0)
{
v___x_1709_ = v___x_1706_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v_a_1704_);
v___x_1709_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
return v___x_1709_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__7___redArg___boxed(lean_object* v___x_1742_, lean_object* v_as_x27_1743_, lean_object* v_b_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_){
_start:
{
lean_object* v_res_1749_; 
v_res_1749_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__7___redArg(v___x_1742_, v_as_x27_1743_, v_b_1744_, v___y_1745_, v___y_1746_, v___y_1747_);
lean_dec(v___y_1747_);
lean_dec_ref(v___y_1746_);
lean_dec_ref(v___y_1745_);
lean_dec(v_as_x27_1743_);
lean_dec(v___x_1742_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__7(lean_object* v___x_1750_, lean_object* v_as_1751_, lean_object* v_as_x27_1752_, lean_object* v_b_1753_, lean_object* v_a_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_){
_start:
{
lean_object* v___x_1763_; 
v___x_1763_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__7___redArg(v___x_1750_, v_as_x27_1752_, v_b_1753_, v___y_1755_, v___y_1760_, v___y_1761_);
return v___x_1763_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__7___boxed(lean_object* v___x_1764_, lean_object* v_as_1765_, lean_object* v_as_x27_1766_, lean_object* v_b_1767_, lean_object* v_a_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_){
_start:
{
lean_object* v_res_1777_; 
v_res_1777_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__7(v___x_1764_, v_as_1765_, v_as_x27_1766_, v_b_1767_, v_a_1768_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_);
lean_dec(v___y_1775_);
lean_dec_ref(v___y_1774_);
lean_dec(v___y_1773_);
lean_dec_ref(v___y_1772_);
lean_dec(v___y_1771_);
lean_dec_ref(v___y_1770_);
lean_dec_ref(v___y_1769_);
lean_dec(v_as_x27_1766_);
lean_dec(v_as_1765_);
lean_dec(v___x_1764_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__8___redArg(lean_object* v_fired_x3f_1778_, lean_object* v_as_1779_, size_t v_sz_1780_, size_t v_i_1781_, lean_object* v_b_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_){
_start:
{
lean_object* v_slot_1789_; uint8_t v___x_1794_; 
v___x_1794_ = lean_usize_dec_lt(v_i_1781_, v_sz_1780_);
if (v___x_1794_ == 0)
{
lean_object* v___x_1795_; 
lean_dec(v_fired_x3f_1778_);
v___x_1795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1795_, 0, v_b_1782_);
return v___x_1795_;
}
else
{
lean_object* v_a_1796_; 
v_a_1796_ = lean_array_uget_borrowed(v_as_1779_, v_i_1781_);
if (lean_obj_tag(v_fired_x3f_1778_) == 0)
{
lean_object* v_fst_1797_; lean_object* v_payloadType_1798_; lean_object* v___x_1799_; 
v_fst_1797_ = lean_ctor_get(v_a_1796_, 0);
v_payloadType_1798_ = lean_ctor_get(v_fst_1797_, 2);
lean_inc_ref(v_payloadType_1798_);
v___x_1799_ = l_Lean_Meta_mkNone(v_payloadType_1798_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_);
if (lean_obj_tag(v___x_1799_) == 0)
{
lean_object* v_a_1800_; 
v_a_1800_ = lean_ctor_get(v___x_1799_, 0);
lean_inc(v_a_1800_);
lean_dec_ref_known(v___x_1799_, 1);
v_slot_1789_ = v_a_1800_;
goto v___jp_1788_;
}
else
{
lean_object* v_a_1801_; lean_object* v___x_1803_; uint8_t v_isShared_1804_; uint8_t v_isSharedCheck_1808_; 
lean_dec_ref(v_b_1782_);
v_a_1801_ = lean_ctor_get(v___x_1799_, 0);
v_isSharedCheck_1808_ = !lean_is_exclusive(v___x_1799_);
if (v_isSharedCheck_1808_ == 0)
{
v___x_1803_ = v___x_1799_;
v_isShared_1804_ = v_isSharedCheck_1808_;
goto v_resetjp_1802_;
}
else
{
lean_inc(v_a_1801_);
lean_dec(v___x_1799_);
v___x_1803_ = lean_box(0);
v_isShared_1804_ = v_isSharedCheck_1808_;
goto v_resetjp_1802_;
}
v_resetjp_1802_:
{
lean_object* v___x_1806_; 
if (v_isShared_1804_ == 0)
{
v___x_1806_ = v___x_1803_;
goto v_reusejp_1805_;
}
else
{
lean_object* v_reuseFailAlloc_1807_; 
v_reuseFailAlloc_1807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1807_, 0, v_a_1801_);
v___x_1806_ = v_reuseFailAlloc_1807_;
goto v_reusejp_1805_;
}
v_reusejp_1805_:
{
return v___x_1806_;
}
}
}
}
else
{
lean_object* v_val_1809_; lean_object* v_fst_1810_; lean_object* v_snd_1811_; lean_object* v_fst_1812_; lean_object* v_snd_1813_; uint8_t v___x_1814_; 
v_val_1809_ = lean_ctor_get(v_fired_x3f_1778_, 0);
v_fst_1810_ = lean_ctor_get(v_a_1796_, 0);
v_snd_1811_ = lean_ctor_get(v_a_1796_, 1);
v_fst_1812_ = lean_ctor_get(v_val_1809_, 0);
v_snd_1813_ = lean_ctor_get(v_val_1809_, 1);
v___x_1814_ = lean_nat_dec_eq(v_snd_1811_, v_fst_1812_);
if (v___x_1814_ == 0)
{
lean_object* v_payloadType_1815_; lean_object* v___x_1816_; 
v_payloadType_1815_ = lean_ctor_get(v_fst_1810_, 2);
lean_inc_ref(v_payloadType_1815_);
v___x_1816_ = l_Lean_Meta_mkNone(v_payloadType_1815_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_);
if (lean_obj_tag(v___x_1816_) == 0)
{
lean_object* v_a_1817_; 
v_a_1817_ = lean_ctor_get(v___x_1816_, 0);
lean_inc(v_a_1817_);
lean_dec_ref_known(v___x_1816_, 1);
v_slot_1789_ = v_a_1817_;
goto v___jp_1788_;
}
else
{
lean_object* v_a_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1825_; 
lean_dec_ref_known(v_fired_x3f_1778_, 1);
lean_dec_ref(v_b_1782_);
v_a_1818_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_1825_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1820_ = v___x_1816_;
v_isShared_1821_ = v_isSharedCheck_1825_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_a_1818_);
lean_dec(v___x_1816_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_1825_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v___x_1823_; 
if (v_isShared_1821_ == 0)
{
v___x_1823_ = v___x_1820_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v_a_1818_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
return v___x_1823_;
}
}
}
}
else
{
lean_object* v_payloadType_1826_; lean_object* v___x_1827_; 
v_payloadType_1826_ = lean_ctor_get(v_fst_1810_, 2);
lean_inc(v_snd_1813_);
lean_inc_ref(v_payloadType_1826_);
v___x_1827_ = l_Lean_Meta_mkSome(v_payloadType_1826_, v_snd_1813_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_);
if (lean_obj_tag(v___x_1827_) == 0)
{
lean_object* v_a_1828_; 
v_a_1828_ = lean_ctor_get(v___x_1827_, 0);
lean_inc(v_a_1828_);
lean_dec_ref_known(v___x_1827_, 1);
v_slot_1789_ = v_a_1828_;
goto v___jp_1788_;
}
else
{
lean_object* v_a_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1836_; 
lean_dec_ref_known(v_fired_x3f_1778_, 1);
lean_dec_ref(v_b_1782_);
v_a_1829_ = lean_ctor_get(v___x_1827_, 0);
v_isSharedCheck_1836_ = !lean_is_exclusive(v___x_1827_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1831_ = v___x_1827_;
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_a_1829_);
lean_dec(v___x_1827_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1834_; 
if (v_isShared_1832_ == 0)
{
v___x_1834_ = v___x_1831_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_a_1829_);
v___x_1834_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
return v___x_1834_;
}
}
}
}
}
}
v___jp_1788_:
{
lean_object* v___x_1790_; size_t v___x_1791_; size_t v___x_1792_; 
v___x_1790_ = lean_array_push(v_b_1782_, v_slot_1789_);
v___x_1791_ = ((size_t)1ULL);
v___x_1792_ = lean_usize_add(v_i_1781_, v___x_1791_);
v_i_1781_ = v___x_1792_;
v_b_1782_ = v___x_1790_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__8___redArg___boxed(lean_object* v_fired_x3f_1837_, lean_object* v_as_1838_, lean_object* v_sz_1839_, lean_object* v_i_1840_, lean_object* v_b_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_){
_start:
{
size_t v_sz_boxed_1847_; size_t v_i_boxed_1848_; lean_object* v_res_1849_; 
v_sz_boxed_1847_ = lean_unbox_usize(v_sz_1839_);
lean_dec(v_sz_1839_);
v_i_boxed_1848_ = lean_unbox_usize(v_i_1840_);
lean_dec(v_i_1840_);
v_res_1849_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__8___redArg(v_fired_x3f_1837_, v_as_1838_, v_sz_boxed_1847_, v_i_boxed_1848_, v_b_1841_, v___y_1842_, v___y_1843_, v___y_1844_, v___y_1845_);
lean_dec(v___y_1845_);
lean_dec_ref(v___y_1844_);
lean_dec(v___y_1843_);
lean_dec_ref(v___y_1842_);
lean_dec_ref(v_as_1838_);
return v_res_1849_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__8(lean_object* v_fired_x3f_1850_, lean_object* v_as_1851_, size_t v_sz_1852_, size_t v_i_1853_, lean_object* v_b_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_){
_start:
{
lean_object* v___x_1862_; 
v___x_1862_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__8___redArg(v_fired_x3f_1850_, v_as_1851_, v_sz_1852_, v_i_1853_, v_b_1854_, v___y_1857_, v___y_1858_, v___y_1859_, v___y_1860_);
return v___x_1862_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__8___boxed(lean_object* v_fired_x3f_1863_, lean_object* v_as_1864_, lean_object* v_sz_1865_, lean_object* v_i_1866_, lean_object* v_b_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_){
_start:
{
size_t v_sz_boxed_1875_; size_t v_i_boxed_1876_; lean_object* v_res_1877_; 
v_sz_boxed_1875_ = lean_unbox_usize(v_sz_1865_);
lean_dec(v_sz_1865_);
v_i_boxed_1876_ = lean_unbox_usize(v_i_1866_);
lean_dec(v_i_1866_);
v_res_1877_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__8(v_fired_x3f_1863_, v_as_1864_, v_sz_boxed_1875_, v_i_boxed_1876_, v_b_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_);
lean_dec(v___y_1873_);
lean_dec_ref(v___y_1872_);
lean_dec(v___y_1871_);
lean_dec_ref(v___y_1870_);
lean_dec(v___y_1869_);
lean_dec_ref(v___y_1868_);
lean_dec_ref(v_as_1864_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__9(lean_object* v___x_1878_, lean_object* v_as_1879_, size_t v_sz_1880_, size_t v_i_1881_, lean_object* v_b_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_){
_start:
{
uint8_t v___x_1890_; 
v___x_1890_ = lean_usize_dec_lt(v_i_1881_, v_sz_1880_);
if (v___x_1890_ == 0)
{
lean_object* v___x_1891_; 
lean_dec_ref(v___x_1878_);
v___x_1891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1891_, 0, v_b_1882_);
return v___x_1891_;
}
else
{
lean_object* v_a_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; 
v_a_1892_ = lean_array_uget_borrowed(v_as_1879_, v_i_1881_);
v___x_1893_ = l_Lean_TSyntax_getId(v_a_1892_);
v___x_1894_ = l_Lean_Meta_getLocalDeclFromUserName(v___x_1893_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_);
if (lean_obj_tag(v___x_1894_) == 0)
{
lean_object* v_a_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; uint8_t v___x_1899_; lean_object* v___x_1900_; 
v_a_1895_ = lean_ctor_get(v___x_1894_, 0);
lean_inc_n(v_a_1895_, 2);
lean_dec_ref_known(v___x_1894_, 1);
v___x_1896_ = l_Lean_LocalDecl_toExpr(v_a_1895_);
v___x_1897_ = lean_box(0);
v___x_1898_ = lean_box(0);
v___x_1899_ = 0;
lean_inc_ref(v___x_1896_);
lean_inc(v_a_1892_);
v___x_1900_ = l_Lean_Elab_Term_addTermInfo_x27(v_a_1892_, v___x_1896_, v___x_1897_, v___x_1897_, v___x_1898_, v___x_1899_, v___x_1899_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_);
if (lean_obj_tag(v___x_1900_) == 0)
{
lean_object* v___x_1901_; lean_object* v___x_1902_; 
lean_dec_ref_known(v___x_1900_, 1);
v___x_1901_ = l_Lean_LocalDecl_type(v_a_1895_);
lean_dec(v_a_1895_);
v___x_1902_ = l_Lean_Meta_getDecLevel(v___x_1901_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_);
if (lean_obj_tag(v___x_1902_) == 0)
{
lean_object* v_a_1903_; lean_object* v_u_1904_; lean_object* v___x_1905_; 
v_a_1903_ = lean_ctor_get(v___x_1902_, 0);
lean_inc(v_a_1903_);
lean_dec_ref_known(v___x_1902_, 1);
v_u_1904_ = lean_ctor_get(v___x_1878_, 1);
lean_inc(v_u_1904_);
v___x_1905_ = l_Lean_Meta_isLevelDefEq(v_a_1903_, v_u_1904_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_);
if (lean_obj_tag(v___x_1905_) == 0)
{
lean_object* v___x_1906_; size_t v___x_1907_; size_t v___x_1908_; 
lean_dec_ref_known(v___x_1905_, 1);
v___x_1906_ = lean_array_push(v_b_1882_, v___x_1896_);
v___x_1907_ = ((size_t)1ULL);
v___x_1908_ = lean_usize_add(v_i_1881_, v___x_1907_);
v_i_1881_ = v___x_1908_;
v_b_1882_ = v___x_1906_;
goto _start;
}
else
{
lean_object* v_a_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1917_; 
lean_dec_ref(v___x_1896_);
lean_dec_ref(v_b_1882_);
lean_dec_ref(v___x_1878_);
v_a_1910_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1912_ = v___x_1905_;
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_a_1910_);
lean_dec(v___x_1905_);
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
}
else
{
lean_object* v_a_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1925_; 
lean_dec_ref(v___x_1896_);
lean_dec_ref(v_b_1882_);
lean_dec_ref(v___x_1878_);
v_a_1918_ = lean_ctor_get(v___x_1902_, 0);
v_isSharedCheck_1925_ = !lean_is_exclusive(v___x_1902_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1920_ = v___x_1902_;
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_a_1918_);
lean_dec(v___x_1902_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v___x_1923_; 
if (v_isShared_1921_ == 0)
{
v___x_1923_ = v___x_1920_;
goto v_reusejp_1922_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v_a_1918_);
v___x_1923_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1922_;
}
v_reusejp_1922_:
{
return v___x_1923_;
}
}
}
}
else
{
lean_object* v_a_1926_; lean_object* v___x_1928_; uint8_t v_isShared_1929_; uint8_t v_isSharedCheck_1933_; 
lean_dec_ref(v___x_1896_);
lean_dec(v_a_1895_);
lean_dec_ref(v_b_1882_);
lean_dec_ref(v___x_1878_);
v_a_1926_ = lean_ctor_get(v___x_1900_, 0);
v_isSharedCheck_1933_ = !lean_is_exclusive(v___x_1900_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1928_ = v___x_1900_;
v_isShared_1929_ = v_isSharedCheck_1933_;
goto v_resetjp_1927_;
}
else
{
lean_inc(v_a_1926_);
lean_dec(v___x_1900_);
v___x_1928_ = lean_box(0);
v_isShared_1929_ = v_isSharedCheck_1933_;
goto v_resetjp_1927_;
}
v_resetjp_1927_:
{
lean_object* v___x_1931_; 
if (v_isShared_1929_ == 0)
{
v___x_1931_ = v___x_1928_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v_a_1926_);
v___x_1931_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
return v___x_1931_;
}
}
}
}
else
{
lean_object* v_a_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1941_; 
lean_dec_ref(v_b_1882_);
lean_dec_ref(v___x_1878_);
v_a_1934_ = lean_ctor_get(v___x_1894_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1894_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1936_ = v___x_1894_;
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_a_1934_);
lean_dec(v___x_1894_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v___x_1939_; 
if (v_isShared_1937_ == 0)
{
v___x_1939_ = v___x_1936_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v_a_1934_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
return v___x_1939_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__9___boxed(lean_object* v___x_1942_, lean_object* v_as_1943_, lean_object* v_sz_1944_, lean_object* v_i_1945_, lean_object* v_b_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_){
_start:
{
size_t v_sz_boxed_1954_; size_t v_i_boxed_1955_; lean_object* v_res_1956_; 
v_sz_boxed_1954_ = lean_unbox_usize(v_sz_1944_);
lean_dec(v_sz_1944_);
v_i_boxed_1955_ = lean_unbox_usize(v_i_1945_);
lean_dec(v_i_1945_);
v_res_1956_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__9(v___x_1942_, v_as_1943_, v_sz_boxed_1954_, v_i_boxed_1955_, v_b_1946_, v___y_1947_, v___y_1948_, v___y_1949_, v___y_1950_, v___y_1951_, v___y_1952_);
lean_dec(v___y_1952_);
lean_dec_ref(v___y_1951_);
lean_dec(v___y_1950_);
lean_dec_ref(v___y_1949_);
lean_dec(v___y_1948_);
lean_dec_ref(v___y_1947_);
lean_dec_ref(v_as_1943_);
return v_res_1956_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__10(lean_object* v_a_1957_, lean_object* v_a_1958_){
_start:
{
if (lean_obj_tag(v_a_1957_) == 0)
{
lean_object* v___x_1959_; 
v___x_1959_ = l_List_reverse___redArg(v_a_1958_);
return v___x_1959_;
}
else
{
lean_object* v_head_1960_; lean_object* v_tail_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1970_; 
v_head_1960_ = lean_ctor_get(v_a_1957_, 0);
v_tail_1961_ = lean_ctor_get(v_a_1957_, 1);
v_isSharedCheck_1970_ = !lean_is_exclusive(v_a_1957_);
if (v_isSharedCheck_1970_ == 0)
{
v___x_1963_ = v_a_1957_;
v_isShared_1964_ = v_isSharedCheck_1970_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_tail_1961_);
lean_inc(v_head_1960_);
lean_dec(v_a_1957_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_1970_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
lean_object* v_varName_1965_; lean_object* v___x_1967_; 
v_varName_1965_ = lean_ctor_get(v_head_1960_, 1);
lean_inc(v_varName_1965_);
lean_dec(v_head_1960_);
if (v_isShared_1964_ == 0)
{
lean_ctor_set(v___x_1963_, 1, v_a_1958_);
lean_ctor_set(v___x_1963_, 0, v_varName_1965_);
v___x_1967_ = v___x_1963_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v_varName_1965_);
lean_ctor_set(v_reuseFailAlloc_1969_, 1, v_a_1958_);
v___x_1967_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
v_a_1957_ = v_tail_1961_;
v_a_1958_ = v___x_1967_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoFor_spec__11(size_t v_sz_1971_, size_t v_i_1972_, lean_object* v_bs_1973_){
_start:
{
uint8_t v___x_1974_; 
v___x_1974_ = lean_usize_dec_lt(v_i_1972_, v_sz_1971_);
if (v___x_1974_ == 0)
{
return v_bs_1973_;
}
else
{
lean_object* v_v_1975_; lean_object* v___x_1976_; lean_object* v_bs_x27_1977_; lean_object* v___x_1978_; size_t v___x_1979_; size_t v___x_1980_; lean_object* v___x_1981_; 
v_v_1975_ = lean_array_uget(v_bs_1973_, v_i_1972_);
v___x_1976_ = lean_unsigned_to_nat(0u);
v_bs_x27_1977_ = lean_array_uset(v_bs_1973_, v_i_1972_, v___x_1976_);
v___x_1978_ = l_Lean_TSyntax_getId(v_v_1975_);
lean_dec(v_v_1975_);
v___x_1979_ = ((size_t)1ULL);
v___x_1980_ = lean_usize_add(v_i_1972_, v___x_1979_);
v___x_1981_ = lean_array_uset(v_bs_x27_1977_, v_i_1972_, v___x_1978_);
v_i_1972_ = v___x_1980_;
v_bs_1973_ = v___x_1981_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoFor_spec__11___boxed(lean_object* v_sz_1983_, lean_object* v_i_1984_, lean_object* v_bs_1985_){
_start:
{
size_t v_sz_boxed_1986_; size_t v_i_boxed_1987_; lean_object* v_res_1988_; 
v_sz_boxed_1986_ = lean_unbox_usize(v_sz_1983_);
lean_dec(v_sz_1983_);
v_i_boxed_1987_ = lean_unbox_usize(v_i_1984_);
lean_dec(v_i_1984_);
v_res_1988_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoFor_spec__11(v_sz_boxed_1986_, v_i_boxed_1987_, v_bs_1985_);
return v_res_1988_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoFor_spec__12___redArg(lean_object* v_t_1989_, lean_object* v_k_1990_, lean_object* v_fallback_1991_){
_start:
{
if (lean_obj_tag(v_t_1989_) == 0)
{
lean_object* v_k_1992_; lean_object* v_v_1993_; lean_object* v_l_1994_; lean_object* v_r_1995_; uint8_t v___x_1996_; 
v_k_1992_ = lean_ctor_get(v_t_1989_, 1);
v_v_1993_ = lean_ctor_get(v_t_1989_, 2);
v_l_1994_ = lean_ctor_get(v_t_1989_, 3);
v_r_1995_ = lean_ctor_get(v_t_1989_, 4);
v___x_1996_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1990_, v_k_1992_);
switch(v___x_1996_)
{
case 0:
{
v_t_1989_ = v_l_1994_;
goto _start;
}
case 1:
{
lean_inc(v_v_1993_);
return v_v_1993_;
}
default: 
{
v_t_1989_ = v_r_1995_;
goto _start;
}
}
}
else
{
lean_inc(v_fallback_1991_);
return v_fallback_1991_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoFor_spec__12___redArg___boxed(lean_object* v_t_1999_, lean_object* v_k_2000_, lean_object* v_fallback_2001_){
_start:
{
lean_object* v_res_2002_; 
v_res_2002_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoFor_spec__12___redArg(v_t_1999_, v_k_2000_, v_fallback_2001_);
lean_dec(v_fallback_2001_);
lean_dec(v_k_2000_);
lean_dec(v_t_1999_);
return v_res_2002_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoFor_spec__12(lean_object* v_00_u03b4_2003_, lean_object* v_t_2004_, lean_object* v_k_2005_, lean_object* v_fallback_2006_){
_start:
{
lean_object* v___x_2007_; 
v___x_2007_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoFor_spec__12___redArg(v_t_2004_, v_k_2005_, v_fallback_2006_);
return v___x_2007_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoFor_spec__12___boxed(lean_object* v_00_u03b4_2008_, lean_object* v_t_2009_, lean_object* v_k_2010_, lean_object* v_fallback_2011_){
_start:
{
lean_object* v_res_2012_; 
v_res_2012_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoFor_spec__12(v_00_u03b4_2008_, v_t_2009_, v_k_2010_, v_fallback_2011_);
lean_dec(v_fallback_2011_);
lean_dec(v_k_2010_);
lean_dec(v_t_2009_);
return v_res_2012_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__4(void){
_start:
{
lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; 
v___x_2019_ = lean_box(0);
v___x_2020_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__3));
v___x_2021_ = l_Lean_mkConst(v___x_2020_, v___x_2019_);
return v___x_2021_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0(lean_object* v___x_2022_, lean_object* v___x_2023_, lean_object* v___x_2024_, lean_object* v_snd_2025_, lean_object* v___x_2026_, lean_object* v___x_2027_, lean_object* v_a_2028_, lean_object* v___y_2029_, lean_object* v___x_2030_, lean_object* v___x_2031_, lean_object* v_fired_x3f_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_){
_start:
{
lean_object* v_a_2042_; lean_object* v___y_2060_; lean_object* v___x_2070_; lean_object* v___x_2071_; size_t v_sz_2072_; size_t v___x_2073_; lean_object* v___x_2074_; 
v___x_2070_ = lean_mk_empty_array_with_capacity(v___x_2027_);
v___x_2071_ = l_Array_zipIdx___redArg(v_a_2028_, v___x_2027_);
v_sz_2072_ = lean_array_size(v___x_2071_);
v___x_2073_ = ((size_t)0ULL);
v___x_2074_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__8___redArg(v_fired_x3f_2032_, v___x_2071_, v_sz_2072_, v___x_2073_, v___x_2070_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_);
lean_dec_ref(v___x_2071_);
if (lean_obj_tag(v___x_2074_) == 0)
{
lean_object* v_a_2075_; size_t v_sz_2076_; lean_object* v___x_2077_; 
v_a_2075_ = lean_ctor_get(v___x_2074_, 0);
lean_inc(v_a_2075_);
lean_dec_ref_known(v___x_2074_, 1);
v_sz_2076_ = lean_array_size(v___y_2029_);
v___x_2077_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__9(v___x_2030_, v___y_2029_, v_sz_2076_, v___x_2073_, v_a_2075_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_);
if (lean_obj_tag(v___x_2077_) == 0)
{
lean_object* v_a_2078_; uint8_t v___y_2080_; lean_object* v___x_2083_; uint8_t v___x_2084_; 
v_a_2078_ = lean_ctor_get(v___x_2077_, 0);
lean_inc(v_a_2078_);
v___x_2083_ = lean_array_get_size(v_a_2028_);
v___x_2084_ = lean_nat_dec_eq(v___x_2083_, v___x_2031_);
if (v___x_2084_ == 0)
{
v___y_2080_ = v___x_2084_;
goto v___jp_2079_;
}
else
{
lean_object* v___x_2085_; uint8_t v___x_2086_; 
v___x_2085_ = lean_array_get_size(v___y_2029_);
v___x_2086_ = lean_nat_dec_eq(v___x_2085_, v___x_2027_);
v___y_2080_ = v___x_2086_;
goto v___jp_2079_;
}
v___jp_2079_:
{
if (v___y_2080_ == 0)
{
lean_dec(v_a_2078_);
v___y_2060_ = v___x_2077_;
goto v___jp_2059_;
}
else
{
lean_object* v___x_2081_; lean_object* v___x_2082_; 
lean_dec_ref_known(v___x_2077_, 1);
v___x_2081_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__4);
v___x_2082_ = lean_array_push(v_a_2078_, v___x_2081_);
v_a_2042_ = v___x_2082_;
goto v___jp_2041_;
}
}
}
else
{
v___y_2060_ = v___x_2077_;
goto v___jp_2059_;
}
}
else
{
lean_dec_ref(v___x_2030_);
v___y_2060_ = v___x_2074_;
goto v___jp_2059_;
}
v___jp_2041_:
{
lean_object* v___x_2043_; 
v___x_2043_ = l_Lean_Meta_mkProdMkN(v_a_2042_, v___x_2022_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_);
if (lean_obj_tag(v___x_2043_) == 0)
{
lean_object* v_a_2044_; lean_object* v_fst_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; 
v_a_2044_ = lean_ctor_get(v___x_2043_, 0);
lean_inc(v_a_2044_);
lean_dec_ref_known(v___x_2043_, 1);
v_fst_2045_ = lean_ctor_get(v_a_2044_, 0);
lean_inc(v_fst_2045_);
lean_dec(v_a_2044_);
v___x_2046_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__0));
v___x_2047_ = l_Lean_Name_mkStr2(v___x_2023_, v___x_2046_);
v___x_2048_ = l_Lean_mkConst(v___x_2047_, v___x_2024_);
v___x_2049_ = l_Lean_mkAppB(v___x_2048_, v_snd_2025_, v_fst_2045_);
v___x_2050_ = l_Lean_Elab_Do_mkPureApp(v___x_2026_, v___x_2049_, v___y_2033_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_);
return v___x_2050_;
}
else
{
lean_object* v_a_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2058_; 
lean_dec_ref(v___x_2026_);
lean_dec_ref(v_snd_2025_);
lean_dec(v___x_2024_);
lean_dec_ref(v___x_2023_);
v_a_2051_ = lean_ctor_get(v___x_2043_, 0);
v_isSharedCheck_2058_ = !lean_is_exclusive(v___x_2043_);
if (v_isSharedCheck_2058_ == 0)
{
v___x_2053_ = v___x_2043_;
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_a_2051_);
lean_dec(v___x_2043_);
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
v___jp_2059_:
{
if (lean_obj_tag(v___y_2060_) == 0)
{
lean_object* v_a_2061_; 
v_a_2061_ = lean_ctor_get(v___y_2060_, 0);
lean_inc(v_a_2061_);
lean_dec_ref_known(v___y_2060_, 1);
v_a_2042_ = v_a_2061_;
goto v___jp_2041_;
}
else
{
lean_object* v_a_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2069_; 
lean_dec_ref(v___x_2026_);
lean_dec_ref(v_snd_2025_);
lean_dec(v___x_2024_);
lean_dec_ref(v___x_2023_);
lean_dec(v___x_2022_);
v_a_2062_ = lean_ctor_get(v___y_2060_, 0);
v_isSharedCheck_2069_ = !lean_is_exclusive(v___y_2060_);
if (v_isSharedCheck_2069_ == 0)
{
v___x_2064_ = v___y_2060_;
v_isShared_2065_ = v_isSharedCheck_2069_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_a_2062_);
lean_dec(v___y_2060_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2069_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2067_; 
if (v_isShared_2065_ == 0)
{
v___x_2067_ = v___x_2064_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v_a_2062_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
return v___x_2067_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___boxed(lean_object** _args){
lean_object* v___x_2087_ = _args[0];
lean_object* v___x_2088_ = _args[1];
lean_object* v___x_2089_ = _args[2];
lean_object* v_snd_2090_ = _args[3];
lean_object* v___x_2091_ = _args[4];
lean_object* v___x_2092_ = _args[5];
lean_object* v_a_2093_ = _args[6];
lean_object* v___y_2094_ = _args[7];
lean_object* v___x_2095_ = _args[8];
lean_object* v___x_2096_ = _args[9];
lean_object* v_fired_x3f_2097_ = _args[10];
lean_object* v___y_2098_ = _args[11];
lean_object* v___y_2099_ = _args[12];
lean_object* v___y_2100_ = _args[13];
lean_object* v___y_2101_ = _args[14];
lean_object* v___y_2102_ = _args[15];
lean_object* v___y_2103_ = _args[16];
lean_object* v___y_2104_ = _args[17];
lean_object* v___y_2105_ = _args[18];
_start:
{
lean_object* v_res_2106_; 
v_res_2106_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0(v___x_2087_, v___x_2088_, v___x_2089_, v_snd_2090_, v___x_2091_, v___x_2092_, v_a_2093_, v___y_2094_, v___x_2095_, v___x_2096_, v_fired_x3f_2097_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_);
lean_dec(v___y_2104_);
lean_dec_ref(v___y_2103_);
lean_dec(v___y_2102_);
lean_dec_ref(v___y_2101_);
lean_dec(v___y_2100_);
lean_dec_ref(v___y_2099_);
lean_dec_ref(v___y_2098_);
lean_dec(v___x_2096_);
lean_dec_ref(v___y_2094_);
lean_dec_ref(v_a_2093_);
lean_dec(v___x_2092_);
return v_res_2106_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__1(lean_object* v_snd_2107_, lean_object* v___f_2108_, lean_object* v_e_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_){
_start:
{
lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; 
v___x_2118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2118_, 0, v_snd_2107_);
lean_ctor_set(v___x_2118_, 1, v_e_2109_);
v___x_2119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2119_, 0, v___x_2118_);
lean_inc(v___y_2116_);
lean_inc_ref(v___y_2115_);
lean_inc(v___y_2114_);
lean_inc_ref(v___y_2113_);
lean_inc(v___y_2112_);
lean_inc_ref(v___y_2111_);
lean_inc_ref(v___y_2110_);
v___x_2120_ = lean_apply_9(v___f_2108_, v___x_2119_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_, lean_box(0));
return v___x_2120_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__1___boxed(lean_object* v_snd_2121_, lean_object* v___f_2122_, lean_object* v_e_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_){
_start:
{
lean_object* v_res_2132_; 
v_res_2132_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__1(v_snd_2121_, v___f_2122_, v_e_2123_, v___y_2124_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_);
lean_dec(v___y_2130_);
lean_dec_ref(v___y_2129_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2127_);
lean_dec(v___y_2126_);
lean_dec_ref(v___y_2125_);
lean_dec_ref(v___y_2124_);
return v_res_2132_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__2(lean_object* v_snd_2133_, lean_object* v___f_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_){
_start:
{
lean_object* v___x_2143_; 
v___x_2143_ = l_Lean_Elab_Do_mkPUnitUnit___redArg(v___y_2135_);
if (lean_obj_tag(v___x_2143_) == 0)
{
lean_object* v_a_2144_; lean_object* v___x_2146_; uint8_t v_isShared_2147_; uint8_t v_isSharedCheck_2153_; 
v_a_2144_ = lean_ctor_get(v___x_2143_, 0);
v_isSharedCheck_2153_ = !lean_is_exclusive(v___x_2143_);
if (v_isSharedCheck_2153_ == 0)
{
v___x_2146_ = v___x_2143_;
v_isShared_2147_ = v_isSharedCheck_2153_;
goto v_resetjp_2145_;
}
else
{
lean_inc(v_a_2144_);
lean_dec(v___x_2143_);
v___x_2146_ = lean_box(0);
v_isShared_2147_ = v_isSharedCheck_2153_;
goto v_resetjp_2145_;
}
v_resetjp_2145_:
{
lean_object* v___x_2148_; lean_object* v___x_2150_; 
v___x_2148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2148_, 0, v_snd_2133_);
lean_ctor_set(v___x_2148_, 1, v_a_2144_);
if (v_isShared_2147_ == 0)
{
lean_ctor_set_tag(v___x_2146_, 1);
lean_ctor_set(v___x_2146_, 0, v___x_2148_);
v___x_2150_ = v___x_2146_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v___x_2148_);
v___x_2150_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
lean_object* v___x_2151_; 
lean_inc(v___y_2141_);
lean_inc_ref(v___y_2140_);
lean_inc(v___y_2139_);
lean_inc_ref(v___y_2138_);
lean_inc(v___y_2137_);
lean_inc_ref(v___y_2136_);
lean_inc_ref(v___y_2135_);
v___x_2151_ = lean_apply_9(v___f_2134_, v___x_2150_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_, v___y_2139_, v___y_2140_, v___y_2141_, lean_box(0));
return v___x_2151_;
}
}
}
else
{
lean_dec_ref(v___f_2134_);
lean_dec(v_snd_2133_);
return v___x_2143_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__2___boxed(lean_object* v_snd_2154_, lean_object* v___f_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_){
_start:
{
lean_object* v_res_2164_; 
v_res_2164_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__2(v_snd_2154_, v___f_2155_, v___y_2156_, v___y_2157_, v___y_2158_, v___y_2159_, v___y_2160_, v___y_2161_, v___y_2162_);
lean_dec(v___y_2162_);
lean_dec_ref(v___y_2161_);
lean_dec(v___y_2160_);
lean_dec_ref(v___y_2159_);
lean_dec(v___y_2158_);
lean_dec_ref(v___y_2157_);
lean_dec_ref(v___y_2156_);
return v_res_2164_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___redArg(lean_object* v___x_2168_, lean_object* v___x_2169_, lean_object* v_snd_2170_, lean_object* v___x_2171_, lean_object* v_a_2172_, lean_object* v___y_2173_, lean_object* v___x_2174_, lean_object* v___x_2175_, lean_object* v_as_2176_, size_t v_sz_2177_, size_t v_i_2178_, lean_object* v_b_2179_){
_start:
{
lean_object* v_a_2182_; uint8_t v___x_2186_; 
v___x_2186_ = lean_usize_dec_lt(v_i_2178_, v_sz_2177_);
if (v___x_2186_ == 0)
{
lean_object* v___x_2187_; 
lean_dec_ref(v___x_2175_);
lean_dec_ref(v___x_2174_);
lean_dec_ref(v___y_2173_);
lean_dec_ref(v_a_2172_);
lean_dec_ref(v___x_2171_);
lean_dec_ref(v_snd_2170_);
lean_dec(v___x_2169_);
lean_dec(v___x_2168_);
v___x_2187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2187_, 0, v_b_2179_);
return v___x_2187_;
}
else
{
lean_object* v_a_2188_; lean_object* v_snd_2189_; lean_object* v_snd_2190_; lean_object* v_snd_2191_; lean_object* v_fst_2192_; lean_object* v_snd_2193_; lean_object* v___x_2195_; uint8_t v_isShared_2196_; uint8_t v_isSharedCheck_2344_; 
v_a_2188_ = lean_array_uget(v_as_2176_, v_i_2178_);
v_snd_2189_ = lean_ctor_get(v_b_2179_, 1);
lean_inc(v_snd_2189_);
v_snd_2190_ = lean_ctor_get(v_snd_2189_, 1);
lean_inc(v_snd_2190_);
v_snd_2191_ = lean_ctor_get(v_snd_2190_, 1);
lean_inc(v_snd_2191_);
v_fst_2192_ = lean_ctor_get(v_a_2188_, 0);
v_snd_2193_ = lean_ctor_get(v_a_2188_, 1);
v_isSharedCheck_2344_ = !lean_is_exclusive(v_a_2188_);
if (v_isSharedCheck_2344_ == 0)
{
v___x_2195_ = v_a_2188_;
v_isShared_2196_ = v_isSharedCheck_2344_;
goto v_resetjp_2194_;
}
else
{
lean_inc(v_snd_2193_);
lean_inc(v_fst_2192_);
lean_dec(v_a_2188_);
v___x_2195_ = lean_box(0);
v_isShared_2196_ = v_isSharedCheck_2344_;
goto v_resetjp_2194_;
}
v_resetjp_2194_:
{
lean_object* v_fst_2197_; lean_object* v___x_2199_; uint8_t v_isShared_2200_; uint8_t v_isSharedCheck_2342_; 
v_fst_2197_ = lean_ctor_get(v_b_2179_, 0);
v_isSharedCheck_2342_ = !lean_is_exclusive(v_b_2179_);
if (v_isSharedCheck_2342_ == 0)
{
lean_object* v_unused_2343_; 
v_unused_2343_ = lean_ctor_get(v_b_2179_, 1);
lean_dec(v_unused_2343_);
v___x_2199_ = v_b_2179_;
v_isShared_2200_ = v_isSharedCheck_2342_;
goto v_resetjp_2198_;
}
else
{
lean_inc(v_fst_2197_);
lean_dec(v_b_2179_);
v___x_2199_ = lean_box(0);
v_isShared_2200_ = v_isSharedCheck_2342_;
goto v_resetjp_2198_;
}
v_resetjp_2198_:
{
lean_object* v_fst_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2340_; 
v_fst_2201_ = lean_ctor_get(v_snd_2189_, 0);
v_isSharedCheck_2340_ = !lean_is_exclusive(v_snd_2189_);
if (v_isSharedCheck_2340_ == 0)
{
lean_object* v_unused_2341_; 
v_unused_2341_ = lean_ctor_get(v_snd_2189_, 1);
lean_dec(v_unused_2341_);
v___x_2203_ = v_snd_2189_;
v_isShared_2204_ = v_isSharedCheck_2340_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_fst_2201_);
lean_dec(v_snd_2189_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2340_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
lean_object* v_fst_2205_; lean_object* v___x_2207_; uint8_t v_isShared_2208_; uint8_t v_isSharedCheck_2338_; 
v_fst_2205_ = lean_ctor_get(v_snd_2190_, 0);
v_isSharedCheck_2338_ = !lean_is_exclusive(v_snd_2190_);
if (v_isSharedCheck_2338_ == 0)
{
lean_object* v_unused_2339_; 
v_unused_2339_ = lean_ctor_get(v_snd_2190_, 1);
lean_dec(v_unused_2339_);
v___x_2207_ = v_snd_2190_;
v_isShared_2208_ = v_isSharedCheck_2338_;
goto v_resetjp_2206_;
}
else
{
lean_inc(v_fst_2205_);
lean_dec(v_snd_2190_);
v___x_2207_ = lean_box(0);
v_isShared_2208_ = v_isSharedCheck_2338_;
goto v_resetjp_2206_;
}
v_resetjp_2206_:
{
lean_object* v_fst_2209_; lean_object* v_snd_2210_; lean_object* v___x_2212_; uint8_t v_isShared_2213_; uint8_t v_isSharedCheck_2337_; 
v_fst_2209_ = lean_ctor_get(v_snd_2191_, 0);
v_snd_2210_ = lean_ctor_get(v_snd_2191_, 1);
v_isSharedCheck_2337_ = !lean_is_exclusive(v_snd_2191_);
if (v_isSharedCheck_2337_ == 0)
{
v___x_2212_ = v_snd_2191_;
v_isShared_2213_ = v_isSharedCheck_2337_;
goto v_resetjp_2211_;
}
else
{
lean_inc(v_snd_2210_);
lean_inc(v_fst_2209_);
lean_dec(v_snd_2191_);
v___x_2212_ = lean_box(0);
v_isShared_2213_ = v_isSharedCheck_2337_;
goto v_resetjp_2211_;
}
v_resetjp_2211_:
{
lean_object* v_label_2214_; uint8_t v_kind_2215_; lean_object* v_payloadType_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___f_2220_; 
v_label_2214_ = lean_ctor_get(v_fst_2192_, 0);
lean_inc(v_label_2214_);
v_kind_2215_ = lean_ctor_get_uint8(v_fst_2192_, sizeof(void*)*4);
v_payloadType_2216_ = lean_ctor_get(v_fst_2192_, 2);
lean_inc_ref(v_payloadType_2216_);
lean_dec(v_fst_2192_);
v___x_2217_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___redArg___closed__0));
v___x_2218_ = lean_unsigned_to_nat(0u);
v___x_2219_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v___x_2174_);
lean_inc_ref(v___y_2173_);
lean_inc_ref(v_a_2172_);
lean_inc_ref(v___x_2171_);
lean_inc_ref(v_snd_2170_);
lean_inc(v___x_2169_);
lean_inc(v___x_2168_);
v___f_2220_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___boxed), 19, 10);
lean_closure_set(v___f_2220_, 0, v___x_2168_);
lean_closure_set(v___f_2220_, 1, v___x_2217_);
lean_closure_set(v___f_2220_, 2, v___x_2169_);
lean_closure_set(v___f_2220_, 3, v_snd_2170_);
lean_closure_set(v___f_2220_, 4, v___x_2171_);
lean_closure_set(v___f_2220_, 5, v___x_2218_);
lean_closure_set(v___f_2220_, 6, v_a_2172_);
lean_closure_set(v___f_2220_, 7, v___y_2173_);
lean_closure_set(v___f_2220_, 8, v___x_2174_);
lean_closure_set(v___f_2220_, 9, v___x_2219_);
switch(v_kind_2215_)
{
case 0:
{
lean_object* v___f_2221_; lean_object* v___x_2222_; uint8_t v___x_2223_; 
v___f_2221_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__1___boxed), 11, 2);
lean_closure_set(v___f_2221_, 0, v_snd_2193_);
lean_closure_set(v___f_2221_, 1, v___f_2220_);
v___x_2222_ = lean_box(0);
v___x_2223_ = lean_name_eq(v_label_2214_, v___x_2222_);
if (v___x_2223_ == 0)
{
lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2227_; 
v___x_2224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2224_, 0, v_payloadType_2216_);
lean_ctor_set(v___x_2224_, 1, v___f_2221_);
v___x_2225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2225_, 0, v___x_2224_);
if (v_isShared_2213_ == 0)
{
lean_ctor_set(v___x_2212_, 1, v___x_2225_);
lean_ctor_set(v___x_2212_, 0, v_label_2214_);
v___x_2227_ = v___x_2212_;
goto v_reusejp_2226_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_label_2214_);
lean_ctor_set(v_reuseFailAlloc_2241_, 1, v___x_2225_);
v___x_2227_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
lean_object* v___x_2228_; lean_object* v___x_2230_; 
v___x_2228_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2228_, 0, v___x_2227_);
lean_ctor_set(v___x_2228_, 1, v_fst_2205_);
if (v_isShared_2208_ == 0)
{
lean_ctor_set(v___x_2207_, 1, v_snd_2210_);
lean_ctor_set(v___x_2207_, 0, v_fst_2209_);
v___x_2230_ = v___x_2207_;
goto v_reusejp_2229_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v_fst_2209_);
lean_ctor_set(v_reuseFailAlloc_2240_, 1, v_snd_2210_);
v___x_2230_ = v_reuseFailAlloc_2240_;
goto v_reusejp_2229_;
}
v_reusejp_2229_:
{
lean_object* v___x_2232_; 
if (v_isShared_2204_ == 0)
{
lean_ctor_set(v___x_2203_, 1, v___x_2230_);
lean_ctor_set(v___x_2203_, 0, v___x_2228_);
v___x_2232_ = v___x_2203_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2239_; 
v_reuseFailAlloc_2239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2239_, 0, v___x_2228_);
lean_ctor_set(v_reuseFailAlloc_2239_, 1, v___x_2230_);
v___x_2232_ = v_reuseFailAlloc_2239_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
lean_object* v___x_2234_; 
if (v_isShared_2200_ == 0)
{
lean_ctor_set(v___x_2199_, 1, v___x_2232_);
lean_ctor_set(v___x_2199_, 0, v_fst_2201_);
v___x_2234_ = v___x_2199_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2238_; 
v_reuseFailAlloc_2238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2238_, 0, v_fst_2201_);
lean_ctor_set(v_reuseFailAlloc_2238_, 1, v___x_2232_);
v___x_2234_ = v_reuseFailAlloc_2238_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
lean_object* v___x_2236_; 
if (v_isShared_2196_ == 0)
{
lean_ctor_set(v___x_2195_, 1, v___x_2234_);
lean_ctor_set(v___x_2195_, 0, v_fst_2197_);
v___x_2236_ = v___x_2195_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_fst_2197_);
lean_ctor_set(v_reuseFailAlloc_2237_, 1, v___x_2234_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
v_a_2182_ = v___x_2236_;
goto v___jp_2181_;
}
}
}
}
}
}
else
{
lean_object* v___x_2242_; lean_object* v___x_2244_; 
lean_dec_ref(v_payloadType_2216_);
lean_dec(v_label_2214_);
lean_dec(v_fst_2197_);
lean_del_object(v___x_2195_);
lean_inc_ref(v___x_2175_);
v___x_2242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2242_, 0, v___x_2175_);
lean_ctor_set(v___x_2242_, 1, v___f_2221_);
if (v_isShared_2213_ == 0)
{
v___x_2244_ = v___x_2212_;
goto v_reusejp_2243_;
}
else
{
lean_object* v_reuseFailAlloc_2254_; 
v_reuseFailAlloc_2254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2254_, 0, v_fst_2209_);
lean_ctor_set(v_reuseFailAlloc_2254_, 1, v_snd_2210_);
v___x_2244_ = v_reuseFailAlloc_2254_;
goto v_reusejp_2243_;
}
v_reusejp_2243_:
{
lean_object* v___x_2246_; 
if (v_isShared_2208_ == 0)
{
lean_ctor_set(v___x_2207_, 1, v___x_2244_);
v___x_2246_ = v___x_2207_;
goto v_reusejp_2245_;
}
else
{
lean_object* v_reuseFailAlloc_2253_; 
v_reuseFailAlloc_2253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2253_, 0, v_fst_2205_);
lean_ctor_set(v_reuseFailAlloc_2253_, 1, v___x_2244_);
v___x_2246_ = v_reuseFailAlloc_2253_;
goto v_reusejp_2245_;
}
v_reusejp_2245_:
{
lean_object* v___x_2248_; 
if (v_isShared_2204_ == 0)
{
lean_ctor_set(v___x_2203_, 1, v___x_2246_);
v___x_2248_ = v___x_2203_;
goto v_reusejp_2247_;
}
else
{
lean_object* v_reuseFailAlloc_2252_; 
v_reuseFailAlloc_2252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2252_, 0, v_fst_2201_);
lean_ctor_set(v_reuseFailAlloc_2252_, 1, v___x_2246_);
v___x_2248_ = v_reuseFailAlloc_2252_;
goto v_reusejp_2247_;
}
v_reusejp_2247_:
{
lean_object* v___x_2250_; 
if (v_isShared_2200_ == 0)
{
lean_ctor_set(v___x_2199_, 1, v___x_2248_);
lean_ctor_set(v___x_2199_, 0, v___x_2242_);
v___x_2250_ = v___x_2199_;
goto v_reusejp_2249_;
}
else
{
lean_object* v_reuseFailAlloc_2251_; 
v_reuseFailAlloc_2251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2251_, 0, v___x_2242_);
lean_ctor_set(v_reuseFailAlloc_2251_, 1, v___x_2248_);
v___x_2250_ = v_reuseFailAlloc_2251_;
goto v_reusejp_2249_;
}
v_reusejp_2249_:
{
v_a_2182_ = v___x_2250_;
goto v___jp_2181_;
}
}
}
}
}
}
case 1:
{
lean_object* v___f_2255_; lean_object* v___x_2256_; uint8_t v___x_2257_; 
lean_dec_ref(v_payloadType_2216_);
lean_del_object(v___x_2195_);
v___f_2255_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__2___boxed), 10, 2);
lean_closure_set(v___f_2255_, 0, v_snd_2193_);
lean_closure_set(v___f_2255_, 1, v___f_2220_);
v___x_2256_ = lean_box(0);
v___x_2257_ = lean_name_eq(v_label_2214_, v___x_2256_);
if (v___x_2257_ == 0)
{
lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v_snd_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2281_; 
v___x_2258_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___redArg___closed__1));
v___x_2259_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoFor_spec__12___redArg(v_fst_2201_, v_label_2214_, v___x_2258_);
v_snd_2260_ = lean_ctor_get(v___x_2259_, 1);
v_isSharedCheck_2281_ = !lean_is_exclusive(v___x_2259_);
if (v_isSharedCheck_2281_ == 0)
{
lean_object* v_unused_2282_; 
v_unused_2282_ = lean_ctor_get(v___x_2259_, 0);
lean_dec(v_unused_2282_);
v___x_2262_ = v___x_2259_;
v_isShared_2263_ = v_isSharedCheck_2281_;
goto v_resetjp_2261_;
}
else
{
lean_inc(v_snd_2260_);
lean_dec(v___x_2259_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2281_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
lean_object* v___x_2264_; lean_object* v___x_2266_; 
v___x_2264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2264_, 0, v___f_2255_);
if (v_isShared_2263_ == 0)
{
lean_ctor_set(v___x_2262_, 0, v___x_2264_);
v___x_2266_ = v___x_2262_;
goto v_reusejp_2265_;
}
else
{
lean_object* v_reuseFailAlloc_2280_; 
v_reuseFailAlloc_2280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2280_, 0, v___x_2264_);
lean_ctor_set(v_reuseFailAlloc_2280_, 1, v_snd_2260_);
v___x_2266_ = v_reuseFailAlloc_2280_;
goto v_reusejp_2265_;
}
v_reusejp_2265_:
{
lean_object* v___x_2267_; lean_object* v___x_2269_; 
v___x_2267_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_label_2214_, v___x_2266_, v_fst_2201_);
if (v_isShared_2213_ == 0)
{
v___x_2269_ = v___x_2212_;
goto v_reusejp_2268_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v_fst_2209_);
lean_ctor_set(v_reuseFailAlloc_2279_, 1, v_snd_2210_);
v___x_2269_ = v_reuseFailAlloc_2279_;
goto v_reusejp_2268_;
}
v_reusejp_2268_:
{
lean_object* v___x_2271_; 
if (v_isShared_2208_ == 0)
{
lean_ctor_set(v___x_2207_, 1, v___x_2269_);
v___x_2271_ = v___x_2207_;
goto v_reusejp_2270_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v_fst_2205_);
lean_ctor_set(v_reuseFailAlloc_2278_, 1, v___x_2269_);
v___x_2271_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2270_;
}
v_reusejp_2270_:
{
lean_object* v___x_2273_; 
if (v_isShared_2204_ == 0)
{
lean_ctor_set(v___x_2203_, 1, v___x_2271_);
lean_ctor_set(v___x_2203_, 0, v___x_2267_);
v___x_2273_ = v___x_2203_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v___x_2267_);
lean_ctor_set(v_reuseFailAlloc_2277_, 1, v___x_2271_);
v___x_2273_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
lean_object* v___x_2275_; 
if (v_isShared_2200_ == 0)
{
lean_ctor_set(v___x_2199_, 1, v___x_2273_);
v___x_2275_ = v___x_2199_;
goto v_reusejp_2274_;
}
else
{
lean_object* v_reuseFailAlloc_2276_; 
v_reuseFailAlloc_2276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2276_, 0, v_fst_2197_);
lean_ctor_set(v_reuseFailAlloc_2276_, 1, v___x_2273_);
v___x_2275_ = v_reuseFailAlloc_2276_;
goto v_reusejp_2274_;
}
v_reusejp_2274_:
{
v_a_2182_ = v___x_2275_;
goto v___jp_2181_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2283_; lean_object* v___x_2285_; 
lean_dec(v_label_2214_);
lean_dec(v_fst_2209_);
v___x_2283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2283_, 0, v___f_2255_);
if (v_isShared_2213_ == 0)
{
lean_ctor_set(v___x_2212_, 0, v___x_2283_);
v___x_2285_ = v___x_2212_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v___x_2283_);
lean_ctor_set(v_reuseFailAlloc_2295_, 1, v_snd_2210_);
v___x_2285_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
lean_object* v___x_2287_; 
if (v_isShared_2208_ == 0)
{
lean_ctor_set(v___x_2207_, 1, v___x_2285_);
v___x_2287_ = v___x_2207_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v_fst_2205_);
lean_ctor_set(v_reuseFailAlloc_2294_, 1, v___x_2285_);
v___x_2287_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
lean_object* v___x_2289_; 
if (v_isShared_2204_ == 0)
{
lean_ctor_set(v___x_2203_, 1, v___x_2287_);
v___x_2289_ = v___x_2203_;
goto v_reusejp_2288_;
}
else
{
lean_object* v_reuseFailAlloc_2293_; 
v_reuseFailAlloc_2293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2293_, 0, v_fst_2201_);
lean_ctor_set(v_reuseFailAlloc_2293_, 1, v___x_2287_);
v___x_2289_ = v_reuseFailAlloc_2293_;
goto v_reusejp_2288_;
}
v_reusejp_2288_:
{
lean_object* v___x_2291_; 
if (v_isShared_2200_ == 0)
{
lean_ctor_set(v___x_2199_, 1, v___x_2289_);
v___x_2291_ = v___x_2199_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v_fst_2197_);
lean_ctor_set(v_reuseFailAlloc_2292_, 1, v___x_2289_);
v___x_2291_ = v_reuseFailAlloc_2292_;
goto v_reusejp_2290_;
}
v_reusejp_2290_:
{
v_a_2182_ = v___x_2291_;
goto v___jp_2181_;
}
}
}
}
}
}
default: 
{
lean_object* v___f_2296_; lean_object* v___x_2297_; uint8_t v___x_2298_; 
lean_dec_ref(v_payloadType_2216_);
lean_del_object(v___x_2195_);
v___f_2296_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__2___boxed), 10, 2);
lean_closure_set(v___f_2296_, 0, v_snd_2193_);
lean_closure_set(v___f_2296_, 1, v___f_2220_);
v___x_2297_ = lean_box(0);
v___x_2298_ = lean_name_eq(v_label_2214_, v___x_2297_);
if (v___x_2298_ == 0)
{
lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v_fst_2301_; lean_object* v___x_2303_; uint8_t v_isShared_2304_; uint8_t v_isSharedCheck_2322_; 
v___x_2299_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___redArg___closed__1));
v___x_2300_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoFor_spec__12___redArg(v_fst_2201_, v_label_2214_, v___x_2299_);
v_fst_2301_ = lean_ctor_get(v___x_2300_, 0);
v_isSharedCheck_2322_ = !lean_is_exclusive(v___x_2300_);
if (v_isSharedCheck_2322_ == 0)
{
lean_object* v_unused_2323_; 
v_unused_2323_ = lean_ctor_get(v___x_2300_, 1);
lean_dec(v_unused_2323_);
v___x_2303_ = v___x_2300_;
v_isShared_2304_ = v_isSharedCheck_2322_;
goto v_resetjp_2302_;
}
else
{
lean_inc(v_fst_2301_);
lean_dec(v___x_2300_);
v___x_2303_ = lean_box(0);
v_isShared_2304_ = v_isSharedCheck_2322_;
goto v_resetjp_2302_;
}
v_resetjp_2302_:
{
lean_object* v___x_2305_; lean_object* v___x_2307_; 
v___x_2305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2305_, 0, v___f_2296_);
if (v_isShared_2304_ == 0)
{
lean_ctor_set(v___x_2303_, 1, v___x_2305_);
v___x_2307_ = v___x_2303_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v_fst_2301_);
lean_ctor_set(v_reuseFailAlloc_2321_, 1, v___x_2305_);
v___x_2307_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
lean_object* v___x_2308_; lean_object* v___x_2310_; 
v___x_2308_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_label_2214_, v___x_2307_, v_fst_2201_);
if (v_isShared_2213_ == 0)
{
v___x_2310_ = v___x_2212_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v_fst_2209_);
lean_ctor_set(v_reuseFailAlloc_2320_, 1, v_snd_2210_);
v___x_2310_ = v_reuseFailAlloc_2320_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
lean_object* v___x_2312_; 
if (v_isShared_2208_ == 0)
{
lean_ctor_set(v___x_2207_, 1, v___x_2310_);
v___x_2312_ = v___x_2207_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_fst_2205_);
lean_ctor_set(v_reuseFailAlloc_2319_, 1, v___x_2310_);
v___x_2312_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
lean_object* v___x_2314_; 
if (v_isShared_2204_ == 0)
{
lean_ctor_set(v___x_2203_, 1, v___x_2312_);
lean_ctor_set(v___x_2203_, 0, v___x_2308_);
v___x_2314_ = v___x_2203_;
goto v_reusejp_2313_;
}
else
{
lean_object* v_reuseFailAlloc_2318_; 
v_reuseFailAlloc_2318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2318_, 0, v___x_2308_);
lean_ctor_set(v_reuseFailAlloc_2318_, 1, v___x_2312_);
v___x_2314_ = v_reuseFailAlloc_2318_;
goto v_reusejp_2313_;
}
v_reusejp_2313_:
{
lean_object* v___x_2316_; 
if (v_isShared_2200_ == 0)
{
lean_ctor_set(v___x_2199_, 1, v___x_2314_);
v___x_2316_ = v___x_2199_;
goto v_reusejp_2315_;
}
else
{
lean_object* v_reuseFailAlloc_2317_; 
v_reuseFailAlloc_2317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2317_, 0, v_fst_2197_);
lean_ctor_set(v_reuseFailAlloc_2317_, 1, v___x_2314_);
v___x_2316_ = v_reuseFailAlloc_2317_;
goto v_reusejp_2315_;
}
v_reusejp_2315_:
{
v_a_2182_ = v___x_2316_;
goto v___jp_2181_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2324_; lean_object* v___x_2326_; 
lean_dec(v_label_2214_);
lean_dec(v_snd_2210_);
v___x_2324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2324_, 0, v___f_2296_);
if (v_isShared_2213_ == 0)
{
lean_ctor_set(v___x_2212_, 1, v___x_2324_);
v___x_2326_ = v___x_2212_;
goto v_reusejp_2325_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v_fst_2209_);
lean_ctor_set(v_reuseFailAlloc_2336_, 1, v___x_2324_);
v___x_2326_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2325_;
}
v_reusejp_2325_:
{
lean_object* v___x_2328_; 
if (v_isShared_2208_ == 0)
{
lean_ctor_set(v___x_2207_, 1, v___x_2326_);
v___x_2328_ = v___x_2207_;
goto v_reusejp_2327_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v_fst_2205_);
lean_ctor_set(v_reuseFailAlloc_2335_, 1, v___x_2326_);
v___x_2328_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2327_;
}
v_reusejp_2327_:
{
lean_object* v___x_2330_; 
if (v_isShared_2204_ == 0)
{
lean_ctor_set(v___x_2203_, 1, v___x_2328_);
v___x_2330_ = v___x_2203_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2334_; 
v_reuseFailAlloc_2334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2334_, 0, v_fst_2201_);
lean_ctor_set(v_reuseFailAlloc_2334_, 1, v___x_2328_);
v___x_2330_ = v_reuseFailAlloc_2334_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
lean_object* v___x_2332_; 
if (v_isShared_2200_ == 0)
{
lean_ctor_set(v___x_2199_, 1, v___x_2330_);
v___x_2332_ = v___x_2199_;
goto v_reusejp_2331_;
}
else
{
lean_object* v_reuseFailAlloc_2333_; 
v_reuseFailAlloc_2333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2333_, 0, v_fst_2197_);
lean_ctor_set(v_reuseFailAlloc_2333_, 1, v___x_2330_);
v___x_2332_ = v_reuseFailAlloc_2333_;
goto v_reusejp_2331_;
}
v_reusejp_2331_:
{
v_a_2182_ = v___x_2332_;
goto v___jp_2181_;
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
v___jp_2181_:
{
size_t v___x_2183_; size_t v___x_2184_; 
v___x_2183_ = ((size_t)1ULL);
v___x_2184_ = lean_usize_add(v_i_2178_, v___x_2183_);
v_i_2178_ = v___x_2184_;
v_b_2179_ = v_a_2182_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___redArg___boxed(lean_object* v___x_2345_, lean_object* v___x_2346_, lean_object* v_snd_2347_, lean_object* v___x_2348_, lean_object* v_a_2349_, lean_object* v___y_2350_, lean_object* v___x_2351_, lean_object* v___x_2352_, lean_object* v_as_2353_, lean_object* v_sz_2354_, lean_object* v_i_2355_, lean_object* v_b_2356_, lean_object* v___y_2357_){
_start:
{
size_t v_sz_boxed_2358_; size_t v_i_boxed_2359_; lean_object* v_res_2360_; 
v_sz_boxed_2358_ = lean_unbox_usize(v_sz_2354_);
lean_dec(v_sz_2354_);
v_i_boxed_2359_ = lean_unbox_usize(v_i_2355_);
lean_dec(v_i_2355_);
v_res_2360_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___redArg(v___x_2345_, v___x_2346_, v_snd_2347_, v___x_2348_, v_a_2349_, v___y_2350_, v___x_2351_, v___x_2352_, v_as_2353_, v_sz_boxed_2358_, v_i_boxed_2359_, v_b_2356_);
lean_dec_ref(v_as_2353_);
return v_res_2360_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13(lean_object* v_a_2361_, lean_object* v___y_2362_, lean_object* v___x_2363_, lean_object* v___x_2364_, lean_object* v___x_2365_, lean_object* v_snd_2366_, lean_object* v___x_2367_, lean_object* v___x_2368_, lean_object* v_as_2369_, size_t v_sz_2370_, size_t v_i_2371_, lean_object* v_b_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_){
_start:
{
lean_object* v_a_2382_; uint8_t v___x_2386_; 
v___x_2386_ = lean_usize_dec_lt(v_i_2371_, v_sz_2370_);
if (v___x_2386_ == 0)
{
lean_object* v___x_2387_; 
lean_dec_ref(v___x_2368_);
lean_dec_ref(v___x_2367_);
lean_dec_ref(v_snd_2366_);
lean_dec(v___x_2365_);
lean_dec(v___x_2364_);
lean_dec_ref(v___x_2363_);
lean_dec_ref(v___y_2362_);
lean_dec_ref(v_a_2361_);
v___x_2387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2387_, 0, v_b_2372_);
return v___x_2387_;
}
else
{
lean_object* v_a_2388_; lean_object* v_snd_2389_; lean_object* v_snd_2390_; lean_object* v_snd_2391_; lean_object* v_fst_2392_; lean_object* v_snd_2393_; lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2544_; 
v_a_2388_ = lean_array_uget(v_as_2369_, v_i_2371_);
v_snd_2389_ = lean_ctor_get(v_b_2372_, 1);
lean_inc(v_snd_2389_);
v_snd_2390_ = lean_ctor_get(v_snd_2389_, 1);
lean_inc(v_snd_2390_);
v_snd_2391_ = lean_ctor_get(v_snd_2390_, 1);
lean_inc(v_snd_2391_);
v_fst_2392_ = lean_ctor_get(v_a_2388_, 0);
v_snd_2393_ = lean_ctor_get(v_a_2388_, 1);
v_isSharedCheck_2544_ = !lean_is_exclusive(v_a_2388_);
if (v_isSharedCheck_2544_ == 0)
{
v___x_2395_ = v_a_2388_;
v_isShared_2396_ = v_isSharedCheck_2544_;
goto v_resetjp_2394_;
}
else
{
lean_inc(v_snd_2393_);
lean_inc(v_fst_2392_);
lean_dec(v_a_2388_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2544_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
lean_object* v_fst_2397_; lean_object* v___x_2399_; uint8_t v_isShared_2400_; uint8_t v_isSharedCheck_2542_; 
v_fst_2397_ = lean_ctor_get(v_b_2372_, 0);
v_isSharedCheck_2542_ = !lean_is_exclusive(v_b_2372_);
if (v_isSharedCheck_2542_ == 0)
{
lean_object* v_unused_2543_; 
v_unused_2543_ = lean_ctor_get(v_b_2372_, 1);
lean_dec(v_unused_2543_);
v___x_2399_ = v_b_2372_;
v_isShared_2400_ = v_isSharedCheck_2542_;
goto v_resetjp_2398_;
}
else
{
lean_inc(v_fst_2397_);
lean_dec(v_b_2372_);
v___x_2399_ = lean_box(0);
v_isShared_2400_ = v_isSharedCheck_2542_;
goto v_resetjp_2398_;
}
v_resetjp_2398_:
{
lean_object* v_fst_2401_; lean_object* v___x_2403_; uint8_t v_isShared_2404_; uint8_t v_isSharedCheck_2540_; 
v_fst_2401_ = lean_ctor_get(v_snd_2389_, 0);
v_isSharedCheck_2540_ = !lean_is_exclusive(v_snd_2389_);
if (v_isSharedCheck_2540_ == 0)
{
lean_object* v_unused_2541_; 
v_unused_2541_ = lean_ctor_get(v_snd_2389_, 1);
lean_dec(v_unused_2541_);
v___x_2403_ = v_snd_2389_;
v_isShared_2404_ = v_isSharedCheck_2540_;
goto v_resetjp_2402_;
}
else
{
lean_inc(v_fst_2401_);
lean_dec(v_snd_2389_);
v___x_2403_ = lean_box(0);
v_isShared_2404_ = v_isSharedCheck_2540_;
goto v_resetjp_2402_;
}
v_resetjp_2402_:
{
lean_object* v_fst_2405_; lean_object* v___x_2407_; uint8_t v_isShared_2408_; uint8_t v_isSharedCheck_2538_; 
v_fst_2405_ = lean_ctor_get(v_snd_2390_, 0);
v_isSharedCheck_2538_ = !lean_is_exclusive(v_snd_2390_);
if (v_isSharedCheck_2538_ == 0)
{
lean_object* v_unused_2539_; 
v_unused_2539_ = lean_ctor_get(v_snd_2390_, 1);
lean_dec(v_unused_2539_);
v___x_2407_ = v_snd_2390_;
v_isShared_2408_ = v_isSharedCheck_2538_;
goto v_resetjp_2406_;
}
else
{
lean_inc(v_fst_2405_);
lean_dec(v_snd_2390_);
v___x_2407_ = lean_box(0);
v_isShared_2408_ = v_isSharedCheck_2538_;
goto v_resetjp_2406_;
}
v_resetjp_2406_:
{
lean_object* v_fst_2409_; lean_object* v_snd_2410_; lean_object* v___x_2412_; uint8_t v_isShared_2413_; uint8_t v_isSharedCheck_2537_; 
v_fst_2409_ = lean_ctor_get(v_snd_2391_, 0);
v_snd_2410_ = lean_ctor_get(v_snd_2391_, 1);
v_isSharedCheck_2537_ = !lean_is_exclusive(v_snd_2391_);
if (v_isSharedCheck_2537_ == 0)
{
v___x_2412_ = v_snd_2391_;
v_isShared_2413_ = v_isSharedCheck_2537_;
goto v_resetjp_2411_;
}
else
{
lean_inc(v_snd_2410_);
lean_inc(v_fst_2409_);
lean_dec(v_snd_2391_);
v___x_2412_ = lean_box(0);
v_isShared_2413_ = v_isSharedCheck_2537_;
goto v_resetjp_2411_;
}
v_resetjp_2411_:
{
lean_object* v_label_2414_; uint8_t v_kind_2415_; lean_object* v_payloadType_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___f_2420_; 
v_label_2414_ = lean_ctor_get(v_fst_2392_, 0);
lean_inc(v_label_2414_);
v_kind_2415_ = lean_ctor_get_uint8(v_fst_2392_, sizeof(void*)*4);
v_payloadType_2416_ = lean_ctor_get(v_fst_2392_, 2);
lean_inc_ref(v_payloadType_2416_);
lean_dec(v_fst_2392_);
v___x_2417_ = lean_unsigned_to_nat(0u);
v___x_2418_ = lean_unsigned_to_nat(1u);
v___x_2419_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___redArg___closed__0));
lean_inc_ref(v___x_2363_);
lean_inc_ref(v___y_2362_);
lean_inc_ref(v_a_2361_);
lean_inc_ref(v___x_2367_);
lean_inc_ref(v_snd_2366_);
lean_inc(v___x_2365_);
lean_inc(v___x_2364_);
v___f_2420_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___boxed), 19, 10);
lean_closure_set(v___f_2420_, 0, v___x_2364_);
lean_closure_set(v___f_2420_, 1, v___x_2419_);
lean_closure_set(v___f_2420_, 2, v___x_2365_);
lean_closure_set(v___f_2420_, 3, v_snd_2366_);
lean_closure_set(v___f_2420_, 4, v___x_2367_);
lean_closure_set(v___f_2420_, 5, v___x_2417_);
lean_closure_set(v___f_2420_, 6, v_a_2361_);
lean_closure_set(v___f_2420_, 7, v___y_2362_);
lean_closure_set(v___f_2420_, 8, v___x_2363_);
lean_closure_set(v___f_2420_, 9, v___x_2418_);
switch(v_kind_2415_)
{
case 0:
{
lean_object* v___f_2421_; lean_object* v___x_2422_; uint8_t v___x_2423_; 
v___f_2421_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__1___boxed), 11, 2);
lean_closure_set(v___f_2421_, 0, v_snd_2393_);
lean_closure_set(v___f_2421_, 1, v___f_2420_);
v___x_2422_ = lean_box(0);
v___x_2423_ = lean_name_eq(v_label_2414_, v___x_2422_);
if (v___x_2423_ == 0)
{
lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2427_; 
v___x_2424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2424_, 0, v_payloadType_2416_);
lean_ctor_set(v___x_2424_, 1, v___f_2421_);
v___x_2425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2425_, 0, v___x_2424_);
if (v_isShared_2413_ == 0)
{
lean_ctor_set(v___x_2412_, 1, v___x_2425_);
lean_ctor_set(v___x_2412_, 0, v_label_2414_);
v___x_2427_ = v___x_2412_;
goto v_reusejp_2426_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v_label_2414_);
lean_ctor_set(v_reuseFailAlloc_2441_, 1, v___x_2425_);
v___x_2427_ = v_reuseFailAlloc_2441_;
goto v_reusejp_2426_;
}
v_reusejp_2426_:
{
lean_object* v___x_2428_; lean_object* v___x_2430_; 
v___x_2428_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2428_, 0, v___x_2427_);
lean_ctor_set(v___x_2428_, 1, v_fst_2405_);
if (v_isShared_2408_ == 0)
{
lean_ctor_set(v___x_2407_, 1, v_snd_2410_);
lean_ctor_set(v___x_2407_, 0, v_fst_2409_);
v___x_2430_ = v___x_2407_;
goto v_reusejp_2429_;
}
else
{
lean_object* v_reuseFailAlloc_2440_; 
v_reuseFailAlloc_2440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2440_, 0, v_fst_2409_);
lean_ctor_set(v_reuseFailAlloc_2440_, 1, v_snd_2410_);
v___x_2430_ = v_reuseFailAlloc_2440_;
goto v_reusejp_2429_;
}
v_reusejp_2429_:
{
lean_object* v___x_2432_; 
if (v_isShared_2404_ == 0)
{
lean_ctor_set(v___x_2403_, 1, v___x_2430_);
lean_ctor_set(v___x_2403_, 0, v___x_2428_);
v___x_2432_ = v___x_2403_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v___x_2428_);
lean_ctor_set(v_reuseFailAlloc_2439_, 1, v___x_2430_);
v___x_2432_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
lean_object* v___x_2434_; 
if (v_isShared_2400_ == 0)
{
lean_ctor_set(v___x_2399_, 1, v___x_2432_);
lean_ctor_set(v___x_2399_, 0, v_fst_2401_);
v___x_2434_ = v___x_2399_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v_fst_2401_);
lean_ctor_set(v_reuseFailAlloc_2438_, 1, v___x_2432_);
v___x_2434_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2433_;
}
v_reusejp_2433_:
{
lean_object* v___x_2436_; 
if (v_isShared_2396_ == 0)
{
lean_ctor_set(v___x_2395_, 1, v___x_2434_);
lean_ctor_set(v___x_2395_, 0, v_fst_2397_);
v___x_2436_ = v___x_2395_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v_fst_2397_);
lean_ctor_set(v_reuseFailAlloc_2437_, 1, v___x_2434_);
v___x_2436_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
v_a_2382_ = v___x_2436_;
goto v___jp_2381_;
}
}
}
}
}
}
else
{
lean_object* v___x_2442_; lean_object* v___x_2444_; 
lean_dec_ref(v_payloadType_2416_);
lean_dec(v_label_2414_);
lean_dec(v_fst_2397_);
lean_del_object(v___x_2395_);
lean_inc_ref(v___x_2368_);
v___x_2442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2442_, 0, v___x_2368_);
lean_ctor_set(v___x_2442_, 1, v___f_2421_);
if (v_isShared_2413_ == 0)
{
v___x_2444_ = v___x_2412_;
goto v_reusejp_2443_;
}
else
{
lean_object* v_reuseFailAlloc_2454_; 
v_reuseFailAlloc_2454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2454_, 0, v_fst_2409_);
lean_ctor_set(v_reuseFailAlloc_2454_, 1, v_snd_2410_);
v___x_2444_ = v_reuseFailAlloc_2454_;
goto v_reusejp_2443_;
}
v_reusejp_2443_:
{
lean_object* v___x_2446_; 
if (v_isShared_2408_ == 0)
{
lean_ctor_set(v___x_2407_, 1, v___x_2444_);
v___x_2446_ = v___x_2407_;
goto v_reusejp_2445_;
}
else
{
lean_object* v_reuseFailAlloc_2453_; 
v_reuseFailAlloc_2453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2453_, 0, v_fst_2405_);
lean_ctor_set(v_reuseFailAlloc_2453_, 1, v___x_2444_);
v___x_2446_ = v_reuseFailAlloc_2453_;
goto v_reusejp_2445_;
}
v_reusejp_2445_:
{
lean_object* v___x_2448_; 
if (v_isShared_2404_ == 0)
{
lean_ctor_set(v___x_2403_, 1, v___x_2446_);
v___x_2448_ = v___x_2403_;
goto v_reusejp_2447_;
}
else
{
lean_object* v_reuseFailAlloc_2452_; 
v_reuseFailAlloc_2452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2452_, 0, v_fst_2401_);
lean_ctor_set(v_reuseFailAlloc_2452_, 1, v___x_2446_);
v___x_2448_ = v_reuseFailAlloc_2452_;
goto v_reusejp_2447_;
}
v_reusejp_2447_:
{
lean_object* v___x_2450_; 
if (v_isShared_2400_ == 0)
{
lean_ctor_set(v___x_2399_, 1, v___x_2448_);
lean_ctor_set(v___x_2399_, 0, v___x_2442_);
v___x_2450_ = v___x_2399_;
goto v_reusejp_2449_;
}
else
{
lean_object* v_reuseFailAlloc_2451_; 
v_reuseFailAlloc_2451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2451_, 0, v___x_2442_);
lean_ctor_set(v_reuseFailAlloc_2451_, 1, v___x_2448_);
v___x_2450_ = v_reuseFailAlloc_2451_;
goto v_reusejp_2449_;
}
v_reusejp_2449_:
{
v_a_2382_ = v___x_2450_;
goto v___jp_2381_;
}
}
}
}
}
}
case 1:
{
lean_object* v___f_2455_; lean_object* v___x_2456_; uint8_t v___x_2457_; 
lean_dec_ref(v_payloadType_2416_);
lean_del_object(v___x_2395_);
v___f_2455_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__2___boxed), 10, 2);
lean_closure_set(v___f_2455_, 0, v_snd_2393_);
lean_closure_set(v___f_2455_, 1, v___f_2420_);
v___x_2456_ = lean_box(0);
v___x_2457_ = lean_name_eq(v_label_2414_, v___x_2456_);
if (v___x_2457_ == 0)
{
lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v_snd_2460_; lean_object* v___x_2462_; uint8_t v_isShared_2463_; uint8_t v_isSharedCheck_2481_; 
v___x_2458_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___redArg___closed__1));
v___x_2459_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoFor_spec__12___redArg(v_fst_2401_, v_label_2414_, v___x_2458_);
v_snd_2460_ = lean_ctor_get(v___x_2459_, 1);
v_isSharedCheck_2481_ = !lean_is_exclusive(v___x_2459_);
if (v_isSharedCheck_2481_ == 0)
{
lean_object* v_unused_2482_; 
v_unused_2482_ = lean_ctor_get(v___x_2459_, 0);
lean_dec(v_unused_2482_);
v___x_2462_ = v___x_2459_;
v_isShared_2463_ = v_isSharedCheck_2481_;
goto v_resetjp_2461_;
}
else
{
lean_inc(v_snd_2460_);
lean_dec(v___x_2459_);
v___x_2462_ = lean_box(0);
v_isShared_2463_ = v_isSharedCheck_2481_;
goto v_resetjp_2461_;
}
v_resetjp_2461_:
{
lean_object* v___x_2464_; lean_object* v___x_2466_; 
v___x_2464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2464_, 0, v___f_2455_);
if (v_isShared_2463_ == 0)
{
lean_ctor_set(v___x_2462_, 0, v___x_2464_);
v___x_2466_ = v___x_2462_;
goto v_reusejp_2465_;
}
else
{
lean_object* v_reuseFailAlloc_2480_; 
v_reuseFailAlloc_2480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2480_, 0, v___x_2464_);
lean_ctor_set(v_reuseFailAlloc_2480_, 1, v_snd_2460_);
v___x_2466_ = v_reuseFailAlloc_2480_;
goto v_reusejp_2465_;
}
v_reusejp_2465_:
{
lean_object* v___x_2467_; lean_object* v___x_2469_; 
v___x_2467_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_label_2414_, v___x_2466_, v_fst_2401_);
if (v_isShared_2413_ == 0)
{
v___x_2469_ = v___x_2412_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2479_; 
v_reuseFailAlloc_2479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2479_, 0, v_fst_2409_);
lean_ctor_set(v_reuseFailAlloc_2479_, 1, v_snd_2410_);
v___x_2469_ = v_reuseFailAlloc_2479_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
lean_object* v___x_2471_; 
if (v_isShared_2408_ == 0)
{
lean_ctor_set(v___x_2407_, 1, v___x_2469_);
v___x_2471_ = v___x_2407_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v_fst_2405_);
lean_ctor_set(v_reuseFailAlloc_2478_, 1, v___x_2469_);
v___x_2471_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
lean_object* v___x_2473_; 
if (v_isShared_2404_ == 0)
{
lean_ctor_set(v___x_2403_, 1, v___x_2471_);
lean_ctor_set(v___x_2403_, 0, v___x_2467_);
v___x_2473_ = v___x_2403_;
goto v_reusejp_2472_;
}
else
{
lean_object* v_reuseFailAlloc_2477_; 
v_reuseFailAlloc_2477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2477_, 0, v___x_2467_);
lean_ctor_set(v_reuseFailAlloc_2477_, 1, v___x_2471_);
v___x_2473_ = v_reuseFailAlloc_2477_;
goto v_reusejp_2472_;
}
v_reusejp_2472_:
{
lean_object* v___x_2475_; 
if (v_isShared_2400_ == 0)
{
lean_ctor_set(v___x_2399_, 1, v___x_2473_);
v___x_2475_ = v___x_2399_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v_fst_2397_);
lean_ctor_set(v_reuseFailAlloc_2476_, 1, v___x_2473_);
v___x_2475_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
v_a_2382_ = v___x_2475_;
goto v___jp_2381_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2483_; lean_object* v___x_2485_; 
lean_dec(v_label_2414_);
lean_dec(v_fst_2409_);
v___x_2483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2483_, 0, v___f_2455_);
if (v_isShared_2413_ == 0)
{
lean_ctor_set(v___x_2412_, 0, v___x_2483_);
v___x_2485_ = v___x_2412_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2495_; 
v_reuseFailAlloc_2495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2495_, 0, v___x_2483_);
lean_ctor_set(v_reuseFailAlloc_2495_, 1, v_snd_2410_);
v___x_2485_ = v_reuseFailAlloc_2495_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
lean_object* v___x_2487_; 
if (v_isShared_2408_ == 0)
{
lean_ctor_set(v___x_2407_, 1, v___x_2485_);
v___x_2487_ = v___x_2407_;
goto v_reusejp_2486_;
}
else
{
lean_object* v_reuseFailAlloc_2494_; 
v_reuseFailAlloc_2494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2494_, 0, v_fst_2405_);
lean_ctor_set(v_reuseFailAlloc_2494_, 1, v___x_2485_);
v___x_2487_ = v_reuseFailAlloc_2494_;
goto v_reusejp_2486_;
}
v_reusejp_2486_:
{
lean_object* v___x_2489_; 
if (v_isShared_2404_ == 0)
{
lean_ctor_set(v___x_2403_, 1, v___x_2487_);
v___x_2489_ = v___x_2403_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v_fst_2401_);
lean_ctor_set(v_reuseFailAlloc_2493_, 1, v___x_2487_);
v___x_2489_ = v_reuseFailAlloc_2493_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
lean_object* v___x_2491_; 
if (v_isShared_2400_ == 0)
{
lean_ctor_set(v___x_2399_, 1, v___x_2489_);
v___x_2491_ = v___x_2399_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v_fst_2397_);
lean_ctor_set(v_reuseFailAlloc_2492_, 1, v___x_2489_);
v___x_2491_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
v_a_2382_ = v___x_2491_;
goto v___jp_2381_;
}
}
}
}
}
}
default: 
{
lean_object* v___f_2496_; lean_object* v___x_2497_; uint8_t v___x_2498_; 
lean_dec_ref(v_payloadType_2416_);
lean_del_object(v___x_2395_);
v___f_2496_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__2___boxed), 10, 2);
lean_closure_set(v___f_2496_, 0, v_snd_2393_);
lean_closure_set(v___f_2496_, 1, v___f_2420_);
v___x_2497_ = lean_box(0);
v___x_2498_ = lean_name_eq(v_label_2414_, v___x_2497_);
if (v___x_2498_ == 0)
{
lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v_fst_2501_; lean_object* v___x_2503_; uint8_t v_isShared_2504_; uint8_t v_isSharedCheck_2522_; 
v___x_2499_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___redArg___closed__1));
v___x_2500_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoFor_spec__12___redArg(v_fst_2401_, v_label_2414_, v___x_2499_);
v_fst_2501_ = lean_ctor_get(v___x_2500_, 0);
v_isSharedCheck_2522_ = !lean_is_exclusive(v___x_2500_);
if (v_isSharedCheck_2522_ == 0)
{
lean_object* v_unused_2523_; 
v_unused_2523_ = lean_ctor_get(v___x_2500_, 1);
lean_dec(v_unused_2523_);
v___x_2503_ = v___x_2500_;
v_isShared_2504_ = v_isSharedCheck_2522_;
goto v_resetjp_2502_;
}
else
{
lean_inc(v_fst_2501_);
lean_dec(v___x_2500_);
v___x_2503_ = lean_box(0);
v_isShared_2504_ = v_isSharedCheck_2522_;
goto v_resetjp_2502_;
}
v_resetjp_2502_:
{
lean_object* v___x_2505_; lean_object* v___x_2507_; 
v___x_2505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2505_, 0, v___f_2496_);
if (v_isShared_2504_ == 0)
{
lean_ctor_set(v___x_2503_, 1, v___x_2505_);
v___x_2507_ = v___x_2503_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v_fst_2501_);
lean_ctor_set(v_reuseFailAlloc_2521_, 1, v___x_2505_);
v___x_2507_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
lean_object* v___x_2508_; lean_object* v___x_2510_; 
v___x_2508_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_label_2414_, v___x_2507_, v_fst_2401_);
if (v_isShared_2413_ == 0)
{
v___x_2510_ = v___x_2412_;
goto v_reusejp_2509_;
}
else
{
lean_object* v_reuseFailAlloc_2520_; 
v_reuseFailAlloc_2520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2520_, 0, v_fst_2409_);
lean_ctor_set(v_reuseFailAlloc_2520_, 1, v_snd_2410_);
v___x_2510_ = v_reuseFailAlloc_2520_;
goto v_reusejp_2509_;
}
v_reusejp_2509_:
{
lean_object* v___x_2512_; 
if (v_isShared_2408_ == 0)
{
lean_ctor_set(v___x_2407_, 1, v___x_2510_);
v___x_2512_ = v___x_2407_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2519_; 
v_reuseFailAlloc_2519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2519_, 0, v_fst_2405_);
lean_ctor_set(v_reuseFailAlloc_2519_, 1, v___x_2510_);
v___x_2512_ = v_reuseFailAlloc_2519_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
lean_object* v___x_2514_; 
if (v_isShared_2404_ == 0)
{
lean_ctor_set(v___x_2403_, 1, v___x_2512_);
lean_ctor_set(v___x_2403_, 0, v___x_2508_);
v___x_2514_ = v___x_2403_;
goto v_reusejp_2513_;
}
else
{
lean_object* v_reuseFailAlloc_2518_; 
v_reuseFailAlloc_2518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2518_, 0, v___x_2508_);
lean_ctor_set(v_reuseFailAlloc_2518_, 1, v___x_2512_);
v___x_2514_ = v_reuseFailAlloc_2518_;
goto v_reusejp_2513_;
}
v_reusejp_2513_:
{
lean_object* v___x_2516_; 
if (v_isShared_2400_ == 0)
{
lean_ctor_set(v___x_2399_, 1, v___x_2514_);
v___x_2516_ = v___x_2399_;
goto v_reusejp_2515_;
}
else
{
lean_object* v_reuseFailAlloc_2517_; 
v_reuseFailAlloc_2517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2517_, 0, v_fst_2397_);
lean_ctor_set(v_reuseFailAlloc_2517_, 1, v___x_2514_);
v___x_2516_ = v_reuseFailAlloc_2517_;
goto v_reusejp_2515_;
}
v_reusejp_2515_:
{
v_a_2382_ = v___x_2516_;
goto v___jp_2381_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2524_; lean_object* v___x_2526_; 
lean_dec(v_label_2414_);
lean_dec(v_snd_2410_);
v___x_2524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2524_, 0, v___f_2496_);
if (v_isShared_2413_ == 0)
{
lean_ctor_set(v___x_2412_, 1, v___x_2524_);
v___x_2526_ = v___x_2412_;
goto v_reusejp_2525_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v_fst_2409_);
lean_ctor_set(v_reuseFailAlloc_2536_, 1, v___x_2524_);
v___x_2526_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2525_;
}
v_reusejp_2525_:
{
lean_object* v___x_2528_; 
if (v_isShared_2408_ == 0)
{
lean_ctor_set(v___x_2407_, 1, v___x_2526_);
v___x_2528_ = v___x_2407_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2535_; 
v_reuseFailAlloc_2535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2535_, 0, v_fst_2405_);
lean_ctor_set(v_reuseFailAlloc_2535_, 1, v___x_2526_);
v___x_2528_ = v_reuseFailAlloc_2535_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
lean_object* v___x_2530_; 
if (v_isShared_2404_ == 0)
{
lean_ctor_set(v___x_2403_, 1, v___x_2528_);
v___x_2530_ = v___x_2403_;
goto v_reusejp_2529_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v_fst_2401_);
lean_ctor_set(v_reuseFailAlloc_2534_, 1, v___x_2528_);
v___x_2530_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2529_;
}
v_reusejp_2529_:
{
lean_object* v___x_2532_; 
if (v_isShared_2400_ == 0)
{
lean_ctor_set(v___x_2399_, 1, v___x_2530_);
v___x_2532_ = v___x_2399_;
goto v_reusejp_2531_;
}
else
{
lean_object* v_reuseFailAlloc_2533_; 
v_reuseFailAlloc_2533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2533_, 0, v_fst_2397_);
lean_ctor_set(v_reuseFailAlloc_2533_, 1, v___x_2530_);
v___x_2532_ = v_reuseFailAlloc_2533_;
goto v_reusejp_2531_;
}
v_reusejp_2531_:
{
v_a_2382_ = v___x_2532_;
goto v___jp_2381_;
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
v___jp_2381_:
{
size_t v___x_2383_; size_t v___x_2384_; lean_object* v___x_2385_; 
v___x_2383_ = ((size_t)1ULL);
v___x_2384_ = lean_usize_add(v_i_2371_, v___x_2383_);
v___x_2385_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___redArg(v___x_2364_, v___x_2365_, v_snd_2366_, v___x_2367_, v_a_2361_, v___y_2362_, v___x_2363_, v___x_2368_, v_as_2369_, v_sz_2370_, v___x_2384_, v_a_2382_);
return v___x_2385_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___boxed(lean_object** _args){
lean_object* v_a_2545_ = _args[0];
lean_object* v___y_2546_ = _args[1];
lean_object* v___x_2547_ = _args[2];
lean_object* v___x_2548_ = _args[3];
lean_object* v___x_2549_ = _args[4];
lean_object* v_snd_2550_ = _args[5];
lean_object* v___x_2551_ = _args[6];
lean_object* v___x_2552_ = _args[7];
lean_object* v_as_2553_ = _args[8];
lean_object* v_sz_2554_ = _args[9];
lean_object* v_i_2555_ = _args[10];
lean_object* v_b_2556_ = _args[11];
lean_object* v___y_2557_ = _args[12];
lean_object* v___y_2558_ = _args[13];
lean_object* v___y_2559_ = _args[14];
lean_object* v___y_2560_ = _args[15];
lean_object* v___y_2561_ = _args[16];
lean_object* v___y_2562_ = _args[17];
lean_object* v___y_2563_ = _args[18];
lean_object* v___y_2564_ = _args[19];
_start:
{
size_t v_sz_boxed_2565_; size_t v_i_boxed_2566_; lean_object* v_res_2567_; 
v_sz_boxed_2565_ = lean_unbox_usize(v_sz_2554_);
lean_dec(v_sz_2554_);
v_i_boxed_2566_ = lean_unbox_usize(v_i_2555_);
lean_dec(v_i_2555_);
v_res_2567_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13(v_a_2545_, v___y_2546_, v___x_2547_, v___x_2548_, v___x_2549_, v_snd_2550_, v___x_2551_, v___x_2552_, v_as_2553_, v_sz_boxed_2565_, v_i_boxed_2566_, v_b_2556_, v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
lean_dec(v___y_2563_);
lean_dec_ref(v___y_2562_);
lean_dec(v___y_2561_);
lean_dec_ref(v___y_2560_);
lean_dec(v___y_2559_);
lean_dec_ref(v___y_2558_);
lean_dec_ref(v___y_2557_);
lean_dec_ref(v_as_2553_);
return v_res_2567_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_elabDoFor_spec__14(lean_object* v_init_2568_, lean_object* v_x_2569_){
_start:
{
if (lean_obj_tag(v_x_2569_) == 0)
{
lean_object* v_k_2570_; lean_object* v_v_2571_; lean_object* v_l_2572_; lean_object* v_r_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; 
v_k_2570_ = lean_ctor_get(v_x_2569_, 1);
v_v_2571_ = lean_ctor_get(v_x_2569_, 2);
v_l_2572_ = lean_ctor_get(v_x_2569_, 3);
v_r_2573_ = lean_ctor_get(v_x_2569_, 4);
v___x_2574_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_elabDoFor_spec__14(v_init_2568_, v_r_2573_);
lean_inc(v_v_2571_);
lean_inc(v_k_2570_);
v___x_2575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2575_, 0, v_k_2570_);
lean_ctor_set(v___x_2575_, 1, v_v_2571_);
v___x_2576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2576_, 0, v___x_2575_);
lean_ctor_set(v___x_2576_, 1, v___x_2574_);
v_init_2568_ = v___x_2576_;
v_x_2569_ = v_l_2572_;
goto _start;
}
else
{
return v_init_2568_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_elabDoFor_spec__14___boxed(lean_object* v_init_2578_, lean_object* v_x_2579_){
_start:
{
lean_object* v_res_2580_; 
v_res_2580_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_elabDoFor_spec__14(v_init_2578_, v_x_2579_);
lean_dec(v_x_2579_);
return v_res_2580_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15___lam__0(lean_object* v_snd_2581_, lean_object* v___x_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_){
_start:
{
if (lean_obj_tag(v_snd_2581_) == 0)
{
lean_object* v___x_2591_; 
v___x_2591_ = l_Lean_throwError___at___00Lean_Elab_Do_elabDoFor_spec__1___redArg(v___x_2582_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_);
return v___x_2591_;
}
else
{
lean_object* v_val_2592_; lean_object* v___x_2593_; 
lean_dec_ref(v___x_2582_);
v_val_2592_ = lean_ctor_get(v_snd_2581_, 0);
lean_inc(v_val_2592_);
lean_dec_ref_known(v_snd_2581_, 1);
lean_inc(v___y_2589_);
lean_inc_ref(v___y_2588_);
lean_inc(v___y_2587_);
lean_inc_ref(v___y_2586_);
lean_inc(v___y_2585_);
lean_inc_ref(v___y_2584_);
lean_inc_ref(v___y_2583_);
v___x_2593_ = lean_apply_8(v_val_2592_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_, lean_box(0));
return v___x_2593_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15___lam__0___boxed(lean_object* v_snd_2594_, lean_object* v___x_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_){
_start:
{
lean_object* v_res_2604_; 
v_res_2604_ = l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15___lam__0(v_snd_2594_, v___x_2595_, v___y_2596_, v___y_2597_, v___y_2598_, v___y_2599_, v___y_2600_, v___y_2601_, v___y_2602_);
lean_dec(v___y_2602_);
lean_dec_ref(v___y_2601_);
lean_dec(v___y_2600_);
lean_dec_ref(v___y_2599_);
lean_dec(v___y_2598_);
lean_dec_ref(v___y_2597_);
lean_dec_ref(v___y_2596_);
return v_res_2604_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15___lam__1(lean_object* v_fst_2605_, lean_object* v___x_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_){
_start:
{
if (lean_obj_tag(v_fst_2605_) == 0)
{
lean_object* v___x_2615_; 
v___x_2615_ = l_Lean_throwError___at___00Lean_Elab_Do_elabDoFor_spec__1___redArg(v___x_2606_, v___y_2610_, v___y_2611_, v___y_2612_, v___y_2613_);
return v___x_2615_;
}
else
{
lean_object* v_val_2616_; lean_object* v___x_2617_; 
lean_dec_ref(v___x_2606_);
v_val_2616_ = lean_ctor_get(v_fst_2605_, 0);
lean_inc(v_val_2616_);
lean_dec_ref_known(v_fst_2605_, 1);
lean_inc(v___y_2613_);
lean_inc_ref(v___y_2612_);
lean_inc(v___y_2611_);
lean_inc_ref(v___y_2610_);
lean_inc(v___y_2609_);
lean_inc_ref(v___y_2608_);
lean_inc_ref(v___y_2607_);
v___x_2617_ = lean_apply_8(v_val_2616_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_, v___y_2611_, v___y_2612_, v___y_2613_, lean_box(0));
return v___x_2617_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15___lam__1___boxed(lean_object* v_fst_2618_, lean_object* v___x_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_){
_start:
{
lean_object* v_res_2628_; 
v_res_2628_ = l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15___lam__1(v_fst_2618_, v___x_2619_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_, v___y_2624_, v___y_2625_, v___y_2626_);
lean_dec(v___y_2626_);
lean_dec_ref(v___y_2625_);
lean_dec(v___y_2624_);
lean_dec_ref(v___y_2623_);
lean_dec(v___y_2622_);
lean_dec_ref(v___y_2621_);
lean_dec_ref(v___y_2620_);
return v_res_2628_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15___closed__1(void){
_start:
{
lean_object* v___x_2630_; lean_object* v___x_2631_; 
v___x_2630_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15___closed__0));
v___x_2631_ = l_Lean_stringToMessageData(v___x_2630_);
return v___x_2631_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15(lean_object* v_a_2632_, lean_object* v_a_2633_){
_start:
{
if (lean_obj_tag(v_a_2632_) == 0)
{
lean_object* v___x_2634_; 
v___x_2634_ = l_List_reverse___redArg(v_a_2633_);
return v___x_2634_;
}
else
{
lean_object* v_head_2635_; lean_object* v_snd_2636_; lean_object* v_tail_2637_; lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2666_; 
v_head_2635_ = lean_ctor_get(v_a_2632_, 0);
lean_inc(v_head_2635_);
v_snd_2636_ = lean_ctor_get(v_head_2635_, 1);
lean_inc(v_snd_2636_);
v_tail_2637_ = lean_ctor_get(v_a_2632_, 1);
v_isSharedCheck_2666_ = !lean_is_exclusive(v_a_2632_);
if (v_isSharedCheck_2666_ == 0)
{
lean_object* v_unused_2667_; 
v_unused_2667_ = lean_ctor_get(v_a_2632_, 0);
lean_dec(v_unused_2667_);
v___x_2639_ = v_a_2632_;
v_isShared_2640_ = v_isSharedCheck_2666_;
goto v_resetjp_2638_;
}
else
{
lean_inc(v_tail_2637_);
lean_dec(v_a_2632_);
v___x_2639_ = lean_box(0);
v_isShared_2640_ = v_isSharedCheck_2666_;
goto v_resetjp_2638_;
}
v_resetjp_2638_:
{
lean_object* v_fst_2641_; lean_object* v___x_2643_; uint8_t v_isShared_2644_; uint8_t v_isSharedCheck_2664_; 
v_fst_2641_ = lean_ctor_get(v_head_2635_, 0);
v_isSharedCheck_2664_ = !lean_is_exclusive(v_head_2635_);
if (v_isSharedCheck_2664_ == 0)
{
lean_object* v_unused_2665_; 
v_unused_2665_ = lean_ctor_get(v_head_2635_, 1);
lean_dec(v_unused_2665_);
v___x_2643_ = v_head_2635_;
v_isShared_2644_ = v_isSharedCheck_2664_;
goto v_resetjp_2642_;
}
else
{
lean_inc(v_fst_2641_);
lean_dec(v_head_2635_);
v___x_2643_ = lean_box(0);
v_isShared_2644_ = v_isSharedCheck_2664_;
goto v_resetjp_2642_;
}
v_resetjp_2642_:
{
lean_object* v_fst_2645_; lean_object* v_snd_2646_; lean_object* v___x_2648_; uint8_t v_isShared_2649_; uint8_t v_isSharedCheck_2663_; 
v_fst_2645_ = lean_ctor_get(v_snd_2636_, 0);
v_snd_2646_ = lean_ctor_get(v_snd_2636_, 1);
v_isSharedCheck_2663_ = !lean_is_exclusive(v_snd_2636_);
if (v_isSharedCheck_2663_ == 0)
{
v___x_2648_ = v_snd_2636_;
v_isShared_2649_ = v_isSharedCheck_2663_;
goto v_resetjp_2647_;
}
else
{
lean_inc(v_snd_2646_);
lean_inc(v_fst_2645_);
lean_dec(v_snd_2636_);
v___x_2648_ = lean_box(0);
v_isShared_2649_ = v_isSharedCheck_2663_;
goto v_resetjp_2647_;
}
v_resetjp_2647_:
{
lean_object* v___x_2650_; lean_object* v___y_2651_; lean_object* v___y_2652_; lean_object* v___x_2654_; 
v___x_2650_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15___closed__1, &l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15___closed__1_once, _init_l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15___closed__1);
v___y_2651_ = lean_alloc_closure((void*)(l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15___lam__0___boxed), 10, 2);
lean_closure_set(v___y_2651_, 0, v_snd_2646_);
lean_closure_set(v___y_2651_, 1, v___x_2650_);
v___y_2652_ = lean_alloc_closure((void*)(l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15___lam__1___boxed), 10, 2);
lean_closure_set(v___y_2652_, 0, v_fst_2645_);
lean_closure_set(v___y_2652_, 1, v___x_2650_);
if (v_isShared_2644_ == 0)
{
lean_ctor_set_tag(v___x_2643_, 1);
lean_ctor_set(v___x_2643_, 1, v___y_2651_);
lean_ctor_set(v___x_2643_, 0, v___y_2652_);
v___x_2654_ = v___x_2643_;
goto v_reusejp_2653_;
}
else
{
lean_object* v_reuseFailAlloc_2662_; 
v_reuseFailAlloc_2662_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2662_, 0, v___y_2652_);
lean_ctor_set(v_reuseFailAlloc_2662_, 1, v___y_2651_);
v___x_2654_ = v_reuseFailAlloc_2662_;
goto v_reusejp_2653_;
}
v_reusejp_2653_:
{
lean_object* v___x_2656_; 
if (v_isShared_2649_ == 0)
{
lean_ctor_set(v___x_2648_, 1, v___x_2654_);
lean_ctor_set(v___x_2648_, 0, v_fst_2641_);
v___x_2656_ = v___x_2648_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2661_; 
v_reuseFailAlloc_2661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2661_, 0, v_fst_2641_);
lean_ctor_set(v_reuseFailAlloc_2661_, 1, v___x_2654_);
v___x_2656_ = v_reuseFailAlloc_2661_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
lean_object* v___x_2658_; 
if (v_isShared_2640_ == 0)
{
lean_ctor_set(v___x_2639_, 1, v_a_2633_);
lean_ctor_set(v___x_2639_, 0, v___x_2656_);
v___x_2658_ = v___x_2639_;
goto v_reusejp_2657_;
}
else
{
lean_object* v_reuseFailAlloc_2660_; 
v_reuseFailAlloc_2660_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2660_, 0, v___x_2656_);
lean_ctor_set(v_reuseFailAlloc_2660_, 1, v_a_2633_);
v___x_2658_ = v_reuseFailAlloc_2660_;
goto v_reusejp_2657_;
}
v_reusejp_2657_:
{
v_a_2632_ = v_tail_2637_;
v_a_2633_ = v___x_2658_;
goto _start;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___lam__0(lean_object* v___x_2668_, lean_object* v_a_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_){
_start:
{
lean_object* v___x_2678_; lean_object* v___x_123926__overap_2679_; lean_object* v___x_2680_; 
v___x_2678_ = l_Lean_instInhabitedExpr;
v___x_123926__overap_2679_ = l_instInhabitedOfMonad___redArg(v___x_2668_, v___x_2678_);
lean_inc(v___y_2676_);
lean_inc_ref(v___y_2675_);
lean_inc(v___y_2674_);
lean_inc_ref(v___y_2673_);
lean_inc(v___y_2672_);
lean_inc_ref(v___y_2671_);
lean_inc_ref(v___y_2670_);
v___x_2680_ = lean_apply_8(v___x_123926__overap_2679_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_, lean_box(0));
return v___x_2680_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___lam__0___boxed(lean_object* v___x_2681_, lean_object* v_a_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_){
_start:
{
lean_object* v_res_2691_; 
v_res_2691_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___lam__0(v___x_2681_, v_a_2682_, v___y_2683_, v___y_2684_, v___y_2685_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_);
lean_dec(v___y_2689_);
lean_dec_ref(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec_ref(v___y_2686_);
lean_dec(v___y_2685_);
lean_dec_ref(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v_a_2682_);
return v_res_2691_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__0(void){
_start:
{
lean_object* v___x_2692_; 
v___x_2692_ = l_instMonadEIO(lean_box(0));
return v___x_2692_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__1(void){
_start:
{
lean_object* v___x_2693_; lean_object* v___x_2694_; 
v___x_2693_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__0, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__0_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__0);
v___x_2694_ = l_StateRefT_x27_instMonad___redArg(v___x_2693_);
return v___x_2694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19_spec__24___lam__0___boxed(lean_object* v_acc_2701_, lean_object* v_declInfos_2702_, lean_object* v_k_2703_, lean_object* v_kind_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v_b_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_){
_start:
{
uint8_t v_kind_boxed_2714_; lean_object* v_res_2715_; 
v_kind_boxed_2714_ = lean_unbox(v_kind_2704_);
v_res_2715_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19_spec__24___lam__0(v_acc_2701_, v_declInfos_2702_, v_k_2703_, v_kind_boxed_2714_, v___y_2705_, v___y_2706_, v___y_2707_, v_b_2708_, v___y_2709_, v___y_2710_, v___y_2711_, v___y_2712_);
lean_dec(v___y_2712_);
lean_dec_ref(v___y_2711_);
lean_dec(v___y_2710_);
lean_dec_ref(v___y_2709_);
lean_dec(v___y_2707_);
lean_dec_ref(v___y_2706_);
lean_dec_ref(v___y_2705_);
return v_res_2715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19_spec__24(lean_object* v_acc_2716_, lean_object* v_declInfos_2717_, lean_object* v_k_2718_, uint8_t v_kind_2719_, lean_object* v_name_2720_, uint8_t v_bi_2721_, lean_object* v_type_2722_, uint8_t v_kind_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_){
_start:
{
lean_object* v___x_2732_; lean_object* v___f_2733_; lean_object* v___x_2734_; 
v___x_2732_ = lean_box(v_kind_2719_);
lean_inc(v___y_2726_);
lean_inc_ref(v___y_2725_);
lean_inc_ref(v___y_2724_);
v___f_2733_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19_spec__24___lam__0___boxed), 13, 7);
lean_closure_set(v___f_2733_, 0, v_acc_2716_);
lean_closure_set(v___f_2733_, 1, v_declInfos_2717_);
lean_closure_set(v___f_2733_, 2, v_k_2718_);
lean_closure_set(v___f_2733_, 3, v___x_2732_);
lean_closure_set(v___f_2733_, 4, v___y_2724_);
lean_closure_set(v___f_2733_, 5, v___y_2725_);
lean_closure_set(v___f_2733_, 6, v___y_2726_);
v___x_2734_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2720_, v_bi_2721_, v_type_2722_, v___f_2733_, v_kind_2723_, v___y_2727_, v___y_2728_, v___y_2729_, v___y_2730_);
if (lean_obj_tag(v___x_2734_) == 0)
{
return v___x_2734_;
}
else
{
lean_object* v_a_2735_; lean_object* v___x_2737_; uint8_t v_isShared_2738_; uint8_t v_isSharedCheck_2742_; 
v_a_2735_ = lean_ctor_get(v___x_2734_, 0);
v_isSharedCheck_2742_ = !lean_is_exclusive(v___x_2734_);
if (v_isSharedCheck_2742_ == 0)
{
v___x_2737_ = v___x_2734_;
v_isShared_2738_ = v_isSharedCheck_2742_;
goto v_resetjp_2736_;
}
else
{
lean_inc(v_a_2735_);
lean_dec(v___x_2734_);
v___x_2737_ = lean_box(0);
v_isShared_2738_ = v_isSharedCheck_2742_;
goto v_resetjp_2736_;
}
v_resetjp_2736_:
{
lean_object* v___x_2740_; 
if (v_isShared_2738_ == 0)
{
v___x_2740_ = v___x_2737_;
goto v_reusejp_2739_;
}
else
{
lean_object* v_reuseFailAlloc_2741_; 
v_reuseFailAlloc_2741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2741_, 0, v_a_2735_);
v___x_2740_ = v_reuseFailAlloc_2741_;
goto v_reusejp_2739_;
}
v_reusejp_2739_:
{
return v___x_2740_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19(lean_object* v_declInfos_2743_, lean_object* v_k_2744_, uint8_t v_kind_2745_, lean_object* v_acc_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_){
_start:
{
lean_object* v___x_2755_; lean_object* v_toApplicative_2756_; lean_object* v_toFunctor_2757_; lean_object* v_toSeq_2758_; lean_object* v_toSeqLeft_2759_; lean_object* v_toSeqRight_2760_; lean_object* v___f_2761_; lean_object* v___f_2762_; lean_object* v___f_2763_; lean_object* v___f_2764_; lean_object* v___x_2765_; lean_object* v___f_2766_; lean_object* v___f_2767_; lean_object* v___f_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v_toApplicative_2772_; lean_object* v___x_2774_; uint8_t v_isShared_2775_; uint8_t v_isSharedCheck_2850_; 
v___x_2755_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__1, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__1_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__1);
v_toApplicative_2756_ = lean_ctor_get(v___x_2755_, 0);
v_toFunctor_2757_ = lean_ctor_get(v_toApplicative_2756_, 0);
v_toSeq_2758_ = lean_ctor_get(v_toApplicative_2756_, 2);
v_toSeqLeft_2759_ = lean_ctor_get(v_toApplicative_2756_, 3);
v_toSeqRight_2760_ = lean_ctor_get(v_toApplicative_2756_, 4);
v___f_2761_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__2));
v___f_2762_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__3));
lean_inc_ref_n(v_toFunctor_2757_, 2);
v___f_2763_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2763_, 0, v_toFunctor_2757_);
v___f_2764_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2764_, 0, v_toFunctor_2757_);
v___x_2765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2765_, 0, v___f_2763_);
lean_ctor_set(v___x_2765_, 1, v___f_2764_);
lean_inc(v_toSeqRight_2760_);
v___f_2766_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2766_, 0, v_toSeqRight_2760_);
lean_inc(v_toSeqLeft_2759_);
v___f_2767_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2767_, 0, v_toSeqLeft_2759_);
lean_inc(v_toSeq_2758_);
v___f_2768_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2768_, 0, v_toSeq_2758_);
v___x_2769_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2769_, 0, v___x_2765_);
lean_ctor_set(v___x_2769_, 1, v___f_2761_);
lean_ctor_set(v___x_2769_, 2, v___f_2768_);
lean_ctor_set(v___x_2769_, 3, v___f_2767_);
lean_ctor_set(v___x_2769_, 4, v___f_2766_);
v___x_2770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2770_, 0, v___x_2769_);
lean_ctor_set(v___x_2770_, 1, v___f_2762_);
v___x_2771_ = l_StateRefT_x27_instMonad___redArg(v___x_2770_);
v_toApplicative_2772_ = lean_ctor_get(v___x_2771_, 0);
v_isSharedCheck_2850_ = !lean_is_exclusive(v___x_2771_);
if (v_isSharedCheck_2850_ == 0)
{
lean_object* v_unused_2851_; 
v_unused_2851_ = lean_ctor_get(v___x_2771_, 1);
lean_dec(v_unused_2851_);
v___x_2774_ = v___x_2771_;
v_isShared_2775_ = v_isSharedCheck_2850_;
goto v_resetjp_2773_;
}
else
{
lean_inc(v_toApplicative_2772_);
lean_dec(v___x_2771_);
v___x_2774_ = lean_box(0);
v_isShared_2775_ = v_isSharedCheck_2850_;
goto v_resetjp_2773_;
}
v_resetjp_2773_:
{
lean_object* v_toFunctor_2776_; lean_object* v_toSeq_2777_; lean_object* v_toSeqLeft_2778_; lean_object* v_toSeqRight_2779_; lean_object* v___x_2781_; uint8_t v_isShared_2782_; uint8_t v_isSharedCheck_2848_; 
v_toFunctor_2776_ = lean_ctor_get(v_toApplicative_2772_, 0);
v_toSeq_2777_ = lean_ctor_get(v_toApplicative_2772_, 2);
v_toSeqLeft_2778_ = lean_ctor_get(v_toApplicative_2772_, 3);
v_toSeqRight_2779_ = lean_ctor_get(v_toApplicative_2772_, 4);
v_isSharedCheck_2848_ = !lean_is_exclusive(v_toApplicative_2772_);
if (v_isSharedCheck_2848_ == 0)
{
lean_object* v_unused_2849_; 
v_unused_2849_ = lean_ctor_get(v_toApplicative_2772_, 1);
lean_dec(v_unused_2849_);
v___x_2781_ = v_toApplicative_2772_;
v_isShared_2782_ = v_isSharedCheck_2848_;
goto v_resetjp_2780_;
}
else
{
lean_inc(v_toSeqRight_2779_);
lean_inc(v_toSeqLeft_2778_);
lean_inc(v_toSeq_2777_);
lean_inc(v_toFunctor_2776_);
lean_dec(v_toApplicative_2772_);
v___x_2781_ = lean_box(0);
v_isShared_2782_ = v_isSharedCheck_2848_;
goto v_resetjp_2780_;
}
v_resetjp_2780_:
{
lean_object* v___f_2783_; lean_object* v___f_2784_; lean_object* v___f_2785_; lean_object* v___f_2786_; lean_object* v___x_2787_; lean_object* v___f_2788_; lean_object* v___f_2789_; lean_object* v___f_2790_; lean_object* v___x_2792_; 
v___f_2783_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__4));
v___f_2784_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__5));
lean_inc_ref(v_toFunctor_2776_);
v___f_2785_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2785_, 0, v_toFunctor_2776_);
v___f_2786_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2786_, 0, v_toFunctor_2776_);
v___x_2787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2787_, 0, v___f_2785_);
lean_ctor_set(v___x_2787_, 1, v___f_2786_);
v___f_2788_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2788_, 0, v_toSeqRight_2779_);
v___f_2789_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2789_, 0, v_toSeqLeft_2778_);
v___f_2790_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2790_, 0, v_toSeq_2777_);
if (v_isShared_2782_ == 0)
{
lean_ctor_set(v___x_2781_, 4, v___f_2788_);
lean_ctor_set(v___x_2781_, 3, v___f_2789_);
lean_ctor_set(v___x_2781_, 2, v___f_2790_);
lean_ctor_set(v___x_2781_, 1, v___f_2783_);
lean_ctor_set(v___x_2781_, 0, v___x_2787_);
v___x_2792_ = v___x_2781_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2847_; 
v_reuseFailAlloc_2847_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2847_, 0, v___x_2787_);
lean_ctor_set(v_reuseFailAlloc_2847_, 1, v___f_2783_);
lean_ctor_set(v_reuseFailAlloc_2847_, 2, v___f_2790_);
lean_ctor_set(v_reuseFailAlloc_2847_, 3, v___f_2789_);
lean_ctor_set(v_reuseFailAlloc_2847_, 4, v___f_2788_);
v___x_2792_ = v_reuseFailAlloc_2847_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
lean_object* v___x_2794_; 
if (v_isShared_2775_ == 0)
{
lean_ctor_set(v___x_2774_, 1, v___f_2784_);
lean_ctor_set(v___x_2774_, 0, v___x_2792_);
v___x_2794_ = v___x_2774_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v___x_2792_);
lean_ctor_set(v_reuseFailAlloc_2846_, 1, v___f_2784_);
v___x_2794_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
lean_object* v___x_2795_; lean_object* v_toApplicative_2796_; lean_object* v___x_2798_; uint8_t v_isShared_2799_; uint8_t v_isSharedCheck_2844_; 
v___x_2795_ = l_StateRefT_x27_instMonad___redArg(v___x_2794_);
v_toApplicative_2796_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2844_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2844_ == 0)
{
lean_object* v_unused_2845_; 
v_unused_2845_ = lean_ctor_get(v___x_2795_, 1);
lean_dec(v_unused_2845_);
v___x_2798_ = v___x_2795_;
v_isShared_2799_ = v_isSharedCheck_2844_;
goto v_resetjp_2797_;
}
else
{
lean_inc(v_toApplicative_2796_);
lean_dec(v___x_2795_);
v___x_2798_ = lean_box(0);
v_isShared_2799_ = v_isSharedCheck_2844_;
goto v_resetjp_2797_;
}
v_resetjp_2797_:
{
lean_object* v_toFunctor_2800_; lean_object* v_toSeq_2801_; lean_object* v_toSeqLeft_2802_; lean_object* v_toSeqRight_2803_; lean_object* v___x_2805_; uint8_t v_isShared_2806_; uint8_t v_isSharedCheck_2842_; 
v_toFunctor_2800_ = lean_ctor_get(v_toApplicative_2796_, 0);
v_toSeq_2801_ = lean_ctor_get(v_toApplicative_2796_, 2);
v_toSeqLeft_2802_ = lean_ctor_get(v_toApplicative_2796_, 3);
v_toSeqRight_2803_ = lean_ctor_get(v_toApplicative_2796_, 4);
v_isSharedCheck_2842_ = !lean_is_exclusive(v_toApplicative_2796_);
if (v_isSharedCheck_2842_ == 0)
{
lean_object* v_unused_2843_; 
v_unused_2843_ = lean_ctor_get(v_toApplicative_2796_, 1);
lean_dec(v_unused_2843_);
v___x_2805_ = v_toApplicative_2796_;
v_isShared_2806_ = v_isSharedCheck_2842_;
goto v_resetjp_2804_;
}
else
{
lean_inc(v_toSeqRight_2803_);
lean_inc(v_toSeqLeft_2802_);
lean_inc(v_toSeq_2801_);
lean_inc(v_toFunctor_2800_);
lean_dec(v_toApplicative_2796_);
v___x_2805_ = lean_box(0);
v_isShared_2806_ = v_isSharedCheck_2842_;
goto v_resetjp_2804_;
}
v_resetjp_2804_:
{
lean_object* v___f_2807_; lean_object* v___f_2808_; lean_object* v___f_2809_; lean_object* v___f_2810_; lean_object* v___x_2811_; lean_object* v___f_2812_; lean_object* v___f_2813_; lean_object* v___f_2814_; lean_object* v___x_2816_; 
v___f_2807_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__6));
v___f_2808_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___closed__7));
lean_inc_ref(v_toFunctor_2800_);
v___f_2809_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2809_, 0, v_toFunctor_2800_);
v___f_2810_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2810_, 0, v_toFunctor_2800_);
v___x_2811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2811_, 0, v___f_2809_);
lean_ctor_set(v___x_2811_, 1, v___f_2810_);
v___f_2812_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2812_, 0, v_toSeqRight_2803_);
v___f_2813_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2813_, 0, v_toSeqLeft_2802_);
v___f_2814_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2814_, 0, v_toSeq_2801_);
if (v_isShared_2806_ == 0)
{
lean_ctor_set(v___x_2805_, 4, v___f_2812_);
lean_ctor_set(v___x_2805_, 3, v___f_2813_);
lean_ctor_set(v___x_2805_, 2, v___f_2814_);
lean_ctor_set(v___x_2805_, 1, v___f_2807_);
lean_ctor_set(v___x_2805_, 0, v___x_2811_);
v___x_2816_ = v___x_2805_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v___x_2811_);
lean_ctor_set(v_reuseFailAlloc_2841_, 1, v___f_2807_);
lean_ctor_set(v_reuseFailAlloc_2841_, 2, v___f_2814_);
lean_ctor_set(v_reuseFailAlloc_2841_, 3, v___f_2813_);
lean_ctor_set(v_reuseFailAlloc_2841_, 4, v___f_2812_);
v___x_2816_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
lean_object* v___x_2818_; 
if (v_isShared_2799_ == 0)
{
lean_ctor_set(v___x_2798_, 1, v___f_2808_);
lean_ctor_set(v___x_2798_, 0, v___x_2816_);
v___x_2818_ = v___x_2798_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v___x_2816_);
lean_ctor_set(v_reuseFailAlloc_2840_, 1, v___f_2808_);
v___x_2818_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; uint8_t v___x_2822_; 
v___x_2819_ = l_ReaderT_instMonad___redArg(v___x_2818_);
v___x_2820_ = lean_array_get_size(v_acc_2746_);
v___x_2821_ = lean_array_get_size(v_declInfos_2743_);
v___x_2822_ = lean_nat_dec_lt(v___x_2820_, v___x_2821_);
if (v___x_2822_ == 0)
{
lean_object* v___x_2823_; 
lean_dec_ref(v___x_2819_);
lean_dec_ref(v_declInfos_2743_);
lean_inc(v___y_2753_);
lean_inc_ref(v___y_2752_);
lean_inc(v___y_2751_);
lean_inc_ref(v___y_2750_);
lean_inc(v___y_2749_);
lean_inc_ref(v___y_2748_);
lean_inc_ref(v___y_2747_);
v___x_2823_ = lean_apply_9(v_k_2744_, v_acc_2746_, v___y_2747_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_, v___y_2752_, v___y_2753_, lean_box(0));
return v___x_2823_;
}
else
{
lean_object* v___f_2824_; lean_object* v___x_2825_; uint8_t v___x_2826_; lean_object* v___f_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v_snd_2832_; lean_object* v_fst_2833_; lean_object* v_fst_2834_; lean_object* v_snd_2835_; lean_object* v___x_2836_; 
v___f_2824_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___lam__0___boxed), 10, 1);
lean_closure_set(v___f_2824_, 0, v___x_2819_);
v___x_2825_ = lean_box(0);
v___x_2826_ = 0;
v___f_2827_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2827_, 0, v___f_2824_);
v___x_2828_ = lean_box(v___x_2826_);
v___x_2829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2829_, 0, v___x_2828_);
lean_ctor_set(v___x_2829_, 1, v___f_2827_);
v___x_2830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2830_, 0, v___x_2825_);
lean_ctor_set(v___x_2830_, 1, v___x_2829_);
v___x_2831_ = lean_array_get(v___x_2830_, v_declInfos_2743_, v___x_2820_);
lean_dec_ref_known(v___x_2830_, 2);
v_snd_2832_ = lean_ctor_get(v___x_2831_, 1);
lean_inc(v_snd_2832_);
v_fst_2833_ = lean_ctor_get(v___x_2831_, 0);
lean_inc(v_fst_2833_);
lean_dec(v___x_2831_);
v_fst_2834_ = lean_ctor_get(v_snd_2832_, 0);
lean_inc(v_fst_2834_);
v_snd_2835_ = lean_ctor_get(v_snd_2832_, 1);
lean_inc(v_snd_2835_);
lean_dec(v_snd_2832_);
lean_inc(v___y_2753_);
lean_inc_ref(v___y_2752_);
lean_inc(v___y_2751_);
lean_inc_ref(v___y_2750_);
lean_inc(v___y_2749_);
lean_inc_ref(v___y_2748_);
lean_inc_ref(v___y_2747_);
lean_inc_ref(v_acc_2746_);
v___x_2836_ = lean_apply_9(v_snd_2835_, v_acc_2746_, v___y_2747_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_, v___y_2752_, v___y_2753_, lean_box(0));
if (lean_obj_tag(v___x_2836_) == 0)
{
lean_object* v_a_2837_; uint8_t v___x_2838_; lean_object* v___x_2839_; 
v_a_2837_ = lean_ctor_get(v___x_2836_, 0);
lean_inc(v_a_2837_);
lean_dec_ref_known(v___x_2836_, 1);
v___x_2838_ = lean_unbox(v_fst_2834_);
lean_dec(v_fst_2834_);
v___x_2839_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19_spec__24(v_acc_2746_, v_declInfos_2743_, v_k_2744_, v_kind_2745_, v_fst_2833_, v___x_2838_, v_a_2837_, v_kind_2745_, v___y_2747_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_, v___y_2752_, v___y_2753_);
return v___x_2839_;
}
else
{
lean_dec(v_fst_2834_);
lean_dec(v_fst_2833_);
lean_dec_ref(v_acc_2746_);
lean_dec_ref(v_k_2744_);
lean_dec_ref(v_declInfos_2743_);
return v___x_2836_;
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19_spec__24___lam__0(lean_object* v_acc_2852_, lean_object* v_declInfos_2853_, lean_object* v_k_2854_, uint8_t v_kind_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v_b_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_){
_start:
{
lean_object* v___x_2865_; lean_object* v___x_2866_; 
v___x_2865_ = lean_array_push(v_acc_2852_, v_b_2859_);
v___x_2866_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19(v_declInfos_2853_, v_k_2854_, v_kind_2855_, v___x_2865_, v___y_2856_, v___y_2857_, v___y_2858_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_);
return v___x_2866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19_spec__24___boxed(lean_object* v_acc_2867_, lean_object* v_declInfos_2868_, lean_object* v_k_2869_, lean_object* v_kind_2870_, lean_object* v_name_2871_, lean_object* v_bi_2872_, lean_object* v_type_2873_, lean_object* v_kind_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_){
_start:
{
uint8_t v_kind_boxed_2883_; uint8_t v_bi_boxed_2884_; uint8_t v_kind_boxed_2885_; lean_object* v_res_2886_; 
v_kind_boxed_2883_ = lean_unbox(v_kind_2870_);
v_bi_boxed_2884_ = lean_unbox(v_bi_2872_);
v_kind_boxed_2885_ = lean_unbox(v_kind_2874_);
v_res_2886_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19_spec__24(v_acc_2867_, v_declInfos_2868_, v_k_2869_, v_kind_boxed_2883_, v_name_2871_, v_bi_boxed_2884_, v_type_2873_, v_kind_boxed_2885_, v___y_2875_, v___y_2876_, v___y_2877_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec_ref(v___y_2878_);
lean_dec(v___y_2877_);
lean_dec_ref(v___y_2876_);
lean_dec_ref(v___y_2875_);
return v_res_2886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19___boxed(lean_object* v_declInfos_2887_, lean_object* v_k_2888_, lean_object* v_kind_2889_, lean_object* v_acc_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_){
_start:
{
uint8_t v_kind_boxed_2899_; lean_object* v_res_2900_; 
v_kind_boxed_2899_ = lean_unbox(v_kind_2889_);
v_res_2900_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19(v_declInfos_2887_, v_k_2888_, v_kind_boxed_2899_, v_acc_2890_, v___y_2891_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_);
lean_dec(v___y_2897_);
lean_dec_ref(v___y_2896_);
lean_dec(v___y_2895_);
lean_dec_ref(v___y_2894_);
lean_dec(v___y_2893_);
lean_dec_ref(v___y_2892_);
lean_dec_ref(v___y_2891_);
return v_res_2900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19(lean_object* v_declInfos_2903_, lean_object* v_k_2904_, uint8_t v_kind_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_){
_start:
{
lean_object* v___x_2914_; lean_object* v___x_2915_; 
v___x_2914_ = ((lean_object*)(l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19___closed__0));
v___x_2915_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19_spec__19(v_declInfos_2903_, v_k_2904_, v_kind_2905_, v___x_2914_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_, v___y_2912_);
return v___x_2915_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19___boxed(lean_object* v_declInfos_2916_, lean_object* v_k_2917_, lean_object* v_kind_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_){
_start:
{
uint8_t v_kind_boxed_2927_; lean_object* v_res_2928_; 
v_kind_boxed_2927_ = lean_unbox(v_kind_2918_);
v_res_2928_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19(v_declInfos_2916_, v_k_2917_, v_kind_boxed_2927_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v___y_2923_);
lean_dec_ref(v___y_2922_);
lean_dec(v___y_2921_);
lean_dec_ref(v___y_2920_);
lean_dec_ref(v___y_2919_);
return v_res_2928_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__18(size_t v_sz_2929_, size_t v_i_2930_, lean_object* v_bs_2931_){
_start:
{
uint8_t v___x_2932_; 
v___x_2932_ = lean_usize_dec_lt(v_i_2930_, v_sz_2929_);
if (v___x_2932_ == 0)
{
return v_bs_2931_;
}
else
{
lean_object* v_v_2933_; lean_object* v_fst_2934_; lean_object* v_snd_2935_; lean_object* v___x_2937_; uint8_t v_isShared_2938_; uint8_t v_isSharedCheck_2951_; 
v_v_2933_ = lean_array_uget(v_bs_2931_, v_i_2930_);
v_fst_2934_ = lean_ctor_get(v_v_2933_, 0);
v_snd_2935_ = lean_ctor_get(v_v_2933_, 1);
v_isSharedCheck_2951_ = !lean_is_exclusive(v_v_2933_);
if (v_isSharedCheck_2951_ == 0)
{
v___x_2937_ = v_v_2933_;
v_isShared_2938_ = v_isSharedCheck_2951_;
goto v_resetjp_2936_;
}
else
{
lean_inc(v_snd_2935_);
lean_inc(v_fst_2934_);
lean_dec(v_v_2933_);
v___x_2937_ = lean_box(0);
v_isShared_2938_ = v_isSharedCheck_2951_;
goto v_resetjp_2936_;
}
v_resetjp_2936_:
{
lean_object* v___x_2939_; lean_object* v_bs_x27_2940_; uint8_t v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2944_; 
v___x_2939_ = lean_unsigned_to_nat(0u);
v_bs_x27_2940_ = lean_array_uset(v_bs_2931_, v_i_2930_, v___x_2939_);
v___x_2941_ = 0;
v___x_2942_ = lean_box(v___x_2941_);
if (v_isShared_2938_ == 0)
{
lean_ctor_set(v___x_2937_, 0, v___x_2942_);
v___x_2944_ = v___x_2937_;
goto v_reusejp_2943_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v___x_2942_);
lean_ctor_set(v_reuseFailAlloc_2950_, 1, v_snd_2935_);
v___x_2944_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2943_;
}
v_reusejp_2943_:
{
lean_object* v___x_2945_; size_t v___x_2946_; size_t v___x_2947_; lean_object* v___x_2948_; 
v___x_2945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2945_, 0, v_fst_2934_);
lean_ctor_set(v___x_2945_, 1, v___x_2944_);
v___x_2946_ = ((size_t)1ULL);
v___x_2947_ = lean_usize_add(v_i_2930_, v___x_2946_);
v___x_2948_ = lean_array_uset(v_bs_x27_2940_, v_i_2930_, v___x_2945_);
v_i_2930_ = v___x_2947_;
v_bs_2931_ = v___x_2948_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__18___boxed(lean_object* v_sz_2952_, lean_object* v_i_2953_, lean_object* v_bs_2954_){
_start:
{
size_t v_sz_boxed_2955_; size_t v_i_boxed_2956_; lean_object* v_res_2957_; 
v_sz_boxed_2955_ = lean_unbox_usize(v_sz_2952_);
lean_dec(v_sz_2952_);
v_i_boxed_2956_ = lean_unbox_usize(v_i_2953_);
lean_dec(v_i_2953_);
v_res_2957_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__18(v_sz_boxed_2955_, v_i_boxed_2956_, v_bs_2954_);
return v_res_2957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16(lean_object* v_declInfos_2958_, lean_object* v_k_2959_, uint8_t v_kind_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_){
_start:
{
size_t v_sz_2969_; size_t v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; 
v_sz_2969_ = lean_array_size(v_declInfos_2958_);
v___x_2970_ = ((size_t)0ULL);
v___x_2971_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__18(v_sz_2969_, v___x_2970_, v_declInfos_2958_);
v___x_2972_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16_spec__19(v___x_2971_, v_k_2959_, v_kind_2960_, v___y_2961_, v___y_2962_, v___y_2963_, v___y_2964_, v___y_2965_, v___y_2966_, v___y_2967_);
return v___x_2972_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16___boxed(lean_object* v_declInfos_2973_, lean_object* v_k_2974_, lean_object* v_kind_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_){
_start:
{
uint8_t v_kind_boxed_2984_; lean_object* v_res_2985_; 
v_kind_boxed_2984_ = lean_unbox(v_kind_2975_);
v_res_2985_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16(v_declInfos_2973_, v_k_2974_, v_kind_boxed_2984_, v___y_2976_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_, v___y_2981_, v___y_2982_);
lean_dec(v___y_2982_);
lean_dec_ref(v___y_2981_);
lean_dec(v___y_2980_);
lean_dec_ref(v___y_2979_);
lean_dec(v___y_2978_);
lean_dec_ref(v___y_2977_);
lean_dec_ref(v___y_2976_);
return v_res_2985_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoFor_spec__17(lean_object* v_a_2986_, lean_object* v_as_2987_, size_t v_i_2988_, size_t v_stop_2989_, lean_object* v_b_2990_){
_start:
{
lean_object* v___y_2992_; uint8_t v___x_2996_; 
v___x_2996_ = lean_usize_dec_eq(v_i_2988_, v_stop_2989_);
if (v___x_2996_ == 0)
{
lean_object* v_reassigns_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; uint8_t v___x_3000_; 
v_reassigns_2997_ = lean_ctor_get(v_a_2986_, 4);
v___x_2998_ = lean_array_uget_borrowed(v_as_2987_, v_i_2988_);
v___x_2999_ = l_Lean_TSyntax_getId(v___x_2998_);
v___x_3000_ = l_Lean_NameSet_contains(v_reassigns_2997_, v___x_2999_);
lean_dec(v___x_2999_);
if (v___x_3000_ == 0)
{
v___y_2992_ = v_b_2990_;
goto v___jp_2991_;
}
else
{
lean_object* v___x_3001_; 
lean_inc(v___x_2998_);
v___x_3001_ = lean_array_push(v_b_2990_, v___x_2998_);
v___y_2992_ = v___x_3001_;
goto v___jp_2991_;
}
}
else
{
return v_b_2990_;
}
v___jp_2991_:
{
size_t v___x_2993_; size_t v___x_2994_; 
v___x_2993_ = ((size_t)1ULL);
v___x_2994_ = lean_usize_add(v_i_2988_, v___x_2993_);
v_i_2988_ = v___x_2994_;
v_b_2990_ = v___y_2992_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoFor_spec__17___boxed(lean_object* v_a_3002_, lean_object* v_as_3003_, lean_object* v_i_3004_, lean_object* v_stop_3005_, lean_object* v_b_3006_){
_start:
{
size_t v_i_boxed_3007_; size_t v_stop_boxed_3008_; lean_object* v_res_3009_; 
v_i_boxed_3007_ = lean_unbox_usize(v_i_3004_);
lean_dec(v_i_3004_);
v_stop_boxed_3008_ = lean_unbox_usize(v_stop_3005_);
lean_dec(v_stop_3005_);
v_res_3009_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoFor_spec__17(v_a_3002_, v_as_3003_, v_i_boxed_3007_, v_stop_boxed_3008_, v_b_3006_);
lean_dec_ref(v_as_3003_);
lean_dec_ref(v_a_3002_);
return v_res_3009_;
}
}
static lean_object* _init_l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3011_; lean_object* v___x_3012_; 
v___x_3011_ = ((lean_object*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___closed__0));
v___x_3012_ = l_Lean_stringToMessageData(v___x_3011_);
return v___x_3012_;
}
}
static lean_object* _init_l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3014_; lean_object* v___x_3015_; 
v___x_3014_ = ((lean_object*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___closed__2));
v___x_3015_ = l_Lean_stringToMessageData(v___x_3014_);
return v___x_3015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0(lean_object* v_e_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_){
_start:
{
lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; 
v___x_3025_ = lean_obj_once(&l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___closed__1, &l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___closed__1_once, _init_l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___closed__1);
v___x_3026_ = l_Lean_MessageData_ofExpr(v_e_3016_);
v___x_3027_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3027_, 0, v___x_3025_);
lean_ctor_set(v___x_3027_, 1, v___x_3026_);
v___x_3028_ = lean_obj_once(&l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___closed__3, &l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___closed__3_once, _init_l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___closed__3);
v___x_3029_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3029_, 0, v___x_3027_);
lean_ctor_set(v___x_3029_, 1, v___x_3028_);
v___x_3030_ = l_Lean_throwError___at___00Lean_Elab_Do_elabDoFor_spec__1___redArg(v___x_3029_, v___y_3020_, v___y_3021_, v___y_3022_, v___y_3023_);
return v___x_3030_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0___boxed(lean_object* v_e_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_){
_start:
{
lean_object* v_res_3040_; 
v_res_3040_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__0(v_e_3031_, v___y_3032_, v___y_3033_, v___y_3034_, v___y_3035_, v___y_3036_, v___y_3037_, v___y_3038_);
lean_dec(v___y_3038_);
lean_dec_ref(v___y_3037_);
lean_dec(v___y_3036_);
lean_dec_ref(v___y_3035_);
lean_dec(v___y_3034_);
lean_dec_ref(v___y_3033_);
lean_dec_ref(v___y_3032_);
return v_res_3040_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__1(lean_object* v___x_3041_, lean_object* v_a_3042_, lean_object* v___y_3043_, lean_object* v___x_3044_, lean_object* v___x_3045_, lean_object* v_fired_x3f_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_){
_start:
{
lean_object* v___x_3054_; lean_object* v___x_3055_; size_t v_sz_3056_; size_t v___x_3057_; lean_object* v___x_3058_; 
v___x_3054_ = lean_mk_empty_array_with_capacity(v___x_3041_);
v___x_3055_ = l_Array_zipIdx___redArg(v_a_3042_, v___x_3041_);
v_sz_3056_ = lean_array_size(v___x_3055_);
v___x_3057_ = ((size_t)0ULL);
v___x_3058_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__8___redArg(v_fired_x3f_3046_, v___x_3055_, v_sz_3056_, v___x_3057_, v___x_3054_, v___y_3049_, v___y_3050_, v___y_3051_, v___y_3052_);
lean_dec_ref(v___x_3055_);
if (lean_obj_tag(v___x_3058_) == 0)
{
lean_object* v_a_3059_; size_t v_sz_3060_; lean_object* v___x_3061_; 
v_a_3059_ = lean_ctor_get(v___x_3058_, 0);
lean_inc(v_a_3059_);
lean_dec_ref_known(v___x_3058_, 1);
v_sz_3060_ = lean_array_size(v___y_3043_);
v___x_3061_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__9(v___x_3044_, v___y_3043_, v_sz_3060_, v___x_3057_, v_a_3059_, v___y_3047_, v___y_3048_, v___y_3049_, v___y_3050_, v___y_3051_, v___y_3052_);
if (lean_obj_tag(v___x_3061_) == 0)
{
lean_object* v_a_3062_; uint8_t v___y_3064_; lean_object* v___x_3075_; uint8_t v___x_3076_; 
v_a_3062_ = lean_ctor_get(v___x_3061_, 0);
lean_inc(v_a_3062_);
v___x_3075_ = lean_array_get_size(v_a_3042_);
v___x_3076_ = lean_nat_dec_eq(v___x_3075_, v___x_3045_);
if (v___x_3076_ == 0)
{
v___y_3064_ = v___x_3076_;
goto v___jp_3063_;
}
else
{
lean_object* v___x_3077_; uint8_t v___x_3078_; 
v___x_3077_ = lean_array_get_size(v___y_3043_);
v___x_3078_ = lean_nat_dec_eq(v___x_3077_, v___x_3041_);
v___y_3064_ = v___x_3078_;
goto v___jp_3063_;
}
v___jp_3063_:
{
if (v___y_3064_ == 0)
{
lean_dec(v_a_3062_);
return v___x_3061_;
}
else
{
lean_object* v___x_3066_; uint8_t v_isShared_3067_; uint8_t v_isSharedCheck_3073_; 
v_isSharedCheck_3073_ = !lean_is_exclusive(v___x_3061_);
if (v_isSharedCheck_3073_ == 0)
{
lean_object* v_unused_3074_; 
v_unused_3074_ = lean_ctor_get(v___x_3061_, 0);
lean_dec(v_unused_3074_);
v___x_3066_ = v___x_3061_;
v_isShared_3067_ = v_isSharedCheck_3073_;
goto v_resetjp_3065_;
}
else
{
lean_dec(v___x_3061_);
v___x_3066_ = lean_box(0);
v_isShared_3067_ = v_isSharedCheck_3073_;
goto v_resetjp_3065_;
}
v_resetjp_3065_:
{
lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3071_; 
v___x_3068_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__4);
v___x_3069_ = lean_array_push(v_a_3062_, v___x_3068_);
if (v_isShared_3067_ == 0)
{
lean_ctor_set(v___x_3066_, 0, v___x_3069_);
v___x_3071_ = v___x_3066_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3072_; 
v_reuseFailAlloc_3072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3072_, 0, v___x_3069_);
v___x_3071_ = v_reuseFailAlloc_3072_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
return v___x_3071_;
}
}
}
}
}
else
{
return v___x_3061_;
}
}
else
{
lean_dec_ref(v___x_3044_);
return v___x_3058_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__1___boxed(lean_object* v___x_3079_, lean_object* v_a_3080_, lean_object* v___y_3081_, lean_object* v___x_3082_, lean_object* v___x_3083_, lean_object* v_fired_x3f_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_){
_start:
{
lean_object* v_res_3092_; 
v_res_3092_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__1(v___x_3079_, v_a_3080_, v___y_3081_, v___x_3082_, v___x_3083_, v_fired_x3f_3084_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_, v___y_3090_);
lean_dec(v___y_3090_);
lean_dec_ref(v___y_3089_);
lean_dec(v___y_3088_);
lean_dec_ref(v___y_3087_);
lean_dec(v___y_3086_);
lean_dec_ref(v___y_3085_);
lean_dec(v___x_3083_);
lean_dec_ref(v___y_3081_);
lean_dec_ref(v_a_3080_);
lean_dec(v___x_3079_);
return v_res_3092_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__2(lean_object* v___f_3094_, lean_object* v___x_3095_, lean_object* v___x_3096_, lean_object* v___x_3097_, lean_object* v___x_3098_, lean_object* v_snd_3099_, lean_object* v___x_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_){
_start:
{
lean_object* v___x_3109_; 
lean_inc(v___y_3107_);
lean_inc_ref(v___y_3106_);
lean_inc(v___y_3105_);
lean_inc_ref(v___y_3104_);
lean_inc(v___y_3103_);
lean_inc_ref(v___y_3102_);
v___x_3109_ = lean_apply_8(v___f_3094_, v___x_3095_, v___y_3102_, v___y_3103_, v___y_3104_, v___y_3105_, v___y_3106_, v___y_3107_, lean_box(0));
if (lean_obj_tag(v___x_3109_) == 0)
{
lean_object* v_a_3110_; lean_object* v___x_3111_; 
v_a_3110_ = lean_ctor_get(v___x_3109_, 0);
lean_inc(v_a_3110_);
lean_dec_ref_known(v___x_3109_, 1);
v___x_3111_ = l_Lean_Meta_mkProdMkN(v_a_3110_, v___x_3096_, v___y_3104_, v___y_3105_, v___y_3106_, v___y_3107_);
if (lean_obj_tag(v___x_3111_) == 0)
{
lean_object* v_a_3112_; lean_object* v_fst_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; 
v_a_3112_ = lean_ctor_get(v___x_3111_, 0);
lean_inc(v_a_3112_);
lean_dec_ref_known(v___x_3111_, 1);
v_fst_3113_ = lean_ctor_get(v_a_3112_, 0);
lean_inc(v_fst_3113_);
lean_dec(v_a_3112_);
v___x_3114_ = ((lean_object*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__2___closed__0));
v___x_3115_ = l_Lean_Name_mkStr2(v___x_3097_, v___x_3114_);
v___x_3116_ = l_Lean_mkConst(v___x_3115_, v___x_3098_);
v___x_3117_ = l_Lean_mkAppB(v___x_3116_, v_snd_3099_, v_fst_3113_);
v___x_3118_ = l_Lean_Elab_Do_mkPureApp(v___x_3100_, v___x_3117_, v___y_3101_, v___y_3102_, v___y_3103_, v___y_3104_, v___y_3105_, v___y_3106_, v___y_3107_);
return v___x_3118_;
}
else
{
lean_object* v_a_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3126_; 
lean_dec_ref(v___x_3100_);
lean_dec_ref(v_snd_3099_);
lean_dec(v___x_3098_);
lean_dec_ref(v___x_3097_);
v_a_3119_ = lean_ctor_get(v___x_3111_, 0);
v_isSharedCheck_3126_ = !lean_is_exclusive(v___x_3111_);
if (v_isSharedCheck_3126_ == 0)
{
v___x_3121_ = v___x_3111_;
v_isShared_3122_ = v_isSharedCheck_3126_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_a_3119_);
lean_dec(v___x_3111_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3126_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v___x_3124_; 
if (v_isShared_3122_ == 0)
{
v___x_3124_ = v___x_3121_;
goto v_reusejp_3123_;
}
else
{
lean_object* v_reuseFailAlloc_3125_; 
v_reuseFailAlloc_3125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3125_, 0, v_a_3119_);
v___x_3124_ = v_reuseFailAlloc_3125_;
goto v_reusejp_3123_;
}
v_reusejp_3123_:
{
return v___x_3124_;
}
}
}
}
else
{
lean_object* v_a_3127_; lean_object* v___x_3129_; uint8_t v_isShared_3130_; uint8_t v_isSharedCheck_3134_; 
lean_dec_ref(v___x_3100_);
lean_dec_ref(v_snd_3099_);
lean_dec(v___x_3098_);
lean_dec_ref(v___x_3097_);
lean_dec(v___x_3096_);
v_a_3127_ = lean_ctor_get(v___x_3109_, 0);
v_isSharedCheck_3134_ = !lean_is_exclusive(v___x_3109_);
if (v_isSharedCheck_3134_ == 0)
{
v___x_3129_ = v___x_3109_;
v_isShared_3130_ = v_isSharedCheck_3134_;
goto v_resetjp_3128_;
}
else
{
lean_inc(v_a_3127_);
lean_dec(v___x_3109_);
v___x_3129_ = lean_box(0);
v_isShared_3130_ = v_isSharedCheck_3134_;
goto v_resetjp_3128_;
}
v_resetjp_3128_:
{
lean_object* v___x_3132_; 
if (v_isShared_3130_ == 0)
{
v___x_3132_ = v___x_3129_;
goto v_reusejp_3131_;
}
else
{
lean_object* v_reuseFailAlloc_3133_; 
v_reuseFailAlloc_3133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3133_, 0, v_a_3127_);
v___x_3132_ = v_reuseFailAlloc_3133_;
goto v_reusejp_3131_;
}
v_reusejp_3131_:
{
return v___x_3132_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__2___boxed(lean_object* v___f_3135_, lean_object* v___x_3136_, lean_object* v___x_3137_, lean_object* v___x_3138_, lean_object* v___x_3139_, lean_object* v_snd_3140_, lean_object* v___x_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_){
_start:
{
lean_object* v_res_3150_; 
v_res_3150_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__2(v___f_3135_, v___x_3136_, v___x_3137_, v___x_3138_, v___x_3139_, v_snd_3140_, v___x_3141_, v___y_3142_, v___y_3143_, v___y_3144_, v___y_3145_, v___y_3146_, v___y_3147_, v___y_3148_);
lean_dec(v___y_3148_);
lean_dec_ref(v___y_3147_);
lean_dec(v___y_3146_);
lean_dec_ref(v___y_3145_);
lean_dec(v___y_3144_);
lean_dec_ref(v___y_3143_);
lean_dec_ref(v___y_3142_);
return v_res_3150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__3(lean_object* v___f_3151_, lean_object* v___x_3152_, lean_object* v___x_3153_, lean_object* v___x_3154_, lean_object* v___x_3155_, lean_object* v_snd_3156_, lean_object* v___x_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_){
_start:
{
lean_object* v___x_3166_; 
lean_inc(v___y_3164_);
lean_inc_ref(v___y_3163_);
lean_inc(v___y_3162_);
lean_inc_ref(v___y_3161_);
lean_inc(v___y_3160_);
lean_inc_ref(v___y_3159_);
v___x_3166_ = lean_apply_8(v___f_3151_, v___x_3152_, v___y_3159_, v___y_3160_, v___y_3161_, v___y_3162_, v___y_3163_, v___y_3164_, lean_box(0));
if (lean_obj_tag(v___x_3166_) == 0)
{
lean_object* v_a_3167_; lean_object* v___x_3168_; 
v_a_3167_ = lean_ctor_get(v___x_3166_, 0);
lean_inc(v_a_3167_);
lean_dec_ref_known(v___x_3166_, 1);
v___x_3168_ = l_Lean_Meta_mkProdMkN(v_a_3167_, v___x_3153_, v___y_3161_, v___y_3162_, v___y_3163_, v___y_3164_);
if (lean_obj_tag(v___x_3168_) == 0)
{
lean_object* v_a_3169_; lean_object* v_fst_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; 
v_a_3169_ = lean_ctor_get(v___x_3168_, 0);
lean_inc(v_a_3169_);
lean_dec_ref_known(v___x_3168_, 1);
v_fst_3170_ = lean_ctor_get(v_a_3169_, 0);
lean_inc(v_fst_3170_);
lean_dec(v_a_3169_);
v___x_3171_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__0));
v___x_3172_ = l_Lean_Name_mkStr2(v___x_3154_, v___x_3171_);
v___x_3173_ = l_Lean_mkConst(v___x_3172_, v___x_3155_);
v___x_3174_ = l_Lean_mkAppB(v___x_3173_, v_snd_3156_, v_fst_3170_);
v___x_3175_ = l_Lean_Elab_Do_mkPureApp(v___x_3157_, v___x_3174_, v___y_3158_, v___y_3159_, v___y_3160_, v___y_3161_, v___y_3162_, v___y_3163_, v___y_3164_);
lean_dec(v___y_3164_);
lean_dec_ref(v___y_3163_);
lean_dec(v___y_3162_);
lean_dec_ref(v___y_3161_);
lean_dec(v___y_3160_);
lean_dec_ref(v___y_3159_);
return v___x_3175_;
}
else
{
lean_object* v_a_3176_; lean_object* v___x_3178_; uint8_t v_isShared_3179_; uint8_t v_isSharedCheck_3183_; 
lean_dec(v___y_3164_);
lean_dec_ref(v___y_3163_);
lean_dec(v___y_3162_);
lean_dec_ref(v___y_3161_);
lean_dec(v___y_3160_);
lean_dec_ref(v___y_3159_);
lean_dec_ref(v___x_3157_);
lean_dec_ref(v_snd_3156_);
lean_dec(v___x_3155_);
lean_dec_ref(v___x_3154_);
v_a_3176_ = lean_ctor_get(v___x_3168_, 0);
v_isSharedCheck_3183_ = !lean_is_exclusive(v___x_3168_);
if (v_isSharedCheck_3183_ == 0)
{
v___x_3178_ = v___x_3168_;
v_isShared_3179_ = v_isSharedCheck_3183_;
goto v_resetjp_3177_;
}
else
{
lean_inc(v_a_3176_);
lean_dec(v___x_3168_);
v___x_3178_ = lean_box(0);
v_isShared_3179_ = v_isSharedCheck_3183_;
goto v_resetjp_3177_;
}
v_resetjp_3177_:
{
lean_object* v___x_3181_; 
if (v_isShared_3179_ == 0)
{
v___x_3181_ = v___x_3178_;
goto v_reusejp_3180_;
}
else
{
lean_object* v_reuseFailAlloc_3182_; 
v_reuseFailAlloc_3182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3182_, 0, v_a_3176_);
v___x_3181_ = v_reuseFailAlloc_3182_;
goto v_reusejp_3180_;
}
v_reusejp_3180_:
{
return v___x_3181_;
}
}
}
}
else
{
lean_object* v_a_3184_; lean_object* v___x_3186_; uint8_t v_isShared_3187_; uint8_t v_isSharedCheck_3191_; 
lean_dec(v___y_3164_);
lean_dec_ref(v___y_3163_);
lean_dec(v___y_3162_);
lean_dec_ref(v___y_3161_);
lean_dec(v___y_3160_);
lean_dec_ref(v___y_3159_);
lean_dec_ref(v___x_3157_);
lean_dec_ref(v_snd_3156_);
lean_dec(v___x_3155_);
lean_dec_ref(v___x_3154_);
lean_dec(v___x_3153_);
v_a_3184_ = lean_ctor_get(v___x_3166_, 0);
v_isSharedCheck_3191_ = !lean_is_exclusive(v___x_3166_);
if (v_isSharedCheck_3191_ == 0)
{
v___x_3186_ = v___x_3166_;
v_isShared_3187_ = v_isSharedCheck_3191_;
goto v_resetjp_3185_;
}
else
{
lean_inc(v_a_3184_);
lean_dec(v___x_3166_);
v___x_3186_ = lean_box(0);
v_isShared_3187_ = v_isSharedCheck_3191_;
goto v_resetjp_3185_;
}
v_resetjp_3185_:
{
lean_object* v___x_3189_; 
if (v_isShared_3187_ == 0)
{
v___x_3189_ = v___x_3186_;
goto v_reusejp_3188_;
}
else
{
lean_object* v_reuseFailAlloc_3190_; 
v_reuseFailAlloc_3190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3190_, 0, v_a_3184_);
v___x_3189_ = v_reuseFailAlloc_3190_;
goto v_reusejp_3188_;
}
v_reusejp_3188_:
{
return v___x_3189_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__3___boxed(lean_object* v___f_3192_, lean_object* v___x_3193_, lean_object* v___x_3194_, lean_object* v___x_3195_, lean_object* v___x_3196_, lean_object* v_snd_3197_, lean_object* v___x_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_, lean_object* v___y_3206_){
_start:
{
lean_object* v_res_3207_; 
v_res_3207_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__3(v___f_3192_, v___x_3193_, v___x_3194_, v___x_3195_, v___x_3196_, v_snd_3197_, v___x_3198_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_, v___y_3203_, v___y_3204_, v___y_3205_);
lean_dec_ref(v___y_3199_);
return v_res_3207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__4(lean_object* v___x_3208_, lean_object* v_a_3209_, lean_object* v___y_3210_, lean_object* v___x_3211_, lean_object* v___x_3212_, lean_object* v___x_3213_, lean_object* v_snd_3214_, lean_object* v_resultType_3215_, lean_object* v___x_3216_, size_t v_sz_3217_, size_t v___x_3218_, lean_object* v___x_3219_, lean_object* v_a_3220_, lean_object* v___x_3221_, lean_object* v___f_3222_, lean_object* v_body_3223_, uint8_t v___x_3224_, lean_object* v___x_3225_, lean_object* v___f_3226_, uint8_t v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_){
_start:
{
lean_object* v_monadInfo_3236_; lean_object* v_mutVars_3237_; lean_object* v_mutVarDefs_3238_; lean_object* v_contInfo_3239_; uint8_t v_deadCode_3240_; lean_object* v_ops_3241_; lean_object* v___x_3243_; uint8_t v_isShared_3244_; uint8_t v_isSharedCheck_3284_; 
v_monadInfo_3236_ = lean_ctor_get(v___y_3228_, 0);
v_mutVars_3237_ = lean_ctor_get(v___y_3228_, 1);
v_mutVarDefs_3238_ = lean_ctor_get(v___y_3228_, 2);
v_contInfo_3239_ = lean_ctor_get(v___y_3228_, 4);
v_deadCode_3240_ = lean_ctor_get_uint8(v___y_3228_, sizeof(void*)*6);
v_ops_3241_ = lean_ctor_get(v___y_3228_, 5);
v_isSharedCheck_3284_ = !lean_is_exclusive(v___y_3228_);
if (v_isSharedCheck_3284_ == 0)
{
lean_object* v_unused_3285_; 
v_unused_3285_ = lean_ctor_get(v___y_3228_, 3);
lean_dec(v_unused_3285_);
v___x_3243_ = v___y_3228_;
v_isShared_3244_ = v_isSharedCheck_3284_;
goto v_resetjp_3242_;
}
else
{
lean_inc(v_ops_3241_);
lean_inc(v_contInfo_3239_);
lean_inc(v_mutVarDefs_3238_);
lean_inc(v_mutVars_3237_);
lean_inc(v_monadInfo_3236_);
lean_dec(v___y_3228_);
v___x_3243_ = lean_box(0);
v_isShared_3244_ = v_isSharedCheck_3284_;
goto v_resetjp_3242_;
}
v_resetjp_3242_:
{
lean_object* v___x_3246_; 
lean_inc_ref(v___x_3208_);
if (v_isShared_3244_ == 0)
{
lean_ctor_set(v___x_3243_, 3, v___x_3208_);
v___x_3246_ = v___x_3243_;
goto v_reusejp_3245_;
}
else
{
lean_object* v_reuseFailAlloc_3283_; 
v_reuseFailAlloc_3283_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_3283_, 0, v_monadInfo_3236_);
lean_ctor_set(v_reuseFailAlloc_3283_, 1, v_mutVars_3237_);
lean_ctor_set(v_reuseFailAlloc_3283_, 2, v_mutVarDefs_3238_);
lean_ctor_set(v_reuseFailAlloc_3283_, 3, v___x_3208_);
lean_ctor_set(v_reuseFailAlloc_3283_, 4, v_contInfo_3239_);
lean_ctor_set(v_reuseFailAlloc_3283_, 5, v_ops_3241_);
lean_ctor_set_uint8(v_reuseFailAlloc_3283_, sizeof(void*)*6, v_deadCode_3240_);
v___x_3246_ = v_reuseFailAlloc_3283_;
goto v_reusejp_3245_;
}
v_reusejp_3245_:
{
lean_object* v___x_3247_; 
v___x_3247_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13(v_a_3209_, v___y_3210_, v___x_3211_, v___x_3212_, v___x_3213_, v_snd_3214_, v___x_3208_, v_resultType_3215_, v___x_3216_, v_sz_3217_, v___x_3218_, v___x_3219_, v___x_3246_, v___y_3229_, v___y_3230_, v___y_3231_, v___y_3232_, v___y_3233_, v___y_3234_);
if (lean_obj_tag(v___x_3247_) == 0)
{
lean_object* v_a_3248_; lean_object* v_snd_3249_; lean_object* v_snd_3250_; lean_object* v_snd_3251_; lean_object* v_fst_3252_; lean_object* v_fst_3253_; lean_object* v_fst_3254_; lean_object* v_fst_3255_; lean_object* v_snd_3256_; lean_object* v_resultName_3257_; lean_object* v_resultType_3258_; lean_object* v___x_3260_; uint8_t v_isShared_3261_; uint8_t v_isSharedCheck_3273_; 
v_a_3248_ = lean_ctor_get(v___x_3247_, 0);
lean_inc(v_a_3248_);
lean_dec_ref_known(v___x_3247_, 1);
v_snd_3249_ = lean_ctor_get(v_a_3248_, 1);
lean_inc(v_snd_3249_);
v_snd_3250_ = lean_ctor_get(v_snd_3249_, 1);
lean_inc(v_snd_3250_);
v_snd_3251_ = lean_ctor_get(v_snd_3250_, 1);
lean_inc(v_snd_3251_);
v_fst_3252_ = lean_ctor_get(v_a_3248_, 0);
lean_inc(v_fst_3252_);
lean_dec(v_a_3248_);
v_fst_3253_ = lean_ctor_get(v_snd_3249_, 0);
lean_inc(v_fst_3253_);
lean_dec(v_snd_3249_);
v_fst_3254_ = lean_ctor_get(v_snd_3250_, 0);
lean_inc(v_fst_3254_);
lean_dec(v_snd_3250_);
v_fst_3255_ = lean_ctor_get(v_snd_3251_, 0);
lean_inc(v_fst_3255_);
v_snd_3256_ = lean_ctor_get(v_snd_3251_, 1);
lean_inc(v_snd_3256_);
lean_dec(v_snd_3251_);
v_resultName_3257_ = lean_ctor_get(v_a_3220_, 0);
v_resultType_3258_ = lean_ctor_get(v_a_3220_, 1);
v_isSharedCheck_3273_ = !lean_is_exclusive(v_a_3220_);
if (v_isSharedCheck_3273_ == 0)
{
lean_object* v_unused_3274_; 
v_unused_3274_ = lean_ctor_get(v_a_3220_, 2);
lean_dec(v_unused_3274_);
v___x_3260_ = v_a_3220_;
v_isShared_3261_ = v_isSharedCheck_3273_;
goto v_resetjp_3259_;
}
else
{
lean_inc(v_resultType_3258_);
lean_inc(v_resultName_3257_);
lean_dec(v_a_3220_);
v___x_3260_ = lean_box(0);
v_isShared_3261_ = v_isSharedCheck_3273_;
goto v_resetjp_3259_;
}
v_resetjp_3259_:
{
lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; uint8_t v___x_3266_; lean_object* v___x_3268_; 
v___x_3262_ = lean_box(0);
v___x_3263_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_elabDoFor_spec__14(v___x_3262_, v_fst_3253_);
lean_dec(v_fst_3253_);
v___x_3264_ = l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__15(v___x_3263_, v___x_3221_);
v___x_3265_ = l_List_appendTR___redArg(v_fst_3254_, v___x_3264_);
v___x_3266_ = 1;
lean_inc_ref(v___f_3222_);
if (v_isShared_3261_ == 0)
{
lean_ctor_set(v___x_3260_, 2, v___f_3222_);
v___x_3268_ = v___x_3260_;
goto v_reusejp_3267_;
}
else
{
lean_object* v_reuseFailAlloc_3272_; 
v_reuseFailAlloc_3272_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3272_, 0, v_resultName_3257_);
lean_ctor_set(v_reuseFailAlloc_3272_, 1, v_resultType_3258_);
lean_ctor_set(v_reuseFailAlloc_3272_, 2, v___f_3222_);
v___x_3268_ = v_reuseFailAlloc_3272_;
goto v_reusejp_3267_;
}
v_reusejp_3267_:
{
lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; 
lean_ctor_set_uint8(v___x_3268_, sizeof(void*)*3, v___x_3266_);
v___x_3269_ = lean_box(v___x_3224_);
v___x_3270_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoSeq___boxed), 11, 3);
lean_closure_set(v___x_3270_, 0, v_body_3223_);
lean_closure_set(v___x_3270_, 1, v___x_3268_);
lean_closure_set(v___x_3270_, 2, v___x_3269_);
v___x_3271_ = l_Lean_Elab_Do_enterLoopBody___redArg(v___x_3225_, v___f_3226_, v___f_3222_, v_fst_3252_, v___x_3265_, v___y_3227_, v_fst_3255_, v_snd_3256_, v___x_3270_, v___x_3246_, v___y_3229_, v___y_3230_, v___y_3231_, v___y_3232_, v___y_3233_, v___y_3234_);
lean_dec_ref(v___x_3246_);
lean_dec(v___x_3265_);
return v___x_3271_;
}
}
}
else
{
lean_object* v_a_3275_; lean_object* v___x_3277_; uint8_t v_isShared_3278_; uint8_t v_isSharedCheck_3282_; 
lean_dec_ref(v___x_3246_);
lean_dec_ref(v___f_3226_);
lean_dec(v___x_3225_);
lean_dec(v_body_3223_);
lean_dec_ref(v___f_3222_);
lean_dec(v___x_3221_);
lean_dec_ref(v_a_3220_);
v_a_3275_ = lean_ctor_get(v___x_3247_, 0);
v_isSharedCheck_3282_ = !lean_is_exclusive(v___x_3247_);
if (v_isSharedCheck_3282_ == 0)
{
v___x_3277_ = v___x_3247_;
v_isShared_3278_ = v_isSharedCheck_3282_;
goto v_resetjp_3276_;
}
else
{
lean_inc(v_a_3275_);
lean_dec(v___x_3247_);
v___x_3277_ = lean_box(0);
v_isShared_3278_ = v_isSharedCheck_3282_;
goto v_resetjp_3276_;
}
v_resetjp_3276_:
{
lean_object* v___x_3280_; 
if (v_isShared_3278_ == 0)
{
v___x_3280_ = v___x_3277_;
goto v_reusejp_3279_;
}
else
{
lean_object* v_reuseFailAlloc_3281_; 
v_reuseFailAlloc_3281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3281_, 0, v_a_3275_);
v___x_3280_ = v_reuseFailAlloc_3281_;
goto v_reusejp_3279_;
}
v_reusejp_3279_:
{
return v___x_3280_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__4___boxed(lean_object** _args){
lean_object* v___x_3286_ = _args[0];
lean_object* v_a_3287_ = _args[1];
lean_object* v___y_3288_ = _args[2];
lean_object* v___x_3289_ = _args[3];
lean_object* v___x_3290_ = _args[4];
lean_object* v___x_3291_ = _args[5];
lean_object* v_snd_3292_ = _args[6];
lean_object* v_resultType_3293_ = _args[7];
lean_object* v___x_3294_ = _args[8];
lean_object* v_sz_3295_ = _args[9];
lean_object* v___x_3296_ = _args[10];
lean_object* v___x_3297_ = _args[11];
lean_object* v_a_3298_ = _args[12];
lean_object* v___x_3299_ = _args[13];
lean_object* v___f_3300_ = _args[14];
lean_object* v_body_3301_ = _args[15];
lean_object* v___x_3302_ = _args[16];
lean_object* v___x_3303_ = _args[17];
lean_object* v___f_3304_ = _args[18];
lean_object* v___y_3305_ = _args[19];
lean_object* v___y_3306_ = _args[20];
lean_object* v___y_3307_ = _args[21];
lean_object* v___y_3308_ = _args[22];
lean_object* v___y_3309_ = _args[23];
lean_object* v___y_3310_ = _args[24];
lean_object* v___y_3311_ = _args[25];
lean_object* v___y_3312_ = _args[26];
lean_object* v___y_3313_ = _args[27];
_start:
{
size_t v_sz_boxed_3314_; size_t v___x_126898__boxed_3315_; uint8_t v___x_126903__boxed_3316_; uint8_t v___y_126906__boxed_3317_; lean_object* v_res_3318_; 
v_sz_boxed_3314_ = lean_unbox_usize(v_sz_3295_);
lean_dec(v_sz_3295_);
v___x_126898__boxed_3315_ = lean_unbox_usize(v___x_3296_);
lean_dec(v___x_3296_);
v___x_126903__boxed_3316_ = lean_unbox(v___x_3302_);
v___y_126906__boxed_3317_ = lean_unbox(v___y_3305_);
v_res_3318_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__4(v___x_3286_, v_a_3287_, v___y_3288_, v___x_3289_, v___x_3290_, v___x_3291_, v_snd_3292_, v_resultType_3293_, v___x_3294_, v_sz_boxed_3314_, v___x_126898__boxed_3315_, v___x_3297_, v_a_3298_, v___x_3299_, v___f_3300_, v_body_3301_, v___x_126903__boxed_3316_, v___x_3303_, v___f_3304_, v___y_126906__boxed_3317_, v___y_3306_, v___y_3307_, v___y_3308_, v___y_3309_, v___y_3310_, v___y_3311_, v___y_3312_);
lean_dec(v___y_3312_);
lean_dec_ref(v___y_3311_);
lean_dec(v___y_3310_);
lean_dec_ref(v___y_3309_);
lean_dec(v___y_3308_);
lean_dec_ref(v___y_3307_);
lean_dec_ref(v___x_3294_);
return v_res_3318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__5(lean_object* v_a_3329_, lean_object* v___x_3330_, lean_object* v_snd_3331_, lean_object* v___f_3332_, lean_object* v___x_3333_, lean_object* v___f_3334_, lean_object* v_a_3335_, lean_object* v___x_3336_, lean_object* v___y_3337_, lean_object* v___x_3338_, lean_object* v_a_3339_, lean_object* v_body_3340_, uint8_t v___x_3341_, lean_object* v___x_3342_, uint8_t v___y_3343_, lean_object* v___x_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_, lean_object* v_xh_3348_, lean_object* v_b_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_){
_start:
{
lean_object* v_resultType_3355_; lean_object* v___x_3357_; uint8_t v_isShared_3358_; uint8_t v_isSharedCheck_3386_; 
v_resultType_3355_ = lean_ctor_get(v_a_3329_, 0);
v_isSharedCheck_3386_ = !lean_is_exclusive(v_a_3329_);
if (v_isSharedCheck_3386_ == 0)
{
lean_object* v_unused_3387_; 
v_unused_3387_ = lean_ctor_get(v_a_3329_, 1);
lean_dec(v_unused_3387_);
v___x_3357_ = v_a_3329_;
v_isShared_3358_ = v_isSharedCheck_3386_;
goto v_resetjp_3356_;
}
else
{
lean_inc(v_resultType_3355_);
lean_dec(v_a_3329_);
v___x_3357_ = lean_box(0);
v_isShared_3358_ = v_isSharedCheck_3386_;
goto v_resetjp_3356_;
}
v_resetjp_3356_:
{
lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___f_3366_; lean_object* v___f_3367_; lean_object* v___x_3369_; 
v___x_3359_ = l_Lean_Expr_fvarId_x21(v_b_3349_);
v___x_3360_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___redArg___closed__0));
v___x_3361_ = ((lean_object*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__5___closed__0));
v___x_3362_ = lean_box(0);
lean_inc_n(v___x_3330_, 3);
v___x_3363_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3363_, 0, v___x_3330_);
lean_ctor_set(v___x_3363_, 1, v___x_3362_);
lean_inc_ref_n(v___x_3363_, 3);
v___x_3364_ = l_Lean_mkConst(v___x_3361_, v___x_3363_);
lean_inc_ref_n(v_snd_3331_, 3);
v___x_3365_ = l_Lean_Expr_app___override(v___x_3364_, v_snd_3331_);
lean_inc_ref_n(v___x_3365_, 2);
lean_inc(v___x_3333_);
lean_inc_ref(v___f_3332_);
v___f_3366_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__2___boxed), 15, 7);
lean_closure_set(v___f_3366_, 0, v___f_3332_);
lean_closure_set(v___f_3366_, 1, v___x_3333_);
lean_closure_set(v___f_3366_, 2, v___x_3330_);
lean_closure_set(v___f_3366_, 3, v___x_3360_);
lean_closure_set(v___f_3366_, 4, v___x_3363_);
lean_closure_set(v___f_3366_, 5, v_snd_3331_);
lean_closure_set(v___f_3366_, 6, v___x_3365_);
v___f_3367_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__3___boxed), 15, 7);
lean_closure_set(v___f_3367_, 0, v___f_3332_);
lean_closure_set(v___f_3367_, 1, v___x_3333_);
lean_closure_set(v___f_3367_, 2, v___x_3330_);
lean_closure_set(v___f_3367_, 3, v___x_3360_);
lean_closure_set(v___f_3367_, 4, v___x_3363_);
lean_closure_set(v___f_3367_, 5, v_snd_3331_);
lean_closure_set(v___f_3367_, 6, v___x_3365_);
lean_inc_ref(v_resultType_3355_);
if (v_isShared_3358_ == 0)
{
lean_ctor_set(v___x_3357_, 1, v___f_3334_);
v___x_3369_ = v___x_3357_;
goto v_reusejp_3368_;
}
else
{
lean_object* v_reuseFailAlloc_3385_; 
v_reuseFailAlloc_3385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3385_, 0, v_resultType_3355_);
lean_ctor_set(v_reuseFailAlloc_3385_, 1, v___f_3334_);
v___x_3369_ = v_reuseFailAlloc_3385_;
goto v_reusejp_3368_;
}
v_reusejp_3368_:
{
lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; size_t v_sz_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___f_3378_; lean_object* v___x_3379_; 
v___x_3370_ = l_Array_zipIdx___redArg(v_a_3335_, v___x_3336_);
v___x_3371_ = ((lean_object*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__5___closed__2));
v___x_3372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3372_, 0, v___x_3369_);
lean_ctor_set(v___x_3372_, 1, v___x_3371_);
v_sz_3373_ = lean_array_size(v___x_3370_);
v___x_3374_ = lean_box_usize(v_sz_3373_);
v___x_3375_ = ((lean_object*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__5___boxed__const__1));
v___x_3376_ = lean_box(v___x_3341_);
v___x_3377_ = lean_box(v___y_3343_);
v___f_3378_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__4___boxed), 28, 20);
lean_closure_set(v___f_3378_, 0, v___x_3365_);
lean_closure_set(v___f_3378_, 1, v_a_3335_);
lean_closure_set(v___f_3378_, 2, v___y_3337_);
lean_closure_set(v___f_3378_, 3, v___x_3338_);
lean_closure_set(v___f_3378_, 4, v___x_3330_);
lean_closure_set(v___f_3378_, 5, v___x_3363_);
lean_closure_set(v___f_3378_, 6, v_snd_3331_);
lean_closure_set(v___f_3378_, 7, v_resultType_3355_);
lean_closure_set(v___f_3378_, 8, v___x_3370_);
lean_closure_set(v___f_3378_, 9, v___x_3374_);
lean_closure_set(v___f_3378_, 10, v___x_3375_);
lean_closure_set(v___f_3378_, 11, v___x_3372_);
lean_closure_set(v___f_3378_, 12, v_a_3339_);
lean_closure_set(v___f_3378_, 13, v___x_3362_);
lean_closure_set(v___f_3378_, 14, v___f_3366_);
lean_closure_set(v___f_3378_, 15, v_body_3340_);
lean_closure_set(v___f_3378_, 16, v___x_3376_);
lean_closure_set(v___f_3378_, 17, v___x_3342_);
lean_closure_set(v___f_3378_, 18, v___f_3367_);
lean_closure_set(v___f_3378_, 19, v___x_3377_);
v___x_3379_ = l_Lean_Elab_Do_bindMutVarsFromTuple(v___x_3344_, v___x_3359_, v___f_3378_, v___y_3345_, v___y_3346_, v___y_3347_, v___y_3350_, v___y_3351_, v___y_3352_, v___y_3353_);
if (lean_obj_tag(v___x_3379_) == 0)
{
lean_object* v_a_3380_; lean_object* v___x_3381_; uint8_t v___x_3382_; uint8_t v___x_3383_; lean_object* v___x_3384_; 
v_a_3380_ = lean_ctor_get(v___x_3379_, 0);
lean_inc(v_a_3380_);
lean_dec_ref_known(v___x_3379_, 1);
v___x_3381_ = lean_array_push(v_xh_3348_, v_b_3349_);
v___x_3382_ = 0;
v___x_3383_ = 1;
v___x_3384_ = l_Lean_Meta_mkLambdaFVars(v___x_3381_, v_a_3380_, v___x_3382_, v___x_3341_, v___x_3382_, v___x_3341_, v___x_3383_, v___y_3350_, v___y_3351_, v___y_3352_, v___y_3353_);
lean_dec_ref(v___x_3381_);
return v___x_3384_;
}
else
{
lean_dec_ref(v_b_3349_);
lean_dec_ref(v_xh_3348_);
return v___x_3379_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__5___boxed(lean_object** _args){
lean_object* v_a_3388_ = _args[0];
lean_object* v___x_3389_ = _args[1];
lean_object* v_snd_3390_ = _args[2];
lean_object* v___f_3391_ = _args[3];
lean_object* v___x_3392_ = _args[4];
lean_object* v___f_3393_ = _args[5];
lean_object* v_a_3394_ = _args[6];
lean_object* v___x_3395_ = _args[7];
lean_object* v___y_3396_ = _args[8];
lean_object* v___x_3397_ = _args[9];
lean_object* v_a_3398_ = _args[10];
lean_object* v_body_3399_ = _args[11];
lean_object* v___x_3400_ = _args[12];
lean_object* v___x_3401_ = _args[13];
lean_object* v___y_3402_ = _args[14];
lean_object* v___x_3403_ = _args[15];
lean_object* v___y_3404_ = _args[16];
lean_object* v___y_3405_ = _args[17];
lean_object* v___y_3406_ = _args[18];
lean_object* v_xh_3407_ = _args[19];
lean_object* v_b_3408_ = _args[20];
lean_object* v___y_3409_ = _args[21];
lean_object* v___y_3410_ = _args[22];
lean_object* v___y_3411_ = _args[23];
lean_object* v___y_3412_ = _args[24];
lean_object* v___y_3413_ = _args[25];
_start:
{
uint8_t v___x_127064__boxed_3414_; uint8_t v___y_127066__boxed_3415_; lean_object* v_res_3416_; 
v___x_127064__boxed_3414_ = lean_unbox(v___x_3400_);
v___y_127066__boxed_3415_ = lean_unbox(v___y_3402_);
v_res_3416_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__5(v_a_3388_, v___x_3389_, v_snd_3390_, v___f_3391_, v___x_3392_, v___f_3393_, v_a_3394_, v___x_3395_, v___y_3396_, v___x_3397_, v_a_3398_, v_body_3399_, v___x_127064__boxed_3414_, v___x_3401_, v___y_127066__boxed_3415_, v___x_3403_, v___y_3404_, v___y_3405_, v___y_3406_, v_xh_3407_, v_b_3408_, v___y_3409_, v___y_3410_, v___y_3411_, v___y_3412_);
lean_dec(v___y_3412_);
lean_dec_ref(v___y_3411_);
lean_dec(v___y_3410_);
lean_dec_ref(v___y_3409_);
lean_dec(v___y_3406_);
lean_dec_ref(v___y_3405_);
lean_dec_ref(v___y_3404_);
lean_dec(v___x_3395_);
return v_res_3416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22(lean_object* v___x_3418_, lean_object* v_snd_3419_, lean_object* v_a_3420_, lean_object* v___y_3421_, lean_object* v___x_3422_, lean_object* v_a_3423_, lean_object* v_a_3424_, lean_object* v_body_3425_, uint8_t v___x_3426_, lean_object* v___x_3427_, uint8_t v___y_3428_, lean_object* v___x_3429_, lean_object* v_xh_3430_, lean_object* v_name_3431_, uint8_t v_bi_3432_, lean_object* v_type_3433_, uint8_t v_kind_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_){
_start:
{
lean_object* v___f_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___f_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___f_3450_; lean_object* v___x_3451_; 
v___f_3443_ = ((lean_object*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___closed__0));
v___x_3444_ = lean_unsigned_to_nat(0u);
v___x_3445_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v___x_3422_);
lean_inc_ref(v___y_3421_);
lean_inc_ref(v_a_3420_);
v___f_3446_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__1___boxed), 13, 5);
lean_closure_set(v___f_3446_, 0, v___x_3444_);
lean_closure_set(v___f_3446_, 1, v_a_3420_);
lean_closure_set(v___f_3446_, 2, v___y_3421_);
lean_closure_set(v___f_3446_, 3, v___x_3422_);
lean_closure_set(v___f_3446_, 4, v___x_3445_);
v___x_3447_ = lean_box(0);
v___x_3448_ = lean_box(v___x_3426_);
v___x_3449_ = lean_box(v___y_3428_);
lean_inc(v___y_3437_);
lean_inc_ref(v___y_3436_);
lean_inc_ref(v___y_3435_);
v___f_3450_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___lam__5___boxed), 26, 20);
lean_closure_set(v___f_3450_, 0, v_a_3423_);
lean_closure_set(v___f_3450_, 1, v___x_3418_);
lean_closure_set(v___f_3450_, 2, v_snd_3419_);
lean_closure_set(v___f_3450_, 3, v___f_3446_);
lean_closure_set(v___f_3450_, 4, v___x_3447_);
lean_closure_set(v___f_3450_, 5, v___f_3443_);
lean_closure_set(v___f_3450_, 6, v_a_3420_);
lean_closure_set(v___f_3450_, 7, v___x_3444_);
lean_closure_set(v___f_3450_, 8, v___y_3421_);
lean_closure_set(v___f_3450_, 9, v___x_3422_);
lean_closure_set(v___f_3450_, 10, v_a_3424_);
lean_closure_set(v___f_3450_, 11, v_body_3425_);
lean_closure_set(v___f_3450_, 12, v___x_3448_);
lean_closure_set(v___f_3450_, 13, v___x_3427_);
lean_closure_set(v___f_3450_, 14, v___x_3449_);
lean_closure_set(v___f_3450_, 15, v___x_3429_);
lean_closure_set(v___f_3450_, 16, v___y_3435_);
lean_closure_set(v___f_3450_, 17, v___y_3436_);
lean_closure_set(v___f_3450_, 18, v___y_3437_);
lean_closure_set(v___f_3450_, 19, v_xh_3430_);
v___x_3451_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3431_, v_bi_3432_, v_type_3433_, v___f_3450_, v_kind_3434_, v___y_3438_, v___y_3439_, v___y_3440_, v___y_3441_);
if (lean_obj_tag(v___x_3451_) == 0)
{
return v___x_3451_;
}
else
{
lean_object* v_a_3452_; lean_object* v___x_3454_; uint8_t v_isShared_3455_; uint8_t v_isSharedCheck_3459_; 
v_a_3452_ = lean_ctor_get(v___x_3451_, 0);
v_isSharedCheck_3459_ = !lean_is_exclusive(v___x_3451_);
if (v_isSharedCheck_3459_ == 0)
{
v___x_3454_ = v___x_3451_;
v_isShared_3455_ = v_isSharedCheck_3459_;
goto v_resetjp_3453_;
}
else
{
lean_inc(v_a_3452_);
lean_dec(v___x_3451_);
v___x_3454_ = lean_box(0);
v_isShared_3455_ = v_isSharedCheck_3459_;
goto v_resetjp_3453_;
}
v_resetjp_3453_:
{
lean_object* v___x_3457_; 
if (v_isShared_3455_ == 0)
{
v___x_3457_ = v___x_3454_;
goto v_reusejp_3456_;
}
else
{
lean_object* v_reuseFailAlloc_3458_; 
v_reuseFailAlloc_3458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3458_, 0, v_a_3452_);
v___x_3457_ = v_reuseFailAlloc_3458_;
goto v_reusejp_3456_;
}
v_reusejp_3456_:
{
return v___x_3457_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22___boxed(lean_object** _args){
lean_object* v___x_3460_ = _args[0];
lean_object* v_snd_3461_ = _args[1];
lean_object* v_a_3462_ = _args[2];
lean_object* v___y_3463_ = _args[3];
lean_object* v___x_3464_ = _args[4];
lean_object* v_a_3465_ = _args[5];
lean_object* v_a_3466_ = _args[6];
lean_object* v_body_3467_ = _args[7];
lean_object* v___x_3468_ = _args[8];
lean_object* v___x_3469_ = _args[9];
lean_object* v___y_3470_ = _args[10];
lean_object* v___x_3471_ = _args[11];
lean_object* v_xh_3472_ = _args[12];
lean_object* v_name_3473_ = _args[13];
lean_object* v_bi_3474_ = _args[14];
lean_object* v_type_3475_ = _args[15];
lean_object* v_kind_3476_ = _args[16];
lean_object* v___y_3477_ = _args[17];
lean_object* v___y_3478_ = _args[18];
lean_object* v___y_3479_ = _args[19];
lean_object* v___y_3480_ = _args[20];
lean_object* v___y_3481_ = _args[21];
lean_object* v___y_3482_ = _args[22];
lean_object* v___y_3483_ = _args[23];
lean_object* v___y_3484_ = _args[24];
_start:
{
uint8_t v___x_127207__boxed_3485_; uint8_t v___y_127209__boxed_3486_; uint8_t v_bi_boxed_3487_; uint8_t v_kind_boxed_3488_; lean_object* v_res_3489_; 
v___x_127207__boxed_3485_ = lean_unbox(v___x_3468_);
v___y_127209__boxed_3486_ = lean_unbox(v___y_3470_);
v_bi_boxed_3487_ = lean_unbox(v_bi_3474_);
v_kind_boxed_3488_ = lean_unbox(v_kind_3476_);
v_res_3489_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22(v___x_3460_, v_snd_3461_, v_a_3462_, v___y_3463_, v___x_3464_, v_a_3465_, v_a_3466_, v_body_3467_, v___x_127207__boxed_3485_, v___x_3469_, v___y_127209__boxed_3486_, v___x_3471_, v_xh_3472_, v_name_3473_, v_bi_boxed_3487_, v_type_3475_, v_kind_boxed_3488_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_);
lean_dec(v___y_3483_);
lean_dec_ref(v___y_3482_);
lean_dec(v___y_3481_);
lean_dec_ref(v___y_3480_);
lean_dec(v___y_3479_);
lean_dec_ref(v___y_3478_);
lean_dec_ref(v___y_3477_);
return v_res_3489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor___lam__0(lean_object* v_a_3490_, lean_object* v_x_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_){
_start:
{
lean_object* v___x_3500_; 
v___x_3500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3500_, 0, v_a_3490_);
return v___x_3500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor___lam__0___boxed(lean_object* v_a_3501_, lean_object* v_x_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_){
_start:
{
lean_object* v_res_3511_; 
v_res_3511_ = l_Lean_Elab_Do_elabDoFor___lam__0(v_a_3501_, v_x_3502_, v___y_3503_, v___y_3504_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_, v___y_3509_);
lean_dec(v___y_3509_);
lean_dec_ref(v___y_3508_);
lean_dec(v___y_3507_);
lean_dec_ref(v___y_3506_);
lean_dec(v___y_3505_);
lean_dec_ref(v___y_3504_);
lean_dec_ref(v___y_3503_);
lean_dec_ref(v_x_3502_);
return v_res_3511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor___lam__2(lean_object* v_x_3512_, lean_object* v___f_3513_, lean_object* v___x_3514_, lean_object* v_x_3515_, lean_object* v_x_3516_){
_start:
{
lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; 
v___x_3517_ = l_Lean_TSyntax_getId(v_x_3512_);
v___x_3518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3518_, 0, v___x_3517_);
lean_ctor_set(v___x_3518_, 1, v___f_3513_);
v___x_3519_ = lean_mk_empty_array_with_capacity(v___x_3514_);
v___x_3520_ = lean_array_push(v___x_3519_, v___x_3518_);
return v___x_3520_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor___lam__2___boxed(lean_object* v_x_3521_, lean_object* v___f_3522_, lean_object* v___x_3523_, lean_object* v_x_3524_, lean_object* v_x_3525_){
_start:
{
lean_object* v_res_3526_; 
v_res_3526_ = l_Lean_Elab_Do_elabDoFor___lam__2(v_x_3521_, v___f_3522_, v___x_3523_, v_x_3524_, v_x_3525_);
lean_dec(v_x_3525_);
lean_dec(v_x_3524_);
lean_dec(v___x_3523_);
lean_dec(v_x_3521_);
return v_res_3526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor___lam__1(lean_object* v___x_3527_, lean_object* v___x_3528_, lean_object* v_x_3529_, lean_object* v_u_3530_, lean_object* v_snd_3531_, lean_object* v_a_3532_, lean_object* v___y_3533_, lean_object* v_monadInfo_3534_, lean_object* v_a_3535_, lean_object* v_a_3536_, lean_object* v_body_3537_, uint8_t v___x_3538_, lean_object* v_label_x3f_3539_, uint8_t v___y_3540_, lean_object* v___x_3541_, lean_object* v_a_3542_, lean_object* v_h_x3f_3543_, lean_object* v___x_3544_, lean_object* v_xh_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_){
_start:
{
lean_object* v___y_3555_; lean_object* v___y_3556_; lean_object* v___y_3557_; lean_object* v___y_3558_; lean_object* v___y_3559_; lean_object* v___y_3560_; lean_object* v___y_3561_; lean_object* v___x_3565_; lean_object* v___x_3566_; 
v___x_3565_ = lean_array_get_borrowed(v___x_3527_, v_xh_3545_, v___x_3528_);
lean_inc(v___x_3565_);
v___x_3566_ = l_Lean_Elab_Term_addLocalVarInfo(v_x_3529_, v___x_3565_, v___y_3547_, v___y_3548_, v___y_3549_, v___y_3550_, v___y_3551_, v___y_3552_);
if (lean_obj_tag(v___x_3566_) == 0)
{
lean_dec_ref_known(v___x_3566_, 1);
if (lean_obj_tag(v_h_x3f_3543_) == 1)
{
lean_object* v_val_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; 
v_val_3567_ = lean_ctor_get(v_h_x3f_3543_, 0);
lean_inc(v_val_3567_);
lean_dec_ref_known(v_h_x3f_3543_, 1);
v___x_3568_ = lean_array_get_borrowed(v___x_3527_, v_xh_3545_, v___x_3544_);
lean_inc(v___x_3568_);
v___x_3569_ = l_Lean_Elab_Term_addLocalVarInfo(v_val_3567_, v___x_3568_, v___y_3547_, v___y_3548_, v___y_3549_, v___y_3550_, v___y_3551_, v___y_3552_);
if (lean_obj_tag(v___x_3569_) == 0)
{
lean_dec_ref_known(v___x_3569_, 1);
v___y_3555_ = v___y_3546_;
v___y_3556_ = v___y_3547_;
v___y_3557_ = v___y_3548_;
v___y_3558_ = v___y_3549_;
v___y_3559_ = v___y_3550_;
v___y_3560_ = v___y_3551_;
v___y_3561_ = v___y_3552_;
goto v___jp_3554_;
}
else
{
lean_object* v_a_3570_; lean_object* v___x_3572_; uint8_t v_isShared_3573_; uint8_t v_isSharedCheck_3577_; 
lean_dec_ref(v_xh_3545_);
lean_dec(v_a_3542_);
lean_dec(v___x_3541_);
lean_dec(v_label_x3f_3539_);
lean_dec(v_body_3537_);
lean_dec_ref(v_a_3536_);
lean_dec_ref(v_a_3535_);
lean_dec_ref(v_monadInfo_3534_);
lean_dec_ref(v___y_3533_);
lean_dec_ref(v_a_3532_);
lean_dec_ref(v_snd_3531_);
lean_dec(v_u_3530_);
v_a_3570_ = lean_ctor_get(v___x_3569_, 0);
v_isSharedCheck_3577_ = !lean_is_exclusive(v___x_3569_);
if (v_isSharedCheck_3577_ == 0)
{
v___x_3572_ = v___x_3569_;
v_isShared_3573_ = v_isSharedCheck_3577_;
goto v_resetjp_3571_;
}
else
{
lean_inc(v_a_3570_);
lean_dec(v___x_3569_);
v___x_3572_ = lean_box(0);
v_isShared_3573_ = v_isSharedCheck_3577_;
goto v_resetjp_3571_;
}
v_resetjp_3571_:
{
lean_object* v___x_3575_; 
if (v_isShared_3573_ == 0)
{
v___x_3575_ = v___x_3572_;
goto v_reusejp_3574_;
}
else
{
lean_object* v_reuseFailAlloc_3576_; 
v_reuseFailAlloc_3576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3576_, 0, v_a_3570_);
v___x_3575_ = v_reuseFailAlloc_3576_;
goto v_reusejp_3574_;
}
v_reusejp_3574_:
{
return v___x_3575_;
}
}
}
}
else
{
lean_dec(v_h_x3f_3543_);
v___y_3555_ = v___y_3546_;
v___y_3556_ = v___y_3547_;
v___y_3557_ = v___y_3548_;
v___y_3558_ = v___y_3549_;
v___y_3559_ = v___y_3550_;
v___y_3560_ = v___y_3551_;
v___y_3561_ = v___y_3552_;
goto v___jp_3554_;
}
}
else
{
lean_object* v_a_3578_; lean_object* v___x_3580_; uint8_t v_isShared_3581_; uint8_t v_isSharedCheck_3585_; 
lean_dec_ref(v_xh_3545_);
lean_dec(v_h_x3f_3543_);
lean_dec(v_a_3542_);
lean_dec(v___x_3541_);
lean_dec(v_label_x3f_3539_);
lean_dec(v_body_3537_);
lean_dec_ref(v_a_3536_);
lean_dec_ref(v_a_3535_);
lean_dec_ref(v_monadInfo_3534_);
lean_dec_ref(v___y_3533_);
lean_dec_ref(v_a_3532_);
lean_dec_ref(v_snd_3531_);
lean_dec(v_u_3530_);
v_a_3578_ = lean_ctor_get(v___x_3566_, 0);
v_isSharedCheck_3585_ = !lean_is_exclusive(v___x_3566_);
if (v_isSharedCheck_3585_ == 0)
{
v___x_3580_ = v___x_3566_;
v_isShared_3581_ = v_isSharedCheck_3585_;
goto v_resetjp_3579_;
}
else
{
lean_inc(v_a_3578_);
lean_dec(v___x_3566_);
v___x_3580_ = lean_box(0);
v_isShared_3581_ = v_isSharedCheck_3585_;
goto v_resetjp_3579_;
}
v_resetjp_3579_:
{
lean_object* v___x_3583_; 
if (v_isShared_3581_ == 0)
{
v___x_3583_ = v___x_3580_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v_a_3578_);
v___x_3583_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
return v___x_3583_;
}
}
}
v___jp_3554_:
{
uint8_t v___x_3562_; uint8_t v___x_3563_; lean_object* v___x_3564_; 
v___x_3562_ = 0;
v___x_3563_ = 1;
lean_inc_ref(v_snd_3531_);
v___x_3564_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0_spec__0___at___00Lean_Elab_Do_elabDoFor_spec__22(v_u_3530_, v_snd_3531_, v_a_3532_, v___y_3533_, v_monadInfo_3534_, v_a_3535_, v_a_3536_, v_body_3537_, v___x_3538_, v_label_x3f_3539_, v___y_3540_, v___x_3541_, v_xh_3545_, v_a_3542_, v___x_3562_, v_snd_3531_, v___x_3563_, v___y_3555_, v___y_3556_, v___y_3557_, v___y_3558_, v___y_3559_, v___y_3560_, v___y_3561_);
return v___x_3564_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor___lam__1___boxed(lean_object** _args){
lean_object* v___x_3586_ = _args[0];
lean_object* v___x_3587_ = _args[1];
lean_object* v_x_3588_ = _args[2];
lean_object* v_u_3589_ = _args[3];
lean_object* v_snd_3590_ = _args[4];
lean_object* v_a_3591_ = _args[5];
lean_object* v___y_3592_ = _args[6];
lean_object* v_monadInfo_3593_ = _args[7];
lean_object* v_a_3594_ = _args[8];
lean_object* v_a_3595_ = _args[9];
lean_object* v_body_3596_ = _args[10];
lean_object* v___x_3597_ = _args[11];
lean_object* v_label_x3f_3598_ = _args[12];
lean_object* v___y_3599_ = _args[13];
lean_object* v___x_3600_ = _args[14];
lean_object* v_a_3601_ = _args[15];
lean_object* v_h_x3f_3602_ = _args[16];
lean_object* v___x_3603_ = _args[17];
lean_object* v_xh_3604_ = _args[18];
lean_object* v___y_3605_ = _args[19];
lean_object* v___y_3606_ = _args[20];
lean_object* v___y_3607_ = _args[21];
lean_object* v___y_3608_ = _args[22];
lean_object* v___y_3609_ = _args[23];
lean_object* v___y_3610_ = _args[24];
lean_object* v___y_3611_ = _args[25];
lean_object* v___y_3612_ = _args[26];
_start:
{
uint8_t v___x_127352__boxed_3613_; uint8_t v___y_127353__boxed_3614_; lean_object* v_res_3615_; 
v___x_127352__boxed_3613_ = lean_unbox(v___x_3597_);
v___y_127353__boxed_3614_ = lean_unbox(v___y_3599_);
v_res_3615_ = l_Lean_Elab_Do_elabDoFor___lam__1(v___x_3586_, v___x_3587_, v_x_3588_, v_u_3589_, v_snd_3590_, v_a_3591_, v___y_3592_, v_monadInfo_3593_, v_a_3594_, v_a_3595_, v_body_3596_, v___x_127352__boxed_3613_, v_label_x3f_3598_, v___y_127353__boxed_3614_, v___x_3600_, v_a_3601_, v_h_x3f_3602_, v___x_3603_, v_xh_3604_, v___y_3605_, v___y_3606_, v___y_3607_, v___y_3608_, v___y_3609_, v___y_3610_, v___y_3611_);
lean_dec(v___y_3611_);
lean_dec_ref(v___y_3610_);
lean_dec(v___y_3609_);
lean_dec_ref(v___y_3608_);
lean_dec(v___y_3607_);
lean_dec_ref(v___y_3606_);
lean_dec_ref(v___y_3605_);
lean_dec(v___x_3603_);
lean_dec(v___x_3587_);
lean_dec_ref(v___x_3586_);
return v_res_3615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor___lam__3(lean_object* v_a_3616_, lean_object* v_monadInfo_3617_, lean_object* v___y_3618_, lean_object* v_a_3619_, lean_object* v_doBlockResultType_3620_, lean_object* v___x_3621_, lean_object* v___x_3622_, lean_object* v___x_3623_, uint8_t v___x_3624_, lean_object* v_postS_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_){
_start:
{
lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; 
v___x_3634_ = l_Lean_Expr_fvarId_x21(v_postS_3625_);
v___x_3635_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch___boxed), 14, 6);
lean_closure_set(v___x_3635_, 0, v_a_3616_);
lean_closure_set(v___x_3635_, 1, v_monadInfo_3617_);
lean_closure_set(v___x_3635_, 2, v___y_3618_);
lean_closure_set(v___x_3635_, 3, v_a_3619_);
lean_closure_set(v___x_3635_, 4, v_doBlockResultType_3620_);
lean_closure_set(v___x_3635_, 5, v___x_3621_);
v___x_3636_ = l_Lean_Elab_Do_bindMutVarsFromTuple(v___x_3622_, v___x_3634_, v___x_3635_, v___y_3626_, v___y_3627_, v___y_3628_, v___y_3629_, v___y_3630_, v___y_3631_, v___y_3632_);
if (lean_obj_tag(v___x_3636_) == 0)
{
lean_object* v_a_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; uint8_t v___x_3640_; uint8_t v___x_3641_; lean_object* v___x_3642_; 
v_a_3637_ = lean_ctor_get(v___x_3636_, 0);
lean_inc(v_a_3637_);
lean_dec_ref_known(v___x_3636_, 1);
v___x_3638_ = lean_mk_empty_array_with_capacity(v___x_3623_);
v___x_3639_ = lean_array_push(v___x_3638_, v_postS_3625_);
v___x_3640_ = 0;
v___x_3641_ = 1;
v___x_3642_ = l_Lean_Meta_mkLambdaFVars(v___x_3639_, v_a_3637_, v___x_3640_, v___x_3624_, v___x_3640_, v___x_3624_, v___x_3641_, v___y_3629_, v___y_3630_, v___y_3631_, v___y_3632_);
lean_dec_ref(v___x_3639_);
return v___x_3642_;
}
else
{
lean_dec_ref(v_postS_3625_);
return v___x_3636_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor___lam__3___boxed(lean_object** _args){
lean_object* v_a_3643_ = _args[0];
lean_object* v_monadInfo_3644_ = _args[1];
lean_object* v___y_3645_ = _args[2];
lean_object* v_a_3646_ = _args[3];
lean_object* v_doBlockResultType_3647_ = _args[4];
lean_object* v___x_3648_ = _args[5];
lean_object* v___x_3649_ = _args[6];
lean_object* v___x_3650_ = _args[7];
lean_object* v___x_3651_ = _args[8];
lean_object* v_postS_3652_ = _args[9];
lean_object* v___y_3653_ = _args[10];
lean_object* v___y_3654_ = _args[11];
lean_object* v___y_3655_ = _args[12];
lean_object* v___y_3656_ = _args[13];
lean_object* v___y_3657_ = _args[14];
lean_object* v___y_3658_ = _args[15];
lean_object* v___y_3659_ = _args[16];
lean_object* v___y_3660_ = _args[17];
_start:
{
uint8_t v___x_127476__boxed_3661_; lean_object* v_res_3662_; 
v___x_127476__boxed_3661_ = lean_unbox(v___x_3651_);
v_res_3662_ = l_Lean_Elab_Do_elabDoFor___lam__3(v_a_3643_, v_monadInfo_3644_, v___y_3645_, v_a_3646_, v_doBlockResultType_3647_, v___x_3648_, v___x_3649_, v___x_3650_, v___x_127476__boxed_3661_, v_postS_3652_, v___y_3653_, v___y_3654_, v___y_3655_, v___y_3656_, v___y_3657_, v___y_3658_, v___y_3659_);
lean_dec(v___y_3659_);
lean_dec_ref(v___y_3658_);
lean_dec(v___y_3657_);
lean_dec_ref(v___y_3656_);
lean_dec(v___y_3655_);
lean_dec_ref(v___y_3654_);
lean_dec_ref(v___y_3653_);
lean_dec(v___x_3650_);
return v_res_3662_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor___lam__4(lean_object* v_a_3668_, lean_object* v_a_3669_, lean_object* v___x_3670_, lean_object* v_a_3671_, lean_object* v_a_3672_, lean_object* v_val_3673_, lean_object* v_a_3674_, lean_object* v_x_3675_, lean_object* v___y_3676_, lean_object* v___y_3677_, lean_object* v___y_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_){
_start:
{
lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; 
v___x_3684_ = ((lean_object*)(l_Lean_Elab_Do_elabDoFor___lam__4___closed__2));
v___x_3685_ = lean_box(0);
v___x_3686_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3686_, 0, v_a_3668_);
lean_ctor_set(v___x_3686_, 1, v___x_3685_);
v___x_3687_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3687_, 0, v_a_3669_);
lean_ctor_set(v___x_3687_, 1, v___x_3686_);
v___x_3688_ = l_Lean_mkConst(v___x_3684_, v___x_3687_);
v___x_3689_ = l_Lean_instInhabitedExpr;
v___x_3690_ = lean_array_get_borrowed(v___x_3689_, v_x_3675_, v___x_3670_);
lean_inc(v___x_3690_);
v___x_3691_ = l_Lean_mkApp5(v___x_3688_, v_a_3671_, v_a_3672_, v_val_3673_, v_a_3674_, v___x_3690_);
v___x_3692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3692_, 0, v___x_3691_);
return v___x_3692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor___lam__4___boxed(lean_object* v_a_3693_, lean_object* v_a_3694_, lean_object* v___x_3695_, lean_object* v_a_3696_, lean_object* v_a_3697_, lean_object* v_val_3698_, lean_object* v_a_3699_, lean_object* v_x_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_){
_start:
{
lean_object* v_res_3709_; 
v_res_3709_ = l_Lean_Elab_Do_elabDoFor___lam__4(v_a_3693_, v_a_3694_, v___x_3695_, v_a_3696_, v_a_3697_, v_val_3698_, v_a_3699_, v_x_3700_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_, v___y_3705_, v___y_3706_, v___y_3707_);
lean_dec(v___y_3707_);
lean_dec_ref(v___y_3706_);
lean_dec(v___y_3705_);
lean_dec_ref(v___y_3704_);
lean_dec(v___y_3703_);
lean_dec_ref(v___y_3702_);
lean_dec_ref(v___y_3701_);
lean_dec_ref(v_x_3700_);
lean_dec(v___x_3695_);
return v_res_3709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor(lean_object* v_stx_3737_, lean_object* v_dec_3738_, lean_object* v_a_3739_, lean_object* v_a_3740_, lean_object* v_a_3741_, lean_object* v_a_3742_, lean_object* v_a_3743_, lean_object* v_a_3744_, lean_object* v_a_3745_){
_start:
{
lean_object* v___x_3747_; uint8_t v___x_3748_; 
v___x_3747_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__6));
lean_inc(v_stx_3737_);
v___x_3748_ = l_Lean_Syntax_isOfKind(v_stx_3737_, v___x_3747_);
if (v___x_3748_ == 0)
{
lean_object* v___x_3749_; 
lean_dec_ref(v_dec_3738_);
lean_dec(v_stx_3737_);
v___x_3749_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0___redArg();
return v___x_3749_;
}
else
{
lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; uint8_t v___x_3753_; 
v___x_3750_ = lean_unsigned_to_nat(1u);
v___x_3751_ = l_Lean_Syntax_getArg(v_stx_3737_, v___x_3750_);
v___x_3752_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__2));
lean_inc(v___x_3751_);
v___x_3753_ = l_Lean_Syntax_isOfKind(v___x_3751_, v___x_3752_);
if (v___x_3753_ == 0)
{
lean_object* v___x_3754_; 
lean_dec(v___x_3751_);
lean_dec_ref(v_dec_3738_);
lean_dec(v_stx_3737_);
v___x_3754_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0___redArg();
return v___x_3754_;
}
else
{
lean_object* v___x_3755_; lean_object* v___x_3756_; uint8_t v___x_3757_; 
v___x_3755_ = lean_unsigned_to_nat(2u);
v___x_3756_ = l_Lean_Syntax_getArg(v_stx_3737_, v___x_3755_);
lean_inc(v___x_3756_);
v___x_3757_ = l_Lean_Syntax_matchesNull(v___x_3756_, v___x_3750_);
if (v___x_3757_ == 0)
{
lean_object* v___x_3758_; 
lean_dec(v___x_3756_);
lean_dec(v___x_3751_);
lean_dec_ref(v_dec_3738_);
lean_dec(v_stx_3737_);
v___x_3758_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0___redArg();
return v___x_3758_;
}
else
{
lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; uint8_t v___x_3762_; lean_object* v___y_3764_; lean_object* v___y_3765_; lean_object* v___y_3766_; lean_object* v___y_3767_; uint8_t v___y_3768_; lean_object* v___y_3769_; lean_object* v___y_3770_; lean_object* v___y_3771_; lean_object* v___y_3772_; lean_object* v___y_3773_; lean_object* v___y_3774_; lean_object* v___y_3775_; lean_object* v___y_3776_; lean_object* v___y_3777_; lean_object* v___y_3778_; lean_object* v___y_3779_; lean_object* v___y_3780_; lean_object* v___y_3781_; lean_object* v___y_3782_; lean_object* v___y_3783_; lean_object* v___y_3784_; lean_object* v___y_3785_; lean_object* v___y_3786_; lean_object* v___y_3787_; lean_object* v___y_3788_; lean_object* v___y_3804_; lean_object* v___y_3805_; lean_object* v___y_3806_; lean_object* v___y_3807_; lean_object* v___y_3808_; lean_object* v___y_3809_; uint8_t v___y_3810_; lean_object* v___y_3811_; lean_object* v___y_3812_; lean_object* v___y_3813_; lean_object* v___y_3814_; lean_object* v___y_3815_; lean_object* v___y_3816_; lean_object* v___y_3817_; lean_object* v___y_3818_; lean_object* v___y_3819_; lean_object* v___y_3820_; lean_object* v___y_3821_; lean_object* v___y_3822_; lean_object* v___y_3823_; lean_object* v___y_3824_; lean_object* v___y_3825_; lean_object* v___y_3826_; lean_object* v_fst_3827_; lean_object* v_snd_3828_; lean_object* v___y_3829_; lean_object* v___y_3830_; lean_object* v___y_3831_; lean_object* v___y_3832_; lean_object* v___y_3833_; lean_object* v___y_3834_; lean_object* v___y_3835_; lean_object* v___y_3862_; lean_object* v___y_3863_; lean_object* v___y_3864_; lean_object* v___y_3865_; lean_object* v___y_3866_; lean_object* v___y_3867_; uint8_t v___y_3868_; lean_object* v___y_3869_; lean_object* v___y_3870_; lean_object* v___y_3871_; lean_object* v___y_3872_; lean_object* v___y_3873_; lean_object* v___y_3874_; lean_object* v___y_3875_; lean_object* v___y_3876_; lean_object* v___y_3877_; lean_object* v___y_3878_; lean_object* v___y_3879_; lean_object* v___y_3880_; lean_object* v___y_3881_; lean_object* v___y_3882_; lean_object* v___y_3883_; lean_object* v___y_3884_; lean_object* v___y_3885_; lean_object* v___y_3886_; lean_object* v___y_3887_; lean_object* v___y_3888_; lean_object* v___y_3889_; lean_object* v___y_3890_; lean_object* v___y_3891_; lean_object* v___y_3892_; lean_object* v___y_3893_; lean_object* v___y_3894_; uint8_t v___y_3895_; size_t v___y_3896_; lean_object* v___y_3897_; lean_object* v___y_3898_; lean_object* v_a_3899_; lean_object* v___y_3974_; lean_object* v___y_3975_; lean_object* v___y_3976_; lean_object* v___y_3977_; lean_object* v___y_3978_; lean_object* v___y_3979_; uint8_t v___y_3980_; lean_object* v___y_3981_; lean_object* v___y_3982_; lean_object* v___y_3983_; lean_object* v___y_3984_; lean_object* v___y_3985_; lean_object* v___y_3986_; lean_object* v___y_3987_; lean_object* v___y_3988_; lean_object* v___y_3989_; lean_object* v___y_3990_; lean_object* v___y_3991_; lean_object* v___y_3992_; lean_object* v___y_3993_; lean_object* v___y_3994_; lean_object* v___y_3995_; lean_object* v___y_3996_; lean_object* v___y_3997_; lean_object* v___y_3998_; lean_object* v___y_3999_; lean_object* v___y_4000_; lean_object* v___y_4001_; lean_object* v___y_4002_; lean_object* v___y_4003_; lean_object* v___y_4004_; lean_object* v___y_4005_; lean_object* v___y_4006_; size_t v___y_4007_; uint8_t v___y_4008_; lean_object* v___y_4009_; lean_object* v___y_4010_; lean_object* v___y_4011_; lean_object* v___y_4022_; lean_object* v___y_4023_; lean_object* v___y_4024_; lean_object* v___y_4025_; lean_object* v___y_4026_; lean_object* v___y_4027_; uint8_t v___y_4028_; lean_object* v___y_4029_; lean_object* v___y_4030_; lean_object* v___y_4031_; lean_object* v___y_4032_; lean_object* v___y_4033_; lean_object* v___y_4034_; lean_object* v___y_4035_; lean_object* v___y_4036_; lean_object* v___y_4037_; lean_object* v___y_4038_; lean_object* v___y_4039_; lean_object* v___y_4040_; lean_object* v___y_4041_; lean_object* v___y_4042_; lean_object* v___y_4043_; lean_object* v___y_4044_; lean_object* v___y_4045_; lean_object* v___y_4046_; lean_object* v___y_4047_; size_t v___y_4048_; lean_object* v___y_4049_; lean_object* v___y_4050_; lean_object* v___y_4051_; lean_object* v___y_4052_; lean_object* v___y_4053_; lean_object* v___y_4054_; lean_object* v___y_4055_; lean_object* v___y_4056_; lean_object* v___y_4057_; lean_object* v___y_4058_; lean_object* v___y_4059_; uint8_t v___y_4060_; uint8_t v___y_4061_; lean_object* v___y_4065_; lean_object* v___y_4066_; lean_object* v___y_4067_; lean_object* v___y_4068_; lean_object* v___y_4069_; lean_object* v___y_4070_; uint8_t v___y_4071_; lean_object* v___y_4072_; lean_object* v___y_4073_; lean_object* v___y_4074_; lean_object* v___y_4075_; lean_object* v___y_4076_; lean_object* v___y_4077_; lean_object* v___y_4078_; lean_object* v___y_4079_; lean_object* v___y_4080_; lean_object* v___y_4081_; lean_object* v___y_4082_; lean_object* v___y_4083_; lean_object* v___y_4084_; lean_object* v___y_4085_; lean_object* v___y_4086_; lean_object* v___y_4087_; lean_object* v___y_4088_; lean_object* v___y_4089_; lean_object* v___y_4090_; lean_object* v___y_4091_; lean_object* v___y_4092_; lean_object* v___y_4093_; lean_object* v___y_4094_; lean_object* v___y_4095_; lean_object* v___y_4096_; lean_object* v___y_4097_; lean_object* v___y_4098_; uint8_t v___y_4099_; lean_object* v___y_4100_; lean_object* v___y_4101_; lean_object* v___y_4102_; lean_object* v___y_4156_; lean_object* v___y_4157_; lean_object* v___y_4158_; lean_object* v___y_4159_; lean_object* v___y_4160_; lean_object* v___y_4161_; uint8_t v___y_4162_; lean_object* v___y_4163_; lean_object* v___y_4164_; lean_object* v___y_4165_; lean_object* v___y_4166_; lean_object* v___y_4167_; lean_object* v___y_4168_; lean_object* v___y_4169_; lean_object* v___y_4170_; lean_object* v___y_4171_; lean_object* v___y_4172_; lean_object* v___y_4173_; lean_object* v___y_4174_; lean_object* v___y_4175_; lean_object* v___y_4176_; lean_object* v___y_4177_; lean_object* v___y_4178_; lean_object* v___y_4179_; lean_object* v___y_4180_; lean_object* v___y_4181_; lean_object* v___y_4182_; lean_object* v___y_4183_; lean_object* v___y_4184_; lean_object* v___y_4185_; lean_object* v___y_4186_; lean_object* v___y_4187_; uint8_t v___y_4188_; lean_object* v___y_4189_; uint8_t v___y_4190_; lean_object* v___y_4191_; lean_object* v___y_4192_; lean_object* v___y_4193_; lean_object* v___y_4197_; lean_object* v___y_4198_; lean_object* v___y_4199_; lean_object* v___y_4200_; lean_object* v___y_4201_; lean_object* v___y_4202_; lean_object* v___y_4203_; lean_object* v___y_4204_; lean_object* v___y_4205_; lean_object* v___y_4206_; lean_object* v___y_4207_; lean_object* v___y_4208_; lean_object* v___y_4209_; lean_object* v___y_4210_; lean_object* v___y_4211_; lean_object* v___y_4212_; lean_object* v___y_4213_; lean_object* v___y_4214_; lean_object* v___y_4215_; lean_object* v___y_4216_; lean_object* v___y_4217_; lean_object* v___y_4218_; lean_object* v___y_4219_; lean_object* v___y_4220_; lean_object* v___y_4221_; lean_object* v_label_x3f_4222_; lean_object* v___y_4223_; lean_object* v___y_4224_; lean_object* v___y_4225_; lean_object* v___y_4226_; lean_object* v___y_4227_; lean_object* v___y_4228_; uint8_t v___y_4229_; lean_object* v___y_4230_; lean_object* v___y_4231_; uint8_t v___y_4232_; lean_object* v___y_4237_; lean_object* v___y_4238_; lean_object* v___y_4239_; lean_object* v___y_4240_; lean_object* v___y_4241_; lean_object* v___y_4242_; lean_object* v___y_4243_; lean_object* v___y_4244_; lean_object* v___y_4245_; lean_object* v___y_4246_; lean_object* v___y_4247_; lean_object* v___y_4248_; lean_object* v___y_4249_; lean_object* v___y_4250_; lean_object* v___y_4251_; lean_object* v___y_4252_; lean_object* v___y_4253_; lean_object* v___y_4254_; lean_object* v___y_4255_; lean_object* v___y_4256_; lean_object* v___y_4257_; lean_object* v___y_4258_; lean_object* v___y_4259_; lean_object* v___y_4260_; lean_object* v___y_4261_; lean_object* v___y_4262_; lean_object* v___y_4263_; lean_object* v___y_4264_; lean_object* v___y_4265_; uint8_t v___y_4266_; lean_object* v___y_4267_; lean_object* v___y_4268_; lean_object* v___y_4269_; 
v___x_3759_ = lean_unsigned_to_nat(0u);
v___x_3760_ = l_Lean_Syntax_getArg(v___x_3756_, v___x_3759_);
lean_dec(v___x_3756_);
v___x_3761_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___closed__4));
lean_inc(v___x_3760_);
v___x_3762_ = l_Lean_Syntax_isOfKind(v___x_3760_, v___x_3761_);
if (v___x_3762_ == 0)
{
lean_object* v___x_4275_; 
lean_dec(v___x_3760_);
lean_dec(v___x_3751_);
lean_dec_ref(v_dec_3738_);
lean_dec(v_stx_3737_);
v___x_4275_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0___redArg();
return v___x_4275_;
}
else
{
lean_object* v_tk_4276_; lean_object* v_h_x3f_4278_; lean_object* v___y_4279_; lean_object* v___y_4280_; lean_object* v___y_4281_; lean_object* v___y_4282_; lean_object* v___y_4283_; lean_object* v___y_4284_; lean_object* v___y_4285_; lean_object* v___x_4409_; uint8_t v___x_4410_; 
v_tk_4276_ = l_Lean_Syntax_getArg(v_stx_3737_, v___x_3759_);
v___x_4409_ = l_Lean_Syntax_getArg(v___x_3760_, v___x_3759_);
v___x_4410_ = l_Lean_Syntax_isNone(v___x_4409_);
if (v___x_4410_ == 0)
{
uint8_t v___x_4411_; 
lean_inc(v___x_4409_);
v___x_4411_ = l_Lean_Syntax_matchesNull(v___x_4409_, v___x_3755_);
if (v___x_4411_ == 0)
{
lean_object* v___x_4412_; 
lean_dec(v___x_4409_);
lean_dec(v_tk_4276_);
lean_dec(v___x_3760_);
lean_dec(v___x_3751_);
lean_dec_ref(v_dec_3738_);
lean_dec(v_stx_3737_);
v___x_4412_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0___redArg();
return v___x_4412_;
}
else
{
lean_object* v_h_x3f_4413_; lean_object* v___x_4414_; 
v_h_x3f_4413_ = l_Lean_Syntax_getArg(v___x_4409_, v___x_3759_);
lean_dec(v___x_4409_);
v___x_4414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4414_, 0, v_h_x3f_4413_);
v_h_x3f_4278_ = v___x_4414_;
v___y_4279_ = v_a_3739_;
v___y_4280_ = v_a_3740_;
v___y_4281_ = v_a_3741_;
v___y_4282_ = v_a_3742_;
v___y_4283_ = v_a_3743_;
v___y_4284_ = v_a_3744_;
v___y_4285_ = v_a_3745_;
goto v___jp_4277_;
}
}
else
{
lean_object* v___x_4415_; 
lean_dec(v___x_4409_);
v___x_4415_ = lean_box(0);
v_h_x3f_4278_ = v___x_4415_;
v___y_4279_ = v_a_3739_;
v___y_4280_ = v_a_3740_;
v___y_4281_ = v_a_3741_;
v___y_4282_ = v_a_3742_;
v___y_4283_ = v_a_3743_;
v___y_4284_ = v_a_3744_;
v___y_4285_ = v_a_3745_;
goto v___jp_4277_;
}
v___jp_4277_:
{
lean_object* v_x_4286_; lean_object* v___x_4287_; uint8_t v___x_4288_; 
v_x_4286_ = l_Lean_Syntax_getArg(v___x_3760_, v___x_3750_);
v___x_4287_ = ((lean_object*)(l_Lean_Elab_Do_expandDoFor___closed__1));
lean_inc(v_x_4286_);
v___x_4288_ = l_Lean_Syntax_isOfKind(v_x_4286_, v___x_4287_);
if (v___x_4288_ == 0)
{
lean_object* v___x_4289_; 
lean_dec(v_x_4286_);
lean_dec(v_h_x3f_4278_);
lean_dec(v_tk_4276_);
lean_dec(v___x_3760_);
lean_dec(v___x_3751_);
lean_dec_ref(v_dec_3738_);
lean_dec(v_stx_3737_);
v___x_4289_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoFor_spec__0___redArg();
return v___x_4289_;
}
else
{
lean_object* v___x_4290_; 
v___x_4290_ = l_Lean_Elab_Do_elabDoConfig(v___x_3751_, v___y_4280_, v___y_4281_, v___y_4282_, v___y_4283_, v___y_4284_, v___y_4285_);
lean_dec(v___x_3751_);
if (lean_obj_tag(v___x_4290_) == 0)
{
lean_object* v_a_4291_; lean_object* v___x_4292_; 
v_a_4291_ = lean_ctor_get(v___x_4290_, 0);
lean_inc(v_a_4291_);
lean_dec_ref_known(v___x_4290_, 1);
v___x_4292_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_3738_, v_tk_4276_, v___y_4279_, v___y_4280_, v___y_4281_, v___y_4282_, v___y_4283_, v___y_4284_, v___y_4285_);
lean_dec(v_tk_4276_);
if (lean_obj_tag(v___x_4292_) == 0)
{
lean_object* v_a_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; 
v_a_4293_ = lean_ctor_get(v___x_4292_, 0);
lean_inc(v_a_4293_);
lean_dec_ref_known(v___x_4292_, 1);
v___x_4294_ = lean_mk_empty_array_with_capacity(v___x_3750_);
lean_inc(v_x_4286_);
v___x_4295_ = lean_array_push(v___x_4294_, v_x_4286_);
v___x_4296_ = l_Lean_Elab_Do_checkMutVarsForShadowing(v___x_4295_, v___y_4279_, v___y_4280_, v___y_4281_, v___y_4282_, v___y_4283_, v___y_4284_, v___y_4285_);
lean_dec_ref(v___x_4295_);
if (lean_obj_tag(v___x_4296_) == 0)
{
lean_object* v___x_4297_; 
lean_dec_ref_known(v___x_4296_, 1);
v___x_4297_ = l_Lean_Meta_mkFreshLevelMVar(v___y_4282_, v___y_4283_, v___y_4284_, v___y_4285_);
if (lean_obj_tag(v___x_4297_) == 0)
{
lean_object* v_a_4298_; lean_object* v___x_4299_; 
v_a_4298_ = lean_ctor_get(v___x_4297_, 0);
lean_inc(v_a_4298_);
lean_dec_ref_known(v___x_4297_, 1);
v___x_4299_ = l_Lean_Meta_mkFreshLevelMVar(v___y_4282_, v___y_4283_, v___y_4284_, v___y_4285_);
if (lean_obj_tag(v___x_4299_) == 0)
{
lean_object* v_a_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; uint8_t v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; 
v_a_4300_ = lean_ctor_get(v___x_4299_, 0);
lean_inc(v_a_4300_);
lean_dec_ref_known(v___x_4299_, 1);
lean_inc(v_a_4298_);
v___x_4301_ = l_Lean_Level_succ___override(v_a_4298_);
v___x_4302_ = l_Lean_mkSort(v___x_4301_);
v___x_4303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4303_, 0, v___x_4302_);
v___x_4304_ = 0;
v___x_4305_ = ((lean_object*)(l_Lean_Elab_Do_elabDoFor___closed__13));
v___x_4306_ = l_Lean_Meta_mkFreshExprMVar(v___x_4303_, v___x_4304_, v___x_4305_, v___y_4282_, v___y_4283_, v___y_4284_, v___y_4285_);
if (lean_obj_tag(v___x_4306_) == 0)
{
lean_object* v_a_4307_; lean_object* v___x_4309_; uint8_t v_isShared_4310_; uint8_t v_isSharedCheck_4368_; 
v_a_4307_ = lean_ctor_get(v___x_4306_, 0);
v_isSharedCheck_4368_ = !lean_is_exclusive(v___x_4306_);
if (v_isSharedCheck_4368_ == 0)
{
v___x_4309_ = v___x_4306_;
v_isShared_4310_ = v_isSharedCheck_4368_;
goto v_resetjp_4308_;
}
else
{
lean_inc(v_a_4307_);
lean_dec(v___x_4306_);
v___x_4309_ = lean_box(0);
v_isShared_4310_ = v_isSharedCheck_4368_;
goto v_resetjp_4308_;
}
v_resetjp_4308_:
{
lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4314_; 
lean_inc(v_a_4300_);
v___x_4311_ = l_Lean_Level_succ___override(v_a_4300_);
v___x_4312_ = l_Lean_mkSort(v___x_4311_);
if (v_isShared_4310_ == 0)
{
lean_ctor_set_tag(v___x_4309_, 1);
lean_ctor_set(v___x_4309_, 0, v___x_4312_);
v___x_4314_ = v___x_4309_;
goto v_reusejp_4313_;
}
else
{
lean_object* v_reuseFailAlloc_4367_; 
v_reuseFailAlloc_4367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4367_, 0, v___x_4312_);
v___x_4314_ = v_reuseFailAlloc_4367_;
goto v_reusejp_4313_;
}
v_reusejp_4313_:
{
lean_object* v___x_4315_; lean_object* v___x_4316_; 
v___x_4315_ = ((lean_object*)(l_Lean_Elab_Do_elabDoFor___closed__15));
v___x_4316_ = l_Lean_Meta_mkFreshExprMVar(v___x_4314_, v___x_4304_, v___x_4315_, v___y_4282_, v___y_4283_, v___y_4284_, v___y_4285_);
if (lean_obj_tag(v___x_4316_) == 0)
{
lean_object* v_a_4317_; lean_object* v___x_4319_; uint8_t v_isShared_4320_; uint8_t v_isSharedCheck_4366_; 
v_a_4317_ = lean_ctor_get(v___x_4316_, 0);
v_isSharedCheck_4366_ = !lean_is_exclusive(v___x_4316_);
if (v_isSharedCheck_4366_ == 0)
{
v___x_4319_ = v___x_4316_;
v_isShared_4320_ = v_isSharedCheck_4366_;
goto v_resetjp_4318_;
}
else
{
lean_inc(v_a_4317_);
lean_dec(v___x_4316_);
v___x_4319_ = lean_box(0);
v_isShared_4320_ = v_isSharedCheck_4366_;
goto v_resetjp_4318_;
}
v_resetjp_4318_:
{
lean_object* v___x_4321_; lean_object* v___x_4322_; lean_object* v___x_4324_; 
v___x_4321_ = lean_unsigned_to_nat(3u);
v___x_4322_ = l_Lean_Syntax_getArg(v___x_3760_, v___x_4321_);
lean_dec(v___x_3760_);
lean_inc(v_a_4317_);
if (v_isShared_4320_ == 0)
{
lean_ctor_set_tag(v___x_4319_, 1);
v___x_4324_ = v___x_4319_;
goto v_reusejp_4323_;
}
else
{
lean_object* v_reuseFailAlloc_4365_; 
v_reuseFailAlloc_4365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4365_, 0, v_a_4317_);
v___x_4324_ = v_reuseFailAlloc_4365_;
goto v_reusejp_4323_;
}
v_reusejp_4323_:
{
lean_object* v___x_4325_; lean_object* v___x_4326_; 
v___x_4325_ = lean_box(0);
v___x_4326_ = l_Lean_Elab_Term_elabTermEnsuringType(v___x_4322_, v___x_4324_, v___x_3762_, v___x_3762_, v___x_4325_, v___y_4280_, v___y_4281_, v___y_4282_, v___y_4283_, v___y_4284_, v___y_4285_);
if (lean_obj_tag(v___x_4326_) == 0)
{
lean_object* v_a_4327_; lean_object* v___x_4328_; lean_object* v_body_4329_; lean_object* v___x_4330_; 
v_a_4327_ = lean_ctor_get(v___x_4326_, 0);
lean_inc(v_a_4327_);
lean_dec_ref_known(v___x_4326_, 1);
v___x_4328_ = lean_unsigned_to_nat(4u);
v_body_4329_ = l_Lean_Syntax_getArg(v_stx_3737_, v___x_4328_);
lean_dec(v_stx_3737_);
lean_inc(v_body_4329_);
v___x_4330_ = l_Lean_Elab_Do_inferControlInfoSeq(v_body_4329_, v___y_4280_, v___y_4281_, v___y_4282_, v___y_4283_, v___y_4284_, v___y_4285_);
if (lean_obj_tag(v___x_4330_) == 0)
{
lean_object* v_a_4331_; lean_object* v___x_4332_; 
v_a_4331_ = lean_ctor_get(v___x_4330_, 0);
lean_inc(v_a_4331_);
lean_dec_ref_known(v___x_4330_, 1);
v___x_4332_ = l_Lean_Elab_Do_getReturnCont___redArg(v___y_4279_);
if (lean_obj_tag(v___x_4332_) == 0)
{
lean_object* v_a_4333_; lean_object* v_monadInfo_4334_; lean_object* v_mutVars_4335_; lean_object* v___x_4336_; lean_object* v___f_4337_; lean_object* v___f_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; uint8_t v___x_4341_; 
v_a_4333_ = lean_ctor_get(v___x_4332_, 0);
lean_inc(v_a_4333_);
lean_dec_ref_known(v___x_4332_, 1);
v_monadInfo_4334_ = lean_ctor_get(v___y_4279_, 0);
v_mutVars_4335_ = lean_ctor_get(v___y_4279_, 1);
v___x_4336_ = lean_box(0);
lean_inc(v_a_4307_);
v___f_4337_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoFor___lam__0___boxed), 10, 1);
lean_closure_set(v___f_4337_, 0, v_a_4307_);
lean_inc_ref(v___f_4337_);
lean_inc(v_x_4286_);
v___f_4338_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoFor___lam__2___boxed), 5, 3);
lean_closure_set(v___f_4338_, 0, v_x_4286_);
lean_closure_set(v___f_4338_, 1, v___f_4337_);
lean_closure_set(v___f_4338_, 2, v___x_3750_);
v___x_4339_ = lean_array_get_size(v_mutVars_4335_);
v___x_4340_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__10));
v___x_4341_ = lean_nat_dec_lt(v___x_3759_, v___x_4339_);
if (v___x_4341_ == 0)
{
lean_inc(v_a_4327_);
lean_inc(v_a_4317_);
lean_inc(v_h_x3f_4278_);
lean_inc(v_a_4333_);
lean_inc(v_a_4298_);
lean_inc(v_x_4286_);
lean_inc(v_a_4300_);
lean_inc(v_a_4307_);
v___y_4237_ = v_a_4307_;
v___y_4238_ = v_body_4329_;
v___y_4239_ = v_a_4300_;
v___y_4240_ = v_a_4293_;
v___y_4241_ = v_x_4286_;
v___y_4242_ = v_monadInfo_4334_;
v___y_4243_ = v_a_4298_;
v___y_4244_ = v___x_4336_;
v___y_4245_ = v_a_4333_;
v___y_4246_ = v___f_4338_;
v___y_4247_ = v_h_x3f_4278_;
v___y_4248_ = v___f_4337_;
v___y_4249_ = v_a_4317_;
v___y_4250_ = v_a_4327_;
v___y_4251_ = v_a_4307_;
v___y_4252_ = v_a_4300_;
v___y_4253_ = v___y_4284_;
v___y_4254_ = v___y_4283_;
v___y_4255_ = v___y_4280_;
v___y_4256_ = v_x_4286_;
v___y_4257_ = v_a_4298_;
v___y_4258_ = v___y_4285_;
v___y_4259_ = v_a_4333_;
v___y_4260_ = v_a_4291_;
v___y_4261_ = v___y_4282_;
v___y_4262_ = v_h_x3f_4278_;
v___y_4263_ = v_a_4317_;
v___y_4264_ = v_a_4331_;
v___y_4265_ = v___y_4279_;
v___y_4266_ = v___x_4304_;
v___y_4267_ = v___y_4281_;
v___y_4268_ = v_a_4327_;
v___y_4269_ = v___x_4340_;
goto v___jp_4236_;
}
else
{
uint8_t v___x_4342_; 
v___x_4342_ = lean_nat_dec_le(v___x_4339_, v___x_4339_);
if (v___x_4342_ == 0)
{
if (v___x_4341_ == 0)
{
lean_inc(v_a_4327_);
lean_inc(v_a_4317_);
lean_inc(v_h_x3f_4278_);
lean_inc(v_a_4333_);
lean_inc(v_a_4298_);
lean_inc(v_x_4286_);
lean_inc(v_a_4300_);
lean_inc(v_a_4307_);
v___y_4237_ = v_a_4307_;
v___y_4238_ = v_body_4329_;
v___y_4239_ = v_a_4300_;
v___y_4240_ = v_a_4293_;
v___y_4241_ = v_x_4286_;
v___y_4242_ = v_monadInfo_4334_;
v___y_4243_ = v_a_4298_;
v___y_4244_ = v___x_4336_;
v___y_4245_ = v_a_4333_;
v___y_4246_ = v___f_4338_;
v___y_4247_ = v_h_x3f_4278_;
v___y_4248_ = v___f_4337_;
v___y_4249_ = v_a_4317_;
v___y_4250_ = v_a_4327_;
v___y_4251_ = v_a_4307_;
v___y_4252_ = v_a_4300_;
v___y_4253_ = v___y_4284_;
v___y_4254_ = v___y_4283_;
v___y_4255_ = v___y_4280_;
v___y_4256_ = v_x_4286_;
v___y_4257_ = v_a_4298_;
v___y_4258_ = v___y_4285_;
v___y_4259_ = v_a_4333_;
v___y_4260_ = v_a_4291_;
v___y_4261_ = v___y_4282_;
v___y_4262_ = v_h_x3f_4278_;
v___y_4263_ = v_a_4317_;
v___y_4264_ = v_a_4331_;
v___y_4265_ = v___y_4279_;
v___y_4266_ = v___x_4304_;
v___y_4267_ = v___y_4281_;
v___y_4268_ = v_a_4327_;
v___y_4269_ = v___x_4340_;
goto v___jp_4236_;
}
else
{
size_t v___x_4343_; size_t v___x_4344_; lean_object* v___x_4345_; 
v___x_4343_ = ((size_t)0ULL);
v___x_4344_ = lean_usize_of_nat(v___x_4339_);
v___x_4345_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoFor_spec__17(v_a_4331_, v_mutVars_4335_, v___x_4343_, v___x_4344_, v___x_4340_);
lean_inc(v_a_4327_);
lean_inc(v_a_4317_);
lean_inc(v_h_x3f_4278_);
lean_inc(v_a_4333_);
lean_inc(v_a_4298_);
lean_inc(v_x_4286_);
lean_inc(v_a_4300_);
lean_inc(v_a_4307_);
v___y_4237_ = v_a_4307_;
v___y_4238_ = v_body_4329_;
v___y_4239_ = v_a_4300_;
v___y_4240_ = v_a_4293_;
v___y_4241_ = v_x_4286_;
v___y_4242_ = v_monadInfo_4334_;
v___y_4243_ = v_a_4298_;
v___y_4244_ = v___x_4336_;
v___y_4245_ = v_a_4333_;
v___y_4246_ = v___f_4338_;
v___y_4247_ = v_h_x3f_4278_;
v___y_4248_ = v___f_4337_;
v___y_4249_ = v_a_4317_;
v___y_4250_ = v_a_4327_;
v___y_4251_ = v_a_4307_;
v___y_4252_ = v_a_4300_;
v___y_4253_ = v___y_4284_;
v___y_4254_ = v___y_4283_;
v___y_4255_ = v___y_4280_;
v___y_4256_ = v_x_4286_;
v___y_4257_ = v_a_4298_;
v___y_4258_ = v___y_4285_;
v___y_4259_ = v_a_4333_;
v___y_4260_ = v_a_4291_;
v___y_4261_ = v___y_4282_;
v___y_4262_ = v_h_x3f_4278_;
v___y_4263_ = v_a_4317_;
v___y_4264_ = v_a_4331_;
v___y_4265_ = v___y_4279_;
v___y_4266_ = v___x_4304_;
v___y_4267_ = v___y_4281_;
v___y_4268_ = v_a_4327_;
v___y_4269_ = v___x_4345_;
goto v___jp_4236_;
}
}
else
{
size_t v___x_4346_; size_t v___x_4347_; lean_object* v___x_4348_; 
v___x_4346_ = ((size_t)0ULL);
v___x_4347_ = lean_usize_of_nat(v___x_4339_);
v___x_4348_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoFor_spec__17(v_a_4331_, v_mutVars_4335_, v___x_4346_, v___x_4347_, v___x_4340_);
lean_inc(v_a_4327_);
lean_inc(v_a_4317_);
lean_inc(v_h_x3f_4278_);
lean_inc(v_a_4333_);
lean_inc(v_a_4298_);
lean_inc(v_x_4286_);
lean_inc(v_a_4300_);
lean_inc(v_a_4307_);
v___y_4237_ = v_a_4307_;
v___y_4238_ = v_body_4329_;
v___y_4239_ = v_a_4300_;
v___y_4240_ = v_a_4293_;
v___y_4241_ = v_x_4286_;
v___y_4242_ = v_monadInfo_4334_;
v___y_4243_ = v_a_4298_;
v___y_4244_ = v___x_4336_;
v___y_4245_ = v_a_4333_;
v___y_4246_ = v___f_4338_;
v___y_4247_ = v_h_x3f_4278_;
v___y_4248_ = v___f_4337_;
v___y_4249_ = v_a_4317_;
v___y_4250_ = v_a_4327_;
v___y_4251_ = v_a_4307_;
v___y_4252_ = v_a_4300_;
v___y_4253_ = v___y_4284_;
v___y_4254_ = v___y_4283_;
v___y_4255_ = v___y_4280_;
v___y_4256_ = v_x_4286_;
v___y_4257_ = v_a_4298_;
v___y_4258_ = v___y_4285_;
v___y_4259_ = v_a_4333_;
v___y_4260_ = v_a_4291_;
v___y_4261_ = v___y_4282_;
v___y_4262_ = v_h_x3f_4278_;
v___y_4263_ = v_a_4317_;
v___y_4264_ = v_a_4331_;
v___y_4265_ = v___y_4279_;
v___y_4266_ = v___x_4304_;
v___y_4267_ = v___y_4281_;
v___y_4268_ = v_a_4327_;
v___y_4269_ = v___x_4348_;
goto v___jp_4236_;
}
}
}
else
{
lean_object* v_a_4349_; lean_object* v___x_4351_; uint8_t v_isShared_4352_; uint8_t v_isSharedCheck_4356_; 
lean_dec(v_a_4331_);
lean_dec(v_body_4329_);
lean_dec(v_a_4327_);
lean_dec(v_a_4317_);
lean_dec(v_a_4307_);
lean_dec(v_a_4300_);
lean_dec(v_a_4298_);
lean_dec(v_a_4293_);
lean_dec(v_a_4291_);
lean_dec(v_x_4286_);
lean_dec(v_h_x3f_4278_);
v_a_4349_ = lean_ctor_get(v___x_4332_, 0);
v_isSharedCheck_4356_ = !lean_is_exclusive(v___x_4332_);
if (v_isSharedCheck_4356_ == 0)
{
v___x_4351_ = v___x_4332_;
v_isShared_4352_ = v_isSharedCheck_4356_;
goto v_resetjp_4350_;
}
else
{
lean_inc(v_a_4349_);
lean_dec(v___x_4332_);
v___x_4351_ = lean_box(0);
v_isShared_4352_ = v_isSharedCheck_4356_;
goto v_resetjp_4350_;
}
v_resetjp_4350_:
{
lean_object* v___x_4354_; 
if (v_isShared_4352_ == 0)
{
v___x_4354_ = v___x_4351_;
goto v_reusejp_4353_;
}
else
{
lean_object* v_reuseFailAlloc_4355_; 
v_reuseFailAlloc_4355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4355_, 0, v_a_4349_);
v___x_4354_ = v_reuseFailAlloc_4355_;
goto v_reusejp_4353_;
}
v_reusejp_4353_:
{
return v___x_4354_;
}
}
}
}
else
{
lean_object* v_a_4357_; lean_object* v___x_4359_; uint8_t v_isShared_4360_; uint8_t v_isSharedCheck_4364_; 
lean_dec(v_body_4329_);
lean_dec(v_a_4327_);
lean_dec(v_a_4317_);
lean_dec(v_a_4307_);
lean_dec(v_a_4300_);
lean_dec(v_a_4298_);
lean_dec(v_a_4293_);
lean_dec(v_a_4291_);
lean_dec(v_x_4286_);
lean_dec(v_h_x3f_4278_);
v_a_4357_ = lean_ctor_get(v___x_4330_, 0);
v_isSharedCheck_4364_ = !lean_is_exclusive(v___x_4330_);
if (v_isSharedCheck_4364_ == 0)
{
v___x_4359_ = v___x_4330_;
v_isShared_4360_ = v_isSharedCheck_4364_;
goto v_resetjp_4358_;
}
else
{
lean_inc(v_a_4357_);
lean_dec(v___x_4330_);
v___x_4359_ = lean_box(0);
v_isShared_4360_ = v_isSharedCheck_4364_;
goto v_resetjp_4358_;
}
v_resetjp_4358_:
{
lean_object* v___x_4362_; 
if (v_isShared_4360_ == 0)
{
v___x_4362_ = v___x_4359_;
goto v_reusejp_4361_;
}
else
{
lean_object* v_reuseFailAlloc_4363_; 
v_reuseFailAlloc_4363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4363_, 0, v_a_4357_);
v___x_4362_ = v_reuseFailAlloc_4363_;
goto v_reusejp_4361_;
}
v_reusejp_4361_:
{
return v___x_4362_;
}
}
}
}
else
{
lean_dec(v_a_4317_);
lean_dec(v_a_4307_);
lean_dec(v_a_4300_);
lean_dec(v_a_4298_);
lean_dec(v_a_4293_);
lean_dec(v_a_4291_);
lean_dec(v_x_4286_);
lean_dec(v_h_x3f_4278_);
lean_dec(v_stx_3737_);
return v___x_4326_;
}
}
}
}
else
{
lean_dec(v_a_4307_);
lean_dec(v_a_4300_);
lean_dec(v_a_4298_);
lean_dec(v_a_4293_);
lean_dec(v_a_4291_);
lean_dec(v_x_4286_);
lean_dec(v_h_x3f_4278_);
lean_dec(v___x_3760_);
lean_dec(v_stx_3737_);
return v___x_4316_;
}
}
}
}
else
{
lean_dec(v_a_4300_);
lean_dec(v_a_4298_);
lean_dec(v_a_4293_);
lean_dec(v_a_4291_);
lean_dec(v_x_4286_);
lean_dec(v_h_x3f_4278_);
lean_dec(v___x_3760_);
lean_dec(v_stx_3737_);
return v___x_4306_;
}
}
else
{
lean_object* v_a_4369_; lean_object* v___x_4371_; uint8_t v_isShared_4372_; uint8_t v_isSharedCheck_4376_; 
lean_dec(v_a_4298_);
lean_dec(v_a_4293_);
lean_dec(v_a_4291_);
lean_dec(v_x_4286_);
lean_dec(v_h_x3f_4278_);
lean_dec(v___x_3760_);
lean_dec(v_stx_3737_);
v_a_4369_ = lean_ctor_get(v___x_4299_, 0);
v_isSharedCheck_4376_ = !lean_is_exclusive(v___x_4299_);
if (v_isSharedCheck_4376_ == 0)
{
v___x_4371_ = v___x_4299_;
v_isShared_4372_ = v_isSharedCheck_4376_;
goto v_resetjp_4370_;
}
else
{
lean_inc(v_a_4369_);
lean_dec(v___x_4299_);
v___x_4371_ = lean_box(0);
v_isShared_4372_ = v_isSharedCheck_4376_;
goto v_resetjp_4370_;
}
v_resetjp_4370_:
{
lean_object* v___x_4374_; 
if (v_isShared_4372_ == 0)
{
v___x_4374_ = v___x_4371_;
goto v_reusejp_4373_;
}
else
{
lean_object* v_reuseFailAlloc_4375_; 
v_reuseFailAlloc_4375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4375_, 0, v_a_4369_);
v___x_4374_ = v_reuseFailAlloc_4375_;
goto v_reusejp_4373_;
}
v_reusejp_4373_:
{
return v___x_4374_;
}
}
}
}
else
{
lean_object* v_a_4377_; lean_object* v___x_4379_; uint8_t v_isShared_4380_; uint8_t v_isSharedCheck_4384_; 
lean_dec(v_a_4293_);
lean_dec(v_a_4291_);
lean_dec(v_x_4286_);
lean_dec(v_h_x3f_4278_);
lean_dec(v___x_3760_);
lean_dec(v_stx_3737_);
v_a_4377_ = lean_ctor_get(v___x_4297_, 0);
v_isSharedCheck_4384_ = !lean_is_exclusive(v___x_4297_);
if (v_isSharedCheck_4384_ == 0)
{
v___x_4379_ = v___x_4297_;
v_isShared_4380_ = v_isSharedCheck_4384_;
goto v_resetjp_4378_;
}
else
{
lean_inc(v_a_4377_);
lean_dec(v___x_4297_);
v___x_4379_ = lean_box(0);
v_isShared_4380_ = v_isSharedCheck_4384_;
goto v_resetjp_4378_;
}
v_resetjp_4378_:
{
lean_object* v___x_4382_; 
if (v_isShared_4380_ == 0)
{
v___x_4382_ = v___x_4379_;
goto v_reusejp_4381_;
}
else
{
lean_object* v_reuseFailAlloc_4383_; 
v_reuseFailAlloc_4383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4383_, 0, v_a_4377_);
v___x_4382_ = v_reuseFailAlloc_4383_;
goto v_reusejp_4381_;
}
v_reusejp_4381_:
{
return v___x_4382_;
}
}
}
}
else
{
lean_object* v_a_4385_; lean_object* v___x_4387_; uint8_t v_isShared_4388_; uint8_t v_isSharedCheck_4392_; 
lean_dec(v_a_4293_);
lean_dec(v_a_4291_);
lean_dec(v_x_4286_);
lean_dec(v_h_x3f_4278_);
lean_dec(v___x_3760_);
lean_dec(v_stx_3737_);
v_a_4385_ = lean_ctor_get(v___x_4296_, 0);
v_isSharedCheck_4392_ = !lean_is_exclusive(v___x_4296_);
if (v_isSharedCheck_4392_ == 0)
{
v___x_4387_ = v___x_4296_;
v_isShared_4388_ = v_isSharedCheck_4392_;
goto v_resetjp_4386_;
}
else
{
lean_inc(v_a_4385_);
lean_dec(v___x_4296_);
v___x_4387_ = lean_box(0);
v_isShared_4388_ = v_isSharedCheck_4392_;
goto v_resetjp_4386_;
}
v_resetjp_4386_:
{
lean_object* v___x_4390_; 
if (v_isShared_4388_ == 0)
{
v___x_4390_ = v___x_4387_;
goto v_reusejp_4389_;
}
else
{
lean_object* v_reuseFailAlloc_4391_; 
v_reuseFailAlloc_4391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4391_, 0, v_a_4385_);
v___x_4390_ = v_reuseFailAlloc_4391_;
goto v_reusejp_4389_;
}
v_reusejp_4389_:
{
return v___x_4390_;
}
}
}
}
else
{
lean_object* v_a_4393_; lean_object* v___x_4395_; uint8_t v_isShared_4396_; uint8_t v_isSharedCheck_4400_; 
lean_dec(v_a_4291_);
lean_dec(v_x_4286_);
lean_dec(v_h_x3f_4278_);
lean_dec(v___x_3760_);
lean_dec(v_stx_3737_);
v_a_4393_ = lean_ctor_get(v___x_4292_, 0);
v_isSharedCheck_4400_ = !lean_is_exclusive(v___x_4292_);
if (v_isSharedCheck_4400_ == 0)
{
v___x_4395_ = v___x_4292_;
v_isShared_4396_ = v_isSharedCheck_4400_;
goto v_resetjp_4394_;
}
else
{
lean_inc(v_a_4393_);
lean_dec(v___x_4292_);
v___x_4395_ = lean_box(0);
v_isShared_4396_ = v_isSharedCheck_4400_;
goto v_resetjp_4394_;
}
v_resetjp_4394_:
{
lean_object* v___x_4398_; 
if (v_isShared_4396_ == 0)
{
v___x_4398_ = v___x_4395_;
goto v_reusejp_4397_;
}
else
{
lean_object* v_reuseFailAlloc_4399_; 
v_reuseFailAlloc_4399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4399_, 0, v_a_4393_);
v___x_4398_ = v_reuseFailAlloc_4399_;
goto v_reusejp_4397_;
}
v_reusejp_4397_:
{
return v___x_4398_;
}
}
}
}
else
{
lean_object* v_a_4401_; lean_object* v___x_4403_; uint8_t v_isShared_4404_; uint8_t v_isSharedCheck_4408_; 
lean_dec(v_x_4286_);
lean_dec(v_h_x3f_4278_);
lean_dec(v_tk_4276_);
lean_dec(v___x_3760_);
lean_dec_ref(v_dec_3738_);
lean_dec(v_stx_3737_);
v_a_4401_ = lean_ctor_get(v___x_4290_, 0);
v_isSharedCheck_4408_ = !lean_is_exclusive(v___x_4290_);
if (v_isSharedCheck_4408_ == 0)
{
v___x_4403_ = v___x_4290_;
v_isShared_4404_ = v_isSharedCheck_4408_;
goto v_resetjp_4402_;
}
else
{
lean_inc(v_a_4401_);
lean_dec(v___x_4290_);
v___x_4403_ = lean_box(0);
v_isShared_4404_ = v_isSharedCheck_4408_;
goto v_resetjp_4402_;
}
v_resetjp_4402_:
{
lean_object* v___x_4406_; 
if (v_isShared_4404_ == 0)
{
v___x_4406_ = v___x_4403_;
goto v_reusejp_4405_;
}
else
{
lean_object* v_reuseFailAlloc_4407_; 
v_reuseFailAlloc_4407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4407_, 0, v_a_4401_);
v___x_4406_ = v_reuseFailAlloc_4407_;
goto v_reusejp_4405_;
}
v_reusejp_4405_:
{
return v___x_4406_;
}
}
}
}
}
}
v___jp_3763_:
{
lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___f_3792_; uint8_t v___x_3793_; lean_object* v___x_3794_; 
v___x_3789_ = l_Lean_instInhabitedExpr;
v___x_3790_ = lean_box(v___x_3762_);
v___x_3791_ = lean_box(v___y_3768_);
lean_inc(v___y_3771_);
lean_inc(v___y_3777_);
lean_inc_ref(v___y_3765_);
lean_inc_ref(v___y_3770_);
lean_inc_ref(v___y_3767_);
lean_inc_ref(v___y_3778_);
v___f_3792_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoFor___lam__1___boxed), 27, 18);
lean_closure_set(v___f_3792_, 0, v___x_3789_);
lean_closure_set(v___f_3792_, 1, v___x_3759_);
lean_closure_set(v___f_3792_, 2, v___y_3769_);
lean_closure_set(v___f_3792_, 3, v___y_3774_);
lean_closure_set(v___f_3792_, 4, v___y_3772_);
lean_closure_set(v___f_3792_, 5, v___y_3778_);
lean_closure_set(v___f_3792_, 6, v___y_3767_);
lean_closure_set(v___f_3792_, 7, v___y_3770_);
lean_closure_set(v___f_3792_, 8, v___y_3773_);
lean_closure_set(v___f_3792_, 9, v___y_3765_);
lean_closure_set(v___f_3792_, 10, v___y_3764_);
lean_closure_set(v___f_3792_, 11, v___x_3790_);
lean_closure_set(v___f_3792_, 12, v___y_3766_);
lean_closure_set(v___f_3792_, 13, v___x_3791_);
lean_closure_set(v___f_3792_, 14, v___y_3777_);
lean_closure_set(v___f_3792_, 15, v___y_3771_);
lean_closure_set(v___f_3792_, 16, v___y_3775_);
lean_closure_set(v___f_3792_, 17, v___x_3750_);
v___x_3793_ = 0;
v___x_3794_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_Do_elabDoFor_spec__16(v___y_3788_, v___f_3792_, v___x_3793_, v___y_3780_, v___y_3783_, v___y_3784_, v___y_3787_, v___y_3786_, v___y_3779_, v___y_3781_);
if (lean_obj_tag(v___x_3794_) == 0)
{
lean_object* v_a_3795_; lean_object* v_doBlockResultType_3796_; lean_object* v___x_3797_; lean_object* v___f_3798_; lean_object* v___x_3799_; 
v_a_3795_ = lean_ctor_get(v___x_3794_, 0);
lean_inc(v_a_3795_);
lean_dec_ref_known(v___x_3794_, 1);
v_doBlockResultType_3796_ = lean_ctor_get(v___y_3780_, 3);
v___x_3797_ = lean_box(v___x_3762_);
lean_inc_ref(v_doBlockResultType_3796_);
lean_inc_ref(v___y_3770_);
v___f_3798_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoFor___lam__3___boxed), 18, 9);
lean_closure_set(v___f_3798_, 0, v___y_3765_);
lean_closure_set(v___f_3798_, 1, v___y_3770_);
lean_closure_set(v___f_3798_, 2, v___y_3767_);
lean_closure_set(v___f_3798_, 3, v___y_3778_);
lean_closure_set(v___f_3798_, 4, v_doBlockResultType_3796_);
lean_closure_set(v___f_3798_, 5, v___y_3776_);
lean_closure_set(v___f_3798_, 6, v___y_3777_);
lean_closure_set(v___f_3798_, 7, v___x_3750_);
lean_closure_set(v___f_3798_, 8, v___x_3797_);
lean_inc_ref(v___y_3785_);
v___x_3799_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor_dispatch_spec__0___redArg(v___y_3771_, v___y_3785_, v___f_3798_, v___y_3780_, v___y_3783_, v___y_3784_, v___y_3787_, v___y_3786_, v___y_3779_, v___y_3781_);
if (lean_obj_tag(v___x_3799_) == 0)
{
lean_object* v_a_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; 
v_a_3800_ = lean_ctor_get(v___x_3799_, 0);
lean_inc(v_a_3800_);
lean_dec_ref_known(v___x_3799_, 1);
v___x_3801_ = l_Lean_Expr_app___override(v___y_3782_, v_a_3795_);
lean_inc_ref(v_doBlockResultType_3796_);
v___x_3802_ = l_Lean_Elab_Do_mkBindApp(v___y_3785_, v_doBlockResultType_3796_, v___x_3801_, v_a_3800_, v___y_3780_, v___y_3783_, v___y_3784_, v___y_3787_, v___y_3786_, v___y_3779_, v___y_3781_);
return v___x_3802_;
}
else
{
lean_dec(v_a_3795_);
lean_dec_ref(v___y_3785_);
lean_dec_ref(v___y_3782_);
return v___x_3799_;
}
}
else
{
lean_dec_ref(v___y_3785_);
lean_dec_ref(v___y_3782_);
lean_dec_ref(v___y_3778_);
lean_dec(v___y_3777_);
lean_dec(v___y_3776_);
lean_dec(v___y_3771_);
lean_dec_ref(v___y_3767_);
lean_dec_ref(v___y_3765_);
return v___x_3794_;
}
}
v___jp_3803_:
{
lean_object* v___x_3836_; lean_object* v___x_3837_; 
v___x_3836_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand_spec__0___redArg___lam__1___closed__17));
v___x_3837_ = l_Lean_Core_mkFreshUserName(v___x_3836_, v___y_3834_, v___y_3835_);
if (lean_obj_tag(v___x_3837_) == 0)
{
if (lean_obj_tag(v___y_3823_) == 1)
{
if (lean_obj_tag(v_snd_3828_) == 1)
{
lean_object* v_a_3838_; lean_object* v_val_3839_; lean_object* v_val_3840_; lean_object* v___f_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; 
lean_dec_ref(v___y_3826_);
v_a_3838_ = lean_ctor_get(v___x_3837_, 0);
lean_inc(v_a_3838_);
lean_dec_ref_known(v___x_3837_, 1);
v_val_3839_ = lean_ctor_get(v___y_3823_, 0);
lean_inc(v_val_3839_);
lean_dec_ref_known(v___y_3823_, 1);
v_val_3840_ = lean_ctor_get(v_snd_3828_, 0);
lean_inc(v_val_3840_);
lean_dec_ref_known(v_snd_3828_, 1);
v___f_3841_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoFor___lam__4___boxed), 16, 7);
lean_closure_set(v___f_3841_, 0, v___y_3805_);
lean_closure_set(v___f_3841_, 1, v___y_3813_);
lean_closure_set(v___f_3841_, 2, v___x_3759_);
lean_closure_set(v___f_3841_, 3, v___y_3804_);
lean_closure_set(v___f_3841_, 4, v___y_3819_);
lean_closure_set(v___f_3841_, 5, v_val_3840_);
lean_closure_set(v___f_3841_, 6, v___y_3822_);
v___x_3842_ = l_Lean_TSyntax_getId(v___y_3825_);
lean_dec(v___y_3825_);
v___x_3843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3843_, 0, v___x_3842_);
lean_ctor_set(v___x_3843_, 1, v___y_3824_);
v___x_3844_ = l_Lean_TSyntax_getId(v_val_3839_);
lean_dec(v_val_3839_);
v___x_3845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3845_, 0, v___x_3844_);
lean_ctor_set(v___x_3845_, 1, v___f_3841_);
v___x_3846_ = lean_mk_empty_array_with_capacity(v___x_3755_);
v___x_3847_ = lean_array_push(v___x_3846_, v___x_3843_);
v___x_3848_ = lean_array_push(v___x_3847_, v___x_3845_);
lean_inc_ref(v___y_3814_);
v___y_3764_ = v___y_3806_;
v___y_3765_ = v___y_3807_;
v___y_3766_ = v___y_3808_;
v___y_3767_ = v___y_3809_;
v___y_3768_ = v___y_3810_;
v___y_3769_ = v___y_3811_;
v___y_3770_ = v___y_3812_;
v___y_3771_ = v_a_3838_;
v___y_3772_ = v___y_3814_;
v___y_3773_ = v___y_3815_;
v___y_3774_ = v___y_3816_;
v___y_3775_ = v___y_3817_;
v___y_3776_ = v___y_3818_;
v___y_3777_ = v___y_3820_;
v___y_3778_ = v___y_3821_;
v___y_3779_ = v___y_3834_;
v___y_3780_ = v___y_3829_;
v___y_3781_ = v___y_3835_;
v___y_3782_ = v_fst_3827_;
v___y_3783_ = v___y_3830_;
v___y_3784_ = v___y_3831_;
v___y_3785_ = v___y_3814_;
v___y_3786_ = v___y_3833_;
v___y_3787_ = v___y_3832_;
v___y_3788_ = v___x_3848_;
goto v___jp_3763_;
}
else
{
lean_object* v_a_3849_; lean_object* v___x_3850_; 
lean_dec(v___y_3825_);
lean_dec_ref(v___y_3824_);
lean_dec_ref(v___y_3822_);
lean_dec_ref(v___y_3819_);
lean_dec(v___y_3813_);
lean_dec(v___y_3805_);
lean_dec_ref(v___y_3804_);
v_a_3849_ = lean_ctor_get(v___x_3837_, 0);
lean_inc(v_a_3849_);
lean_dec_ref_known(v___x_3837_, 1);
v___x_3850_ = lean_apply_2(v___y_3826_, v___y_3823_, v_snd_3828_);
lean_inc_ref(v___y_3814_);
v___y_3764_ = v___y_3806_;
v___y_3765_ = v___y_3807_;
v___y_3766_ = v___y_3808_;
v___y_3767_ = v___y_3809_;
v___y_3768_ = v___y_3810_;
v___y_3769_ = v___y_3811_;
v___y_3770_ = v___y_3812_;
v___y_3771_ = v_a_3849_;
v___y_3772_ = v___y_3814_;
v___y_3773_ = v___y_3815_;
v___y_3774_ = v___y_3816_;
v___y_3775_ = v___y_3817_;
v___y_3776_ = v___y_3818_;
v___y_3777_ = v___y_3820_;
v___y_3778_ = v___y_3821_;
v___y_3779_ = v___y_3834_;
v___y_3780_ = v___y_3829_;
v___y_3781_ = v___y_3835_;
v___y_3782_ = v_fst_3827_;
v___y_3783_ = v___y_3830_;
v___y_3784_ = v___y_3831_;
v___y_3785_ = v___y_3814_;
v___y_3786_ = v___y_3833_;
v___y_3787_ = v___y_3832_;
v___y_3788_ = v___x_3850_;
goto v___jp_3763_;
}
}
else
{
lean_object* v_a_3851_; lean_object* v___x_3852_; 
lean_dec(v___y_3825_);
lean_dec_ref(v___y_3824_);
lean_dec_ref(v___y_3822_);
lean_dec_ref(v___y_3819_);
lean_dec(v___y_3813_);
lean_dec(v___y_3805_);
lean_dec_ref(v___y_3804_);
v_a_3851_ = lean_ctor_get(v___x_3837_, 0);
lean_inc(v_a_3851_);
lean_dec_ref_known(v___x_3837_, 1);
v___x_3852_ = lean_apply_2(v___y_3826_, v___y_3823_, v_snd_3828_);
lean_inc_ref(v___y_3814_);
v___y_3764_ = v___y_3806_;
v___y_3765_ = v___y_3807_;
v___y_3766_ = v___y_3808_;
v___y_3767_ = v___y_3809_;
v___y_3768_ = v___y_3810_;
v___y_3769_ = v___y_3811_;
v___y_3770_ = v___y_3812_;
v___y_3771_ = v_a_3851_;
v___y_3772_ = v___y_3814_;
v___y_3773_ = v___y_3815_;
v___y_3774_ = v___y_3816_;
v___y_3775_ = v___y_3817_;
v___y_3776_ = v___y_3818_;
v___y_3777_ = v___y_3820_;
v___y_3778_ = v___y_3821_;
v___y_3779_ = v___y_3834_;
v___y_3780_ = v___y_3829_;
v___y_3781_ = v___y_3835_;
v___y_3782_ = v_fst_3827_;
v___y_3783_ = v___y_3830_;
v___y_3784_ = v___y_3831_;
v___y_3785_ = v___y_3814_;
v___y_3786_ = v___y_3833_;
v___y_3787_ = v___y_3832_;
v___y_3788_ = v___x_3852_;
goto v___jp_3763_;
}
}
else
{
lean_object* v_a_3853_; lean_object* v___x_3855_; uint8_t v_isShared_3856_; uint8_t v_isSharedCheck_3860_; 
lean_dec(v_snd_3828_);
lean_dec_ref(v_fst_3827_);
lean_dec_ref(v___y_3826_);
lean_dec(v___y_3825_);
lean_dec_ref(v___y_3824_);
lean_dec(v___y_3823_);
lean_dec_ref(v___y_3822_);
lean_dec_ref(v___y_3821_);
lean_dec(v___y_3820_);
lean_dec_ref(v___y_3819_);
lean_dec(v___y_3818_);
lean_dec(v___y_3817_);
lean_dec(v___y_3816_);
lean_dec_ref(v___y_3815_);
lean_dec_ref(v___y_3814_);
lean_dec(v___y_3813_);
lean_dec(v___y_3811_);
lean_dec_ref(v___y_3809_);
lean_dec(v___y_3808_);
lean_dec_ref(v___y_3807_);
lean_dec(v___y_3806_);
lean_dec(v___y_3805_);
lean_dec_ref(v___y_3804_);
v_a_3853_ = lean_ctor_get(v___x_3837_, 0);
v_isSharedCheck_3860_ = !lean_is_exclusive(v___x_3837_);
if (v_isSharedCheck_3860_ == 0)
{
v___x_3855_ = v___x_3837_;
v_isShared_3856_ = v_isSharedCheck_3860_;
goto v_resetjp_3854_;
}
else
{
lean_inc(v_a_3853_);
lean_dec(v___x_3837_);
v___x_3855_ = lean_box(0);
v_isShared_3856_ = v_isSharedCheck_3860_;
goto v_resetjp_3854_;
}
v_resetjp_3854_:
{
lean_object* v___x_3858_; 
if (v_isShared_3856_ == 0)
{
v___x_3858_ = v___x_3855_;
goto v_reusejp_3857_;
}
else
{
lean_object* v_reuseFailAlloc_3859_; 
v_reuseFailAlloc_3859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3859_, 0, v_a_3853_);
v___x_3858_ = v_reuseFailAlloc_3859_;
goto v_reusejp_3857_;
}
v_reusejp_3857_:
{
return v___x_3858_;
}
}
}
}
v___jp_3861_:
{
lean_object* v_m_3900_; lean_object* v_u_3901_; lean_object* v_v_3902_; lean_object* v___x_3903_; 
v_m_3900_ = lean_ctor_get(v___y_3884_, 0);
v_u_3901_ = lean_ctor_get(v___y_3884_, 1);
v_v_3902_ = lean_ctor_get(v___y_3884_, 2);
lean_inc(v_u_3901_);
v___x_3903_ = l_Lean_Meta_mkProdMkN(v_a_3899_, v_u_3901_, v___y_3890_, v___y_3880_, v___y_3879_, v___y_3886_);
if (lean_obj_tag(v___x_3903_) == 0)
{
lean_object* v_a_3904_; lean_object* v_fst_3905_; lean_object* v_snd_3906_; lean_object* v___x_3908_; uint8_t v_isShared_3909_; uint8_t v_isSharedCheck_3964_; 
v_a_3904_ = lean_ctor_get(v___x_3903_, 0);
lean_inc(v_a_3904_);
lean_dec_ref_known(v___x_3903_, 1);
v_fst_3905_ = lean_ctor_get(v_a_3904_, 0);
v_snd_3906_ = lean_ctor_get(v_a_3904_, 1);
v_isSharedCheck_3964_ = !lean_is_exclusive(v_a_3904_);
if (v_isSharedCheck_3964_ == 0)
{
v___x_3908_ = v_a_3904_;
v_isShared_3909_ = v_isSharedCheck_3964_;
goto v_resetjp_3907_;
}
else
{
lean_inc(v_snd_3906_);
lean_inc(v_fst_3905_);
lean_dec(v_a_3904_);
v___x_3908_ = lean_box(0);
v_isShared_3909_ = v_isSharedCheck_3964_;
goto v_resetjp_3907_;
}
v_resetjp_3907_:
{
lean_object* v___x_3910_; lean_object* v___x_3911_; size_t v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; 
v___x_3910_ = lean_array_to_list(v___y_3887_);
lean_inc(v___y_3888_);
lean_inc(v___x_3910_);
v___x_3911_ = l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoFor_spec__10(v___x_3910_, v___y_3888_);
v___x_3912_ = ((size_t)0ULL);
v___x_3913_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoFor_spec__11(v___y_3896_, v___x_3912_, v___y_3882_);
v___x_3914_ = lean_array_to_list(v___x_3913_);
v___x_3915_ = l_List_appendTR___redArg(v___x_3911_, v___x_3914_);
if (lean_obj_tag(v___y_3891_) == 0)
{
lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3919_; 
v___x_3916_ = ((lean_object*)(l_Lean_Elab_Do_elabDoFor___closed__1));
v___x_3917_ = lean_box(0);
lean_inc(v_v_3902_);
if (v_isShared_3909_ == 0)
{
lean_ctor_set_tag(v___x_3908_, 1);
lean_ctor_set(v___x_3908_, 1, v___x_3917_);
lean_ctor_set(v___x_3908_, 0, v_v_3902_);
v___x_3919_ = v___x_3908_;
goto v_reusejp_3918_;
}
else
{
lean_object* v_reuseFailAlloc_3931_; 
v_reuseFailAlloc_3931_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3931_, 0, v_v_3902_);
lean_ctor_set(v_reuseFailAlloc_3931_, 1, v___x_3917_);
v___x_3919_ = v_reuseFailAlloc_3931_;
goto v_reusejp_3918_;
}
v_reusejp_3918_:
{
lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; 
lean_inc(v_u_3901_);
v___x_3920_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3920_, 0, v_u_3901_);
lean_ctor_set(v___x_3920_, 1, v___x_3919_);
v___x_3921_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3921_, 0, v___y_3885_);
lean_ctor_set(v___x_3921_, 1, v___x_3920_);
v___x_3922_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3922_, 0, v___y_3878_);
lean_ctor_set(v___x_3922_, 1, v___x_3921_);
lean_inc_ref(v___x_3922_);
v___x_3923_ = l_Lean_mkConst(v___x_3916_, v___x_3922_);
lean_inc_ref(v___y_3877_);
lean_inc_ref(v___y_3892_);
lean_inc_ref(v_m_3900_);
v___x_3924_ = l_Lean_mkApp3(v___x_3923_, v_m_3900_, v___y_3892_, v___y_3877_);
v___x_3925_ = lean_box(0);
v___x_3926_ = l_Lean_Elab_Term_mkInstMVar(v___x_3924_, v___x_3925_, v___y_3881_, v___y_3898_, v___y_3890_, v___y_3880_, v___y_3879_, v___y_3886_);
if (lean_obj_tag(v___x_3926_) == 0)
{
lean_object* v_a_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; 
v_a_3927_ = lean_ctor_get(v___x_3926_, 0);
lean_inc(v_a_3927_);
lean_dec_ref_known(v___x_3926_, 1);
v___x_3928_ = ((lean_object*)(l_Lean_Elab_Do_elabDoFor___closed__3));
v___x_3929_ = l_Lean_mkConst(v___x_3928_, v___x_3922_);
lean_inc(v_snd_3906_);
lean_inc_ref(v_m_3900_);
v___x_3930_ = l_Lean_mkApp7(v___x_3929_, v_m_3900_, v___y_3892_, v___y_3877_, v_a_3927_, v_snd_3906_, v___y_3897_, v_fst_3905_);
lean_inc(v_u_3901_);
v___y_3804_ = v___y_3862_;
v___y_3805_ = v___y_3863_;
v___y_3806_ = v___y_3864_;
v___y_3807_ = v___y_3865_;
v___y_3808_ = v___y_3866_;
v___y_3809_ = v___y_3867_;
v___y_3810_ = v___y_3868_;
v___y_3811_ = v___y_3869_;
v___y_3812_ = v___y_3870_;
v___y_3813_ = v___y_3871_;
v___y_3814_ = v_snd_3906_;
v___y_3815_ = v___y_3872_;
v___y_3816_ = v_u_3901_;
v___y_3817_ = v___y_3873_;
v___y_3818_ = v___x_3910_;
v___y_3819_ = v___y_3874_;
v___y_3820_ = v___x_3915_;
v___y_3821_ = v___y_3875_;
v___y_3822_ = v___y_3876_;
v___y_3823_ = v___y_3891_;
v___y_3824_ = v___y_3893_;
v___y_3825_ = v___y_3883_;
v___y_3826_ = v___y_3889_;
v_fst_3827_ = v___x_3930_;
v_snd_3828_ = v___x_3925_;
v___y_3829_ = v___y_3894_;
v___y_3830_ = v___y_3881_;
v___y_3831_ = v___y_3898_;
v___y_3832_ = v___y_3890_;
v___y_3833_ = v___y_3880_;
v___y_3834_ = v___y_3879_;
v___y_3835_ = v___y_3886_;
goto v___jp_3803_;
}
else
{
lean_dec_ref_known(v___x_3922_, 2);
lean_dec(v___x_3915_);
lean_dec(v___x_3910_);
lean_dec(v_snd_3906_);
lean_dec(v_fst_3905_);
lean_dec_ref(v___y_3897_);
lean_dec_ref(v___y_3893_);
lean_dec_ref(v___y_3892_);
lean_dec_ref(v___y_3889_);
lean_dec(v___y_3883_);
lean_dec_ref(v___y_3877_);
lean_dec_ref(v___y_3876_);
lean_dec_ref(v___y_3875_);
lean_dec_ref(v___y_3874_);
lean_dec(v___y_3873_);
lean_dec_ref(v___y_3872_);
lean_dec(v___y_3871_);
lean_dec(v___y_3869_);
lean_dec_ref(v___y_3867_);
lean_dec(v___y_3866_);
lean_dec_ref(v___y_3865_);
lean_dec(v___y_3864_);
lean_dec(v___y_3863_);
lean_dec_ref(v___y_3862_);
return v___x_3926_;
}
}
}
else
{
lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3935_; 
v___x_3932_ = ((lean_object*)(l_Lean_Elab_Do_elabDoFor___closed__4));
v___x_3933_ = lean_box(0);
lean_inc(v___y_3878_);
if (v_isShared_3909_ == 0)
{
lean_ctor_set_tag(v___x_3908_, 1);
lean_ctor_set(v___x_3908_, 1, v___x_3933_);
lean_ctor_set(v___x_3908_, 0, v___y_3878_);
v___x_3935_ = v___x_3908_;
goto v_reusejp_3934_;
}
else
{
lean_object* v_reuseFailAlloc_3963_; 
v_reuseFailAlloc_3963_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3963_, 0, v___y_3878_);
lean_ctor_set(v_reuseFailAlloc_3963_, 1, v___x_3933_);
v___x_3935_ = v_reuseFailAlloc_3963_;
goto v_reusejp_3934_;
}
v_reusejp_3934_:
{
lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; 
lean_inc(v___y_3885_);
v___x_3936_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3936_, 0, v___y_3885_);
lean_ctor_set(v___x_3936_, 1, v___x_3935_);
v___x_3937_ = l_Lean_mkConst(v___x_3932_, v___x_3936_);
lean_inc_ref(v___y_3892_);
lean_inc_ref(v___y_3877_);
v___x_3938_ = l_Lean_mkAppB(v___x_3937_, v___y_3877_, v___y_3892_);
v___x_3939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3939_, 0, v___x_3938_);
v___x_3940_ = ((lean_object*)(l_Lean_Elab_Do_elabDoFor___closed__6));
v___x_3941_ = l_Lean_Meta_mkFreshExprMVar(v___x_3939_, v___y_3895_, v___x_3940_, v___y_3890_, v___y_3880_, v___y_3879_, v___y_3886_);
if (lean_obj_tag(v___x_3941_) == 0)
{
lean_object* v_a_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; 
v_a_3942_ = lean_ctor_get(v___x_3941_, 0);
lean_inc_n(v_a_3942_, 2);
lean_dec_ref_known(v___x_3941_, 1);
v___x_3943_ = ((lean_object*)(l_Lean_Elab_Do_elabDoFor___closed__8));
lean_inc(v_v_3902_);
v___x_3944_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3944_, 0, v_v_3902_);
lean_ctor_set(v___x_3944_, 1, v___x_3933_);
lean_inc(v_u_3901_);
v___x_3945_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3945_, 0, v_u_3901_);
lean_ctor_set(v___x_3945_, 1, v___x_3944_);
v___x_3946_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3946_, 0, v___y_3885_);
lean_ctor_set(v___x_3946_, 1, v___x_3945_);
v___x_3947_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3947_, 0, v___y_3878_);
lean_ctor_set(v___x_3947_, 1, v___x_3946_);
lean_inc_ref(v___x_3947_);
v___x_3948_ = l_Lean_mkConst(v___x_3943_, v___x_3947_);
lean_inc_ref(v___y_3877_);
lean_inc_ref(v___y_3892_);
lean_inc_ref(v_m_3900_);
v___x_3949_ = l_Lean_mkApp4(v___x_3948_, v_m_3900_, v___y_3892_, v___y_3877_, v_a_3942_);
v___x_3950_ = lean_box(0);
v___x_3951_ = l_Lean_Elab_Term_mkInstMVar(v___x_3949_, v___x_3950_, v___y_3881_, v___y_3898_, v___y_3890_, v___y_3880_, v___y_3879_, v___y_3886_);
if (lean_obj_tag(v___x_3951_) == 0)
{
lean_object* v_a_3952_; lean_object* v___x_3954_; uint8_t v_isShared_3955_; uint8_t v_isSharedCheck_3962_; 
v_a_3952_ = lean_ctor_get(v___x_3951_, 0);
v_isSharedCheck_3962_ = !lean_is_exclusive(v___x_3951_);
if (v_isSharedCheck_3962_ == 0)
{
v___x_3954_ = v___x_3951_;
v_isShared_3955_ = v_isSharedCheck_3962_;
goto v_resetjp_3953_;
}
else
{
lean_inc(v_a_3952_);
lean_dec(v___x_3951_);
v___x_3954_ = lean_box(0);
v_isShared_3955_ = v_isSharedCheck_3962_;
goto v_resetjp_3953_;
}
v_resetjp_3953_:
{
lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3960_; 
v___x_3956_ = ((lean_object*)(l_Lean_Elab_Do_elabDoFor___closed__10));
v___x_3957_ = l_Lean_mkConst(v___x_3956_, v___x_3947_);
lean_inc(v_snd_3906_);
lean_inc(v_a_3942_);
lean_inc_ref(v_m_3900_);
v___x_3958_ = l_Lean_mkApp8(v___x_3957_, v_m_3900_, v___y_3892_, v___y_3877_, v_a_3942_, v_a_3952_, v_snd_3906_, v___y_3897_, v_fst_3905_);
if (v_isShared_3955_ == 0)
{
lean_ctor_set_tag(v___x_3954_, 1);
lean_ctor_set(v___x_3954_, 0, v_a_3942_);
v___x_3960_ = v___x_3954_;
goto v_reusejp_3959_;
}
else
{
lean_object* v_reuseFailAlloc_3961_; 
v_reuseFailAlloc_3961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3961_, 0, v_a_3942_);
v___x_3960_ = v_reuseFailAlloc_3961_;
goto v_reusejp_3959_;
}
v_reusejp_3959_:
{
lean_inc(v_u_3901_);
v___y_3804_ = v___y_3862_;
v___y_3805_ = v___y_3863_;
v___y_3806_ = v___y_3864_;
v___y_3807_ = v___y_3865_;
v___y_3808_ = v___y_3866_;
v___y_3809_ = v___y_3867_;
v___y_3810_ = v___y_3868_;
v___y_3811_ = v___y_3869_;
v___y_3812_ = v___y_3870_;
v___y_3813_ = v___y_3871_;
v___y_3814_ = v_snd_3906_;
v___y_3815_ = v___y_3872_;
v___y_3816_ = v_u_3901_;
v___y_3817_ = v___y_3873_;
v___y_3818_ = v___x_3910_;
v___y_3819_ = v___y_3874_;
v___y_3820_ = v___x_3915_;
v___y_3821_ = v___y_3875_;
v___y_3822_ = v___y_3876_;
v___y_3823_ = v___y_3891_;
v___y_3824_ = v___y_3893_;
v___y_3825_ = v___y_3883_;
v___y_3826_ = v___y_3889_;
v_fst_3827_ = v___x_3958_;
v_snd_3828_ = v___x_3960_;
v___y_3829_ = v___y_3894_;
v___y_3830_ = v___y_3881_;
v___y_3831_ = v___y_3898_;
v___y_3832_ = v___y_3890_;
v___y_3833_ = v___y_3880_;
v___y_3834_ = v___y_3879_;
v___y_3835_ = v___y_3886_;
goto v___jp_3803_;
}
}
}
else
{
lean_dec_ref_known(v___x_3947_, 2);
lean_dec(v_a_3942_);
lean_dec_ref_known(v___y_3891_, 1);
lean_dec(v___x_3915_);
lean_dec(v___x_3910_);
lean_dec(v_snd_3906_);
lean_dec(v_fst_3905_);
lean_dec_ref(v___y_3897_);
lean_dec_ref(v___y_3893_);
lean_dec_ref(v___y_3892_);
lean_dec_ref(v___y_3889_);
lean_dec(v___y_3883_);
lean_dec_ref(v___y_3877_);
lean_dec_ref(v___y_3876_);
lean_dec_ref(v___y_3875_);
lean_dec_ref(v___y_3874_);
lean_dec(v___y_3873_);
lean_dec_ref(v___y_3872_);
lean_dec(v___y_3871_);
lean_dec(v___y_3869_);
lean_dec_ref(v___y_3867_);
lean_dec(v___y_3866_);
lean_dec_ref(v___y_3865_);
lean_dec(v___y_3864_);
lean_dec(v___y_3863_);
lean_dec_ref(v___y_3862_);
return v___x_3951_;
}
}
else
{
lean_dec_ref_known(v___y_3891_, 1);
lean_dec(v___x_3915_);
lean_dec(v___x_3910_);
lean_dec(v_snd_3906_);
lean_dec(v_fst_3905_);
lean_dec_ref(v___y_3897_);
lean_dec_ref(v___y_3893_);
lean_dec_ref(v___y_3892_);
lean_dec_ref(v___y_3889_);
lean_dec(v___y_3885_);
lean_dec(v___y_3883_);
lean_dec(v___y_3878_);
lean_dec_ref(v___y_3877_);
lean_dec_ref(v___y_3876_);
lean_dec_ref(v___y_3875_);
lean_dec_ref(v___y_3874_);
lean_dec(v___y_3873_);
lean_dec_ref(v___y_3872_);
lean_dec(v___y_3871_);
lean_dec(v___y_3869_);
lean_dec_ref(v___y_3867_);
lean_dec(v___y_3866_);
lean_dec_ref(v___y_3865_);
lean_dec(v___y_3864_);
lean_dec(v___y_3863_);
lean_dec_ref(v___y_3862_);
return v___x_3941_;
}
}
}
}
}
else
{
lean_object* v_a_3965_; lean_object* v___x_3967_; uint8_t v_isShared_3968_; uint8_t v_isSharedCheck_3972_; 
lean_dec_ref(v___y_3897_);
lean_dec_ref(v___y_3893_);
lean_dec_ref(v___y_3892_);
lean_dec(v___y_3891_);
lean_dec_ref(v___y_3889_);
lean_dec_ref(v___y_3887_);
lean_dec(v___y_3885_);
lean_dec(v___y_3883_);
lean_dec_ref(v___y_3882_);
lean_dec(v___y_3878_);
lean_dec_ref(v___y_3877_);
lean_dec_ref(v___y_3876_);
lean_dec_ref(v___y_3875_);
lean_dec_ref(v___y_3874_);
lean_dec(v___y_3873_);
lean_dec_ref(v___y_3872_);
lean_dec(v___y_3871_);
lean_dec(v___y_3869_);
lean_dec_ref(v___y_3867_);
lean_dec(v___y_3866_);
lean_dec_ref(v___y_3865_);
lean_dec(v___y_3864_);
lean_dec(v___y_3863_);
lean_dec_ref(v___y_3862_);
v_a_3965_ = lean_ctor_get(v___x_3903_, 0);
v_isSharedCheck_3972_ = !lean_is_exclusive(v___x_3903_);
if (v_isSharedCheck_3972_ == 0)
{
v___x_3967_ = v___x_3903_;
v_isShared_3968_ = v_isSharedCheck_3972_;
goto v_resetjp_3966_;
}
else
{
lean_inc(v_a_3965_);
lean_dec(v___x_3903_);
v___x_3967_ = lean_box(0);
v_isShared_3968_ = v_isSharedCheck_3972_;
goto v_resetjp_3966_;
}
v_resetjp_3966_:
{
lean_object* v___x_3970_; 
if (v_isShared_3968_ == 0)
{
v___x_3970_ = v___x_3967_;
goto v_reusejp_3969_;
}
else
{
lean_object* v_reuseFailAlloc_3971_; 
v_reuseFailAlloc_3971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3971_, 0, v_a_3965_);
v___x_3970_ = v_reuseFailAlloc_3971_;
goto v_reusejp_3969_;
}
v_reusejp_3969_:
{
return v___x_3970_;
}
}
}
}
v___jp_3973_:
{
if (lean_obj_tag(v___y_4011_) == 0)
{
lean_object* v_a_4012_; 
v_a_4012_ = lean_ctor_get(v___y_4011_, 0);
lean_inc(v_a_4012_);
lean_dec_ref_known(v___y_4011_, 1);
v___y_3862_ = v___y_3974_;
v___y_3863_ = v___y_3975_;
v___y_3864_ = v___y_3976_;
v___y_3865_ = v___y_3977_;
v___y_3866_ = v___y_3978_;
v___y_3867_ = v___y_3979_;
v___y_3868_ = v___y_3980_;
v___y_3869_ = v___y_3981_;
v___y_3870_ = v___y_3982_;
v___y_3871_ = v___y_3983_;
v___y_3872_ = v___y_3984_;
v___y_3873_ = v___y_3985_;
v___y_3874_ = v___y_3986_;
v___y_3875_ = v___y_3987_;
v___y_3876_ = v___y_3988_;
v___y_3877_ = v___y_3989_;
v___y_3878_ = v___y_3990_;
v___y_3879_ = v___y_3991_;
v___y_3880_ = v___y_3992_;
v___y_3881_ = v___y_3993_;
v___y_3882_ = v___y_3994_;
v___y_3883_ = v___y_3995_;
v___y_3884_ = v___y_3996_;
v___y_3885_ = v___y_3997_;
v___y_3886_ = v___y_3998_;
v___y_3887_ = v___y_3999_;
v___y_3888_ = v___y_4000_;
v___y_3889_ = v___y_4001_;
v___y_3890_ = v___y_4003_;
v___y_3891_ = v___y_4002_;
v___y_3892_ = v___y_4005_;
v___y_3893_ = v___y_4004_;
v___y_3894_ = v___y_4006_;
v___y_3895_ = v___y_4008_;
v___y_3896_ = v___y_4007_;
v___y_3897_ = v___y_4010_;
v___y_3898_ = v___y_4009_;
v_a_3899_ = v_a_4012_;
goto v___jp_3861_;
}
else
{
lean_object* v_a_4013_; lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4020_; 
lean_dec_ref(v___y_4010_);
lean_dec_ref(v___y_4005_);
lean_dec_ref(v___y_4004_);
lean_dec(v___y_4002_);
lean_dec_ref(v___y_4001_);
lean_dec_ref(v___y_3999_);
lean_dec(v___y_3997_);
lean_dec(v___y_3995_);
lean_dec_ref(v___y_3994_);
lean_dec(v___y_3990_);
lean_dec_ref(v___y_3989_);
lean_dec_ref(v___y_3988_);
lean_dec_ref(v___y_3987_);
lean_dec_ref(v___y_3986_);
lean_dec(v___y_3985_);
lean_dec_ref(v___y_3984_);
lean_dec(v___y_3983_);
lean_dec(v___y_3981_);
lean_dec_ref(v___y_3979_);
lean_dec(v___y_3978_);
lean_dec_ref(v___y_3977_);
lean_dec(v___y_3976_);
lean_dec(v___y_3975_);
lean_dec_ref(v___y_3974_);
v_a_4013_ = lean_ctor_get(v___y_4011_, 0);
v_isSharedCheck_4020_ = !lean_is_exclusive(v___y_4011_);
if (v_isSharedCheck_4020_ == 0)
{
v___x_4015_ = v___y_4011_;
v_isShared_4016_ = v_isSharedCheck_4020_;
goto v_resetjp_4014_;
}
else
{
lean_inc(v_a_4013_);
lean_dec(v___y_4011_);
v___x_4015_ = lean_box(0);
v_isShared_4016_ = v_isSharedCheck_4020_;
goto v_resetjp_4014_;
}
v_resetjp_4014_:
{
lean_object* v___x_4018_; 
if (v_isShared_4016_ == 0)
{
v___x_4018_ = v___x_4015_;
goto v_reusejp_4017_;
}
else
{
lean_object* v_reuseFailAlloc_4019_; 
v_reuseFailAlloc_4019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4019_, 0, v_a_4013_);
v___x_4018_ = v_reuseFailAlloc_4019_;
goto v_reusejp_4017_;
}
v_reusejp_4017_:
{
return v___x_4018_;
}
}
}
}
v___jp_4021_:
{
if (v___y_4061_ == 0)
{
lean_dec_ref(v___y_4033_);
v___y_3974_ = v___y_4022_;
v___y_3975_ = v___y_4023_;
v___y_3976_ = v___y_4024_;
v___y_3977_ = v___y_4025_;
v___y_3978_ = v___y_4026_;
v___y_3979_ = v___y_4027_;
v___y_3980_ = v___y_4028_;
v___y_3981_ = v___y_4029_;
v___y_3982_ = v___y_4030_;
v___y_3983_ = v___y_4031_;
v___y_3984_ = v___y_4032_;
v___y_3985_ = v___y_4034_;
v___y_3986_ = v___y_4035_;
v___y_3987_ = v___y_4036_;
v___y_3988_ = v___y_4037_;
v___y_3989_ = v___y_4038_;
v___y_3990_ = v___y_4039_;
v___y_3991_ = v___y_4051_;
v___y_3992_ = v___y_4052_;
v___y_3993_ = v___y_4041_;
v___y_3994_ = v___y_4040_;
v___y_3995_ = v___y_4042_;
v___y_3996_ = v___y_4043_;
v___y_3997_ = v___y_4054_;
v___y_3998_ = v___y_4053_;
v___y_3999_ = v___y_4044_;
v___y_4000_ = v___y_4055_;
v___y_4001_ = v___y_4045_;
v___y_4002_ = v___y_4057_;
v___y_4003_ = v___y_4058_;
v___y_4004_ = v___y_4046_;
v___y_4005_ = v___y_4047_;
v___y_4006_ = v___y_4059_;
v___y_4007_ = v___y_4048_;
v___y_4008_ = v___y_4060_;
v___y_4009_ = v___y_4049_;
v___y_4010_ = v___y_4050_;
v___y_4011_ = v___y_4056_;
goto v___jp_3973_;
}
else
{
lean_object* v___x_4062_; lean_object* v___x_4063_; 
lean_dec_ref(v___y_4056_);
v___x_4062_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13___lam__0___closed__4);
v___x_4063_ = lean_array_push(v___y_4033_, v___x_4062_);
v___y_3862_ = v___y_4022_;
v___y_3863_ = v___y_4023_;
v___y_3864_ = v___y_4024_;
v___y_3865_ = v___y_4025_;
v___y_3866_ = v___y_4026_;
v___y_3867_ = v___y_4027_;
v___y_3868_ = v___y_4028_;
v___y_3869_ = v___y_4029_;
v___y_3870_ = v___y_4030_;
v___y_3871_ = v___y_4031_;
v___y_3872_ = v___y_4032_;
v___y_3873_ = v___y_4034_;
v___y_3874_ = v___y_4035_;
v___y_3875_ = v___y_4036_;
v___y_3876_ = v___y_4037_;
v___y_3877_ = v___y_4038_;
v___y_3878_ = v___y_4039_;
v___y_3879_ = v___y_4051_;
v___y_3880_ = v___y_4052_;
v___y_3881_ = v___y_4041_;
v___y_3882_ = v___y_4040_;
v___y_3883_ = v___y_4042_;
v___y_3884_ = v___y_4043_;
v___y_3885_ = v___y_4054_;
v___y_3886_ = v___y_4053_;
v___y_3887_ = v___y_4044_;
v___y_3888_ = v___y_4055_;
v___y_3889_ = v___y_4045_;
v___y_3890_ = v___y_4058_;
v___y_3891_ = v___y_4057_;
v___y_3892_ = v___y_4047_;
v___y_3893_ = v___y_4046_;
v___y_3894_ = v___y_4059_;
v___y_3895_ = v___y_4060_;
v___y_3896_ = v___y_4048_;
v___y_3897_ = v___y_4050_;
v___y_3898_ = v___y_4049_;
v_a_3899_ = v___x_4063_;
goto v___jp_3861_;
}
}
v___jp_4064_:
{
lean_object* v_breaks_4103_; lean_object* v_continues_4104_; lean_object* v_returns_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; 
v_breaks_4103_ = lean_ctor_get(v___y_4097_, 0);
lean_inc(v_breaks_4103_);
v_continues_4104_ = lean_ctor_get(v___y_4097_, 1);
lean_inc(v_continues_4104_);
v_returns_4105_ = lean_ctor_get(v___y_4097_, 2);
lean_inc(v_returns_4105_);
lean_dec_ref(v___y_4097_);
v___x_4106_ = ((lean_object*)(l_Lean_Elab_Do_elabDoFor___closed__11));
v___x_4107_ = lean_box(0);
v___x_4108_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_elabDoFor_spec__2(v___x_4107_, v_returns_4105_);
lean_dec(v_returns_4105_);
v___x_4109_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__3___redArg(v___y_4091_, v___x_4108_, v___x_4106_, v___y_4098_, v___y_4081_, v___y_4088_);
lean_dec(v___x_4108_);
if (lean_obj_tag(v___x_4109_) == 0)
{
lean_object* v_a_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; 
v_a_4110_ = lean_ctor_get(v___x_4109_, 0);
lean_inc(v_a_4110_);
lean_dec_ref_known(v___x_4109_, 1);
v___x_4111_ = l_List_appendTR___redArg(v___y_4096_, v___y_4102_);
lean_inc(v___y_4089_);
v___x_4112_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_elabDoFor_spec__5(v___y_4089_, v_breaks_4103_);
lean_dec(v_breaks_4103_);
v___x_4113_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__6___redArg(v___x_4111_, v___x_4112_, v_a_4110_, v___y_4098_, v___y_4081_, v___y_4088_);
lean_dec(v___x_4112_);
if (lean_obj_tag(v___x_4113_) == 0)
{
lean_object* v_a_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; 
v_a_4114_ = lean_ctor_get(v___x_4113_, 0);
lean_inc(v_a_4114_);
lean_dec_ref_known(v___x_4113_, 1);
lean_inc(v___y_4089_);
v___x_4115_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Do_elabDoFor_spec__5(v___y_4089_, v_continues_4104_);
lean_dec(v_continues_4104_);
v___x_4116_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_elabDoFor_spec__7___redArg(v___x_4111_, v___x_4115_, v_a_4114_, v___y_4098_, v___y_4081_, v___y_4088_);
lean_dec(v___x_4115_);
lean_dec(v___x_4111_);
if (lean_obj_tag(v___x_4116_) == 0)
{
lean_object* v_a_4117_; size_t v_sz_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; size_t v_sz_4121_; size_t v___x_4122_; lean_object* v___x_4123_; 
v_a_4117_ = lean_ctor_get(v___x_4116_, 0);
lean_inc(v_a_4117_);
lean_dec_ref_known(v___x_4116_, 1);
v_sz_4118_ = lean_array_size(v___y_4084_);
v___x_4119_ = lean_box(0);
v___x_4120_ = l_Array_zipIdx___redArg(v_a_4117_, v___x_3759_);
v_sz_4121_ = lean_array_size(v___x_4120_);
v___x_4122_ = ((size_t)0ULL);
v___x_4123_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__8___redArg(v___x_4119_, v___x_4120_, v_sz_4121_, v___x_4122_, v___x_4106_, v___y_4093_, v___y_4082_, v___y_4081_, v___y_4088_);
lean_dec_ref(v___x_4120_);
if (lean_obj_tag(v___x_4123_) == 0)
{
lean_object* v_a_4124_; lean_object* v___x_4125_; 
v_a_4124_ = lean_ctor_get(v___x_4123_, 0);
lean_inc(v_a_4124_);
lean_dec_ref_known(v___x_4123_, 1);
lean_inc_ref(v___y_4086_);
v___x_4125_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__9(v___y_4086_, v___y_4084_, v_sz_4118_, v___x_4122_, v_a_4124_, v___y_4083_, v___y_4101_, v___y_4093_, v___y_4082_, v___y_4081_, v___y_4088_);
if (lean_obj_tag(v___x_4125_) == 0)
{
lean_object* v_a_4126_; lean_object* v___x_4127_; uint8_t v___x_4128_; 
v_a_4126_ = lean_ctor_get(v___x_4125_, 0);
lean_inc(v_a_4126_);
v___x_4127_ = lean_array_get_size(v_a_4117_);
v___x_4128_ = lean_nat_dec_eq(v___x_4127_, v___x_3750_);
if (v___x_4128_ == 0)
{
lean_inc(v_a_4117_);
v___y_4022_ = v___y_4065_;
v___y_4023_ = v___y_4066_;
v___y_4024_ = v___y_4067_;
v___y_4025_ = v___y_4068_;
v___y_4026_ = v___y_4069_;
v___y_4027_ = v___y_4070_;
v___y_4028_ = v___y_4071_;
v___y_4029_ = v___y_4072_;
v___y_4030_ = v___y_4073_;
v___y_4031_ = v___y_4074_;
v___y_4032_ = v___y_4075_;
v___y_4033_ = v_a_4126_;
v___y_4034_ = v___y_4076_;
v___y_4035_ = v___y_4077_;
v___y_4036_ = v_a_4117_;
v___y_4037_ = v___y_4078_;
v___y_4038_ = v___y_4079_;
v___y_4039_ = v___y_4080_;
v___y_4040_ = v___y_4084_;
v___y_4041_ = v___y_4083_;
v___y_4042_ = v___y_4085_;
v___y_4043_ = v___y_4086_;
v___y_4044_ = v_a_4117_;
v___y_4045_ = v___y_4090_;
v___y_4046_ = v___y_4094_;
v___y_4047_ = v___y_4095_;
v___y_4048_ = v_sz_4118_;
v___y_4049_ = v___y_4101_;
v___y_4050_ = v___y_4100_;
v___y_4051_ = v___y_4081_;
v___y_4052_ = v___y_4082_;
v___y_4053_ = v___y_4088_;
v___y_4054_ = v___y_4087_;
v___y_4055_ = v___y_4089_;
v___y_4056_ = v___x_4125_;
v___y_4057_ = v___y_4092_;
v___y_4058_ = v___y_4093_;
v___y_4059_ = v___y_4098_;
v___y_4060_ = v___y_4099_;
v___y_4061_ = v___x_4128_;
goto v___jp_4021_;
}
else
{
lean_object* v___x_4129_; uint8_t v___x_4130_; 
v___x_4129_ = lean_array_get_size(v___y_4084_);
v___x_4130_ = lean_nat_dec_eq(v___x_4129_, v___x_3759_);
lean_inc(v_a_4117_);
v___y_4022_ = v___y_4065_;
v___y_4023_ = v___y_4066_;
v___y_4024_ = v___y_4067_;
v___y_4025_ = v___y_4068_;
v___y_4026_ = v___y_4069_;
v___y_4027_ = v___y_4070_;
v___y_4028_ = v___y_4071_;
v___y_4029_ = v___y_4072_;
v___y_4030_ = v___y_4073_;
v___y_4031_ = v___y_4074_;
v___y_4032_ = v___y_4075_;
v___y_4033_ = v_a_4126_;
v___y_4034_ = v___y_4076_;
v___y_4035_ = v___y_4077_;
v___y_4036_ = v_a_4117_;
v___y_4037_ = v___y_4078_;
v___y_4038_ = v___y_4079_;
v___y_4039_ = v___y_4080_;
v___y_4040_ = v___y_4084_;
v___y_4041_ = v___y_4083_;
v___y_4042_ = v___y_4085_;
v___y_4043_ = v___y_4086_;
v___y_4044_ = v_a_4117_;
v___y_4045_ = v___y_4090_;
v___y_4046_ = v___y_4094_;
v___y_4047_ = v___y_4095_;
v___y_4048_ = v_sz_4118_;
v___y_4049_ = v___y_4101_;
v___y_4050_ = v___y_4100_;
v___y_4051_ = v___y_4081_;
v___y_4052_ = v___y_4082_;
v___y_4053_ = v___y_4088_;
v___y_4054_ = v___y_4087_;
v___y_4055_ = v___y_4089_;
v___y_4056_ = v___x_4125_;
v___y_4057_ = v___y_4092_;
v___y_4058_ = v___y_4093_;
v___y_4059_ = v___y_4098_;
v___y_4060_ = v___y_4099_;
v___y_4061_ = v___x_4130_;
goto v___jp_4021_;
}
}
else
{
lean_inc(v_a_4117_);
v___y_3974_ = v___y_4065_;
v___y_3975_ = v___y_4066_;
v___y_3976_ = v___y_4067_;
v___y_3977_ = v___y_4068_;
v___y_3978_ = v___y_4069_;
v___y_3979_ = v___y_4070_;
v___y_3980_ = v___y_4071_;
v___y_3981_ = v___y_4072_;
v___y_3982_ = v___y_4073_;
v___y_3983_ = v___y_4074_;
v___y_3984_ = v___y_4075_;
v___y_3985_ = v___y_4076_;
v___y_3986_ = v___y_4077_;
v___y_3987_ = v_a_4117_;
v___y_3988_ = v___y_4078_;
v___y_3989_ = v___y_4079_;
v___y_3990_ = v___y_4080_;
v___y_3991_ = v___y_4081_;
v___y_3992_ = v___y_4082_;
v___y_3993_ = v___y_4083_;
v___y_3994_ = v___y_4084_;
v___y_3995_ = v___y_4085_;
v___y_3996_ = v___y_4086_;
v___y_3997_ = v___y_4087_;
v___y_3998_ = v___y_4088_;
v___y_3999_ = v_a_4117_;
v___y_4000_ = v___y_4089_;
v___y_4001_ = v___y_4090_;
v___y_4002_ = v___y_4092_;
v___y_4003_ = v___y_4093_;
v___y_4004_ = v___y_4094_;
v___y_4005_ = v___y_4095_;
v___y_4006_ = v___y_4098_;
v___y_4007_ = v_sz_4118_;
v___y_4008_ = v___y_4099_;
v___y_4009_ = v___y_4101_;
v___y_4010_ = v___y_4100_;
v___y_4011_ = v___x_4125_;
goto v___jp_3973_;
}
}
else
{
lean_inc(v_a_4117_);
v___y_3974_ = v___y_4065_;
v___y_3975_ = v___y_4066_;
v___y_3976_ = v___y_4067_;
v___y_3977_ = v___y_4068_;
v___y_3978_ = v___y_4069_;
v___y_3979_ = v___y_4070_;
v___y_3980_ = v___y_4071_;
v___y_3981_ = v___y_4072_;
v___y_3982_ = v___y_4073_;
v___y_3983_ = v___y_4074_;
v___y_3984_ = v___y_4075_;
v___y_3985_ = v___y_4076_;
v___y_3986_ = v___y_4077_;
v___y_3987_ = v_a_4117_;
v___y_3988_ = v___y_4078_;
v___y_3989_ = v___y_4079_;
v___y_3990_ = v___y_4080_;
v___y_3991_ = v___y_4081_;
v___y_3992_ = v___y_4082_;
v___y_3993_ = v___y_4083_;
v___y_3994_ = v___y_4084_;
v___y_3995_ = v___y_4085_;
v___y_3996_ = v___y_4086_;
v___y_3997_ = v___y_4087_;
v___y_3998_ = v___y_4088_;
v___y_3999_ = v_a_4117_;
v___y_4000_ = v___y_4089_;
v___y_4001_ = v___y_4090_;
v___y_4002_ = v___y_4092_;
v___y_4003_ = v___y_4093_;
v___y_4004_ = v___y_4094_;
v___y_4005_ = v___y_4095_;
v___y_4006_ = v___y_4098_;
v___y_4007_ = v_sz_4118_;
v___y_4008_ = v___y_4099_;
v___y_4009_ = v___y_4101_;
v___y_4010_ = v___y_4100_;
v___y_4011_ = v___x_4123_;
goto v___jp_3973_;
}
}
else
{
lean_object* v_a_4131_; lean_object* v___x_4133_; uint8_t v_isShared_4134_; uint8_t v_isSharedCheck_4138_; 
lean_dec_ref(v___y_4100_);
lean_dec_ref(v___y_4095_);
lean_dec_ref(v___y_4094_);
lean_dec(v___y_4092_);
lean_dec_ref(v___y_4090_);
lean_dec(v___y_4087_);
lean_dec(v___y_4085_);
lean_dec_ref(v___y_4084_);
lean_dec(v___y_4080_);
lean_dec_ref(v___y_4079_);
lean_dec_ref(v___y_4078_);
lean_dec_ref(v___y_4077_);
lean_dec(v___y_4076_);
lean_dec_ref(v___y_4075_);
lean_dec(v___y_4074_);
lean_dec(v___y_4072_);
lean_dec_ref(v___y_4070_);
lean_dec(v___y_4069_);
lean_dec_ref(v___y_4068_);
lean_dec(v___y_4067_);
lean_dec(v___y_4066_);
lean_dec_ref(v___y_4065_);
v_a_4131_ = lean_ctor_get(v___x_4116_, 0);
v_isSharedCheck_4138_ = !lean_is_exclusive(v___x_4116_);
if (v_isSharedCheck_4138_ == 0)
{
v___x_4133_ = v___x_4116_;
v_isShared_4134_ = v_isSharedCheck_4138_;
goto v_resetjp_4132_;
}
else
{
lean_inc(v_a_4131_);
lean_dec(v___x_4116_);
v___x_4133_ = lean_box(0);
v_isShared_4134_ = v_isSharedCheck_4138_;
goto v_resetjp_4132_;
}
v_resetjp_4132_:
{
lean_object* v___x_4136_; 
if (v_isShared_4134_ == 0)
{
v___x_4136_ = v___x_4133_;
goto v_reusejp_4135_;
}
else
{
lean_object* v_reuseFailAlloc_4137_; 
v_reuseFailAlloc_4137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4137_, 0, v_a_4131_);
v___x_4136_ = v_reuseFailAlloc_4137_;
goto v_reusejp_4135_;
}
v_reusejp_4135_:
{
return v___x_4136_;
}
}
}
}
else
{
lean_object* v_a_4139_; lean_object* v___x_4141_; uint8_t v_isShared_4142_; uint8_t v_isSharedCheck_4146_; 
lean_dec(v___x_4111_);
lean_dec(v_continues_4104_);
lean_dec_ref(v___y_4100_);
lean_dec_ref(v___y_4095_);
lean_dec_ref(v___y_4094_);
lean_dec(v___y_4092_);
lean_dec_ref(v___y_4090_);
lean_dec(v___y_4087_);
lean_dec(v___y_4085_);
lean_dec_ref(v___y_4084_);
lean_dec(v___y_4080_);
lean_dec_ref(v___y_4079_);
lean_dec_ref(v___y_4078_);
lean_dec_ref(v___y_4077_);
lean_dec(v___y_4076_);
lean_dec_ref(v___y_4075_);
lean_dec(v___y_4074_);
lean_dec(v___y_4072_);
lean_dec_ref(v___y_4070_);
lean_dec(v___y_4069_);
lean_dec_ref(v___y_4068_);
lean_dec(v___y_4067_);
lean_dec(v___y_4066_);
lean_dec_ref(v___y_4065_);
v_a_4139_ = lean_ctor_get(v___x_4113_, 0);
v_isSharedCheck_4146_ = !lean_is_exclusive(v___x_4113_);
if (v_isSharedCheck_4146_ == 0)
{
v___x_4141_ = v___x_4113_;
v_isShared_4142_ = v_isSharedCheck_4146_;
goto v_resetjp_4140_;
}
else
{
lean_inc(v_a_4139_);
lean_dec(v___x_4113_);
v___x_4141_ = lean_box(0);
v_isShared_4142_ = v_isSharedCheck_4146_;
goto v_resetjp_4140_;
}
v_resetjp_4140_:
{
lean_object* v___x_4144_; 
if (v_isShared_4142_ == 0)
{
v___x_4144_ = v___x_4141_;
goto v_reusejp_4143_;
}
else
{
lean_object* v_reuseFailAlloc_4145_; 
v_reuseFailAlloc_4145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4145_, 0, v_a_4139_);
v___x_4144_ = v_reuseFailAlloc_4145_;
goto v_reusejp_4143_;
}
v_reusejp_4143_:
{
return v___x_4144_;
}
}
}
}
else
{
lean_object* v_a_4147_; lean_object* v___x_4149_; uint8_t v_isShared_4150_; uint8_t v_isSharedCheck_4154_; 
lean_dec(v_continues_4104_);
lean_dec(v_breaks_4103_);
lean_dec(v___y_4102_);
lean_dec_ref(v___y_4100_);
lean_dec(v___y_4096_);
lean_dec_ref(v___y_4095_);
lean_dec_ref(v___y_4094_);
lean_dec(v___y_4092_);
lean_dec_ref(v___y_4090_);
lean_dec(v___y_4087_);
lean_dec(v___y_4085_);
lean_dec_ref(v___y_4084_);
lean_dec(v___y_4080_);
lean_dec_ref(v___y_4079_);
lean_dec_ref(v___y_4078_);
lean_dec_ref(v___y_4077_);
lean_dec(v___y_4076_);
lean_dec_ref(v___y_4075_);
lean_dec(v___y_4074_);
lean_dec(v___y_4072_);
lean_dec_ref(v___y_4070_);
lean_dec(v___y_4069_);
lean_dec_ref(v___y_4068_);
lean_dec(v___y_4067_);
lean_dec(v___y_4066_);
lean_dec_ref(v___y_4065_);
v_a_4147_ = lean_ctor_get(v___x_4109_, 0);
v_isSharedCheck_4154_ = !lean_is_exclusive(v___x_4109_);
if (v_isSharedCheck_4154_ == 0)
{
v___x_4149_ = v___x_4109_;
v_isShared_4150_ = v_isSharedCheck_4154_;
goto v_resetjp_4148_;
}
else
{
lean_inc(v_a_4147_);
lean_dec(v___x_4109_);
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
v___jp_4155_:
{
if (v___y_4188_ == 0)
{
lean_inc(v___y_4180_);
v___y_4065_ = v___y_4156_;
v___y_4066_ = v___y_4157_;
v___y_4067_ = v___y_4158_;
v___y_4068_ = v___y_4159_;
v___y_4069_ = v___y_4160_;
v___y_4070_ = v___y_4161_;
v___y_4071_ = v___y_4162_;
v___y_4072_ = v___y_4163_;
v___y_4073_ = v___y_4164_;
v___y_4074_ = v___y_4165_;
v___y_4075_ = v___y_4166_;
v___y_4076_ = v___y_4167_;
v___y_4077_ = v___y_4168_;
v___y_4078_ = v___y_4169_;
v___y_4079_ = v___y_4170_;
v___y_4080_ = v___y_4171_;
v___y_4081_ = v___y_4172_;
v___y_4082_ = v___y_4173_;
v___y_4083_ = v___y_4174_;
v___y_4084_ = v___y_4175_;
v___y_4085_ = v___y_4176_;
v___y_4086_ = v___y_4177_;
v___y_4087_ = v___y_4178_;
v___y_4088_ = v___y_4179_;
v___y_4089_ = v___y_4180_;
v___y_4090_ = v___y_4181_;
v___y_4091_ = v___y_4182_;
v___y_4092_ = v___y_4184_;
v___y_4093_ = v___y_4183_;
v___y_4094_ = v___y_4186_;
v___y_4095_ = v___y_4185_;
v___y_4096_ = v___y_4193_;
v___y_4097_ = v___y_4187_;
v___y_4098_ = v___y_4189_;
v___y_4099_ = v___y_4190_;
v___y_4100_ = v___y_4192_;
v___y_4101_ = v___y_4191_;
v___y_4102_ = v___y_4180_;
goto v___jp_4064_;
}
else
{
lean_object* v___x_4194_; lean_object* v___x_4195_; 
v___x_4194_ = lean_box(0);
lean_inc(v___y_4180_);
v___x_4195_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4195_, 0, v___x_4194_);
lean_ctor_set(v___x_4195_, 1, v___y_4180_);
v___y_4065_ = v___y_4156_;
v___y_4066_ = v___y_4157_;
v___y_4067_ = v___y_4158_;
v___y_4068_ = v___y_4159_;
v___y_4069_ = v___y_4160_;
v___y_4070_ = v___y_4161_;
v___y_4071_ = v___y_4162_;
v___y_4072_ = v___y_4163_;
v___y_4073_ = v___y_4164_;
v___y_4074_ = v___y_4165_;
v___y_4075_ = v___y_4166_;
v___y_4076_ = v___y_4167_;
v___y_4077_ = v___y_4168_;
v___y_4078_ = v___y_4169_;
v___y_4079_ = v___y_4170_;
v___y_4080_ = v___y_4171_;
v___y_4081_ = v___y_4172_;
v___y_4082_ = v___y_4173_;
v___y_4083_ = v___y_4174_;
v___y_4084_ = v___y_4175_;
v___y_4085_ = v___y_4176_;
v___y_4086_ = v___y_4177_;
v___y_4087_ = v___y_4178_;
v___y_4088_ = v___y_4179_;
v___y_4089_ = v___y_4180_;
v___y_4090_ = v___y_4181_;
v___y_4091_ = v___y_4182_;
v___y_4092_ = v___y_4184_;
v___y_4093_ = v___y_4183_;
v___y_4094_ = v___y_4186_;
v___y_4095_ = v___y_4185_;
v___y_4096_ = v___y_4193_;
v___y_4097_ = v___y_4187_;
v___y_4098_ = v___y_4189_;
v___y_4099_ = v___y_4190_;
v___y_4100_ = v___y_4192_;
v___y_4101_ = v___y_4191_;
v___y_4102_ = v___x_4195_;
goto v___jp_4064_;
}
}
v___jp_4196_:
{
if (lean_obj_tag(v_label_x3f_4222_) == 0)
{
lean_inc(v___y_4219_);
v___y_4156_ = v___y_4197_;
v___y_4157_ = v___y_4199_;
v___y_4158_ = v___y_4198_;
v___y_4159_ = v___y_4201_;
v___y_4160_ = v_label_x3f_4222_;
v___y_4161_ = v___y_4203_;
v___y_4162_ = v___y_4232_;
v___y_4163_ = v___y_4204_;
v___y_4164_ = v___y_4205_;
v___y_4165_ = v___y_4206_;
v___y_4166_ = v___y_4207_;
v___y_4167_ = v___y_4200_;
v___y_4168_ = v___y_4202_;
v___y_4169_ = v___y_4208_;
v___y_4170_ = v___y_4209_;
v___y_4171_ = v___y_4210_;
v___y_4172_ = v___y_4211_;
v___y_4173_ = v___y_4212_;
v___y_4174_ = v___y_4213_;
v___y_4175_ = v___y_4214_;
v___y_4176_ = v___y_4215_;
v___y_4177_ = v___y_4216_;
v___y_4178_ = v___y_4217_;
v___y_4179_ = v___y_4218_;
v___y_4180_ = v___y_4219_;
v___y_4181_ = v___y_4221_;
v___y_4182_ = v___y_4220_;
v___y_4183_ = v___y_4224_;
v___y_4184_ = v___y_4223_;
v___y_4185_ = v___y_4226_;
v___y_4186_ = v___y_4225_;
v___y_4187_ = v___y_4227_;
v___y_4188_ = v___y_4232_;
v___y_4189_ = v___y_4228_;
v___y_4190_ = v___y_4229_;
v___y_4191_ = v___y_4231_;
v___y_4192_ = v___y_4230_;
v___y_4193_ = v___y_4219_;
goto v___jp_4155_;
}
else
{
lean_object* v_val_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; 
v_val_4233_ = lean_ctor_get(v_label_x3f_4222_, 0);
v___x_4234_ = l_Lean_TSyntax_getId(v_val_4233_);
lean_inc(v___y_4219_);
v___x_4235_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4235_, 0, v___x_4234_);
lean_ctor_set(v___x_4235_, 1, v___y_4219_);
v___y_4156_ = v___y_4197_;
v___y_4157_ = v___y_4199_;
v___y_4158_ = v___y_4198_;
v___y_4159_ = v___y_4201_;
v___y_4160_ = v_label_x3f_4222_;
v___y_4161_ = v___y_4203_;
v___y_4162_ = v___y_4232_;
v___y_4163_ = v___y_4204_;
v___y_4164_ = v___y_4205_;
v___y_4165_ = v___y_4206_;
v___y_4166_ = v___y_4207_;
v___y_4167_ = v___y_4200_;
v___y_4168_ = v___y_4202_;
v___y_4169_ = v___y_4208_;
v___y_4170_ = v___y_4209_;
v___y_4171_ = v___y_4210_;
v___y_4172_ = v___y_4211_;
v___y_4173_ = v___y_4212_;
v___y_4174_ = v___y_4213_;
v___y_4175_ = v___y_4214_;
v___y_4176_ = v___y_4215_;
v___y_4177_ = v___y_4216_;
v___y_4178_ = v___y_4217_;
v___y_4179_ = v___y_4218_;
v___y_4180_ = v___y_4219_;
v___y_4181_ = v___y_4221_;
v___y_4182_ = v___y_4220_;
v___y_4183_ = v___y_4224_;
v___y_4184_ = v___y_4223_;
v___y_4185_ = v___y_4226_;
v___y_4186_ = v___y_4225_;
v___y_4187_ = v___y_4227_;
v___y_4188_ = v___y_4232_;
v___y_4189_ = v___y_4228_;
v___y_4190_ = v___y_4229_;
v___y_4191_ = v___y_4231_;
v___y_4192_ = v___y_4230_;
v___y_4193_ = v___x_4235_;
goto v___jp_4155_;
}
}
v___jp_4236_:
{
lean_object* v_capture_x3f_4270_; 
v_capture_x3f_4270_ = lean_ctor_get(v___y_4260_, 1);
if (lean_obj_tag(v_capture_x3f_4270_) == 0)
{
lean_object* v_label_x3f_4271_; 
v_label_x3f_4271_ = lean_ctor_get(v___y_4260_, 0);
lean_inc(v_label_x3f_4271_);
lean_dec_ref(v___y_4260_);
lean_inc_ref(v___y_4269_);
v___y_4197_ = v___y_4237_;
v___y_4198_ = v___y_4238_;
v___y_4199_ = v___y_4239_;
v___y_4200_ = v___y_4247_;
v___y_4201_ = v___y_4240_;
v___y_4202_ = v___y_4249_;
v___y_4203_ = v___y_4269_;
v___y_4204_ = v___y_4241_;
v___y_4205_ = v___y_4242_;
v___y_4206_ = v___y_4243_;
v___y_4207_ = v___y_4245_;
v___y_4208_ = v___y_4250_;
v___y_4209_ = v___y_4251_;
v___y_4210_ = v___y_4252_;
v___y_4211_ = v___y_4253_;
v___y_4212_ = v___y_4254_;
v___y_4213_ = v___y_4255_;
v___y_4214_ = v___y_4269_;
v___y_4215_ = v___y_4256_;
v___y_4216_ = v___y_4242_;
v___y_4217_ = v___y_4257_;
v___y_4218_ = v___y_4258_;
v___y_4219_ = v___y_4244_;
v___y_4220_ = v___y_4259_;
v___y_4221_ = v___y_4246_;
v_label_x3f_4222_ = v_label_x3f_4271_;
v___y_4223_ = v___y_4262_;
v___y_4224_ = v___y_4261_;
v___y_4225_ = v___y_4248_;
v___y_4226_ = v___y_4263_;
v___y_4227_ = v___y_4264_;
v___y_4228_ = v___y_4265_;
v___y_4229_ = v___y_4266_;
v___y_4230_ = v___y_4268_;
v___y_4231_ = v___y_4267_;
v___y_4232_ = v___x_3762_;
goto v___jp_4196_;
}
else
{
lean_object* v_label_x3f_4272_; lean_object* v_val_4273_; uint8_t v___x_4274_; 
lean_inc_ref(v_capture_x3f_4270_);
v_label_x3f_4272_ = lean_ctor_get(v___y_4260_, 0);
lean_inc(v_label_x3f_4272_);
lean_dec_ref(v___y_4260_);
v_val_4273_ = lean_ctor_get(v_capture_x3f_4270_, 0);
lean_inc(v_val_4273_);
lean_dec_ref_known(v_capture_x3f_4270_, 1);
v___x_4274_ = lean_unbox(v_val_4273_);
lean_dec(v_val_4273_);
lean_inc_ref(v___y_4269_);
v___y_4197_ = v___y_4237_;
v___y_4198_ = v___y_4238_;
v___y_4199_ = v___y_4239_;
v___y_4200_ = v___y_4247_;
v___y_4201_ = v___y_4240_;
v___y_4202_ = v___y_4249_;
v___y_4203_ = v___y_4269_;
v___y_4204_ = v___y_4241_;
v___y_4205_ = v___y_4242_;
v___y_4206_ = v___y_4243_;
v___y_4207_ = v___y_4245_;
v___y_4208_ = v___y_4250_;
v___y_4209_ = v___y_4251_;
v___y_4210_ = v___y_4252_;
v___y_4211_ = v___y_4253_;
v___y_4212_ = v___y_4254_;
v___y_4213_ = v___y_4255_;
v___y_4214_ = v___y_4269_;
v___y_4215_ = v___y_4256_;
v___y_4216_ = v___y_4242_;
v___y_4217_ = v___y_4257_;
v___y_4218_ = v___y_4258_;
v___y_4219_ = v___y_4244_;
v___y_4220_ = v___y_4259_;
v___y_4221_ = v___y_4246_;
v_label_x3f_4222_ = v_label_x3f_4272_;
v___y_4223_ = v___y_4262_;
v___y_4224_ = v___y_4261_;
v___y_4225_ = v___y_4248_;
v___y_4226_ = v___y_4263_;
v___y_4227_ = v___y_4264_;
v___y_4228_ = v___y_4265_;
v___y_4229_ = v___y_4266_;
v___y_4230_ = v___y_4268_;
v___y_4231_ = v___y_4267_;
v___y_4232_ = v___x_4274_;
goto v___jp_4196_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoFor___boxed(lean_object* v_stx_4416_, lean_object* v_dec_4417_, lean_object* v_a_4418_, lean_object* v_a_4419_, lean_object* v_a_4420_, lean_object* v_a_4421_, lean_object* v_a_4422_, lean_object* v_a_4423_, lean_object* v_a_4424_, lean_object* v_a_4425_){
_start:
{
lean_object* v_res_4426_; 
v_res_4426_ = l_Lean_Elab_Do_elabDoFor(v_stx_4416_, v_dec_4417_, v_a_4418_, v_a_4419_, v_a_4420_, v_a_4421_, v_a_4422_, v_a_4423_, v_a_4424_);
lean_dec(v_a_4424_);
lean_dec_ref(v_a_4423_);
lean_dec(v_a_4422_);
lean_dec_ref(v_a_4421_);
lean_dec(v_a_4420_);
lean_dec_ref(v_a_4419_);
lean_dec_ref(v_a_4418_);
return v_res_4426_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14(lean_object* v___x_4427_, lean_object* v___x_4428_, lean_object* v_snd_4429_, lean_object* v___x_4430_, lean_object* v_a_4431_, lean_object* v___y_4432_, lean_object* v___x_4433_, lean_object* v___x_4434_, lean_object* v_as_4435_, size_t v_sz_4436_, size_t v_i_4437_, lean_object* v_b_4438_, lean_object* v___y_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_, lean_object* v___y_4443_, lean_object* v___y_4444_, lean_object* v___y_4445_){
_start:
{
lean_object* v___x_4447_; 
v___x_4447_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___redArg(v___x_4427_, v___x_4428_, v_snd_4429_, v___x_4430_, v_a_4431_, v___y_4432_, v___x_4433_, v___x_4434_, v_as_4435_, v_sz_4436_, v_i_4437_, v_b_4438_);
return v___x_4447_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14___boxed(lean_object** _args){
lean_object* v___x_4448_ = _args[0];
lean_object* v___x_4449_ = _args[1];
lean_object* v_snd_4450_ = _args[2];
lean_object* v___x_4451_ = _args[3];
lean_object* v_a_4452_ = _args[4];
lean_object* v___y_4453_ = _args[5];
lean_object* v___x_4454_ = _args[6];
lean_object* v___x_4455_ = _args[7];
lean_object* v_as_4456_ = _args[8];
lean_object* v_sz_4457_ = _args[9];
lean_object* v_i_4458_ = _args[10];
lean_object* v_b_4459_ = _args[11];
lean_object* v___y_4460_ = _args[12];
lean_object* v___y_4461_ = _args[13];
lean_object* v___y_4462_ = _args[14];
lean_object* v___y_4463_ = _args[15];
lean_object* v___y_4464_ = _args[16];
lean_object* v___y_4465_ = _args[17];
lean_object* v___y_4466_ = _args[18];
lean_object* v___y_4467_ = _args[19];
_start:
{
size_t v_sz_boxed_4468_; size_t v_i_boxed_4469_; lean_object* v_res_4470_; 
v_sz_boxed_4468_ = lean_unbox_usize(v_sz_4457_);
lean_dec(v_sz_4457_);
v_i_boxed_4469_ = lean_unbox_usize(v_i_4458_);
lean_dec(v_i_4458_);
v_res_4470_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoFor_spec__13_spec__14(v___x_4448_, v___x_4449_, v_snd_4450_, v___x_4451_, v_a_4452_, v___y_4453_, v___x_4454_, v___x_4455_, v_as_4456_, v_sz_boxed_4468_, v_i_boxed_4469_, v_b_4459_, v___y_4460_, v___y_4461_, v___y_4462_, v___y_4463_, v___y_4464_, v___y_4465_, v___y_4466_);
lean_dec(v___y_4466_);
lean_dec_ref(v___y_4465_);
lean_dec(v___y_4464_);
lean_dec_ref(v___y_4463_);
lean_dec(v___y_4462_);
lean_dec_ref(v___y_4461_);
lean_dec_ref(v___y_4460_);
lean_dec_ref(v_as_4456_);
return v_res_4470_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor___regBuiltin_Lean_Elab_Do_elabDoFor__1(){
_start:
{
lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; 
v___x_4478_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_4479_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor_expand___closed__6));
v___x_4480_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor___regBuiltin_Lean_Elab_Do_elabDoFor__1___closed__1));
v___x_4481_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoFor___boxed), 10, 0);
v___x_4482_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4478_, v___x_4479_, v___x_4480_, v___x_4481_);
return v___x_4482_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor___regBuiltin_Lean_Elab_Do_elabDoFor__1___boxed(lean_object* v_a_4483_){
_start:
{
lean_object* v_res_4484_; 
v_res_4484_ = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor___regBuiltin_Lean_Elab_Do_elabDoFor__1();
return v_res_4484_;
}
}
lean_object* runtime_initialize_Lean_Elab_BuiltinDo_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Control_Do(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_ProdN(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_BuiltinDo_For(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_BuiltinDo_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_expandDoFor___regBuiltin_Lean_Elab_Do_expandDoFor__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_For_0__Lean_Elab_Do_elabDoFor___regBuiltin_Lean_Elab_Do_elabDoFor__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_BuiltinDo_For(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_BuiltinDo_Basic(uint8_t builtin);
lean_object* initialize_Lean_Parser_Do(uint8_t builtin);
lean_object* initialize_Init_Control_Do(uint8_t builtin);
lean_object* initialize_Lean_Meta_ProdN(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_BuiltinDo_For(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_BuiltinDo_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinDo_For(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_BuiltinDo_For(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_BuiltinDo_For(builtin);
}
#ifdef __cplusplus
}
#endif
