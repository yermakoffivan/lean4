// Lean compiler output
// Module: Lean.Elab.Tactic.Do.Internal.VCGen.RuleConstruct.Simp
// Imports: public import Lean.Elab.Tactic.Do.Internal.VCGen.RuleConstruct.Spec
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
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_unfoldReducible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Meta_reduceProj_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_Sym_inferType___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkStateName(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_Pred(lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_EPred(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_m(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqMPR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_abstractMVars(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_instWP(lean_object*);
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Simp_0__Lean_Elab_Tactic_Do_Internal_VCGen_preprocessSimpSpecExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Simp_0__Lean_Elab_Tactic_Do_Internal_VCGen_preprocessSimpSpecExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Simp_0__Lean_Elab_Tactic_Do_Internal_VCGen_preprocessSimpSpecExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Simp_0__Lean_Elab_Tactic_Do_Internal_VCGen_preprocessSimpSpecExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "wp"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(147, 6, 42, 106, 0, 77, 75, 237)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "post"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 28, 93, 107, 152, 77, 110, 29)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "epost"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(85, 242, 133, 56, 224, 241, 177, 168)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pre"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(234, 68, 201, 77, 117, 184, 192, 140)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__6_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PartialOrder"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__8_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rel"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__10_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__10_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(179, 3, 218, 237, 219, 72, 94, 177)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__10_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(41, 174, 7, 105, 99, 77, 97, 125)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__12_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "prog"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(162, 250, 175, 144, 19, 71, 92, 111)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__14_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__11_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__11___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__12___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14_spec__20___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14_spec__20___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16_spec__23___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14_spec__20___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13_spec__18___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13_spec__18___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__30___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__28___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__28___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__29_spec__31_spec__32___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__29_spec__31___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__29___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__15___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__15___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__11(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__15(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__10(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__17(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___closed__0;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___closed__1;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "expected a WPMonad instance, got "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "WPMonad"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(190, 109, 201, 105, 189, 199, 3, 48)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "simp spec is not an equation: "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__5;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__6_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__7_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__8_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14_spec__20(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__12(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13_spec__18___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__28(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__28___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__29(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__30(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__11_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__29_spec__31(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__29_spec__31_spec__32(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Simp_0__Lean_Elab_Tactic_Do_Internal_VCGen_preprocessSimpSpecExpr___redArg(lean_object* v_a_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = l_Lean_Meta_Sym_unfoldReducible(v_a_1_, v_a_3_, v_a_4_, v_a_5_, v_a_6_);
if (lean_obj_tag(v___x_8_) == 0)
{
lean_object* v_a_9_; lean_object* v___x_10_; 
v_a_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc(v_a_9_);
lean_dec_ref_known(v___x_8_, 1);
v___x_10_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_9_, v_a_2_);
return v___x_10_;
}
else
{
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Simp_0__Lean_Elab_Tactic_Do_Internal_VCGen_preprocessSimpSpecExpr___redArg___boxed(lean_object* v_a_11_, lean_object* v_a_12_, lean_object* v_a_13_, lean_object* v_a_14_, lean_object* v_a_15_, lean_object* v_a_16_, lean_object* v_a_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Simp_0__Lean_Elab_Tactic_Do_Internal_VCGen_preprocessSimpSpecExpr___redArg(v_a_11_, v_a_12_, v_a_13_, v_a_14_, v_a_15_, v_a_16_);
lean_dec(v_a_16_);
lean_dec_ref(v_a_15_);
lean_dec(v_a_14_);
lean_dec_ref(v_a_13_);
lean_dec(v_a_12_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Simp_0__Lean_Elab_Tactic_Do_Internal_VCGen_preprocessSimpSpecExpr(lean_object* v_a_19_, lean_object* v_a_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_, lean_object* v_a_24_, lean_object* v_a_25_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Simp_0__Lean_Elab_Tactic_Do_Internal_VCGen_preprocessSimpSpecExpr___redArg(v_a_19_, v_a_21_, v_a_22_, v_a_23_, v_a_24_, v_a_25_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Simp_0__Lean_Elab_Tactic_Do_Internal_VCGen_preprocessSimpSpecExpr___boxed(lean_object* v_a_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_, lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Simp_0__Lean_Elab_Tactic_Do_Internal_VCGen_preprocessSimpSpecExpr(v_a_28_, v_a_29_, v_a_30_, v_a_31_, v_a_32_, v_a_33_, v_a_34_);
lean_dec(v_a_34_);
lean_dec_ref(v_a_33_);
lean_dec(v_a_32_);
lean_dec_ref(v_a_31_);
lean_dec(v_a_30_);
lean_dec_ref(v_a_29_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0(lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_ss_48_, lean_object* v_prog_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_57_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___closed__4));
v___x_58_ = lean_unsigned_to_nat(3u);
v___x_59_ = lean_mk_empty_array_with_capacity(v___x_58_);
v___x_60_ = lean_array_push(v___x_59_, v_prog_49_);
v___x_61_ = lean_array_push(v___x_60_, v_a_46_);
v___x_62_ = lean_array_push(v___x_61_, v_a_47_);
v___x_63_ = l_Lean_Meta_mkAppM(v___x_57_, v___x_62_, v___y_52_, v___y_53_, v___y_54_, v___y_55_);
if (lean_obj_tag(v___x_63_) == 0)
{
lean_object* v_a_64_; lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_72_; 
v_a_64_ = lean_ctor_get(v___x_63_, 0);
v_isSharedCheck_72_ = !lean_is_exclusive(v___x_63_);
if (v_isSharedCheck_72_ == 0)
{
v___x_66_ = v___x_63_;
v_isShared_67_ = v_isSharedCheck_72_;
goto v_resetjp_65_;
}
else
{
lean_inc(v_a_64_);
lean_dec(v___x_63_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_72_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v___x_68_; lean_object* v___x_70_; 
v___x_68_ = l_Lean_mkAppN(v_a_64_, v_ss_48_);
if (v_isShared_67_ == 0)
{
lean_ctor_set(v___x_66_, 0, v___x_68_);
v___x_70_ = v___x_66_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v___x_68_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
return v___x_70_;
}
}
}
else
{
return v___x_63_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___boxed(lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_ss_75_, lean_object* v_prog_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0(v_a_73_, v_a_74_, v_ss_75_, v_prog_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_);
lean_dec(v___y_82_);
lean_dec_ref(v___y_81_);
lean_dec(v___y_80_);
lean_dec_ref(v___y_79_);
lean_dec(v___y_78_);
lean_dec_ref(v___y_77_);
lean_dec_ref(v_ss_75_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__1(lean_object* v___f_85_, lean_object* v_a_86_, lean_object* v___x_87_, lean_object* v_prog_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_){
_start:
{
lean_object* v___x_96_; 
lean_inc(v___y_94_);
lean_inc_ref(v___y_93_);
lean_inc(v___y_92_);
lean_inc_ref(v___y_91_);
lean_inc(v___y_90_);
lean_inc_ref(v___y_89_);
lean_inc_ref(v_prog_88_);
v___x_96_ = lean_apply_8(v___f_85_, v_prog_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, lean_box(0));
if (lean_obj_tag(v___x_96_) == 0)
{
lean_object* v_a_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v_a_97_ = lean_ctor_get(v___x_96_, 0);
lean_inc(v_a_97_);
lean_dec_ref_known(v___x_96_, 1);
v___x_98_ = lean_unsigned_to_nat(2u);
v___x_99_ = lean_mk_empty_array_with_capacity(v___x_98_);
v___x_100_ = lean_array_push(v___x_99_, v_a_86_);
v___x_101_ = lean_array_push(v___x_100_, v_a_97_);
v___x_102_ = l_Lean_Meta_mkAppM(v___x_87_, v___x_101_, v___y_91_, v___y_92_, v___y_93_, v___y_94_);
if (lean_obj_tag(v___x_102_) == 0)
{
lean_object* v_a_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; uint8_t v___x_107_; uint8_t v___x_108_; uint8_t v___x_109_; lean_object* v___x_110_; 
v_a_103_ = lean_ctor_get(v___x_102_, 0);
lean_inc(v_a_103_);
lean_dec_ref_known(v___x_102_, 1);
v___x_104_ = lean_unsigned_to_nat(1u);
v___x_105_ = lean_mk_empty_array_with_capacity(v___x_104_);
v___x_106_ = lean_array_push(v___x_105_, v_prog_88_);
v___x_107_ = 0;
v___x_108_ = 1;
v___x_109_ = 1;
v___x_110_ = l_Lean_Meta_mkLambdaFVars(v___x_106_, v_a_103_, v___x_107_, v___x_108_, v___x_107_, v___x_108_, v___x_109_, v___y_91_, v___y_92_, v___y_93_, v___y_94_);
lean_dec_ref(v___x_106_);
return v___x_110_;
}
else
{
lean_dec_ref(v_prog_88_);
return v___x_102_;
}
}
else
{
lean_dec_ref(v_prog_88_);
lean_dec(v___x_87_);
lean_dec_ref(v_a_86_);
return v___x_96_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__1___boxed(lean_object* v___f_111_, lean_object* v_a_112_, lean_object* v___x_113_, lean_object* v_prog_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__1(v___f_111_, v_a_112_, v___x_113_, v_prog_114_, v___y_115_, v___y_116_, v___y_117_, v___y_118_, v___y_119_, v___y_120_);
lean_dec(v___y_120_);
lean_dec_ref(v___y_119_);
lean_dec(v___y_118_);
lean_dec_ref(v___y_117_);
lean_dec(v___y_116_);
lean_dec_ref(v___y_115_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0_spec__0___redArg___lam__0(lean_object* v_k_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v_b_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_){
_start:
{
lean_object* v___x_132_; 
lean_inc(v___y_130_);
lean_inc_ref(v___y_129_);
lean_inc(v___y_128_);
lean_inc_ref(v___y_127_);
lean_inc(v___y_125_);
lean_inc_ref(v___y_124_);
v___x_132_ = lean_apply_8(v_k_123_, v_b_126_, v___y_124_, v___y_125_, v___y_127_, v___y_128_, v___y_129_, v___y_130_, lean_box(0));
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v_b_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0_spec__0___redArg___lam__0(v_k_133_, v___y_134_, v___y_135_, v_b_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
lean_dec(v___y_138_);
lean_dec_ref(v___y_137_);
lean_dec(v___y_135_);
lean_dec_ref(v___y_134_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0_spec__0___redArg(lean_object* v_name_143_, uint8_t v_bi_144_, lean_object* v_type_145_, lean_object* v_k_146_, uint8_t v_kind_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_){
_start:
{
lean_object* v___f_155_; lean_object* v___x_156_; 
lean_inc(v___y_149_);
lean_inc_ref(v___y_148_);
v___f_155_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0_spec__0___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_155_, 0, v_k_146_);
lean_closure_set(v___f_155_, 1, v___y_148_);
lean_closure_set(v___f_155_, 2, v___y_149_);
v___x_156_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_143_, v_bi_144_, v_type_145_, v___f_155_, v_kind_147_, v___y_150_, v___y_151_, v___y_152_, v___y_153_);
if (lean_obj_tag(v___x_156_) == 0)
{
return v___x_156_;
}
else
{
lean_object* v_a_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_164_; 
v_a_157_ = lean_ctor_get(v___x_156_, 0);
v_isSharedCheck_164_ = !lean_is_exclusive(v___x_156_);
if (v_isSharedCheck_164_ == 0)
{
v___x_159_ = v___x_156_;
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_a_157_);
lean_dec(v___x_156_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_162_; 
if (v_isShared_160_ == 0)
{
v___x_162_ = v___x_159_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v_a_157_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0_spec__0___redArg___boxed(lean_object* v_name_165_, lean_object* v_bi_166_, lean_object* v_type_167_, lean_object* v_k_168_, lean_object* v_kind_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_){
_start:
{
uint8_t v_bi_boxed_177_; uint8_t v_kind_boxed_178_; lean_object* v_res_179_; 
v_bi_boxed_177_ = lean_unbox(v_bi_166_);
v_kind_boxed_178_ = lean_unbox(v_kind_169_);
v_res_179_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0_spec__0___redArg(v_name_165_, v_bi_boxed_177_, v_type_167_, v_k_168_, v_kind_boxed_178_, v___y_170_, v___y_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
lean_dec(v___y_171_);
lean_dec_ref(v___y_170_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0___redArg(lean_object* v_name_180_, lean_object* v_type_181_, lean_object* v_k_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_){
_start:
{
uint8_t v___x_190_; uint8_t v___x_191_; lean_object* v___x_192_; 
v___x_190_ = 0;
v___x_191_ = 0;
v___x_192_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0_spec__0___redArg(v_name_180_, v___x_190_, v_type_181_, v_k_182_, v___x_191_, v___y_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_, v___y_188_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0___redArg___boxed(lean_object* v_name_193_, lean_object* v_type_194_, lean_object* v_k_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0___redArg(v_name_193_, v_type_194_, v_k_195_, v___y_196_, v___y_197_, v___y_198_, v___y_199_, v___y_200_, v___y_201_);
lean_dec(v___y_201_);
lean_dec_ref(v___y_200_);
lean_dec(v___y_199_);
lean_dec_ref(v___y_198_);
lean_dec(v___y_197_);
lean_dec_ref(v___y_196_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg(lean_object* v_info_228_, lean_object* v_00_u03b1_229_, lean_object* v_lhs_230_, lean_object* v_rhs_231_, lean_object* v_eqPrf_232_, lean_object* v_ss_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_, lean_object* v_a_239_){
_start:
{
lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_241_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_Pred(v_info_228_);
lean_inc_ref(v_00_u03b1_229_);
v___x_242_ = l_Lean_mkArrow(v_00_u03b1_229_, v___x_241_, v_a_238_, v_a_239_);
if (lean_obj_tag(v___x_242_) == 0)
{
lean_object* v_a_243_; lean_object* v___x_244_; uint8_t v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v_a_243_ = lean_ctor_get(v___x_242_, 0);
lean_inc(v_a_243_);
lean_dec_ref_known(v___x_242_, 1);
v___x_244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_244_, 0, v_a_243_);
v___x_245_ = 0;
v___x_246_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__1));
v___x_247_ = l_Lean_Meta_mkFreshExprMVar(v___x_244_, v___x_245_, v___x_246_, v_a_236_, v_a_237_, v_a_238_, v_a_239_);
if (lean_obj_tag(v___x_247_) == 0)
{
lean_object* v_a_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v_a_248_ = lean_ctor_get(v___x_247_, 0);
lean_inc(v_a_248_);
lean_dec_ref_known(v___x_247_, 1);
v___x_249_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_EPred(v_info_228_);
v___x_250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_250_, 0, v___x_249_);
v___x_251_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__3));
v___x_252_ = l_Lean_Meta_mkFreshExprMVar(v___x_250_, v___x_245_, v___x_251_, v_a_236_, v_a_237_, v_a_238_, v_a_239_);
if (lean_obj_tag(v___x_252_) == 0)
{
lean_object* v_a_253_; lean_object* v___f_254_; lean_object* v___x_255_; 
v_a_253_ = lean_ctor_get(v___x_252_, 0);
lean_inc_n(v_a_253_, 3);
lean_dec_ref_known(v___x_252_, 1);
lean_inc_ref(v_ss_233_);
lean_inc_n(v_a_248_, 2);
v___f_254_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0___boxed), 11, 3);
lean_closure_set(v___f_254_, 0, v_a_248_);
lean_closure_set(v___f_254_, 1, v_a_253_);
lean_closure_set(v___f_254_, 2, v_ss_233_);
v___x_255_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0(v_a_248_, v_a_253_, v_ss_233_, v_lhs_230_, v_a_234_, v_a_235_, v_a_236_, v_a_237_, v_a_238_, v_a_239_);
if (lean_obj_tag(v___x_255_) == 0)
{
lean_object* v_a_256_; lean_object* v___x_257_; 
v_a_256_ = lean_ctor_get(v___x_255_, 0);
lean_inc(v_a_256_);
lean_dec_ref_known(v___x_255_, 1);
v___x_257_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__0(v_a_248_, v_a_253_, v_ss_233_, v_rhs_231_, v_a_234_, v_a_235_, v_a_236_, v_a_237_, v_a_238_, v_a_239_);
lean_dec_ref(v_ss_233_);
if (lean_obj_tag(v___x_257_) == 0)
{
lean_object* v_a_258_; lean_object* v___x_259_; 
v_a_258_ = lean_ctor_get(v___x_257_, 0);
lean_inc(v_a_258_);
lean_dec_ref_known(v___x_257_, 1);
lean_inc(v_a_239_);
lean_inc_ref(v_a_238_);
lean_inc(v_a_237_);
lean_inc_ref(v_a_236_);
v___x_259_ = lean_infer_type(v_a_256_, v_a_236_, v_a_237_, v_a_238_, v_a_239_);
if (lean_obj_tag(v___x_259_) == 0)
{
lean_object* v_a_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v_a_260_ = lean_ctor_get(v___x_259_, 0);
lean_inc(v_a_260_);
lean_dec_ref_known(v___x_259_, 1);
v___x_261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_261_, 0, v_a_260_);
v___x_262_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__5));
v___x_263_ = l_Lean_Meta_mkFreshExprMVar(v___x_261_, v___x_245_, v___x_262_, v_a_236_, v_a_237_, v_a_238_, v_a_239_);
if (lean_obj_tag(v___x_263_) == 0)
{
lean_object* v_a_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v_a_264_ = lean_ctor_get(v___x_263_, 0);
lean_inc_n(v_a_264_, 2);
lean_dec_ref_known(v___x_263_, 1);
v___x_265_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__10));
v___x_266_ = lean_unsigned_to_nat(2u);
v___x_267_ = lean_mk_empty_array_with_capacity(v___x_266_);
v___x_268_ = lean_array_push(v___x_267_, v_a_264_);
v___x_269_ = lean_array_push(v___x_268_, v_a_258_);
v___x_270_ = l_Lean_Meta_mkAppM(v___x_265_, v___x_269_, v_a_236_, v_a_237_, v_a_238_, v_a_239_);
if (lean_obj_tag(v___x_270_) == 0)
{
lean_object* v_a_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v_a_271_ = lean_ctor_get(v___x_270_, 0);
lean_inc(v_a_271_);
lean_dec_ref_known(v___x_270_, 1);
v___x_272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_272_, 0, v_a_271_);
v___x_273_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__12));
v___x_274_ = l_Lean_Meta_mkFreshExprMVar(v___x_272_, v___x_245_, v___x_273_, v_a_236_, v_a_237_, v_a_238_, v_a_239_);
if (lean_obj_tag(v___x_274_) == 0)
{
lean_object* v_a_275_; lean_object* v___f_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v_a_275_ = lean_ctor_get(v___x_274_, 0);
lean_inc(v_a_275_);
lean_dec_ref_known(v___x_274_, 1);
v___f_276_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___lam__1___boxed), 11, 3);
lean_closure_set(v___f_276_, 0, v___f_254_);
lean_closure_set(v___f_276_, 1, v_a_264_);
lean_closure_set(v___f_276_, 2, v___x_265_);
v___x_277_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_m(v_info_228_);
v___x_278_ = l_Lean_Expr_app___override(v___x_277_, v_00_u03b1_229_);
v___x_279_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___closed__14));
v___x_280_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0___redArg(v___x_279_, v___x_278_, v___f_276_, v_a_234_, v_a_235_, v_a_236_, v_a_237_, v_a_238_, v_a_239_);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v_a_281_; lean_object* v___x_282_; 
v_a_281_ = lean_ctor_get(v___x_280_, 0);
lean_inc(v_a_281_);
lean_dec_ref_known(v___x_280_, 1);
v___x_282_ = l_Lean_Meta_mkCongrArg(v_a_281_, v_eqPrf_232_, v_a_236_, v_a_237_, v_a_238_, v_a_239_);
if (lean_obj_tag(v___x_282_) == 0)
{
lean_object* v_a_283_; lean_object* v___x_284_; 
v_a_283_ = lean_ctor_get(v___x_282_, 0);
lean_inc(v_a_283_);
lean_dec_ref_known(v___x_282_, 1);
v___x_284_ = l_Lean_Meta_mkEqMPR(v_a_283_, v_a_275_, v_a_236_, v_a_237_, v_a_238_, v_a_239_);
if (lean_obj_tag(v___x_284_) == 0)
{
lean_object* v_a_285_; uint8_t v___x_286_; lean_object* v___x_287_; 
v_a_285_ = lean_ctor_get(v___x_284_, 0);
lean_inc(v_a_285_);
lean_dec_ref_known(v___x_284_, 1);
v___x_286_ = 1;
v___x_287_ = l_Lean_Meta_abstractMVars(v_a_285_, v___x_286_, v_a_236_, v_a_237_, v_a_238_, v_a_239_);
return v___x_287_;
}
else
{
lean_object* v_a_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_295_; 
v_a_288_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_295_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_295_ == 0)
{
v___x_290_ = v___x_284_;
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_a_288_);
lean_dec(v___x_284_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_293_; 
if (v_isShared_291_ == 0)
{
v___x_293_ = v___x_290_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_a_288_);
v___x_293_ = v_reuseFailAlloc_294_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
return v___x_293_;
}
}
}
}
else
{
lean_object* v_a_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_303_; 
lean_dec(v_a_275_);
v_a_296_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_303_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_303_ == 0)
{
v___x_298_ = v___x_282_;
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_a_296_);
lean_dec(v___x_282_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_301_; 
if (v_isShared_299_ == 0)
{
v___x_301_ = v___x_298_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v_a_296_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
return v___x_301_;
}
}
}
}
else
{
lean_object* v_a_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_311_; 
lean_dec(v_a_275_);
lean_dec_ref(v_eqPrf_232_);
v_a_304_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_311_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_311_ == 0)
{
v___x_306_ = v___x_280_;
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_a_304_);
lean_dec(v___x_280_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_309_; 
if (v_isShared_307_ == 0)
{
v___x_309_ = v___x_306_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v_a_304_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
return v___x_309_;
}
}
}
}
else
{
lean_object* v_a_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_319_; 
lean_dec(v_a_264_);
lean_dec_ref(v___f_254_);
lean_dec_ref(v_eqPrf_232_);
lean_dec_ref(v_00_u03b1_229_);
v_a_312_ = lean_ctor_get(v___x_274_, 0);
v_isSharedCheck_319_ = !lean_is_exclusive(v___x_274_);
if (v_isSharedCheck_319_ == 0)
{
v___x_314_ = v___x_274_;
v_isShared_315_ = v_isSharedCheck_319_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_a_312_);
lean_dec(v___x_274_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_319_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_317_; 
if (v_isShared_315_ == 0)
{
v___x_317_ = v___x_314_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v_a_312_);
v___x_317_ = v_reuseFailAlloc_318_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
return v___x_317_;
}
}
}
}
else
{
lean_object* v_a_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_327_; 
lean_dec(v_a_264_);
lean_dec_ref(v___f_254_);
lean_dec_ref(v_eqPrf_232_);
lean_dec_ref(v_00_u03b1_229_);
v_a_320_ = lean_ctor_get(v___x_270_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v___x_270_);
if (v_isSharedCheck_327_ == 0)
{
v___x_322_ = v___x_270_;
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_a_320_);
lean_dec(v___x_270_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_325_; 
if (v_isShared_323_ == 0)
{
v___x_325_ = v___x_322_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_a_320_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
}
}
else
{
lean_object* v_a_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_335_; 
lean_dec(v_a_258_);
lean_dec_ref(v___f_254_);
lean_dec_ref(v_eqPrf_232_);
lean_dec_ref(v_00_u03b1_229_);
v_a_328_ = lean_ctor_get(v___x_263_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_263_);
if (v_isSharedCheck_335_ == 0)
{
v___x_330_ = v___x_263_;
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_a_328_);
lean_dec(v___x_263_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_333_; 
if (v_isShared_331_ == 0)
{
v___x_333_ = v___x_330_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v_a_328_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
}
}
else
{
lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_343_; 
lean_dec(v_a_258_);
lean_dec_ref(v___f_254_);
lean_dec_ref(v_eqPrf_232_);
lean_dec_ref(v_00_u03b1_229_);
v_a_336_ = lean_ctor_get(v___x_259_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_259_);
if (v_isSharedCheck_343_ == 0)
{
v___x_338_ = v___x_259_;
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_dec(v___x_259_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_341_; 
if (v_isShared_339_ == 0)
{
v___x_341_ = v___x_338_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_a_336_);
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
else
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
lean_dec(v_a_256_);
lean_dec_ref(v___f_254_);
lean_dec_ref(v_eqPrf_232_);
lean_dec_ref(v_00_u03b1_229_);
v_a_344_ = lean_ctor_get(v___x_257_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_257_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_257_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_257_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_344_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
}
else
{
lean_object* v_a_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_359_; 
lean_dec_ref(v___f_254_);
lean_dec(v_a_253_);
lean_dec(v_a_248_);
lean_dec_ref(v_ss_233_);
lean_dec_ref(v_eqPrf_232_);
lean_dec_ref(v_rhs_231_);
lean_dec_ref(v_00_u03b1_229_);
v_a_352_ = lean_ctor_get(v___x_255_, 0);
v_isSharedCheck_359_ = !lean_is_exclusive(v___x_255_);
if (v_isSharedCheck_359_ == 0)
{
v___x_354_ = v___x_255_;
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_a_352_);
lean_dec(v___x_255_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_357_; 
if (v_isShared_355_ == 0)
{
v___x_357_ = v___x_354_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_a_352_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
}
}
else
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_367_; 
lean_dec(v_a_248_);
lean_dec_ref(v_ss_233_);
lean_dec_ref(v_eqPrf_232_);
lean_dec_ref(v_rhs_231_);
lean_dec_ref(v_lhs_230_);
lean_dec_ref(v_00_u03b1_229_);
v_a_360_ = lean_ctor_get(v___x_252_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_367_ == 0)
{
v___x_362_ = v___x_252_;
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_252_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_365_; 
if (v_isShared_363_ == 0)
{
v___x_365_ = v___x_362_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v_a_360_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
return v___x_365_;
}
}
}
}
else
{
lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_375_; 
lean_dec_ref(v_ss_233_);
lean_dec_ref(v_eqPrf_232_);
lean_dec_ref(v_rhs_231_);
lean_dec_ref(v_lhs_230_);
lean_dec_ref(v_00_u03b1_229_);
v_a_368_ = lean_ctor_get(v___x_247_, 0);
v_isSharedCheck_375_ = !lean_is_exclusive(v___x_247_);
if (v_isSharedCheck_375_ == 0)
{
v___x_370_ = v___x_247_;
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_247_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_373_; 
if (v_isShared_371_ == 0)
{
v___x_373_ = v___x_370_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v_a_368_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
}
}
else
{
lean_object* v_a_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_383_; 
lean_dec_ref(v_ss_233_);
lean_dec_ref(v_eqPrf_232_);
lean_dec_ref(v_rhs_231_);
lean_dec_ref(v_lhs_230_);
lean_dec_ref(v_00_u03b1_229_);
v_a_376_ = lean_ctor_get(v___x_242_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_242_);
if (v_isSharedCheck_383_ == 0)
{
v___x_378_ = v___x_242_;
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_a_376_);
lean_dec(v___x_242_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_381_; 
if (v_isShared_379_ == 0)
{
v___x_381_ = v___x_378_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v_a_376_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg___boxed(lean_object* v_info_384_, lean_object* v_00_u03b1_385_, lean_object* v_lhs_386_, lean_object* v_rhs_387_, lean_object* v_eqPrf_388_, lean_object* v_ss_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg(v_info_384_, v_00_u03b1_385_, v_lhs_386_, v_rhs_387_, v_eqPrf_388_, v_ss_389_, v_a_390_, v_a_391_, v_a_392_, v_a_393_, v_a_394_, v_a_395_);
lean_dec(v_a_395_);
lean_dec_ref(v_a_394_);
lean_dec(v_a_393_);
lean_dec_ref(v_a_392_);
lean_dec(v_a_391_);
lean_dec_ref(v_a_390_);
lean_dec_ref(v_info_384_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof(lean_object* v_info_398_, lean_object* v_00_u03b1_399_, lean_object* v___m_400_, lean_object* v_lhs_401_, lean_object* v_rhs_402_, lean_object* v_eqPrf_403_, lean_object* v_ss_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_){
_start:
{
lean_object* v___x_412_; 
v___x_412_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg(v_info_398_, v_00_u03b1_399_, v_lhs_401_, v_rhs_402_, v_eqPrf_403_, v_ss_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_, v_a_409_, v_a_410_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___boxed(lean_object* v_info_413_, lean_object* v_00_u03b1_414_, lean_object* v___m_415_, lean_object* v_lhs_416_, lean_object* v_rhs_417_, lean_object* v_eqPrf_418_, lean_object* v_ss_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof(v_info_413_, v_00_u03b1_414_, v___m_415_, v_lhs_416_, v_rhs_417_, v_eqPrf_418_, v_ss_419_, v_a_420_, v_a_421_, v_a_422_, v_a_423_, v_a_424_, v_a_425_);
lean_dec(v_a_425_);
lean_dec_ref(v_a_424_);
lean_dec(v_a_423_);
lean_dec_ref(v_a_422_);
lean_dec(v_a_421_);
lean_dec_ref(v_a_420_);
lean_dec_ref(v___m_415_);
lean_dec_ref(v_info_413_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0_spec__0(lean_object* v_00_u03b1_428_, lean_object* v_name_429_, uint8_t v_bi_430_, lean_object* v_type_431_, lean_object* v_k_432_, uint8_t v_kind_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_){
_start:
{
lean_object* v___x_441_; 
v___x_441_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0_spec__0___redArg(v_name_429_, v_bi_430_, v_type_431_, v_k_432_, v_kind_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_, v___y_439_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0_spec__0___boxed(lean_object* v_00_u03b1_442_, lean_object* v_name_443_, lean_object* v_bi_444_, lean_object* v_type_445_, lean_object* v_k_446_, lean_object* v_kind_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_){
_start:
{
uint8_t v_bi_boxed_455_; uint8_t v_kind_boxed_456_; lean_object* v_res_457_; 
v_bi_boxed_455_ = lean_unbox(v_bi_444_);
v_kind_boxed_456_ = lean_unbox(v_kind_447_);
v_res_457_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0_spec__0(v_00_u03b1_442_, v_name_443_, v_bi_boxed_455_, v_type_445_, v_k_446_, v_kind_boxed_456_, v___y_448_, v___y_449_, v___y_450_, v___y_451_, v___y_452_, v___y_453_);
lean_dec(v___y_453_);
lean_dec_ref(v___y_452_);
lean_dec(v___y_451_);
lean_dec_ref(v___y_450_);
lean_dec(v___y_449_);
lean_dec_ref(v___y_448_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0(lean_object* v_00_u03b1_458_, lean_object* v_name_459_, lean_object* v_type_460_, lean_object* v_k_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_){
_start:
{
lean_object* v___x_469_; 
v___x_469_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0___redArg(v_name_459_, v_type_460_, v_k_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0___boxed(lean_object* v_00_u03b1_470_, lean_object* v_name_471_, lean_object* v_type_472_, lean_object* v_k_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof_spec__0(v_00_u03b1_470_, v_name_471_, v_type_472_, v_k_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_);
lean_dec(v___y_479_);
lean_dec_ref(v___y_478_);
lean_dec(v___y_477_);
lean_dec_ref(v___y_476_);
lean_dec(v___y_475_);
lean_dec_ref(v___y_474_);
return v_res_481_;
}
}
static uint64_t _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___lam__0___closed__1(void){
_start:
{
uint8_t v___x_484_; uint64_t v___x_485_; 
v___x_484_ = 1;
v___x_485_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_484_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___lam__0(lean_object* v_e_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_){
_start:
{
if (lean_obj_tag(v_e_486_) == 11)
{
lean_object* v___x_495_; uint8_t v_foApprox_496_; uint8_t v_ctxApprox_497_; uint8_t v_quasiPatternApprox_498_; uint8_t v_constApprox_499_; uint8_t v_isDefEqStuckEx_500_; uint8_t v_unificationHints_501_; uint8_t v_proofIrrelevance_502_; uint8_t v_assignSyntheticOpaque_503_; uint8_t v_offsetCnstrs_504_; uint8_t v_etaStruct_505_; uint8_t v_univApprox_506_; uint8_t v_iota_507_; uint8_t v_beta_508_; uint8_t v_proj_509_; uint8_t v_zeta_510_; uint8_t v_zetaDelta_511_; uint8_t v_zetaUnused_512_; uint8_t v_zetaHave_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_564_; 
v___x_495_ = l_Lean_Meta_Context_config(v___y_487_);
v_foApprox_496_ = lean_ctor_get_uint8(v___x_495_, 0);
v_ctxApprox_497_ = lean_ctor_get_uint8(v___x_495_, 1);
v_quasiPatternApprox_498_ = lean_ctor_get_uint8(v___x_495_, 2);
v_constApprox_499_ = lean_ctor_get_uint8(v___x_495_, 3);
v_isDefEqStuckEx_500_ = lean_ctor_get_uint8(v___x_495_, 4);
v_unificationHints_501_ = lean_ctor_get_uint8(v___x_495_, 5);
v_proofIrrelevance_502_ = lean_ctor_get_uint8(v___x_495_, 6);
v_assignSyntheticOpaque_503_ = lean_ctor_get_uint8(v___x_495_, 7);
v_offsetCnstrs_504_ = lean_ctor_get_uint8(v___x_495_, 8);
v_etaStruct_505_ = lean_ctor_get_uint8(v___x_495_, 10);
v_univApprox_506_ = lean_ctor_get_uint8(v___x_495_, 11);
v_iota_507_ = lean_ctor_get_uint8(v___x_495_, 12);
v_beta_508_ = lean_ctor_get_uint8(v___x_495_, 13);
v_proj_509_ = lean_ctor_get_uint8(v___x_495_, 14);
v_zeta_510_ = lean_ctor_get_uint8(v___x_495_, 15);
v_zetaDelta_511_ = lean_ctor_get_uint8(v___x_495_, 16);
v_zetaUnused_512_ = lean_ctor_get_uint8(v___x_495_, 17);
v_zetaHave_513_ = lean_ctor_get_uint8(v___x_495_, 18);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_495_);
if (v_isSharedCheck_564_ == 0)
{
v___x_515_ = v___x_495_;
v_isShared_516_ = v_isSharedCheck_564_;
goto v_resetjp_514_;
}
else
{
lean_dec(v___x_495_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_564_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
uint8_t v_trackZetaDelta_517_; lean_object* v_zetaDeltaSet_518_; lean_object* v_lctx_519_; lean_object* v_localInstances_520_; lean_object* v_defEqCtx_x3f_521_; lean_object* v_synthPendingDepth_522_; lean_object* v_canUnfold_x3f_523_; uint8_t v_univApprox_524_; uint8_t v_inTypeClassResolution_525_; uint8_t v_cacheInferType_526_; uint8_t v___x_527_; lean_object* v_config_529_; 
v_trackZetaDelta_517_ = lean_ctor_get_uint8(v___y_487_, sizeof(void*)*7);
v_zetaDeltaSet_518_ = lean_ctor_get(v___y_487_, 1);
v_lctx_519_ = lean_ctor_get(v___y_487_, 2);
v_localInstances_520_ = lean_ctor_get(v___y_487_, 3);
v_defEqCtx_x3f_521_ = lean_ctor_get(v___y_487_, 4);
v_synthPendingDepth_522_ = lean_ctor_get(v___y_487_, 5);
v_canUnfold_x3f_523_ = lean_ctor_get(v___y_487_, 6);
v_univApprox_524_ = lean_ctor_get_uint8(v___y_487_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_525_ = lean_ctor_get_uint8(v___y_487_, sizeof(void*)*7 + 2);
v_cacheInferType_526_ = lean_ctor_get_uint8(v___y_487_, sizeof(void*)*7 + 3);
v___x_527_ = 1;
if (v_isShared_516_ == 0)
{
v_config_529_ = v___x_515_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_563_, 0, v_foApprox_496_);
lean_ctor_set_uint8(v_reuseFailAlloc_563_, 1, v_ctxApprox_497_);
lean_ctor_set_uint8(v_reuseFailAlloc_563_, 2, v_quasiPatternApprox_498_);
lean_ctor_set_uint8(v_reuseFailAlloc_563_, 3, v_constApprox_499_);
lean_ctor_set_uint8(v_reuseFailAlloc_563_, 4, v_isDefEqStuckEx_500_);
lean_ctor_set_uint8(v_reuseFailAlloc_563_, 5, v_unificationHints_501_);
lean_ctor_set_uint8(v_reuseFailAlloc_563_, 6, v_proofIrrelevance_502_);
lean_ctor_set_uint8(v_reuseFailAlloc_563_, 7, v_assignSyntheticOpaque_503_);
lean_ctor_set_uint8(v_reuseFailAlloc_563_, 8, v_offsetCnstrs_504_);
lean_ctor_set_uint8(v_reuseFailAlloc_563_, 10, v_etaStruct_505_);
lean_ctor_set_uint8(v_reuseFailAlloc_563_, 11, v_univApprox_506_);
lean_ctor_set_uint8(v_reuseFailAlloc_563_, 12, v_iota_507_);
lean_ctor_set_uint8(v_reuseFailAlloc_563_, 13, v_beta_508_);
lean_ctor_set_uint8(v_reuseFailAlloc_563_, 14, v_proj_509_);
lean_ctor_set_uint8(v_reuseFailAlloc_563_, 15, v_zeta_510_);
lean_ctor_set_uint8(v_reuseFailAlloc_563_, 16, v_zetaDelta_511_);
lean_ctor_set_uint8(v_reuseFailAlloc_563_, 17, v_zetaUnused_512_);
lean_ctor_set_uint8(v_reuseFailAlloc_563_, 18, v_zetaHave_513_);
v_config_529_ = v_reuseFailAlloc_563_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
uint64_t v___x_530_; uint64_t v___x_531_; uint64_t v___x_532_; uint64_t v___x_533_; uint64_t v___x_534_; uint64_t v_key_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
lean_ctor_set_uint8(v_config_529_, 9, v___x_527_);
v___x_530_ = l_Lean_Meta_Context_configKey(v___y_487_);
v___x_531_ = 3ULL;
v___x_532_ = lean_uint64_shift_right(v___x_530_, v___x_531_);
v___x_533_ = lean_uint64_shift_left(v___x_532_, v___x_531_);
v___x_534_ = lean_uint64_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___lam__0___closed__1);
v_key_535_ = lean_uint64_lor(v___x_533_, v___x_534_);
v___x_536_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_536_, 0, v_config_529_);
lean_ctor_set_uint64(v___x_536_, sizeof(void*)*1, v_key_535_);
lean_inc(v_canUnfold_x3f_523_);
lean_inc(v_synthPendingDepth_522_);
lean_inc(v_defEqCtx_x3f_521_);
lean_inc_ref(v_localInstances_520_);
lean_inc_ref(v_lctx_519_);
lean_inc(v_zetaDeltaSet_518_);
v___x_537_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_537_, 0, v___x_536_);
lean_ctor_set(v___x_537_, 1, v_zetaDeltaSet_518_);
lean_ctor_set(v___x_537_, 2, v_lctx_519_);
lean_ctor_set(v___x_537_, 3, v_localInstances_520_);
lean_ctor_set(v___x_537_, 4, v_defEqCtx_x3f_521_);
lean_ctor_set(v___x_537_, 5, v_synthPendingDepth_522_);
lean_ctor_set(v___x_537_, 6, v_canUnfold_x3f_523_);
lean_ctor_set_uint8(v___x_537_, sizeof(void*)*7, v_trackZetaDelta_517_);
lean_ctor_set_uint8(v___x_537_, sizeof(void*)*7 + 1, v_univApprox_524_);
lean_ctor_set_uint8(v___x_537_, sizeof(void*)*7 + 2, v_inTypeClassResolution_525_);
lean_ctor_set_uint8(v___x_537_, sizeof(void*)*7 + 3, v_cacheInferType_526_);
v___x_538_ = l_Lean_Meta_reduceProj_x3f(v_e_486_, v___x_537_, v___y_488_, v___y_489_, v___y_490_);
lean_dec_ref_known(v___x_537_, 7);
if (lean_obj_tag(v___x_538_) == 0)
{
lean_object* v_a_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_554_; 
v_a_539_ = lean_ctor_get(v___x_538_, 0);
v_isSharedCheck_554_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_554_ == 0)
{
v___x_541_ = v___x_538_;
v_isShared_542_ = v_isSharedCheck_554_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_a_539_);
lean_dec(v___x_538_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_554_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
if (lean_obj_tag(v_a_539_) == 1)
{
lean_object* v_val_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_553_; 
v_val_543_ = lean_ctor_get(v_a_539_, 0);
v_isSharedCheck_553_ = !lean_is_exclusive(v_a_539_);
if (v_isSharedCheck_553_ == 0)
{
v___x_545_ = v_a_539_;
v_isShared_546_ = v_isSharedCheck_553_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_val_543_);
lean_dec(v_a_539_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_553_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_548_; 
if (v_isShared_546_ == 0)
{
lean_ctor_set_tag(v___x_545_, 0);
v___x_548_ = v___x_545_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v_val_543_);
v___x_548_ = v_reuseFailAlloc_552_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
lean_object* v___x_550_; 
if (v_isShared_542_ == 0)
{
lean_ctor_set(v___x_541_, 0, v___x_548_);
v___x_550_ = v___x_541_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v___x_548_);
v___x_550_ = v_reuseFailAlloc_551_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
return v___x_550_;
}
}
}
}
else
{
lean_del_object(v___x_541_);
lean_dec(v_a_539_);
goto v___jp_492_;
}
}
}
else
{
lean_object* v_a_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_562_; 
v_a_555_ = lean_ctor_get(v___x_538_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_562_ == 0)
{
v___x_557_ = v___x_538_;
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_a_555_);
lean_dec(v___x_538_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v___x_560_; 
if (v_isShared_558_ == 0)
{
v___x_560_ = v___x_557_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v_a_555_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
return v___x_560_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_486_);
goto v___jp_492_;
}
v___jp_492_:
{
lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_493_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___lam__0___closed__0));
v___x_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
return v___x_494_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___lam__0___boxed(lean_object* v_e_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_){
_start:
{
lean_object* v_res_571_; 
v_res_571_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___lam__0(v_e_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_);
lean_dec(v___y_569_);
lean_dec_ref(v___y_568_);
lean_dec(v___y_567_);
lean_dec_ref(v___y_566_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___lam__1(lean_object* v_e_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_){
_start:
{
lean_object* v___x_578_; lean_object* v___x_579_; 
v___x_578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_578_, 0, v_e_572_);
v___x_579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_579_, 0, v___x_578_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___lam__1___boxed(lean_object* v_e_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___lam__1(v_e_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_);
lean_dec(v___y_584_);
lean_dec_ref(v___y_583_);
lean_dec(v___y_582_);
lean_dec_ref(v___y_581_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__11_spec__13___redArg(lean_object* v_x_587_, lean_object* v_x_588_, lean_object* v_x_589_, lean_object* v_x_590_){
_start:
{
lean_object* v_ks_591_; lean_object* v_vs_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_616_; 
v_ks_591_ = lean_ctor_get(v_x_587_, 0);
v_vs_592_ = lean_ctor_get(v_x_587_, 1);
v_isSharedCheck_616_ = !lean_is_exclusive(v_x_587_);
if (v_isSharedCheck_616_ == 0)
{
v___x_594_ = v_x_587_;
v_isShared_595_ = v_isSharedCheck_616_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_vs_592_);
lean_inc(v_ks_591_);
lean_dec(v_x_587_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_616_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_596_; uint8_t v___x_597_; 
v___x_596_ = lean_array_get_size(v_ks_591_);
v___x_597_ = lean_nat_dec_lt(v_x_588_, v___x_596_);
if (v___x_597_ == 0)
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_601_; 
lean_dec(v_x_588_);
v___x_598_ = lean_array_push(v_ks_591_, v_x_589_);
v___x_599_ = lean_array_push(v_vs_592_, v_x_590_);
if (v_isShared_595_ == 0)
{
lean_ctor_set(v___x_594_, 1, v___x_599_);
lean_ctor_set(v___x_594_, 0, v___x_598_);
v___x_601_ = v___x_594_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v___x_598_);
lean_ctor_set(v_reuseFailAlloc_602_, 1, v___x_599_);
v___x_601_ = v_reuseFailAlloc_602_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
return v___x_601_;
}
}
else
{
lean_object* v_k_x27_603_; uint8_t v___x_604_; 
v_k_x27_603_ = lean_array_fget_borrowed(v_ks_591_, v_x_588_);
v___x_604_ = l_Lean_instBEqMVarId_beq(v_x_589_, v_k_x27_603_);
if (v___x_604_ == 0)
{
lean_object* v___x_606_; 
if (v_isShared_595_ == 0)
{
v___x_606_ = v___x_594_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_ks_591_);
lean_ctor_set(v_reuseFailAlloc_610_, 1, v_vs_592_);
v___x_606_ = v_reuseFailAlloc_610_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_607_ = lean_unsigned_to_nat(1u);
v___x_608_ = lean_nat_add(v_x_588_, v___x_607_);
lean_dec(v_x_588_);
v_x_587_ = v___x_606_;
v_x_588_ = v___x_608_;
goto _start;
}
}
else
{
lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_614_; 
v___x_611_ = lean_array_fset(v_ks_591_, v_x_588_, v_x_589_);
v___x_612_ = lean_array_fset(v_vs_592_, v_x_588_, v_x_590_);
lean_dec(v_x_588_);
if (v_isShared_595_ == 0)
{
lean_ctor_set(v___x_594_, 1, v___x_612_);
lean_ctor_set(v___x_594_, 0, v___x_611_);
v___x_614_ = v___x_594_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v___x_611_);
lean_ctor_set(v_reuseFailAlloc_615_, 1, v___x_612_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__11___redArg(lean_object* v_n_617_, lean_object* v_k_618_, lean_object* v_v_619_){
_start:
{
lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_620_ = lean_unsigned_to_nat(0u);
v___x_621_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__11_spec__13___redArg(v_n_617_, v___x_620_, v_k_618_, v_v_619_);
return v___x_621_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___closed__0(void){
_start:
{
size_t v___x_622_; size_t v___x_623_; size_t v___x_624_; 
v___x_622_ = ((size_t)5ULL);
v___x_623_ = ((size_t)1ULL);
v___x_624_ = lean_usize_shift_left(v___x_623_, v___x_622_);
return v___x_624_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___closed__1(void){
_start:
{
size_t v___x_625_; size_t v___x_626_; size_t v___x_627_; 
v___x_625_ = ((size_t)1ULL);
v___x_626_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___closed__0);
v___x_627_ = lean_usize_sub(v___x_626_, v___x_625_);
return v___x_627_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_628_; 
v___x_628_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg(lean_object* v_x_629_, size_t v_x_630_, size_t v_x_631_, lean_object* v_x_632_, lean_object* v_x_633_){
_start:
{
if (lean_obj_tag(v_x_629_) == 0)
{
lean_object* v_es_634_; size_t v___x_635_; size_t v___x_636_; size_t v___x_637_; size_t v___x_638_; lean_object* v_j_639_; lean_object* v___x_640_; uint8_t v___x_641_; 
v_es_634_ = lean_ctor_get(v_x_629_, 0);
v___x_635_ = ((size_t)5ULL);
v___x_636_ = ((size_t)1ULL);
v___x_637_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___closed__1);
v___x_638_ = lean_usize_land(v_x_630_, v___x_637_);
v_j_639_ = lean_usize_to_nat(v___x_638_);
v___x_640_ = lean_array_get_size(v_es_634_);
v___x_641_ = lean_nat_dec_lt(v_j_639_, v___x_640_);
if (v___x_641_ == 0)
{
lean_dec(v_j_639_);
lean_dec(v_x_633_);
lean_dec(v_x_632_);
return v_x_629_;
}
else
{
lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_678_; 
lean_inc_ref(v_es_634_);
v_isSharedCheck_678_ = !lean_is_exclusive(v_x_629_);
if (v_isSharedCheck_678_ == 0)
{
lean_object* v_unused_679_; 
v_unused_679_ = lean_ctor_get(v_x_629_, 0);
lean_dec(v_unused_679_);
v___x_643_ = v_x_629_;
v_isShared_644_ = v_isSharedCheck_678_;
goto v_resetjp_642_;
}
else
{
lean_dec(v_x_629_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_678_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v_v_645_; lean_object* v___x_646_; lean_object* v_xs_x27_647_; lean_object* v___y_649_; 
v_v_645_ = lean_array_fget(v_es_634_, v_j_639_);
v___x_646_ = lean_box(0);
v_xs_x27_647_ = lean_array_fset(v_es_634_, v_j_639_, v___x_646_);
switch(lean_obj_tag(v_v_645_))
{
case 0:
{
lean_object* v_key_654_; lean_object* v_val_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_665_; 
v_key_654_ = lean_ctor_get(v_v_645_, 0);
v_val_655_ = lean_ctor_get(v_v_645_, 1);
v_isSharedCheck_665_ = !lean_is_exclusive(v_v_645_);
if (v_isSharedCheck_665_ == 0)
{
v___x_657_ = v_v_645_;
v_isShared_658_ = v_isSharedCheck_665_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_val_655_);
lean_inc(v_key_654_);
lean_dec(v_v_645_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_665_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
uint8_t v___x_659_; 
v___x_659_ = l_Lean_instBEqMVarId_beq(v_x_632_, v_key_654_);
if (v___x_659_ == 0)
{
lean_object* v___x_660_; lean_object* v___x_661_; 
lean_del_object(v___x_657_);
v___x_660_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_654_, v_val_655_, v_x_632_, v_x_633_);
v___x_661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_661_, 0, v___x_660_);
v___y_649_ = v___x_661_;
goto v___jp_648_;
}
else
{
lean_object* v___x_663_; 
lean_dec(v_val_655_);
lean_dec(v_key_654_);
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 1, v_x_633_);
lean_ctor_set(v___x_657_, 0, v_x_632_);
v___x_663_ = v___x_657_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v_x_632_);
lean_ctor_set(v_reuseFailAlloc_664_, 1, v_x_633_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
v___y_649_ = v___x_663_;
goto v___jp_648_;
}
}
}
}
case 1:
{
lean_object* v_node_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_676_; 
v_node_666_ = lean_ctor_get(v_v_645_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v_v_645_);
if (v_isSharedCheck_676_ == 0)
{
v___x_668_ = v_v_645_;
v_isShared_669_ = v_isSharedCheck_676_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_node_666_);
lean_dec(v_v_645_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_676_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
size_t v___x_670_; size_t v___x_671_; lean_object* v___x_672_; lean_object* v___x_674_; 
v___x_670_ = lean_usize_shift_right(v_x_630_, v___x_635_);
v___x_671_ = lean_usize_add(v_x_631_, v___x_636_);
v___x_672_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg(v_node_666_, v___x_670_, v___x_671_, v_x_632_, v_x_633_);
if (v_isShared_669_ == 0)
{
lean_ctor_set(v___x_668_, 0, v___x_672_);
v___x_674_ = v___x_668_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v___x_672_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
v___y_649_ = v___x_674_;
goto v___jp_648_;
}
}
}
default: 
{
lean_object* v___x_677_; 
v___x_677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_677_, 0, v_x_632_);
lean_ctor_set(v___x_677_, 1, v_x_633_);
v___y_649_ = v___x_677_;
goto v___jp_648_;
}
}
v___jp_648_:
{
lean_object* v___x_650_; lean_object* v___x_652_; 
v___x_650_ = lean_array_fset(v_xs_x27_647_, v_j_639_, v___y_649_);
lean_dec(v_j_639_);
if (v_isShared_644_ == 0)
{
lean_ctor_set(v___x_643_, 0, v___x_650_);
v___x_652_ = v___x_643_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v___x_650_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
}
}
else
{
lean_object* v_ks_680_; lean_object* v_vs_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_701_; 
v_ks_680_ = lean_ctor_get(v_x_629_, 0);
v_vs_681_ = lean_ctor_get(v_x_629_, 1);
v_isSharedCheck_701_ = !lean_is_exclusive(v_x_629_);
if (v_isSharedCheck_701_ == 0)
{
v___x_683_ = v_x_629_;
v_isShared_684_ = v_isSharedCheck_701_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_vs_681_);
lean_inc(v_ks_680_);
lean_dec(v_x_629_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_701_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_686_; 
if (v_isShared_684_ == 0)
{
v___x_686_ = v___x_683_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_ks_680_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v_vs_681_);
v___x_686_ = v_reuseFailAlloc_700_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
lean_object* v_newNode_687_; uint8_t v___y_689_; size_t v___x_695_; uint8_t v___x_696_; 
v_newNode_687_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__11___redArg(v___x_686_, v_x_632_, v_x_633_);
v___x_695_ = ((size_t)7ULL);
v___x_696_ = lean_usize_dec_le(v___x_695_, v_x_631_);
if (v___x_696_ == 0)
{
lean_object* v___x_697_; lean_object* v___x_698_; uint8_t v___x_699_; 
v___x_697_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_687_);
v___x_698_ = lean_unsigned_to_nat(4u);
v___x_699_ = lean_nat_dec_lt(v___x_697_, v___x_698_);
lean_dec(v___x_697_);
v___y_689_ = v___x_699_;
goto v___jp_688_;
}
else
{
v___y_689_ = v___x_696_;
goto v___jp_688_;
}
v___jp_688_:
{
if (v___y_689_ == 0)
{
lean_object* v_ks_690_; lean_object* v_vs_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v_ks_690_ = lean_ctor_get(v_newNode_687_, 0);
lean_inc_ref(v_ks_690_);
v_vs_691_ = lean_ctor_get(v_newNode_687_, 1);
lean_inc_ref(v_vs_691_);
lean_dec_ref(v_newNode_687_);
v___x_692_ = lean_unsigned_to_nat(0u);
v___x_693_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___closed__2);
v___x_694_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__12___redArg(v_x_631_, v_ks_690_, v_vs_691_, v___x_692_, v___x_693_);
lean_dec_ref(v_vs_691_);
lean_dec_ref(v_ks_690_);
return v___x_694_;
}
else
{
return v_newNode_687_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__12___redArg(size_t v_depth_702_, lean_object* v_keys_703_, lean_object* v_vals_704_, lean_object* v_i_705_, lean_object* v_entries_706_){
_start:
{
lean_object* v___x_707_; uint8_t v___x_708_; 
v___x_707_ = lean_array_get_size(v_keys_703_);
v___x_708_ = lean_nat_dec_lt(v_i_705_, v___x_707_);
if (v___x_708_ == 0)
{
lean_dec(v_i_705_);
return v_entries_706_;
}
else
{
lean_object* v_k_709_; lean_object* v_v_710_; uint64_t v___x_711_; size_t v_h_712_; size_t v___x_713_; lean_object* v___x_714_; size_t v___x_715_; size_t v___x_716_; size_t v___x_717_; size_t v_h_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
v_k_709_ = lean_array_fget_borrowed(v_keys_703_, v_i_705_);
v_v_710_ = lean_array_fget_borrowed(v_vals_704_, v_i_705_);
v___x_711_ = l_Lean_instHashableMVarId_hash(v_k_709_);
v_h_712_ = lean_uint64_to_usize(v___x_711_);
v___x_713_ = ((size_t)5ULL);
v___x_714_ = lean_unsigned_to_nat(1u);
v___x_715_ = ((size_t)1ULL);
v___x_716_ = lean_usize_sub(v_depth_702_, v___x_715_);
v___x_717_ = lean_usize_mul(v___x_713_, v___x_716_);
v_h_718_ = lean_usize_shift_right(v_h_712_, v___x_717_);
v___x_719_ = lean_nat_add(v_i_705_, v___x_714_);
lean_dec(v_i_705_);
lean_inc(v_v_710_);
lean_inc(v_k_709_);
v___x_720_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg(v_entries_706_, v_h_718_, v_depth_702_, v_k_709_, v_v_710_);
v_i_705_ = v___x_719_;
v_entries_706_ = v___x_720_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__12___redArg___boxed(lean_object* v_depth_722_, lean_object* v_keys_723_, lean_object* v_vals_724_, lean_object* v_i_725_, lean_object* v_entries_726_){
_start:
{
size_t v_depth_boxed_727_; lean_object* v_res_728_; 
v_depth_boxed_727_ = lean_unbox_usize(v_depth_722_);
lean_dec(v_depth_722_);
v_res_728_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__12___redArg(v_depth_boxed_727_, v_keys_723_, v_vals_724_, v_i_725_, v_entries_726_);
lean_dec_ref(v_vals_724_);
lean_dec_ref(v_keys_723_);
return v_res_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___boxed(lean_object* v_x_729_, lean_object* v_x_730_, lean_object* v_x_731_, lean_object* v_x_732_, lean_object* v_x_733_){
_start:
{
size_t v_x_162628__boxed_734_; size_t v_x_162629__boxed_735_; lean_object* v_res_736_; 
v_x_162628__boxed_734_ = lean_unbox_usize(v_x_730_);
lean_dec(v_x_730_);
v_x_162629__boxed_735_ = lean_unbox_usize(v_x_731_);
lean_dec(v_x_731_);
v_res_736_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg(v_x_729_, v_x_162628__boxed_734_, v_x_162629__boxed_735_, v_x_732_, v_x_733_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4___redArg(lean_object* v_x_737_, lean_object* v_x_738_, lean_object* v_x_739_){
_start:
{
uint64_t v___x_740_; size_t v___x_741_; size_t v___x_742_; lean_object* v___x_743_; 
v___x_740_ = l_Lean_instHashableMVarId_hash(v_x_738_);
v___x_741_ = lean_uint64_to_usize(v___x_740_);
v___x_742_ = ((size_t)1ULL);
v___x_743_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg(v_x_737_, v___x_741_, v___x_742_, v_x_738_, v_x_739_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2___redArg(lean_object* v_mvarId_746_, lean_object* v_val_747_, lean_object* v___y_748_){
_start:
{
lean_object* v___x_750_; lean_object* v_mctx_751_; lean_object* v_cache_752_; lean_object* v_zetaDeltaFVarIds_753_; lean_object* v_postponed_754_; lean_object* v_diag_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_783_; 
v___x_750_ = lean_st_ref_take(v___y_748_);
v_mctx_751_ = lean_ctor_get(v___x_750_, 0);
v_cache_752_ = lean_ctor_get(v___x_750_, 1);
v_zetaDeltaFVarIds_753_ = lean_ctor_get(v___x_750_, 2);
v_postponed_754_ = lean_ctor_get(v___x_750_, 3);
v_diag_755_ = lean_ctor_get(v___x_750_, 4);
v_isSharedCheck_783_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_783_ == 0)
{
v___x_757_ = v___x_750_;
v_isShared_758_ = v_isSharedCheck_783_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_diag_755_);
lean_inc(v_postponed_754_);
lean_inc(v_zetaDeltaFVarIds_753_);
lean_inc(v_cache_752_);
lean_inc(v_mctx_751_);
lean_dec(v___x_750_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_783_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v_depth_759_; lean_object* v_levelAssignDepth_760_; lean_object* v_lmvarCounter_761_; lean_object* v_mvarCounter_762_; lean_object* v_lDecls_763_; lean_object* v_decls_764_; lean_object* v_userNames_765_; lean_object* v_lAssignment_766_; lean_object* v_eAssignment_767_; lean_object* v_dAssignment_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_782_; 
v_depth_759_ = lean_ctor_get(v_mctx_751_, 0);
v_levelAssignDepth_760_ = lean_ctor_get(v_mctx_751_, 1);
v_lmvarCounter_761_ = lean_ctor_get(v_mctx_751_, 2);
v_mvarCounter_762_ = lean_ctor_get(v_mctx_751_, 3);
v_lDecls_763_ = lean_ctor_get(v_mctx_751_, 4);
v_decls_764_ = lean_ctor_get(v_mctx_751_, 5);
v_userNames_765_ = lean_ctor_get(v_mctx_751_, 6);
v_lAssignment_766_ = lean_ctor_get(v_mctx_751_, 7);
v_eAssignment_767_ = lean_ctor_get(v_mctx_751_, 8);
v_dAssignment_768_ = lean_ctor_get(v_mctx_751_, 9);
v_isSharedCheck_782_ = !lean_is_exclusive(v_mctx_751_);
if (v_isSharedCheck_782_ == 0)
{
v___x_770_ = v_mctx_751_;
v_isShared_771_ = v_isSharedCheck_782_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_dAssignment_768_);
lean_inc(v_eAssignment_767_);
lean_inc(v_lAssignment_766_);
lean_inc(v_userNames_765_);
lean_inc(v_decls_764_);
lean_inc(v_lDecls_763_);
lean_inc(v_mvarCounter_762_);
lean_inc(v_lmvarCounter_761_);
lean_inc(v_levelAssignDepth_760_);
lean_inc(v_depth_759_);
lean_dec(v_mctx_751_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_782_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v___x_772_; lean_object* v___x_774_; 
v___x_772_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4___redArg(v_eAssignment_767_, v_mvarId_746_, v_val_747_);
if (v_isShared_771_ == 0)
{
lean_ctor_set(v___x_770_, 8, v___x_772_);
v___x_774_ = v___x_770_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_depth_759_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v_levelAssignDepth_760_);
lean_ctor_set(v_reuseFailAlloc_781_, 2, v_lmvarCounter_761_);
lean_ctor_set(v_reuseFailAlloc_781_, 3, v_mvarCounter_762_);
lean_ctor_set(v_reuseFailAlloc_781_, 4, v_lDecls_763_);
lean_ctor_set(v_reuseFailAlloc_781_, 5, v_decls_764_);
lean_ctor_set(v_reuseFailAlloc_781_, 6, v_userNames_765_);
lean_ctor_set(v_reuseFailAlloc_781_, 7, v_lAssignment_766_);
lean_ctor_set(v_reuseFailAlloc_781_, 8, v___x_772_);
lean_ctor_set(v_reuseFailAlloc_781_, 9, v_dAssignment_768_);
v___x_774_ = v_reuseFailAlloc_781_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
lean_object* v___x_776_; 
if (v_isShared_758_ == 0)
{
lean_ctor_set(v___x_757_, 0, v___x_774_);
v___x_776_ = v___x_757_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v___x_774_);
lean_ctor_set(v_reuseFailAlloc_780_, 1, v_cache_752_);
lean_ctor_set(v_reuseFailAlloc_780_, 2, v_zetaDeltaFVarIds_753_);
lean_ctor_set(v_reuseFailAlloc_780_, 3, v_postponed_754_);
lean_ctor_set(v_reuseFailAlloc_780_, 4, v_diag_755_);
v___x_776_ = v_reuseFailAlloc_780_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_777_ = lean_st_ref_set(v___y_748_, v___x_776_);
v___x_778_ = ((lean_object*)(l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2___redArg___closed__0));
v___x_779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_779_, 0, v___x_778_);
return v___x_779_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2___redArg___boxed(lean_object* v_mvarId_784_, lean_object* v_val_785_, lean_object* v___y_786_, lean_object* v___y_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2___redArg(v_mvarId_784_, v_val_785_, v___y_786_);
lean_dec(v___y_786_);
return v_res_788_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3_spec__8___redArg(lean_object* v_keys_789_, lean_object* v_i_790_, lean_object* v_k_791_){
_start:
{
lean_object* v___x_792_; uint8_t v___x_793_; 
v___x_792_ = lean_array_get_size(v_keys_789_);
v___x_793_ = lean_nat_dec_lt(v_i_790_, v___x_792_);
if (v___x_793_ == 0)
{
lean_dec(v_i_790_);
return v___x_793_;
}
else
{
lean_object* v_k_x27_794_; uint8_t v___x_795_; 
v_k_x27_794_ = lean_array_fget_borrowed(v_keys_789_, v_i_790_);
v___x_795_ = l_Lean_instBEqMVarId_beq(v_k_791_, v_k_x27_794_);
if (v___x_795_ == 0)
{
lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_796_ = lean_unsigned_to_nat(1u);
v___x_797_ = lean_nat_add(v_i_790_, v___x_796_);
lean_dec(v_i_790_);
v_i_790_ = v___x_797_;
goto _start;
}
else
{
lean_dec(v_i_790_);
return v___x_795_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3_spec__8___redArg___boxed(lean_object* v_keys_799_, lean_object* v_i_800_, lean_object* v_k_801_){
_start:
{
uint8_t v_res_802_; lean_object* v_r_803_; 
v_res_802_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3_spec__8___redArg(v_keys_799_, v_i_800_, v_k_801_);
lean_dec(v_k_801_);
lean_dec_ref(v_keys_799_);
v_r_803_ = lean_box(v_res_802_);
return v_r_803_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3___redArg(lean_object* v_x_804_, size_t v_x_805_, lean_object* v_x_806_){
_start:
{
if (lean_obj_tag(v_x_804_) == 0)
{
lean_object* v_es_807_; lean_object* v___x_808_; size_t v___x_809_; size_t v___x_810_; size_t v___x_811_; lean_object* v_j_812_; lean_object* v___x_813_; 
v_es_807_ = lean_ctor_get(v_x_804_, 0);
v___x_808_ = lean_box(2);
v___x_809_ = ((size_t)5ULL);
v___x_810_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg___closed__1);
v___x_811_ = lean_usize_land(v_x_805_, v___x_810_);
v_j_812_ = lean_usize_to_nat(v___x_811_);
v___x_813_ = lean_array_get_borrowed(v___x_808_, v_es_807_, v_j_812_);
lean_dec(v_j_812_);
switch(lean_obj_tag(v___x_813_))
{
case 0:
{
lean_object* v_key_814_; uint8_t v___x_815_; 
v_key_814_ = lean_ctor_get(v___x_813_, 0);
v___x_815_ = l_Lean_instBEqMVarId_beq(v_x_806_, v_key_814_);
return v___x_815_;
}
case 1:
{
lean_object* v_node_816_; size_t v___x_817_; 
v_node_816_ = lean_ctor_get(v___x_813_, 0);
v___x_817_ = lean_usize_shift_right(v_x_805_, v___x_809_);
v_x_804_ = v_node_816_;
v_x_805_ = v___x_817_;
goto _start;
}
default: 
{
uint8_t v___x_819_; 
v___x_819_ = 0;
return v___x_819_;
}
}
}
else
{
lean_object* v_ks_820_; lean_object* v___x_821_; uint8_t v___x_822_; 
v_ks_820_ = lean_ctor_get(v_x_804_, 0);
v___x_821_ = lean_unsigned_to_nat(0u);
v___x_822_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3_spec__8___redArg(v_ks_820_, v___x_821_, v_x_806_);
return v___x_822_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_x_823_, lean_object* v_x_824_, lean_object* v_x_825_){
_start:
{
size_t v_x_162872__boxed_826_; uint8_t v_res_827_; lean_object* v_r_828_; 
v_x_162872__boxed_826_ = lean_unbox_usize(v_x_824_);
lean_dec(v_x_824_);
v_res_827_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3___redArg(v_x_823_, v_x_162872__boxed_826_, v_x_825_);
lean_dec(v_x_825_);
lean_dec_ref(v_x_823_);
v_r_828_ = lean_box(v_res_827_);
return v_r_828_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2___redArg(lean_object* v_x_829_, lean_object* v_x_830_){
_start:
{
uint64_t v___x_831_; size_t v___x_832_; uint8_t v___x_833_; 
v___x_831_ = l_Lean_instHashableMVarId_hash(v_x_830_);
v___x_832_ = lean_uint64_to_usize(v___x_831_);
v___x_833_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3___redArg(v_x_829_, v___x_832_, v_x_830_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2___redArg___boxed(lean_object* v_x_834_, lean_object* v_x_835_){
_start:
{
uint8_t v_res_836_; lean_object* v_r_837_; 
v_res_836_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2___redArg(v_x_834_, v_x_835_);
lean_dec(v_x_835_);
lean_dec_ref(v_x_834_);
v_r_837_ = lean_box(v_res_836_);
return v_r_837_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1___redArg(lean_object* v_mvarId_838_, lean_object* v___y_839_){
_start:
{
lean_object* v___x_841_; lean_object* v_mctx_842_; lean_object* v_eAssignment_843_; uint8_t v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_841_ = lean_st_ref_get(v___y_839_);
v_mctx_842_ = lean_ctor_get(v___x_841_, 0);
lean_inc_ref(v_mctx_842_);
lean_dec(v___x_841_);
v_eAssignment_843_ = lean_ctor_get(v_mctx_842_, 8);
lean_inc_ref(v_eAssignment_843_);
lean_dec_ref(v_mctx_842_);
v___x_844_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2___redArg(v_eAssignment_843_, v_mvarId_838_);
lean_dec_ref(v_eAssignment_843_);
v___x_845_ = lean_box(v___x_844_);
v___x_846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_846_, 0, v___x_845_);
v___x_847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_847_, 0, v___x_846_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1___redArg___boxed(lean_object* v_mvarId_848_, lean_object* v___y_849_, lean_object* v___y_850_){
_start:
{
lean_object* v_res_851_; 
v_res_851_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1___redArg(v_mvarId_848_, v___y_849_);
lean_dec(v___y_849_);
lean_dec(v_mvarId_848_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__3(lean_object* v_as_852_, size_t v_sz_853_, size_t v_i_854_, lean_object* v_b_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_){
_start:
{
lean_object* v_a_867_; uint8_t v___x_871_; 
v___x_871_ = lean_usize_dec_lt(v_i_854_, v_sz_853_);
if (v___x_871_ == 0)
{
lean_object* v___x_872_; lean_object* v___x_873_; 
v___x_872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_872_, 0, v_b_855_);
v___x_873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_873_, 0, v___x_872_);
return v___x_873_;
}
else
{
lean_object* v_a_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v_a_874_ = lean_array_uget_borrowed(v_as_852_, v_i_854_);
v___x_875_ = l_Lean_Expr_mvarId_x21(v_a_874_);
v___x_876_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1___redArg(v___x_875_, v___y_859_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_914_; 
v_a_877_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_914_ == 0)
{
v___x_879_ = v___x_876_;
v_isShared_880_ = v_isSharedCheck_914_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_876_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_914_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
if (lean_obj_tag(v_a_877_) == 0)
{
lean_del_object(v___x_879_);
lean_dec(v___x_875_);
goto v___jp_863_;
}
else
{
lean_object* v_val_881_; lean_object* v___x_882_; lean_object* v___y_884_; uint8_t v___y_885_; lean_object* v_a_890_; uint8_t v___y_894_; uint8_t v___x_912_; 
v_val_881_ = lean_ctor_get(v_a_877_, 0);
lean_inc(v_val_881_);
lean_dec_ref_known(v_a_877_, 1);
v___x_882_ = lean_box(0);
v___x_912_ = l_Lean_Expr_isMVar(v_a_874_);
if (v___x_912_ == 0)
{
lean_dec(v_val_881_);
v___y_894_ = v___x_912_;
goto v___jp_893_;
}
else
{
uint8_t v___x_913_; 
v___x_913_ = lean_unbox(v_val_881_);
lean_dec(v_val_881_);
if (v___x_913_ == 0)
{
v___y_894_ = v___x_912_;
goto v___jp_893_;
}
else
{
lean_del_object(v___x_879_);
lean_dec(v___x_875_);
v_a_867_ = v___x_882_;
goto v___jp_866_;
}
}
v___jp_883_:
{
if (v___y_885_ == 0)
{
lean_dec_ref(v___y_884_);
lean_del_object(v___x_879_);
v_a_867_ = v___x_882_;
goto v___jp_866_;
}
else
{
lean_object* v___x_887_; 
if (v_isShared_880_ == 0)
{
lean_ctor_set_tag(v___x_879_, 1);
lean_ctor_set(v___x_879_, 0, v___y_884_);
v___x_887_ = v___x_879_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v___y_884_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
v___jp_889_:
{
uint8_t v___x_891_; 
v___x_891_ = l_Lean_Exception_isInterrupt(v_a_890_);
if (v___x_891_ == 0)
{
uint8_t v___x_892_; 
lean_inc_ref(v_a_890_);
v___x_892_ = l_Lean_Exception_isRuntime(v_a_890_);
v___y_884_ = v_a_890_;
v___y_885_ = v___x_892_;
goto v___jp_883_;
}
else
{
v___y_884_ = v_a_890_;
v___y_885_ = v___x_891_;
goto v___jp_883_;
}
}
v___jp_893_:
{
if (v___y_894_ == 0)
{
lean_del_object(v___x_879_);
lean_dec(v___x_875_);
v_a_867_ = v___x_882_;
goto v___jp_866_;
}
else
{
lean_object* v___x_895_; 
lean_inc(v___y_861_);
lean_inc_ref(v___y_860_);
lean_inc(v___y_859_);
lean_inc_ref(v___y_858_);
lean_inc(v_a_874_);
v___x_895_ = lean_infer_type(v_a_874_, v___y_858_, v___y_859_, v___y_860_, v___y_861_);
if (lean_obj_tag(v___x_895_) == 0)
{
lean_object* v_a_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
v_a_896_ = lean_ctor_get(v___x_895_, 0);
lean_inc(v_a_896_);
lean_dec_ref_known(v___x_895_, 1);
v___x_897_ = lean_box(0);
v___x_898_ = l_Lean_Meta_synthInstance(v_a_896_, v___x_897_, v___y_858_, v___y_859_, v___y_860_, v___y_861_);
if (lean_obj_tag(v___x_898_) == 0)
{
lean_object* v_a_899_; lean_object* v___x_900_; 
v_a_899_ = lean_ctor_get(v___x_898_, 0);
lean_inc(v_a_899_);
lean_dec_ref_known(v___x_898_, 1);
v___x_900_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2___redArg(v___x_875_, v_a_899_, v___y_859_);
if (lean_obj_tag(v___x_900_) == 0)
{
lean_object* v_a_901_; 
lean_del_object(v___x_879_);
v_a_901_ = lean_ctor_get(v___x_900_, 0);
lean_inc(v_a_901_);
lean_dec_ref_known(v___x_900_, 1);
if (lean_obj_tag(v_a_901_) == 0)
{
goto v___jp_863_;
}
else
{
lean_dec_ref_known(v_a_901_, 1);
v_a_867_ = v___x_882_;
goto v___jp_866_;
}
}
else
{
lean_object* v_a_902_; 
v_a_902_ = lean_ctor_get(v___x_900_, 0);
lean_inc(v_a_902_);
lean_dec_ref_known(v___x_900_, 1);
v_a_890_ = v_a_902_;
goto v___jp_889_;
}
}
else
{
lean_object* v_a_903_; 
lean_dec(v___x_875_);
v_a_903_ = lean_ctor_get(v___x_898_, 0);
lean_inc(v_a_903_);
lean_dec_ref_known(v___x_898_, 1);
v_a_890_ = v_a_903_;
goto v___jp_889_;
}
}
else
{
lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_911_; 
lean_del_object(v___x_879_);
lean_dec(v___x_875_);
v_a_904_ = lean_ctor_get(v___x_895_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_895_);
if (v_isSharedCheck_911_ == 0)
{
v___x_906_ = v___x_895_;
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_dec(v___x_895_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_909_; 
if (v_isShared_907_ == 0)
{
v___x_909_ = v___x_906_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_a_904_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
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
lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_922_; 
lean_dec(v___x_875_);
v_a_915_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_922_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_922_ == 0)
{
v___x_917_ = v___x_876_;
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_dec(v___x_876_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_920_; 
if (v_isShared_918_ == 0)
{
v___x_920_ = v___x_917_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v_a_915_);
v___x_920_ = v_reuseFailAlloc_921_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
return v___x_920_;
}
}
}
}
v___jp_863_:
{
lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_864_ = lean_box(0);
v___x_865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_865_, 0, v___x_864_);
return v___x_865_;
}
v___jp_866_:
{
size_t v___x_868_; size_t v___x_869_; 
v___x_868_ = ((size_t)1ULL);
v___x_869_ = lean_usize_add(v_i_854_, v___x_868_);
v_i_854_ = v___x_869_;
v_b_855_ = v_a_867_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__3___boxed(lean_object* v_as_923_, lean_object* v_sz_924_, lean_object* v_i_925_, lean_object* v_b_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_){
_start:
{
size_t v_sz_boxed_934_; size_t v_i_boxed_935_; lean_object* v_res_936_; 
v_sz_boxed_934_ = lean_unbox_usize(v_sz_924_);
lean_dec(v_sz_924_);
v_i_boxed_935_ = lean_unbox_usize(v_i_925_);
lean_dec(v_i_925_);
v_res_936_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__3(v_as_923_, v_sz_boxed_934_, v_i_boxed_935_, v_b_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_, v___y_932_);
lean_dec(v___y_932_);
lean_dec_ref(v___y_931_);
lean_dec(v___y_930_);
lean_dec_ref(v___y_929_);
lean_dec(v___y_928_);
lean_dec_ref(v___y_927_);
lean_dec_ref(v_as_923_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__0_spec__0(lean_object* v_msgData_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_){
_start:
{
lean_object* v___x_943_; lean_object* v_env_944_; lean_object* v___x_945_; lean_object* v_mctx_946_; lean_object* v_lctx_947_; lean_object* v_options_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_943_ = lean_st_ref_get(v___y_941_);
v_env_944_ = lean_ctor_get(v___x_943_, 0);
lean_inc_ref(v_env_944_);
lean_dec(v___x_943_);
v___x_945_ = lean_st_ref_get(v___y_939_);
v_mctx_946_ = lean_ctor_get(v___x_945_, 0);
lean_inc_ref(v_mctx_946_);
lean_dec(v___x_945_);
v_lctx_947_ = lean_ctor_get(v___y_938_, 2);
v_options_948_ = lean_ctor_get(v___y_940_, 2);
lean_inc_ref(v_options_948_);
lean_inc_ref(v_lctx_947_);
v___x_949_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_949_, 0, v_env_944_);
lean_ctor_set(v___x_949_, 1, v_mctx_946_);
lean_ctor_set(v___x_949_, 2, v_lctx_947_);
lean_ctor_set(v___x_949_, 3, v_options_948_);
v___x_950_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_950_, 0, v___x_949_);
lean_ctor_set(v___x_950_, 1, v_msgData_937_);
v___x_951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_951_, 0, v___x_950_);
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__0_spec__0___boxed(lean_object* v_msgData_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_){
_start:
{
lean_object* v_res_958_; 
v_res_958_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__0_spec__0(v_msgData_952_, v___y_953_, v___y_954_, v___y_955_, v___y_956_);
lean_dec(v___y_956_);
lean_dec_ref(v___y_955_);
lean_dec(v___y_954_);
lean_dec_ref(v___y_953_);
return v_res_958_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__0___redArg(lean_object* v_msg_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
lean_object* v_ref_965_; lean_object* v___x_966_; lean_object* v_a_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_975_; 
v_ref_965_ = lean_ctor_get(v___y_962_, 5);
v___x_966_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__0_spec__0(v_msg_959_, v___y_960_, v___y_961_, v___y_962_, v___y_963_);
v_a_967_ = lean_ctor_get(v___x_966_, 0);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_975_ == 0)
{
v___x_969_ = v___x_966_;
v_isShared_970_ = v_isSharedCheck_975_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_a_967_);
lean_dec(v___x_966_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_975_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_971_; lean_object* v___x_973_; 
lean_inc(v_ref_965_);
v___x_971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_971_, 0, v_ref_965_);
lean_ctor_set(v___x_971_, 1, v_a_967_);
if (v_isShared_970_ == 0)
{
lean_ctor_set_tag(v___x_969_, 1);
lean_ctor_set(v___x_969_, 0, v___x_971_);
v___x_973_ = v___x_969_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v___x_971_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__0___redArg___boxed(lean_object* v_msg_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__0___redArg(v_msg_976_, v___y_977_, v___y_978_, v___y_979_, v___y_980_);
lean_dec(v___y_980_);
lean_dec_ref(v___y_979_);
lean_dec(v___y_978_);
lean_dec_ref(v___y_977_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__5___redArg(lean_object* v_as_983_, size_t v_sz_984_, size_t v_i_985_, lean_object* v_b_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_){
_start:
{
uint8_t v___x_993_; 
v___x_993_ = lean_usize_dec_lt(v_i_985_, v_sz_984_);
if (v___x_993_ == 0)
{
lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_994_, 0, v_b_986_);
v___x_995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_995_, 0, v___x_994_);
return v___x_995_;
}
else
{
lean_object* v_a_996_; lean_object* v___x_997_; 
v_a_996_ = lean_array_uget_borrowed(v_as_983_, v_i_985_);
lean_inc(v_a_996_);
v___x_997_ = l_Lean_Meta_Sym_inferType___redArg(v_a_996_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v_a_998_; uint8_t v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; 
v_a_998_ = lean_ctor_get(v___x_997_, 0);
lean_inc_n(v_a_998_, 2);
lean_dec_ref_known(v___x_997_, 1);
v___x_999_ = 0;
v___x_1000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1000_, 0, v_a_998_);
v___x_1001_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkStateName(v_a_998_);
lean_dec(v_a_998_);
v___x_1002_ = l_Lean_Meta_mkFreshExprMVar(v___x_1000_, v___x_999_, v___x_1001_, v___y_988_, v___y_989_, v___y_990_, v___y_991_);
if (lean_obj_tag(v___x_1002_) == 0)
{
lean_object* v_a_1003_; lean_object* v___x_1004_; size_t v___x_1005_; size_t v___x_1006_; 
v_a_1003_ = lean_ctor_get(v___x_1002_, 0);
lean_inc(v_a_1003_);
lean_dec_ref_known(v___x_1002_, 1);
v___x_1004_ = lean_array_push(v_b_986_, v_a_1003_);
v___x_1005_ = ((size_t)1ULL);
v___x_1006_ = lean_usize_add(v_i_985_, v___x_1005_);
v_i_985_ = v___x_1006_;
v_b_986_ = v___x_1004_;
goto _start;
}
else
{
lean_object* v_a_1008_; lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1015_; 
lean_dec_ref(v_b_986_);
v_a_1008_ = lean_ctor_get(v___x_1002_, 0);
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_1002_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1010_ = v___x_1002_;
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
else
{
lean_inc(v_a_1008_);
lean_dec(v___x_1002_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
lean_object* v___x_1013_; 
if (v_isShared_1011_ == 0)
{
v___x_1013_ = v___x_1010_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_a_1008_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
return v___x_1013_;
}
}
}
}
else
{
lean_object* v_a_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
lean_dec_ref(v_b_986_);
v_a_1016_ = lean_ctor_get(v___x_997_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1018_ = v___x_997_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_a_1016_);
lean_dec(v___x_997_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_a_1016_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__5___redArg___boxed(lean_object* v_as_1024_, lean_object* v_sz_1025_, lean_object* v_i_1026_, lean_object* v_b_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_){
_start:
{
size_t v_sz_boxed_1034_; size_t v_i_boxed_1035_; lean_object* v_res_1036_; 
v_sz_boxed_1034_ = lean_unbox_usize(v_sz_1025_);
lean_dec(v_sz_1025_);
v_i_boxed_1035_ = lean_unbox_usize(v_i_1026_);
lean_dec(v_i_1026_);
v_res_1036_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__5___redArg(v_as_1024_, v_sz_boxed_1034_, v_i_boxed_1035_, v_b_1027_, v___y_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_);
lean_dec(v___y_1032_);
lean_dec_ref(v___y_1031_);
lean_dec(v___y_1030_);
lean_dec_ref(v___y_1029_);
lean_dec(v___y_1028_);
lean_dec_ref(v_as_1024_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14_spec__20___redArg___lam__0(lean_object* v_k_1037_, lean_object* v___y_1038_, lean_object* v_b_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_){
_start:
{
lean_object* v___x_1045_; 
lean_inc(v___y_1043_);
lean_inc_ref(v___y_1042_);
lean_inc(v___y_1041_);
lean_inc_ref(v___y_1040_);
lean_inc(v___y_1038_);
v___x_1045_ = lean_apply_7(v_k_1037_, v_b_1039_, v___y_1038_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_, lean_box(0));
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14_spec__20___redArg___lam__0___boxed(lean_object* v_k_1046_, lean_object* v___y_1047_, lean_object* v_b_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14_spec__20___redArg___lam__0(v_k_1046_, v___y_1047_, v_b_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
lean_dec(v___y_1052_);
lean_dec_ref(v___y_1051_);
lean_dec(v___y_1050_);
lean_dec_ref(v___y_1049_);
lean_dec(v___y_1047_);
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16_spec__23___redArg(lean_object* v_name_1055_, lean_object* v_type_1056_, lean_object* v_val_1057_, lean_object* v_k_1058_, uint8_t v_nondep_1059_, uint8_t v_kind_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_){
_start:
{
lean_object* v___f_1067_; lean_object* v___x_1068_; 
lean_inc(v___y_1061_);
v___f_1067_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14_spec__20___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1067_, 0, v_k_1058_);
lean_closure_set(v___f_1067_, 1, v___y_1061_);
v___x_1068_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1055_, v_type_1056_, v_val_1057_, v___f_1067_, v_nondep_1059_, v_kind_1060_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_);
if (lean_obj_tag(v___x_1068_) == 0)
{
return v___x_1068_;
}
else
{
lean_object* v_a_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1076_; 
v_a_1069_ = lean_ctor_get(v___x_1068_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1071_ = v___x_1068_;
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_a_1069_);
lean_dec(v___x_1068_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16_spec__23___redArg___boxed(lean_object* v_name_1077_, lean_object* v_type_1078_, lean_object* v_val_1079_, lean_object* v_k_1080_, lean_object* v_nondep_1081_, lean_object* v_kind_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_){
_start:
{
uint8_t v_nondep_boxed_1089_; uint8_t v_kind_boxed_1090_; lean_object* v_res_1091_; 
v_nondep_boxed_1089_ = lean_unbox(v_nondep_1081_);
v_kind_boxed_1090_ = lean_unbox(v_kind_1082_);
v_res_1091_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16_spec__23___redArg(v_name_1077_, v_type_1078_, v_val_1079_, v_k_1080_, v_nondep_boxed_1089_, v_kind_boxed_1090_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_);
lean_dec(v___y_1087_);
lean_dec_ref(v___y_1086_);
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1084_);
lean_dec(v___y_1083_);
return v_res_1091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14_spec__20___redArg(lean_object* v_name_1092_, uint8_t v_bi_1093_, lean_object* v_type_1094_, lean_object* v_k_1095_, uint8_t v_kind_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_){
_start:
{
lean_object* v___f_1103_; lean_object* v___x_1104_; 
lean_inc(v___y_1097_);
v___f_1103_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14_spec__20___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1103_, 0, v_k_1095_);
lean_closure_set(v___f_1103_, 1, v___y_1097_);
v___x_1104_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1092_, v_bi_1093_, v_type_1094_, v___f_1103_, v_kind_1096_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_);
if (lean_obj_tag(v___x_1104_) == 0)
{
return v___x_1104_;
}
else
{
lean_object* v_a_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1112_; 
v_a_1105_ = lean_ctor_get(v___x_1104_, 0);
v_isSharedCheck_1112_ = !lean_is_exclusive(v___x_1104_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1107_ = v___x_1104_;
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_a_1105_);
lean_dec(v___x_1104_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1110_; 
if (v_isShared_1108_ == 0)
{
v___x_1110_ = v___x_1107_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v_a_1105_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
return v___x_1110_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14_spec__20___redArg___boxed(lean_object* v_name_1113_, lean_object* v_bi_1114_, lean_object* v_type_1115_, lean_object* v_k_1116_, lean_object* v_kind_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_){
_start:
{
uint8_t v_bi_boxed_1124_; uint8_t v_kind_boxed_1125_; lean_object* v_res_1126_; 
v_bi_boxed_1124_ = lean_unbox(v_bi_1114_);
v_kind_boxed_1125_ = lean_unbox(v_kind_1117_);
v_res_1126_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14_spec__20___redArg(v_name_1113_, v_bi_boxed_1124_, v_type_1115_, v_k_1116_, v_kind_boxed_1125_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_);
lean_dec(v___y_1122_);
lean_dec_ref(v___y_1121_);
lean_dec(v___y_1120_);
lean_dec_ref(v___y_1119_);
lean_dec(v___y_1118_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12___redArg___lam__2(lean_object* v___x_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_){
_start:
{
lean_object* v___x_1133_; 
v___x_1133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1133_, 0, v___x_1127_);
return v___x_1133_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12___redArg___lam__2___boxed(lean_object* v___x_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_){
_start:
{
lean_object* v_res_1140_; 
v_res_1140_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12___redArg___lam__2(v___x_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_);
lean_dec(v___y_1138_);
lean_dec_ref(v___y_1137_);
lean_dec(v___y_1136_);
lean_dec_ref(v___y_1135_);
return v_res_1140_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13_spec__18___redArg(lean_object* v_a_1141_, lean_object* v_x_1142_){
_start:
{
if (lean_obj_tag(v_x_1142_) == 0)
{
lean_object* v___x_1143_; 
v___x_1143_ = lean_box(0);
return v___x_1143_;
}
else
{
lean_object* v_key_1144_; lean_object* v_value_1145_; lean_object* v_tail_1146_; uint8_t v___x_1147_; 
v_key_1144_ = lean_ctor_get(v_x_1142_, 0);
v_value_1145_ = lean_ctor_get(v_x_1142_, 1);
v_tail_1146_ = lean_ctor_get(v_x_1142_, 2);
v___x_1147_ = l_Lean_ExprStructEq_beq(v_key_1144_, v_a_1141_);
if (v___x_1147_ == 0)
{
v_x_1142_ = v_tail_1146_;
goto _start;
}
else
{
lean_object* v___x_1149_; 
lean_inc(v_value_1145_);
v___x_1149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1149_, 0, v_value_1145_);
return v___x_1149_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13_spec__18___redArg___boxed(lean_object* v_a_1150_, lean_object* v_x_1151_){
_start:
{
lean_object* v_res_1152_; 
v_res_1152_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13_spec__18___redArg(v_a_1150_, v_x_1151_);
lean_dec(v_x_1151_);
lean_dec_ref(v_a_1150_);
return v_res_1152_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13___redArg(lean_object* v_m_1153_, lean_object* v_a_1154_){
_start:
{
lean_object* v_buckets_1155_; lean_object* v___x_1156_; uint64_t v___x_1157_; uint64_t v___x_1158_; uint64_t v___x_1159_; uint64_t v_fold_1160_; uint64_t v___x_1161_; uint64_t v___x_1162_; uint64_t v___x_1163_; size_t v___x_1164_; size_t v___x_1165_; size_t v___x_1166_; size_t v___x_1167_; size_t v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
v_buckets_1155_ = lean_ctor_get(v_m_1153_, 1);
v___x_1156_ = lean_array_get_size(v_buckets_1155_);
v___x_1157_ = l_Lean_ExprStructEq_hash(v_a_1154_);
v___x_1158_ = 32ULL;
v___x_1159_ = lean_uint64_shift_right(v___x_1157_, v___x_1158_);
v_fold_1160_ = lean_uint64_xor(v___x_1157_, v___x_1159_);
v___x_1161_ = 16ULL;
v___x_1162_ = lean_uint64_shift_right(v_fold_1160_, v___x_1161_);
v___x_1163_ = lean_uint64_xor(v_fold_1160_, v___x_1162_);
v___x_1164_ = lean_uint64_to_usize(v___x_1163_);
v___x_1165_ = lean_usize_of_nat(v___x_1156_);
v___x_1166_ = ((size_t)1ULL);
v___x_1167_ = lean_usize_sub(v___x_1165_, v___x_1166_);
v___x_1168_ = lean_usize_land(v___x_1164_, v___x_1167_);
v___x_1169_ = lean_array_uget_borrowed(v_buckets_1155_, v___x_1168_);
v___x_1170_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13_spec__18___redArg(v_a_1154_, v___x_1169_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13___redArg___boxed(lean_object* v_m_1171_, lean_object* v_a_1172_){
_start:
{
lean_object* v_res_1173_; 
v_res_1173_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13___redArg(v_m_1171_, v_a_1172_);
lean_dec_ref(v_a_1172_);
lean_dec_ref(v_m_1171_);
return v_res_1173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__0(lean_object* v_00_u03b1_1174_, lean_object* v_x_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_){
_start:
{
lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1181_ = lean_apply_1(v_x_1175_, lean_box(0));
v___x_1182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1182_, 0, v___x_1181_);
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__0___boxed(lean_object* v_00_u03b1_1183_, lean_object* v_x_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__0(v_00_u03b1_1183_, v_x_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_);
lean_dec(v___y_1188_);
lean_dec_ref(v___y_1187_);
lean_dec(v___y_1186_);
lean_dec_ref(v___y_1185_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__30___redArg(lean_object* v_a_1191_, lean_object* v_b_1192_, lean_object* v_x_1193_){
_start:
{
if (lean_obj_tag(v_x_1193_) == 0)
{
lean_dec(v_b_1192_);
lean_dec_ref(v_a_1191_);
return v_x_1193_;
}
else
{
lean_object* v_key_1194_; lean_object* v_value_1195_; lean_object* v_tail_1196_; lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1208_; 
v_key_1194_ = lean_ctor_get(v_x_1193_, 0);
v_value_1195_ = lean_ctor_get(v_x_1193_, 1);
v_tail_1196_ = lean_ctor_get(v_x_1193_, 2);
v_isSharedCheck_1208_ = !lean_is_exclusive(v_x_1193_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1198_ = v_x_1193_;
v_isShared_1199_ = v_isSharedCheck_1208_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_tail_1196_);
lean_inc(v_value_1195_);
lean_inc(v_key_1194_);
lean_dec(v_x_1193_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1208_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
uint8_t v___x_1200_; 
v___x_1200_ = l_Lean_ExprStructEq_beq(v_key_1194_, v_a_1191_);
if (v___x_1200_ == 0)
{
lean_object* v___x_1201_; lean_object* v___x_1203_; 
v___x_1201_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__30___redArg(v_a_1191_, v_b_1192_, v_tail_1196_);
if (v_isShared_1199_ == 0)
{
lean_ctor_set(v___x_1198_, 2, v___x_1201_);
v___x_1203_ = v___x_1198_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_key_1194_);
lean_ctor_set(v_reuseFailAlloc_1204_, 1, v_value_1195_);
lean_ctor_set(v_reuseFailAlloc_1204_, 2, v___x_1201_);
v___x_1203_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
return v___x_1203_;
}
}
else
{
lean_object* v___x_1206_; 
lean_dec(v_value_1195_);
lean_dec(v_key_1194_);
if (v_isShared_1199_ == 0)
{
lean_ctor_set(v___x_1198_, 1, v_b_1192_);
lean_ctor_set(v___x_1198_, 0, v_a_1191_);
v___x_1206_ = v___x_1198_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v_a_1191_);
lean_ctor_set(v_reuseFailAlloc_1207_, 1, v_b_1192_);
lean_ctor_set(v_reuseFailAlloc_1207_, 2, v_tail_1196_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
return v___x_1206_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__28___redArg(lean_object* v_a_1209_, lean_object* v_x_1210_){
_start:
{
if (lean_obj_tag(v_x_1210_) == 0)
{
uint8_t v___x_1211_; 
v___x_1211_ = 0;
return v___x_1211_;
}
else
{
lean_object* v_key_1212_; lean_object* v_tail_1213_; uint8_t v___x_1214_; 
v_key_1212_ = lean_ctor_get(v_x_1210_, 0);
v_tail_1213_ = lean_ctor_get(v_x_1210_, 2);
v___x_1214_ = l_Lean_ExprStructEq_beq(v_key_1212_, v_a_1209_);
if (v___x_1214_ == 0)
{
v_x_1210_ = v_tail_1213_;
goto _start;
}
else
{
return v___x_1214_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__28___redArg___boxed(lean_object* v_a_1216_, lean_object* v_x_1217_){
_start:
{
uint8_t v_res_1218_; lean_object* v_r_1219_; 
v_res_1218_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__28___redArg(v_a_1216_, v_x_1217_);
lean_dec(v_x_1217_);
lean_dec_ref(v_a_1216_);
v_r_1219_ = lean_box(v_res_1218_);
return v_r_1219_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__29_spec__31_spec__32___redArg(lean_object* v_x_1220_, lean_object* v_x_1221_){
_start:
{
if (lean_obj_tag(v_x_1221_) == 0)
{
return v_x_1220_;
}
else
{
lean_object* v_key_1222_; lean_object* v_value_1223_; lean_object* v_tail_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1247_; 
v_key_1222_ = lean_ctor_get(v_x_1221_, 0);
v_value_1223_ = lean_ctor_get(v_x_1221_, 1);
v_tail_1224_ = lean_ctor_get(v_x_1221_, 2);
v_isSharedCheck_1247_ = !lean_is_exclusive(v_x_1221_);
if (v_isSharedCheck_1247_ == 0)
{
v___x_1226_ = v_x_1221_;
v_isShared_1227_ = v_isSharedCheck_1247_;
goto v_resetjp_1225_;
}
else
{
lean_inc(v_tail_1224_);
lean_inc(v_value_1223_);
lean_inc(v_key_1222_);
lean_dec(v_x_1221_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1247_;
goto v_resetjp_1225_;
}
v_resetjp_1225_:
{
lean_object* v___x_1228_; uint64_t v___x_1229_; uint64_t v___x_1230_; uint64_t v___x_1231_; uint64_t v_fold_1232_; uint64_t v___x_1233_; uint64_t v___x_1234_; uint64_t v___x_1235_; size_t v___x_1236_; size_t v___x_1237_; size_t v___x_1238_; size_t v___x_1239_; size_t v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1243_; 
v___x_1228_ = lean_array_get_size(v_x_1220_);
v___x_1229_ = l_Lean_ExprStructEq_hash(v_key_1222_);
v___x_1230_ = 32ULL;
v___x_1231_ = lean_uint64_shift_right(v___x_1229_, v___x_1230_);
v_fold_1232_ = lean_uint64_xor(v___x_1229_, v___x_1231_);
v___x_1233_ = 16ULL;
v___x_1234_ = lean_uint64_shift_right(v_fold_1232_, v___x_1233_);
v___x_1235_ = lean_uint64_xor(v_fold_1232_, v___x_1234_);
v___x_1236_ = lean_uint64_to_usize(v___x_1235_);
v___x_1237_ = lean_usize_of_nat(v___x_1228_);
v___x_1238_ = ((size_t)1ULL);
v___x_1239_ = lean_usize_sub(v___x_1237_, v___x_1238_);
v___x_1240_ = lean_usize_land(v___x_1236_, v___x_1239_);
v___x_1241_ = lean_array_uget_borrowed(v_x_1220_, v___x_1240_);
lean_inc(v___x_1241_);
if (v_isShared_1227_ == 0)
{
lean_ctor_set(v___x_1226_, 2, v___x_1241_);
v___x_1243_ = v___x_1226_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v_key_1222_);
lean_ctor_set(v_reuseFailAlloc_1246_, 1, v_value_1223_);
lean_ctor_set(v_reuseFailAlloc_1246_, 2, v___x_1241_);
v___x_1243_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
lean_object* v___x_1244_; 
v___x_1244_ = lean_array_uset(v_x_1220_, v___x_1240_, v___x_1243_);
v_x_1220_ = v___x_1244_;
v_x_1221_ = v_tail_1224_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__29_spec__31___redArg(lean_object* v_i_1248_, lean_object* v_source_1249_, lean_object* v_target_1250_){
_start:
{
lean_object* v___x_1251_; uint8_t v___x_1252_; 
v___x_1251_ = lean_array_get_size(v_source_1249_);
v___x_1252_ = lean_nat_dec_lt(v_i_1248_, v___x_1251_);
if (v___x_1252_ == 0)
{
lean_dec_ref(v_source_1249_);
lean_dec(v_i_1248_);
return v_target_1250_;
}
else
{
lean_object* v_es_1253_; lean_object* v___x_1254_; lean_object* v_source_1255_; lean_object* v_target_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; 
v_es_1253_ = lean_array_fget(v_source_1249_, v_i_1248_);
v___x_1254_ = lean_box(0);
v_source_1255_ = lean_array_fset(v_source_1249_, v_i_1248_, v___x_1254_);
v_target_1256_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__29_spec__31_spec__32___redArg(v_target_1250_, v_es_1253_);
v___x_1257_ = lean_unsigned_to_nat(1u);
v___x_1258_ = lean_nat_add(v_i_1248_, v___x_1257_);
lean_dec(v_i_1248_);
v_i_1248_ = v___x_1258_;
v_source_1249_ = v_source_1255_;
v_target_1250_ = v_target_1256_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__29___redArg(lean_object* v_data_1260_){
_start:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v_nbuckets_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1261_ = lean_array_get_size(v_data_1260_);
v___x_1262_ = lean_unsigned_to_nat(2u);
v_nbuckets_1263_ = lean_nat_mul(v___x_1261_, v___x_1262_);
v___x_1264_ = lean_unsigned_to_nat(0u);
v___x_1265_ = lean_box(0);
v___x_1266_ = lean_mk_array(v_nbuckets_1263_, v___x_1265_);
v___x_1267_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__29_spec__31___redArg(v___x_1264_, v_data_1260_, v___x_1266_);
return v___x_1267_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19___redArg(lean_object* v_m_1268_, lean_object* v_a_1269_, lean_object* v_b_1270_){
_start:
{
lean_object* v_size_1271_; lean_object* v_buckets_1272_; lean_object* v___x_1274_; uint8_t v_isShared_1275_; uint8_t v_isSharedCheck_1315_; 
v_size_1271_ = lean_ctor_get(v_m_1268_, 0);
v_buckets_1272_ = lean_ctor_get(v_m_1268_, 1);
v_isSharedCheck_1315_ = !lean_is_exclusive(v_m_1268_);
if (v_isSharedCheck_1315_ == 0)
{
v___x_1274_ = v_m_1268_;
v_isShared_1275_ = v_isSharedCheck_1315_;
goto v_resetjp_1273_;
}
else
{
lean_inc(v_buckets_1272_);
lean_inc(v_size_1271_);
lean_dec(v_m_1268_);
v___x_1274_ = lean_box(0);
v_isShared_1275_ = v_isSharedCheck_1315_;
goto v_resetjp_1273_;
}
v_resetjp_1273_:
{
lean_object* v___x_1276_; uint64_t v___x_1277_; uint64_t v___x_1278_; uint64_t v___x_1279_; uint64_t v_fold_1280_; uint64_t v___x_1281_; uint64_t v___x_1282_; uint64_t v___x_1283_; size_t v___x_1284_; size_t v___x_1285_; size_t v___x_1286_; size_t v___x_1287_; size_t v___x_1288_; lean_object* v_bkt_1289_; uint8_t v___x_1290_; 
v___x_1276_ = lean_array_get_size(v_buckets_1272_);
v___x_1277_ = l_Lean_ExprStructEq_hash(v_a_1269_);
v___x_1278_ = 32ULL;
v___x_1279_ = lean_uint64_shift_right(v___x_1277_, v___x_1278_);
v_fold_1280_ = lean_uint64_xor(v___x_1277_, v___x_1279_);
v___x_1281_ = 16ULL;
v___x_1282_ = lean_uint64_shift_right(v_fold_1280_, v___x_1281_);
v___x_1283_ = lean_uint64_xor(v_fold_1280_, v___x_1282_);
v___x_1284_ = lean_uint64_to_usize(v___x_1283_);
v___x_1285_ = lean_usize_of_nat(v___x_1276_);
v___x_1286_ = ((size_t)1ULL);
v___x_1287_ = lean_usize_sub(v___x_1285_, v___x_1286_);
v___x_1288_ = lean_usize_land(v___x_1284_, v___x_1287_);
v_bkt_1289_ = lean_array_uget_borrowed(v_buckets_1272_, v___x_1288_);
v___x_1290_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__28___redArg(v_a_1269_, v_bkt_1289_);
if (v___x_1290_ == 0)
{
lean_object* v___x_1291_; lean_object* v_size_x27_1292_; lean_object* v___x_1293_; lean_object* v_buckets_x27_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; uint8_t v___x_1300_; 
v___x_1291_ = lean_unsigned_to_nat(1u);
v_size_x27_1292_ = lean_nat_add(v_size_1271_, v___x_1291_);
lean_dec(v_size_1271_);
lean_inc(v_bkt_1289_);
v___x_1293_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1293_, 0, v_a_1269_);
lean_ctor_set(v___x_1293_, 1, v_b_1270_);
lean_ctor_set(v___x_1293_, 2, v_bkt_1289_);
v_buckets_x27_1294_ = lean_array_uset(v_buckets_1272_, v___x_1288_, v___x_1293_);
v___x_1295_ = lean_unsigned_to_nat(4u);
v___x_1296_ = lean_nat_mul(v_size_x27_1292_, v___x_1295_);
v___x_1297_ = lean_unsigned_to_nat(3u);
v___x_1298_ = lean_nat_div(v___x_1296_, v___x_1297_);
lean_dec(v___x_1296_);
v___x_1299_ = lean_array_get_size(v_buckets_x27_1294_);
v___x_1300_ = lean_nat_dec_le(v___x_1298_, v___x_1299_);
lean_dec(v___x_1298_);
if (v___x_1300_ == 0)
{
lean_object* v_val_1301_; lean_object* v___x_1303_; 
v_val_1301_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__29___redArg(v_buckets_x27_1294_);
if (v_isShared_1275_ == 0)
{
lean_ctor_set(v___x_1274_, 1, v_val_1301_);
lean_ctor_set(v___x_1274_, 0, v_size_x27_1292_);
v___x_1303_ = v___x_1274_;
goto v_reusejp_1302_;
}
else
{
lean_object* v_reuseFailAlloc_1304_; 
v_reuseFailAlloc_1304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1304_, 0, v_size_x27_1292_);
lean_ctor_set(v_reuseFailAlloc_1304_, 1, v_val_1301_);
v___x_1303_ = v_reuseFailAlloc_1304_;
goto v_reusejp_1302_;
}
v_reusejp_1302_:
{
return v___x_1303_;
}
}
else
{
lean_object* v___x_1306_; 
if (v_isShared_1275_ == 0)
{
lean_ctor_set(v___x_1274_, 1, v_buckets_x27_1294_);
lean_ctor_set(v___x_1274_, 0, v_size_x27_1292_);
v___x_1306_ = v___x_1274_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v_size_x27_1292_);
lean_ctor_set(v_reuseFailAlloc_1307_, 1, v_buckets_x27_1294_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
}
else
{
lean_object* v___x_1308_; lean_object* v_buckets_x27_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1313_; 
lean_inc(v_bkt_1289_);
v___x_1308_ = lean_box(0);
v_buckets_x27_1309_ = lean_array_uset(v_buckets_1272_, v___x_1288_, v___x_1308_);
v___x_1310_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__30___redArg(v_a_1269_, v_b_1270_, v_bkt_1289_);
v___x_1311_ = lean_array_uset(v_buckets_x27_1309_, v___x_1288_, v___x_1310_);
if (v_isShared_1275_ == 0)
{
lean_ctor_set(v___x_1274_, 1, v___x_1311_);
v___x_1313_ = v___x_1274_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1314_; 
v_reuseFailAlloc_1314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1314_, 0, v_size_1271_);
lean_ctor_set(v_reuseFailAlloc_1314_, 1, v___x_1311_);
v___x_1313_ = v_reuseFailAlloc_1314_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
return v___x_1313_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__2(lean_object* v_a_1316_, lean_object* v_e_1317_, lean_object* v_a_1318_){
_start:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1320_ = lean_st_ref_take(v_a_1316_);
v___x_1321_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19___redArg(v___x_1320_, v_e_1317_, v_a_1318_);
v___x_1322_ = lean_st_ref_set(v_a_1316_, v___x_1321_);
v___x_1323_ = lean_box(0);
return v___x_1323_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__2___boxed(lean_object* v_a_1324_, lean_object* v_e_1325_, lean_object* v_a_1326_, lean_object* v___y_1327_){
_start:
{
lean_object* v_res_1328_; 
v_res_1328_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__2(v_a_1324_, v_e_1325_, v_a_1326_);
lean_dec(v_a_1324_);
return v_res_1328_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__3(void){
_start:
{
lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1334_ = l_Lean_maxRecDepthErrorMessage;
v___x_1335_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1334_);
return v___x_1335_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__4(void){
_start:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1336_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__3);
v___x_1337_ = l_Lean_MessageData_ofFormat(v___x_1336_);
return v___x_1337_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__5(void){
_start:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___x_1338_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__4);
v___x_1339_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__2));
v___x_1340_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1339_);
lean_ctor_set(v___x_1340_, 1, v___x_1338_);
return v___x_1340_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg(lean_object* v_ref_1341_){
_start:
{
lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; 
v___x_1343_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___closed__5);
v___x_1344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1344_, 0, v_ref_1341_);
lean_ctor_set(v___x_1344_, 1, v___x_1343_);
v___x_1345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1345_, 0, v___x_1344_);
return v___x_1345_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg___boxed(lean_object* v_ref_1346_, lean_object* v___y_1347_){
_start:
{
lean_object* v_res_1348_; 
v_res_1348_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg(v_ref_1346_);
return v_res_1348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18___redArg(lean_object* v_x_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_){
_start:
{
lean_object* v___y_1357_; lean_object* v_fileName_1366_; lean_object* v_fileMap_1367_; lean_object* v_options_1368_; lean_object* v_currRecDepth_1369_; lean_object* v_maxRecDepth_1370_; lean_object* v_ref_1371_; lean_object* v_currNamespace_1372_; lean_object* v_openDecls_1373_; lean_object* v_initHeartbeats_1374_; lean_object* v_maxHeartbeats_1375_; lean_object* v_quotContext_1376_; lean_object* v_currMacroScope_1377_; uint8_t v_diag_1378_; lean_object* v_cancelTk_x3f_1379_; uint8_t v_suppressElabErrors_1380_; lean_object* v_inheritedTraceOptions_1381_; lean_object* v___x_1387_; uint8_t v___x_1388_; 
v_fileName_1366_ = lean_ctor_get(v___y_1353_, 0);
v_fileMap_1367_ = lean_ctor_get(v___y_1353_, 1);
v_options_1368_ = lean_ctor_get(v___y_1353_, 2);
v_currRecDepth_1369_ = lean_ctor_get(v___y_1353_, 3);
v_maxRecDepth_1370_ = lean_ctor_get(v___y_1353_, 4);
v_ref_1371_ = lean_ctor_get(v___y_1353_, 5);
v_currNamespace_1372_ = lean_ctor_get(v___y_1353_, 6);
v_openDecls_1373_ = lean_ctor_get(v___y_1353_, 7);
v_initHeartbeats_1374_ = lean_ctor_get(v___y_1353_, 8);
v_maxHeartbeats_1375_ = lean_ctor_get(v___y_1353_, 9);
v_quotContext_1376_ = lean_ctor_get(v___y_1353_, 10);
v_currMacroScope_1377_ = lean_ctor_get(v___y_1353_, 11);
v_diag_1378_ = lean_ctor_get_uint8(v___y_1353_, sizeof(void*)*14);
v_cancelTk_x3f_1379_ = lean_ctor_get(v___y_1353_, 12);
v_suppressElabErrors_1380_ = lean_ctor_get_uint8(v___y_1353_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1381_ = lean_ctor_get(v___y_1353_, 13);
v___x_1387_ = lean_unsigned_to_nat(0u);
v___x_1388_ = lean_nat_dec_eq(v_maxRecDepth_1370_, v___x_1387_);
if (v___x_1388_ == 0)
{
uint8_t v___x_1389_; 
v___x_1389_ = lean_nat_dec_eq(v_currRecDepth_1369_, v_maxRecDepth_1370_);
if (v___x_1389_ == 0)
{
goto v___jp_1382_;
}
else
{
lean_object* v___x_1390_; 
lean_dec_ref(v_x_1349_);
lean_inc(v_ref_1371_);
v___x_1390_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg(v_ref_1371_);
v___y_1357_ = v___x_1390_;
goto v___jp_1356_;
}
}
else
{
goto v___jp_1382_;
}
v___jp_1356_:
{
if (lean_obj_tag(v___y_1357_) == 0)
{
return v___y_1357_;
}
else
{
lean_object* v_a_1358_; lean_object* v___x_1360_; uint8_t v_isShared_1361_; uint8_t v_isSharedCheck_1365_; 
v_a_1358_ = lean_ctor_get(v___y_1357_, 0);
v_isSharedCheck_1365_ = !lean_is_exclusive(v___y_1357_);
if (v_isSharedCheck_1365_ == 0)
{
v___x_1360_ = v___y_1357_;
v_isShared_1361_ = v_isSharedCheck_1365_;
goto v_resetjp_1359_;
}
else
{
lean_inc(v_a_1358_);
lean_dec(v___y_1357_);
v___x_1360_ = lean_box(0);
v_isShared_1361_ = v_isSharedCheck_1365_;
goto v_resetjp_1359_;
}
v_resetjp_1359_:
{
lean_object* v___x_1363_; 
if (v_isShared_1361_ == 0)
{
v___x_1363_ = v___x_1360_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v_a_1358_);
v___x_1363_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
return v___x_1363_;
}
}
}
}
v___jp_1382_:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; 
v___x_1383_ = lean_unsigned_to_nat(1u);
v___x_1384_ = lean_nat_add(v_currRecDepth_1369_, v___x_1383_);
lean_inc_ref(v_inheritedTraceOptions_1381_);
lean_inc(v_cancelTk_x3f_1379_);
lean_inc(v_currMacroScope_1377_);
lean_inc(v_quotContext_1376_);
lean_inc(v_maxHeartbeats_1375_);
lean_inc(v_initHeartbeats_1374_);
lean_inc(v_openDecls_1373_);
lean_inc(v_currNamespace_1372_);
lean_inc(v_ref_1371_);
lean_inc(v_maxRecDepth_1370_);
lean_inc_ref(v_options_1368_);
lean_inc_ref(v_fileMap_1367_);
lean_inc_ref(v_fileName_1366_);
v___x_1385_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_1385_, 0, v_fileName_1366_);
lean_ctor_set(v___x_1385_, 1, v_fileMap_1367_);
lean_ctor_set(v___x_1385_, 2, v_options_1368_);
lean_ctor_set(v___x_1385_, 3, v___x_1384_);
lean_ctor_set(v___x_1385_, 4, v_maxRecDepth_1370_);
lean_ctor_set(v___x_1385_, 5, v_ref_1371_);
lean_ctor_set(v___x_1385_, 6, v_currNamespace_1372_);
lean_ctor_set(v___x_1385_, 7, v_openDecls_1373_);
lean_ctor_set(v___x_1385_, 8, v_initHeartbeats_1374_);
lean_ctor_set(v___x_1385_, 9, v_maxHeartbeats_1375_);
lean_ctor_set(v___x_1385_, 10, v_quotContext_1376_);
lean_ctor_set(v___x_1385_, 11, v_currMacroScope_1377_);
lean_ctor_set(v___x_1385_, 12, v_cancelTk_x3f_1379_);
lean_ctor_set(v___x_1385_, 13, v_inheritedTraceOptions_1381_);
lean_ctor_set_uint8(v___x_1385_, sizeof(void*)*14, v_diag_1378_);
lean_ctor_set_uint8(v___x_1385_, sizeof(void*)*14 + 1, v_suppressElabErrors_1380_);
lean_inc(v___y_1354_);
lean_inc(v___y_1352_);
lean_inc_ref(v___y_1351_);
lean_inc(v___y_1350_);
v___x_1386_ = lean_apply_6(v_x_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___x_1385_, v___y_1354_, lean_box(0));
v___y_1357_ = v___x_1386_;
goto v___jp_1356_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18___redArg___boxed(lean_object* v_x_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_){
_start:
{
lean_object* v_res_1398_; 
v_res_1398_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18___redArg(v_x_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
lean_dec(v___y_1396_);
lean_dec_ref(v___y_1395_);
lean_dec(v___y_1394_);
lean_dec_ref(v___y_1393_);
lean_dec(v___y_1392_);
return v_res_1398_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__15___lam__0(lean_object* v_fvars_1402_, lean_object* v_pre_1403_, lean_object* v_post_1404_, uint8_t v_usedLetOnly_1405_, uint8_t v_skipConstInApp_1406_, uint8_t v_skipInstances_1407_, lean_object* v_body_1408_, lean_object* v_x_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_){
_start:
{
lean_object* v___x_1416_; lean_object* v___x_1417_; 
v___x_1416_ = lean_array_push(v_fvars_1402_, v_x_1409_);
v___x_1417_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__15(v_pre_1403_, v_post_1404_, v_usedLetOnly_1405_, v_skipConstInApp_1406_, v_skipInstances_1407_, v___x_1416_, v_body_1408_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_);
return v___x_1417_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__15___lam__0___boxed(lean_object* v_fvars_1418_, lean_object* v_pre_1419_, lean_object* v_post_1420_, lean_object* v_usedLetOnly_1421_, lean_object* v_skipConstInApp_1422_, lean_object* v_skipInstances_1423_, lean_object* v_body_1424_, lean_object* v_x_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_){
_start:
{
uint8_t v_usedLetOnly_boxed_1432_; uint8_t v_skipConstInApp_boxed_1433_; uint8_t v_skipInstances_boxed_1434_; lean_object* v_res_1435_; 
v_usedLetOnly_boxed_1432_ = lean_unbox(v_usedLetOnly_1421_);
v_skipConstInApp_boxed_1433_ = lean_unbox(v_skipConstInApp_1422_);
v_skipInstances_boxed_1434_ = lean_unbox(v_skipInstances_1423_);
v_res_1435_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__15___lam__0(v_fvars_1418_, v_pre_1419_, v_post_1420_, v_usedLetOnly_boxed_1432_, v_skipConstInApp_boxed_1433_, v_skipInstances_boxed_1434_, v_body_1424_, v_x_1425_, v___y_1426_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_);
lean_dec(v___y_1430_);
lean_dec_ref(v___y_1429_);
lean_dec(v___y_1428_);
lean_dec_ref(v___y_1427_);
lean_dec(v___y_1426_);
return v_res_1435_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__11(lean_object* v_pre_1436_, lean_object* v_post_1437_, uint8_t v_usedLetOnly_1438_, uint8_t v_skipConstInApp_1439_, uint8_t v_skipInstances_1440_, lean_object* v_e_1441_, lean_object* v_a_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_){
_start:
{
lean_object* v___x_1448_; 
lean_inc_ref(v_post_1437_);
lean_inc(v___y_1446_);
lean_inc_ref(v___y_1445_);
lean_inc(v___y_1444_);
lean_inc_ref(v___y_1443_);
lean_inc_ref(v_e_1441_);
v___x_1448_ = lean_apply_6(v_post_1437_, v_e_1441_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_, lean_box(0));
if (lean_obj_tag(v___x_1448_) == 0)
{
lean_object* v_a_1449_; lean_object* v___x_1451_; uint8_t v_isShared_1452_; uint8_t v_isSharedCheck_1467_; 
v_a_1449_ = lean_ctor_get(v___x_1448_, 0);
v_isSharedCheck_1467_ = !lean_is_exclusive(v___x_1448_);
if (v_isSharedCheck_1467_ == 0)
{
v___x_1451_ = v___x_1448_;
v_isShared_1452_ = v_isSharedCheck_1467_;
goto v_resetjp_1450_;
}
else
{
lean_inc(v_a_1449_);
lean_dec(v___x_1448_);
v___x_1451_ = lean_box(0);
v_isShared_1452_ = v_isSharedCheck_1467_;
goto v_resetjp_1450_;
}
v_resetjp_1450_:
{
switch(lean_obj_tag(v_a_1449_))
{
case 0:
{
lean_object* v_e_1453_; lean_object* v___x_1455_; 
lean_dec_ref(v_e_1441_);
lean_dec_ref(v_post_1437_);
lean_dec_ref(v_pre_1436_);
v_e_1453_ = lean_ctor_get(v_a_1449_, 0);
lean_inc_ref(v_e_1453_);
lean_dec_ref_known(v_a_1449_, 1);
if (v_isShared_1452_ == 0)
{
lean_ctor_set(v___x_1451_, 0, v_e_1453_);
v___x_1455_ = v___x_1451_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_e_1453_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
case 1:
{
lean_object* v_e_1457_; lean_object* v___x_1458_; 
lean_del_object(v___x_1451_);
lean_dec_ref(v_e_1441_);
v_e_1457_ = lean_ctor_get(v_a_1449_, 0);
lean_inc_ref(v_e_1457_);
lean_dec_ref_known(v_a_1449_, 1);
v___x_1458_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7(v_pre_1436_, v_post_1437_, v_usedLetOnly_1438_, v_skipConstInApp_1439_, v_skipInstances_1440_, v_e_1457_, v_a_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_);
return v___x_1458_;
}
default: 
{
lean_object* v_e_x3f_1459_; 
lean_dec_ref(v_post_1437_);
lean_dec_ref(v_pre_1436_);
v_e_x3f_1459_ = lean_ctor_get(v_a_1449_, 0);
lean_inc(v_e_x3f_1459_);
lean_dec_ref_known(v_a_1449_, 1);
if (lean_obj_tag(v_e_x3f_1459_) == 0)
{
lean_object* v___x_1461_; 
if (v_isShared_1452_ == 0)
{
lean_ctor_set(v___x_1451_, 0, v_e_1441_);
v___x_1461_ = v___x_1451_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1462_; 
v_reuseFailAlloc_1462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1462_, 0, v_e_1441_);
v___x_1461_ = v_reuseFailAlloc_1462_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
return v___x_1461_;
}
}
else
{
lean_object* v_val_1463_; lean_object* v___x_1465_; 
lean_dec_ref(v_e_1441_);
v_val_1463_ = lean_ctor_get(v_e_x3f_1459_, 0);
lean_inc(v_val_1463_);
lean_dec_ref_known(v_e_x3f_1459_, 1);
if (v_isShared_1452_ == 0)
{
lean_ctor_set(v___x_1451_, 0, v_val_1463_);
v___x_1465_ = v___x_1451_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1466_, 0, v_val_1463_);
v___x_1465_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
return v___x_1465_;
}
}
}
}
}
}
else
{
lean_object* v_a_1468_; lean_object* v___x_1470_; uint8_t v_isShared_1471_; uint8_t v_isSharedCheck_1475_; 
lean_dec_ref(v_e_1441_);
lean_dec_ref(v_post_1437_);
lean_dec_ref(v_pre_1436_);
v_a_1468_ = lean_ctor_get(v___x_1448_, 0);
v_isSharedCheck_1475_ = !lean_is_exclusive(v___x_1448_);
if (v_isSharedCheck_1475_ == 0)
{
v___x_1470_ = v___x_1448_;
v_isShared_1471_ = v_isSharedCheck_1475_;
goto v_resetjp_1469_;
}
else
{
lean_inc(v_a_1468_);
lean_dec(v___x_1448_);
v___x_1470_ = lean_box(0);
v_isShared_1471_ = v_isSharedCheck_1475_;
goto v_resetjp_1469_;
}
v_resetjp_1469_:
{
lean_object* v___x_1473_; 
if (v_isShared_1471_ == 0)
{
v___x_1473_ = v___x_1470_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1474_; 
v_reuseFailAlloc_1474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1474_, 0, v_a_1468_);
v___x_1473_ = v_reuseFailAlloc_1474_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
return v___x_1473_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__15(lean_object* v_pre_1476_, lean_object* v_post_1477_, uint8_t v_usedLetOnly_1478_, uint8_t v_skipConstInApp_1479_, uint8_t v_skipInstances_1480_, lean_object* v_fvars_1481_, lean_object* v_e_1482_, lean_object* v_a_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_){
_start:
{
if (lean_obj_tag(v_e_1482_) == 6)
{
lean_object* v_binderName_1489_; lean_object* v_binderType_1490_; lean_object* v_body_1491_; uint8_t v_binderInfo_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
v_binderName_1489_ = lean_ctor_get(v_e_1482_, 0);
lean_inc(v_binderName_1489_);
v_binderType_1490_ = lean_ctor_get(v_e_1482_, 1);
lean_inc_ref(v_binderType_1490_);
v_body_1491_ = lean_ctor_get(v_e_1482_, 2);
lean_inc_ref(v_body_1491_);
v_binderInfo_1492_ = lean_ctor_get_uint8(v_e_1482_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1482_, 3);
v___x_1493_ = lean_expr_instantiate_rev(v_binderType_1490_, v_fvars_1481_);
lean_dec_ref(v_binderType_1490_);
lean_inc_ref(v_post_1477_);
lean_inc_ref(v_pre_1476_);
v___x_1494_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7(v_pre_1476_, v_post_1477_, v_usedLetOnly_1478_, v_skipConstInApp_1479_, v_skipInstances_1480_, v___x_1493_, v_a_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_);
if (lean_obj_tag(v___x_1494_) == 0)
{
lean_object* v_a_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___f_1499_; uint8_t v___x_1500_; lean_object* v___x_1501_; 
v_a_1495_ = lean_ctor_get(v___x_1494_, 0);
lean_inc(v_a_1495_);
lean_dec_ref_known(v___x_1494_, 1);
v___x_1496_ = lean_box(v_usedLetOnly_1478_);
v___x_1497_ = lean_box(v_skipConstInApp_1479_);
v___x_1498_ = lean_box(v_skipInstances_1480_);
v___f_1499_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__15___lam__0___boxed), 14, 7);
lean_closure_set(v___f_1499_, 0, v_fvars_1481_);
lean_closure_set(v___f_1499_, 1, v_pre_1476_);
lean_closure_set(v___f_1499_, 2, v_post_1477_);
lean_closure_set(v___f_1499_, 3, v___x_1496_);
lean_closure_set(v___f_1499_, 4, v___x_1497_);
lean_closure_set(v___f_1499_, 5, v___x_1498_);
lean_closure_set(v___f_1499_, 6, v_body_1491_);
v___x_1500_ = 0;
v___x_1501_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14_spec__20___redArg(v_binderName_1489_, v_binderInfo_1492_, v_a_1495_, v___f_1499_, v___x_1500_, v_a_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_);
return v___x_1501_;
}
else
{
lean_dec_ref(v_body_1491_);
lean_dec(v_binderName_1489_);
lean_dec_ref(v_fvars_1481_);
lean_dec_ref(v_post_1477_);
lean_dec_ref(v_pre_1476_);
return v___x_1494_;
}
}
else
{
lean_object* v___x_1502_; lean_object* v___x_1503_; 
v___x_1502_ = lean_expr_instantiate_rev(v_e_1482_, v_fvars_1481_);
lean_dec_ref(v_e_1482_);
lean_inc_ref(v_post_1477_);
lean_inc_ref(v_pre_1476_);
v___x_1503_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7(v_pre_1476_, v_post_1477_, v_usedLetOnly_1478_, v_skipConstInApp_1479_, v_skipInstances_1480_, v___x_1502_, v_a_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_);
if (lean_obj_tag(v___x_1503_) == 0)
{
lean_object* v_a_1504_; uint8_t v___x_1505_; uint8_t v___x_1506_; uint8_t v___x_1507_; lean_object* v___x_1508_; 
v_a_1504_ = lean_ctor_get(v___x_1503_, 0);
lean_inc(v_a_1504_);
lean_dec_ref_known(v___x_1503_, 1);
v___x_1505_ = 0;
v___x_1506_ = 1;
v___x_1507_ = 1;
v___x_1508_ = l_Lean_Meta_mkLambdaFVars(v_fvars_1481_, v_a_1504_, v___x_1505_, v_usedLetOnly_1478_, v___x_1505_, v___x_1506_, v___x_1507_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_);
lean_dec_ref(v_fvars_1481_);
if (lean_obj_tag(v___x_1508_) == 0)
{
lean_object* v_a_1509_; lean_object* v___x_1510_; 
v_a_1509_ = lean_ctor_get(v___x_1508_, 0);
lean_inc(v_a_1509_);
lean_dec_ref_known(v___x_1508_, 1);
v___x_1510_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__11(v_pre_1476_, v_post_1477_, v_usedLetOnly_1478_, v_skipConstInApp_1479_, v_skipInstances_1480_, v_a_1509_, v_a_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_);
return v___x_1510_;
}
else
{
lean_dec_ref(v_post_1477_);
lean_dec_ref(v_pre_1476_);
return v___x_1508_;
}
}
else
{
lean_dec_ref(v_fvars_1481_);
lean_dec_ref(v_post_1477_);
lean_dec_ref(v_pre_1476_);
return v___x_1503_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16___lam__0(lean_object* v_fvars_1511_, lean_object* v_pre_1512_, lean_object* v_post_1513_, uint8_t v_usedLetOnly_1514_, uint8_t v_skipConstInApp_1515_, uint8_t v_skipInstances_1516_, lean_object* v_body_1517_, lean_object* v_x_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_){
_start:
{
lean_object* v___x_1525_; lean_object* v___x_1526_; 
v___x_1525_ = lean_array_push(v_fvars_1511_, v_x_1518_);
v___x_1526_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16(v_pre_1512_, v_post_1513_, v_usedLetOnly_1514_, v_skipConstInApp_1515_, v_skipInstances_1516_, v___x_1525_, v_body_1517_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_);
return v___x_1526_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16___lam__0___boxed(lean_object* v_fvars_1527_, lean_object* v_pre_1528_, lean_object* v_post_1529_, lean_object* v_usedLetOnly_1530_, lean_object* v_skipConstInApp_1531_, lean_object* v_skipInstances_1532_, lean_object* v_body_1533_, lean_object* v_x_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_){
_start:
{
uint8_t v_usedLetOnly_boxed_1541_; uint8_t v_skipConstInApp_boxed_1542_; uint8_t v_skipInstances_boxed_1543_; lean_object* v_res_1544_; 
v_usedLetOnly_boxed_1541_ = lean_unbox(v_usedLetOnly_1530_);
v_skipConstInApp_boxed_1542_ = lean_unbox(v_skipConstInApp_1531_);
v_skipInstances_boxed_1543_ = lean_unbox(v_skipInstances_1532_);
v_res_1544_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16___lam__0(v_fvars_1527_, v_pre_1528_, v_post_1529_, v_usedLetOnly_boxed_1541_, v_skipConstInApp_boxed_1542_, v_skipInstances_boxed_1543_, v_body_1533_, v_x_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_, v___y_1539_);
lean_dec(v___y_1539_);
lean_dec_ref(v___y_1538_);
lean_dec(v___y_1537_);
lean_dec_ref(v___y_1536_);
lean_dec(v___y_1535_);
return v_res_1544_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16(lean_object* v_pre_1545_, lean_object* v_post_1546_, uint8_t v_usedLetOnly_1547_, uint8_t v_skipConstInApp_1548_, uint8_t v_skipInstances_1549_, lean_object* v_fvars_1550_, lean_object* v_e_1551_, lean_object* v_a_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_){
_start:
{
if (lean_obj_tag(v_e_1551_) == 8)
{
lean_object* v_declName_1558_; lean_object* v_type_1559_; lean_object* v_value_1560_; lean_object* v_body_1561_; uint8_t v_nondep_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; 
v_declName_1558_ = lean_ctor_get(v_e_1551_, 0);
lean_inc(v_declName_1558_);
v_type_1559_ = lean_ctor_get(v_e_1551_, 1);
lean_inc_ref(v_type_1559_);
v_value_1560_ = lean_ctor_get(v_e_1551_, 2);
lean_inc_ref(v_value_1560_);
v_body_1561_ = lean_ctor_get(v_e_1551_, 3);
lean_inc_ref(v_body_1561_);
v_nondep_1562_ = lean_ctor_get_uint8(v_e_1551_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_1551_, 4);
v___x_1563_ = lean_expr_instantiate_rev(v_type_1559_, v_fvars_1550_);
lean_dec_ref(v_type_1559_);
lean_inc_ref(v_post_1546_);
lean_inc_ref(v_pre_1545_);
v___x_1564_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7(v_pre_1545_, v_post_1546_, v_usedLetOnly_1547_, v_skipConstInApp_1548_, v_skipInstances_1549_, v___x_1563_, v_a_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_);
if (lean_obj_tag(v___x_1564_) == 0)
{
lean_object* v_a_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; 
v_a_1565_ = lean_ctor_get(v___x_1564_, 0);
lean_inc(v_a_1565_);
lean_dec_ref_known(v___x_1564_, 1);
v___x_1566_ = lean_expr_instantiate_rev(v_value_1560_, v_fvars_1550_);
lean_dec_ref(v_value_1560_);
lean_inc_ref(v_post_1546_);
lean_inc_ref(v_pre_1545_);
v___x_1567_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7(v_pre_1545_, v_post_1546_, v_usedLetOnly_1547_, v_skipConstInApp_1548_, v_skipInstances_1549_, v___x_1566_, v_a_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_);
if (lean_obj_tag(v___x_1567_) == 0)
{
lean_object* v_a_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___f_1572_; uint8_t v___x_1573_; lean_object* v___x_1574_; 
v_a_1568_ = lean_ctor_get(v___x_1567_, 0);
lean_inc(v_a_1568_);
lean_dec_ref_known(v___x_1567_, 1);
v___x_1569_ = lean_box(v_usedLetOnly_1547_);
v___x_1570_ = lean_box(v_skipConstInApp_1548_);
v___x_1571_ = lean_box(v_skipInstances_1549_);
v___f_1572_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16___lam__0___boxed), 14, 7);
lean_closure_set(v___f_1572_, 0, v_fvars_1550_);
lean_closure_set(v___f_1572_, 1, v_pre_1545_);
lean_closure_set(v___f_1572_, 2, v_post_1546_);
lean_closure_set(v___f_1572_, 3, v___x_1569_);
lean_closure_set(v___f_1572_, 4, v___x_1570_);
lean_closure_set(v___f_1572_, 5, v___x_1571_);
lean_closure_set(v___f_1572_, 6, v_body_1561_);
v___x_1573_ = 0;
v___x_1574_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16_spec__23___redArg(v_declName_1558_, v_a_1565_, v_a_1568_, v___f_1572_, v_nondep_1562_, v___x_1573_, v_a_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_);
return v___x_1574_;
}
else
{
lean_dec(v_a_1565_);
lean_dec_ref(v_body_1561_);
lean_dec(v_declName_1558_);
lean_dec_ref(v_fvars_1550_);
lean_dec_ref(v_post_1546_);
lean_dec_ref(v_pre_1545_);
return v___x_1567_;
}
}
else
{
lean_dec_ref(v_body_1561_);
lean_dec_ref(v_value_1560_);
lean_dec(v_declName_1558_);
lean_dec_ref(v_fvars_1550_);
lean_dec_ref(v_post_1546_);
lean_dec_ref(v_pre_1545_);
return v___x_1564_;
}
}
else
{
lean_object* v___x_1575_; lean_object* v___x_1576_; 
v___x_1575_ = lean_expr_instantiate_rev(v_e_1551_, v_fvars_1550_);
lean_dec_ref(v_e_1551_);
lean_inc_ref(v_post_1546_);
lean_inc_ref(v_pre_1545_);
v___x_1576_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7(v_pre_1545_, v_post_1546_, v_usedLetOnly_1547_, v_skipConstInApp_1548_, v_skipInstances_1549_, v___x_1575_, v_a_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_);
if (lean_obj_tag(v___x_1576_) == 0)
{
lean_object* v_a_1577_; uint8_t v___x_1578_; uint8_t v___x_1579_; lean_object* v___x_1580_; 
v_a_1577_ = lean_ctor_get(v___x_1576_, 0);
lean_inc(v_a_1577_);
lean_dec_ref_known(v___x_1576_, 1);
v___x_1578_ = 0;
v___x_1579_ = 1;
v___x_1580_ = l_Lean_Meta_mkLetFVars(v_fvars_1550_, v_a_1577_, v_usedLetOnly_1547_, v___x_1578_, v___x_1579_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_);
lean_dec_ref(v_fvars_1550_);
if (lean_obj_tag(v___x_1580_) == 0)
{
lean_object* v_a_1581_; lean_object* v___x_1582_; 
v_a_1581_ = lean_ctor_get(v___x_1580_, 0);
lean_inc(v_a_1581_);
lean_dec_ref_known(v___x_1580_, 1);
v___x_1582_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__11(v_pre_1545_, v_post_1546_, v_usedLetOnly_1547_, v_skipConstInApp_1548_, v_skipInstances_1549_, v_a_1581_, v_a_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_);
return v___x_1582_;
}
else
{
lean_dec_ref(v_post_1546_);
lean_dec_ref(v_pre_1545_);
return v___x_1580_;
}
}
else
{
lean_dec_ref(v_fvars_1550_);
lean_dec_ref(v_post_1546_);
lean_dec_ref(v_pre_1545_);
return v___x_1576_;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1583_; lean_object* v_dummy_1584_; 
v___x_1583_ = lean_box(0);
v_dummy_1584_ = l_Lean_Expr_sort___override(v___x_1583_);
return v_dummy_1584_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__10(lean_object* v_pre_1585_, lean_object* v_post_1586_, uint8_t v_usedLetOnly_1587_, uint8_t v_skipConstInApp_1588_, uint8_t v_skipInstances_1589_, size_t v_sz_1590_, size_t v_i_1591_, lean_object* v_bs_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_){
_start:
{
uint8_t v___x_1599_; 
v___x_1599_ = lean_usize_dec_lt(v_i_1591_, v_sz_1590_);
if (v___x_1599_ == 0)
{
lean_object* v___x_1600_; 
lean_dec_ref(v_post_1586_);
lean_dec_ref(v_pre_1585_);
v___x_1600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1600_, 0, v_bs_1592_);
return v___x_1600_;
}
else
{
lean_object* v_v_1601_; lean_object* v___x_1602_; 
v_v_1601_ = lean_array_uget_borrowed(v_bs_1592_, v_i_1591_);
lean_inc(v_v_1601_);
lean_inc_ref(v_post_1586_);
lean_inc_ref(v_pre_1585_);
v___x_1602_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7(v_pre_1585_, v_post_1586_, v_usedLetOnly_1587_, v_skipConstInApp_1588_, v_skipInstances_1589_, v_v_1601_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_);
if (lean_obj_tag(v___x_1602_) == 0)
{
lean_object* v_a_1603_; lean_object* v___x_1604_; lean_object* v_bs_x27_1605_; size_t v___x_1606_; size_t v___x_1607_; lean_object* v___x_1608_; 
v_a_1603_ = lean_ctor_get(v___x_1602_, 0);
lean_inc(v_a_1603_);
lean_dec_ref_known(v___x_1602_, 1);
v___x_1604_ = lean_unsigned_to_nat(0u);
v_bs_x27_1605_ = lean_array_uset(v_bs_1592_, v_i_1591_, v___x_1604_);
v___x_1606_ = ((size_t)1ULL);
v___x_1607_ = lean_usize_add(v_i_1591_, v___x_1606_);
v___x_1608_ = lean_array_uset(v_bs_x27_1605_, v_i_1591_, v_a_1603_);
v_i_1591_ = v___x_1607_;
v_bs_1592_ = v___x_1608_;
goto _start;
}
else
{
lean_object* v_a_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1617_; 
lean_dec_ref(v_bs_1592_);
lean_dec_ref(v_post_1586_);
lean_dec_ref(v_pre_1585_);
v_a_1610_ = lean_ctor_get(v___x_1602_, 0);
v_isSharedCheck_1617_ = !lean_is_exclusive(v___x_1602_);
if (v_isSharedCheck_1617_ == 0)
{
v___x_1612_ = v___x_1602_;
v_isShared_1613_ = v_isSharedCheck_1617_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_a_1610_);
lean_dec(v___x_1602_);
v___x_1612_ = lean_box(0);
v_isShared_1613_ = v_isSharedCheck_1617_;
goto v_resetjp_1611_;
}
v_resetjp_1611_:
{
lean_object* v___x_1615_; 
if (v_isShared_1613_ == 0)
{
v___x_1615_ = v___x_1612_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v_a_1610_);
v___x_1615_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
return v___x_1615_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12___redArg___lam__0(lean_object* v_pre_1618_, lean_object* v_post_1619_, uint8_t v_usedLetOnly_1620_, uint8_t v_skipConstInApp_1621_, uint8_t v_skipInstances_1622_, lean_object* v___x_1623_, lean_object* v___y_1624_, lean_object* v_b_1625_, lean_object* v_a_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_){
_start:
{
lean_object* v___x_1632_; 
v___x_1632_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7(v_pre_1618_, v_post_1619_, v_usedLetOnly_1620_, v_skipConstInApp_1621_, v_skipInstances_1622_, v___x_1623_, v___y_1624_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_);
if (lean_obj_tag(v___x_1632_) == 0)
{
lean_object* v_a_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1642_; 
v_a_1633_ = lean_ctor_get(v___x_1632_, 0);
v_isSharedCheck_1642_ = !lean_is_exclusive(v___x_1632_);
if (v_isSharedCheck_1642_ == 0)
{
v___x_1635_ = v___x_1632_;
v_isShared_1636_ = v_isSharedCheck_1642_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_a_1633_);
lean_dec(v___x_1632_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1642_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1640_; 
v___x_1637_ = lean_array_fset(v_b_1625_, v_a_1626_, v_a_1633_);
v___x_1638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1638_, 0, v___x_1637_);
if (v_isShared_1636_ == 0)
{
lean_ctor_set(v___x_1635_, 0, v___x_1638_);
v___x_1640_ = v___x_1635_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v___x_1638_);
v___x_1640_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
return v___x_1640_;
}
}
}
else
{
lean_object* v_a_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1650_; 
lean_dec_ref(v_b_1625_);
v_a_1643_ = lean_ctor_get(v___x_1632_, 0);
v_isSharedCheck_1650_ = !lean_is_exclusive(v___x_1632_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1645_ = v___x_1632_;
v_isShared_1646_ = v_isSharedCheck_1650_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_a_1643_);
lean_dec(v___x_1632_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1650_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
lean_object* v___x_1648_; 
if (v_isShared_1646_ == 0)
{
v___x_1648_ = v___x_1645_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v_a_1643_);
v___x_1648_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
return v___x_1648_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12___redArg___lam__0___boxed(lean_object* v_pre_1651_, lean_object* v_post_1652_, lean_object* v_usedLetOnly_1653_, lean_object* v_skipConstInApp_1654_, lean_object* v_skipInstances_1655_, lean_object* v___x_1656_, lean_object* v___y_1657_, lean_object* v_b_1658_, lean_object* v_a_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_){
_start:
{
uint8_t v_usedLetOnly_boxed_1665_; uint8_t v_skipConstInApp_boxed_1666_; uint8_t v_skipInstances_boxed_1667_; lean_object* v_res_1668_; 
v_usedLetOnly_boxed_1665_ = lean_unbox(v_usedLetOnly_1653_);
v_skipConstInApp_boxed_1666_ = lean_unbox(v_skipConstInApp_1654_);
v_skipInstances_boxed_1667_ = lean_unbox(v_skipInstances_1655_);
v_res_1668_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12___redArg___lam__0(v_pre_1651_, v_post_1652_, v_usedLetOnly_boxed_1665_, v_skipConstInApp_boxed_1666_, v_skipInstances_boxed_1667_, v___x_1656_, v___y_1657_, v_b_1658_, v_a_1659_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_);
lean_dec(v___y_1663_);
lean_dec_ref(v___y_1662_);
lean_dec(v___y_1661_);
lean_dec_ref(v___y_1660_);
lean_dec(v_a_1659_);
lean_dec(v___y_1657_);
return v_res_1668_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12___redArg(lean_object* v_upperBound_1669_, lean_object* v___x_1670_, lean_object* v_pre_1671_, lean_object* v_post_1672_, uint8_t v_usedLetOnly_1673_, uint8_t v_skipConstInApp_1674_, uint8_t v_skipInstances_1675_, lean_object* v_a_1676_, lean_object* v_b_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_){
_start:
{
lean_object* v___y_1685_; uint8_t v___x_1708_; 
v___x_1708_ = lean_nat_dec_lt(v_a_1676_, v_upperBound_1669_);
if (v___x_1708_ == 0)
{
lean_object* v___x_1709_; 
lean_dec(v_a_1676_);
lean_dec_ref(v_post_1672_);
lean_dec_ref(v_pre_1671_);
v___x_1709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1709_, 0, v_b_1677_);
return v___x_1709_;
}
else
{
lean_object* v___x_1710_; lean_object* v___x_1711_; uint8_t v___x_1712_; 
v___x_1710_ = lean_array_fget_borrowed(v_b_1677_, v_a_1676_);
v___x_1711_ = lean_array_get_size(v___x_1670_);
v___x_1712_ = lean_nat_dec_lt(v_a_1676_, v___x_1711_);
if (v___x_1712_ == 0)
{
lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___f_1716_; 
lean_inc(v___x_1710_);
v___x_1713_ = lean_box(v_usedLetOnly_1673_);
v___x_1714_ = lean_box(v_skipConstInApp_1674_);
v___x_1715_ = lean_box(v_skipInstances_1675_);
lean_inc(v_a_1676_);
lean_inc(v___y_1678_);
lean_inc_ref(v_post_1672_);
lean_inc_ref(v_pre_1671_);
v___f_1716_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_1716_, 0, v_pre_1671_);
lean_closure_set(v___f_1716_, 1, v_post_1672_);
lean_closure_set(v___f_1716_, 2, v___x_1713_);
lean_closure_set(v___f_1716_, 3, v___x_1714_);
lean_closure_set(v___f_1716_, 4, v___x_1715_);
lean_closure_set(v___f_1716_, 5, v___x_1710_);
lean_closure_set(v___f_1716_, 6, v___y_1678_);
lean_closure_set(v___f_1716_, 7, v_b_1677_);
lean_closure_set(v___f_1716_, 8, v_a_1676_);
v___y_1685_ = v___f_1716_;
goto v___jp_1684_;
}
else
{
lean_object* v___x_1717_; uint8_t v_isInstance_1718_; 
v___x_1717_ = lean_array_fget_borrowed(v___x_1670_, v_a_1676_);
v_isInstance_1718_ = lean_ctor_get_uint8(v___x_1717_, sizeof(void*)*1 + 4);
if (v_isInstance_1718_ == 0)
{
lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___f_1722_; 
lean_inc(v___x_1710_);
v___x_1719_ = lean_box(v_usedLetOnly_1673_);
v___x_1720_ = lean_box(v_skipConstInApp_1674_);
v___x_1721_ = lean_box(v_skipInstances_1675_);
lean_inc(v_a_1676_);
lean_inc(v___y_1678_);
lean_inc_ref(v_post_1672_);
lean_inc_ref(v_pre_1671_);
v___f_1722_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_1722_, 0, v_pre_1671_);
lean_closure_set(v___f_1722_, 1, v_post_1672_);
lean_closure_set(v___f_1722_, 2, v___x_1719_);
lean_closure_set(v___f_1722_, 3, v___x_1720_);
lean_closure_set(v___f_1722_, 4, v___x_1721_);
lean_closure_set(v___f_1722_, 5, v___x_1710_);
lean_closure_set(v___f_1722_, 6, v___y_1678_);
lean_closure_set(v___f_1722_, 7, v_b_1677_);
lean_closure_set(v___f_1722_, 8, v_a_1676_);
v___y_1685_ = v___f_1722_;
goto v___jp_1684_;
}
else
{
lean_object* v___x_1723_; lean_object* v___f_1724_; 
v___x_1723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1723_, 0, v_b_1677_);
v___f_1724_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12___redArg___lam__2___boxed), 6, 1);
lean_closure_set(v___f_1724_, 0, v___x_1723_);
v___y_1685_ = v___f_1724_;
goto v___jp_1684_;
}
}
}
v___jp_1684_:
{
lean_object* v___x_1686_; 
lean_inc(v___y_1682_);
lean_inc_ref(v___y_1681_);
lean_inc(v___y_1680_);
lean_inc_ref(v___y_1679_);
v___x_1686_ = lean_apply_5(v___y_1685_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_, lean_box(0));
if (lean_obj_tag(v___x_1686_) == 0)
{
lean_object* v_a_1687_; lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1699_; 
v_a_1687_ = lean_ctor_get(v___x_1686_, 0);
v_isSharedCheck_1699_ = !lean_is_exclusive(v___x_1686_);
if (v_isSharedCheck_1699_ == 0)
{
v___x_1689_ = v___x_1686_;
v_isShared_1690_ = v_isSharedCheck_1699_;
goto v_resetjp_1688_;
}
else
{
lean_inc(v_a_1687_);
lean_dec(v___x_1686_);
v___x_1689_ = lean_box(0);
v_isShared_1690_ = v_isSharedCheck_1699_;
goto v_resetjp_1688_;
}
v_resetjp_1688_:
{
if (lean_obj_tag(v_a_1687_) == 0)
{
lean_object* v_a_1691_; lean_object* v___x_1693_; 
lean_dec(v_a_1676_);
lean_dec_ref(v_post_1672_);
lean_dec_ref(v_pre_1671_);
v_a_1691_ = lean_ctor_get(v_a_1687_, 0);
lean_inc(v_a_1691_);
lean_dec_ref_known(v_a_1687_, 1);
if (v_isShared_1690_ == 0)
{
lean_ctor_set(v___x_1689_, 0, v_a_1691_);
v___x_1693_ = v___x_1689_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v_a_1691_);
v___x_1693_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
return v___x_1693_;
}
}
else
{
lean_object* v_a_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; 
lean_del_object(v___x_1689_);
v_a_1695_ = lean_ctor_get(v_a_1687_, 0);
lean_inc(v_a_1695_);
lean_dec_ref_known(v_a_1687_, 1);
v___x_1696_ = lean_unsigned_to_nat(1u);
v___x_1697_ = lean_nat_add(v_a_1676_, v___x_1696_);
lean_dec(v_a_1676_);
v_a_1676_ = v___x_1697_;
v_b_1677_ = v_a_1695_;
goto _start;
}
}
}
else
{
lean_object* v_a_1700_; lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1707_; 
lean_dec(v_a_1676_);
lean_dec_ref(v_post_1672_);
lean_dec_ref(v_pre_1671_);
v_a_1700_ = lean_ctor_get(v___x_1686_, 0);
v_isSharedCheck_1707_ = !lean_is_exclusive(v___x_1686_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1702_ = v___x_1686_;
v_isShared_1703_ = v_isSharedCheck_1707_;
goto v_resetjp_1701_;
}
else
{
lean_inc(v_a_1700_);
lean_dec(v___x_1686_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1707_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
lean_object* v___x_1705_; 
if (v_isShared_1703_ == 0)
{
v___x_1705_ = v___x_1702_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v_a_1700_);
v___x_1705_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
return v___x_1705_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__17(uint8_t v_skipInstances_1725_, lean_object* v_pre_1726_, lean_object* v_post_1727_, uint8_t v_usedLetOnly_1728_, uint8_t v_skipConstInApp_1729_, lean_object* v_x_1730_, lean_object* v_x_1731_, lean_object* v_x_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_){
_start:
{
lean_object* v_f_1740_; lean_object* v___y_1741_; lean_object* v___y_1742_; lean_object* v___y_1743_; lean_object* v___y_1744_; lean_object* v___y_1745_; 
if (lean_obj_tag(v_x_1730_) == 5)
{
lean_object* v_fn_1788_; lean_object* v_arg_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; 
v_fn_1788_ = lean_ctor_get(v_x_1730_, 0);
lean_inc_ref(v_fn_1788_);
v_arg_1789_ = lean_ctor_get(v_x_1730_, 1);
lean_inc_ref(v_arg_1789_);
lean_dec_ref_known(v_x_1730_, 2);
v___x_1790_ = lean_array_set(v_x_1731_, v_x_1732_, v_arg_1789_);
v___x_1791_ = lean_unsigned_to_nat(1u);
v___x_1792_ = lean_nat_sub(v_x_1732_, v___x_1791_);
lean_dec(v_x_1732_);
v_x_1730_ = v_fn_1788_;
v_x_1731_ = v___x_1790_;
v_x_1732_ = v___x_1792_;
goto _start;
}
else
{
lean_dec(v_x_1732_);
if (v_skipConstInApp_1729_ == 0)
{
goto v___jp_1785_;
}
else
{
uint8_t v___x_1794_; 
v___x_1794_ = l_Lean_Expr_isConst(v_x_1730_);
if (v___x_1794_ == 0)
{
goto v___jp_1785_;
}
else
{
v_f_1740_ = v_x_1730_;
v___y_1741_ = v___y_1733_;
v___y_1742_ = v___y_1734_;
v___y_1743_ = v___y_1735_;
v___y_1744_ = v___y_1736_;
v___y_1745_ = v___y_1737_;
goto v___jp_1739_;
}
}
}
v___jp_1739_:
{
if (v_skipInstances_1725_ == 0)
{
size_t v_sz_1746_; size_t v___x_1747_; lean_object* v___x_1748_; 
v_sz_1746_ = lean_array_size(v_x_1731_);
v___x_1747_ = ((size_t)0ULL);
lean_inc_ref(v_post_1727_);
lean_inc_ref(v_pre_1726_);
v___x_1748_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__10(v_pre_1726_, v_post_1727_, v_usedLetOnly_1728_, v_skipConstInApp_1729_, v_skipInstances_1725_, v_sz_1746_, v___x_1747_, v_x_1731_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v_a_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
v_a_1749_ = lean_ctor_get(v___x_1748_, 0);
lean_inc(v_a_1749_);
lean_dec_ref_known(v___x_1748_, 1);
v___x_1750_ = l_Lean_mkAppN(v_f_1740_, v_a_1749_);
lean_dec(v_a_1749_);
v___x_1751_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__11(v_pre_1726_, v_post_1727_, v_usedLetOnly_1728_, v_skipConstInApp_1729_, v_skipInstances_1725_, v___x_1750_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_);
return v___x_1751_;
}
else
{
lean_object* v_a_1752_; lean_object* v___x_1754_; uint8_t v_isShared_1755_; uint8_t v_isSharedCheck_1759_; 
lean_dec_ref(v_f_1740_);
lean_dec_ref(v_post_1727_);
lean_dec_ref(v_pre_1726_);
v_a_1752_ = lean_ctor_get(v___x_1748_, 0);
v_isSharedCheck_1759_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1759_ == 0)
{
v___x_1754_ = v___x_1748_;
v_isShared_1755_ = v_isSharedCheck_1759_;
goto v_resetjp_1753_;
}
else
{
lean_inc(v_a_1752_);
lean_dec(v___x_1748_);
v___x_1754_ = lean_box(0);
v_isShared_1755_ = v_isSharedCheck_1759_;
goto v_resetjp_1753_;
}
v_resetjp_1753_:
{
lean_object* v___x_1757_; 
if (v_isShared_1755_ == 0)
{
v___x_1757_ = v___x_1754_;
goto v_reusejp_1756_;
}
else
{
lean_object* v_reuseFailAlloc_1758_; 
v_reuseFailAlloc_1758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1758_, 0, v_a_1752_);
v___x_1757_ = v_reuseFailAlloc_1758_;
goto v_reusejp_1756_;
}
v_reusejp_1756_:
{
return v___x_1757_;
}
}
}
}
else
{
lean_object* v___x_1760_; lean_object* v___x_1761_; 
v___x_1760_ = lean_array_get_size(v_x_1731_);
lean_inc_ref(v_f_1740_);
v___x_1761_ = l_Lean_Meta_getFunInfoNArgs(v_f_1740_, v___x_1760_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_);
if (lean_obj_tag(v___x_1761_) == 0)
{
lean_object* v_a_1762_; lean_object* v_paramInfo_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; 
v_a_1762_ = lean_ctor_get(v___x_1761_, 0);
lean_inc(v_a_1762_);
lean_dec_ref_known(v___x_1761_, 1);
v_paramInfo_1763_ = lean_ctor_get(v_a_1762_, 0);
lean_inc_ref(v_paramInfo_1763_);
lean_dec(v_a_1762_);
v___x_1764_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_1727_);
lean_inc_ref(v_pre_1726_);
v___x_1765_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12___redArg(v___x_1760_, v_paramInfo_1763_, v_pre_1726_, v_post_1727_, v_usedLetOnly_1728_, v_skipConstInApp_1729_, v_skipInstances_1725_, v___x_1764_, v_x_1731_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_);
lean_dec_ref(v_paramInfo_1763_);
if (lean_obj_tag(v___x_1765_) == 0)
{
lean_object* v_a_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; 
v_a_1766_ = lean_ctor_get(v___x_1765_, 0);
lean_inc(v_a_1766_);
lean_dec_ref_known(v___x_1765_, 1);
v___x_1767_ = l_Lean_mkAppN(v_f_1740_, v_a_1766_);
lean_dec(v_a_1766_);
v___x_1768_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__11(v_pre_1726_, v_post_1727_, v_usedLetOnly_1728_, v_skipConstInApp_1729_, v_skipInstances_1725_, v___x_1767_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_);
return v___x_1768_;
}
else
{
lean_object* v_a_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1776_; 
lean_dec_ref(v_f_1740_);
lean_dec_ref(v_post_1727_);
lean_dec_ref(v_pre_1726_);
v_a_1769_ = lean_ctor_get(v___x_1765_, 0);
v_isSharedCheck_1776_ = !lean_is_exclusive(v___x_1765_);
if (v_isSharedCheck_1776_ == 0)
{
v___x_1771_ = v___x_1765_;
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_a_1769_);
lean_dec(v___x_1765_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1774_; 
if (v_isShared_1772_ == 0)
{
v___x_1774_ = v___x_1771_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v_a_1769_);
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
else
{
lean_object* v_a_1777_; lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1784_; 
lean_dec_ref(v_f_1740_);
lean_dec_ref(v_x_1731_);
lean_dec_ref(v_post_1727_);
lean_dec_ref(v_pre_1726_);
v_a_1777_ = lean_ctor_get(v___x_1761_, 0);
v_isSharedCheck_1784_ = !lean_is_exclusive(v___x_1761_);
if (v_isSharedCheck_1784_ == 0)
{
v___x_1779_ = v___x_1761_;
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
else
{
lean_inc(v_a_1777_);
lean_dec(v___x_1761_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
lean_object* v___x_1782_; 
if (v_isShared_1780_ == 0)
{
v___x_1782_ = v___x_1779_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v_a_1777_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
return v___x_1782_;
}
}
}
}
}
v___jp_1785_:
{
lean_object* v___x_1786_; 
lean_inc_ref(v_post_1727_);
lean_inc_ref(v_pre_1726_);
v___x_1786_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7(v_pre_1726_, v_post_1727_, v_usedLetOnly_1728_, v_skipConstInApp_1729_, v_skipInstances_1725_, v_x_1730_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_);
if (lean_obj_tag(v___x_1786_) == 0)
{
lean_object* v_a_1787_; 
v_a_1787_ = lean_ctor_get(v___x_1786_, 0);
lean_inc(v_a_1787_);
lean_dec_ref_known(v___x_1786_, 1);
v_f_1740_ = v_a_1787_;
v___y_1741_ = v___y_1733_;
v___y_1742_ = v___y_1734_;
v___y_1743_ = v___y_1735_;
v___y_1744_ = v___y_1736_;
v___y_1745_ = v___y_1737_;
goto v___jp_1739_;
}
else
{
lean_dec_ref(v_x_1731_);
lean_dec_ref(v_post_1727_);
lean_dec_ref(v_pre_1726_);
return v___x_1786_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__1(lean_object* v___x_1795_, lean_object* v_pre_1796_, lean_object* v_e_1797_, lean_object* v_post_1798_, uint8_t v_usedLetOnly_1799_, uint8_t v_skipConstInApp_1800_, uint8_t v_skipInstances_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_){
_start:
{
lean_object* v___x_1808_; 
v___x_1808_ = l_Lean_Core_checkSystem(v___x_1795_, v___y_1805_, v___y_1806_);
if (lean_obj_tag(v___x_1808_) == 0)
{
lean_object* v___x_1809_; 
lean_dec_ref_known(v___x_1808_, 1);
lean_inc_ref(v_pre_1796_);
lean_inc(v___y_1806_);
lean_inc_ref(v___y_1805_);
lean_inc(v___y_1804_);
lean_inc_ref(v___y_1803_);
lean_inc_ref(v_e_1797_);
v___x_1809_ = lean_apply_6(v_pre_1796_, v_e_1797_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_, lean_box(0));
if (lean_obj_tag(v___x_1809_) == 0)
{
lean_object* v_a_1810_; lean_object* v___x_1812_; uint8_t v_isShared_1813_; uint8_t v_isSharedCheck_1858_; 
v_a_1810_ = lean_ctor_get(v___x_1809_, 0);
v_isSharedCheck_1858_ = !lean_is_exclusive(v___x_1809_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1812_ = v___x_1809_;
v_isShared_1813_ = v_isSharedCheck_1858_;
goto v_resetjp_1811_;
}
else
{
lean_inc(v_a_1810_);
lean_dec(v___x_1809_);
v___x_1812_ = lean_box(0);
v_isShared_1813_ = v_isSharedCheck_1858_;
goto v_resetjp_1811_;
}
v_resetjp_1811_:
{
lean_object* v___y_1815_; 
switch(lean_obj_tag(v_a_1810_))
{
case 0:
{
lean_object* v_e_1850_; lean_object* v___x_1852_; 
lean_dec_ref(v_post_1798_);
lean_dec_ref(v_e_1797_);
lean_dec_ref(v_pre_1796_);
v_e_1850_ = lean_ctor_get(v_a_1810_, 0);
lean_inc_ref(v_e_1850_);
lean_dec_ref_known(v_a_1810_, 1);
if (v_isShared_1813_ == 0)
{
lean_ctor_set(v___x_1812_, 0, v_e_1850_);
v___x_1852_ = v___x_1812_;
goto v_reusejp_1851_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v_e_1850_);
v___x_1852_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1851_;
}
v_reusejp_1851_:
{
return v___x_1852_;
}
}
case 1:
{
lean_object* v_e_1854_; lean_object* v___x_1855_; 
lean_del_object(v___x_1812_);
lean_dec_ref(v_e_1797_);
v_e_1854_ = lean_ctor_get(v_a_1810_, 0);
lean_inc_ref(v_e_1854_);
lean_dec_ref_known(v_a_1810_, 1);
v___x_1855_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7(v_pre_1796_, v_post_1798_, v_usedLetOnly_1799_, v_skipConstInApp_1800_, v_skipInstances_1801_, v_e_1854_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
return v___x_1855_;
}
default: 
{
lean_object* v_e_x3f_1856_; 
lean_del_object(v___x_1812_);
v_e_x3f_1856_ = lean_ctor_get(v_a_1810_, 0);
lean_inc(v_e_x3f_1856_);
lean_dec_ref_known(v_a_1810_, 1);
if (lean_obj_tag(v_e_x3f_1856_) == 0)
{
v___y_1815_ = v_e_1797_;
goto v___jp_1814_;
}
else
{
lean_object* v_val_1857_; 
lean_dec_ref(v_e_1797_);
v_val_1857_ = lean_ctor_get(v_e_x3f_1856_, 0);
lean_inc(v_val_1857_);
lean_dec_ref_known(v_e_x3f_1856_, 1);
v___y_1815_ = v_val_1857_;
goto v___jp_1814_;
}
}
}
v___jp_1814_:
{
switch(lean_obj_tag(v___y_1815_))
{
case 7:
{
lean_object* v___x_1816_; lean_object* v___x_1817_; 
v___x_1816_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__1___closed__0));
v___x_1817_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14(v_pre_1796_, v_post_1798_, v_usedLetOnly_1799_, v_skipConstInApp_1800_, v_skipInstances_1801_, v___x_1816_, v___y_1815_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
return v___x_1817_;
}
case 6:
{
lean_object* v___x_1818_; lean_object* v___x_1819_; 
v___x_1818_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__1___closed__0));
v___x_1819_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__15(v_pre_1796_, v_post_1798_, v_usedLetOnly_1799_, v_skipConstInApp_1800_, v_skipInstances_1801_, v___x_1818_, v___y_1815_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
return v___x_1819_;
}
case 8:
{
lean_object* v___x_1820_; lean_object* v___x_1821_; 
v___x_1820_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__1___closed__0));
v___x_1821_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16(v_pre_1796_, v_post_1798_, v_usedLetOnly_1799_, v_skipConstInApp_1800_, v_skipInstances_1801_, v___x_1820_, v___y_1815_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
return v___x_1821_;
}
case 5:
{
lean_object* v_dummy_1822_; lean_object* v_nargs_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; 
v_dummy_1822_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__1___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__1___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__1___closed__1);
v_nargs_1823_ = l_Lean_Expr_getAppNumArgs(v___y_1815_);
lean_inc(v_nargs_1823_);
v___x_1824_ = lean_mk_array(v_nargs_1823_, v_dummy_1822_);
v___x_1825_ = lean_unsigned_to_nat(1u);
v___x_1826_ = lean_nat_sub(v_nargs_1823_, v___x_1825_);
lean_dec(v_nargs_1823_);
v___x_1827_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__17(v_skipInstances_1801_, v_pre_1796_, v_post_1798_, v_usedLetOnly_1799_, v_skipConstInApp_1800_, v___y_1815_, v___x_1824_, v___x_1826_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
return v___x_1827_;
}
case 10:
{
lean_object* v_data_1828_; lean_object* v_expr_1829_; lean_object* v___x_1830_; 
v_data_1828_ = lean_ctor_get(v___y_1815_, 0);
v_expr_1829_ = lean_ctor_get(v___y_1815_, 1);
lean_inc_ref(v_expr_1829_);
lean_inc_ref(v_post_1798_);
lean_inc_ref(v_pre_1796_);
v___x_1830_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7(v_pre_1796_, v_post_1798_, v_usedLetOnly_1799_, v_skipConstInApp_1800_, v_skipInstances_1801_, v_expr_1829_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
if (lean_obj_tag(v___x_1830_) == 0)
{
lean_object* v_a_1831_; size_t v___x_1832_; size_t v___x_1833_; uint8_t v___x_1834_; 
v_a_1831_ = lean_ctor_get(v___x_1830_, 0);
lean_inc(v_a_1831_);
lean_dec_ref_known(v___x_1830_, 1);
v___x_1832_ = lean_ptr_addr(v_expr_1829_);
v___x_1833_ = lean_ptr_addr(v_a_1831_);
v___x_1834_ = lean_usize_dec_eq(v___x_1832_, v___x_1833_);
if (v___x_1834_ == 0)
{
lean_object* v___x_1835_; lean_object* v___x_1836_; 
lean_inc(v_data_1828_);
lean_dec_ref_known(v___y_1815_, 2);
v___x_1835_ = l_Lean_Expr_mdata___override(v_data_1828_, v_a_1831_);
v___x_1836_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__11(v_pre_1796_, v_post_1798_, v_usedLetOnly_1799_, v_skipConstInApp_1800_, v_skipInstances_1801_, v___x_1835_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
return v___x_1836_;
}
else
{
lean_object* v___x_1837_; 
lean_dec(v_a_1831_);
v___x_1837_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__11(v_pre_1796_, v_post_1798_, v_usedLetOnly_1799_, v_skipConstInApp_1800_, v_skipInstances_1801_, v___y_1815_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
return v___x_1837_;
}
}
else
{
lean_dec_ref_known(v___y_1815_, 2);
lean_dec_ref(v_post_1798_);
lean_dec_ref(v_pre_1796_);
return v___x_1830_;
}
}
case 11:
{
lean_object* v_typeName_1838_; lean_object* v_idx_1839_; lean_object* v_struct_1840_; lean_object* v___x_1841_; 
v_typeName_1838_ = lean_ctor_get(v___y_1815_, 0);
v_idx_1839_ = lean_ctor_get(v___y_1815_, 1);
v_struct_1840_ = lean_ctor_get(v___y_1815_, 2);
lean_inc_ref(v_struct_1840_);
lean_inc_ref(v_post_1798_);
lean_inc_ref(v_pre_1796_);
v___x_1841_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7(v_pre_1796_, v_post_1798_, v_usedLetOnly_1799_, v_skipConstInApp_1800_, v_skipInstances_1801_, v_struct_1840_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
if (lean_obj_tag(v___x_1841_) == 0)
{
lean_object* v_a_1842_; size_t v___x_1843_; size_t v___x_1844_; uint8_t v___x_1845_; 
v_a_1842_ = lean_ctor_get(v___x_1841_, 0);
lean_inc(v_a_1842_);
lean_dec_ref_known(v___x_1841_, 1);
v___x_1843_ = lean_ptr_addr(v_struct_1840_);
v___x_1844_ = lean_ptr_addr(v_a_1842_);
v___x_1845_ = lean_usize_dec_eq(v___x_1843_, v___x_1844_);
if (v___x_1845_ == 0)
{
lean_object* v___x_1846_; lean_object* v___x_1847_; 
lean_inc(v_idx_1839_);
lean_inc(v_typeName_1838_);
lean_dec_ref_known(v___y_1815_, 3);
v___x_1846_ = l_Lean_Expr_proj___override(v_typeName_1838_, v_idx_1839_, v_a_1842_);
v___x_1847_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__11(v_pre_1796_, v_post_1798_, v_usedLetOnly_1799_, v_skipConstInApp_1800_, v_skipInstances_1801_, v___x_1846_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
return v___x_1847_;
}
else
{
lean_object* v___x_1848_; 
lean_dec(v_a_1842_);
v___x_1848_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__11(v_pre_1796_, v_post_1798_, v_usedLetOnly_1799_, v_skipConstInApp_1800_, v_skipInstances_1801_, v___y_1815_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
return v___x_1848_;
}
}
else
{
lean_dec_ref_known(v___y_1815_, 3);
lean_dec_ref(v_post_1798_);
lean_dec_ref(v_pre_1796_);
return v___x_1841_;
}
}
default: 
{
lean_object* v___x_1849_; 
v___x_1849_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__11(v_pre_1796_, v_post_1798_, v_usedLetOnly_1799_, v_skipConstInApp_1800_, v_skipInstances_1801_, v___y_1815_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
return v___x_1849_;
}
}
}
}
}
else
{
lean_object* v_a_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1866_; 
lean_dec_ref(v_post_1798_);
lean_dec_ref(v_e_1797_);
lean_dec_ref(v_pre_1796_);
v_a_1859_ = lean_ctor_get(v___x_1809_, 0);
v_isSharedCheck_1866_ = !lean_is_exclusive(v___x_1809_);
if (v_isSharedCheck_1866_ == 0)
{
v___x_1861_ = v___x_1809_;
v_isShared_1862_ = v_isSharedCheck_1866_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_a_1859_);
lean_dec(v___x_1809_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1866_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v___x_1864_; 
if (v_isShared_1862_ == 0)
{
v___x_1864_ = v___x_1861_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v_a_1859_);
v___x_1864_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
return v___x_1864_;
}
}
}
}
else
{
lean_object* v_a_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1874_; 
lean_dec_ref(v_post_1798_);
lean_dec_ref(v_e_1797_);
lean_dec_ref(v_pre_1796_);
v_a_1867_ = lean_ctor_get(v___x_1808_, 0);
v_isSharedCheck_1874_ = !lean_is_exclusive(v___x_1808_);
if (v_isSharedCheck_1874_ == 0)
{
v___x_1869_ = v___x_1808_;
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_a_1867_);
lean_dec(v___x_1808_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v___x_1872_; 
if (v_isShared_1870_ == 0)
{
v___x_1872_ = v___x_1869_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v_a_1867_);
v___x_1872_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1871_;
}
v_reusejp_1871_:
{
return v___x_1872_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__1___boxed(lean_object* v___x_1875_, lean_object* v_pre_1876_, lean_object* v_e_1877_, lean_object* v_post_1878_, lean_object* v_usedLetOnly_1879_, lean_object* v_skipConstInApp_1880_, lean_object* v_skipInstances_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_){
_start:
{
uint8_t v_usedLetOnly_boxed_1888_; uint8_t v_skipConstInApp_boxed_1889_; uint8_t v_skipInstances_boxed_1890_; lean_object* v_res_1891_; 
v_usedLetOnly_boxed_1888_ = lean_unbox(v_usedLetOnly_1879_);
v_skipConstInApp_boxed_1889_ = lean_unbox(v_skipConstInApp_1880_);
v_skipInstances_boxed_1890_ = lean_unbox(v_skipInstances_1881_);
v_res_1891_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__1(v___x_1875_, v_pre_1876_, v_e_1877_, v_post_1878_, v_usedLetOnly_boxed_1888_, v_skipConstInApp_boxed_1889_, v_skipInstances_boxed_1890_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_);
lean_dec(v___y_1886_);
lean_dec_ref(v___y_1885_);
lean_dec(v___y_1884_);
lean_dec_ref(v___y_1883_);
lean_dec(v___y_1882_);
return v_res_1891_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7(lean_object* v_pre_1892_, lean_object* v_post_1893_, uint8_t v_usedLetOnly_1894_, uint8_t v_skipConstInApp_1895_, uint8_t v_skipInstances_1896_, lean_object* v_e_1897_, lean_object* v_a_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_){
_start:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; 
lean_inc(v_a_1898_);
v___x_1904_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1904_, 0, lean_box(0));
lean_closure_set(v___x_1904_, 1, lean_box(0));
lean_closure_set(v___x_1904_, 2, v_a_1898_);
v___x_1905_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__0(lean_box(0), v___x_1904_, v___y_1899_, v___y_1900_, v___y_1901_, v___y_1902_);
if (lean_obj_tag(v___x_1905_) == 0)
{
lean_object* v_a_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1940_; 
v_a_1906_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1940_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1940_ == 0)
{
v___x_1908_ = v___x_1905_;
v_isShared_1909_ = v_isSharedCheck_1940_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_a_1906_);
lean_dec(v___x_1905_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1940_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v___x_1910_; 
v___x_1910_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13___redArg(v_a_1906_, v_e_1897_);
lean_dec(v_a_1906_);
if (lean_obj_tag(v___x_1910_) == 0)
{
lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___f_1915_; lean_object* v___x_1916_; 
lean_del_object(v___x_1908_);
v___x_1911_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___closed__0));
v___x_1912_ = lean_box(v_usedLetOnly_1894_);
v___x_1913_ = lean_box(v_skipConstInApp_1895_);
v___x_1914_ = lean_box(v_skipInstances_1896_);
lean_inc_ref(v_e_1897_);
v___f_1915_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__1___boxed), 13, 7);
lean_closure_set(v___f_1915_, 0, v___x_1911_);
lean_closure_set(v___f_1915_, 1, v_pre_1892_);
lean_closure_set(v___f_1915_, 2, v_e_1897_);
lean_closure_set(v___f_1915_, 3, v_post_1893_);
lean_closure_set(v___f_1915_, 4, v___x_1912_);
lean_closure_set(v___f_1915_, 5, v___x_1913_);
lean_closure_set(v___f_1915_, 6, v___x_1914_);
v___x_1916_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18___redArg(v___f_1915_, v_a_1898_, v___y_1899_, v___y_1900_, v___y_1901_, v___y_1902_);
if (lean_obj_tag(v___x_1916_) == 0)
{
lean_object* v_a_1917_; lean_object* v___f_1918_; lean_object* v___x_1919_; 
v_a_1917_ = lean_ctor_get(v___x_1916_, 0);
lean_inc_n(v_a_1917_, 2);
lean_dec_ref_known(v___x_1916_, 1);
lean_inc(v_a_1898_);
v___f_1918_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1918_, 0, v_a_1898_);
lean_closure_set(v___f_1918_, 1, v_e_1897_);
lean_closure_set(v___f_1918_, 2, v_a_1917_);
v___x_1919_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__0(lean_box(0), v___f_1918_, v___y_1899_, v___y_1900_, v___y_1901_, v___y_1902_);
if (lean_obj_tag(v___x_1919_) == 0)
{
lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1926_; 
v_isSharedCheck_1926_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1926_ == 0)
{
lean_object* v_unused_1927_; 
v_unused_1927_ = lean_ctor_get(v___x_1919_, 0);
lean_dec(v_unused_1927_);
v___x_1921_ = v___x_1919_;
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
else
{
lean_dec(v___x_1919_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1924_; 
if (v_isShared_1922_ == 0)
{
lean_ctor_set(v___x_1921_, 0, v_a_1917_);
v___x_1924_ = v___x_1921_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v_a_1917_);
v___x_1924_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
return v___x_1924_;
}
}
}
else
{
lean_object* v_a_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1935_; 
lean_dec(v_a_1917_);
v_a_1928_ = lean_ctor_get(v___x_1919_, 0);
v_isSharedCheck_1935_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1930_ = v___x_1919_;
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_a_1928_);
lean_dec(v___x_1919_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
lean_object* v___x_1933_; 
if (v_isShared_1931_ == 0)
{
v___x_1933_ = v___x_1930_;
goto v_reusejp_1932_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v_a_1928_);
v___x_1933_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1932_;
}
v_reusejp_1932_:
{
return v___x_1933_;
}
}
}
}
else
{
lean_dec_ref(v_e_1897_);
return v___x_1916_;
}
}
else
{
lean_object* v_val_1936_; lean_object* v___x_1938_; 
lean_dec_ref(v_e_1897_);
lean_dec_ref(v_post_1893_);
lean_dec_ref(v_pre_1892_);
v_val_1936_ = lean_ctor_get(v___x_1910_, 0);
lean_inc(v_val_1936_);
lean_dec_ref_known(v___x_1910_, 1);
if (v_isShared_1909_ == 0)
{
lean_ctor_set(v___x_1908_, 0, v_val_1936_);
v___x_1938_ = v___x_1908_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v_val_1936_);
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
else
{
lean_object* v_a_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1948_; 
lean_dec_ref(v_e_1897_);
lean_dec_ref(v_post_1893_);
lean_dec_ref(v_pre_1892_);
v_a_1941_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1948_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1943_ = v___x_1905_;
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_a_1941_);
lean_dec(v___x_1905_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v___x_1946_; 
if (v_isShared_1944_ == 0)
{
v___x_1946_ = v___x_1943_;
goto v_reusejp_1945_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v_a_1941_);
v___x_1946_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1945_;
}
v_reusejp_1945_:
{
return v___x_1946_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14___lam__0___boxed(lean_object* v_fvars_1949_, lean_object* v_pre_1950_, lean_object* v_post_1951_, lean_object* v_usedLetOnly_1952_, lean_object* v_skipConstInApp_1953_, lean_object* v_skipInstances_1954_, lean_object* v_body_1955_, lean_object* v_x_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_){
_start:
{
uint8_t v_usedLetOnly_boxed_1963_; uint8_t v_skipConstInApp_boxed_1964_; uint8_t v_skipInstances_boxed_1965_; lean_object* v_res_1966_; 
v_usedLetOnly_boxed_1963_ = lean_unbox(v_usedLetOnly_1952_);
v_skipConstInApp_boxed_1964_ = lean_unbox(v_skipConstInApp_1953_);
v_skipInstances_boxed_1965_ = lean_unbox(v_skipInstances_1954_);
v_res_1966_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14___lam__0(v_fvars_1949_, v_pre_1950_, v_post_1951_, v_usedLetOnly_boxed_1963_, v_skipConstInApp_boxed_1964_, v_skipInstances_boxed_1965_, v_body_1955_, v_x_1956_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_);
lean_dec(v___y_1961_);
lean_dec_ref(v___y_1960_);
lean_dec(v___y_1959_);
lean_dec_ref(v___y_1958_);
lean_dec(v___y_1957_);
return v_res_1966_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14(lean_object* v_pre_1967_, lean_object* v_post_1968_, uint8_t v_usedLetOnly_1969_, uint8_t v_skipConstInApp_1970_, uint8_t v_skipInstances_1971_, lean_object* v_fvars_1972_, lean_object* v_e_1973_, lean_object* v_a_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_){
_start:
{
if (lean_obj_tag(v_e_1973_) == 7)
{
lean_object* v_binderName_1980_; lean_object* v_binderType_1981_; lean_object* v_body_1982_; uint8_t v_binderInfo_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; 
v_binderName_1980_ = lean_ctor_get(v_e_1973_, 0);
lean_inc(v_binderName_1980_);
v_binderType_1981_ = lean_ctor_get(v_e_1973_, 1);
lean_inc_ref(v_binderType_1981_);
v_body_1982_ = lean_ctor_get(v_e_1973_, 2);
lean_inc_ref(v_body_1982_);
v_binderInfo_1983_ = lean_ctor_get_uint8(v_e_1973_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1973_, 3);
v___x_1984_ = lean_expr_instantiate_rev(v_binderType_1981_, v_fvars_1972_);
lean_dec_ref(v_binderType_1981_);
lean_inc_ref(v_post_1968_);
lean_inc_ref(v_pre_1967_);
v___x_1985_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7(v_pre_1967_, v_post_1968_, v_usedLetOnly_1969_, v_skipConstInApp_1970_, v_skipInstances_1971_, v___x_1984_, v_a_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
if (lean_obj_tag(v___x_1985_) == 0)
{
lean_object* v_a_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___f_1990_; uint8_t v___x_1991_; lean_object* v___x_1992_; 
v_a_1986_ = lean_ctor_get(v___x_1985_, 0);
lean_inc(v_a_1986_);
lean_dec_ref_known(v___x_1985_, 1);
v___x_1987_ = lean_box(v_usedLetOnly_1969_);
v___x_1988_ = lean_box(v_skipConstInApp_1970_);
v___x_1989_ = lean_box(v_skipInstances_1971_);
v___f_1990_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14___lam__0___boxed), 14, 7);
lean_closure_set(v___f_1990_, 0, v_fvars_1972_);
lean_closure_set(v___f_1990_, 1, v_pre_1967_);
lean_closure_set(v___f_1990_, 2, v_post_1968_);
lean_closure_set(v___f_1990_, 3, v___x_1987_);
lean_closure_set(v___f_1990_, 4, v___x_1988_);
lean_closure_set(v___f_1990_, 5, v___x_1989_);
lean_closure_set(v___f_1990_, 6, v_body_1982_);
v___x_1991_ = 0;
v___x_1992_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14_spec__20___redArg(v_binderName_1980_, v_binderInfo_1983_, v_a_1986_, v___f_1990_, v___x_1991_, v_a_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
return v___x_1992_;
}
else
{
lean_dec_ref(v_body_1982_);
lean_dec(v_binderName_1980_);
lean_dec_ref(v_fvars_1972_);
lean_dec_ref(v_post_1968_);
lean_dec_ref(v_pre_1967_);
return v___x_1985_;
}
}
else
{
lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1993_ = lean_expr_instantiate_rev(v_e_1973_, v_fvars_1972_);
lean_dec_ref(v_e_1973_);
lean_inc_ref(v_post_1968_);
lean_inc_ref(v_pre_1967_);
v___x_1994_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7(v_pre_1967_, v_post_1968_, v_usedLetOnly_1969_, v_skipConstInApp_1970_, v_skipInstances_1971_, v___x_1993_, v_a_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
if (lean_obj_tag(v___x_1994_) == 0)
{
lean_object* v_a_1995_; uint8_t v___x_1996_; uint8_t v___x_1997_; uint8_t v___x_1998_; lean_object* v___x_1999_; 
v_a_1995_ = lean_ctor_get(v___x_1994_, 0);
lean_inc(v_a_1995_);
lean_dec_ref_known(v___x_1994_, 1);
v___x_1996_ = 0;
v___x_1997_ = 1;
v___x_1998_ = 1;
v___x_1999_ = l_Lean_Meta_mkForallFVars(v_fvars_1972_, v_a_1995_, v___x_1996_, v_usedLetOnly_1969_, v___x_1997_, v___x_1998_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
lean_dec_ref(v_fvars_1972_);
if (lean_obj_tag(v___x_1999_) == 0)
{
lean_object* v_a_2000_; lean_object* v___x_2001_; 
v_a_2000_ = lean_ctor_get(v___x_1999_, 0);
lean_inc(v_a_2000_);
lean_dec_ref_known(v___x_1999_, 1);
v___x_2001_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__11(v_pre_1967_, v_post_1968_, v_usedLetOnly_1969_, v_skipConstInApp_1970_, v_skipInstances_1971_, v_a_2000_, v_a_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
return v___x_2001_;
}
else
{
lean_dec_ref(v_post_1968_);
lean_dec_ref(v_pre_1967_);
return v___x_1999_;
}
}
else
{
lean_dec_ref(v_fvars_1972_);
lean_dec_ref(v_post_1968_);
lean_dec_ref(v_pre_1967_);
return v___x_1994_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14___lam__0(lean_object* v_fvars_2002_, lean_object* v_pre_2003_, lean_object* v_post_2004_, uint8_t v_usedLetOnly_2005_, uint8_t v_skipConstInApp_2006_, uint8_t v_skipInstances_2007_, lean_object* v_body_2008_, lean_object* v_x_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_){
_start:
{
lean_object* v___x_2016_; lean_object* v___x_2017_; 
v___x_2016_ = lean_array_push(v_fvars_2002_, v_x_2009_);
v___x_2017_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14(v_pre_2003_, v_post_2004_, v_usedLetOnly_2005_, v_skipConstInApp_2006_, v_skipInstances_2007_, v___x_2016_, v_body_2008_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_, v___y_2014_);
return v___x_2017_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__11___boxed(lean_object* v_pre_2018_, lean_object* v_post_2019_, lean_object* v_usedLetOnly_2020_, lean_object* v_skipConstInApp_2021_, lean_object* v_skipInstances_2022_, lean_object* v_e_2023_, lean_object* v_a_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_){
_start:
{
uint8_t v_usedLetOnly_boxed_2030_; uint8_t v_skipConstInApp_boxed_2031_; uint8_t v_skipInstances_boxed_2032_; lean_object* v_res_2033_; 
v_usedLetOnly_boxed_2030_ = lean_unbox(v_usedLetOnly_2020_);
v_skipConstInApp_boxed_2031_ = lean_unbox(v_skipConstInApp_2021_);
v_skipInstances_boxed_2032_ = lean_unbox(v_skipInstances_2022_);
v_res_2033_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__11(v_pre_2018_, v_post_2019_, v_usedLetOnly_boxed_2030_, v_skipConstInApp_boxed_2031_, v_skipInstances_boxed_2032_, v_e_2023_, v_a_2024_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_);
lean_dec(v___y_2028_);
lean_dec_ref(v___y_2027_);
lean_dec(v___y_2026_);
lean_dec_ref(v___y_2025_);
lean_dec(v_a_2024_);
return v_res_2033_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__10___boxed(lean_object* v_pre_2034_, lean_object* v_post_2035_, lean_object* v_usedLetOnly_2036_, lean_object* v_skipConstInApp_2037_, lean_object* v_skipInstances_2038_, lean_object* v_sz_2039_, lean_object* v_i_2040_, lean_object* v_bs_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_){
_start:
{
uint8_t v_usedLetOnly_boxed_2048_; uint8_t v_skipConstInApp_boxed_2049_; uint8_t v_skipInstances_boxed_2050_; size_t v_sz_boxed_2051_; size_t v_i_boxed_2052_; lean_object* v_res_2053_; 
v_usedLetOnly_boxed_2048_ = lean_unbox(v_usedLetOnly_2036_);
v_skipConstInApp_boxed_2049_ = lean_unbox(v_skipConstInApp_2037_);
v_skipInstances_boxed_2050_ = lean_unbox(v_skipInstances_2038_);
v_sz_boxed_2051_ = lean_unbox_usize(v_sz_2039_);
lean_dec(v_sz_2039_);
v_i_boxed_2052_ = lean_unbox_usize(v_i_2040_);
lean_dec(v_i_2040_);
v_res_2053_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__10(v_pre_2034_, v_post_2035_, v_usedLetOnly_boxed_2048_, v_skipConstInApp_boxed_2049_, v_skipInstances_boxed_2050_, v_sz_boxed_2051_, v_i_boxed_2052_, v_bs_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_);
lean_dec(v___y_2046_);
lean_dec_ref(v___y_2045_);
lean_dec(v___y_2044_);
lean_dec_ref(v___y_2043_);
lean_dec(v___y_2042_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___boxed(lean_object* v_pre_2054_, lean_object* v_post_2055_, lean_object* v_usedLetOnly_2056_, lean_object* v_skipConstInApp_2057_, lean_object* v_skipInstances_2058_, lean_object* v_e_2059_, lean_object* v_a_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_){
_start:
{
uint8_t v_usedLetOnly_boxed_2066_; uint8_t v_skipConstInApp_boxed_2067_; uint8_t v_skipInstances_boxed_2068_; lean_object* v_res_2069_; 
v_usedLetOnly_boxed_2066_ = lean_unbox(v_usedLetOnly_2056_);
v_skipConstInApp_boxed_2067_ = lean_unbox(v_skipConstInApp_2057_);
v_skipInstances_boxed_2068_ = lean_unbox(v_skipInstances_2058_);
v_res_2069_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7(v_pre_2054_, v_post_2055_, v_usedLetOnly_boxed_2066_, v_skipConstInApp_boxed_2067_, v_skipInstances_boxed_2068_, v_e_2059_, v_a_2060_, v___y_2061_, v___y_2062_, v___y_2063_, v___y_2064_);
lean_dec(v___y_2064_);
lean_dec_ref(v___y_2063_);
lean_dec(v___y_2062_);
lean_dec_ref(v___y_2061_);
lean_dec(v_a_2060_);
return v_res_2069_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14___boxed(lean_object* v_pre_2070_, lean_object* v_post_2071_, lean_object* v_usedLetOnly_2072_, lean_object* v_skipConstInApp_2073_, lean_object* v_skipInstances_2074_, lean_object* v_fvars_2075_, lean_object* v_e_2076_, lean_object* v_a_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_){
_start:
{
uint8_t v_usedLetOnly_boxed_2083_; uint8_t v_skipConstInApp_boxed_2084_; uint8_t v_skipInstances_boxed_2085_; lean_object* v_res_2086_; 
v_usedLetOnly_boxed_2083_ = lean_unbox(v_usedLetOnly_2072_);
v_skipConstInApp_boxed_2084_ = lean_unbox(v_skipConstInApp_2073_);
v_skipInstances_boxed_2085_ = lean_unbox(v_skipInstances_2074_);
v_res_2086_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14(v_pre_2070_, v_post_2071_, v_usedLetOnly_boxed_2083_, v_skipConstInApp_boxed_2084_, v_skipInstances_boxed_2085_, v_fvars_2075_, v_e_2076_, v_a_2077_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_);
lean_dec(v___y_2081_);
lean_dec_ref(v___y_2080_);
lean_dec(v___y_2079_);
lean_dec_ref(v___y_2078_);
lean_dec(v_a_2077_);
return v_res_2086_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__15___boxed(lean_object* v_pre_2087_, lean_object* v_post_2088_, lean_object* v_usedLetOnly_2089_, lean_object* v_skipConstInApp_2090_, lean_object* v_skipInstances_2091_, lean_object* v_fvars_2092_, lean_object* v_e_2093_, lean_object* v_a_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_){
_start:
{
uint8_t v_usedLetOnly_boxed_2100_; uint8_t v_skipConstInApp_boxed_2101_; uint8_t v_skipInstances_boxed_2102_; lean_object* v_res_2103_; 
v_usedLetOnly_boxed_2100_ = lean_unbox(v_usedLetOnly_2089_);
v_skipConstInApp_boxed_2101_ = lean_unbox(v_skipConstInApp_2090_);
v_skipInstances_boxed_2102_ = lean_unbox(v_skipInstances_2091_);
v_res_2103_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__15(v_pre_2087_, v_post_2088_, v_usedLetOnly_boxed_2100_, v_skipConstInApp_boxed_2101_, v_skipInstances_boxed_2102_, v_fvars_2092_, v_e_2093_, v_a_2094_, v___y_2095_, v___y_2096_, v___y_2097_, v___y_2098_);
lean_dec(v___y_2098_);
lean_dec_ref(v___y_2097_);
lean_dec(v___y_2096_);
lean_dec_ref(v___y_2095_);
lean_dec(v_a_2094_);
return v_res_2103_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16___boxed(lean_object* v_pre_2104_, lean_object* v_post_2105_, lean_object* v_usedLetOnly_2106_, lean_object* v_skipConstInApp_2107_, lean_object* v_skipInstances_2108_, lean_object* v_fvars_2109_, lean_object* v_e_2110_, lean_object* v_a_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_){
_start:
{
uint8_t v_usedLetOnly_boxed_2117_; uint8_t v_skipConstInApp_boxed_2118_; uint8_t v_skipInstances_boxed_2119_; lean_object* v_res_2120_; 
v_usedLetOnly_boxed_2117_ = lean_unbox(v_usedLetOnly_2106_);
v_skipConstInApp_boxed_2118_ = lean_unbox(v_skipConstInApp_2107_);
v_skipInstances_boxed_2119_ = lean_unbox(v_skipInstances_2108_);
v_res_2120_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16(v_pre_2104_, v_post_2105_, v_usedLetOnly_boxed_2117_, v_skipConstInApp_boxed_2118_, v_skipInstances_boxed_2119_, v_fvars_2109_, v_e_2110_, v_a_2111_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_);
lean_dec(v___y_2115_);
lean_dec_ref(v___y_2114_);
lean_dec(v___y_2113_);
lean_dec_ref(v___y_2112_);
lean_dec(v_a_2111_);
return v_res_2120_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12___redArg___boxed(lean_object* v_upperBound_2121_, lean_object* v___x_2122_, lean_object* v_pre_2123_, lean_object* v_post_2124_, lean_object* v_usedLetOnly_2125_, lean_object* v_skipConstInApp_2126_, lean_object* v_skipInstances_2127_, lean_object* v_a_2128_, lean_object* v_b_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_){
_start:
{
uint8_t v_usedLetOnly_boxed_2136_; uint8_t v_skipConstInApp_boxed_2137_; uint8_t v_skipInstances_boxed_2138_; lean_object* v_res_2139_; 
v_usedLetOnly_boxed_2136_ = lean_unbox(v_usedLetOnly_2125_);
v_skipConstInApp_boxed_2137_ = lean_unbox(v_skipConstInApp_2126_);
v_skipInstances_boxed_2138_ = lean_unbox(v_skipInstances_2127_);
v_res_2139_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12___redArg(v_upperBound_2121_, v___x_2122_, v_pre_2123_, v_post_2124_, v_usedLetOnly_boxed_2136_, v_skipConstInApp_boxed_2137_, v_skipInstances_boxed_2138_, v_a_2128_, v_b_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_);
lean_dec(v___y_2134_);
lean_dec_ref(v___y_2133_);
lean_dec(v___y_2132_);
lean_dec_ref(v___y_2131_);
lean_dec(v___y_2130_);
lean_dec_ref(v___x_2122_);
lean_dec(v_upperBound_2121_);
return v_res_2139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__17___boxed(lean_object* v_skipInstances_2140_, lean_object* v_pre_2141_, lean_object* v_post_2142_, lean_object* v_usedLetOnly_2143_, lean_object* v_skipConstInApp_2144_, lean_object* v_x_2145_, lean_object* v_x_2146_, lean_object* v_x_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_){
_start:
{
uint8_t v_skipInstances_boxed_2154_; uint8_t v_usedLetOnly_boxed_2155_; uint8_t v_skipConstInApp_boxed_2156_; lean_object* v_res_2157_; 
v_skipInstances_boxed_2154_ = lean_unbox(v_skipInstances_2140_);
v_usedLetOnly_boxed_2155_ = lean_unbox(v_usedLetOnly_2143_);
v_skipConstInApp_boxed_2156_ = lean_unbox(v_skipConstInApp_2144_);
v_res_2157_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__17(v_skipInstances_boxed_2154_, v_pre_2141_, v_post_2142_, v_usedLetOnly_boxed_2155_, v_skipConstInApp_boxed_2156_, v_x_2145_, v_x_2146_, v_x_2147_, v___y_2148_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_);
lean_dec(v___y_2152_);
lean_dec_ref(v___y_2151_);
lean_dec(v___y_2150_);
lean_dec_ref(v___y_2149_);
lean_dec(v___y_2148_);
return v_res_2157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___lam__0(lean_object* v_00_u03b1_2158_, lean_object* v_x_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_){
_start:
{
lean_object* v___x_2165_; lean_object* v___x_2166_; 
v___x_2165_ = lean_apply_1(v_x_2159_, lean_box(0));
v___x_2166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2166_, 0, v___x_2165_);
return v___x_2166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___lam__0___boxed(lean_object* v_00_u03b1_2167_, lean_object* v_x_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_){
_start:
{
lean_object* v_res_2174_; 
v_res_2174_ = l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___lam__0(v_00_u03b1_2167_, v_x_2168_, v___y_2169_, v___y_2170_, v___y_2171_, v___y_2172_);
lean_dec(v___y_2172_);
lean_dec_ref(v___y_2171_);
lean_dec(v___y_2170_);
lean_dec_ref(v___y_2169_);
return v_res_2174_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___closed__0(void){
_start:
{
lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; 
v___x_2175_ = lean_box(0);
v___x_2176_ = lean_unsigned_to_nat(16u);
v___x_2177_ = lean_mk_array(v___x_2176_, v___x_2175_);
return v___x_2177_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___closed__1(void){
_start:
{
lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; 
v___x_2178_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___closed__0, &l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___closed__0_once, _init_l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___closed__0);
v___x_2179_ = lean_unsigned_to_nat(0u);
v___x_2180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2180_, 0, v___x_2179_);
lean_ctor_set(v___x_2180_, 1, v___x_2178_);
return v___x_2180_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___closed__2(void){
_start:
{
lean_object* v___x_2181_; lean_object* v___x_2182_; 
v___x_2181_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___closed__1, &l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___closed__1_once, _init_l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___closed__1);
v___x_2182_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_2182_, 0, lean_box(0));
lean_closure_set(v___x_2182_, 1, lean_box(0));
lean_closure_set(v___x_2182_, 2, v___x_2181_);
return v___x_2182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4(lean_object* v_input_2183_, lean_object* v_pre_2184_, lean_object* v_post_2185_, uint8_t v_usedLetOnly_2186_, uint8_t v_skipConstInApp_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_){
_start:
{
lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v_a_2195_; uint8_t v___x_2196_; lean_object* v___x_2197_; 
v___x_2193_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___closed__2, &l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___closed__2_once, _init_l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___closed__2);
v___x_2194_ = l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___lam__0(lean_box(0), v___x_2193_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_);
v_a_2195_ = lean_ctor_get(v___x_2194_, 0);
lean_inc(v_a_2195_);
lean_dec_ref(v___x_2194_);
v___x_2196_ = 0;
v___x_2197_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7(v_pre_2184_, v_post_2185_, v_usedLetOnly_2186_, v_skipConstInApp_2187_, v___x_2196_, v_input_2183_, v_a_2195_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_);
if (lean_obj_tag(v___x_2197_) == 0)
{
lean_object* v_a_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2207_; 
v_a_2198_ = lean_ctor_get(v___x_2197_, 0);
lean_inc(v_a_2198_);
lean_dec_ref_known(v___x_2197_, 1);
v___x_2199_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2199_, 0, lean_box(0));
lean_closure_set(v___x_2199_, 1, lean_box(0));
lean_closure_set(v___x_2199_, 2, v_a_2195_);
v___x_2200_ = l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___lam__0(lean_box(0), v___x_2199_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_);
v_isSharedCheck_2207_ = !lean_is_exclusive(v___x_2200_);
if (v_isSharedCheck_2207_ == 0)
{
lean_object* v_unused_2208_; 
v_unused_2208_ = lean_ctor_get(v___x_2200_, 0);
lean_dec(v_unused_2208_);
v___x_2202_ = v___x_2200_;
v_isShared_2203_ = v_isSharedCheck_2207_;
goto v_resetjp_2201_;
}
else
{
lean_dec(v___x_2200_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2207_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
lean_object* v___x_2205_; 
if (v_isShared_2203_ == 0)
{
lean_ctor_set(v___x_2202_, 0, v_a_2198_);
v___x_2205_ = v___x_2202_;
goto v_reusejp_2204_;
}
else
{
lean_object* v_reuseFailAlloc_2206_; 
v_reuseFailAlloc_2206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2206_, 0, v_a_2198_);
v___x_2205_ = v_reuseFailAlloc_2206_;
goto v_reusejp_2204_;
}
v_reusejp_2204_:
{
return v___x_2205_;
}
}
}
else
{
lean_dec(v_a_2195_);
return v___x_2197_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4___boxed(lean_object* v_input_2209_, lean_object* v_pre_2210_, lean_object* v_post_2211_, lean_object* v_usedLetOnly_2212_, lean_object* v_skipConstInApp_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_){
_start:
{
uint8_t v_usedLetOnly_boxed_2219_; uint8_t v_skipConstInApp_boxed_2220_; lean_object* v_res_2221_; 
v_usedLetOnly_boxed_2219_ = lean_unbox(v_usedLetOnly_2212_);
v_skipConstInApp_boxed_2220_ = lean_unbox(v_skipConstInApp_2213_);
v_res_2221_ = l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4(v_input_2209_, v_pre_2210_, v_post_2211_, v_usedLetOnly_boxed_2219_, v_skipConstInApp_boxed_2220_, v___y_2214_, v___y_2215_, v___y_2216_, v___y_2217_);
lean_dec(v___y_2217_);
lean_dec_ref(v___y_2216_);
lean_dec(v___y_2215_);
lean_dec_ref(v___y_2214_);
return v_res_2221_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__1(void){
_start:
{
lean_object* v___x_2223_; lean_object* v___x_2224_; 
v___x_2223_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__0));
v___x_2224_ = l_Lean_stringToMessageData(v___x_2223_);
return v___x_2224_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__5(void){
_start:
{
lean_object* v___x_2232_; lean_object* v___x_2233_; 
v___x_2232_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__4));
v___x_2233_ = l_Lean_stringToMessageData(v___x_2232_);
return v___x_2233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp(lean_object* v_specThm_2239_, lean_object* v_info_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_, lean_object* v_a_2243_, lean_object* v_a_2244_, lean_object* v_a_2245_, lean_object* v_a_2246_){
_start:
{
lean_object* v___x_2248_; lean_object* v___x_2249_; 
v___x_2248_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_instWP(v_info_2240_);
lean_inc(v_a_2246_);
lean_inc_ref(v_a_2245_);
lean_inc(v_a_2244_);
lean_inc_ref(v_a_2243_);
lean_inc_ref(v___x_2248_);
v___x_2249_ = lean_infer_type(v___x_2248_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
if (lean_obj_tag(v___x_2249_) == 0)
{
lean_object* v_a_2250_; lean_object* v___x_2251_; 
v_a_2250_ = lean_ctor_get(v___x_2249_, 0);
lean_inc(v_a_2250_);
lean_dec_ref_known(v___x_2249_, 1);
v___x_2251_ = l_Lean_Meta_whnfR(v_a_2250_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
if (lean_obj_tag(v___x_2251_) == 0)
{
lean_object* v_a_2252_; lean_object* v___y_2254_; lean_object* v___y_2255_; lean_object* v___y_2256_; lean_object* v___y_2257_; lean_object* v___y_2258_; lean_object* v___y_2259_; lean_object* v___x_2264_; uint8_t v___x_2265_; 
v_a_2252_ = lean_ctor_get(v___x_2251_, 0);
lean_inc_n(v_a_2252_, 2);
lean_dec_ref_known(v___x_2251_, 1);
v___x_2264_ = l_Lean_Expr_cleanupAnnotations(v_a_2252_);
v___x_2265_ = l_Lean_Expr_isApp(v___x_2264_);
if (v___x_2265_ == 0)
{
lean_dec_ref(v___x_2264_);
lean_dec_ref(v___x_2248_);
lean_dec_ref(v_specThm_2239_);
v___y_2254_ = v_a_2241_;
v___y_2255_ = v_a_2242_;
v___y_2256_ = v_a_2243_;
v___y_2257_ = v_a_2244_;
v___y_2258_ = v_a_2245_;
v___y_2259_ = v_a_2246_;
goto v___jp_2253_;
}
else
{
lean_object* v___x_2266_; uint8_t v___x_2267_; 
v___x_2266_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2264_);
v___x_2267_ = l_Lean_Expr_isApp(v___x_2266_);
if (v___x_2267_ == 0)
{
lean_dec_ref(v___x_2266_);
lean_dec_ref(v___x_2248_);
lean_dec_ref(v_specThm_2239_);
v___y_2254_ = v_a_2241_;
v___y_2255_ = v_a_2242_;
v___y_2256_ = v_a_2243_;
v___y_2257_ = v_a_2244_;
v___y_2258_ = v_a_2245_;
v___y_2259_ = v_a_2246_;
goto v___jp_2253_;
}
else
{
lean_object* v___x_2268_; uint8_t v___x_2269_; 
v___x_2268_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2266_);
v___x_2269_ = l_Lean_Expr_isApp(v___x_2268_);
if (v___x_2269_ == 0)
{
lean_dec_ref(v___x_2268_);
lean_dec_ref(v___x_2248_);
lean_dec_ref(v_specThm_2239_);
v___y_2254_ = v_a_2241_;
v___y_2255_ = v_a_2242_;
v___y_2256_ = v_a_2243_;
v___y_2257_ = v_a_2244_;
v___y_2258_ = v_a_2245_;
v___y_2259_ = v_a_2246_;
goto v___jp_2253_;
}
else
{
lean_object* v___x_2270_; uint8_t v___x_2271_; 
v___x_2270_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2268_);
v___x_2271_ = l_Lean_Expr_isApp(v___x_2270_);
if (v___x_2271_ == 0)
{
lean_dec_ref(v___x_2270_);
lean_dec_ref(v___x_2248_);
lean_dec_ref(v_specThm_2239_);
v___y_2254_ = v_a_2241_;
v___y_2255_ = v_a_2242_;
v___y_2256_ = v_a_2243_;
v___y_2257_ = v_a_2244_;
v___y_2258_ = v_a_2245_;
v___y_2259_ = v_a_2246_;
goto v___jp_2253_;
}
else
{
lean_object* v___x_2272_; uint8_t v___x_2273_; 
v___x_2272_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2270_);
v___x_2273_ = l_Lean_Expr_isApp(v___x_2272_);
if (v___x_2273_ == 0)
{
lean_dec_ref(v___x_2272_);
lean_dec_ref(v___x_2248_);
lean_dec_ref(v_specThm_2239_);
v___y_2254_ = v_a_2241_;
v___y_2255_ = v_a_2242_;
v___y_2256_ = v_a_2243_;
v___y_2257_ = v_a_2244_;
v___y_2258_ = v_a_2245_;
v___y_2259_ = v_a_2246_;
goto v___jp_2253_;
}
else
{
lean_object* v_arg_2274_; lean_object* v___x_2275_; uint8_t v___x_2276_; 
v_arg_2274_ = lean_ctor_get(v___x_2272_, 1);
lean_inc_ref(v_arg_2274_);
v___x_2275_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2272_);
v___x_2276_ = l_Lean_Expr_isApp(v___x_2275_);
if (v___x_2276_ == 0)
{
lean_dec_ref(v___x_2275_);
lean_dec_ref(v_arg_2274_);
lean_dec_ref(v___x_2248_);
lean_dec_ref(v_specThm_2239_);
v___y_2254_ = v_a_2241_;
v___y_2255_ = v_a_2242_;
v___y_2256_ = v_a_2243_;
v___y_2257_ = v_a_2244_;
v___y_2258_ = v_a_2245_;
v___y_2259_ = v_a_2246_;
goto v___jp_2253_;
}
else
{
lean_object* v_arg_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; uint8_t v___x_2280_; 
v_arg_2277_ = lean_ctor_get(v___x_2275_, 1);
lean_inc_ref(v_arg_2277_);
v___x_2278_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2275_);
v___x_2279_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__3));
v___x_2280_ = l_Lean_Expr_isConstOf(v___x_2278_, v___x_2279_);
lean_dec_ref(v___x_2278_);
if (v___x_2280_ == 0)
{
lean_dec_ref(v_arg_2277_);
lean_dec_ref(v_arg_2274_);
lean_dec_ref(v___x_2248_);
lean_dec_ref(v_specThm_2239_);
v___y_2254_ = v_a_2241_;
v___y_2255_ = v_a_2242_;
v___y_2256_ = v_a_2243_;
v___y_2257_ = v_a_2244_;
v___y_2258_ = v_a_2245_;
v___y_2259_ = v_a_2246_;
goto v___jp_2253_;
}
else
{
lean_object* v___x_2281_; lean_object* v___x_2282_; 
lean_dec(v_a_2252_);
v___x_2281_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_m(v_info_2240_);
lean_inc_ref(v___x_2281_);
v___x_2282_ = l_Lean_Meta_isExprDefEqGuarded(v___x_2281_, v_arg_2277_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
if (lean_obj_tag(v___x_2282_) == 0)
{
lean_object* v_a_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2500_; 
v_a_2283_ = lean_ctor_get(v___x_2282_, 0);
v_isSharedCheck_2500_ = !lean_is_exclusive(v___x_2282_);
if (v_isSharedCheck_2500_ == 0)
{
v___x_2285_ = v___x_2282_;
v_isShared_2286_ = v_isSharedCheck_2500_;
goto v_resetjp_2284_;
}
else
{
lean_inc(v_a_2283_);
lean_dec(v___x_2282_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2500_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
uint8_t v___x_2287_; 
v___x_2287_ = lean_unbox(v_a_2283_);
lean_dec(v_a_2283_);
if (v___x_2287_ == 0)
{
lean_object* v___x_2288_; lean_object* v___x_2290_; 
lean_dec_ref(v___x_2281_);
lean_dec_ref(v_arg_2274_);
lean_dec_ref(v___x_2248_);
lean_dec_ref(v_specThm_2239_);
v___x_2288_ = lean_box(0);
if (v_isShared_2286_ == 0)
{
lean_ctor_set(v___x_2285_, 0, v___x_2288_);
v___x_2290_ = v___x_2285_;
goto v_reusejp_2289_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v___x_2288_);
v___x_2290_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2289_;
}
v_reusejp_2289_:
{
return v___x_2290_;
}
}
else
{
lean_object* v___x_2292_; lean_object* v___x_2293_; 
lean_del_object(v___x_2285_);
v___x_2292_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_Pred(v_info_2240_);
v___x_2293_ = l_Lean_Meta_isExprDefEqGuarded(v___x_2292_, v_arg_2274_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
if (lean_obj_tag(v___x_2293_) == 0)
{
lean_object* v_a_2294_; lean_object* v___x_2296_; uint8_t v_isShared_2297_; uint8_t v_isSharedCheck_2491_; 
v_a_2294_ = lean_ctor_get(v___x_2293_, 0);
v_isSharedCheck_2491_ = !lean_is_exclusive(v___x_2293_);
if (v_isSharedCheck_2491_ == 0)
{
v___x_2296_ = v___x_2293_;
v_isShared_2297_ = v_isSharedCheck_2491_;
goto v_resetjp_2295_;
}
else
{
lean_inc(v_a_2294_);
lean_dec(v___x_2293_);
v___x_2296_ = lean_box(0);
v_isShared_2297_ = v_isSharedCheck_2491_;
goto v_resetjp_2295_;
}
v_resetjp_2295_:
{
uint8_t v___x_2298_; 
v___x_2298_ = lean_unbox(v_a_2294_);
lean_dec(v_a_2294_);
if (v___x_2298_ == 0)
{
lean_object* v___x_2299_; lean_object* v___x_2301_; 
lean_dec_ref(v___x_2281_);
lean_dec_ref(v___x_2248_);
lean_dec_ref(v_specThm_2239_);
v___x_2299_ = lean_box(0);
if (v_isShared_2297_ == 0)
{
lean_ctor_set(v___x_2296_, 0, v___x_2299_);
v___x_2301_ = v___x_2296_;
goto v_reusejp_2300_;
}
else
{
lean_object* v_reuseFailAlloc_2302_; 
v_reuseFailAlloc_2302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2302_, 0, v___x_2299_);
v___x_2301_ = v_reuseFailAlloc_2302_;
goto v_reusejp_2300_;
}
v_reusejp_2300_:
{
return v___x_2301_;
}
}
else
{
lean_object* v___x_2303_; 
lean_del_object(v___x_2296_);
v___x_2303_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremNew_instantiate(v_specThm_2239_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
if (lean_obj_tag(v___x_2303_) == 0)
{
lean_object* v_a_2304_; lean_object* v_snd_2305_; lean_object* v_snd_2306_; lean_object* v_fst_2307_; lean_object* v_fst_2308_; lean_object* v_snd_2309_; lean_object* v___x_2311_; uint8_t v_isShared_2312_; uint8_t v_isSharedCheck_2482_; 
v_a_2304_ = lean_ctor_get(v___x_2303_, 0);
lean_inc(v_a_2304_);
lean_dec_ref_known(v___x_2303_, 1);
v_snd_2305_ = lean_ctor_get(v_a_2304_, 1);
v_snd_2306_ = lean_ctor_get(v_snd_2305_, 1);
lean_inc(v_snd_2306_);
v_fst_2307_ = lean_ctor_get(v_a_2304_, 0);
lean_inc(v_fst_2307_);
lean_dec(v_a_2304_);
v_fst_2308_ = lean_ctor_get(v_snd_2306_, 0);
v_snd_2309_ = lean_ctor_get(v_snd_2306_, 1);
v_isSharedCheck_2482_ = !lean_is_exclusive(v_snd_2306_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2311_ = v_snd_2306_;
v_isShared_2312_ = v_isSharedCheck_2482_;
goto v_resetjp_2310_;
}
else
{
lean_inc(v_snd_2309_);
lean_inc(v_fst_2308_);
lean_dec(v_snd_2306_);
v___x_2311_ = lean_box(0);
v_isShared_2312_ = v_isSharedCheck_2482_;
goto v_resetjp_2310_;
}
v_resetjp_2310_:
{
lean_object* v___y_2314_; lean_object* v___y_2315_; lean_object* v___y_2316_; lean_object* v___y_2317_; lean_object* v___y_2318_; lean_object* v___y_2319_; lean_object* v___x_2326_; uint8_t v___x_2327_; 
lean_inc(v_snd_2309_);
v___x_2326_ = l_Lean_Expr_cleanupAnnotations(v_snd_2309_);
v___x_2327_ = l_Lean_Expr_isApp(v___x_2326_);
if (v___x_2327_ == 0)
{
lean_dec_ref(v___x_2326_);
lean_dec(v_fst_2308_);
lean_dec(v_fst_2307_);
lean_dec_ref(v___x_2281_);
lean_dec_ref(v___x_2248_);
v___y_2314_ = v_a_2241_;
v___y_2315_ = v_a_2242_;
v___y_2316_ = v_a_2243_;
v___y_2317_ = v_a_2244_;
v___y_2318_ = v_a_2245_;
v___y_2319_ = v_a_2246_;
goto v___jp_2313_;
}
else
{
lean_object* v_arg_2328_; lean_object* v___x_2329_; uint8_t v___x_2330_; 
v_arg_2328_ = lean_ctor_get(v___x_2326_, 1);
lean_inc_ref(v_arg_2328_);
v___x_2329_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2326_);
v___x_2330_ = l_Lean_Expr_isApp(v___x_2329_);
if (v___x_2330_ == 0)
{
lean_dec_ref(v___x_2329_);
lean_dec_ref(v_arg_2328_);
lean_dec(v_fst_2308_);
lean_dec(v_fst_2307_);
lean_dec_ref(v___x_2281_);
lean_dec_ref(v___x_2248_);
v___y_2314_ = v_a_2241_;
v___y_2315_ = v_a_2242_;
v___y_2316_ = v_a_2243_;
v___y_2317_ = v_a_2244_;
v___y_2318_ = v_a_2245_;
v___y_2319_ = v_a_2246_;
goto v___jp_2313_;
}
else
{
lean_object* v_arg_2331_; lean_object* v___x_2332_; uint8_t v___x_2333_; 
v_arg_2331_ = lean_ctor_get(v___x_2329_, 1);
lean_inc_ref(v_arg_2331_);
v___x_2332_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2329_);
v___x_2333_ = l_Lean_Expr_isApp(v___x_2332_);
if (v___x_2333_ == 0)
{
lean_dec_ref(v___x_2332_);
lean_dec_ref(v_arg_2331_);
lean_dec_ref(v_arg_2328_);
lean_dec(v_fst_2308_);
lean_dec(v_fst_2307_);
lean_dec_ref(v___x_2281_);
lean_dec_ref(v___x_2248_);
v___y_2314_ = v_a_2241_;
v___y_2315_ = v_a_2242_;
v___y_2316_ = v_a_2243_;
v___y_2317_ = v_a_2244_;
v___y_2318_ = v_a_2245_;
v___y_2319_ = v_a_2246_;
goto v___jp_2313_;
}
else
{
lean_object* v_arg_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; uint8_t v___x_2337_; 
v_arg_2334_ = lean_ctor_get(v___x_2332_, 1);
lean_inc_ref(v_arg_2334_);
v___x_2335_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2332_);
v___x_2336_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__7));
v___x_2337_ = l_Lean_Expr_isConstOf(v___x_2335_, v___x_2336_);
lean_dec_ref(v___x_2335_);
if (v___x_2337_ == 0)
{
lean_dec_ref(v_arg_2334_);
lean_dec_ref(v_arg_2331_);
lean_dec_ref(v_arg_2328_);
lean_dec(v_fst_2308_);
lean_dec(v_fst_2307_);
lean_dec_ref(v___x_2281_);
lean_dec_ref(v___x_2248_);
v___y_2314_ = v_a_2241_;
v___y_2315_ = v_a_2242_;
v___y_2316_ = v_a_2243_;
v___y_2317_ = v_a_2244_;
v___y_2318_ = v_a_2245_;
v___y_2319_ = v_a_2246_;
goto v___jp_2313_;
}
else
{
lean_object* v___x_2338_; 
lean_del_object(v___x_2311_);
lean_dec(v_snd_2309_);
lean_inc(v_a_2246_);
lean_inc_ref(v_a_2245_);
lean_inc(v_a_2244_);
lean_inc_ref(v_a_2243_);
v___x_2338_ = lean_infer_type(v___x_2248_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
if (lean_obj_tag(v___x_2338_) == 0)
{
lean_object* v_a_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; uint8_t v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; 
v_a_2339_ = lean_ctor_get(v___x_2338_, 0);
lean_inc(v_a_2339_);
lean_dec_ref_known(v___x_2338_, 1);
v___x_2340_ = lean_box(0);
v___x_2341_ = l_Lean_Expr_getAppFn(v_a_2339_);
lean_dec(v_a_2339_);
v___x_2342_ = l_Lean_Expr_constLevels_x21(v___x_2341_);
lean_dec_ref(v___x_2341_);
v___x_2343_ = lean_unsigned_to_nat(0u);
v___x_2344_ = l_List_get_x21Internal___redArg(v___x_2340_, v___x_2342_, v___x_2343_);
lean_dec(v___x_2342_);
v___x_2345_ = l_Lean_Level_succ___override(v___x_2344_);
v___x_2346_ = l_Lean_mkSort(v___x_2345_);
v___x_2347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2347_, 0, v___x_2346_);
v___x_2348_ = 0;
v___x_2349_ = lean_box(0);
v___x_2350_ = l_Lean_Meta_mkFreshExprMVar(v___x_2347_, v___x_2348_, v___x_2349_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
if (lean_obj_tag(v___x_2350_) == 0)
{
lean_object* v_a_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; 
v_a_2351_ = lean_ctor_get(v___x_2350_, 0);
lean_inc_n(v_a_2351_, 2);
lean_dec_ref_known(v___x_2350_, 1);
v___x_2352_ = l_Lean_Expr_app___override(v___x_2281_, v_a_2351_);
v___x_2353_ = l_Lean_Meta_isExprDefEqGuarded(v_arg_2334_, v___x_2352_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
if (lean_obj_tag(v___x_2353_) == 0)
{
lean_object* v_a_2354_; lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2457_; 
v_a_2354_ = lean_ctor_get(v___x_2353_, 0);
v_isSharedCheck_2457_ = !lean_is_exclusive(v___x_2353_);
if (v_isSharedCheck_2457_ == 0)
{
v___x_2356_ = v___x_2353_;
v_isShared_2357_ = v_isSharedCheck_2457_;
goto v_resetjp_2355_;
}
else
{
lean_inc(v_a_2354_);
lean_dec(v___x_2353_);
v___x_2356_ = lean_box(0);
v_isShared_2357_ = v_isSharedCheck_2457_;
goto v_resetjp_2355_;
}
v_resetjp_2355_:
{
uint8_t v___x_2358_; 
v___x_2358_ = lean_unbox(v_a_2354_);
lean_dec(v_a_2354_);
if (v___x_2358_ == 0)
{
lean_object* v___x_2359_; lean_object* v___x_2361_; 
lean_dec(v_a_2351_);
lean_dec_ref(v_arg_2331_);
lean_dec_ref(v_arg_2328_);
lean_dec(v_fst_2308_);
lean_dec(v_fst_2307_);
v___x_2359_ = lean_box(0);
if (v_isShared_2357_ == 0)
{
lean_ctor_set(v___x_2356_, 0, v___x_2359_);
v___x_2361_ = v___x_2356_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2362_; 
v_reuseFailAlloc_2362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2362_, 0, v___x_2359_);
v___x_2361_ = v_reuseFailAlloc_2362_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
return v___x_2361_;
}
}
else
{
lean_object* v___x_2363_; size_t v_sz_2364_; size_t v___x_2365_; lean_object* v___x_2366_; 
lean_del_object(v___x_2356_);
v___x_2363_ = lean_box(0);
v_sz_2364_ = lean_array_size(v_fst_2307_);
v___x_2365_ = ((size_t)0ULL);
v___x_2366_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__3(v_fst_2307_, v_sz_2364_, v___x_2365_, v___x_2363_, v_a_2241_, v_a_2242_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
lean_dec(v_fst_2307_);
if (lean_obj_tag(v___x_2366_) == 0)
{
lean_object* v_a_2367_; lean_object* v___x_2369_; uint8_t v_isShared_2370_; uint8_t v_isSharedCheck_2448_; 
v_a_2367_ = lean_ctor_get(v___x_2366_, 0);
v_isSharedCheck_2448_ = !lean_is_exclusive(v___x_2366_);
if (v_isSharedCheck_2448_ == 0)
{
v___x_2369_ = v___x_2366_;
v_isShared_2370_ = v_isSharedCheck_2448_;
goto v_resetjp_2368_;
}
else
{
lean_inc(v_a_2367_);
lean_dec(v___x_2366_);
v___x_2369_ = lean_box(0);
v_isShared_2370_ = v_isSharedCheck_2448_;
goto v_resetjp_2368_;
}
v_resetjp_2368_:
{
if (lean_obj_tag(v_a_2367_) == 0)
{
lean_object* v___x_2371_; lean_object* v___x_2373_; 
lean_dec(v_a_2351_);
lean_dec_ref(v_arg_2331_);
lean_dec_ref(v_arg_2328_);
lean_dec(v_fst_2308_);
v___x_2371_ = lean_box(0);
if (v_isShared_2370_ == 0)
{
lean_ctor_set(v___x_2369_, 0, v___x_2371_);
v___x_2373_ = v___x_2369_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v___x_2371_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
return v___x_2373_;
}
}
else
{
lean_object* v___f_2375_; lean_object* v___f_2376_; uint8_t v___x_2377_; lean_object* v___x_2378_; 
lean_dec_ref_known(v_a_2367_, 1);
lean_del_object(v___x_2369_);
v___f_2375_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__8));
v___f_2376_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__9));
v___x_2377_ = 0;
v___x_2378_ = l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4(v_arg_2328_, v___f_2375_, v___f_2376_, v___x_2377_, v___x_2377_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
if (lean_obj_tag(v___x_2378_) == 0)
{
lean_object* v_a_2379_; lean_object* v_excessArgs_2380_; lean_object* v___x_2381_; size_t v_sz_2382_; lean_object* v___x_2383_; 
v_a_2379_ = lean_ctor_get(v___x_2378_, 0);
lean_inc(v_a_2379_);
lean_dec_ref_known(v___x_2378_, 1);
v_excessArgs_2380_ = lean_ctor_get(v_info_2240_, 2);
v___x_2381_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7___lam__1___closed__0));
v_sz_2382_ = lean_array_size(v_excessArgs_2380_);
v___x_2383_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__5___redArg(v_excessArgs_2380_, v_sz_2382_, v___x_2365_, v___x_2381_, v_a_2242_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
if (lean_obj_tag(v___x_2383_) == 0)
{
lean_object* v_a_2384_; lean_object* v___x_2386_; uint8_t v_isShared_2387_; uint8_t v_isSharedCheck_2431_; 
v_a_2384_ = lean_ctor_get(v___x_2383_, 0);
v_isSharedCheck_2431_ = !lean_is_exclusive(v___x_2383_);
if (v_isSharedCheck_2431_ == 0)
{
v___x_2386_ = v___x_2383_;
v_isShared_2387_ = v_isSharedCheck_2431_;
goto v_resetjp_2385_;
}
else
{
lean_inc(v_a_2384_);
lean_dec(v___x_2383_);
v___x_2386_ = lean_box(0);
v_isShared_2387_ = v_isSharedCheck_2431_;
goto v_resetjp_2385_;
}
v_resetjp_2385_:
{
if (lean_obj_tag(v_a_2384_) == 0)
{
lean_object* v___x_2388_; lean_object* v___x_2390_; 
lean_dec(v_a_2379_);
lean_dec(v_a_2351_);
lean_dec_ref(v_arg_2331_);
lean_dec(v_fst_2308_);
v___x_2388_ = lean_box(0);
if (v_isShared_2387_ == 0)
{
lean_ctor_set(v___x_2386_, 0, v___x_2388_);
v___x_2390_ = v___x_2386_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v___x_2388_);
v___x_2390_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
return v___x_2390_;
}
}
else
{
lean_object* v_val_2392_; lean_object* v___x_2394_; uint8_t v_isShared_2395_; uint8_t v_isSharedCheck_2430_; 
lean_del_object(v___x_2386_);
v_val_2392_ = lean_ctor_get(v_a_2384_, 0);
v_isSharedCheck_2430_ = !lean_is_exclusive(v_a_2384_);
if (v_isSharedCheck_2430_ == 0)
{
v___x_2394_ = v_a_2384_;
v_isShared_2395_ = v_isSharedCheck_2430_;
goto v_resetjp_2393_;
}
else
{
lean_inc(v_val_2392_);
lean_dec(v_a_2384_);
v___x_2394_ = lean_box(0);
v_isShared_2395_ = v_isSharedCheck_2430_;
goto v_resetjp_2393_;
}
v_resetjp_2393_:
{
lean_object* v___x_2396_; 
v___x_2396_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkSimpBackwardProof___redArg(v_info_2240_, v_a_2351_, v_arg_2331_, v_a_2379_, v_fst_2308_, v_val_2392_, v_a_2241_, v_a_2242_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
if (lean_obj_tag(v___x_2396_) == 0)
{
lean_object* v_a_2397_; lean_object* v_paramNames_2398_; lean_object* v_expr_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; 
v_a_2397_ = lean_ctor_get(v___x_2396_, 0);
lean_inc(v_a_2397_);
lean_dec_ref_known(v___x_2396_, 1);
v_paramNames_2398_ = lean_ctor_get(v_a_2397_, 0);
lean_inc_ref(v_paramNames_2398_);
v_expr_2399_ = lean_ctor_get(v_a_2397_, 2);
lean_inc_ref(v_expr_2399_);
lean_dec(v_a_2397_);
v___x_2400_ = lean_array_to_list(v_paramNames_2398_);
v___x_2401_ = lean_box(0);
v___x_2402_ = l_Lean_Meta_Sym_mkBackwardRuleFromExpr(v_expr_2399_, v___x_2400_, v___x_2401_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
if (lean_obj_tag(v___x_2402_) == 0)
{
lean_object* v_a_2403_; lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2413_; 
v_a_2403_ = lean_ctor_get(v___x_2402_, 0);
v_isSharedCheck_2413_ = !lean_is_exclusive(v___x_2402_);
if (v_isSharedCheck_2413_ == 0)
{
v___x_2405_ = v___x_2402_;
v_isShared_2406_ = v_isSharedCheck_2413_;
goto v_resetjp_2404_;
}
else
{
lean_inc(v_a_2403_);
lean_dec(v___x_2402_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2413_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
lean_object* v___x_2408_; 
if (v_isShared_2395_ == 0)
{
lean_ctor_set(v___x_2394_, 0, v_a_2403_);
v___x_2408_ = v___x_2394_;
goto v_reusejp_2407_;
}
else
{
lean_object* v_reuseFailAlloc_2412_; 
v_reuseFailAlloc_2412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2412_, 0, v_a_2403_);
v___x_2408_ = v_reuseFailAlloc_2412_;
goto v_reusejp_2407_;
}
v_reusejp_2407_:
{
lean_object* v___x_2410_; 
if (v_isShared_2406_ == 0)
{
lean_ctor_set(v___x_2405_, 0, v___x_2408_);
v___x_2410_ = v___x_2405_;
goto v_reusejp_2409_;
}
else
{
lean_object* v_reuseFailAlloc_2411_; 
v_reuseFailAlloc_2411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2411_, 0, v___x_2408_);
v___x_2410_ = v_reuseFailAlloc_2411_;
goto v_reusejp_2409_;
}
v_reusejp_2409_:
{
return v___x_2410_;
}
}
}
}
else
{
lean_object* v_a_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2421_; 
lean_del_object(v___x_2394_);
v_a_2414_ = lean_ctor_get(v___x_2402_, 0);
v_isSharedCheck_2421_ = !lean_is_exclusive(v___x_2402_);
if (v_isSharedCheck_2421_ == 0)
{
v___x_2416_ = v___x_2402_;
v_isShared_2417_ = v_isSharedCheck_2421_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_a_2414_);
lean_dec(v___x_2402_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2421_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
lean_object* v___x_2419_; 
if (v_isShared_2417_ == 0)
{
v___x_2419_ = v___x_2416_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v_a_2414_);
v___x_2419_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
return v___x_2419_;
}
}
}
}
else
{
lean_object* v_a_2422_; lean_object* v___x_2424_; uint8_t v_isShared_2425_; uint8_t v_isSharedCheck_2429_; 
lean_del_object(v___x_2394_);
v_a_2422_ = lean_ctor_get(v___x_2396_, 0);
v_isSharedCheck_2429_ = !lean_is_exclusive(v___x_2396_);
if (v_isSharedCheck_2429_ == 0)
{
v___x_2424_ = v___x_2396_;
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
else
{
lean_inc(v_a_2422_);
lean_dec(v___x_2396_);
v___x_2424_ = lean_box(0);
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
v_resetjp_2423_:
{
lean_object* v___x_2427_; 
if (v_isShared_2425_ == 0)
{
v___x_2427_ = v___x_2424_;
goto v_reusejp_2426_;
}
else
{
lean_object* v_reuseFailAlloc_2428_; 
v_reuseFailAlloc_2428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2428_, 0, v_a_2422_);
v___x_2427_ = v_reuseFailAlloc_2428_;
goto v_reusejp_2426_;
}
v_reusejp_2426_:
{
return v___x_2427_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2432_; lean_object* v___x_2434_; uint8_t v_isShared_2435_; uint8_t v_isSharedCheck_2439_; 
lean_dec(v_a_2379_);
lean_dec(v_a_2351_);
lean_dec_ref(v_arg_2331_);
lean_dec(v_fst_2308_);
v_a_2432_ = lean_ctor_get(v___x_2383_, 0);
v_isSharedCheck_2439_ = !lean_is_exclusive(v___x_2383_);
if (v_isSharedCheck_2439_ == 0)
{
v___x_2434_ = v___x_2383_;
v_isShared_2435_ = v_isSharedCheck_2439_;
goto v_resetjp_2433_;
}
else
{
lean_inc(v_a_2432_);
lean_dec(v___x_2383_);
v___x_2434_ = lean_box(0);
v_isShared_2435_ = v_isSharedCheck_2439_;
goto v_resetjp_2433_;
}
v_resetjp_2433_:
{
lean_object* v___x_2437_; 
if (v_isShared_2435_ == 0)
{
v___x_2437_ = v___x_2434_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v_a_2432_);
v___x_2437_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
return v___x_2437_;
}
}
}
}
else
{
lean_object* v_a_2440_; lean_object* v___x_2442_; uint8_t v_isShared_2443_; uint8_t v_isSharedCheck_2447_; 
lean_dec(v_a_2351_);
lean_dec_ref(v_arg_2331_);
lean_dec(v_fst_2308_);
v_a_2440_ = lean_ctor_get(v___x_2378_, 0);
v_isSharedCheck_2447_ = !lean_is_exclusive(v___x_2378_);
if (v_isSharedCheck_2447_ == 0)
{
v___x_2442_ = v___x_2378_;
v_isShared_2443_ = v_isSharedCheck_2447_;
goto v_resetjp_2441_;
}
else
{
lean_inc(v_a_2440_);
lean_dec(v___x_2378_);
v___x_2442_ = lean_box(0);
v_isShared_2443_ = v_isSharedCheck_2447_;
goto v_resetjp_2441_;
}
v_resetjp_2441_:
{
lean_object* v___x_2445_; 
if (v_isShared_2443_ == 0)
{
v___x_2445_ = v___x_2442_;
goto v_reusejp_2444_;
}
else
{
lean_object* v_reuseFailAlloc_2446_; 
v_reuseFailAlloc_2446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2446_, 0, v_a_2440_);
v___x_2445_ = v_reuseFailAlloc_2446_;
goto v_reusejp_2444_;
}
v_reusejp_2444_:
{
return v___x_2445_;
}
}
}
}
}
}
else
{
lean_object* v_a_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2456_; 
lean_dec(v_a_2351_);
lean_dec_ref(v_arg_2331_);
lean_dec_ref(v_arg_2328_);
lean_dec(v_fst_2308_);
v_a_2449_ = lean_ctor_get(v___x_2366_, 0);
v_isSharedCheck_2456_ = !lean_is_exclusive(v___x_2366_);
if (v_isSharedCheck_2456_ == 0)
{
v___x_2451_ = v___x_2366_;
v_isShared_2452_ = v_isSharedCheck_2456_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_a_2449_);
lean_dec(v___x_2366_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2456_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
lean_object* v___x_2454_; 
if (v_isShared_2452_ == 0)
{
v___x_2454_ = v___x_2451_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2455_; 
v_reuseFailAlloc_2455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2455_, 0, v_a_2449_);
v___x_2454_ = v_reuseFailAlloc_2455_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
return v___x_2454_;
}
}
}
}
}
}
else
{
lean_object* v_a_2458_; lean_object* v___x_2460_; uint8_t v_isShared_2461_; uint8_t v_isSharedCheck_2465_; 
lean_dec(v_a_2351_);
lean_dec_ref(v_arg_2331_);
lean_dec_ref(v_arg_2328_);
lean_dec(v_fst_2308_);
lean_dec(v_fst_2307_);
v_a_2458_ = lean_ctor_get(v___x_2353_, 0);
v_isSharedCheck_2465_ = !lean_is_exclusive(v___x_2353_);
if (v_isSharedCheck_2465_ == 0)
{
v___x_2460_ = v___x_2353_;
v_isShared_2461_ = v_isSharedCheck_2465_;
goto v_resetjp_2459_;
}
else
{
lean_inc(v_a_2458_);
lean_dec(v___x_2353_);
v___x_2460_ = lean_box(0);
v_isShared_2461_ = v_isSharedCheck_2465_;
goto v_resetjp_2459_;
}
v_resetjp_2459_:
{
lean_object* v___x_2463_; 
if (v_isShared_2461_ == 0)
{
v___x_2463_ = v___x_2460_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v_a_2458_);
v___x_2463_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
return v___x_2463_;
}
}
}
}
else
{
lean_object* v_a_2466_; lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2473_; 
lean_dec_ref(v_arg_2334_);
lean_dec_ref(v_arg_2331_);
lean_dec_ref(v_arg_2328_);
lean_dec(v_fst_2308_);
lean_dec(v_fst_2307_);
lean_dec_ref(v___x_2281_);
v_a_2466_ = lean_ctor_get(v___x_2350_, 0);
v_isSharedCheck_2473_ = !lean_is_exclusive(v___x_2350_);
if (v_isSharedCheck_2473_ == 0)
{
v___x_2468_ = v___x_2350_;
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
else
{
lean_inc(v_a_2466_);
lean_dec(v___x_2350_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
lean_object* v___x_2471_; 
if (v_isShared_2469_ == 0)
{
v___x_2471_ = v___x_2468_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2472_; 
v_reuseFailAlloc_2472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2472_, 0, v_a_2466_);
v___x_2471_ = v_reuseFailAlloc_2472_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
return v___x_2471_;
}
}
}
}
else
{
lean_object* v_a_2474_; lean_object* v___x_2476_; uint8_t v_isShared_2477_; uint8_t v_isSharedCheck_2481_; 
lean_dec_ref(v_arg_2334_);
lean_dec_ref(v_arg_2331_);
lean_dec_ref(v_arg_2328_);
lean_dec(v_fst_2308_);
lean_dec(v_fst_2307_);
lean_dec_ref(v___x_2281_);
v_a_2474_ = lean_ctor_get(v___x_2338_, 0);
v_isSharedCheck_2481_ = !lean_is_exclusive(v___x_2338_);
if (v_isSharedCheck_2481_ == 0)
{
v___x_2476_ = v___x_2338_;
v_isShared_2477_ = v_isSharedCheck_2481_;
goto v_resetjp_2475_;
}
else
{
lean_inc(v_a_2474_);
lean_dec(v___x_2338_);
v___x_2476_ = lean_box(0);
v_isShared_2477_ = v_isSharedCheck_2481_;
goto v_resetjp_2475_;
}
v_resetjp_2475_:
{
lean_object* v___x_2479_; 
if (v_isShared_2477_ == 0)
{
v___x_2479_ = v___x_2476_;
goto v_reusejp_2478_;
}
else
{
lean_object* v_reuseFailAlloc_2480_; 
v_reuseFailAlloc_2480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2480_, 0, v_a_2474_);
v___x_2479_ = v_reuseFailAlloc_2480_;
goto v_reusejp_2478_;
}
v_reusejp_2478_:
{
return v___x_2479_;
}
}
}
}
}
}
}
v___jp_2313_:
{
lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2323_; 
v___x_2320_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__5, &l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__5_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__5);
v___x_2321_ = l_Lean_MessageData_ofExpr(v_snd_2309_);
if (v_isShared_2312_ == 0)
{
lean_ctor_set_tag(v___x_2311_, 7);
lean_ctor_set(v___x_2311_, 1, v___x_2321_);
lean_ctor_set(v___x_2311_, 0, v___x_2320_);
v___x_2323_ = v___x_2311_;
goto v_reusejp_2322_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v___x_2320_);
lean_ctor_set(v_reuseFailAlloc_2325_, 1, v___x_2321_);
v___x_2323_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2322_;
}
v_reusejp_2322_:
{
lean_object* v___x_2324_; 
v___x_2324_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__0___redArg(v___x_2323_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_);
return v___x_2324_;
}
}
}
}
else
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2490_; 
lean_dec_ref(v___x_2281_);
lean_dec_ref(v___x_2248_);
v_a_2483_ = lean_ctor_get(v___x_2303_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2303_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2485_ = v___x_2303_;
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2303_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2488_; 
if (v_isShared_2486_ == 0)
{
v___x_2488_ = v___x_2485_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_a_2483_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
return v___x_2488_;
}
}
}
}
}
}
else
{
lean_object* v_a_2492_; lean_object* v___x_2494_; uint8_t v_isShared_2495_; uint8_t v_isSharedCheck_2499_; 
lean_dec_ref(v___x_2281_);
lean_dec_ref(v___x_2248_);
lean_dec_ref(v_specThm_2239_);
v_a_2492_ = lean_ctor_get(v___x_2293_, 0);
v_isSharedCheck_2499_ = !lean_is_exclusive(v___x_2293_);
if (v_isSharedCheck_2499_ == 0)
{
v___x_2494_ = v___x_2293_;
v_isShared_2495_ = v_isSharedCheck_2499_;
goto v_resetjp_2493_;
}
else
{
lean_inc(v_a_2492_);
lean_dec(v___x_2293_);
v___x_2494_ = lean_box(0);
v_isShared_2495_ = v_isSharedCheck_2499_;
goto v_resetjp_2493_;
}
v_resetjp_2493_:
{
lean_object* v___x_2497_; 
if (v_isShared_2495_ == 0)
{
v___x_2497_ = v___x_2494_;
goto v_reusejp_2496_;
}
else
{
lean_object* v_reuseFailAlloc_2498_; 
v_reuseFailAlloc_2498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2498_, 0, v_a_2492_);
v___x_2497_ = v_reuseFailAlloc_2498_;
goto v_reusejp_2496_;
}
v_reusejp_2496_:
{
return v___x_2497_;
}
}
}
}
}
}
else
{
lean_object* v_a_2501_; lean_object* v___x_2503_; uint8_t v_isShared_2504_; uint8_t v_isSharedCheck_2508_; 
lean_dec_ref(v___x_2281_);
lean_dec_ref(v_arg_2274_);
lean_dec_ref(v___x_2248_);
lean_dec_ref(v_specThm_2239_);
v_a_2501_ = lean_ctor_get(v___x_2282_, 0);
v_isSharedCheck_2508_ = !lean_is_exclusive(v___x_2282_);
if (v_isSharedCheck_2508_ == 0)
{
v___x_2503_ = v___x_2282_;
v_isShared_2504_ = v_isSharedCheck_2508_;
goto v_resetjp_2502_;
}
else
{
lean_inc(v_a_2501_);
lean_dec(v___x_2282_);
v___x_2503_ = lean_box(0);
v_isShared_2504_ = v_isSharedCheck_2508_;
goto v_resetjp_2502_;
}
v_resetjp_2502_:
{
lean_object* v___x_2506_; 
if (v_isShared_2504_ == 0)
{
v___x_2506_ = v___x_2503_;
goto v_reusejp_2505_;
}
else
{
lean_object* v_reuseFailAlloc_2507_; 
v_reuseFailAlloc_2507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2507_, 0, v_a_2501_);
v___x_2506_ = v_reuseFailAlloc_2507_;
goto v_reusejp_2505_;
}
v_reusejp_2505_:
{
return v___x_2506_;
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
v___jp_2253_:
{
lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; 
v___x_2260_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___closed__1);
v___x_2261_ = l_Lean_MessageData_ofExpr(v_a_2252_);
v___x_2262_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2262_, 0, v___x_2260_);
lean_ctor_set(v___x_2262_, 1, v___x_2261_);
v___x_2263_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__0___redArg(v___x_2262_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_);
return v___x_2263_;
}
}
else
{
lean_object* v_a_2509_; lean_object* v___x_2511_; uint8_t v_isShared_2512_; uint8_t v_isSharedCheck_2516_; 
lean_dec_ref(v___x_2248_);
lean_dec_ref(v_specThm_2239_);
v_a_2509_ = lean_ctor_get(v___x_2251_, 0);
v_isSharedCheck_2516_ = !lean_is_exclusive(v___x_2251_);
if (v_isSharedCheck_2516_ == 0)
{
v___x_2511_ = v___x_2251_;
v_isShared_2512_ = v_isSharedCheck_2516_;
goto v_resetjp_2510_;
}
else
{
lean_inc(v_a_2509_);
lean_dec(v___x_2251_);
v___x_2511_ = lean_box(0);
v_isShared_2512_ = v_isSharedCheck_2516_;
goto v_resetjp_2510_;
}
v_resetjp_2510_:
{
lean_object* v___x_2514_; 
if (v_isShared_2512_ == 0)
{
v___x_2514_ = v___x_2511_;
goto v_reusejp_2513_;
}
else
{
lean_object* v_reuseFailAlloc_2515_; 
v_reuseFailAlloc_2515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2515_, 0, v_a_2509_);
v___x_2514_ = v_reuseFailAlloc_2515_;
goto v_reusejp_2513_;
}
v_reusejp_2513_:
{
return v___x_2514_;
}
}
}
}
else
{
lean_object* v_a_2517_; lean_object* v___x_2519_; uint8_t v_isShared_2520_; uint8_t v_isSharedCheck_2524_; 
lean_dec_ref(v___x_2248_);
lean_dec_ref(v_specThm_2239_);
v_a_2517_ = lean_ctor_get(v___x_2249_, 0);
v_isSharedCheck_2524_ = !lean_is_exclusive(v___x_2249_);
if (v_isSharedCheck_2524_ == 0)
{
v___x_2519_ = v___x_2249_;
v_isShared_2520_ = v_isSharedCheck_2524_;
goto v_resetjp_2518_;
}
else
{
lean_inc(v_a_2517_);
lean_dec(v___x_2249_);
v___x_2519_ = lean_box(0);
v_isShared_2520_ = v_isSharedCheck_2524_;
goto v_resetjp_2518_;
}
v_resetjp_2518_:
{
lean_object* v___x_2522_; 
if (v_isShared_2520_ == 0)
{
v___x_2522_ = v___x_2519_;
goto v_reusejp_2521_;
}
else
{
lean_object* v_reuseFailAlloc_2523_; 
v_reuseFailAlloc_2523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2523_, 0, v_a_2517_);
v___x_2522_ = v_reuseFailAlloc_2523_;
goto v_reusejp_2521_;
}
v_reusejp_2521_:
{
return v___x_2522_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp___boxed(lean_object* v_specThm_2525_, lean_object* v_info_2526_, lean_object* v_a_2527_, lean_object* v_a_2528_, lean_object* v_a_2529_, lean_object* v_a_2530_, lean_object* v_a_2531_, lean_object* v_a_2532_, lean_object* v_a_2533_){
_start:
{
lean_object* v_res_2534_; 
v_res_2534_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp(v_specThm_2525_, v_info_2526_, v_a_2527_, v_a_2528_, v_a_2529_, v_a_2530_, v_a_2531_, v_a_2532_);
lean_dec(v_a_2532_);
lean_dec_ref(v_a_2531_);
lean_dec(v_a_2530_);
lean_dec_ref(v_a_2529_);
lean_dec(v_a_2528_);
lean_dec_ref(v_a_2527_);
lean_dec_ref(v_info_2526_);
return v_res_2534_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__0(lean_object* v_00_u03b1_2535_, lean_object* v_msg_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_){
_start:
{
lean_object* v___x_2544_; 
v___x_2544_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__0___redArg(v_msg_2536_, v___y_2539_, v___y_2540_, v___y_2541_, v___y_2542_);
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__0___boxed(lean_object* v_00_u03b1_2545_, lean_object* v_msg_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_){
_start:
{
lean_object* v_res_2554_; 
v_res_2554_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__0(v_00_u03b1_2545_, v_msg_2546_, v___y_2547_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_);
lean_dec(v___y_2552_);
lean_dec_ref(v___y_2551_);
lean_dec(v___y_2550_);
lean_dec_ref(v___y_2549_);
lean_dec(v___y_2548_);
lean_dec_ref(v___y_2547_);
return v_res_2554_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1(lean_object* v_mvarId_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_){
_start:
{
lean_object* v___x_2563_; 
v___x_2563_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1___redArg(v_mvarId_2555_, v___y_2559_);
return v___x_2563_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1___boxed(lean_object* v_mvarId_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_){
_start:
{
lean_object* v_res_2572_; 
v_res_2572_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1(v_mvarId_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, v___y_2569_, v___y_2570_);
lean_dec(v___y_2570_);
lean_dec_ref(v___y_2569_);
lean_dec(v___y_2568_);
lean_dec_ref(v___y_2567_);
lean_dec(v___y_2566_);
lean_dec_ref(v___y_2565_);
lean_dec(v_mvarId_2564_);
return v_res_2572_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2(lean_object* v_mvarId_2573_, lean_object* v_val_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_){
_start:
{
lean_object* v___x_2582_; 
v___x_2582_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2___redArg(v_mvarId_2573_, v_val_2574_, v___y_2578_);
return v___x_2582_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2___boxed(lean_object* v_mvarId_2583_, lean_object* v_val_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_){
_start:
{
lean_object* v_res_2592_; 
v_res_2592_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2(v_mvarId_2583_, v_val_2584_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_);
lean_dec(v___y_2590_);
lean_dec_ref(v___y_2589_);
lean_dec(v___y_2588_);
lean_dec_ref(v___y_2587_);
lean_dec(v___y_2586_);
lean_dec_ref(v___y_2585_);
return v_res_2592_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__5(lean_object* v_as_2593_, size_t v_sz_2594_, size_t v_i_2595_, lean_object* v_b_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_){
_start:
{
lean_object* v___x_2604_; 
v___x_2604_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__5___redArg(v_as_2593_, v_sz_2594_, v_i_2595_, v_b_2596_, v___y_2598_, v___y_2599_, v___y_2600_, v___y_2601_, v___y_2602_);
return v___x_2604_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__5___boxed(lean_object* v_as_2605_, lean_object* v_sz_2606_, lean_object* v_i_2607_, lean_object* v_b_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_){
_start:
{
size_t v_sz_boxed_2616_; size_t v_i_boxed_2617_; lean_object* v_res_2618_; 
v_sz_boxed_2616_ = lean_unbox_usize(v_sz_2606_);
lean_dec(v_sz_2606_);
v_i_boxed_2617_ = lean_unbox_usize(v_i_2607_);
lean_dec(v_i_2607_);
v_res_2618_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__5(v_as_2605_, v_sz_boxed_2616_, v_i_boxed_2617_, v_b_2608_, v___y_2609_, v___y_2610_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_);
lean_dec(v___y_2614_);
lean_dec_ref(v___y_2613_);
lean_dec(v___y_2612_);
lean_dec_ref(v___y_2611_);
lean_dec(v___y_2610_);
lean_dec_ref(v___y_2609_);
lean_dec_ref(v_as_2605_);
return v_res_2618_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2(lean_object* v_00_u03b2_2619_, lean_object* v_x_2620_, lean_object* v_x_2621_){
_start:
{
uint8_t v___x_2622_; 
v___x_2622_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2___redArg(v_x_2620_, v_x_2621_);
return v___x_2622_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2623_, lean_object* v_x_2624_, lean_object* v_x_2625_){
_start:
{
uint8_t v_res_2626_; lean_object* v_r_2627_; 
v_res_2626_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2(v_00_u03b2_2623_, v_x_2624_, v_x_2625_);
lean_dec(v_x_2625_);
lean_dec_ref(v_x_2624_);
v_r_2627_ = lean_box(v_res_2626_);
return v_r_2627_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4(lean_object* v_00_u03b2_2628_, lean_object* v_x_2629_, lean_object* v_x_2630_, lean_object* v_x_2631_){
_start:
{
lean_object* v___x_2632_; 
v___x_2632_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4___redArg(v_x_2629_, v_x_2630_, v_x_2631_);
return v___x_2632_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_2633_, lean_object* v_x_2634_, size_t v_x_2635_, lean_object* v_x_2636_){
_start:
{
uint8_t v___x_2637_; 
v___x_2637_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3___redArg(v_x_2634_, v_x_2635_, v_x_2636_);
return v___x_2637_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3___boxed(lean_object* v_00_u03b2_2638_, lean_object* v_x_2639_, lean_object* v_x_2640_, lean_object* v_x_2641_){
_start:
{
size_t v_x_165524__boxed_2642_; uint8_t v_res_2643_; lean_object* v_r_2644_; 
v_x_165524__boxed_2642_ = lean_unbox_usize(v_x_2640_);
lean_dec(v_x_2640_);
v_res_2643_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3(v_00_u03b2_2638_, v_x_2639_, v_x_165524__boxed_2642_, v_x_2641_);
lean_dec(v_x_2641_);
lean_dec_ref(v_x_2639_);
v_r_2644_ = lean_box(v_res_2643_);
return v_r_2644_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6(lean_object* v_00_u03b2_2645_, lean_object* v_x_2646_, size_t v_x_2647_, size_t v_x_2648_, lean_object* v_x_2649_, lean_object* v_x_2650_){
_start:
{
lean_object* v___x_2651_; 
v___x_2651_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___redArg(v_x_2646_, v_x_2647_, v_x_2648_, v_x_2649_, v_x_2650_);
return v___x_2651_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6___boxed(lean_object* v_00_u03b2_2652_, lean_object* v_x_2653_, lean_object* v_x_2654_, lean_object* v_x_2655_, lean_object* v_x_2656_, lean_object* v_x_2657_){
_start:
{
size_t v_x_165535__boxed_2658_; size_t v_x_165536__boxed_2659_; lean_object* v_res_2660_; 
v_x_165535__boxed_2658_ = lean_unbox_usize(v_x_2654_);
lean_dec(v_x_2654_);
v_x_165536__boxed_2659_ = lean_unbox_usize(v_x_2655_);
lean_dec(v_x_2655_);
v_res_2660_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6(v_00_u03b2_2652_, v_x_2653_, v_x_165535__boxed_2658_, v_x_165536__boxed_2659_, v_x_2656_, v_x_2657_);
return v_res_2660_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12(lean_object* v_upperBound_2661_, lean_object* v___x_2662_, lean_object* v_pre_2663_, lean_object* v_post_2664_, uint8_t v_usedLetOnly_2665_, uint8_t v_skipConstInApp_2666_, uint8_t v_skipInstances_2667_, lean_object* v___x_2668_, lean_object* v_inst_2669_, lean_object* v_R_2670_, lean_object* v_a_2671_, lean_object* v_b_2672_, lean_object* v_c_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_){
_start:
{
lean_object* v___x_2680_; 
v___x_2680_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12___redArg(v_upperBound_2661_, v___x_2662_, v_pre_2663_, v_post_2664_, v_usedLetOnly_2665_, v_skipConstInApp_2666_, v_skipInstances_2667_, v_a_2671_, v_b_2672_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_);
return v___x_2680_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12___boxed(lean_object** _args){
lean_object* v_upperBound_2681_ = _args[0];
lean_object* v___x_2682_ = _args[1];
lean_object* v_pre_2683_ = _args[2];
lean_object* v_post_2684_ = _args[3];
lean_object* v_usedLetOnly_2685_ = _args[4];
lean_object* v_skipConstInApp_2686_ = _args[5];
lean_object* v_skipInstances_2687_ = _args[6];
lean_object* v___x_2688_ = _args[7];
lean_object* v_inst_2689_ = _args[8];
lean_object* v_R_2690_ = _args[9];
lean_object* v_a_2691_ = _args[10];
lean_object* v_b_2692_ = _args[11];
lean_object* v_c_2693_ = _args[12];
lean_object* v___y_2694_ = _args[13];
lean_object* v___y_2695_ = _args[14];
lean_object* v___y_2696_ = _args[15];
lean_object* v___y_2697_ = _args[16];
lean_object* v___y_2698_ = _args[17];
lean_object* v___y_2699_ = _args[18];
_start:
{
uint8_t v_usedLetOnly_boxed_2700_; uint8_t v_skipConstInApp_boxed_2701_; uint8_t v_skipInstances_boxed_2702_; lean_object* v_res_2703_; 
v_usedLetOnly_boxed_2700_ = lean_unbox(v_usedLetOnly_2685_);
v_skipConstInApp_boxed_2701_ = lean_unbox(v_skipConstInApp_2686_);
v_skipInstances_boxed_2702_ = lean_unbox(v_skipInstances_2687_);
v_res_2703_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__12(v_upperBound_2681_, v___x_2682_, v_pre_2683_, v_post_2684_, v_usedLetOnly_boxed_2700_, v_skipConstInApp_boxed_2701_, v_skipInstances_boxed_2702_, v___x_2688_, v_inst_2689_, v_R_2690_, v_a_2691_, v_b_2692_, v_c_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_);
lean_dec(v___y_2698_);
lean_dec_ref(v___y_2697_);
lean_dec(v___y_2696_);
lean_dec_ref(v___y_2695_);
lean_dec(v___y_2694_);
lean_dec(v___x_2688_);
lean_dec_ref(v___x_2682_);
lean_dec(v_upperBound_2681_);
return v_res_2703_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13(lean_object* v_00_u03b2_2704_, lean_object* v_m_2705_, lean_object* v_a_2706_){
_start:
{
lean_object* v___x_2707_; 
v___x_2707_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13___redArg(v_m_2705_, v_a_2706_);
return v___x_2707_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13___boxed(lean_object* v_00_u03b2_2708_, lean_object* v_m_2709_, lean_object* v_a_2710_){
_start:
{
lean_object* v_res_2711_; 
v_res_2711_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13(v_00_u03b2_2708_, v_m_2709_, v_a_2710_);
lean_dec_ref(v_a_2710_);
lean_dec_ref(v_m_2709_);
return v_res_2711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14_spec__20(lean_object* v_00_u03b1_2712_, lean_object* v_name_2713_, uint8_t v_bi_2714_, lean_object* v_type_2715_, lean_object* v_k_2716_, uint8_t v_kind_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_){
_start:
{
lean_object* v___x_2724_; 
v___x_2724_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14_spec__20___redArg(v_name_2713_, v_bi_2714_, v_type_2715_, v_k_2716_, v_kind_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_);
return v___x_2724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14_spec__20___boxed(lean_object* v_00_u03b1_2725_, lean_object* v_name_2726_, lean_object* v_bi_2727_, lean_object* v_type_2728_, lean_object* v_k_2729_, lean_object* v_kind_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_){
_start:
{
uint8_t v_bi_boxed_2737_; uint8_t v_kind_boxed_2738_; lean_object* v_res_2739_; 
v_bi_boxed_2737_ = lean_unbox(v_bi_2727_);
v_kind_boxed_2738_ = lean_unbox(v_kind_2730_);
v_res_2739_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__14_spec__20(v_00_u03b1_2725_, v_name_2726_, v_bi_boxed_2737_, v_type_2728_, v_k_2729_, v_kind_boxed_2738_, v___y_2731_, v___y_2732_, v___y_2733_, v___y_2734_, v___y_2735_);
lean_dec(v___y_2735_);
lean_dec_ref(v___y_2734_);
lean_dec(v___y_2733_);
lean_dec_ref(v___y_2732_);
lean_dec(v___y_2731_);
return v_res_2739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16_spec__23(lean_object* v_00_u03b1_2740_, lean_object* v_name_2741_, lean_object* v_type_2742_, lean_object* v_val_2743_, lean_object* v_k_2744_, uint8_t v_nondep_2745_, uint8_t v_kind_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_){
_start:
{
lean_object* v___x_2753_; 
v___x_2753_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16_spec__23___redArg(v_name_2741_, v_type_2742_, v_val_2743_, v_k_2744_, v_nondep_2745_, v_kind_2746_, v___y_2747_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_);
return v___x_2753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16_spec__23___boxed(lean_object* v_00_u03b1_2754_, lean_object* v_name_2755_, lean_object* v_type_2756_, lean_object* v_val_2757_, lean_object* v_k_2758_, lean_object* v_nondep_2759_, lean_object* v_kind_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_){
_start:
{
uint8_t v_nondep_boxed_2767_; uint8_t v_kind_boxed_2768_; lean_object* v_res_2769_; 
v_nondep_boxed_2767_ = lean_unbox(v_nondep_2759_);
v_kind_boxed_2768_ = lean_unbox(v_kind_2760_);
v_res_2769_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__16_spec__23(v_00_u03b1_2754_, v_name_2755_, v_type_2756_, v_val_2757_, v_k_2758_, v_nondep_boxed_2767_, v_kind_boxed_2768_, v___y_2761_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_);
lean_dec(v___y_2765_);
lean_dec_ref(v___y_2764_);
lean_dec(v___y_2763_);
lean_dec_ref(v___y_2762_);
lean_dec(v___y_2761_);
return v_res_2769_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26(lean_object* v_00_u03b1_2770_, lean_object* v_ref_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_){
_start:
{
lean_object* v___x_2777_; 
v___x_2777_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___redArg(v_ref_2771_);
return v___x_2777_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26___boxed(lean_object* v_00_u03b1_2778_, lean_object* v_ref_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_){
_start:
{
lean_object* v_res_2785_; 
v_res_2785_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18_spec__26(v_00_u03b1_2778_, v_ref_2779_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_);
lean_dec(v___y_2783_);
lean_dec_ref(v___y_2782_);
lean_dec(v___y_2781_);
lean_dec_ref(v___y_2780_);
return v_res_2785_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18(lean_object* v_00_u03b1_2786_, lean_object* v_x_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_){
_start:
{
lean_object* v___x_2794_; 
v___x_2794_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18___redArg(v_x_2787_, v___y_2788_, v___y_2789_, v___y_2790_, v___y_2791_, v___y_2792_);
return v___x_2794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18___boxed(lean_object* v_00_u03b1_2795_, lean_object* v_x_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_){
_start:
{
lean_object* v_res_2803_; 
v_res_2803_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__18(v_00_u03b1_2795_, v_x_2796_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_);
lean_dec(v___y_2801_);
lean_dec_ref(v___y_2800_);
lean_dec(v___y_2799_);
lean_dec_ref(v___y_2798_);
lean_dec(v___y_2797_);
return v_res_2803_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19(lean_object* v_00_u03b2_2804_, lean_object* v_m_2805_, lean_object* v_a_2806_, lean_object* v_b_2807_){
_start:
{
lean_object* v___x_2808_; 
v___x_2808_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19___redArg(v_m_2805_, v_a_2806_, v_b_2807_);
return v___x_2808_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3_spec__8(lean_object* v_00_u03b2_2809_, lean_object* v_keys_2810_, lean_object* v_vals_2811_, lean_object* v_heq_2812_, lean_object* v_i_2813_, lean_object* v_k_2814_){
_start:
{
uint8_t v___x_2815_; 
v___x_2815_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3_spec__8___redArg(v_keys_2810_, v_i_2813_, v_k_2814_);
return v___x_2815_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3_spec__8___boxed(lean_object* v_00_u03b2_2816_, lean_object* v_keys_2817_, lean_object* v_vals_2818_, lean_object* v_heq_2819_, lean_object* v_i_2820_, lean_object* v_k_2821_){
_start:
{
uint8_t v_res_2822_; lean_object* v_r_2823_; 
v_res_2822_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__1_spec__2_spec__3_spec__8(v_00_u03b2_2816_, v_keys_2817_, v_vals_2818_, v_heq_2819_, v_i_2820_, v_k_2821_);
lean_dec(v_k_2821_);
lean_dec_ref(v_vals_2818_);
lean_dec_ref(v_keys_2817_);
v_r_2823_ = lean_box(v_res_2822_);
return v_r_2823_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__11(lean_object* v_00_u03b2_2824_, lean_object* v_n_2825_, lean_object* v_k_2826_, lean_object* v_v_2827_){
_start:
{
lean_object* v___x_2828_; 
v___x_2828_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__11___redArg(v_n_2825_, v_k_2826_, v_v_2827_);
return v___x_2828_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__12(lean_object* v_00_u03b2_2829_, size_t v_depth_2830_, lean_object* v_keys_2831_, lean_object* v_vals_2832_, lean_object* v_heq_2833_, lean_object* v_i_2834_, lean_object* v_entries_2835_){
_start:
{
lean_object* v___x_2836_; 
v___x_2836_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__12___redArg(v_depth_2830_, v_keys_2831_, v_vals_2832_, v_i_2834_, v_entries_2835_);
return v___x_2836_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__12___boxed(lean_object* v_00_u03b2_2837_, lean_object* v_depth_2838_, lean_object* v_keys_2839_, lean_object* v_vals_2840_, lean_object* v_heq_2841_, lean_object* v_i_2842_, lean_object* v_entries_2843_){
_start:
{
size_t v_depth_boxed_2844_; lean_object* v_res_2845_; 
v_depth_boxed_2844_ = lean_unbox_usize(v_depth_2838_);
lean_dec(v_depth_2838_);
v_res_2845_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__12(v_00_u03b2_2837_, v_depth_boxed_2844_, v_keys_2839_, v_vals_2840_, v_heq_2841_, v_i_2842_, v_entries_2843_);
lean_dec_ref(v_vals_2840_);
lean_dec_ref(v_keys_2839_);
return v_res_2845_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13_spec__18(lean_object* v_00_u03b2_2846_, lean_object* v_a_2847_, lean_object* v_x_2848_){
_start:
{
lean_object* v___x_2849_; 
v___x_2849_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13_spec__18___redArg(v_a_2847_, v_x_2848_);
return v___x_2849_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13_spec__18___boxed(lean_object* v_00_u03b2_2850_, lean_object* v_a_2851_, lean_object* v_x_2852_){
_start:
{
lean_object* v_res_2853_; 
v_res_2853_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__13_spec__18(v_00_u03b2_2850_, v_a_2851_, v_x_2852_);
lean_dec(v_x_2852_);
lean_dec_ref(v_a_2851_);
return v_res_2853_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__28(lean_object* v_00_u03b2_2854_, lean_object* v_a_2855_, lean_object* v_x_2856_){
_start:
{
uint8_t v___x_2857_; 
v___x_2857_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__28___redArg(v_a_2855_, v_x_2856_);
return v___x_2857_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__28___boxed(lean_object* v_00_u03b2_2858_, lean_object* v_a_2859_, lean_object* v_x_2860_){
_start:
{
uint8_t v_res_2861_; lean_object* v_r_2862_; 
v_res_2861_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__28(v_00_u03b2_2858_, v_a_2859_, v_x_2860_);
lean_dec(v_x_2860_);
lean_dec_ref(v_a_2859_);
v_r_2862_ = lean_box(v_res_2861_);
return v_r_2862_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__29(lean_object* v_00_u03b2_2863_, lean_object* v_data_2864_){
_start:
{
lean_object* v___x_2865_; 
v___x_2865_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__29___redArg(v_data_2864_);
return v___x_2865_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__30(lean_object* v_00_u03b2_2866_, lean_object* v_a_2867_, lean_object* v_b_2868_, lean_object* v_x_2869_){
_start:
{
lean_object* v___x_2870_; 
v___x_2870_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__30___redArg(v_a_2867_, v_b_2868_, v_x_2869_);
return v___x_2870_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__11_spec__13(lean_object* v_00_u03b2_2871_, lean_object* v_x_2872_, lean_object* v_x_2873_, lean_object* v_x_2874_, lean_object* v_x_2875_){
_start:
{
lean_object* v___x_2876_; 
v___x_2876_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__2_spec__4_spec__6_spec__11_spec__13___redArg(v_x_2872_, v_x_2873_, v_x_2874_, v_x_2875_);
return v___x_2876_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__29_spec__31(lean_object* v_00_u03b2_2877_, lean_object* v_i_2878_, lean_object* v_source_2879_, lean_object* v_target_2880_){
_start:
{
lean_object* v___x_2881_; 
v___x_2881_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__29_spec__31___redArg(v_i_2878_, v_source_2879_, v_target_2880_);
return v___x_2881_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__29_spec__31_spec__32(lean_object* v_00_u03b2_2882_, lean_object* v_x_2883_, lean_object* v_x_2884_){
_start:
{
lean_object* v___x_2885_; 
v___x_2885_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp_spec__4_spec__7_spec__19_spec__29_spec__31_spec__32___redArg(v_x_2883_, v_x_2884_);
return v___x_2885_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Spec(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Simp(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Spec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Simp(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Spec(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Simp(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Spec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Simp(builtin);
}
#ifdef __cplusplus
}
#endif
