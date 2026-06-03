// Lean compiler output
// Module: Lean.Elab.Tactic.Do.Internal.VCGen.RuleConstruct.Spec
// Imports: public import Lean.Elab.Tactic.Do.Internal.VCGen.Types public import Lean.Elab.Tactic.Do.Internal.VCGen.SpecDB
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
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
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Pi_instInhabited___redArg___lam__0(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_betaRevS___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedTypeHint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_abstractMVars(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l_Lean_Meta_Sym_inferType___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_Pred(lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_instWP(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_EPred(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkStateName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkStateName___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkStateName___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkStateName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkStateName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(203, 235, 49, 11, 232, 138, 137, 74)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkStateName___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkStateName___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkStateName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkStateName___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PartialOrder"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rel"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(179, 3, 218, 237, 219, 72, 94, 177)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(41, 174, 7, 105, 99, 77, 97, 125)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__1;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__2 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__3 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__4 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__5 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9_spec__11___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9_spec__11(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9_spec__11___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "expected a postcondition function, got "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__0___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "epostImpl"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 104, 50, 22, 154, 62, 188, 48)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "EPost"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "nil_rel"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__4_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__7_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__5_value),LEAN_SCALAR_PTR_LITERAL(61, 220, 195, 28, 231, 198, 56, 30)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__7_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 41, 125, 248, 22, 83, 199, 154)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__8_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__10_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__10_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__4_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__10_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__10_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__5_value),LEAN_SCALAR_PTR_LITERAL(61, 220, 195, 28, 231, 198, 56, 30)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__10_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__10_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__8_value),LEAN_SCALAR_PTR_LITERAL(66, 168, 39, 204, 144, 61, 226, 28)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__10_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__9_value),LEAN_SCALAR_PTR_LITERAL(98, 241, 255, 45, 198, 76, 108, 146)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__10_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__12_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__12_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__4_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__12_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__12_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__5_value),LEAN_SCALAR_PTR_LITERAL(61, 220, 195, 28, 231, 198, 56, 30)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__12_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__8_value),LEAN_SCALAR_PTR_LITERAL(66, 168, 39, 204, 144, 61, 226, 28)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__12_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__14_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__14_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__4_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__14_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__14_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__5_value),LEAN_SCALAR_PTR_LITERAL(61, 220, 195, 28, 231, 198, 56, 30)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__14_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 34, 106, 80, 62, 31, 229, 248)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__14_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "head"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__16_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__16_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__4_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__16_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__16_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__5_value),LEAN_SCALAR_PTR_LITERAL(61, 220, 195, 28, 231, 198, 56, 30)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__16_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__16_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 34, 106, 80, 62, 31, 229, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__16_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__15_value),LEAN_SCALAR_PTR_LITERAL(82, 183, 21, 80, 115, 110, 210, 136)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__16 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__16_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tail"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__17_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__18_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__18_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__4_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__18_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__18_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__5_value),LEAN_SCALAR_PTR_LITERAL(61, 220, 195, 28, 231, 198, 56, 30)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__18_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__18_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 34, 106, 80, 62, 31, 229, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__18_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__17_value),LEAN_SCALAR_PTR_LITERAL(141, 242, 71, 124, 192, 159, 190, 17)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__18_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "cons_rel"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__19 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__19_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__20_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__20_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__4_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__20_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__20_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__5_value),LEAN_SCALAR_PTR_LITERAL(61, 220, 195, 28, 231, 198, 56, 30)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__20_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__19_value),LEAN_SCALAR_PTR_LITERAL(142, 56, 13, 83, 166, 173, 142, 223)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__21_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__21_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__4_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__21_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__21_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__5_value),LEAN_SCALAR_PTR_LITERAL(61, 220, 195, 28, 231, 198, 56, 30)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__21_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__21_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 34, 106, 80, 62, 31, 229, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__21_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__9_value),LEAN_SCALAR_PTR_LITERAL(138, 6, 98, 206, 152, 24, 169, 121)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__21_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "wp"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__4_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 6, 42, 106, 0, 77, 75, 237)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pre"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__2_value),LEAN_SCALAR_PTR_LITERAL(234, 68, 201, 77, 117, 184, 192, 140)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "vc"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__4_value),LEAN_SCALAR_PTR_LITERAL(55, 118, 135, 193, 0, 111, 68, 241)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "rel_trans"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(179, 3, 218, 237, 219, 72, 94, 177)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__6_value),LEAN_SCALAR_PTR_LITERAL(181, 81, 205, 152, 227, 155, 236, 97)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "epost"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__8_value),LEAN_SCALAR_PTR_LITERAL(85, 242, 133, 56, 224, 241, 177, 168)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "bot"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__10_value),LEAN_SCALAR_PTR_LITERAL(89, 51, 159, 172, 220, 225, 54, 137)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__11_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "WPMonad"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__12_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "wp_econs_rel"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__14_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__14_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__4_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__14_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__14_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__12_value),LEAN_SCALAR_PTR_LITERAL(190, 109, 201, 105, 189, 199, 3, 48)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__14_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__13_value),LEAN_SCALAR_PTR_LITERAL(155, 111, 10, 198, 72, 97, 127, 224)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__14_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "wp_econs_nil_rel"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__16_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__16_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__4_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__16_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__16_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__12_value),LEAN_SCALAR_PTR_LITERAL(190, 109, 201, 105, 189, 199, 3, 48)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__16_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__15_value),LEAN_SCALAR_PTR_LITERAL(206, 228, 101, 196, 129, 24, 148, 110)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__16 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__16_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "wp_econs_bot_rel"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__17_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__18_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__18_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__4_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__18_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__18_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__12_value),LEAN_SCALAR_PTR_LITERAL(190, 109, 201, 105, 189, 199, 3, 48)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__18_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__17_value),LEAN_SCALAR_PTR_LITERAL(22, 99, 201, 246, 187, 12, 81, 175)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__18_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "post"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__19 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__19_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__19_value),LEAN_SCALAR_PTR_LITERAL(155, 28, 93, 107, 152, 77, 110, 29)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__20_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "postImpl"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__21_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__21_value),LEAN_SCALAR_PTR_LITERAL(153, 21, 140, 219, 115, 66, 148, 196)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__22 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__22_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "wp_consequence_rel"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__23 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__23_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__24_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__24_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__4_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__24_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__24_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__12_value),LEAN_SCALAR_PTR_LITERAL(190, 109, 201, 105, 189, 199, 3, 48)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__24_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__23_value),LEAN_SCALAR_PTR_LITERAL(255, 53, 120, 46, 78, 166, 43, 19)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__24 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__24_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 41, .m_data = "target not a partial order ⊑ application "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "target not a wp application "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__3;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4___closed__0_value),((lean_object*)&l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4___closed__0_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkStateName(lean_object* v___ty_4_){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkStateName___closed__1));
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkStateName___boxed(lean_object* v___ty_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkStateName(v___ty_6_);
lean_dec_ref(v___ty_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0(lean_object* v_a_17_, lean_object* v_postSpec_18_, lean_object* v_postTarget_19_, lean_object* v_ss_x27_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; uint8_t v___x_30_; lean_object* v_lhs_31_; lean_object* v___x_32_; lean_object* v_rhs_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
lean_inc_ref(v_ss_x27_20_);
v___x_28_ = l_Array_reverse___redArg(v_ss_x27_20_);
lean_inc_ref_n(v_a_17_, 2);
v___x_29_ = lean_array_push(v___x_28_, v_a_17_);
v___x_30_ = 0;
v_lhs_31_ = l_Lean_Expr_betaRev(v_postSpec_18_, v___x_29_, v___x_30_, v___x_30_);
lean_dec_ref(v___x_29_);
v___x_32_ = l_Lean_Expr_app___override(v_postTarget_19_, v_a_17_);
v_rhs_33_ = l_Lean_mkAppN(v___x_32_, v_ss_x27_20_);
v___x_34_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__4));
v___x_35_ = lean_unsigned_to_nat(2u);
v___x_36_ = lean_mk_empty_array_with_capacity(v___x_35_);
v___x_37_ = lean_array_push(v___x_36_, v_lhs_31_);
v___x_38_ = lean_array_push(v___x_37_, v_rhs_33_);
v___x_39_ = l_Lean_Meta_mkAppM(v___x_34_, v___x_38_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
if (lean_obj_tag(v___x_39_) == 0)
{
lean_object* v_a_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; uint8_t v___x_45_; uint8_t v___x_46_; lean_object* v___x_47_; 
v_a_40_ = lean_ctor_get(v___x_39_, 0);
lean_inc(v_a_40_);
lean_dec_ref_known(v___x_39_, 1);
v___x_41_ = lean_unsigned_to_nat(1u);
v___x_42_ = lean_mk_empty_array_with_capacity(v___x_41_);
v___x_43_ = lean_array_push(v___x_42_, v_a_17_);
v___x_44_ = l_Array_append___redArg(v___x_43_, v_ss_x27_20_);
lean_dec_ref(v_ss_x27_20_);
v___x_45_ = 1;
v___x_46_ = 1;
v___x_47_ = l_Lean_Meta_mkForallFVars(v___x_44_, v_a_40_, v___x_30_, v___x_45_, v___x_45_, v___x_46_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
lean_dec_ref(v___x_44_);
return v___x_47_;
}
else
{
lean_dec_ref(v_ss_x27_20_);
lean_dec_ref(v_a_17_);
return v___x_39_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___boxed(lean_object* v_a_48_, lean_object* v_postSpec_49_, lean_object* v_postTarget_50_, lean_object* v_ss_x27_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0(v_a_48_, v_postSpec_49_, v_postTarget_50_, v_ss_x27_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_, v___y_57_);
lean_dec(v___y_57_);
lean_dec_ref(v___y_56_);
lean_dec(v___y_55_);
lean_dec_ref(v___y_54_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__0___redArg(lean_object* v_stateArgNames_60_, lean_object* v_as_61_, lean_object* v_i_62_, lean_object* v_j_63_, lean_object* v_bs_64_){
_start:
{
lean_object* v_zero_65_; uint8_t v_isZero_66_; 
v_zero_65_ = lean_unsigned_to_nat(0u);
v_isZero_66_ = lean_nat_dec_eq(v_i_62_, v_zero_65_);
if (v_isZero_66_ == 1)
{
lean_dec(v_j_63_);
lean_dec(v_i_62_);
return v_bs_64_;
}
else
{
lean_object* v_one_67_; lean_object* v_n_68_; lean_object* v___y_70_; lean_object* v___x_74_; lean_object* v___x_75_; uint8_t v___x_76_; 
v_one_67_ = lean_unsigned_to_nat(1u);
v_n_68_ = lean_nat_sub(v_i_62_, v_one_67_);
lean_dec(v_i_62_);
v___x_74_ = lean_array_fget_borrowed(v_as_61_, v_j_63_);
v___x_75_ = lean_array_get_size(v_stateArgNames_60_);
v___x_76_ = lean_nat_dec_lt(v_j_63_, v___x_75_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_77_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkStateName(v___x_74_);
lean_inc(v___x_74_);
v___x_78_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_78_, 0, v___x_77_);
lean_ctor_set(v___x_78_, 1, v___x_74_);
v___y_70_ = v___x_78_;
goto v___jp_69_;
}
else
{
lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_79_ = lean_array_fget_borrowed(v_stateArgNames_60_, v_j_63_);
lean_inc(v___x_74_);
lean_inc(v___x_79_);
v___x_80_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
lean_ctor_set(v___x_80_, 1, v___x_74_);
v___y_70_ = v___x_80_;
goto v___jp_69_;
}
v___jp_69_:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = lean_nat_add(v_j_63_, v_one_67_);
lean_dec(v_j_63_);
v___x_72_ = lean_array_push(v_bs_64_, v___y_70_);
v_i_62_ = v_n_68_;
v_j_63_ = v___x_71_;
v_bs_64_ = v___x_72_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__0___redArg___boxed(lean_object* v_stateArgNames_81_, lean_object* v_as_82_, lean_object* v_i_83_, lean_object* v_j_84_, lean_object* v_bs_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__0___redArg(v_stateArgNames_81_, v_as_82_, v_i_83_, v_j_84_, v_bs_85_);
lean_dec_ref(v_as_82_);
lean_dec_ref(v_stateArgNames_81_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___lam__0(lean_object* v___x_87_, lean_object* v_a_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_){
_start:
{
lean_object* v___x_96_; lean_object* v___x_5766__overap_97_; lean_object* v___x_98_; 
v___x_96_ = l_Lean_instInhabitedExpr;
v___x_5766__overap_97_ = l_instInhabitedOfMonad___redArg(v___x_87_, v___x_96_);
lean_inc(v___y_94_);
lean_inc_ref(v___y_93_);
lean_inc(v___y_92_);
lean_inc_ref(v___y_91_);
lean_inc(v___y_90_);
lean_inc_ref(v___y_89_);
v___x_98_ = lean_apply_7(v___x_5766__overap_97_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, lean_box(0));
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___lam__0___boxed(lean_object* v___x_99_, lean_object* v_a_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___lam__0(v___x_99_, v_a_100_, v___y_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_);
lean_dec(v___y_106_);
lean_dec_ref(v___y_105_);
lean_dec(v___y_104_);
lean_dec_ref(v___y_103_);
lean_dec(v___y_102_);
lean_dec_ref(v___y_101_);
lean_dec_ref(v_a_100_);
return v_res_108_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__0(void){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = l_instMonadEIO(lean_box(0));
return v___x_109_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__1(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__0, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__0_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__0);
v___x_111_ = l_StateRefT_x27_instMonad___redArg(v___x_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9_spec__11___lam__0___boxed(lean_object* v_acc_116_, lean_object* v_declInfos_117_, lean_object* v_k_118_, lean_object* v_kind_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v_b_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_){
_start:
{
uint8_t v_kind_boxed_128_; lean_object* v_res_129_; 
v_kind_boxed_128_ = lean_unbox(v_kind_119_);
v_res_129_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9_spec__11___lam__0(v_acc_116_, v_declInfos_117_, v_k_118_, v_kind_boxed_128_, v___y_120_, v___y_121_, v_b_122_, v___y_123_, v___y_124_, v___y_125_, v___y_126_);
lean_dec(v___y_126_);
lean_dec_ref(v___y_125_);
lean_dec(v___y_124_);
lean_dec_ref(v___y_123_);
lean_dec(v___y_121_);
lean_dec_ref(v___y_120_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9_spec__11(lean_object* v_acc_130_, lean_object* v_declInfos_131_, lean_object* v_k_132_, uint8_t v_kind_133_, lean_object* v_name_134_, uint8_t v_bi_135_, lean_object* v_type_136_, uint8_t v_kind_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_){
_start:
{
lean_object* v___x_145_; lean_object* v___f_146_; lean_object* v___x_147_; 
v___x_145_ = lean_box(v_kind_133_);
lean_inc(v___y_139_);
lean_inc_ref(v___y_138_);
v___f_146_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9_spec__11___lam__0___boxed), 12, 6);
lean_closure_set(v___f_146_, 0, v_acc_130_);
lean_closure_set(v___f_146_, 1, v_declInfos_131_);
lean_closure_set(v___f_146_, 2, v_k_132_);
lean_closure_set(v___f_146_, 3, v___x_145_);
lean_closure_set(v___f_146_, 4, v___y_138_);
lean_closure_set(v___f_146_, 5, v___y_139_);
v___x_147_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_134_, v_bi_135_, v_type_136_, v___f_146_, v_kind_137_, v___y_140_, v___y_141_, v___y_142_, v___y_143_);
if (lean_obj_tag(v___x_147_) == 0)
{
return v___x_147_;
}
else
{
lean_object* v_a_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_155_; 
v_a_148_ = lean_ctor_get(v___x_147_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_147_);
if (v_isSharedCheck_155_ == 0)
{
v___x_150_ = v___x_147_;
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_a_148_);
lean_dec(v___x_147_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_153_; 
if (v_isShared_151_ == 0)
{
v___x_153_ = v___x_150_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_a_148_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9(lean_object* v_declInfos_156_, lean_object* v_k_157_, uint8_t v_kind_158_, lean_object* v_acc_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
lean_object* v___x_167_; lean_object* v_toApplicative_168_; lean_object* v_toFunctor_169_; lean_object* v_toSeq_170_; lean_object* v_toSeqLeft_171_; lean_object* v_toSeqRight_172_; lean_object* v___f_173_; lean_object* v___f_174_; lean_object* v___f_175_; lean_object* v___f_176_; lean_object* v___x_177_; lean_object* v___f_178_; lean_object* v___f_179_; lean_object* v___f_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v_toApplicative_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_233_; 
v___x_167_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__1, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__1_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__1);
v_toApplicative_168_ = lean_ctor_get(v___x_167_, 0);
v_toFunctor_169_ = lean_ctor_get(v_toApplicative_168_, 0);
v_toSeq_170_ = lean_ctor_get(v_toApplicative_168_, 2);
v_toSeqLeft_171_ = lean_ctor_get(v_toApplicative_168_, 3);
v_toSeqRight_172_ = lean_ctor_get(v_toApplicative_168_, 4);
v___f_173_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__2));
v___f_174_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__3));
lean_inc_ref_n(v_toFunctor_169_, 2);
v___f_175_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_175_, 0, v_toFunctor_169_);
v___f_176_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_176_, 0, v_toFunctor_169_);
v___x_177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_177_, 0, v___f_175_);
lean_ctor_set(v___x_177_, 1, v___f_176_);
lean_inc(v_toSeqRight_172_);
v___f_178_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_178_, 0, v_toSeqRight_172_);
lean_inc(v_toSeqLeft_171_);
v___f_179_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_179_, 0, v_toSeqLeft_171_);
lean_inc(v_toSeq_170_);
v___f_180_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_180_, 0, v_toSeq_170_);
v___x_181_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_181_, 0, v___x_177_);
lean_ctor_set(v___x_181_, 1, v___f_173_);
lean_ctor_set(v___x_181_, 2, v___f_180_);
lean_ctor_set(v___x_181_, 3, v___f_179_);
lean_ctor_set(v___x_181_, 4, v___f_178_);
v___x_182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
lean_ctor_set(v___x_182_, 1, v___f_174_);
v___x_183_ = l_StateRefT_x27_instMonad___redArg(v___x_182_);
v_toApplicative_184_ = lean_ctor_get(v___x_183_, 0);
v_isSharedCheck_233_ = !lean_is_exclusive(v___x_183_);
if (v_isSharedCheck_233_ == 0)
{
lean_object* v_unused_234_; 
v_unused_234_ = lean_ctor_get(v___x_183_, 1);
lean_dec(v_unused_234_);
v___x_186_ = v___x_183_;
v_isShared_187_ = v_isSharedCheck_233_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_toApplicative_184_);
lean_dec(v___x_183_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_233_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v_toFunctor_188_; lean_object* v_toSeq_189_; lean_object* v_toSeqLeft_190_; lean_object* v_toSeqRight_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_231_; 
v_toFunctor_188_ = lean_ctor_get(v_toApplicative_184_, 0);
v_toSeq_189_ = lean_ctor_get(v_toApplicative_184_, 2);
v_toSeqLeft_190_ = lean_ctor_get(v_toApplicative_184_, 3);
v_toSeqRight_191_ = lean_ctor_get(v_toApplicative_184_, 4);
v_isSharedCheck_231_ = !lean_is_exclusive(v_toApplicative_184_);
if (v_isSharedCheck_231_ == 0)
{
lean_object* v_unused_232_; 
v_unused_232_ = lean_ctor_get(v_toApplicative_184_, 1);
lean_dec(v_unused_232_);
v___x_193_ = v_toApplicative_184_;
v_isShared_194_ = v_isSharedCheck_231_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_toSeqRight_191_);
lean_inc(v_toSeqLeft_190_);
lean_inc(v_toSeq_189_);
lean_inc(v_toFunctor_188_);
lean_dec(v_toApplicative_184_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_231_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v___f_195_; lean_object* v___f_196_; lean_object* v___f_197_; lean_object* v___f_198_; lean_object* v___x_199_; lean_object* v___f_200_; lean_object* v___f_201_; lean_object* v___f_202_; lean_object* v___x_204_; 
v___f_195_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__4));
v___f_196_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___closed__5));
lean_inc_ref(v_toFunctor_188_);
v___f_197_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_197_, 0, v_toFunctor_188_);
v___f_198_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_198_, 0, v_toFunctor_188_);
v___x_199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_199_, 0, v___f_197_);
lean_ctor_set(v___x_199_, 1, v___f_198_);
v___f_200_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_200_, 0, v_toSeqRight_191_);
v___f_201_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_201_, 0, v_toSeqLeft_190_);
v___f_202_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_202_, 0, v_toSeq_189_);
if (v_isShared_194_ == 0)
{
lean_ctor_set(v___x_193_, 4, v___f_200_);
lean_ctor_set(v___x_193_, 3, v___f_201_);
lean_ctor_set(v___x_193_, 2, v___f_202_);
lean_ctor_set(v___x_193_, 1, v___f_195_);
lean_ctor_set(v___x_193_, 0, v___x_199_);
v___x_204_ = v___x_193_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v___x_199_);
lean_ctor_set(v_reuseFailAlloc_230_, 1, v___f_195_);
lean_ctor_set(v_reuseFailAlloc_230_, 2, v___f_202_);
lean_ctor_set(v_reuseFailAlloc_230_, 3, v___f_201_);
lean_ctor_set(v_reuseFailAlloc_230_, 4, v___f_200_);
v___x_204_ = v_reuseFailAlloc_230_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
lean_object* v___x_206_; 
if (v_isShared_187_ == 0)
{
lean_ctor_set(v___x_186_, 1, v___f_196_);
lean_ctor_set(v___x_186_, 0, v___x_204_);
v___x_206_ = v___x_186_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v___x_204_);
lean_ctor_set(v_reuseFailAlloc_229_, 1, v___f_196_);
v___x_206_ = v_reuseFailAlloc_229_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; uint8_t v___x_211_; 
v___x_207_ = l_StateRefT_x27_instMonad___redArg(v___x_206_);
v___x_208_ = l_ReaderT_instMonad___redArg(v___x_207_);
v___x_209_ = lean_array_get_size(v_acc_159_);
v___x_210_ = lean_array_get_size(v_declInfos_156_);
v___x_211_ = lean_nat_dec_lt(v___x_209_, v___x_210_);
if (v___x_211_ == 0)
{
lean_object* v___x_212_; 
lean_dec_ref(v___x_208_);
lean_dec_ref(v_declInfos_156_);
lean_inc(v___y_165_);
lean_inc_ref(v___y_164_);
lean_inc(v___y_163_);
lean_inc_ref(v___y_162_);
lean_inc(v___y_161_);
lean_inc_ref(v___y_160_);
v___x_212_ = lean_apply_8(v_k_157_, v_acc_159_, v___y_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_, lean_box(0));
return v___x_212_;
}
else
{
lean_object* v___f_213_; lean_object* v___x_214_; uint8_t v___x_215_; lean_object* v___f_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v_snd_221_; lean_object* v_fst_222_; lean_object* v_fst_223_; lean_object* v_snd_224_; lean_object* v___x_225_; 
v___f_213_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___lam__0___boxed), 9, 1);
lean_closure_set(v___f_213_, 0, v___x_208_);
v___x_214_ = lean_box(0);
v___x_215_ = 0;
v___f_216_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_216_, 0, v___f_213_);
v___x_217_ = lean_box(v___x_215_);
v___x_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
lean_ctor_set(v___x_218_, 1, v___f_216_);
v___x_219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_219_, 0, v___x_214_);
lean_ctor_set(v___x_219_, 1, v___x_218_);
v___x_220_ = lean_array_get(v___x_219_, v_declInfos_156_, v___x_209_);
lean_dec_ref_known(v___x_219_, 2);
v_snd_221_ = lean_ctor_get(v___x_220_, 1);
lean_inc(v_snd_221_);
v_fst_222_ = lean_ctor_get(v___x_220_, 0);
lean_inc(v_fst_222_);
lean_dec(v___x_220_);
v_fst_223_ = lean_ctor_get(v_snd_221_, 0);
lean_inc(v_fst_223_);
v_snd_224_ = lean_ctor_get(v_snd_221_, 1);
lean_inc(v_snd_224_);
lean_dec(v_snd_221_);
lean_inc(v___y_165_);
lean_inc_ref(v___y_164_);
lean_inc(v___y_163_);
lean_inc_ref(v___y_162_);
lean_inc(v___y_161_);
lean_inc_ref(v___y_160_);
lean_inc_ref(v_acc_159_);
v___x_225_ = lean_apply_8(v_snd_224_, v_acc_159_, v___y_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_, lean_box(0));
if (lean_obj_tag(v___x_225_) == 0)
{
lean_object* v_a_226_; uint8_t v___x_227_; lean_object* v___x_228_; 
v_a_226_ = lean_ctor_get(v___x_225_, 0);
lean_inc(v_a_226_);
lean_dec_ref_known(v___x_225_, 1);
v___x_227_ = lean_unbox(v_fst_223_);
lean_dec(v_fst_223_);
v___x_228_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9_spec__11(v_acc_159_, v_declInfos_156_, v_k_157_, v_kind_158_, v_fst_222_, v___x_227_, v_a_226_, v_kind_158_, v___y_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_);
return v___x_228_;
}
else
{
lean_dec(v_fst_223_);
lean_dec(v_fst_222_);
lean_dec_ref(v_acc_159_);
lean_dec_ref(v_k_157_);
lean_dec_ref(v_declInfos_156_);
return v___x_225_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9_spec__11___lam__0(lean_object* v_acc_235_, lean_object* v_declInfos_236_, lean_object* v_k_237_, uint8_t v_kind_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v_b_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_247_ = lean_array_push(v_acc_235_, v_b_241_);
v___x_248_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9(v_declInfos_236_, v_k_237_, v_kind_238_, v___x_247_, v___y_239_, v___y_240_, v___y_242_, v___y_243_, v___y_244_, v___y_245_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9_spec__11___boxed(lean_object* v_acc_249_, lean_object* v_declInfos_250_, lean_object* v_k_251_, lean_object* v_kind_252_, lean_object* v_name_253_, lean_object* v_bi_254_, lean_object* v_type_255_, lean_object* v_kind_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_){
_start:
{
uint8_t v_kind_boxed_264_; uint8_t v_bi_boxed_265_; uint8_t v_kind_boxed_266_; lean_object* v_res_267_; 
v_kind_boxed_264_ = lean_unbox(v_kind_252_);
v_bi_boxed_265_ = lean_unbox(v_bi_254_);
v_kind_boxed_266_ = lean_unbox(v_kind_256_);
v_res_267_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9_spec__11(v_acc_249_, v_declInfos_250_, v_k_251_, v_kind_boxed_264_, v_name_253_, v_bi_boxed_265_, v_type_255_, v_kind_boxed_266_, v___y_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
lean_dec(v___y_260_);
lean_dec_ref(v___y_259_);
lean_dec(v___y_258_);
lean_dec_ref(v___y_257_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9___boxed(lean_object* v_declInfos_268_, lean_object* v_k_269_, lean_object* v_kind_270_, lean_object* v_acc_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_){
_start:
{
uint8_t v_kind_boxed_279_; lean_object* v_res_280_; 
v_kind_boxed_279_ = lean_unbox(v_kind_270_);
v_res_280_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9(v_declInfos_268_, v_k_269_, v_kind_boxed_279_, v_acc_271_, v___y_272_, v___y_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_);
lean_dec(v___y_277_);
lean_dec_ref(v___y_276_);
lean_dec(v___y_275_);
lean_dec_ref(v___y_274_);
lean_dec(v___y_273_);
lean_dec_ref(v___y_272_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4(lean_object* v_declInfos_283_, lean_object* v_k_284_, uint8_t v_kind_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_293_ = ((lean_object*)(l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4___closed__0));
v___x_294_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4_spec__9(v_declInfos_283_, v_k_284_, v_kind_285_, v___x_293_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_, v___y_291_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4___boxed(lean_object* v_declInfos_295_, lean_object* v_k_296_, lean_object* v_kind_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_){
_start:
{
uint8_t v_kind_boxed_305_; lean_object* v_res_306_; 
v_kind_boxed_305_ = lean_unbox(v_kind_297_);
v_res_306_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4(v_declInfos_295_, v_k_296_, v_kind_boxed_305_, v___y_298_, v___y_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_);
lean_dec(v___y_303_);
lean_dec_ref(v___y_302_);
lean_dec(v___y_301_);
lean_dec_ref(v___y_300_);
lean_dec(v___y_299_);
lean_dec_ref(v___y_298_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__3(size_t v_sz_307_, size_t v_i_308_, lean_object* v_bs_309_){
_start:
{
uint8_t v___x_310_; 
v___x_310_ = lean_usize_dec_lt(v_i_308_, v_sz_307_);
if (v___x_310_ == 0)
{
return v_bs_309_;
}
else
{
lean_object* v_v_311_; lean_object* v_fst_312_; lean_object* v_snd_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_329_; 
v_v_311_ = lean_array_uget(v_bs_309_, v_i_308_);
v_fst_312_ = lean_ctor_get(v_v_311_, 0);
v_snd_313_ = lean_ctor_get(v_v_311_, 1);
v_isSharedCheck_329_ = !lean_is_exclusive(v_v_311_);
if (v_isSharedCheck_329_ == 0)
{
v___x_315_ = v_v_311_;
v_isShared_316_ = v_isSharedCheck_329_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_snd_313_);
lean_inc(v_fst_312_);
lean_dec(v_v_311_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_329_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_317_; lean_object* v_bs_x27_318_; uint8_t v___x_319_; lean_object* v___x_320_; lean_object* v___x_322_; 
v___x_317_ = lean_unsigned_to_nat(0u);
v_bs_x27_318_ = lean_array_uset(v_bs_309_, v_i_308_, v___x_317_);
v___x_319_ = 0;
v___x_320_ = lean_box(v___x_319_);
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 0, v___x_320_);
v___x_322_ = v___x_315_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v___x_320_);
lean_ctor_set(v_reuseFailAlloc_328_, 1, v_snd_313_);
v___x_322_ = v_reuseFailAlloc_328_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
lean_object* v___x_323_; size_t v___x_324_; size_t v___x_325_; lean_object* v___x_326_; 
v___x_323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_323_, 0, v_fst_312_);
lean_ctor_set(v___x_323_, 1, v___x_322_);
v___x_324_ = ((size_t)1ULL);
v___x_325_ = lean_usize_add(v_i_308_, v___x_324_);
v___x_326_ = lean_array_uset(v_bs_x27_318_, v_i_308_, v___x_323_);
v_i_308_ = v___x_325_;
v_bs_309_ = v___x_326_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_330_, lean_object* v_i_331_, lean_object* v_bs_332_){
_start:
{
size_t v_sz_boxed_333_; size_t v_i_boxed_334_; lean_object* v_res_335_; 
v_sz_boxed_333_ = lean_unbox_usize(v_sz_330_);
lean_dec(v_sz_330_);
v_i_boxed_334_ = lean_unbox_usize(v_i_331_);
lean_dec(v_i_331_);
v_res_335_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__3(v_sz_boxed_333_, v_i_boxed_334_, v_bs_332_);
return v_res_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2(lean_object* v_declInfos_336_, lean_object* v_k_337_, uint8_t v_kind_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_){
_start:
{
size_t v_sz_346_; size_t v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v_sz_346_ = lean_array_size(v_declInfos_336_);
v___x_347_ = ((size_t)0ULL);
v___x_348_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__3(v_sz_346_, v___x_347_, v_declInfos_336_);
v___x_349_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2_spec__4(v___x_348_, v_k_337_, v_kind_338_, v___y_339_, v___y_340_, v___y_341_, v___y_342_, v___y_343_, v___y_344_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2___boxed(lean_object* v_declInfos_350_, lean_object* v_k_351_, lean_object* v_kind_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_){
_start:
{
uint8_t v_kind_boxed_360_; lean_object* v_res_361_; 
v_kind_boxed_360_ = lean_unbox(v_kind_352_);
v_res_361_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2(v_declInfos_350_, v_k_351_, v_kind_boxed_360_, v___y_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_, v___y_358_);
lean_dec(v___y_358_);
lean_dec_ref(v___y_357_);
lean_dec(v___y_356_);
lean_dec_ref(v___y_355_);
lean_dec(v___y_354_);
lean_dec_ref(v___y_353_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__1___lam__0(lean_object* v_snd_362_, lean_object* v_x_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_371_, 0, v_snd_362_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__1___lam__0___boxed(lean_object* v_snd_372_, lean_object* v_x_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__1___lam__0(v_snd_372_, v_x_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
lean_dec_ref(v_x_373_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__1(size_t v_sz_382_, size_t v_i_383_, lean_object* v_bs_384_){
_start:
{
uint8_t v___x_385_; 
v___x_385_ = lean_usize_dec_lt(v_i_383_, v_sz_382_);
if (v___x_385_ == 0)
{
return v_bs_384_;
}
else
{
lean_object* v_v_386_; lean_object* v_fst_387_; lean_object* v_snd_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_402_; 
v_v_386_ = lean_array_uget(v_bs_384_, v_i_383_);
v_fst_387_ = lean_ctor_get(v_v_386_, 0);
v_snd_388_ = lean_ctor_get(v_v_386_, 1);
v_isSharedCheck_402_ = !lean_is_exclusive(v_v_386_);
if (v_isSharedCheck_402_ == 0)
{
v___x_390_ = v_v_386_;
v_isShared_391_ = v_isSharedCheck_402_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_snd_388_);
lean_inc(v_fst_387_);
lean_dec(v_v_386_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_402_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v___x_392_; lean_object* v_bs_x27_393_; lean_object* v___f_394_; lean_object* v___x_396_; 
v___x_392_ = lean_unsigned_to_nat(0u);
v_bs_x27_393_ = lean_array_uset(v_bs_384_, v_i_383_, v___x_392_);
v___f_394_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__1___lam__0___boxed), 9, 1);
lean_closure_set(v___f_394_, 0, v_snd_388_);
if (v_isShared_391_ == 0)
{
lean_ctor_set(v___x_390_, 1, v___f_394_);
v___x_396_ = v___x_390_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_fst_387_);
lean_ctor_set(v_reuseFailAlloc_401_, 1, v___f_394_);
v___x_396_ = v_reuseFailAlloc_401_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
size_t v___x_397_; size_t v___x_398_; lean_object* v___x_399_; 
v___x_397_ = ((size_t)1ULL);
v___x_398_ = lean_usize_add(v_i_383_, v___x_397_);
v___x_399_ = lean_array_uset(v_bs_x27_393_, v_i_383_, v___x_396_);
v_i_383_ = v___x_398_;
v_bs_384_ = v___x_399_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__1___boxed(lean_object* v_sz_403_, lean_object* v_i_404_, lean_object* v_bs_405_){
_start:
{
size_t v_sz_boxed_406_; size_t v_i_boxed_407_; lean_object* v_res_408_; 
v_sz_boxed_406_ = lean_unbox_usize(v_sz_403_);
lean_dec(v_sz_403_);
v_i_boxed_407_ = lean_unbox_usize(v_i_404_);
lean_dec(v_i_404_);
v_res_408_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__1(v_sz_boxed_406_, v_i_boxed_407_, v_bs_405_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1(lean_object* v_declInfos_409_, lean_object* v_k_410_, uint8_t v_kind_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_){
_start:
{
size_t v_sz_419_; size_t v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v_sz_419_ = lean_array_size(v_declInfos_409_);
v___x_420_ = ((size_t)0ULL);
v___x_421_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__1(v_sz_419_, v___x_420_, v_declInfos_409_);
v___x_422_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1_spec__2(v___x_421_, v_k_410_, v_kind_411_, v___y_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_, v___y_417_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1___boxed(lean_object* v_declInfos_423_, lean_object* v_k_424_, lean_object* v_kind_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_){
_start:
{
uint8_t v_kind_boxed_433_; lean_object* v_res_434_; 
v_kind_boxed_433_ = lean_unbox(v_kind_425_);
v_res_434_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1(v_declInfos_423_, v_k_424_, v_kind_boxed_433_, v___y_426_, v___y_427_, v___y_428_, v___y_429_, v___y_430_, v___y_431_);
lean_dec(v___y_431_);
lean_dec_ref(v___y_430_);
lean_dec(v___y_429_);
lean_dec_ref(v___y_428_);
lean_dec(v___y_427_);
lean_dec_ref(v___y_426_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__1(lean_object* v_postSpec_435_, lean_object* v_postTarget_436_, lean_object* v_ssTypes_437_, lean_object* v_stateArgNames_438_, lean_object* v_a_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_){
_start:
{
lean_object* v___f_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v_ssNamesTypes_451_; uint8_t v___x_452_; lean_object* v___x_453_; 
v___f_447_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___boxed), 11, 3);
lean_closure_set(v___f_447_, 0, v_a_439_);
lean_closure_set(v___f_447_, 1, v_postSpec_435_);
lean_closure_set(v___f_447_, 2, v_postTarget_436_);
v___x_448_ = lean_array_get_size(v_ssTypes_437_);
v___x_449_ = lean_unsigned_to_nat(0u);
v___x_450_ = lean_mk_empty_array_with_capacity(v___x_448_);
v_ssNamesTypes_451_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__0___redArg(v_stateArgNames_438_, v_ssTypes_437_, v___x_448_, v___x_449_, v___x_450_);
v___x_452_ = 0;
v___x_453_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__1(v_ssNamesTypes_451_, v___f_447_, v___x_452_, v___y_440_, v___y_441_, v___y_442_, v___y_443_, v___y_444_, v___y_445_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__1___boxed(lean_object* v_postSpec_454_, lean_object* v_postTarget_455_, lean_object* v_ssTypes_456_, lean_object* v_stateArgNames_457_, lean_object* v_a_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__1(v_postSpec_454_, v_postTarget_455_, v_ssTypes_456_, v_stateArgNames_457_, v_a_458_, v___y_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_);
lean_dec(v___y_464_);
lean_dec_ref(v___y_463_);
lean_dec(v___y_462_);
lean_dec_ref(v___y_461_);
lean_dec(v___y_460_);
lean_dec_ref(v___y_459_);
lean_dec_ref(v_stateArgNames_457_);
lean_dec_ref(v_ssTypes_456_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__3_spec__6(lean_object* v_msgData_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_){
_start:
{
lean_object* v___x_473_; lean_object* v_env_474_; lean_object* v___x_475_; lean_object* v_mctx_476_; lean_object* v_lctx_477_; lean_object* v_options_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_473_ = lean_st_ref_get(v___y_471_);
v_env_474_ = lean_ctor_get(v___x_473_, 0);
lean_inc_ref(v_env_474_);
lean_dec(v___x_473_);
v___x_475_ = lean_st_ref_get(v___y_469_);
v_mctx_476_ = lean_ctor_get(v___x_475_, 0);
lean_inc_ref(v_mctx_476_);
lean_dec(v___x_475_);
v_lctx_477_ = lean_ctor_get(v___y_468_, 2);
v_options_478_ = lean_ctor_get(v___y_470_, 2);
lean_inc_ref(v_options_478_);
lean_inc_ref(v_lctx_477_);
v___x_479_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_479_, 0, v_env_474_);
lean_ctor_set(v___x_479_, 1, v_mctx_476_);
lean_ctor_set(v___x_479_, 2, v_lctx_477_);
lean_ctor_set(v___x_479_, 3, v_options_478_);
v___x_480_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
lean_ctor_set(v___x_480_, 1, v_msgData_467_);
v___x_481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_481_, 0, v___x_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__3_spec__6___boxed(lean_object* v_msgData_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__3_spec__6(v_msgData_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_);
lean_dec(v___y_486_);
lean_dec_ref(v___y_485_);
lean_dec(v___y_484_);
lean_dec_ref(v___y_483_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__3___redArg(lean_object* v_msg_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_){
_start:
{
lean_object* v_ref_495_; lean_object* v___x_496_; lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_505_; 
v_ref_495_ = lean_ctor_get(v___y_492_, 5);
v___x_496_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__3_spec__6(v_msg_489_, v___y_490_, v___y_491_, v___y_492_, v___y_493_);
v_a_497_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_505_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_505_ == 0)
{
v___x_499_ = v___x_496_;
v_isShared_500_ = v_isSharedCheck_505_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v___x_496_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_505_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_501_; lean_object* v___x_503_; 
lean_inc(v_ref_495_);
v___x_501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_501_, 0, v_ref_495_);
lean_ctor_set(v___x_501_, 1, v_a_497_);
if (v_isShared_500_ == 0)
{
lean_ctor_set_tag(v___x_499_, 1);
lean_ctor_set(v___x_499_, 0, v___x_501_);
v___x_503_ = v___x_499_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v___x_501_);
v___x_503_ = v_reuseFailAlloc_504_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
return v___x_503_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__3___redArg___boxed(lean_object* v_msg_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_){
_start:
{
lean_object* v_res_512_; 
v_res_512_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__3___redArg(v_msg_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_);
lean_dec(v___y_510_);
lean_dec_ref(v___y_509_);
lean_dec(v___y_508_);
lean_dec_ref(v___y_507_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___redArg___lam__0(lean_object* v_k_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v_b_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_){
_start:
{
lean_object* v___x_522_; 
lean_inc(v___y_520_);
lean_inc_ref(v___y_519_);
lean_inc(v___y_518_);
lean_inc_ref(v___y_517_);
lean_inc(v___y_515_);
lean_inc_ref(v___y_514_);
v___x_522_ = lean_apply_8(v_k_513_, v_b_516_, v___y_514_, v___y_515_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, lean_box(0));
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___redArg___lam__0___boxed(lean_object* v_k_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v_b_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___redArg___lam__0(v_k_523_, v___y_524_, v___y_525_, v_b_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
lean_dec(v___y_530_);
lean_dec_ref(v___y_529_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_525_);
lean_dec_ref(v___y_524_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___redArg(lean_object* v_name_533_, uint8_t v_bi_534_, lean_object* v_type_535_, lean_object* v_k_536_, uint8_t v_kind_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_){
_start:
{
lean_object* v___f_545_; lean_object* v___x_546_; 
lean_inc(v___y_539_);
lean_inc_ref(v___y_538_);
v___f_545_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_545_, 0, v_k_536_);
lean_closure_set(v___f_545_, 1, v___y_538_);
lean_closure_set(v___f_545_, 2, v___y_539_);
v___x_546_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_533_, v_bi_534_, v_type_535_, v___f_545_, v_kind_537_, v___y_540_, v___y_541_, v___y_542_, v___y_543_);
if (lean_obj_tag(v___x_546_) == 0)
{
return v___x_546_;
}
else
{
lean_object* v_a_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_554_; 
v_a_547_ = lean_ctor_get(v___x_546_, 0);
v_isSharedCheck_554_ = !lean_is_exclusive(v___x_546_);
if (v_isSharedCheck_554_ == 0)
{
v___x_549_ = v___x_546_;
v_isShared_550_ = v_isSharedCheck_554_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_a_547_);
lean_dec(v___x_546_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_554_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_552_; 
if (v_isShared_550_ == 0)
{
v___x_552_ = v___x_549_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v_a_547_);
v___x_552_ = v_reuseFailAlloc_553_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
return v___x_552_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___redArg___boxed(lean_object* v_name_555_, lean_object* v_bi_556_, lean_object* v_type_557_, lean_object* v_k_558_, lean_object* v_kind_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_){
_start:
{
uint8_t v_bi_boxed_567_; uint8_t v_kind_boxed_568_; lean_object* v_res_569_; 
v_bi_boxed_567_ = lean_unbox(v_bi_556_);
v_kind_boxed_568_ = lean_unbox(v_kind_559_);
v_res_569_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___redArg(v_name_555_, v_bi_boxed_567_, v_type_557_, v_k_558_, v_kind_boxed_568_, v___y_560_, v___y_561_, v___y_562_, v___y_563_, v___y_564_, v___y_565_);
lean_dec(v___y_565_);
lean_dec_ref(v___y_564_);
lean_dec(v___y_563_);
lean_dec_ref(v___y_562_);
lean_dec(v___y_561_);
lean_dec_ref(v___y_560_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2___redArg(lean_object* v_name_570_, lean_object* v_type_571_, lean_object* v_k_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_){
_start:
{
uint8_t v___x_580_; uint8_t v___x_581_; lean_object* v___x_582_; 
v___x_580_ = 0;
v___x_581_ = 0;
v___x_582_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___redArg(v_name_570_, v___x_580_, v_type_571_, v_k_572_, v___x_581_, v___y_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_, v___y_578_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2___redArg___boxed(lean_object* v_name_583_, lean_object* v_type_584_, lean_object* v_k_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2___redArg(v_name_583_, v_type_584_, v_k_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_);
lean_dec(v___y_591_);
lean_dec_ref(v___y_590_);
lean_dec(v___y_589_);
lean_dec_ref(v___y_588_);
lean_dec(v___y_587_);
lean_dec_ref(v___y_586_);
return v_res_593_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___closed__3(void){
_start:
{
lean_object* v___x_598_; lean_object* v___x_599_; 
v___x_598_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___closed__2));
v___x_599_ = l_Lean_stringToMessageData(v___x_598_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise(lean_object* v_postSpec_600_, lean_object* v_postTarget_601_, lean_object* v_postTy_602_, lean_object* v_ssTypes_603_, lean_object* v_stateArgNames_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_){
_start:
{
if (lean_obj_tag(v_postTy_602_) == 7)
{
lean_object* v_binderType_612_; lean_object* v___f_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v_binderType_612_ = lean_ctor_get(v_postTy_602_, 1);
lean_inc_ref(v_binderType_612_);
lean_dec_ref_known(v_postTy_602_, 3);
v___f_613_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__1___boxed), 12, 4);
lean_closure_set(v___f_613_, 0, v_postSpec_600_);
lean_closure_set(v___f_613_, 1, v_postTarget_601_);
lean_closure_set(v___f_613_, 2, v_ssTypes_603_);
lean_closure_set(v___f_613_, 3, v_stateArgNames_604_);
v___x_614_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___closed__1));
v___x_615_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2___redArg(v___x_614_, v_binderType_612_, v___f_613_, v_a_605_, v_a_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_);
return v___x_615_;
}
else
{
lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
lean_dec_ref(v_stateArgNames_604_);
lean_dec_ref(v_ssTypes_603_);
lean_dec_ref(v_postTarget_601_);
lean_dec_ref(v_postSpec_600_);
v___x_616_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___closed__3, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___closed__3_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___closed__3);
v___x_617_ = l_Lean_indentExpr(v_postTy_602_);
v___x_618_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_618_, 0, v___x_616_);
lean_ctor_set(v___x_618_, 1, v___x_617_);
v___x_619_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__3___redArg(v___x_618_, v_a_607_, v_a_608_, v_a_609_, v_a_610_);
return v___x_619_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___boxed(lean_object* v_postSpec_620_, lean_object* v_postTarget_621_, lean_object* v_postTy_622_, lean_object* v_ssTypes_623_, lean_object* v_stateArgNames_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_, lean_object* v_a_631_){
_start:
{
lean_object* v_res_632_; 
v_res_632_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise(v_postSpec_620_, v_postTarget_621_, v_postTy_622_, v_ssTypes_623_, v_stateArgNames_624_, v_a_625_, v_a_626_, v_a_627_, v_a_628_, v_a_629_, v_a_630_);
lean_dec(v_a_630_);
lean_dec_ref(v_a_629_);
lean_dec(v_a_628_);
lean_dec_ref(v_a_627_);
lean_dec(v_a_626_);
lean_dec_ref(v_a_625_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__0(lean_object* v_stateArgNames_633_, lean_object* v_as_634_, lean_object* v_i_635_, lean_object* v_j_636_, lean_object* v_inv_637_, lean_object* v_bs_638_){
_start:
{
lean_object* v___x_639_; 
v___x_639_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__0___redArg(v_stateArgNames_633_, v_as_634_, v_i_635_, v_j_636_, v_bs_638_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__0___boxed(lean_object* v_stateArgNames_640_, lean_object* v_as_641_, lean_object* v_i_642_, lean_object* v_j_643_, lean_object* v_inv_644_, lean_object* v_bs_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__0(v_stateArgNames_640_, v_as_641_, v_i_642_, v_j_643_, v_inv_644_, v_bs_645_);
lean_dec_ref(v_as_641_);
lean_dec_ref(v_stateArgNames_640_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4(lean_object* v_00_u03b1_647_, lean_object* v_name_648_, uint8_t v_bi_649_, lean_object* v_type_650_, lean_object* v_k_651_, uint8_t v_kind_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_){
_start:
{
lean_object* v___x_660_; 
v___x_660_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___redArg(v_name_648_, v_bi_649_, v_type_650_, v_k_651_, v_kind_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4___boxed(lean_object* v_00_u03b1_661_, lean_object* v_name_662_, lean_object* v_bi_663_, lean_object* v_type_664_, lean_object* v_k_665_, lean_object* v_kind_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_){
_start:
{
uint8_t v_bi_boxed_674_; uint8_t v_kind_boxed_675_; lean_object* v_res_676_; 
v_bi_boxed_674_ = lean_unbox(v_bi_663_);
v_kind_boxed_675_ = lean_unbox(v_kind_666_);
v_res_676_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2_spec__4(v_00_u03b1_661_, v_name_662_, v_bi_boxed_674_, v_type_664_, v_k_665_, v_kind_boxed_675_, v___y_667_, v___y_668_, v___y_669_, v___y_670_, v___y_671_, v___y_672_);
lean_dec(v___y_672_);
lean_dec_ref(v___y_671_);
lean_dec(v___y_670_);
lean_dec_ref(v___y_669_);
lean_dec(v___y_668_);
lean_dec_ref(v___y_667_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2(lean_object* v_00_u03b1_677_, lean_object* v_name_678_, lean_object* v_type_679_, lean_object* v_k_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_){
_start:
{
lean_object* v___x_688_; 
v___x_688_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2___redArg(v_name_678_, v_type_679_, v_k_680_, v___y_681_, v___y_682_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2___boxed(lean_object* v_00_u03b1_689_, lean_object* v_name_690_, lean_object* v_type_691_, lean_object* v_k_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_){
_start:
{
lean_object* v_res_700_; 
v_res_700_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__2(v_00_u03b1_689_, v_name_690_, v_type_691_, v_k_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_);
lean_dec(v___y_698_);
lean_dec_ref(v___y_697_);
lean_dec(v___y_696_);
lean_dec_ref(v___y_695_);
lean_dec(v___y_694_);
lean_dec_ref(v___y_693_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__3(lean_object* v_00_u03b1_701_, lean_object* v_msg_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_){
_start:
{
lean_object* v___x_710_; 
v___x_710_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__3___redArg(v_msg_702_, v___y_705_, v___y_706_, v___y_707_, v___y_708_);
return v___x_710_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__3___boxed(lean_object* v_00_u03b1_711_, lean_object* v_msg_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__3(v_00_u03b1_711_, v_msg_712_, v___y_713_, v___y_714_, v___y_715_, v___y_716_, v___y_717_, v___y_718_);
lean_dec(v___y_718_);
lean_dec_ref(v___y_717_);
lean_dec(v___y_716_);
lean_dec_ref(v___y_715_);
lean_dec(v___y_714_);
lean_dec_ref(v___y_713_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__1___redArg___lam__0(lean_object* v_k_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v_b_724_, lean_object* v_c_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_){
_start:
{
lean_object* v___x_731_; 
lean_inc(v___y_729_);
lean_inc_ref(v___y_728_);
lean_inc(v___y_727_);
lean_inc_ref(v___y_726_);
lean_inc(v___y_723_);
lean_inc_ref(v___y_722_);
v___x_731_ = lean_apply_9(v_k_721_, v_b_724_, v_c_725_, v___y_722_, v___y_723_, v___y_726_, v___y_727_, v___y_728_, v___y_729_, lean_box(0));
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__1___redArg___lam__0___boxed(lean_object* v_k_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v_b_735_, lean_object* v_c_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_){
_start:
{
lean_object* v_res_742_; 
v_res_742_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__1___redArg___lam__0(v_k_732_, v___y_733_, v___y_734_, v_b_735_, v_c_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_);
lean_dec(v___y_740_);
lean_dec_ref(v___y_739_);
lean_dec(v___y_738_);
lean_dec_ref(v___y_737_);
lean_dec(v___y_734_);
lean_dec_ref(v___y_733_);
return v_res_742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__1___redArg(lean_object* v_type_743_, lean_object* v_k_744_, uint8_t v_cleanupAnnotations_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_){
_start:
{
lean_object* v___f_753_; uint8_t v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
lean_inc(v___y_747_);
lean_inc_ref(v___y_746_);
v___f_753_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__1___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_753_, 0, v_k_744_);
lean_closure_set(v___f_753_, 1, v___y_746_);
lean_closure_set(v___f_753_, 2, v___y_747_);
v___x_754_ = 0;
v___x_755_ = lean_box(0);
v___x_756_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_754_, v___x_755_, v_type_743_, v___f_753_, v_cleanupAnnotations_745_, v___x_754_, v___y_748_, v___y_749_, v___y_750_, v___y_751_);
if (lean_obj_tag(v___x_756_) == 0)
{
return v___x_756_;
}
else
{
lean_object* v_a_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_764_; 
v_a_757_ = lean_ctor_get(v___x_756_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_764_ == 0)
{
v___x_759_ = v___x_756_;
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_a_757_);
lean_dec(v___x_756_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_762_; 
if (v_isShared_760_ == 0)
{
v___x_762_ = v___x_759_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_a_757_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__1___redArg___boxed(lean_object* v_type_765_, lean_object* v_k_766_, lean_object* v_cleanupAnnotations_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_775_; lean_object* v_res_776_; 
v_cleanupAnnotations_boxed_775_ = lean_unbox(v_cleanupAnnotations_767_);
v_res_776_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__1___redArg(v_type_765_, v_k_766_, v_cleanupAnnotations_boxed_775_, v___y_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_, v___y_773_);
lean_dec(v___y_773_);
lean_dec_ref(v___y_772_);
lean_dec(v___y_771_);
lean_dec_ref(v___y_770_);
lean_dec(v___y_769_);
lean_dec_ref(v___y_768_);
return v_res_776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__1(lean_object* v_00_u03b1_777_, lean_object* v_type_778_, lean_object* v_k_779_, uint8_t v_cleanupAnnotations_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_){
_start:
{
lean_object* v___x_788_; 
v___x_788_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__1___redArg(v_type_778_, v_k_779_, v_cleanupAnnotations_780_, v___y_781_, v___y_782_, v___y_783_, v___y_784_, v___y_785_, v___y_786_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__1___boxed(lean_object* v_00_u03b1_789_, lean_object* v_type_790_, lean_object* v_k_791_, lean_object* v_cleanupAnnotations_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_800_; lean_object* v_res_801_; 
v_cleanupAnnotations_boxed_800_ = lean_unbox(v_cleanupAnnotations_792_);
v_res_801_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__1(v_00_u03b1_789_, v_type_790_, v_k_791_, v_cleanupAnnotations_boxed_800_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_);
lean_dec(v___y_798_);
lean_dec_ref(v___y_797_);
lean_dec(v___y_796_);
lean_dec_ref(v___y_795_);
lean_dec(v___y_794_);
lean_dec_ref(v___y_793_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__0___redArg(size_t v_sz_802_, size_t v_i_803_, lean_object* v_bs_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_){
_start:
{
uint8_t v___x_810_; 
v___x_810_ = lean_usize_dec_lt(v_i_803_, v_sz_802_);
if (v___x_810_ == 0)
{
lean_object* v___x_811_; 
v___x_811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_811_, 0, v_bs_804_);
return v___x_811_;
}
else
{
lean_object* v_v_812_; lean_object* v___x_813_; 
v_v_812_ = lean_array_uget_borrowed(v_bs_804_, v_i_803_);
lean_inc(v___y_808_);
lean_inc_ref(v___y_807_);
lean_inc(v___y_806_);
lean_inc_ref(v___y_805_);
lean_inc(v_v_812_);
v___x_813_ = lean_infer_type(v_v_812_, v___y_805_, v___y_806_, v___y_807_, v___y_808_);
if (lean_obj_tag(v___x_813_) == 0)
{
lean_object* v_a_814_; lean_object* v___x_815_; lean_object* v_bs_x27_816_; size_t v___x_817_; size_t v___x_818_; lean_object* v___x_819_; 
v_a_814_ = lean_ctor_get(v___x_813_, 0);
lean_inc(v_a_814_);
lean_dec_ref_known(v___x_813_, 1);
v___x_815_ = lean_unsigned_to_nat(0u);
v_bs_x27_816_ = lean_array_uset(v_bs_804_, v_i_803_, v___x_815_);
v___x_817_ = ((size_t)1ULL);
v___x_818_ = lean_usize_add(v_i_803_, v___x_817_);
v___x_819_ = lean_array_uset(v_bs_x27_816_, v_i_803_, v_a_814_);
v_i_803_ = v___x_818_;
v_bs_804_ = v___x_819_;
goto _start;
}
else
{
lean_object* v_a_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_828_; 
lean_dec_ref(v_bs_804_);
v_a_821_ = lean_ctor_get(v___x_813_, 0);
v_isSharedCheck_828_ = !lean_is_exclusive(v___x_813_);
if (v_isSharedCheck_828_ == 0)
{
v___x_823_ = v___x_813_;
v_isShared_824_ = v_isSharedCheck_828_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_a_821_);
lean_dec(v___x_813_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_828_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v___x_826_; 
if (v_isShared_824_ == 0)
{
v___x_826_ = v___x_823_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v_a_821_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__0___redArg___boxed(lean_object* v_sz_829_, lean_object* v_i_830_, lean_object* v_bs_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_){
_start:
{
size_t v_sz_boxed_837_; size_t v_i_boxed_838_; lean_object* v_res_839_; 
v_sz_boxed_837_ = lean_unbox_usize(v_sz_829_);
lean_dec(v_sz_829_);
v_i_boxed_838_ = lean_unbox_usize(v_i_830_);
lean_dec(v_i_830_);
v_res_839_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__0___redArg(v_sz_boxed_837_, v_i_boxed_838_, v_bs_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_);
lean_dec(v___y_835_);
lean_dec_ref(v___y_834_);
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
return v_res_839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___lam__0(lean_object* v_xs_840_, lean_object* v_x_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; size_t v_sz_852_; size_t v___x_853_; lean_object* v___x_854_; 
v___x_849_ = lean_unsigned_to_nat(1u);
v___x_850_ = lean_array_get_size(v_xs_840_);
v___x_851_ = l_Array_extract___redArg(v_xs_840_, v___x_849_, v___x_850_);
v_sz_852_ = lean_array_size(v___x_851_);
v___x_853_ = ((size_t)0ULL);
v___x_854_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__0___redArg(v_sz_852_, v___x_853_, v___x_851_, v___y_844_, v___y_845_, v___y_846_, v___y_847_);
return v___x_854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___lam__0___boxed(lean_object* v_xs_855_, lean_object* v_x_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_){
_start:
{
lean_object* v_res_864_; 
v_res_864_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___lam__0(v_xs_855_, v_x_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_, v___y_861_, v___y_862_);
lean_dec(v___y_862_);
lean_dec_ref(v___y_861_);
lean_dec(v___y_860_);
lean_dec_ref(v___y_859_);
lean_dec(v___y_858_);
lean_dec_ref(v___y_857_);
lean_dec_ref(v_x_856_);
lean_dec_ref(v_xs_855_);
return v_res_864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel(lean_object* v_EPred_932_, lean_object* v_epostSpec_933_, lean_object* v_epostAbstract_934_, lean_object* v_stateArgNames_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_){
_start:
{
lean_object* v___y_944_; lean_object* v___y_945_; lean_object* v___y_946_; lean_object* v___y_947_; lean_object* v___y_966_; lean_object* v___y_967_; lean_object* v___y_968_; lean_object* v___y_969_; lean_object* v___x_975_; 
lean_inc_ref(v_epostSpec_933_);
v___x_975_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_epostSpec_933_, v_a_939_);
if (lean_obj_tag(v___x_975_) == 0)
{
lean_object* v_a_976_; lean_object* v___x_977_; lean_object* v___x_978_; uint8_t v___x_979_; 
v_a_976_ = lean_ctor_get(v___x_975_, 0);
lean_inc(v_a_976_);
lean_dec_ref_known(v___x_975_, 1);
v___x_977_ = l_Lean_Expr_cleanupAnnotations(v_a_976_);
v___x_978_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__10));
v___x_979_ = l_Lean_Expr_isConstOf(v___x_977_, v___x_978_);
if (v___x_979_ == 0)
{
lean_object* v___f_980_; lean_object* v___y_982_; lean_object* v___y_983_; lean_object* v___y_984_; lean_object* v___y_985_; lean_object* v___y_986_; lean_object* v___y_987_; uint8_t v___x_1052_; 
v___f_980_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__11));
v___x_1052_ = l_Lean_Expr_isApp(v___x_977_);
if (v___x_1052_ == 0)
{
lean_dec_ref(v___x_977_);
v___y_982_ = v_a_936_;
v___y_983_ = v_a_937_;
v___y_984_ = v_a_938_;
v___y_985_ = v_a_939_;
v___y_986_ = v_a_940_;
v___y_987_ = v_a_941_;
goto v___jp_981_;
}
else
{
lean_object* v_arg_1053_; lean_object* v___x_1054_; uint8_t v___x_1055_; 
v_arg_1053_ = lean_ctor_get(v___x_977_, 1);
lean_inc_ref(v_arg_1053_);
v___x_1054_ = l_Lean_Expr_appFnCleanup___redArg(v___x_977_);
v___x_1055_ = l_Lean_Expr_isApp(v___x_1054_);
if (v___x_1055_ == 0)
{
lean_dec_ref(v___x_1054_);
lean_dec_ref(v_arg_1053_);
v___y_982_ = v_a_936_;
v___y_983_ = v_a_937_;
v___y_984_ = v_a_938_;
v___y_985_ = v_a_939_;
v___y_986_ = v_a_940_;
v___y_987_ = v_a_941_;
goto v___jp_981_;
}
else
{
lean_object* v_arg_1056_; lean_object* v___x_1057_; uint8_t v___x_1058_; 
v_arg_1056_ = lean_ctor_get(v___x_1054_, 1);
lean_inc_ref(v_arg_1056_);
v___x_1057_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1054_);
v___x_1058_ = l_Lean_Expr_isApp(v___x_1057_);
if (v___x_1058_ == 0)
{
lean_dec_ref(v___x_1057_);
lean_dec_ref(v_arg_1056_);
lean_dec_ref(v_arg_1053_);
v___y_982_ = v_a_936_;
v___y_983_ = v_a_937_;
v___y_984_ = v_a_938_;
v___y_985_ = v_a_939_;
v___y_986_ = v_a_940_;
v___y_987_ = v_a_941_;
goto v___jp_981_;
}
else
{
lean_object* v_arg_1059_; lean_object* v___x_1060_; uint8_t v___x_1061_; 
v_arg_1059_ = lean_ctor_get(v___x_1057_, 1);
lean_inc_ref(v_arg_1059_);
v___x_1060_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1057_);
v___x_1061_ = l_Lean_Expr_isApp(v___x_1060_);
if (v___x_1061_ == 0)
{
lean_dec_ref(v___x_1060_);
lean_dec_ref(v_arg_1059_);
lean_dec_ref(v_arg_1056_);
lean_dec_ref(v_arg_1053_);
v___y_982_ = v_a_936_;
v___y_983_ = v_a_937_;
v___y_984_ = v_a_938_;
v___y_985_ = v_a_939_;
v___y_986_ = v_a_940_;
v___y_987_ = v_a_941_;
goto v___jp_981_;
}
else
{
lean_object* v_arg_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; uint8_t v___x_1065_; 
v_arg_1062_ = lean_ctor_get(v___x_1060_, 1);
lean_inc_ref(v_arg_1062_);
v___x_1063_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1060_);
v___x_1064_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__21));
v___x_1065_ = l_Lean_Expr_isConstOf(v___x_1063_, v___x_1064_);
lean_dec_ref(v___x_1063_);
if (v___x_1065_ == 0)
{
lean_dec_ref(v_arg_1062_);
lean_dec_ref(v_arg_1059_);
lean_dec_ref(v_arg_1056_);
lean_dec_ref(v_arg_1053_);
v___y_982_ = v_a_936_;
v___y_983_ = v_a_937_;
v___y_984_ = v_a_938_;
v___y_985_ = v_a_939_;
v___y_986_ = v_a_940_;
v___y_987_ = v_a_941_;
goto v___jp_981_;
}
else
{
lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; 
lean_dec_ref(v_epostSpec_933_);
v___x_1066_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__16));
v___x_1067_ = lean_unsigned_to_nat(1u);
v___x_1068_ = lean_mk_empty_array_with_capacity(v___x_1067_);
lean_inc_ref(v_epostAbstract_934_);
v___x_1069_ = lean_array_push(v___x_1068_, v_epostAbstract_934_);
lean_inc_ref(v___x_1069_);
v___x_1070_ = l_Lean_Meta_mkAppM(v___x_1066_, v___x_1069_, v_a_938_, v_a_939_, v_a_940_, v_a_941_);
if (lean_obj_tag(v___x_1070_) == 0)
{
lean_object* v_a_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; 
v_a_1071_ = lean_ctor_get(v___x_1070_, 0);
lean_inc(v_a_1071_);
lean_dec_ref_known(v___x_1070_, 1);
v___x_1072_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__18));
v___x_1073_ = l_Lean_Meta_mkAppM(v___x_1072_, v___x_1069_, v_a_938_, v_a_939_, v_a_940_, v_a_941_);
if (lean_obj_tag(v___x_1073_) == 0)
{
lean_object* v_a_1074_; lean_object* v___x_1075_; 
v_a_1074_ = lean_ctor_get(v___x_1073_, 0);
lean_inc(v_a_1074_);
lean_dec_ref_known(v___x_1073_, 1);
lean_inc_ref(v_arg_1056_);
v___x_1075_ = l_Lean_Meta_Sym_inferType___redArg(v_arg_1056_, v_a_937_, v_a_938_, v_a_939_, v_a_940_, v_a_941_);
if (lean_obj_tag(v___x_1075_) == 0)
{
lean_object* v_a_1076_; lean_object* v___x_1077_; 
v_a_1076_ = lean_ctor_get(v___x_1075_, 0);
lean_inc(v_a_1076_);
lean_dec_ref_known(v___x_1075_, 1);
v___x_1077_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__1___redArg(v_arg_1062_, v___f_980_, v___x_979_, v_a_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_, v_a_941_);
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v_a_1078_; lean_object* v___x_1079_; 
v_a_1078_ = lean_ctor_get(v___x_1077_, 0);
lean_inc(v_a_1078_);
lean_dec_ref_known(v___x_1077_, 1);
lean_inc_ref(v_stateArgNames_935_);
lean_inc_ref(v_arg_1056_);
v___x_1079_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise(v_arg_1056_, v_a_1071_, v_a_1076_, v_a_1078_, v_stateArgNames_935_, v_a_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_, v_a_941_);
if (lean_obj_tag(v___x_1079_) == 0)
{
lean_object* v_a_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1102_; 
v_a_1080_ = lean_ctor_get(v___x_1079_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1079_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1082_ = v___x_1079_;
v_isShared_1083_ = v_isSharedCheck_1102_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_a_1080_);
lean_dec(v___x_1079_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1102_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1085_; 
if (v_isShared_1083_ == 0)
{
lean_ctor_set_tag(v___x_1082_, 1);
v___x_1085_ = v___x_1082_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_a_1080_);
v___x_1085_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
uint8_t v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1086_ = 0;
v___x_1087_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__1));
v___x_1088_ = l_Lean_Meta_mkFreshExprMVar(v___x_1085_, v___x_1086_, v___x_1087_, v_a_938_, v_a_939_, v_a_940_, v_a_941_);
if (lean_obj_tag(v___x_1088_) == 0)
{
lean_object* v_a_1089_; lean_object* v___x_1090_; 
v_a_1089_ = lean_ctor_get(v___x_1088_, 0);
lean_inc(v_a_1089_);
lean_dec_ref_known(v___x_1088_, 1);
lean_inc_ref(v_arg_1053_);
v___x_1090_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel(v_arg_1059_, v_arg_1053_, v_a_1074_, v_stateArgNames_935_, v_a_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_, v_a_941_);
lean_dec_ref(v_arg_1059_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; 
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
lean_inc(v_a_1091_);
lean_dec_ref_known(v___x_1090_, 1);
v___x_1092_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__20));
v___x_1093_ = lean_unsigned_to_nat(5u);
v___x_1094_ = lean_mk_empty_array_with_capacity(v___x_1093_);
v___x_1095_ = lean_array_push(v___x_1094_, v_arg_1056_);
v___x_1096_ = lean_array_push(v___x_1095_, v_arg_1053_);
v___x_1097_ = lean_array_push(v___x_1096_, v_epostAbstract_934_);
v___x_1098_ = lean_array_push(v___x_1097_, v_a_1089_);
v___x_1099_ = lean_array_push(v___x_1098_, v_a_1091_);
v___x_1100_ = l_Lean_Meta_mkAppM(v___x_1092_, v___x_1099_, v_a_938_, v_a_939_, v_a_940_, v_a_941_);
return v___x_1100_;
}
else
{
lean_dec(v_a_1089_);
lean_dec_ref(v_arg_1056_);
lean_dec_ref(v_arg_1053_);
lean_dec_ref(v_epostAbstract_934_);
return v___x_1090_;
}
}
else
{
lean_dec(v_a_1074_);
lean_dec_ref(v_arg_1059_);
lean_dec_ref(v_arg_1056_);
lean_dec_ref(v_arg_1053_);
lean_dec_ref(v_stateArgNames_935_);
lean_dec_ref(v_epostAbstract_934_);
return v___x_1088_;
}
}
}
}
else
{
lean_dec(v_a_1074_);
lean_dec_ref(v_arg_1059_);
lean_dec_ref(v_arg_1056_);
lean_dec_ref(v_arg_1053_);
lean_dec_ref(v_stateArgNames_935_);
lean_dec_ref(v_epostAbstract_934_);
return v___x_1079_;
}
}
else
{
lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1110_; 
lean_dec(v_a_1076_);
lean_dec(v_a_1074_);
lean_dec(v_a_1071_);
lean_dec_ref(v_arg_1059_);
lean_dec_ref(v_arg_1056_);
lean_dec_ref(v_arg_1053_);
lean_dec_ref(v_stateArgNames_935_);
lean_dec_ref(v_epostAbstract_934_);
v_a_1103_ = lean_ctor_get(v___x_1077_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1105_ = v___x_1077_;
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_dec(v___x_1077_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1108_; 
if (v_isShared_1106_ == 0)
{
v___x_1108_ = v___x_1105_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_a_1103_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
}
else
{
lean_dec(v_a_1074_);
lean_dec(v_a_1071_);
lean_dec_ref(v_arg_1062_);
lean_dec_ref(v_arg_1059_);
lean_dec_ref(v_arg_1056_);
lean_dec_ref(v_arg_1053_);
lean_dec_ref(v_stateArgNames_935_);
lean_dec_ref(v_epostAbstract_934_);
return v___x_1075_;
}
}
else
{
lean_dec(v_a_1071_);
lean_dec_ref(v_arg_1062_);
lean_dec_ref(v_arg_1059_);
lean_dec_ref(v_arg_1056_);
lean_dec_ref(v_arg_1053_);
lean_dec_ref(v_stateArgNames_935_);
lean_dec_ref(v_epostAbstract_934_);
return v___x_1073_;
}
}
else
{
lean_dec_ref(v___x_1069_);
lean_dec_ref(v_arg_1062_);
lean_dec_ref(v_arg_1059_);
lean_dec_ref(v_arg_1056_);
lean_dec_ref(v_arg_1053_);
lean_dec_ref(v_stateArgNames_935_);
lean_dec_ref(v_epostAbstract_934_);
return v___x_1070_;
}
}
}
}
}
}
v___jp_981_:
{
lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_988_ = l_Lean_Expr_consumeMData(v_EPred_932_);
v___x_989_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v___x_988_, v___y_985_);
if (lean_obj_tag(v___x_989_) == 0)
{
lean_object* v_a_990_; lean_object* v___x_991_; lean_object* v___x_992_; uint8_t v___x_993_; 
v_a_990_ = lean_ctor_get(v___x_989_, 0);
lean_inc(v_a_990_);
lean_dec_ref_known(v___x_989_, 1);
v___x_991_ = l_Lean_Expr_cleanupAnnotations(v_a_990_);
v___x_992_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__12));
v___x_993_ = l_Lean_Expr_isConstOf(v___x_991_, v___x_992_);
if (v___x_993_ == 0)
{
uint8_t v___x_994_; 
v___x_994_ = l_Lean_Expr_isApp(v___x_991_);
if (v___x_994_ == 0)
{
lean_dec_ref(v___x_991_);
lean_dec_ref(v_stateArgNames_935_);
v___y_944_ = v___y_984_;
v___y_945_ = v___y_985_;
v___y_946_ = v___y_986_;
v___y_947_ = v___y_987_;
goto v___jp_943_;
}
else
{
lean_object* v_arg_995_; lean_object* v___x_996_; uint8_t v___x_997_; 
v_arg_995_ = lean_ctor_get(v___x_991_, 1);
lean_inc_ref(v_arg_995_);
v___x_996_ = l_Lean_Expr_appFnCleanup___redArg(v___x_991_);
v___x_997_ = l_Lean_Expr_isApp(v___x_996_);
if (v___x_997_ == 0)
{
lean_dec_ref(v___x_996_);
lean_dec_ref(v_arg_995_);
lean_dec_ref(v_stateArgNames_935_);
v___y_944_ = v___y_984_;
v___y_945_ = v___y_985_;
v___y_946_ = v___y_986_;
v___y_947_ = v___y_987_;
goto v___jp_943_;
}
else
{
lean_object* v_arg_998_; lean_object* v___x_999_; lean_object* v___x_1000_; uint8_t v___x_1001_; 
v_arg_998_ = lean_ctor_get(v___x_996_, 1);
lean_inc_ref(v_arg_998_);
v___x_999_ = l_Lean_Expr_appFnCleanup___redArg(v___x_996_);
v___x_1000_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__14));
v___x_1001_ = l_Lean_Expr_isConstOf(v___x_999_, v___x_1000_);
lean_dec_ref(v___x_999_);
if (v___x_1001_ == 0)
{
lean_dec_ref(v_arg_998_);
lean_dec_ref(v_arg_995_);
lean_dec_ref(v_stateArgNames_935_);
v___y_944_ = v___y_984_;
v___y_945_ = v___y_985_;
v___y_946_ = v___y_986_;
v___y_947_ = v___y_987_;
goto v___jp_943_;
}
else
{
lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1002_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__16));
v___x_1003_ = lean_unsigned_to_nat(1u);
v___x_1004_ = lean_mk_empty_array_with_capacity(v___x_1003_);
lean_inc_ref(v___x_1004_);
v___x_1005_ = lean_array_push(v___x_1004_, v_epostSpec_933_);
lean_inc_ref(v___x_1005_);
v___x_1006_ = l_Lean_Meta_mkAppM(v___x_1002_, v___x_1005_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
if (lean_obj_tag(v___x_1006_) == 0)
{
lean_object* v_a_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; 
v_a_1007_ = lean_ctor_get(v___x_1006_, 0);
lean_inc(v_a_1007_);
lean_dec_ref_known(v___x_1006_, 1);
v___x_1008_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__18));
v___x_1009_ = l_Lean_Meta_mkAppM(v___x_1008_, v___x_1005_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
if (lean_obj_tag(v___x_1009_) == 0)
{
lean_object* v_a_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
v_a_1010_ = lean_ctor_get(v___x_1009_, 0);
lean_inc(v_a_1010_);
lean_dec_ref_known(v___x_1009_, 1);
lean_inc_ref(v_epostAbstract_934_);
v___x_1011_ = lean_array_push(v___x_1004_, v_epostAbstract_934_);
lean_inc_ref(v___x_1011_);
v___x_1012_ = l_Lean_Meta_mkAppM(v___x_1002_, v___x_1011_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
if (lean_obj_tag(v___x_1012_) == 0)
{
lean_object* v_a_1013_; lean_object* v___x_1014_; 
v_a_1013_ = lean_ctor_get(v___x_1012_, 0);
lean_inc(v_a_1013_);
lean_dec_ref_known(v___x_1012_, 1);
v___x_1014_ = l_Lean_Meta_mkAppM(v___x_1008_, v___x_1011_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
if (lean_obj_tag(v___x_1014_) == 0)
{
lean_object* v_a_1015_; lean_object* v___x_1016_; 
v_a_1015_ = lean_ctor_get(v___x_1014_, 0);
lean_inc(v_a_1015_);
lean_dec_ref_known(v___x_1014_, 1);
lean_inc(v_a_1007_);
v___x_1016_ = l_Lean_Meta_Sym_inferType___redArg(v_a_1007_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
if (lean_obj_tag(v___x_1016_) == 0)
{
lean_object* v_a_1017_; lean_object* v___x_1018_; 
v_a_1017_ = lean_ctor_get(v___x_1016_, 0);
lean_inc(v_a_1017_);
lean_dec_ref_known(v___x_1016_, 1);
v___x_1018_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__1___redArg(v_arg_998_, v___f_980_, v___x_993_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_object* v_a_1019_; lean_object* v___x_1020_; 
v_a_1019_ = lean_ctor_get(v___x_1018_, 0);
lean_inc(v_a_1019_);
lean_dec_ref_known(v___x_1018_, 1);
lean_inc_ref(v_stateArgNames_935_);
lean_inc(v_a_1007_);
v___x_1020_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise(v_a_1007_, v_a_1013_, v_a_1017_, v_a_1019_, v_stateArgNames_935_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
if (lean_obj_tag(v___x_1020_) == 0)
{
lean_object* v_a_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1043_; 
v_a_1021_ = lean_ctor_get(v___x_1020_, 0);
v_isSharedCheck_1043_ = !lean_is_exclusive(v___x_1020_);
if (v_isSharedCheck_1043_ == 0)
{
v___x_1023_ = v___x_1020_;
v_isShared_1024_ = v_isSharedCheck_1043_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_a_1021_);
lean_dec(v___x_1020_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1043_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
lean_object* v___x_1026_; 
if (v_isShared_1024_ == 0)
{
lean_ctor_set_tag(v___x_1023_, 1);
v___x_1026_ = v___x_1023_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v_a_1021_);
v___x_1026_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
uint8_t v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; 
v___x_1027_ = 0;
v___x_1028_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__1));
v___x_1029_ = l_Lean_Meta_mkFreshExprMVar(v___x_1026_, v___x_1027_, v___x_1028_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
if (lean_obj_tag(v___x_1029_) == 0)
{
lean_object* v_a_1030_; lean_object* v___x_1031_; 
v_a_1030_ = lean_ctor_get(v___x_1029_, 0);
lean_inc(v_a_1030_);
lean_dec_ref_known(v___x_1029_, 1);
lean_inc(v_a_1010_);
v___x_1031_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel(v_arg_995_, v_a_1010_, v_a_1015_, v_stateArgNames_935_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
lean_dec_ref(v_arg_995_);
if (lean_obj_tag(v___x_1031_) == 0)
{
lean_object* v_a_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; 
v_a_1032_ = lean_ctor_get(v___x_1031_, 0);
lean_inc(v_a_1032_);
lean_dec_ref_known(v___x_1031_, 1);
v___x_1033_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__20));
v___x_1034_ = lean_unsigned_to_nat(5u);
v___x_1035_ = lean_mk_empty_array_with_capacity(v___x_1034_);
v___x_1036_ = lean_array_push(v___x_1035_, v_a_1007_);
v___x_1037_ = lean_array_push(v___x_1036_, v_a_1010_);
v___x_1038_ = lean_array_push(v___x_1037_, v_epostAbstract_934_);
v___x_1039_ = lean_array_push(v___x_1038_, v_a_1030_);
v___x_1040_ = lean_array_push(v___x_1039_, v_a_1032_);
v___x_1041_ = l_Lean_Meta_mkAppM(v___x_1033_, v___x_1040_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
return v___x_1041_;
}
else
{
lean_dec(v_a_1030_);
lean_dec(v_a_1010_);
lean_dec(v_a_1007_);
lean_dec_ref(v_epostAbstract_934_);
return v___x_1031_;
}
}
else
{
lean_dec(v_a_1015_);
lean_dec(v_a_1010_);
lean_dec(v_a_1007_);
lean_dec_ref(v_arg_995_);
lean_dec_ref(v_stateArgNames_935_);
lean_dec_ref(v_epostAbstract_934_);
return v___x_1029_;
}
}
}
}
else
{
lean_dec(v_a_1015_);
lean_dec(v_a_1010_);
lean_dec(v_a_1007_);
lean_dec_ref(v_arg_995_);
lean_dec_ref(v_stateArgNames_935_);
lean_dec_ref(v_epostAbstract_934_);
return v___x_1020_;
}
}
else
{
lean_object* v_a_1044_; lean_object* v___x_1046_; uint8_t v_isShared_1047_; uint8_t v_isSharedCheck_1051_; 
lean_dec(v_a_1017_);
lean_dec(v_a_1015_);
lean_dec(v_a_1013_);
lean_dec(v_a_1010_);
lean_dec(v_a_1007_);
lean_dec_ref(v_arg_995_);
lean_dec_ref(v_stateArgNames_935_);
lean_dec_ref(v_epostAbstract_934_);
v_a_1044_ = lean_ctor_get(v___x_1018_, 0);
v_isSharedCheck_1051_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1051_ == 0)
{
v___x_1046_ = v___x_1018_;
v_isShared_1047_ = v_isSharedCheck_1051_;
goto v_resetjp_1045_;
}
else
{
lean_inc(v_a_1044_);
lean_dec(v___x_1018_);
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
lean_dec(v_a_1015_);
lean_dec(v_a_1013_);
lean_dec(v_a_1010_);
lean_dec(v_a_1007_);
lean_dec_ref(v_arg_998_);
lean_dec_ref(v_arg_995_);
lean_dec_ref(v_stateArgNames_935_);
lean_dec_ref(v_epostAbstract_934_);
return v___x_1016_;
}
}
else
{
lean_dec(v_a_1013_);
lean_dec(v_a_1010_);
lean_dec(v_a_1007_);
lean_dec_ref(v_arg_998_);
lean_dec_ref(v_arg_995_);
lean_dec_ref(v_stateArgNames_935_);
lean_dec_ref(v_epostAbstract_934_);
return v___x_1014_;
}
}
else
{
lean_dec_ref(v___x_1011_);
lean_dec(v_a_1010_);
lean_dec(v_a_1007_);
lean_dec_ref(v_arg_998_);
lean_dec_ref(v_arg_995_);
lean_dec_ref(v_stateArgNames_935_);
lean_dec_ref(v_epostAbstract_934_);
return v___x_1012_;
}
}
else
{
lean_dec(v_a_1007_);
lean_dec_ref(v___x_1004_);
lean_dec_ref(v_arg_998_);
lean_dec_ref(v_arg_995_);
lean_dec_ref(v_stateArgNames_935_);
lean_dec_ref(v_epostAbstract_934_);
return v___x_1009_;
}
}
else
{
lean_dec_ref(v___x_1005_);
lean_dec_ref(v___x_1004_);
lean_dec_ref(v_arg_998_);
lean_dec_ref(v_arg_995_);
lean_dec_ref(v_stateArgNames_935_);
lean_dec_ref(v_epostAbstract_934_);
return v___x_1006_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_991_);
lean_dec_ref(v_stateArgNames_935_);
lean_dec_ref(v_epostSpec_933_);
v___y_966_ = v___y_984_;
v___y_967_ = v___y_985_;
v___y_968_ = v___y_986_;
v___y_969_ = v___y_987_;
goto v___jp_965_;
}
}
else
{
lean_dec_ref(v_stateArgNames_935_);
lean_dec_ref(v_epostAbstract_934_);
lean_dec_ref(v_epostSpec_933_);
return v___x_989_;
}
}
}
else
{
lean_dec_ref(v___x_977_);
lean_dec_ref(v_stateArgNames_935_);
lean_dec_ref(v_epostSpec_933_);
v___y_966_ = v_a_938_;
v___y_967_ = v_a_939_;
v___y_968_ = v_a_940_;
v___y_969_ = v_a_941_;
goto v___jp_965_;
}
}
else
{
lean_dec_ref(v_stateArgNames_935_);
lean_dec_ref(v_epostAbstract_934_);
lean_dec_ref(v_epostSpec_933_);
return v___x_975_;
}
v___jp_943_:
{
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_948_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__4));
v___x_949_ = lean_unsigned_to_nat(2u);
v___x_950_ = lean_mk_empty_array_with_capacity(v___x_949_);
v___x_951_ = lean_array_push(v___x_950_, v_epostSpec_933_);
v___x_952_ = lean_array_push(v___x_951_, v_epostAbstract_934_);
v___x_953_ = l_Lean_Meta_mkAppM(v___x_948_, v___x_952_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
if (lean_obj_tag(v___x_953_) == 0)
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_964_; 
v_a_954_ = lean_ctor_get(v___x_953_, 0);
v_isSharedCheck_964_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_964_ == 0)
{
v___x_956_ = v___x_953_;
v_isShared_957_ = v_isSharedCheck_964_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___x_953_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_964_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_959_; 
if (v_isShared_957_ == 0)
{
lean_ctor_set_tag(v___x_956_, 1);
v___x_959_ = v___x_956_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v_a_954_);
v___x_959_ = v_reuseFailAlloc_963_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
uint8_t v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v___x_960_ = 0;
v___x_961_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__1));
v___x_962_ = l_Lean_Meta_mkFreshExprMVar(v___x_959_, v___x_960_, v___x_961_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
return v___x_962_;
}
}
}
else
{
return v___x_953_;
}
}
v___jp_965_:
{
lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_970_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__7));
v___x_971_ = lean_unsigned_to_nat(1u);
v___x_972_ = lean_mk_empty_array_with_capacity(v___x_971_);
v___x_973_ = lean_array_push(v___x_972_, v_epostAbstract_934_);
v___x_974_ = l_Lean_Meta_mkAppM(v___x_970_, v___x_973_, v___y_966_, v___y_967_, v___y_968_, v___y_969_);
return v___x_974_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___boxed(lean_object* v_EPred_1111_, lean_object* v_epostSpec_1112_, lean_object* v_epostAbstract_1113_, lean_object* v_stateArgNames_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_){
_start:
{
lean_object* v_res_1122_; 
v_res_1122_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel(v_EPred_1111_, v_epostSpec_1112_, v_epostAbstract_1113_, v_stateArgNames_1114_, v_a_1115_, v_a_1116_, v_a_1117_, v_a_1118_, v_a_1119_, v_a_1120_);
lean_dec(v_a_1120_);
lean_dec_ref(v_a_1119_);
lean_dec(v_a_1118_);
lean_dec_ref(v_a_1117_);
lean_dec(v_a_1116_);
lean_dec_ref(v_a_1115_);
lean_dec_ref(v_EPred_1111_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__0(size_t v_sz_1123_, size_t v_i_1124_, lean_object* v_bs_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_){
_start:
{
lean_object* v___x_1133_; 
v___x_1133_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__0___redArg(v_sz_1123_, v_i_1124_, v_bs_1125_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_);
return v___x_1133_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__0___boxed(lean_object* v_sz_1134_, lean_object* v_i_1135_, lean_object* v_bs_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_){
_start:
{
size_t v_sz_boxed_1144_; size_t v_i_boxed_1145_; lean_object* v_res_1146_; 
v_sz_boxed_1144_ = lean_unbox_usize(v_sz_1134_);
lean_dec(v_sz_1134_);
v_i_boxed_1145_ = lean_unbox_usize(v_i_1135_);
lean_dec(v_i_1135_);
v_res_1146_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel_spec__0(v_sz_boxed_1144_, v_i_boxed_1145_, v_bs_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_);
lean_dec(v___y_1142_);
lean_dec_ref(v___y_1141_);
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
lean_dec(v___y_1138_);
lean_dec_ref(v___y_1137_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof(lean_object* v_pre_1208_, lean_object* v_prog_1209_, lean_object* v_postSpec_1210_, lean_object* v_epostSpec_1211_, lean_object* v_specProof_1212_, lean_object* v_EPred_1213_, lean_object* v_ss_1214_, lean_object* v_ssTypes_1215_, lean_object* v_stateArgNames_1216_, lean_object* v_a_1217_, lean_object* v_a_1218_, lean_object* v_a_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_, lean_object* v_a_1222_){
_start:
{
lean_object* v___y_1225_; lean_object* v_epostAbstract_1226_; lean_object* v_specApplied_1227_; lean_object* v___y_1228_; lean_object* v___y_1229_; lean_object* v___y_1230_; lean_object* v___y_1231_; lean_object* v___y_1232_; lean_object* v_postAbstract_1349_; lean_object* v_epostAbstract_1350_; lean_object* v_postAbstract_1352_; lean_object* v_specApplied_1353_; lean_object* v___y_1354_; lean_object* v___y_1355_; lean_object* v___y_1356_; lean_object* v___y_1357_; lean_object* v___y_1358_; lean_object* v___y_1359_; uint8_t v___x_1451_; 
v_postAbstract_1349_ = l_Lean_Expr_consumeMData(v_postSpec_1210_);
v_epostAbstract_1350_ = l_Lean_Expr_consumeMData(v_epostSpec_1211_);
v___x_1451_ = l_Lean_Expr_isMVar(v_postAbstract_1349_);
if (v___x_1451_ == 0)
{
lean_object* v___x_1452_; 
lean_dec_ref(v_postAbstract_1349_);
lean_inc_ref(v_postSpec_1210_);
v___x_1452_ = l_Lean_Meta_Sym_inferType___redArg(v_postSpec_1210_, v_a_1218_, v_a_1219_, v_a_1220_, v_a_1221_, v_a_1222_);
if (lean_obj_tag(v___x_1452_) == 0)
{
lean_object* v_a_1453_; lean_object* v___x_1454_; uint8_t v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
v_a_1453_ = lean_ctor_get(v___x_1452_, 0);
lean_inc_n(v_a_1453_, 2);
lean_dec_ref_known(v___x_1452_, 1);
v___x_1454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1454_, 0, v_a_1453_);
v___x_1455_ = 0;
v___x_1456_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__20));
v___x_1457_ = l_Lean_Meta_mkFreshExprMVar(v___x_1454_, v___x_1455_, v___x_1456_, v_a_1219_, v_a_1220_, v_a_1221_, v_a_1222_);
if (lean_obj_tag(v___x_1457_) == 0)
{
lean_object* v_a_1458_; lean_object* v___x_1459_; 
v_a_1458_ = lean_ctor_get(v___x_1457_, 0);
lean_inc_n(v_a_1458_, 2);
lean_dec_ref_known(v___x_1457_, 1);
lean_inc_ref(v_stateArgNames_1216_);
lean_inc_ref(v_postSpec_1210_);
v___x_1459_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise(v_postSpec_1210_, v_a_1458_, v_a_1453_, v_ssTypes_1215_, v_stateArgNames_1216_, v_a_1217_, v_a_1218_, v_a_1219_, v_a_1220_, v_a_1221_, v_a_1222_);
if (lean_obj_tag(v___x_1459_) == 0)
{
lean_object* v_a_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; 
v_a_1460_ = lean_ctor_get(v___x_1459_, 0);
lean_inc(v_a_1460_);
lean_dec_ref_known(v___x_1459_, 1);
v___x_1461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1461_, 0, v_a_1460_);
v___x_1462_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__22));
v___x_1463_ = l_Lean_Meta_mkFreshExprMVar(v___x_1461_, v___x_1455_, v___x_1462_, v_a_1219_, v_a_1220_, v_a_1221_, v_a_1222_);
if (lean_obj_tag(v___x_1463_) == 0)
{
lean_object* v_a_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
v_a_1464_ = lean_ctor_get(v___x_1463_, 0);
lean_inc(v_a_1464_);
lean_dec_ref_known(v___x_1463_, 1);
v___x_1465_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__4));
v___x_1466_ = lean_unsigned_to_nat(2u);
v___x_1467_ = lean_mk_empty_array_with_capacity(v___x_1466_);
lean_inc_ref(v_postSpec_1210_);
v___x_1468_ = lean_array_push(v___x_1467_, v_postSpec_1210_);
lean_inc(v_a_1458_);
v___x_1469_ = lean_array_push(v___x_1468_, v_a_1458_);
v___x_1470_ = l_Lean_Meta_mkAppM(v___x_1465_, v___x_1469_, v_a_1219_, v_a_1220_, v_a_1221_, v_a_1222_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_object* v_a_1471_; lean_object* v___x_1472_; 
v_a_1471_ = lean_ctor_get(v___x_1470_, 0);
lean_inc(v_a_1471_);
lean_dec_ref_known(v___x_1470_, 1);
v___x_1472_ = l_Lean_Meta_mkExpectedTypeHint(v_a_1464_, v_a_1471_, v_a_1219_, v_a_1220_, v_a_1221_, v_a_1222_);
if (lean_obj_tag(v___x_1472_) == 0)
{
lean_object* v_a_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; 
v_a_1473_ = lean_ctor_get(v___x_1472_, 0);
lean_inc(v_a_1473_);
lean_dec_ref_known(v___x_1472_, 1);
v___x_1474_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__24));
v___x_1475_ = lean_unsigned_to_nat(6u);
v___x_1476_ = lean_mk_empty_array_with_capacity(v___x_1475_);
lean_inc_ref(v_prog_1209_);
v___x_1477_ = lean_array_push(v___x_1476_, v_prog_1209_);
v___x_1478_ = lean_array_push(v___x_1477_, v_postSpec_1210_);
lean_inc(v_a_1458_);
v___x_1479_ = lean_array_push(v___x_1478_, v_a_1458_);
lean_inc_ref(v_epostSpec_1211_);
v___x_1480_ = lean_array_push(v___x_1479_, v_epostSpec_1211_);
v___x_1481_ = lean_array_push(v___x_1480_, v_a_1473_);
v___x_1482_ = lean_array_push(v___x_1481_, v_specProof_1212_);
v___x_1483_ = l_Lean_Meta_mkAppM(v___x_1474_, v___x_1482_, v_a_1219_, v_a_1220_, v_a_1221_, v_a_1222_);
if (lean_obj_tag(v___x_1483_) == 0)
{
lean_object* v_a_1484_; 
v_a_1484_ = lean_ctor_get(v___x_1483_, 0);
lean_inc(v_a_1484_);
lean_dec_ref_known(v___x_1483_, 1);
v_postAbstract_1352_ = v_a_1458_;
v_specApplied_1353_ = v_a_1484_;
v___y_1354_ = v_a_1217_;
v___y_1355_ = v_a_1218_;
v___y_1356_ = v_a_1219_;
v___y_1357_ = v_a_1220_;
v___y_1358_ = v_a_1221_;
v___y_1359_ = v_a_1222_;
goto v___jp_1351_;
}
else
{
lean_object* v_a_1485_; lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1492_; 
lean_dec(v_a_1458_);
lean_dec_ref(v_epostAbstract_1350_);
lean_dec_ref(v_stateArgNames_1216_);
lean_dec_ref(v_ss_1214_);
lean_dec_ref(v_epostSpec_1211_);
lean_dec_ref(v_prog_1209_);
lean_dec_ref(v_pre_1208_);
v_a_1485_ = lean_ctor_get(v___x_1483_, 0);
v_isSharedCheck_1492_ = !lean_is_exclusive(v___x_1483_);
if (v_isSharedCheck_1492_ == 0)
{
v___x_1487_ = v___x_1483_;
v_isShared_1488_ = v_isSharedCheck_1492_;
goto v_resetjp_1486_;
}
else
{
lean_inc(v_a_1485_);
lean_dec(v___x_1483_);
v___x_1487_ = lean_box(0);
v_isShared_1488_ = v_isSharedCheck_1492_;
goto v_resetjp_1486_;
}
v_resetjp_1486_:
{
lean_object* v___x_1490_; 
if (v_isShared_1488_ == 0)
{
v___x_1490_ = v___x_1487_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v_a_1485_);
v___x_1490_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
return v___x_1490_;
}
}
}
}
else
{
lean_object* v_a_1493_; lean_object* v___x_1495_; uint8_t v_isShared_1496_; uint8_t v_isSharedCheck_1500_; 
lean_dec(v_a_1458_);
lean_dec_ref(v_epostAbstract_1350_);
lean_dec_ref(v_stateArgNames_1216_);
lean_dec_ref(v_ss_1214_);
lean_dec_ref(v_specProof_1212_);
lean_dec_ref(v_epostSpec_1211_);
lean_dec_ref(v_postSpec_1210_);
lean_dec_ref(v_prog_1209_);
lean_dec_ref(v_pre_1208_);
v_a_1493_ = lean_ctor_get(v___x_1472_, 0);
v_isSharedCheck_1500_ = !lean_is_exclusive(v___x_1472_);
if (v_isSharedCheck_1500_ == 0)
{
v___x_1495_ = v___x_1472_;
v_isShared_1496_ = v_isSharedCheck_1500_;
goto v_resetjp_1494_;
}
else
{
lean_inc(v_a_1493_);
lean_dec(v___x_1472_);
v___x_1495_ = lean_box(0);
v_isShared_1496_ = v_isSharedCheck_1500_;
goto v_resetjp_1494_;
}
v_resetjp_1494_:
{
lean_object* v___x_1498_; 
if (v_isShared_1496_ == 0)
{
v___x_1498_ = v___x_1495_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v_a_1493_);
v___x_1498_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
return v___x_1498_;
}
}
}
}
else
{
lean_object* v_a_1501_; lean_object* v___x_1503_; uint8_t v_isShared_1504_; uint8_t v_isSharedCheck_1508_; 
lean_dec(v_a_1464_);
lean_dec(v_a_1458_);
lean_dec_ref(v_epostAbstract_1350_);
lean_dec_ref(v_stateArgNames_1216_);
lean_dec_ref(v_ss_1214_);
lean_dec_ref(v_specProof_1212_);
lean_dec_ref(v_epostSpec_1211_);
lean_dec_ref(v_postSpec_1210_);
lean_dec_ref(v_prog_1209_);
lean_dec_ref(v_pre_1208_);
v_a_1501_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1508_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1508_ == 0)
{
v___x_1503_ = v___x_1470_;
v_isShared_1504_ = v_isSharedCheck_1508_;
goto v_resetjp_1502_;
}
else
{
lean_inc(v_a_1501_);
lean_dec(v___x_1470_);
v___x_1503_ = lean_box(0);
v_isShared_1504_ = v_isSharedCheck_1508_;
goto v_resetjp_1502_;
}
v_resetjp_1502_:
{
lean_object* v___x_1506_; 
if (v_isShared_1504_ == 0)
{
v___x_1506_ = v___x_1503_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v_a_1501_);
v___x_1506_ = v_reuseFailAlloc_1507_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
return v___x_1506_;
}
}
}
}
else
{
lean_object* v_a_1509_; lean_object* v___x_1511_; uint8_t v_isShared_1512_; uint8_t v_isSharedCheck_1516_; 
lean_dec(v_a_1458_);
lean_dec_ref(v_epostAbstract_1350_);
lean_dec_ref(v_stateArgNames_1216_);
lean_dec_ref(v_ss_1214_);
lean_dec_ref(v_specProof_1212_);
lean_dec_ref(v_epostSpec_1211_);
lean_dec_ref(v_postSpec_1210_);
lean_dec_ref(v_prog_1209_);
lean_dec_ref(v_pre_1208_);
v_a_1509_ = lean_ctor_get(v___x_1463_, 0);
v_isSharedCheck_1516_ = !lean_is_exclusive(v___x_1463_);
if (v_isSharedCheck_1516_ == 0)
{
v___x_1511_ = v___x_1463_;
v_isShared_1512_ = v_isSharedCheck_1516_;
goto v_resetjp_1510_;
}
else
{
lean_inc(v_a_1509_);
lean_dec(v___x_1463_);
v___x_1511_ = lean_box(0);
v_isShared_1512_ = v_isSharedCheck_1516_;
goto v_resetjp_1510_;
}
v_resetjp_1510_:
{
lean_object* v___x_1514_; 
if (v_isShared_1512_ == 0)
{
v___x_1514_ = v___x_1511_;
goto v_reusejp_1513_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v_a_1509_);
v___x_1514_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1513_;
}
v_reusejp_1513_:
{
return v___x_1514_;
}
}
}
}
else
{
lean_object* v_a_1517_; lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1524_; 
lean_dec(v_a_1458_);
lean_dec_ref(v_epostAbstract_1350_);
lean_dec_ref(v_stateArgNames_1216_);
lean_dec_ref(v_ss_1214_);
lean_dec_ref(v_specProof_1212_);
lean_dec_ref(v_epostSpec_1211_);
lean_dec_ref(v_postSpec_1210_);
lean_dec_ref(v_prog_1209_);
lean_dec_ref(v_pre_1208_);
v_a_1517_ = lean_ctor_get(v___x_1459_, 0);
v_isSharedCheck_1524_ = !lean_is_exclusive(v___x_1459_);
if (v_isSharedCheck_1524_ == 0)
{
v___x_1519_ = v___x_1459_;
v_isShared_1520_ = v_isSharedCheck_1524_;
goto v_resetjp_1518_;
}
else
{
lean_inc(v_a_1517_);
lean_dec(v___x_1459_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1524_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
lean_object* v___x_1522_; 
if (v_isShared_1520_ == 0)
{
v___x_1522_ = v___x_1519_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v_a_1517_);
v___x_1522_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
return v___x_1522_;
}
}
}
}
else
{
lean_object* v_a_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1532_; 
lean_dec(v_a_1453_);
lean_dec_ref(v_epostAbstract_1350_);
lean_dec_ref(v_stateArgNames_1216_);
lean_dec_ref(v_ssTypes_1215_);
lean_dec_ref(v_ss_1214_);
lean_dec_ref(v_specProof_1212_);
lean_dec_ref(v_epostSpec_1211_);
lean_dec_ref(v_postSpec_1210_);
lean_dec_ref(v_prog_1209_);
lean_dec_ref(v_pre_1208_);
v_a_1525_ = lean_ctor_get(v___x_1457_, 0);
v_isSharedCheck_1532_ = !lean_is_exclusive(v___x_1457_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1527_ = v___x_1457_;
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_a_1525_);
lean_dec(v___x_1457_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v___x_1530_; 
if (v_isShared_1528_ == 0)
{
v___x_1530_ = v___x_1527_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v_a_1525_);
v___x_1530_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
return v___x_1530_;
}
}
}
}
else
{
lean_object* v_a_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1540_; 
lean_dec_ref(v_epostAbstract_1350_);
lean_dec_ref(v_stateArgNames_1216_);
lean_dec_ref(v_ssTypes_1215_);
lean_dec_ref(v_ss_1214_);
lean_dec_ref(v_specProof_1212_);
lean_dec_ref(v_epostSpec_1211_);
lean_dec_ref(v_postSpec_1210_);
lean_dec_ref(v_prog_1209_);
lean_dec_ref(v_pre_1208_);
v_a_1533_ = lean_ctor_get(v___x_1452_, 0);
v_isSharedCheck_1540_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1535_ = v___x_1452_;
v_isShared_1536_ = v_isSharedCheck_1540_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_a_1533_);
lean_dec(v___x_1452_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1540_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v___x_1538_; 
if (v_isShared_1536_ == 0)
{
v___x_1538_ = v___x_1535_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v_a_1533_);
v___x_1538_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
return v___x_1538_;
}
}
}
}
else
{
lean_dec_ref(v_ssTypes_1215_);
lean_dec_ref(v_postSpec_1210_);
v_postAbstract_1352_ = v_postAbstract_1349_;
v_specApplied_1353_ = v_specProof_1212_;
v___y_1354_ = v_a_1217_;
v___y_1355_ = v_a_1218_;
v___y_1356_ = v_a_1219_;
v___y_1357_ = v_a_1220_;
v___y_1358_ = v_a_1221_;
v___y_1359_ = v_a_1222_;
goto v___jp_1351_;
}
v___jp_1224_:
{
lean_object* v___x_1233_; lean_object* v___x_1234_; 
lean_inc_ref(v_ss_1214_);
v___x_1233_ = l_Array_reverse___redArg(v_ss_1214_);
v___x_1234_ = l_Lean_Meta_Sym_betaRevS___redArg(v_pre_1208_, v___x_1233_, v___y_1228_);
lean_dec_ref(v___x_1233_);
if (lean_obj_tag(v___x_1234_) == 0)
{
lean_object* v_a_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; 
v_a_1235_ = lean_ctor_get(v___x_1234_, 0);
lean_inc(v_a_1235_);
lean_dec_ref_known(v___x_1234_, 1);
v___x_1236_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__1));
v___x_1237_ = lean_unsigned_to_nat(3u);
v___x_1238_ = lean_mk_empty_array_with_capacity(v___x_1237_);
v___x_1239_ = lean_array_push(v___x_1238_, v_prog_1209_);
v___x_1240_ = lean_array_push(v___x_1239_, v___y_1225_);
v___x_1241_ = lean_array_push(v___x_1240_, v_epostAbstract_1226_);
v___x_1242_ = l_Array_append___redArg(v___x_1241_, v_ss_1214_);
v___x_1243_ = l_Lean_Meta_mkAppM(v___x_1236_, v___x_1242_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_);
if (lean_obj_tag(v___x_1243_) == 0)
{
lean_object* v_a_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; 
v_a_1244_ = lean_ctor_get(v___x_1243_, 0);
lean_inc(v_a_1244_);
lean_dec_ref_known(v___x_1243_, 1);
v___x_1245_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__4));
v___x_1246_ = lean_unsigned_to_nat(2u);
v___x_1247_ = lean_mk_empty_array_with_capacity(v___x_1246_);
lean_inc(v_a_1235_);
lean_inc_ref(v___x_1247_);
v___x_1248_ = lean_array_push(v___x_1247_, v_a_1235_);
v___x_1249_ = lean_array_push(v___x_1248_, v_a_1244_);
v___x_1250_ = l_Lean_Meta_mkAppM(v___x_1245_, v___x_1249_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_);
if (lean_obj_tag(v___x_1250_) == 0)
{
lean_object* v_a_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; 
v_a_1251_ = lean_ctor_get(v___x_1250_, 0);
lean_inc(v_a_1251_);
lean_dec_ref_known(v___x_1250_, 1);
v___x_1252_ = l_Lean_mkAppN(v_specApplied_1227_, v_ss_1214_);
lean_dec_ref(v_ss_1214_);
v___x_1253_ = l_Lean_Meta_mkExpectedTypeHint(v___x_1252_, v_a_1251_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_);
if (lean_obj_tag(v___x_1253_) == 0)
{
lean_object* v_a_1254_; lean_object* v___x_1255_; 
v_a_1254_ = lean_ctor_get(v___x_1253_, 0);
lean_inc(v_a_1254_);
lean_dec_ref_known(v___x_1253_, 1);
lean_inc(v___y_1232_);
lean_inc_ref(v___y_1231_);
lean_inc(v___y_1230_);
lean_inc_ref(v___y_1229_);
lean_inc(v_a_1235_);
v___x_1255_ = lean_infer_type(v_a_1235_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_);
if (lean_obj_tag(v___x_1255_) == 0)
{
lean_object* v_a_1256_; lean_object* v___x_1257_; uint8_t v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; 
v_a_1256_ = lean_ctor_get(v___x_1255_, 0);
lean_inc(v_a_1256_);
lean_dec_ref_known(v___x_1255_, 1);
v___x_1257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1257_, 0, v_a_1256_);
v___x_1258_ = 0;
v___x_1259_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__3));
v___x_1260_ = l_Lean_Meta_mkFreshExprMVar(v___x_1257_, v___x_1258_, v___x_1259_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_);
if (lean_obj_tag(v___x_1260_) == 0)
{
lean_object* v_a_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; 
v_a_1261_ = lean_ctor_get(v___x_1260_, 0);
lean_inc(v_a_1261_);
lean_dec_ref_known(v___x_1260_, 1);
lean_inc_ref(v___x_1247_);
v___x_1262_ = lean_array_push(v___x_1247_, v_a_1261_);
v___x_1263_ = lean_array_push(v___x_1262_, v_a_1235_);
v___x_1264_ = l_Lean_Meta_mkAppM(v___x_1245_, v___x_1263_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_);
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_object* v_a_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; 
v_a_1265_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_a_1265_);
lean_dec_ref_known(v___x_1264_, 1);
v___x_1266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1266_, 0, v_a_1265_);
v___x_1267_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__5));
v___x_1268_ = l_Lean_Meta_mkFreshExprMVar(v___x_1266_, v___x_1258_, v___x_1267_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_);
if (lean_obj_tag(v___x_1268_) == 0)
{
lean_object* v_a_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; 
v_a_1269_ = lean_ctor_get(v___x_1268_, 0);
lean_inc(v_a_1269_);
lean_dec_ref_known(v___x_1268_, 1);
v___x_1270_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__7));
v___x_1271_ = lean_array_push(v___x_1247_, v_a_1269_);
v___x_1272_ = lean_array_push(v___x_1271_, v_a_1254_);
v___x_1273_ = l_Lean_Meta_mkAppM(v___x_1270_, v___x_1272_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_);
if (lean_obj_tag(v___x_1273_) == 0)
{
lean_object* v_a_1274_; uint8_t v___x_1275_; lean_object* v___x_1276_; 
v_a_1274_ = lean_ctor_get(v___x_1273_, 0);
lean_inc(v_a_1274_);
lean_dec_ref_known(v___x_1273_, 1);
v___x_1275_ = 1;
v___x_1276_ = l_Lean_Meta_abstractMVars(v_a_1274_, v___x_1275_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_);
return v___x_1276_;
}
else
{
lean_object* v_a_1277_; lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1284_; 
v_a_1277_ = lean_ctor_get(v___x_1273_, 0);
v_isSharedCheck_1284_ = !lean_is_exclusive(v___x_1273_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1279_ = v___x_1273_;
v_isShared_1280_ = v_isSharedCheck_1284_;
goto v_resetjp_1278_;
}
else
{
lean_inc(v_a_1277_);
lean_dec(v___x_1273_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1284_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___x_1282_; 
if (v_isShared_1280_ == 0)
{
v___x_1282_ = v___x_1279_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v_a_1277_);
v___x_1282_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
return v___x_1282_;
}
}
}
}
else
{
lean_object* v_a_1285_; lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1292_; 
lean_dec(v_a_1254_);
lean_dec_ref(v___x_1247_);
v_a_1285_ = lean_ctor_get(v___x_1268_, 0);
v_isSharedCheck_1292_ = !lean_is_exclusive(v___x_1268_);
if (v_isSharedCheck_1292_ == 0)
{
v___x_1287_ = v___x_1268_;
v_isShared_1288_ = v_isSharedCheck_1292_;
goto v_resetjp_1286_;
}
else
{
lean_inc(v_a_1285_);
lean_dec(v___x_1268_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1292_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
lean_object* v___x_1290_; 
if (v_isShared_1288_ == 0)
{
v___x_1290_ = v___x_1287_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1291_; 
v_reuseFailAlloc_1291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1291_, 0, v_a_1285_);
v___x_1290_ = v_reuseFailAlloc_1291_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
return v___x_1290_;
}
}
}
}
else
{
lean_object* v_a_1293_; lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1300_; 
lean_dec(v_a_1254_);
lean_dec_ref(v___x_1247_);
v_a_1293_ = lean_ctor_get(v___x_1264_, 0);
v_isSharedCheck_1300_ = !lean_is_exclusive(v___x_1264_);
if (v_isSharedCheck_1300_ == 0)
{
v___x_1295_ = v___x_1264_;
v_isShared_1296_ = v_isSharedCheck_1300_;
goto v_resetjp_1294_;
}
else
{
lean_inc(v_a_1293_);
lean_dec(v___x_1264_);
v___x_1295_ = lean_box(0);
v_isShared_1296_ = v_isSharedCheck_1300_;
goto v_resetjp_1294_;
}
v_resetjp_1294_:
{
lean_object* v___x_1298_; 
if (v_isShared_1296_ == 0)
{
v___x_1298_ = v___x_1295_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_a_1293_);
v___x_1298_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
return v___x_1298_;
}
}
}
}
else
{
lean_object* v_a_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1308_; 
lean_dec(v_a_1254_);
lean_dec_ref(v___x_1247_);
lean_dec(v_a_1235_);
v_a_1301_ = lean_ctor_get(v___x_1260_, 0);
v_isSharedCheck_1308_ = !lean_is_exclusive(v___x_1260_);
if (v_isSharedCheck_1308_ == 0)
{
v___x_1303_ = v___x_1260_;
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_a_1301_);
lean_dec(v___x_1260_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v___x_1306_; 
if (v_isShared_1304_ == 0)
{
v___x_1306_ = v___x_1303_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v_a_1301_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
}
}
else
{
lean_object* v_a_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1316_; 
lean_dec(v_a_1254_);
lean_dec_ref(v___x_1247_);
lean_dec(v_a_1235_);
v_a_1309_ = lean_ctor_get(v___x_1255_, 0);
v_isSharedCheck_1316_ = !lean_is_exclusive(v___x_1255_);
if (v_isSharedCheck_1316_ == 0)
{
v___x_1311_ = v___x_1255_;
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_a_1309_);
lean_dec(v___x_1255_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v___x_1314_; 
if (v_isShared_1312_ == 0)
{
v___x_1314_ = v___x_1311_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v_a_1309_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
return v___x_1314_;
}
}
}
}
else
{
lean_object* v_a_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1324_; 
lean_dec_ref(v___x_1247_);
lean_dec(v_a_1235_);
v_a_1317_ = lean_ctor_get(v___x_1253_, 0);
v_isSharedCheck_1324_ = !lean_is_exclusive(v___x_1253_);
if (v_isSharedCheck_1324_ == 0)
{
v___x_1319_ = v___x_1253_;
v_isShared_1320_ = v_isSharedCheck_1324_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_a_1317_);
lean_dec(v___x_1253_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1324_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v___x_1322_; 
if (v_isShared_1320_ == 0)
{
v___x_1322_ = v___x_1319_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v_a_1317_);
v___x_1322_ = v_reuseFailAlloc_1323_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
return v___x_1322_;
}
}
}
}
else
{
lean_object* v_a_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1332_; 
lean_dec_ref(v___x_1247_);
lean_dec(v_a_1235_);
lean_dec_ref(v_specApplied_1227_);
lean_dec_ref(v_ss_1214_);
v_a_1325_ = lean_ctor_get(v___x_1250_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1327_ = v___x_1250_;
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_a_1325_);
lean_dec(v___x_1250_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1330_; 
if (v_isShared_1328_ == 0)
{
v___x_1330_ = v___x_1327_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_a_1325_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
}
else
{
lean_object* v_a_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1340_; 
lean_dec(v_a_1235_);
lean_dec_ref(v_specApplied_1227_);
lean_dec_ref(v_ss_1214_);
v_a_1333_ = lean_ctor_get(v___x_1243_, 0);
v_isSharedCheck_1340_ = !lean_is_exclusive(v___x_1243_);
if (v_isSharedCheck_1340_ == 0)
{
v___x_1335_ = v___x_1243_;
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_a_1333_);
lean_dec(v___x_1243_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v___x_1338_; 
if (v_isShared_1336_ == 0)
{
v___x_1338_ = v___x_1335_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v_a_1333_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
return v___x_1338_;
}
}
}
}
else
{
lean_object* v_a_1341_; lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1348_; 
lean_dec_ref(v_specApplied_1227_);
lean_dec_ref(v_epostAbstract_1226_);
lean_dec_ref(v___y_1225_);
lean_dec_ref(v_ss_1214_);
lean_dec_ref(v_prog_1209_);
v_a_1341_ = lean_ctor_get(v___x_1234_, 0);
v_isSharedCheck_1348_ = !lean_is_exclusive(v___x_1234_);
if (v_isSharedCheck_1348_ == 0)
{
v___x_1343_ = v___x_1234_;
v_isShared_1344_ = v_isSharedCheck_1348_;
goto v_resetjp_1342_;
}
else
{
lean_inc(v_a_1341_);
lean_dec(v___x_1234_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1348_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
lean_object* v___x_1346_; 
if (v_isShared_1344_ == 0)
{
v___x_1346_ = v___x_1343_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v_a_1341_);
v___x_1346_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
return v___x_1346_;
}
}
}
}
v___jp_1351_:
{
uint8_t v___x_1360_; 
v___x_1360_ = l_Lean_Expr_isMVar(v_epostAbstract_1350_);
if (v___x_1360_ == 0)
{
lean_object* v___x_1361_; 
lean_dec_ref(v_epostAbstract_1350_);
lean_inc_ref(v_epostSpec_1211_);
v___x_1361_ = l_Lean_Meta_Sym_inferType___redArg(v_epostSpec_1211_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_);
if (lean_obj_tag(v___x_1361_) == 0)
{
lean_object* v_a_1362_; lean_object* v___x_1363_; uint8_t v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; 
v_a_1362_ = lean_ctor_get(v___x_1361_, 0);
lean_inc(v_a_1362_);
lean_dec_ref_known(v___x_1361_, 1);
v___x_1363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1363_, 0, v_a_1362_);
v___x_1364_ = 0;
v___x_1365_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__9));
v___x_1366_ = l_Lean_Meta_mkFreshExprMVar(v___x_1363_, v___x_1364_, v___x_1365_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_);
if (lean_obj_tag(v___x_1366_) == 0)
{
lean_object* v_a_1367_; lean_object* v___x_1368_; uint8_t v___x_1369_; 
v_a_1367_ = lean_ctor_get(v___x_1366_, 0);
lean_inc(v_a_1367_);
lean_dec_ref_known(v___x_1366_, 1);
v___x_1368_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__11));
v___x_1369_ = l_Lean_Expr_isAppOf(v_epostSpec_1211_, v___x_1368_);
if (v___x_1369_ == 0)
{
lean_object* v___x_1370_; uint8_t v___x_1371_; 
v___x_1370_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel___closed__12));
v___x_1371_ = l_Lean_Expr_isConstOf(v_EPred_1213_, v___x_1370_);
if (v___x_1371_ == 0)
{
lean_object* v___x_1372_; 
lean_inc(v_a_1367_);
lean_inc_ref(v_epostSpec_1211_);
v___x_1372_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_decomposeEPostRel(v_EPred_1213_, v_epostSpec_1211_, v_a_1367_, v_stateArgNames_1216_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_);
if (lean_obj_tag(v___x_1372_) == 0)
{
lean_object* v_a_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; 
v_a_1373_ = lean_ctor_get(v___x_1372_, 0);
lean_inc(v_a_1373_);
lean_dec_ref_known(v___x_1372_, 1);
v___x_1374_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__14));
v___x_1375_ = lean_unsigned_to_nat(6u);
v___x_1376_ = lean_mk_empty_array_with_capacity(v___x_1375_);
lean_inc_ref(v_prog_1209_);
v___x_1377_ = lean_array_push(v___x_1376_, v_prog_1209_);
lean_inc_ref(v_postAbstract_1352_);
v___x_1378_ = lean_array_push(v___x_1377_, v_postAbstract_1352_);
v___x_1379_ = lean_array_push(v___x_1378_, v_epostSpec_1211_);
lean_inc(v_a_1367_);
v___x_1380_ = lean_array_push(v___x_1379_, v_a_1367_);
v___x_1381_ = lean_array_push(v___x_1380_, v_a_1373_);
v___x_1382_ = lean_array_push(v___x_1381_, v_specApplied_1353_);
v___x_1383_ = l_Lean_Meta_mkAppM(v___x_1374_, v___x_1382_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_);
if (lean_obj_tag(v___x_1383_) == 0)
{
lean_object* v_a_1384_; 
v_a_1384_ = lean_ctor_get(v___x_1383_, 0);
lean_inc(v_a_1384_);
lean_dec_ref_known(v___x_1383_, 1);
v___y_1225_ = v_postAbstract_1352_;
v_epostAbstract_1226_ = v_a_1367_;
v_specApplied_1227_ = v_a_1384_;
v___y_1228_ = v___y_1355_;
v___y_1229_ = v___y_1356_;
v___y_1230_ = v___y_1357_;
v___y_1231_ = v___y_1358_;
v___y_1232_ = v___y_1359_;
goto v___jp_1224_;
}
else
{
lean_object* v_a_1385_; lean_object* v___x_1387_; uint8_t v_isShared_1388_; uint8_t v_isSharedCheck_1392_; 
lean_dec(v_a_1367_);
lean_dec_ref(v_postAbstract_1352_);
lean_dec_ref(v_ss_1214_);
lean_dec_ref(v_prog_1209_);
lean_dec_ref(v_pre_1208_);
v_a_1385_ = lean_ctor_get(v___x_1383_, 0);
v_isSharedCheck_1392_ = !lean_is_exclusive(v___x_1383_);
if (v_isSharedCheck_1392_ == 0)
{
v___x_1387_ = v___x_1383_;
v_isShared_1388_ = v_isSharedCheck_1392_;
goto v_resetjp_1386_;
}
else
{
lean_inc(v_a_1385_);
lean_dec(v___x_1383_);
v___x_1387_ = lean_box(0);
v_isShared_1388_ = v_isSharedCheck_1392_;
goto v_resetjp_1386_;
}
v_resetjp_1386_:
{
lean_object* v___x_1390_; 
if (v_isShared_1388_ == 0)
{
v___x_1390_ = v___x_1387_;
goto v_reusejp_1389_;
}
else
{
lean_object* v_reuseFailAlloc_1391_; 
v_reuseFailAlloc_1391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1391_, 0, v_a_1385_);
v___x_1390_ = v_reuseFailAlloc_1391_;
goto v_reusejp_1389_;
}
v_reusejp_1389_:
{
return v___x_1390_;
}
}
}
}
else
{
lean_object* v_a_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1400_; 
lean_dec(v_a_1367_);
lean_dec_ref(v_specApplied_1353_);
lean_dec_ref(v_postAbstract_1352_);
lean_dec_ref(v_ss_1214_);
lean_dec_ref(v_epostSpec_1211_);
lean_dec_ref(v_prog_1209_);
lean_dec_ref(v_pre_1208_);
v_a_1393_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1400_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1395_ = v___x_1372_;
v_isShared_1396_ = v_isSharedCheck_1400_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_a_1393_);
lean_dec(v___x_1372_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1400_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v___x_1398_; 
if (v_isShared_1396_ == 0)
{
v___x_1398_ = v___x_1395_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1399_; 
v_reuseFailAlloc_1399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1399_, 0, v_a_1393_);
v___x_1398_ = v_reuseFailAlloc_1399_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
return v___x_1398_;
}
}
}
}
else
{
lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; 
lean_dec_ref(v_stateArgNames_1216_);
lean_dec_ref(v_epostSpec_1211_);
v___x_1401_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__16));
v___x_1402_ = lean_unsigned_to_nat(4u);
v___x_1403_ = lean_mk_empty_array_with_capacity(v___x_1402_);
lean_inc_ref(v_prog_1209_);
v___x_1404_ = lean_array_push(v___x_1403_, v_prog_1209_);
lean_inc_ref(v_postAbstract_1352_);
v___x_1405_ = lean_array_push(v___x_1404_, v_postAbstract_1352_);
lean_inc(v_a_1367_);
v___x_1406_ = lean_array_push(v___x_1405_, v_a_1367_);
v___x_1407_ = lean_array_push(v___x_1406_, v_specApplied_1353_);
v___x_1408_ = l_Lean_Meta_mkAppM(v___x_1401_, v___x_1407_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_);
if (lean_obj_tag(v___x_1408_) == 0)
{
lean_object* v_a_1409_; 
v_a_1409_ = lean_ctor_get(v___x_1408_, 0);
lean_inc(v_a_1409_);
lean_dec_ref_known(v___x_1408_, 1);
v___y_1225_ = v_postAbstract_1352_;
v_epostAbstract_1226_ = v_a_1367_;
v_specApplied_1227_ = v_a_1409_;
v___y_1228_ = v___y_1355_;
v___y_1229_ = v___y_1356_;
v___y_1230_ = v___y_1357_;
v___y_1231_ = v___y_1358_;
v___y_1232_ = v___y_1359_;
goto v___jp_1224_;
}
else
{
lean_object* v_a_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1417_; 
lean_dec(v_a_1367_);
lean_dec_ref(v_postAbstract_1352_);
lean_dec_ref(v_ss_1214_);
lean_dec_ref(v_prog_1209_);
lean_dec_ref(v_pre_1208_);
v_a_1410_ = lean_ctor_get(v___x_1408_, 0);
v_isSharedCheck_1417_ = !lean_is_exclusive(v___x_1408_);
if (v_isSharedCheck_1417_ == 0)
{
v___x_1412_ = v___x_1408_;
v_isShared_1413_ = v_isSharedCheck_1417_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_a_1410_);
lean_dec(v___x_1408_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1417_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___x_1415_; 
if (v_isShared_1413_ == 0)
{
v___x_1415_ = v___x_1412_;
goto v_reusejp_1414_;
}
else
{
lean_object* v_reuseFailAlloc_1416_; 
v_reuseFailAlloc_1416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1416_, 0, v_a_1410_);
v___x_1415_ = v_reuseFailAlloc_1416_;
goto v_reusejp_1414_;
}
v_reusejp_1414_:
{
return v___x_1415_;
}
}
}
}
}
else
{
lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; 
lean_dec_ref(v_stateArgNames_1216_);
lean_dec_ref(v_epostSpec_1211_);
v___x_1418_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__18));
v___x_1419_ = lean_unsigned_to_nat(4u);
v___x_1420_ = lean_mk_empty_array_with_capacity(v___x_1419_);
lean_inc_ref(v_prog_1209_);
v___x_1421_ = lean_array_push(v___x_1420_, v_prog_1209_);
lean_inc_ref(v_postAbstract_1352_);
v___x_1422_ = lean_array_push(v___x_1421_, v_postAbstract_1352_);
lean_inc(v_a_1367_);
v___x_1423_ = lean_array_push(v___x_1422_, v_a_1367_);
v___x_1424_ = lean_array_push(v___x_1423_, v_specApplied_1353_);
v___x_1425_ = l_Lean_Meta_mkAppM(v___x_1418_, v___x_1424_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_);
if (lean_obj_tag(v___x_1425_) == 0)
{
lean_object* v_a_1426_; 
v_a_1426_ = lean_ctor_get(v___x_1425_, 0);
lean_inc(v_a_1426_);
lean_dec_ref_known(v___x_1425_, 1);
v___y_1225_ = v_postAbstract_1352_;
v_epostAbstract_1226_ = v_a_1367_;
v_specApplied_1227_ = v_a_1426_;
v___y_1228_ = v___y_1355_;
v___y_1229_ = v___y_1356_;
v___y_1230_ = v___y_1357_;
v___y_1231_ = v___y_1358_;
v___y_1232_ = v___y_1359_;
goto v___jp_1224_;
}
else
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1434_; 
lean_dec(v_a_1367_);
lean_dec_ref(v_postAbstract_1352_);
lean_dec_ref(v_ss_1214_);
lean_dec_ref(v_prog_1209_);
lean_dec_ref(v_pre_1208_);
v_a_1427_ = lean_ctor_get(v___x_1425_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1425_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1429_ = v___x_1425_;
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v___x_1425_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1432_; 
if (v_isShared_1430_ == 0)
{
v___x_1432_ = v___x_1429_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v_a_1427_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
return v___x_1432_;
}
}
}
}
}
else
{
lean_object* v_a_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1442_; 
lean_dec_ref(v_specApplied_1353_);
lean_dec_ref(v_postAbstract_1352_);
lean_dec_ref(v_stateArgNames_1216_);
lean_dec_ref(v_ss_1214_);
lean_dec_ref(v_epostSpec_1211_);
lean_dec_ref(v_prog_1209_);
lean_dec_ref(v_pre_1208_);
v_a_1435_ = lean_ctor_get(v___x_1366_, 0);
v_isSharedCheck_1442_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1437_ = v___x_1366_;
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_a_1435_);
lean_dec(v___x_1366_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1440_; 
if (v_isShared_1438_ == 0)
{
v___x_1440_ = v___x_1437_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v_a_1435_);
v___x_1440_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
return v___x_1440_;
}
}
}
}
else
{
lean_object* v_a_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1450_; 
lean_dec_ref(v_specApplied_1353_);
lean_dec_ref(v_postAbstract_1352_);
lean_dec_ref(v_stateArgNames_1216_);
lean_dec_ref(v_ss_1214_);
lean_dec_ref(v_epostSpec_1211_);
lean_dec_ref(v_prog_1209_);
lean_dec_ref(v_pre_1208_);
v_a_1443_ = lean_ctor_get(v___x_1361_, 0);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1361_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1445_ = v___x_1361_;
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
else
{
lean_inc(v_a_1443_);
lean_dec(v___x_1361_);
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
else
{
lean_dec_ref(v_stateArgNames_1216_);
lean_dec_ref(v_epostSpec_1211_);
v___y_1225_ = v_postAbstract_1352_;
v_epostAbstract_1226_ = v_epostAbstract_1350_;
v_specApplied_1227_ = v_specApplied_1353_;
v___y_1228_ = v___y_1355_;
v___y_1229_ = v___y_1356_;
v___y_1230_ = v___y_1357_;
v___y_1231_ = v___y_1358_;
v___y_1232_ = v___y_1359_;
goto v___jp_1224_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___boxed(lean_object* v_pre_1541_, lean_object* v_prog_1542_, lean_object* v_postSpec_1543_, lean_object* v_epostSpec_1544_, lean_object* v_specProof_1545_, lean_object* v_EPred_1546_, lean_object* v_ss_1547_, lean_object* v_ssTypes_1548_, lean_object* v_stateArgNames_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_, lean_object* v_a_1556_){
_start:
{
lean_object* v_res_1557_; 
v_res_1557_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof(v_pre_1541_, v_prog_1542_, v_postSpec_1543_, v_epostSpec_1544_, v_specProof_1545_, v_EPred_1546_, v_ss_1547_, v_ssTypes_1548_, v_stateArgNames_1549_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_, v_a_1555_);
lean_dec(v_a_1555_);
lean_dec_ref(v_a_1554_);
lean_dec(v_a_1553_);
lean_dec_ref(v_a_1552_);
lean_dec(v_a_1551_);
lean_dec_ref(v_a_1550_);
lean_dec_ref(v_EPred_1546_);
return v_res_1557_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__1___redArg(lean_object* v___x_1558_, lean_object* v_stateArgNames_1559_, lean_object* v_range_1560_, lean_object* v_b_1561_, lean_object* v_i_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_){
_start:
{
lean_object* v_stop_1569_; lean_object* v_step_1570_; uint8_t v___x_1571_; 
v_stop_1569_ = lean_ctor_get(v_range_1560_, 1);
v_step_1570_ = lean_ctor_get(v_range_1560_, 2);
v___x_1571_ = lean_nat_dec_lt(v_i_1562_, v_stop_1569_);
if (v___x_1571_ == 0)
{
lean_object* v___x_1572_; lean_object* v___x_1573_; 
lean_dec(v_i_1562_);
v___x_1572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1572_, 0, v_b_1561_);
v___x_1573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1572_);
return v___x_1573_;
}
else
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1574_ = lean_array_fget_borrowed(v___x_1558_, v_i_1562_);
lean_inc(v___x_1574_);
v___x_1575_ = l_Lean_Meta_Sym_inferType___redArg(v___x_1574_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_);
if (lean_obj_tag(v___x_1575_) == 0)
{
lean_object* v_a_1576_; lean_object* v_fst_1577_; lean_object* v_snd_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1607_; 
v_a_1576_ = lean_ctor_get(v___x_1575_, 0);
lean_inc(v_a_1576_);
lean_dec_ref_known(v___x_1575_, 1);
v_fst_1577_ = lean_ctor_get(v_b_1561_, 0);
v_snd_1578_ = lean_ctor_get(v_b_1561_, 1);
v_isSharedCheck_1607_ = !lean_is_exclusive(v_b_1561_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1580_ = v_b_1561_;
v_isShared_1581_ = v_isSharedCheck_1607_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_snd_1578_);
lean_inc(v_fst_1577_);
lean_dec(v_b_1561_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1607_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
lean_object* v___x_1582_; lean_object* v___x_1583_; uint8_t v___x_1584_; lean_object* v___y_1586_; lean_object* v___x_1603_; uint8_t v___x_1604_; 
lean_inc(v_a_1576_);
v___x_1582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1582_, 0, v_a_1576_);
v___x_1583_ = lean_array_push(v_snd_1578_, v_a_1576_);
v___x_1584_ = 0;
v___x_1603_ = lean_array_get_size(v_stateArgNames_1559_);
v___x_1604_ = lean_nat_dec_lt(v_i_1562_, v___x_1603_);
if (v___x_1604_ == 0)
{
lean_object* v___x_1605_; 
v___x_1605_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkStateName___closed__1));
v___y_1586_ = v___x_1605_;
goto v___jp_1585_;
}
else
{
lean_object* v___x_1606_; 
v___x_1606_ = lean_array_fget_borrowed(v_stateArgNames_1559_, v_i_1562_);
lean_inc(v___x_1606_);
v___y_1586_ = v___x_1606_;
goto v___jp_1585_;
}
v___jp_1585_:
{
lean_object* v___x_1587_; 
v___x_1587_ = l_Lean_Meta_mkFreshExprMVar(v___x_1582_, v___x_1584_, v___y_1586_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_);
if (lean_obj_tag(v___x_1587_) == 0)
{
lean_object* v_a_1588_; lean_object* v___x_1589_; lean_object* v___x_1591_; 
v_a_1588_ = lean_ctor_get(v___x_1587_, 0);
lean_inc(v_a_1588_);
lean_dec_ref_known(v___x_1587_, 1);
v___x_1589_ = lean_array_push(v_fst_1577_, v_a_1588_);
if (v_isShared_1581_ == 0)
{
lean_ctor_set(v___x_1580_, 1, v___x_1583_);
lean_ctor_set(v___x_1580_, 0, v___x_1589_);
v___x_1591_ = v___x_1580_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v___x_1589_);
lean_ctor_set(v_reuseFailAlloc_1594_, 1, v___x_1583_);
v___x_1591_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
lean_object* v___x_1592_; 
v___x_1592_ = lean_nat_add(v_i_1562_, v_step_1570_);
lean_dec(v_i_1562_);
v_b_1561_ = v___x_1591_;
v_i_1562_ = v___x_1592_;
goto _start;
}
}
else
{
lean_object* v_a_1595_; lean_object* v___x_1597_; uint8_t v_isShared_1598_; uint8_t v_isSharedCheck_1602_; 
lean_dec_ref(v___x_1583_);
lean_del_object(v___x_1580_);
lean_dec(v_fst_1577_);
lean_dec(v_i_1562_);
v_a_1595_ = lean_ctor_get(v___x_1587_, 0);
v_isSharedCheck_1602_ = !lean_is_exclusive(v___x_1587_);
if (v_isSharedCheck_1602_ == 0)
{
v___x_1597_ = v___x_1587_;
v_isShared_1598_ = v_isSharedCheck_1602_;
goto v_resetjp_1596_;
}
else
{
lean_inc(v_a_1595_);
lean_dec(v___x_1587_);
v___x_1597_ = lean_box(0);
v_isShared_1598_ = v_isSharedCheck_1602_;
goto v_resetjp_1596_;
}
v_resetjp_1596_:
{
lean_object* v___x_1600_; 
if (v_isShared_1598_ == 0)
{
v___x_1600_ = v___x_1597_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1601_; 
v_reuseFailAlloc_1601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1601_, 0, v_a_1595_);
v___x_1600_ = v_reuseFailAlloc_1601_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
return v___x_1600_;
}
}
}
}
}
}
else
{
lean_object* v_a_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1615_; 
lean_dec(v_i_1562_);
lean_dec_ref(v_b_1561_);
v_a_1608_ = lean_ctor_get(v___x_1575_, 0);
v_isSharedCheck_1615_ = !lean_is_exclusive(v___x_1575_);
if (v_isSharedCheck_1615_ == 0)
{
v___x_1610_ = v___x_1575_;
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_a_1608_);
lean_dec(v___x_1575_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
lean_object* v___x_1613_; 
if (v_isShared_1611_ == 0)
{
v___x_1613_ = v___x_1610_;
goto v_reusejp_1612_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v_a_1608_);
v___x_1613_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1612_;
}
v_reusejp_1612_:
{
return v___x_1613_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__1___redArg___boxed(lean_object* v___x_1616_, lean_object* v_stateArgNames_1617_, lean_object* v_range_1618_, lean_object* v_b_1619_, lean_object* v_i_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__1___redArg(v___x_1616_, v_stateArgNames_1617_, v_range_1618_, v_b_1619_, v_i_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_);
lean_dec(v___y_1625_);
lean_dec_ref(v___y_1624_);
lean_dec(v___y_1623_);
lean_dec_ref(v___y_1622_);
lean_dec(v___y_1621_);
lean_dec_ref(v_range_1618_);
lean_dec_ref(v_stateArgNames_1617_);
lean_dec_ref(v___x_1616_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__0___redArg(lean_object* v_msg_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_){
_start:
{
lean_object* v_ref_1634_; lean_object* v___x_1635_; lean_object* v_a_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1644_; 
v_ref_1634_ = lean_ctor_get(v___y_1631_, 5);
v___x_1635_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise_spec__3_spec__6(v_msg_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_);
v_a_1636_ = lean_ctor_get(v___x_1635_, 0);
v_isSharedCheck_1644_ = !lean_is_exclusive(v___x_1635_);
if (v_isSharedCheck_1644_ == 0)
{
v___x_1638_ = v___x_1635_;
v_isShared_1639_ = v_isSharedCheck_1644_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_a_1636_);
lean_dec(v___x_1635_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1644_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v___x_1640_; lean_object* v___x_1642_; 
lean_inc(v_ref_1634_);
v___x_1640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1640_, 0, v_ref_1634_);
lean_ctor_set(v___x_1640_, 1, v_a_1636_);
if (v_isShared_1639_ == 0)
{
lean_ctor_set_tag(v___x_1638_, 1);
lean_ctor_set(v___x_1638_, 0, v___x_1640_);
v___x_1642_ = v___x_1638_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v___x_1640_);
v___x_1642_ = v_reuseFailAlloc_1643_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
return v___x_1642_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__0___redArg___boxed(lean_object* v_msg_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_){
_start:
{
lean_object* v_res_1651_; 
v_res_1651_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__0___redArg(v_msg_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_);
lean_dec(v___y_1649_);
lean_dec_ref(v___y_1648_);
lean_dec(v___y_1647_);
lean_dec_ref(v___y_1646_);
return v_res_1651_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__1(void){
_start:
{
lean_object* v___x_1653_; lean_object* v___x_1654_; 
v___x_1653_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__0));
v___x_1654_ = l_Lean_stringToMessageData(v___x_1653_);
return v___x_1654_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__3(void){
_start:
{
lean_object* v___x_1656_; lean_object* v___x_1657_; 
v___x_1656_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__2));
v___x_1657_ = l_Lean_stringToMessageData(v___x_1656_);
return v___x_1657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec(lean_object* v_specThm_1660_, lean_object* v_info_1661_, lean_object* v_stateArgNames_1662_, lean_object* v_a_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_){
_start:
{
lean_object* v___x_1670_; 
v___x_1670_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate(v_specThm_1660_, v_a_1665_, v_a_1666_, v_a_1667_, v_a_1668_);
if (lean_obj_tag(v___x_1670_) == 0)
{
lean_object* v_a_1671_; lean_object* v_snd_1672_; lean_object* v_snd_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1850_; 
v_a_1671_ = lean_ctor_get(v___x_1670_, 0);
lean_inc(v_a_1671_);
lean_dec_ref_known(v___x_1670_, 1);
v_snd_1672_ = lean_ctor_get(v_a_1671_, 1);
lean_inc(v_snd_1672_);
lean_dec(v_a_1671_);
v_snd_1673_ = lean_ctor_get(v_snd_1672_, 1);
v_isSharedCheck_1850_ = !lean_is_exclusive(v_snd_1672_);
if (v_isSharedCheck_1850_ == 0)
{
lean_object* v_unused_1851_; 
v_unused_1851_ = lean_ctor_get(v_snd_1672_, 0);
lean_dec(v_unused_1851_);
v___x_1675_ = v_snd_1672_;
v_isShared_1676_ = v_isSharedCheck_1850_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_snd_1673_);
lean_dec(v_snd_1672_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1850_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v_fst_1677_; lean_object* v_snd_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1849_; 
v_fst_1677_ = lean_ctor_get(v_snd_1673_, 0);
v_snd_1678_ = lean_ctor_get(v_snd_1673_, 1);
v_isSharedCheck_1849_ = !lean_is_exclusive(v_snd_1673_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1680_ = v_snd_1673_;
v_isShared_1681_ = v_isSharedCheck_1849_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_snd_1678_);
lean_inc(v_fst_1677_);
lean_dec(v_snd_1673_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1849_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___y_1683_; lean_object* v___y_1684_; lean_object* v___y_1685_; lean_object* v___y_1686_; lean_object* v___y_1687_; lean_object* v___y_1688_; lean_object* v___x_1695_; uint8_t v___x_1696_; 
lean_inc(v_snd_1678_);
v___x_1695_ = l_Lean_Expr_cleanupAnnotations(v_snd_1678_);
v___x_1696_ = l_Lean_Expr_isApp(v___x_1695_);
if (v___x_1696_ == 0)
{
lean_dec_ref(v___x_1695_);
lean_dec(v_fst_1677_);
lean_del_object(v___x_1675_);
lean_dec_ref(v_stateArgNames_1662_);
v___y_1683_ = v_a_1663_;
v___y_1684_ = v_a_1664_;
v___y_1685_ = v_a_1665_;
v___y_1686_ = v_a_1666_;
v___y_1687_ = v_a_1667_;
v___y_1688_ = v_a_1668_;
goto v___jp_1682_;
}
else
{
lean_object* v_arg_1697_; lean_object* v___y_1699_; lean_object* v___y_1700_; lean_object* v___y_1701_; lean_object* v___y_1702_; lean_object* v___y_1703_; lean_object* v___y_1704_; lean_object* v___x_1711_; uint8_t v___x_1712_; 
v_arg_1697_ = lean_ctor_get(v___x_1695_, 1);
lean_inc_ref(v_arg_1697_);
v___x_1711_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1695_);
v___x_1712_ = l_Lean_Expr_isApp(v___x_1711_);
if (v___x_1712_ == 0)
{
lean_dec_ref(v___x_1711_);
lean_dec_ref(v_arg_1697_);
lean_dec(v_fst_1677_);
lean_del_object(v___x_1675_);
lean_dec_ref(v_stateArgNames_1662_);
v___y_1683_ = v_a_1663_;
v___y_1684_ = v_a_1664_;
v___y_1685_ = v_a_1665_;
v___y_1686_ = v_a_1666_;
v___y_1687_ = v_a_1667_;
v___y_1688_ = v_a_1668_;
goto v___jp_1682_;
}
else
{
lean_object* v_arg_1713_; lean_object* v___x_1714_; uint8_t v___x_1715_; 
v_arg_1713_ = lean_ctor_get(v___x_1711_, 1);
lean_inc_ref(v_arg_1713_);
v___x_1714_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1711_);
v___x_1715_ = l_Lean_Expr_isApp(v___x_1714_);
if (v___x_1715_ == 0)
{
lean_dec_ref(v___x_1714_);
lean_dec_ref(v_arg_1713_);
lean_dec_ref(v_arg_1697_);
lean_dec(v_fst_1677_);
lean_del_object(v___x_1675_);
lean_dec_ref(v_stateArgNames_1662_);
v___y_1683_ = v_a_1663_;
v___y_1684_ = v_a_1664_;
v___y_1685_ = v_a_1665_;
v___y_1686_ = v_a_1666_;
v___y_1687_ = v_a_1667_;
v___y_1688_ = v_a_1668_;
goto v___jp_1682_;
}
else
{
lean_object* v___x_1716_; uint8_t v___x_1717_; 
v___x_1716_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1714_);
v___x_1717_ = l_Lean_Expr_isApp(v___x_1716_);
if (v___x_1717_ == 0)
{
lean_dec_ref(v___x_1716_);
lean_dec_ref(v_arg_1713_);
lean_dec_ref(v_arg_1697_);
lean_dec(v_fst_1677_);
lean_del_object(v___x_1675_);
lean_dec_ref(v_stateArgNames_1662_);
v___y_1683_ = v_a_1663_;
v___y_1684_ = v_a_1664_;
v___y_1685_ = v_a_1665_;
v___y_1686_ = v_a_1666_;
v___y_1687_ = v_a_1667_;
v___y_1688_ = v_a_1668_;
goto v___jp_1682_;
}
else
{
lean_object* v_arg_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; uint8_t v___x_1721_; 
v_arg_1718_ = lean_ctor_get(v___x_1716_, 1);
lean_inc_ref(v_arg_1718_);
v___x_1719_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1716_);
v___x_1720_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkPostPointwisePremise___lam__0___closed__4));
v___x_1721_ = l_Lean_Expr_isConstOf(v___x_1719_, v___x_1720_);
lean_dec_ref(v___x_1719_);
if (v___x_1721_ == 0)
{
lean_dec_ref(v_arg_1718_);
lean_dec_ref(v_arg_1713_);
lean_dec_ref(v_arg_1697_);
lean_dec(v_fst_1677_);
lean_del_object(v___x_1675_);
lean_dec_ref(v_stateArgNames_1662_);
v___y_1683_ = v_a_1663_;
v___y_1684_ = v_a_1664_;
v___y_1685_ = v_a_1665_;
v___y_1686_ = v_a_1666_;
v___y_1687_ = v_a_1667_;
v___y_1688_ = v_a_1668_;
goto v___jp_1682_;
}
else
{
lean_object* v___x_1722_; lean_object* v___x_1723_; 
lean_del_object(v___x_1680_);
lean_dec(v_snd_1678_);
v___x_1722_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_Pred(v_info_1661_);
v___x_1723_ = l_Lean_Meta_isExprDefEqGuarded(v___x_1722_, v_arg_1718_, v_a_1665_, v_a_1666_, v_a_1667_, v_a_1668_);
if (lean_obj_tag(v___x_1723_) == 0)
{
lean_object* v_a_1724_; lean_object* v___x_1726_; uint8_t v_isShared_1727_; uint8_t v_isSharedCheck_1840_; 
v_a_1724_ = lean_ctor_get(v___x_1723_, 0);
v_isSharedCheck_1840_ = !lean_is_exclusive(v___x_1723_);
if (v_isSharedCheck_1840_ == 0)
{
v___x_1726_ = v___x_1723_;
v_isShared_1727_ = v_isSharedCheck_1840_;
goto v_resetjp_1725_;
}
else
{
lean_inc(v_a_1724_);
lean_dec(v___x_1723_);
v___x_1726_ = lean_box(0);
v_isShared_1727_ = v_isSharedCheck_1840_;
goto v_resetjp_1725_;
}
v_resetjp_1725_:
{
uint8_t v___x_1728_; 
v___x_1728_ = lean_unbox(v_a_1724_);
lean_dec(v_a_1724_);
if (v___x_1728_ == 0)
{
lean_object* v___x_1729_; lean_object* v___x_1731_; 
lean_dec_ref(v_arg_1713_);
lean_dec_ref(v_arg_1697_);
lean_dec(v_fst_1677_);
lean_del_object(v___x_1675_);
lean_dec_ref(v_stateArgNames_1662_);
v___x_1729_ = lean_box(0);
if (v_isShared_1727_ == 0)
{
lean_ctor_set(v___x_1726_, 0, v___x_1729_);
v___x_1731_ = v___x_1726_;
goto v_reusejp_1730_;
}
else
{
lean_object* v_reuseFailAlloc_1732_; 
v_reuseFailAlloc_1732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1732_, 0, v___x_1729_);
v___x_1731_ = v_reuseFailAlloc_1732_;
goto v_reusejp_1730_;
}
v_reusejp_1730_:
{
return v___x_1731_;
}
}
else
{
lean_object* v___x_1733_; uint8_t v___x_1734_; 
lean_del_object(v___x_1726_);
lean_inc_ref(v_arg_1697_);
v___x_1733_ = l_Lean_Expr_cleanupAnnotations(v_arg_1697_);
v___x_1734_ = l_Lean_Expr_isApp(v___x_1733_);
if (v___x_1734_ == 0)
{
lean_dec_ref(v___x_1733_);
lean_dec_ref(v_arg_1713_);
lean_dec(v_fst_1677_);
lean_dec_ref(v_stateArgNames_1662_);
v___y_1699_ = v_a_1663_;
v___y_1700_ = v_a_1664_;
v___y_1701_ = v_a_1665_;
v___y_1702_ = v_a_1666_;
v___y_1703_ = v_a_1667_;
v___y_1704_ = v_a_1668_;
goto v___jp_1698_;
}
else
{
lean_object* v_arg_1735_; lean_object* v___x_1736_; uint8_t v___x_1737_; 
v_arg_1735_ = lean_ctor_get(v___x_1733_, 1);
lean_inc_ref(v_arg_1735_);
v___x_1736_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1733_);
v___x_1737_ = l_Lean_Expr_isApp(v___x_1736_);
if (v___x_1737_ == 0)
{
lean_dec_ref(v___x_1736_);
lean_dec_ref(v_arg_1735_);
lean_dec_ref(v_arg_1713_);
lean_dec(v_fst_1677_);
lean_dec_ref(v_stateArgNames_1662_);
v___y_1699_ = v_a_1663_;
v___y_1700_ = v_a_1664_;
v___y_1701_ = v_a_1665_;
v___y_1702_ = v_a_1666_;
v___y_1703_ = v_a_1667_;
v___y_1704_ = v_a_1668_;
goto v___jp_1698_;
}
else
{
lean_object* v_arg_1738_; lean_object* v___x_1739_; uint8_t v___x_1740_; 
v_arg_1738_ = lean_ctor_get(v___x_1736_, 1);
lean_inc_ref(v_arg_1738_);
v___x_1739_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1736_);
v___x_1740_ = l_Lean_Expr_isApp(v___x_1739_);
if (v___x_1740_ == 0)
{
lean_dec_ref(v___x_1739_);
lean_dec_ref(v_arg_1738_);
lean_dec_ref(v_arg_1735_);
lean_dec_ref(v_arg_1713_);
lean_dec(v_fst_1677_);
lean_dec_ref(v_stateArgNames_1662_);
v___y_1699_ = v_a_1663_;
v___y_1700_ = v_a_1664_;
v___y_1701_ = v_a_1665_;
v___y_1702_ = v_a_1666_;
v___y_1703_ = v_a_1667_;
v___y_1704_ = v_a_1668_;
goto v___jp_1698_;
}
else
{
lean_object* v_arg_1741_; lean_object* v___x_1742_; uint8_t v___x_1743_; 
v_arg_1741_ = lean_ctor_get(v___x_1739_, 1);
lean_inc_ref(v_arg_1741_);
v___x_1742_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1739_);
v___x_1743_ = l_Lean_Expr_isApp(v___x_1742_);
if (v___x_1743_ == 0)
{
lean_dec_ref(v___x_1742_);
lean_dec_ref(v_arg_1741_);
lean_dec_ref(v_arg_1738_);
lean_dec_ref(v_arg_1735_);
lean_dec_ref(v_arg_1713_);
lean_dec(v_fst_1677_);
lean_dec_ref(v_stateArgNames_1662_);
v___y_1699_ = v_a_1663_;
v___y_1700_ = v_a_1664_;
v___y_1701_ = v_a_1665_;
v___y_1702_ = v_a_1666_;
v___y_1703_ = v_a_1667_;
v___y_1704_ = v_a_1668_;
goto v___jp_1698_;
}
else
{
lean_object* v___x_1744_; uint8_t v___x_1745_; 
v___x_1744_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1742_);
v___x_1745_ = l_Lean_Expr_isApp(v___x_1744_);
if (v___x_1745_ == 0)
{
lean_dec_ref(v___x_1744_);
lean_dec_ref(v_arg_1741_);
lean_dec_ref(v_arg_1738_);
lean_dec_ref(v_arg_1735_);
lean_dec_ref(v_arg_1713_);
lean_dec(v_fst_1677_);
lean_dec_ref(v_stateArgNames_1662_);
v___y_1699_ = v_a_1663_;
v___y_1700_ = v_a_1664_;
v___y_1701_ = v_a_1665_;
v___y_1702_ = v_a_1666_;
v___y_1703_ = v_a_1667_;
v___y_1704_ = v_a_1668_;
goto v___jp_1698_;
}
else
{
lean_object* v_arg_1746_; lean_object* v___x_1747_; uint8_t v___x_1748_; 
v_arg_1746_ = lean_ctor_get(v___x_1744_, 1);
lean_inc_ref(v_arg_1746_);
v___x_1747_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1744_);
v___x_1748_ = l_Lean_Expr_isApp(v___x_1747_);
if (v___x_1748_ == 0)
{
lean_dec_ref(v___x_1747_);
lean_dec_ref(v_arg_1746_);
lean_dec_ref(v_arg_1741_);
lean_dec_ref(v_arg_1738_);
lean_dec_ref(v_arg_1735_);
lean_dec_ref(v_arg_1713_);
lean_dec(v_fst_1677_);
lean_dec_ref(v_stateArgNames_1662_);
v___y_1699_ = v_a_1663_;
v___y_1700_ = v_a_1664_;
v___y_1701_ = v_a_1665_;
v___y_1702_ = v_a_1666_;
v___y_1703_ = v_a_1667_;
v___y_1704_ = v_a_1668_;
goto v___jp_1698_;
}
else
{
lean_object* v___x_1749_; uint8_t v___x_1750_; 
v___x_1749_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1747_);
v___x_1750_ = l_Lean_Expr_isApp(v___x_1749_);
if (v___x_1750_ == 0)
{
lean_dec_ref(v___x_1749_);
lean_dec_ref(v_arg_1746_);
lean_dec_ref(v_arg_1741_);
lean_dec_ref(v_arg_1738_);
lean_dec_ref(v_arg_1735_);
lean_dec_ref(v_arg_1713_);
lean_dec(v_fst_1677_);
lean_dec_ref(v_stateArgNames_1662_);
v___y_1699_ = v_a_1663_;
v___y_1700_ = v_a_1664_;
v___y_1701_ = v_a_1665_;
v___y_1702_ = v_a_1666_;
v___y_1703_ = v_a_1667_;
v___y_1704_ = v_a_1668_;
goto v___jp_1698_;
}
else
{
lean_object* v___x_1751_; uint8_t v___x_1752_; 
v___x_1751_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1749_);
v___x_1752_ = l_Lean_Expr_isApp(v___x_1751_);
if (v___x_1752_ == 0)
{
lean_dec_ref(v___x_1751_);
lean_dec_ref(v_arg_1746_);
lean_dec_ref(v_arg_1741_);
lean_dec_ref(v_arg_1738_);
lean_dec_ref(v_arg_1735_);
lean_dec_ref(v_arg_1713_);
lean_dec(v_fst_1677_);
lean_dec_ref(v_stateArgNames_1662_);
v___y_1699_ = v_a_1663_;
v___y_1700_ = v_a_1664_;
v___y_1701_ = v_a_1665_;
v___y_1702_ = v_a_1666_;
v___y_1703_ = v_a_1667_;
v___y_1704_ = v_a_1668_;
goto v___jp_1698_;
}
else
{
lean_object* v___x_1753_; uint8_t v___x_1754_; 
v___x_1753_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1751_);
v___x_1754_ = l_Lean_Expr_isApp(v___x_1753_);
if (v___x_1754_ == 0)
{
lean_dec_ref(v___x_1753_);
lean_dec_ref(v_arg_1746_);
lean_dec_ref(v_arg_1741_);
lean_dec_ref(v_arg_1738_);
lean_dec_ref(v_arg_1735_);
lean_dec_ref(v_arg_1713_);
lean_dec(v_fst_1677_);
lean_dec_ref(v_stateArgNames_1662_);
v___y_1699_ = v_a_1663_;
v___y_1700_ = v_a_1664_;
v___y_1701_ = v_a_1665_;
v___y_1702_ = v_a_1666_;
v___y_1703_ = v_a_1667_;
v___y_1704_ = v_a_1668_;
goto v___jp_1698_;
}
else
{
lean_object* v___x_1755_; uint8_t v___x_1756_; 
v___x_1755_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1753_);
v___x_1756_ = l_Lean_Expr_isApp(v___x_1755_);
if (v___x_1756_ == 0)
{
lean_dec_ref(v___x_1755_);
lean_dec_ref(v_arg_1746_);
lean_dec_ref(v_arg_1741_);
lean_dec_ref(v_arg_1738_);
lean_dec_ref(v_arg_1735_);
lean_dec_ref(v_arg_1713_);
lean_dec(v_fst_1677_);
lean_dec_ref(v_stateArgNames_1662_);
v___y_1699_ = v_a_1663_;
v___y_1700_ = v_a_1664_;
v___y_1701_ = v_a_1665_;
v___y_1702_ = v_a_1666_;
v___y_1703_ = v_a_1667_;
v___y_1704_ = v_a_1668_;
goto v___jp_1698_;
}
else
{
lean_object* v___x_1757_; uint8_t v___x_1758_; 
v___x_1757_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1755_);
v___x_1758_ = l_Lean_Expr_isApp(v___x_1757_);
if (v___x_1758_ == 0)
{
lean_dec_ref(v___x_1757_);
lean_dec_ref(v_arg_1746_);
lean_dec_ref(v_arg_1741_);
lean_dec_ref(v_arg_1738_);
lean_dec_ref(v_arg_1735_);
lean_dec_ref(v_arg_1713_);
lean_dec(v_fst_1677_);
lean_dec_ref(v_stateArgNames_1662_);
v___y_1699_ = v_a_1663_;
v___y_1700_ = v_a_1664_;
v___y_1701_ = v_a_1665_;
v___y_1702_ = v_a_1666_;
v___y_1703_ = v_a_1667_;
v___y_1704_ = v_a_1668_;
goto v___jp_1698_;
}
else
{
lean_object* v___x_1759_; lean_object* v___x_1760_; uint8_t v___x_1761_; 
v___x_1759_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1757_);
v___x_1760_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof___closed__1));
v___x_1761_ = l_Lean_Expr_isConstOf(v___x_1759_, v___x_1760_);
lean_dec_ref(v___x_1759_);
if (v___x_1761_ == 0)
{
lean_dec_ref(v_arg_1746_);
lean_dec_ref(v_arg_1741_);
lean_dec_ref(v_arg_1738_);
lean_dec_ref(v_arg_1735_);
lean_dec_ref(v_arg_1713_);
lean_dec(v_fst_1677_);
lean_dec_ref(v_stateArgNames_1662_);
v___y_1699_ = v_a_1663_;
v___y_1700_ = v_a_1664_;
v___y_1701_ = v_a_1665_;
v___y_1702_ = v_a_1666_;
v___y_1703_ = v_a_1667_;
v___y_1704_ = v_a_1668_;
goto v___jp_1698_;
}
else
{
lean_object* v___x_1762_; lean_object* v___x_1763_; 
lean_dec_ref(v_arg_1697_);
lean_del_object(v___x_1675_);
v___x_1762_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_instWP(v_info_1661_);
v___x_1763_ = l_Lean_Meta_isExprDefEqGuarded(v___x_1762_, v_arg_1746_, v_a_1665_, v_a_1666_, v_a_1667_, v_a_1668_);
if (lean_obj_tag(v___x_1763_) == 0)
{
lean_object* v_a_1764_; lean_object* v___x_1766_; uint8_t v_isShared_1767_; uint8_t v_isSharedCheck_1831_; 
v_a_1764_ = lean_ctor_get(v___x_1763_, 0);
v_isSharedCheck_1831_ = !lean_is_exclusive(v___x_1763_);
if (v_isSharedCheck_1831_ == 0)
{
v___x_1766_ = v___x_1763_;
v_isShared_1767_ = v_isSharedCheck_1831_;
goto v_resetjp_1765_;
}
else
{
lean_inc(v_a_1764_);
lean_dec(v___x_1763_);
v___x_1766_ = lean_box(0);
v_isShared_1767_ = v_isSharedCheck_1831_;
goto v_resetjp_1765_;
}
v_resetjp_1765_:
{
uint8_t v___x_1768_; 
v___x_1768_ = lean_unbox(v_a_1764_);
lean_dec(v_a_1764_);
if (v___x_1768_ == 0)
{
lean_object* v___x_1769_; lean_object* v___x_1771_; 
lean_dec_ref(v_arg_1741_);
lean_dec_ref(v_arg_1738_);
lean_dec_ref(v_arg_1735_);
lean_dec_ref(v_arg_1713_);
lean_dec(v_fst_1677_);
lean_dec_ref(v_stateArgNames_1662_);
v___x_1769_ = lean_box(0);
if (v_isShared_1767_ == 0)
{
lean_ctor_set(v___x_1766_, 0, v___x_1769_);
v___x_1771_ = v___x_1766_;
goto v_reusejp_1770_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v___x_1769_);
v___x_1771_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1770_;
}
v_reusejp_1770_:
{
return v___x_1771_;
}
}
else
{
lean_object* v_excessArgs_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; 
lean_del_object(v___x_1766_);
v_excessArgs_1773_ = lean_ctor_get(v_info_1661_, 2);
v___x_1774_ = lean_unsigned_to_nat(0u);
v___x_1775_ = lean_array_get_size(v_excessArgs_1773_);
v___x_1776_ = lean_unsigned_to_nat(1u);
v___x_1777_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1777_, 0, v___x_1774_);
lean_ctor_set(v___x_1777_, 1, v___x_1775_);
lean_ctor_set(v___x_1777_, 2, v___x_1776_);
v___x_1778_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__4));
v___x_1779_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__1___redArg(v_excessArgs_1773_, v_stateArgNames_1662_, v___x_1777_, v___x_1778_, v___x_1774_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_, v_a_1668_);
lean_dec_ref_known(v___x_1777_, 3);
if (lean_obj_tag(v___x_1779_) == 0)
{
lean_object* v_a_1780_; lean_object* v_val_1781_; lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1822_; 
v_a_1780_ = lean_ctor_get(v___x_1779_, 0);
lean_inc(v_a_1780_);
lean_dec_ref_known(v___x_1779_, 1);
v_val_1781_ = lean_ctor_get(v_a_1780_, 0);
v_isSharedCheck_1822_ = !lean_is_exclusive(v_a_1780_);
if (v_isSharedCheck_1822_ == 0)
{
v___x_1783_ = v_a_1780_;
v_isShared_1784_ = v_isSharedCheck_1822_;
goto v_resetjp_1782_;
}
else
{
lean_inc(v_val_1781_);
lean_dec(v_a_1780_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1822_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
lean_object* v_fst_1785_; lean_object* v_snd_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; 
v_fst_1785_ = lean_ctor_get(v_val_1781_, 0);
lean_inc(v_fst_1785_);
v_snd_1786_ = lean_ctor_get(v_val_1781_, 1);
lean_inc(v_snd_1786_);
lean_dec(v_val_1781_);
v___x_1787_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_EPred(v_info_1661_);
v___x_1788_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSpecBackwardProof(v_arg_1713_, v_arg_1741_, v_arg_1738_, v_arg_1735_, v_fst_1677_, v___x_1787_, v_fst_1785_, v_snd_1786_, v_stateArgNames_1662_, v_a_1663_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_, v_a_1668_);
lean_dec_ref(v___x_1787_);
if (lean_obj_tag(v___x_1788_) == 0)
{
lean_object* v_a_1789_; lean_object* v_paramNames_1790_; lean_object* v_expr_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; 
v_a_1789_ = lean_ctor_get(v___x_1788_, 0);
lean_inc(v_a_1789_);
lean_dec_ref_known(v___x_1788_, 1);
v_paramNames_1790_ = lean_ctor_get(v_a_1789_, 0);
lean_inc_ref(v_paramNames_1790_);
v_expr_1791_ = lean_ctor_get(v_a_1789_, 2);
lean_inc_ref(v_expr_1791_);
lean_dec(v_a_1789_);
v___x_1792_ = lean_array_to_list(v_paramNames_1790_);
v___x_1793_ = lean_box(0);
v___x_1794_ = l_Lean_Meta_Sym_mkBackwardRuleFromExpr(v_expr_1791_, v___x_1792_, v___x_1793_, v_a_1665_, v_a_1666_, v_a_1667_, v_a_1668_);
if (lean_obj_tag(v___x_1794_) == 0)
{
lean_object* v_a_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1805_; 
v_a_1795_ = lean_ctor_get(v___x_1794_, 0);
v_isSharedCheck_1805_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1797_ = v___x_1794_;
v_isShared_1798_ = v_isSharedCheck_1805_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_a_1795_);
lean_dec(v___x_1794_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1805_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___x_1800_; 
if (v_isShared_1784_ == 0)
{
lean_ctor_set(v___x_1783_, 0, v_a_1795_);
v___x_1800_ = v___x_1783_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_a_1795_);
v___x_1800_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
lean_object* v___x_1802_; 
if (v_isShared_1798_ == 0)
{
lean_ctor_set(v___x_1797_, 0, v___x_1800_);
v___x_1802_ = v___x_1797_;
goto v_reusejp_1801_;
}
else
{
lean_object* v_reuseFailAlloc_1803_; 
v_reuseFailAlloc_1803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1803_, 0, v___x_1800_);
v___x_1802_ = v_reuseFailAlloc_1803_;
goto v_reusejp_1801_;
}
v_reusejp_1801_:
{
return v___x_1802_;
}
}
}
}
else
{
lean_object* v_a_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1813_; 
lean_del_object(v___x_1783_);
v_a_1806_ = lean_ctor_get(v___x_1794_, 0);
v_isSharedCheck_1813_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1808_ = v___x_1794_;
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_a_1806_);
lean_dec(v___x_1794_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v___x_1811_; 
if (v_isShared_1809_ == 0)
{
v___x_1811_ = v___x_1808_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v_a_1806_);
v___x_1811_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
return v___x_1811_;
}
}
}
}
else
{
lean_object* v_a_1814_; lean_object* v___x_1816_; uint8_t v_isShared_1817_; uint8_t v_isSharedCheck_1821_; 
lean_del_object(v___x_1783_);
v_a_1814_ = lean_ctor_get(v___x_1788_, 0);
v_isSharedCheck_1821_ = !lean_is_exclusive(v___x_1788_);
if (v_isSharedCheck_1821_ == 0)
{
v___x_1816_ = v___x_1788_;
v_isShared_1817_ = v_isSharedCheck_1821_;
goto v_resetjp_1815_;
}
else
{
lean_inc(v_a_1814_);
lean_dec(v___x_1788_);
v___x_1816_ = lean_box(0);
v_isShared_1817_ = v_isSharedCheck_1821_;
goto v_resetjp_1815_;
}
v_resetjp_1815_:
{
lean_object* v___x_1819_; 
if (v_isShared_1817_ == 0)
{
v___x_1819_ = v___x_1816_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v_a_1814_);
v___x_1819_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
return v___x_1819_;
}
}
}
}
}
else
{
lean_object* v_a_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1830_; 
lean_dec_ref(v_arg_1741_);
lean_dec_ref(v_arg_1738_);
lean_dec_ref(v_arg_1735_);
lean_dec_ref(v_arg_1713_);
lean_dec(v_fst_1677_);
lean_dec_ref(v_stateArgNames_1662_);
v_a_1823_ = lean_ctor_get(v___x_1779_, 0);
v_isSharedCheck_1830_ = !lean_is_exclusive(v___x_1779_);
if (v_isSharedCheck_1830_ == 0)
{
v___x_1825_ = v___x_1779_;
v_isShared_1826_ = v_isSharedCheck_1830_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_a_1823_);
lean_dec(v___x_1779_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1830_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v___x_1828_; 
if (v_isShared_1826_ == 0)
{
v___x_1828_ = v___x_1825_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1829_; 
v_reuseFailAlloc_1829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1829_, 0, v_a_1823_);
v___x_1828_ = v_reuseFailAlloc_1829_;
goto v_reusejp_1827_;
}
v_reusejp_1827_:
{
return v___x_1828_;
}
}
}
}
}
}
else
{
lean_object* v_a_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1839_; 
lean_dec_ref(v_arg_1741_);
lean_dec_ref(v_arg_1738_);
lean_dec_ref(v_arg_1735_);
lean_dec_ref(v_arg_1713_);
lean_dec(v_fst_1677_);
lean_dec_ref(v_stateArgNames_1662_);
v_a_1832_ = lean_ctor_get(v___x_1763_, 0);
v_isSharedCheck_1839_ = !lean_is_exclusive(v___x_1763_);
if (v_isSharedCheck_1839_ == 0)
{
v___x_1834_ = v___x_1763_;
v_isShared_1835_ = v_isSharedCheck_1839_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_a_1832_);
lean_dec(v___x_1763_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1839_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v___x_1837_; 
if (v_isShared_1835_ == 0)
{
v___x_1837_ = v___x_1834_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v_a_1832_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
return v___x_1837_;
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
else
{
lean_object* v_a_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1848_; 
lean_dec_ref(v_arg_1713_);
lean_dec_ref(v_arg_1697_);
lean_dec(v_fst_1677_);
lean_del_object(v___x_1675_);
lean_dec_ref(v_stateArgNames_1662_);
v_a_1841_ = lean_ctor_get(v___x_1723_, 0);
v_isSharedCheck_1848_ = !lean_is_exclusive(v___x_1723_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1843_ = v___x_1723_;
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_a_1841_);
lean_dec(v___x_1723_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1846_; 
if (v_isShared_1844_ == 0)
{
v___x_1846_ = v___x_1843_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v_a_1841_);
v___x_1846_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
return v___x_1846_;
}
}
}
}
}
}
}
v___jp_1698_:
{
lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1708_; 
v___x_1705_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__3, &l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__3_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__3);
v___x_1706_ = l_Lean_MessageData_ofExpr(v_arg_1697_);
if (v_isShared_1676_ == 0)
{
lean_ctor_set_tag(v___x_1675_, 7);
lean_ctor_set(v___x_1675_, 1, v___x_1706_);
lean_ctor_set(v___x_1675_, 0, v___x_1705_);
v___x_1708_ = v___x_1675_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v___x_1705_);
lean_ctor_set(v_reuseFailAlloc_1710_, 1, v___x_1706_);
v___x_1708_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
lean_object* v___x_1709_; 
v___x_1709_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__0___redArg(v___x_1708_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_);
return v___x_1709_;
}
}
}
v___jp_1682_:
{
lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1692_; 
v___x_1689_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___closed__1);
v___x_1690_ = l_Lean_MessageData_ofExpr(v_snd_1678_);
if (v_isShared_1681_ == 0)
{
lean_ctor_set_tag(v___x_1680_, 7);
lean_ctor_set(v___x_1680_, 1, v___x_1690_);
lean_ctor_set(v___x_1680_, 0, v___x_1689_);
v___x_1692_ = v___x_1680_;
goto v_reusejp_1691_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v___x_1689_);
lean_ctor_set(v_reuseFailAlloc_1694_, 1, v___x_1690_);
v___x_1692_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1691_;
}
v_reusejp_1691_:
{
lean_object* v___x_1693_; 
v___x_1693_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__0___redArg(v___x_1692_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
return v___x_1693_;
}
}
}
}
}
else
{
lean_object* v_a_1852_; lean_object* v___x_1854_; uint8_t v_isShared_1855_; uint8_t v_isSharedCheck_1859_; 
lean_dec_ref(v_stateArgNames_1662_);
v_a_1852_ = lean_ctor_get(v___x_1670_, 0);
v_isSharedCheck_1859_ = !lean_is_exclusive(v___x_1670_);
if (v_isSharedCheck_1859_ == 0)
{
v___x_1854_ = v___x_1670_;
v_isShared_1855_ = v_isSharedCheck_1859_;
goto v_resetjp_1853_;
}
else
{
lean_inc(v_a_1852_);
lean_dec(v___x_1670_);
v___x_1854_ = lean_box(0);
v_isShared_1855_ = v_isSharedCheck_1859_;
goto v_resetjp_1853_;
}
v_resetjp_1853_:
{
lean_object* v___x_1857_; 
if (v_isShared_1855_ == 0)
{
v___x_1857_ = v___x_1854_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v_a_1852_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec___boxed(lean_object* v_specThm_1860_, lean_object* v_info_1861_, lean_object* v_stateArgNames_1862_, lean_object* v_a_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_, lean_object* v_a_1867_, lean_object* v_a_1868_, lean_object* v_a_1869_){
_start:
{
lean_object* v_res_1870_; 
v_res_1870_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec(v_specThm_1860_, v_info_1861_, v_stateArgNames_1862_, v_a_1863_, v_a_1864_, v_a_1865_, v_a_1866_, v_a_1867_, v_a_1868_);
lean_dec(v_a_1868_);
lean_dec_ref(v_a_1867_);
lean_dec(v_a_1866_);
lean_dec_ref(v_a_1865_);
lean_dec(v_a_1864_);
lean_dec_ref(v_a_1863_);
lean_dec_ref(v_info_1861_);
return v_res_1870_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__0(lean_object* v_00_u03b1_1871_, lean_object* v_msg_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_){
_start:
{
lean_object* v___x_1880_; 
v___x_1880_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__0___redArg(v_msg_1872_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_);
return v___x_1880_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__0___boxed(lean_object* v_00_u03b1_1881_, lean_object* v_msg_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_){
_start:
{
lean_object* v_res_1890_; 
v_res_1890_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__0(v_00_u03b1_1881_, v_msg_1882_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_);
lean_dec(v___y_1888_);
lean_dec_ref(v___y_1887_);
lean_dec(v___y_1886_);
lean_dec_ref(v___y_1885_);
lean_dec(v___y_1884_);
lean_dec_ref(v___y_1883_);
return v_res_1890_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__1(lean_object* v___x_1891_, lean_object* v_stateArgNames_1892_, lean_object* v_range_1893_, lean_object* v_b_1894_, lean_object* v_i_1895_, lean_object* v_hs_1896_, lean_object* v_hl_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_){
_start:
{
lean_object* v___x_1905_; 
v___x_1905_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__1___redArg(v___x_1891_, v_stateArgNames_1892_, v_range_1893_, v_b_1894_, v_i_1895_, v___y_1899_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__1___boxed(lean_object* v___x_1906_, lean_object* v_stateArgNames_1907_, lean_object* v_range_1908_, lean_object* v_b_1909_, lean_object* v_i_1910_, lean_object* v_hs_1911_, lean_object* v_hl_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_){
_start:
{
lean_object* v_res_1920_; 
v_res_1920_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec_spec__1(v___x_1906_, v_stateArgNames_1907_, v_range_1908_, v_b_1909_, v_i_1910_, v_hs_1911_, v_hl_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_, v___y_1918_);
lean_dec(v___y_1918_);
lean_dec_ref(v___y_1917_);
lean_dec(v___y_1916_);
lean_dec_ref(v___y_1915_);
lean_dec(v___y_1914_);
lean_dec_ref(v___y_1913_);
lean_dec_ref(v_range_1908_);
lean_dec_ref(v_stateArgNames_1907_);
lean_dec_ref(v___x_1906_);
return v_res_1920_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Spec(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Spec(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Types(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Spec(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Spec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Spec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Spec(builtin);
}
#ifdef __cplusplus
}
#endif
