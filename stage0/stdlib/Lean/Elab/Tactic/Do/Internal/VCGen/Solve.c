// Lean compiler output
// Module: Lean.Elab.Tactic.Do.Internal.VCGen.Solve
// Imports: public import Lean.Meta.Tactic.Grind.Types public import Lean.Meta.Sym public import Std.Internal.Do public import Lean.Elab.Command public import Lean.Elab.Tactic.Basic public import Lean.Elab.Tactic.Meta public import Lean.Elab.Tactic.Simp public import Lean.Elab.Tactic.Do.Attr public meta import Lean.Elab.Tactic.Basic public meta import Lean.Elab.Tactic.Do.Attr public import Lean.Meta.Sym.AlphaShareBuilder public import Lean.Elab.Tactic.Do.Internal.VCGen.RuleCache public import Lean.Elab.Tactic.Do.Internal.VCGen.Utils
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
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_BackwardRule_applyChecked(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached___redArg(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_intros(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_burnOne___redArg(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_prog(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
uint8_t l_Lean_Elab_Tactic_Do_isJP(lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MVarId_replaceTargetDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instantiateRevBetaS___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_getSplitInfo_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceRecMatcher_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x3f(lean_object*);
lean_object* l_Lean_FVarId_getValue_x3f___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_Pred(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_m(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_Sym_isDefEqS(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isProp(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_betaRevS___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_Scope_collectLocalSpecs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_introsAndSimp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "VCGen"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__6_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "solve"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__6_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__6_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(232, 135, 166, 206, 84, 210, 155, 104)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 214, 136, 164, 237, 239, 105, 243)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value_aux_6 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value_aux_5),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(172, 59, 251, 147, 112, 63, 36, 199)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value_aux_6),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__6_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(247, 151, 181, 104, 115, 20, 94, 16)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__8_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__8_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__8_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__9_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__8_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__9_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__9_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__9_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__11_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__11_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__11_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__11_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(133, 58, 227, 168, 195, 28, 19, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__13_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(89, 242, 56, 182, 153, 42, 114, 203)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__13_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__13_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__14_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__13_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(132, 236, 244, 1, 128, 181, 211, 156)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__14_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__14_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__14_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(175, 167, 22, 210, 240, 170, 245, 185)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__16_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Solve"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__16_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__16_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__17_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__16_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(47, 158, 147, 43, 216, 10, 251, 192)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__17_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__17_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__18_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__17_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(66, 249, 129, 178, 181, 226, 84, 119)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__18_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__18_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__19_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__19_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__19_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__20_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__18_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__19_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(183, 153, 25, 55, 56, 86, 102, 101)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__20_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__20_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__21_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__21_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__21_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__22_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__20_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__21_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(242, 44, 15, 105, 161, 151, 3, 247)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__22_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__22_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__23_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__22_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(115, 225, 81, 245, 155, 233, 6, 245)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__23_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__23_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__24_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__23_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(37, 65, 109, 208, 111, 15, 194, 95)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__24_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__24_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__25_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__24_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(188, 201, 122, 46, 246, 23, 41, 215)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__25_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__25_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__26_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__25_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(124, 88, 168, 82, 136, 138, 83, 26)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__26_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__26_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__27_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__26_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(37, 239, 249, 87, 235, 117, 88, 163)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__27_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__27_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__28_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__27_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(250, 150, 216, 159, 199, 95, 21, 226)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__28_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__28_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__29_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__28_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__16_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(222, 225, 38, 50, 245, 90, 170, 89)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__29_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__29_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__30_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__30_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__31_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__31_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__31_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__32_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__32_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__33_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__33_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__33_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__34_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__34_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__35_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__35_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_noEntailment_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_noEntailment_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_noProgramOrLatticeFoundInTarget_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_noProgramOrLatticeFoundInTarget_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_noStrategyForProgram_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_noStrategyForProgram_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_noSpecFoundForProgram_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_noSpecFoundForProgram_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_goals_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_goals_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__0_value;
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "EPost"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__2_value;
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__3_value;
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__5_value_aux_2),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(61, 220, 195, 28, 231, 198, 56, 30)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__5_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__5_value_aux_3),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 34, 106, 80, 62, 31, 229, 248)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__5_value_aux_4),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(138, 6, 98, 206, 152, 24, 169, 121)}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain___closed__0;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tail"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain_spec__0___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain_spec__0___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain_spec__0___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain_spec__0___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain_spec__0___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(61, 220, 195, 28, 231, 198, 56, 30)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain_spec__0___closed__1_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain_spec__0___closed__1_value_aux_3),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 34, 106, 80, 62, 31, 229, 248)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain_spec__0___closed__1_value_aux_4),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(141, 242, 71, 124, 192, 159, 190, 17)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain_spec__0___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Expr_isDuplicable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Expr_isDuplicable___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Expr_isDuplicable___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Expr_isDuplicable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Expr_isDuplicable___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Expr_isDuplicable___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Expr_isDuplicable___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Expr_isDuplicable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Expr_isDuplicable___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Expr_isDuplicable___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Expr_isDuplicable___closed__1_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Expr_isDuplicable___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Expr_isDuplicable___closed__2_value;
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Expr_isDuplicable(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Expr_isDuplicable___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnSolveResult___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnSolveResult___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnSolveResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnSolveResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Failed to intro forall target"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 104, .m_capacity = 104, .m_length = 103, .m_data = "mvcgen': shared-continuation handling for `__do_jp` is not yet implemented. Detection point reached at "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 205, .m_capacity = 205, .m_length = 204, .m_data = "; the upstream `Lean.Elab.Tactic.Do.onJoinPoint` (`src/Lean/Elab/Tactic/Do/VCGen.lean:215`) needs to be ported to the worklist style. Drop `(jp := true)` to fall back to the default zeta-unfold behaviour."};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Failed to intro let target"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTargetLetIntro___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTargetLetIntro___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTargetLetIntro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTargetLetIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldTriple___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Failed to unfold Triple target"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldTriple___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldTriple___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldTriple___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldTriple___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldTriple(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldTriple___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTripleUnfold___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Triple"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTripleUnfold___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTripleUnfold___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTripleUnfold___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTripleUnfold___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTripleUnfold___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTripleUnfold___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTripleUnfold___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTripleUnfold___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTripleUnfold___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTripleUnfold___closed__0_value),LEAN_SCALAR_PTR_LITERAL(190, 57, 218, 157, 42, 52, 8, 129)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTripleUnfold___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTripleUnfold___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTripleUnfold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTripleUnfold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_numLeadingForalls(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_numLeadingForalls___boxed(lean_object*);
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " in goal:"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__1;
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Failed to introduce state argument using "};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__3;
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "state_arg_intro'"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__5_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__5_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(232, 135, 166, 206, 84, 210, 155, 104)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__5_value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__5_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 214, 136, 164, 237, 239, 105, 243)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__5_value_aux_5),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(158, 196, 49, 28, 74, 127, 7, 145)}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__5_value;
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "top_state_arg_intro'"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__6 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__7_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__7_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__7_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(232, 135, 166, 206, 84, 210, 155, 104)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__7_value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__7_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 214, 136, 164, 237, 239, 105, 243)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__7_value_aux_5),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(206, 172, 155, 20, 28, 204, 255, 10)}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__7 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__7_value;
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Failed to intro state argument"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__8 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__9;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introPre___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introPre___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introPre(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introPre___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "CompleteLattice"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ofProp"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 140, 127, 117, 148, 144, 166, 107)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(51, 160, 150, 32, 134, 96, 114, 42)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryStateArgIntro(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryStateArgIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryPropPreIntro___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryPropPreIntro___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryPropPreIntro(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryPropPreIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applyLattice___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Failed to applyChecked logic rule at "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applyLattice___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applyLattice___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applyLattice___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applyLattice___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applyLattice(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applyLattice___boxed(lean_object**);
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "top"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(219, 33, 148, 124, 218, 91, 248, 169)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__1_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "himp"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__2 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__2_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__3_value_aux_1),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(173, 29, 48, 122, 5, 158, 45, 140)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__3 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__3_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meet"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__4 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__4_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__5_value_aux_1),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(194, 193, 63, 6, 53, 61, 199, 176)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__5 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__5_value;
static const lean_array_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__6 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "head"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(61, 220, 195, 28, 231, 198, 56, 30)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0___closed__1_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0___closed__1_value_aux_3),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 34, 106, 80, 62, 31, 229, 248)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0___closed__1_value_aux_4),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(82, 183, 21, 80, 115, 110, 210, 136)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_replaceProgDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_replaceProgDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Failed to intro hoisted let"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Failed to intro split parameters"};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch_spec__0___redArg___closed__0 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Failed to applyChecked split rule for "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substFvarZeta(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substFvarZeta___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPFVarZeta(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPFVarZeta___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " for "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\ntarget:"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "\nPred:"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__5;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "\nexcessArgs: "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__7;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "\nrule type:"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__9;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Failed to applyChecked rule "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__11;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "SpecProof.global "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__12_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__13;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "SpecProof.local "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__14_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__15;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "SpecProof.stx _ "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__16 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__16_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__17;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__18_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__19;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\nerror: "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__20_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__21;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Failed to construct rule "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__22 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__22_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__23;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPCallSpec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPCallSpec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "wp"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___redArg___closed__1_value_aux_2),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 6, 42, 106, 0, 77, 75, 237)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWP(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWP___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PartialOrder"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rel"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(179, 3, 218, 237, 219, 72, 94, 177)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__1_value),LEAN_SCALAR_PTR_LITERAL(41, 174, 7, 105, 99, 77, 97, 125)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "rel_refl"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(179, 3, 218, 237, 219, 72, 94, 177)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__3_value),LEAN_SCALAR_PTR_LITERAL(114, 93, 162, 136, 122, 175, 235, 220)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_runStrategies_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_runStrategies_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_runStrategies_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_runStrategies_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_runStrategies(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_runStrategies___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve___lam__0___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__30_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_74_ = lean_unsigned_to_nat(2617394893u);
v___x_75_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__29_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_));
v___x_76_ = l_Lean_Name_num___override(v___x_75_, v___x_74_);
return v___x_76_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__32_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_78_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__31_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_));
v___x_79_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__30_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__30_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__30_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_);
v___x_80_ = l_Lean_Name_str___override(v___x_79_, v___x_78_);
return v___x_80_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__34_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_82_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__33_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_));
v___x_83_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__32_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__32_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__32_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_);
v___x_84_ = l_Lean_Name_str___override(v___x_83_, v___x_82_);
return v___x_84_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__35_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_85_ = lean_unsigned_to_nat(2u);
v___x_86_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__34_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__34_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__34_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_);
v___x_87_ = l_Lean_Name_num___override(v___x_86_, v___x_85_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_89_; uint8_t v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_89_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_));
v___x_90_ = 0;
v___x_91_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__35_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__35_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn___closed__35_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_);
v___x_92_ = l_Lean_registerTraceClass(v___x_89_, v___x_90_, v___x_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2____boxed(lean_object* v_a_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_();
return v_res_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorIdx(lean_object* v_x_95_){
_start:
{
switch(lean_obj_tag(v_x_95_))
{
case 0:
{
lean_object* v___x_96_; 
v___x_96_ = lean_unsigned_to_nat(0u);
return v___x_96_;
}
case 1:
{
lean_object* v___x_97_; 
v___x_97_ = lean_unsigned_to_nat(1u);
return v___x_97_;
}
case 2:
{
lean_object* v___x_98_; 
v___x_98_ = lean_unsigned_to_nat(2u);
return v___x_98_;
}
case 3:
{
lean_object* v___x_99_; 
v___x_99_ = lean_unsigned_to_nat(3u);
return v___x_99_;
}
default: 
{
lean_object* v___x_100_; 
v___x_100_ = lean_unsigned_to_nat(4u);
return v___x_100_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorIdx___boxed(lean_object* v_x_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorIdx(v_x_101_);
lean_dec_ref(v_x_101_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorElim___redArg(lean_object* v_t_103_, lean_object* v_k_104_){
_start:
{
switch(lean_obj_tag(v_t_103_))
{
case 3:
{
lean_object* v_e_105_; lean_object* v_monad_106_; lean_object* v_thms_107_; lean_object* v___x_108_; 
v_e_105_ = lean_ctor_get(v_t_103_, 0);
lean_inc_ref(v_e_105_);
v_monad_106_ = lean_ctor_get(v_t_103_, 1);
lean_inc_ref(v_monad_106_);
v_thms_107_ = lean_ctor_get(v_t_103_, 2);
lean_inc_ref(v_thms_107_);
lean_dec_ref_known(v_t_103_, 3);
v___x_108_ = lean_apply_3(v_k_104_, v_e_105_, v_monad_106_, v_thms_107_);
return v___x_108_;
}
case 4:
{
lean_object* v_scope_109_; lean_object* v_subgoals_110_; lean_object* v___x_111_; 
v_scope_109_ = lean_ctor_get(v_t_103_, 0);
lean_inc_ref(v_scope_109_);
v_subgoals_110_ = lean_ctor_get(v_t_103_, 1);
lean_inc(v_subgoals_110_);
lean_dec_ref_known(v_t_103_, 2);
v___x_111_ = lean_apply_2(v_k_104_, v_scope_109_, v_subgoals_110_);
return v___x_111_;
}
default: 
{
lean_object* v_target_112_; lean_object* v___x_113_; 
v_target_112_ = lean_ctor_get(v_t_103_, 0);
lean_inc_ref(v_target_112_);
lean_dec_ref(v_t_103_);
v___x_113_ = lean_apply_1(v_k_104_, v_target_112_);
return v___x_113_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorElim(lean_object* v_motive_114_, lean_object* v_ctorIdx_115_, lean_object* v_t_116_, lean_object* v_h_117_, lean_object* v_k_118_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorElim___redArg(v_t_116_, v_k_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorElim___boxed(lean_object* v_motive_120_, lean_object* v_ctorIdx_121_, lean_object* v_t_122_, lean_object* v_h_123_, lean_object* v_k_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorElim(v_motive_120_, v_ctorIdx_121_, v_t_122_, v_h_123_, v_k_124_);
lean_dec(v_ctorIdx_121_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_noEntailment_elim___redArg(lean_object* v_t_126_, lean_object* v_noEntailment_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorElim___redArg(v_t_126_, v_noEntailment_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_noEntailment_elim(lean_object* v_motive_129_, lean_object* v_t_130_, lean_object* v_h_131_, lean_object* v_noEntailment_132_){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorElim___redArg(v_t_130_, v_noEntailment_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_noProgramOrLatticeFoundInTarget_elim___redArg(lean_object* v_t_134_, lean_object* v_noProgramOrLatticeFoundInTarget_135_){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorElim___redArg(v_t_134_, v_noProgramOrLatticeFoundInTarget_135_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_noProgramOrLatticeFoundInTarget_elim(lean_object* v_motive_137_, lean_object* v_t_138_, lean_object* v_h_139_, lean_object* v_noProgramOrLatticeFoundInTarget_140_){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorElim___redArg(v_t_138_, v_noProgramOrLatticeFoundInTarget_140_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_noStrategyForProgram_elim___redArg(lean_object* v_t_142_, lean_object* v_noStrategyForProgram_143_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorElim___redArg(v_t_142_, v_noStrategyForProgram_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_noStrategyForProgram_elim(lean_object* v_motive_145_, lean_object* v_t_146_, lean_object* v_h_147_, lean_object* v_noStrategyForProgram_148_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorElim___redArg(v_t_146_, v_noStrategyForProgram_148_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_noSpecFoundForProgram_elim___redArg(lean_object* v_t_150_, lean_object* v_noSpecFoundForProgram_151_){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorElim___redArg(v_t_150_, v_noSpecFoundForProgram_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_noSpecFoundForProgram_elim(lean_object* v_motive_153_, lean_object* v_t_154_, lean_object* v_h_155_, lean_object* v_noSpecFoundForProgram_156_){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorElim___redArg(v_t_154_, v_noSpecFoundForProgram_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_goals_elim___redArg(lean_object* v_t_158_, lean_object* v_goals_159_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorElim___redArg(v_t_158_, v_goals_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_goals_elim(lean_object* v_motive_161_, lean_object* v_t_162_, lean_object* v_h_163_, lean_object* v_goals_164_){
_start:
{
lean_object* v___x_165_; 
v___x_165_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_SolveResult_ctorElim___redArg(v_t_162_, v_goals_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg(lean_object* v_range_179_, lean_object* v_b_180_, lean_object* v_i_181_){
_start:
{
lean_object* v_stop_183_; lean_object* v_step_184_; uint8_t v___x_185_; 
v_stop_183_ = lean_ctor_get(v_range_179_, 1);
v_step_184_ = lean_ctor_get(v_range_179_, 2);
v___x_185_ = lean_nat_dec_lt(v_i_181_, v_stop_183_);
if (v___x_185_ == 0)
{
lean_object* v___x_186_; 
lean_dec(v_i_181_);
v___x_186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_186_, 0, v_b_180_);
return v___x_186_;
}
else
{
lean_object* v_snd_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_213_; 
v_snd_187_ = lean_ctor_get(v_b_180_, 1);
v_isSharedCheck_213_ = !lean_is_exclusive(v_b_180_);
if (v_isSharedCheck_213_ == 0)
{
lean_object* v_unused_214_; 
v_unused_214_ = lean_ctor_get(v_b_180_, 0);
lean_dec(v_unused_214_);
v___x_189_ = v_b_180_;
v_isShared_190_ = v_isSharedCheck_213_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_snd_187_);
lean_dec(v_b_180_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_213_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_197_; uint8_t v___x_198_; 
lean_inc(v_snd_187_);
v___x_197_ = l_Lean_Expr_cleanupAnnotations(v_snd_187_);
v___x_198_ = l_Lean_Expr_isApp(v___x_197_);
if (v___x_198_ == 0)
{
lean_dec_ref(v___x_197_);
lean_dec(v_i_181_);
goto v___jp_191_;
}
else
{
lean_object* v_arg_199_; lean_object* v___x_200_; uint8_t v___x_201_; 
v_arg_199_ = lean_ctor_get(v___x_197_, 1);
lean_inc_ref(v_arg_199_);
v___x_200_ = l_Lean_Expr_appFnCleanup___redArg(v___x_197_);
v___x_201_ = l_Lean_Expr_isApp(v___x_200_);
if (v___x_201_ == 0)
{
lean_dec_ref(v___x_200_);
lean_dec_ref(v_arg_199_);
lean_dec(v_i_181_);
goto v___jp_191_;
}
else
{
lean_object* v___x_202_; uint8_t v___x_203_; 
v___x_202_ = l_Lean_Expr_appFnCleanup___redArg(v___x_200_);
v___x_203_ = l_Lean_Expr_isApp(v___x_202_);
if (v___x_203_ == 0)
{
lean_dec_ref(v___x_202_);
lean_dec_ref(v_arg_199_);
lean_dec(v_i_181_);
goto v___jp_191_;
}
else
{
lean_object* v___x_204_; uint8_t v___x_205_; 
v___x_204_ = l_Lean_Expr_appFnCleanup___redArg(v___x_202_);
v___x_205_ = l_Lean_Expr_isApp(v___x_204_);
if (v___x_205_ == 0)
{
lean_dec_ref(v___x_204_);
lean_dec_ref(v_arg_199_);
lean_dec(v_i_181_);
goto v___jp_191_;
}
else
{
lean_object* v___x_206_; lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_206_ = l_Lean_Expr_appFnCleanup___redArg(v___x_204_);
v___x_207_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__5));
v___x_208_ = l_Lean_Expr_isConstOf(v___x_206_, v___x_207_);
lean_dec_ref(v___x_206_);
if (v___x_208_ == 0)
{
lean_dec_ref(v_arg_199_);
lean_dec(v_i_181_);
goto v___jp_191_;
}
else
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
lean_del_object(v___x_189_);
lean_dec(v_snd_187_);
v___x_209_ = lean_box(0);
v___x_210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_209_);
lean_ctor_set(v___x_210_, 1, v_arg_199_);
v___x_211_ = lean_nat_add(v_i_181_, v_step_184_);
lean_dec(v_i_181_);
v_b_180_ = v___x_210_;
v_i_181_ = v___x_211_;
goto _start;
}
}
}
}
}
v___jp_191_:
{
lean_object* v___x_192_; lean_object* v___x_194_; 
v___x_192_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__0));
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 0, v___x_192_);
v___x_194_ = v___x_189_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v___x_192_);
lean_ctor_set(v_reuseFailAlloc_196_, 1, v_snd_187_);
v___x_194_ = v_reuseFailAlloc_196_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
lean_object* v___x_195_; 
v___x_195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_195_, 0, v___x_194_);
return v___x_195_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___boxed(lean_object* v_range_215_, lean_object* v_b_216_, lean_object* v_i_217_, lean_object* v___y_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg(v_range_215_, v_b_216_, v_i_217_);
lean_dec_ref(v_range_215_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex(lean_object* v_target_220_, lean_object* v_index_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v_a_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_264_; 
v___x_232_ = lean_unsigned_to_nat(0u);
v___x_233_ = lean_unsigned_to_nat(1u);
v___x_234_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_234_, 0, v___x_232_);
lean_ctor_set(v___x_234_, 1, v_index_221_);
lean_ctor_set(v___x_234_, 2, v___x_233_);
v___x_235_ = lean_box(0);
v___x_236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
lean_ctor_set(v___x_236_, 1, v_target_220_);
v___x_237_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg(v___x_234_, v___x_236_, v___x_232_);
lean_dec_ref_known(v___x_234_, 3);
v_a_238_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_264_ == 0)
{
v___x_240_ = v___x_237_;
v_isShared_241_ = v_isSharedCheck_264_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_a_238_);
lean_dec(v___x_237_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_264_;
goto v_resetjp_239_;
}
v___jp_229_:
{
lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_230_ = lean_box(0);
v___x_231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_231_, 0, v___x_230_);
return v___x_231_;
}
v_resetjp_239_:
{
lean_object* v_fst_242_; 
v_fst_242_ = lean_ctor_get(v_a_238_, 0);
if (lean_obj_tag(v_fst_242_) == 0)
{
lean_object* v_snd_243_; lean_object* v___x_244_; uint8_t v___x_245_; 
v_snd_243_ = lean_ctor_get(v_a_238_, 1);
lean_inc(v_snd_243_);
lean_dec(v_a_238_);
v___x_244_ = l_Lean_Expr_cleanupAnnotations(v_snd_243_);
v___x_245_ = l_Lean_Expr_isApp(v___x_244_);
if (v___x_245_ == 0)
{
lean_dec_ref(v___x_244_);
lean_del_object(v___x_240_);
goto v___jp_229_;
}
else
{
lean_object* v___x_246_; uint8_t v___x_247_; 
v___x_246_ = l_Lean_Expr_appFnCleanup___redArg(v___x_244_);
v___x_247_ = l_Lean_Expr_isApp(v___x_246_);
if (v___x_247_ == 0)
{
lean_dec_ref(v___x_246_);
lean_del_object(v___x_240_);
goto v___jp_229_;
}
else
{
lean_object* v_arg_248_; lean_object* v___x_249_; uint8_t v___x_250_; 
v_arg_248_ = lean_ctor_get(v___x_246_, 1);
lean_inc_ref(v_arg_248_);
v___x_249_ = l_Lean_Expr_appFnCleanup___redArg(v___x_246_);
v___x_250_ = l_Lean_Expr_isApp(v___x_249_);
if (v___x_250_ == 0)
{
lean_dec_ref(v___x_249_);
lean_dec_ref(v_arg_248_);
lean_del_object(v___x_240_);
goto v___jp_229_;
}
else
{
lean_object* v___x_251_; uint8_t v___x_252_; 
v___x_251_ = l_Lean_Expr_appFnCleanup___redArg(v___x_249_);
v___x_252_ = l_Lean_Expr_isApp(v___x_251_);
if (v___x_252_ == 0)
{
lean_dec_ref(v___x_251_);
lean_dec_ref(v_arg_248_);
lean_del_object(v___x_240_);
goto v___jp_229_;
}
else
{
lean_object* v___x_253_; lean_object* v___x_254_; uint8_t v___x_255_; 
v___x_253_ = l_Lean_Expr_appFnCleanup___redArg(v___x_251_);
v___x_254_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg___closed__5));
v___x_255_ = l_Lean_Expr_isConstOf(v___x_253_, v___x_254_);
lean_dec_ref(v___x_253_);
if (v___x_255_ == 0)
{
lean_dec_ref(v_arg_248_);
lean_del_object(v___x_240_);
goto v___jp_229_;
}
else
{
lean_object* v___x_256_; lean_object* v___x_258_; 
v___x_256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_256_, 0, v_arg_248_);
if (v_isShared_241_ == 0)
{
lean_ctor_set(v___x_240_, 0, v___x_256_);
v___x_258_ = v___x_240_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v___x_256_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
}
}
}
}
}
else
{
lean_object* v_val_260_; lean_object* v___x_262_; 
lean_inc_ref(v_fst_242_);
lean_dec(v_a_238_);
v_val_260_ = lean_ctor_get(v_fst_242_, 0);
lean_inc(v_val_260_);
lean_dec_ref_known(v_fst_242_, 1);
if (v_isShared_241_ == 0)
{
lean_ctor_set(v___x_240_, 0, v_val_260_);
v___x_262_ = v___x_240_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v_val_260_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
return v___x_262_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex___boxed(lean_object* v_target_265_, lean_object* v_index_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex(v_target_265_, v_index_266_, v_a_267_, v_a_268_, v_a_269_, v_a_270_, v_a_271_, v_a_272_);
lean_dec(v_a_272_);
lean_dec_ref(v_a_271_);
lean_dec(v_a_270_);
lean_dec_ref(v_a_269_);
lean_dec(v_a_268_);
lean_dec_ref(v_a_267_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0(lean_object* v_range_275_, lean_object* v_b_276_, lean_object* v_i_277_, lean_object* v_hs_278_, lean_object* v_hl_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___redArg(v_range_275_, v_b_276_, v_i_277_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0___boxed(lean_object* v_range_288_, lean_object* v_b_289_, lean_object* v_i_290_, lean_object* v_hs_291_, lean_object* v_hl_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex_spec__0(v_range_288_, v_b_289_, v_i_290_, v_hs_291_, v_hl_292_, v___y_293_, v___y_294_, v___y_295_, v___y_296_, v___y_297_, v___y_298_);
lean_dec(v___y_298_);
lean_dec_ref(v___y_297_);
lean_dec(v___y_296_);
lean_dec_ref(v___y_295_);
lean_dec(v___y_294_);
lean_dec_ref(v___y_293_);
lean_dec_ref(v_range_288_);
return v_res_300_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain___closed__0(void){
_start:
{
lean_object* v___x_301_; lean_object* v_dummy_302_; 
v___x_301_ = lean_box(0);
v_dummy_302_ = l_Lean_Expr_sort___override(v___x_301_);
return v_dummy_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain_spec__0(lean_object* v_curr_311_, lean_object* v_idx_312_, lean_object* v_x_313_, lean_object* v_x_314_, lean_object* v_x_315_){
_start:
{
uint8_t v___y_317_; 
if (lean_obj_tag(v_x_313_) == 5)
{
lean_object* v_fn_326_; lean_object* v_arg_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v_fn_326_ = lean_ctor_get(v_x_313_, 0);
lean_inc_ref(v_fn_326_);
v_arg_327_ = lean_ctor_get(v_x_313_, 1);
lean_inc_ref(v_arg_327_);
lean_dec_ref_known(v_x_313_, 2);
v___x_328_ = lean_array_set(v_x_314_, v_x_315_, v_arg_327_);
v___x_329_ = lean_unsigned_to_nat(1u);
v___x_330_ = lean_nat_sub(v_x_315_, v___x_329_);
lean_dec(v_x_315_);
v_x_313_ = v_fn_326_;
v_x_314_ = v___x_328_;
v_x_315_ = v___x_330_;
goto _start;
}
else
{
lean_object* v___x_332_; uint8_t v___x_333_; 
lean_dec(v_x_315_);
v___x_332_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain_spec__0___closed__1));
v___x_333_ = l_Lean_Expr_isConstOf(v_x_313_, v___x_332_);
lean_dec_ref(v_x_313_);
if (v___x_333_ == 0)
{
v___y_317_ = v___x_333_;
goto v___jp_316_;
}
else
{
lean_object* v___x_334_; lean_object* v___x_335_; uint8_t v___x_336_; 
v___x_334_ = lean_unsigned_to_nat(0u);
v___x_335_ = lean_array_get_size(v_x_314_);
v___x_336_ = lean_nat_dec_lt(v___x_334_, v___x_335_);
v___y_317_ = v___x_336_;
goto v___jp_316_;
}
}
v___jp_316_:
{
if (v___y_317_ == 0)
{
lean_object* v___x_318_; 
lean_dec_ref(v_x_314_);
v___x_318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_318_, 0, v_curr_311_);
lean_ctor_set(v___x_318_, 1, v_idx_312_);
return v___x_318_;
}
else
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
lean_dec_ref(v_curr_311_);
v___x_319_ = l_Lean_instInhabitedExpr;
v___x_320_ = lean_array_get_size(v_x_314_);
v___x_321_ = lean_unsigned_to_nat(1u);
v___x_322_ = lean_nat_sub(v___x_320_, v___x_321_);
v___x_323_ = lean_array_get(v___x_319_, v_x_314_, v___x_322_);
lean_dec(v___x_322_);
lean_dec_ref(v_x_314_);
v___x_324_ = lean_nat_add(v_idx_312_, v___x_321_);
lean_dec(v_idx_312_);
v___x_325_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain(v___x_323_, v___x_324_);
return v___x_325_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain(lean_object* v_curr_337_, lean_object* v_idx_338_){
_start:
{
lean_object* v___x_339_; lean_object* v_dummy_340_; lean_object* v_nargs_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_339_ = l_Lean_Expr_consumeMData(v_curr_337_);
v_dummy_340_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain___closed__0, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain___closed__0);
v_nargs_341_ = l_Lean_Expr_getAppNumArgs(v___x_339_);
lean_inc(v_nargs_341_);
v___x_342_ = lean_mk_array(v_nargs_341_, v_dummy_340_);
v___x_343_ = lean_unsigned_to_nat(1u);
v___x_344_ = lean_nat_sub(v_nargs_341_, v___x_343_);
lean_dec(v_nargs_341_);
v___x_345_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain_spec__0(v_curr_337_, v_idx_338_, v___x_339_, v___x_342_, v___x_344_);
return v___x_345_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Expr_isDuplicable(lean_object* v_e_351_){
_start:
{
switch(lean_obj_tag(v_e_351_))
{
case 5:
{
lean_object* v___x_352_; uint8_t v___x_353_; 
v___x_352_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Expr_isDuplicable___closed__2));
v___x_353_ = l_Lean_Expr_isAppOf(v_e_351_, v___x_352_);
return v___x_353_;
}
case 6:
{
uint8_t v___x_354_; 
v___x_354_ = 0;
return v___x_354_;
}
case 7:
{
uint8_t v___x_355_; 
v___x_355_ = 0;
return v___x_355_;
}
case 8:
{
uint8_t v___x_356_; 
v___x_356_ = 0;
return v___x_356_;
}
case 10:
{
lean_object* v_expr_357_; 
v_expr_357_ = lean_ctor_get(v_e_351_, 1);
v_e_351_ = v_expr_357_;
goto _start;
}
case 11:
{
lean_object* v_struct_359_; 
v_struct_359_ = lean_ctor_get(v_e_351_, 2);
v_e_351_ = v_struct_359_;
goto _start;
}
default: 
{
uint8_t v___x_361_; 
v___x_361_ = 1;
return v___x_361_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Expr_isDuplicable___boxed(lean_object* v_e_362_){
_start:
{
uint8_t v_res_363_; lean_object* v_r_364_; 
v_res_363_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Expr_isDuplicable(v_e_362_);
lean_dec_ref(v_e_362_);
v_r_364_ = lean_box(v_res_363_);
return v_r_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___redArg(lean_object* v_goals_365_, lean_object* v_a_366_){
_start:
{
lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_368_ = lean_st_ref_get(v_a_366_);
v___x_369_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_369_, 0, v___x_368_);
lean_ctor_set(v___x_369_, 1, v_goals_365_);
v___x_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_370_, 0, v___x_369_);
v___x_371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_371_, 0, v___x_370_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___redArg___boxed(lean_object* v_goals_372_, lean_object* v_a_373_, lean_object* v_a_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___redArg(v_goals_372_, v_a_373_);
lean_dec(v_a_373_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals(lean_object* v_goals_376_, lean_object* v_a_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_){
_start:
{
lean_object* v___x_390_; 
v___x_390_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___redArg(v_goals_376_, v_a_377_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___boxed(lean_object* v_goals_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_, lean_object* v_a_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals(v_goals_391_, v_a_392_, v_a_393_, v_a_394_, v_a_395_, v_a_396_, v_a_397_, v_a_398_, v_a_399_, v_a_400_, v_a_401_, v_a_402_, v_a_403_);
lean_dec(v_a_403_);
lean_dec_ref(v_a_402_);
lean_dec(v_a_401_);
lean_dec_ref(v_a_400_);
lean_dec(v_a_399_);
lean_dec_ref(v_a_398_);
lean_dec(v_a_397_);
lean_dec_ref(v_a_396_);
lean_dec(v_a_395_);
lean_dec(v_a_394_);
lean_dec_ref(v_a_393_);
lean_dec(v_a_392_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnSolveResult___redArg(lean_object* v_slv_406_){
_start:
{
lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_408_, 0, v_slv_406_);
v___x_409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_409_, 0, v___x_408_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnSolveResult___redArg___boxed(lean_object* v_slv_410_, lean_object* v_a_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnSolveResult___redArg(v_slv_410_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnSolveResult(lean_object* v_00_u03b1_413_, lean_object* v_slv_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_){
_start:
{
lean_object* v___x_428_; 
v___x_428_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnSolveResult___redArg(v_slv_414_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnSolveResult___boxed(lean_object* v_00_u03b1_429_, lean_object* v_slv_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnSolveResult(v_00_u03b1_429_, v_slv_430_, v_a_431_, v_a_432_, v_a_433_, v_a_434_, v_a_435_, v_a_436_, v_a_437_, v_a_438_, v_a_439_, v_a_440_, v_a_441_, v_a_442_);
lean_dec(v_a_442_);
lean_dec_ref(v_a_441_);
lean_dec(v_a_440_);
lean_dec_ref(v_a_439_);
lean_dec(v_a_438_);
lean_dec_ref(v_a_437_);
lean_dec(v_a_436_);
lean_dec_ref(v_a_435_);
lean_dec(v_a_434_);
lean_dec(v_a_433_);
lean_dec_ref(v_a_432_);
lean_dec(v_a_431_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0_spec__0(lean_object* v_msgData_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_){
_start:
{
lean_object* v___x_451_; lean_object* v_env_452_; lean_object* v___x_453_; lean_object* v_mctx_454_; lean_object* v_lctx_455_; lean_object* v_options_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_451_ = lean_st_ref_get(v___y_449_);
v_env_452_ = lean_ctor_get(v___x_451_, 0);
lean_inc_ref(v_env_452_);
lean_dec(v___x_451_);
v___x_453_ = lean_st_ref_get(v___y_447_);
v_mctx_454_ = lean_ctor_get(v___x_453_, 0);
lean_inc_ref(v_mctx_454_);
lean_dec(v___x_453_);
v_lctx_455_ = lean_ctor_get(v___y_446_, 2);
v_options_456_ = lean_ctor_get(v___y_448_, 2);
lean_inc_ref(v_options_456_);
lean_inc_ref(v_lctx_455_);
v___x_457_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_457_, 0, v_env_452_);
lean_ctor_set(v___x_457_, 1, v_mctx_454_);
lean_ctor_set(v___x_457_, 2, v_lctx_455_);
lean_ctor_set(v___x_457_, 3, v_options_456_);
v___x_458_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_457_);
lean_ctor_set(v___x_458_, 1, v_msgData_445_);
v___x_459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0_spec__0___boxed(lean_object* v_msgData_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0_spec__0(v_msgData_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_);
lean_dec(v___y_464_);
lean_dec_ref(v___y_463_);
lean_dec(v___y_462_);
lean_dec_ref(v___y_461_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0___redArg(lean_object* v_msg_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_){
_start:
{
lean_object* v_ref_473_; lean_object* v___x_474_; lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_483_; 
v_ref_473_ = lean_ctor_get(v___y_470_, 5);
v___x_474_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0_spec__0(v_msg_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_);
v_a_475_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_483_ == 0)
{
v___x_477_ = v___x_474_;
v_isShared_478_ = v_isSharedCheck_483_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v___x_474_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_483_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_479_; lean_object* v___x_481_; 
lean_inc(v_ref_473_);
v___x_479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_479_, 0, v_ref_473_);
lean_ctor_set(v___x_479_, 1, v_a_475_);
if (v_isShared_478_ == 0)
{
lean_ctor_set_tag(v___x_477_, 1);
lean_ctor_set(v___x_477_, 0, v___x_479_);
v___x_481_ = v___x_477_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v___x_479_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0___redArg___boxed(lean_object* v_msg_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0___redArg(v_msg_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_);
lean_dec(v___y_488_);
lean_dec_ref(v___y_487_);
lean_dec(v___y_486_);
lean_dec_ref(v___y_485_);
return v_res_490_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall___closed__1(void){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall___closed__0));
v___x_493_ = l_Lean_stringToMessageData(v___x_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall(lean_object* v_goal_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_introsAndSimp(v_goal_494_, v_a_495_, v_a_496_, v_a_497_, v_a_498_, v_a_499_, v_a_500_, v_a_501_, v_a_502_, v_a_503_, v_a_504_, v_a_505_);
if (lean_obj_tag(v___x_507_) == 0)
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_524_; 
v_a_508_ = lean_ctor_get(v___x_507_, 0);
v_isSharedCheck_524_ = !lean_is_exclusive(v___x_507_);
if (v_isSharedCheck_524_ == 0)
{
v___x_510_ = v___x_507_;
v_isShared_511_ = v_isSharedCheck_524_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v___x_507_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_524_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
switch(lean_obj_tag(v_a_508_))
{
case 0:
{
lean_object* v___x_512_; lean_object* v___x_514_; 
v___x_512_ = lean_box(0);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 0, v___x_512_);
v___x_514_ = v___x_510_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v___x_512_);
v___x_514_ = v_reuseFailAlloc_515_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
return v___x_514_;
}
}
case 1:
{
lean_object* v_goal_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_520_; 
v_goal_516_ = lean_ctor_get(v_a_508_, 0);
lean_inc(v_goal_516_);
lean_dec_ref_known(v_a_508_, 1);
v___x_517_ = lean_box(0);
v___x_518_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_518_, 0, v_goal_516_);
lean_ctor_set(v___x_518_, 1, v___x_517_);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 0, v___x_518_);
v___x_520_ = v___x_510_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v___x_518_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
return v___x_520_;
}
}
default: 
{
lean_object* v___x_522_; lean_object* v___x_523_; 
lean_del_object(v___x_510_);
v___x_522_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall___closed__1);
v___x_523_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0___redArg(v___x_522_, v_a_502_, v_a_503_, v_a_504_, v_a_505_);
return v___x_523_;
}
}
}
}
else
{
lean_object* v_a_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_532_; 
v_a_525_ = lean_ctor_get(v___x_507_, 0);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_507_);
if (v_isSharedCheck_532_ == 0)
{
v___x_527_ = v___x_507_;
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_a_525_);
lean_dec(v___x_507_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_530_; 
if (v_isShared_528_ == 0)
{
v___x_530_ = v___x_527_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_a_525_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall___boxed(lean_object* v_goal_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall(v_goal_533_, v_a_534_, v_a_535_, v_a_536_, v_a_537_, v_a_538_, v_a_539_, v_a_540_, v_a_541_, v_a_542_, v_a_543_, v_a_544_);
lean_dec(v_a_544_);
lean_dec_ref(v_a_543_);
lean_dec(v_a_542_);
lean_dec_ref(v_a_541_);
lean_dec(v_a_540_);
lean_dec_ref(v_a_539_);
lean_dec(v_a_538_);
lean_dec_ref(v_a_537_);
lean_dec(v_a_536_);
lean_dec(v_a_535_);
lean_dec_ref(v_a_534_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0(lean_object* v_00_u03b1_547_, lean_object* v_msg_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_){
_start:
{
lean_object* v___x_561_; 
v___x_561_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0___redArg(v_msg_548_, v___y_556_, v___y_557_, v___y_558_, v___y_559_);
return v___x_561_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0___boxed(lean_object* v_00_u03b1_562_, lean_object* v_msg_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0(v_00_u03b1_562_, v_msg_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_, v___y_570_, v___y_571_, v___y_572_, v___y_573_, v___y_574_);
lean_dec(v___y_574_);
lean_dec_ref(v___y_573_);
lean_dec(v___y_572_);
lean_dec_ref(v___y_571_);
lean_dec(v___y_570_);
lean_dec_ref(v___y_569_);
lean_dec(v___y_568_);
lean_dec_ref(v___y_567_);
lean_dec(v___y_566_);
lean_dec(v___y_565_);
lean_dec_ref(v___y_564_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro(lean_object* v_goal_579_, lean_object* v_target_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_){
_start:
{
uint8_t v___x_594_; 
v___x_594_ = l_Lean_Expr_isForall(v_target_580_);
if (v___x_594_ == 0)
{
lean_object* v___x_595_; lean_object* v___x_596_; 
lean_dec(v_goal_579_);
v___x_595_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___closed__0));
v___x_596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_596_, 0, v___x_595_);
return v___x_596_;
}
else
{
lean_object* v___x_597_; 
v___x_597_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall(v_goal_579_, v_a_582_, v_a_583_, v_a_584_, v_a_585_, v_a_586_, v_a_587_, v_a_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_);
if (lean_obj_tag(v___x_597_) == 0)
{
lean_object* v_a_598_; lean_object* v___x_599_; 
v_a_598_ = lean_ctor_get(v___x_597_, 0);
lean_inc(v_a_598_);
lean_dec_ref_known(v___x_597_, 1);
v___x_599_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___redArg(v_a_598_, v_a_581_);
return v___x_599_;
}
else
{
lean_object* v_a_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_607_; 
v_a_600_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_607_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_607_ == 0)
{
v___x_602_ = v___x_597_;
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_a_600_);
lean_dec(v___x_597_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v___x_605_; 
if (v_isShared_603_ == 0)
{
v___x_605_ = v___x_602_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_a_600_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___boxed(lean_object* v_goal_608_, lean_object* v_target_609_, lean_object* v_a_610_, lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro(v_goal_608_, v_target_609_, v_a_610_, v_a_611_, v_a_612_, v_a_613_, v_a_614_, v_a_615_, v_a_616_, v_a_617_, v_a_618_, v_a_619_, v_a_620_, v_a_621_);
lean_dec(v_a_621_);
lean_dec_ref(v_a_620_);
lean_dec(v_a_619_);
lean_dec_ref(v_a_618_);
lean_dec(v_a_617_);
lean_dec_ref(v_a_616_);
lean_dec(v_a_615_);
lean_dec_ref(v_a_614_);
lean_dec(v_a_613_);
lean_dec(v_a_612_);
lean_dec_ref(v_a_611_);
lean_dec(v_a_610_);
lean_dec_ref(v_target_609_);
return v_res_623_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg___closed__1(void){
_start:
{
lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_625_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg___closed__0));
v___x_626_ = l_Lean_stringToMessageData(v___x_625_);
return v___x_626_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg___closed__3(void){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_628_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg___closed__2));
v___x_629_ = l_Lean_stringToMessageData(v___x_628_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg(lean_object* v_name_630_, lean_object* v_val_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_){
_start:
{
uint8_t v_useJP_641_; 
v_useJP_641_ = lean_ctor_get_uint8(v_a_632_, sizeof(void*)*7 + 1);
if (v_useJP_641_ == 0)
{
lean_dec(v_name_630_);
goto v___jp_638_;
}
else
{
uint8_t v___x_642_; 
lean_inc(v_name_630_);
v___x_642_ = l_Lean_Elab_Tactic_Do_isJP(v_name_630_);
if (v___x_642_ == 0)
{
lean_dec(v_name_630_);
goto v___jp_638_;
}
else
{
uint8_t v___x_643_; 
v___x_643_ = l_Lean_Expr_isLambda(v_val_631_);
if (v___x_643_ == 0)
{
lean_dec(v_name_630_);
goto v___jp_638_;
}
else
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_644_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg___closed__1);
v___x_645_ = l_Lean_MessageData_ofName(v_name_630_);
v___x_646_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_646_, 0, v___x_644_);
lean_ctor_set(v___x_646_, 1, v___x_645_);
v___x_647_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg___closed__3, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg___closed__3_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg___closed__3);
v___x_648_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_648_, 0, v___x_646_);
lean_ctor_set(v___x_648_, 1, v___x_647_);
v___x_649_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0___redArg(v___x_648_, v_a_633_, v_a_634_, v_a_635_, v_a_636_);
return v___x_649_;
}
}
}
v___jp_638_:
{
lean_object* v___x_639_; lean_object* v___x_640_; 
v___x_639_ = lean_box(0);
v___x_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_640_, 0, v___x_639_);
return v___x_640_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg___boxed(lean_object* v_name_650_, lean_object* v_val_651_, lean_object* v_a_652_, lean_object* v_a_653_, lean_object* v_a_654_, lean_object* v_a_655_, lean_object* v_a_656_, lean_object* v_a_657_){
_start:
{
lean_object* v_res_658_; 
v_res_658_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg(v_name_650_, v_val_651_, v_a_652_, v_a_653_, v_a_654_, v_a_655_, v_a_656_);
lean_dec(v_a_656_);
lean_dec_ref(v_a_655_);
lean_dec(v_a_654_);
lean_dec_ref(v_a_653_);
lean_dec_ref(v_a_652_);
lean_dec_ref(v_val_651_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP(lean_object* v_name_659_, lean_object* v_val_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_){
_start:
{
lean_object* v___x_673_; 
v___x_673_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg(v_name_659_, v_val_660_, v_a_661_, v_a_668_, v_a_669_, v_a_670_, v_a_671_);
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___boxed(lean_object* v_name_674_, lean_object* v_val_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP(v_name_674_, v_val_675_, v_a_676_, v_a_677_, v_a_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_, v_a_683_, v_a_684_, v_a_685_, v_a_686_);
lean_dec(v_a_686_);
lean_dec_ref(v_a_685_);
lean_dec(v_a_684_);
lean_dec_ref(v_a_683_);
lean_dec(v_a_682_);
lean_dec_ref(v_a_681_);
lean_dec(v_a_680_);
lean_dec_ref(v_a_679_);
lean_dec(v_a_678_);
lean_dec(v_a_677_);
lean_dec_ref(v_a_676_);
lean_dec_ref(v_val_675_);
return v_res_688_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg___closed__2(void){
_start:
{
lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_692_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg___closed__1));
v___x_693_ = l_Lean_stringToMessageData(v___x_692_);
return v___x_693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg(lean_object* v_goal_694_, lean_object* v_val_695_, lean_object* v_body_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_){
_start:
{
uint8_t v___x_704_; 
v___x_704_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Expr_isDuplicable(v_val_695_);
if (v___x_704_ == 0)
{
lean_object* v___x_705_; lean_object* v___x_706_; 
lean_dec_ref(v_body_696_);
lean_dec_ref(v_val_695_);
v___x_705_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg___closed__0));
v___x_706_ = l_Lean_Meta_Sym_intros(v_goal_694_, v___x_705_, v_a_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_);
if (lean_obj_tag(v___x_706_) == 0)
{
lean_object* v_a_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_717_; 
v_a_707_ = lean_ctor_get(v___x_706_, 0);
v_isSharedCheck_717_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_717_ == 0)
{
v___x_709_ = v___x_706_;
v_isShared_710_ = v_isSharedCheck_717_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_a_707_);
lean_dec(v___x_706_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_717_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
if (lean_obj_tag(v_a_707_) == 1)
{
lean_object* v_mvarId_711_; lean_object* v___x_713_; 
v_mvarId_711_ = lean_ctor_get(v_a_707_, 1);
lean_inc(v_mvarId_711_);
lean_dec_ref_known(v_a_707_, 2);
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 0, v_mvarId_711_);
v___x_713_ = v___x_709_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_mvarId_711_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
else
{
lean_object* v___x_715_; lean_object* v___x_716_; 
lean_del_object(v___x_709_);
lean_dec(v_a_707_);
v___x_715_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg___closed__2, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg___closed__2);
v___x_716_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0___redArg(v___x_715_, v_a_699_, v_a_700_, v_a_701_, v_a_702_);
return v___x_716_;
}
}
}
else
{
lean_object* v_a_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_725_; 
v_a_718_ = lean_ctor_get(v___x_706_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_725_ == 0)
{
v___x_720_ = v___x_706_;
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_a_718_);
lean_dec(v___x_706_);
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
else
{
lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_726_ = lean_unsigned_to_nat(1u);
v___x_727_ = lean_mk_empty_array_with_capacity(v___x_726_);
v___x_728_ = lean_array_push(v___x_727_, v_val_695_);
v___x_729_ = l_Lean_Meta_Sym_instantiateRevBetaS___redArg(v_body_696_, v___x_728_, v_a_698_);
lean_dec_ref(v___x_728_);
if (lean_obj_tag(v___x_729_) == 0)
{
lean_object* v_a_730_; lean_object* v___x_731_; 
v_a_730_ = lean_ctor_get(v___x_729_, 0);
lean_inc(v_a_730_);
lean_dec_ref_known(v___x_729_, 1);
v___x_731_ = l_Lean_MVarId_replaceTargetDefEq(v_goal_694_, v_a_730_, v_a_699_, v_a_700_, v_a_701_, v_a_702_);
return v___x_731_;
}
else
{
lean_object* v_a_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_739_; 
lean_dec(v_goal_694_);
v_a_732_ = lean_ctor_get(v___x_729_, 0);
v_isSharedCheck_739_ = !lean_is_exclusive(v___x_729_);
if (v_isSharedCheck_739_ == 0)
{
v___x_734_ = v___x_729_;
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_a_732_);
lean_dec(v___x_729_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___x_737_; 
if (v_isShared_735_ == 0)
{
v___x_737_ = v___x_734_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v_a_732_);
v___x_737_ = v_reuseFailAlloc_738_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
return v___x_737_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg___boxed(lean_object* v_goal_740_, lean_object* v_val_741_, lean_object* v_body_742_, lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_){
_start:
{
lean_object* v_res_750_; 
v_res_750_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg(v_goal_740_, v_val_741_, v_body_742_, v_a_743_, v_a_744_, v_a_745_, v_a_746_, v_a_747_, v_a_748_);
lean_dec(v_a_748_);
lean_dec_ref(v_a_747_);
lean_dec(v_a_746_);
lean_dec_ref(v_a_745_);
lean_dec(v_a_744_);
lean_dec_ref(v_a_743_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet(lean_object* v_goal_751_, lean_object* v_val_752_, lean_object* v_body_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_, lean_object* v_a_764_){
_start:
{
lean_object* v___x_766_; 
v___x_766_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg(v_goal_751_, v_val_752_, v_body_753_, v_a_759_, v_a_760_, v_a_761_, v_a_762_, v_a_763_, v_a_764_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___boxed(lean_object* v_goal_767_, lean_object* v_val_768_, lean_object* v_body_769_, lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_, lean_object* v_a_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_, lean_object* v_a_781_){
_start:
{
lean_object* v_res_782_; 
v_res_782_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet(v_goal_767_, v_val_768_, v_body_769_, v_a_770_, v_a_771_, v_a_772_, v_a_773_, v_a_774_, v_a_775_, v_a_776_, v_a_777_, v_a_778_, v_a_779_, v_a_780_);
lean_dec(v_a_780_);
lean_dec_ref(v_a_779_);
lean_dec(v_a_778_);
lean_dec_ref(v_a_777_);
lean_dec(v_a_776_);
lean_dec_ref(v_a_775_);
lean_dec(v_a_774_);
lean_dec_ref(v_a_773_);
lean_dec(v_a_772_);
lean_dec(v_a_771_);
lean_dec_ref(v_a_770_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTargetLetIntro___redArg(lean_object* v_goal_783_, lean_object* v_target_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_){
_start:
{
if (lean_obj_tag(v_target_784_) == 8)
{
lean_object* v_value_793_; lean_object* v_body_794_; lean_object* v___x_795_; 
v_value_793_ = lean_ctor_get(v_target_784_, 2);
lean_inc_ref(v_value_793_);
v_body_794_ = lean_ctor_get(v_target_784_, 3);
lean_inc_ref(v_body_794_);
lean_dec_ref_known(v_target_784_, 4);
v___x_795_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg(v_goal_783_, v_value_793_, v_body_794_, v_a_786_, v_a_787_, v_a_788_, v_a_789_, v_a_790_, v_a_791_);
if (lean_obj_tag(v___x_795_) == 0)
{
lean_object* v_a_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
v_a_796_ = lean_ctor_get(v___x_795_, 0);
lean_inc(v_a_796_);
lean_dec_ref_known(v___x_795_, 1);
v___x_797_ = lean_box(0);
v___x_798_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_798_, 0, v_a_796_);
lean_ctor_set(v___x_798_, 1, v___x_797_);
v___x_799_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___redArg(v___x_798_, v_a_785_);
return v___x_799_;
}
else
{
lean_object* v_a_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_807_; 
v_a_800_ = lean_ctor_get(v___x_795_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_795_);
if (v_isSharedCheck_807_ == 0)
{
v___x_802_ = v___x_795_;
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_a_800_);
lean_dec(v___x_795_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
lean_object* v___x_805_; 
if (v_isShared_803_ == 0)
{
v___x_805_ = v___x_802_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_a_800_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
}
else
{
lean_object* v___x_808_; lean_object* v___x_809_; 
lean_dec_ref(v_target_784_);
lean_dec(v_goal_783_);
v___x_808_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___closed__0));
v___x_809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_809_, 0, v___x_808_);
return v___x_809_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTargetLetIntro___redArg___boxed(lean_object* v_goal_810_, lean_object* v_target_811_, lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_, lean_object* v_a_816_, lean_object* v_a_817_, lean_object* v_a_818_, lean_object* v_a_819_){
_start:
{
lean_object* v_res_820_; 
v_res_820_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTargetLetIntro___redArg(v_goal_810_, v_target_811_, v_a_812_, v_a_813_, v_a_814_, v_a_815_, v_a_816_, v_a_817_, v_a_818_);
lean_dec(v_a_818_);
lean_dec_ref(v_a_817_);
lean_dec(v_a_816_);
lean_dec_ref(v_a_815_);
lean_dec(v_a_814_);
lean_dec_ref(v_a_813_);
lean_dec(v_a_812_);
return v_res_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTargetLetIntro(lean_object* v_goal_821_, lean_object* v_target_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_, lean_object* v_a_829_, lean_object* v_a_830_, lean_object* v_a_831_, lean_object* v_a_832_, lean_object* v_a_833_, lean_object* v_a_834_){
_start:
{
lean_object* v___x_836_; 
v___x_836_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTargetLetIntro___redArg(v_goal_821_, v_target_822_, v_a_823_, v_a_829_, v_a_830_, v_a_831_, v_a_832_, v_a_833_, v_a_834_);
return v___x_836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTargetLetIntro___boxed(lean_object* v_goal_837_, lean_object* v_target_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_, lean_object* v_a_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_, lean_object* v_a_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTargetLetIntro(v_goal_837_, v_target_838_, v_a_839_, v_a_840_, v_a_841_, v_a_842_, v_a_843_, v_a_844_, v_a_845_, v_a_846_, v_a_847_, v_a_848_, v_a_849_, v_a_850_);
lean_dec(v_a_850_);
lean_dec_ref(v_a_849_);
lean_dec(v_a_848_);
lean_dec_ref(v_a_847_);
lean_dec(v_a_846_);
lean_dec_ref(v_a_845_);
lean_dec(v_a_844_);
lean_dec_ref(v_a_843_);
lean_dec(v_a_842_);
lean_dec(v_a_841_);
lean_dec_ref(v_a_840_);
lean_dec(v_a_839_);
return v_res_852_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldTriple___closed__1(void){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_854_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldTriple___closed__0));
v___x_855_ = l_Lean_stringToMessageData(v___x_854_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldTriple(lean_object* v_goal_856_, lean_object* v_a_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_){
_start:
{
lean_object* v_introRules_869_; lean_object* v_tripleIntro_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v_introRules_869_ = lean_ctor_get(v_a_857_, 0);
v_tripleIntro_870_ = lean_ctor_get(v_introRules_869_, 0);
v___x_871_ = lean_box(0);
lean_inc_ref(v_tripleIntro_870_);
v___x_872_ = l_Lean_Meta_Sym_BackwardRule_applyChecked(v_tripleIntro_870_, v_goal_856_, v___x_871_, v_a_857_, v_a_858_, v_a_859_, v_a_860_, v_a_861_, v_a_862_, v_a_863_, v_a_864_, v_a_865_, v_a_866_, v_a_867_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_890_; 
v_a_873_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_890_ == 0)
{
v___x_875_ = v___x_872_;
v_isShared_876_ = v_isSharedCheck_890_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_a_873_);
lean_dec(v___x_872_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_890_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v___y_878_; lean_object* v___y_879_; lean_object* v___y_880_; lean_object* v___y_881_; 
if (lean_obj_tag(v_a_873_) == 1)
{
lean_object* v_mvarIds_884_; 
v_mvarIds_884_ = lean_ctor_get(v_a_873_, 0);
lean_inc(v_mvarIds_884_);
lean_dec_ref_known(v_a_873_, 1);
if (lean_obj_tag(v_mvarIds_884_) == 1)
{
lean_object* v_tail_885_; 
v_tail_885_ = lean_ctor_get(v_mvarIds_884_, 1);
if (lean_obj_tag(v_tail_885_) == 0)
{
lean_object* v_head_886_; lean_object* v___x_888_; 
v_head_886_ = lean_ctor_get(v_mvarIds_884_, 0);
lean_inc(v_head_886_);
lean_dec_ref_known(v_mvarIds_884_, 2);
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 0, v_head_886_);
v___x_888_ = v___x_875_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v_head_886_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
}
}
else
{
lean_dec_ref_known(v_mvarIds_884_, 2);
lean_del_object(v___x_875_);
v___y_878_ = v_a_864_;
v___y_879_ = v_a_865_;
v___y_880_ = v_a_866_;
v___y_881_ = v_a_867_;
goto v___jp_877_;
}
}
else
{
lean_dec(v_mvarIds_884_);
lean_del_object(v___x_875_);
v___y_878_ = v_a_864_;
v___y_879_ = v_a_865_;
v___y_880_ = v_a_866_;
v___y_881_ = v_a_867_;
goto v___jp_877_;
}
}
else
{
lean_del_object(v___x_875_);
lean_dec(v_a_873_);
v___y_878_ = v_a_864_;
v___y_879_ = v_a_865_;
v___y_880_ = v_a_866_;
v___y_881_ = v_a_867_;
goto v___jp_877_;
}
v___jp_877_:
{
lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_882_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldTriple___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldTriple___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldTriple___closed__1);
v___x_883_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0___redArg(v___x_882_, v___y_878_, v___y_879_, v___y_880_, v___y_881_);
return v___x_883_;
}
}
}
else
{
lean_object* v_a_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_898_; 
v_a_891_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_898_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_898_ == 0)
{
v___x_893_ = v___x_872_;
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_a_891_);
lean_dec(v___x_872_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_896_; 
if (v_isShared_894_ == 0)
{
v___x_896_ = v___x_893_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_a_891_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldTriple___boxed(lean_object* v_goal_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldTriple(v_goal_899_, v_a_900_, v_a_901_, v_a_902_, v_a_903_, v_a_904_, v_a_905_, v_a_906_, v_a_907_, v_a_908_, v_a_909_, v_a_910_);
lean_dec(v_a_910_);
lean_dec_ref(v_a_909_);
lean_dec(v_a_908_);
lean_dec_ref(v_a_907_);
lean_dec(v_a_906_);
lean_dec_ref(v_a_905_);
lean_dec(v_a_904_);
lean_dec_ref(v_a_903_);
lean_dec(v_a_902_);
lean_dec(v_a_901_);
lean_dec_ref(v_a_900_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTripleUnfold(lean_object* v_goal_919_, lean_object* v_target_920_, lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_){
_start:
{
lean_object* v___x_934_; uint8_t v___x_935_; 
v___x_934_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTripleUnfold___closed__1));
v___x_935_ = l_Lean_Expr_isAppOf(v_target_920_, v___x_934_);
if (v___x_935_ == 0)
{
lean_object* v___x_936_; lean_object* v___x_937_; 
lean_dec(v_goal_919_);
v___x_936_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___closed__0));
v___x_937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_937_, 0, v___x_936_);
return v___x_937_;
}
else
{
lean_object* v___x_938_; 
v___x_938_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldTriple(v_goal_919_, v_a_922_, v_a_923_, v_a_924_, v_a_925_, v_a_926_, v_a_927_, v_a_928_, v_a_929_, v_a_930_, v_a_931_, v_a_932_);
if (lean_obj_tag(v___x_938_) == 0)
{
lean_object* v_a_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; 
v_a_939_ = lean_ctor_get(v___x_938_, 0);
lean_inc(v_a_939_);
lean_dec_ref_known(v___x_938_, 1);
v___x_940_ = lean_box(0);
v___x_941_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_941_, 0, v_a_939_);
lean_ctor_set(v___x_941_, 1, v___x_940_);
v___x_942_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___redArg(v___x_941_, v_a_921_);
return v___x_942_;
}
else
{
lean_object* v_a_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_950_; 
v_a_943_ = lean_ctor_get(v___x_938_, 0);
v_isSharedCheck_950_ = !lean_is_exclusive(v___x_938_);
if (v_isSharedCheck_950_ == 0)
{
v___x_945_ = v___x_938_;
v_isShared_946_ = v_isSharedCheck_950_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_a_943_);
lean_dec(v___x_938_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_950_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_948_; 
if (v_isShared_946_ == 0)
{
v___x_948_ = v___x_945_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v_a_943_);
v___x_948_ = v_reuseFailAlloc_949_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
return v___x_948_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTripleUnfold___boxed(lean_object* v_goal_951_, lean_object* v_target_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_, lean_object* v_a_963_, lean_object* v_a_964_, lean_object* v_a_965_){
_start:
{
lean_object* v_res_966_; 
v_res_966_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTripleUnfold(v_goal_951_, v_target_952_, v_a_953_, v_a_954_, v_a_955_, v_a_956_, v_a_957_, v_a_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_, v_a_963_, v_a_964_);
lean_dec(v_a_964_);
lean_dec_ref(v_a_963_);
lean_dec(v_a_962_);
lean_dec_ref(v_a_961_);
lean_dec(v_a_960_);
lean_dec_ref(v_a_959_);
lean_dec(v_a_958_);
lean_dec_ref(v_a_957_);
lean_dec(v_a_956_);
lean_dec(v_a_955_);
lean_dec_ref(v_a_954_);
lean_dec(v_a_953_);
lean_dec_ref(v_target_952_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_numLeadingForalls(lean_object* v_x_967_){
_start:
{
if (lean_obj_tag(v_x_967_) == 7)
{
lean_object* v_body_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; 
v_body_968_ = lean_ctor_get(v_x_967_, 2);
v___x_969_ = l_Lean_Expr_consumeMData(v_body_968_);
v___x_970_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_numLeadingForalls(v___x_969_);
lean_dec_ref(v___x_969_);
v___x_971_ = lean_unsigned_to_nat(1u);
v___x_972_ = lean_nat_add(v___x_970_, v___x_971_);
lean_dec(v___x_970_);
return v___x_972_;
}
else
{
lean_object* v___x_973_; 
v___x_973_ = lean_unsigned_to_nat(0u);
return v___x_973_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_numLeadingForalls___boxed(lean_object* v_x_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_numLeadingForalls(v_x_974_);
lean_dec_ref(v_x_974_);
return v_res_975_;
}
}
static lean_object* _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_977_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__0));
v___x_978_ = l_Lean_stringToMessageData(v___x_977_);
return v___x_978_;
}
}
static lean_object* _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_980_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__2));
v___x_981_ = l_Lean_stringToMessageData(v___x_980_);
return v___x_981_;
}
}
static lean_object* _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__9(void){
_start:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_1001_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__8));
v___x_1002_ = l_Lean_stringToMessageData(v___x_1001_);
return v___x_1002_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg(uint8_t v___y_1003_, lean_object* v___y_1004_, lean_object* v_a_1005_, lean_object* v_range_1006_, lean_object* v_b_1007_, lean_object* v_i_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_){
_start:
{
lean_object* v_stop_1021_; lean_object* v_step_1022_; lean_object* v_a_1024_; lean_object* v___y_1028_; lean_object* v___y_1029_; lean_object* v___y_1030_; lean_object* v___y_1031_; lean_object* v___y_1032_; lean_object* v___y_1033_; uint8_t v___x_1049_; 
v_stop_1021_ = lean_ctor_get(v_range_1006_, 1);
v_step_1022_ = lean_ctor_get(v_range_1006_, 2);
v___x_1049_ = lean_nat_dec_lt(v_i_1008_, v_stop_1021_);
if (v___x_1049_ == 0)
{
lean_object* v___x_1050_; 
lean_dec(v_i_1008_);
lean_dec_ref(v___y_1004_);
v___x_1050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1050_, 0, v_b_1007_);
return v___x_1050_;
}
else
{
lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1051_ = lean_box(0);
lean_inc(v_b_1007_);
lean_inc_ref(v___y_1004_);
v___x_1052_ = l_Lean_Meta_Sym_BackwardRule_applyChecked(v___y_1004_, v_b_1007_, v___x_1051_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_, v___y_1019_);
if (lean_obj_tag(v___x_1052_) == 0)
{
lean_object* v_a_1053_; lean_object* v___y_1055_; lean_object* v___y_1056_; lean_object* v___y_1057_; lean_object* v___y_1058_; 
v_a_1053_ = lean_ctor_get(v___x_1052_, 0);
lean_inc(v_a_1053_);
lean_dec_ref_known(v___x_1052_, 1);
if (lean_obj_tag(v_a_1053_) == 1)
{
lean_object* v_mvarIds_1062_; lean_object* v___x_1064_; uint8_t v_isShared_1065_; uint8_t v_isSharedCheck_1098_; 
v_mvarIds_1062_ = lean_ctor_get(v_a_1053_, 0);
v_isSharedCheck_1098_ = !lean_is_exclusive(v_a_1053_);
if (v_isSharedCheck_1098_ == 0)
{
v___x_1064_ = v_a_1053_;
v_isShared_1065_ = v_isSharedCheck_1098_;
goto v_resetjp_1063_;
}
else
{
lean_inc(v_mvarIds_1062_);
lean_dec(v_a_1053_);
v___x_1064_ = lean_box(0);
v_isShared_1065_ = v_isSharedCheck_1098_;
goto v_resetjp_1063_;
}
v_resetjp_1063_:
{
if (lean_obj_tag(v_mvarIds_1062_) == 1)
{
lean_object* v_head_1066_; lean_object* v_tail_1067_; lean_object* v___y_1069_; 
v_head_1066_ = lean_ctor_get(v_mvarIds_1062_, 0);
lean_inc(v_head_1066_);
v_tail_1067_ = lean_ctor_get(v_mvarIds_1062_, 1);
lean_inc(v_tail_1067_);
lean_dec_ref_known(v_mvarIds_1062_, 2);
if (lean_obj_tag(v_tail_1067_) == 0)
{
lean_object* v_stateArgNames_1091_; lean_object* v___x_1092_; uint8_t v___x_1093_; 
lean_dec(v_b_1007_);
v_stateArgNames_1091_ = lean_ctor_get(v_a_1005_, 6);
v___x_1092_ = lean_array_get_size(v_stateArgNames_1091_);
v___x_1093_ = lean_nat_dec_lt(v_i_1008_, v___x_1092_);
if (v___x_1093_ == 0)
{
lean_del_object(v___x_1064_);
v___y_1069_ = v___x_1051_;
goto v___jp_1068_;
}
else
{
lean_object* v___x_1094_; lean_object* v___x_1096_; 
v___x_1094_ = lean_array_fget_borrowed(v_stateArgNames_1091_, v_i_1008_);
lean_inc(v___x_1094_);
if (v_isShared_1065_ == 0)
{
lean_ctor_set(v___x_1064_, 0, v___x_1094_);
v___x_1096_ = v___x_1064_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v___x_1094_);
v___x_1096_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
v___y_1069_ = v___x_1096_;
goto v___jp_1068_;
}
}
}
else
{
lean_dec(v_tail_1067_);
lean_dec(v_head_1066_);
lean_del_object(v___x_1064_);
lean_dec(v_i_1008_);
lean_dec_ref(v___y_1004_);
v___y_1055_ = v___y_1016_;
v___y_1056_ = v___y_1017_;
v___y_1057_ = v___y_1018_;
v___y_1058_ = v___y_1019_;
goto v___jp_1054_;
}
v___jp_1068_:
{
lean_object* v___x_1070_; 
v___x_1070_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic(v_head_1066_, v___y_1069_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_, v___y_1019_);
if (lean_obj_tag(v___x_1070_) == 0)
{
lean_object* v_a_1071_; 
v_a_1071_ = lean_ctor_get(v___x_1070_, 0);
lean_inc(v_a_1071_);
lean_dec_ref_known(v___x_1070_, 1);
if (lean_obj_tag(v_a_1071_) == 1)
{
lean_object* v_val_1072_; 
v_val_1072_ = lean_ctor_get(v_a_1071_, 0);
lean_inc(v_val_1072_);
lean_dec_ref_known(v_a_1071_, 1);
v_a_1024_ = v_val_1072_;
goto v___jp_1023_;
}
else
{
lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v_a_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1082_; 
lean_dec(v_a_1071_);
lean_dec(v_i_1008_);
lean_dec_ref(v___y_1004_);
v___x_1073_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__9, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__9_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__9);
v___x_1074_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0___redArg(v___x_1073_, v___y_1016_, v___y_1017_, v___y_1018_, v___y_1019_);
v_a_1075_ = lean_ctor_get(v___x_1074_, 0);
v_isSharedCheck_1082_ = !lean_is_exclusive(v___x_1074_);
if (v_isSharedCheck_1082_ == 0)
{
v___x_1077_ = v___x_1074_;
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_a_1075_);
lean_dec(v___x_1074_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1080_; 
if (v_isShared_1078_ == 0)
{
v___x_1080_ = v___x_1077_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v_a_1075_);
v___x_1080_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
return v___x_1080_;
}
}
}
}
else
{
lean_object* v_a_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1090_; 
lean_dec(v_i_1008_);
lean_dec_ref(v___y_1004_);
v_a_1083_ = lean_ctor_get(v___x_1070_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v___x_1070_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1085_ = v___x_1070_;
v_isShared_1086_ = v_isSharedCheck_1090_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_a_1083_);
lean_dec(v___x_1070_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1090_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1088_; 
if (v_isShared_1086_ == 0)
{
v___x_1088_ = v___x_1085_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v_a_1083_);
v___x_1088_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
return v___x_1088_;
}
}
}
}
}
else
{
lean_del_object(v___x_1064_);
lean_dec(v_mvarIds_1062_);
lean_dec(v_i_1008_);
lean_dec_ref(v___y_1004_);
v___y_1055_ = v___y_1016_;
v___y_1056_ = v___y_1017_;
v___y_1057_ = v___y_1018_;
v___y_1058_ = v___y_1019_;
goto v___jp_1054_;
}
}
}
else
{
lean_dec(v_a_1053_);
lean_dec(v_i_1008_);
lean_dec_ref(v___y_1004_);
v___y_1055_ = v___y_1016_;
v___y_1056_ = v___y_1017_;
v___y_1057_ = v___y_1018_;
v___y_1058_ = v___y_1019_;
goto v___jp_1054_;
}
v___jp_1054_:
{
lean_object* v___x_1059_; 
v___x_1059_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__3, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__3_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__3);
if (v___y_1003_ == 0)
{
lean_object* v___x_1060_; 
v___x_1060_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__5));
v___y_1028_ = v___x_1059_;
v___y_1029_ = v___y_1056_;
v___y_1030_ = v___y_1058_;
v___y_1031_ = v___y_1055_;
v___y_1032_ = v___y_1057_;
v___y_1033_ = v___x_1060_;
goto v___jp_1027_;
}
else
{
lean_object* v___x_1061_; 
v___x_1061_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__7));
v___y_1028_ = v___x_1059_;
v___y_1029_ = v___y_1056_;
v___y_1030_ = v___y_1058_;
v___y_1031_ = v___y_1055_;
v___y_1032_ = v___y_1057_;
v___y_1033_ = v___x_1061_;
goto v___jp_1027_;
}
}
}
else
{
lean_object* v_a_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1106_; 
lean_dec(v_i_1008_);
lean_dec(v_b_1007_);
lean_dec_ref(v___y_1004_);
v_a_1099_ = lean_ctor_get(v___x_1052_, 0);
v_isSharedCheck_1106_ = !lean_is_exclusive(v___x_1052_);
if (v_isSharedCheck_1106_ == 0)
{
v___x_1101_ = v___x_1052_;
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_a_1099_);
lean_dec(v___x_1052_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1104_; 
if (v_isShared_1102_ == 0)
{
v___x_1104_ = v___x_1101_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v_a_1099_);
v___x_1104_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
return v___x_1104_;
}
}
}
}
v___jp_1023_:
{
lean_object* v___x_1025_; 
v___x_1025_ = lean_nat_add(v_i_1008_, v_step_1022_);
lean_dec(v_i_1008_);
v_b_1007_ = v_a_1024_;
v_i_1008_ = v___x_1025_;
goto _start;
}
v___jp_1027_:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v_a_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1048_; 
lean_inc(v___y_1033_);
v___x_1034_ = l_Lean_MessageData_ofName(v___y_1033_);
lean_inc_ref(v___y_1028_);
v___x_1035_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1035_, 0, v___y_1028_);
lean_ctor_set(v___x_1035_, 1, v___x_1034_);
v___x_1036_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__1, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__1_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___closed__1);
v___x_1037_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1035_);
lean_ctor_set(v___x_1037_, 1, v___x_1036_);
v___x_1038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1038_, 0, v_b_1007_);
v___x_1039_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1037_);
lean_ctor_set(v___x_1039_, 1, v___x_1038_);
v___x_1040_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0___redArg(v___x_1039_, v___y_1031_, v___y_1029_, v___y_1032_, v___y_1030_);
v_a_1041_ = lean_ctor_get(v___x_1040_, 0);
v_isSharedCheck_1048_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_1043_ = v___x_1040_;
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_a_1041_);
lean_dec(v___x_1040_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___x_1046_; 
if (v_isShared_1044_ == 0)
{
v___x_1046_ = v___x_1043_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v_a_1041_);
v___x_1046_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
return v___x_1046_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg___boxed(lean_object** _args){
lean_object* v___y_1107_ = _args[0];
lean_object* v___y_1108_ = _args[1];
lean_object* v_a_1109_ = _args[2];
lean_object* v_range_1110_ = _args[3];
lean_object* v_b_1111_ = _args[4];
lean_object* v_i_1112_ = _args[5];
lean_object* v___y_1113_ = _args[6];
lean_object* v___y_1114_ = _args[7];
lean_object* v___y_1115_ = _args[8];
lean_object* v___y_1116_ = _args[9];
lean_object* v___y_1117_ = _args[10];
lean_object* v___y_1118_ = _args[11];
lean_object* v___y_1119_ = _args[12];
lean_object* v___y_1120_ = _args[13];
lean_object* v___y_1121_ = _args[14];
lean_object* v___y_1122_ = _args[15];
lean_object* v___y_1123_ = _args[16];
lean_object* v___y_1124_ = _args[17];
_start:
{
uint8_t v___y_13176__boxed_1125_; lean_object* v_res_1126_; 
v___y_13176__boxed_1125_ = lean_unbox(v___y_1107_);
v_res_1126_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg(v___y_13176__boxed_1125_, v___y_1108_, v_a_1109_, v_range_1110_, v_b_1111_, v_i_1112_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_);
lean_dec(v___y_1123_);
lean_dec_ref(v___y_1122_);
lean_dec(v___y_1121_);
lean_dec_ref(v___y_1120_);
lean_dec(v___y_1119_);
lean_dec_ref(v___y_1118_);
lean_dec(v___y_1117_);
lean_dec_ref(v___y_1116_);
lean_dec(v___y_1115_);
lean_dec(v___y_1114_);
lean_dec_ref(v___y_1113_);
lean_dec_ref(v_range_1110_);
lean_dec_ref(v_a_1109_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg(lean_object* v_goal_1127_, uint8_t v_preIsTop_1128_, lean_object* v_00_u03b1_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_){
_start:
{
lean_object* v___y_1143_; 
if (v_preIsTop_1128_ == 0)
{
lean_object* v_introRules_1149_; lean_object* v_stateArgIntro_1150_; 
v_introRules_1149_ = lean_ctor_get(v_a_1130_, 0);
v_stateArgIntro_1150_ = lean_ctor_get(v_introRules_1149_, 1);
v___y_1143_ = v_stateArgIntro_1150_;
goto v___jp_1142_;
}
else
{
lean_object* v_introRules_1151_; lean_object* v_topStateArgIntro_1152_; 
v_introRules_1151_ = lean_ctor_get(v_a_1130_, 0);
v_topStateArgIntro_1152_ = lean_ctor_get(v_introRules_1151_, 2);
v___y_1143_ = v_topStateArgIntro_1152_;
goto v___jp_1142_;
}
v___jp_1142_:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1144_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_numLeadingForalls(v_00_u03b1_1129_);
v___x_1145_ = lean_unsigned_to_nat(0u);
v___x_1146_ = lean_unsigned_to_nat(1u);
v___x_1147_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1145_);
lean_ctor_set(v___x_1147_, 1, v___x_1144_);
lean_ctor_set(v___x_1147_, 2, v___x_1146_);
lean_inc_ref(v___y_1143_);
v___x_1148_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg(v_preIsTop_1128_, v___y_1143_, v_a_1130_, v___x_1147_, v_goal_1127_, v___x_1145_, v_a_1130_, v_a_1131_, v_a_1132_, v_a_1133_, v_a_1134_, v_a_1135_, v_a_1136_, v_a_1137_, v_a_1138_, v_a_1139_, v_a_1140_);
lean_dec_ref_known(v___x_1147_, 3);
return v___x_1148_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg___boxed(lean_object* v_goal_1153_, lean_object* v_preIsTop_1154_, lean_object* v_00_u03b1_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_){
_start:
{
uint8_t v_preIsTop_boxed_1168_; lean_object* v_res_1169_; 
v_preIsTop_boxed_1168_ = lean_unbox(v_preIsTop_1154_);
v_res_1169_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg(v_goal_1153_, v_preIsTop_boxed_1168_, v_00_u03b1_1155_, v_a_1156_, v_a_1157_, v_a_1158_, v_a_1159_, v_a_1160_, v_a_1161_, v_a_1162_, v_a_1163_, v_a_1164_, v_a_1165_, v_a_1166_);
lean_dec(v_a_1166_);
lean_dec_ref(v_a_1165_);
lean_dec(v_a_1164_);
lean_dec_ref(v_a_1163_);
lean_dec(v_a_1162_);
lean_dec_ref(v_a_1161_);
lean_dec(v_a_1160_);
lean_dec_ref(v_a_1159_);
lean_dec(v_a_1158_);
lean_dec(v_a_1157_);
lean_dec_ref(v_a_1156_);
lean_dec_ref(v_00_u03b1_1155_);
return v_res_1169_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0(uint8_t v___y_1170_, lean_object* v___y_1171_, lean_object* v_a_1172_, lean_object* v_range_1173_, lean_object* v_b_1174_, lean_object* v_i_1175_, lean_object* v_hs_1176_, lean_object* v_hl_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_){
_start:
{
lean_object* v___x_1190_; 
v___x_1190_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___redArg(v___y_1170_, v___y_1171_, v_a_1172_, v_range_1173_, v_b_1174_, v_i_1175_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_);
return v___x_1190_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0___boxed(lean_object** _args){
lean_object* v___y_1191_ = _args[0];
lean_object* v___y_1192_ = _args[1];
lean_object* v_a_1193_ = _args[2];
lean_object* v_range_1194_ = _args[3];
lean_object* v_b_1195_ = _args[4];
lean_object* v_i_1196_ = _args[5];
lean_object* v_hs_1197_ = _args[6];
lean_object* v_hl_1198_ = _args[7];
lean_object* v___y_1199_ = _args[8];
lean_object* v___y_1200_ = _args[9];
lean_object* v___y_1201_ = _args[10];
lean_object* v___y_1202_ = _args[11];
lean_object* v___y_1203_ = _args[12];
lean_object* v___y_1204_ = _args[13];
lean_object* v___y_1205_ = _args[14];
lean_object* v___y_1206_ = _args[15];
lean_object* v___y_1207_ = _args[16];
lean_object* v___y_1208_ = _args[17];
lean_object* v___y_1209_ = _args[18];
lean_object* v___y_1210_ = _args[19];
_start:
{
uint8_t v___y_13430__boxed_1211_; lean_object* v_res_1212_; 
v___y_13430__boxed_1211_ = lean_unbox(v___y_1191_);
v_res_1212_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg_spec__0(v___y_13430__boxed_1211_, v___y_1192_, v_a_1193_, v_range_1194_, v_b_1195_, v_i_1196_, v_hs_1197_, v_hl_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_);
lean_dec(v___y_1209_);
lean_dec_ref(v___y_1208_);
lean_dec(v___y_1207_);
lean_dec_ref(v___y_1206_);
lean_dec(v___y_1205_);
lean_dec_ref(v___y_1204_);
lean_dec(v___y_1203_);
lean_dec_ref(v___y_1202_);
lean_dec(v___y_1201_);
lean_dec(v___y_1200_);
lean_dec_ref(v___y_1199_);
lean_dec_ref(v_range_1194_);
lean_dec_ref(v_a_1193_);
return v_res_1212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introPre___redArg(lean_object* v_goal_1213_, uint8_t v_ofProp_1214_, lean_object* v_a_1215_, lean_object* v_a_1216_, lean_object* v_a_1217_, lean_object* v_a_1218_, lean_object* v_a_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_){
_start:
{
lean_object* v_introRules_1223_; lean_object* v___x_1224_; 
v_introRules_1223_ = lean_ctor_get(v_a_1215_, 0);
lean_inc_ref(v_introRules_1223_);
v___x_1224_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre(v_introRules_1223_, v_ofProp_1214_, v_goal_1213_, v_a_1216_, v_a_1217_, v_a_1218_, v_a_1219_, v_a_1220_, v_a_1221_);
return v___x_1224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introPre___redArg___boxed(lean_object* v_goal_1225_, lean_object* v_ofProp_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_){
_start:
{
uint8_t v_ofProp_boxed_1235_; lean_object* v_res_1236_; 
v_ofProp_boxed_1235_ = lean_unbox(v_ofProp_1226_);
v_res_1236_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introPre___redArg(v_goal_1225_, v_ofProp_boxed_1235_, v_a_1227_, v_a_1228_, v_a_1229_, v_a_1230_, v_a_1231_, v_a_1232_, v_a_1233_);
lean_dec(v_a_1233_);
lean_dec_ref(v_a_1232_);
lean_dec(v_a_1231_);
lean_dec_ref(v_a_1230_);
lean_dec(v_a_1229_);
lean_dec_ref(v_a_1228_);
lean_dec_ref(v_a_1227_);
return v_res_1236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introPre(lean_object* v_goal_1237_, uint8_t v_ofProp_1238_, lean_object* v_a_1239_, lean_object* v_a_1240_, lean_object* v_a_1241_, lean_object* v_a_1242_, lean_object* v_a_1243_, lean_object* v_a_1244_, lean_object* v_a_1245_, lean_object* v_a_1246_, lean_object* v_a_1247_, lean_object* v_a_1248_, lean_object* v_a_1249_){
_start:
{
lean_object* v___x_1251_; 
v___x_1251_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introPre___redArg(v_goal_1237_, v_ofProp_1238_, v_a_1239_, v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_, v_a_1248_, v_a_1249_);
return v___x_1251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introPre___boxed(lean_object* v_goal_1252_, lean_object* v_ofProp_1253_, lean_object* v_a_1254_, lean_object* v_a_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_, lean_object* v_a_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_){
_start:
{
uint8_t v_ofProp_boxed_1266_; lean_object* v_res_1267_; 
v_ofProp_boxed_1266_ = lean_unbox(v_ofProp_1253_);
v_res_1267_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introPre(v_goal_1252_, v_ofProp_boxed_1266_, v_a_1254_, v_a_1255_, v_a_1256_, v_a_1257_, v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_, v_a_1262_, v_a_1263_, v_a_1264_);
lean_dec(v_a_1264_);
lean_dec_ref(v_a_1263_);
lean_dec(v_a_1262_);
lean_dec_ref(v_a_1261_);
lean_dec(v_a_1260_);
lean_dec_ref(v_a_1259_);
lean_dec(v_a_1258_);
lean_dec_ref(v_a_1257_);
lean_dec(v_a_1256_);
lean_dec(v_a_1255_);
lean_dec_ref(v_a_1254_);
return v_res_1267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg(lean_object* v_goal_1276_, lean_object* v_pre_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_, lean_object* v_a_1285_){
_start:
{
lean_object* v___x_1287_; uint8_t v___x_1288_; 
v___x_1287_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__3));
v___x_1288_ = l_Lean_Expr_isAppOf(v_pre_1277_, v___x_1287_);
if (v___x_1288_ == 0)
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
lean_dec(v_goal_1276_);
v___x_1289_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___closed__0));
v___x_1290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1289_);
return v___x_1290_;
}
else
{
lean_object* v___x_1291_; 
v___x_1291_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introPre___redArg(v_goal_1276_, v___x_1288_, v_a_1279_, v_a_1280_, v_a_1281_, v_a_1282_, v_a_1283_, v_a_1284_, v_a_1285_);
if (lean_obj_tag(v___x_1291_) == 0)
{
lean_object* v_a_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; 
v_a_1292_ = lean_ctor_get(v___x_1291_, 0);
lean_inc(v_a_1292_);
lean_dec_ref_known(v___x_1291_, 1);
v___x_1293_ = lean_box(0);
v___x_1294_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1294_, 0, v_a_1292_);
lean_ctor_set(v___x_1294_, 1, v___x_1293_);
v___x_1295_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___redArg(v___x_1294_, v_a_1278_);
return v___x_1295_;
}
else
{
lean_object* v_a_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1303_; 
v_a_1296_ = lean_ctor_get(v___x_1291_, 0);
v_isSharedCheck_1303_ = !lean_is_exclusive(v___x_1291_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1298_ = v___x_1291_;
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_a_1296_);
lean_dec(v___x_1291_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1301_; 
if (v_isShared_1299_ == 0)
{
v___x_1301_ = v___x_1298_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v_a_1296_);
v___x_1301_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
return v___x_1301_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___boxed(lean_object* v_goal_1304_, lean_object* v_pre_1305_, lean_object* v_a_1306_, lean_object* v_a_1307_, lean_object* v_a_1308_, lean_object* v_a_1309_, lean_object* v_a_1310_, lean_object* v_a_1311_, lean_object* v_a_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_){
_start:
{
lean_object* v_res_1315_; 
v_res_1315_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg(v_goal_1304_, v_pre_1305_, v_a_1306_, v_a_1307_, v_a_1308_, v_a_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
lean_dec(v_a_1313_);
lean_dec_ref(v_a_1312_);
lean_dec(v_a_1311_);
lean_dec_ref(v_a_1310_);
lean_dec(v_a_1309_);
lean_dec_ref(v_a_1308_);
lean_dec_ref(v_a_1307_);
lean_dec(v_a_1306_);
lean_dec_ref(v_pre_1305_);
return v_res_1315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro(lean_object* v_goal_1316_, lean_object* v_pre_1317_, lean_object* v_a_1318_, lean_object* v_a_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_, lean_object* v_a_1322_, lean_object* v_a_1323_, lean_object* v_a_1324_, lean_object* v_a_1325_, lean_object* v_a_1326_, lean_object* v_a_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_){
_start:
{
lean_object* v___x_1331_; 
v___x_1331_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg(v_goal_1316_, v_pre_1317_, v_a_1318_, v_a_1319_, v_a_1324_, v_a_1325_, v_a_1326_, v_a_1327_, v_a_1328_, v_a_1329_);
return v___x_1331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___boxed(lean_object* v_goal_1332_, lean_object* v_pre_1333_, lean_object* v_a_1334_, lean_object* v_a_1335_, lean_object* v_a_1336_, lean_object* v_a_1337_, lean_object* v_a_1338_, lean_object* v_a_1339_, lean_object* v_a_1340_, lean_object* v_a_1341_, lean_object* v_a_1342_, lean_object* v_a_1343_, lean_object* v_a_1344_, lean_object* v_a_1345_, lean_object* v_a_1346_){
_start:
{
lean_object* v_res_1347_; 
v_res_1347_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro(v_goal_1332_, v_pre_1333_, v_a_1334_, v_a_1335_, v_a_1336_, v_a_1337_, v_a_1338_, v_a_1339_, v_a_1340_, v_a_1341_, v_a_1342_, v_a_1343_, v_a_1344_, v_a_1345_);
lean_dec(v_a_1345_);
lean_dec_ref(v_a_1344_);
lean_dec(v_a_1343_);
lean_dec_ref(v_a_1342_);
lean_dec(v_a_1341_);
lean_dec_ref(v_a_1340_);
lean_dec(v_a_1339_);
lean_dec_ref(v_a_1338_);
lean_dec(v_a_1337_);
lean_dec(v_a_1336_);
lean_dec_ref(v_a_1335_);
lean_dec(v_a_1334_);
lean_dec_ref(v_pre_1333_);
return v_res_1347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryStateArgIntro(lean_object* v_goal_1348_, lean_object* v_00_u03b1_1349_, uint8_t v_preIsTop_1350_, lean_object* v_a_1351_, lean_object* v_a_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_, lean_object* v_a_1355_, lean_object* v_a_1356_, lean_object* v_a_1357_, lean_object* v_a_1358_, lean_object* v_a_1359_, lean_object* v_a_1360_, lean_object* v_a_1361_, lean_object* v_a_1362_){
_start:
{
uint8_t v___x_1364_; 
v___x_1364_ = l_Lean_Expr_isForall(v_00_u03b1_1349_);
if (v___x_1364_ == 0)
{
lean_object* v___x_1365_; lean_object* v___x_1366_; 
lean_dec(v_goal_1348_);
v___x_1365_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___closed__0));
v___x_1366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1366_, 0, v___x_1365_);
return v___x_1366_;
}
else
{
lean_object* v___x_1367_; 
v___x_1367_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introStateArg(v_goal_1348_, v_preIsTop_1350_, v_00_u03b1_1349_, v_a_1352_, v_a_1353_, v_a_1354_, v_a_1355_, v_a_1356_, v_a_1357_, v_a_1358_, v_a_1359_, v_a_1360_, v_a_1361_, v_a_1362_);
if (lean_obj_tag(v___x_1367_) == 0)
{
lean_object* v_a_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; 
v_a_1368_ = lean_ctor_get(v___x_1367_, 0);
lean_inc(v_a_1368_);
lean_dec_ref_known(v___x_1367_, 1);
v___x_1369_ = lean_box(0);
v___x_1370_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1370_, 0, v_a_1368_);
lean_ctor_set(v___x_1370_, 1, v___x_1369_);
v___x_1371_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___redArg(v___x_1370_, v_a_1351_);
return v___x_1371_;
}
else
{
lean_object* v_a_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1379_; 
v_a_1372_ = lean_ctor_get(v___x_1367_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1374_ = v___x_1367_;
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_a_1372_);
lean_dec(v___x_1367_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v___x_1377_; 
if (v_isShared_1375_ == 0)
{
v___x_1377_ = v___x_1374_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_a_1372_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryStateArgIntro___boxed(lean_object* v_goal_1380_, lean_object* v_00_u03b1_1381_, lean_object* v_preIsTop_1382_, lean_object* v_a_1383_, lean_object* v_a_1384_, lean_object* v_a_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_, lean_object* v_a_1389_, lean_object* v_a_1390_, lean_object* v_a_1391_, lean_object* v_a_1392_, lean_object* v_a_1393_, lean_object* v_a_1394_, lean_object* v_a_1395_){
_start:
{
uint8_t v_preIsTop_boxed_1396_; lean_object* v_res_1397_; 
v_preIsTop_boxed_1396_ = lean_unbox(v_preIsTop_1382_);
v_res_1397_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryStateArgIntro(v_goal_1380_, v_00_u03b1_1381_, v_preIsTop_boxed_1396_, v_a_1383_, v_a_1384_, v_a_1385_, v_a_1386_, v_a_1387_, v_a_1388_, v_a_1389_, v_a_1390_, v_a_1391_, v_a_1392_, v_a_1393_, v_a_1394_);
lean_dec(v_a_1394_);
lean_dec_ref(v_a_1393_);
lean_dec(v_a_1392_);
lean_dec_ref(v_a_1391_);
lean_dec(v_a_1390_);
lean_dec_ref(v_a_1389_);
lean_dec(v_a_1388_);
lean_dec_ref(v_a_1387_);
lean_dec(v_a_1386_);
lean_dec(v_a_1385_);
lean_dec_ref(v_a_1384_);
lean_dec(v_a_1383_);
lean_dec_ref(v_00_u03b1_1381_);
return v_res_1397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryPropPreIntro___redArg(lean_object* v_goal_1398_, lean_object* v_00_u03b1_1399_, uint8_t v_preIsTop_1400_, lean_object* v_a_1401_, lean_object* v_a_1402_, lean_object* v_a_1403_, lean_object* v_a_1404_, lean_object* v_a_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_){
_start:
{
if (v_preIsTop_1400_ == 0)
{
uint8_t v___x_1413_; 
v___x_1413_ = l_Lean_Expr_isProp(v_00_u03b1_1399_);
if (v___x_1413_ == 0)
{
lean_dec(v_goal_1398_);
goto v___jp_1410_;
}
else
{
lean_object* v___x_1414_; 
v___x_1414_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introPre___redArg(v_goal_1398_, v_preIsTop_1400_, v_a_1402_, v_a_1403_, v_a_1404_, v_a_1405_, v_a_1406_, v_a_1407_, v_a_1408_);
if (lean_obj_tag(v___x_1414_) == 0)
{
lean_object* v_a_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
v_a_1415_ = lean_ctor_get(v___x_1414_, 0);
lean_inc(v_a_1415_);
lean_dec_ref_known(v___x_1414_, 1);
v___x_1416_ = lean_box(0);
v___x_1417_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1417_, 0, v_a_1415_);
lean_ctor_set(v___x_1417_, 1, v___x_1416_);
v___x_1418_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___redArg(v___x_1417_, v_a_1401_);
return v___x_1418_;
}
else
{
lean_object* v_a_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1426_; 
v_a_1419_ = lean_ctor_get(v___x_1414_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1421_ = v___x_1414_;
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_a_1419_);
lean_dec(v___x_1414_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
lean_object* v___x_1424_; 
if (v_isShared_1422_ == 0)
{
v___x_1424_ = v___x_1421_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v_a_1419_);
v___x_1424_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
return v___x_1424_;
}
}
}
}
}
else
{
lean_dec(v_goal_1398_);
goto v___jp_1410_;
}
v___jp_1410_:
{
lean_object* v___x_1411_; lean_object* v___x_1412_; 
v___x_1411_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___closed__0));
v___x_1412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1412_, 0, v___x_1411_);
return v___x_1412_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryPropPreIntro___redArg___boxed(lean_object* v_goal_1427_, lean_object* v_00_u03b1_1428_, lean_object* v_preIsTop_1429_, lean_object* v_a_1430_, lean_object* v_a_1431_, lean_object* v_a_1432_, lean_object* v_a_1433_, lean_object* v_a_1434_, lean_object* v_a_1435_, lean_object* v_a_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_){
_start:
{
uint8_t v_preIsTop_boxed_1439_; lean_object* v_res_1440_; 
v_preIsTop_boxed_1439_ = lean_unbox(v_preIsTop_1429_);
v_res_1440_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryPropPreIntro___redArg(v_goal_1427_, v_00_u03b1_1428_, v_preIsTop_boxed_1439_, v_a_1430_, v_a_1431_, v_a_1432_, v_a_1433_, v_a_1434_, v_a_1435_, v_a_1436_, v_a_1437_);
lean_dec(v_a_1437_);
lean_dec_ref(v_a_1436_);
lean_dec(v_a_1435_);
lean_dec_ref(v_a_1434_);
lean_dec(v_a_1433_);
lean_dec_ref(v_a_1432_);
lean_dec_ref(v_a_1431_);
lean_dec(v_a_1430_);
lean_dec_ref(v_00_u03b1_1428_);
return v_res_1440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryPropPreIntro(lean_object* v_goal_1441_, lean_object* v_00_u03b1_1442_, uint8_t v_preIsTop_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_, lean_object* v_a_1446_, lean_object* v_a_1447_, lean_object* v_a_1448_, lean_object* v_a_1449_, lean_object* v_a_1450_, lean_object* v_a_1451_, lean_object* v_a_1452_, lean_object* v_a_1453_, lean_object* v_a_1454_, lean_object* v_a_1455_){
_start:
{
lean_object* v___x_1457_; 
v___x_1457_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryPropPreIntro___redArg(v_goal_1441_, v_00_u03b1_1442_, v_preIsTop_1443_, v_a_1444_, v_a_1445_, v_a_1450_, v_a_1451_, v_a_1452_, v_a_1453_, v_a_1454_, v_a_1455_);
return v___x_1457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryPropPreIntro___boxed(lean_object* v_goal_1458_, lean_object* v_00_u03b1_1459_, lean_object* v_preIsTop_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_, lean_object* v_a_1464_, lean_object* v_a_1465_, lean_object* v_a_1466_, lean_object* v_a_1467_, lean_object* v_a_1468_, lean_object* v_a_1469_, lean_object* v_a_1470_, lean_object* v_a_1471_, lean_object* v_a_1472_, lean_object* v_a_1473_){
_start:
{
uint8_t v_preIsTop_boxed_1474_; lean_object* v_res_1475_; 
v_preIsTop_boxed_1474_ = lean_unbox(v_preIsTop_1460_);
v_res_1475_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryPropPreIntro(v_goal_1458_, v_00_u03b1_1459_, v_preIsTop_boxed_1474_, v_a_1461_, v_a_1462_, v_a_1463_, v_a_1464_, v_a_1465_, v_a_1466_, v_a_1467_, v_a_1468_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_);
lean_dec(v_a_1472_);
lean_dec_ref(v_a_1471_);
lean_dec(v_a_1470_);
lean_dec_ref(v_a_1469_);
lean_dec(v_a_1468_);
lean_dec_ref(v_a_1467_);
lean_dec(v_a_1466_);
lean_dec_ref(v_a_1465_);
lean_dec(v_a_1464_);
lean_dec(v_a_1463_);
lean_dec_ref(v_a_1462_);
lean_dec(v_a_1461_);
lean_dec_ref(v_00_u03b1_1459_);
return v_res_1475_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applyLattice___closed__1(void){
_start:
{
lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1477_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applyLattice___closed__0));
v___x_1478_ = l_Lean_stringToMessageData(v___x_1477_);
return v___x_1478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applyLattice(lean_object* v_goal_1479_, lean_object* v_target_1480_, uint8_t v_lop_1481_, lean_object* v_as_1482_, lean_object* v_excessArgs_1483_, lean_object* v_resultType_x3f_1484_, uint8_t v_preIsTop_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_, lean_object* v_a_1496_){
_start:
{
lean_object* v___x_1498_; 
v___x_1498_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached___redArg(v_lop_1481_, v_as_1482_, v_excessArgs_1483_, v_resultType_x3f_1484_, v_preIsTop_1485_, v_a_1487_, v_a_1491_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_, v_a_1496_);
if (lean_obj_tag(v___x_1498_) == 0)
{
lean_object* v_a_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
v_a_1499_ = lean_ctor_get(v___x_1498_, 0);
lean_inc(v_a_1499_);
lean_dec_ref_known(v___x_1498_, 1);
v___x_1500_ = lean_box(0);
v___x_1501_ = l_Lean_Meta_Sym_BackwardRule_applyChecked(v_a_1499_, v_goal_1479_, v___x_1500_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_, v_a_1496_);
if (lean_obj_tag(v___x_1501_) == 0)
{
lean_object* v_a_1502_; lean_object* v___x_1504_; uint8_t v_isShared_1505_; uint8_t v_isSharedCheck_1514_; 
v_a_1502_ = lean_ctor_get(v___x_1501_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1501_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1504_ = v___x_1501_;
v_isShared_1505_ = v_isSharedCheck_1514_;
goto v_resetjp_1503_;
}
else
{
lean_inc(v_a_1502_);
lean_dec(v___x_1501_);
v___x_1504_ = lean_box(0);
v_isShared_1505_ = v_isSharedCheck_1514_;
goto v_resetjp_1503_;
}
v_resetjp_1503_:
{
if (lean_obj_tag(v_a_1502_) == 1)
{
lean_object* v_mvarIds_1506_; lean_object* v___x_1508_; 
lean_dec_ref(v_target_1480_);
v_mvarIds_1506_ = lean_ctor_get(v_a_1502_, 0);
lean_inc(v_mvarIds_1506_);
lean_dec_ref_known(v_a_1502_, 1);
if (v_isShared_1505_ == 0)
{
lean_ctor_set(v___x_1504_, 0, v_mvarIds_1506_);
v___x_1508_ = v___x_1504_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_mvarIds_1506_);
v___x_1508_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
return v___x_1508_;
}
}
else
{
lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; 
lean_del_object(v___x_1504_);
lean_dec(v_a_1502_);
v___x_1510_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applyLattice___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applyLattice___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applyLattice___closed__1);
v___x_1511_ = l_Lean_indentExpr(v_target_1480_);
v___x_1512_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1512_, 0, v___x_1510_);
lean_ctor_set(v___x_1512_, 1, v___x_1511_);
v___x_1513_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0___redArg(v___x_1512_, v_a_1493_, v_a_1494_, v_a_1495_, v_a_1496_);
return v___x_1513_;
}
}
}
else
{
lean_object* v_a_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1522_; 
lean_dec_ref(v_target_1480_);
v_a_1515_ = lean_ctor_get(v___x_1501_, 0);
v_isSharedCheck_1522_ = !lean_is_exclusive(v___x_1501_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1517_ = v___x_1501_;
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_a_1515_);
lean_dec(v___x_1501_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
lean_object* v___x_1520_; 
if (v_isShared_1518_ == 0)
{
v___x_1520_ = v___x_1517_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v_a_1515_);
v___x_1520_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
return v___x_1520_;
}
}
}
}
else
{
lean_object* v_a_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1530_; 
lean_dec_ref(v_target_1480_);
lean_dec(v_goal_1479_);
v_a_1523_ = lean_ctor_get(v___x_1498_, 0);
v_isSharedCheck_1530_ = !lean_is_exclusive(v___x_1498_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1525_ = v___x_1498_;
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_a_1523_);
lean_dec(v___x_1498_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v___x_1528_; 
if (v_isShared_1526_ == 0)
{
v___x_1528_ = v___x_1525_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v_a_1523_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
return v___x_1528_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applyLattice___boxed(lean_object** _args){
lean_object* v_goal_1531_ = _args[0];
lean_object* v_target_1532_ = _args[1];
lean_object* v_lop_1533_ = _args[2];
lean_object* v_as_1534_ = _args[3];
lean_object* v_excessArgs_1535_ = _args[4];
lean_object* v_resultType_x3f_1536_ = _args[5];
lean_object* v_preIsTop_1537_ = _args[6];
lean_object* v_a_1538_ = _args[7];
lean_object* v_a_1539_ = _args[8];
lean_object* v_a_1540_ = _args[9];
lean_object* v_a_1541_ = _args[10];
lean_object* v_a_1542_ = _args[11];
lean_object* v_a_1543_ = _args[12];
lean_object* v_a_1544_ = _args[13];
lean_object* v_a_1545_ = _args[14];
lean_object* v_a_1546_ = _args[15];
lean_object* v_a_1547_ = _args[16];
lean_object* v_a_1548_ = _args[17];
lean_object* v_a_1549_ = _args[18];
_start:
{
uint8_t v_lop_boxed_1550_; uint8_t v_preIsTop_boxed_1551_; lean_object* v_res_1552_; 
v_lop_boxed_1550_ = lean_unbox(v_lop_1533_);
v_preIsTop_boxed_1551_ = lean_unbox(v_preIsTop_1537_);
v_res_1552_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applyLattice(v_goal_1531_, v_target_1532_, v_lop_boxed_1550_, v_as_1534_, v_excessArgs_1535_, v_resultType_x3f_1536_, v_preIsTop_boxed_1551_, v_a_1538_, v_a_1539_, v_a_1540_, v_a_1541_, v_a_1542_, v_a_1543_, v_a_1544_, v_a_1545_, v_a_1546_, v_a_1547_, v_a_1548_);
lean_dec(v_a_1548_);
lean_dec_ref(v_a_1547_);
lean_dec(v_a_1546_);
lean_dec_ref(v_a_1545_);
lean_dec(v_a_1544_);
lean_dec_ref(v_a_1543_);
lean_dec(v_a_1542_);
lean_dec_ref(v_a_1541_);
lean_dec(v_a_1540_);
lean_dec(v_a_1539_);
lean_dec_ref(v_a_1538_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0(lean_object* v_goal_1570_, lean_object* v_target_1571_, uint8_t v_preIsTop_1572_, lean_object* v_x_1573_, lean_object* v_x_1574_, lean_object* v_x_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_){
_start:
{
if (lean_obj_tag(v_x_1573_) == 5)
{
lean_object* v_fn_1589_; lean_object* v_arg_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; 
v_fn_1589_ = lean_ctor_get(v_x_1573_, 0);
lean_inc_ref(v_fn_1589_);
v_arg_1590_ = lean_ctor_get(v_x_1573_, 1);
lean_inc_ref(v_arg_1590_);
lean_dec_ref_known(v_x_1573_, 2);
v___x_1591_ = lean_array_set(v_x_1574_, v_x_1575_, v_arg_1590_);
v___x_1592_ = lean_unsigned_to_nat(1u);
v___x_1593_ = lean_nat_sub(v_x_1575_, v___x_1592_);
lean_dec(v_x_1575_);
v_x_1573_ = v_fn_1589_;
v_x_1574_ = v___x_1591_;
v_x_1575_ = v___x_1593_;
goto _start;
}
else
{
lean_object* v___x_1595_; 
lean_dec(v_x_1575_);
v___x_1595_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_x_1573_, v___y_1585_);
if (lean_obj_tag(v___x_1595_) == 0)
{
lean_object* v_a_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1693_; 
v_a_1596_ = lean_ctor_get(v___x_1595_, 0);
v_isSharedCheck_1693_ = !lean_is_exclusive(v___x_1595_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1598_ = v___x_1595_;
v_isShared_1599_ = v_isSharedCheck_1693_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_a_1596_);
lean_dec(v___x_1595_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1693_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; uint8_t v___x_1603_; 
v___x_1600_ = l_Lean_instInhabitedExpr;
v___x_1601_ = l_Lean_Expr_cleanupAnnotations(v_a_1596_);
v___x_1602_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__1));
v___x_1603_ = l_Lean_Expr_isConstOf(v___x_1601_, v___x_1602_);
if (v___x_1603_ == 0)
{
lean_object* v___x_1604_; uint8_t v___x_1605_; 
v___x_1604_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg___closed__3));
v___x_1605_ = l_Lean_Expr_isConstOf(v___x_1601_, v___x_1604_);
if (v___x_1605_ == 0)
{
lean_object* v___x_1606_; uint8_t v___x_1607_; 
v___x_1606_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__3));
v___x_1607_ = l_Lean_Expr_isConstOf(v___x_1601_, v___x_1606_);
if (v___x_1607_ == 0)
{
lean_object* v___x_1608_; uint8_t v___x_1609_; 
v___x_1608_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__5));
v___x_1609_ = l_Lean_Expr_isConstOf(v___x_1601_, v___x_1608_);
lean_dec_ref(v___x_1601_);
if (v___x_1609_ == 0)
{
lean_object* v___x_1610_; lean_object* v___x_1612_; 
lean_dec_ref(v_x_1574_);
lean_dec_ref(v_target_1571_);
lean_dec(v_goal_1570_);
v___x_1610_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___closed__0));
if (v_isShared_1599_ == 0)
{
lean_ctor_set(v___x_1598_, 0, v___x_1610_);
v___x_1612_ = v___x_1598_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v___x_1610_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
else
{
lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; uint8_t v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
lean_del_object(v___x_1598_);
v___x_1614_ = lean_unsigned_to_nat(4u);
v___x_1615_ = lean_array_get_size(v_x_1574_);
v___x_1616_ = l_Array_extract___redArg(v_x_1574_, v___x_1614_, v___x_1615_);
v___x_1617_ = lean_unsigned_to_nat(2u);
v___x_1618_ = l_Array_extract___redArg(v_x_1574_, v___x_1617_, v___x_1614_);
lean_dec_ref(v_x_1574_);
v___x_1619_ = 0;
v___x_1620_ = lean_box(0);
v___x_1621_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applyLattice(v_goal_1570_, v_target_1571_, v___x_1619_, v___x_1618_, v___x_1616_, v___x_1620_, v_preIsTop_1572_, v___y_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_);
if (lean_obj_tag(v___x_1621_) == 0)
{
lean_object* v_a_1622_; lean_object* v___x_1623_; 
v_a_1622_ = lean_ctor_get(v___x_1621_, 0);
lean_inc(v_a_1622_);
lean_dec_ref_known(v___x_1621_, 1);
v___x_1623_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___redArg(v_a_1622_, v___y_1576_);
return v___x_1623_;
}
else
{
lean_object* v_a_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1631_; 
v_a_1624_ = lean_ctor_get(v___x_1621_, 0);
v_isSharedCheck_1631_ = !lean_is_exclusive(v___x_1621_);
if (v_isSharedCheck_1631_ == 0)
{
v___x_1626_ = v___x_1621_;
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_a_1624_);
lean_dec(v___x_1621_);
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
lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; uint8_t v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; 
lean_dec_ref(v___x_1601_);
lean_del_object(v___x_1598_);
v___x_1632_ = lean_unsigned_to_nat(4u);
v___x_1633_ = lean_array_get_size(v_x_1574_);
v___x_1634_ = l_Array_extract___redArg(v_x_1574_, v___x_1632_, v___x_1633_);
v___x_1635_ = lean_unsigned_to_nat(2u);
v___x_1636_ = l_Array_extract___redArg(v_x_1574_, v___x_1635_, v___x_1632_);
lean_dec_ref(v_x_1574_);
v___x_1637_ = 1;
v___x_1638_ = lean_box(0);
v___x_1639_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applyLattice(v_goal_1570_, v_target_1571_, v___x_1637_, v___x_1636_, v___x_1634_, v___x_1638_, v_preIsTop_1572_, v___y_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_);
if (lean_obj_tag(v___x_1639_) == 0)
{
lean_object* v_a_1640_; lean_object* v___x_1641_; 
v_a_1640_ = lean_ctor_get(v___x_1639_, 0);
lean_inc(v_a_1640_);
lean_dec_ref_known(v___x_1639_, 1);
v___x_1641_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___redArg(v_a_1640_, v___y_1576_);
return v___x_1641_;
}
else
{
lean_object* v_a_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1649_; 
v_a_1642_ = lean_ctor_get(v___x_1639_, 0);
v_isSharedCheck_1649_ = !lean_is_exclusive(v___x_1639_);
if (v_isSharedCheck_1649_ == 0)
{
v___x_1644_ = v___x_1639_;
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_a_1642_);
lean_dec(v___x_1639_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v___x_1647_; 
if (v_isShared_1645_ == 0)
{
v___x_1647_ = v___x_1644_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v_a_1642_);
v___x_1647_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
return v___x_1647_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_1601_);
if (v_preIsTop_1572_ == 0)
{
lean_object* v___x_1650_; lean_object* v___x_1652_; 
lean_dec_ref(v_x_1574_);
lean_dec_ref(v_target_1571_);
lean_dec(v_goal_1570_);
v___x_1650_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___closed__0));
if (v_isShared_1599_ == 0)
{
lean_ctor_set(v___x_1598_, 0, v___x_1650_);
v___x_1652_ = v___x_1598_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v___x_1650_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
return v___x_1652_;
}
}
else
{
lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; uint8_t v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; 
lean_del_object(v___x_1598_);
v___x_1654_ = lean_unsigned_to_nat(3u);
v___x_1655_ = lean_array_get_size(v_x_1574_);
v___x_1656_ = l_Array_extract___redArg(v_x_1574_, v___x_1654_, v___x_1655_);
v___x_1657_ = lean_unsigned_to_nat(2u);
v___x_1658_ = l_Array_extract___redArg(v_x_1574_, v___x_1657_, v___x_1654_);
v___x_1659_ = 2;
v___x_1660_ = lean_unsigned_to_nat(0u);
v___x_1661_ = lean_array_get(v___x_1600_, v_x_1574_, v___x_1660_);
lean_dec_ref(v_x_1574_);
v___x_1662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1661_);
v___x_1663_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applyLattice(v_goal_1570_, v_target_1571_, v___x_1659_, v___x_1658_, v___x_1656_, v___x_1662_, v_preIsTop_1572_, v___y_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_);
if (lean_obj_tag(v___x_1663_) == 0)
{
lean_object* v_a_1664_; lean_object* v___x_1665_; 
v_a_1664_ = lean_ctor_get(v___x_1663_, 0);
lean_inc(v_a_1664_);
lean_dec_ref_known(v___x_1663_, 1);
v___x_1665_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___redArg(v_a_1664_, v___y_1576_);
return v___x_1665_;
}
else
{
lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1673_; 
v_a_1666_ = lean_ctor_get(v___x_1663_, 0);
v_isSharedCheck_1673_ = !lean_is_exclusive(v___x_1663_);
if (v_isSharedCheck_1673_ == 0)
{
v___x_1668_ = v___x_1663_;
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v___x_1663_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1671_; 
if (v_isShared_1669_ == 0)
{
v___x_1671_ = v___x_1668_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v_a_1666_);
v___x_1671_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
return v___x_1671_;
}
}
}
}
}
}
else
{
lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; uint8_t v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; 
lean_dec_ref(v___x_1601_);
lean_del_object(v___x_1598_);
v___x_1674_ = lean_unsigned_to_nat(2u);
v___x_1675_ = lean_array_get_size(v_x_1574_);
v___x_1676_ = l_Array_extract___redArg(v_x_1574_, v___x_1674_, v___x_1675_);
v___x_1677_ = 3;
v___x_1678_ = lean_unsigned_to_nat(0u);
v___x_1679_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__6));
v___x_1680_ = lean_array_get(v___x_1600_, v_x_1574_, v___x_1678_);
lean_dec_ref(v_x_1574_);
v___x_1681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1681_, 0, v___x_1680_);
v___x_1682_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applyLattice(v_goal_1570_, v_target_1571_, v___x_1677_, v___x_1679_, v___x_1676_, v___x_1681_, v_preIsTop_1572_, v___y_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_);
if (lean_obj_tag(v___x_1682_) == 0)
{
lean_object* v_a_1683_; lean_object* v___x_1684_; 
v_a_1683_ = lean_ctor_get(v___x_1682_, 0);
lean_inc(v_a_1683_);
lean_dec_ref_known(v___x_1682_, 1);
v___x_1684_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___redArg(v_a_1683_, v___y_1576_);
return v___x_1684_;
}
else
{
lean_object* v_a_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1692_; 
v_a_1685_ = lean_ctor_get(v___x_1682_, 0);
v_isSharedCheck_1692_ = !lean_is_exclusive(v___x_1682_);
if (v_isSharedCheck_1692_ == 0)
{
v___x_1687_ = v___x_1682_;
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_a_1685_);
lean_dec(v___x_1682_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v___x_1690_; 
if (v_isShared_1688_ == 0)
{
v___x_1690_ = v___x_1687_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v_a_1685_);
v___x_1690_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
return v___x_1690_;
}
}
}
}
}
}
else
{
lean_object* v_a_1694_; lean_object* v___x_1696_; uint8_t v_isShared_1697_; uint8_t v_isSharedCheck_1701_; 
lean_dec_ref(v_x_1574_);
lean_dec_ref(v_target_1571_);
lean_dec(v_goal_1570_);
v_a_1694_ = lean_ctor_get(v___x_1595_, 0);
v_isSharedCheck_1701_ = !lean_is_exclusive(v___x_1595_);
if (v_isSharedCheck_1701_ == 0)
{
v___x_1696_ = v___x_1595_;
v_isShared_1697_ = v_isSharedCheck_1701_;
goto v_resetjp_1695_;
}
else
{
lean_inc(v_a_1694_);
lean_dec(v___x_1595_);
v___x_1696_ = lean_box(0);
v_isShared_1697_ = v_isSharedCheck_1701_;
goto v_resetjp_1695_;
}
v_resetjp_1695_:
{
lean_object* v___x_1699_; 
if (v_isShared_1697_ == 0)
{
v___x_1699_ = v___x_1696_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v_a_1694_);
v___x_1699_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
return v___x_1699_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___boxed(lean_object** _args){
lean_object* v_goal_1702_ = _args[0];
lean_object* v_target_1703_ = _args[1];
lean_object* v_preIsTop_1704_ = _args[2];
lean_object* v_x_1705_ = _args[3];
lean_object* v_x_1706_ = _args[4];
lean_object* v_x_1707_ = _args[5];
lean_object* v___y_1708_ = _args[6];
lean_object* v___y_1709_ = _args[7];
lean_object* v___y_1710_ = _args[8];
lean_object* v___y_1711_ = _args[9];
lean_object* v___y_1712_ = _args[10];
lean_object* v___y_1713_ = _args[11];
lean_object* v___y_1714_ = _args[12];
lean_object* v___y_1715_ = _args[13];
lean_object* v___y_1716_ = _args[14];
lean_object* v___y_1717_ = _args[15];
lean_object* v___y_1718_ = _args[16];
lean_object* v___y_1719_ = _args[17];
lean_object* v___y_1720_ = _args[18];
_start:
{
uint8_t v_preIsTop_boxed_1721_; lean_object* v_res_1722_; 
v_preIsTop_boxed_1721_ = lean_unbox(v_preIsTop_1704_);
v_res_1722_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0(v_goal_1702_, v_target_1703_, v_preIsTop_boxed_1721_, v_x_1705_, v_x_1706_, v_x_1707_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_);
lean_dec(v___y_1719_);
lean_dec_ref(v___y_1718_);
lean_dec(v___y_1717_);
lean_dec_ref(v___y_1716_);
lean_dec(v___y_1715_);
lean_dec_ref(v___y_1714_);
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
lean_dec(v___y_1711_);
lean_dec(v___y_1710_);
lean_dec_ref(v___y_1709_);
lean_dec(v___y_1708_);
return v_res_1722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice(lean_object* v_goal_1723_, lean_object* v_target_1724_, lean_object* v_rhs_1725_, uint8_t v_preIsTop_1726_, lean_object* v_a_1727_, lean_object* v_a_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_, lean_object* v_a_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_){
_start:
{
lean_object* v_dummy_1740_; lean_object* v_nargs_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
v_dummy_1740_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain___closed__0, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain___closed__0);
v_nargs_1741_ = l_Lean_Expr_getAppNumArgs(v_rhs_1725_);
lean_inc(v_nargs_1741_);
v___x_1742_ = lean_mk_array(v_nargs_1741_, v_dummy_1740_);
v___x_1743_ = lean_unsigned_to_nat(1u);
v___x_1744_ = lean_nat_sub(v_nargs_1741_, v___x_1743_);
lean_dec(v_nargs_1741_);
v___x_1745_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0(v_goal_1723_, v_target_1724_, v_preIsTop_1726_, v_rhs_1725_, v___x_1742_, v___x_1744_, v_a_1727_, v_a_1728_, v_a_1729_, v_a_1730_, v_a_1731_, v_a_1732_, v_a_1733_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_, v_a_1738_);
return v___x_1745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice___boxed(lean_object** _args){
lean_object* v_goal_1746_ = _args[0];
lean_object* v_target_1747_ = _args[1];
lean_object* v_rhs_1748_ = _args[2];
lean_object* v_preIsTop_1749_ = _args[3];
lean_object* v_a_1750_ = _args[4];
lean_object* v_a_1751_ = _args[5];
lean_object* v_a_1752_ = _args[6];
lean_object* v_a_1753_ = _args[7];
lean_object* v_a_1754_ = _args[8];
lean_object* v_a_1755_ = _args[9];
lean_object* v_a_1756_ = _args[10];
lean_object* v_a_1757_ = _args[11];
lean_object* v_a_1758_ = _args[12];
lean_object* v_a_1759_ = _args[13];
lean_object* v_a_1760_ = _args[14];
lean_object* v_a_1761_ = _args[15];
lean_object* v_a_1762_ = _args[16];
_start:
{
uint8_t v_preIsTop_boxed_1763_; lean_object* v_res_1764_; 
v_preIsTop_boxed_1763_ = lean_unbox(v_preIsTop_1749_);
v_res_1764_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice(v_goal_1746_, v_target_1747_, v_rhs_1748_, v_preIsTop_boxed_1763_, v_a_1750_, v_a_1751_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_, v_a_1758_, v_a_1759_, v_a_1760_, v_a_1761_);
lean_dec(v_a_1761_);
lean_dec_ref(v_a_1760_);
lean_dec(v_a_1759_);
lean_dec_ref(v_a_1758_);
lean_dec(v_a_1757_);
lean_dec_ref(v_a_1756_);
lean_dec(v_a_1755_);
lean_dec_ref(v_a_1754_);
lean_dec(v_a_1753_);
lean_dec(v_a_1752_);
lean_dec_ref(v_a_1751_);
lean_dec(v_a_1750_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0_spec__0_spec__1___redArg(lean_object* v_f_1765_, lean_object* v_a_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_){
_start:
{
lean_object* v___y_1775_; lean_object* v___x_1778_; uint8_t v_debug_1779_; 
v___x_1778_ = lean_st_ref_get(v___y_1768_);
v_debug_1779_ = lean_ctor_get_uint8(v___x_1778_, sizeof(void*)*10);
lean_dec(v___x_1778_);
if (v_debug_1779_ == 0)
{
v___y_1775_ = v___y_1768_;
goto v___jp_1774_;
}
else
{
lean_object* v___x_1780_; 
lean_inc_ref(v_f_1765_);
v___x_1780_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_f_1765_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_);
if (lean_obj_tag(v___x_1780_) == 0)
{
lean_object* v___x_1781_; 
lean_dec_ref_known(v___x_1780_, 1);
lean_inc_ref(v_a_1766_);
v___x_1781_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_a_1766_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_);
if (lean_obj_tag(v___x_1781_) == 0)
{
lean_dec_ref_known(v___x_1781_, 1);
v___y_1775_ = v___y_1768_;
goto v___jp_1774_;
}
else
{
lean_object* v_a_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1789_; 
lean_dec_ref(v_a_1766_);
lean_dec_ref(v_f_1765_);
v_a_1782_ = lean_ctor_get(v___x_1781_, 0);
v_isSharedCheck_1789_ = !lean_is_exclusive(v___x_1781_);
if (v_isSharedCheck_1789_ == 0)
{
v___x_1784_ = v___x_1781_;
v_isShared_1785_ = v_isSharedCheck_1789_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_a_1782_);
lean_dec(v___x_1781_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1789_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v___x_1787_; 
if (v_isShared_1785_ == 0)
{
v___x_1787_ = v___x_1784_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v_a_1782_);
v___x_1787_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
return v___x_1787_;
}
}
}
}
else
{
lean_object* v_a_1790_; lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1797_; 
lean_dec_ref(v_a_1766_);
lean_dec_ref(v_f_1765_);
v_a_1790_ = lean_ctor_get(v___x_1780_, 0);
v_isSharedCheck_1797_ = !lean_is_exclusive(v___x_1780_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1792_ = v___x_1780_;
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
else
{
lean_inc(v_a_1790_);
lean_dec(v___x_1780_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
lean_object* v___x_1795_; 
if (v_isShared_1793_ == 0)
{
v___x_1795_ = v___x_1792_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v_a_1790_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
return v___x_1795_;
}
}
}
}
v___jp_1774_:
{
lean_object* v___x_1776_; lean_object* v___x_1777_; 
v___x_1776_ = l_Lean_Expr_app___override(v_f_1765_, v_a_1766_);
v___x_1777_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_1776_, v___y_1775_);
return v___x_1777_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_1798_, lean_object* v_a_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_){
_start:
{
lean_object* v_res_1807_; 
v_res_1807_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0_spec__0_spec__1___redArg(v_f_1798_, v_a_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_);
lean_dec(v___y_1805_);
lean_dec_ref(v___y_1804_);
lean_dec(v___y_1803_);
lean_dec_ref(v___y_1802_);
lean_dec(v___y_1801_);
lean_dec_ref(v___y_1800_);
return v_res_1807_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0_spec__0(lean_object* v_args_1808_, lean_object* v_endIdx_1809_, lean_object* v_b_1810_, lean_object* v_i_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_){
_start:
{
uint8_t v___x_1824_; 
v___x_1824_ = lean_nat_dec_le(v_endIdx_1809_, v_i_1811_);
if (v___x_1824_ == 0)
{
lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; 
v___x_1825_ = l_Lean_instInhabitedExpr;
v___x_1826_ = lean_array_get_borrowed(v___x_1825_, v_args_1808_, v_i_1811_);
lean_inc(v___x_1826_);
v___x_1827_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0_spec__0_spec__1___redArg(v_b_1810_, v___x_1826_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_);
if (lean_obj_tag(v___x_1827_) == 0)
{
lean_object* v_a_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; 
v_a_1828_ = lean_ctor_get(v___x_1827_, 0);
lean_inc(v_a_1828_);
lean_dec_ref_known(v___x_1827_, 1);
v___x_1829_ = lean_unsigned_to_nat(1u);
v___x_1830_ = lean_nat_add(v_i_1811_, v___x_1829_);
lean_dec(v_i_1811_);
v_b_1810_ = v_a_1828_;
v_i_1811_ = v___x_1830_;
goto _start;
}
else
{
lean_dec(v_i_1811_);
return v___x_1827_;
}
}
else
{
lean_object* v___x_1832_; 
lean_dec(v_i_1811_);
v___x_1832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1832_, 0, v_b_1810_);
return v___x_1832_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0_spec__0___boxed(lean_object* v_args_1833_, lean_object* v_endIdx_1834_, lean_object* v_b_1835_, lean_object* v_i_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_){
_start:
{
lean_object* v_res_1849_; 
v_res_1849_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0_spec__0(v_args_1833_, v_endIdx_1834_, v_b_1835_, v_i_1836_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_, v___y_1842_, v___y_1843_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_);
lean_dec(v___y_1847_);
lean_dec_ref(v___y_1846_);
lean_dec(v___y_1845_);
lean_dec_ref(v___y_1844_);
lean_dec(v___y_1843_);
lean_dec_ref(v___y_1842_);
lean_dec(v___y_1841_);
lean_dec_ref(v___y_1840_);
lean_dec(v___y_1839_);
lean_dec(v___y_1838_);
lean_dec_ref(v___y_1837_);
lean_dec(v_endIdx_1834_);
lean_dec_ref(v_args_1833_);
return v_res_1849_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0(lean_object* v_f_1850_, lean_object* v_args_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_){
_start:
{
lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1864_ = lean_unsigned_to_nat(0u);
v___x_1865_ = lean_array_get_size(v_args_1851_);
v___x_1866_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0_spec__0(v_args_1851_, v___x_1865_, v_f_1850_, v___x_1864_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_, v___y_1857_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_);
return v___x_1866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0___boxed(lean_object* v_f_1867_, lean_object* v_args_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_){
_start:
{
lean_object* v_res_1881_; 
v_res_1881_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0(v_f_1867_, v_args_1868_, v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_);
lean_dec(v___y_1879_);
lean_dec_ref(v___y_1878_);
lean_dec(v___y_1877_);
lean_dec_ref(v___y_1876_);
lean_dec(v___y_1875_);
lean_dec_ref(v___y_1874_);
lean_dec(v___y_1873_);
lean_dec_ref(v___y_1872_);
lean_dec(v___y_1871_);
lean_dec(v___y_1870_);
lean_dec_ref(v___y_1869_);
lean_dec_ref(v_args_1868_);
return v_res_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC(lean_object* v_goal_1882_, lean_object* v_relConst_1883_, lean_object* v_00_u03b1_1884_, lean_object* v_inst_1885_, lean_object* v_pre_1886_, lean_object* v_epost_1887_, lean_object* v_excessArgs_1888_, lean_object* v_a_1889_, lean_object* v_a_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_, lean_object* v_a_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_){
_start:
{
lean_object* v___x_1901_; lean_object* v___x_1902_; 
v___x_1901_ = l_Array_reverse___redArg(v_excessArgs_1888_);
v___x_1902_ = l_Lean_Meta_Sym_betaRevS___redArg(v_epost_1887_, v___x_1901_, v_a_1895_);
lean_dec_ref(v___x_1901_);
if (lean_obj_tag(v___x_1902_) == 0)
{
lean_object* v_a_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; 
v_a_1903_ = lean_ctor_get(v___x_1902_, 0);
lean_inc(v_a_1903_);
lean_dec_ref_known(v___x_1902_, 1);
v___x_1904_ = lean_unsigned_to_nat(4u);
v___x_1905_ = lean_mk_empty_array_with_capacity(v___x_1904_);
v___x_1906_ = lean_array_push(v___x_1905_, v_00_u03b1_1884_);
v___x_1907_ = lean_array_push(v___x_1906_, v_inst_1885_);
v___x_1908_ = lean_array_push(v___x_1907_, v_pre_1886_);
v___x_1909_ = lean_array_push(v___x_1908_, v_a_1903_);
v___x_1910_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0(v_relConst_1883_, v___x_1909_, v_a_1889_, v_a_1890_, v_a_1891_, v_a_1892_, v_a_1893_, v_a_1894_, v_a_1895_, v_a_1896_, v_a_1897_, v_a_1898_, v_a_1899_);
lean_dec_ref(v___x_1909_);
if (lean_obj_tag(v___x_1910_) == 0)
{
lean_object* v_a_1911_; lean_object* v___x_1912_; 
v_a_1911_ = lean_ctor_get(v___x_1910_, 0);
lean_inc(v_a_1911_);
lean_dec_ref_known(v___x_1910_, 1);
v___x_1912_ = l_Lean_MVarId_replaceTargetDefEq(v_goal_1882_, v_a_1911_, v_a_1896_, v_a_1897_, v_a_1898_, v_a_1899_);
return v___x_1912_;
}
else
{
lean_object* v_a_1913_; lean_object* v___x_1915_; uint8_t v_isShared_1916_; uint8_t v_isSharedCheck_1920_; 
lean_dec(v_goal_1882_);
v_a_1913_ = lean_ctor_get(v___x_1910_, 0);
v_isSharedCheck_1920_ = !lean_is_exclusive(v___x_1910_);
if (v_isSharedCheck_1920_ == 0)
{
v___x_1915_ = v___x_1910_;
v_isShared_1916_ = v_isSharedCheck_1920_;
goto v_resetjp_1914_;
}
else
{
lean_inc(v_a_1913_);
lean_dec(v___x_1910_);
v___x_1915_ = lean_box(0);
v_isShared_1916_ = v_isSharedCheck_1920_;
goto v_resetjp_1914_;
}
v_resetjp_1914_:
{
lean_object* v___x_1918_; 
if (v_isShared_1916_ == 0)
{
v___x_1918_ = v___x_1915_;
goto v_reusejp_1917_;
}
else
{
lean_object* v_reuseFailAlloc_1919_; 
v_reuseFailAlloc_1919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1919_, 0, v_a_1913_);
v___x_1918_ = v_reuseFailAlloc_1919_;
goto v_reusejp_1917_;
}
v_reusejp_1917_:
{
return v___x_1918_;
}
}
}
}
else
{
lean_object* v_a_1921_; lean_object* v___x_1923_; uint8_t v_isShared_1924_; uint8_t v_isSharedCheck_1928_; 
lean_dec_ref(v_pre_1886_);
lean_dec_ref(v_inst_1885_);
lean_dec_ref(v_00_u03b1_1884_);
lean_dec_ref(v_relConst_1883_);
lean_dec(v_goal_1882_);
v_a_1921_ = lean_ctor_get(v___x_1902_, 0);
v_isSharedCheck_1928_ = !lean_is_exclusive(v___x_1902_);
if (v_isSharedCheck_1928_ == 0)
{
v___x_1923_ = v___x_1902_;
v_isShared_1924_ = v_isSharedCheck_1928_;
goto v_resetjp_1922_;
}
else
{
lean_inc(v_a_1921_);
lean_dec(v___x_1902_);
v___x_1923_ = lean_box(0);
v_isShared_1924_ = v_isSharedCheck_1928_;
goto v_resetjp_1922_;
}
v_resetjp_1922_:
{
lean_object* v___x_1926_; 
if (v_isShared_1924_ == 0)
{
v___x_1926_ = v___x_1923_;
goto v_reusejp_1925_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1927_, 0, v_a_1921_);
v___x_1926_ = v_reuseFailAlloc_1927_;
goto v_reusejp_1925_;
}
v_reusejp_1925_:
{
return v___x_1926_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC___boxed(lean_object** _args){
lean_object* v_goal_1929_ = _args[0];
lean_object* v_relConst_1930_ = _args[1];
lean_object* v_00_u03b1_1931_ = _args[2];
lean_object* v_inst_1932_ = _args[3];
lean_object* v_pre_1933_ = _args[4];
lean_object* v_epost_1934_ = _args[5];
lean_object* v_excessArgs_1935_ = _args[6];
lean_object* v_a_1936_ = _args[7];
lean_object* v_a_1937_ = _args[8];
lean_object* v_a_1938_ = _args[9];
lean_object* v_a_1939_ = _args[10];
lean_object* v_a_1940_ = _args[11];
lean_object* v_a_1941_ = _args[12];
lean_object* v_a_1942_ = _args[13];
lean_object* v_a_1943_ = _args[14];
lean_object* v_a_1944_ = _args[15];
lean_object* v_a_1945_ = _args[16];
lean_object* v_a_1946_ = _args[17];
lean_object* v_a_1947_ = _args[18];
_start:
{
lean_object* v_res_1948_; 
v_res_1948_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC(v_goal_1929_, v_relConst_1930_, v_00_u03b1_1931_, v_inst_1932_, v_pre_1933_, v_epost_1934_, v_excessArgs_1935_, v_a_1936_, v_a_1937_, v_a_1938_, v_a_1939_, v_a_1940_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_);
lean_dec(v_a_1946_);
lean_dec_ref(v_a_1945_);
lean_dec(v_a_1944_);
lean_dec_ref(v_a_1943_);
lean_dec(v_a_1942_);
lean_dec_ref(v_a_1941_);
lean_dec(v_a_1940_);
lean_dec_ref(v_a_1939_);
lean_dec(v_a_1938_);
lean_dec(v_a_1937_);
lean_dec_ref(v_a_1936_);
return v_res_1948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0_spec__0_spec__1(lean_object* v_f_1949_, lean_object* v_a_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_){
_start:
{
lean_object* v___x_1963_; 
v___x_1963_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0_spec__0_spec__1___redArg(v_f_1949_, v_a_1950_, v___y_1956_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_);
return v___x_1963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0_spec__0_spec__1___boxed(lean_object* v_f_1964_, lean_object* v_a_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_){
_start:
{
lean_object* v_res_1978_; 
v_res_1978_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0_spec__0_spec__1(v_f_1964_, v_a_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_, v___y_1975_, v___y_1976_);
lean_dec(v___y_1976_);
lean_dec_ref(v___y_1975_);
lean_dec(v___y_1974_);
lean_dec_ref(v___y_1973_);
lean_dec(v___y_1972_);
lean_dec_ref(v___y_1971_);
lean_dec(v___y_1970_);
lean_dec_ref(v___y_1969_);
lean_dec(v___y_1968_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
return v_res_1978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0(lean_object* v_target_1987_, lean_object* v_goal_1988_, lean_object* v_00_u03b1_1989_, lean_object* v_inst_1990_, lean_object* v_pre_1991_, lean_object* v_x_1992_, lean_object* v_x_1993_, lean_object* v_x_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_){
_start:
{
if (lean_obj_tag(v_x_1992_) == 5)
{
lean_object* v_fn_2008_; lean_object* v_arg_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; 
v_fn_2008_ = lean_ctor_get(v_x_1992_, 0);
lean_inc_ref(v_fn_2008_);
v_arg_2009_ = lean_ctor_get(v_x_1992_, 1);
lean_inc_ref(v_arg_2009_);
lean_dec_ref_known(v_x_1992_, 2);
v___x_2010_ = lean_array_set(v_x_1993_, v_x_1994_, v_arg_2009_);
v___x_2011_ = lean_unsigned_to_nat(1u);
v___x_2012_ = lean_nat_sub(v_x_1994_, v___x_2011_);
lean_dec(v_x_1994_);
v_x_1992_ = v_fn_2008_;
v_x_1993_ = v___x_2010_;
v_x_1994_ = v___x_2012_;
goto _start;
}
else
{
lean_object* v___x_2014_; uint8_t v___x_2015_; 
lean_dec(v_x_1994_);
v___x_2014_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0___closed__1));
v___x_2015_ = l_Lean_Expr_isConstOf(v_x_1992_, v___x_2014_);
lean_dec_ref(v_x_1992_);
if (v___x_2015_ == 0)
{
lean_object* v___x_2016_; lean_object* v___x_2017_; 
lean_dec_ref(v_x_1993_);
lean_dec_ref(v_pre_1991_);
lean_dec_ref(v_inst_1990_);
lean_dec_ref(v_00_u03b1_1989_);
lean_dec(v_goal_1988_);
v___x_2016_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___closed__0));
v___x_2017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2017_, 0, v___x_2016_);
return v___x_2017_;
}
else
{
lean_object* v___x_2018_; lean_object* v___x_2019_; uint8_t v___x_2020_; 
v___x_2018_ = lean_unsigned_to_nat(2u);
v___x_2019_ = lean_array_get_size(v_x_1993_);
v___x_2020_ = lean_nat_dec_lt(v___x_2018_, v___x_2019_);
if (v___x_2020_ == 0)
{
lean_object* v___x_2021_; lean_object* v___x_2022_; 
lean_dec_ref(v_x_1993_);
lean_dec_ref(v_pre_1991_);
lean_dec_ref(v_inst_1990_);
lean_dec_ref(v_00_u03b1_1989_);
lean_dec(v_goal_1988_);
v___x_2021_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___closed__0));
v___x_2022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2022_, 0, v___x_2021_);
return v___x_2022_;
}
else
{
lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v_fst_2026_; lean_object* v_snd_2027_; lean_object* v___x_2029_; uint8_t v_isShared_2030_; uint8_t v_isSharedCheck_2068_; 
v___x_2023_ = lean_array_fget_borrowed(v_x_1993_, v___x_2018_);
v___x_2024_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_2023_);
v___x_2025_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain(v___x_2023_, v___x_2024_);
v_fst_2026_ = lean_ctor_get(v___x_2025_, 0);
v_snd_2027_ = lean_ctor_get(v___x_2025_, 1);
v_isSharedCheck_2068_ = !lean_is_exclusive(v___x_2025_);
if (v_isSharedCheck_2068_ == 0)
{
v___x_2029_ = v___x_2025_;
v_isShared_2030_ = v_isSharedCheck_2068_;
goto v_resetjp_2028_;
}
else
{
lean_inc(v_snd_2027_);
lean_inc(v_fst_2026_);
lean_dec(v___x_2025_);
v___x_2029_ = lean_box(0);
v_isShared_2030_ = v_isSharedCheck_2068_;
goto v_resetjp_2028_;
}
v_resetjp_2028_:
{
lean_object* v___x_2031_; 
v___x_2031_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_mkEPostAtIndex(v_fst_2026_, v_snd_2027_, v___y_2001_, v___y_2002_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_);
if (lean_obj_tag(v___x_2031_) == 0)
{
lean_object* v_a_2032_; lean_object* v___x_2034_; uint8_t v_isShared_2035_; uint8_t v_isSharedCheck_2059_; 
v_a_2032_ = lean_ctor_get(v___x_2031_, 0);
v_isSharedCheck_2059_ = !lean_is_exclusive(v___x_2031_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2034_ = v___x_2031_;
v_isShared_2035_ = v_isSharedCheck_2059_;
goto v_resetjp_2033_;
}
else
{
lean_inc(v_a_2032_);
lean_dec(v___x_2031_);
v___x_2034_ = lean_box(0);
v_isShared_2035_ = v_isSharedCheck_2059_;
goto v_resetjp_2033_;
}
v_resetjp_2033_:
{
if (lean_obj_tag(v_a_2032_) == 1)
{
lean_object* v_val_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; 
lean_del_object(v___x_2034_);
v_val_2036_ = lean_ctor_get(v_a_2032_, 0);
lean_inc(v_val_2036_);
lean_dec_ref_known(v_a_2032_, 1);
v___x_2037_ = l_Lean_Expr_getAppFn(v_target_1987_);
v___x_2038_ = lean_unsigned_to_nat(3u);
v___x_2039_ = l_Array_extract___redArg(v_x_1993_, v___x_2038_, v___x_2019_);
lean_dec_ref(v_x_1993_);
v___x_2040_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC(v_goal_1988_, v___x_2037_, v_00_u03b1_1989_, v_inst_1990_, v_pre_1991_, v_val_2036_, v___x_2039_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_, v___y_2001_, v___y_2002_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_);
if (lean_obj_tag(v___x_2040_) == 0)
{
lean_object* v_a_2041_; lean_object* v___x_2042_; lean_object* v___x_2044_; 
v_a_2041_ = lean_ctor_get(v___x_2040_, 0);
lean_inc(v_a_2041_);
lean_dec_ref_known(v___x_2040_, 1);
v___x_2042_ = lean_box(0);
if (v_isShared_2030_ == 0)
{
lean_ctor_set_tag(v___x_2029_, 1);
lean_ctor_set(v___x_2029_, 1, v___x_2042_);
lean_ctor_set(v___x_2029_, 0, v_a_2041_);
v___x_2044_ = v___x_2029_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v_a_2041_);
lean_ctor_set(v_reuseFailAlloc_2046_, 1, v___x_2042_);
v___x_2044_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
lean_object* v___x_2045_; 
v___x_2045_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___redArg(v___x_2044_, v___y_1995_);
return v___x_2045_;
}
}
else
{
lean_object* v_a_2047_; lean_object* v___x_2049_; uint8_t v_isShared_2050_; uint8_t v_isSharedCheck_2054_; 
lean_del_object(v___x_2029_);
v_a_2047_ = lean_ctor_get(v___x_2040_, 0);
v_isSharedCheck_2054_ = !lean_is_exclusive(v___x_2040_);
if (v_isSharedCheck_2054_ == 0)
{
v___x_2049_ = v___x_2040_;
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
else
{
lean_inc(v_a_2047_);
lean_dec(v___x_2040_);
v___x_2049_ = lean_box(0);
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
v_resetjp_2048_:
{
lean_object* v___x_2052_; 
if (v_isShared_2050_ == 0)
{
v___x_2052_ = v___x_2049_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v_a_2047_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
return v___x_2052_;
}
}
}
}
else
{
lean_object* v___x_2055_; lean_object* v___x_2057_; 
lean_dec(v_a_2032_);
lean_del_object(v___x_2029_);
lean_dec_ref(v_x_1993_);
lean_dec_ref(v_pre_1991_);
lean_dec_ref(v_inst_1990_);
lean_dec_ref(v_00_u03b1_1989_);
lean_dec(v_goal_1988_);
v___x_2055_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___closed__0));
if (v_isShared_2035_ == 0)
{
lean_ctor_set(v___x_2034_, 0, v___x_2055_);
v___x_2057_ = v___x_2034_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2058_, 0, v___x_2055_);
v___x_2057_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
return v___x_2057_;
}
}
}
}
else
{
lean_object* v_a_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2067_; 
lean_del_object(v___x_2029_);
lean_dec_ref(v_x_1993_);
lean_dec_ref(v_pre_1991_);
lean_dec_ref(v_inst_1990_);
lean_dec_ref(v_00_u03b1_1989_);
lean_dec(v_goal_1988_);
v_a_2060_ = lean_ctor_get(v___x_2031_, 0);
v_isSharedCheck_2067_ = !lean_is_exclusive(v___x_2031_);
if (v_isSharedCheck_2067_ == 0)
{
v___x_2062_ = v___x_2031_;
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_a_2060_);
lean_dec(v___x_2031_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2065_; 
if (v_isShared_2063_ == 0)
{
v___x_2065_ = v___x_2062_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v_a_2060_);
v___x_2065_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
return v___x_2065_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0___boxed(lean_object** _args){
lean_object* v_target_2069_ = _args[0];
lean_object* v_goal_2070_ = _args[1];
lean_object* v_00_u03b1_2071_ = _args[2];
lean_object* v_inst_2072_ = _args[3];
lean_object* v_pre_2073_ = _args[4];
lean_object* v_x_2074_ = _args[5];
lean_object* v_x_2075_ = _args[6];
lean_object* v_x_2076_ = _args[7];
lean_object* v___y_2077_ = _args[8];
lean_object* v___y_2078_ = _args[9];
lean_object* v___y_2079_ = _args[10];
lean_object* v___y_2080_ = _args[11];
lean_object* v___y_2081_ = _args[12];
lean_object* v___y_2082_ = _args[13];
lean_object* v___y_2083_ = _args[14];
lean_object* v___y_2084_ = _args[15];
lean_object* v___y_2085_ = _args[16];
lean_object* v___y_2086_ = _args[17];
lean_object* v___y_2087_ = _args[18];
lean_object* v___y_2088_ = _args[19];
lean_object* v___y_2089_ = _args[20];
_start:
{
lean_object* v_res_2090_; 
v_res_2090_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0(v_target_2069_, v_goal_2070_, v_00_u03b1_2071_, v_inst_2072_, v_pre_2073_, v_x_2074_, v_x_2075_, v_x_2076_, v___y_2077_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_);
lean_dec(v___y_2088_);
lean_dec_ref(v___y_2087_);
lean_dec(v___y_2086_);
lean_dec_ref(v___y_2085_);
lean_dec(v___y_2084_);
lean_dec_ref(v___y_2083_);
lean_dec(v___y_2082_);
lean_dec_ref(v___y_2081_);
lean_dec(v___y_2080_);
lean_dec(v___y_2079_);
lean_dec_ref(v___y_2078_);
lean_dec(v___y_2077_);
lean_dec_ref(v_target_2069_);
return v_res_2090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC(lean_object* v_goal_2091_, lean_object* v_target_2092_, lean_object* v_00_u03b1_2093_, lean_object* v_inst_2094_, lean_object* v_pre_2095_, lean_object* v_rhs_2096_, lean_object* v_a_2097_, lean_object* v_a_2098_, lean_object* v_a_2099_, lean_object* v_a_2100_, lean_object* v_a_2101_, lean_object* v_a_2102_, lean_object* v_a_2103_, lean_object* v_a_2104_, lean_object* v_a_2105_, lean_object* v_a_2106_, lean_object* v_a_2107_, lean_object* v_a_2108_){
_start:
{
lean_object* v_dummy_2110_; lean_object* v_nargs_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; 
v_dummy_2110_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain___closed__0, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain___closed__0);
v_nargs_2111_ = l_Lean_Expr_getAppNumArgs(v_rhs_2096_);
lean_inc(v_nargs_2111_);
v___x_2112_ = lean_mk_array(v_nargs_2111_, v_dummy_2110_);
v___x_2113_ = lean_unsigned_to_nat(1u);
v___x_2114_ = lean_nat_sub(v_nargs_2111_, v___x_2113_);
lean_dec(v_nargs_2111_);
v___x_2115_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC_spec__0(v_target_2092_, v_goal_2091_, v_00_u03b1_2093_, v_inst_2094_, v_pre_2095_, v_rhs_2096_, v___x_2112_, v___x_2114_, v_a_2097_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_, v_a_2102_, v_a_2103_, v_a_2104_, v_a_2105_, v_a_2106_, v_a_2107_, v_a_2108_);
return v___x_2115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC___boxed(lean_object** _args){
lean_object* v_goal_2116_ = _args[0];
lean_object* v_target_2117_ = _args[1];
lean_object* v_00_u03b1_2118_ = _args[2];
lean_object* v_inst_2119_ = _args[3];
lean_object* v_pre_2120_ = _args[4];
lean_object* v_rhs_2121_ = _args[5];
lean_object* v_a_2122_ = _args[6];
lean_object* v_a_2123_ = _args[7];
lean_object* v_a_2124_ = _args[8];
lean_object* v_a_2125_ = _args[9];
lean_object* v_a_2126_ = _args[10];
lean_object* v_a_2127_ = _args[11];
lean_object* v_a_2128_ = _args[12];
lean_object* v_a_2129_ = _args[13];
lean_object* v_a_2130_ = _args[14];
lean_object* v_a_2131_ = _args[15];
lean_object* v_a_2132_ = _args[16];
lean_object* v_a_2133_ = _args[17];
lean_object* v_a_2134_ = _args[18];
_start:
{
lean_object* v_res_2135_; 
v_res_2135_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC(v_goal_2116_, v_target_2117_, v_00_u03b1_2118_, v_inst_2119_, v_pre_2120_, v_rhs_2121_, v_a_2122_, v_a_2123_, v_a_2124_, v_a_2125_, v_a_2126_, v_a_2127_, v_a_2128_, v_a_2129_, v_a_2130_, v_a_2131_, v_a_2132_, v_a_2133_);
lean_dec(v_a_2133_);
lean_dec_ref(v_a_2132_);
lean_dec(v_a_2131_);
lean_dec_ref(v_a_2130_);
lean_dec(v_a_2129_);
lean_dec_ref(v_a_2128_);
lean_dec(v_a_2127_);
lean_dec_ref(v_a_2126_);
lean_dec(v_a_2125_);
lean_dec(v_a_2124_);
lean_dec_ref(v_a_2123_);
lean_dec(v_a_2122_);
lean_dec_ref(v_target_2117_);
return v_res_2135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_replaceProgDefEq(lean_object* v_goal_2136_, lean_object* v_target_2137_, lean_object* v_info_2138_, lean_object* v_prog_2139_, lean_object* v_a_2140_, lean_object* v_a_2141_, lean_object* v_a_2142_, lean_object* v_a_2143_, lean_object* v_a_2144_, lean_object* v_a_2145_, lean_object* v_a_2146_, lean_object* v_a_2147_, lean_object* v_a_2148_, lean_object* v_a_2149_, lean_object* v_a_2150_){
_start:
{
lean_object* v_head_2152_; lean_object* v_args_2153_; lean_object* v_excessArgs_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
v_head_2152_ = lean_ctor_get(v_info_2138_, 0);
lean_inc_ref(v_head_2152_);
v_args_2153_ = lean_ctor_get(v_info_2138_, 1);
lean_inc_ref(v_args_2153_);
v_excessArgs_2154_ = lean_ctor_get(v_info_2138_, 2);
lean_inc_ref(v_excessArgs_2154_);
lean_dec_ref(v_info_2138_);
v___x_2155_ = lean_unsigned_to_nat(8u);
v___x_2156_ = lean_array_set(v_args_2153_, v___x_2155_, v_prog_2139_);
v___x_2157_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0(v_head_2152_, v___x_2156_, v_a_2140_, v_a_2141_, v_a_2142_, v_a_2143_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_);
lean_dec_ref(v___x_2156_);
if (lean_obj_tag(v___x_2157_) == 0)
{
lean_object* v_a_2158_; lean_object* v___x_2159_; 
v_a_2158_ = lean_ctor_get(v___x_2157_, 0);
lean_inc(v_a_2158_);
lean_dec_ref_known(v___x_2157_, 1);
v___x_2159_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0(v_a_2158_, v_excessArgs_2154_, v_a_2140_, v_a_2141_, v_a_2142_, v_a_2143_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_);
lean_dec_ref(v_excessArgs_2154_);
if (lean_obj_tag(v___x_2159_) == 0)
{
lean_object* v_a_2160_; lean_object* v_dummy_2161_; lean_object* v_nargs_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; 
v_a_2160_ = lean_ctor_get(v___x_2159_, 0);
lean_inc(v_a_2160_);
lean_dec_ref_known(v___x_2159_, 1);
v_dummy_2161_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain___closed__0, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain___closed__0);
v_nargs_2162_ = l_Lean_Expr_getAppNumArgs(v_target_2137_);
lean_inc(v_nargs_2162_);
v___x_2163_ = lean_mk_array(v_nargs_2162_, v_dummy_2161_);
v___x_2164_ = lean_unsigned_to_nat(1u);
v___x_2165_ = lean_nat_sub(v_nargs_2162_, v___x_2164_);
lean_dec(v_nargs_2162_);
lean_inc_ref(v_target_2137_);
v___x_2166_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_target_2137_, v___x_2163_, v___x_2165_);
v___x_2167_ = l_Lean_Expr_getAppFn(v_target_2137_);
lean_dec_ref(v_target_2137_);
v___x_2168_ = lean_array_get_size(v___x_2166_);
v___x_2169_ = lean_nat_sub(v___x_2168_, v___x_2164_);
v___x_2170_ = lean_array_set(v___x_2166_, v___x_2169_, v_a_2160_);
lean_dec(v___x_2169_);
v___x_2171_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0(v___x_2167_, v___x_2170_, v_a_2140_, v_a_2141_, v_a_2142_, v_a_2143_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_);
lean_dec_ref(v___x_2170_);
if (lean_obj_tag(v___x_2171_) == 0)
{
lean_object* v_a_2172_; lean_object* v___x_2173_; 
v_a_2172_ = lean_ctor_get(v___x_2171_, 0);
lean_inc(v_a_2172_);
lean_dec_ref_known(v___x_2171_, 1);
v___x_2173_ = l_Lean_MVarId_replaceTargetDefEq(v_goal_2136_, v_a_2172_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_);
return v___x_2173_;
}
else
{
lean_object* v_a_2174_; lean_object* v___x_2176_; uint8_t v_isShared_2177_; uint8_t v_isSharedCheck_2181_; 
lean_dec(v_goal_2136_);
v_a_2174_ = lean_ctor_get(v___x_2171_, 0);
v_isSharedCheck_2181_ = !lean_is_exclusive(v___x_2171_);
if (v_isSharedCheck_2181_ == 0)
{
v___x_2176_ = v___x_2171_;
v_isShared_2177_ = v_isSharedCheck_2181_;
goto v_resetjp_2175_;
}
else
{
lean_inc(v_a_2174_);
lean_dec(v___x_2171_);
v___x_2176_ = lean_box(0);
v_isShared_2177_ = v_isSharedCheck_2181_;
goto v_resetjp_2175_;
}
v_resetjp_2175_:
{
lean_object* v___x_2179_; 
if (v_isShared_2177_ == 0)
{
v___x_2179_ = v___x_2176_;
goto v_reusejp_2178_;
}
else
{
lean_object* v_reuseFailAlloc_2180_; 
v_reuseFailAlloc_2180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2180_, 0, v_a_2174_);
v___x_2179_ = v_reuseFailAlloc_2180_;
goto v_reusejp_2178_;
}
v_reusejp_2178_:
{
return v___x_2179_;
}
}
}
}
else
{
lean_object* v_a_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2189_; 
lean_dec_ref(v_target_2137_);
lean_dec(v_goal_2136_);
v_a_2182_ = lean_ctor_get(v___x_2159_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2159_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2184_ = v___x_2159_;
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_a_2182_);
lean_dec(v___x_2159_);
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
}
else
{
lean_object* v_a_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2197_; 
lean_dec_ref(v_excessArgs_2154_);
lean_dec_ref(v_target_2137_);
lean_dec(v_goal_2136_);
v_a_2190_ = lean_ctor_get(v___x_2157_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v___x_2157_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2192_ = v___x_2157_;
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_a_2190_);
lean_dec(v___x_2157_);
v___x_2192_ = lean_box(0);
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
v_resetjp_2191_:
{
lean_object* v___x_2195_; 
if (v_isShared_2193_ == 0)
{
v___x_2195_ = v___x_2192_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v_a_2190_);
v___x_2195_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
return v___x_2195_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_replaceProgDefEq___boxed(lean_object* v_goal_2198_, lean_object* v_target_2199_, lean_object* v_info_2200_, lean_object* v_prog_2201_, lean_object* v_a_2202_, lean_object* v_a_2203_, lean_object* v_a_2204_, lean_object* v_a_2205_, lean_object* v_a_2206_, lean_object* v_a_2207_, lean_object* v_a_2208_, lean_object* v_a_2209_, lean_object* v_a_2210_, lean_object* v_a_2211_, lean_object* v_a_2212_, lean_object* v_a_2213_){
_start:
{
lean_object* v_res_2214_; 
v_res_2214_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_replaceProgDefEq(v_goal_2198_, v_target_2199_, v_info_2200_, v_prog_2201_, v_a_2202_, v_a_2203_, v_a_2204_, v_a_2205_, v_a_2206_, v_a_2207_, v_a_2208_, v_a_2209_, v_a_2210_, v_a_2211_, v_a_2212_);
lean_dec(v_a_2212_);
lean_dec_ref(v_a_2211_);
lean_dec(v_a_2210_);
lean_dec_ref(v_a_2209_);
lean_dec(v_a_2208_);
lean_dec_ref(v_a_2207_);
lean_dec(v_a_2206_);
lean_dec_ref(v_a_2205_);
lean_dec(v_a_2204_);
lean_dec(v_a_2203_);
lean_dec_ref(v_a_2202_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet_spec__0_spec__0___redArg(lean_object* v_revArgs_2215_, lean_object* v_start_2216_, lean_object* v_b_2217_, lean_object* v_i_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_){
_start:
{
uint8_t v___x_2226_; 
v___x_2226_ = lean_nat_dec_le(v_i_2218_, v_start_2216_);
if (v___x_2226_ == 0)
{
lean_object* v___x_2227_; lean_object* v_i_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; 
v___x_2227_ = lean_unsigned_to_nat(1u);
v_i_2228_ = lean_nat_sub(v_i_2218_, v___x_2227_);
lean_dec(v_i_2218_);
v___x_2229_ = l_Lean_instInhabitedExpr;
v___x_2230_ = lean_array_get_borrowed(v___x_2229_, v_revArgs_2215_, v_i_2228_);
lean_inc(v___x_2230_);
v___x_2231_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0_spec__0_spec__1___redArg(v_b_2217_, v___x_2230_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_);
if (lean_obj_tag(v___x_2231_) == 0)
{
lean_object* v_a_2232_; 
v_a_2232_ = lean_ctor_get(v___x_2231_, 0);
lean_inc(v_a_2232_);
lean_dec_ref_known(v___x_2231_, 1);
v_b_2217_ = v_a_2232_;
v_i_2218_ = v_i_2228_;
goto _start;
}
else
{
lean_dec(v_i_2228_);
return v___x_2231_;
}
}
else
{
lean_object* v___x_2234_; 
lean_dec(v_i_2218_);
v___x_2234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2234_, 0, v_b_2217_);
return v___x_2234_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet_spec__0_spec__0___redArg___boxed(lean_object* v_revArgs_2235_, lean_object* v_start_2236_, lean_object* v_b_2237_, lean_object* v_i_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_){
_start:
{
lean_object* v_res_2246_; 
v_res_2246_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet_spec__0_spec__0___redArg(v_revArgs_2235_, v_start_2236_, v_b_2237_, v_i_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
lean_dec(v___y_2244_);
lean_dec_ref(v___y_2243_);
lean_dec(v___y_2242_);
lean_dec_ref(v___y_2241_);
lean_dec(v___y_2240_);
lean_dec_ref(v___y_2239_);
lean_dec(v_start_2236_);
lean_dec_ref(v_revArgs_2235_);
return v_res_2246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet_spec__0(lean_object* v_f_2247_, lean_object* v_revArgs_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_){
_start:
{
lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; 
v___x_2261_ = lean_unsigned_to_nat(0u);
v___x_2262_ = lean_array_get_size(v_revArgs_2248_);
v___x_2263_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet_spec__0_spec__0___redArg(v_revArgs_2248_, v___x_2261_, v_f_2247_, v___x_2262_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_);
return v___x_2263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet_spec__0___boxed(lean_object* v_f_2264_, lean_object* v_revArgs_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_){
_start:
{
lean_object* v_res_2278_; 
v_res_2278_ = l_Lean_Meta_Sym_Internal_mkAppRevS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet_spec__0(v_f_2264_, v_revArgs_2265_, v___y_2266_, v___y_2267_, v___y_2268_, v___y_2269_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_, v___y_2276_);
lean_dec(v___y_2276_);
lean_dec_ref(v___y_2275_);
lean_dec(v___y_2274_);
lean_dec_ref(v___y_2273_);
lean_dec(v___y_2272_);
lean_dec_ref(v___y_2271_);
lean_dec(v___y_2270_);
lean_dec_ref(v___y_2269_);
lean_dec(v___y_2268_);
lean_dec(v___y_2267_);
lean_dec_ref(v___y_2266_);
lean_dec_ref(v_revArgs_2265_);
return v_res_2278_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet___closed__1(void){
_start:
{
lean_object* v___x_2280_; lean_object* v___x_2281_; 
v___x_2280_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet___closed__0));
v___x_2281_ = l_Lean_stringToMessageData(v___x_2280_);
return v___x_2281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet(lean_object* v_goal_2282_, lean_object* v_target_2283_, lean_object* v_info_2284_, lean_object* v_name_2285_, lean_object* v_type_2286_, lean_object* v_val_2287_, lean_object* v_body_2288_, uint8_t v_nondep_2289_, lean_object* v_appArgs_2290_, lean_object* v_a_2291_, lean_object* v_a_2292_, lean_object* v_a_2293_, lean_object* v_a_2294_, lean_object* v_a_2295_, lean_object* v_a_2296_, lean_object* v_a_2297_, lean_object* v_a_2298_, lean_object* v_a_2299_, lean_object* v_a_2300_, lean_object* v_a_2301_){
_start:
{
lean_object* v___x_2303_; 
lean_inc(v_name_2285_);
v___x_2303_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_throwIfUnsupportedJP___redArg(v_name_2285_, v_val_2287_, v_a_2291_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
if (lean_obj_tag(v___x_2303_) == 0)
{
uint8_t v___x_2304_; 
lean_dec_ref_known(v___x_2303_, 1);
v___x_2304_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Expr_isDuplicable(v_val_2287_);
if (v___x_2304_ == 0)
{
lean_object* v___x_2305_; 
v___x_2305_ = l_Lean_Meta_Sym_Internal_mkAppRevS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet_spec__0(v_body_2288_, v_appArgs_2290_, v_a_2291_, v_a_2292_, v_a_2293_, v_a_2294_, v_a_2295_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
if (lean_obj_tag(v___x_2305_) == 0)
{
lean_object* v_a_2306_; lean_object* v_head_2307_; lean_object* v_args_2308_; lean_object* v_excessArgs_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v_a_2306_ = lean_ctor_get(v___x_2305_, 0);
lean_inc(v_a_2306_);
lean_dec_ref_known(v___x_2305_, 1);
v_head_2307_ = lean_ctor_get(v_info_2284_, 0);
lean_inc_ref(v_head_2307_);
v_args_2308_ = lean_ctor_get(v_info_2284_, 1);
lean_inc_ref(v_args_2308_);
v_excessArgs_2309_ = lean_ctor_get(v_info_2284_, 2);
lean_inc_ref(v_excessArgs_2309_);
lean_dec_ref(v_info_2284_);
v___x_2310_ = lean_unsigned_to_nat(8u);
v___x_2311_ = lean_array_set(v_args_2308_, v___x_2310_, v_a_2306_);
v___x_2312_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0(v_head_2307_, v___x_2311_, v_a_2291_, v_a_2292_, v_a_2293_, v_a_2294_, v_a_2295_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec_ref(v___x_2311_);
if (lean_obj_tag(v___x_2312_) == 0)
{
lean_object* v_a_2313_; lean_object* v___x_2314_; 
v_a_2313_ = lean_ctor_get(v___x_2312_, 0);
lean_inc(v_a_2313_);
lean_dec_ref_known(v___x_2312_, 1);
v___x_2314_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0(v_a_2313_, v_excessArgs_2309_, v_a_2291_, v_a_2292_, v_a_2293_, v_a_2294_, v_a_2295_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec_ref(v_excessArgs_2309_);
if (lean_obj_tag(v___x_2314_) == 0)
{
lean_object* v_a_2315_; lean_object* v_dummy_2316_; lean_object* v_nargs_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
v_a_2315_ = lean_ctor_get(v___x_2314_, 0);
lean_inc(v_a_2315_);
lean_dec_ref_known(v___x_2314_, 1);
v_dummy_2316_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain___closed__0, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain___closed__0);
v_nargs_2317_ = l_Lean_Expr_getAppNumArgs(v_target_2283_);
lean_inc(v_nargs_2317_);
v___x_2318_ = lean_mk_array(v_nargs_2317_, v_dummy_2316_);
v___x_2319_ = lean_unsigned_to_nat(1u);
v___x_2320_ = lean_nat_sub(v_nargs_2317_, v___x_2319_);
lean_dec(v_nargs_2317_);
lean_inc_ref(v_target_2283_);
v___x_2321_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_target_2283_, v___x_2318_, v___x_2320_);
v___x_2322_ = l_Lean_Expr_getAppFn(v_target_2283_);
lean_dec_ref(v_target_2283_);
v___x_2323_ = lean_array_get_size(v___x_2321_);
v___x_2324_ = lean_nat_sub(v___x_2323_, v___x_2319_);
v___x_2325_ = lean_array_set(v___x_2321_, v___x_2324_, v_a_2315_);
lean_dec(v___x_2324_);
v___x_2326_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_unfoldEPostVC_spec__0(v___x_2322_, v___x_2325_, v_a_2291_, v_a_2292_, v_a_2293_, v_a_2294_, v_a_2295_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec_ref(v___x_2325_);
if (lean_obj_tag(v___x_2326_) == 0)
{
lean_object* v_a_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; 
v_a_2327_ = lean_ctor_get(v___x_2326_, 0);
lean_inc(v_a_2327_);
lean_dec_ref_known(v___x_2326_, 1);
v___x_2328_ = l_Lean_Expr_letE___override(v_name_2285_, v_type_2286_, v_val_2287_, v_a_2327_, v_nondep_2289_);
v___x_2329_ = l_Lean_MVarId_replaceTargetDefEq(v_goal_2282_, v___x_2328_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
if (lean_obj_tag(v___x_2329_) == 0)
{
lean_object* v_a_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; 
v_a_2330_ = lean_ctor_get(v___x_2329_, 0);
lean_inc(v_a_2330_);
lean_dec_ref_known(v___x_2329_, 1);
v___x_2331_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg___closed__0));
v___x_2332_ = l_Lean_Meta_Sym_intros(v_a_2330_, v___x_2331_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
if (lean_obj_tag(v___x_2332_) == 0)
{
lean_object* v_a_2333_; lean_object* v___x_2335_; uint8_t v_isShared_2336_; uint8_t v_isSharedCheck_2343_; 
v_a_2333_ = lean_ctor_get(v___x_2332_, 0);
v_isSharedCheck_2343_ = !lean_is_exclusive(v___x_2332_);
if (v_isSharedCheck_2343_ == 0)
{
v___x_2335_ = v___x_2332_;
v_isShared_2336_ = v_isSharedCheck_2343_;
goto v_resetjp_2334_;
}
else
{
lean_inc(v_a_2333_);
lean_dec(v___x_2332_);
v___x_2335_ = lean_box(0);
v_isShared_2336_ = v_isSharedCheck_2343_;
goto v_resetjp_2334_;
}
v_resetjp_2334_:
{
if (lean_obj_tag(v_a_2333_) == 1)
{
lean_object* v_mvarId_2337_; lean_object* v___x_2339_; 
v_mvarId_2337_ = lean_ctor_get(v_a_2333_, 1);
lean_inc(v_mvarId_2337_);
lean_dec_ref_known(v_a_2333_, 2);
if (v_isShared_2336_ == 0)
{
lean_ctor_set(v___x_2335_, 0, v_mvarId_2337_);
v___x_2339_ = v___x_2335_;
goto v_reusejp_2338_;
}
else
{
lean_object* v_reuseFailAlloc_2340_; 
v_reuseFailAlloc_2340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2340_, 0, v_mvarId_2337_);
v___x_2339_ = v_reuseFailAlloc_2340_;
goto v_reusejp_2338_;
}
v_reusejp_2338_:
{
return v___x_2339_;
}
}
else
{
lean_object* v___x_2341_; lean_object* v___x_2342_; 
lean_del_object(v___x_2335_);
lean_dec(v_a_2333_);
v___x_2341_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet___closed__1);
v___x_2342_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0___redArg(v___x_2341_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_2342_;
}
}
}
else
{
lean_object* v_a_2344_; lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2351_; 
v_a_2344_ = lean_ctor_get(v___x_2332_, 0);
v_isSharedCheck_2351_ = !lean_is_exclusive(v___x_2332_);
if (v_isSharedCheck_2351_ == 0)
{
v___x_2346_ = v___x_2332_;
v_isShared_2347_ = v_isSharedCheck_2351_;
goto v_resetjp_2345_;
}
else
{
lean_inc(v_a_2344_);
lean_dec(v___x_2332_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2351_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
lean_object* v___x_2349_; 
if (v_isShared_2347_ == 0)
{
v___x_2349_ = v___x_2346_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v_a_2344_);
v___x_2349_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
return v___x_2349_;
}
}
}
}
else
{
return v___x_2329_;
}
}
else
{
lean_object* v_a_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2359_; 
lean_dec_ref(v_val_2287_);
lean_dec_ref(v_type_2286_);
lean_dec(v_name_2285_);
lean_dec(v_goal_2282_);
v_a_2352_ = lean_ctor_get(v___x_2326_, 0);
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2326_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2354_ = v___x_2326_;
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_a_2352_);
lean_dec(v___x_2326_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___x_2357_; 
if (v_isShared_2355_ == 0)
{
v___x_2357_ = v___x_2354_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_a_2352_);
v___x_2357_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
return v___x_2357_;
}
}
}
}
else
{
lean_object* v_a_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2367_; 
lean_dec_ref(v_val_2287_);
lean_dec_ref(v_type_2286_);
lean_dec(v_name_2285_);
lean_dec_ref(v_target_2283_);
lean_dec(v_goal_2282_);
v_a_2360_ = lean_ctor_get(v___x_2314_, 0);
v_isSharedCheck_2367_ = !lean_is_exclusive(v___x_2314_);
if (v_isSharedCheck_2367_ == 0)
{
v___x_2362_ = v___x_2314_;
v_isShared_2363_ = v_isSharedCheck_2367_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_a_2360_);
lean_dec(v___x_2314_);
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
lean_object* v_a_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2375_; 
lean_dec_ref(v_excessArgs_2309_);
lean_dec_ref(v_val_2287_);
lean_dec_ref(v_type_2286_);
lean_dec(v_name_2285_);
lean_dec_ref(v_target_2283_);
lean_dec(v_goal_2282_);
v_a_2368_ = lean_ctor_get(v___x_2312_, 0);
v_isSharedCheck_2375_ = !lean_is_exclusive(v___x_2312_);
if (v_isSharedCheck_2375_ == 0)
{
v___x_2370_ = v___x_2312_;
v_isShared_2371_ = v_isSharedCheck_2375_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_a_2368_);
lean_dec(v___x_2312_);
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
else
{
lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2383_; 
lean_dec_ref(v_val_2287_);
lean_dec_ref(v_type_2286_);
lean_dec(v_name_2285_);
lean_dec_ref(v_info_2284_);
lean_dec_ref(v_target_2283_);
lean_dec(v_goal_2282_);
v_a_2376_ = lean_ctor_get(v___x_2305_, 0);
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2305_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2378_ = v___x_2305_;
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v___x_2305_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2381_; 
if (v_isShared_2379_ == 0)
{
v___x_2381_ = v___x_2378_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v_a_2376_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
}
}
else
{
lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; 
lean_dec_ref(v_type_2286_);
lean_dec(v_name_2285_);
v___x_2384_ = lean_unsigned_to_nat(1u);
v___x_2385_ = lean_mk_empty_array_with_capacity(v___x_2384_);
v___x_2386_ = lean_array_push(v___x_2385_, v_val_2287_);
v___x_2387_ = l_Lean_Meta_Sym_instantiateRevBetaS___redArg(v_body_2288_, v___x_2386_, v_a_2297_);
lean_dec_ref(v___x_2386_);
if (lean_obj_tag(v___x_2387_) == 0)
{
lean_object* v_a_2388_; lean_object* v___x_2389_; 
v_a_2388_ = lean_ctor_get(v___x_2387_, 0);
lean_inc(v_a_2388_);
lean_dec_ref_known(v___x_2387_, 1);
v___x_2389_ = l_Lean_Meta_Sym_Internal_mkAppRevS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet_spec__0(v_a_2388_, v_appArgs_2290_, v_a_2291_, v_a_2292_, v_a_2293_, v_a_2294_, v_a_2295_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
if (lean_obj_tag(v___x_2389_) == 0)
{
lean_object* v_a_2390_; lean_object* v___x_2391_; 
v_a_2390_ = lean_ctor_get(v___x_2389_, 0);
lean_inc(v_a_2390_);
lean_dec_ref_known(v___x_2389_, 1);
v___x_2391_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_replaceProgDefEq(v_goal_2282_, v_target_2283_, v_info_2284_, v_a_2390_, v_a_2291_, v_a_2292_, v_a_2293_, v_a_2294_, v_a_2295_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_2391_;
}
else
{
lean_object* v_a_2392_; lean_object* v___x_2394_; uint8_t v_isShared_2395_; uint8_t v_isSharedCheck_2399_; 
lean_dec_ref(v_info_2284_);
lean_dec_ref(v_target_2283_);
lean_dec(v_goal_2282_);
v_a_2392_ = lean_ctor_get(v___x_2389_, 0);
v_isSharedCheck_2399_ = !lean_is_exclusive(v___x_2389_);
if (v_isSharedCheck_2399_ == 0)
{
v___x_2394_ = v___x_2389_;
v_isShared_2395_ = v_isSharedCheck_2399_;
goto v_resetjp_2393_;
}
else
{
lean_inc(v_a_2392_);
lean_dec(v___x_2389_);
v___x_2394_ = lean_box(0);
v_isShared_2395_ = v_isSharedCheck_2399_;
goto v_resetjp_2393_;
}
v_resetjp_2393_:
{
lean_object* v___x_2397_; 
if (v_isShared_2395_ == 0)
{
v___x_2397_ = v___x_2394_;
goto v_reusejp_2396_;
}
else
{
lean_object* v_reuseFailAlloc_2398_; 
v_reuseFailAlloc_2398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2398_, 0, v_a_2392_);
v___x_2397_ = v_reuseFailAlloc_2398_;
goto v_reusejp_2396_;
}
v_reusejp_2396_:
{
return v___x_2397_;
}
}
}
}
else
{
lean_object* v_a_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2407_; 
lean_dec_ref(v_info_2284_);
lean_dec_ref(v_target_2283_);
lean_dec(v_goal_2282_);
v_a_2400_ = lean_ctor_get(v___x_2387_, 0);
v_isSharedCheck_2407_ = !lean_is_exclusive(v___x_2387_);
if (v_isSharedCheck_2407_ == 0)
{
v___x_2402_ = v___x_2387_;
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
else
{
lean_inc(v_a_2400_);
lean_dec(v___x_2387_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v___x_2405_; 
if (v_isShared_2403_ == 0)
{
v___x_2405_ = v___x_2402_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v_a_2400_);
v___x_2405_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
return v___x_2405_;
}
}
}
}
}
else
{
lean_object* v_a_2408_; lean_object* v___x_2410_; uint8_t v_isShared_2411_; uint8_t v_isSharedCheck_2415_; 
lean_dec_ref(v_body_2288_);
lean_dec_ref(v_val_2287_);
lean_dec_ref(v_type_2286_);
lean_dec(v_name_2285_);
lean_dec_ref(v_info_2284_);
lean_dec_ref(v_target_2283_);
lean_dec(v_goal_2282_);
v_a_2408_ = lean_ctor_get(v___x_2303_, 0);
v_isSharedCheck_2415_ = !lean_is_exclusive(v___x_2303_);
if (v_isSharedCheck_2415_ == 0)
{
v___x_2410_ = v___x_2303_;
v_isShared_2411_ = v_isSharedCheck_2415_;
goto v_resetjp_2409_;
}
else
{
lean_inc(v_a_2408_);
lean_dec(v___x_2303_);
v___x_2410_ = lean_box(0);
v_isShared_2411_ = v_isSharedCheck_2415_;
goto v_resetjp_2409_;
}
v_resetjp_2409_:
{
lean_object* v___x_2413_; 
if (v_isShared_2411_ == 0)
{
v___x_2413_ = v___x_2410_;
goto v_reusejp_2412_;
}
else
{
lean_object* v_reuseFailAlloc_2414_; 
v_reuseFailAlloc_2414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2414_, 0, v_a_2408_);
v___x_2413_ = v_reuseFailAlloc_2414_;
goto v_reusejp_2412_;
}
v_reusejp_2412_:
{
return v___x_2413_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet___boxed(lean_object** _args){
lean_object* v_goal_2416_ = _args[0];
lean_object* v_target_2417_ = _args[1];
lean_object* v_info_2418_ = _args[2];
lean_object* v_name_2419_ = _args[3];
lean_object* v_type_2420_ = _args[4];
lean_object* v_val_2421_ = _args[5];
lean_object* v_body_2422_ = _args[6];
lean_object* v_nondep_2423_ = _args[7];
lean_object* v_appArgs_2424_ = _args[8];
lean_object* v_a_2425_ = _args[9];
lean_object* v_a_2426_ = _args[10];
lean_object* v_a_2427_ = _args[11];
lean_object* v_a_2428_ = _args[12];
lean_object* v_a_2429_ = _args[13];
lean_object* v_a_2430_ = _args[14];
lean_object* v_a_2431_ = _args[15];
lean_object* v_a_2432_ = _args[16];
lean_object* v_a_2433_ = _args[17];
lean_object* v_a_2434_ = _args[18];
lean_object* v_a_2435_ = _args[19];
lean_object* v_a_2436_ = _args[20];
_start:
{
uint8_t v_nondep_boxed_2437_; lean_object* v_res_2438_; 
v_nondep_boxed_2437_ = lean_unbox(v_nondep_2423_);
v_res_2438_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet(v_goal_2416_, v_target_2417_, v_info_2418_, v_name_2419_, v_type_2420_, v_val_2421_, v_body_2422_, v_nondep_boxed_2437_, v_appArgs_2424_, v_a_2425_, v_a_2426_, v_a_2427_, v_a_2428_, v_a_2429_, v_a_2430_, v_a_2431_, v_a_2432_, v_a_2433_, v_a_2434_, v_a_2435_);
lean_dec(v_a_2435_);
lean_dec_ref(v_a_2434_);
lean_dec(v_a_2433_);
lean_dec_ref(v_a_2432_);
lean_dec(v_a_2431_);
lean_dec_ref(v_a_2430_);
lean_dec(v_a_2429_);
lean_dec_ref(v_a_2428_);
lean_dec(v_a_2427_);
lean_dec(v_a_2426_);
lean_dec_ref(v_a_2425_);
lean_dec_ref(v_appArgs_2424_);
return v_res_2438_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet_spec__0_spec__0(lean_object* v_revArgs_2439_, lean_object* v_start_2440_, lean_object* v_b_2441_, lean_object* v_i_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_){
_start:
{
lean_object* v___x_2455_; 
v___x_2455_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet_spec__0_spec__0___redArg(v_revArgs_2439_, v_start_2440_, v_b_2441_, v_i_2442_, v___y_2448_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_);
return v___x_2455_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet_spec__0_spec__0___boxed(lean_object* v_revArgs_2456_, lean_object* v_start_2457_, lean_object* v_b_2458_, lean_object* v_i_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_){
_start:
{
lean_object* v_res_2472_; 
v_res_2472_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet_spec__0_spec__0(v_revArgs_2456_, v_start_2457_, v_b_2458_, v_i_2459_, v___y_2460_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_);
lean_dec(v___y_2470_);
lean_dec_ref(v___y_2469_);
lean_dec(v___y_2468_);
lean_dec_ref(v___y_2467_);
lean_dec(v___y_2466_);
lean_dec_ref(v___y_2465_);
lean_dec(v___y_2464_);
lean_dec_ref(v___y_2463_);
lean_dec(v___y_2462_);
lean_dec(v___y_2461_);
lean_dec_ref(v___y_2460_);
lean_dec(v_start_2457_);
lean_dec_ref(v_revArgs_2456_);
return v_res_2472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPLet(lean_object* v_goal_2473_, lean_object* v_target_2474_, lean_object* v_info_2475_, lean_object* v_a_2476_, lean_object* v_a_2477_, lean_object* v_a_2478_, lean_object* v_a_2479_, lean_object* v_a_2480_, lean_object* v_a_2481_, lean_object* v_a_2482_, lean_object* v_a_2483_, lean_object* v_a_2484_, lean_object* v_a_2485_, lean_object* v_a_2486_, lean_object* v_a_2487_){
_start:
{
lean_object* v___x_2489_; lean_object* v___x_2490_; 
v___x_2489_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_prog(v_info_2475_);
v___x_2490_ = l_Lean_Expr_getAppFn(v___x_2489_);
if (lean_obj_tag(v___x_2490_) == 8)
{
lean_object* v_declName_2491_; lean_object* v_type_2492_; lean_object* v_value_2493_; lean_object* v_body_2494_; uint8_t v_nondep_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; 
v_declName_2491_ = lean_ctor_get(v___x_2490_, 0);
lean_inc(v_declName_2491_);
v_type_2492_ = lean_ctor_get(v___x_2490_, 1);
lean_inc_ref(v_type_2492_);
v_value_2493_ = lean_ctor_get(v___x_2490_, 2);
lean_inc_ref(v_value_2493_);
v_body_2494_ = lean_ctor_get(v___x_2490_, 3);
lean_inc_ref(v_body_2494_);
v_nondep_2495_ = lean_ctor_get_uint8(v___x_2490_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v___x_2490_, 4);
v___x_2496_ = l_Lean_Expr_getAppNumArgs(v___x_2489_);
v___x_2497_ = lean_mk_empty_array_with_capacity(v___x_2496_);
lean_dec(v___x_2496_);
v___x_2498_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v___x_2489_, v___x_2497_);
v___x_2499_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substOrHoistLet(v_goal_2473_, v_target_2474_, v_info_2475_, v_declName_2491_, v_type_2492_, v_value_2493_, v_body_2494_, v_nondep_2495_, v___x_2498_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_, v_a_2483_, v_a_2484_, v_a_2485_, v_a_2486_, v_a_2487_);
lean_dec_ref(v___x_2498_);
if (lean_obj_tag(v___x_2499_) == 0)
{
lean_object* v_a_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; 
v_a_2500_ = lean_ctor_get(v___x_2499_, 0);
lean_inc(v_a_2500_);
lean_dec_ref_known(v___x_2499_, 1);
v___x_2501_ = lean_box(0);
v___x_2502_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2502_, 0, v_a_2500_);
lean_ctor_set(v___x_2502_, 1, v___x_2501_);
v___x_2503_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___redArg(v___x_2502_, v_a_2476_);
return v___x_2503_;
}
else
{
lean_object* v_a_2504_; lean_object* v___x_2506_; uint8_t v_isShared_2507_; uint8_t v_isSharedCheck_2511_; 
v_a_2504_ = lean_ctor_get(v___x_2499_, 0);
v_isSharedCheck_2511_ = !lean_is_exclusive(v___x_2499_);
if (v_isSharedCheck_2511_ == 0)
{
v___x_2506_ = v___x_2499_;
v_isShared_2507_ = v_isSharedCheck_2511_;
goto v_resetjp_2505_;
}
else
{
lean_inc(v_a_2504_);
lean_dec(v___x_2499_);
v___x_2506_ = lean_box(0);
v_isShared_2507_ = v_isSharedCheck_2511_;
goto v_resetjp_2505_;
}
v_resetjp_2505_:
{
lean_object* v___x_2509_; 
if (v_isShared_2507_ == 0)
{
v___x_2509_ = v___x_2506_;
goto v_reusejp_2508_;
}
else
{
lean_object* v_reuseFailAlloc_2510_; 
v_reuseFailAlloc_2510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2510_, 0, v_a_2504_);
v___x_2509_ = v_reuseFailAlloc_2510_;
goto v_reusejp_2508_;
}
v_reusejp_2508_:
{
return v___x_2509_;
}
}
}
}
else
{
lean_object* v___x_2512_; lean_object* v___x_2513_; 
lean_dec_ref(v___x_2490_);
lean_dec_ref(v___x_2489_);
lean_dec_ref(v_info_2475_);
lean_dec_ref(v_target_2474_);
lean_dec(v_goal_2473_);
v___x_2512_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___closed__0));
v___x_2513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2513_, 0, v___x_2512_);
return v___x_2513_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPLet___boxed(lean_object* v_goal_2514_, lean_object* v_target_2515_, lean_object* v_info_2516_, lean_object* v_a_2517_, lean_object* v_a_2518_, lean_object* v_a_2519_, lean_object* v_a_2520_, lean_object* v_a_2521_, lean_object* v_a_2522_, lean_object* v_a_2523_, lean_object* v_a_2524_, lean_object* v_a_2525_, lean_object* v_a_2526_, lean_object* v_a_2527_, lean_object* v_a_2528_, lean_object* v_a_2529_){
_start:
{
lean_object* v_res_2530_; 
v_res_2530_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPLet(v_goal_2514_, v_target_2515_, v_info_2516_, v_a_2517_, v_a_2518_, v_a_2519_, v_a_2520_, v_a_2521_, v_a_2522_, v_a_2523_, v_a_2524_, v_a_2525_, v_a_2526_, v_a_2527_, v_a_2528_);
lean_dec(v_a_2528_);
lean_dec_ref(v_a_2527_);
lean_dec(v_a_2526_);
lean_dec_ref(v_a_2525_);
lean_dec(v_a_2524_);
lean_dec_ref(v_a_2523_);
lean_dec(v_a_2522_);
lean_dec_ref(v_a_2521_);
lean_dec(v_a_2520_);
lean_dec(v_a_2519_);
lean_dec_ref(v_a_2518_);
lean_dec(v_a_2517_);
return v_res_2530_;
}
}
static lean_object* _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_2532_; lean_object* v___x_2533_; 
v___x_2532_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch_spec__0___redArg___closed__0));
v___x_2533_ = l_Lean_stringToMessageData(v___x_2532_);
return v___x_2533_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch_spec__0___redArg(lean_object* v_x_2534_, lean_object* v_x_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_){
_start:
{
if (lean_obj_tag(v_x_2534_) == 0)
{
lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2543_ = l_List_reverse___redArg(v_x_2535_);
v___x_2544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2544_, 0, v___x_2543_);
return v___x_2544_;
}
else
{
lean_object* v_head_2545_; lean_object* v_tail_2546_; lean_object* v___x_2548_; uint8_t v_isShared_2549_; uint8_t v_isSharedCheck_2578_; 
v_head_2545_ = lean_ctor_get(v_x_2534_, 0);
v_tail_2546_ = lean_ctor_get(v_x_2534_, 1);
v_isSharedCheck_2578_ = !lean_is_exclusive(v_x_2534_);
if (v_isSharedCheck_2578_ == 0)
{
v___x_2548_ = v_x_2534_;
v_isShared_2549_ = v_isSharedCheck_2578_;
goto v_resetjp_2547_;
}
else
{
lean_inc(v_tail_2546_);
lean_inc(v_head_2545_);
lean_dec(v_x_2534_);
v___x_2548_ = lean_box(0);
v_isShared_2549_ = v_isSharedCheck_2578_;
goto v_resetjp_2547_;
}
v_resetjp_2547_:
{
lean_object* v_a_2551_; lean_object* v___x_2556_; lean_object* v___x_2557_; 
v___x_2556_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg___closed__0));
v___x_2557_ = l_Lean_Meta_Sym_intros(v_head_2545_, v___x_2556_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_);
if (lean_obj_tag(v___x_2557_) == 0)
{
lean_object* v_a_2558_; 
v_a_2558_ = lean_ctor_get(v___x_2557_, 0);
lean_inc(v_a_2558_);
lean_dec_ref_known(v___x_2557_, 1);
if (lean_obj_tag(v_a_2558_) == 1)
{
lean_object* v_mvarId_2559_; 
v_mvarId_2559_ = lean_ctor_get(v_a_2558_, 1);
lean_inc(v_mvarId_2559_);
lean_dec_ref_known(v_a_2558_, 2);
v_a_2551_ = v_mvarId_2559_;
goto v___jp_2550_;
}
else
{
lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v_a_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2569_; 
lean_dec(v_a_2558_);
lean_del_object(v___x_2548_);
lean_dec(v_tail_2546_);
lean_dec(v_x_2535_);
v___x_2560_ = lean_obj_once(&l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch_spec__0___redArg___closed__1, &l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch_spec__0___redArg___closed__1_once, _init_l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch_spec__0___redArg___closed__1);
v___x_2561_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0___redArg(v___x_2560_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_);
v_a_2562_ = lean_ctor_get(v___x_2561_, 0);
v_isSharedCheck_2569_ = !lean_is_exclusive(v___x_2561_);
if (v_isSharedCheck_2569_ == 0)
{
v___x_2564_ = v___x_2561_;
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_a_2562_);
lean_dec(v___x_2561_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2567_; 
if (v_isShared_2565_ == 0)
{
v___x_2567_ = v___x_2564_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v_a_2562_);
v___x_2567_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
return v___x_2567_;
}
}
}
}
else
{
lean_object* v_a_2570_; lean_object* v___x_2572_; uint8_t v_isShared_2573_; uint8_t v_isSharedCheck_2577_; 
lean_del_object(v___x_2548_);
lean_dec(v_tail_2546_);
lean_dec(v_x_2535_);
v_a_2570_ = lean_ctor_get(v___x_2557_, 0);
v_isSharedCheck_2577_ = !lean_is_exclusive(v___x_2557_);
if (v_isSharedCheck_2577_ == 0)
{
v___x_2572_ = v___x_2557_;
v_isShared_2573_ = v_isSharedCheck_2577_;
goto v_resetjp_2571_;
}
else
{
lean_inc(v_a_2570_);
lean_dec(v___x_2557_);
v___x_2572_ = lean_box(0);
v_isShared_2573_ = v_isSharedCheck_2577_;
goto v_resetjp_2571_;
}
v_resetjp_2571_:
{
lean_object* v___x_2575_; 
if (v_isShared_2573_ == 0)
{
v___x_2575_ = v___x_2572_;
goto v_reusejp_2574_;
}
else
{
lean_object* v_reuseFailAlloc_2576_; 
v_reuseFailAlloc_2576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2576_, 0, v_a_2570_);
v___x_2575_ = v_reuseFailAlloc_2576_;
goto v_reusejp_2574_;
}
v_reusejp_2574_:
{
return v___x_2575_;
}
}
}
v___jp_2550_:
{
lean_object* v___x_2553_; 
if (v_isShared_2549_ == 0)
{
lean_ctor_set(v___x_2548_, 1, v_x_2535_);
lean_ctor_set(v___x_2548_, 0, v_a_2551_);
v___x_2553_ = v___x_2548_;
goto v_reusejp_2552_;
}
else
{
lean_object* v_reuseFailAlloc_2555_; 
v_reuseFailAlloc_2555_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2555_, 0, v_a_2551_);
lean_ctor_set(v_reuseFailAlloc_2555_, 1, v_x_2535_);
v___x_2553_ = v_reuseFailAlloc_2555_;
goto v_reusejp_2552_;
}
v_reusejp_2552_:
{
v_x_2534_ = v_tail_2546_;
v_x_2535_ = v___x_2553_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch_spec__0___redArg___boxed(lean_object* v_x_2579_, lean_object* v_x_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_){
_start:
{
lean_object* v_res_2588_; 
v_res_2588_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch_spec__0___redArg(v_x_2579_, v_x_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_);
lean_dec(v___y_2586_);
lean_dec_ref(v___y_2585_);
lean_dec(v___y_2584_);
lean_dec_ref(v___y_2583_);
lean_dec(v___y_2582_);
lean_dec_ref(v___y_2581_);
return v_res_2588_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch___closed__1(void){
_start:
{
lean_object* v___x_2590_; lean_object* v___x_2591_; 
v___x_2590_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch___closed__0));
v___x_2591_ = l_Lean_stringToMessageData(v___x_2590_);
return v___x_2591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch(lean_object* v_goal_2592_, lean_object* v_target_2593_, lean_object* v_info_2594_, lean_object* v_splitInfo_2595_, lean_object* v_a_2596_, lean_object* v_a_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_, lean_object* v_a_2603_, lean_object* v_a_2604_, lean_object* v_a_2605_, lean_object* v_a_2606_){
_start:
{
lean_object* v___y_2609_; lean_object* v___y_2610_; lean_object* v___y_2611_; lean_object* v___y_2612_; lean_object* v___y_2613_; lean_object* v___y_2614_; lean_object* v___y_2615_; lean_object* v___y_2616_; lean_object* v___y_2617_; lean_object* v___y_2618_; lean_object* v___y_2619_; 
if (lean_obj_tag(v_splitInfo_2595_) == 2)
{
lean_object* v___x_2649_; lean_object* v___x_2650_; 
v___x_2649_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_prog(v_info_2594_);
v___x_2650_ = l_Lean_Meta_reduceRecMatcher_x3f(v___x_2649_, v_a_2603_, v_a_2604_, v_a_2605_, v_a_2606_);
lean_dec_ref(v___x_2649_);
if (lean_obj_tag(v___x_2650_) == 0)
{
lean_object* v_a_2651_; 
v_a_2651_ = lean_ctor_get(v___x_2650_, 0);
lean_inc(v_a_2651_);
lean_dec_ref_known(v___x_2650_, 1);
if (lean_obj_tag(v_a_2651_) == 1)
{
lean_object* v_val_2652_; lean_object* v___x_2653_; 
lean_dec_ref_known(v_splitInfo_2595_, 1);
v_val_2652_ = lean_ctor_get(v_a_2651_, 0);
lean_inc(v_val_2652_);
lean_dec_ref_known(v_a_2651_, 1);
v___x_2653_ = l_Lean_Meta_Sym_shareCommon___redArg(v_val_2652_, v_a_2602_);
if (lean_obj_tag(v___x_2653_) == 0)
{
lean_object* v_a_2654_; lean_object* v___x_2655_; 
v_a_2654_ = lean_ctor_get(v___x_2653_, 0);
lean_inc(v_a_2654_);
lean_dec_ref_known(v___x_2653_, 1);
v___x_2655_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_replaceProgDefEq(v_goal_2592_, v_target_2593_, v_info_2594_, v_a_2654_, v_a_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_, v_a_2601_, v_a_2602_, v_a_2603_, v_a_2604_, v_a_2605_, v_a_2606_);
if (lean_obj_tag(v___x_2655_) == 0)
{
lean_object* v_a_2656_; lean_object* v___x_2658_; uint8_t v_isShared_2659_; uint8_t v_isSharedCheck_2665_; 
v_a_2656_ = lean_ctor_get(v___x_2655_, 0);
v_isSharedCheck_2665_ = !lean_is_exclusive(v___x_2655_);
if (v_isSharedCheck_2665_ == 0)
{
v___x_2658_ = v___x_2655_;
v_isShared_2659_ = v_isSharedCheck_2665_;
goto v_resetjp_2657_;
}
else
{
lean_inc(v_a_2656_);
lean_dec(v___x_2655_);
v___x_2658_ = lean_box(0);
v_isShared_2659_ = v_isSharedCheck_2665_;
goto v_resetjp_2657_;
}
v_resetjp_2657_:
{
lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2663_; 
v___x_2660_ = lean_box(0);
v___x_2661_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2661_, 0, v_a_2656_);
lean_ctor_set(v___x_2661_, 1, v___x_2660_);
if (v_isShared_2659_ == 0)
{
lean_ctor_set(v___x_2658_, 0, v___x_2661_);
v___x_2663_ = v___x_2658_;
goto v_reusejp_2662_;
}
else
{
lean_object* v_reuseFailAlloc_2664_; 
v_reuseFailAlloc_2664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2664_, 0, v___x_2661_);
v___x_2663_ = v_reuseFailAlloc_2664_;
goto v_reusejp_2662_;
}
v_reusejp_2662_:
{
return v___x_2663_;
}
}
}
else
{
lean_object* v_a_2666_; lean_object* v___x_2668_; uint8_t v_isShared_2669_; uint8_t v_isSharedCheck_2673_; 
v_a_2666_ = lean_ctor_get(v___x_2655_, 0);
v_isSharedCheck_2673_ = !lean_is_exclusive(v___x_2655_);
if (v_isSharedCheck_2673_ == 0)
{
v___x_2668_ = v___x_2655_;
v_isShared_2669_ = v_isSharedCheck_2673_;
goto v_resetjp_2667_;
}
else
{
lean_inc(v_a_2666_);
lean_dec(v___x_2655_);
v___x_2668_ = lean_box(0);
v_isShared_2669_ = v_isSharedCheck_2673_;
goto v_resetjp_2667_;
}
v_resetjp_2667_:
{
lean_object* v___x_2671_; 
if (v_isShared_2669_ == 0)
{
v___x_2671_ = v___x_2668_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2672_; 
v_reuseFailAlloc_2672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2672_, 0, v_a_2666_);
v___x_2671_ = v_reuseFailAlloc_2672_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
return v___x_2671_;
}
}
}
}
else
{
lean_object* v_a_2674_; lean_object* v___x_2676_; uint8_t v_isShared_2677_; uint8_t v_isSharedCheck_2681_; 
lean_dec_ref(v_info_2594_);
lean_dec_ref(v_target_2593_);
lean_dec(v_goal_2592_);
v_a_2674_ = lean_ctor_get(v___x_2653_, 0);
v_isSharedCheck_2681_ = !lean_is_exclusive(v___x_2653_);
if (v_isSharedCheck_2681_ == 0)
{
v___x_2676_ = v___x_2653_;
v_isShared_2677_ = v_isSharedCheck_2681_;
goto v_resetjp_2675_;
}
else
{
lean_inc(v_a_2674_);
lean_dec(v___x_2653_);
v___x_2676_ = lean_box(0);
v_isShared_2677_ = v_isSharedCheck_2681_;
goto v_resetjp_2675_;
}
v_resetjp_2675_:
{
lean_object* v___x_2679_; 
if (v_isShared_2677_ == 0)
{
v___x_2679_ = v___x_2676_;
goto v_reusejp_2678_;
}
else
{
lean_object* v_reuseFailAlloc_2680_; 
v_reuseFailAlloc_2680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2680_, 0, v_a_2674_);
v___x_2679_ = v_reuseFailAlloc_2680_;
goto v_reusejp_2678_;
}
v_reusejp_2678_:
{
return v___x_2679_;
}
}
}
}
else
{
lean_dec(v_a_2651_);
lean_dec_ref(v_target_2593_);
v___y_2609_ = v_a_2596_;
v___y_2610_ = v_a_2597_;
v___y_2611_ = v_a_2598_;
v___y_2612_ = v_a_2599_;
v___y_2613_ = v_a_2600_;
v___y_2614_ = v_a_2601_;
v___y_2615_ = v_a_2602_;
v___y_2616_ = v_a_2603_;
v___y_2617_ = v_a_2604_;
v___y_2618_ = v_a_2605_;
v___y_2619_ = v_a_2606_;
goto v___jp_2608_;
}
}
else
{
lean_object* v_a_2682_; lean_object* v___x_2684_; uint8_t v_isShared_2685_; uint8_t v_isSharedCheck_2689_; 
lean_dec_ref_known(v_splitInfo_2595_, 1);
lean_dec_ref(v_info_2594_);
lean_dec_ref(v_target_2593_);
lean_dec(v_goal_2592_);
v_a_2682_ = lean_ctor_get(v___x_2650_, 0);
v_isSharedCheck_2689_ = !lean_is_exclusive(v___x_2650_);
if (v_isSharedCheck_2689_ == 0)
{
v___x_2684_ = v___x_2650_;
v_isShared_2685_ = v_isSharedCheck_2689_;
goto v_resetjp_2683_;
}
else
{
lean_inc(v_a_2682_);
lean_dec(v___x_2650_);
v___x_2684_ = lean_box(0);
v_isShared_2685_ = v_isSharedCheck_2689_;
goto v_resetjp_2683_;
}
v_resetjp_2683_:
{
lean_object* v___x_2687_; 
if (v_isShared_2685_ == 0)
{
v___x_2687_ = v___x_2684_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v_a_2682_);
v___x_2687_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
return v___x_2687_;
}
}
}
}
else
{
lean_dec_ref(v_target_2593_);
v___y_2609_ = v_a_2596_;
v___y_2610_ = v_a_2597_;
v___y_2611_ = v_a_2598_;
v___y_2612_ = v_a_2599_;
v___y_2613_ = v_a_2600_;
v___y_2614_ = v_a_2601_;
v___y_2615_ = v_a_2602_;
v___y_2616_ = v_a_2603_;
v___y_2617_ = v_a_2604_;
v___y_2618_ = v_a_2605_;
v___y_2619_ = v_a_2606_;
goto v___jp_2608_;
}
v___jp_2608_:
{
lean_object* v___x_2620_; 
lean_inc_ref(v_info_2594_);
v___x_2620_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg(v_splitInfo_2595_, v_info_2594_, v___y_2610_, v___y_2614_, v___y_2615_, v___y_2616_, v___y_2617_, v___y_2618_, v___y_2619_);
if (lean_obj_tag(v___x_2620_) == 0)
{
lean_object* v_a_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; 
v_a_2621_ = lean_ctor_get(v___x_2620_, 0);
lean_inc(v_a_2621_);
lean_dec_ref_known(v___x_2620_, 1);
v___x_2622_ = lean_box(0);
v___x_2623_ = l_Lean_Meta_Sym_BackwardRule_applyChecked(v_a_2621_, v_goal_2592_, v___x_2622_, v___y_2609_, v___y_2610_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_, v___y_2615_, v___y_2616_, v___y_2617_, v___y_2618_, v___y_2619_);
if (lean_obj_tag(v___x_2623_) == 0)
{
lean_object* v_a_2624_; 
v_a_2624_ = lean_ctor_get(v___x_2623_, 0);
lean_inc(v_a_2624_);
lean_dec_ref_known(v___x_2623_, 1);
if (lean_obj_tag(v_a_2624_) == 1)
{
lean_object* v_mvarIds_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; 
lean_dec_ref(v_info_2594_);
v_mvarIds_2625_ = lean_ctor_get(v_a_2624_, 0);
lean_inc(v_mvarIds_2625_);
lean_dec_ref_known(v_a_2624_, 1);
v___x_2626_ = lean_box(0);
v___x_2627_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch_spec__0___redArg(v_mvarIds_2625_, v___x_2626_, v___y_2614_, v___y_2615_, v___y_2616_, v___y_2617_, v___y_2618_, v___y_2619_);
return v___x_2627_;
}
else
{
lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; 
lean_dec(v_a_2624_);
v___x_2628_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch___closed__1);
v___x_2629_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_prog(v_info_2594_);
lean_dec_ref(v_info_2594_);
v___x_2630_ = l_Lean_indentExpr(v___x_2629_);
v___x_2631_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2631_, 0, v___x_2628_);
lean_ctor_set(v___x_2631_, 1, v___x_2630_);
v___x_2632_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0___redArg(v___x_2631_, v___y_2616_, v___y_2617_, v___y_2618_, v___y_2619_);
return v___x_2632_;
}
}
else
{
lean_object* v_a_2633_; lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2640_; 
lean_dec_ref(v_info_2594_);
v_a_2633_ = lean_ctor_get(v___x_2623_, 0);
v_isSharedCheck_2640_ = !lean_is_exclusive(v___x_2623_);
if (v_isSharedCheck_2640_ == 0)
{
v___x_2635_ = v___x_2623_;
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
else
{
lean_inc(v_a_2633_);
lean_dec(v___x_2623_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
lean_object* v___x_2638_; 
if (v_isShared_2636_ == 0)
{
v___x_2638_ = v___x_2635_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2639_; 
v_reuseFailAlloc_2639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2639_, 0, v_a_2633_);
v___x_2638_ = v_reuseFailAlloc_2639_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
return v___x_2638_;
}
}
}
}
else
{
lean_object* v_a_2641_; lean_object* v___x_2643_; uint8_t v_isShared_2644_; uint8_t v_isSharedCheck_2648_; 
lean_dec_ref(v_info_2594_);
lean_dec(v_goal_2592_);
v_a_2641_ = lean_ctor_get(v___x_2620_, 0);
v_isSharedCheck_2648_ = !lean_is_exclusive(v___x_2620_);
if (v_isSharedCheck_2648_ == 0)
{
v___x_2643_ = v___x_2620_;
v_isShared_2644_ = v_isSharedCheck_2648_;
goto v_resetjp_2642_;
}
else
{
lean_inc(v_a_2641_);
lean_dec(v___x_2620_);
v___x_2643_ = lean_box(0);
v_isShared_2644_ = v_isSharedCheck_2648_;
goto v_resetjp_2642_;
}
v_resetjp_2642_:
{
lean_object* v___x_2646_; 
if (v_isShared_2644_ == 0)
{
v___x_2646_ = v___x_2643_;
goto v_reusejp_2645_;
}
else
{
lean_object* v_reuseFailAlloc_2647_; 
v_reuseFailAlloc_2647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2647_, 0, v_a_2641_);
v___x_2646_ = v_reuseFailAlloc_2647_;
goto v_reusejp_2645_;
}
v_reusejp_2645_:
{
return v___x_2646_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch___boxed(lean_object* v_goal_2690_, lean_object* v_target_2691_, lean_object* v_info_2692_, lean_object* v_splitInfo_2693_, lean_object* v_a_2694_, lean_object* v_a_2695_, lean_object* v_a_2696_, lean_object* v_a_2697_, lean_object* v_a_2698_, lean_object* v_a_2699_, lean_object* v_a_2700_, lean_object* v_a_2701_, lean_object* v_a_2702_, lean_object* v_a_2703_, lean_object* v_a_2704_, lean_object* v_a_2705_){
_start:
{
lean_object* v_res_2706_; 
v_res_2706_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch(v_goal_2690_, v_target_2691_, v_info_2692_, v_splitInfo_2693_, v_a_2694_, v_a_2695_, v_a_2696_, v_a_2697_, v_a_2698_, v_a_2699_, v_a_2700_, v_a_2701_, v_a_2702_, v_a_2703_, v_a_2704_);
lean_dec(v_a_2704_);
lean_dec_ref(v_a_2703_);
lean_dec(v_a_2702_);
lean_dec_ref(v_a_2701_);
lean_dec(v_a_2700_);
lean_dec_ref(v_a_2699_);
lean_dec(v_a_2698_);
lean_dec_ref(v_a_2697_);
lean_dec(v_a_2696_);
lean_dec(v_a_2695_);
lean_dec_ref(v_a_2694_);
return v_res_2706_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch_spec__0(lean_object* v_x_2707_, lean_object* v_x_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_){
_start:
{
lean_object* v___x_2721_; 
v___x_2721_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch_spec__0___redArg(v_x_2707_, v_x_2708_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_);
return v___x_2721_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch_spec__0___boxed(lean_object* v_x_2722_, lean_object* v_x_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_){
_start:
{
lean_object* v_res_2736_; 
v_res_2736_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch_spec__0(v_x_2722_, v_x_2723_, v___y_2724_, v___y_2725_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_, v___y_2730_, v___y_2731_, v___y_2732_, v___y_2733_, v___y_2734_);
lean_dec(v___y_2734_);
lean_dec_ref(v___y_2733_);
lean_dec(v___y_2732_);
lean_dec_ref(v___y_2731_);
lean_dec(v___y_2730_);
lean_dec_ref(v___y_2729_);
lean_dec(v___y_2728_);
lean_dec_ref(v___y_2727_);
lean_dec(v___y_2726_);
lean_dec(v___y_2725_);
lean_dec_ref(v___y_2724_);
return v_res_2736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPMatch(lean_object* v_goal_2737_, lean_object* v_target_2738_, lean_object* v_info_2739_, lean_object* v_a_2740_, lean_object* v_a_2741_, lean_object* v_a_2742_, lean_object* v_a_2743_, lean_object* v_a_2744_, lean_object* v_a_2745_, lean_object* v_a_2746_, lean_object* v_a_2747_, lean_object* v_a_2748_, lean_object* v_a_2749_, lean_object* v_a_2750_, lean_object* v_a_2751_){
_start:
{
lean_object* v___x_2753_; lean_object* v___x_2754_; 
v___x_2753_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_prog(v_info_2739_);
v___x_2754_ = l_Lean_Elab_Tactic_Do_getSplitInfo_x3f(v___x_2753_, v_a_2748_, v_a_2749_, v_a_2750_, v_a_2751_);
if (lean_obj_tag(v___x_2754_) == 0)
{
lean_object* v_a_2755_; lean_object* v___x_2757_; uint8_t v_isShared_2758_; uint8_t v_isSharedCheck_2775_; 
v_a_2755_ = lean_ctor_get(v___x_2754_, 0);
v_isSharedCheck_2775_ = !lean_is_exclusive(v___x_2754_);
if (v_isSharedCheck_2775_ == 0)
{
v___x_2757_ = v___x_2754_;
v_isShared_2758_ = v_isSharedCheck_2775_;
goto v_resetjp_2756_;
}
else
{
lean_inc(v_a_2755_);
lean_dec(v___x_2754_);
v___x_2757_ = lean_box(0);
v_isShared_2758_ = v_isSharedCheck_2775_;
goto v_resetjp_2756_;
}
v_resetjp_2756_:
{
if (lean_obj_tag(v_a_2755_) == 1)
{
lean_object* v_val_2759_; lean_object* v___x_2760_; 
lean_del_object(v___x_2757_);
v_val_2759_ = lean_ctor_get(v_a_2755_, 0);
lean_inc(v_val_2759_);
lean_dec_ref_known(v_a_2755_, 1);
v___x_2760_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_splitMatch(v_goal_2737_, v_target_2738_, v_info_2739_, v_val_2759_, v_a_2741_, v_a_2742_, v_a_2743_, v_a_2744_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_, v_a_2750_, v_a_2751_);
if (lean_obj_tag(v___x_2760_) == 0)
{
lean_object* v_a_2761_; lean_object* v___x_2762_; 
v_a_2761_ = lean_ctor_get(v___x_2760_, 0);
lean_inc(v_a_2761_);
lean_dec_ref_known(v___x_2760_, 1);
v___x_2762_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___redArg(v_a_2761_, v_a_2740_);
return v___x_2762_;
}
else
{
lean_object* v_a_2763_; lean_object* v___x_2765_; uint8_t v_isShared_2766_; uint8_t v_isSharedCheck_2770_; 
v_a_2763_ = lean_ctor_get(v___x_2760_, 0);
v_isSharedCheck_2770_ = !lean_is_exclusive(v___x_2760_);
if (v_isSharedCheck_2770_ == 0)
{
v___x_2765_ = v___x_2760_;
v_isShared_2766_ = v_isSharedCheck_2770_;
goto v_resetjp_2764_;
}
else
{
lean_inc(v_a_2763_);
lean_dec(v___x_2760_);
v___x_2765_ = lean_box(0);
v_isShared_2766_ = v_isSharedCheck_2770_;
goto v_resetjp_2764_;
}
v_resetjp_2764_:
{
lean_object* v___x_2768_; 
if (v_isShared_2766_ == 0)
{
v___x_2768_ = v___x_2765_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v_a_2763_);
v___x_2768_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
return v___x_2768_;
}
}
}
}
else
{
lean_object* v___x_2771_; lean_object* v___x_2773_; 
lean_dec(v_a_2755_);
lean_dec_ref(v_info_2739_);
lean_dec_ref(v_target_2738_);
lean_dec(v_goal_2737_);
v___x_2771_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___closed__0));
if (v_isShared_2758_ == 0)
{
lean_ctor_set(v___x_2757_, 0, v___x_2771_);
v___x_2773_ = v___x_2757_;
goto v_reusejp_2772_;
}
else
{
lean_object* v_reuseFailAlloc_2774_; 
v_reuseFailAlloc_2774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2774_, 0, v___x_2771_);
v___x_2773_ = v_reuseFailAlloc_2774_;
goto v_reusejp_2772_;
}
v_reusejp_2772_:
{
return v___x_2773_;
}
}
}
}
else
{
lean_object* v_a_2776_; lean_object* v___x_2778_; uint8_t v_isShared_2779_; uint8_t v_isSharedCheck_2783_; 
lean_dec_ref(v_info_2739_);
lean_dec_ref(v_target_2738_);
lean_dec(v_goal_2737_);
v_a_2776_ = lean_ctor_get(v___x_2754_, 0);
v_isSharedCheck_2783_ = !lean_is_exclusive(v___x_2754_);
if (v_isSharedCheck_2783_ == 0)
{
v___x_2778_ = v___x_2754_;
v_isShared_2779_ = v_isSharedCheck_2783_;
goto v_resetjp_2777_;
}
else
{
lean_inc(v_a_2776_);
lean_dec(v___x_2754_);
v___x_2778_ = lean_box(0);
v_isShared_2779_ = v_isSharedCheck_2783_;
goto v_resetjp_2777_;
}
v_resetjp_2777_:
{
lean_object* v___x_2781_; 
if (v_isShared_2779_ == 0)
{
v___x_2781_ = v___x_2778_;
goto v_reusejp_2780_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v_a_2776_);
v___x_2781_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2780_;
}
v_reusejp_2780_:
{
return v___x_2781_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPMatch___boxed(lean_object* v_goal_2784_, lean_object* v_target_2785_, lean_object* v_info_2786_, lean_object* v_a_2787_, lean_object* v_a_2788_, lean_object* v_a_2789_, lean_object* v_a_2790_, lean_object* v_a_2791_, lean_object* v_a_2792_, lean_object* v_a_2793_, lean_object* v_a_2794_, lean_object* v_a_2795_, lean_object* v_a_2796_, lean_object* v_a_2797_, lean_object* v_a_2798_, lean_object* v_a_2799_){
_start:
{
lean_object* v_res_2800_; 
v_res_2800_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPMatch(v_goal_2784_, v_target_2785_, v_info_2786_, v_a_2787_, v_a_2788_, v_a_2789_, v_a_2790_, v_a_2791_, v_a_2792_, v_a_2793_, v_a_2794_, v_a_2795_, v_a_2796_, v_a_2797_, v_a_2798_);
lean_dec(v_a_2798_);
lean_dec_ref(v_a_2797_);
lean_dec(v_a_2796_);
lean_dec_ref(v_a_2795_);
lean_dec(v_a_2794_);
lean_dec_ref(v_a_2793_);
lean_dec(v_a_2792_);
lean_dec_ref(v_a_2791_);
lean_dec(v_a_2790_);
lean_dec(v_a_2789_);
lean_dec_ref(v_a_2788_);
lean_dec(v_a_2787_);
return v_res_2800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substFvarZeta(lean_object* v_goal_2801_, lean_object* v_target_2802_, lean_object* v_info_2803_, lean_object* v_val_2804_, lean_object* v_appArgs_2805_, lean_object* v_a_2806_, lean_object* v_a_2807_, lean_object* v_a_2808_, lean_object* v_a_2809_, lean_object* v_a_2810_, lean_object* v_a_2811_, lean_object* v_a_2812_, lean_object* v_a_2813_, lean_object* v_a_2814_, lean_object* v_a_2815_, lean_object* v_a_2816_){
_start:
{
uint8_t v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; 
v___x_2818_ = 0;
v___x_2819_ = l_Lean_Expr_betaRev(v_val_2804_, v_appArgs_2805_, v___x_2818_, v___x_2818_);
v___x_2820_ = l_Lean_Meta_Sym_shareCommon___redArg(v___x_2819_, v_a_2812_);
if (lean_obj_tag(v___x_2820_) == 0)
{
lean_object* v_a_2821_; lean_object* v___x_2822_; 
v_a_2821_ = lean_ctor_get(v___x_2820_, 0);
lean_inc(v_a_2821_);
lean_dec_ref_known(v___x_2820_, 1);
v___x_2822_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_replaceProgDefEq(v_goal_2801_, v_target_2802_, v_info_2803_, v_a_2821_, v_a_2806_, v_a_2807_, v_a_2808_, v_a_2809_, v_a_2810_, v_a_2811_, v_a_2812_, v_a_2813_, v_a_2814_, v_a_2815_, v_a_2816_);
return v___x_2822_;
}
else
{
lean_object* v_a_2823_; lean_object* v___x_2825_; uint8_t v_isShared_2826_; uint8_t v_isSharedCheck_2830_; 
lean_dec_ref(v_info_2803_);
lean_dec_ref(v_target_2802_);
lean_dec(v_goal_2801_);
v_a_2823_ = lean_ctor_get(v___x_2820_, 0);
v_isSharedCheck_2830_ = !lean_is_exclusive(v___x_2820_);
if (v_isSharedCheck_2830_ == 0)
{
v___x_2825_ = v___x_2820_;
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
else
{
lean_inc(v_a_2823_);
lean_dec(v___x_2820_);
v___x_2825_ = lean_box(0);
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
v_resetjp_2824_:
{
lean_object* v___x_2828_; 
if (v_isShared_2826_ == 0)
{
v___x_2828_ = v___x_2825_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v_a_2823_);
v___x_2828_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
return v___x_2828_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substFvarZeta___boxed(lean_object** _args){
lean_object* v_goal_2831_ = _args[0];
lean_object* v_target_2832_ = _args[1];
lean_object* v_info_2833_ = _args[2];
lean_object* v_val_2834_ = _args[3];
lean_object* v_appArgs_2835_ = _args[4];
lean_object* v_a_2836_ = _args[5];
lean_object* v_a_2837_ = _args[6];
lean_object* v_a_2838_ = _args[7];
lean_object* v_a_2839_ = _args[8];
lean_object* v_a_2840_ = _args[9];
lean_object* v_a_2841_ = _args[10];
lean_object* v_a_2842_ = _args[11];
lean_object* v_a_2843_ = _args[12];
lean_object* v_a_2844_ = _args[13];
lean_object* v_a_2845_ = _args[14];
lean_object* v_a_2846_ = _args[15];
lean_object* v_a_2847_ = _args[16];
_start:
{
lean_object* v_res_2848_; 
v_res_2848_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substFvarZeta(v_goal_2831_, v_target_2832_, v_info_2833_, v_val_2834_, v_appArgs_2835_, v_a_2836_, v_a_2837_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_, v_a_2843_, v_a_2844_, v_a_2845_, v_a_2846_);
lean_dec(v_a_2846_);
lean_dec_ref(v_a_2845_);
lean_dec(v_a_2844_);
lean_dec_ref(v_a_2843_);
lean_dec(v_a_2842_);
lean_dec_ref(v_a_2841_);
lean_dec(v_a_2840_);
lean_dec_ref(v_a_2839_);
lean_dec(v_a_2838_);
lean_dec(v_a_2837_);
lean_dec_ref(v_a_2836_);
lean_dec_ref(v_appArgs_2835_);
return v_res_2848_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPFVarZeta(lean_object* v_goal_2849_, lean_object* v_target_2850_, lean_object* v_info_2851_, lean_object* v_a_2852_, lean_object* v_a_2853_, lean_object* v_a_2854_, lean_object* v_a_2855_, lean_object* v_a_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_, lean_object* v_a_2862_, lean_object* v_a_2863_){
_start:
{
lean_object* v___x_2868_; lean_object* v_f_2869_; lean_object* v___x_2870_; 
v___x_2868_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_prog(v_info_2851_);
v_f_2869_ = l_Lean_Expr_getAppFn(v___x_2868_);
v___x_2870_ = l_Lean_Expr_fvarId_x3f(v_f_2869_);
lean_dec_ref(v_f_2869_);
if (lean_obj_tag(v___x_2870_) == 0)
{
lean_dec_ref(v___x_2868_);
lean_dec_ref(v_info_2851_);
lean_dec_ref(v_target_2850_);
lean_dec(v_goal_2849_);
goto v___jp_2865_;
}
else
{
lean_object* v_val_2871_; uint8_t v___x_2872_; lean_object* v___x_2873_; 
v_val_2871_ = lean_ctor_get(v___x_2870_, 0);
lean_inc(v_val_2871_);
lean_dec_ref_known(v___x_2870_, 1);
v___x_2872_ = 0;
v___x_2873_ = l_Lean_FVarId_getValue_x3f___redArg(v_val_2871_, v___x_2872_, v_a_2860_, v_a_2862_, v_a_2863_);
if (lean_obj_tag(v___x_2873_) == 0)
{
lean_object* v_a_2874_; 
v_a_2874_ = lean_ctor_get(v___x_2873_, 0);
lean_inc(v_a_2874_);
lean_dec_ref_known(v___x_2873_, 1);
if (lean_obj_tag(v_a_2874_) == 1)
{
lean_object* v_val_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; 
v_val_2875_ = lean_ctor_get(v_a_2874_, 0);
lean_inc(v_val_2875_);
lean_dec_ref_known(v_a_2874_, 1);
v___x_2876_ = l_Lean_Expr_getAppNumArgs(v___x_2868_);
v___x_2877_ = lean_mk_empty_array_with_capacity(v___x_2876_);
lean_dec(v___x_2876_);
v___x_2878_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v___x_2868_, v___x_2877_);
v___x_2879_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_substFvarZeta(v_goal_2849_, v_target_2850_, v_info_2851_, v_val_2875_, v___x_2878_, v_a_2853_, v_a_2854_, v_a_2855_, v_a_2856_, v_a_2857_, v_a_2858_, v_a_2859_, v_a_2860_, v_a_2861_, v_a_2862_, v_a_2863_);
lean_dec_ref(v___x_2878_);
if (lean_obj_tag(v___x_2879_) == 0)
{
lean_object* v_a_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; 
v_a_2880_ = lean_ctor_get(v___x_2879_, 0);
lean_inc(v_a_2880_);
lean_dec_ref_known(v___x_2879_, 1);
v___x_2881_ = lean_box(0);
v___x_2882_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2882_, 0, v_a_2880_);
lean_ctor_set(v___x_2882_, 1, v___x_2881_);
v___x_2883_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___redArg(v___x_2882_, v_a_2852_);
return v___x_2883_;
}
else
{
lean_object* v_a_2884_; lean_object* v___x_2886_; uint8_t v_isShared_2887_; uint8_t v_isSharedCheck_2891_; 
v_a_2884_ = lean_ctor_get(v___x_2879_, 0);
v_isSharedCheck_2891_ = !lean_is_exclusive(v___x_2879_);
if (v_isSharedCheck_2891_ == 0)
{
v___x_2886_ = v___x_2879_;
v_isShared_2887_ = v_isSharedCheck_2891_;
goto v_resetjp_2885_;
}
else
{
lean_inc(v_a_2884_);
lean_dec(v___x_2879_);
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
lean_dec(v_a_2874_);
lean_dec_ref(v___x_2868_);
lean_dec_ref(v_info_2851_);
lean_dec_ref(v_target_2850_);
lean_dec(v_goal_2849_);
goto v___jp_2865_;
}
}
else
{
lean_object* v_a_2892_; lean_object* v___x_2894_; uint8_t v_isShared_2895_; uint8_t v_isSharedCheck_2899_; 
lean_dec_ref(v___x_2868_);
lean_dec_ref(v_info_2851_);
lean_dec_ref(v_target_2850_);
lean_dec(v_goal_2849_);
v_a_2892_ = lean_ctor_get(v___x_2873_, 0);
v_isSharedCheck_2899_ = !lean_is_exclusive(v___x_2873_);
if (v_isSharedCheck_2899_ == 0)
{
v___x_2894_ = v___x_2873_;
v_isShared_2895_ = v_isSharedCheck_2899_;
goto v_resetjp_2893_;
}
else
{
lean_inc(v_a_2892_);
lean_dec(v___x_2873_);
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
v___jp_2865_:
{
lean_object* v___x_2866_; lean_object* v___x_2867_; 
v___x_2866_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___closed__0));
v___x_2867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2867_, 0, v___x_2866_);
return v___x_2867_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPFVarZeta___boxed(lean_object* v_goal_2900_, lean_object* v_target_2901_, lean_object* v_info_2902_, lean_object* v_a_2903_, lean_object* v_a_2904_, lean_object* v_a_2905_, lean_object* v_a_2906_, lean_object* v_a_2907_, lean_object* v_a_2908_, lean_object* v_a_2909_, lean_object* v_a_2910_, lean_object* v_a_2911_, lean_object* v_a_2912_, lean_object* v_a_2913_, lean_object* v_a_2914_, lean_object* v_a_2915_){
_start:
{
lean_object* v_res_2916_; 
v_res_2916_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPFVarZeta(v_goal_2900_, v_target_2901_, v_info_2902_, v_a_2903_, v_a_2904_, v_a_2905_, v_a_2906_, v_a_2907_, v_a_2908_, v_a_2909_, v_a_2910_, v_a_2911_, v_a_2912_, v_a_2913_, v_a_2914_);
lean_dec(v_a_2914_);
lean_dec_ref(v_a_2913_);
lean_dec(v_a_2912_);
lean_dec_ref(v_a_2911_);
lean_dec(v_a_2910_);
lean_dec_ref(v_a_2909_);
lean_dec(v_a_2908_);
lean_dec_ref(v_a_2907_);
lean_dec(v_a_2906_);
lean_dec(v_a_2905_);
lean_dec_ref(v_a_2904_);
lean_dec(v_a_2903_);
return v_res_2916_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec_spec__0(lean_object* v_a_2917_, lean_object* v_a_2918_){
_start:
{
if (lean_obj_tag(v_a_2917_) == 0)
{
lean_object* v___x_2919_; 
v___x_2919_ = l_List_reverse___redArg(v_a_2918_);
return v___x_2919_;
}
else
{
lean_object* v_head_2920_; lean_object* v_tail_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_2930_; 
v_head_2920_ = lean_ctor_get(v_a_2917_, 0);
v_tail_2921_ = lean_ctor_get(v_a_2917_, 1);
v_isSharedCheck_2930_ = !lean_is_exclusive(v_a_2917_);
if (v_isSharedCheck_2930_ == 0)
{
v___x_2923_ = v_a_2917_;
v_isShared_2924_ = v_isSharedCheck_2930_;
goto v_resetjp_2922_;
}
else
{
lean_inc(v_tail_2921_);
lean_inc(v_head_2920_);
lean_dec(v_a_2917_);
v___x_2923_ = lean_box(0);
v_isShared_2924_ = v_isSharedCheck_2930_;
goto v_resetjp_2922_;
}
v_resetjp_2922_:
{
lean_object* v___x_2925_; lean_object* v___x_2927_; 
v___x_2925_ = l_Lean_MessageData_ofExpr(v_head_2920_);
if (v_isShared_2924_ == 0)
{
lean_ctor_set(v___x_2923_, 1, v_a_2918_);
lean_ctor_set(v___x_2923_, 0, v___x_2925_);
v___x_2927_ = v___x_2923_;
goto v_reusejp_2926_;
}
else
{
lean_object* v_reuseFailAlloc_2929_; 
v_reuseFailAlloc_2929_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2929_, 0, v___x_2925_);
lean_ctor_set(v_reuseFailAlloc_2929_, 1, v_a_2918_);
v___x_2927_ = v_reuseFailAlloc_2929_;
goto v_reusejp_2926_;
}
v_reusejp_2926_:
{
v_a_2917_ = v_tail_2921_;
v_a_2918_ = v___x_2927_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__1(void){
_start:
{
lean_object* v___x_2932_; lean_object* v___x_2933_; 
v___x_2932_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__0));
v___x_2933_ = l_Lean_stringToMessageData(v___x_2932_);
return v___x_2933_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__3(void){
_start:
{
lean_object* v___x_2935_; lean_object* v___x_2936_; 
v___x_2935_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__2));
v___x_2936_ = l_Lean_stringToMessageData(v___x_2935_);
return v___x_2936_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__5(void){
_start:
{
lean_object* v___x_2938_; lean_object* v___x_2939_; 
v___x_2938_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__4));
v___x_2939_ = l_Lean_stringToMessageData(v___x_2938_);
return v___x_2939_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__7(void){
_start:
{
lean_object* v___x_2941_; lean_object* v___x_2942_; 
v___x_2941_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__6));
v___x_2942_ = l_Lean_stringToMessageData(v___x_2941_);
return v___x_2942_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__9(void){
_start:
{
lean_object* v___x_2944_; lean_object* v___x_2945_; 
v___x_2944_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__8));
v___x_2945_ = l_Lean_stringToMessageData(v___x_2944_);
return v___x_2945_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__11(void){
_start:
{
lean_object* v___x_2947_; lean_object* v___x_2948_; 
v___x_2947_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__10));
v___x_2948_ = l_Lean_stringToMessageData(v___x_2947_);
return v___x_2948_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__13(void){
_start:
{
lean_object* v___x_2950_; lean_object* v___x_2951_; 
v___x_2950_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__12));
v___x_2951_ = l_Lean_stringToMessageData(v___x_2950_);
return v___x_2951_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__15(void){
_start:
{
lean_object* v___x_2953_; lean_object* v___x_2954_; 
v___x_2953_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__14));
v___x_2954_ = l_Lean_stringToMessageData(v___x_2953_);
return v___x_2954_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__17(void){
_start:
{
lean_object* v___x_2956_; lean_object* v___x_2957_; 
v___x_2956_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__16));
v___x_2957_ = l_Lean_stringToMessageData(v___x_2956_);
return v___x_2957_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__19(void){
_start:
{
lean_object* v___x_2959_; lean_object* v___x_2960_; 
v___x_2959_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__18));
v___x_2960_ = l_Lean_stringToMessageData(v___x_2959_);
return v___x_2960_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__21(void){
_start:
{
lean_object* v___x_2962_; lean_object* v___x_2963_; 
v___x_2962_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__20));
v___x_2963_ = l_Lean_stringToMessageData(v___x_2962_);
return v___x_2963_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__23(void){
_start:
{
lean_object* v___x_2965_; lean_object* v___x_2966_; 
v___x_2965_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__22));
v___x_2966_ = l_Lean_stringToMessageData(v___x_2965_);
return v___x_2966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec(lean_object* v_goal_2967_, lean_object* v_scope_2968_, lean_object* v_target_2969_, lean_object* v_info_2970_, lean_object* v_a_2971_, lean_object* v_a_2972_, lean_object* v_a_2973_, lean_object* v_a_2974_, lean_object* v_a_2975_, lean_object* v_a_2976_, lean_object* v_a_2977_, lean_object* v_a_2978_, lean_object* v_a_2979_, lean_object* v_a_2980_, lean_object* v_a_2981_){
_start:
{
lean_object* v_specs_2983_; lean_object* v___x_2984_; lean_object* v___y_2986_; lean_object* v___y_2987_; lean_object* v___y_2988_; lean_object* v___x_3016_; 
v_specs_2983_ = lean_ctor_get(v_scope_2968_, 0);
v___x_2984_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_prog(v_info_2970_);
lean_inc_ref(v___x_2984_);
lean_inc_ref(v_specs_2983_);
v___x_3016_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SpecTheoremsNew_findSpecs(v_specs_2983_, v___x_2984_, v_a_2976_, v_a_2977_, v_a_2978_, v_a_2979_, v_a_2980_, v_a_2981_);
if (lean_obj_tag(v___x_3016_) == 0)
{
lean_object* v_a_3017_; lean_object* v___x_3019_; uint8_t v_isShared_3020_; uint8_t v_isSharedCheck_3171_; 
v_a_3017_ = lean_ctor_get(v___x_3016_, 0);
v_isSharedCheck_3171_ = !lean_is_exclusive(v___x_3016_);
if (v_isSharedCheck_3171_ == 0)
{
v___x_3019_ = v___x_3016_;
v_isShared_3020_ = v_isSharedCheck_3171_;
goto v_resetjp_3018_;
}
else
{
lean_inc(v_a_3017_);
lean_dec(v___x_3016_);
v___x_3019_ = lean_box(0);
v_isShared_3020_ = v_isSharedCheck_3171_;
goto v_resetjp_3018_;
}
v_resetjp_3018_:
{
if (lean_obj_tag(v_a_3017_) == 0)
{
lean_object* v_a_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3025_; 
lean_dec_ref(v_target_2969_);
lean_dec_ref(v_scope_2968_);
lean_dec(v_goal_2967_);
v_a_3021_ = lean_ctor_get(v_a_3017_, 0);
lean_inc(v_a_3021_);
lean_dec_ref_known(v_a_3017_, 1);
v___x_3022_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_m(v_info_2970_);
lean_dec_ref(v_info_2970_);
v___x_3023_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_3023_, 0, v___x_2984_);
lean_ctor_set(v___x_3023_, 1, v___x_3022_);
lean_ctor_set(v___x_3023_, 2, v_a_3021_);
if (v_isShared_3020_ == 0)
{
lean_ctor_set(v___x_3019_, 0, v___x_3023_);
v___x_3025_ = v___x_3019_;
goto v_reusejp_3024_;
}
else
{
lean_object* v_reuseFailAlloc_3026_; 
v_reuseFailAlloc_3026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3026_, 0, v___x_3023_);
v___x_3025_ = v_reuseFailAlloc_3026_;
goto v_reusejp_3024_;
}
v_reusejp_3024_:
{
return v___x_3025_;
}
}
else
{
lean_object* v_a_3027_; lean_object* v___y_3029_; lean_object* v___x_3115_; 
lean_del_object(v___x_3019_);
v_a_3027_ = lean_ctor_get(v_a_3017_, 0);
lean_inc_n(v_a_3027_, 2);
lean_dec_ref_known(v_a_3017_, 1);
lean_inc_ref(v_info_2970_);
v___x_3115_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached(v_a_3027_, v_info_2970_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_, v_a_2978_, v_a_2979_, v_a_2980_, v_a_2981_);
if (lean_obj_tag(v___x_3115_) == 0)
{
v___y_3029_ = v___x_3115_;
goto v___jp_3028_;
}
else
{
lean_object* v_a_3116_; lean_object* v___y_3118_; lean_object* v___y_3119_; uint8_t v___y_3148_; uint8_t v___x_3169_; 
v_a_3116_ = lean_ctor_get(v___x_3115_, 0);
lean_inc(v_a_3116_);
v___x_3169_ = l_Lean_Exception_isInterrupt(v_a_3116_);
if (v___x_3169_ == 0)
{
uint8_t v___x_3170_; 
lean_inc(v_a_3116_);
v___x_3170_ = l_Lean_Exception_isRuntime(v_a_3116_);
v___y_3148_ = v___x_3170_;
goto v___jp_3147_;
}
else
{
v___y_3148_ = v___x_3169_;
goto v___jp_3147_;
}
v___jp_3117_:
{
lean_object* v_excessArgs_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; 
v_excessArgs_3120_ = lean_ctor_get(v_info_2970_, 2);
lean_inc_ref(v___y_3118_);
v___x_3121_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3121_, 0, v___y_3118_);
lean_ctor_set(v___x_3121_, 1, v___y_3119_);
v___x_3122_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__1);
v___x_3123_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3123_, 0, v___x_3121_);
lean_ctor_set(v___x_3123_, 1, v___x_3122_);
lean_inc_ref(v___x_2984_);
v___x_3124_ = l_Lean_indentExpr(v___x_2984_);
v___x_3125_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3125_, 0, v___x_3123_);
lean_ctor_set(v___x_3125_, 1, v___x_3124_);
v___x_3126_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__21, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__21_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__21);
v___x_3127_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3127_, 0, v___x_3125_);
lean_ctor_set(v___x_3127_, 1, v___x_3126_);
v___x_3128_ = l_Lean_Exception_toMessageData(v_a_3116_);
v___x_3129_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3129_, 0, v___x_3127_);
lean_ctor_set(v___x_3129_, 1, v___x_3128_);
v___x_3130_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__3, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__3_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__3);
v___x_3131_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3131_, 0, v___x_3129_);
lean_ctor_set(v___x_3131_, 1, v___x_3130_);
lean_inc_ref(v_target_2969_);
v___x_3132_ = l_Lean_indentExpr(v_target_2969_);
v___x_3133_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3133_, 0, v___x_3131_);
lean_ctor_set(v___x_3133_, 1, v___x_3132_);
v___x_3134_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__5, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__5_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__5);
v___x_3135_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3135_, 0, v___x_3133_);
lean_ctor_set(v___x_3135_, 1, v___x_3134_);
v___x_3136_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_Pred(v_info_2970_);
v___x_3137_ = l_Lean_indentExpr(v___x_3136_);
v___x_3138_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3138_, 0, v___x_3135_);
lean_ctor_set(v___x_3138_, 1, v___x_3137_);
v___x_3139_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__7, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__7_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__7);
v___x_3140_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3140_, 0, v___x_3138_);
lean_ctor_set(v___x_3140_, 1, v___x_3139_);
lean_inc_ref(v_excessArgs_3120_);
v___x_3141_ = lean_array_to_list(v_excessArgs_3120_);
v___x_3142_ = lean_box(0);
v___x_3143_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec_spec__0(v___x_3141_, v___x_3142_);
v___x_3144_ = l_Lean_MessageData_ofList(v___x_3143_);
v___x_3145_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3145_, 0, v___x_3140_);
lean_ctor_set(v___x_3145_, 1, v___x_3144_);
v___x_3146_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0___redArg(v___x_3145_, v_a_2978_, v_a_2979_, v_a_2980_, v_a_2981_);
v___y_3029_ = v___x_3146_;
goto v___jp_3028_;
}
v___jp_3147_:
{
if (v___y_3148_ == 0)
{
lean_object* v_proof_3149_; lean_object* v___x_3150_; 
lean_dec_ref_known(v___x_3115_, 1);
v_proof_3149_ = lean_ctor_get(v_a_3027_, 1);
v___x_3150_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__23, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__23_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__23);
switch(lean_obj_tag(v_proof_3149_))
{
case 0:
{
lean_object* v_declName_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; 
v_declName_3151_ = lean_ctor_get(v_proof_3149_, 0);
v___x_3152_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__13, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__13_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__13);
lean_inc(v_declName_3151_);
v___x_3153_ = l_Lean_MessageData_ofName(v_declName_3151_);
v___x_3154_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3154_, 0, v___x_3152_);
lean_ctor_set(v___x_3154_, 1, v___x_3153_);
v___y_3118_ = v___x_3150_;
v___y_3119_ = v___x_3154_;
goto v___jp_3117_;
}
case 1:
{
lean_object* v_fvarId_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; 
v_fvarId_3155_ = lean_ctor_get(v_proof_3149_, 0);
v___x_3156_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__15, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__15_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__15);
lean_inc(v_fvarId_3155_);
v___x_3157_ = l_Lean_mkFVar(v_fvarId_3155_);
v___x_3158_ = l_Lean_MessageData_ofExpr(v___x_3157_);
v___x_3159_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3159_, 0, v___x_3156_);
lean_ctor_set(v___x_3159_, 1, v___x_3158_);
v___y_3118_ = v___x_3150_;
v___y_3119_ = v___x_3159_;
goto v___jp_3117_;
}
default: 
{
lean_object* v_ref_3160_; lean_object* v_proof_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; 
v_ref_3160_ = lean_ctor_get(v_proof_3149_, 1);
v_proof_3161_ = lean_ctor_get(v_proof_3149_, 2);
v___x_3162_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__17, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__17_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__17);
lean_inc(v_ref_3160_);
v___x_3163_ = l_Lean_MessageData_ofSyntax(v_ref_3160_);
v___x_3164_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3164_, 0, v___x_3162_);
lean_ctor_set(v___x_3164_, 1, v___x_3163_);
v___x_3165_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__19, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__19_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__19);
v___x_3166_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3166_, 0, v___x_3164_);
lean_ctor_set(v___x_3166_, 1, v___x_3165_);
lean_inc_ref(v_proof_3161_);
v___x_3167_ = l_Lean_MessageData_ofExpr(v_proof_3161_);
v___x_3168_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3168_, 0, v___x_3166_);
lean_ctor_set(v___x_3168_, 1, v___x_3167_);
v___y_3118_ = v___x_3150_;
v___y_3119_ = v___x_3168_;
goto v___jp_3117_;
}
}
}
else
{
lean_dec(v_a_3116_);
v___y_3029_ = v___x_3115_;
goto v___jp_3028_;
}
}
}
v___jp_3028_:
{
if (lean_obj_tag(v___y_3029_) == 0)
{
lean_object* v_a_3030_; lean_object* v___x_3032_; uint8_t v_isShared_3033_; uint8_t v_isSharedCheck_3106_; 
v_a_3030_ = lean_ctor_get(v___y_3029_, 0);
v_isSharedCheck_3106_ = !lean_is_exclusive(v___y_3029_);
if (v_isSharedCheck_3106_ == 0)
{
v___x_3032_ = v___y_3029_;
v_isShared_3033_ = v_isSharedCheck_3106_;
goto v_resetjp_3031_;
}
else
{
lean_inc(v_a_3030_);
lean_dec(v___y_3029_);
v___x_3032_ = lean_box(0);
v_isShared_3033_ = v_isSharedCheck_3106_;
goto v_resetjp_3031_;
}
v_resetjp_3031_:
{
if (lean_obj_tag(v_a_3030_) == 1)
{
lean_object* v_val_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; 
lean_del_object(v___x_3032_);
v_val_3034_ = lean_ctor_get(v_a_3030_, 0);
lean_inc_n(v_val_3034_, 2);
lean_dec_ref_known(v_a_3030_, 1);
v___x_3035_ = lean_box(0);
v___x_3036_ = l_Lean_Meta_Sym_BackwardRule_applyChecked(v_val_3034_, v_goal_2967_, v___x_3035_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_, v_a_2978_, v_a_2979_, v_a_2980_, v_a_2981_);
if (lean_obj_tag(v___x_3036_) == 0)
{
lean_object* v_a_3037_; lean_object* v___x_3039_; uint8_t v_isShared_3040_; uint8_t v_isSharedCheck_3089_; 
v_a_3037_ = lean_ctor_get(v___x_3036_, 0);
v_isSharedCheck_3089_ = !lean_is_exclusive(v___x_3036_);
if (v_isSharedCheck_3089_ == 0)
{
v___x_3039_ = v___x_3036_;
v_isShared_3040_ = v_isSharedCheck_3089_;
goto v_resetjp_3038_;
}
else
{
lean_inc(v_a_3037_);
lean_dec(v___x_3036_);
v___x_3039_ = lean_box(0);
v_isShared_3040_ = v_isSharedCheck_3089_;
goto v_resetjp_3038_;
}
v_resetjp_3038_:
{
if (lean_obj_tag(v_a_3037_) == 1)
{
lean_object* v_mvarIds_3041_; lean_object* v___x_3042_; lean_object* v___x_3044_; 
lean_dec(v_val_3034_);
lean_dec(v_a_3027_);
lean_dec_ref(v___x_2984_);
lean_dec_ref(v_info_2970_);
lean_dec_ref(v_target_2969_);
v_mvarIds_3041_ = lean_ctor_get(v_a_3037_, 0);
lean_inc(v_mvarIds_3041_);
lean_dec_ref_known(v_a_3037_, 1);
v___x_3042_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3042_, 0, v_scope_2968_);
lean_ctor_set(v___x_3042_, 1, v_mvarIds_3041_);
if (v_isShared_3040_ == 0)
{
lean_ctor_set(v___x_3039_, 0, v___x_3042_);
v___x_3044_ = v___x_3039_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v___x_3042_);
v___x_3044_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
return v___x_3044_;
}
}
else
{
lean_object* v___x_3047_; uint8_t v_isShared_3048_; uint8_t v_isSharedCheck_3086_; 
lean_del_object(v___x_3039_);
lean_dec(v_a_3037_);
v_isSharedCheck_3086_ = !lean_is_exclusive(v_scope_2968_);
if (v_isSharedCheck_3086_ == 0)
{
lean_object* v_unused_3087_; lean_object* v_unused_3088_; 
v_unused_3087_ = lean_ctor_get(v_scope_2968_, 1);
lean_dec(v_unused_3087_);
v_unused_3088_ = lean_ctor_get(v_scope_2968_, 0);
lean_dec(v_unused_3088_);
v___x_3047_ = v_scope_2968_;
v_isShared_3048_ = v_isSharedCheck_3086_;
goto v_resetjp_3046_;
}
else
{
lean_dec(v_scope_2968_);
v___x_3047_ = lean_box(0);
v_isShared_3048_ = v_isSharedCheck_3086_;
goto v_resetjp_3046_;
}
v_resetjp_3046_:
{
lean_object* v_expr_3049_; lean_object* v___x_3050_; 
v_expr_3049_ = lean_ctor_get(v_val_3034_, 0);
lean_inc_ref(v_expr_3049_);
lean_dec(v_val_3034_);
lean_inc(v_a_2981_);
lean_inc_ref(v_a_2980_);
lean_inc(v_a_2979_);
lean_inc_ref(v_a_2978_);
v___x_3050_ = lean_infer_type(v_expr_3049_, v_a_2978_, v_a_2979_, v_a_2980_, v_a_2981_);
if (lean_obj_tag(v___x_3050_) == 0)
{
lean_object* v_a_3051_; lean_object* v_proof_3052_; lean_object* v___x_3053_; 
v_a_3051_ = lean_ctor_get(v___x_3050_, 0);
lean_inc(v_a_3051_);
lean_dec_ref_known(v___x_3050_, 1);
v_proof_3052_ = lean_ctor_get(v_a_3027_, 1);
lean_inc_ref(v_proof_3052_);
lean_dec(v_a_3027_);
v___x_3053_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__11, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__11_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__11);
switch(lean_obj_tag(v_proof_3052_))
{
case 0:
{
lean_object* v_declName_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3058_; 
v_declName_3054_ = lean_ctor_get(v_proof_3052_, 0);
lean_inc(v_declName_3054_);
lean_dec_ref_known(v_proof_3052_, 1);
v___x_3055_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__13, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__13_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__13);
v___x_3056_ = l_Lean_MessageData_ofName(v_declName_3054_);
if (v_isShared_3048_ == 0)
{
lean_ctor_set_tag(v___x_3047_, 7);
lean_ctor_set(v___x_3047_, 1, v___x_3056_);
lean_ctor_set(v___x_3047_, 0, v___x_3055_);
v___x_3058_ = v___x_3047_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v___x_3055_);
lean_ctor_set(v_reuseFailAlloc_3059_, 1, v___x_3056_);
v___x_3058_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
v___y_2986_ = v___x_3053_;
v___y_2987_ = v_a_3051_;
v___y_2988_ = v___x_3058_;
goto v___jp_2985_;
}
}
case 1:
{
lean_object* v_fvarId_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3065_; 
v_fvarId_3060_ = lean_ctor_get(v_proof_3052_, 0);
lean_inc(v_fvarId_3060_);
lean_dec_ref_known(v_proof_3052_, 1);
v___x_3061_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__15, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__15_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__15);
v___x_3062_ = l_Lean_mkFVar(v_fvarId_3060_);
v___x_3063_ = l_Lean_MessageData_ofExpr(v___x_3062_);
if (v_isShared_3048_ == 0)
{
lean_ctor_set_tag(v___x_3047_, 7);
lean_ctor_set(v___x_3047_, 1, v___x_3063_);
lean_ctor_set(v___x_3047_, 0, v___x_3061_);
v___x_3065_ = v___x_3047_;
goto v_reusejp_3064_;
}
else
{
lean_object* v_reuseFailAlloc_3066_; 
v_reuseFailAlloc_3066_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3066_, 0, v___x_3061_);
lean_ctor_set(v_reuseFailAlloc_3066_, 1, v___x_3063_);
v___x_3065_ = v_reuseFailAlloc_3066_;
goto v_reusejp_3064_;
}
v_reusejp_3064_:
{
v___y_2986_ = v___x_3053_;
v___y_2987_ = v_a_3051_;
v___y_2988_ = v___x_3065_;
goto v___jp_2985_;
}
}
default: 
{
lean_object* v_ref_3067_; lean_object* v_proof_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3072_; 
v_ref_3067_ = lean_ctor_get(v_proof_3052_, 1);
lean_inc(v_ref_3067_);
v_proof_3068_ = lean_ctor_get(v_proof_3052_, 2);
lean_inc_ref(v_proof_3068_);
lean_dec_ref_known(v_proof_3052_, 3);
v___x_3069_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__17, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__17_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__17);
v___x_3070_ = l_Lean_MessageData_ofSyntax(v_ref_3067_);
if (v_isShared_3048_ == 0)
{
lean_ctor_set_tag(v___x_3047_, 7);
lean_ctor_set(v___x_3047_, 1, v___x_3070_);
lean_ctor_set(v___x_3047_, 0, v___x_3069_);
v___x_3072_ = v___x_3047_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3077_; 
v_reuseFailAlloc_3077_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3077_, 0, v___x_3069_);
lean_ctor_set(v_reuseFailAlloc_3077_, 1, v___x_3070_);
v___x_3072_ = v_reuseFailAlloc_3077_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; 
v___x_3073_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__19, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__19_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__19);
v___x_3074_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3074_, 0, v___x_3072_);
lean_ctor_set(v___x_3074_, 1, v___x_3073_);
v___x_3075_ = l_Lean_MessageData_ofExpr(v_proof_3068_);
v___x_3076_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3076_, 0, v___x_3074_);
lean_ctor_set(v___x_3076_, 1, v___x_3075_);
v___y_2986_ = v___x_3053_;
v___y_2987_ = v_a_3051_;
v___y_2988_ = v___x_3076_;
goto v___jp_2985_;
}
}
}
}
else
{
lean_object* v_a_3078_; lean_object* v___x_3080_; uint8_t v_isShared_3081_; uint8_t v_isSharedCheck_3085_; 
lean_del_object(v___x_3047_);
lean_dec(v_a_3027_);
lean_dec_ref(v___x_2984_);
lean_dec_ref(v_info_2970_);
lean_dec_ref(v_target_2969_);
v_a_3078_ = lean_ctor_get(v___x_3050_, 0);
v_isSharedCheck_3085_ = !lean_is_exclusive(v___x_3050_);
if (v_isSharedCheck_3085_ == 0)
{
v___x_3080_ = v___x_3050_;
v_isShared_3081_ = v_isSharedCheck_3085_;
goto v_resetjp_3079_;
}
else
{
lean_inc(v_a_3078_);
lean_dec(v___x_3050_);
v___x_3080_ = lean_box(0);
v_isShared_3081_ = v_isSharedCheck_3085_;
goto v_resetjp_3079_;
}
v_resetjp_3079_:
{
lean_object* v___x_3083_; 
if (v_isShared_3081_ == 0)
{
v___x_3083_ = v___x_3080_;
goto v_reusejp_3082_;
}
else
{
lean_object* v_reuseFailAlloc_3084_; 
v_reuseFailAlloc_3084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3084_, 0, v_a_3078_);
v___x_3083_ = v_reuseFailAlloc_3084_;
goto v_reusejp_3082_;
}
v_reusejp_3082_:
{
return v___x_3083_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3090_; lean_object* v___x_3092_; uint8_t v_isShared_3093_; uint8_t v_isSharedCheck_3097_; 
lean_dec(v_val_3034_);
lean_dec(v_a_3027_);
lean_dec_ref(v___x_2984_);
lean_dec_ref(v_info_2970_);
lean_dec_ref(v_target_2969_);
lean_dec_ref(v_scope_2968_);
v_a_3090_ = lean_ctor_get(v___x_3036_, 0);
v_isSharedCheck_3097_ = !lean_is_exclusive(v___x_3036_);
if (v_isSharedCheck_3097_ == 0)
{
v___x_3092_ = v___x_3036_;
v_isShared_3093_ = v_isSharedCheck_3097_;
goto v_resetjp_3091_;
}
else
{
lean_inc(v_a_3090_);
lean_dec(v___x_3036_);
v___x_3092_ = lean_box(0);
v_isShared_3093_ = v_isSharedCheck_3097_;
goto v_resetjp_3091_;
}
v_resetjp_3091_:
{
lean_object* v___x_3095_; 
if (v_isShared_3093_ == 0)
{
v___x_3095_ = v___x_3092_;
goto v_reusejp_3094_;
}
else
{
lean_object* v_reuseFailAlloc_3096_; 
v_reuseFailAlloc_3096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3096_, 0, v_a_3090_);
v___x_3095_ = v_reuseFailAlloc_3096_;
goto v_reusejp_3094_;
}
v_reusejp_3094_:
{
return v___x_3095_;
}
}
}
}
else
{
lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3104_; 
lean_dec(v_a_3030_);
lean_dec_ref(v_target_2969_);
lean_dec_ref(v_scope_2968_);
lean_dec(v_goal_2967_);
v___x_3098_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_m(v_info_2970_);
lean_dec_ref(v_info_2970_);
v___x_3099_ = lean_unsigned_to_nat(1u);
v___x_3100_ = lean_mk_empty_array_with_capacity(v___x_3099_);
v___x_3101_ = lean_array_push(v___x_3100_, v_a_3027_);
v___x_3102_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_3102_, 0, v___x_2984_);
lean_ctor_set(v___x_3102_, 1, v___x_3098_);
lean_ctor_set(v___x_3102_, 2, v___x_3101_);
if (v_isShared_3033_ == 0)
{
lean_ctor_set(v___x_3032_, 0, v___x_3102_);
v___x_3104_ = v___x_3032_;
goto v_reusejp_3103_;
}
else
{
lean_object* v_reuseFailAlloc_3105_; 
v_reuseFailAlloc_3105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3105_, 0, v___x_3102_);
v___x_3104_ = v_reuseFailAlloc_3105_;
goto v_reusejp_3103_;
}
v_reusejp_3103_:
{
return v___x_3104_;
}
}
}
}
else
{
lean_object* v_a_3107_; lean_object* v___x_3109_; uint8_t v_isShared_3110_; uint8_t v_isSharedCheck_3114_; 
lean_dec(v_a_3027_);
lean_dec_ref(v___x_2984_);
lean_dec_ref(v_info_2970_);
lean_dec_ref(v_target_2969_);
lean_dec_ref(v_scope_2968_);
lean_dec(v_goal_2967_);
v_a_3107_ = lean_ctor_get(v___y_3029_, 0);
v_isSharedCheck_3114_ = !lean_is_exclusive(v___y_3029_);
if (v_isSharedCheck_3114_ == 0)
{
v___x_3109_ = v___y_3029_;
v_isShared_3110_ = v_isSharedCheck_3114_;
goto v_resetjp_3108_;
}
else
{
lean_inc(v_a_3107_);
lean_dec(v___y_3029_);
v___x_3109_ = lean_box(0);
v_isShared_3110_ = v_isSharedCheck_3114_;
goto v_resetjp_3108_;
}
v_resetjp_3108_:
{
lean_object* v___x_3112_; 
if (v_isShared_3110_ == 0)
{
v___x_3112_ = v___x_3109_;
goto v_reusejp_3111_;
}
else
{
lean_object* v_reuseFailAlloc_3113_; 
v_reuseFailAlloc_3113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3113_, 0, v_a_3107_);
v___x_3112_ = v_reuseFailAlloc_3113_;
goto v_reusejp_3111_;
}
v_reusejp_3111_:
{
return v___x_3112_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3172_; lean_object* v___x_3174_; uint8_t v_isShared_3175_; uint8_t v_isSharedCheck_3179_; 
lean_dec_ref(v___x_2984_);
lean_dec_ref(v_info_2970_);
lean_dec_ref(v_target_2969_);
lean_dec_ref(v_scope_2968_);
lean_dec(v_goal_2967_);
v_a_3172_ = lean_ctor_get(v___x_3016_, 0);
v_isSharedCheck_3179_ = !lean_is_exclusive(v___x_3016_);
if (v_isSharedCheck_3179_ == 0)
{
v___x_3174_ = v___x_3016_;
v_isShared_3175_ = v_isSharedCheck_3179_;
goto v_resetjp_3173_;
}
else
{
lean_inc(v_a_3172_);
lean_dec(v___x_3016_);
v___x_3174_ = lean_box(0);
v_isShared_3175_ = v_isSharedCheck_3179_;
goto v_resetjp_3173_;
}
v_resetjp_3173_:
{
lean_object* v___x_3177_; 
if (v_isShared_3175_ == 0)
{
v___x_3177_ = v___x_3174_;
goto v_reusejp_3176_;
}
else
{
lean_object* v_reuseFailAlloc_3178_; 
v_reuseFailAlloc_3178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3178_, 0, v_a_3172_);
v___x_3177_ = v_reuseFailAlloc_3178_;
goto v_reusejp_3176_;
}
v_reusejp_3176_:
{
return v___x_3177_;
}
}
}
v___jp_2985_:
{
lean_object* v_excessArgs_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; 
v_excessArgs_2989_ = lean_ctor_get(v_info_2970_, 2);
lean_inc_ref(v_excessArgs_2989_);
lean_inc_ref(v___y_2986_);
v___x_2990_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2990_, 0, v___y_2986_);
lean_ctor_set(v___x_2990_, 1, v___y_2988_);
v___x_2991_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__1);
v___x_2992_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2992_, 0, v___x_2990_);
lean_ctor_set(v___x_2992_, 1, v___x_2991_);
v___x_2993_ = l_Lean_indentExpr(v___x_2984_);
v___x_2994_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2994_, 0, v___x_2992_);
lean_ctor_set(v___x_2994_, 1, v___x_2993_);
v___x_2995_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__3, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__3_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__3);
v___x_2996_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2996_, 0, v___x_2994_);
lean_ctor_set(v___x_2996_, 1, v___x_2995_);
v___x_2997_ = l_Lean_indentExpr(v_target_2969_);
v___x_2998_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2998_, 0, v___x_2996_);
lean_ctor_set(v___x_2998_, 1, v___x_2997_);
v___x_2999_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__5, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__5_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__5);
v___x_3000_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3000_, 0, v___x_2998_);
lean_ctor_set(v___x_3000_, 1, v___x_2999_);
v___x_3001_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_Pred(v_info_2970_);
lean_dec_ref(v_info_2970_);
v___x_3002_ = l_Lean_indentExpr(v___x_3001_);
v___x_3003_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3003_, 0, v___x_3000_);
lean_ctor_set(v___x_3003_, 1, v___x_3002_);
v___x_3004_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__7, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__7_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__7);
v___x_3005_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3005_, 0, v___x_3003_);
lean_ctor_set(v___x_3005_, 1, v___x_3004_);
v___x_3006_ = lean_array_to_list(v_excessArgs_2989_);
v___x_3007_ = lean_box(0);
v___x_3008_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec_spec__0(v___x_3006_, v___x_3007_);
v___x_3009_ = l_Lean_MessageData_ofList(v___x_3008_);
v___x_3010_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3010_, 0, v___x_3005_);
lean_ctor_set(v___x_3010_, 1, v___x_3009_);
v___x_3011_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__9, &l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__9_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___closed__9);
v___x_3012_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3012_, 0, v___x_3010_);
lean_ctor_set(v___x_3012_, 1, v___x_3011_);
v___x_3013_ = l_Lean_indentExpr(v___y_2987_);
v___x_3014_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3014_, 0, v___x_3012_);
lean_ctor_set(v___x_3014_, 1, v___x_3013_);
v___x_3015_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introForall_spec__0___redArg(v___x_3014_, v_a_2978_, v_a_2979_, v_a_2980_, v_a_2981_);
return v___x_3015_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec___boxed(lean_object* v_goal_3180_, lean_object* v_scope_3181_, lean_object* v_target_3182_, lean_object* v_info_3183_, lean_object* v_a_3184_, lean_object* v_a_3185_, lean_object* v_a_3186_, lean_object* v_a_3187_, lean_object* v_a_3188_, lean_object* v_a_3189_, lean_object* v_a_3190_, lean_object* v_a_3191_, lean_object* v_a_3192_, lean_object* v_a_3193_, lean_object* v_a_3194_, lean_object* v_a_3195_){
_start:
{
lean_object* v_res_3196_; 
v_res_3196_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec(v_goal_3180_, v_scope_3181_, v_target_3182_, v_info_3183_, v_a_3184_, v_a_3185_, v_a_3186_, v_a_3187_, v_a_3188_, v_a_3189_, v_a_3190_, v_a_3191_, v_a_3192_, v_a_3193_, v_a_3194_);
lean_dec(v_a_3194_);
lean_dec_ref(v_a_3193_);
lean_dec(v_a_3192_);
lean_dec_ref(v_a_3191_);
lean_dec(v_a_3190_);
lean_dec_ref(v_a_3189_);
lean_dec(v_a_3188_);
lean_dec_ref(v_a_3187_);
lean_dec(v_a_3186_);
lean_dec(v_a_3185_);
lean_dec_ref(v_a_3184_);
return v_res_3196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPCallSpec(lean_object* v_goal_3197_, lean_object* v_target_3198_, lean_object* v_info_3199_, lean_object* v_a_3200_, lean_object* v_a_3201_, lean_object* v_a_3202_, lean_object* v_a_3203_, lean_object* v_a_3204_, lean_object* v_a_3205_, lean_object* v_a_3206_, lean_object* v_a_3207_, lean_object* v_a_3208_, lean_object* v_a_3209_, lean_object* v_a_3210_, lean_object* v_a_3211_){
_start:
{
uint8_t v___y_3214_; lean_object* v___x_3229_; lean_object* v_f_3230_; uint8_t v___x_3231_; 
v___x_3229_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_prog(v_info_3199_);
v_f_3230_ = l_Lean_Expr_getAppFn(v___x_3229_);
lean_dec_ref(v___x_3229_);
v___x_3231_ = l_Lean_Expr_isConst(v_f_3230_);
if (v___x_3231_ == 0)
{
uint8_t v___x_3232_; 
v___x_3232_ = l_Lean_Expr_isFVar(v_f_3230_);
lean_dec_ref(v_f_3230_);
v___y_3214_ = v___x_3232_;
goto v___jp_3213_;
}
else
{
lean_dec_ref(v_f_3230_);
v___y_3214_ = v___x_3231_;
goto v___jp_3213_;
}
v___jp_3213_:
{
if (v___y_3214_ == 0)
{
lean_object* v___x_3215_; lean_object* v___x_3216_; 
lean_dec_ref(v_info_3199_);
lean_dec_ref(v_target_3198_);
lean_dec(v_goal_3197_);
v___x_3215_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___closed__0));
v___x_3216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3216_, 0, v___x_3215_);
return v___x_3216_;
}
else
{
lean_object* v___x_3217_; lean_object* v___x_3218_; 
v___x_3217_ = lean_st_ref_get(v_a_3200_);
v___x_3218_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_applySpec(v_goal_3197_, v___x_3217_, v_target_3198_, v_info_3199_, v_a_3201_, v_a_3202_, v_a_3203_, v_a_3204_, v_a_3205_, v_a_3206_, v_a_3207_, v_a_3208_, v_a_3209_, v_a_3210_, v_a_3211_);
if (lean_obj_tag(v___x_3218_) == 0)
{
lean_object* v_a_3219_; lean_object* v___x_3220_; 
v_a_3219_ = lean_ctor_get(v___x_3218_, 0);
lean_inc(v_a_3219_);
lean_dec_ref_known(v___x_3218_, 1);
v___x_3220_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnSolveResult___redArg(v_a_3219_);
return v___x_3220_;
}
else
{
lean_object* v_a_3221_; lean_object* v___x_3223_; uint8_t v_isShared_3224_; uint8_t v_isSharedCheck_3228_; 
v_a_3221_ = lean_ctor_get(v___x_3218_, 0);
v_isSharedCheck_3228_ = !lean_is_exclusive(v___x_3218_);
if (v_isSharedCheck_3228_ == 0)
{
v___x_3223_ = v___x_3218_;
v_isShared_3224_ = v_isSharedCheck_3228_;
goto v_resetjp_3222_;
}
else
{
lean_inc(v_a_3221_);
lean_dec(v___x_3218_);
v___x_3223_ = lean_box(0);
v_isShared_3224_ = v_isSharedCheck_3228_;
goto v_resetjp_3222_;
}
v_resetjp_3222_:
{
lean_object* v___x_3226_; 
if (v_isShared_3224_ == 0)
{
v___x_3226_ = v___x_3223_;
goto v_reusejp_3225_;
}
else
{
lean_object* v_reuseFailAlloc_3227_; 
v_reuseFailAlloc_3227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3227_, 0, v_a_3221_);
v___x_3226_ = v_reuseFailAlloc_3227_;
goto v_reusejp_3225_;
}
v_reusejp_3225_:
{
return v___x_3226_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPCallSpec___boxed(lean_object* v_goal_3233_, lean_object* v_target_3234_, lean_object* v_info_3235_, lean_object* v_a_3236_, lean_object* v_a_3237_, lean_object* v_a_3238_, lean_object* v_a_3239_, lean_object* v_a_3240_, lean_object* v_a_3241_, lean_object* v_a_3242_, lean_object* v_a_3243_, lean_object* v_a_3244_, lean_object* v_a_3245_, lean_object* v_a_3246_, lean_object* v_a_3247_, lean_object* v_a_3248_){
_start:
{
lean_object* v_res_3249_; 
v_res_3249_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPCallSpec(v_goal_3233_, v_target_3234_, v_info_3235_, v_a_3236_, v_a_3237_, v_a_3238_, v_a_3239_, v_a_3240_, v_a_3241_, v_a_3242_, v_a_3243_, v_a_3244_, v_a_3245_, v_a_3246_, v_a_3247_);
lean_dec(v_a_3247_);
lean_dec_ref(v_a_3246_);
lean_dec(v_a_3245_);
lean_dec_ref(v_a_3244_);
lean_dec(v_a_3243_);
lean_dec_ref(v_a_3242_);
lean_dec(v_a_3241_);
lean_dec_ref(v_a_3240_);
lean_dec(v_a_3239_);
lean_dec(v_a_3238_);
lean_dec_ref(v_a_3237_);
lean_dec(v_a_3236_);
return v_res_3249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___redArg(lean_object* v_x_3256_, lean_object* v_x_3257_, lean_object* v_x_3258_){
_start:
{
uint8_t v___y_3261_; 
if (lean_obj_tag(v_x_3256_) == 5)
{
lean_object* v_fn_3272_; lean_object* v_arg_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; 
v_fn_3272_ = lean_ctor_get(v_x_3256_, 0);
lean_inc_ref(v_fn_3272_);
v_arg_3273_ = lean_ctor_get(v_x_3256_, 1);
lean_inc_ref(v_arg_3273_);
lean_dec_ref_known(v_x_3256_, 2);
v___x_3274_ = lean_array_set(v_x_3257_, v_x_3258_, v_arg_3273_);
v___x_3275_ = lean_unsigned_to_nat(1u);
v___x_3276_ = lean_nat_sub(v_x_3258_, v___x_3275_);
lean_dec(v_x_3258_);
v_x_3256_ = v_fn_3272_;
v_x_3257_ = v___x_3274_;
v_x_3258_ = v___x_3276_;
goto _start;
}
else
{
lean_object* v___x_3278_; uint8_t v___x_3279_; 
lean_dec(v_x_3258_);
v___x_3278_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___redArg___closed__1));
v___x_3279_ = l_Lean_Expr_isConstOf(v_x_3256_, v___x_3278_);
if (v___x_3279_ == 0)
{
v___y_3261_ = v___x_3279_;
goto v___jp_3260_;
}
else
{
lean_object* v___x_3280_; lean_object* v___x_3281_; uint8_t v___x_3282_; 
v___x_3280_ = lean_unsigned_to_nat(11u);
v___x_3281_ = lean_array_get_size(v_x_3257_);
v___x_3282_ = lean_nat_dec_le(v___x_3280_, v___x_3281_);
v___y_3261_ = v___x_3282_;
goto v___jp_3260_;
}
}
v___jp_3260_:
{
if (v___y_3261_ == 0)
{
lean_object* v___x_3262_; lean_object* v___x_3263_; 
lean_dec_ref(v_x_3257_);
lean_dec_ref(v_x_3256_);
v___x_3262_ = lean_box(0);
v___x_3263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3263_, 0, v___x_3262_);
return v___x_3263_;
}
else
{
lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; 
v___x_3264_ = lean_unsigned_to_nat(11u);
v___x_3265_ = lean_unsigned_to_nat(0u);
v___x_3266_ = l_Array_extract___redArg(v_x_3257_, v___x_3265_, v___x_3264_);
v___x_3267_ = lean_array_get_size(v_x_3257_);
v___x_3268_ = l_Array_extract___redArg(v_x_3257_, v___x_3264_, v___x_3267_);
lean_dec_ref(v_x_3257_);
v___x_3269_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3269_, 0, v_x_3256_);
lean_ctor_set(v___x_3269_, 1, v___x_3266_);
lean_ctor_set(v___x_3269_, 2, v___x_3268_);
v___x_3270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3270_, 0, v___x_3269_);
v___x_3271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3271_, 0, v___x_3270_);
return v___x_3271_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___redArg___boxed(lean_object* v_x_3283_, lean_object* v_x_3284_, lean_object* v_x_3285_, lean_object* v___y_3286_){
_start:
{
lean_object* v_res_3287_; 
v_res_3287_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___redArg(v_x_3283_, v_x_3284_, v_x_3285_);
return v_res_3287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f(lean_object* v_rhs_3288_, lean_object* v_a_3289_, lean_object* v_a_3290_, lean_object* v_a_3291_, lean_object* v_a_3292_, lean_object* v_a_3293_, lean_object* v_a_3294_, lean_object* v_a_3295_, lean_object* v_a_3296_, lean_object* v_a_3297_, lean_object* v_a_3298_, lean_object* v_a_3299_){
_start:
{
lean_object* v_dummy_3301_; lean_object* v_nargs_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; 
v_dummy_3301_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain___closed__0, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_peelEPostTailChain___closed__0);
v_nargs_3302_ = l_Lean_Expr_getAppNumArgs(v_rhs_3288_);
lean_inc(v_nargs_3302_);
v___x_3303_ = lean_mk_array(v_nargs_3302_, v_dummy_3301_);
v___x_3304_ = lean_unsigned_to_nat(1u);
v___x_3305_ = lean_nat_sub(v_nargs_3302_, v___x_3304_);
lean_dec(v_nargs_3302_);
v___x_3306_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___redArg(v_rhs_3288_, v___x_3303_, v___x_3305_);
return v___x_3306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f___boxed(lean_object* v_rhs_3307_, lean_object* v_a_3308_, lean_object* v_a_3309_, lean_object* v_a_3310_, lean_object* v_a_3311_, lean_object* v_a_3312_, lean_object* v_a_3313_, lean_object* v_a_3314_, lean_object* v_a_3315_, lean_object* v_a_3316_, lean_object* v_a_3317_, lean_object* v_a_3318_, lean_object* v_a_3319_){
_start:
{
lean_object* v_res_3320_; 
v_res_3320_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f(v_rhs_3307_, v_a_3308_, v_a_3309_, v_a_3310_, v_a_3311_, v_a_3312_, v_a_3313_, v_a_3314_, v_a_3315_, v_a_3316_, v_a_3317_, v_a_3318_);
lean_dec(v_a_3318_);
lean_dec_ref(v_a_3317_);
lean_dec(v_a_3316_);
lean_dec_ref(v_a_3315_);
lean_dec(v_a_3314_);
lean_dec_ref(v_a_3313_);
lean_dec(v_a_3312_);
lean_dec_ref(v_a_3311_);
lean_dec(v_a_3310_);
lean_dec(v_a_3309_);
lean_dec_ref(v_a_3308_);
return v_res_3320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0(lean_object* v_x_3321_, lean_object* v_x_3322_, lean_object* v_x_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_){
_start:
{
lean_object* v___x_3336_; 
v___x_3336_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___redArg(v_x_3321_, v_x_3322_, v_x_3323_);
return v___x_3336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0___boxed(lean_object* v_x_3337_, lean_object* v_x_3338_, lean_object* v_x_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_){
_start:
{
lean_object* v_res_3352_; 
v_res_3352_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f_spec__0(v_x_3337_, v_x_3338_, v_x_3339_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_, v___y_3346_, v___y_3347_, v___y_3348_, v___y_3349_, v___y_3350_);
lean_dec(v___y_3350_);
lean_dec_ref(v___y_3349_);
lean_dec(v___y_3348_);
lean_dec_ref(v___y_3347_);
lean_dec(v___y_3346_);
lean_dec_ref(v___y_3345_);
lean_dec(v___y_3344_);
lean_dec_ref(v___y_3343_);
lean_dec(v___y_3342_);
lean_dec(v___y_3341_);
lean_dec_ref(v___y_3340_);
return v_res_3352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWP(lean_object* v_goal_3353_, lean_object* v_target_3354_, lean_object* v_rhs_3355_, lean_object* v_a_3356_, lean_object* v_a_3357_, lean_object* v_a_3358_, lean_object* v_a_3359_, lean_object* v_a_3360_, lean_object* v_a_3361_, lean_object* v_a_3362_, lean_object* v_a_3363_, lean_object* v_a_3364_, lean_object* v_a_3365_, lean_object* v_a_3366_, lean_object* v_a_3367_){
_start:
{
lean_object* v___x_3369_; lean_object* v_a_3370_; lean_object* v___x_3372_; uint8_t v_isShared_3373_; uint8_t v_isSharedCheck_3406_; 
v___x_3369_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_getWPInfo_x3f(v_rhs_3355_, v_a_3357_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_, v_a_3362_, v_a_3363_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
v_a_3370_ = lean_ctor_get(v___x_3369_, 0);
v_isSharedCheck_3406_ = !lean_is_exclusive(v___x_3369_);
if (v_isSharedCheck_3406_ == 0)
{
v___x_3372_ = v___x_3369_;
v_isShared_3373_ = v_isSharedCheck_3406_;
goto v_resetjp_3371_;
}
else
{
lean_inc(v_a_3370_);
lean_dec(v___x_3369_);
v___x_3372_ = lean_box(0);
v_isShared_3373_ = v_isSharedCheck_3406_;
goto v_resetjp_3371_;
}
v_resetjp_3371_:
{
if (lean_obj_tag(v_a_3370_) == 1)
{
lean_object* v_val_3374_; lean_object* v___x_3375_; 
lean_del_object(v___x_3372_);
v_val_3374_ = lean_ctor_get(v_a_3370_, 0);
lean_inc(v_val_3374_);
lean_dec_ref_known(v_a_3370_, 1);
v___x_3375_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_burnOne___redArg(v_a_3358_);
if (lean_obj_tag(v___x_3375_) == 0)
{
lean_object* v___x_3376_; 
lean_dec_ref_known(v___x_3375_, 1);
lean_inc(v_val_3374_);
lean_inc_ref(v_target_3354_);
lean_inc(v_goal_3353_);
v___x_3376_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPLet(v_goal_3353_, v_target_3354_, v_val_3374_, v_a_3356_, v_a_3357_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_, v_a_3362_, v_a_3363_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3376_) == 0)
{
lean_object* v_a_3377_; 
v_a_3377_ = lean_ctor_get(v___x_3376_, 0);
lean_inc(v_a_3377_);
if (lean_obj_tag(v_a_3377_) == 0)
{
lean_dec_ref_known(v_a_3377_, 1);
lean_dec(v_val_3374_);
lean_dec_ref(v_target_3354_);
lean_dec(v_goal_3353_);
return v___x_3376_;
}
else
{
lean_object* v___x_3378_; 
lean_dec_ref_known(v_a_3377_, 1);
lean_dec_ref_known(v___x_3376_, 1);
lean_inc(v_val_3374_);
lean_inc_ref(v_target_3354_);
lean_inc(v_goal_3353_);
v___x_3378_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPMatch(v_goal_3353_, v_target_3354_, v_val_3374_, v_a_3356_, v_a_3357_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_, v_a_3362_, v_a_3363_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3378_) == 0)
{
lean_object* v_a_3379_; 
v_a_3379_ = lean_ctor_get(v___x_3378_, 0);
lean_inc(v_a_3379_);
if (lean_obj_tag(v_a_3379_) == 0)
{
lean_dec_ref_known(v_a_3379_, 1);
lean_dec(v_val_3374_);
lean_dec_ref(v_target_3354_);
lean_dec(v_goal_3353_);
return v___x_3378_;
}
else
{
lean_object* v___x_3380_; 
lean_dec_ref_known(v_a_3379_, 1);
lean_dec_ref_known(v___x_3378_, 1);
lean_inc(v_val_3374_);
lean_inc_ref(v_target_3354_);
lean_inc(v_goal_3353_);
v___x_3380_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPFVarZeta(v_goal_3353_, v_target_3354_, v_val_3374_, v_a_3356_, v_a_3357_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_, v_a_3362_, v_a_3363_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3380_) == 0)
{
lean_object* v_a_3381_; 
v_a_3381_ = lean_ctor_get(v___x_3380_, 0);
lean_inc(v_a_3381_);
if (lean_obj_tag(v_a_3381_) == 0)
{
lean_dec_ref_known(v_a_3381_, 1);
lean_dec(v_val_3374_);
lean_dec_ref(v_target_3354_);
lean_dec(v_goal_3353_);
return v___x_3380_;
}
else
{
lean_object* v___x_3382_; 
lean_dec_ref_known(v_a_3381_, 1);
lean_dec_ref_known(v___x_3380_, 1);
lean_inc(v_val_3374_);
v___x_3382_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWPCallSpec(v_goal_3353_, v_target_3354_, v_val_3374_, v_a_3356_, v_a_3357_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_, v_a_3362_, v_a_3363_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3382_) == 0)
{
lean_object* v_a_3383_; 
v_a_3383_ = lean_ctor_get(v___x_3382_, 0);
lean_inc(v_a_3383_);
if (lean_obj_tag(v_a_3383_) == 0)
{
lean_dec_ref_known(v_a_3383_, 1);
lean_dec(v_val_3374_);
return v___x_3382_;
}
else
{
lean_object* v___x_3385_; uint8_t v_isShared_3386_; uint8_t v_isSharedCheck_3392_; 
lean_dec_ref_known(v___x_3382_, 1);
v_isSharedCheck_3392_ = !lean_is_exclusive(v_a_3383_);
if (v_isSharedCheck_3392_ == 0)
{
lean_object* v_unused_3393_; 
v_unused_3393_ = lean_ctor_get(v_a_3383_, 0);
lean_dec(v_unused_3393_);
v___x_3385_ = v_a_3383_;
v_isShared_3386_ = v_isSharedCheck_3392_;
goto v_resetjp_3384_;
}
else
{
lean_dec(v_a_3383_);
v___x_3385_ = lean_box(0);
v_isShared_3386_ = v_isSharedCheck_3392_;
goto v_resetjp_3384_;
}
v_resetjp_3384_:
{
lean_object* v___x_3387_; lean_object* v___x_3389_; 
v___x_3387_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_prog(v_val_3374_);
lean_dec(v_val_3374_);
if (v_isShared_3386_ == 0)
{
lean_ctor_set_tag(v___x_3385_, 2);
lean_ctor_set(v___x_3385_, 0, v___x_3387_);
v___x_3389_ = v___x_3385_;
goto v_reusejp_3388_;
}
else
{
lean_object* v_reuseFailAlloc_3391_; 
v_reuseFailAlloc_3391_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3391_, 0, v___x_3387_);
v___x_3389_ = v_reuseFailAlloc_3391_;
goto v_reusejp_3388_;
}
v_reusejp_3388_:
{
lean_object* v___x_3390_; 
v___x_3390_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnSolveResult___redArg(v___x_3389_);
return v___x_3390_;
}
}
}
}
else
{
lean_dec(v_val_3374_);
return v___x_3382_;
}
}
}
else
{
lean_dec(v_val_3374_);
lean_dec_ref(v_target_3354_);
lean_dec(v_goal_3353_);
return v___x_3380_;
}
}
}
else
{
lean_dec(v_val_3374_);
lean_dec_ref(v_target_3354_);
lean_dec(v_goal_3353_);
return v___x_3378_;
}
}
}
else
{
lean_dec(v_val_3374_);
lean_dec_ref(v_target_3354_);
lean_dec(v_goal_3353_);
return v___x_3376_;
}
}
else
{
lean_object* v_a_3394_; lean_object* v___x_3396_; uint8_t v_isShared_3397_; uint8_t v_isSharedCheck_3401_; 
lean_dec(v_val_3374_);
lean_dec_ref(v_target_3354_);
lean_dec(v_goal_3353_);
v_a_3394_ = lean_ctor_get(v___x_3375_, 0);
v_isSharedCheck_3401_ = !lean_is_exclusive(v___x_3375_);
if (v_isSharedCheck_3401_ == 0)
{
v___x_3396_ = v___x_3375_;
v_isShared_3397_ = v_isSharedCheck_3401_;
goto v_resetjp_3395_;
}
else
{
lean_inc(v_a_3394_);
lean_dec(v___x_3375_);
v___x_3396_ = lean_box(0);
v_isShared_3397_ = v_isSharedCheck_3401_;
goto v_resetjp_3395_;
}
v_resetjp_3395_:
{
lean_object* v___x_3399_; 
if (v_isShared_3397_ == 0)
{
v___x_3399_ = v___x_3396_;
goto v_reusejp_3398_;
}
else
{
lean_object* v_reuseFailAlloc_3400_; 
v_reuseFailAlloc_3400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3400_, 0, v_a_3394_);
v___x_3399_ = v_reuseFailAlloc_3400_;
goto v_reusejp_3398_;
}
v_reusejp_3398_:
{
return v___x_3399_;
}
}
}
}
else
{
lean_object* v___x_3402_; lean_object* v___x_3404_; 
lean_dec(v_a_3370_);
lean_dec_ref(v_target_3354_);
lean_dec(v_goal_3353_);
v___x_3402_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___closed__0));
if (v_isShared_3373_ == 0)
{
lean_ctor_set(v___x_3372_, 0, v___x_3402_);
v___x_3404_ = v___x_3372_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3405_; 
v_reuseFailAlloc_3405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3405_, 0, v___x_3402_);
v___x_3404_ = v_reuseFailAlloc_3405_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
return v___x_3404_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWP___boxed(lean_object* v_goal_3407_, lean_object* v_target_3408_, lean_object* v_rhs_3409_, lean_object* v_a_3410_, lean_object* v_a_3411_, lean_object* v_a_3412_, lean_object* v_a_3413_, lean_object* v_a_3414_, lean_object* v_a_3415_, lean_object* v_a_3416_, lean_object* v_a_3417_, lean_object* v_a_3418_, lean_object* v_a_3419_, lean_object* v_a_3420_, lean_object* v_a_3421_, lean_object* v_a_3422_){
_start:
{
lean_object* v_res_3423_; 
v_res_3423_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWP(v_goal_3407_, v_target_3408_, v_rhs_3409_, v_a_3410_, v_a_3411_, v_a_3412_, v_a_3413_, v_a_3414_, v_a_3415_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_, v_a_3421_);
lean_dec(v_a_3421_);
lean_dec_ref(v_a_3420_);
lean_dec(v_a_3419_);
lean_dec_ref(v_a_3418_);
lean_dec(v_a_3417_);
lean_dec_ref(v_a_3416_);
lean_dec(v_a_3415_);
lean_dec_ref(v_a_3414_);
lean_dec(v_a_3413_);
lean_dec(v_a_3412_);
lean_dec_ref(v_a_3411_);
lean_dec(v_a_3410_);
return v_res_3423_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_3424_, lean_object* v_x_3425_, lean_object* v_x_3426_, lean_object* v_x_3427_){
_start:
{
lean_object* v_ks_3428_; lean_object* v_vs_3429_; lean_object* v___x_3431_; uint8_t v_isShared_3432_; uint8_t v_isSharedCheck_3453_; 
v_ks_3428_ = lean_ctor_get(v_x_3424_, 0);
v_vs_3429_ = lean_ctor_get(v_x_3424_, 1);
v_isSharedCheck_3453_ = !lean_is_exclusive(v_x_3424_);
if (v_isSharedCheck_3453_ == 0)
{
v___x_3431_ = v_x_3424_;
v_isShared_3432_ = v_isSharedCheck_3453_;
goto v_resetjp_3430_;
}
else
{
lean_inc(v_vs_3429_);
lean_inc(v_ks_3428_);
lean_dec(v_x_3424_);
v___x_3431_ = lean_box(0);
v_isShared_3432_ = v_isSharedCheck_3453_;
goto v_resetjp_3430_;
}
v_resetjp_3430_:
{
lean_object* v___x_3433_; uint8_t v___x_3434_; 
v___x_3433_ = lean_array_get_size(v_ks_3428_);
v___x_3434_ = lean_nat_dec_lt(v_x_3425_, v___x_3433_);
if (v___x_3434_ == 0)
{
lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3438_; 
lean_dec(v_x_3425_);
v___x_3435_ = lean_array_push(v_ks_3428_, v_x_3426_);
v___x_3436_ = lean_array_push(v_vs_3429_, v_x_3427_);
if (v_isShared_3432_ == 0)
{
lean_ctor_set(v___x_3431_, 1, v___x_3436_);
lean_ctor_set(v___x_3431_, 0, v___x_3435_);
v___x_3438_ = v___x_3431_;
goto v_reusejp_3437_;
}
else
{
lean_object* v_reuseFailAlloc_3439_; 
v_reuseFailAlloc_3439_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3439_, 0, v___x_3435_);
lean_ctor_set(v_reuseFailAlloc_3439_, 1, v___x_3436_);
v___x_3438_ = v_reuseFailAlloc_3439_;
goto v_reusejp_3437_;
}
v_reusejp_3437_:
{
return v___x_3438_;
}
}
else
{
lean_object* v_k_x27_3440_; uint8_t v___x_3441_; 
v_k_x27_3440_ = lean_array_fget_borrowed(v_ks_3428_, v_x_3425_);
v___x_3441_ = l_Lean_instBEqMVarId_beq(v_x_3426_, v_k_x27_3440_);
if (v___x_3441_ == 0)
{
lean_object* v___x_3443_; 
if (v_isShared_3432_ == 0)
{
v___x_3443_ = v___x_3431_;
goto v_reusejp_3442_;
}
else
{
lean_object* v_reuseFailAlloc_3447_; 
v_reuseFailAlloc_3447_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3447_, 0, v_ks_3428_);
lean_ctor_set(v_reuseFailAlloc_3447_, 1, v_vs_3429_);
v___x_3443_ = v_reuseFailAlloc_3447_;
goto v_reusejp_3442_;
}
v_reusejp_3442_:
{
lean_object* v___x_3444_; lean_object* v___x_3445_; 
v___x_3444_ = lean_unsigned_to_nat(1u);
v___x_3445_ = lean_nat_add(v_x_3425_, v___x_3444_);
lean_dec(v_x_3425_);
v_x_3424_ = v___x_3443_;
v_x_3425_ = v___x_3445_;
goto _start;
}
}
else
{
lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3451_; 
v___x_3448_ = lean_array_fset(v_ks_3428_, v_x_3425_, v_x_3426_);
v___x_3449_ = lean_array_fset(v_vs_3429_, v_x_3425_, v_x_3427_);
lean_dec(v_x_3425_);
if (v_isShared_3432_ == 0)
{
lean_ctor_set(v___x_3431_, 1, v___x_3449_);
lean_ctor_set(v___x_3431_, 0, v___x_3448_);
v___x_3451_ = v___x_3431_;
goto v_reusejp_3450_;
}
else
{
lean_object* v_reuseFailAlloc_3452_; 
v_reuseFailAlloc_3452_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3452_, 0, v___x_3448_);
lean_ctor_set(v_reuseFailAlloc_3452_, 1, v___x_3449_);
v___x_3451_ = v_reuseFailAlloc_3452_;
goto v_reusejp_3450_;
}
v_reusejp_3450_:
{
return v___x_3451_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_n_3454_, lean_object* v_k_3455_, lean_object* v_v_3456_){
_start:
{
lean_object* v___x_3457_; lean_object* v___x_3458_; 
v___x_3457_ = lean_unsigned_to_nat(0u);
v___x_3458_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_n_3454_, v___x_3457_, v_k_3455_, v_v_3456_);
return v___x_3458_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
size_t v___x_3459_; size_t v___x_3460_; size_t v___x_3461_; 
v___x_3459_ = ((size_t)5ULL);
v___x_3460_ = ((size_t)1ULL);
v___x_3461_ = lean_usize_shift_left(v___x_3460_, v___x_3459_);
return v___x_3461_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_3462_; size_t v___x_3463_; size_t v___x_3464_; 
v___x_3462_ = ((size_t)1ULL);
v___x_3463_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_3464_ = lean_usize_sub(v___x_3463_, v___x_3462_);
return v___x_3464_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_3465_; 
v___x_3465_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_3465_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg(lean_object* v_x_3466_, size_t v_x_3467_, size_t v_x_3468_, lean_object* v_x_3469_, lean_object* v_x_3470_){
_start:
{
if (lean_obj_tag(v_x_3466_) == 0)
{
lean_object* v_es_3471_; size_t v___x_3472_; size_t v___x_3473_; size_t v___x_3474_; size_t v___x_3475_; lean_object* v_j_3476_; lean_object* v___x_3477_; uint8_t v___x_3478_; 
v_es_3471_ = lean_ctor_get(v_x_3466_, 0);
v___x_3472_ = ((size_t)5ULL);
v___x_3473_ = ((size_t)1ULL);
v___x_3474_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_3475_ = lean_usize_land(v_x_3467_, v___x_3474_);
v_j_3476_ = lean_usize_to_nat(v___x_3475_);
v___x_3477_ = lean_array_get_size(v_es_3471_);
v___x_3478_ = lean_nat_dec_lt(v_j_3476_, v___x_3477_);
if (v___x_3478_ == 0)
{
lean_dec(v_j_3476_);
lean_dec(v_x_3470_);
lean_dec(v_x_3469_);
return v_x_3466_;
}
else
{
lean_object* v___x_3480_; uint8_t v_isShared_3481_; uint8_t v_isSharedCheck_3515_; 
lean_inc_ref(v_es_3471_);
v_isSharedCheck_3515_ = !lean_is_exclusive(v_x_3466_);
if (v_isSharedCheck_3515_ == 0)
{
lean_object* v_unused_3516_; 
v_unused_3516_ = lean_ctor_get(v_x_3466_, 0);
lean_dec(v_unused_3516_);
v___x_3480_ = v_x_3466_;
v_isShared_3481_ = v_isSharedCheck_3515_;
goto v_resetjp_3479_;
}
else
{
lean_dec(v_x_3466_);
v___x_3480_ = lean_box(0);
v_isShared_3481_ = v_isSharedCheck_3515_;
goto v_resetjp_3479_;
}
v_resetjp_3479_:
{
lean_object* v_v_3482_; lean_object* v___x_3483_; lean_object* v_xs_x27_3484_; lean_object* v___y_3486_; 
v_v_3482_ = lean_array_fget(v_es_3471_, v_j_3476_);
v___x_3483_ = lean_box(0);
v_xs_x27_3484_ = lean_array_fset(v_es_3471_, v_j_3476_, v___x_3483_);
switch(lean_obj_tag(v_v_3482_))
{
case 0:
{
lean_object* v_key_3491_; lean_object* v_val_3492_; lean_object* v___x_3494_; uint8_t v_isShared_3495_; uint8_t v_isSharedCheck_3502_; 
v_key_3491_ = lean_ctor_get(v_v_3482_, 0);
v_val_3492_ = lean_ctor_get(v_v_3482_, 1);
v_isSharedCheck_3502_ = !lean_is_exclusive(v_v_3482_);
if (v_isSharedCheck_3502_ == 0)
{
v___x_3494_ = v_v_3482_;
v_isShared_3495_ = v_isSharedCheck_3502_;
goto v_resetjp_3493_;
}
else
{
lean_inc(v_val_3492_);
lean_inc(v_key_3491_);
lean_dec(v_v_3482_);
v___x_3494_ = lean_box(0);
v_isShared_3495_ = v_isSharedCheck_3502_;
goto v_resetjp_3493_;
}
v_resetjp_3493_:
{
uint8_t v___x_3496_; 
v___x_3496_ = l_Lean_instBEqMVarId_beq(v_x_3469_, v_key_3491_);
if (v___x_3496_ == 0)
{
lean_object* v___x_3497_; lean_object* v___x_3498_; 
lean_del_object(v___x_3494_);
v___x_3497_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_3491_, v_val_3492_, v_x_3469_, v_x_3470_);
v___x_3498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3498_, 0, v___x_3497_);
v___y_3486_ = v___x_3498_;
goto v___jp_3485_;
}
else
{
lean_object* v___x_3500_; 
lean_dec(v_val_3492_);
lean_dec(v_key_3491_);
if (v_isShared_3495_ == 0)
{
lean_ctor_set(v___x_3494_, 1, v_x_3470_);
lean_ctor_set(v___x_3494_, 0, v_x_3469_);
v___x_3500_ = v___x_3494_;
goto v_reusejp_3499_;
}
else
{
lean_object* v_reuseFailAlloc_3501_; 
v_reuseFailAlloc_3501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3501_, 0, v_x_3469_);
lean_ctor_set(v_reuseFailAlloc_3501_, 1, v_x_3470_);
v___x_3500_ = v_reuseFailAlloc_3501_;
goto v_reusejp_3499_;
}
v_reusejp_3499_:
{
v___y_3486_ = v___x_3500_;
goto v___jp_3485_;
}
}
}
}
case 1:
{
lean_object* v_node_3503_; lean_object* v___x_3505_; uint8_t v_isShared_3506_; uint8_t v_isSharedCheck_3513_; 
v_node_3503_ = lean_ctor_get(v_v_3482_, 0);
v_isSharedCheck_3513_ = !lean_is_exclusive(v_v_3482_);
if (v_isSharedCheck_3513_ == 0)
{
v___x_3505_ = v_v_3482_;
v_isShared_3506_ = v_isSharedCheck_3513_;
goto v_resetjp_3504_;
}
else
{
lean_inc(v_node_3503_);
lean_dec(v_v_3482_);
v___x_3505_ = lean_box(0);
v_isShared_3506_ = v_isSharedCheck_3513_;
goto v_resetjp_3504_;
}
v_resetjp_3504_:
{
size_t v___x_3507_; size_t v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3511_; 
v___x_3507_ = lean_usize_shift_right(v_x_3467_, v___x_3472_);
v___x_3508_ = lean_usize_add(v_x_3468_, v___x_3473_);
v___x_3509_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg(v_node_3503_, v___x_3507_, v___x_3508_, v_x_3469_, v_x_3470_);
if (v_isShared_3506_ == 0)
{
lean_ctor_set(v___x_3505_, 0, v___x_3509_);
v___x_3511_ = v___x_3505_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3512_, 0, v___x_3509_);
v___x_3511_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
v___y_3486_ = v___x_3511_;
goto v___jp_3485_;
}
}
}
default: 
{
lean_object* v___x_3514_; 
v___x_3514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3514_, 0, v_x_3469_);
lean_ctor_set(v___x_3514_, 1, v_x_3470_);
v___y_3486_ = v___x_3514_;
goto v___jp_3485_;
}
}
v___jp_3485_:
{
lean_object* v___x_3487_; lean_object* v___x_3489_; 
v___x_3487_ = lean_array_fset(v_xs_x27_3484_, v_j_3476_, v___y_3486_);
lean_dec(v_j_3476_);
if (v_isShared_3481_ == 0)
{
lean_ctor_set(v___x_3480_, 0, v___x_3487_);
v___x_3489_ = v___x_3480_;
goto v_reusejp_3488_;
}
else
{
lean_object* v_reuseFailAlloc_3490_; 
v_reuseFailAlloc_3490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3490_, 0, v___x_3487_);
v___x_3489_ = v_reuseFailAlloc_3490_;
goto v_reusejp_3488_;
}
v_reusejp_3488_:
{
return v___x_3489_;
}
}
}
}
}
else
{
lean_object* v_ks_3517_; lean_object* v_vs_3518_; lean_object* v___x_3520_; uint8_t v_isShared_3521_; uint8_t v_isSharedCheck_3538_; 
v_ks_3517_ = lean_ctor_get(v_x_3466_, 0);
v_vs_3518_ = lean_ctor_get(v_x_3466_, 1);
v_isSharedCheck_3538_ = !lean_is_exclusive(v_x_3466_);
if (v_isSharedCheck_3538_ == 0)
{
v___x_3520_ = v_x_3466_;
v_isShared_3521_ = v_isSharedCheck_3538_;
goto v_resetjp_3519_;
}
else
{
lean_inc(v_vs_3518_);
lean_inc(v_ks_3517_);
lean_dec(v_x_3466_);
v___x_3520_ = lean_box(0);
v_isShared_3521_ = v_isSharedCheck_3538_;
goto v_resetjp_3519_;
}
v_resetjp_3519_:
{
lean_object* v___x_3523_; 
if (v_isShared_3521_ == 0)
{
v___x_3523_ = v___x_3520_;
goto v_reusejp_3522_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v_ks_3517_);
lean_ctor_set(v_reuseFailAlloc_3537_, 1, v_vs_3518_);
v___x_3523_ = v_reuseFailAlloc_3537_;
goto v_reusejp_3522_;
}
v_reusejp_3522_:
{
lean_object* v_newNode_3524_; uint8_t v___y_3526_; size_t v___x_3532_; uint8_t v___x_3533_; 
v_newNode_3524_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__2___redArg(v___x_3523_, v_x_3469_, v_x_3470_);
v___x_3532_ = ((size_t)7ULL);
v___x_3533_ = lean_usize_dec_le(v___x_3532_, v_x_3468_);
if (v___x_3533_ == 0)
{
lean_object* v___x_3534_; lean_object* v___x_3535_; uint8_t v___x_3536_; 
v___x_3534_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_3524_);
v___x_3535_ = lean_unsigned_to_nat(4u);
v___x_3536_ = lean_nat_dec_lt(v___x_3534_, v___x_3535_);
lean_dec(v___x_3534_);
v___y_3526_ = v___x_3536_;
goto v___jp_3525_;
}
else
{
v___y_3526_ = v___x_3533_;
goto v___jp_3525_;
}
v___jp_3525_:
{
if (v___y_3526_ == 0)
{
lean_object* v_ks_3527_; lean_object* v_vs_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; 
v_ks_3527_ = lean_ctor_get(v_newNode_3524_, 0);
lean_inc_ref(v_ks_3527_);
v_vs_3528_ = lean_ctor_get(v_newNode_3524_, 1);
lean_inc_ref(v_vs_3528_);
lean_dec_ref(v_newNode_3524_);
v___x_3529_ = lean_unsigned_to_nat(0u);
v___x_3530_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg___closed__2);
v___x_3531_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__3___redArg(v_x_3468_, v_ks_3527_, v_vs_3528_, v___x_3529_, v___x_3530_);
lean_dec_ref(v_vs_3528_);
lean_dec_ref(v_ks_3527_);
return v___x_3531_;
}
else
{
return v_newNode_3524_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__3___redArg(size_t v_depth_3539_, lean_object* v_keys_3540_, lean_object* v_vals_3541_, lean_object* v_i_3542_, lean_object* v_entries_3543_){
_start:
{
lean_object* v___x_3544_; uint8_t v___x_3545_; 
v___x_3544_ = lean_array_get_size(v_keys_3540_);
v___x_3545_ = lean_nat_dec_lt(v_i_3542_, v___x_3544_);
if (v___x_3545_ == 0)
{
lean_dec(v_i_3542_);
return v_entries_3543_;
}
else
{
lean_object* v_k_3546_; lean_object* v_v_3547_; uint64_t v___x_3548_; size_t v_h_3549_; size_t v___x_3550_; lean_object* v___x_3551_; size_t v___x_3552_; size_t v___x_3553_; size_t v___x_3554_; size_t v_h_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; 
v_k_3546_ = lean_array_fget_borrowed(v_keys_3540_, v_i_3542_);
v_v_3547_ = lean_array_fget_borrowed(v_vals_3541_, v_i_3542_);
v___x_3548_ = l_Lean_instHashableMVarId_hash(v_k_3546_);
v_h_3549_ = lean_uint64_to_usize(v___x_3548_);
v___x_3550_ = ((size_t)5ULL);
v___x_3551_ = lean_unsigned_to_nat(1u);
v___x_3552_ = ((size_t)1ULL);
v___x_3553_ = lean_usize_sub(v_depth_3539_, v___x_3552_);
v___x_3554_ = lean_usize_mul(v___x_3550_, v___x_3553_);
v_h_3555_ = lean_usize_shift_right(v_h_3549_, v___x_3554_);
v___x_3556_ = lean_nat_add(v_i_3542_, v___x_3551_);
lean_dec(v_i_3542_);
lean_inc(v_v_3547_);
lean_inc(v_k_3546_);
v___x_3557_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg(v_entries_3543_, v_h_3555_, v_depth_3539_, v_k_3546_, v_v_3547_);
v_i_3542_ = v___x_3556_;
v_entries_3543_ = v___x_3557_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_depth_3559_, lean_object* v_keys_3560_, lean_object* v_vals_3561_, lean_object* v_i_3562_, lean_object* v_entries_3563_){
_start:
{
size_t v_depth_boxed_3564_; lean_object* v_res_3565_; 
v_depth_boxed_3564_ = lean_unbox_usize(v_depth_3559_);
lean_dec(v_depth_3559_);
v_res_3565_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_boxed_3564_, v_keys_3560_, v_vals_3561_, v_i_3562_, v_entries_3563_);
lean_dec_ref(v_vals_3561_);
lean_dec_ref(v_keys_3560_);
return v_res_3565_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_3566_, lean_object* v_x_3567_, lean_object* v_x_3568_, lean_object* v_x_3569_, lean_object* v_x_3570_){
_start:
{
size_t v_x_18565__boxed_3571_; size_t v_x_18566__boxed_3572_; lean_object* v_res_3573_; 
v_x_18565__boxed_3571_ = lean_unbox_usize(v_x_3567_);
lean_dec(v_x_3567_);
v_x_18566__boxed_3572_ = lean_unbox_usize(v_x_3568_);
lean_dec(v_x_3568_);
v_res_3573_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg(v_x_3566_, v_x_18565__boxed_3571_, v_x_18566__boxed_3572_, v_x_3569_, v_x_3570_);
return v_res_3573_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0___redArg(lean_object* v_x_3574_, lean_object* v_x_3575_, lean_object* v_x_3576_){
_start:
{
uint64_t v___x_3577_; size_t v___x_3578_; size_t v___x_3579_; lean_object* v___x_3580_; 
v___x_3577_ = l_Lean_instHashableMVarId_hash(v_x_3575_);
v___x_3578_ = lean_uint64_to_usize(v___x_3577_);
v___x_3579_ = ((size_t)1ULL);
v___x_3580_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg(v_x_3574_, v___x_3578_, v___x_3579_, v_x_3575_, v_x_3576_);
return v___x_3580_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0___redArg(lean_object* v_mvarId_3581_, lean_object* v_val_3582_, lean_object* v___y_3583_){
_start:
{
lean_object* v___x_3585_; lean_object* v_mctx_3586_; lean_object* v_cache_3587_; lean_object* v_zetaDeltaFVarIds_3588_; lean_object* v_postponed_3589_; lean_object* v_diag_3590_; lean_object* v___x_3592_; uint8_t v_isShared_3593_; uint8_t v_isSharedCheck_3618_; 
v___x_3585_ = lean_st_ref_take(v___y_3583_);
v_mctx_3586_ = lean_ctor_get(v___x_3585_, 0);
v_cache_3587_ = lean_ctor_get(v___x_3585_, 1);
v_zetaDeltaFVarIds_3588_ = lean_ctor_get(v___x_3585_, 2);
v_postponed_3589_ = lean_ctor_get(v___x_3585_, 3);
v_diag_3590_ = lean_ctor_get(v___x_3585_, 4);
v_isSharedCheck_3618_ = !lean_is_exclusive(v___x_3585_);
if (v_isSharedCheck_3618_ == 0)
{
v___x_3592_ = v___x_3585_;
v_isShared_3593_ = v_isSharedCheck_3618_;
goto v_resetjp_3591_;
}
else
{
lean_inc(v_diag_3590_);
lean_inc(v_postponed_3589_);
lean_inc(v_zetaDeltaFVarIds_3588_);
lean_inc(v_cache_3587_);
lean_inc(v_mctx_3586_);
lean_dec(v___x_3585_);
v___x_3592_ = lean_box(0);
v_isShared_3593_ = v_isSharedCheck_3618_;
goto v_resetjp_3591_;
}
v_resetjp_3591_:
{
lean_object* v_depth_3594_; lean_object* v_levelAssignDepth_3595_; lean_object* v_lmvarCounter_3596_; lean_object* v_mvarCounter_3597_; lean_object* v_lDecls_3598_; lean_object* v_decls_3599_; lean_object* v_userNames_3600_; lean_object* v_lAssignment_3601_; lean_object* v_eAssignment_3602_; lean_object* v_dAssignment_3603_; lean_object* v___x_3605_; uint8_t v_isShared_3606_; uint8_t v_isSharedCheck_3617_; 
v_depth_3594_ = lean_ctor_get(v_mctx_3586_, 0);
v_levelAssignDepth_3595_ = lean_ctor_get(v_mctx_3586_, 1);
v_lmvarCounter_3596_ = lean_ctor_get(v_mctx_3586_, 2);
v_mvarCounter_3597_ = lean_ctor_get(v_mctx_3586_, 3);
v_lDecls_3598_ = lean_ctor_get(v_mctx_3586_, 4);
v_decls_3599_ = lean_ctor_get(v_mctx_3586_, 5);
v_userNames_3600_ = lean_ctor_get(v_mctx_3586_, 6);
v_lAssignment_3601_ = lean_ctor_get(v_mctx_3586_, 7);
v_eAssignment_3602_ = lean_ctor_get(v_mctx_3586_, 8);
v_dAssignment_3603_ = lean_ctor_get(v_mctx_3586_, 9);
v_isSharedCheck_3617_ = !lean_is_exclusive(v_mctx_3586_);
if (v_isSharedCheck_3617_ == 0)
{
v___x_3605_ = v_mctx_3586_;
v_isShared_3606_ = v_isSharedCheck_3617_;
goto v_resetjp_3604_;
}
else
{
lean_inc(v_dAssignment_3603_);
lean_inc(v_eAssignment_3602_);
lean_inc(v_lAssignment_3601_);
lean_inc(v_userNames_3600_);
lean_inc(v_decls_3599_);
lean_inc(v_lDecls_3598_);
lean_inc(v_mvarCounter_3597_);
lean_inc(v_lmvarCounter_3596_);
lean_inc(v_levelAssignDepth_3595_);
lean_inc(v_depth_3594_);
lean_dec(v_mctx_3586_);
v___x_3605_ = lean_box(0);
v_isShared_3606_ = v_isSharedCheck_3617_;
goto v_resetjp_3604_;
}
v_resetjp_3604_:
{
lean_object* v___x_3607_; lean_object* v___x_3609_; 
v___x_3607_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0___redArg(v_eAssignment_3602_, v_mvarId_3581_, v_val_3582_);
if (v_isShared_3606_ == 0)
{
lean_ctor_set(v___x_3605_, 8, v___x_3607_);
v___x_3609_ = v___x_3605_;
goto v_reusejp_3608_;
}
else
{
lean_object* v_reuseFailAlloc_3616_; 
v_reuseFailAlloc_3616_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3616_, 0, v_depth_3594_);
lean_ctor_set(v_reuseFailAlloc_3616_, 1, v_levelAssignDepth_3595_);
lean_ctor_set(v_reuseFailAlloc_3616_, 2, v_lmvarCounter_3596_);
lean_ctor_set(v_reuseFailAlloc_3616_, 3, v_mvarCounter_3597_);
lean_ctor_set(v_reuseFailAlloc_3616_, 4, v_lDecls_3598_);
lean_ctor_set(v_reuseFailAlloc_3616_, 5, v_decls_3599_);
lean_ctor_set(v_reuseFailAlloc_3616_, 6, v_userNames_3600_);
lean_ctor_set(v_reuseFailAlloc_3616_, 7, v_lAssignment_3601_);
lean_ctor_set(v_reuseFailAlloc_3616_, 8, v___x_3607_);
lean_ctor_set(v_reuseFailAlloc_3616_, 9, v_dAssignment_3603_);
v___x_3609_ = v_reuseFailAlloc_3616_;
goto v_reusejp_3608_;
}
v_reusejp_3608_:
{
lean_object* v___x_3611_; 
if (v_isShared_3593_ == 0)
{
lean_ctor_set(v___x_3592_, 0, v___x_3609_);
v___x_3611_ = v___x_3592_;
goto v_reusejp_3610_;
}
else
{
lean_object* v_reuseFailAlloc_3615_; 
v_reuseFailAlloc_3615_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3615_, 0, v___x_3609_);
lean_ctor_set(v_reuseFailAlloc_3615_, 1, v_cache_3587_);
lean_ctor_set(v_reuseFailAlloc_3615_, 2, v_zetaDeltaFVarIds_3588_);
lean_ctor_set(v_reuseFailAlloc_3615_, 3, v_postponed_3589_);
lean_ctor_set(v_reuseFailAlloc_3615_, 4, v_diag_3590_);
v___x_3611_ = v_reuseFailAlloc_3615_;
goto v_reusejp_3610_;
}
v_reusejp_3610_:
{
lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; 
v___x_3612_ = lean_st_ref_set(v___y_3583_, v___x_3611_);
v___x_3613_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___closed__0));
v___x_3614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3614_, 0, v___x_3613_);
return v___x_3614_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0___redArg___boxed(lean_object* v_mvarId_3619_, lean_object* v_val_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_){
_start:
{
lean_object* v_res_3623_; 
v_res_3623_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0___redArg(v_mvarId_3619_, v_val_3620_, v___y_3621_);
lean_dec(v___y_3621_);
return v_res_3623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl(lean_object* v_goal_3637_, lean_object* v_target_3638_, lean_object* v_a_3639_, lean_object* v_a_3640_, lean_object* v_a_3641_, lean_object* v_a_3642_, lean_object* v_a_3643_, lean_object* v_a_3644_, lean_object* v_a_3645_, lean_object* v_a_3646_, lean_object* v_a_3647_, lean_object* v_a_3648_, lean_object* v_a_3649_, lean_object* v_a_3650_){
_start:
{
lean_object* v___x_3655_; uint8_t v___x_3656_; 
lean_inc_ref(v_target_3638_);
v___x_3655_ = l_Lean_Expr_cleanupAnnotations(v_target_3638_);
v___x_3656_ = l_Lean_Expr_isApp(v___x_3655_);
if (v___x_3656_ == 0)
{
lean_dec_ref(v___x_3655_);
lean_dec_ref(v_target_3638_);
lean_dec(v_goal_3637_);
goto v___jp_3652_;
}
else
{
lean_object* v_arg_3657_; lean_object* v___x_3658_; uint8_t v___x_3659_; 
v_arg_3657_ = lean_ctor_get(v___x_3655_, 1);
lean_inc_ref(v_arg_3657_);
v___x_3658_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3655_);
v___x_3659_ = l_Lean_Expr_isApp(v___x_3658_);
if (v___x_3659_ == 0)
{
lean_dec_ref(v___x_3658_);
lean_dec_ref(v_arg_3657_);
lean_dec_ref(v_target_3638_);
lean_dec(v_goal_3637_);
goto v___jp_3652_;
}
else
{
lean_object* v_arg_3660_; lean_object* v___x_3661_; uint8_t v___x_3662_; 
v_arg_3660_ = lean_ctor_get(v___x_3658_, 1);
lean_inc_ref(v_arg_3660_);
v___x_3661_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3658_);
v___x_3662_ = l_Lean_Expr_isApp(v___x_3661_);
if (v___x_3662_ == 0)
{
lean_dec_ref(v___x_3661_);
lean_dec_ref(v_arg_3660_);
lean_dec_ref(v_arg_3657_);
lean_dec_ref(v_target_3638_);
lean_dec(v_goal_3637_);
goto v___jp_3652_;
}
else
{
lean_object* v_arg_3663_; lean_object* v___x_3664_; uint8_t v___x_3665_; 
v_arg_3663_ = lean_ctor_get(v___x_3661_, 1);
lean_inc_ref(v_arg_3663_);
v___x_3664_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3661_);
v___x_3665_ = l_Lean_Expr_isApp(v___x_3664_);
if (v___x_3665_ == 0)
{
lean_dec_ref(v___x_3664_);
lean_dec_ref(v_arg_3663_);
lean_dec_ref(v_arg_3660_);
lean_dec_ref(v_arg_3657_);
lean_dec_ref(v_target_3638_);
lean_dec(v_goal_3637_);
goto v___jp_3652_;
}
else
{
lean_object* v_arg_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; uint8_t v___x_3669_; 
v_arg_3666_ = lean_ctor_get(v___x_3664_, 1);
lean_inc_ref(v_arg_3666_);
v___x_3667_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3664_);
v___x_3668_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__2));
v___x_3669_ = l_Lean_Expr_isConstOf(v___x_3667_, v___x_3668_);
lean_dec_ref(v___x_3667_);
if (v___x_3669_ == 0)
{
lean_dec_ref(v_arg_3666_);
lean_dec_ref(v_arg_3663_);
lean_dec_ref(v_arg_3660_);
lean_dec_ref(v_arg_3657_);
lean_dec_ref(v_target_3638_);
lean_dec(v_goal_3637_);
goto v___jp_3652_;
}
else
{
lean_object* v___x_3670_; uint8_t v_foApprox_3671_; uint8_t v_ctxApprox_3672_; uint8_t v_quasiPatternApprox_3673_; uint8_t v_constApprox_3674_; uint8_t v_isDefEqStuckEx_3675_; uint8_t v_unificationHints_3676_; uint8_t v_proofIrrelevance_3677_; uint8_t v_offsetCnstrs_3678_; uint8_t v_transparency_3679_; uint8_t v_etaStruct_3680_; uint8_t v_univApprox_3681_; uint8_t v_iota_3682_; uint8_t v_beta_3683_; uint8_t v_proj_3684_; uint8_t v_zeta_3685_; uint8_t v_zetaDelta_3686_; uint8_t v_zetaUnused_3687_; uint8_t v_zetaHave_3688_; lean_object* v___x_3690_; uint8_t v_isShared_3691_; uint8_t v_isSharedCheck_3741_; 
v___x_3670_ = l_Lean_Meta_Context_config(v_a_3647_);
v_foApprox_3671_ = lean_ctor_get_uint8(v___x_3670_, 0);
v_ctxApprox_3672_ = lean_ctor_get_uint8(v___x_3670_, 1);
v_quasiPatternApprox_3673_ = lean_ctor_get_uint8(v___x_3670_, 2);
v_constApprox_3674_ = lean_ctor_get_uint8(v___x_3670_, 3);
v_isDefEqStuckEx_3675_ = lean_ctor_get_uint8(v___x_3670_, 4);
v_unificationHints_3676_ = lean_ctor_get_uint8(v___x_3670_, 5);
v_proofIrrelevance_3677_ = lean_ctor_get_uint8(v___x_3670_, 6);
v_offsetCnstrs_3678_ = lean_ctor_get_uint8(v___x_3670_, 8);
v_transparency_3679_ = lean_ctor_get_uint8(v___x_3670_, 9);
v_etaStruct_3680_ = lean_ctor_get_uint8(v___x_3670_, 10);
v_univApprox_3681_ = lean_ctor_get_uint8(v___x_3670_, 11);
v_iota_3682_ = lean_ctor_get_uint8(v___x_3670_, 12);
v_beta_3683_ = lean_ctor_get_uint8(v___x_3670_, 13);
v_proj_3684_ = lean_ctor_get_uint8(v___x_3670_, 14);
v_zeta_3685_ = lean_ctor_get_uint8(v___x_3670_, 15);
v_zetaDelta_3686_ = lean_ctor_get_uint8(v___x_3670_, 16);
v_zetaUnused_3687_ = lean_ctor_get_uint8(v___x_3670_, 17);
v_zetaHave_3688_ = lean_ctor_get_uint8(v___x_3670_, 18);
v_isSharedCheck_3741_ = !lean_is_exclusive(v___x_3670_);
if (v_isSharedCheck_3741_ == 0)
{
v___x_3690_ = v___x_3670_;
v_isShared_3691_ = v_isSharedCheck_3741_;
goto v_resetjp_3689_;
}
else
{
lean_dec(v___x_3670_);
v___x_3690_ = lean_box(0);
v_isShared_3691_ = v_isSharedCheck_3741_;
goto v_resetjp_3689_;
}
v_resetjp_3689_:
{
uint8_t v_trackZetaDelta_3692_; lean_object* v_zetaDeltaSet_3693_; lean_object* v_lctx_3694_; lean_object* v_localInstances_3695_; lean_object* v_defEqCtx_x3f_3696_; lean_object* v_synthPendingDepth_3697_; lean_object* v_canUnfold_x3f_3698_; uint8_t v_univApprox_3699_; uint8_t v_inTypeClassResolution_3700_; uint8_t v_cacheInferType_3701_; lean_object* v___x_3703_; 
v_trackZetaDelta_3692_ = lean_ctor_get_uint8(v_a_3647_, sizeof(void*)*7);
v_zetaDeltaSet_3693_ = lean_ctor_get(v_a_3647_, 1);
v_lctx_3694_ = lean_ctor_get(v_a_3647_, 2);
v_localInstances_3695_ = lean_ctor_get(v_a_3647_, 3);
v_defEqCtx_x3f_3696_ = lean_ctor_get(v_a_3647_, 4);
v_synthPendingDepth_3697_ = lean_ctor_get(v_a_3647_, 5);
v_canUnfold_x3f_3698_ = lean_ctor_get(v_a_3647_, 6);
v_univApprox_3699_ = lean_ctor_get_uint8(v_a_3647_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3700_ = lean_ctor_get_uint8(v_a_3647_, sizeof(void*)*7 + 2);
v_cacheInferType_3701_ = lean_ctor_get_uint8(v_a_3647_, sizeof(void*)*7 + 3);
if (v_isShared_3691_ == 0)
{
v___x_3703_ = v___x_3690_;
goto v_reusejp_3702_;
}
else
{
lean_object* v_reuseFailAlloc_3740_; 
v_reuseFailAlloc_3740_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_3740_, 0, v_foApprox_3671_);
lean_ctor_set_uint8(v_reuseFailAlloc_3740_, 1, v_ctxApprox_3672_);
lean_ctor_set_uint8(v_reuseFailAlloc_3740_, 2, v_quasiPatternApprox_3673_);
lean_ctor_set_uint8(v_reuseFailAlloc_3740_, 3, v_constApprox_3674_);
lean_ctor_set_uint8(v_reuseFailAlloc_3740_, 4, v_isDefEqStuckEx_3675_);
lean_ctor_set_uint8(v_reuseFailAlloc_3740_, 5, v_unificationHints_3676_);
lean_ctor_set_uint8(v_reuseFailAlloc_3740_, 6, v_proofIrrelevance_3677_);
lean_ctor_set_uint8(v_reuseFailAlloc_3740_, 8, v_offsetCnstrs_3678_);
lean_ctor_set_uint8(v_reuseFailAlloc_3740_, 9, v_transparency_3679_);
lean_ctor_set_uint8(v_reuseFailAlloc_3740_, 10, v_etaStruct_3680_);
lean_ctor_set_uint8(v_reuseFailAlloc_3740_, 11, v_univApprox_3681_);
lean_ctor_set_uint8(v_reuseFailAlloc_3740_, 12, v_iota_3682_);
lean_ctor_set_uint8(v_reuseFailAlloc_3740_, 13, v_beta_3683_);
lean_ctor_set_uint8(v_reuseFailAlloc_3740_, 14, v_proj_3684_);
lean_ctor_set_uint8(v_reuseFailAlloc_3740_, 15, v_zeta_3685_);
lean_ctor_set_uint8(v_reuseFailAlloc_3740_, 16, v_zetaDelta_3686_);
lean_ctor_set_uint8(v_reuseFailAlloc_3740_, 17, v_zetaUnused_3687_);
lean_ctor_set_uint8(v_reuseFailAlloc_3740_, 18, v_zetaHave_3688_);
v___x_3703_ = v_reuseFailAlloc_3740_;
goto v_reusejp_3702_;
}
v_reusejp_3702_:
{
uint64_t v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; 
lean_ctor_set_uint8(v___x_3703_, 7, v___x_3669_);
v___x_3704_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3703_);
v___x_3705_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_introOrSubstTargetLet___redArg___closed__0));
v___x_3706_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3706_, 0, v___x_3703_);
lean_ctor_set_uint64(v___x_3706_, sizeof(void*)*1, v___x_3704_);
lean_inc(v_canUnfold_x3f_3698_);
lean_inc(v_synthPendingDepth_3697_);
lean_inc(v_defEqCtx_x3f_3696_);
lean_inc_ref(v_localInstances_3695_);
lean_inc_ref(v_lctx_3694_);
lean_inc(v_zetaDeltaSet_3693_);
v___x_3707_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3707_, 0, v___x_3706_);
lean_ctor_set(v___x_3707_, 1, v_zetaDeltaSet_3693_);
lean_ctor_set(v___x_3707_, 2, v_lctx_3694_);
lean_ctor_set(v___x_3707_, 3, v_localInstances_3695_);
lean_ctor_set(v___x_3707_, 4, v_defEqCtx_x3f_3696_);
lean_ctor_set(v___x_3707_, 5, v_synthPendingDepth_3697_);
lean_ctor_set(v___x_3707_, 6, v_canUnfold_x3f_3698_);
lean_ctor_set_uint8(v___x_3707_, sizeof(void*)*7, v_trackZetaDelta_3692_);
lean_ctor_set_uint8(v___x_3707_, sizeof(void*)*7 + 1, v_univApprox_3699_);
lean_ctor_set_uint8(v___x_3707_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3700_);
lean_ctor_set_uint8(v___x_3707_, sizeof(void*)*7 + 3, v_cacheInferType_3701_);
lean_inc_ref(v_arg_3660_);
v___x_3708_ = l_Lean_Meta_Sym_isDefEqS(v_arg_3660_, v_arg_3657_, v___x_3669_, v___x_3669_, v___x_3705_, v___x_3705_, v_a_3645_, v_a_3646_, v___x_3707_, v_a_3648_, v_a_3649_, v_a_3650_);
lean_dec_ref_known(v___x_3707_, 7);
if (lean_obj_tag(v___x_3708_) == 0)
{
lean_object* v_a_3709_; lean_object* v___x_3711_; uint8_t v_isShared_3712_; uint8_t v_isSharedCheck_3731_; 
v_a_3709_ = lean_ctor_get(v___x_3708_, 0);
v_isSharedCheck_3731_ = !lean_is_exclusive(v___x_3708_);
if (v_isSharedCheck_3731_ == 0)
{
v___x_3711_ = v___x_3708_;
v_isShared_3712_ = v_isSharedCheck_3731_;
goto v_resetjp_3710_;
}
else
{
lean_inc(v_a_3709_);
lean_dec(v___x_3708_);
v___x_3711_ = lean_box(0);
v_isShared_3712_ = v_isSharedCheck_3731_;
goto v_resetjp_3710_;
}
v_resetjp_3710_:
{
uint8_t v___x_3713_; 
v___x_3713_ = lean_unbox(v_a_3709_);
lean_dec(v_a_3709_);
if (v___x_3713_ == 0)
{
lean_object* v___x_3714_; lean_object* v___x_3716_; 
lean_dec_ref(v_arg_3666_);
lean_dec_ref(v_arg_3663_);
lean_dec_ref(v_arg_3660_);
lean_dec_ref(v_target_3638_);
lean_dec(v_goal_3637_);
v___x_3714_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___closed__0));
if (v_isShared_3712_ == 0)
{
lean_ctor_set(v___x_3711_, 0, v___x_3714_);
v___x_3716_ = v___x_3711_;
goto v_reusejp_3715_;
}
else
{
lean_object* v_reuseFailAlloc_3717_; 
v_reuseFailAlloc_3717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3717_, 0, v___x_3714_);
v___x_3716_ = v_reuseFailAlloc_3717_;
goto v_reusejp_3715_;
}
v_reusejp_3715_:
{
return v___x_3716_;
}
}
else
{
lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; 
lean_del_object(v___x_3711_);
v___x_3718_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__4));
v___x_3719_ = l_Lean_Expr_getAppFn(v_target_3638_);
lean_dec_ref(v_target_3638_);
v___x_3720_ = l_Lean_Expr_constLevels_x21(v___x_3719_);
lean_dec_ref(v___x_3719_);
v___x_3721_ = l_Lean_mkConst(v___x_3718_, v___x_3720_);
v___x_3722_ = lean_unsigned_to_nat(3u);
v___x_3723_ = lean_mk_empty_array_with_capacity(v___x_3722_);
v___x_3724_ = lean_array_push(v___x_3723_, v_arg_3666_);
v___x_3725_ = lean_array_push(v___x_3724_, v_arg_3663_);
v___x_3726_ = lean_array_push(v___x_3725_, v_arg_3660_);
v___x_3727_ = l_Lean_mkAppN(v___x_3721_, v___x_3726_);
lean_dec_ref(v___x_3726_);
v___x_3728_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0___redArg(v_goal_3637_, v___x_3727_, v_a_3648_);
lean_dec_ref(v___x_3728_);
v___x_3729_ = lean_box(0);
v___x_3730_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnGoals___redArg(v___x_3729_, v_a_3639_);
return v___x_3730_;
}
}
}
else
{
lean_object* v_a_3732_; lean_object* v___x_3734_; uint8_t v_isShared_3735_; uint8_t v_isSharedCheck_3739_; 
lean_dec_ref(v_arg_3666_);
lean_dec_ref(v_arg_3663_);
lean_dec_ref(v_arg_3660_);
lean_dec_ref(v_target_3638_);
lean_dec(v_goal_3637_);
v_a_3732_ = lean_ctor_get(v___x_3708_, 0);
v_isSharedCheck_3739_ = !lean_is_exclusive(v___x_3708_);
if (v_isSharedCheck_3739_ == 0)
{
v___x_3734_ = v___x_3708_;
v_isShared_3735_ = v_isSharedCheck_3739_;
goto v_resetjp_3733_;
}
else
{
lean_inc(v_a_3732_);
lean_dec(v___x_3708_);
v___x_3734_ = lean_box(0);
v_isShared_3735_ = v_isSharedCheck_3739_;
goto v_resetjp_3733_;
}
v_resetjp_3733_:
{
lean_object* v___x_3737_; 
if (v_isShared_3735_ == 0)
{
v___x_3737_ = v___x_3734_;
goto v_reusejp_3736_;
}
else
{
lean_object* v_reuseFailAlloc_3738_; 
v_reuseFailAlloc_3738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3738_, 0, v_a_3732_);
v___x_3737_ = v_reuseFailAlloc_3738_;
goto v_reusejp_3736_;
}
v_reusejp_3736_:
{
return v___x_3737_;
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
v___jp_3652_:
{
lean_object* v___x_3653_; lean_object* v___x_3654_; 
v___x_3653_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro___closed__0));
v___x_3654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3654_, 0, v___x_3653_);
return v___x_3654_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___boxed(lean_object* v_goal_3742_, lean_object* v_target_3743_, lean_object* v_a_3744_, lean_object* v_a_3745_, lean_object* v_a_3746_, lean_object* v_a_3747_, lean_object* v_a_3748_, lean_object* v_a_3749_, lean_object* v_a_3750_, lean_object* v_a_3751_, lean_object* v_a_3752_, lean_object* v_a_3753_, lean_object* v_a_3754_, lean_object* v_a_3755_, lean_object* v_a_3756_){
_start:
{
lean_object* v_res_3757_; 
v_res_3757_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl(v_goal_3742_, v_target_3743_, v_a_3744_, v_a_3745_, v_a_3746_, v_a_3747_, v_a_3748_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_, v_a_3753_, v_a_3754_, v_a_3755_);
lean_dec(v_a_3755_);
lean_dec_ref(v_a_3754_);
lean_dec(v_a_3753_);
lean_dec_ref(v_a_3752_);
lean_dec(v_a_3751_);
lean_dec_ref(v_a_3750_);
lean_dec(v_a_3749_);
lean_dec_ref(v_a_3748_);
lean_dec(v_a_3747_);
lean_dec(v_a_3746_);
lean_dec_ref(v_a_3745_);
lean_dec(v_a_3744_);
return v_res_3757_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0(lean_object* v_mvarId_3758_, lean_object* v_val_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_, lean_object* v___y_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_, lean_object* v___y_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_){
_start:
{
lean_object* v___x_3773_; 
v___x_3773_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0___redArg(v_mvarId_3758_, v_val_3759_, v___y_3769_);
return v___x_3773_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0___boxed(lean_object* v_mvarId_3774_, lean_object* v_val_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_, lean_object* v___y_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_){
_start:
{
lean_object* v_res_3789_; 
v_res_3789_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0(v_mvarId_3774_, v_val_3775_, v___y_3776_, v___y_3777_, v___y_3778_, v___y_3779_, v___y_3780_, v___y_3781_, v___y_3782_, v___y_3783_, v___y_3784_, v___y_3785_, v___y_3786_, v___y_3787_);
lean_dec(v___y_3787_);
lean_dec_ref(v___y_3786_);
lean_dec(v___y_3785_);
lean_dec_ref(v___y_3784_);
lean_dec(v___y_3783_);
lean_dec_ref(v___y_3782_);
lean_dec(v___y_3781_);
lean_dec_ref(v___y_3780_);
lean_dec(v___y_3779_);
lean_dec(v___y_3778_);
lean_dec_ref(v___y_3777_);
lean_dec(v___y_3776_);
return v_res_3789_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0(lean_object* v_00_u03b2_3790_, lean_object* v_x_3791_, lean_object* v_x_3792_, lean_object* v_x_3793_){
_start:
{
lean_object* v___x_3794_; 
v___x_3794_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0___redArg(v_x_3791_, v_x_3792_, v_x_3793_);
return v___x_3794_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_3795_, lean_object* v_x_3796_, size_t v_x_3797_, size_t v_x_3798_, lean_object* v_x_3799_, lean_object* v_x_3800_){
_start:
{
lean_object* v___x_3801_; 
v___x_3801_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___redArg(v_x_3796_, v_x_3797_, v_x_3798_, v_x_3799_, v_x_3800_);
return v___x_3801_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_3802_, lean_object* v_x_3803_, lean_object* v_x_3804_, lean_object* v_x_3805_, lean_object* v_x_3806_, lean_object* v_x_3807_){
_start:
{
size_t v_x_19019__boxed_3808_; size_t v_x_19020__boxed_3809_; lean_object* v_res_3810_; 
v_x_19019__boxed_3808_ = lean_unbox_usize(v_x_3804_);
lean_dec(v_x_3804_);
v_x_19020__boxed_3809_ = lean_unbox_usize(v_x_3805_);
lean_dec(v_x_3805_);
v_res_3810_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1(v_00_u03b2_3802_, v_x_3803_, v_x_19019__boxed_3808_, v_x_19020__boxed_3809_, v_x_3806_, v_x_3807_);
return v_res_3810_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_3811_, lean_object* v_n_3812_, lean_object* v_k_3813_, lean_object* v_v_3814_){
_start:
{
lean_object* v___x_3815_; 
v___x_3815_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__2___redArg(v_n_3812_, v_k_3813_, v_v_3814_);
return v___x_3815_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_3816_, size_t v_depth_3817_, lean_object* v_keys_3818_, lean_object* v_vals_3819_, lean_object* v_heq_3820_, lean_object* v_i_3821_, lean_object* v_entries_3822_){
_start:
{
lean_object* v___x_3823_; 
v___x_3823_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_3817_, v_keys_3818_, v_vals_3819_, v_i_3821_, v_entries_3822_);
return v___x_3823_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_3824_, lean_object* v_depth_3825_, lean_object* v_keys_3826_, lean_object* v_vals_3827_, lean_object* v_heq_3828_, lean_object* v_i_3829_, lean_object* v_entries_3830_){
_start:
{
size_t v_depth_boxed_3831_; lean_object* v_res_3832_; 
v_depth_boxed_3831_ = lean_unbox_usize(v_depth_3825_);
lean_dec(v_depth_3825_);
v_res_3832_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_3824_, v_depth_boxed_3831_, v_keys_3826_, v_vals_3827_, v_heq_3828_, v_i_3829_, v_entries_3830_);
lean_dec_ref(v_vals_3827_);
lean_dec_ref(v_keys_3826_);
return v_res_3832_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_3833_, lean_object* v_x_3834_, lean_object* v_x_3835_, lean_object* v_x_3836_, lean_object* v_x_3837_){
_start:
{
lean_object* v___x_3838_; 
v___x_3838_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_x_3834_, v_x_3835_, v_x_3836_, v_x_3837_);
return v___x_3838_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_runStrategies_spec__0___redArg(lean_object* v_e_3839_, lean_object* v___y_3840_){
_start:
{
uint8_t v___x_3842_; 
v___x_3842_ = l_Lean_Expr_hasMVar(v_e_3839_);
if (v___x_3842_ == 0)
{
lean_object* v___x_3843_; lean_object* v___x_3844_; 
v___x_3843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3843_, 0, v_e_3839_);
v___x_3844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3844_, 0, v___x_3843_);
return v___x_3844_;
}
else
{
lean_object* v___x_3845_; lean_object* v_mctx_3846_; lean_object* v___x_3847_; lean_object* v_fst_3848_; lean_object* v_snd_3849_; lean_object* v___x_3850_; lean_object* v_cache_3851_; lean_object* v_zetaDeltaFVarIds_3852_; lean_object* v_postponed_3853_; lean_object* v_diag_3854_; lean_object* v___x_3856_; uint8_t v_isShared_3857_; uint8_t v_isSharedCheck_3864_; 
v___x_3845_ = lean_st_ref_get(v___y_3840_);
v_mctx_3846_ = lean_ctor_get(v___x_3845_, 0);
lean_inc_ref(v_mctx_3846_);
lean_dec(v___x_3845_);
v___x_3847_ = l_Lean_instantiateMVarsCore(v_mctx_3846_, v_e_3839_);
v_fst_3848_ = lean_ctor_get(v___x_3847_, 0);
lean_inc(v_fst_3848_);
v_snd_3849_ = lean_ctor_get(v___x_3847_, 1);
lean_inc(v_snd_3849_);
lean_dec_ref(v___x_3847_);
v___x_3850_ = lean_st_ref_take(v___y_3840_);
v_cache_3851_ = lean_ctor_get(v___x_3850_, 1);
v_zetaDeltaFVarIds_3852_ = lean_ctor_get(v___x_3850_, 2);
v_postponed_3853_ = lean_ctor_get(v___x_3850_, 3);
v_diag_3854_ = lean_ctor_get(v___x_3850_, 4);
v_isSharedCheck_3864_ = !lean_is_exclusive(v___x_3850_);
if (v_isSharedCheck_3864_ == 0)
{
lean_object* v_unused_3865_; 
v_unused_3865_ = lean_ctor_get(v___x_3850_, 0);
lean_dec(v_unused_3865_);
v___x_3856_ = v___x_3850_;
v_isShared_3857_ = v_isSharedCheck_3864_;
goto v_resetjp_3855_;
}
else
{
lean_inc(v_diag_3854_);
lean_inc(v_postponed_3853_);
lean_inc(v_zetaDeltaFVarIds_3852_);
lean_inc(v_cache_3851_);
lean_dec(v___x_3850_);
v___x_3856_ = lean_box(0);
v_isShared_3857_ = v_isSharedCheck_3864_;
goto v_resetjp_3855_;
}
v_resetjp_3855_:
{
lean_object* v___x_3859_; 
if (v_isShared_3857_ == 0)
{
lean_ctor_set(v___x_3856_, 0, v_snd_3849_);
v___x_3859_ = v___x_3856_;
goto v_reusejp_3858_;
}
else
{
lean_object* v_reuseFailAlloc_3863_; 
v_reuseFailAlloc_3863_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3863_, 0, v_snd_3849_);
lean_ctor_set(v_reuseFailAlloc_3863_, 1, v_cache_3851_);
lean_ctor_set(v_reuseFailAlloc_3863_, 2, v_zetaDeltaFVarIds_3852_);
lean_ctor_set(v_reuseFailAlloc_3863_, 3, v_postponed_3853_);
lean_ctor_set(v_reuseFailAlloc_3863_, 4, v_diag_3854_);
v___x_3859_ = v_reuseFailAlloc_3863_;
goto v_reusejp_3858_;
}
v_reusejp_3858_:
{
lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; 
v___x_3860_ = lean_st_ref_set(v___y_3840_, v___x_3859_);
v___x_3861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3861_, 0, v_fst_3848_);
v___x_3862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3862_, 0, v___x_3861_);
return v___x_3862_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_runStrategies_spec__0___redArg___boxed(lean_object* v_e_3866_, lean_object* v___y_3867_, lean_object* v___y_3868_){
_start:
{
lean_object* v_res_3869_; 
v_res_3869_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_runStrategies_spec__0___redArg(v_e_3866_, v___y_3867_);
lean_dec(v___y_3867_);
return v_res_3869_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_runStrategies_spec__0(lean_object* v_e_3870_, lean_object* v___y_3871_, lean_object* v___y_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_, lean_object* v___y_3876_, lean_object* v___y_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_){
_start:
{
lean_object* v___x_3884_; 
v___x_3884_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_runStrategies_spec__0___redArg(v_e_3870_, v___y_3880_);
return v___x_3884_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_runStrategies_spec__0___boxed(lean_object* v_e_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_){
_start:
{
lean_object* v_res_3899_; 
v_res_3899_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_runStrategies_spec__0(v_e_3885_, v___y_3886_, v___y_3887_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_, v___y_3896_, v___y_3897_);
lean_dec(v___y_3897_);
lean_dec_ref(v___y_3896_);
lean_dec(v___y_3895_);
lean_dec_ref(v___y_3894_);
lean_dec(v___y_3893_);
lean_dec_ref(v___y_3892_);
lean_dec(v___y_3891_);
lean_dec_ref(v___y_3890_);
lean_dec(v___y_3889_);
lean_dec(v___y_3888_);
lean_dec_ref(v___y_3887_);
lean_dec(v___y_3886_);
return v_res_3899_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_runStrategies(lean_object* v_goal_3900_, lean_object* v_a_3901_, lean_object* v_a_3902_, lean_object* v_a_3903_, lean_object* v_a_3904_, lean_object* v_a_3905_, lean_object* v_a_3906_, lean_object* v_a_3907_, lean_object* v_a_3908_, lean_object* v_a_3909_, lean_object* v_a_3910_, lean_object* v_a_3911_, lean_object* v_a_3912_){
_start:
{
lean_object* v___y_3915_; lean_object* v___y_3919_; lean_object* v___y_3920_; lean_object* v___y_3921_; lean_object* v___y_3922_; lean_object* v___y_3923_; lean_object* v___y_3924_; lean_object* v___y_3925_; lean_object* v___y_3926_; lean_object* v___y_3927_; lean_object* v___y_3928_; lean_object* v___y_3929_; lean_object* v___y_3930_; lean_object* v___y_3931_; lean_object* v___y_3932_; lean_object* v___y_3933_; lean_object* v___y_3934_; lean_object* v___y_3935_; lean_object* v___y_3936_; uint8_t v___y_3937_; lean_object* v_goal_4138_; lean_object* v_target_4139_; lean_object* v___y_4140_; lean_object* v___y_4141_; lean_object* v___y_4142_; lean_object* v___y_4143_; lean_object* v___y_4144_; lean_object* v___y_4145_; lean_object* v___y_4146_; lean_object* v___y_4147_; lean_object* v___y_4148_; lean_object* v___y_4149_; lean_object* v___y_4150_; lean_object* v___y_4151_; lean_object* v___x_4247_; 
lean_inc(v_goal_3900_);
v___x_4247_ = l_Lean_MVarId_getType(v_goal_3900_, v_a_3909_, v_a_3910_, v_a_3911_, v_a_3912_);
if (lean_obj_tag(v___x_4247_) == 0)
{
lean_object* v_a_4248_; uint8_t v___x_4249_; 
v_a_4248_ = lean_ctor_get(v___x_4247_, 0);
lean_inc(v_a_4248_);
lean_dec_ref_known(v___x_4247_, 1);
v___x_4249_ = l_Lean_Expr_hasExprMVar(v_a_4248_);
if (v___x_4249_ == 0)
{
v_goal_4138_ = v_goal_3900_;
v_target_4139_ = v_a_4248_;
v___y_4140_ = v_a_3901_;
v___y_4141_ = v_a_3902_;
v___y_4142_ = v_a_3903_;
v___y_4143_ = v_a_3904_;
v___y_4144_ = v_a_3905_;
v___y_4145_ = v_a_3906_;
v___y_4146_ = v_a_3907_;
v___y_4147_ = v_a_3908_;
v___y_4148_ = v_a_3909_;
v___y_4149_ = v_a_3910_;
v___y_4150_ = v_a_3911_;
v___y_4151_ = v_a_3912_;
goto v___jp_4137_;
}
else
{
lean_object* v___x_4250_; lean_object* v_a_4251_; lean_object* v_a_4252_; lean_object* v___x_4253_; 
v___x_4250_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_runStrategies_spec__0___redArg(v_a_4248_, v_a_3910_);
v_a_4251_ = lean_ctor_get(v___x_4250_, 0);
lean_inc(v_a_4251_);
lean_dec_ref(v___x_4250_);
v_a_4252_ = lean_ctor_get(v_a_4251_, 0);
lean_inc_n(v_a_4252_, 2);
lean_dec(v_a_4251_);
v___x_4253_ = l_Lean_MVarId_replaceTargetDefEq(v_goal_3900_, v_a_4252_, v_a_3909_, v_a_3910_, v_a_3911_, v_a_3912_);
if (lean_obj_tag(v___x_4253_) == 0)
{
lean_object* v_a_4254_; 
v_a_4254_ = lean_ctor_get(v___x_4253_, 0);
lean_inc(v_a_4254_);
lean_dec_ref_known(v___x_4253_, 1);
v_goal_4138_ = v_a_4254_;
v_target_4139_ = v_a_4252_;
v___y_4140_ = v_a_3901_;
v___y_4141_ = v_a_3902_;
v___y_4142_ = v_a_3903_;
v___y_4143_ = v_a_3904_;
v___y_4144_ = v_a_3905_;
v___y_4145_ = v_a_3906_;
v___y_4146_ = v_a_3907_;
v___y_4147_ = v_a_3908_;
v___y_4148_ = v_a_3909_;
v___y_4149_ = v_a_3910_;
v___y_4150_ = v_a_3911_;
v___y_4151_ = v_a_3912_;
goto v___jp_4137_;
}
else
{
lean_object* v_a_4255_; lean_object* v___x_4257_; uint8_t v_isShared_4258_; uint8_t v_isSharedCheck_4262_; 
lean_dec(v_a_4252_);
v_a_4255_ = lean_ctor_get(v___x_4253_, 0);
v_isSharedCheck_4262_ = !lean_is_exclusive(v___x_4253_);
if (v_isSharedCheck_4262_ == 0)
{
v___x_4257_ = v___x_4253_;
v_isShared_4258_ = v_isSharedCheck_4262_;
goto v_resetjp_4256_;
}
else
{
lean_inc(v_a_4255_);
lean_dec(v___x_4253_);
v___x_4257_ = lean_box(0);
v_isShared_4258_ = v_isSharedCheck_4262_;
goto v_resetjp_4256_;
}
v_resetjp_4256_:
{
lean_object* v___x_4260_; 
if (v_isShared_4258_ == 0)
{
v___x_4260_ = v___x_4257_;
goto v_reusejp_4259_;
}
else
{
lean_object* v_reuseFailAlloc_4261_; 
v_reuseFailAlloc_4261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4261_, 0, v_a_4255_);
v___x_4260_ = v_reuseFailAlloc_4261_;
goto v_reusejp_4259_;
}
v_reusejp_4259_:
{
return v___x_4260_;
}
}
}
}
}
else
{
lean_object* v_a_4263_; lean_object* v___x_4265_; uint8_t v_isShared_4266_; uint8_t v_isSharedCheck_4270_; 
lean_dec(v_goal_3900_);
v_a_4263_ = lean_ctor_get(v___x_4247_, 0);
v_isSharedCheck_4270_ = !lean_is_exclusive(v___x_4247_);
if (v_isSharedCheck_4270_ == 0)
{
v___x_4265_ = v___x_4247_;
v_isShared_4266_ = v_isSharedCheck_4270_;
goto v_resetjp_4264_;
}
else
{
lean_inc(v_a_4263_);
lean_dec(v___x_4247_);
v___x_4265_ = lean_box(0);
v_isShared_4266_ = v_isSharedCheck_4270_;
goto v_resetjp_4264_;
}
v_resetjp_4264_:
{
lean_object* v___x_4268_; 
if (v_isShared_4266_ == 0)
{
v___x_4268_ = v___x_4265_;
goto v_reusejp_4267_;
}
else
{
lean_object* v_reuseFailAlloc_4269_; 
v_reuseFailAlloc_4269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4269_, 0, v_a_4263_);
v___x_4268_ = v_reuseFailAlloc_4269_;
goto v_reusejp_4267_;
}
v_reusejp_4267_:
{
return v___x_4268_;
}
}
}
v___jp_3914_:
{
lean_object* v___x_3916_; lean_object* v___x_3917_; 
v___x_3916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3916_, 0, v___y_3915_);
v___x_3917_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_returnSolveResult___redArg(v___x_3916_);
return v___x_3917_;
}
v___jp_3918_:
{
lean_object* v___x_3938_; 
lean_inc(v___y_3923_);
v___x_3938_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryOfPropPreIntro___redArg(v___y_3923_, v___y_3924_, v___y_3936_, v___y_3930_, v___y_3921_, v___y_3920_, v___y_3932_, v___y_3933_, v___y_3931_, v___y_3919_);
if (lean_obj_tag(v___x_3938_) == 0)
{
lean_object* v_a_3939_; lean_object* v___x_3941_; uint8_t v_isShared_3942_; uint8_t v_isSharedCheck_4128_; 
v_a_3939_ = lean_ctor_get(v___x_3938_, 0);
v_isSharedCheck_4128_ = !lean_is_exclusive(v___x_3938_);
if (v_isSharedCheck_4128_ == 0)
{
v___x_3941_ = v___x_3938_;
v_isShared_3942_ = v_isSharedCheck_4128_;
goto v_resetjp_3940_;
}
else
{
lean_inc(v_a_3939_);
lean_dec(v___x_3938_);
v___x_3941_ = lean_box(0);
v_isShared_3942_ = v_isSharedCheck_4128_;
goto v_resetjp_3940_;
}
v_resetjp_3940_:
{
if (lean_obj_tag(v_a_3939_) == 0)
{
lean_object* v_a_3943_; lean_object* v___x_3945_; uint8_t v_isShared_3946_; uint8_t v_isSharedCheck_3953_; 
lean_dec_ref(v___y_3934_);
lean_dec_ref(v___y_3929_);
lean_dec_ref(v___y_3928_);
lean_dec_ref(v___y_3926_);
lean_dec_ref(v___y_3924_);
lean_dec(v___y_3923_);
v_a_3943_ = lean_ctor_get(v_a_3939_, 0);
v_isSharedCheck_3953_ = !lean_is_exclusive(v_a_3939_);
if (v_isSharedCheck_3953_ == 0)
{
v___x_3945_ = v_a_3939_;
v_isShared_3946_ = v_isSharedCheck_3953_;
goto v_resetjp_3944_;
}
else
{
lean_inc(v_a_3943_);
lean_dec(v_a_3939_);
v___x_3945_ = lean_box(0);
v_isShared_3946_ = v_isSharedCheck_3953_;
goto v_resetjp_3944_;
}
v_resetjp_3944_:
{
lean_object* v___x_3948_; 
if (v_isShared_3946_ == 0)
{
v___x_3948_ = v___x_3945_;
goto v_reusejp_3947_;
}
else
{
lean_object* v_reuseFailAlloc_3952_; 
v_reuseFailAlloc_3952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3952_, 0, v_a_3943_);
v___x_3948_ = v_reuseFailAlloc_3952_;
goto v_reusejp_3947_;
}
v_reusejp_3947_:
{
lean_object* v___x_3950_; 
if (v_isShared_3942_ == 0)
{
lean_ctor_set(v___x_3941_, 0, v___x_3948_);
v___x_3950_ = v___x_3941_;
goto v_reusejp_3949_;
}
else
{
lean_object* v_reuseFailAlloc_3951_; 
v_reuseFailAlloc_3951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3951_, 0, v___x_3948_);
v___x_3950_ = v_reuseFailAlloc_3951_;
goto v_reusejp_3949_;
}
v_reusejp_3949_:
{
return v___x_3950_;
}
}
}
}
else
{
lean_object* v___x_3954_; 
lean_dec_ref_known(v_a_3939_, 1);
lean_del_object(v___x_3941_);
lean_inc(v___y_3923_);
v___x_3954_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryStateArgIntro(v___y_3923_, v___y_3926_, v___y_3937_, v___y_3936_, v___y_3930_, v___y_3935_, v___y_3922_, v___y_3927_, v___y_3925_, v___y_3921_, v___y_3920_, v___y_3932_, v___y_3933_, v___y_3931_, v___y_3919_);
if (lean_obj_tag(v___x_3954_) == 0)
{
lean_object* v_a_3955_; lean_object* v___x_3957_; uint8_t v_isShared_3958_; uint8_t v_isSharedCheck_4119_; 
v_a_3955_ = lean_ctor_get(v___x_3954_, 0);
v_isSharedCheck_4119_ = !lean_is_exclusive(v___x_3954_);
if (v_isSharedCheck_4119_ == 0)
{
v___x_3957_ = v___x_3954_;
v_isShared_3958_ = v_isSharedCheck_4119_;
goto v_resetjp_3956_;
}
else
{
lean_inc(v_a_3955_);
lean_dec(v___x_3954_);
v___x_3957_ = lean_box(0);
v_isShared_3958_ = v_isSharedCheck_4119_;
goto v_resetjp_3956_;
}
v_resetjp_3956_:
{
if (lean_obj_tag(v_a_3955_) == 0)
{
lean_object* v_a_3959_; lean_object* v___x_3961_; uint8_t v_isShared_3962_; uint8_t v_isSharedCheck_3969_; 
lean_dec_ref(v___y_3934_);
lean_dec_ref(v___y_3929_);
lean_dec_ref(v___y_3928_);
lean_dec_ref(v___y_3926_);
lean_dec_ref(v___y_3924_);
lean_dec(v___y_3923_);
v_a_3959_ = lean_ctor_get(v_a_3955_, 0);
v_isSharedCheck_3969_ = !lean_is_exclusive(v_a_3955_);
if (v_isSharedCheck_3969_ == 0)
{
v___x_3961_ = v_a_3955_;
v_isShared_3962_ = v_isSharedCheck_3969_;
goto v_resetjp_3960_;
}
else
{
lean_inc(v_a_3959_);
lean_dec(v_a_3955_);
v___x_3961_ = lean_box(0);
v_isShared_3962_ = v_isSharedCheck_3969_;
goto v_resetjp_3960_;
}
v_resetjp_3960_:
{
lean_object* v___x_3964_; 
if (v_isShared_3962_ == 0)
{
v___x_3964_ = v___x_3961_;
goto v_reusejp_3963_;
}
else
{
lean_object* v_reuseFailAlloc_3968_; 
v_reuseFailAlloc_3968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3968_, 0, v_a_3959_);
v___x_3964_ = v_reuseFailAlloc_3968_;
goto v_reusejp_3963_;
}
v_reusejp_3963_:
{
lean_object* v___x_3966_; 
if (v_isShared_3958_ == 0)
{
lean_ctor_set(v___x_3957_, 0, v___x_3964_);
v___x_3966_ = v___x_3957_;
goto v_reusejp_3965_;
}
else
{
lean_object* v_reuseFailAlloc_3967_; 
v_reuseFailAlloc_3967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3967_, 0, v___x_3964_);
v___x_3966_ = v_reuseFailAlloc_3967_;
goto v_reusejp_3965_;
}
v_reusejp_3965_:
{
return v___x_3966_;
}
}
}
}
else
{
lean_object* v___x_3970_; 
lean_dec_ref_known(v_a_3955_, 1);
lean_del_object(v___x_3957_);
lean_inc(v___y_3923_);
v___x_3970_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryPropPreIntro___redArg(v___y_3923_, v___y_3926_, v___y_3937_, v___y_3936_, v___y_3930_, v___y_3921_, v___y_3920_, v___y_3932_, v___y_3933_, v___y_3931_, v___y_3919_);
if (lean_obj_tag(v___x_3970_) == 0)
{
lean_object* v_a_3971_; lean_object* v___x_3973_; uint8_t v_isShared_3974_; uint8_t v_isSharedCheck_4110_; 
v_a_3971_ = lean_ctor_get(v___x_3970_, 0);
v_isSharedCheck_4110_ = !lean_is_exclusive(v___x_3970_);
if (v_isSharedCheck_4110_ == 0)
{
v___x_3973_ = v___x_3970_;
v_isShared_3974_ = v_isSharedCheck_4110_;
goto v_resetjp_3972_;
}
else
{
lean_inc(v_a_3971_);
lean_dec(v___x_3970_);
v___x_3973_ = lean_box(0);
v_isShared_3974_ = v_isSharedCheck_4110_;
goto v_resetjp_3972_;
}
v_resetjp_3972_:
{
if (lean_obj_tag(v_a_3971_) == 0)
{
lean_object* v_a_3975_; lean_object* v___x_3977_; uint8_t v_isShared_3978_; uint8_t v_isSharedCheck_3985_; 
lean_dec_ref(v___y_3934_);
lean_dec_ref(v___y_3929_);
lean_dec_ref(v___y_3928_);
lean_dec_ref(v___y_3926_);
lean_dec_ref(v___y_3924_);
lean_dec(v___y_3923_);
v_a_3975_ = lean_ctor_get(v_a_3971_, 0);
v_isSharedCheck_3985_ = !lean_is_exclusive(v_a_3971_);
if (v_isSharedCheck_3985_ == 0)
{
v___x_3977_ = v_a_3971_;
v_isShared_3978_ = v_isSharedCheck_3985_;
goto v_resetjp_3976_;
}
else
{
lean_inc(v_a_3975_);
lean_dec(v_a_3971_);
v___x_3977_ = lean_box(0);
v_isShared_3978_ = v_isSharedCheck_3985_;
goto v_resetjp_3976_;
}
v_resetjp_3976_:
{
lean_object* v___x_3980_; 
if (v_isShared_3978_ == 0)
{
v___x_3980_ = v___x_3977_;
goto v_reusejp_3979_;
}
else
{
lean_object* v_reuseFailAlloc_3984_; 
v_reuseFailAlloc_3984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3984_, 0, v_a_3975_);
v___x_3980_ = v_reuseFailAlloc_3984_;
goto v_reusejp_3979_;
}
v_reusejp_3979_:
{
lean_object* v___x_3982_; 
if (v_isShared_3974_ == 0)
{
lean_ctor_set(v___x_3973_, 0, v___x_3980_);
v___x_3982_ = v___x_3973_;
goto v_reusejp_3981_;
}
else
{
lean_object* v_reuseFailAlloc_3983_; 
v_reuseFailAlloc_3983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3983_, 0, v___x_3980_);
v___x_3982_ = v_reuseFailAlloc_3983_;
goto v_reusejp_3981_;
}
v_reusejp_3981_:
{
return v___x_3982_;
}
}
}
}
else
{
lean_object* v___x_3986_; 
lean_dec_ref_known(v_a_3971_, 1);
lean_del_object(v___x_3973_);
lean_inc_ref(v___y_3928_);
lean_inc(v___y_3923_);
v___x_3986_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryEPostVC(v___y_3923_, v___y_3934_, v___y_3926_, v___y_3929_, v___y_3924_, v___y_3928_, v___y_3936_, v___y_3930_, v___y_3935_, v___y_3922_, v___y_3927_, v___y_3925_, v___y_3921_, v___y_3920_, v___y_3932_, v___y_3933_, v___y_3931_, v___y_3919_);
if (lean_obj_tag(v___x_3986_) == 0)
{
lean_object* v_a_3987_; lean_object* v___x_3989_; uint8_t v_isShared_3990_; uint8_t v_isSharedCheck_4101_; 
v_a_3987_ = lean_ctor_get(v___x_3986_, 0);
v_isSharedCheck_4101_ = !lean_is_exclusive(v___x_3986_);
if (v_isSharedCheck_4101_ == 0)
{
v___x_3989_ = v___x_3986_;
v_isShared_3990_ = v_isSharedCheck_4101_;
goto v_resetjp_3988_;
}
else
{
lean_inc(v_a_3987_);
lean_dec(v___x_3986_);
v___x_3989_ = lean_box(0);
v_isShared_3990_ = v_isSharedCheck_4101_;
goto v_resetjp_3988_;
}
v_resetjp_3988_:
{
if (lean_obj_tag(v_a_3987_) == 0)
{
lean_object* v_a_3991_; lean_object* v___x_3993_; uint8_t v_isShared_3994_; uint8_t v_isSharedCheck_4001_; 
lean_dec_ref(v___y_3934_);
lean_dec_ref(v___y_3928_);
lean_dec(v___y_3923_);
v_a_3991_ = lean_ctor_get(v_a_3987_, 0);
v_isSharedCheck_4001_ = !lean_is_exclusive(v_a_3987_);
if (v_isSharedCheck_4001_ == 0)
{
v___x_3993_ = v_a_3987_;
v_isShared_3994_ = v_isSharedCheck_4001_;
goto v_resetjp_3992_;
}
else
{
lean_inc(v_a_3991_);
lean_dec(v_a_3987_);
v___x_3993_ = lean_box(0);
v_isShared_3994_ = v_isSharedCheck_4001_;
goto v_resetjp_3992_;
}
v_resetjp_3992_:
{
lean_object* v___x_3996_; 
if (v_isShared_3994_ == 0)
{
v___x_3996_ = v___x_3993_;
goto v_reusejp_3995_;
}
else
{
lean_object* v_reuseFailAlloc_4000_; 
v_reuseFailAlloc_4000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4000_, 0, v_a_3991_);
v___x_3996_ = v_reuseFailAlloc_4000_;
goto v_reusejp_3995_;
}
v_reusejp_3995_:
{
lean_object* v___x_3998_; 
if (v_isShared_3990_ == 0)
{
lean_ctor_set(v___x_3989_, 0, v___x_3996_);
v___x_3998_ = v___x_3989_;
goto v_reusejp_3997_;
}
else
{
lean_object* v_reuseFailAlloc_3999_; 
v_reuseFailAlloc_3999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3999_, 0, v___x_3996_);
v___x_3998_ = v_reuseFailAlloc_3999_;
goto v_reusejp_3997_;
}
v_reusejp_3997_:
{
return v___x_3998_;
}
}
}
}
else
{
lean_object* v___x_4002_; lean_object* v___x_4003_; 
lean_dec_ref_known(v_a_3987_, 1);
lean_del_object(v___x_3989_);
v___x_4002_ = lean_st_ref_get(v___y_3936_);
lean_inc(v___y_3923_);
v___x_4003_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_Scope_collectLocalSpecs(v___x_4002_, v___y_3923_, v___y_3930_, v___y_3935_, v___y_3922_, v___y_3927_, v___y_3925_, v___y_3921_, v___y_3920_, v___y_3932_, v___y_3933_, v___y_3931_, v___y_3919_);
if (lean_obj_tag(v___x_4003_) == 0)
{
lean_object* v_a_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; 
v_a_4004_ = lean_ctor_get(v___x_4003_, 0);
lean_inc(v_a_4004_);
lean_dec_ref_known(v___x_4003_, 1);
v___x_4005_ = lean_st_ref_set(v___y_3936_, v_a_4004_);
lean_inc_ref(v___y_3928_);
lean_inc_ref(v___y_3934_);
lean_inc(v___y_3923_);
v___x_4006_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice(v___y_3923_, v___y_3934_, v___y_3928_, v___y_3937_, v___y_3936_, v___y_3930_, v___y_3935_, v___y_3922_, v___y_3927_, v___y_3925_, v___y_3921_, v___y_3920_, v___y_3932_, v___y_3933_, v___y_3931_, v___y_3919_);
if (lean_obj_tag(v___x_4006_) == 0)
{
lean_object* v_a_4007_; lean_object* v___x_4009_; uint8_t v_isShared_4010_; uint8_t v_isSharedCheck_4084_; 
v_a_4007_ = lean_ctor_get(v___x_4006_, 0);
v_isSharedCheck_4084_ = !lean_is_exclusive(v___x_4006_);
if (v_isSharedCheck_4084_ == 0)
{
v___x_4009_ = v___x_4006_;
v_isShared_4010_ = v_isSharedCheck_4084_;
goto v_resetjp_4008_;
}
else
{
lean_inc(v_a_4007_);
lean_dec(v___x_4006_);
v___x_4009_ = lean_box(0);
v_isShared_4010_ = v_isSharedCheck_4084_;
goto v_resetjp_4008_;
}
v_resetjp_4008_:
{
if (lean_obj_tag(v_a_4007_) == 0)
{
lean_object* v_a_4011_; lean_object* v___x_4013_; uint8_t v_isShared_4014_; uint8_t v_isSharedCheck_4021_; 
lean_dec_ref(v___y_3934_);
lean_dec_ref(v___y_3928_);
lean_dec(v___y_3923_);
v_a_4011_ = lean_ctor_get(v_a_4007_, 0);
v_isSharedCheck_4021_ = !lean_is_exclusive(v_a_4007_);
if (v_isSharedCheck_4021_ == 0)
{
v___x_4013_ = v_a_4007_;
v_isShared_4014_ = v_isSharedCheck_4021_;
goto v_resetjp_4012_;
}
else
{
lean_inc(v_a_4011_);
lean_dec(v_a_4007_);
v___x_4013_ = lean_box(0);
v_isShared_4014_ = v_isSharedCheck_4021_;
goto v_resetjp_4012_;
}
v_resetjp_4012_:
{
lean_object* v___x_4016_; 
if (v_isShared_4014_ == 0)
{
v___x_4016_ = v___x_4013_;
goto v_reusejp_4015_;
}
else
{
lean_object* v_reuseFailAlloc_4020_; 
v_reuseFailAlloc_4020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4020_, 0, v_a_4011_);
v___x_4016_ = v_reuseFailAlloc_4020_;
goto v_reusejp_4015_;
}
v_reusejp_4015_:
{
lean_object* v___x_4018_; 
if (v_isShared_4010_ == 0)
{
lean_ctor_set(v___x_4009_, 0, v___x_4016_);
v___x_4018_ = v___x_4009_;
goto v_reusejp_4017_;
}
else
{
lean_object* v_reuseFailAlloc_4019_; 
v_reuseFailAlloc_4019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4019_, 0, v___x_4016_);
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
else
{
lean_object* v___x_4022_; 
lean_dec_ref_known(v_a_4007_, 1);
lean_del_object(v___x_4009_);
lean_inc_ref(v___y_3928_);
lean_inc_ref(v___y_3934_);
lean_inc(v___y_3923_);
v___x_4022_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryWP(v___y_3923_, v___y_3934_, v___y_3928_, v___y_3936_, v___y_3930_, v___y_3935_, v___y_3922_, v___y_3927_, v___y_3925_, v___y_3921_, v___y_3920_, v___y_3932_, v___y_3933_, v___y_3931_, v___y_3919_);
if (lean_obj_tag(v___x_4022_) == 0)
{
lean_object* v_a_4023_; lean_object* v___x_4025_; uint8_t v_isShared_4026_; uint8_t v_isSharedCheck_4075_; 
v_a_4023_ = lean_ctor_get(v___x_4022_, 0);
v_isSharedCheck_4075_ = !lean_is_exclusive(v___x_4022_);
if (v_isSharedCheck_4075_ == 0)
{
v___x_4025_ = v___x_4022_;
v_isShared_4026_ = v_isSharedCheck_4075_;
goto v_resetjp_4024_;
}
else
{
lean_inc(v_a_4023_);
lean_dec(v___x_4022_);
v___x_4025_ = lean_box(0);
v_isShared_4026_ = v_isSharedCheck_4075_;
goto v_resetjp_4024_;
}
v_resetjp_4024_:
{
if (lean_obj_tag(v_a_4023_) == 0)
{
lean_object* v_a_4027_; lean_object* v___x_4029_; uint8_t v_isShared_4030_; uint8_t v_isSharedCheck_4037_; 
lean_dec_ref(v___y_3934_);
lean_dec_ref(v___y_3928_);
lean_dec(v___y_3923_);
v_a_4027_ = lean_ctor_get(v_a_4023_, 0);
v_isSharedCheck_4037_ = !lean_is_exclusive(v_a_4023_);
if (v_isSharedCheck_4037_ == 0)
{
v___x_4029_ = v_a_4023_;
v_isShared_4030_ = v_isSharedCheck_4037_;
goto v_resetjp_4028_;
}
else
{
lean_inc(v_a_4027_);
lean_dec(v_a_4023_);
v___x_4029_ = lean_box(0);
v_isShared_4030_ = v_isSharedCheck_4037_;
goto v_resetjp_4028_;
}
v_resetjp_4028_:
{
lean_object* v___x_4032_; 
if (v_isShared_4030_ == 0)
{
v___x_4032_ = v___x_4029_;
goto v_reusejp_4031_;
}
else
{
lean_object* v_reuseFailAlloc_4036_; 
v_reuseFailAlloc_4036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4036_, 0, v_a_4027_);
v___x_4032_ = v_reuseFailAlloc_4036_;
goto v_reusejp_4031_;
}
v_reusejp_4031_:
{
lean_object* v___x_4034_; 
if (v_isShared_4026_ == 0)
{
lean_ctor_set(v___x_4025_, 0, v___x_4032_);
v___x_4034_ = v___x_4025_;
goto v_reusejp_4033_;
}
else
{
lean_object* v_reuseFailAlloc_4035_; 
v_reuseFailAlloc_4035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4035_, 0, v___x_4032_);
v___x_4034_ = v_reuseFailAlloc_4035_;
goto v_reusejp_4033_;
}
v_reusejp_4033_:
{
return v___x_4034_;
}
}
}
}
else
{
lean_object* v___x_4038_; 
lean_dec_ref_known(v_a_4023_, 1);
lean_del_object(v___x_4025_);
v___x_4038_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl(v___y_3923_, v___y_3934_, v___y_3936_, v___y_3930_, v___y_3935_, v___y_3922_, v___y_3927_, v___y_3925_, v___y_3921_, v___y_3920_, v___y_3932_, v___y_3933_, v___y_3931_, v___y_3919_);
if (lean_obj_tag(v___x_4038_) == 0)
{
lean_object* v_a_4039_; lean_object* v___x_4041_; uint8_t v_isShared_4042_; uint8_t v_isSharedCheck_4066_; 
v_a_4039_ = lean_ctor_get(v___x_4038_, 0);
v_isSharedCheck_4066_ = !lean_is_exclusive(v___x_4038_);
if (v_isSharedCheck_4066_ == 0)
{
v___x_4041_ = v___x_4038_;
v_isShared_4042_ = v_isSharedCheck_4066_;
goto v_resetjp_4040_;
}
else
{
lean_inc(v_a_4039_);
lean_dec(v___x_4038_);
v___x_4041_ = lean_box(0);
v_isShared_4042_ = v_isSharedCheck_4066_;
goto v_resetjp_4040_;
}
v_resetjp_4040_:
{
if (lean_obj_tag(v_a_4039_) == 0)
{
lean_object* v_a_4043_; lean_object* v___x_4045_; uint8_t v_isShared_4046_; uint8_t v_isSharedCheck_4053_; 
lean_dec_ref(v___y_3928_);
v_a_4043_ = lean_ctor_get(v_a_4039_, 0);
v_isSharedCheck_4053_ = !lean_is_exclusive(v_a_4039_);
if (v_isSharedCheck_4053_ == 0)
{
v___x_4045_ = v_a_4039_;
v_isShared_4046_ = v_isSharedCheck_4053_;
goto v_resetjp_4044_;
}
else
{
lean_inc(v_a_4043_);
lean_dec(v_a_4039_);
v___x_4045_ = lean_box(0);
v_isShared_4046_ = v_isSharedCheck_4053_;
goto v_resetjp_4044_;
}
v_resetjp_4044_:
{
lean_object* v___x_4048_; 
if (v_isShared_4046_ == 0)
{
v___x_4048_ = v___x_4045_;
goto v_reusejp_4047_;
}
else
{
lean_object* v_reuseFailAlloc_4052_; 
v_reuseFailAlloc_4052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4052_, 0, v_a_4043_);
v___x_4048_ = v_reuseFailAlloc_4052_;
goto v_reusejp_4047_;
}
v_reusejp_4047_:
{
lean_object* v___x_4050_; 
if (v_isShared_4042_ == 0)
{
lean_ctor_set(v___x_4041_, 0, v___x_4048_);
v___x_4050_ = v___x_4041_;
goto v_reusejp_4049_;
}
else
{
lean_object* v_reuseFailAlloc_4051_; 
v_reuseFailAlloc_4051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4051_, 0, v___x_4048_);
v___x_4050_ = v_reuseFailAlloc_4051_;
goto v_reusejp_4049_;
}
v_reusejp_4049_:
{
return v___x_4050_;
}
}
}
}
else
{
lean_object* v___x_4055_; uint8_t v_isShared_4056_; uint8_t v_isSharedCheck_4064_; 
v_isSharedCheck_4064_ = !lean_is_exclusive(v_a_4039_);
if (v_isSharedCheck_4064_ == 0)
{
lean_object* v_unused_4065_; 
v_unused_4065_ = lean_ctor_get(v_a_4039_, 0);
lean_dec(v_unused_4065_);
v___x_4055_ = v_a_4039_;
v_isShared_4056_ = v_isSharedCheck_4064_;
goto v_resetjp_4054_;
}
else
{
lean_dec(v_a_4039_);
v___x_4055_ = lean_box(0);
v_isShared_4056_ = v_isSharedCheck_4064_;
goto v_resetjp_4054_;
}
v_resetjp_4054_:
{
lean_object* v___x_4057_; lean_object* v___x_4059_; 
v___x_4057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4057_, 0, v___y_3928_);
if (v_isShared_4056_ == 0)
{
lean_ctor_set(v___x_4055_, 0, v___x_4057_);
v___x_4059_ = v___x_4055_;
goto v_reusejp_4058_;
}
else
{
lean_object* v_reuseFailAlloc_4063_; 
v_reuseFailAlloc_4063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4063_, 0, v___x_4057_);
v___x_4059_ = v_reuseFailAlloc_4063_;
goto v_reusejp_4058_;
}
v_reusejp_4058_:
{
lean_object* v___x_4061_; 
if (v_isShared_4042_ == 0)
{
lean_ctor_set(v___x_4041_, 0, v___x_4059_);
v___x_4061_ = v___x_4041_;
goto v_reusejp_4060_;
}
else
{
lean_object* v_reuseFailAlloc_4062_; 
v_reuseFailAlloc_4062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4062_, 0, v___x_4059_);
v___x_4061_ = v_reuseFailAlloc_4062_;
goto v_reusejp_4060_;
}
v_reusejp_4060_:
{
return v___x_4061_;
}
}
}
}
}
}
else
{
lean_object* v_a_4067_; lean_object* v___x_4069_; uint8_t v_isShared_4070_; uint8_t v_isSharedCheck_4074_; 
lean_dec_ref(v___y_3928_);
v_a_4067_ = lean_ctor_get(v___x_4038_, 0);
v_isSharedCheck_4074_ = !lean_is_exclusive(v___x_4038_);
if (v_isSharedCheck_4074_ == 0)
{
v___x_4069_ = v___x_4038_;
v_isShared_4070_ = v_isSharedCheck_4074_;
goto v_resetjp_4068_;
}
else
{
lean_inc(v_a_4067_);
lean_dec(v___x_4038_);
v___x_4069_ = lean_box(0);
v_isShared_4070_ = v_isSharedCheck_4074_;
goto v_resetjp_4068_;
}
v_resetjp_4068_:
{
lean_object* v___x_4072_; 
if (v_isShared_4070_ == 0)
{
v___x_4072_ = v___x_4069_;
goto v_reusejp_4071_;
}
else
{
lean_object* v_reuseFailAlloc_4073_; 
v_reuseFailAlloc_4073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4073_, 0, v_a_4067_);
v___x_4072_ = v_reuseFailAlloc_4073_;
goto v_reusejp_4071_;
}
v_reusejp_4071_:
{
return v___x_4072_;
}
}
}
}
}
}
else
{
lean_object* v_a_4076_; lean_object* v___x_4078_; uint8_t v_isShared_4079_; uint8_t v_isSharedCheck_4083_; 
lean_dec_ref(v___y_3934_);
lean_dec_ref(v___y_3928_);
lean_dec(v___y_3923_);
v_a_4076_ = lean_ctor_get(v___x_4022_, 0);
v_isSharedCheck_4083_ = !lean_is_exclusive(v___x_4022_);
if (v_isSharedCheck_4083_ == 0)
{
v___x_4078_ = v___x_4022_;
v_isShared_4079_ = v_isSharedCheck_4083_;
goto v_resetjp_4077_;
}
else
{
lean_inc(v_a_4076_);
lean_dec(v___x_4022_);
v___x_4078_ = lean_box(0);
v_isShared_4079_ = v_isSharedCheck_4083_;
goto v_resetjp_4077_;
}
v_resetjp_4077_:
{
lean_object* v___x_4081_; 
if (v_isShared_4079_ == 0)
{
v___x_4081_ = v___x_4078_;
goto v_reusejp_4080_;
}
else
{
lean_object* v_reuseFailAlloc_4082_; 
v_reuseFailAlloc_4082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4082_, 0, v_a_4076_);
v___x_4081_ = v_reuseFailAlloc_4082_;
goto v_reusejp_4080_;
}
v_reusejp_4080_:
{
return v___x_4081_;
}
}
}
}
}
}
else
{
lean_object* v_a_4085_; lean_object* v___x_4087_; uint8_t v_isShared_4088_; uint8_t v_isSharedCheck_4092_; 
lean_dec_ref(v___y_3934_);
lean_dec_ref(v___y_3928_);
lean_dec(v___y_3923_);
v_a_4085_ = lean_ctor_get(v___x_4006_, 0);
v_isSharedCheck_4092_ = !lean_is_exclusive(v___x_4006_);
if (v_isSharedCheck_4092_ == 0)
{
v___x_4087_ = v___x_4006_;
v_isShared_4088_ = v_isSharedCheck_4092_;
goto v_resetjp_4086_;
}
else
{
lean_inc(v_a_4085_);
lean_dec(v___x_4006_);
v___x_4087_ = lean_box(0);
v_isShared_4088_ = v_isSharedCheck_4092_;
goto v_resetjp_4086_;
}
v_resetjp_4086_:
{
lean_object* v___x_4090_; 
if (v_isShared_4088_ == 0)
{
v___x_4090_ = v___x_4087_;
goto v_reusejp_4089_;
}
else
{
lean_object* v_reuseFailAlloc_4091_; 
v_reuseFailAlloc_4091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4091_, 0, v_a_4085_);
v___x_4090_ = v_reuseFailAlloc_4091_;
goto v_reusejp_4089_;
}
v_reusejp_4089_:
{
return v___x_4090_;
}
}
}
}
else
{
lean_object* v_a_4093_; lean_object* v___x_4095_; uint8_t v_isShared_4096_; uint8_t v_isSharedCheck_4100_; 
lean_dec_ref(v___y_3934_);
lean_dec_ref(v___y_3928_);
lean_dec(v___y_3923_);
v_a_4093_ = lean_ctor_get(v___x_4003_, 0);
v_isSharedCheck_4100_ = !lean_is_exclusive(v___x_4003_);
if (v_isSharedCheck_4100_ == 0)
{
v___x_4095_ = v___x_4003_;
v_isShared_4096_ = v_isSharedCheck_4100_;
goto v_resetjp_4094_;
}
else
{
lean_inc(v_a_4093_);
lean_dec(v___x_4003_);
v___x_4095_ = lean_box(0);
v_isShared_4096_ = v_isSharedCheck_4100_;
goto v_resetjp_4094_;
}
v_resetjp_4094_:
{
lean_object* v___x_4098_; 
if (v_isShared_4096_ == 0)
{
v___x_4098_ = v___x_4095_;
goto v_reusejp_4097_;
}
else
{
lean_object* v_reuseFailAlloc_4099_; 
v_reuseFailAlloc_4099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4099_, 0, v_a_4093_);
v___x_4098_ = v_reuseFailAlloc_4099_;
goto v_reusejp_4097_;
}
v_reusejp_4097_:
{
return v___x_4098_;
}
}
}
}
}
}
else
{
lean_object* v_a_4102_; lean_object* v___x_4104_; uint8_t v_isShared_4105_; uint8_t v_isSharedCheck_4109_; 
lean_dec_ref(v___y_3934_);
lean_dec_ref(v___y_3928_);
lean_dec(v___y_3923_);
v_a_4102_ = lean_ctor_get(v___x_3986_, 0);
v_isSharedCheck_4109_ = !lean_is_exclusive(v___x_3986_);
if (v_isSharedCheck_4109_ == 0)
{
v___x_4104_ = v___x_3986_;
v_isShared_4105_ = v_isSharedCheck_4109_;
goto v_resetjp_4103_;
}
else
{
lean_inc(v_a_4102_);
lean_dec(v___x_3986_);
v___x_4104_ = lean_box(0);
v_isShared_4105_ = v_isSharedCheck_4109_;
goto v_resetjp_4103_;
}
v_resetjp_4103_:
{
lean_object* v___x_4107_; 
if (v_isShared_4105_ == 0)
{
v___x_4107_ = v___x_4104_;
goto v_reusejp_4106_;
}
else
{
lean_object* v_reuseFailAlloc_4108_; 
v_reuseFailAlloc_4108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4108_, 0, v_a_4102_);
v___x_4107_ = v_reuseFailAlloc_4108_;
goto v_reusejp_4106_;
}
v_reusejp_4106_:
{
return v___x_4107_;
}
}
}
}
}
}
else
{
lean_object* v_a_4111_; lean_object* v___x_4113_; uint8_t v_isShared_4114_; uint8_t v_isSharedCheck_4118_; 
lean_dec_ref(v___y_3934_);
lean_dec_ref(v___y_3929_);
lean_dec_ref(v___y_3928_);
lean_dec_ref(v___y_3926_);
lean_dec_ref(v___y_3924_);
lean_dec(v___y_3923_);
v_a_4111_ = lean_ctor_get(v___x_3970_, 0);
v_isSharedCheck_4118_ = !lean_is_exclusive(v___x_3970_);
if (v_isSharedCheck_4118_ == 0)
{
v___x_4113_ = v___x_3970_;
v_isShared_4114_ = v_isSharedCheck_4118_;
goto v_resetjp_4112_;
}
else
{
lean_inc(v_a_4111_);
lean_dec(v___x_3970_);
v___x_4113_ = lean_box(0);
v_isShared_4114_ = v_isSharedCheck_4118_;
goto v_resetjp_4112_;
}
v_resetjp_4112_:
{
lean_object* v___x_4116_; 
if (v_isShared_4114_ == 0)
{
v___x_4116_ = v___x_4113_;
goto v_reusejp_4115_;
}
else
{
lean_object* v_reuseFailAlloc_4117_; 
v_reuseFailAlloc_4117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4117_, 0, v_a_4111_);
v___x_4116_ = v_reuseFailAlloc_4117_;
goto v_reusejp_4115_;
}
v_reusejp_4115_:
{
return v___x_4116_;
}
}
}
}
}
}
else
{
lean_object* v_a_4120_; lean_object* v___x_4122_; uint8_t v_isShared_4123_; uint8_t v_isSharedCheck_4127_; 
lean_dec_ref(v___y_3934_);
lean_dec_ref(v___y_3929_);
lean_dec_ref(v___y_3928_);
lean_dec_ref(v___y_3926_);
lean_dec_ref(v___y_3924_);
lean_dec(v___y_3923_);
v_a_4120_ = lean_ctor_get(v___x_3954_, 0);
v_isSharedCheck_4127_ = !lean_is_exclusive(v___x_3954_);
if (v_isSharedCheck_4127_ == 0)
{
v___x_4122_ = v___x_3954_;
v_isShared_4123_ = v_isSharedCheck_4127_;
goto v_resetjp_4121_;
}
else
{
lean_inc(v_a_4120_);
lean_dec(v___x_3954_);
v___x_4122_ = lean_box(0);
v_isShared_4123_ = v_isSharedCheck_4127_;
goto v_resetjp_4121_;
}
v_resetjp_4121_:
{
lean_object* v___x_4125_; 
if (v_isShared_4123_ == 0)
{
v___x_4125_ = v___x_4122_;
goto v_reusejp_4124_;
}
else
{
lean_object* v_reuseFailAlloc_4126_; 
v_reuseFailAlloc_4126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4126_, 0, v_a_4120_);
v___x_4125_ = v_reuseFailAlloc_4126_;
goto v_reusejp_4124_;
}
v_reusejp_4124_:
{
return v___x_4125_;
}
}
}
}
}
}
else
{
lean_object* v_a_4129_; lean_object* v___x_4131_; uint8_t v_isShared_4132_; uint8_t v_isSharedCheck_4136_; 
lean_dec_ref(v___y_3934_);
lean_dec_ref(v___y_3929_);
lean_dec_ref(v___y_3928_);
lean_dec_ref(v___y_3926_);
lean_dec_ref(v___y_3924_);
lean_dec(v___y_3923_);
v_a_4129_ = lean_ctor_get(v___x_3938_, 0);
v_isSharedCheck_4136_ = !lean_is_exclusive(v___x_3938_);
if (v_isSharedCheck_4136_ == 0)
{
v___x_4131_ = v___x_3938_;
v_isShared_4132_ = v_isSharedCheck_4136_;
goto v_resetjp_4130_;
}
else
{
lean_inc(v_a_4129_);
lean_dec(v___x_3938_);
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
v___jp_4137_:
{
lean_object* v___x_4152_; 
lean_inc(v_goal_4138_);
v___x_4152_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryForallIntro(v_goal_4138_, v_target_4139_, v___y_4140_, v___y_4141_, v___y_4142_, v___y_4143_, v___y_4144_, v___y_4145_, v___y_4146_, v___y_4147_, v___y_4148_, v___y_4149_, v___y_4150_, v___y_4151_);
if (lean_obj_tag(v___x_4152_) == 0)
{
lean_object* v_a_4153_; lean_object* v___x_4155_; uint8_t v_isShared_4156_; uint8_t v_isSharedCheck_4238_; 
v_a_4153_ = lean_ctor_get(v___x_4152_, 0);
v_isSharedCheck_4238_ = !lean_is_exclusive(v___x_4152_);
if (v_isSharedCheck_4238_ == 0)
{
v___x_4155_ = v___x_4152_;
v_isShared_4156_ = v_isSharedCheck_4238_;
goto v_resetjp_4154_;
}
else
{
lean_inc(v_a_4153_);
lean_dec(v___x_4152_);
v___x_4155_ = lean_box(0);
v_isShared_4156_ = v_isSharedCheck_4238_;
goto v_resetjp_4154_;
}
v_resetjp_4154_:
{
if (lean_obj_tag(v_a_4153_) == 0)
{
lean_object* v_a_4157_; lean_object* v___x_4159_; uint8_t v_isShared_4160_; uint8_t v_isSharedCheck_4167_; 
lean_dec_ref(v_target_4139_);
lean_dec(v_goal_4138_);
v_a_4157_ = lean_ctor_get(v_a_4153_, 0);
v_isSharedCheck_4167_ = !lean_is_exclusive(v_a_4153_);
if (v_isSharedCheck_4167_ == 0)
{
v___x_4159_ = v_a_4153_;
v_isShared_4160_ = v_isSharedCheck_4167_;
goto v_resetjp_4158_;
}
else
{
lean_inc(v_a_4157_);
lean_dec(v_a_4153_);
v___x_4159_ = lean_box(0);
v_isShared_4160_ = v_isSharedCheck_4167_;
goto v_resetjp_4158_;
}
v_resetjp_4158_:
{
lean_object* v___x_4162_; 
if (v_isShared_4160_ == 0)
{
v___x_4162_ = v___x_4159_;
goto v_reusejp_4161_;
}
else
{
lean_object* v_reuseFailAlloc_4166_; 
v_reuseFailAlloc_4166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4166_, 0, v_a_4157_);
v___x_4162_ = v_reuseFailAlloc_4166_;
goto v_reusejp_4161_;
}
v_reusejp_4161_:
{
lean_object* v___x_4164_; 
if (v_isShared_4156_ == 0)
{
lean_ctor_set(v___x_4155_, 0, v___x_4162_);
v___x_4164_ = v___x_4155_;
goto v_reusejp_4163_;
}
else
{
lean_object* v_reuseFailAlloc_4165_; 
v_reuseFailAlloc_4165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4165_, 0, v___x_4162_);
v___x_4164_ = v_reuseFailAlloc_4165_;
goto v_reusejp_4163_;
}
v_reusejp_4163_:
{
return v___x_4164_;
}
}
}
}
else
{
lean_object* v___x_4168_; 
lean_dec_ref_known(v_a_4153_, 1);
lean_del_object(v___x_4155_);
lean_inc_ref(v_target_4139_);
lean_inc(v_goal_4138_);
v___x_4168_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTargetLetIntro___redArg(v_goal_4138_, v_target_4139_, v___y_4140_, v___y_4146_, v___y_4147_, v___y_4148_, v___y_4149_, v___y_4150_, v___y_4151_);
if (lean_obj_tag(v___x_4168_) == 0)
{
lean_object* v_a_4169_; lean_object* v___x_4171_; uint8_t v_isShared_4172_; uint8_t v_isSharedCheck_4229_; 
v_a_4169_ = lean_ctor_get(v___x_4168_, 0);
v_isSharedCheck_4229_ = !lean_is_exclusive(v___x_4168_);
if (v_isSharedCheck_4229_ == 0)
{
v___x_4171_ = v___x_4168_;
v_isShared_4172_ = v_isSharedCheck_4229_;
goto v_resetjp_4170_;
}
else
{
lean_inc(v_a_4169_);
lean_dec(v___x_4168_);
v___x_4171_ = lean_box(0);
v_isShared_4172_ = v_isSharedCheck_4229_;
goto v_resetjp_4170_;
}
v_resetjp_4170_:
{
if (lean_obj_tag(v_a_4169_) == 0)
{
lean_object* v_a_4173_; lean_object* v___x_4175_; uint8_t v_isShared_4176_; uint8_t v_isSharedCheck_4183_; 
lean_dec_ref(v_target_4139_);
lean_dec(v_goal_4138_);
v_a_4173_ = lean_ctor_get(v_a_4169_, 0);
v_isSharedCheck_4183_ = !lean_is_exclusive(v_a_4169_);
if (v_isSharedCheck_4183_ == 0)
{
v___x_4175_ = v_a_4169_;
v_isShared_4176_ = v_isSharedCheck_4183_;
goto v_resetjp_4174_;
}
else
{
lean_inc(v_a_4173_);
lean_dec(v_a_4169_);
v___x_4175_ = lean_box(0);
v_isShared_4176_ = v_isSharedCheck_4183_;
goto v_resetjp_4174_;
}
v_resetjp_4174_:
{
lean_object* v___x_4178_; 
if (v_isShared_4176_ == 0)
{
v___x_4178_ = v___x_4175_;
goto v_reusejp_4177_;
}
else
{
lean_object* v_reuseFailAlloc_4182_; 
v_reuseFailAlloc_4182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4182_, 0, v_a_4173_);
v___x_4178_ = v_reuseFailAlloc_4182_;
goto v_reusejp_4177_;
}
v_reusejp_4177_:
{
lean_object* v___x_4180_; 
if (v_isShared_4172_ == 0)
{
lean_ctor_set(v___x_4171_, 0, v___x_4178_);
v___x_4180_ = v___x_4171_;
goto v_reusejp_4179_;
}
else
{
lean_object* v_reuseFailAlloc_4181_; 
v_reuseFailAlloc_4181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4181_, 0, v___x_4178_);
v___x_4180_ = v_reuseFailAlloc_4181_;
goto v_reusejp_4179_;
}
v_reusejp_4179_:
{
return v___x_4180_;
}
}
}
}
else
{
lean_object* v___x_4184_; 
lean_dec_ref_known(v_a_4169_, 1);
lean_del_object(v___x_4171_);
lean_inc(v_goal_4138_);
v___x_4184_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryTripleUnfold(v_goal_4138_, v_target_4139_, v___y_4140_, v___y_4141_, v___y_4142_, v___y_4143_, v___y_4144_, v___y_4145_, v___y_4146_, v___y_4147_, v___y_4148_, v___y_4149_, v___y_4150_, v___y_4151_);
if (lean_obj_tag(v___x_4184_) == 0)
{
lean_object* v_a_4185_; lean_object* v___x_4187_; uint8_t v_isShared_4188_; uint8_t v_isSharedCheck_4220_; 
v_a_4185_ = lean_ctor_get(v___x_4184_, 0);
v_isSharedCheck_4220_ = !lean_is_exclusive(v___x_4184_);
if (v_isSharedCheck_4220_ == 0)
{
v___x_4187_ = v___x_4184_;
v_isShared_4188_ = v_isSharedCheck_4220_;
goto v_resetjp_4186_;
}
else
{
lean_inc(v_a_4185_);
lean_dec(v___x_4184_);
v___x_4187_ = lean_box(0);
v_isShared_4188_ = v_isSharedCheck_4220_;
goto v_resetjp_4186_;
}
v_resetjp_4186_:
{
if (lean_obj_tag(v_a_4185_) == 0)
{
lean_object* v_a_4189_; lean_object* v___x_4191_; uint8_t v_isShared_4192_; uint8_t v_isSharedCheck_4199_; 
lean_dec_ref(v_target_4139_);
lean_dec(v_goal_4138_);
v_a_4189_ = lean_ctor_get(v_a_4185_, 0);
v_isSharedCheck_4199_ = !lean_is_exclusive(v_a_4185_);
if (v_isSharedCheck_4199_ == 0)
{
v___x_4191_ = v_a_4185_;
v_isShared_4192_ = v_isSharedCheck_4199_;
goto v_resetjp_4190_;
}
else
{
lean_inc(v_a_4189_);
lean_dec(v_a_4185_);
v___x_4191_ = lean_box(0);
v_isShared_4192_ = v_isSharedCheck_4199_;
goto v_resetjp_4190_;
}
v_resetjp_4190_:
{
lean_object* v___x_4194_; 
if (v_isShared_4192_ == 0)
{
v___x_4194_ = v___x_4191_;
goto v_reusejp_4193_;
}
else
{
lean_object* v_reuseFailAlloc_4198_; 
v_reuseFailAlloc_4198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4198_, 0, v_a_4189_);
v___x_4194_ = v_reuseFailAlloc_4198_;
goto v_reusejp_4193_;
}
v_reusejp_4193_:
{
lean_object* v___x_4196_; 
if (v_isShared_4188_ == 0)
{
lean_ctor_set(v___x_4187_, 0, v___x_4194_);
v___x_4196_ = v___x_4187_;
goto v_reusejp_4195_;
}
else
{
lean_object* v_reuseFailAlloc_4197_; 
v_reuseFailAlloc_4197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4197_, 0, v___x_4194_);
v___x_4196_ = v_reuseFailAlloc_4197_;
goto v_reusejp_4195_;
}
v_reusejp_4195_:
{
return v___x_4196_;
}
}
}
}
else
{
lean_object* v___x_4200_; uint8_t v___x_4201_; 
lean_dec_ref_known(v_a_4185_, 1);
lean_del_object(v___x_4187_);
lean_inc_ref(v_target_4139_);
v___x_4200_ = l_Lean_Expr_cleanupAnnotations(v_target_4139_);
v___x_4201_ = l_Lean_Expr_isApp(v___x_4200_);
if (v___x_4201_ == 0)
{
lean_dec_ref(v___x_4200_);
lean_dec(v_goal_4138_);
v___y_3915_ = v_target_4139_;
goto v___jp_3914_;
}
else
{
lean_object* v_arg_4202_; lean_object* v___x_4203_; uint8_t v___x_4204_; 
v_arg_4202_ = lean_ctor_get(v___x_4200_, 1);
lean_inc_ref(v_arg_4202_);
v___x_4203_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4200_);
v___x_4204_ = l_Lean_Expr_isApp(v___x_4203_);
if (v___x_4204_ == 0)
{
lean_dec_ref(v___x_4203_);
lean_dec_ref(v_arg_4202_);
lean_dec(v_goal_4138_);
v___y_3915_ = v_target_4139_;
goto v___jp_3914_;
}
else
{
lean_object* v_arg_4205_; lean_object* v___x_4206_; uint8_t v___x_4207_; 
v_arg_4205_ = lean_ctor_get(v___x_4203_, 1);
lean_inc_ref(v_arg_4205_);
v___x_4206_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4203_);
v___x_4207_ = l_Lean_Expr_isApp(v___x_4206_);
if (v___x_4207_ == 0)
{
lean_dec_ref(v___x_4206_);
lean_dec_ref(v_arg_4205_);
lean_dec_ref(v_arg_4202_);
lean_dec(v_goal_4138_);
v___y_3915_ = v_target_4139_;
goto v___jp_3914_;
}
else
{
lean_object* v_arg_4208_; lean_object* v___x_4209_; uint8_t v___x_4210_; 
v_arg_4208_ = lean_ctor_get(v___x_4206_, 1);
lean_inc_ref(v_arg_4208_);
v___x_4209_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4206_);
v___x_4210_ = l_Lean_Expr_isApp(v___x_4209_);
if (v___x_4210_ == 0)
{
lean_dec_ref(v___x_4209_);
lean_dec_ref(v_arg_4208_);
lean_dec_ref(v_arg_4205_);
lean_dec_ref(v_arg_4202_);
lean_dec(v_goal_4138_);
v___y_3915_ = v_target_4139_;
goto v___jp_3914_;
}
else
{
lean_object* v_arg_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; uint8_t v___x_4214_; 
v_arg_4211_ = lean_ctor_get(v___x_4209_, 1);
lean_inc_ref(v_arg_4211_);
v___x_4212_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4209_);
v___x_4213_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryRfl___closed__2));
v___x_4214_ = l_Lean_Expr_isConstOf(v___x_4212_, v___x_4213_);
lean_dec_ref(v___x_4212_);
if (v___x_4214_ == 0)
{
lean_dec_ref(v_arg_4211_);
lean_dec_ref(v_arg_4208_);
lean_dec_ref(v_arg_4205_);
lean_dec_ref(v_arg_4202_);
lean_dec(v_goal_4138_);
v___y_3915_ = v_target_4139_;
goto v___jp_3914_;
}
else
{
lean_object* v___x_4215_; uint8_t v___x_4216_; 
v___x_4215_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_tryLattice_spec__0___closed__1));
v___x_4216_ = l_Lean_Expr_isAppOf(v_arg_4205_, v___x_4215_);
if (v___x_4216_ == 0)
{
v___y_3919_ = v___y_4151_;
v___y_3920_ = v___y_4147_;
v___y_3921_ = v___y_4146_;
v___y_3922_ = v___y_4143_;
v___y_3923_ = v_goal_4138_;
v___y_3924_ = v_arg_4205_;
v___y_3925_ = v___y_4145_;
v___y_3926_ = v_arg_4211_;
v___y_3927_ = v___y_4144_;
v___y_3928_ = v_arg_4202_;
v___y_3929_ = v_arg_4208_;
v___y_3930_ = v___y_4141_;
v___y_3931_ = v___y_4150_;
v___y_3932_ = v___y_4148_;
v___y_3933_ = v___y_4149_;
v___y_3934_ = v_target_4139_;
v___y_3935_ = v___y_4142_;
v___y_3936_ = v___y_4140_;
v___y_3937_ = v___x_4216_;
goto v___jp_3918_;
}
else
{
lean_object* v___x_4217_; lean_object* v___x_4218_; uint8_t v___x_4219_; 
v___x_4217_ = l_Lean_Expr_getAppNumArgs(v_arg_4205_);
v___x_4218_ = lean_unsigned_to_nat(2u);
v___x_4219_ = lean_nat_dec_eq(v___x_4217_, v___x_4218_);
lean_dec(v___x_4217_);
v___y_3919_ = v___y_4151_;
v___y_3920_ = v___y_4147_;
v___y_3921_ = v___y_4146_;
v___y_3922_ = v___y_4143_;
v___y_3923_ = v_goal_4138_;
v___y_3924_ = v_arg_4205_;
v___y_3925_ = v___y_4145_;
v___y_3926_ = v_arg_4211_;
v___y_3927_ = v___y_4144_;
v___y_3928_ = v_arg_4202_;
v___y_3929_ = v_arg_4208_;
v___y_3930_ = v___y_4141_;
v___y_3931_ = v___y_4150_;
v___y_3932_ = v___y_4148_;
v___y_3933_ = v___y_4149_;
v___y_3934_ = v_target_4139_;
v___y_3935_ = v___y_4142_;
v___y_3936_ = v___y_4140_;
v___y_3937_ = v___x_4219_;
goto v___jp_3918_;
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
lean_object* v_a_4221_; lean_object* v___x_4223_; uint8_t v_isShared_4224_; uint8_t v_isSharedCheck_4228_; 
lean_dec_ref(v_target_4139_);
lean_dec(v_goal_4138_);
v_a_4221_ = lean_ctor_get(v___x_4184_, 0);
v_isSharedCheck_4228_ = !lean_is_exclusive(v___x_4184_);
if (v_isSharedCheck_4228_ == 0)
{
v___x_4223_ = v___x_4184_;
v_isShared_4224_ = v_isSharedCheck_4228_;
goto v_resetjp_4222_;
}
else
{
lean_inc(v_a_4221_);
lean_dec(v___x_4184_);
v___x_4223_ = lean_box(0);
v_isShared_4224_ = v_isSharedCheck_4228_;
goto v_resetjp_4222_;
}
v_resetjp_4222_:
{
lean_object* v___x_4226_; 
if (v_isShared_4224_ == 0)
{
v___x_4226_ = v___x_4223_;
goto v_reusejp_4225_;
}
else
{
lean_object* v_reuseFailAlloc_4227_; 
v_reuseFailAlloc_4227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4227_, 0, v_a_4221_);
v___x_4226_ = v_reuseFailAlloc_4227_;
goto v_reusejp_4225_;
}
v_reusejp_4225_:
{
return v___x_4226_;
}
}
}
}
}
}
else
{
lean_object* v_a_4230_; lean_object* v___x_4232_; uint8_t v_isShared_4233_; uint8_t v_isSharedCheck_4237_; 
lean_dec_ref(v_target_4139_);
lean_dec(v_goal_4138_);
v_a_4230_ = lean_ctor_get(v___x_4168_, 0);
v_isSharedCheck_4237_ = !lean_is_exclusive(v___x_4168_);
if (v_isSharedCheck_4237_ == 0)
{
v___x_4232_ = v___x_4168_;
v_isShared_4233_ = v_isSharedCheck_4237_;
goto v_resetjp_4231_;
}
else
{
lean_inc(v_a_4230_);
lean_dec(v___x_4168_);
v___x_4232_ = lean_box(0);
v_isShared_4233_ = v_isSharedCheck_4237_;
goto v_resetjp_4231_;
}
v_resetjp_4231_:
{
lean_object* v___x_4235_; 
if (v_isShared_4233_ == 0)
{
v___x_4235_ = v___x_4232_;
goto v_reusejp_4234_;
}
else
{
lean_object* v_reuseFailAlloc_4236_; 
v_reuseFailAlloc_4236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4236_, 0, v_a_4230_);
v___x_4235_ = v_reuseFailAlloc_4236_;
goto v_reusejp_4234_;
}
v_reusejp_4234_:
{
return v___x_4235_;
}
}
}
}
}
}
else
{
lean_object* v_a_4239_; lean_object* v___x_4241_; uint8_t v_isShared_4242_; uint8_t v_isSharedCheck_4246_; 
lean_dec_ref(v_target_4139_);
lean_dec(v_goal_4138_);
v_a_4239_ = lean_ctor_get(v___x_4152_, 0);
v_isSharedCheck_4246_ = !lean_is_exclusive(v___x_4152_);
if (v_isSharedCheck_4246_ == 0)
{
v___x_4241_ = v___x_4152_;
v_isShared_4242_ = v_isSharedCheck_4246_;
goto v_resetjp_4240_;
}
else
{
lean_inc(v_a_4239_);
lean_dec(v___x_4152_);
v___x_4241_ = lean_box(0);
v_isShared_4242_ = v_isSharedCheck_4246_;
goto v_resetjp_4240_;
}
v_resetjp_4240_:
{
lean_object* v___x_4244_; 
if (v_isShared_4242_ == 0)
{
v___x_4244_ = v___x_4241_;
goto v_reusejp_4243_;
}
else
{
lean_object* v_reuseFailAlloc_4245_; 
v_reuseFailAlloc_4245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4245_, 0, v_a_4239_);
v___x_4244_ = v_reuseFailAlloc_4245_;
goto v_reusejp_4243_;
}
v_reusejp_4243_:
{
return v___x_4244_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_runStrategies___boxed(lean_object* v_goal_4271_, lean_object* v_a_4272_, lean_object* v_a_4273_, lean_object* v_a_4274_, lean_object* v_a_4275_, lean_object* v_a_4276_, lean_object* v_a_4277_, lean_object* v_a_4278_, lean_object* v_a_4279_, lean_object* v_a_4280_, lean_object* v_a_4281_, lean_object* v_a_4282_, lean_object* v_a_4283_, lean_object* v_a_4284_){
_start:
{
lean_object* v_res_4285_; 
v_res_4285_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_runStrategies(v_goal_4271_, v_a_4272_, v_a_4273_, v_a_4274_, v_a_4275_, v_a_4276_, v_a_4277_, v_a_4278_, v_a_4279_, v_a_4280_, v_a_4281_, v_a_4282_, v_a_4283_);
lean_dec(v_a_4283_);
lean_dec_ref(v_a_4282_);
lean_dec(v_a_4281_);
lean_dec_ref(v_a_4280_);
lean_dec(v_a_4279_);
lean_dec_ref(v_a_4278_);
lean_dec(v_a_4277_);
lean_dec_ref(v_a_4276_);
lean_dec(v_a_4275_);
lean_dec(v_a_4274_);
lean_dec_ref(v_a_4273_);
lean_dec(v_a_4272_);
return v_res_4285_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve_spec__0___redArg___lam__0(lean_object* v_x_4286_, lean_object* v___y_4287_, lean_object* v___y_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_, lean_object* v___y_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_){
_start:
{
lean_object* v___x_4299_; 
lean_inc(v___y_4293_);
lean_inc_ref(v___y_4292_);
lean_inc(v___y_4291_);
lean_inc_ref(v___y_4290_);
lean_inc(v___y_4289_);
lean_inc(v___y_4288_);
lean_inc_ref(v___y_4287_);
v___x_4299_ = lean_apply_12(v_x_4286_, v___y_4287_, v___y_4288_, v___y_4289_, v___y_4290_, v___y_4291_, v___y_4292_, v___y_4293_, v___y_4294_, v___y_4295_, v___y_4296_, v___y_4297_, lean_box(0));
return v___x_4299_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve_spec__0___redArg___lam__0___boxed(lean_object* v_x_4300_, lean_object* v___y_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_, lean_object* v___y_4308_, lean_object* v___y_4309_, lean_object* v___y_4310_, lean_object* v___y_4311_, lean_object* v___y_4312_){
_start:
{
lean_object* v_res_4313_; 
v_res_4313_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve_spec__0___redArg___lam__0(v_x_4300_, v___y_4301_, v___y_4302_, v___y_4303_, v___y_4304_, v___y_4305_, v___y_4306_, v___y_4307_, v___y_4308_, v___y_4309_, v___y_4310_, v___y_4311_);
lean_dec(v___y_4307_);
lean_dec_ref(v___y_4306_);
lean_dec(v___y_4305_);
lean_dec_ref(v___y_4304_);
lean_dec(v___y_4303_);
lean_dec(v___y_4302_);
lean_dec_ref(v___y_4301_);
return v_res_4313_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve_spec__0___redArg(lean_object* v_mvarId_4314_, lean_object* v_x_4315_, lean_object* v___y_4316_, lean_object* v___y_4317_, lean_object* v___y_4318_, lean_object* v___y_4319_, lean_object* v___y_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_, lean_object* v___y_4326_){
_start:
{
lean_object* v___f_4328_; lean_object* v___x_4329_; 
lean_inc(v___y_4322_);
lean_inc_ref(v___y_4321_);
lean_inc(v___y_4320_);
lean_inc_ref(v___y_4319_);
lean_inc(v___y_4318_);
lean_inc(v___y_4317_);
lean_inc_ref(v___y_4316_);
v___f_4328_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve_spec__0___redArg___lam__0___boxed), 13, 8);
lean_closure_set(v___f_4328_, 0, v_x_4315_);
lean_closure_set(v___f_4328_, 1, v___y_4316_);
lean_closure_set(v___f_4328_, 2, v___y_4317_);
lean_closure_set(v___f_4328_, 3, v___y_4318_);
lean_closure_set(v___f_4328_, 4, v___y_4319_);
lean_closure_set(v___f_4328_, 5, v___y_4320_);
lean_closure_set(v___f_4328_, 6, v___y_4321_);
lean_closure_set(v___f_4328_, 7, v___y_4322_);
v___x_4329_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_4314_, v___f_4328_, v___y_4323_, v___y_4324_, v___y_4325_, v___y_4326_);
if (lean_obj_tag(v___x_4329_) == 0)
{
return v___x_4329_;
}
else
{
lean_object* v_a_4330_; lean_object* v___x_4332_; uint8_t v_isShared_4333_; uint8_t v_isSharedCheck_4337_; 
v_a_4330_ = lean_ctor_get(v___x_4329_, 0);
v_isSharedCheck_4337_ = !lean_is_exclusive(v___x_4329_);
if (v_isSharedCheck_4337_ == 0)
{
v___x_4332_ = v___x_4329_;
v_isShared_4333_ = v_isSharedCheck_4337_;
goto v_resetjp_4331_;
}
else
{
lean_inc(v_a_4330_);
lean_dec(v___x_4329_);
v___x_4332_ = lean_box(0);
v_isShared_4333_ = v_isSharedCheck_4337_;
goto v_resetjp_4331_;
}
v_resetjp_4331_:
{
lean_object* v___x_4335_; 
if (v_isShared_4333_ == 0)
{
v___x_4335_ = v___x_4332_;
goto v_reusejp_4334_;
}
else
{
lean_object* v_reuseFailAlloc_4336_; 
v_reuseFailAlloc_4336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4336_, 0, v_a_4330_);
v___x_4335_ = v_reuseFailAlloc_4336_;
goto v_reusejp_4334_;
}
v_reusejp_4334_:
{
return v___x_4335_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve_spec__0___redArg___boxed(lean_object* v_mvarId_4338_, lean_object* v_x_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_, lean_object* v___y_4342_, lean_object* v___y_4343_, lean_object* v___y_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_){
_start:
{
lean_object* v_res_4352_; 
v_res_4352_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve_spec__0___redArg(v_mvarId_4338_, v_x_4339_, v___y_4340_, v___y_4341_, v___y_4342_, v___y_4343_, v___y_4344_, v___y_4345_, v___y_4346_, v___y_4347_, v___y_4348_, v___y_4349_, v___y_4350_);
lean_dec(v___y_4350_);
lean_dec_ref(v___y_4349_);
lean_dec(v___y_4348_);
lean_dec_ref(v___y_4347_);
lean_dec(v___y_4346_);
lean_dec_ref(v___y_4345_);
lean_dec(v___y_4344_);
lean_dec_ref(v___y_4343_);
lean_dec(v___y_4342_);
lean_dec(v___y_4341_);
lean_dec_ref(v___y_4340_);
return v_res_4352_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve_spec__0(lean_object* v_00_u03b1_4353_, lean_object* v_mvarId_4354_, lean_object* v_x_4355_, lean_object* v___y_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_, lean_object* v___y_4364_, lean_object* v___y_4365_, lean_object* v___y_4366_){
_start:
{
lean_object* v___x_4368_; 
v___x_4368_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve_spec__0___redArg(v_mvarId_4354_, v_x_4355_, v___y_4356_, v___y_4357_, v___y_4358_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_, v___y_4363_, v___y_4364_, v___y_4365_, v___y_4366_);
return v___x_4368_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve_spec__0___boxed(lean_object* v_00_u03b1_4369_, lean_object* v_mvarId_4370_, lean_object* v_x_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_, lean_object* v___y_4379_, lean_object* v___y_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_){
_start:
{
lean_object* v_res_4384_; 
v_res_4384_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve_spec__0(v_00_u03b1_4369_, v_mvarId_4370_, v_x_4371_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_, v___y_4377_, v___y_4378_, v___y_4379_, v___y_4380_, v___y_4381_, v___y_4382_);
lean_dec(v___y_4382_);
lean_dec_ref(v___y_4381_);
lean_dec(v___y_4380_);
lean_dec_ref(v___y_4379_);
lean_dec(v___y_4378_);
lean_dec_ref(v___y_4377_);
lean_dec(v___y_4376_);
lean_dec_ref(v___y_4375_);
lean_dec(v___y_4374_);
lean_dec(v___y_4373_);
lean_dec_ref(v___y_4372_);
return v_res_4384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve___lam__0(lean_object* v_x_4385_, lean_object* v___y_4386_, lean_object* v___y_4387_, lean_object* v___y_4388_, lean_object* v___y_4389_, lean_object* v___y_4390_, lean_object* v___y_4391_, lean_object* v___y_4392_, lean_object* v___y_4393_, lean_object* v___y_4394_, lean_object* v___y_4395_, lean_object* v___y_4396_){
_start:
{
if (lean_obj_tag(v_x_4385_) == 0)
{
lean_object* v_a_4398_; lean_object* v___x_4400_; uint8_t v_isShared_4401_; uint8_t v_isSharedCheck_4405_; 
v_a_4398_ = lean_ctor_get(v_x_4385_, 0);
v_isSharedCheck_4405_ = !lean_is_exclusive(v_x_4385_);
if (v_isSharedCheck_4405_ == 0)
{
v___x_4400_ = v_x_4385_;
v_isShared_4401_ = v_isSharedCheck_4405_;
goto v_resetjp_4399_;
}
else
{
lean_inc(v_a_4398_);
lean_dec(v_x_4385_);
v___x_4400_ = lean_box(0);
v_isShared_4401_ = v_isSharedCheck_4405_;
goto v_resetjp_4399_;
}
v_resetjp_4399_:
{
lean_object* v___x_4403_; 
if (v_isShared_4401_ == 0)
{
v___x_4403_ = v___x_4400_;
goto v_reusejp_4402_;
}
else
{
lean_object* v_reuseFailAlloc_4404_; 
v_reuseFailAlloc_4404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4404_, 0, v_a_4398_);
v___x_4403_ = v_reuseFailAlloc_4404_;
goto v_reusejp_4402_;
}
v_reusejp_4402_:
{
return v___x_4403_;
}
}
}
else
{
lean_object* v_a_4406_; lean_object* v___x_4408_; uint8_t v_isShared_4409_; uint8_t v_isSharedCheck_4413_; 
v_a_4406_ = lean_ctor_get(v_x_4385_, 0);
v_isSharedCheck_4413_ = !lean_is_exclusive(v_x_4385_);
if (v_isSharedCheck_4413_ == 0)
{
v___x_4408_ = v_x_4385_;
v_isShared_4409_ = v_isSharedCheck_4413_;
goto v_resetjp_4407_;
}
else
{
lean_inc(v_a_4406_);
lean_dec(v_x_4385_);
v___x_4408_ = lean_box(0);
v_isShared_4409_ = v_isSharedCheck_4413_;
goto v_resetjp_4407_;
}
v_resetjp_4407_:
{
lean_object* v___x_4411_; 
if (v_isShared_4409_ == 0)
{
lean_ctor_set_tag(v___x_4408_, 0);
v___x_4411_ = v___x_4408_;
goto v_reusejp_4410_;
}
else
{
lean_object* v_reuseFailAlloc_4412_; 
v_reuseFailAlloc_4412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4412_, 0, v_a_4406_);
v___x_4411_ = v_reuseFailAlloc_4412_;
goto v_reusejp_4410_;
}
v_reusejp_4410_:
{
return v___x_4411_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve___lam__0___boxed(lean_object* v_x_4414_, lean_object* v___y_4415_, lean_object* v___y_4416_, lean_object* v___y_4417_, lean_object* v___y_4418_, lean_object* v___y_4419_, lean_object* v___y_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_, lean_object* v___y_4423_, lean_object* v___y_4424_, lean_object* v___y_4425_, lean_object* v___y_4426_){
_start:
{
lean_object* v_res_4427_; 
v_res_4427_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve___lam__0(v_x_4414_, v___y_4415_, v___y_4416_, v___y_4417_, v___y_4418_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_, v___y_4423_, v___y_4424_, v___y_4425_);
lean_dec(v___y_4425_);
lean_dec_ref(v___y_4424_);
lean_dec(v___y_4423_);
lean_dec_ref(v___y_4422_);
lean_dec(v___y_4421_);
lean_dec_ref(v___y_4420_);
lean_dec(v___y_4419_);
lean_dec_ref(v___y_4418_);
lean_dec(v___y_4417_);
lean_dec(v___y_4416_);
lean_dec_ref(v___y_4415_);
return v_res_4427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve___lam__1(lean_object* v_scope_4428_, lean_object* v_goal_4429_, lean_object* v___f_4430_, lean_object* v___y_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_, lean_object* v___y_4436_, lean_object* v___y_4437_, lean_object* v___y_4438_, lean_object* v___y_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_){
_start:
{
lean_object* v___x_4443_; lean_object* v___x_4444_; 
v___x_4443_ = lean_st_mk_ref(v_scope_4428_);
v___x_4444_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_runStrategies(v_goal_4429_, v___x_4443_, v___y_4431_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_, v___y_4436_, v___y_4437_, v___y_4438_, v___y_4439_, v___y_4440_, v___y_4441_);
if (lean_obj_tag(v___x_4444_) == 0)
{
lean_object* v_a_4445_; 
v_a_4445_ = lean_ctor_get(v___x_4444_, 0);
lean_inc(v_a_4445_);
lean_dec_ref_known(v___x_4444_, 1);
if (lean_obj_tag(v_a_4445_) == 0)
{
lean_object* v___x_4446_; 
lean_dec(v___x_4443_);
lean_inc(v___y_4441_);
lean_inc_ref(v___y_4440_);
lean_inc(v___y_4439_);
lean_inc_ref(v___y_4438_);
lean_inc(v___y_4437_);
lean_inc_ref(v___y_4436_);
lean_inc(v___y_4435_);
lean_inc_ref(v___y_4434_);
lean_inc(v___y_4433_);
lean_inc(v___y_4432_);
lean_inc_ref(v___y_4431_);
v___x_4446_ = lean_apply_13(v___f_4430_, v_a_4445_, v___y_4431_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_, v___y_4436_, v___y_4437_, v___y_4438_, v___y_4439_, v___y_4440_, v___y_4441_, lean_box(0));
return v___x_4446_;
}
else
{
lean_object* v___x_4447_; lean_object* v___x_4448_; 
v___x_4447_ = lean_st_ref_get(v___x_4443_);
lean_dec(v___x_4443_);
lean_dec(v___x_4447_);
lean_inc(v___y_4441_);
lean_inc_ref(v___y_4440_);
lean_inc(v___y_4439_);
lean_inc_ref(v___y_4438_);
lean_inc(v___y_4437_);
lean_inc_ref(v___y_4436_);
lean_inc(v___y_4435_);
lean_inc_ref(v___y_4434_);
lean_inc(v___y_4433_);
lean_inc(v___y_4432_);
lean_inc_ref(v___y_4431_);
v___x_4448_ = lean_apply_13(v___f_4430_, v_a_4445_, v___y_4431_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_, v___y_4436_, v___y_4437_, v___y_4438_, v___y_4439_, v___y_4440_, v___y_4441_, lean_box(0));
return v___x_4448_;
}
}
else
{
lean_object* v_a_4449_; lean_object* v___x_4451_; uint8_t v_isShared_4452_; uint8_t v_isSharedCheck_4456_; 
lean_dec(v___x_4443_);
lean_dec_ref(v___f_4430_);
v_a_4449_ = lean_ctor_get(v___x_4444_, 0);
v_isSharedCheck_4456_ = !lean_is_exclusive(v___x_4444_);
if (v_isSharedCheck_4456_ == 0)
{
v___x_4451_ = v___x_4444_;
v_isShared_4452_ = v_isSharedCheck_4456_;
goto v_resetjp_4450_;
}
else
{
lean_inc(v_a_4449_);
lean_dec(v___x_4444_);
v___x_4451_ = lean_box(0);
v_isShared_4452_ = v_isSharedCheck_4456_;
goto v_resetjp_4450_;
}
v_resetjp_4450_:
{
lean_object* v___x_4454_; 
if (v_isShared_4452_ == 0)
{
v___x_4454_ = v___x_4451_;
goto v_reusejp_4453_;
}
else
{
lean_object* v_reuseFailAlloc_4455_; 
v_reuseFailAlloc_4455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4455_, 0, v_a_4449_);
v___x_4454_ = v_reuseFailAlloc_4455_;
goto v_reusejp_4453_;
}
v_reusejp_4453_:
{
return v___x_4454_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve___lam__1___boxed(lean_object* v_scope_4457_, lean_object* v_goal_4458_, lean_object* v___f_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_, lean_object* v___y_4466_, lean_object* v___y_4467_, lean_object* v___y_4468_, lean_object* v___y_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_){
_start:
{
lean_object* v_res_4472_; 
v_res_4472_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve___lam__1(v_scope_4457_, v_goal_4458_, v___f_4459_, v___y_4460_, v___y_4461_, v___y_4462_, v___y_4463_, v___y_4464_, v___y_4465_, v___y_4466_, v___y_4467_, v___y_4468_, v___y_4469_, v___y_4470_);
lean_dec(v___y_4470_);
lean_dec_ref(v___y_4469_);
lean_dec(v___y_4468_);
lean_dec_ref(v___y_4467_);
lean_dec(v___y_4466_);
lean_dec_ref(v___y_4465_);
lean_dec(v___y_4464_);
lean_dec_ref(v___y_4463_);
lean_dec(v___y_4462_);
lean_dec(v___y_4461_);
lean_dec_ref(v___y_4460_);
return v_res_4472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve(lean_object* v_scope_4474_, lean_object* v_goal_4475_, lean_object* v_a_4476_, lean_object* v_a_4477_, lean_object* v_a_4478_, lean_object* v_a_4479_, lean_object* v_a_4480_, lean_object* v_a_4481_, lean_object* v_a_4482_, lean_object* v_a_4483_, lean_object* v_a_4484_, lean_object* v_a_4485_, lean_object* v_a_4486_){
_start:
{
lean_object* v___f_4488_; lean_object* v___f_4489_; lean_object* v___x_4490_; 
v___f_4488_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve___closed__0));
lean_inc(v_goal_4475_);
v___f_4489_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve___lam__1___boxed), 15, 3);
lean_closure_set(v___f_4489_, 0, v_scope_4474_);
lean_closure_set(v___f_4489_, 1, v_goal_4475_);
lean_closure_set(v___f_4489_, 2, v___f_4488_);
v___x_4490_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve_spec__0___redArg(v_goal_4475_, v___f_4489_, v_a_4476_, v_a_4477_, v_a_4478_, v_a_4479_, v_a_4480_, v_a_4481_, v_a_4482_, v_a_4483_, v_a_4484_, v_a_4485_, v_a_4486_);
return v___x_4490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve___boxed(lean_object* v_scope_4491_, lean_object* v_goal_4492_, lean_object* v_a_4493_, lean_object* v_a_4494_, lean_object* v_a_4495_, lean_object* v_a_4496_, lean_object* v_a_4497_, lean_object* v_a_4498_, lean_object* v_a_4499_, lean_object* v_a_4500_, lean_object* v_a_4501_, lean_object* v_a_4502_, lean_object* v_a_4503_, lean_object* v_a_4504_){
_start:
{
lean_object* v_res_4505_; 
v_res_4505_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGen_solve(v_scope_4491_, v_goal_4492_, v_a_4493_, v_a_4494_, v_a_4495_, v_a_4496_, v_a_4497_, v_a_4498_, v_a_4499_, v_a_4500_, v_a_4501_, v_a_4502_, v_a_4503_);
lean_dec(v_a_4503_);
lean_dec_ref(v_a_4502_);
lean_dec(v_a_4501_);
lean_dec_ref(v_a_4500_);
lean_dec(v_a_4499_);
lean_dec_ref(v_a_4498_);
lean_dec(v_a_4497_);
lean_dec_ref(v_a_4496_);
lean_dec(v_a_4495_);
lean_dec(v_a_4494_);
lean_dec_ref(v_a_4493_);
return v_res_4505_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_Do(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Attr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleCache(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Utils(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Solve(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Utils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__initFn_00___x40_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_2617394893____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Attr(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Solve(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym(uint8_t builtin);
lean_object* initialize_Std_Internal_Do(uint8_t builtin);
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Attr(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Attr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleCache(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Utils(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Solve(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Utils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Solve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Solve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Solve(builtin);
}
#ifdef __cplusplus
}
#endif
