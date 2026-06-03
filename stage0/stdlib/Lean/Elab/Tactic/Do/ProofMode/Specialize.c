// Lean compiler output
// Module: Lean.Elab.Tactic.Do.ProofMode.Specialize
// Imports: public import Lean.Elab.Tactic.ElabTerm public import Lean.Elab.Tactic.Do.ProofMode.MGoal import Lean.Elab.Tactic.Do.ProofMode.Basic import Lean.Elab.Tactic.Do.ProofMode.Focus
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
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkAnd_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseHyp_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_focusHyp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_addHypInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_Hyp_toExpr(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_elabTermWithHoles(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_pushGoals___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkApp9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
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
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_pure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instInhabitedOfPure___redArg(lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
extern lean_object* l_new__wp__monad;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHyp(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_focusHyp(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_instInhabitedTacticM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_focusHyp(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Level_dec(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "specialize"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(218, 187, 99, 122, 205, 56, 35, 106)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(124, 237, 62, 57, 45, 132, 211, 125)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__6_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__6_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__6_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__8_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__6_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__8_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__8_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__9_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__9_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__9_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__8_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__9_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__11_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(133, 58, 227, 168, 195, 28, 19, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__11_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__11_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__11_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(89, 242, 56, 182, 153, 42, 114, 203)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__13_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ProofMode"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__13_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__13_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__14_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__13_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(235, 162, 5, 152, 35, 161, 128, 56)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__14_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__14_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Specialize"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__16_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__14_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(123, 37, 216, 217, 52, 107, 81, 131)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__16_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__16_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__17_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__16_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(134, 228, 134, 131, 92, 39, 23, 124)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__17_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__17_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__18_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__17_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(143, 84, 44, 84, 94, 37, 243, 254)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__18_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__18_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__19_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__18_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__9_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(177, 217, 191, 18, 25, 138, 163, 38)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__19_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__19_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__20_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__19_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(56, 26, 90, 163, 35, 58, 46, 128)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__20_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__20_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__21_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__20_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(168, 184, 77, 185, 84, 89, 170, 239)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__21_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__21_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__22_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__21_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__13_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 192, 102, 68, 242, 71, 106, 40)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__22_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__22_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__23_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__23_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__23_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__24_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__22_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__23_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(107, 181, 167, 13, 84, 137, 136, 3)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__24_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__24_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__25_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__25_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__25_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__26_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__24_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__25_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(174, 86, 143, 172, 185, 64, 192, 68)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__26_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__26_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__27_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__26_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(215, 45, 16, 233, 253, 87, 107, 100)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__27_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__27_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__28_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__27_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__9_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(153, 248, 124, 248, 87, 161, 106, 245)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__28_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__28_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__29_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__28_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(48, 11, 80, 153, 37, 248, 122, 243)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__29_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__29_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__30_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__29_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 177, 224, 235, 201, 234, 118, 182)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__30_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__30_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__31_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__30_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__13_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(30, 25, 207, 76, 204, 57, 77, 197)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__31_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__31_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__32_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__31_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 36, 163, 18, 92, 122, 68, 208)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__32_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__32_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__33_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__32_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1458348229) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(66, 4, 91, 112, 211, 207, 232, 93)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__33_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__33_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__34_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__34_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__34_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__35_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__33_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__34_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(237, 227, 102, 41, 10, 173, 229, 224)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__35_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__35_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__36_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__36_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__36_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__37_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__35_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__36_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(173, 214, 239, 114, 51, 49, 230, 90)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__37_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__37_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__38_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__37_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(128, 248, 53, 236, 251, 118, 25, 137)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__38_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__38_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "imp"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "imp_stateful"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(167, 48, 44, 122, 88, 53, 63, 251)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__4_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__4_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(63, 115, 245, 151, 170, 35, 10, 68)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__4_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__3_value),LEAN_SCALAR_PTR_LITERAL(217, 109, 128, 0, 160, 79, 34, 25)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "failed to specialize "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__6;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " with "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__7_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__9_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__11;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Statefully specialize "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__12_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__13;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ". New Goal: "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__14_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__15;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__0;
static const lean_closure_object l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__1 = (const lean_object*)&l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__2 = (const lean_object*)&l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__3 = (const lean_object*)&l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__4 = (const lean_object*)&l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__5 = (const lean_object*)&l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__6 = (const lean_object*)&l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__1;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(241, 143, 174, 76, 41, 16, 248, 244)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "IsPure"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(167, 48, 44, 122, 88, 53, 63, 251)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__4_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__3_value),LEAN_SCALAR_PTR_LITERAL(237, 27, 197, 114, 200, 2, 153, 253)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "PropAsSPredTautology"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__6_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__6_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(167, 48, 44, 122, 88, 53, 63, 251)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__6_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__5_value),LEAN_SCALAR_PTR_LITERAL(48, 191, 216, 96, 0, 209, 179, 40)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__6_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "imp_pure"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__8_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(167, 48, 44, 122, 88, 53, 63, 251)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__8_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__8_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(63, 115, 245, 151, 170, 35, 10, 68)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__8_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__7_value),LEAN_SCALAR_PTR_LITERAL(194, 113, 147, 239, 22, 13, 55, 251)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__8_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Purely specialize "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__9_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__10;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "pure_taut"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__12_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__12_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__12_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(167, 48, 44, 122, 88, 53, 63, 251)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__12_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__12_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(63, 115, 245, 151, 170, 35, 10, 68)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__12_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__11_value),LEAN_SCALAR_PTR_LITERAL(154, 170, 199, 122, 147, 93, 65, 106)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__12_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "tautological"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__14_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__14_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__14_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__14_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(167, 48, 44, 122, 88, 53, 63, 251)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__14_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__13_value),LEAN_SCALAR_PTR_LITERAL(162, 116, 221, 240, 227, 37, 93, 202)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__14_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Elab.Tactic.Do.ProofMode.Specialize"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__15_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lean.Elab.Tactic.Do.ProofMode.mSpecializeImpPure"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__16 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__16_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Precondition of specializeImpPure violated"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__17_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__18;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "forall"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(167, 48, 44, 122, 88, 53, 63, 251)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__1_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(63, 115, 245, 151, 170, 35, 10, 68)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__1_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 228, 134, 48, 205, 218, 14, 147)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Instantiate "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Lean.Elab.Tactic.Do.ProofMode.mSpecializeForall"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Precondition of specializeForall violated"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_instInhabitedTacticM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__3___closed__0 = (const lean_object*)&l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "entails"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___lam__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trans"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Could not specialize "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__7___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "focus"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Lean.Elab.Tactic.Do.ProofMode.elabMSpecialize"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Invariant of specialize violated"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "unknown identifier `"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__5;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "mspecialize"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___closed__1_value),LEAN_SCALAR_PTR_LITERAL(183, 227, 189, 220, 199, 75, 123, 209)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__7(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__2___boxed(lean_object**);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__0_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "pure_start"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Lean.Elab.Tactic.Do.ProofMode.elabMspecializePure"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Invariant of specialize_pure violated"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "mspecializePure"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 63, 62, 145, 88, 202, 28, 127)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "CompleteLattice"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "toPartialOrder"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 140, 127, 117, 148, 144, 166, 107)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__2_value),LEAN_SCALAR_PTR_LITERAL(13, 4, 43, 255, 98, 225, 163, 244)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "himp"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Frame"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(15, 250, 129, 138, 140, 209, 203, 188)}};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__1_value),LEAN_SCALAR_PTR_LITERAL(237, 11, 99, 181, 146, 193, 255, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__4_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__4_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(84, 59, 209, 245, 191, 85, 47, 162)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__4_value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__4_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(48, 52, 122, 111, 64, 98, 223, 48)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__4_value_aux_5),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__3_value),LEAN_SCALAR_PTR_LITERAL(194, 124, 224, 39, 206, 5, 28, 101)}};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__0_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__1_value),LEAN_SCALAR_PTR_LITERAL(237, 11, 99, 181, 146, 193, 255, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__0_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(84, 59, 209, 245, 191, 85, 47, 162)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__0_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__3_value),LEAN_SCALAR_PTR_LITERAL(210, 28, 152, 207, 194, 33, 121, 214)}};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "PropAsCompleteLatticeTautology"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__1_value),LEAN_SCALAR_PTR_LITERAL(237, 11, 99, 181, 146, 193, 255, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__2_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(84, 59, 209, 245, 191, 85, 47, 162)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__2_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__1_value),LEAN_SCALAR_PTR_LITERAL(190, 150, 119, 103, 58, 92, 126, 159)}};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__1_value),LEAN_SCALAR_PTR_LITERAL(237, 11, 99, 181, 146, 193, 255, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__3_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(84, 59, 209, 245, 191, 85, 47, 162)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__3_value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__3_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(48, 52, 122, 111, 64, 98, 223, 48)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__3_value_aux_5),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__7_value),LEAN_SCALAR_PTR_LITERAL(217, 184, 199, 156, 243, 159, 82, 43)}};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__1_value),LEAN_SCALAR_PTR_LITERAL(237, 11, 99, 181, 146, 193, 255, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__4_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__4_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(84, 59, 209, 245, 191, 85, 47, 162)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__4_value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__4_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(48, 52, 122, 111, 64, 98, 223, 48)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__4_value_aux_5),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__11_value),LEAN_SCALAR_PTR_LITERAL(1, 181, 111, 15, 235, 247, 182, 0)}};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__1_value),LEAN_SCALAR_PTR_LITERAL(237, 11, 99, 181, 146, 193, 255, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__5_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__5_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(84, 59, 209, 245, 191, 85, 47, 162)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__5_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__13_value),LEAN_SCALAR_PTR_LITERAL(29, 172, 221, 84, 117, 30, 122, 198)}};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "Lean.Elab.Tactic.Internal.Do.ProofMode.mSpecializeImpPure"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "iInf"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 96, 105, 10, 16, 194, 128, 157)}};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__2;
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__1_value),LEAN_SCALAR_PTR_LITERAL(237, 11, 99, 181, 146, 193, 255, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__3_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(84, 59, 209, 245, 191, 85, 47, 162)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__3_value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__3_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(48, 52, 122, 111, 64, 98, 223, 48)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__3_value_aux_5),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(124, 67, 70, 97, 49, 175, 82, 83)}};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "Lean.Elab.Tactic.Internal.Do.ProofMode.mSpecializeForall"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize_spec__0___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PartialOrder"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize_spec__0___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize_spec__0___lam__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize_spec__0___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "rel_trans"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize_spec__0___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize_spec__0___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize_spec__0___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Lean.Elab.Tactic.Internal.Do.ProofMode.elabMSpecialize"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure_spec__0___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "Lean.Elab.Tactic.Internal.Do.ProofMode.elabMspecializePure"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "elabMSpecializeOpt"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__9_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1___closed__1_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__13_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(255, 74, 68, 148, 0, 14, 81, 75)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1___closed__1_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(139, 79, 133, 30, 246, 36, 87, 187)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "elabMspecializePureOpt"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__9_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1___closed__1_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__13_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(255, 74, 68, 148, 0, 14, 81, 75)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1___closed__1_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(18, 164, 153, 10, 237, 30, 108, 129)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_95_; uint8_t v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_95_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_96_ = 0;
v___x_97_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__38_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_98_ = l_Lean_registerTraceClass(v___x_95_, v___x_96_, v___x_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2____boxed(lean_object* v_a_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_();
return v_res_100_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0_spec__0(lean_object* v_msgData_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_){
_start:
{
lean_object* v___x_107_; lean_object* v_env_108_; lean_object* v___x_109_; lean_object* v_mctx_110_; lean_object* v_lctx_111_; lean_object* v_options_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_107_ = lean_st_ref_get(v___y_105_);
v_env_108_ = lean_ctor_get(v___x_107_, 0);
lean_inc_ref(v_env_108_);
lean_dec(v___x_107_);
v___x_109_ = lean_st_ref_get(v___y_103_);
v_mctx_110_ = lean_ctor_get(v___x_109_, 0);
lean_inc_ref(v_mctx_110_);
lean_dec(v___x_109_);
v_lctx_111_ = lean_ctor_get(v___y_102_, 2);
v_options_112_ = lean_ctor_get(v___y_104_, 2);
lean_inc_ref(v_options_112_);
lean_inc_ref(v_lctx_111_);
v___x_113_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_113_, 0, v_env_108_);
lean_ctor_set(v___x_113_, 1, v_mctx_110_);
lean_ctor_set(v___x_113_, 2, v_lctx_111_);
lean_ctor_set(v___x_113_, 3, v_options_112_);
v___x_114_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_114_, 0, v___x_113_);
lean_ctor_set(v___x_114_, 1, v_msgData_101_);
v___x_115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0_spec__0___boxed(lean_object* v_msgData_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0_spec__0(v_msgData_116_, v___y_117_, v___y_118_, v___y_119_, v___y_120_);
lean_dec(v___y_120_);
lean_dec_ref(v___y_119_);
lean_dec(v___y_118_);
lean_dec_ref(v___y_117_);
return v_res_122_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_123_; double v___x_124_; 
v___x_123_ = lean_unsigned_to_nat(0u);
v___x_124_ = lean_float_of_nat(v___x_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg(lean_object* v_cls_128_, lean_object* v_msg_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_){
_start:
{
lean_object* v_ref_135_; lean_object* v___x_136_; lean_object* v_a_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_181_; 
v_ref_135_ = lean_ctor_get(v___y_132_, 5);
v___x_136_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0_spec__0(v_msg_129_, v___y_130_, v___y_131_, v___y_132_, v___y_133_);
v_a_137_ = lean_ctor_get(v___x_136_, 0);
v_isSharedCheck_181_ = !lean_is_exclusive(v___x_136_);
if (v_isSharedCheck_181_ == 0)
{
v___x_139_ = v___x_136_;
v_isShared_140_ = v_isSharedCheck_181_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_a_137_);
lean_dec(v___x_136_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_181_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_141_; lean_object* v_traceState_142_; lean_object* v_env_143_; lean_object* v_nextMacroScope_144_; lean_object* v_ngen_145_; lean_object* v_auxDeclNGen_146_; lean_object* v_cache_147_; lean_object* v_messages_148_; lean_object* v_infoState_149_; lean_object* v_snapshotTasks_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_180_; 
v___x_141_ = lean_st_ref_take(v___y_133_);
v_traceState_142_ = lean_ctor_get(v___x_141_, 4);
v_env_143_ = lean_ctor_get(v___x_141_, 0);
v_nextMacroScope_144_ = lean_ctor_get(v___x_141_, 1);
v_ngen_145_ = lean_ctor_get(v___x_141_, 2);
v_auxDeclNGen_146_ = lean_ctor_get(v___x_141_, 3);
v_cache_147_ = lean_ctor_get(v___x_141_, 5);
v_messages_148_ = lean_ctor_get(v___x_141_, 6);
v_infoState_149_ = lean_ctor_get(v___x_141_, 7);
v_snapshotTasks_150_ = lean_ctor_get(v___x_141_, 8);
v_isSharedCheck_180_ = !lean_is_exclusive(v___x_141_);
if (v_isSharedCheck_180_ == 0)
{
v___x_152_ = v___x_141_;
v_isShared_153_ = v_isSharedCheck_180_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_snapshotTasks_150_);
lean_inc(v_infoState_149_);
lean_inc(v_messages_148_);
lean_inc(v_cache_147_);
lean_inc(v_traceState_142_);
lean_inc(v_auxDeclNGen_146_);
lean_inc(v_ngen_145_);
lean_inc(v_nextMacroScope_144_);
lean_inc(v_env_143_);
lean_dec(v___x_141_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_180_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
uint64_t v_tid_154_; lean_object* v_traces_155_; lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_179_; 
v_tid_154_ = lean_ctor_get_uint64(v_traceState_142_, sizeof(void*)*1);
v_traces_155_ = lean_ctor_get(v_traceState_142_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v_traceState_142_);
if (v_isSharedCheck_179_ == 0)
{
v___x_157_ = v_traceState_142_;
v_isShared_158_ = v_isSharedCheck_179_;
goto v_resetjp_156_;
}
else
{
lean_inc(v_traces_155_);
lean_dec(v_traceState_142_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_179_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___x_159_; double v___x_160_; uint8_t v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_169_; 
v___x_159_ = lean_box(0);
v___x_160_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg___closed__0);
v___x_161_ = 0;
v___x_162_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg___closed__1));
v___x_163_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_163_, 0, v_cls_128_);
lean_ctor_set(v___x_163_, 1, v___x_159_);
lean_ctor_set(v___x_163_, 2, v___x_162_);
lean_ctor_set_float(v___x_163_, sizeof(void*)*3, v___x_160_);
lean_ctor_set_float(v___x_163_, sizeof(void*)*3 + 8, v___x_160_);
lean_ctor_set_uint8(v___x_163_, sizeof(void*)*3 + 16, v___x_161_);
v___x_164_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg___closed__2));
v___x_165_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_165_, 0, v___x_163_);
lean_ctor_set(v___x_165_, 1, v_a_137_);
lean_ctor_set(v___x_165_, 2, v___x_164_);
lean_inc(v_ref_135_);
v___x_166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_166_, 0, v_ref_135_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
v___x_167_ = l_Lean_PersistentArray_push___redArg(v_traces_155_, v___x_166_);
if (v_isShared_158_ == 0)
{
lean_ctor_set(v___x_157_, 0, v___x_167_);
v___x_169_ = v___x_157_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_167_);
lean_ctor_set_uint64(v_reuseFailAlloc_178_, sizeof(void*)*1, v_tid_154_);
v___x_169_ = v_reuseFailAlloc_178_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
lean_object* v___x_171_; 
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 4, v___x_169_);
v___x_171_ = v___x_152_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v_env_143_);
lean_ctor_set(v_reuseFailAlloc_177_, 1, v_nextMacroScope_144_);
lean_ctor_set(v_reuseFailAlloc_177_, 2, v_ngen_145_);
lean_ctor_set(v_reuseFailAlloc_177_, 3, v_auxDeclNGen_146_);
lean_ctor_set(v_reuseFailAlloc_177_, 4, v___x_169_);
lean_ctor_set(v_reuseFailAlloc_177_, 5, v_cache_147_);
lean_ctor_set(v_reuseFailAlloc_177_, 6, v_messages_148_);
lean_ctor_set(v_reuseFailAlloc_177_, 7, v_infoState_149_);
lean_ctor_set(v_reuseFailAlloc_177_, 8, v_snapshotTasks_150_);
v___x_171_ = v_reuseFailAlloc_177_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_175_; 
v___x_172_ = lean_st_ref_set(v___y_133_, v___x_171_);
v___x_173_ = lean_box(0);
if (v_isShared_140_ == 0)
{
lean_ctor_set(v___x_139_, 0, v___x_173_);
v___x_175_ = v___x_139_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v___x_173_);
v___x_175_ = v_reuseFailAlloc_176_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
return v___x_175_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg___boxed(lean_object* v_cls_182_, lean_object* v_msg_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg(v_cls_182_, v_msg_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_);
lean_dec(v___y_187_);
lean_dec_ref(v___y_186_);
lean_dec(v___y_185_);
lean_dec_ref(v___y_184_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0___redArg(lean_object* v_msg_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_){
_start:
{
lean_object* v_ref_196_; lean_object* v___x_197_; lean_object* v_a_198_; lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_206_; 
v_ref_196_ = lean_ctor_get(v___y_193_, 5);
v___x_197_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0_spec__0(v_msg_190_, v___y_191_, v___y_192_, v___y_193_, v___y_194_);
v_a_198_ = lean_ctor_get(v___x_197_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_197_);
if (v_isSharedCheck_206_ == 0)
{
v___x_200_ = v___x_197_;
v_isShared_201_ = v_isSharedCheck_206_;
goto v_resetjp_199_;
}
else
{
lean_inc(v_a_198_);
lean_dec(v___x_197_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_206_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v___x_202_; lean_object* v___x_204_; 
lean_inc(v_ref_196_);
v___x_202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_202_, 0, v_ref_196_);
lean_ctor_set(v___x_202_, 1, v_a_198_);
if (v_isShared_201_ == 0)
{
lean_ctor_set_tag(v___x_200_, 1);
lean_ctor_set(v___x_200_, 0, v___x_202_);
v___x_204_ = v___x_200_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v___x_202_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0___redArg___boxed(lean_object* v_msg_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0___redArg(v_msg_207_, v___y_208_, v___y_209_, v___y_210_, v___y_211_);
lean_dec(v___y_211_);
lean_dec_ref(v___y_210_);
lean_dec(v___y_209_);
lean_dec_ref(v___y_208_);
return v_res_213_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__6(void){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__5));
v___x_227_ = l_Lean_stringToMessageData(v___x_226_);
return v___x_227_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8(void){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_229_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__7));
v___x_230_ = l_Lean_stringToMessageData(v___x_229_);
return v___x_230_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__11(void){
_start:
{
lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_234_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_235_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__10));
v___x_236_ = l_Lean_Name_append(v___x_235_, v___x_234_);
return v___x_236_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__13(void){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_238_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__12));
v___x_239_ = l_Lean_stringToMessageData(v___x_238_);
return v___x_239_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__15(void){
_start:
{
lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_241_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__14));
v___x_242_ = l_Lean_stringToMessageData(v___x_241_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful(lean_object* v_P_243_, lean_object* v_QR_244_, lean_object* v_arg_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_){
_start:
{
uint8_t v___x_258_; 
v___x_258_ = l_Lean_Syntax_isIdent(v_arg_245_);
if (v___x_258_ == 0)
{
lean_object* v___x_259_; lean_object* v___x_260_; 
lean_dec(v_arg_245_);
lean_dec_ref(v_QR_244_);
lean_dec_ref(v_P_243_);
v___x_259_ = lean_box(0);
v___x_260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_260_, 0, v___x_259_);
return v___x_260_;
}
else
{
lean_object* v___x_261_; 
lean_inc_ref(v_QR_244_);
v___x_261_ = l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(v_QR_244_);
if (lean_obj_tag(v___x_261_) == 1)
{
lean_object* v_val_262_; lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_418_; 
v_val_262_ = lean_ctor_get(v___x_261_, 0);
v_isSharedCheck_418_ = !lean_is_exclusive(v___x_261_);
if (v_isSharedCheck_418_ == 0)
{
v___x_264_ = v___x_261_;
v_isShared_265_ = v_isSharedCheck_418_;
goto v_resetjp_263_;
}
else
{
lean_inc(v_val_262_);
lean_dec(v___x_261_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_418_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
lean_object* v_p_266_; 
v_p_266_ = lean_ctor_get(v_val_262_, 2);
lean_inc_ref(v_p_266_);
if (lean_obj_tag(v_p_266_) == 5)
{
lean_object* v_fn_267_; 
v_fn_267_ = lean_ctor_get(v_p_266_, 0);
if (lean_obj_tag(v_fn_267_) == 5)
{
lean_object* v_fn_268_; 
v_fn_268_ = lean_ctor_get(v_fn_267_, 0);
if (lean_obj_tag(v_fn_268_) == 5)
{
lean_object* v_fn_269_; 
v_fn_269_ = lean_ctor_get(v_fn_268_, 0);
if (lean_obj_tag(v_fn_269_) == 4)
{
lean_object* v_declName_270_; 
v_declName_270_ = lean_ctor_get(v_fn_269_, 0);
if (lean_obj_tag(v_declName_270_) == 1)
{
lean_object* v_pre_271_; 
v_pre_271_ = lean_ctor_get(v_declName_270_, 0);
if (lean_obj_tag(v_pre_271_) == 1)
{
lean_object* v_pre_272_; 
v_pre_272_ = lean_ctor_get(v_pre_271_, 0);
if (lean_obj_tag(v_pre_272_) == 1)
{
lean_object* v_pre_273_; 
v_pre_273_ = lean_ctor_get(v_pre_272_, 0);
if (lean_obj_tag(v_pre_273_) == 1)
{
lean_object* v_pre_274_; 
v_pre_274_ = lean_ctor_get(v_pre_273_, 0);
if (lean_obj_tag(v_pre_274_) == 0)
{
lean_object* v_name_275_; lean_object* v_uniq_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_416_; 
v_name_275_ = lean_ctor_get(v_val_262_, 0);
v_uniq_276_ = lean_ctor_get(v_val_262_, 1);
v_isSharedCheck_416_ = !lean_is_exclusive(v_val_262_);
if (v_isSharedCheck_416_ == 0)
{
lean_object* v_unused_417_; 
v_unused_417_ = lean_ctor_get(v_val_262_, 2);
lean_dec(v_unused_417_);
v___x_278_ = v_val_262_;
v_isShared_279_ = v_isSharedCheck_416_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_uniq_276_);
lean_inc(v_name_275_);
lean_dec(v_val_262_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_416_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v_arg_280_; lean_object* v_arg_281_; lean_object* v_arg_282_; lean_object* v_us_283_; lean_object* v_str_284_; lean_object* v_str_285_; lean_object* v_str_286_; lean_object* v_str_287_; lean_object* v___x_288_; uint8_t v___x_289_; 
v_arg_280_ = lean_ctor_get(v_p_266_, 1);
v_arg_281_ = lean_ctor_get(v_fn_267_, 1);
v_arg_282_ = lean_ctor_get(v_fn_268_, 1);
v_us_283_ = lean_ctor_get(v_fn_269_, 1);
v_str_284_ = lean_ctor_get(v_declName_270_, 1);
v_str_285_ = lean_ctor_get(v_pre_271_, 1);
v_str_286_ = lean_ctor_get(v_pre_272_, 1);
v_str_287_ = lean_ctor_get(v_pre_273_, 1);
v___x_288_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0));
v___x_289_ = lean_string_dec_eq(v_str_287_, v___x_288_);
if (v___x_289_ == 0)
{
lean_del_object(v___x_278_);
lean_dec(v_uniq_276_);
lean_dec(v_name_275_);
lean_dec_ref_known(v_p_266_, 2);
lean_del_object(v___x_264_);
lean_dec(v_arg_245_);
lean_dec_ref(v_QR_244_);
lean_dec_ref(v_P_243_);
goto v___jp_255_;
}
else
{
lean_object* v___x_290_; uint8_t v___x_291_; 
v___x_290_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_291_ = lean_string_dec_eq(v_str_286_, v___x_290_);
if (v___x_291_ == 0)
{
lean_del_object(v___x_278_);
lean_dec(v_uniq_276_);
lean_dec(v_name_275_);
lean_dec_ref_known(v_p_266_, 2);
lean_del_object(v___x_264_);
lean_dec(v_arg_245_);
lean_dec_ref(v_QR_244_);
lean_dec_ref(v_P_243_);
goto v___jp_255_;
}
else
{
lean_object* v___x_292_; uint8_t v___x_293_; 
v___x_292_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__1));
v___x_293_ = lean_string_dec_eq(v_str_285_, v___x_292_);
if (v___x_293_ == 0)
{
lean_del_object(v___x_278_);
lean_dec(v_uniq_276_);
lean_dec(v_name_275_);
lean_dec_ref_known(v_p_266_, 2);
lean_del_object(v___x_264_);
lean_dec(v_arg_245_);
lean_dec_ref(v_QR_244_);
lean_dec_ref(v_P_243_);
goto v___jp_255_;
}
else
{
lean_object* v___x_294_; uint8_t v___x_295_; 
v___x_294_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__2));
v___x_295_ = lean_string_dec_eq(v_str_284_, v___x_294_);
if (v___x_295_ == 0)
{
lean_del_object(v___x_278_);
lean_dec(v_uniq_276_);
lean_dec(v_name_275_);
lean_dec_ref_known(v_p_266_, 2);
lean_del_object(v___x_264_);
lean_dec(v_arg_245_);
lean_dec_ref(v_QR_244_);
lean_dec_ref(v_P_243_);
goto v___jp_255_;
}
else
{
if (lean_obj_tag(v_us_283_) == 1)
{
lean_object* v_tail_296_; 
v_tail_296_ = lean_ctor_get(v_us_283_, 1);
if (lean_obj_tag(v_tail_296_) == 0)
{
lean_object* v_head_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v_head_297_ = lean_ctor_get(v_us_283_, 0);
lean_inc_ref(v_P_243_);
lean_inc_ref_n(v_arg_282_, 2);
lean_inc_n(v_head_297_, 2);
v___x_298_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_head_297_, v_arg_282_, v_P_243_, v_QR_244_);
v___x_299_ = l_Lean_Syntax_getId(v_arg_245_);
v___x_300_ = l_Lean_Elab_Tactic_Do_ProofMode_focusHyp(v_head_297_, v_arg_282_, v___x_298_, v___x_299_);
lean_dec(v___x_299_);
if (lean_obj_tag(v___x_300_) == 1)
{
lean_object* v_val_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_411_; 
lean_del_object(v___x_264_);
v_val_301_ = lean_ctor_get(v___x_300_, 0);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_300_);
if (v_isSharedCheck_411_ == 0)
{
v___x_303_ = v___x_300_;
v_isShared_304_ = v_isSharedCheck_411_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_val_301_);
lean_dec(v___x_300_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_411_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v_focusHyp_305_; lean_object* v_restHyps_306_; lean_object* v_proof_307_; lean_object* v___x_308_; 
v_focusHyp_305_ = lean_ctor_get(v_val_301_, 0);
lean_inc_ref_n(v_focusHyp_305_, 2);
v_restHyps_306_ = lean_ctor_get(v_val_301_, 1);
lean_inc_ref(v_restHyps_306_);
v_proof_307_ = lean_ctor_get(v_val_301_, 2);
lean_inc_ref(v_proof_307_);
lean_dec(v_val_301_);
v___x_308_ = l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(v_focusHyp_305_);
if (lean_obj_tag(v___x_308_) == 1)
{
lean_object* v_val_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_406_; 
lean_del_object(v___x_303_);
v_val_309_ = lean_ctor_get(v___x_308_, 0);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_308_);
if (v_isSharedCheck_406_ == 0)
{
v___x_311_ = v___x_308_;
v_isShared_312_ = v_isSharedCheck_406_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_val_309_);
lean_dec(v___x_308_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_406_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
uint8_t v___x_313_; lean_object* v___x_314_; 
v___x_313_ = 0;
lean_inc_ref(v_arg_282_);
v___x_314_ = l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo(v_arg_245_, v_arg_282_, v_val_309_, v___x_313_, v_a_250_, v_a_251_, v_a_252_, v_a_253_);
if (lean_obj_tag(v___x_314_) == 0)
{
lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_396_; 
v_isSharedCheck_396_ = !lean_is_exclusive(v___x_314_);
if (v_isSharedCheck_396_ == 0)
{
lean_object* v_unused_397_; 
v_unused_397_ = lean_ctor_get(v___x_314_, 0);
lean_dec(v_unused_397_);
v___x_316_ = v___x_314_;
v_isShared_317_ = v_isSharedCheck_396_;
goto v_resetjp_315_;
}
else
{
lean_dec(v___x_314_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_396_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v_options_318_; lean_object* v_inheritedTraceOptions_319_; uint8_t v_hasTrace_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___y_337_; lean_object* v___y_338_; lean_object* v___y_339_; lean_object* v___y_340_; lean_object* v___y_341_; lean_object* v___y_342_; lean_object* v___y_343_; lean_object* v___y_344_; 
v_options_318_ = lean_ctor_get(v_a_252_, 2);
v_inheritedTraceOptions_319_ = lean_ctor_get(v_a_252_, 13);
v_hasTrace_320_ = lean_ctor_get_uint8(v_options_318_, sizeof(void*)*1);
v___x_321_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__4));
lean_inc_ref(v_us_283_);
v___x_322_ = l_Lean_mkConst(v___x_321_, v_us_283_);
lean_inc_ref(v_arg_280_);
lean_inc_ref(v_focusHyp_305_);
lean_inc_ref(v_P_243_);
lean_inc_ref(v_arg_282_);
v___x_323_ = l_Lean_mkApp6(v___x_322_, v_arg_282_, v_P_243_, v_restHyps_306_, v_focusHyp_305_, v_arg_280_, v_proof_307_);
if (v_hasTrace_320_ == 0)
{
lean_dec_ref(v_P_243_);
v___y_337_ = v_a_246_;
v___y_338_ = v_a_247_;
v___y_339_ = v_a_248_;
v___y_340_ = v_a_249_;
v___y_341_ = v_a_250_;
v___y_342_ = v_a_251_;
v___y_343_ = v_a_252_;
v___y_344_ = v_a_253_;
goto v___jp_336_;
}
else
{
lean_object* v___x_372_; lean_object* v___x_373_; uint8_t v___x_374_; 
v___x_372_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_373_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__11, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__11_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__11);
v___x_374_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_319_, v_options_318_, v___x_373_);
if (v___x_374_ == 0)
{
lean_dec_ref(v_P_243_);
v___y_337_ = v_a_246_;
v___y_338_ = v_a_247_;
v___y_339_ = v_a_248_;
v___y_340_ = v_a_249_;
v___y_341_ = v_a_250_;
v___y_342_ = v_a_251_;
v___y_343_ = v_a_252_;
v___y_344_ = v_a_253_;
goto v___jp_336_;
}
else
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_375_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__13, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__13_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__13);
lean_inc_ref(v_p_266_);
v___x_376_ = l_Lean_MessageData_ofExpr(v_p_266_);
v___x_377_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_375_);
lean_ctor_set(v___x_377_, 1, v___x_376_);
v___x_378_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8);
v___x_379_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_379_, 0, v___x_377_);
lean_ctor_set(v___x_379_, 1, v___x_378_);
lean_inc_ref(v_focusHyp_305_);
v___x_380_ = l_Lean_MessageData_ofExpr(v_focusHyp_305_);
v___x_381_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_381_, 0, v___x_379_);
lean_ctor_set(v___x_381_, 1, v___x_380_);
v___x_382_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__15, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__15_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__15);
v___x_383_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_383_, 0, v___x_381_);
lean_ctor_set(v___x_383_, 1, v___x_382_);
lean_inc_ref(v_arg_280_);
lean_inc_ref(v_arg_282_);
lean_inc(v_head_297_);
v___x_384_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_head_297_, v_arg_282_, v_P_243_, v_arg_280_);
v___x_385_ = l_Lean_MessageData_ofExpr(v___x_384_);
v___x_386_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_383_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg(v___x_372_, v___x_386_, v_a_250_, v_a_251_, v_a_252_, v_a_253_);
if (lean_obj_tag(v___x_387_) == 0)
{
lean_dec_ref_known(v___x_387_, 1);
v___y_337_ = v_a_246_;
v___y_338_ = v_a_247_;
v___y_339_ = v_a_248_;
v___y_340_ = v_a_249_;
v___y_341_ = v_a_250_;
v___y_342_ = v_a_251_;
v___y_343_ = v_a_252_;
v___y_344_ = v_a_253_;
goto v___jp_336_;
}
else
{
lean_object* v_a_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_395_; 
lean_dec_ref(v___x_323_);
lean_del_object(v___x_316_);
lean_del_object(v___x_311_);
lean_dec_ref(v_focusHyp_305_);
lean_del_object(v___x_278_);
lean_dec(v_uniq_276_);
lean_dec(v_name_275_);
lean_dec_ref_known(v_p_266_, 2);
v_a_388_ = lean_ctor_get(v___x_387_, 0);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_387_);
if (v_isSharedCheck_395_ == 0)
{
v___x_390_ = v___x_387_;
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_a_388_);
lean_dec(v___x_387_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v___x_393_; 
if (v_isShared_391_ == 0)
{
v___x_393_ = v___x_390_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_a_388_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
return v___x_393_;
}
}
}
}
}
v___jp_324_:
{
lean_object* v___x_326_; 
if (v_isShared_279_ == 0)
{
lean_ctor_set(v___x_278_, 2, v_arg_280_);
v___x_326_ = v___x_278_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_name_275_);
lean_ctor_set(v_reuseFailAlloc_335_, 1, v_uniq_276_);
lean_ctor_set(v_reuseFailAlloc_335_, 2, v_arg_280_);
v___x_326_ = v_reuseFailAlloc_335_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_330_; 
v___x_327_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_326_);
v___x_328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_328_, 0, v___x_327_);
lean_ctor_set(v___x_328_, 1, v___x_323_);
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 0, v___x_328_);
v___x_330_ = v___x_311_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v___x_328_);
v___x_330_ = v_reuseFailAlloc_334_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
lean_object* v___x_332_; 
if (v_isShared_317_ == 0)
{
lean_ctor_set(v___x_316_, 0, v___x_330_);
v___x_332_ = v___x_316_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v___x_330_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
}
v___jp_336_:
{
lean_object* v___x_345_; 
lean_inc_ref(v_arg_281_);
lean_inc_ref(v_focusHyp_305_);
v___x_345_ = l_Lean_Meta_isExprDefEq(v_focusHyp_305_, v_arg_281_, v___y_341_, v___y_342_, v___y_343_, v___y_344_);
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v_a_346_; uint8_t v___x_347_; 
v_a_346_ = lean_ctor_get(v___x_345_, 0);
lean_inc(v_a_346_);
lean_dec_ref_known(v___x_345_, 1);
v___x_347_ = lean_unbox(v_a_346_);
lean_dec(v_a_346_);
if (v___x_347_ == 0)
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v_a_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_363_; 
lean_dec_ref(v___x_323_);
lean_del_object(v___x_316_);
lean_del_object(v___x_311_);
lean_del_object(v___x_278_);
lean_dec(v_uniq_276_);
lean_dec(v_name_275_);
v___x_348_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__6);
v___x_349_ = l_Lean_MessageData_ofExpr(v_p_266_);
v___x_350_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_350_, 0, v___x_348_);
lean_ctor_set(v___x_350_, 1, v___x_349_);
v___x_351_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8);
v___x_352_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_352_, 0, v___x_350_);
lean_ctor_set(v___x_352_, 1, v___x_351_);
v___x_353_ = l_Lean_MessageData_ofExpr(v_focusHyp_305_);
v___x_354_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_354_, 0, v___x_352_);
lean_ctor_set(v___x_354_, 1, v___x_353_);
v___x_355_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0___redArg(v___x_354_, v___y_341_, v___y_342_, v___y_343_, v___y_344_);
v_a_356_ = lean_ctor_get(v___x_355_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_355_);
if (v_isSharedCheck_363_ == 0)
{
v___x_358_ = v___x_355_;
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_a_356_);
lean_dec(v___x_355_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_361_; 
if (v_isShared_359_ == 0)
{
v___x_361_ = v___x_358_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_a_356_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
else
{
lean_inc_ref(v_arg_280_);
lean_dec_ref(v_focusHyp_305_);
lean_dec_ref_known(v_p_266_, 2);
goto v___jp_324_;
}
}
else
{
lean_object* v_a_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_371_; 
lean_dec_ref(v___x_323_);
lean_del_object(v___x_316_);
lean_del_object(v___x_311_);
lean_dec_ref(v_focusHyp_305_);
lean_del_object(v___x_278_);
lean_dec(v_uniq_276_);
lean_dec(v_name_275_);
lean_dec_ref_known(v_p_266_, 2);
v_a_364_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_371_ == 0)
{
v___x_366_ = v___x_345_;
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_a_364_);
lean_dec(v___x_345_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_a_364_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
}
}
}
else
{
lean_object* v_a_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_405_; 
lean_del_object(v___x_311_);
lean_dec_ref(v_proof_307_);
lean_dec_ref(v_restHyps_306_);
lean_dec_ref(v_focusHyp_305_);
lean_del_object(v___x_278_);
lean_dec(v_uniq_276_);
lean_dec(v_name_275_);
lean_dec_ref_known(v_p_266_, 2);
lean_dec_ref(v_P_243_);
v_a_398_ = lean_ctor_get(v___x_314_, 0);
v_isSharedCheck_405_ = !lean_is_exclusive(v___x_314_);
if (v_isSharedCheck_405_ == 0)
{
v___x_400_ = v___x_314_;
v_isShared_401_ = v_isSharedCheck_405_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_a_398_);
lean_dec(v___x_314_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_405_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_403_; 
if (v_isShared_401_ == 0)
{
v___x_403_ = v___x_400_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_a_398_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
}
}
}
else
{
lean_object* v___x_407_; lean_object* v___x_409_; 
lean_dec(v___x_308_);
lean_dec_ref(v_proof_307_);
lean_dec_ref(v_restHyps_306_);
lean_dec_ref(v_focusHyp_305_);
lean_del_object(v___x_278_);
lean_dec(v_uniq_276_);
lean_dec(v_name_275_);
lean_dec_ref_known(v_p_266_, 2);
lean_dec(v_arg_245_);
lean_dec_ref(v_P_243_);
v___x_407_ = lean_box(0);
if (v_isShared_304_ == 0)
{
lean_ctor_set_tag(v___x_303_, 0);
lean_ctor_set(v___x_303_, 0, v___x_407_);
v___x_409_ = v___x_303_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v___x_407_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
}
}
else
{
lean_object* v___x_412_; lean_object* v___x_414_; 
lean_dec(v___x_300_);
lean_del_object(v___x_278_);
lean_dec(v_uniq_276_);
lean_dec(v_name_275_);
lean_dec_ref_known(v_p_266_, 2);
lean_dec(v_arg_245_);
lean_dec_ref(v_P_243_);
v___x_412_ = lean_box(0);
if (v_isShared_265_ == 0)
{
lean_ctor_set_tag(v___x_264_, 0);
lean_ctor_set(v___x_264_, 0, v___x_412_);
v___x_414_ = v___x_264_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v___x_412_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
else
{
lean_del_object(v___x_278_);
lean_dec(v_uniq_276_);
lean_dec(v_name_275_);
lean_dec_ref_known(v_p_266_, 2);
lean_del_object(v___x_264_);
lean_dec(v_arg_245_);
lean_dec_ref(v_QR_244_);
lean_dec_ref(v_P_243_);
goto v___jp_255_;
}
}
else
{
lean_del_object(v___x_278_);
lean_dec(v_uniq_276_);
lean_dec(v_name_275_);
lean_dec_ref_known(v_p_266_, 2);
lean_del_object(v___x_264_);
lean_dec(v_arg_245_);
lean_dec_ref(v_QR_244_);
lean_dec_ref(v_P_243_);
goto v___jp_255_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_p_266_, 2);
lean_del_object(v___x_264_);
lean_dec(v_val_262_);
lean_dec(v_arg_245_);
lean_dec_ref(v_QR_244_);
lean_dec_ref(v_P_243_);
goto v___jp_255_;
}
}
else
{
lean_dec_ref_known(v_p_266_, 2);
lean_del_object(v___x_264_);
lean_dec(v_val_262_);
lean_dec(v_arg_245_);
lean_dec_ref(v_QR_244_);
lean_dec_ref(v_P_243_);
goto v___jp_255_;
}
}
else
{
lean_dec_ref_known(v_p_266_, 2);
lean_del_object(v___x_264_);
lean_dec(v_val_262_);
lean_dec(v_arg_245_);
lean_dec_ref(v_QR_244_);
lean_dec_ref(v_P_243_);
goto v___jp_255_;
}
}
else
{
lean_dec_ref_known(v_p_266_, 2);
lean_del_object(v___x_264_);
lean_dec(v_val_262_);
lean_dec(v_arg_245_);
lean_dec_ref(v_QR_244_);
lean_dec_ref(v_P_243_);
goto v___jp_255_;
}
}
else
{
lean_dec_ref_known(v_p_266_, 2);
lean_del_object(v___x_264_);
lean_dec(v_val_262_);
lean_dec(v_arg_245_);
lean_dec_ref(v_QR_244_);
lean_dec_ref(v_P_243_);
goto v___jp_255_;
}
}
else
{
lean_dec_ref_known(v_p_266_, 2);
lean_del_object(v___x_264_);
lean_dec(v_val_262_);
lean_dec(v_arg_245_);
lean_dec_ref(v_QR_244_);
lean_dec_ref(v_P_243_);
goto v___jp_255_;
}
}
else
{
lean_dec_ref_known(v_p_266_, 2);
lean_del_object(v___x_264_);
lean_dec(v_val_262_);
lean_dec(v_arg_245_);
lean_dec_ref(v_QR_244_);
lean_dec_ref(v_P_243_);
goto v___jp_255_;
}
}
else
{
lean_dec_ref_known(v_p_266_, 2);
lean_del_object(v___x_264_);
lean_dec(v_val_262_);
lean_dec(v_arg_245_);
lean_dec_ref(v_QR_244_);
lean_dec_ref(v_P_243_);
goto v___jp_255_;
}
}
else
{
lean_dec_ref(v_p_266_);
lean_del_object(v___x_264_);
lean_dec(v_val_262_);
lean_dec(v_arg_245_);
lean_dec_ref(v_QR_244_);
lean_dec_ref(v_P_243_);
goto v___jp_255_;
}
}
}
else
{
lean_object* v___x_419_; lean_object* v___x_420_; 
lean_dec(v___x_261_);
lean_dec(v_arg_245_);
lean_dec_ref(v_QR_244_);
lean_dec_ref(v_P_243_);
v___x_419_ = lean_box(0);
v___x_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_420_, 0, v___x_419_);
return v___x_420_;
}
}
v___jp_255_:
{
lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_256_ = lean_box(0);
v___x_257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
return v___x_257_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___boxed(lean_object* v_P_421_, lean_object* v_QR_422_, lean_object* v_arg_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful(v_P_421_, v_QR_422_, v_arg_423_, v_a_424_, v_a_425_, v_a_426_, v_a_427_, v_a_428_, v_a_429_, v_a_430_, v_a_431_);
lean_dec(v_a_431_);
lean_dec_ref(v_a_430_);
lean_dec(v_a_429_);
lean_dec_ref(v_a_428_);
lean_dec(v_a_427_);
lean_dec_ref(v_a_426_);
lean_dec(v_a_425_);
lean_dec_ref(v_a_424_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0(lean_object* v_00_u03b1_434_, lean_object* v_msg_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0___redArg(v_msg_435_, v___y_440_, v___y_441_, v___y_442_, v___y_443_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0___boxed(lean_object* v_00_u03b1_446_, lean_object* v_msg_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0(v_00_u03b1_446_, v_msg_447_, v___y_448_, v___y_449_, v___y_450_, v___y_451_, v___y_452_, v___y_453_, v___y_454_, v___y_455_);
lean_dec(v___y_455_);
lean_dec_ref(v___y_454_);
lean_dec(v___y_453_);
lean_dec_ref(v___y_452_);
lean_dec(v___y_451_);
lean_dec_ref(v___y_450_);
lean_dec(v___y_449_);
lean_dec_ref(v___y_448_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1(lean_object* v_cls_458_, lean_object* v_msg_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_){
_start:
{
lean_object* v___x_469_; 
v___x_469_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg(v_cls_458_, v_msg_459_, v___y_464_, v___y_465_, v___y_466_, v___y_467_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___boxed(lean_object* v_cls_470_, lean_object* v_msg_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1(v_cls_470_, v_msg_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_);
lean_dec(v___y_479_);
lean_dec_ref(v___y_478_);
lean_dec(v___y_477_);
lean_dec_ref(v___y_476_);
lean_dec(v___y_475_);
lean_dec_ref(v___y_474_);
lean_dec(v___y_473_);
lean_dec_ref(v___y_472_);
return v_res_481_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__0(void){
_start:
{
lean_object* v___x_482_; 
v___x_482_ = l_instMonadEIO(lean_box(0));
return v___x_482_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0(lean_object* v_msg_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_){
_start:
{
lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v_toApplicative_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_593_; 
v___x_499_ = lean_obj_once(&l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__0, &l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__0_once, _init_l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__0);
v___x_500_ = l_StateRefT_x27_instMonad___redArg(v___x_499_);
v_toApplicative_501_ = lean_ctor_get(v___x_500_, 0);
v_isSharedCheck_593_ = !lean_is_exclusive(v___x_500_);
if (v_isSharedCheck_593_ == 0)
{
lean_object* v_unused_594_; 
v_unused_594_ = lean_ctor_get(v___x_500_, 1);
lean_dec(v_unused_594_);
v___x_503_ = v___x_500_;
v_isShared_504_ = v_isSharedCheck_593_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_toApplicative_501_);
lean_dec(v___x_500_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_593_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
lean_object* v_toFunctor_505_; lean_object* v_toSeq_506_; lean_object* v_toSeqLeft_507_; lean_object* v_toSeqRight_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_591_; 
v_toFunctor_505_ = lean_ctor_get(v_toApplicative_501_, 0);
v_toSeq_506_ = lean_ctor_get(v_toApplicative_501_, 2);
v_toSeqLeft_507_ = lean_ctor_get(v_toApplicative_501_, 3);
v_toSeqRight_508_ = lean_ctor_get(v_toApplicative_501_, 4);
v_isSharedCheck_591_ = !lean_is_exclusive(v_toApplicative_501_);
if (v_isSharedCheck_591_ == 0)
{
lean_object* v_unused_592_; 
v_unused_592_ = lean_ctor_get(v_toApplicative_501_, 1);
lean_dec(v_unused_592_);
v___x_510_ = v_toApplicative_501_;
v_isShared_511_ = v_isSharedCheck_591_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_toSeqRight_508_);
lean_inc(v_toSeqLeft_507_);
lean_inc(v_toSeq_506_);
lean_inc(v_toFunctor_505_);
lean_dec(v_toApplicative_501_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_591_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___f_512_; lean_object* v___f_513_; lean_object* v___f_514_; lean_object* v___f_515_; lean_object* v___x_516_; lean_object* v___f_517_; lean_object* v___f_518_; lean_object* v___f_519_; lean_object* v___x_521_; 
v___f_512_ = ((lean_object*)(l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__1));
v___f_513_ = ((lean_object*)(l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__2));
lean_inc_ref(v_toFunctor_505_);
v___f_514_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_514_, 0, v_toFunctor_505_);
v___f_515_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_515_, 0, v_toFunctor_505_);
v___x_516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_516_, 0, v___f_514_);
lean_ctor_set(v___x_516_, 1, v___f_515_);
v___f_517_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_517_, 0, v_toSeqRight_508_);
v___f_518_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_518_, 0, v_toSeqLeft_507_);
v___f_519_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_519_, 0, v_toSeq_506_);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 4, v___f_517_);
lean_ctor_set(v___x_510_, 3, v___f_518_);
lean_ctor_set(v___x_510_, 2, v___f_519_);
lean_ctor_set(v___x_510_, 1, v___f_512_);
lean_ctor_set(v___x_510_, 0, v___x_516_);
v___x_521_ = v___x_510_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v___x_516_);
lean_ctor_set(v_reuseFailAlloc_590_, 1, v___f_512_);
lean_ctor_set(v_reuseFailAlloc_590_, 2, v___f_519_);
lean_ctor_set(v_reuseFailAlloc_590_, 3, v___f_518_);
lean_ctor_set(v_reuseFailAlloc_590_, 4, v___f_517_);
v___x_521_ = v_reuseFailAlloc_590_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
lean_object* v___x_523_; 
if (v_isShared_504_ == 0)
{
lean_ctor_set(v___x_503_, 1, v___f_513_);
lean_ctor_set(v___x_503_, 0, v___x_521_);
v___x_523_ = v___x_503_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v___x_521_);
lean_ctor_set(v_reuseFailAlloc_589_, 1, v___f_513_);
v___x_523_ = v_reuseFailAlloc_589_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
lean_object* v___x_524_; lean_object* v_toApplicative_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_587_; 
v___x_524_ = l_StateRefT_x27_instMonad___redArg(v___x_523_);
v_toApplicative_525_ = lean_ctor_get(v___x_524_, 0);
v_isSharedCheck_587_ = !lean_is_exclusive(v___x_524_);
if (v_isSharedCheck_587_ == 0)
{
lean_object* v_unused_588_; 
v_unused_588_ = lean_ctor_get(v___x_524_, 1);
lean_dec(v_unused_588_);
v___x_527_ = v___x_524_;
v_isShared_528_ = v_isSharedCheck_587_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_toApplicative_525_);
lean_dec(v___x_524_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_587_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v_toFunctor_529_; lean_object* v_toSeq_530_; lean_object* v_toSeqLeft_531_; lean_object* v_toSeqRight_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_585_; 
v_toFunctor_529_ = lean_ctor_get(v_toApplicative_525_, 0);
v_toSeq_530_ = lean_ctor_get(v_toApplicative_525_, 2);
v_toSeqLeft_531_ = lean_ctor_get(v_toApplicative_525_, 3);
v_toSeqRight_532_ = lean_ctor_get(v_toApplicative_525_, 4);
v_isSharedCheck_585_ = !lean_is_exclusive(v_toApplicative_525_);
if (v_isSharedCheck_585_ == 0)
{
lean_object* v_unused_586_; 
v_unused_586_ = lean_ctor_get(v_toApplicative_525_, 1);
lean_dec(v_unused_586_);
v___x_534_ = v_toApplicative_525_;
v_isShared_535_ = v_isSharedCheck_585_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_toSeqRight_532_);
lean_inc(v_toSeqLeft_531_);
lean_inc(v_toSeq_530_);
lean_inc(v_toFunctor_529_);
lean_dec(v_toApplicative_525_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_585_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___f_536_; lean_object* v___f_537_; lean_object* v___f_538_; lean_object* v___f_539_; lean_object* v___x_540_; lean_object* v___f_541_; lean_object* v___f_542_; lean_object* v___f_543_; lean_object* v___x_545_; 
v___f_536_ = ((lean_object*)(l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__3));
v___f_537_ = ((lean_object*)(l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__4));
lean_inc_ref(v_toFunctor_529_);
v___f_538_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_538_, 0, v_toFunctor_529_);
v___f_539_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_539_, 0, v_toFunctor_529_);
v___x_540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_540_, 0, v___f_538_);
lean_ctor_set(v___x_540_, 1, v___f_539_);
v___f_541_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_541_, 0, v_toSeqRight_532_);
v___f_542_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_542_, 0, v_toSeqLeft_531_);
v___f_543_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_543_, 0, v_toSeq_530_);
if (v_isShared_535_ == 0)
{
lean_ctor_set(v___x_534_, 4, v___f_541_);
lean_ctor_set(v___x_534_, 3, v___f_542_);
lean_ctor_set(v___x_534_, 2, v___f_543_);
lean_ctor_set(v___x_534_, 1, v___f_536_);
lean_ctor_set(v___x_534_, 0, v___x_540_);
v___x_545_ = v___x_534_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v___x_540_);
lean_ctor_set(v_reuseFailAlloc_584_, 1, v___f_536_);
lean_ctor_set(v_reuseFailAlloc_584_, 2, v___f_543_);
lean_ctor_set(v_reuseFailAlloc_584_, 3, v___f_542_);
lean_ctor_set(v_reuseFailAlloc_584_, 4, v___f_541_);
v___x_545_ = v_reuseFailAlloc_584_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
lean_object* v___x_547_; 
if (v_isShared_528_ == 0)
{
lean_ctor_set(v___x_527_, 1, v___f_537_);
lean_ctor_set(v___x_527_, 0, v___x_545_);
v___x_547_ = v___x_527_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v___x_545_);
lean_ctor_set(v_reuseFailAlloc_583_, 1, v___f_537_);
v___x_547_ = v_reuseFailAlloc_583_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
lean_object* v___x_548_; lean_object* v_toApplicative_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_581_; 
v___x_548_ = l_StateRefT_x27_instMonad___redArg(v___x_547_);
v_toApplicative_549_ = lean_ctor_get(v___x_548_, 0);
v_isSharedCheck_581_ = !lean_is_exclusive(v___x_548_);
if (v_isSharedCheck_581_ == 0)
{
lean_object* v_unused_582_; 
v_unused_582_ = lean_ctor_get(v___x_548_, 1);
lean_dec(v_unused_582_);
v___x_551_ = v___x_548_;
v_isShared_552_ = v_isSharedCheck_581_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_toApplicative_549_);
lean_dec(v___x_548_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_581_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v_toFunctor_553_; lean_object* v_toSeq_554_; lean_object* v_toSeqLeft_555_; lean_object* v_toSeqRight_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_579_; 
v_toFunctor_553_ = lean_ctor_get(v_toApplicative_549_, 0);
v_toSeq_554_ = lean_ctor_get(v_toApplicative_549_, 2);
v_toSeqLeft_555_ = lean_ctor_get(v_toApplicative_549_, 3);
v_toSeqRight_556_ = lean_ctor_get(v_toApplicative_549_, 4);
v_isSharedCheck_579_ = !lean_is_exclusive(v_toApplicative_549_);
if (v_isSharedCheck_579_ == 0)
{
lean_object* v_unused_580_; 
v_unused_580_ = lean_ctor_get(v_toApplicative_549_, 1);
lean_dec(v_unused_580_);
v___x_558_ = v_toApplicative_549_;
v_isShared_559_ = v_isSharedCheck_579_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_toSeqRight_556_);
lean_inc(v_toSeqLeft_555_);
lean_inc(v_toSeq_554_);
lean_inc(v_toFunctor_553_);
lean_dec(v_toApplicative_549_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_579_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v___f_560_; lean_object* v___f_561_; lean_object* v___f_562_; lean_object* v___f_563_; lean_object* v___x_564_; lean_object* v___f_565_; lean_object* v___f_566_; lean_object* v___f_567_; lean_object* v___x_569_; 
v___f_560_ = ((lean_object*)(l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__5));
v___f_561_ = ((lean_object*)(l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___closed__6));
lean_inc_ref(v_toFunctor_553_);
v___f_562_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_562_, 0, v_toFunctor_553_);
v___f_563_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_563_, 0, v_toFunctor_553_);
v___x_564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_564_, 0, v___f_562_);
lean_ctor_set(v___x_564_, 1, v___f_563_);
v___f_565_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_565_, 0, v_toSeqRight_556_);
v___f_566_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_566_, 0, v_toSeqLeft_555_);
v___f_567_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_567_, 0, v_toSeq_554_);
if (v_isShared_559_ == 0)
{
lean_ctor_set(v___x_558_, 4, v___f_565_);
lean_ctor_set(v___x_558_, 3, v___f_566_);
lean_ctor_set(v___x_558_, 2, v___f_567_);
lean_ctor_set(v___x_558_, 1, v___f_560_);
lean_ctor_set(v___x_558_, 0, v___x_564_);
v___x_569_ = v___x_558_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v___x_564_);
lean_ctor_set(v_reuseFailAlloc_578_, 1, v___f_560_);
lean_ctor_set(v_reuseFailAlloc_578_, 2, v___f_567_);
lean_ctor_set(v_reuseFailAlloc_578_, 3, v___f_566_);
lean_ctor_set(v_reuseFailAlloc_578_, 4, v___f_565_);
v___x_569_ = v_reuseFailAlloc_578_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
lean_object* v___x_571_; 
if (v_isShared_552_ == 0)
{
lean_ctor_set(v___x_551_, 1, v___f_561_);
lean_ctor_set(v___x_551_, 0, v___x_569_);
v___x_571_ = v___x_551_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v___x_569_);
lean_ctor_set(v_reuseFailAlloc_577_, 1, v___f_561_);
v___x_571_ = v_reuseFailAlloc_577_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_10930__overap_575_; lean_object* v___x_576_; 
v___x_572_ = l_StateRefT_x27_instMonad___redArg(v___x_571_);
v___x_573_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_573_, 0, lean_box(0));
lean_closure_set(v___x_573_, 1, lean_box(0));
lean_closure_set(v___x_573_, 2, v___x_572_);
v___x_574_ = l_OptionT_instInhabitedOfPure___redArg(v___x_573_);
v___x_10930__overap_575_ = lean_panic_fn_borrowed(v___x_574_, v_msg_489_);
lean_dec(v___x_574_);
lean_inc(v___y_497_);
lean_inc_ref(v___y_496_);
lean_inc(v___y_495_);
lean_inc_ref(v___y_494_);
lean_inc(v___y_493_);
lean_inc_ref(v___y_492_);
lean_inc(v___y_491_);
lean_inc_ref(v___y_490_);
v___x_576_ = lean_apply_9(v___x_10930__overap_575_, v___y_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_, lean_box(0));
return v___x_576_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0___boxed(lean_object* v_msg_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_){
_start:
{
lean_object* v_res_605_; 
v_res_605_ = l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0(v_msg_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_);
lean_dec(v___y_603_);
lean_dec_ref(v___y_602_);
lean_dec(v___y_601_);
lean_dec_ref(v___y_600_);
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
lean_dec(v___y_597_);
lean_dec_ref(v___y_596_);
return v_res_605_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__0(void){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_606_ = lean_box(0);
v___x_607_ = l_Lean_mkSort(v___x_606_);
return v___x_607_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__1(void){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_608_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__0);
v___x_609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_609_, 0, v___x_608_);
return v___x_609_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__10(void){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_635_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__9));
v___x_636_ = l_Lean_stringToMessageData(v___x_635_);
return v___x_636_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__18(void){
_start:
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_655_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__17));
v___x_656_ = lean_unsigned_to_nat(37u);
v___x_657_ = lean_unsigned_to_nat(45u);
v___x_658_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__16));
v___x_659_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__15));
v___x_660_ = l_mkPanicMessageWithDecl(v___x_659_, v___x_658_, v___x_657_, v___x_656_, v___x_655_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure(lean_object* v_P_661_, lean_object* v_QR_662_, lean_object* v_arg_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_){
_start:
{
lean_object* v___x_676_; 
v___x_676_ = l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(v_QR_662_);
if (lean_obj_tag(v___x_676_) == 1)
{
lean_object* v_val_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_854_; 
v_val_677_ = lean_ctor_get(v___x_676_, 0);
v_isSharedCheck_854_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_854_ == 0)
{
v___x_679_ = v___x_676_;
v_isShared_680_ = v_isSharedCheck_854_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_val_677_);
lean_dec(v___x_676_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_854_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v_p_681_; 
v_p_681_ = lean_ctor_get(v_val_677_, 2);
lean_inc_ref(v_p_681_);
if (lean_obj_tag(v_p_681_) == 5)
{
lean_object* v_name_682_; lean_object* v_uniq_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_852_; 
v_name_682_ = lean_ctor_get(v_val_677_, 0);
v_uniq_683_ = lean_ctor_get(v_val_677_, 1);
v_isSharedCheck_852_ = !lean_is_exclusive(v_val_677_);
if (v_isSharedCheck_852_ == 0)
{
lean_object* v_unused_853_; 
v_unused_853_ = lean_ctor_get(v_val_677_, 2);
lean_dec(v_unused_853_);
v___x_685_ = v_val_677_;
v_isShared_686_ = v_isSharedCheck_852_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_uniq_683_);
lean_inc(v_name_682_);
lean_dec(v_val_677_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_852_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v_fn_687_; lean_object* v_arg_688_; lean_object* v___y_690_; 
v_fn_687_ = lean_ctor_get(v_p_681_, 0);
v_arg_688_ = lean_ctor_get(v_p_681_, 1);
lean_inc_ref(v_arg_688_);
if (lean_obj_tag(v_fn_687_) == 5)
{
lean_object* v_fn_700_; 
v_fn_700_ = lean_ctor_get(v_fn_687_, 0);
if (lean_obj_tag(v_fn_700_) == 5)
{
lean_object* v_fn_701_; 
v_fn_701_ = lean_ctor_get(v_fn_700_, 0);
if (lean_obj_tag(v_fn_701_) == 4)
{
lean_object* v_declName_702_; 
v_declName_702_ = lean_ctor_get(v_fn_701_, 0);
if (lean_obj_tag(v_declName_702_) == 1)
{
lean_object* v_pre_703_; 
v_pre_703_ = lean_ctor_get(v_declName_702_, 0);
if (lean_obj_tag(v_pre_703_) == 1)
{
lean_object* v_pre_704_; 
v_pre_704_ = lean_ctor_get(v_pre_703_, 0);
if (lean_obj_tag(v_pre_704_) == 1)
{
lean_object* v_pre_705_; 
v_pre_705_ = lean_ctor_get(v_pre_704_, 0);
if (lean_obj_tag(v_pre_705_) == 1)
{
lean_object* v_pre_706_; 
v_pre_706_ = lean_ctor_get(v_pre_705_, 0);
if (lean_obj_tag(v_pre_706_) == 0)
{
lean_object* v_arg_707_; lean_object* v_arg_708_; lean_object* v_us_709_; lean_object* v_str_710_; lean_object* v_str_711_; lean_object* v_str_712_; lean_object* v_str_713_; lean_object* v___x_714_; uint8_t v___x_715_; 
v_arg_707_ = lean_ctor_get(v_fn_687_, 1);
lean_inc_ref(v_arg_707_);
v_arg_708_ = lean_ctor_get(v_fn_700_, 1);
lean_inc_ref(v_arg_708_);
v_us_709_ = lean_ctor_get(v_fn_701_, 1);
v_str_710_ = lean_ctor_get(v_declName_702_, 1);
v_str_711_ = lean_ctor_get(v_pre_703_, 1);
v_str_712_ = lean_ctor_get(v_pre_704_, 1);
v_str_713_ = lean_ctor_get(v_pre_705_, 1);
v___x_714_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0));
v___x_715_ = lean_string_dec_eq(v_str_713_, v___x_714_);
if (v___x_715_ == 0)
{
lean_dec_ref(v_arg_708_);
lean_dec_ref(v_arg_707_);
lean_dec_ref(v_arg_688_);
lean_del_object(v___x_685_);
lean_dec(v_uniq_683_);
lean_dec(v_name_682_);
lean_dec_ref_known(v_p_681_, 2);
lean_del_object(v___x_679_);
lean_dec(v_arg_663_);
lean_dec_ref(v_P_661_);
goto v___jp_673_;
}
else
{
lean_object* v___x_716_; uint8_t v___x_717_; 
v___x_716_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_717_ = lean_string_dec_eq(v_str_712_, v___x_716_);
if (v___x_717_ == 0)
{
lean_dec_ref(v_arg_708_);
lean_dec_ref(v_arg_707_);
lean_dec_ref(v_arg_688_);
lean_del_object(v___x_685_);
lean_dec(v_uniq_683_);
lean_dec(v_name_682_);
lean_dec_ref_known(v_p_681_, 2);
lean_del_object(v___x_679_);
lean_dec(v_arg_663_);
lean_dec_ref(v_P_661_);
goto v___jp_673_;
}
else
{
lean_object* v___x_718_; uint8_t v___x_719_; 
v___x_718_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__1));
v___x_719_ = lean_string_dec_eq(v_str_711_, v___x_718_);
if (v___x_719_ == 0)
{
lean_dec_ref(v_arg_708_);
lean_dec_ref(v_arg_707_);
lean_dec_ref(v_arg_688_);
lean_del_object(v___x_685_);
lean_dec(v_uniq_683_);
lean_dec(v_name_682_);
lean_dec_ref_known(v_p_681_, 2);
lean_del_object(v___x_679_);
lean_dec(v_arg_663_);
lean_dec_ref(v_P_661_);
goto v___jp_673_;
}
else
{
lean_object* v___x_720_; uint8_t v___x_721_; 
v___x_720_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__2));
v___x_721_ = lean_string_dec_eq(v_str_710_, v___x_720_);
if (v___x_721_ == 0)
{
lean_dec_ref(v_arg_708_);
lean_dec_ref(v_arg_707_);
lean_dec_ref(v_arg_688_);
lean_del_object(v___x_685_);
lean_dec(v_uniq_683_);
lean_dec(v_name_682_);
lean_dec_ref_known(v_p_681_, 2);
lean_del_object(v___x_679_);
lean_dec(v_arg_663_);
lean_dec_ref(v_P_661_);
goto v___jp_673_;
}
else
{
if (lean_obj_tag(v_us_709_) == 1)
{
lean_object* v_tail_722_; 
v_tail_722_ = lean_ctor_get(v_us_709_, 1);
if (lean_obj_tag(v_tail_722_) == 0)
{
lean_object* v_head_723_; lean_object* v___x_724_; uint8_t v___x_725_; lean_object* v___x_726_; 
v_head_723_ = lean_ctor_get(v_us_709_, 0);
lean_inc(v_head_723_);
v___x_724_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__1);
v___x_725_ = 0;
v___x_726_ = l_Lean_Meta_mkFreshExprMVar(v___x_724_, v___x_725_, v_pre_706_, v_a_668_, v_a_669_, v_a_670_, v_a_671_);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_object* v_a_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v_a_727_ = lean_ctor_get(v___x_726_, 0);
lean_inc_n(v_a_727_, 2);
lean_dec_ref_known(v___x_726_, 1);
v___x_728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_728_, 0, v_a_727_);
v___x_729_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__2));
v___x_730_ = lean_box(0);
v___x_731_ = l_Lean_Elab_Tactic_elabTermWithHoles(v_arg_663_, v___x_728_, v___x_729_, v___x_721_, v___x_730_, v_a_664_, v_a_665_, v_a_666_, v_a_667_, v_a_668_, v_a_669_, v_a_670_, v_a_671_);
if (lean_obj_tag(v___x_731_) == 0)
{
lean_object* v_a_732_; lean_object* v_fst_733_; lean_object* v_snd_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_828_; 
v_a_732_ = lean_ctor_get(v___x_731_, 0);
lean_inc(v_a_732_);
lean_dec_ref_known(v___x_731_, 1);
v_fst_733_ = lean_ctor_get(v_a_732_, 0);
v_snd_734_ = lean_ctor_get(v_a_732_, 1);
v_isSharedCheck_828_ = !lean_is_exclusive(v_a_732_);
if (v_isSharedCheck_828_ == 0)
{
v___x_736_ = v_a_732_;
v_isShared_737_ = v_isSharedCheck_828_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_snd_734_);
lean_inc(v_fst_733_);
lean_dec(v_a_732_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_828_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_738_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__4));
lean_inc_ref(v_us_709_);
v___x_739_ = l_Lean_mkConst(v___x_738_, v_us_709_);
lean_inc(v_a_727_);
lean_inc_ref(v_arg_707_);
lean_inc_ref(v_arg_708_);
v___x_740_ = l_Lean_mkApp3(v___x_739_, v_arg_708_, v_arg_707_, v_a_727_);
v___x_741_ = l_Lean_Meta_synthInstance_x3f(v___x_740_, v___x_730_, v_a_668_, v_a_669_, v_a_670_, v_a_671_);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v_a_742_; lean_object* v_00_u03c6_744_; lean_object* v_h_u03c6_745_; lean_object* v___y_746_; lean_object* v___y_747_; lean_object* v___y_748_; lean_object* v___y_749_; lean_object* v___y_750_; 
v_a_742_ = lean_ctor_get(v___x_741_, 0);
lean_inc(v_a_742_);
lean_dec_ref_known(v___x_741_, 1);
if (lean_obj_tag(v_a_742_) == 1)
{
lean_object* v_val_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v_val_813_ = lean_ctor_get(v_a_742_, 0);
lean_inc(v_val_813_);
lean_dec_ref_known(v_a_742_, 1);
v___x_814_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__12));
lean_inc_ref_n(v_us_709_, 2);
v___x_815_ = l_Lean_mkConst(v___x_814_, v_us_709_);
lean_inc_ref_n(v_arg_707_, 2);
lean_inc_ref_n(v_arg_708_, 2);
v___x_816_ = l_Lean_mkApp5(v___x_815_, v_arg_708_, v_a_727_, v_arg_707_, v_val_813_, v_fst_733_);
v___x_817_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__14));
v___x_818_ = l_Lean_mkConst(v___x_817_, v_us_709_);
v___x_819_ = l_Lean_mkAppB(v___x_818_, v_arg_708_, v_arg_707_);
v_00_u03c6_744_ = v___x_819_;
v_h_u03c6_745_ = v___x_816_;
v___y_746_ = v_a_665_;
v___y_747_ = v_a_668_;
v___y_748_ = v_a_669_;
v___y_749_ = v_a_670_;
v___y_750_ = v_a_671_;
goto v___jp_743_;
}
else
{
lean_dec(v_a_742_);
v_00_u03c6_744_ = v_a_727_;
v_h_u03c6_745_ = v_fst_733_;
v___y_746_ = v_a_665_;
v___y_747_ = v_a_668_;
v___y_748_ = v_a_669_;
v___y_749_ = v_a_670_;
v___y_750_ = v_a_671_;
goto v___jp_743_;
}
v___jp_743_:
{
lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
v___x_751_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__6));
lean_inc_ref(v_us_709_);
v___x_752_ = l_Lean_mkConst(v___x_751_, v_us_709_);
lean_inc_ref(v_arg_707_);
lean_inc_ref(v_arg_708_);
lean_inc_ref(v_00_u03c6_744_);
v___x_753_ = l_Lean_mkApp3(v___x_752_, v_00_u03c6_744_, v_arg_708_, v_arg_707_);
v___x_754_ = l_Lean_Meta_synthInstance_x3f(v___x_753_, v___x_730_, v___y_747_, v___y_748_, v___y_749_, v___y_750_);
if (lean_obj_tag(v___x_754_) == 0)
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_804_; 
v_a_755_ = lean_ctor_get(v___x_754_, 0);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_754_);
if (v_isSharedCheck_804_ == 0)
{
v___x_757_ = v___x_754_;
v_isShared_758_ = v_isSharedCheck_804_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v___x_754_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_804_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
if (lean_obj_tag(v_a_755_) == 1)
{
lean_object* v_val_759_; lean_object* v___x_760_; 
lean_del_object(v___x_757_);
v_val_759_ = lean_ctor_get(v_a_755_, 0);
lean_inc(v_val_759_);
lean_dec_ref_known(v_a_755_, 1);
v___x_760_ = l_Lean_Elab_Tactic_pushGoals___redArg(v_snd_734_, v___y_746_);
if (lean_obj_tag(v___x_760_) == 0)
{
lean_object* v_options_761_; lean_object* v_inheritedTraceOptions_762_; uint8_t v_hasTrace_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
lean_dec_ref_known(v___x_760_, 1);
v_options_761_ = lean_ctor_get(v___y_749_, 2);
v_inheritedTraceOptions_762_ = lean_ctor_get(v___y_749_, 13);
v_hasTrace_763_ = lean_ctor_get_uint8(v_options_761_, sizeof(void*)*1);
v___x_764_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__8));
lean_inc_ref(v_us_709_);
v___x_765_ = l_Lean_mkConst(v___x_764_, v_us_709_);
lean_inc_ref(v_arg_688_);
lean_inc_ref(v_arg_707_);
lean_inc_ref(v_P_661_);
lean_inc_ref(v_arg_708_);
v___x_766_ = l_Lean_mkApp7(v___x_765_, v_arg_708_, v_00_u03c6_744_, v_P_661_, v_arg_707_, v_arg_688_, v_val_759_, v_h_u03c6_745_);
if (v_hasTrace_763_ == 0)
{
lean_del_object(v___x_736_);
lean_dec(v_head_723_);
lean_dec_ref(v_arg_708_);
lean_dec_ref(v_arg_707_);
lean_dec_ref_known(v_p_681_, 2);
lean_dec_ref(v_P_661_);
v___y_690_ = v___x_766_;
goto v___jp_689_;
}
else
{
lean_object* v___x_767_; lean_object* v___x_768_; uint8_t v___x_769_; 
v___x_767_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_768_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__11, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__11_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__11);
v___x_769_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_762_, v_options_761_, v___x_768_);
if (v___x_769_ == 0)
{
lean_del_object(v___x_736_);
lean_dec(v_head_723_);
lean_dec_ref(v_arg_708_);
lean_dec_ref(v_arg_707_);
lean_dec_ref_known(v_p_681_, 2);
lean_dec_ref(v_P_661_);
v___y_690_ = v___x_766_;
goto v___jp_689_;
}
else
{
lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_773_; 
v___x_770_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__10, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__10_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__10);
v___x_771_ = l_Lean_MessageData_ofExpr(v_p_681_);
if (v_isShared_737_ == 0)
{
lean_ctor_set_tag(v___x_736_, 7);
lean_ctor_set(v___x_736_, 1, v___x_771_);
lean_ctor_set(v___x_736_, 0, v___x_770_);
v___x_773_ = v___x_736_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v___x_770_);
lean_ctor_set(v_reuseFailAlloc_792_, 1, v___x_771_);
v___x_773_ = v_reuseFailAlloc_792_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_774_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8);
v___x_775_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_775_, 0, v___x_773_);
lean_ctor_set(v___x_775_, 1, v___x_774_);
v___x_776_ = l_Lean_MessageData_ofExpr(v_arg_707_);
v___x_777_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_777_, 0, v___x_775_);
lean_ctor_set(v___x_777_, 1, v___x_776_);
v___x_778_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__15, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__15_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__15);
v___x_779_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_779_, 0, v___x_777_);
lean_ctor_set(v___x_779_, 1, v___x_778_);
lean_inc_ref(v_arg_688_);
v___x_780_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_head_723_, v_arg_708_, v_P_661_, v_arg_688_);
v___x_781_ = l_Lean_MessageData_ofExpr(v___x_780_);
v___x_782_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_782_, 0, v___x_779_);
lean_ctor_set(v___x_782_, 1, v___x_781_);
v___x_783_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg(v___x_767_, v___x_782_, v___y_747_, v___y_748_, v___y_749_, v___y_750_);
if (lean_obj_tag(v___x_783_) == 0)
{
lean_dec_ref_known(v___x_783_, 1);
v___y_690_ = v___x_766_;
goto v___jp_689_;
}
else
{
lean_object* v_a_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_791_; 
lean_dec_ref(v___x_766_);
lean_dec_ref(v_arg_688_);
lean_del_object(v___x_685_);
lean_dec(v_uniq_683_);
lean_dec(v_name_682_);
lean_del_object(v___x_679_);
v_a_784_ = lean_ctor_get(v___x_783_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v___x_783_);
if (v_isSharedCheck_791_ == 0)
{
v___x_786_ = v___x_783_;
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_a_784_);
lean_dec(v___x_783_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_789_; 
if (v_isShared_787_ == 0)
{
v___x_789_ = v___x_786_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_a_784_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_800_; 
lean_dec(v_val_759_);
lean_dec_ref(v_h_u03c6_745_);
lean_dec_ref(v_00_u03c6_744_);
lean_del_object(v___x_736_);
lean_dec(v_head_723_);
lean_dec_ref(v_arg_708_);
lean_dec_ref(v_arg_707_);
lean_dec_ref(v_arg_688_);
lean_del_object(v___x_685_);
lean_dec(v_uniq_683_);
lean_dec_ref_known(v_p_681_, 2);
lean_dec(v_name_682_);
lean_del_object(v___x_679_);
lean_dec_ref(v_P_661_);
v_a_793_ = lean_ctor_get(v___x_760_, 0);
v_isSharedCheck_800_ = !lean_is_exclusive(v___x_760_);
if (v_isSharedCheck_800_ == 0)
{
v___x_795_ = v___x_760_;
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_a_793_);
lean_dec(v___x_760_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_798_; 
if (v_isShared_796_ == 0)
{
v___x_798_ = v___x_795_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v_a_793_);
v___x_798_ = v_reuseFailAlloc_799_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
return v___x_798_;
}
}
}
}
else
{
lean_object* v___x_802_; 
lean_dec(v_a_755_);
lean_dec_ref(v_h_u03c6_745_);
lean_dec_ref(v_00_u03c6_744_);
lean_del_object(v___x_736_);
lean_dec(v_snd_734_);
lean_dec(v_head_723_);
lean_dec_ref(v_arg_708_);
lean_dec_ref(v_arg_707_);
lean_dec_ref(v_arg_688_);
lean_del_object(v___x_685_);
lean_dec(v_uniq_683_);
lean_dec_ref_known(v_p_681_, 2);
lean_dec(v_name_682_);
lean_del_object(v___x_679_);
lean_dec_ref(v_P_661_);
if (v_isShared_758_ == 0)
{
lean_ctor_set(v___x_757_, 0, v___x_730_);
v___x_802_ = v___x_757_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v___x_730_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
return v___x_802_;
}
}
}
}
else
{
lean_object* v_a_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_812_; 
lean_dec_ref(v_h_u03c6_745_);
lean_dec_ref(v_00_u03c6_744_);
lean_del_object(v___x_736_);
lean_dec(v_snd_734_);
lean_dec(v_head_723_);
lean_dec_ref(v_arg_708_);
lean_dec_ref(v_arg_707_);
lean_dec_ref(v_arg_688_);
lean_del_object(v___x_685_);
lean_dec(v_uniq_683_);
lean_dec_ref_known(v_p_681_, 2);
lean_dec(v_name_682_);
lean_del_object(v___x_679_);
lean_dec_ref(v_P_661_);
v_a_805_ = lean_ctor_get(v___x_754_, 0);
v_isSharedCheck_812_ = !lean_is_exclusive(v___x_754_);
if (v_isSharedCheck_812_ == 0)
{
v___x_807_ = v___x_754_;
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_a_805_);
lean_dec(v___x_754_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
lean_object* v___x_810_; 
if (v_isShared_808_ == 0)
{
v___x_810_ = v___x_807_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v_a_805_);
v___x_810_ = v_reuseFailAlloc_811_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
return v___x_810_;
}
}
}
}
}
else
{
lean_object* v_a_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_827_; 
lean_del_object(v___x_736_);
lean_dec(v_snd_734_);
lean_dec(v_fst_733_);
lean_dec(v_a_727_);
lean_dec(v_head_723_);
lean_dec_ref(v_arg_708_);
lean_dec_ref(v_arg_707_);
lean_dec_ref(v_arg_688_);
lean_del_object(v___x_685_);
lean_dec(v_uniq_683_);
lean_dec_ref_known(v_p_681_, 2);
lean_dec(v_name_682_);
lean_del_object(v___x_679_);
lean_dec_ref(v_P_661_);
v_a_820_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_827_ == 0)
{
v___x_822_ = v___x_741_;
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_a_820_);
lean_dec(v___x_741_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_825_; 
if (v_isShared_823_ == 0)
{
v___x_825_ = v___x_822_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v_a_820_);
v___x_825_ = v_reuseFailAlloc_826_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
return v___x_825_;
}
}
}
}
}
else
{
lean_object* v_a_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_843_; 
lean_dec(v_a_727_);
lean_dec(v_head_723_);
lean_dec_ref(v_arg_708_);
lean_dec_ref(v_arg_707_);
lean_dec_ref(v_arg_688_);
lean_del_object(v___x_685_);
lean_dec(v_uniq_683_);
lean_dec_ref_known(v_p_681_, 2);
lean_dec(v_name_682_);
lean_del_object(v___x_679_);
lean_dec_ref(v_P_661_);
v_a_829_ = lean_ctor_get(v___x_731_, 0);
v_isSharedCheck_843_ = !lean_is_exclusive(v___x_731_);
if (v_isSharedCheck_843_ == 0)
{
v___x_831_ = v___x_731_;
v_isShared_832_ = v_isSharedCheck_843_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_a_829_);
lean_dec(v___x_731_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_843_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
uint8_t v___y_834_; uint8_t v___x_841_; 
v___x_841_ = l_Lean_Exception_isInterrupt(v_a_829_);
if (v___x_841_ == 0)
{
uint8_t v___x_842_; 
lean_inc(v_a_829_);
v___x_842_ = l_Lean_Exception_isRuntime(v_a_829_);
v___y_834_ = v___x_842_;
goto v___jp_833_;
}
else
{
v___y_834_ = v___x_841_;
goto v___jp_833_;
}
v___jp_833_:
{
if (v___y_834_ == 0)
{
lean_object* v___x_836_; 
lean_dec(v_a_829_);
if (v_isShared_832_ == 0)
{
lean_ctor_set_tag(v___x_831_, 0);
lean_ctor_set(v___x_831_, 0, v___x_730_);
v___x_836_ = v___x_831_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v___x_730_);
v___x_836_ = v_reuseFailAlloc_837_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
return v___x_836_;
}
}
else
{
lean_object* v___x_839_; 
if (v_isShared_832_ == 0)
{
v___x_839_ = v___x_831_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_a_829_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
}
}
}
}
else
{
lean_object* v_a_844_; lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_851_; 
lean_dec(v_head_723_);
lean_dec_ref(v_arg_708_);
lean_dec_ref(v_arg_707_);
lean_dec_ref(v_arg_688_);
lean_del_object(v___x_685_);
lean_dec(v_uniq_683_);
lean_dec(v_name_682_);
lean_dec_ref_known(v_p_681_, 2);
lean_del_object(v___x_679_);
lean_dec(v_arg_663_);
lean_dec_ref(v_P_661_);
v_a_844_ = lean_ctor_get(v___x_726_, 0);
v_isSharedCheck_851_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_851_ == 0)
{
v___x_846_ = v___x_726_;
v_isShared_847_ = v_isSharedCheck_851_;
goto v_resetjp_845_;
}
else
{
lean_inc(v_a_844_);
lean_dec(v___x_726_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_851_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v___x_849_; 
if (v_isShared_847_ == 0)
{
v___x_849_ = v___x_846_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v_a_844_);
v___x_849_ = v_reuseFailAlloc_850_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
return v___x_849_;
}
}
}
}
else
{
lean_dec_ref(v_arg_708_);
lean_dec_ref(v_arg_707_);
lean_dec_ref(v_arg_688_);
lean_del_object(v___x_685_);
lean_dec(v_uniq_683_);
lean_dec(v_name_682_);
lean_dec_ref_known(v_p_681_, 2);
lean_del_object(v___x_679_);
lean_dec(v_arg_663_);
lean_dec_ref(v_P_661_);
goto v___jp_673_;
}
}
else
{
lean_dec_ref(v_arg_708_);
lean_dec_ref(v_arg_707_);
lean_dec_ref(v_arg_688_);
lean_del_object(v___x_685_);
lean_dec(v_uniq_683_);
lean_dec(v_name_682_);
lean_dec_ref_known(v_p_681_, 2);
lean_del_object(v___x_679_);
lean_dec(v_arg_663_);
lean_dec_ref(v_P_661_);
goto v___jp_673_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_arg_688_);
lean_del_object(v___x_685_);
lean_dec(v_uniq_683_);
lean_dec_ref_known(v_p_681_, 2);
lean_dec(v_name_682_);
lean_del_object(v___x_679_);
lean_dec(v_arg_663_);
lean_dec_ref(v_P_661_);
goto v___jp_673_;
}
}
else
{
lean_dec_ref(v_arg_688_);
lean_del_object(v___x_685_);
lean_dec(v_uniq_683_);
lean_dec_ref_known(v_p_681_, 2);
lean_dec(v_name_682_);
lean_del_object(v___x_679_);
lean_dec(v_arg_663_);
lean_dec_ref(v_P_661_);
goto v___jp_673_;
}
}
else
{
lean_dec_ref(v_arg_688_);
lean_del_object(v___x_685_);
lean_dec(v_uniq_683_);
lean_dec_ref_known(v_p_681_, 2);
lean_dec(v_name_682_);
lean_del_object(v___x_679_);
lean_dec(v_arg_663_);
lean_dec_ref(v_P_661_);
goto v___jp_673_;
}
}
else
{
lean_dec_ref(v_arg_688_);
lean_del_object(v___x_685_);
lean_dec(v_uniq_683_);
lean_dec_ref_known(v_p_681_, 2);
lean_dec(v_name_682_);
lean_del_object(v___x_679_);
lean_dec(v_arg_663_);
lean_dec_ref(v_P_661_);
goto v___jp_673_;
}
}
else
{
lean_dec_ref(v_arg_688_);
lean_del_object(v___x_685_);
lean_dec(v_uniq_683_);
lean_dec_ref_known(v_p_681_, 2);
lean_dec(v_name_682_);
lean_del_object(v___x_679_);
lean_dec(v_arg_663_);
lean_dec_ref(v_P_661_);
goto v___jp_673_;
}
}
else
{
lean_dec_ref(v_arg_688_);
lean_del_object(v___x_685_);
lean_dec(v_uniq_683_);
lean_dec_ref_known(v_p_681_, 2);
lean_dec(v_name_682_);
lean_del_object(v___x_679_);
lean_dec(v_arg_663_);
lean_dec_ref(v_P_661_);
goto v___jp_673_;
}
}
else
{
lean_dec_ref(v_arg_688_);
lean_del_object(v___x_685_);
lean_dec(v_uniq_683_);
lean_dec_ref_known(v_p_681_, 2);
lean_dec(v_name_682_);
lean_del_object(v___x_679_);
lean_dec(v_arg_663_);
lean_dec_ref(v_P_661_);
goto v___jp_673_;
}
}
else
{
lean_dec_ref(v_arg_688_);
lean_del_object(v___x_685_);
lean_dec(v_uniq_683_);
lean_dec_ref_known(v_p_681_, 2);
lean_dec(v_name_682_);
lean_del_object(v___x_679_);
lean_dec(v_arg_663_);
lean_dec_ref(v_P_661_);
goto v___jp_673_;
}
v___jp_689_:
{
lean_object* v___x_692_; 
if (v_isShared_686_ == 0)
{
lean_ctor_set(v___x_685_, 2, v_arg_688_);
v___x_692_ = v___x_685_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_name_682_);
lean_ctor_set(v_reuseFailAlloc_699_, 1, v_uniq_683_);
lean_ctor_set(v_reuseFailAlloc_699_, 2, v_arg_688_);
v___x_692_ = v_reuseFailAlloc_699_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_696_; 
v___x_693_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_692_);
v___x_694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_694_, 0, v___x_693_);
lean_ctor_set(v___x_694_, 1, v___y_690_);
if (v_isShared_680_ == 0)
{
lean_ctor_set(v___x_679_, 0, v___x_694_);
v___x_696_ = v___x_679_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v___x_694_);
v___x_696_ = v_reuseFailAlloc_698_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
lean_object* v___x_697_; 
v___x_697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_697_, 0, v___x_696_);
return v___x_697_;
}
}
}
}
}
else
{
lean_dec_ref(v_p_681_);
lean_del_object(v___x_679_);
lean_dec(v_val_677_);
lean_dec(v_arg_663_);
lean_dec_ref(v_P_661_);
goto v___jp_673_;
}
}
}
else
{
lean_object* v___x_855_; lean_object* v___x_856_; 
lean_dec(v___x_676_);
lean_dec(v_arg_663_);
lean_dec_ref(v_P_661_);
v___x_855_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__18, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__18_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__18);
v___x_856_ = l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0(v___x_855_, v_a_664_, v_a_665_, v_a_666_, v_a_667_, v_a_668_, v_a_669_, v_a_670_, v_a_671_);
return v___x_856_;
}
v___jp_673_:
{
lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_674_ = lean_box(0);
v___x_675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_675_, 0, v___x_674_);
return v___x_675_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___boxed(lean_object* v_P_857_, lean_object* v_QR_858_, lean_object* v_arg_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure(v_P_857_, v_QR_858_, v_arg_859_, v_a_860_, v_a_861_, v_a_862_, v_a_863_, v_a_864_, v_a_865_, v_a_866_, v_a_867_);
lean_dec(v_a_867_);
lean_dec_ref(v_a_866_);
lean_dec(v_a_865_);
lean_dec_ref(v_a_864_);
lean_dec(v_a_863_);
lean_dec_ref(v_a_862_);
lean_dec(v_a_861_);
lean_dec_ref(v_a_860_);
return v_res_869_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__3(void){
_start:
{
lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_879_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__2));
v___x_880_ = l_Lean_stringToMessageData(v___x_879_);
return v___x_880_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__6(void){
_start:
{
lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_883_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__5));
v___x_884_ = lean_unsigned_to_nat(36u);
v___x_885_ = lean_unsigned_to_nat(73u);
v___x_886_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__4));
v___x_887_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__15));
v___x_888_ = l_mkPanicMessageWithDecl(v___x_887_, v___x_886_, v___x_885_, v___x_884_, v___x_883_);
return v___x_888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall(lean_object* v_P_889_, lean_object* v_00_u03a8_890_, lean_object* v_arg_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_, lean_object* v_a_895_, lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_){
_start:
{
lean_object* v___x_904_; 
v___x_904_ = l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(v_00_u03a8_890_);
if (lean_obj_tag(v___x_904_) == 1)
{
lean_object* v_val_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_1039_; 
v_val_905_ = lean_ctor_get(v___x_904_, 0);
v_isSharedCheck_1039_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_1039_ == 0)
{
v___x_907_ = v___x_904_;
v_isShared_908_ = v_isSharedCheck_1039_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_val_905_);
lean_dec(v___x_904_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_1039_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v_p_909_; 
v_p_909_ = lean_ctor_get(v_val_905_, 2);
lean_inc_ref(v_p_909_);
if (lean_obj_tag(v_p_909_) == 5)
{
lean_object* v_fn_910_; 
v_fn_910_ = lean_ctor_get(v_p_909_, 0);
if (lean_obj_tag(v_fn_910_) == 5)
{
lean_object* v_fn_911_; 
v_fn_911_ = lean_ctor_get(v_fn_910_, 0);
if (lean_obj_tag(v_fn_911_) == 5)
{
lean_object* v_fn_912_; 
v_fn_912_ = lean_ctor_get(v_fn_911_, 0);
if (lean_obj_tag(v_fn_912_) == 4)
{
lean_object* v_declName_913_; 
v_declName_913_ = lean_ctor_get(v_fn_912_, 0);
if (lean_obj_tag(v_declName_913_) == 1)
{
lean_object* v_pre_914_; 
v_pre_914_ = lean_ctor_get(v_declName_913_, 0);
if (lean_obj_tag(v_pre_914_) == 1)
{
lean_object* v_pre_915_; 
v_pre_915_ = lean_ctor_get(v_pre_914_, 0);
if (lean_obj_tag(v_pre_915_) == 1)
{
lean_object* v_pre_916_; 
v_pre_916_ = lean_ctor_get(v_pre_915_, 0);
if (lean_obj_tag(v_pre_916_) == 1)
{
lean_object* v_pre_917_; 
v_pre_917_ = lean_ctor_get(v_pre_916_, 0);
if (lean_obj_tag(v_pre_917_) == 0)
{
lean_object* v_name_918_; lean_object* v_uniq_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_1037_; 
v_name_918_ = lean_ctor_get(v_val_905_, 0);
v_uniq_919_ = lean_ctor_get(v_val_905_, 1);
v_isSharedCheck_1037_ = !lean_is_exclusive(v_val_905_);
if (v_isSharedCheck_1037_ == 0)
{
lean_object* v_unused_1038_; 
v_unused_1038_ = lean_ctor_get(v_val_905_, 2);
lean_dec(v_unused_1038_);
v___x_921_ = v_val_905_;
v_isShared_922_ = v_isSharedCheck_1037_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_uniq_919_);
lean_inc(v_name_918_);
lean_dec(v_val_905_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_1037_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v_arg_923_; lean_object* v_arg_924_; lean_object* v_arg_925_; lean_object* v_us_926_; lean_object* v_str_927_; lean_object* v_str_928_; lean_object* v_str_929_; lean_object* v_str_930_; lean_object* v___x_931_; uint8_t v___x_932_; 
v_arg_923_ = lean_ctor_get(v_p_909_, 1);
v_arg_924_ = lean_ctor_get(v_fn_910_, 1);
lean_inc_ref(v_arg_924_);
v_arg_925_ = lean_ctor_get(v_fn_911_, 1);
v_us_926_ = lean_ctor_get(v_fn_912_, 1);
v_str_927_ = lean_ctor_get(v_declName_913_, 1);
v_str_928_ = lean_ctor_get(v_pre_914_, 1);
v_str_929_ = lean_ctor_get(v_pre_915_, 1);
v_str_930_ = lean_ctor_get(v_pre_916_, 1);
v___x_931_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0));
v___x_932_ = lean_string_dec_eq(v_str_930_, v___x_931_);
if (v___x_932_ == 0)
{
lean_dec_ref(v_arg_924_);
lean_del_object(v___x_921_);
lean_dec(v_uniq_919_);
lean_dec(v_name_918_);
lean_dec_ref_known(v_p_909_, 2);
lean_del_object(v___x_907_);
lean_dec(v_arg_891_);
lean_dec_ref(v_P_889_);
goto v___jp_901_;
}
else
{
lean_object* v___x_933_; uint8_t v___x_934_; 
v___x_933_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_934_ = lean_string_dec_eq(v_str_929_, v___x_933_);
if (v___x_934_ == 0)
{
lean_dec_ref(v_arg_924_);
lean_del_object(v___x_921_);
lean_dec(v_uniq_919_);
lean_dec(v_name_918_);
lean_dec_ref_known(v_p_909_, 2);
lean_del_object(v___x_907_);
lean_dec(v_arg_891_);
lean_dec_ref(v_P_889_);
goto v___jp_901_;
}
else
{
lean_object* v___x_935_; uint8_t v___x_936_; 
v___x_935_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__1));
v___x_936_ = lean_string_dec_eq(v_str_928_, v___x_935_);
if (v___x_936_ == 0)
{
lean_dec_ref(v_arg_924_);
lean_del_object(v___x_921_);
lean_dec(v_uniq_919_);
lean_dec(v_name_918_);
lean_dec_ref_known(v_p_909_, 2);
lean_del_object(v___x_907_);
lean_dec(v_arg_891_);
lean_dec_ref(v_P_889_);
goto v___jp_901_;
}
else
{
lean_object* v___x_937_; uint8_t v___x_938_; 
v___x_937_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__0));
v___x_938_ = lean_string_dec_eq(v_str_927_, v___x_937_);
if (v___x_938_ == 0)
{
lean_dec_ref(v_arg_924_);
lean_del_object(v___x_921_);
lean_dec(v_uniq_919_);
lean_dec(v_name_918_);
lean_dec_ref_known(v_p_909_, 2);
lean_del_object(v___x_907_);
lean_dec(v_arg_891_);
lean_dec_ref(v_P_889_);
goto v___jp_901_;
}
else
{
if (lean_obj_tag(v_us_926_) == 1)
{
lean_object* v_tail_939_; 
v_tail_939_ = lean_ctor_get(v_us_926_, 1);
lean_inc(v_tail_939_);
if (lean_obj_tag(v_tail_939_) == 1)
{
lean_object* v_tail_940_; 
v_tail_940_ = lean_ctor_get(v_tail_939_, 1);
if (lean_obj_tag(v_tail_940_) == 0)
{
lean_object* v_head_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_1035_; 
v_head_941_ = lean_ctor_get(v_tail_939_, 0);
v_isSharedCheck_1035_ = !lean_is_exclusive(v_tail_939_);
if (v_isSharedCheck_1035_ == 0)
{
lean_object* v_unused_1036_; 
v_unused_1036_ = lean_ctor_get(v_tail_939_, 1);
lean_dec(v_unused_1036_);
v___x_943_ = v_tail_939_;
v_isShared_944_ = v_isSharedCheck_1035_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_head_941_);
lean_dec(v_tail_939_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_1035_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_946_; 
lean_inc_ref(v_arg_925_);
if (v_isShared_908_ == 0)
{
lean_ctor_set(v___x_907_, 0, v_arg_925_);
v___x_946_ = v___x_907_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_arg_925_);
v___x_946_ = v_reuseFailAlloc_1034_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; 
v___x_947_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__2));
v___x_948_ = lean_box(0);
v___x_949_ = l_Lean_Elab_Tactic_elabTermWithHoles(v_arg_891_, v___x_946_, v___x_947_, v___x_938_, v___x_948_, v_a_892_, v_a_893_, v_a_894_, v_a_895_, v_a_896_, v_a_897_, v_a_898_, v_a_899_);
if (lean_obj_tag(v___x_949_) == 0)
{
lean_object* v_a_950_; lean_object* v_fst_951_; lean_object* v_snd_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_1018_; 
v_a_950_ = lean_ctor_get(v___x_949_, 0);
lean_inc(v_a_950_);
lean_dec_ref_known(v___x_949_, 1);
v_fst_951_ = lean_ctor_get(v_a_950_, 0);
v_snd_952_ = lean_ctor_get(v_a_950_, 1);
v_isSharedCheck_1018_ = !lean_is_exclusive(v_a_950_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_954_ = v_a_950_;
v_isShared_955_ = v_isSharedCheck_1018_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_snd_952_);
lean_inc(v_fst_951_);
lean_dec(v_a_950_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_1018_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
lean_object* v___x_956_; 
v___x_956_ = l_Lean_Elab_Tactic_pushGoals___redArg(v_snd_952_, v_a_893_);
if (lean_obj_tag(v___x_956_) == 0)
{
lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_1008_; 
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_956_);
if (v_isSharedCheck_1008_ == 0)
{
lean_object* v_unused_1009_; 
v_unused_1009_ = lean_ctor_get(v___x_956_, 0);
lean_dec(v_unused_1009_);
v___x_958_ = v___x_956_;
v_isShared_959_ = v_isSharedCheck_1008_;
goto v_resetjp_957_;
}
else
{
lean_dec(v___x_956_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_1008_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v_options_960_; lean_object* v_inheritedTraceOptions_961_; uint8_t v_hasTrace_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; 
v_options_960_ = lean_ctor_get(v_a_898_, 2);
v_inheritedTraceOptions_961_ = lean_ctor_get(v_a_898_, 13);
v_hasTrace_962_ = lean_ctor_get_uint8(v_options_960_, sizeof(void*)*1);
v___x_963_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__1));
lean_inc_ref(v_us_926_);
v___x_964_ = l_Lean_mkConst(v___x_963_, v_us_926_);
lean_inc_n(v_fst_951_, 2);
lean_inc_ref(v_P_889_);
lean_inc_ref_n(v_arg_923_, 2);
lean_inc_ref(v_arg_924_);
lean_inc_ref(v_arg_925_);
v___x_965_ = l_Lean_mkApp5(v___x_964_, v_arg_925_, v_arg_924_, v_arg_923_, v_P_889_, v_fst_951_);
v___x_966_ = lean_unsigned_to_nat(1u);
v___x_967_ = lean_mk_empty_array_with_capacity(v___x_966_);
v___x_968_ = lean_array_push(v___x_967_, v_fst_951_);
v___x_969_ = l_Lean_Expr_beta(v_arg_923_, v___x_968_);
if (v_hasTrace_962_ == 0)
{
lean_dec(v_fst_951_);
lean_del_object(v___x_943_);
lean_dec(v_head_941_);
lean_dec_ref(v_arg_924_);
lean_dec_ref_known(v_p_909_, 2);
lean_dec_ref(v_P_889_);
goto v___jp_970_;
}
else
{
lean_object* v___x_982_; lean_object* v___x_983_; uint8_t v___x_984_; 
v___x_982_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_983_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__11, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__11_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__11);
v___x_984_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_961_, v_options_960_, v___x_983_);
if (v___x_984_ == 0)
{
lean_dec(v_fst_951_);
lean_del_object(v___x_943_);
lean_dec(v_head_941_);
lean_dec_ref(v_arg_924_);
lean_dec_ref_known(v_p_909_, 2);
lean_dec_ref(v_P_889_);
goto v___jp_970_;
}
else
{
lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_988_; 
v___x_985_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__3);
v___x_986_ = l_Lean_MessageData_ofExpr(v_p_909_);
if (v_isShared_944_ == 0)
{
lean_ctor_set_tag(v___x_943_, 7);
lean_ctor_set(v___x_943_, 1, v___x_986_);
lean_ctor_set(v___x_943_, 0, v___x_985_);
v___x_988_ = v___x_943_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v___x_985_);
lean_ctor_set(v_reuseFailAlloc_1007_, 1, v___x_986_);
v___x_988_ = v_reuseFailAlloc_1007_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_989_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8);
v___x_990_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_990_, 0, v___x_988_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
v___x_991_ = l_Lean_MessageData_ofExpr(v_fst_951_);
v___x_992_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_992_, 0, v___x_990_);
lean_ctor_set(v___x_992_, 1, v___x_991_);
v___x_993_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__15, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__15_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__15);
v___x_994_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_992_);
lean_ctor_set(v___x_994_, 1, v___x_993_);
lean_inc_ref(v___x_969_);
v___x_995_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_head_941_, v_arg_924_, v_P_889_, v___x_969_);
v___x_996_ = l_Lean_MessageData_ofExpr(v___x_995_);
v___x_997_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_994_);
lean_ctor_set(v___x_997_, 1, v___x_996_);
v___x_998_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg(v___x_982_, v___x_997_, v_a_896_, v_a_897_, v_a_898_, v_a_899_);
if (lean_obj_tag(v___x_998_) == 0)
{
lean_dec_ref_known(v___x_998_, 1);
goto v___jp_970_;
}
else
{
lean_object* v_a_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1006_; 
lean_dec_ref(v___x_969_);
lean_dec_ref(v___x_965_);
lean_del_object(v___x_958_);
lean_del_object(v___x_954_);
lean_del_object(v___x_921_);
lean_dec(v_uniq_919_);
lean_dec(v_name_918_);
v_a_999_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1006_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_1001_ = v___x_998_;
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_a_999_);
lean_dec(v___x_998_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1004_; 
if (v_isShared_1002_ == 0)
{
v___x_1004_ = v___x_1001_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_a_999_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
}
}
}
}
v___jp_970_:
{
lean_object* v___x_972_; 
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 2, v___x_969_);
v___x_972_ = v___x_921_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_name_918_);
lean_ctor_set(v_reuseFailAlloc_981_, 1, v_uniq_919_);
lean_ctor_set(v_reuseFailAlloc_981_, 2, v___x_969_);
v___x_972_ = v_reuseFailAlloc_981_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
lean_object* v___x_973_; lean_object* v___x_975_; 
v___x_973_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_972_);
if (v_isShared_955_ == 0)
{
lean_ctor_set(v___x_954_, 1, v___x_965_);
lean_ctor_set(v___x_954_, 0, v___x_973_);
v___x_975_ = v___x_954_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v___x_973_);
lean_ctor_set(v_reuseFailAlloc_980_, 1, v___x_965_);
v___x_975_ = v_reuseFailAlloc_980_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
lean_object* v___x_976_; lean_object* v___x_978_; 
v___x_976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_976_, 0, v___x_975_);
if (v_isShared_959_ == 0)
{
lean_ctor_set(v___x_958_, 0, v___x_976_);
v___x_978_ = v___x_958_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v___x_976_);
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
}
}
else
{
lean_object* v_a_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1017_; 
lean_del_object(v___x_954_);
lean_dec(v_fst_951_);
lean_del_object(v___x_943_);
lean_dec(v_head_941_);
lean_dec_ref(v_arg_924_);
lean_del_object(v___x_921_);
lean_dec(v_uniq_919_);
lean_dec(v_name_918_);
lean_dec_ref_known(v_p_909_, 2);
lean_dec_ref(v_P_889_);
v_a_1010_ = lean_ctor_get(v___x_956_, 0);
v_isSharedCheck_1017_ = !lean_is_exclusive(v___x_956_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_1012_ = v___x_956_;
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_a_1010_);
lean_dec(v___x_956_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v___x_1015_; 
if (v_isShared_1013_ == 0)
{
v___x_1015_ = v___x_1012_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_a_1010_);
v___x_1015_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
return v___x_1015_;
}
}
}
}
}
else
{
lean_object* v_a_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1033_; 
lean_del_object(v___x_943_);
lean_dec(v_head_941_);
lean_dec_ref(v_arg_924_);
lean_del_object(v___x_921_);
lean_dec(v_uniq_919_);
lean_dec(v_name_918_);
lean_dec_ref_known(v_p_909_, 2);
lean_dec_ref(v_P_889_);
v_a_1019_ = lean_ctor_get(v___x_949_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_949_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1021_ = v___x_949_;
v_isShared_1022_ = v_isSharedCheck_1033_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_a_1019_);
lean_dec(v___x_949_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1033_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
uint8_t v___y_1024_; uint8_t v___x_1031_; 
v___x_1031_ = l_Lean_Exception_isInterrupt(v_a_1019_);
if (v___x_1031_ == 0)
{
uint8_t v___x_1032_; 
lean_inc(v_a_1019_);
v___x_1032_ = l_Lean_Exception_isRuntime(v_a_1019_);
v___y_1024_ = v___x_1032_;
goto v___jp_1023_;
}
else
{
v___y_1024_ = v___x_1031_;
goto v___jp_1023_;
}
v___jp_1023_:
{
if (v___y_1024_ == 0)
{
lean_object* v___x_1026_; 
lean_dec(v_a_1019_);
if (v_isShared_1022_ == 0)
{
lean_ctor_set_tag(v___x_1021_, 0);
lean_ctor_set(v___x_1021_, 0, v___x_948_);
v___x_1026_ = v___x_1021_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v___x_948_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
return v___x_1026_;
}
}
else
{
lean_object* v___x_1029_; 
if (v_isShared_1022_ == 0)
{
v___x_1029_ = v___x_1021_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v_a_1019_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
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
lean_dec_ref_known(v_tail_939_, 2);
lean_dec_ref(v_arg_924_);
lean_del_object(v___x_921_);
lean_dec(v_uniq_919_);
lean_dec(v_name_918_);
lean_dec_ref_known(v_p_909_, 2);
lean_del_object(v___x_907_);
lean_dec(v_arg_891_);
lean_dec_ref(v_P_889_);
goto v___jp_901_;
}
}
else
{
lean_dec(v_tail_939_);
lean_dec_ref(v_arg_924_);
lean_del_object(v___x_921_);
lean_dec(v_uniq_919_);
lean_dec(v_name_918_);
lean_dec_ref_known(v_p_909_, 2);
lean_del_object(v___x_907_);
lean_dec(v_arg_891_);
lean_dec_ref(v_P_889_);
goto v___jp_901_;
}
}
else
{
lean_dec_ref(v_arg_924_);
lean_del_object(v___x_921_);
lean_dec(v_uniq_919_);
lean_dec(v_name_918_);
lean_dec_ref_known(v_p_909_, 2);
lean_del_object(v___x_907_);
lean_dec(v_arg_891_);
lean_dec_ref(v_P_889_);
goto v___jp_901_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_p_909_, 2);
lean_del_object(v___x_907_);
lean_dec(v_val_905_);
lean_dec(v_arg_891_);
lean_dec_ref(v_P_889_);
goto v___jp_901_;
}
}
else
{
lean_dec_ref_known(v_p_909_, 2);
lean_del_object(v___x_907_);
lean_dec(v_val_905_);
lean_dec(v_arg_891_);
lean_dec_ref(v_P_889_);
goto v___jp_901_;
}
}
else
{
lean_dec_ref_known(v_p_909_, 2);
lean_del_object(v___x_907_);
lean_dec(v_val_905_);
lean_dec(v_arg_891_);
lean_dec_ref(v_P_889_);
goto v___jp_901_;
}
}
else
{
lean_dec_ref_known(v_p_909_, 2);
lean_del_object(v___x_907_);
lean_dec(v_val_905_);
lean_dec(v_arg_891_);
lean_dec_ref(v_P_889_);
goto v___jp_901_;
}
}
else
{
lean_dec_ref_known(v_p_909_, 2);
lean_del_object(v___x_907_);
lean_dec(v_val_905_);
lean_dec(v_arg_891_);
lean_dec_ref(v_P_889_);
goto v___jp_901_;
}
}
else
{
lean_dec_ref_known(v_p_909_, 2);
lean_del_object(v___x_907_);
lean_dec(v_val_905_);
lean_dec(v_arg_891_);
lean_dec_ref(v_P_889_);
goto v___jp_901_;
}
}
else
{
lean_dec_ref_known(v_p_909_, 2);
lean_del_object(v___x_907_);
lean_dec(v_val_905_);
lean_dec(v_arg_891_);
lean_dec_ref(v_P_889_);
goto v___jp_901_;
}
}
else
{
lean_dec_ref_known(v_p_909_, 2);
lean_del_object(v___x_907_);
lean_dec(v_val_905_);
lean_dec(v_arg_891_);
lean_dec_ref(v_P_889_);
goto v___jp_901_;
}
}
else
{
lean_dec_ref(v_p_909_);
lean_del_object(v___x_907_);
lean_dec(v_val_905_);
lean_dec(v_arg_891_);
lean_dec_ref(v_P_889_);
goto v___jp_901_;
}
}
}
else
{
lean_object* v___x_1040_; lean_object* v___x_1041_; 
lean_dec(v___x_904_);
lean_dec(v_arg_891_);
lean_dec_ref(v_P_889_);
v___x_1040_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__6);
v___x_1041_ = l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0(v___x_1040_, v_a_892_, v_a_893_, v_a_894_, v_a_895_, v_a_896_, v_a_897_, v_a_898_, v_a_899_);
return v___x_1041_;
}
v___jp_901_:
{
lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_902_ = lean_box(0);
v___x_903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_903_, 0, v___x_902_);
return v___x_903_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___boxed(lean_object* v_P_1042_, lean_object* v_00_u03a8_1043_, lean_object* v_arg_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall(v_P_1042_, v_00_u03a8_1043_, v_arg_1044_, v_a_1045_, v_a_1046_, v_a_1047_, v_a_1048_, v_a_1049_, v_a_1050_, v_a_1051_, v_a_1052_);
lean_dec(v_a_1052_);
lean_dec_ref(v_a_1051_);
lean_dec(v_a_1050_);
lean_dec_ref(v_a_1049_);
lean_dec(v_a_1048_);
lean_dec_ref(v_a_1047_);
lean_dec(v_a_1046_);
lean_dec_ref(v_a_1045_);
return v_res_1054_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1055_ = lean_box(0);
v___x_1056_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_1057_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1056_);
lean_ctor_set(v___x_1057_, 1, v___x_1055_);
return v___x_1057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0___redArg(){
_start:
{
lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1059_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0___redArg___closed__0);
v___x_1060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1059_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0___redArg___boxed(lean_object* v___y_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0___redArg();
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0(lean_object* v_00_u03b1_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_){
_start:
{
lean_object* v___x_1073_; 
v___x_1073_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0___redArg();
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0___boxed(lean_object* v_00_u03b1_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0(v_00_u03b1_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_);
lean_dec(v___y_1082_);
lean_dec_ref(v___y_1081_);
lean_dec(v___y_1080_);
lean_dec_ref(v___y_1079_);
lean_dec(v___y_1078_);
lean_dec_ref(v___y_1077_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__3(lean_object* v_msg_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_){
_start:
{
lean_object* v___f_1096_; lean_object* v___x_6235__overap_1097_; lean_object* v___x_1098_; 
v___f_1096_ = ((lean_object*)(l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__3___closed__0));
v___x_6235__overap_1097_ = lean_panic_fn_borrowed(v___f_1096_, v_msg_1086_);
lean_inc(v___y_1094_);
lean_inc_ref(v___y_1093_);
lean_inc(v___y_1092_);
lean_inc_ref(v___y_1091_);
lean_inc(v___y_1090_);
lean_inc_ref(v___y_1089_);
lean_inc(v___y_1088_);
lean_inc_ref(v___y_1087_);
v___x_1098_ = lean_apply_9(v___x_6235__overap_1097_, v___y_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_, lean_box(0));
return v___x_1098_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__3___boxed(lean_object* v_msg_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_){
_start:
{
lean_object* v_res_1109_; 
v_res_1109_ = l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__3(v_msg_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
lean_dec(v___y_1107_);
lean_dec_ref(v___y_1106_);
lean_dec(v___y_1105_);
lean_dec_ref(v___y_1104_);
lean_dec(v___y_1103_);
lean_dec_ref(v___y_1102_);
lean_dec(v___y_1101_);
lean_dec_ref(v___y_1100_);
return v_res_1109_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__4___redArg___lam__0(lean_object* v_x_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_){
_start:
{
lean_object* v___x_1120_; 
lean_inc(v___y_1114_);
lean_inc_ref(v___y_1113_);
lean_inc(v___y_1112_);
lean_inc_ref(v___y_1111_);
v___x_1120_ = lean_apply_9(v_x_1110_, v___y_1111_, v___y_1112_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_, lean_box(0));
return v___x_1120_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__4___redArg___lam__0___boxed(lean_object* v_x_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_){
_start:
{
lean_object* v_res_1131_; 
v_res_1131_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__4___redArg___lam__0(v_x_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_);
lean_dec(v___y_1125_);
lean_dec_ref(v___y_1124_);
lean_dec(v___y_1123_);
lean_dec_ref(v___y_1122_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__4___redArg(lean_object* v_mvarId_1132_, lean_object* v_x_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_){
_start:
{
lean_object* v___f_1143_; lean_object* v___x_1144_; 
lean_inc(v___y_1137_);
lean_inc_ref(v___y_1136_);
lean_inc(v___y_1135_);
lean_inc_ref(v___y_1134_);
v___f_1143_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__4___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_1143_, 0, v_x_1133_);
lean_closure_set(v___f_1143_, 1, v___y_1134_);
lean_closure_set(v___f_1143_, 2, v___y_1135_);
lean_closure_set(v___f_1143_, 3, v___y_1136_);
lean_closure_set(v___f_1143_, 4, v___y_1137_);
v___x_1144_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1132_, v___f_1143_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
if (lean_obj_tag(v___x_1144_) == 0)
{
return v___x_1144_;
}
else
{
lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1152_; 
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1147_ = v___x_1144_;
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v___x_1144_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v___x_1150_; 
if (v_isShared_1148_ == 0)
{
v___x_1150_ = v___x_1147_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_a_1145_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__4___redArg___boxed(lean_object* v_mvarId_1153_, lean_object* v_x_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_){
_start:
{
lean_object* v_res_1164_; 
v_res_1164_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__4___redArg(v_mvarId_1153_, v_x_1154_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
lean_dec(v___y_1162_);
lean_dec_ref(v___y_1161_);
lean_dec(v___y_1160_);
lean_dec_ref(v___y_1159_);
lean_dec(v___y_1158_);
lean_dec_ref(v___y_1157_);
lean_dec(v___y_1156_);
lean_dec_ref(v___y_1155_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__4(lean_object* v_00_u03b1_1165_, lean_object* v_mvarId_1166_, lean_object* v_x_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_){
_start:
{
lean_object* v___x_1177_; 
v___x_1177_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__4___redArg(v_mvarId_1166_, v_x_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__4___boxed(lean_object* v_00_u03b1_1178_, lean_object* v_mvarId_1179_, lean_object* v_x_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__4(v_00_u03b1_1178_, v_mvarId_1179_, v_x_1180_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_);
lean_dec(v___y_1188_);
lean_dec_ref(v___y_1187_);
lean_dec(v___y_1186_);
lean_dec_ref(v___y_1185_);
lean_dec(v___y_1184_);
lean_dec_ref(v___y_1183_);
lean_dec(v___y_1182_);
lean_dec_ref(v___y_1181_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___lam__0(lean_object* v___x_1193_, lean_object* v___x_1194_, lean_object* v___x_1195_, lean_object* v___x_1196_, lean_object* v___x_1197_, lean_object* v___x_1198_, lean_object* v___x_1199_, lean_object* v_fst_1200_, lean_object* v_fst_1201_, lean_object* v___x_1202_, lean_object* v_snd_1203_, lean_object* v_snd_1204_, lean_object* v_hgoal_1205_){
_start:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
v___x_1206_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___lam__0___closed__0));
v___x_1207_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___lam__0___closed__1));
v___x_1208_ = l_Lean_Name_mkStr5(v___x_1193_, v___x_1194_, v___x_1195_, v___x_1206_, v___x_1207_);
v___x_1209_ = l_Lean_mkConst(v___x_1208_, v___x_1196_);
lean_inc_ref(v___x_1199_);
lean_inc_ref_n(v___x_1198_, 2);
lean_inc(v___x_1197_);
v___x_1210_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v___x_1197_, v___x_1198_, v___x_1199_, v_fst_1200_);
v___x_1211_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v___x_1197_, v___x_1198_, v___x_1199_, v_fst_1201_);
v___x_1212_ = l_Lean_mkApp6(v___x_1209_, v___x_1198_, v___x_1210_, v___x_1211_, v___x_1202_, v_snd_1203_, v_hgoal_1205_);
v___x_1213_ = lean_apply_1(v_snd_1204_, v___x_1212_);
return v___x_1213_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1215_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___closed__0));
v___x_1216_ = l_Lean_stringToMessageData(v___x_1215_);
return v___x_1216_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1(lean_object* v___x_1217_, lean_object* v___x_1218_, lean_object* v___x_1219_, lean_object* v___x_1220_, lean_object* v___x_1221_, lean_object* v_as_1222_, size_t v_sz_1223_, size_t v_i_1224_, lean_object* v_b_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_){
_start:
{
lean_object* v_a_1236_; uint8_t v___x_1240_; 
v___x_1240_ = lean_usize_dec_lt(v_i_1224_, v_sz_1223_);
if (v___x_1240_ == 0)
{
lean_object* v___x_1241_; 
lean_dec_ref(v___x_1221_);
lean_dec_ref(v___x_1220_);
lean_dec_ref(v___x_1219_);
lean_dec(v___x_1218_);
lean_dec(v___x_1217_);
v___x_1241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1241_, 0, v_b_1225_);
return v___x_1241_;
}
else
{
lean_object* v_fst_1242_; lean_object* v_snd_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1297_; 
v_fst_1242_ = lean_ctor_get(v_b_1225_, 0);
v_snd_1243_ = lean_ctor_get(v_b_1225_, 1);
v_isSharedCheck_1297_ = !lean_is_exclusive(v_b_1225_);
if (v_isSharedCheck_1297_ == 0)
{
v___x_1245_ = v_b_1225_;
v_isShared_1246_ = v_isSharedCheck_1297_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_snd_1243_);
lean_inc(v_fst_1242_);
lean_dec(v_b_1225_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1297_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v_a_1250_; lean_object* v___y_1252_; lean_object* v___x_1292_; 
v___x_1247_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0));
v___x_1248_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_1249_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__1));
v_a_1250_ = lean_array_uget_borrowed(v_as_1222_, v_i_1224_);
lean_inc(v_a_1250_);
lean_inc(v_fst_1242_);
lean_inc_ref(v___x_1220_);
v___x_1292_ = l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful(v___x_1220_, v_fst_1242_, v_a_1250_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
if (lean_obj_tag(v___x_1292_) == 0)
{
lean_object* v_a_1293_; 
v_a_1293_ = lean_ctor_get(v___x_1292_, 0);
lean_inc(v_a_1293_);
if (lean_obj_tag(v_a_1293_) == 0)
{
lean_object* v___x_1294_; 
lean_dec_ref_known(v___x_1292_, 1);
lean_inc(v_a_1250_);
lean_inc(v_fst_1242_);
lean_inc_ref(v___x_1220_);
v___x_1294_ = l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure(v___x_1220_, v_fst_1242_, v_a_1250_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
if (lean_obj_tag(v___x_1294_) == 0)
{
lean_object* v_a_1295_; 
v_a_1295_ = lean_ctor_get(v___x_1294_, 0);
lean_inc(v_a_1295_);
if (lean_obj_tag(v_a_1295_) == 0)
{
lean_object* v___x_1296_; 
lean_dec_ref_known(v___x_1294_, 1);
lean_inc(v_a_1250_);
lean_inc(v_fst_1242_);
lean_inc_ref(v___x_1220_);
v___x_1296_ = l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall(v___x_1220_, v_fst_1242_, v_a_1250_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
v___y_1252_ = v___x_1296_;
goto v___jp_1251_;
}
else
{
lean_dec_ref_known(v_a_1295_, 1);
v___y_1252_ = v___x_1294_;
goto v___jp_1251_;
}
}
else
{
v___y_1252_ = v___x_1294_;
goto v___jp_1251_;
}
}
else
{
lean_dec_ref_known(v_a_1293_, 1);
v___y_1252_ = v___x_1292_;
goto v___jp_1251_;
}
}
else
{
v___y_1252_ = v___x_1292_;
goto v___jp_1251_;
}
v___jp_1251_:
{
if (lean_obj_tag(v___y_1252_) == 0)
{
lean_object* v_a_1253_; 
v_a_1253_ = lean_ctor_get(v___y_1252_, 0);
lean_inc(v_a_1253_);
lean_dec_ref_known(v___y_1252_, 1);
if (lean_obj_tag(v_a_1253_) == 0)
{
lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1254_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___closed__1);
lean_inc(v_fst_1242_);
v___x_1255_ = l_Lean_MessageData_ofExpr(v_fst_1242_);
v___x_1256_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1256_, 0, v___x_1254_);
lean_ctor_set(v___x_1256_, 1, v___x_1255_);
v___x_1257_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8);
v___x_1258_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1256_);
lean_ctor_set(v___x_1258_, 1, v___x_1257_);
lean_inc(v_a_1250_);
v___x_1259_ = l_Lean_MessageData_ofSyntax(v_a_1250_);
v___x_1260_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1258_);
lean_ctor_set(v___x_1260_, 1, v___x_1259_);
v___x_1261_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0___redArg(v___x_1260_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
if (lean_obj_tag(v___x_1261_) == 0)
{
lean_object* v___x_1263_; 
lean_dec_ref_known(v___x_1261_, 1);
if (v_isShared_1246_ == 0)
{
v___x_1263_ = v___x_1245_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v_fst_1242_);
lean_ctor_set(v_reuseFailAlloc_1264_, 1, v_snd_1243_);
v___x_1263_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
v_a_1236_ = v___x_1263_;
goto v___jp_1235_;
}
}
else
{
lean_object* v_a_1265_; lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1272_; 
lean_del_object(v___x_1245_);
lean_dec(v_snd_1243_);
lean_dec(v_fst_1242_);
lean_dec_ref(v___x_1221_);
lean_dec_ref(v___x_1220_);
lean_dec_ref(v___x_1219_);
lean_dec(v___x_1218_);
lean_dec(v___x_1217_);
v_a_1265_ = lean_ctor_get(v___x_1261_, 0);
v_isSharedCheck_1272_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1267_ = v___x_1261_;
v_isShared_1268_ = v_isSharedCheck_1272_;
goto v_resetjp_1266_;
}
else
{
lean_inc(v_a_1265_);
lean_dec(v___x_1261_);
v___x_1267_ = lean_box(0);
v_isShared_1268_ = v_isSharedCheck_1272_;
goto v_resetjp_1266_;
}
v_resetjp_1266_:
{
lean_object* v___x_1270_; 
if (v_isShared_1268_ == 0)
{
v___x_1270_ = v___x_1267_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v_a_1265_);
v___x_1270_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
return v___x_1270_;
}
}
}
}
else
{
lean_object* v_val_1273_; lean_object* v_fst_1274_; lean_object* v_snd_1275_; lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1283_; 
lean_del_object(v___x_1245_);
v_val_1273_ = lean_ctor_get(v_a_1253_, 0);
lean_inc(v_val_1273_);
lean_dec_ref_known(v_a_1253_, 1);
v_fst_1274_ = lean_ctor_get(v_val_1273_, 0);
v_snd_1275_ = lean_ctor_get(v_val_1273_, 1);
v_isSharedCheck_1283_ = !lean_is_exclusive(v_val_1273_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1277_ = v_val_1273_;
v_isShared_1278_ = v_isSharedCheck_1283_;
goto v_resetjp_1276_;
}
else
{
lean_inc(v_snd_1275_);
lean_inc(v_fst_1274_);
lean_dec(v_val_1273_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1283_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
lean_object* v___f_1279_; lean_object* v___x_1281_; 
lean_inc_ref(v___x_1221_);
lean_inc(v_fst_1274_);
lean_inc_ref(v___x_1220_);
lean_inc_ref(v___x_1219_);
lean_inc(v___x_1218_);
lean_inc(v___x_1217_);
v___f_1279_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___lam__0), 13, 12);
lean_closure_set(v___f_1279_, 0, v___x_1247_);
lean_closure_set(v___f_1279_, 1, v___x_1248_);
lean_closure_set(v___f_1279_, 2, v___x_1249_);
lean_closure_set(v___f_1279_, 3, v___x_1217_);
lean_closure_set(v___f_1279_, 4, v___x_1218_);
lean_closure_set(v___f_1279_, 5, v___x_1219_);
lean_closure_set(v___f_1279_, 6, v___x_1220_);
lean_closure_set(v___f_1279_, 7, v_fst_1242_);
lean_closure_set(v___f_1279_, 8, v_fst_1274_);
lean_closure_set(v___f_1279_, 9, v___x_1221_);
lean_closure_set(v___f_1279_, 10, v_snd_1275_);
lean_closure_set(v___f_1279_, 11, v_snd_1243_);
if (v_isShared_1278_ == 0)
{
lean_ctor_set(v___x_1277_, 1, v___f_1279_);
v___x_1281_ = v___x_1277_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_fst_1274_);
lean_ctor_set(v_reuseFailAlloc_1282_, 1, v___f_1279_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
v_a_1236_ = v___x_1281_;
goto v___jp_1235_;
}
}
}
}
else
{
lean_object* v_a_1284_; lean_object* v___x_1286_; uint8_t v_isShared_1287_; uint8_t v_isSharedCheck_1291_; 
lean_del_object(v___x_1245_);
lean_dec(v_snd_1243_);
lean_dec(v_fst_1242_);
lean_dec_ref(v___x_1221_);
lean_dec_ref(v___x_1220_);
lean_dec_ref(v___x_1219_);
lean_dec(v___x_1218_);
lean_dec(v___x_1217_);
v_a_1284_ = lean_ctor_get(v___y_1252_, 0);
v_isSharedCheck_1291_ = !lean_is_exclusive(v___y_1252_);
if (v_isSharedCheck_1291_ == 0)
{
v___x_1286_ = v___y_1252_;
v_isShared_1287_ = v_isSharedCheck_1291_;
goto v_resetjp_1285_;
}
else
{
lean_inc(v_a_1284_);
lean_dec(v___y_1252_);
v___x_1286_ = lean_box(0);
v_isShared_1287_ = v_isSharedCheck_1291_;
goto v_resetjp_1285_;
}
v_resetjp_1285_:
{
lean_object* v___x_1289_; 
if (v_isShared_1287_ == 0)
{
v___x_1289_ = v___x_1286_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1290_; 
v_reuseFailAlloc_1290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1290_, 0, v_a_1284_);
v___x_1289_ = v_reuseFailAlloc_1290_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
return v___x_1289_;
}
}
}
}
}
}
v___jp_1235_:
{
size_t v___x_1237_; size_t v___x_1238_; 
v___x_1237_ = ((size_t)1ULL);
v___x_1238_ = lean_usize_add(v_i_1224_, v___x_1237_);
v_i_1224_ = v___x_1238_;
v_b_1225_ = v_a_1236_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___boxed(lean_object** _args){
lean_object* v___x_1298_ = _args[0];
lean_object* v___x_1299_ = _args[1];
lean_object* v___x_1300_ = _args[2];
lean_object* v___x_1301_ = _args[3];
lean_object* v___x_1302_ = _args[4];
lean_object* v_as_1303_ = _args[5];
lean_object* v_sz_1304_ = _args[6];
lean_object* v_i_1305_ = _args[7];
lean_object* v_b_1306_ = _args[8];
lean_object* v___y_1307_ = _args[9];
lean_object* v___y_1308_ = _args[10];
lean_object* v___y_1309_ = _args[11];
lean_object* v___y_1310_ = _args[12];
lean_object* v___y_1311_ = _args[13];
lean_object* v___y_1312_ = _args[14];
lean_object* v___y_1313_ = _args[15];
lean_object* v___y_1314_ = _args[16];
lean_object* v___y_1315_ = _args[17];
_start:
{
size_t v_sz_boxed_1316_; size_t v_i_boxed_1317_; lean_object* v_res_1318_; 
v_sz_boxed_1316_ = lean_unbox_usize(v_sz_1304_);
lean_dec(v_sz_1304_);
v_i_boxed_1317_ = lean_unbox_usize(v_i_1305_);
lean_dec(v_i_1305_);
v_res_1318_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1(v___x_1298_, v___x_1299_, v___x_1300_, v___x_1301_, v___x_1302_, v_as_1303_, v_sz_boxed_1316_, v_i_boxed_1317_, v_b_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_);
lean_dec(v___y_1314_);
lean_dec_ref(v___y_1313_);
lean_dec(v___y_1312_);
lean_dec_ref(v___y_1311_);
lean_dec(v___y_1310_);
lean_dec_ref(v___y_1309_);
lean_dec(v___y_1308_);
lean_dec_ref(v___y_1307_);
lean_dec_ref(v_as_1303_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__6_spec__7___redArg(lean_object* v_x_1319_, lean_object* v_x_1320_, lean_object* v_x_1321_, lean_object* v_x_1322_){
_start:
{
lean_object* v_ks_1323_; lean_object* v_vs_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1348_; 
v_ks_1323_ = lean_ctor_get(v_x_1319_, 0);
v_vs_1324_ = lean_ctor_get(v_x_1319_, 1);
v_isSharedCheck_1348_ = !lean_is_exclusive(v_x_1319_);
if (v_isSharedCheck_1348_ == 0)
{
v___x_1326_ = v_x_1319_;
v_isShared_1327_ = v_isSharedCheck_1348_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_vs_1324_);
lean_inc(v_ks_1323_);
lean_dec(v_x_1319_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1348_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1328_; uint8_t v___x_1329_; 
v___x_1328_ = lean_array_get_size(v_ks_1323_);
v___x_1329_ = lean_nat_dec_lt(v_x_1320_, v___x_1328_);
if (v___x_1329_ == 0)
{
lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1333_; 
lean_dec(v_x_1320_);
v___x_1330_ = lean_array_push(v_ks_1323_, v_x_1321_);
v___x_1331_ = lean_array_push(v_vs_1324_, v_x_1322_);
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 1, v___x_1331_);
lean_ctor_set(v___x_1326_, 0, v___x_1330_);
v___x_1333_ = v___x_1326_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v___x_1330_);
lean_ctor_set(v_reuseFailAlloc_1334_, 1, v___x_1331_);
v___x_1333_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
return v___x_1333_;
}
}
else
{
lean_object* v_k_x27_1335_; uint8_t v___x_1336_; 
v_k_x27_1335_ = lean_array_fget_borrowed(v_ks_1323_, v_x_1320_);
v___x_1336_ = l_Lean_instBEqMVarId_beq(v_x_1321_, v_k_x27_1335_);
if (v___x_1336_ == 0)
{
lean_object* v___x_1338_; 
if (v_isShared_1327_ == 0)
{
v___x_1338_ = v___x_1326_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v_ks_1323_);
lean_ctor_set(v_reuseFailAlloc_1342_, 1, v_vs_1324_);
v___x_1338_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___x_1339_ = lean_unsigned_to_nat(1u);
v___x_1340_ = lean_nat_add(v_x_1320_, v___x_1339_);
lean_dec(v_x_1320_);
v_x_1319_ = v___x_1338_;
v_x_1320_ = v___x_1340_;
goto _start;
}
}
else
{
lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1346_; 
v___x_1343_ = lean_array_fset(v_ks_1323_, v_x_1320_, v_x_1321_);
v___x_1344_ = lean_array_fset(v_vs_1324_, v_x_1320_, v_x_1322_);
lean_dec(v_x_1320_);
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 1, v___x_1344_);
lean_ctor_set(v___x_1326_, 0, v___x_1343_);
v___x_1346_ = v___x_1326_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v___x_1343_);
lean_ctor_set(v_reuseFailAlloc_1347_, 1, v___x_1344_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__6___redArg(lean_object* v_n_1349_, lean_object* v_k_1350_, lean_object* v_v_1351_){
_start:
{
lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1352_ = lean_unsigned_to_nat(0u);
v___x_1353_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__6_spec__7___redArg(v_n_1349_, v___x_1352_, v_k_1350_, v_v_1351_);
return v___x_1353_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg___closed__0(void){
_start:
{
size_t v___x_1354_; size_t v___x_1355_; size_t v___x_1356_; 
v___x_1354_ = ((size_t)5ULL);
v___x_1355_ = ((size_t)1ULL);
v___x_1356_ = lean_usize_shift_left(v___x_1355_, v___x_1354_);
return v___x_1356_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg___closed__1(void){
_start:
{
size_t v___x_1357_; size_t v___x_1358_; size_t v___x_1359_; 
v___x_1357_ = ((size_t)1ULL);
v___x_1358_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg___closed__0);
v___x_1359_ = lean_usize_sub(v___x_1358_, v___x_1357_);
return v___x_1359_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_1360_; 
v___x_1360_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1360_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg(lean_object* v_x_1361_, size_t v_x_1362_, size_t v_x_1363_, lean_object* v_x_1364_, lean_object* v_x_1365_){
_start:
{
if (lean_obj_tag(v_x_1361_) == 0)
{
lean_object* v_es_1366_; size_t v___x_1367_; size_t v___x_1368_; size_t v___x_1369_; size_t v___x_1370_; lean_object* v_j_1371_; lean_object* v___x_1372_; uint8_t v___x_1373_; 
v_es_1366_ = lean_ctor_get(v_x_1361_, 0);
v___x_1367_ = ((size_t)5ULL);
v___x_1368_ = ((size_t)1ULL);
v___x_1369_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg___closed__1);
v___x_1370_ = lean_usize_land(v_x_1362_, v___x_1369_);
v_j_1371_ = lean_usize_to_nat(v___x_1370_);
v___x_1372_ = lean_array_get_size(v_es_1366_);
v___x_1373_ = lean_nat_dec_lt(v_j_1371_, v___x_1372_);
if (v___x_1373_ == 0)
{
lean_dec(v_j_1371_);
lean_dec(v_x_1365_);
lean_dec(v_x_1364_);
return v_x_1361_;
}
else
{
lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1410_; 
lean_inc_ref(v_es_1366_);
v_isSharedCheck_1410_ = !lean_is_exclusive(v_x_1361_);
if (v_isSharedCheck_1410_ == 0)
{
lean_object* v_unused_1411_; 
v_unused_1411_ = lean_ctor_get(v_x_1361_, 0);
lean_dec(v_unused_1411_);
v___x_1375_ = v_x_1361_;
v_isShared_1376_ = v_isSharedCheck_1410_;
goto v_resetjp_1374_;
}
else
{
lean_dec(v_x_1361_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1410_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v_v_1377_; lean_object* v___x_1378_; lean_object* v_xs_x27_1379_; lean_object* v___y_1381_; 
v_v_1377_ = lean_array_fget(v_es_1366_, v_j_1371_);
v___x_1378_ = lean_box(0);
v_xs_x27_1379_ = lean_array_fset(v_es_1366_, v_j_1371_, v___x_1378_);
switch(lean_obj_tag(v_v_1377_))
{
case 0:
{
lean_object* v_key_1386_; lean_object* v_val_1387_; lean_object* v___x_1389_; uint8_t v_isShared_1390_; uint8_t v_isSharedCheck_1397_; 
v_key_1386_ = lean_ctor_get(v_v_1377_, 0);
v_val_1387_ = lean_ctor_get(v_v_1377_, 1);
v_isSharedCheck_1397_ = !lean_is_exclusive(v_v_1377_);
if (v_isSharedCheck_1397_ == 0)
{
v___x_1389_ = v_v_1377_;
v_isShared_1390_ = v_isSharedCheck_1397_;
goto v_resetjp_1388_;
}
else
{
lean_inc(v_val_1387_);
lean_inc(v_key_1386_);
lean_dec(v_v_1377_);
v___x_1389_ = lean_box(0);
v_isShared_1390_ = v_isSharedCheck_1397_;
goto v_resetjp_1388_;
}
v_resetjp_1388_:
{
uint8_t v___x_1391_; 
v___x_1391_ = l_Lean_instBEqMVarId_beq(v_x_1364_, v_key_1386_);
if (v___x_1391_ == 0)
{
lean_object* v___x_1392_; lean_object* v___x_1393_; 
lean_del_object(v___x_1389_);
v___x_1392_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1386_, v_val_1387_, v_x_1364_, v_x_1365_);
v___x_1393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1393_, 0, v___x_1392_);
v___y_1381_ = v___x_1393_;
goto v___jp_1380_;
}
else
{
lean_object* v___x_1395_; 
lean_dec(v_val_1387_);
lean_dec(v_key_1386_);
if (v_isShared_1390_ == 0)
{
lean_ctor_set(v___x_1389_, 1, v_x_1365_);
lean_ctor_set(v___x_1389_, 0, v_x_1364_);
v___x_1395_ = v___x_1389_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v_x_1364_);
lean_ctor_set(v_reuseFailAlloc_1396_, 1, v_x_1365_);
v___x_1395_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
v___y_1381_ = v___x_1395_;
goto v___jp_1380_;
}
}
}
}
case 1:
{
lean_object* v_node_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1408_; 
v_node_1398_ = lean_ctor_get(v_v_1377_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v_v_1377_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1400_ = v_v_1377_;
v_isShared_1401_ = v_isSharedCheck_1408_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_node_1398_);
lean_dec(v_v_1377_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1408_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
size_t v___x_1402_; size_t v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1406_; 
v___x_1402_ = lean_usize_shift_right(v_x_1362_, v___x_1367_);
v___x_1403_ = lean_usize_add(v_x_1363_, v___x_1368_);
v___x_1404_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg(v_node_1398_, v___x_1402_, v___x_1403_, v_x_1364_, v_x_1365_);
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 0, v___x_1404_);
v___x_1406_ = v___x_1400_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v___x_1404_);
v___x_1406_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
v___y_1381_ = v___x_1406_;
goto v___jp_1380_;
}
}
}
default: 
{
lean_object* v___x_1409_; 
v___x_1409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1409_, 0, v_x_1364_);
lean_ctor_set(v___x_1409_, 1, v_x_1365_);
v___y_1381_ = v___x_1409_;
goto v___jp_1380_;
}
}
v___jp_1380_:
{
lean_object* v___x_1382_; lean_object* v___x_1384_; 
v___x_1382_ = lean_array_fset(v_xs_x27_1379_, v_j_1371_, v___y_1381_);
lean_dec(v_j_1371_);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 0, v___x_1382_);
v___x_1384_ = v___x_1375_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v___x_1382_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
}
}
}
}
}
else
{
lean_object* v_ks_1412_; lean_object* v_vs_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1433_; 
v_ks_1412_ = lean_ctor_get(v_x_1361_, 0);
v_vs_1413_ = lean_ctor_get(v_x_1361_, 1);
v_isSharedCheck_1433_ = !lean_is_exclusive(v_x_1361_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1415_ = v_x_1361_;
v_isShared_1416_ = v_isSharedCheck_1433_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_vs_1413_);
lean_inc(v_ks_1412_);
lean_dec(v_x_1361_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1433_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1418_; 
if (v_isShared_1416_ == 0)
{
v___x_1418_ = v___x_1415_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_ks_1412_);
lean_ctor_set(v_reuseFailAlloc_1432_, 1, v_vs_1413_);
v___x_1418_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
lean_object* v_newNode_1419_; uint8_t v___y_1421_; size_t v___x_1427_; uint8_t v___x_1428_; 
v_newNode_1419_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__6___redArg(v___x_1418_, v_x_1364_, v_x_1365_);
v___x_1427_ = ((size_t)7ULL);
v___x_1428_ = lean_usize_dec_le(v___x_1427_, v_x_1363_);
if (v___x_1428_ == 0)
{
lean_object* v___x_1429_; lean_object* v___x_1430_; uint8_t v___x_1431_; 
v___x_1429_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1419_);
v___x_1430_ = lean_unsigned_to_nat(4u);
v___x_1431_ = lean_nat_dec_lt(v___x_1429_, v___x_1430_);
lean_dec(v___x_1429_);
v___y_1421_ = v___x_1431_;
goto v___jp_1420_;
}
else
{
v___y_1421_ = v___x_1428_;
goto v___jp_1420_;
}
v___jp_1420_:
{
if (v___y_1421_ == 0)
{
lean_object* v_ks_1422_; lean_object* v_vs_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; 
v_ks_1422_ = lean_ctor_get(v_newNode_1419_, 0);
lean_inc_ref(v_ks_1422_);
v_vs_1423_ = lean_ctor_get(v_newNode_1419_, 1);
lean_inc_ref(v_vs_1423_);
lean_dec_ref(v_newNode_1419_);
v___x_1424_ = lean_unsigned_to_nat(0u);
v___x_1425_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg___closed__2);
v___x_1426_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__7___redArg(v_x_1363_, v_ks_1422_, v_vs_1423_, v___x_1424_, v___x_1425_);
lean_dec_ref(v_vs_1423_);
lean_dec_ref(v_ks_1422_);
return v___x_1426_;
}
else
{
return v_newNode_1419_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__7___redArg(size_t v_depth_1434_, lean_object* v_keys_1435_, lean_object* v_vals_1436_, lean_object* v_i_1437_, lean_object* v_entries_1438_){
_start:
{
lean_object* v___x_1439_; uint8_t v___x_1440_; 
v___x_1439_ = lean_array_get_size(v_keys_1435_);
v___x_1440_ = lean_nat_dec_lt(v_i_1437_, v___x_1439_);
if (v___x_1440_ == 0)
{
lean_dec(v_i_1437_);
return v_entries_1438_;
}
else
{
lean_object* v_k_1441_; lean_object* v_v_1442_; uint64_t v___x_1443_; size_t v_h_1444_; size_t v___x_1445_; lean_object* v___x_1446_; size_t v___x_1447_; size_t v___x_1448_; size_t v___x_1449_; size_t v_h_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
v_k_1441_ = lean_array_fget_borrowed(v_keys_1435_, v_i_1437_);
v_v_1442_ = lean_array_fget_borrowed(v_vals_1436_, v_i_1437_);
v___x_1443_ = l_Lean_instHashableMVarId_hash(v_k_1441_);
v_h_1444_ = lean_uint64_to_usize(v___x_1443_);
v___x_1445_ = ((size_t)5ULL);
v___x_1446_ = lean_unsigned_to_nat(1u);
v___x_1447_ = ((size_t)1ULL);
v___x_1448_ = lean_usize_sub(v_depth_1434_, v___x_1447_);
v___x_1449_ = lean_usize_mul(v___x_1445_, v___x_1448_);
v_h_1450_ = lean_usize_shift_right(v_h_1444_, v___x_1449_);
v___x_1451_ = lean_nat_add(v_i_1437_, v___x_1446_);
lean_dec(v_i_1437_);
lean_inc(v_v_1442_);
lean_inc(v_k_1441_);
v___x_1452_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg(v_entries_1438_, v_h_1450_, v_depth_1434_, v_k_1441_, v_v_1442_);
v_i_1437_ = v___x_1451_;
v_entries_1438_ = v___x_1452_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__7___redArg___boxed(lean_object* v_depth_1454_, lean_object* v_keys_1455_, lean_object* v_vals_1456_, lean_object* v_i_1457_, lean_object* v_entries_1458_){
_start:
{
size_t v_depth_boxed_1459_; lean_object* v_res_1460_; 
v_depth_boxed_1459_ = lean_unbox_usize(v_depth_1454_);
lean_dec(v_depth_1454_);
v_res_1460_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__7___redArg(v_depth_boxed_1459_, v_keys_1455_, v_vals_1456_, v_i_1457_, v_entries_1458_);
lean_dec_ref(v_vals_1456_);
lean_dec_ref(v_keys_1455_);
return v_res_1460_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg___boxed(lean_object* v_x_1461_, lean_object* v_x_1462_, lean_object* v_x_1463_, lean_object* v_x_1464_, lean_object* v_x_1465_){
_start:
{
size_t v_x_8577__boxed_1466_; size_t v_x_8578__boxed_1467_; lean_object* v_res_1468_; 
v_x_8577__boxed_1466_ = lean_unbox_usize(v_x_1462_);
lean_dec(v_x_1462_);
v_x_8578__boxed_1467_ = lean_unbox_usize(v_x_1463_);
lean_dec(v_x_1463_);
v_res_1468_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg(v_x_1461_, v_x_8577__boxed_1466_, v_x_8578__boxed_1467_, v_x_1464_, v_x_1465_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2___redArg(lean_object* v_x_1469_, lean_object* v_x_1470_, lean_object* v_x_1471_){
_start:
{
uint64_t v___x_1472_; size_t v___x_1473_; size_t v___x_1474_; lean_object* v___x_1475_; 
v___x_1472_ = l_Lean_instHashableMVarId_hash(v_x_1470_);
v___x_1473_ = lean_uint64_to_usize(v___x_1472_);
v___x_1474_ = ((size_t)1ULL);
v___x_1475_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg(v_x_1469_, v___x_1473_, v___x_1474_, v_x_1470_, v_x_1471_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2___redArg(lean_object* v_mvarId_1476_, lean_object* v_val_1477_, lean_object* v___y_1478_){
_start:
{
lean_object* v___x_1480_; lean_object* v_mctx_1481_; lean_object* v_cache_1482_; lean_object* v_zetaDeltaFVarIds_1483_; lean_object* v_postponed_1484_; lean_object* v_diag_1485_; lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1513_; 
v___x_1480_ = lean_st_ref_take(v___y_1478_);
v_mctx_1481_ = lean_ctor_get(v___x_1480_, 0);
v_cache_1482_ = lean_ctor_get(v___x_1480_, 1);
v_zetaDeltaFVarIds_1483_ = lean_ctor_get(v___x_1480_, 2);
v_postponed_1484_ = lean_ctor_get(v___x_1480_, 3);
v_diag_1485_ = lean_ctor_get(v___x_1480_, 4);
v_isSharedCheck_1513_ = !lean_is_exclusive(v___x_1480_);
if (v_isSharedCheck_1513_ == 0)
{
v___x_1487_ = v___x_1480_;
v_isShared_1488_ = v_isSharedCheck_1513_;
goto v_resetjp_1486_;
}
else
{
lean_inc(v_diag_1485_);
lean_inc(v_postponed_1484_);
lean_inc(v_zetaDeltaFVarIds_1483_);
lean_inc(v_cache_1482_);
lean_inc(v_mctx_1481_);
lean_dec(v___x_1480_);
v___x_1487_ = lean_box(0);
v_isShared_1488_ = v_isSharedCheck_1513_;
goto v_resetjp_1486_;
}
v_resetjp_1486_:
{
lean_object* v_depth_1489_; lean_object* v_levelAssignDepth_1490_; lean_object* v_lmvarCounter_1491_; lean_object* v_mvarCounter_1492_; lean_object* v_lDecls_1493_; lean_object* v_decls_1494_; lean_object* v_userNames_1495_; lean_object* v_lAssignment_1496_; lean_object* v_eAssignment_1497_; lean_object* v_dAssignment_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1512_; 
v_depth_1489_ = lean_ctor_get(v_mctx_1481_, 0);
v_levelAssignDepth_1490_ = lean_ctor_get(v_mctx_1481_, 1);
v_lmvarCounter_1491_ = lean_ctor_get(v_mctx_1481_, 2);
v_mvarCounter_1492_ = lean_ctor_get(v_mctx_1481_, 3);
v_lDecls_1493_ = lean_ctor_get(v_mctx_1481_, 4);
v_decls_1494_ = lean_ctor_get(v_mctx_1481_, 5);
v_userNames_1495_ = lean_ctor_get(v_mctx_1481_, 6);
v_lAssignment_1496_ = lean_ctor_get(v_mctx_1481_, 7);
v_eAssignment_1497_ = lean_ctor_get(v_mctx_1481_, 8);
v_dAssignment_1498_ = lean_ctor_get(v_mctx_1481_, 9);
v_isSharedCheck_1512_ = !lean_is_exclusive(v_mctx_1481_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1500_ = v_mctx_1481_;
v_isShared_1501_ = v_isSharedCheck_1512_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_dAssignment_1498_);
lean_inc(v_eAssignment_1497_);
lean_inc(v_lAssignment_1496_);
lean_inc(v_userNames_1495_);
lean_inc(v_decls_1494_);
lean_inc(v_lDecls_1493_);
lean_inc(v_mvarCounter_1492_);
lean_inc(v_lmvarCounter_1491_);
lean_inc(v_levelAssignDepth_1490_);
lean_inc(v_depth_1489_);
lean_dec(v_mctx_1481_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1512_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v___x_1502_; lean_object* v___x_1504_; 
v___x_1502_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2___redArg(v_eAssignment_1497_, v_mvarId_1476_, v_val_1477_);
if (v_isShared_1501_ == 0)
{
lean_ctor_set(v___x_1500_, 8, v___x_1502_);
v___x_1504_ = v___x_1500_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v_depth_1489_);
lean_ctor_set(v_reuseFailAlloc_1511_, 1, v_levelAssignDepth_1490_);
lean_ctor_set(v_reuseFailAlloc_1511_, 2, v_lmvarCounter_1491_);
lean_ctor_set(v_reuseFailAlloc_1511_, 3, v_mvarCounter_1492_);
lean_ctor_set(v_reuseFailAlloc_1511_, 4, v_lDecls_1493_);
lean_ctor_set(v_reuseFailAlloc_1511_, 5, v_decls_1494_);
lean_ctor_set(v_reuseFailAlloc_1511_, 6, v_userNames_1495_);
lean_ctor_set(v_reuseFailAlloc_1511_, 7, v_lAssignment_1496_);
lean_ctor_set(v_reuseFailAlloc_1511_, 8, v___x_1502_);
lean_ctor_set(v_reuseFailAlloc_1511_, 9, v_dAssignment_1498_);
v___x_1504_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
lean_object* v___x_1506_; 
if (v_isShared_1488_ == 0)
{
lean_ctor_set(v___x_1487_, 0, v___x_1504_);
v___x_1506_ = v___x_1487_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v___x_1504_);
lean_ctor_set(v_reuseFailAlloc_1510_, 1, v_cache_1482_);
lean_ctor_set(v_reuseFailAlloc_1510_, 2, v_zetaDeltaFVarIds_1483_);
lean_ctor_set(v_reuseFailAlloc_1510_, 3, v_postponed_1484_);
lean_ctor_set(v_reuseFailAlloc_1510_, 4, v_diag_1485_);
v___x_1506_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1507_ = lean_st_ref_set(v___y_1478_, v___x_1506_);
v___x_1508_ = lean_box(0);
v___x_1509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1508_);
return v___x_1509_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2___redArg___boxed(lean_object* v_mvarId_1514_, lean_object* v_val_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_){
_start:
{
lean_object* v_res_1518_; 
v_res_1518_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2___redArg(v_mvarId_1514_, v_val_1515_, v___y_1516_);
lean_dec(v___y_1516_);
return v_res_1518_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; 
v___x_1522_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__2));
v___x_1523_ = lean_unsigned_to_nat(33u);
v___x_1524_ = lean_unsigned_to_nat(104u);
v___x_1525_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__1));
v___x_1526_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__15));
v___x_1527_ = l_mkPanicMessageWithDecl(v___x_1526_, v___x_1525_, v___x_1524_, v___x_1523_, v___x_1522_);
return v___x_1527_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__5(void){
_start:
{
lean_object* v___x_1529_; lean_object* v___x_1530_; 
v___x_1529_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__4));
v___x_1530_ = l_Lean_stringToMessageData(v___x_1529_);
return v___x_1530_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__7(void){
_start:
{
lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1532_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__6));
v___x_1533_ = l_Lean_stringToMessageData(v___x_1532_);
return v___x_1533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0(lean_object* v___x_1534_, lean_object* v_snd_1535_, lean_object* v_hyp_1536_, lean_object* v___x_1537_, lean_object* v_args_1538_, lean_object* v_fst_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_){
_start:
{
if (lean_obj_tag(v___x_1534_) == 1)
{
lean_object* v_val_1549_; lean_object* v_focusHyp_1550_; lean_object* v_restHyps_1551_; lean_object* v_proof_1552_; lean_object* v___x_1553_; 
v_val_1549_ = lean_ctor_get(v___x_1534_, 0);
lean_inc(v_val_1549_);
lean_dec_ref_known(v___x_1534_, 1);
v_focusHyp_1550_ = lean_ctor_get(v_val_1549_, 0);
lean_inc_ref_n(v_focusHyp_1550_, 2);
v_restHyps_1551_ = lean_ctor_get(v_val_1549_, 1);
lean_inc_ref(v_restHyps_1551_);
v_proof_1552_ = lean_ctor_get(v_val_1549_, 2);
lean_inc_ref(v_proof_1552_);
lean_dec(v_val_1549_);
v___x_1553_ = l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(v_focusHyp_1550_);
if (lean_obj_tag(v___x_1553_) == 1)
{
lean_object* v_val_1554_; lean_object* v_u_1555_; lean_object* v_00_u03c3s_1556_; lean_object* v_hyps_1557_; lean_object* v_target_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1616_; 
v_val_1554_ = lean_ctor_get(v___x_1553_, 0);
lean_inc(v_val_1554_);
lean_dec_ref_known(v___x_1553_, 1);
v_u_1555_ = lean_ctor_get(v_snd_1535_, 0);
v_00_u03c3s_1556_ = lean_ctor_get(v_snd_1535_, 1);
v_hyps_1557_ = lean_ctor_get(v_snd_1535_, 2);
v_target_1558_ = lean_ctor_get(v_snd_1535_, 3);
v_isSharedCheck_1616_ = !lean_is_exclusive(v_snd_1535_);
if (v_isSharedCheck_1616_ == 0)
{
v___x_1560_ = v_snd_1535_;
v_isShared_1561_ = v_isSharedCheck_1616_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_target_1558_);
lean_inc(v_hyps_1557_);
lean_inc(v_00_u03c3s_1556_);
lean_inc(v_u_1555_);
lean_dec(v_snd_1535_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1616_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
uint8_t v___x_1562_; lean_object* v___x_1563_; 
v___x_1562_ = 0;
lean_inc_ref(v_00_u03c3s_1556_);
v___x_1563_ = l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo(v_hyp_1536_, v_00_u03c3s_1556_, v_val_1554_, v___x_1562_, v___y_1544_, v___y_1545_, v___y_1546_, v___y_1547_);
if (lean_obj_tag(v___x_1563_) == 0)
{
lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; size_t v_sz_1575_; size_t v___x_1576_; lean_object* v___x_1577_; 
lean_dec_ref_known(v___x_1563_, 1);
v___x_1564_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0));
v___x_1565_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_1566_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__1));
v___x_1567_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_1568_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__0));
v___x_1569_ = l_Lean_Name_mkStr6(v___x_1564_, v___x_1565_, v___x_1566_, v___x_1537_, v___x_1567_, v___x_1568_);
v___x_1570_ = lean_box(0);
lean_inc_n(v_u_1555_, 2);
v___x_1571_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1571_, 0, v_u_1555_);
lean_ctor_set(v___x_1571_, 1, v___x_1570_);
lean_inc_ref(v___x_1571_);
v___x_1572_ = l_Lean_mkConst(v___x_1569_, v___x_1571_);
lean_inc_ref_n(v_target_1558_, 2);
lean_inc_ref(v_focusHyp_1550_);
lean_inc_ref_n(v_restHyps_1551_, 2);
lean_inc_ref_n(v_00_u03c3s_1556_, 2);
v___x_1573_ = lean_alloc_closure((void*)(l_Lean_mkApp7), 8, 7);
lean_closure_set(v___x_1573_, 0, v___x_1572_);
lean_closure_set(v___x_1573_, 1, v_00_u03c3s_1556_);
lean_closure_set(v___x_1573_, 2, v_hyps_1557_);
lean_closure_set(v___x_1573_, 3, v_restHyps_1551_);
lean_closure_set(v___x_1573_, 4, v_focusHyp_1550_);
lean_closure_set(v___x_1573_, 5, v_target_1558_);
lean_closure_set(v___x_1573_, 6, v_proof_1552_);
v___x_1574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1574_, 0, v_focusHyp_1550_);
lean_ctor_set(v___x_1574_, 1, v___x_1573_);
v_sz_1575_ = lean_array_size(v_args_1538_);
v___x_1576_ = ((size_t)0ULL);
v___x_1577_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1(v___x_1571_, v_u_1555_, v_00_u03c3s_1556_, v_restHyps_1551_, v_target_1558_, v_args_1538_, v_sz_1575_, v___x_1576_, v___x_1574_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_, v___y_1545_, v___y_1546_, v___y_1547_);
if (lean_obj_tag(v___x_1577_) == 0)
{
lean_object* v_a_1578_; lean_object* v_fst_1579_; lean_object* v_snd_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1607_; 
v_a_1578_ = lean_ctor_get(v___x_1577_, 0);
lean_inc(v_a_1578_);
lean_dec_ref_known(v___x_1577_, 1);
v_fst_1579_ = lean_ctor_get(v_a_1578_, 0);
v_snd_1580_ = lean_ctor_get(v_a_1578_, 1);
v_isSharedCheck_1607_ = !lean_is_exclusive(v_a_1578_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1582_ = v_a_1578_;
v_isShared_1583_ = v_isSharedCheck_1607_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_snd_1580_);
lean_inc(v_fst_1579_);
lean_dec(v_a_1578_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1607_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
lean_object* v___x_1584_; lean_object* v___x_1586_; 
lean_inc_ref(v_00_u03c3s_1556_);
lean_inc(v_u_1555_);
v___x_1584_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_u_1555_, v_00_u03c3s_1556_, v_restHyps_1551_, v_fst_1579_);
if (v_isShared_1561_ == 0)
{
lean_ctor_set(v___x_1560_, 2, v___x_1584_);
v___x_1586_ = v___x_1560_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v_u_1555_);
lean_ctor_set(v_reuseFailAlloc_1606_, 1, v_00_u03c3s_1556_);
lean_ctor_set(v_reuseFailAlloc_1606_, 2, v___x_1584_);
lean_ctor_set(v_reuseFailAlloc_1606_, 3, v_target_1558_);
v___x_1586_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; 
v___x_1587_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v___x_1586_);
v___x_1588_ = lean_box(0);
v___x_1589_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_1587_, v___x_1588_, v___y_1544_, v___y_1545_, v___y_1546_, v___y_1547_);
if (lean_obj_tag(v___x_1589_) == 0)
{
lean_object* v_a_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1595_; 
v_a_1590_ = lean_ctor_get(v___x_1589_, 0);
lean_inc_n(v_a_1590_, 2);
lean_dec_ref_known(v___x_1589_, 1);
v___x_1591_ = lean_apply_1(v_snd_1580_, v_a_1590_);
v___x_1592_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2___redArg(v_fst_1539_, v___x_1591_, v___y_1545_);
lean_dec_ref(v___x_1592_);
v___x_1593_ = l_Lean_Expr_mvarId_x21(v_a_1590_);
lean_dec(v_a_1590_);
if (v_isShared_1583_ == 0)
{
lean_ctor_set_tag(v___x_1582_, 1);
lean_ctor_set(v___x_1582_, 1, v___x_1570_);
lean_ctor_set(v___x_1582_, 0, v___x_1593_);
v___x_1595_ = v___x_1582_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v___x_1593_);
lean_ctor_set(v_reuseFailAlloc_1597_, 1, v___x_1570_);
v___x_1595_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
lean_object* v___x_1596_; 
v___x_1596_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_1595_, v___y_1541_, v___y_1544_, v___y_1545_, v___y_1546_, v___y_1547_);
return v___x_1596_;
}
}
else
{
lean_object* v_a_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1605_; 
lean_del_object(v___x_1582_);
lean_dec(v_snd_1580_);
lean_dec(v_fst_1539_);
v_a_1598_ = lean_ctor_get(v___x_1589_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v___x_1589_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1600_ = v___x_1589_;
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_a_1598_);
lean_dec(v___x_1589_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1603_; 
if (v_isShared_1601_ == 0)
{
v___x_1603_ = v___x_1600_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_a_1598_);
v___x_1603_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
return v___x_1603_;
}
}
}
}
}
}
else
{
lean_object* v_a_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1615_; 
lean_del_object(v___x_1560_);
lean_dec_ref(v_target_1558_);
lean_dec_ref(v_00_u03c3s_1556_);
lean_dec(v_u_1555_);
lean_dec_ref(v_restHyps_1551_);
lean_dec(v_fst_1539_);
v_a_1608_ = lean_ctor_get(v___x_1577_, 0);
v_isSharedCheck_1615_ = !lean_is_exclusive(v___x_1577_);
if (v_isSharedCheck_1615_ == 0)
{
v___x_1610_ = v___x_1577_;
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_a_1608_);
lean_dec(v___x_1577_);
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
else
{
lean_del_object(v___x_1560_);
lean_dec_ref(v_target_1558_);
lean_dec_ref(v_hyps_1557_);
lean_dec_ref(v_00_u03c3s_1556_);
lean_dec(v_u_1555_);
lean_dec_ref(v_proof_1552_);
lean_dec_ref(v_restHyps_1551_);
lean_dec_ref(v_focusHyp_1550_);
lean_dec(v_fst_1539_);
lean_dec_ref(v___x_1537_);
return v___x_1563_;
}
}
}
else
{
lean_object* v___x_1617_; lean_object* v___x_1618_; 
lean_dec(v___x_1553_);
lean_dec_ref(v_proof_1552_);
lean_dec_ref(v_restHyps_1551_);
lean_dec_ref(v_focusHyp_1550_);
lean_dec(v_fst_1539_);
lean_dec_ref(v___x_1537_);
lean_dec(v_hyp_1536_);
lean_dec_ref(v_snd_1535_);
v___x_1617_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__3);
v___x_1618_ = l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__3(v___x_1617_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_, v___y_1545_, v___y_1546_, v___y_1547_);
return v___x_1618_;
}
}
else
{
lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; 
lean_dec(v_fst_1539_);
lean_dec_ref(v___x_1537_);
lean_dec_ref(v_snd_1535_);
lean_dec(v___x_1534_);
v___x_1619_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__5);
v___x_1620_ = l_Lean_MessageData_ofSyntax(v_hyp_1536_);
v___x_1621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1619_);
lean_ctor_set(v___x_1621_, 1, v___x_1620_);
v___x_1622_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__7);
v___x_1623_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1621_);
lean_ctor_set(v___x_1623_, 1, v___x_1622_);
v___x_1624_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0___redArg(v___x_1623_, v___y_1544_, v___y_1545_, v___y_1546_, v___y_1547_);
return v___x_1624_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___boxed(lean_object* v___x_1625_, lean_object* v_snd_1626_, lean_object* v_hyp_1627_, lean_object* v___x_1628_, lean_object* v_args_1629_, lean_object* v_fst_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_){
_start:
{
lean_object* v_res_1640_; 
v_res_1640_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0(v___x_1625_, v_snd_1626_, v_hyp_1627_, v___x_1628_, v_args_1629_, v_fst_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
lean_dec(v___y_1638_);
lean_dec_ref(v___y_1637_);
lean_dec(v___y_1636_);
lean_dec_ref(v___y_1635_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1633_);
lean_dec(v___y_1632_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v_args_1629_);
return v_res_1640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize(lean_object* v_x_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_, lean_object* v_a_1654_, lean_object* v_a_1655_, lean_object* v_a_1656_){
_start:
{
lean_object* v___x_1658_; lean_object* v___x_1659_; uint8_t v___x_1660_; 
v___x_1658_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_1659_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___closed__2));
lean_inc(v_x_1648_);
v___x_1660_ = l_Lean_Syntax_isOfKind(v_x_1648_, v___x_1659_);
if (v___x_1660_ == 0)
{
lean_object* v___x_1661_; 
lean_dec(v_x_1648_);
v___x_1661_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0___redArg();
return v___x_1661_;
}
else
{
lean_object* v___x_1662_; 
v___x_1662_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(v_a_1650_, v_a_1653_, v_a_1654_, v_a_1655_, v_a_1656_);
if (lean_obj_tag(v___x_1662_) == 0)
{
lean_object* v_a_1663_; lean_object* v_fst_1664_; lean_object* v_snd_1665_; lean_object* v___x_1666_; lean_object* v_hyp_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v_args_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___y_1673_; lean_object* v___x_1674_; 
v_a_1663_ = lean_ctor_get(v___x_1662_, 0);
lean_inc(v_a_1663_);
lean_dec_ref_known(v___x_1662_, 1);
v_fst_1664_ = lean_ctor_get(v_a_1663_, 0);
lean_inc_n(v_fst_1664_, 2);
v_snd_1665_ = lean_ctor_get(v_a_1663_, 1);
lean_inc_n(v_snd_1665_, 2);
lean_dec(v_a_1663_);
v___x_1666_ = lean_unsigned_to_nat(1u);
v_hyp_1667_ = l_Lean_Syntax_getArg(v_x_1648_, v___x_1666_);
v___x_1668_ = lean_unsigned_to_nat(2u);
v___x_1669_ = l_Lean_Syntax_getArg(v_x_1648_, v___x_1668_);
lean_dec(v_x_1648_);
v_args_1670_ = l_Lean_Syntax_getArgs(v___x_1669_);
lean_dec(v___x_1669_);
v___x_1671_ = l_Lean_TSyntax_getId(v_hyp_1667_);
v___x_1672_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHyp(v_snd_1665_, v___x_1671_);
lean_dec(v___x_1671_);
v___y_1673_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___boxed), 15, 6);
lean_closure_set(v___y_1673_, 0, v___x_1672_);
lean_closure_set(v___y_1673_, 1, v_snd_1665_);
lean_closure_set(v___y_1673_, 2, v_hyp_1667_);
lean_closure_set(v___y_1673_, 3, v___x_1658_);
lean_closure_set(v___y_1673_, 4, v_args_1670_);
lean_closure_set(v___y_1673_, 5, v_fst_1664_);
v___x_1674_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__4___redArg(v_fst_1664_, v___y_1673_, v_a_1649_, v_a_1650_, v_a_1651_, v_a_1652_, v_a_1653_, v_a_1654_, v_a_1655_, v_a_1656_);
return v___x_1674_;
}
else
{
lean_object* v_a_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1682_; 
lean_dec(v_x_1648_);
v_a_1675_ = lean_ctor_get(v___x_1662_, 0);
v_isSharedCheck_1682_ = !lean_is_exclusive(v___x_1662_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1677_ = v___x_1662_;
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_a_1675_);
lean_dec(v___x_1662_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1680_; 
if (v_isShared_1678_ == 0)
{
v___x_1680_ = v___x_1677_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v_a_1675_);
v___x_1680_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
return v___x_1680_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___boxed(lean_object* v_x_1683_, lean_object* v_a_1684_, lean_object* v_a_1685_, lean_object* v_a_1686_, lean_object* v_a_1687_, lean_object* v_a_1688_, lean_object* v_a_1689_, lean_object* v_a_1690_, lean_object* v_a_1691_, lean_object* v_a_1692_){
_start:
{
lean_object* v_res_1693_; 
v_res_1693_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize(v_x_1683_, v_a_1684_, v_a_1685_, v_a_1686_, v_a_1687_, v_a_1688_, v_a_1689_, v_a_1690_, v_a_1691_);
lean_dec(v_a_1691_);
lean_dec_ref(v_a_1690_);
lean_dec(v_a_1689_);
lean_dec_ref(v_a_1688_);
lean_dec(v_a_1687_);
lean_dec_ref(v_a_1686_);
lean_dec(v_a_1685_);
lean_dec_ref(v_a_1684_);
return v_res_1693_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2(lean_object* v_mvarId_1694_, lean_object* v_val_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_){
_start:
{
lean_object* v___x_1705_; 
v___x_1705_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2___redArg(v_mvarId_1694_, v_val_1695_, v___y_1701_);
return v___x_1705_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2___boxed(lean_object* v_mvarId_1706_, lean_object* v_val_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_){
_start:
{
lean_object* v_res_1717_; 
v_res_1717_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2(v_mvarId_1706_, v_val_1707_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
lean_dec(v___y_1715_);
lean_dec_ref(v___y_1714_);
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
lean_dec(v___y_1711_);
lean_dec_ref(v___y_1710_);
lean_dec(v___y_1709_);
lean_dec_ref(v___y_1708_);
return v_res_1717_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2(lean_object* v_00_u03b2_1718_, lean_object* v_x_1719_, lean_object* v_x_1720_, lean_object* v_x_1721_){
_start:
{
lean_object* v___x_1722_; 
v___x_1722_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2___redArg(v_x_1719_, v_x_1720_, v_x_1721_);
return v___x_1722_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5(lean_object* v_00_u03b2_1723_, lean_object* v_x_1724_, size_t v_x_1725_, size_t v_x_1726_, lean_object* v_x_1727_, lean_object* v_x_1728_){
_start:
{
lean_object* v___x_1729_; 
v___x_1729_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___redArg(v_x_1724_, v_x_1725_, v_x_1726_, v_x_1727_, v_x_1728_);
return v___x_1729_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5___boxed(lean_object* v_00_u03b2_1730_, lean_object* v_x_1731_, lean_object* v_x_1732_, lean_object* v_x_1733_, lean_object* v_x_1734_, lean_object* v_x_1735_){
_start:
{
size_t v_x_9134__boxed_1736_; size_t v_x_9135__boxed_1737_; lean_object* v_res_1738_; 
v_x_9134__boxed_1736_ = lean_unbox_usize(v_x_1732_);
lean_dec(v_x_1732_);
v_x_9135__boxed_1737_ = lean_unbox_usize(v_x_1733_);
lean_dec(v_x_1733_);
v_res_1738_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5(v_00_u03b2_1730_, v_x_1731_, v_x_9134__boxed_1736_, v_x_9135__boxed_1737_, v_x_1734_, v_x_1735_);
return v_res_1738_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__6(lean_object* v_00_u03b2_1739_, lean_object* v_n_1740_, lean_object* v_k_1741_, lean_object* v_v_1742_){
_start:
{
lean_object* v___x_1743_; 
v___x_1743_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__6___redArg(v_n_1740_, v_k_1741_, v_v_1742_);
return v___x_1743_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__7(lean_object* v_00_u03b2_1744_, size_t v_depth_1745_, lean_object* v_keys_1746_, lean_object* v_vals_1747_, lean_object* v_heq_1748_, lean_object* v_i_1749_, lean_object* v_entries_1750_){
_start:
{
lean_object* v___x_1751_; 
v___x_1751_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__7___redArg(v_depth_1745_, v_keys_1746_, v_vals_1747_, v_i_1749_, v_entries_1750_);
return v___x_1751_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__7___boxed(lean_object* v_00_u03b2_1752_, lean_object* v_depth_1753_, lean_object* v_keys_1754_, lean_object* v_vals_1755_, lean_object* v_heq_1756_, lean_object* v_i_1757_, lean_object* v_entries_1758_){
_start:
{
size_t v_depth_boxed_1759_; lean_object* v_res_1760_; 
v_depth_boxed_1759_ = lean_unbox_usize(v_depth_1753_);
lean_dec(v_depth_1753_);
v_res_1760_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__7(v_00_u03b2_1752_, v_depth_boxed_1759_, v_keys_1754_, v_vals_1755_, v_heq_1756_, v_i_1757_, v_entries_1758_);
lean_dec_ref(v_vals_1755_);
lean_dec_ref(v_keys_1754_);
return v_res_1760_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__6_spec__7(lean_object* v_00_u03b2_1761_, lean_object* v_x_1762_, lean_object* v_x_1763_, lean_object* v_x_1764_, lean_object* v_x_1765_){
_start:
{
lean_object* v___x_1766_; 
v___x_1766_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2_spec__2_spec__5_spec__6_spec__7___redArg(v_x_1762_, v_x_1763_, v_x_1764_, v_x_1765_);
return v___x_1766_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__0___redArg(lean_object* v___y_1767_){
_start:
{
lean_object* v___x_1769_; lean_object* v_ngen_1770_; lean_object* v_namePrefix_1771_; lean_object* v_idx_1772_; lean_object* v___x_1774_; uint8_t v_isShared_1775_; uint8_t v_isSharedCheck_1801_; 
v___x_1769_ = lean_st_ref_get(v___y_1767_);
v_ngen_1770_ = lean_ctor_get(v___x_1769_, 2);
lean_inc_ref(v_ngen_1770_);
lean_dec(v___x_1769_);
v_namePrefix_1771_ = lean_ctor_get(v_ngen_1770_, 0);
v_idx_1772_ = lean_ctor_get(v_ngen_1770_, 1);
v_isSharedCheck_1801_ = !lean_is_exclusive(v_ngen_1770_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1774_ = v_ngen_1770_;
v_isShared_1775_ = v_isSharedCheck_1801_;
goto v_resetjp_1773_;
}
else
{
lean_inc(v_idx_1772_);
lean_inc(v_namePrefix_1771_);
lean_dec(v_ngen_1770_);
v___x_1774_ = lean_box(0);
v_isShared_1775_ = v_isSharedCheck_1801_;
goto v_resetjp_1773_;
}
v_resetjp_1773_:
{
lean_object* v___x_1776_; lean_object* v_env_1777_; lean_object* v_nextMacroScope_1778_; lean_object* v_auxDeclNGen_1779_; lean_object* v_traceState_1780_; lean_object* v_cache_1781_; lean_object* v_messages_1782_; lean_object* v_infoState_1783_; lean_object* v_snapshotTasks_1784_; lean_object* v___x_1786_; uint8_t v_isShared_1787_; uint8_t v_isSharedCheck_1799_; 
v___x_1776_ = lean_st_ref_take(v___y_1767_);
v_env_1777_ = lean_ctor_get(v___x_1776_, 0);
v_nextMacroScope_1778_ = lean_ctor_get(v___x_1776_, 1);
v_auxDeclNGen_1779_ = lean_ctor_get(v___x_1776_, 3);
v_traceState_1780_ = lean_ctor_get(v___x_1776_, 4);
v_cache_1781_ = lean_ctor_get(v___x_1776_, 5);
v_messages_1782_ = lean_ctor_get(v___x_1776_, 6);
v_infoState_1783_ = lean_ctor_get(v___x_1776_, 7);
v_snapshotTasks_1784_ = lean_ctor_get(v___x_1776_, 8);
v_isSharedCheck_1799_ = !lean_is_exclusive(v___x_1776_);
if (v_isSharedCheck_1799_ == 0)
{
lean_object* v_unused_1800_; 
v_unused_1800_ = lean_ctor_get(v___x_1776_, 2);
lean_dec(v_unused_1800_);
v___x_1786_ = v___x_1776_;
v_isShared_1787_ = v_isSharedCheck_1799_;
goto v_resetjp_1785_;
}
else
{
lean_inc(v_snapshotTasks_1784_);
lean_inc(v_infoState_1783_);
lean_inc(v_messages_1782_);
lean_inc(v_cache_1781_);
lean_inc(v_traceState_1780_);
lean_inc(v_auxDeclNGen_1779_);
lean_inc(v_nextMacroScope_1778_);
lean_inc(v_env_1777_);
lean_dec(v___x_1776_);
v___x_1786_ = lean_box(0);
v_isShared_1787_ = v_isSharedCheck_1799_;
goto v_resetjp_1785_;
}
v_resetjp_1785_:
{
lean_object* v_r_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1792_; 
lean_inc(v_idx_1772_);
lean_inc(v_namePrefix_1771_);
v_r_1788_ = l_Lean_Name_num___override(v_namePrefix_1771_, v_idx_1772_);
v___x_1789_ = lean_unsigned_to_nat(1u);
v___x_1790_ = lean_nat_add(v_idx_1772_, v___x_1789_);
lean_dec(v_idx_1772_);
if (v_isShared_1775_ == 0)
{
lean_ctor_set(v___x_1774_, 1, v___x_1790_);
v___x_1792_ = v___x_1774_;
goto v_reusejp_1791_;
}
else
{
lean_object* v_reuseFailAlloc_1798_; 
v_reuseFailAlloc_1798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1798_, 0, v_namePrefix_1771_);
lean_ctor_set(v_reuseFailAlloc_1798_, 1, v___x_1790_);
v___x_1792_ = v_reuseFailAlloc_1798_;
goto v_reusejp_1791_;
}
v_reusejp_1791_:
{
lean_object* v___x_1794_; 
if (v_isShared_1787_ == 0)
{
lean_ctor_set(v___x_1786_, 2, v___x_1792_);
v___x_1794_ = v___x_1786_;
goto v_reusejp_1793_;
}
else
{
lean_object* v_reuseFailAlloc_1797_; 
v_reuseFailAlloc_1797_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1797_, 0, v_env_1777_);
lean_ctor_set(v_reuseFailAlloc_1797_, 1, v_nextMacroScope_1778_);
lean_ctor_set(v_reuseFailAlloc_1797_, 2, v___x_1792_);
lean_ctor_set(v_reuseFailAlloc_1797_, 3, v_auxDeclNGen_1779_);
lean_ctor_set(v_reuseFailAlloc_1797_, 4, v_traceState_1780_);
lean_ctor_set(v_reuseFailAlloc_1797_, 5, v_cache_1781_);
lean_ctor_set(v_reuseFailAlloc_1797_, 6, v_messages_1782_);
lean_ctor_set(v_reuseFailAlloc_1797_, 7, v_infoState_1783_);
lean_ctor_set(v_reuseFailAlloc_1797_, 8, v_snapshotTasks_1784_);
v___x_1794_ = v_reuseFailAlloc_1797_;
goto v_reusejp_1793_;
}
v_reusejp_1793_:
{
lean_object* v___x_1795_; lean_object* v___x_1796_; 
v___x_1795_ = lean_st_ref_set(v___y_1767_, v___x_1794_);
v___x_1796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1796_, 0, v_r_1788_);
return v___x_1796_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__0___redArg___boxed(lean_object* v___y_1802_, lean_object* v___y_1803_){
_start:
{
lean_object* v_res_1804_; 
v_res_1804_ = l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__0___redArg(v___y_1802_);
lean_dec(v___y_1802_);
return v_res_1804_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__0(lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_){
_start:
{
lean_object* v___x_1814_; 
v___x_1814_ = l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__0___redArg(v___y_1812_);
return v___x_1814_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__0___boxed(lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_){
_start:
{
lean_object* v_res_1824_; 
v_res_1824_ = l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__0(v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_);
lean_dec(v___y_1822_);
lean_dec_ref(v___y_1821_);
lean_dec(v___y_1820_);
lean_dec_ref(v___y_1819_);
lean_dec(v___y_1818_);
lean_dec_ref(v___y_1817_);
lean_dec(v___y_1816_);
lean_dec_ref(v___y_1815_);
return v_res_1824_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__1___redArg(lean_object* v_e_1825_, lean_object* v___y_1826_){
_start:
{
uint8_t v___x_1828_; 
v___x_1828_ = l_Lean_Expr_hasMVar(v_e_1825_);
if (v___x_1828_ == 0)
{
lean_object* v___x_1829_; 
v___x_1829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1829_, 0, v_e_1825_);
return v___x_1829_;
}
else
{
lean_object* v___x_1830_; lean_object* v_mctx_1831_; lean_object* v___x_1832_; lean_object* v_fst_1833_; lean_object* v_snd_1834_; lean_object* v___x_1835_; lean_object* v_cache_1836_; lean_object* v_zetaDeltaFVarIds_1837_; lean_object* v_postponed_1838_; lean_object* v_diag_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_1848_; 
v___x_1830_ = lean_st_ref_get(v___y_1826_);
v_mctx_1831_ = lean_ctor_get(v___x_1830_, 0);
lean_inc_ref(v_mctx_1831_);
lean_dec(v___x_1830_);
v___x_1832_ = l_Lean_instantiateMVarsCore(v_mctx_1831_, v_e_1825_);
v_fst_1833_ = lean_ctor_get(v___x_1832_, 0);
lean_inc(v_fst_1833_);
v_snd_1834_ = lean_ctor_get(v___x_1832_, 1);
lean_inc(v_snd_1834_);
lean_dec_ref(v___x_1832_);
v___x_1835_ = lean_st_ref_take(v___y_1826_);
v_cache_1836_ = lean_ctor_get(v___x_1835_, 1);
v_zetaDeltaFVarIds_1837_ = lean_ctor_get(v___x_1835_, 2);
v_postponed_1838_ = lean_ctor_get(v___x_1835_, 3);
v_diag_1839_ = lean_ctor_get(v___x_1835_, 4);
v_isSharedCheck_1848_ = !lean_is_exclusive(v___x_1835_);
if (v_isSharedCheck_1848_ == 0)
{
lean_object* v_unused_1849_; 
v_unused_1849_ = lean_ctor_get(v___x_1835_, 0);
lean_dec(v_unused_1849_);
v___x_1841_ = v___x_1835_;
v_isShared_1842_ = v_isSharedCheck_1848_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_diag_1839_);
lean_inc(v_postponed_1838_);
lean_inc(v_zetaDeltaFVarIds_1837_);
lean_inc(v_cache_1836_);
lean_dec(v___x_1835_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_1848_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
lean_object* v___x_1844_; 
if (v_isShared_1842_ == 0)
{
lean_ctor_set(v___x_1841_, 0, v_snd_1834_);
v___x_1844_ = v___x_1841_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v_snd_1834_);
lean_ctor_set(v_reuseFailAlloc_1847_, 1, v_cache_1836_);
lean_ctor_set(v_reuseFailAlloc_1847_, 2, v_zetaDeltaFVarIds_1837_);
lean_ctor_set(v_reuseFailAlloc_1847_, 3, v_postponed_1838_);
lean_ctor_set(v_reuseFailAlloc_1847_, 4, v_diag_1839_);
v___x_1844_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
lean_object* v___x_1845_; lean_object* v___x_1846_; 
v___x_1845_ = lean_st_ref_set(v___y_1826_, v___x_1844_);
v___x_1846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1846_, 0, v_fst_1833_);
return v___x_1846_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__1___redArg___boxed(lean_object* v_e_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_){
_start:
{
lean_object* v_res_1853_; 
v_res_1853_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__1___redArg(v_e_1850_, v___y_1851_);
lean_dec(v___y_1851_);
return v_res_1853_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__1(lean_object* v_e_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_){
_start:
{
lean_object* v___x_1864_; 
v___x_1864_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__1___redArg(v_e_1854_, v___y_1860_);
return v___x_1864_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__1___boxed(lean_object* v_e_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_){
_start:
{
lean_object* v_res_1875_; 
v_res_1875_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__1(v_e_1865_, v___y_1866_, v___y_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_);
lean_dec(v___y_1873_);
lean_dec_ref(v___y_1872_);
lean_dec(v___y_1871_);
lean_dec_ref(v___y_1870_);
lean_dec(v___y_1869_);
lean_dec_ref(v___y_1868_);
lean_dec(v___y_1867_);
lean_dec_ref(v___y_1866_);
return v_res_1875_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__2(lean_object* v___x_1876_, lean_object* v___x_1877_, lean_object* v___x_1878_, lean_object* v___x_1879_, lean_object* v___x_1880_, lean_object* v_as_1881_, size_t v_sz_1882_, size_t v_i_1883_, lean_object* v_b_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_){
_start:
{
lean_object* v_a_1895_; uint8_t v___x_1899_; 
v___x_1899_ = lean_usize_dec_lt(v_i_1883_, v_sz_1882_);
if (v___x_1899_ == 0)
{
lean_object* v___x_1900_; 
lean_dec_ref(v___x_1880_);
lean_dec_ref(v___x_1879_);
lean_dec_ref(v___x_1878_);
lean_dec(v___x_1877_);
lean_dec(v___x_1876_);
v___x_1900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1900_, 0, v_b_1884_);
return v___x_1900_;
}
else
{
lean_object* v_fst_1901_; lean_object* v_snd_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1956_; 
v_fst_1901_ = lean_ctor_get(v_b_1884_, 0);
v_snd_1902_ = lean_ctor_get(v_b_1884_, 1);
v_isSharedCheck_1956_ = !lean_is_exclusive(v_b_1884_);
if (v_isSharedCheck_1956_ == 0)
{
v___x_1904_ = v_b_1884_;
v_isShared_1905_ = v_isSharedCheck_1956_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_snd_1902_);
lean_inc(v_fst_1901_);
lean_dec(v_b_1884_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1956_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v_a_1909_; lean_object* v___y_1911_; lean_object* v___x_1951_; 
v___x_1906_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0));
v___x_1907_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_1908_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__1));
v_a_1909_ = lean_array_uget_borrowed(v_as_1881_, v_i_1883_);
lean_inc(v_a_1909_);
lean_inc(v_fst_1901_);
lean_inc_ref(v___x_1879_);
v___x_1951_ = l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful(v___x_1879_, v_fst_1901_, v_a_1909_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_);
if (lean_obj_tag(v___x_1951_) == 0)
{
lean_object* v_a_1952_; 
v_a_1952_ = lean_ctor_get(v___x_1951_, 0);
lean_inc(v_a_1952_);
if (lean_obj_tag(v_a_1952_) == 0)
{
lean_object* v___x_1953_; 
lean_dec_ref_known(v___x_1951_, 1);
lean_inc(v_a_1909_);
lean_inc(v_fst_1901_);
lean_inc_ref(v___x_1879_);
v___x_1953_ = l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure(v___x_1879_, v_fst_1901_, v_a_1909_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_);
if (lean_obj_tag(v___x_1953_) == 0)
{
lean_object* v_a_1954_; 
v_a_1954_ = lean_ctor_get(v___x_1953_, 0);
lean_inc(v_a_1954_);
if (lean_obj_tag(v_a_1954_) == 0)
{
lean_object* v___x_1955_; 
lean_dec_ref_known(v___x_1953_, 1);
lean_inc(v_a_1909_);
lean_inc(v_fst_1901_);
lean_inc_ref(v___x_1879_);
v___x_1955_ = l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall(v___x_1879_, v_fst_1901_, v_a_1909_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_);
v___y_1911_ = v___x_1955_;
goto v___jp_1910_;
}
else
{
lean_dec_ref_known(v_a_1954_, 1);
v___y_1911_ = v___x_1953_;
goto v___jp_1910_;
}
}
else
{
v___y_1911_ = v___x_1953_;
goto v___jp_1910_;
}
}
else
{
lean_dec_ref_known(v_a_1952_, 1);
v___y_1911_ = v___x_1951_;
goto v___jp_1910_;
}
}
else
{
v___y_1911_ = v___x_1951_;
goto v___jp_1910_;
}
v___jp_1910_:
{
if (lean_obj_tag(v___y_1911_) == 0)
{
lean_object* v_a_1912_; 
v_a_1912_ = lean_ctor_get(v___y_1911_, 0);
lean_inc(v_a_1912_);
lean_dec_ref_known(v___y_1911_, 1);
if (lean_obj_tag(v_a_1912_) == 0)
{
lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; 
v___x_1913_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___closed__1);
lean_inc(v_fst_1901_);
v___x_1914_ = l_Lean_MessageData_ofExpr(v_fst_1901_);
v___x_1915_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1915_, 0, v___x_1913_);
lean_ctor_set(v___x_1915_, 1, v___x_1914_);
v___x_1916_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8);
v___x_1917_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1917_, 0, v___x_1915_);
lean_ctor_set(v___x_1917_, 1, v___x_1916_);
lean_inc(v_a_1909_);
v___x_1918_ = l_Lean_MessageData_ofSyntax(v_a_1909_);
v___x_1919_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1919_, 0, v___x_1917_);
lean_ctor_set(v___x_1919_, 1, v___x_1918_);
v___x_1920_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0___redArg(v___x_1919_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_);
if (lean_obj_tag(v___x_1920_) == 0)
{
lean_object* v___x_1922_; 
lean_dec_ref_known(v___x_1920_, 1);
if (v_isShared_1905_ == 0)
{
v___x_1922_ = v___x_1904_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v_fst_1901_);
lean_ctor_set(v_reuseFailAlloc_1923_, 1, v_snd_1902_);
v___x_1922_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
v_a_1895_ = v___x_1922_;
goto v___jp_1894_;
}
}
else
{
lean_object* v_a_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1931_; 
lean_del_object(v___x_1904_);
lean_dec(v_snd_1902_);
lean_dec(v_fst_1901_);
lean_dec_ref(v___x_1880_);
lean_dec_ref(v___x_1879_);
lean_dec_ref(v___x_1878_);
lean_dec(v___x_1877_);
lean_dec(v___x_1876_);
v_a_1924_ = lean_ctor_get(v___x_1920_, 0);
v_isSharedCheck_1931_ = !lean_is_exclusive(v___x_1920_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1926_ = v___x_1920_;
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_a_1924_);
lean_dec(v___x_1920_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1929_; 
if (v_isShared_1927_ == 0)
{
v___x_1929_ = v___x_1926_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v_a_1924_);
v___x_1929_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
return v___x_1929_;
}
}
}
}
else
{
lean_object* v_val_1932_; lean_object* v_fst_1933_; lean_object* v_snd_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1942_; 
lean_del_object(v___x_1904_);
v_val_1932_ = lean_ctor_get(v_a_1912_, 0);
lean_inc(v_val_1932_);
lean_dec_ref_known(v_a_1912_, 1);
v_fst_1933_ = lean_ctor_get(v_val_1932_, 0);
v_snd_1934_ = lean_ctor_get(v_val_1932_, 1);
v_isSharedCheck_1942_ = !lean_is_exclusive(v_val_1932_);
if (v_isSharedCheck_1942_ == 0)
{
v___x_1936_ = v_val_1932_;
v_isShared_1937_ = v_isSharedCheck_1942_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_snd_1934_);
lean_inc(v_fst_1933_);
lean_dec(v_val_1932_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1942_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v___f_1938_; lean_object* v___x_1940_; 
lean_inc_ref(v___x_1880_);
lean_inc(v_fst_1933_);
lean_inc_ref(v___x_1879_);
lean_inc_ref(v___x_1878_);
lean_inc(v___x_1877_);
lean_inc(v___x_1876_);
v___f_1938_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___lam__0), 13, 12);
lean_closure_set(v___f_1938_, 0, v___x_1906_);
lean_closure_set(v___f_1938_, 1, v___x_1907_);
lean_closure_set(v___f_1938_, 2, v___x_1908_);
lean_closure_set(v___f_1938_, 3, v___x_1876_);
lean_closure_set(v___f_1938_, 4, v___x_1877_);
lean_closure_set(v___f_1938_, 5, v___x_1878_);
lean_closure_set(v___f_1938_, 6, v___x_1879_);
lean_closure_set(v___f_1938_, 7, v_fst_1901_);
lean_closure_set(v___f_1938_, 8, v_fst_1933_);
lean_closure_set(v___f_1938_, 9, v___x_1880_);
lean_closure_set(v___f_1938_, 10, v_snd_1934_);
lean_closure_set(v___f_1938_, 11, v_snd_1902_);
if (v_isShared_1937_ == 0)
{
lean_ctor_set(v___x_1936_, 1, v___f_1938_);
v___x_1940_ = v___x_1936_;
goto v_reusejp_1939_;
}
else
{
lean_object* v_reuseFailAlloc_1941_; 
v_reuseFailAlloc_1941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1941_, 0, v_fst_1933_);
lean_ctor_set(v_reuseFailAlloc_1941_, 1, v___f_1938_);
v___x_1940_ = v_reuseFailAlloc_1941_;
goto v_reusejp_1939_;
}
v_reusejp_1939_:
{
v_a_1895_ = v___x_1940_;
goto v___jp_1894_;
}
}
}
}
else
{
lean_object* v_a_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1950_; 
lean_del_object(v___x_1904_);
lean_dec(v_snd_1902_);
lean_dec(v_fst_1901_);
lean_dec_ref(v___x_1880_);
lean_dec_ref(v___x_1879_);
lean_dec_ref(v___x_1878_);
lean_dec(v___x_1877_);
lean_dec(v___x_1876_);
v_a_1943_ = lean_ctor_get(v___y_1911_, 0);
v_isSharedCheck_1950_ = !lean_is_exclusive(v___y_1911_);
if (v_isSharedCheck_1950_ == 0)
{
v___x_1945_ = v___y_1911_;
v_isShared_1946_ = v_isSharedCheck_1950_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_a_1943_);
lean_dec(v___y_1911_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1950_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v___x_1948_; 
if (v_isShared_1946_ == 0)
{
v___x_1948_ = v___x_1945_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v_a_1943_);
v___x_1948_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
return v___x_1948_;
}
}
}
}
}
}
v___jp_1894_:
{
size_t v___x_1896_; size_t v___x_1897_; 
v___x_1896_ = ((size_t)1ULL);
v___x_1897_ = lean_usize_add(v_i_1883_, v___x_1896_);
v_i_1883_ = v___x_1897_;
v_b_1884_ = v_a_1895_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__2___boxed(lean_object** _args){
lean_object* v___x_1957_ = _args[0];
lean_object* v___x_1958_ = _args[1];
lean_object* v___x_1959_ = _args[2];
lean_object* v___x_1960_ = _args[3];
lean_object* v___x_1961_ = _args[4];
lean_object* v_as_1962_ = _args[5];
lean_object* v_sz_1963_ = _args[6];
lean_object* v_i_1964_ = _args[7];
lean_object* v_b_1965_ = _args[8];
lean_object* v___y_1966_ = _args[9];
lean_object* v___y_1967_ = _args[10];
lean_object* v___y_1968_ = _args[11];
lean_object* v___y_1969_ = _args[12];
lean_object* v___y_1970_ = _args[13];
lean_object* v___y_1971_ = _args[14];
lean_object* v___y_1972_ = _args[15];
lean_object* v___y_1973_ = _args[16];
lean_object* v___y_1974_ = _args[17];
_start:
{
size_t v_sz_boxed_1975_; size_t v_i_boxed_1976_; lean_object* v_res_1977_; 
v_sz_boxed_1975_ = lean_unbox_usize(v_sz_1963_);
lean_dec(v_sz_1963_);
v_i_boxed_1976_ = lean_unbox_usize(v_i_1964_);
lean_dec(v_i_1964_);
v_res_1977_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__2(v___x_1957_, v___x_1958_, v___x_1959_, v___x_1960_, v___x_1961_, v_as_1962_, v_sz_boxed_1975_, v_i_boxed_1976_, v_b_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_);
lean_dec(v___y_1973_);
lean_dec_ref(v___y_1972_);
lean_dec(v___y_1971_);
lean_dec_ref(v___y_1970_);
lean_dec(v___y_1969_);
lean_dec_ref(v___y_1968_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec_ref(v_as_1962_);
return v_res_1977_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__4(void){
_start:
{
lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; 
v___x_1985_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__3));
v___x_1986_ = lean_unsigned_to_nat(33u);
v___x_1987_ = lean_unsigned_to_nat(173u);
v___x_1988_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__2));
v___x_1989_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__15));
v___x_1990_ = l_mkPanicMessageWithDecl(v___x_1989_, v___x_1988_, v___x_1987_, v___x_1986_, v___x_1985_);
return v___x_1990_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0(lean_object* v___x_1991_, lean_object* v___x_1992_, uint8_t v___x_1993_, lean_object* v_u_1994_, lean_object* v_00_u03c3s_1995_, lean_object* v___x_1996_, lean_object* v_hyp_1997_, lean_object* v_hyps_1998_, lean_object* v_target_1999_, lean_object* v_args_2000_, lean_object* v_fst_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_){
_start:
{
lean_object* v___x_2011_; 
v___x_2011_ = l_Lean_Elab_Tactic_elabTerm(v___x_1991_, v___x_1992_, v___x_1993_, v___y_2002_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_);
if (lean_obj_tag(v___x_2011_) == 0)
{
lean_object* v_a_2012_; lean_object* v___x_2013_; 
v_a_2012_ = lean_ctor_get(v___x_2011_, 0);
lean_inc_n(v_a_2012_, 2);
lean_dec_ref_known(v___x_2011_, 1);
lean_inc(v___y_2009_);
lean_inc_ref(v___y_2008_);
lean_inc(v___y_2007_);
lean_inc_ref(v___y_2006_);
v___x_2013_ = lean_infer_type(v_a_2012_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_);
if (lean_obj_tag(v___x_2013_) == 0)
{
lean_object* v_a_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; uint8_t v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; 
v_a_2014_ = lean_ctor_get(v___x_2013_, 0);
lean_inc(v_a_2014_);
lean_dec_ref_known(v___x_2013_, 1);
v___x_2015_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0));
v___x_2016_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_2017_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__1));
v___x_2018_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__0));
v___x_2019_ = lean_box(0);
lean_inc(v_u_1994_);
v___x_2020_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2020_, 0, v_u_1994_);
lean_ctor_set(v___x_2020_, 1, v___x_2019_);
lean_inc_ref(v___x_2020_);
v___x_2021_ = l_Lean_mkConst(v___x_2018_, v___x_2020_);
lean_inc_ref(v_00_u03c3s_1995_);
v___x_2022_ = l_Lean_Expr_app___override(v___x_2021_, v_00_u03c3s_1995_);
v___x_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2023_, 0, v___x_2022_);
v___x_2024_ = 0;
v___x_2025_ = lean_box(0);
v___x_2026_ = l_Lean_Meta_mkFreshExprMVar(v___x_2023_, v___x_2024_, v___x_2025_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_);
if (lean_obj_tag(v___x_2026_) == 0)
{
lean_object* v_a_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; 
v_a_2027_ = lean_ctor_get(v___x_2026_, 0);
lean_inc_n(v_a_2027_, 2);
lean_dec_ref_known(v___x_2026_, 1);
v___x_2028_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__5));
lean_inc_ref(v___x_1996_);
v___x_2029_ = l_Lean_Name_mkStr5(v___x_2015_, v___x_2016_, v___x_2017_, v___x_1996_, v___x_2028_);
lean_inc_ref(v___x_2020_);
v___x_2030_ = l_Lean_mkConst(v___x_2029_, v___x_2020_);
lean_inc_ref(v_00_u03c3s_1995_);
lean_inc(v_a_2014_);
v___x_2031_ = l_Lean_mkApp3(v___x_2030_, v_a_2014_, v_00_u03c3s_1995_, v_a_2027_);
v___x_2032_ = lean_box(0);
v___x_2033_ = l_Lean_Meta_synthInstance(v___x_2031_, v___x_2032_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_);
if (lean_obj_tag(v___x_2033_) == 0)
{
lean_object* v_a_2034_; lean_object* v___x_2035_; lean_object* v_a_2036_; lean_object* v___x_2037_; lean_object* v_a_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; size_t v_sz_2048_; size_t v___x_2049_; lean_object* v___x_2050_; 
v_a_2034_ = lean_ctor_get(v___x_2033_, 0);
lean_inc(v_a_2034_);
lean_dec_ref_known(v___x_2033_, 1);
v___x_2035_ = l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__0___redArg(v___y_2009_);
v_a_2036_ = lean_ctor_get(v___x_2035_, 0);
lean_inc(v_a_2036_);
lean_dec_ref(v___x_2035_);
v___x_2037_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__1___redArg(v_a_2027_, v___y_2007_);
v_a_2038_ = lean_ctor_get(v___x_2037_, 0);
lean_inc(v_a_2038_);
lean_dec_ref(v___x_2037_);
v___x_2039_ = l_Lean_TSyntax_getId(v_hyp_1997_);
v___x_2040_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2040_, 0, v___x_2039_);
lean_ctor_set(v___x_2040_, 1, v_a_2036_);
lean_ctor_set(v___x_2040_, 2, v_a_2038_);
v___x_2041_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_2040_);
v___x_2042_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_2043_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__1));
v___x_2044_ = l_Lean_Name_mkStr6(v___x_2015_, v___x_2016_, v___x_2017_, v___x_1996_, v___x_2042_, v___x_2043_);
lean_inc_ref(v___x_2020_);
v___x_2045_ = l_Lean_mkConst(v___x_2044_, v___x_2020_);
lean_inc_ref_n(v_target_1999_, 2);
lean_inc_ref_n(v_hyps_1998_, 2);
lean_inc_ref(v___x_2041_);
lean_inc_ref_n(v_00_u03c3s_1995_, 2);
v___x_2046_ = lean_alloc_closure((void*)(l_Lean_mkApp8), 9, 8);
lean_closure_set(v___x_2046_, 0, v___x_2045_);
lean_closure_set(v___x_2046_, 1, v_00_u03c3s_1995_);
lean_closure_set(v___x_2046_, 2, v_a_2014_);
lean_closure_set(v___x_2046_, 3, v___x_2041_);
lean_closure_set(v___x_2046_, 4, v_hyps_1998_);
lean_closure_set(v___x_2046_, 5, v_target_1999_);
lean_closure_set(v___x_2046_, 6, v_a_2034_);
lean_closure_set(v___x_2046_, 7, v_a_2012_);
v___x_2047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2047_, 0, v___x_2041_);
lean_ctor_set(v___x_2047_, 1, v___x_2046_);
v_sz_2048_ = lean_array_size(v_args_2000_);
v___x_2049_ = ((size_t)0ULL);
lean_inc(v_u_1994_);
v___x_2050_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__2(v___x_2020_, v_u_1994_, v_00_u03c3s_1995_, v_hyps_1998_, v_target_1999_, v_args_2000_, v_sz_2048_, v___x_2049_, v___x_2047_, v___y_2002_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_);
if (lean_obj_tag(v___x_2050_) == 0)
{
lean_object* v_a_2051_; lean_object* v_fst_2052_; lean_object* v_snd_2053_; lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2082_; 
v_a_2051_ = lean_ctor_get(v___x_2050_, 0);
lean_inc(v_a_2051_);
lean_dec_ref_known(v___x_2050_, 1);
v_fst_2052_ = lean_ctor_get(v_a_2051_, 0);
v_snd_2053_ = lean_ctor_get(v_a_2051_, 1);
v_isSharedCheck_2082_ = !lean_is_exclusive(v_a_2051_);
if (v_isSharedCheck_2082_ == 0)
{
v___x_2055_ = v_a_2051_;
v_isShared_2056_ = v_isSharedCheck_2082_;
goto v_resetjp_2054_;
}
else
{
lean_inc(v_snd_2053_);
lean_inc(v_fst_2052_);
lean_dec(v_a_2051_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2082_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
lean_object* v___x_2057_; 
lean_inc(v_fst_2052_);
v___x_2057_ = l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(v_fst_2052_);
if (lean_obj_tag(v___x_2057_) == 1)
{
lean_object* v_val_2058_; lean_object* v___x_2059_; 
v_val_2058_ = lean_ctor_get(v___x_2057_, 0);
lean_inc(v_val_2058_);
lean_dec_ref_known(v___x_2057_, 1);
lean_inc_ref(v_00_u03c3s_1995_);
v___x_2059_ = l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo(v_hyp_1997_, v_00_u03c3s_1995_, v_val_2058_, v___x_1993_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_);
if (lean_obj_tag(v___x_2059_) == 0)
{
lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; 
lean_dec_ref_known(v___x_2059_, 1);
lean_inc_ref(v_00_u03c3s_1995_);
lean_inc(v_u_1994_);
v___x_2060_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_u_1994_, v_00_u03c3s_1995_, v_hyps_1998_, v_fst_2052_);
v___x_2061_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2061_, 0, v_u_1994_);
lean_ctor_set(v___x_2061_, 1, v_00_u03c3s_1995_);
lean_ctor_set(v___x_2061_, 2, v___x_2060_);
lean_ctor_set(v___x_2061_, 3, v_target_1999_);
v___x_2062_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v___x_2061_);
v___x_2063_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_2062_, v___x_2025_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_);
if (lean_obj_tag(v___x_2063_) == 0)
{
lean_object* v_a_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2069_; 
v_a_2064_ = lean_ctor_get(v___x_2063_, 0);
lean_inc_n(v_a_2064_, 2);
lean_dec_ref_known(v___x_2063_, 1);
v___x_2065_ = lean_apply_1(v_snd_2053_, v_a_2064_);
v___x_2066_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2___redArg(v_fst_2001_, v___x_2065_, v___y_2007_);
lean_dec_ref(v___x_2066_);
v___x_2067_ = l_Lean_Expr_mvarId_x21(v_a_2064_);
lean_dec(v_a_2064_);
if (v_isShared_2056_ == 0)
{
lean_ctor_set_tag(v___x_2055_, 1);
lean_ctor_set(v___x_2055_, 1, v___x_2019_);
lean_ctor_set(v___x_2055_, 0, v___x_2067_);
v___x_2069_ = v___x_2055_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v___x_2067_);
lean_ctor_set(v_reuseFailAlloc_2071_, 1, v___x_2019_);
v___x_2069_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
lean_object* v___x_2070_; 
v___x_2070_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2069_, v___y_2003_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_);
lean_dec(v___y_2009_);
lean_dec_ref(v___y_2008_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2006_);
return v___x_2070_;
}
}
else
{
lean_object* v_a_2072_; lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2079_; 
lean_del_object(v___x_2055_);
lean_dec(v_snd_2053_);
lean_dec(v___y_2009_);
lean_dec_ref(v___y_2008_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2006_);
lean_dec(v_fst_2001_);
v_a_2072_ = lean_ctor_get(v___x_2063_, 0);
v_isSharedCheck_2079_ = !lean_is_exclusive(v___x_2063_);
if (v_isSharedCheck_2079_ == 0)
{
v___x_2074_ = v___x_2063_;
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
else
{
lean_inc(v_a_2072_);
lean_dec(v___x_2063_);
v___x_2074_ = lean_box(0);
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
v_resetjp_2073_:
{
lean_object* v___x_2077_; 
if (v_isShared_2075_ == 0)
{
v___x_2077_ = v___x_2074_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2078_; 
v_reuseFailAlloc_2078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2078_, 0, v_a_2072_);
v___x_2077_ = v_reuseFailAlloc_2078_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
return v___x_2077_;
}
}
}
}
else
{
lean_del_object(v___x_2055_);
lean_dec(v_snd_2053_);
lean_dec(v_fst_2052_);
lean_dec(v___y_2009_);
lean_dec_ref(v___y_2008_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2006_);
lean_dec(v_fst_2001_);
lean_dec_ref(v_target_1999_);
lean_dec_ref(v_hyps_1998_);
lean_dec_ref(v_00_u03c3s_1995_);
lean_dec(v_u_1994_);
return v___x_2059_;
}
}
else
{
lean_object* v___x_2080_; lean_object* v___x_2081_; 
lean_dec(v___x_2057_);
lean_del_object(v___x_2055_);
lean_dec(v_snd_2053_);
lean_dec(v_fst_2052_);
lean_dec(v_fst_2001_);
lean_dec_ref(v_target_1999_);
lean_dec_ref(v_hyps_1998_);
lean_dec(v_hyp_1997_);
lean_dec_ref(v_00_u03c3s_1995_);
lean_dec(v_u_1994_);
v___x_2080_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__4);
v___x_2081_ = l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__3(v___x_2080_, v___y_2002_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_);
lean_dec(v___y_2009_);
lean_dec_ref(v___y_2008_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2006_);
return v___x_2081_;
}
}
}
else
{
lean_object* v_a_2083_; lean_object* v___x_2085_; uint8_t v_isShared_2086_; uint8_t v_isSharedCheck_2090_; 
lean_dec(v___y_2009_);
lean_dec_ref(v___y_2008_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2006_);
lean_dec(v_fst_2001_);
lean_dec_ref(v_target_1999_);
lean_dec_ref(v_hyps_1998_);
lean_dec(v_hyp_1997_);
lean_dec_ref(v_00_u03c3s_1995_);
lean_dec(v_u_1994_);
v_a_2083_ = lean_ctor_get(v___x_2050_, 0);
v_isSharedCheck_2090_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_2085_ = v___x_2050_;
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
else
{
lean_inc(v_a_2083_);
lean_dec(v___x_2050_);
v___x_2085_ = lean_box(0);
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
v_resetjp_2084_:
{
lean_object* v___x_2088_; 
if (v_isShared_2086_ == 0)
{
v___x_2088_ = v___x_2085_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v_a_2083_);
v___x_2088_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
return v___x_2088_;
}
}
}
}
else
{
lean_object* v_a_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2098_; 
lean_dec(v_a_2027_);
lean_dec_ref_known(v___x_2020_, 2);
lean_dec(v_a_2014_);
lean_dec(v_a_2012_);
lean_dec(v___y_2009_);
lean_dec_ref(v___y_2008_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2006_);
lean_dec(v_fst_2001_);
lean_dec_ref(v_target_1999_);
lean_dec_ref(v_hyps_1998_);
lean_dec(v_hyp_1997_);
lean_dec_ref(v___x_1996_);
lean_dec_ref(v_00_u03c3s_1995_);
lean_dec(v_u_1994_);
v_a_2091_ = lean_ctor_get(v___x_2033_, 0);
v_isSharedCheck_2098_ = !lean_is_exclusive(v___x_2033_);
if (v_isSharedCheck_2098_ == 0)
{
v___x_2093_ = v___x_2033_;
v_isShared_2094_ = v_isSharedCheck_2098_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_a_2091_);
lean_dec(v___x_2033_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2098_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v___x_2096_; 
if (v_isShared_2094_ == 0)
{
v___x_2096_ = v___x_2093_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v_a_2091_);
v___x_2096_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2095_;
}
v_reusejp_2095_:
{
return v___x_2096_;
}
}
}
}
else
{
lean_object* v_a_2099_; lean_object* v___x_2101_; uint8_t v_isShared_2102_; uint8_t v_isSharedCheck_2106_; 
lean_dec_ref_known(v___x_2020_, 2);
lean_dec(v_a_2014_);
lean_dec(v_a_2012_);
lean_dec(v___y_2009_);
lean_dec_ref(v___y_2008_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2006_);
lean_dec(v_fst_2001_);
lean_dec_ref(v_target_1999_);
lean_dec_ref(v_hyps_1998_);
lean_dec(v_hyp_1997_);
lean_dec_ref(v___x_1996_);
lean_dec_ref(v_00_u03c3s_1995_);
lean_dec(v_u_1994_);
v_a_2099_ = lean_ctor_get(v___x_2026_, 0);
v_isSharedCheck_2106_ = !lean_is_exclusive(v___x_2026_);
if (v_isSharedCheck_2106_ == 0)
{
v___x_2101_ = v___x_2026_;
v_isShared_2102_ = v_isSharedCheck_2106_;
goto v_resetjp_2100_;
}
else
{
lean_inc(v_a_2099_);
lean_dec(v___x_2026_);
v___x_2101_ = lean_box(0);
v_isShared_2102_ = v_isSharedCheck_2106_;
goto v_resetjp_2100_;
}
v_resetjp_2100_:
{
lean_object* v___x_2104_; 
if (v_isShared_2102_ == 0)
{
v___x_2104_ = v___x_2101_;
goto v_reusejp_2103_;
}
else
{
lean_object* v_reuseFailAlloc_2105_; 
v_reuseFailAlloc_2105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2105_, 0, v_a_2099_);
v___x_2104_ = v_reuseFailAlloc_2105_;
goto v_reusejp_2103_;
}
v_reusejp_2103_:
{
return v___x_2104_;
}
}
}
}
else
{
lean_object* v_a_2107_; lean_object* v___x_2109_; uint8_t v_isShared_2110_; uint8_t v_isSharedCheck_2114_; 
lean_dec(v_a_2012_);
lean_dec(v___y_2009_);
lean_dec_ref(v___y_2008_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2006_);
lean_dec(v_fst_2001_);
lean_dec_ref(v_target_1999_);
lean_dec_ref(v_hyps_1998_);
lean_dec(v_hyp_1997_);
lean_dec_ref(v___x_1996_);
lean_dec_ref(v_00_u03c3s_1995_);
lean_dec(v_u_1994_);
v_a_2107_ = lean_ctor_get(v___x_2013_, 0);
v_isSharedCheck_2114_ = !lean_is_exclusive(v___x_2013_);
if (v_isSharedCheck_2114_ == 0)
{
v___x_2109_ = v___x_2013_;
v_isShared_2110_ = v_isSharedCheck_2114_;
goto v_resetjp_2108_;
}
else
{
lean_inc(v_a_2107_);
lean_dec(v___x_2013_);
v___x_2109_ = lean_box(0);
v_isShared_2110_ = v_isSharedCheck_2114_;
goto v_resetjp_2108_;
}
v_resetjp_2108_:
{
lean_object* v___x_2112_; 
if (v_isShared_2110_ == 0)
{
v___x_2112_ = v___x_2109_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2113_; 
v_reuseFailAlloc_2113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2113_, 0, v_a_2107_);
v___x_2112_ = v_reuseFailAlloc_2113_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
return v___x_2112_;
}
}
}
}
else
{
lean_object* v_a_2115_; lean_object* v___x_2117_; uint8_t v_isShared_2118_; uint8_t v_isSharedCheck_2122_; 
lean_dec(v___y_2009_);
lean_dec_ref(v___y_2008_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2006_);
lean_dec(v_fst_2001_);
lean_dec_ref(v_target_1999_);
lean_dec_ref(v_hyps_1998_);
lean_dec(v_hyp_1997_);
lean_dec_ref(v___x_1996_);
lean_dec_ref(v_00_u03c3s_1995_);
lean_dec(v_u_1994_);
v_a_2115_ = lean_ctor_get(v___x_2011_, 0);
v_isSharedCheck_2122_ = !lean_is_exclusive(v___x_2011_);
if (v_isSharedCheck_2122_ == 0)
{
v___x_2117_ = v___x_2011_;
v_isShared_2118_ = v_isSharedCheck_2122_;
goto v_resetjp_2116_;
}
else
{
lean_inc(v_a_2115_);
lean_dec(v___x_2011_);
v___x_2117_ = lean_box(0);
v_isShared_2118_ = v_isSharedCheck_2122_;
goto v_resetjp_2116_;
}
v_resetjp_2116_:
{
lean_object* v___x_2120_; 
if (v_isShared_2118_ == 0)
{
v___x_2120_ = v___x_2117_;
goto v_reusejp_2119_;
}
else
{
lean_object* v_reuseFailAlloc_2121_; 
v_reuseFailAlloc_2121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2121_, 0, v_a_2115_);
v___x_2120_ = v_reuseFailAlloc_2121_;
goto v_reusejp_2119_;
}
v_reusejp_2119_:
{
return v___x_2120_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___boxed(lean_object** _args){
lean_object* v___x_2123_ = _args[0];
lean_object* v___x_2124_ = _args[1];
lean_object* v___x_2125_ = _args[2];
lean_object* v_u_2126_ = _args[3];
lean_object* v_00_u03c3s_2127_ = _args[4];
lean_object* v___x_2128_ = _args[5];
lean_object* v_hyp_2129_ = _args[6];
lean_object* v_hyps_2130_ = _args[7];
lean_object* v_target_2131_ = _args[8];
lean_object* v_args_2132_ = _args[9];
lean_object* v_fst_2133_ = _args[10];
lean_object* v___y_2134_ = _args[11];
lean_object* v___y_2135_ = _args[12];
lean_object* v___y_2136_ = _args[13];
lean_object* v___y_2137_ = _args[14];
lean_object* v___y_2138_ = _args[15];
lean_object* v___y_2139_ = _args[16];
lean_object* v___y_2140_ = _args[17];
lean_object* v___y_2141_ = _args[18];
lean_object* v___y_2142_ = _args[19];
_start:
{
uint8_t v___x_10844__boxed_2143_; lean_object* v_res_2144_; 
v___x_10844__boxed_2143_ = lean_unbox(v___x_2125_);
v_res_2144_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0(v___x_2123_, v___x_2124_, v___x_10844__boxed_2143_, v_u_2126_, v_00_u03c3s_2127_, v___x_2128_, v_hyp_2129_, v_hyps_2130_, v_target_2131_, v_args_2132_, v_fst_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_, v___y_2139_, v___y_2140_, v___y_2141_);
lean_dec(v___y_2137_);
lean_dec_ref(v___y_2136_);
lean_dec(v___y_2135_);
lean_dec_ref(v___y_2134_);
lean_dec_ref(v_args_2132_);
return v_res_2144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure(lean_object* v_x_2158_, lean_object* v_a_2159_, lean_object* v_a_2160_, lean_object* v_a_2161_, lean_object* v_a_2162_, lean_object* v_a_2163_, lean_object* v_a_2164_, lean_object* v_a_2165_, lean_object* v_a_2166_){
_start:
{
lean_object* v___x_2168_; lean_object* v___x_2169_; uint8_t v___x_2170_; 
v___x_2168_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_2169_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__1));
lean_inc(v_x_2158_);
v___x_2170_ = l_Lean_Syntax_isOfKind(v_x_2158_, v___x_2169_);
if (v___x_2170_ == 0)
{
lean_object* v___x_2171_; 
lean_dec(v_x_2158_);
v___x_2171_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0___redArg();
return v___x_2171_;
}
else
{
lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; uint8_t v___x_2175_; 
v___x_2172_ = lean_unsigned_to_nat(1u);
v___x_2173_ = l_Lean_Syntax_getArg(v_x_2158_, v___x_2172_);
v___x_2174_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__4));
lean_inc(v___x_2173_);
v___x_2175_ = l_Lean_Syntax_isOfKind(v___x_2173_, v___x_2174_);
if (v___x_2175_ == 0)
{
lean_object* v___x_2176_; 
lean_dec(v___x_2173_);
lean_dec(v_x_2158_);
v___x_2176_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0___redArg();
return v___x_2176_;
}
else
{
lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; uint8_t v___x_2180_; 
v___x_2177_ = lean_unsigned_to_nat(0u);
v___x_2178_ = lean_unsigned_to_nat(2u);
v___x_2179_ = l_Lean_Syntax_getArg(v_x_2158_, v___x_2178_);
v___x_2180_ = l_Lean_Syntax_matchesNull(v___x_2179_, v___x_2177_);
if (v___x_2180_ == 0)
{
lean_object* v___x_2181_; 
lean_dec(v___x_2173_);
lean_dec(v_x_2158_);
v___x_2181_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0___redArg();
return v___x_2181_;
}
else
{
lean_object* v___x_2182_; 
v___x_2182_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(v_a_2160_, v_a_2163_, v_a_2164_, v_a_2165_, v_a_2166_);
if (lean_obj_tag(v___x_2182_) == 0)
{
lean_object* v_a_2183_; lean_object* v_snd_2184_; lean_object* v_fst_2185_; lean_object* v_u_2186_; lean_object* v_00_u03c3s_2187_; lean_object* v_hyps_2188_; lean_object* v_target_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v_hyp_2193_; lean_object* v_args_2194_; lean_object* v___x_2195_; uint8_t v___x_2196_; lean_object* v___x_2197_; lean_object* v___f_2198_; lean_object* v___x_2199_; 
v_a_2183_ = lean_ctor_get(v___x_2182_, 0);
lean_inc(v_a_2183_);
lean_dec_ref_known(v___x_2182_, 1);
v_snd_2184_ = lean_ctor_get(v_a_2183_, 1);
lean_inc(v_snd_2184_);
v_fst_2185_ = lean_ctor_get(v_a_2183_, 0);
lean_inc_n(v_fst_2185_, 2);
lean_dec(v_a_2183_);
v_u_2186_ = lean_ctor_get(v_snd_2184_, 0);
lean_inc(v_u_2186_);
v_00_u03c3s_2187_ = lean_ctor_get(v_snd_2184_, 1);
lean_inc_ref(v_00_u03c3s_2187_);
v_hyps_2188_ = lean_ctor_get(v_snd_2184_, 2);
lean_inc_ref(v_hyps_2188_);
v_target_2189_ = lean_ctor_get(v_snd_2184_, 3);
lean_inc_ref(v_target_2189_);
lean_dec(v_snd_2184_);
v___x_2190_ = l_Lean_Syntax_getArg(v___x_2173_, v___x_2177_);
v___x_2191_ = l_Lean_Syntax_getArg(v___x_2173_, v___x_2172_);
lean_dec(v___x_2173_);
v___x_2192_ = lean_unsigned_to_nat(4u);
v_hyp_2193_ = l_Lean_Syntax_getArg(v_x_2158_, v___x_2192_);
lean_dec(v_x_2158_);
v_args_2194_ = l_Lean_Syntax_getArgs(v___x_2191_);
lean_dec(v___x_2191_);
v___x_2195_ = lean_box(0);
v___x_2196_ = 0;
v___x_2197_ = lean_box(v___x_2196_);
v___f_2198_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___boxed), 20, 11);
lean_closure_set(v___f_2198_, 0, v___x_2190_);
lean_closure_set(v___f_2198_, 1, v___x_2195_);
lean_closure_set(v___f_2198_, 2, v___x_2197_);
lean_closure_set(v___f_2198_, 3, v_u_2186_);
lean_closure_set(v___f_2198_, 4, v_00_u03c3s_2187_);
lean_closure_set(v___f_2198_, 5, v___x_2168_);
lean_closure_set(v___f_2198_, 6, v_hyp_2193_);
lean_closure_set(v___f_2198_, 7, v_hyps_2188_);
lean_closure_set(v___f_2198_, 8, v_target_2189_);
lean_closure_set(v___f_2198_, 9, v_args_2194_);
lean_closure_set(v___f_2198_, 10, v_fst_2185_);
v___x_2199_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__4___redArg(v_fst_2185_, v___f_2198_, v_a_2159_, v_a_2160_, v_a_2161_, v_a_2162_, v_a_2163_, v_a_2164_, v_a_2165_, v_a_2166_);
return v___x_2199_;
}
else
{
lean_object* v_a_2200_; lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2207_; 
lean_dec(v___x_2173_);
lean_dec(v_x_2158_);
v_a_2200_ = lean_ctor_get(v___x_2182_, 0);
v_isSharedCheck_2207_ = !lean_is_exclusive(v___x_2182_);
if (v_isSharedCheck_2207_ == 0)
{
v___x_2202_ = v___x_2182_;
v_isShared_2203_ = v_isSharedCheck_2207_;
goto v_resetjp_2201_;
}
else
{
lean_inc(v_a_2200_);
lean_dec(v___x_2182_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2207_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
lean_object* v___x_2205_; 
if (v_isShared_2203_ == 0)
{
v___x_2205_ = v___x_2202_;
goto v_reusejp_2204_;
}
else
{
lean_object* v_reuseFailAlloc_2206_; 
v_reuseFailAlloc_2206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2206_, 0, v_a_2200_);
v___x_2205_ = v_reuseFailAlloc_2206_;
goto v_reusejp_2204_;
}
v_reusejp_2204_:
{
return v___x_2205_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___boxed(lean_object* v_x_2208_, lean_object* v_a_2209_, lean_object* v_a_2210_, lean_object* v_a_2211_, lean_object* v_a_2212_, lean_object* v_a_2213_, lean_object* v_a_2214_, lean_object* v_a_2215_, lean_object* v_a_2216_, lean_object* v_a_2217_){
_start:
{
lean_object* v_res_2218_; 
v_res_2218_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure(v_x_2208_, v_a_2209_, v_a_2210_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_, v_a_2215_, v_a_2216_);
lean_dec(v_a_2216_);
lean_dec_ref(v_a_2215_);
lean_dec(v_a_2214_);
lean_dec_ref(v_a_2213_);
lean_dec(v_a_2212_);
lean_dec_ref(v_a_2211_);
lean_dec(v_a_2210_);
lean_dec_ref(v_a_2209_);
return v_res_2218_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder(lean_object* v_uType_2227_, lean_object* v_l_2228_, lean_object* v_cl_2229_){
_start:
{
lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; 
v___x_2230_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__3));
v___x_2231_ = l_Lean_Level_succ___override(v_uType_2227_);
v___x_2232_ = lean_box(0);
v___x_2233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2233_, 0, v___x_2231_);
lean_ctor_set(v___x_2233_, 1, v___x_2232_);
v___x_2234_ = l_Lean_mkConst(v___x_2230_, v___x_2233_);
v___x_2235_ = l_Lean_mkAppB(v___x_2234_, v_l_2228_, v_cl_2229_);
return v___x_2235_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__6(void){
_start:
{
lean_object* v___x_2252_; lean_object* v___x_2253_; 
v___x_2252_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__5));
v___x_2253_ = l_Lean_stringToMessageData(v___x_2252_);
return v___x_2253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg(lean_object* v_uType_2254_, lean_object* v_l_2255_, lean_object* v_cl_2256_, lean_object* v_P_2257_, lean_object* v_QR_2258_, lean_object* v_arg_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_, lean_object* v_a_2262_, lean_object* v_a_2263_){
_start:
{
uint8_t v___x_2268_; 
v___x_2268_ = l_Lean_Syntax_isIdent(v_arg_2259_);
if (v___x_2268_ == 0)
{
lean_object* v___x_2269_; lean_object* v___x_2270_; 
lean_dec(v_arg_2259_);
lean_dec_ref(v_QR_2258_);
lean_dec_ref(v_P_2257_);
lean_dec_ref(v_cl_2256_);
lean_dec_ref(v_l_2255_);
lean_dec(v_uType_2254_);
v___x_2269_ = lean_box(0);
v___x_2270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2270_, 0, v___x_2269_);
return v___x_2270_;
}
else
{
lean_object* v___x_2271_; 
lean_inc_ref(v_QR_2258_);
v___x_2271_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseHyp_x3f(v_QR_2258_);
if (lean_obj_tag(v___x_2271_) == 1)
{
lean_object* v_val_2272_; lean_object* v___x_2274_; uint8_t v_isShared_2275_; uint8_t v_isSharedCheck_2430_; 
v_val_2272_ = lean_ctor_get(v___x_2271_, 0);
v_isSharedCheck_2430_ = !lean_is_exclusive(v___x_2271_);
if (v_isSharedCheck_2430_ == 0)
{
v___x_2274_ = v___x_2271_;
v_isShared_2275_ = v_isSharedCheck_2430_;
goto v_resetjp_2273_;
}
else
{
lean_inc(v_val_2272_);
lean_dec(v___x_2271_);
v___x_2274_ = lean_box(0);
v_isShared_2275_ = v_isSharedCheck_2430_;
goto v_resetjp_2273_;
}
v_resetjp_2273_:
{
lean_object* v_p_2276_; 
v_p_2276_ = lean_ctor_get(v_val_2272_, 2);
lean_inc_ref(v_p_2276_);
if (lean_obj_tag(v_p_2276_) == 5)
{
lean_object* v_fn_2277_; 
v_fn_2277_ = lean_ctor_get(v_p_2276_, 0);
if (lean_obj_tag(v_fn_2277_) == 5)
{
lean_object* v_fn_2278_; 
v_fn_2278_ = lean_ctor_get(v_fn_2277_, 0);
if (lean_obj_tag(v_fn_2278_) == 5)
{
lean_object* v_fn_2279_; 
v_fn_2279_ = lean_ctor_get(v_fn_2278_, 0);
if (lean_obj_tag(v_fn_2279_) == 5)
{
lean_object* v_fn_2280_; 
v_fn_2280_ = lean_ctor_get(v_fn_2279_, 0);
if (lean_obj_tag(v_fn_2280_) == 4)
{
lean_object* v_declName_2281_; 
v_declName_2281_ = lean_ctor_get(v_fn_2280_, 0);
if (lean_obj_tag(v_declName_2281_) == 1)
{
lean_object* v_pre_2282_; 
v_pre_2282_ = lean_ctor_get(v_declName_2281_, 0);
if (lean_obj_tag(v_pre_2282_) == 1)
{
lean_object* v_pre_2283_; 
v_pre_2283_ = lean_ctor_get(v_pre_2282_, 0);
if (lean_obj_tag(v_pre_2283_) == 1)
{
lean_object* v_pre_2284_; 
v_pre_2284_ = lean_ctor_get(v_pre_2283_, 0);
if (lean_obj_tag(v_pre_2284_) == 0)
{
lean_object* v_name_2285_; lean_object* v_uniq_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2428_; 
v_name_2285_ = lean_ctor_get(v_val_2272_, 0);
v_uniq_2286_ = lean_ctor_get(v_val_2272_, 1);
v_isSharedCheck_2428_ = !lean_is_exclusive(v_val_2272_);
if (v_isSharedCheck_2428_ == 0)
{
lean_object* v_unused_2429_; 
v_unused_2429_ = lean_ctor_get(v_val_2272_, 2);
lean_dec(v_unused_2429_);
v___x_2288_ = v_val_2272_;
v_isShared_2289_ = v_isSharedCheck_2428_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_uniq_2286_);
lean_inc(v_name_2285_);
lean_dec(v_val_2272_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2428_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
lean_object* v_arg_2290_; lean_object* v_arg_2291_; lean_object* v_str_2292_; lean_object* v_str_2293_; lean_object* v_str_2294_; lean_object* v___x_2295_; uint8_t v___x_2296_; 
v_arg_2290_ = lean_ctor_get(v_p_2276_, 1);
v_arg_2291_ = lean_ctor_get(v_fn_2277_, 1);
v_str_2292_ = lean_ctor_get(v_declName_2281_, 1);
v_str_2293_ = lean_ctor_get(v_pre_2282_, 1);
v_str_2294_ = lean_ctor_get(v_pre_2283_, 1);
v___x_2295_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_2296_ = lean_string_dec_eq(v_str_2294_, v___x_2295_);
if (v___x_2296_ == 0)
{
lean_del_object(v___x_2288_);
lean_dec(v_uniq_2286_);
lean_dec(v_name_2285_);
lean_dec_ref_known(v_p_2276_, 2);
lean_del_object(v___x_2274_);
lean_dec(v_arg_2259_);
lean_dec_ref(v_QR_2258_);
lean_dec_ref(v_P_2257_);
lean_dec_ref(v_cl_2256_);
lean_dec_ref(v_l_2255_);
lean_dec(v_uType_2254_);
goto v___jp_2265_;
}
else
{
lean_object* v___x_2297_; uint8_t v___x_2298_; 
v___x_2297_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__0));
v___x_2298_ = lean_string_dec_eq(v_str_2293_, v___x_2297_);
if (v___x_2298_ == 0)
{
lean_del_object(v___x_2288_);
lean_dec(v_uniq_2286_);
lean_dec(v_name_2285_);
lean_dec_ref_known(v_p_2276_, 2);
lean_del_object(v___x_2274_);
lean_dec(v_arg_2259_);
lean_dec_ref(v_QR_2258_);
lean_dec_ref(v_P_2257_);
lean_dec_ref(v_cl_2256_);
lean_dec_ref(v_l_2255_);
lean_dec(v_uType_2254_);
goto v___jp_2265_;
}
else
{
lean_object* v___x_2299_; uint8_t v___x_2300_; 
v___x_2299_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__0));
v___x_2300_ = lean_string_dec_eq(v_str_2292_, v___x_2299_);
if (v___x_2300_ == 0)
{
lean_del_object(v___x_2288_);
lean_dec(v_uniq_2286_);
lean_dec(v_name_2285_);
lean_dec_ref_known(v_p_2276_, 2);
lean_del_object(v___x_2274_);
lean_dec(v_arg_2259_);
lean_dec_ref(v_QR_2258_);
lean_dec_ref(v_P_2257_);
lean_dec_ref(v_cl_2256_);
lean_dec_ref(v_l_2255_);
lean_dec(v_uType_2254_);
goto v___jp_2265_;
}
else
{
lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; 
lean_inc_ref(v_P_2257_);
lean_inc_ref_n(v_cl_2256_, 2);
lean_inc_ref_n(v_l_2255_, 2);
lean_inc_n(v_uType_2254_, 2);
v___x_2301_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkAnd_x21(v_uType_2254_, v_l_2255_, v_cl_2256_, v_P_2257_, v_QR_2258_);
v___x_2302_ = l_Lean_Syntax_getId(v_arg_2259_);
v___x_2303_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_focusHyp(v_uType_2254_, v_l_2255_, v_cl_2256_, v___x_2301_, v___x_2302_);
lean_dec(v___x_2302_);
if (lean_obj_tag(v___x_2303_) == 1)
{
lean_object* v_val_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2423_; 
lean_del_object(v___x_2274_);
v_val_2304_ = lean_ctor_get(v___x_2303_, 0);
v_isSharedCheck_2423_ = !lean_is_exclusive(v___x_2303_);
if (v_isSharedCheck_2423_ == 0)
{
v___x_2306_ = v___x_2303_;
v_isShared_2307_ = v_isSharedCheck_2423_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_val_2304_);
lean_dec(v___x_2303_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2423_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v_focusHyp_2308_; lean_object* v_restHyps_2309_; lean_object* v_proof_2310_; lean_object* v___x_2311_; 
v_focusHyp_2308_ = lean_ctor_get(v_val_2304_, 0);
lean_inc_ref_n(v_focusHyp_2308_, 2);
v_restHyps_2309_ = lean_ctor_get(v_val_2304_, 1);
lean_inc_ref(v_restHyps_2309_);
v_proof_2310_ = lean_ctor_get(v_val_2304_, 2);
lean_inc_ref(v_proof_2310_);
lean_dec(v_val_2304_);
v___x_2311_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseHyp_x3f(v_focusHyp_2308_);
if (lean_obj_tag(v___x_2311_) == 1)
{
lean_object* v_val_2312_; lean_object* v___x_2314_; uint8_t v_isShared_2315_; uint8_t v_isSharedCheck_2418_; 
lean_del_object(v___x_2306_);
v_val_2312_ = lean_ctor_get(v___x_2311_, 0);
v_isSharedCheck_2418_ = !lean_is_exclusive(v___x_2311_);
if (v_isSharedCheck_2418_ == 0)
{
v___x_2314_ = v___x_2311_;
v_isShared_2315_ = v_isSharedCheck_2418_;
goto v_resetjp_2313_;
}
else
{
lean_inc(v_val_2312_);
lean_dec(v___x_2311_);
v___x_2314_ = lean_box(0);
v_isShared_2315_ = v_isSharedCheck_2418_;
goto v_resetjp_2313_;
}
v_resetjp_2313_:
{
lean_object* v___x_2316_; uint8_t v___x_2317_; lean_object* v___x_2318_; 
lean_inc(v_uType_2254_);
v___x_2316_ = l_Lean_Level_succ___override(v_uType_2254_);
v___x_2317_ = 0;
lean_inc_ref(v_cl_2256_);
lean_inc_ref(v_l_2255_);
v___x_2318_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_addHypInfo(v_arg_2259_, v___x_2316_, v_l_2255_, v_cl_2256_, v_val_2312_, v___x_2317_, v_a_2260_, v_a_2261_, v_a_2262_, v_a_2263_);
if (lean_obj_tag(v___x_2318_) == 0)
{
lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; 
lean_dec_ref_known(v___x_2318_, 1);
v___x_2319_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__2));
v___x_2320_ = lean_box(0);
v___x_2321_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2321_, 0, v_uType_2254_);
lean_ctor_set(v___x_2321_, 1, v___x_2320_);
lean_inc_ref(v___x_2321_);
v___x_2322_ = l_Lean_mkConst(v___x_2319_, v___x_2321_);
lean_inc_ref(v_cl_2256_);
lean_inc_ref(v_l_2255_);
v___x_2323_ = l_Lean_mkAppB(v___x_2322_, v_l_2255_, v_cl_2256_);
v___x_2324_ = lean_box(0);
v___x_2325_ = l_Lean_Meta_synthInstance(v___x_2323_, v___x_2324_, v_a_2260_, v_a_2261_, v_a_2262_, v_a_2263_);
if (lean_obj_tag(v___x_2325_) == 0)
{
lean_object* v_options_2326_; lean_object* v_a_2327_; lean_object* v___x_2329_; uint8_t v_isShared_2330_; uint8_t v_isSharedCheck_2401_; 
v_options_2326_ = lean_ctor_get(v_a_2262_, 2);
v_a_2327_ = lean_ctor_get(v___x_2325_, 0);
v_isSharedCheck_2401_ = !lean_is_exclusive(v___x_2325_);
if (v_isSharedCheck_2401_ == 0)
{
v___x_2329_ = v___x_2325_;
v_isShared_2330_ = v_isSharedCheck_2401_;
goto v_resetjp_2328_;
}
else
{
lean_inc(v_a_2327_);
lean_dec(v___x_2325_);
v___x_2329_ = lean_box(0);
v_isShared_2330_ = v_isSharedCheck_2401_;
goto v_resetjp_2328_;
}
v_resetjp_2328_:
{
lean_object* v_inheritedTraceOptions_2331_; uint8_t v_hasTrace_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___y_2349_; lean_object* v___y_2350_; lean_object* v___y_2351_; lean_object* v___y_2352_; 
v_inheritedTraceOptions_2331_ = lean_ctor_get(v_a_2262_, 13);
v_hasTrace_2332_ = lean_ctor_get_uint8(v_options_2326_, sizeof(void*)*1);
v___x_2333_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__4));
v___x_2334_ = l_Lean_mkConst(v___x_2333_, v___x_2321_);
lean_inc_ref(v_arg_2290_);
lean_inc_ref(v_focusHyp_2308_);
v___x_2335_ = l_Lean_mkApp8(v___x_2334_, v_l_2255_, v_cl_2256_, v_a_2327_, v_P_2257_, v_restHyps_2309_, v_focusHyp_2308_, v_arg_2290_, v_proof_2310_);
if (v_hasTrace_2332_ == 0)
{
v___y_2349_ = v_a_2260_;
v___y_2350_ = v_a_2261_;
v___y_2351_ = v_a_2262_;
v___y_2352_ = v_a_2263_;
goto v___jp_2348_;
}
else
{
lean_object* v___x_2380_; lean_object* v___x_2381_; uint8_t v___x_2382_; 
v___x_2380_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_2381_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__11, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__11_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__11);
v___x_2382_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2331_, v_options_2326_, v___x_2381_);
if (v___x_2382_ == 0)
{
v___y_2349_ = v_a_2260_;
v___y_2350_ = v_a_2261_;
v___y_2351_ = v_a_2262_;
v___y_2352_ = v_a_2263_;
goto v___jp_2348_;
}
else
{
lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; 
v___x_2383_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__13, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__13_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__13);
lean_inc_ref(v_p_2276_);
v___x_2384_ = l_Lean_MessageData_ofExpr(v_p_2276_);
v___x_2385_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2385_, 0, v___x_2383_);
lean_ctor_set(v___x_2385_, 1, v___x_2384_);
v___x_2386_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8);
v___x_2387_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2387_, 0, v___x_2385_);
lean_ctor_set(v___x_2387_, 1, v___x_2386_);
lean_inc_ref(v_focusHyp_2308_);
v___x_2388_ = l_Lean_MessageData_ofExpr(v_focusHyp_2308_);
v___x_2389_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2389_, 0, v___x_2387_);
lean_ctor_set(v___x_2389_, 1, v___x_2388_);
v___x_2390_ = lean_obj_once(&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__6, &l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__6_once, _init_l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__6);
v___x_2391_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2391_, 0, v___x_2389_);
lean_ctor_set(v___x_2391_, 1, v___x_2390_);
v___x_2392_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg(v___x_2380_, v___x_2391_, v_a_2260_, v_a_2261_, v_a_2262_, v_a_2263_);
if (lean_obj_tag(v___x_2392_) == 0)
{
lean_dec_ref_known(v___x_2392_, 1);
v___y_2349_ = v_a_2260_;
v___y_2350_ = v_a_2261_;
v___y_2351_ = v_a_2262_;
v___y_2352_ = v_a_2263_;
goto v___jp_2348_;
}
else
{
lean_object* v_a_2393_; lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2400_; 
lean_dec_ref(v___x_2335_);
lean_del_object(v___x_2329_);
lean_del_object(v___x_2314_);
lean_dec_ref(v_focusHyp_2308_);
lean_del_object(v___x_2288_);
lean_dec(v_uniq_2286_);
lean_dec(v_name_2285_);
lean_dec_ref_known(v_p_2276_, 2);
v_a_2393_ = lean_ctor_get(v___x_2392_, 0);
v_isSharedCheck_2400_ = !lean_is_exclusive(v___x_2392_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2395_ = v___x_2392_;
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
else
{
lean_inc(v_a_2393_);
lean_dec(v___x_2392_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
lean_object* v___x_2398_; 
if (v_isShared_2396_ == 0)
{
v___x_2398_ = v___x_2395_;
goto v_reusejp_2397_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v_a_2393_);
v___x_2398_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2397_;
}
v_reusejp_2397_:
{
return v___x_2398_;
}
}
}
}
}
v___jp_2336_:
{
lean_object* v___x_2338_; 
if (v_isShared_2289_ == 0)
{
lean_ctor_set(v___x_2288_, 2, v_arg_2290_);
v___x_2338_ = v___x_2288_;
goto v_reusejp_2337_;
}
else
{
lean_object* v_reuseFailAlloc_2347_; 
v_reuseFailAlloc_2347_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2347_, 0, v_name_2285_);
lean_ctor_set(v_reuseFailAlloc_2347_, 1, v_uniq_2286_);
lean_ctor_set(v_reuseFailAlloc_2347_, 2, v_arg_2290_);
v___x_2338_ = v_reuseFailAlloc_2347_;
goto v_reusejp_2337_;
}
v_reusejp_2337_:
{
lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2342_; 
v___x_2339_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_Hyp_toExpr(v___x_2338_);
v___x_2340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2340_, 0, v___x_2339_);
lean_ctor_set(v___x_2340_, 1, v___x_2335_);
if (v_isShared_2315_ == 0)
{
lean_ctor_set(v___x_2314_, 0, v___x_2340_);
v___x_2342_ = v___x_2314_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v___x_2340_);
v___x_2342_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
lean_object* v___x_2344_; 
if (v_isShared_2330_ == 0)
{
lean_ctor_set(v___x_2329_, 0, v___x_2342_);
v___x_2344_ = v___x_2329_;
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
v___jp_2348_:
{
lean_object* v___x_2353_; 
lean_inc_ref(v_arg_2291_);
lean_inc_ref(v_focusHyp_2308_);
v___x_2353_ = l_Lean_Meta_isExprDefEq(v_focusHyp_2308_, v_arg_2291_, v___y_2349_, v___y_2350_, v___y_2351_, v___y_2352_);
if (lean_obj_tag(v___x_2353_) == 0)
{
lean_object* v_a_2354_; uint8_t v___x_2355_; 
v_a_2354_ = lean_ctor_get(v___x_2353_, 0);
lean_inc(v_a_2354_);
lean_dec_ref_known(v___x_2353_, 1);
v___x_2355_ = lean_unbox(v_a_2354_);
lean_dec(v_a_2354_);
if (v___x_2355_ == 0)
{
lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v_a_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2371_; 
lean_dec_ref(v___x_2335_);
lean_del_object(v___x_2329_);
lean_del_object(v___x_2314_);
lean_del_object(v___x_2288_);
lean_dec(v_uniq_2286_);
lean_dec(v_name_2285_);
v___x_2356_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__6);
v___x_2357_ = l_Lean_MessageData_ofExpr(v_p_2276_);
v___x_2358_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2358_, 0, v___x_2356_);
lean_ctor_set(v___x_2358_, 1, v___x_2357_);
v___x_2359_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8);
v___x_2360_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2360_, 0, v___x_2358_);
lean_ctor_set(v___x_2360_, 1, v___x_2359_);
v___x_2361_ = l_Lean_MessageData_ofExpr(v_focusHyp_2308_);
v___x_2362_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2362_, 0, v___x_2360_);
lean_ctor_set(v___x_2362_, 1, v___x_2361_);
v___x_2363_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0___redArg(v___x_2362_, v___y_2349_, v___y_2350_, v___y_2351_, v___y_2352_);
v_a_2364_ = lean_ctor_get(v___x_2363_, 0);
v_isSharedCheck_2371_ = !lean_is_exclusive(v___x_2363_);
if (v_isSharedCheck_2371_ == 0)
{
v___x_2366_ = v___x_2363_;
v_isShared_2367_ = v_isSharedCheck_2371_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_a_2364_);
lean_dec(v___x_2363_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2371_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
lean_object* v___x_2369_; 
if (v_isShared_2367_ == 0)
{
v___x_2369_ = v___x_2366_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2370_; 
v_reuseFailAlloc_2370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2370_, 0, v_a_2364_);
v___x_2369_ = v_reuseFailAlloc_2370_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
return v___x_2369_;
}
}
}
else
{
lean_inc_ref(v_arg_2290_);
lean_dec_ref(v_focusHyp_2308_);
lean_dec_ref_known(v_p_2276_, 2);
goto v___jp_2336_;
}
}
else
{
lean_object* v_a_2372_; lean_object* v___x_2374_; uint8_t v_isShared_2375_; uint8_t v_isSharedCheck_2379_; 
lean_dec_ref(v___x_2335_);
lean_del_object(v___x_2329_);
lean_del_object(v___x_2314_);
lean_dec_ref(v_focusHyp_2308_);
lean_del_object(v___x_2288_);
lean_dec(v_uniq_2286_);
lean_dec(v_name_2285_);
lean_dec_ref_known(v_p_2276_, 2);
v_a_2372_ = lean_ctor_get(v___x_2353_, 0);
v_isSharedCheck_2379_ = !lean_is_exclusive(v___x_2353_);
if (v_isSharedCheck_2379_ == 0)
{
v___x_2374_ = v___x_2353_;
v_isShared_2375_ = v_isSharedCheck_2379_;
goto v_resetjp_2373_;
}
else
{
lean_inc(v_a_2372_);
lean_dec(v___x_2353_);
v___x_2374_ = lean_box(0);
v_isShared_2375_ = v_isSharedCheck_2379_;
goto v_resetjp_2373_;
}
v_resetjp_2373_:
{
lean_object* v___x_2377_; 
if (v_isShared_2375_ == 0)
{
v___x_2377_ = v___x_2374_;
goto v_reusejp_2376_;
}
else
{
lean_object* v_reuseFailAlloc_2378_; 
v_reuseFailAlloc_2378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2378_, 0, v_a_2372_);
v___x_2377_ = v_reuseFailAlloc_2378_;
goto v_reusejp_2376_;
}
v_reusejp_2376_:
{
return v___x_2377_;
}
}
}
}
}
}
else
{
lean_object* v_a_2402_; lean_object* v___x_2404_; uint8_t v_isShared_2405_; uint8_t v_isSharedCheck_2409_; 
lean_dec_ref_known(v___x_2321_, 2);
lean_del_object(v___x_2314_);
lean_dec_ref(v_proof_2310_);
lean_dec_ref(v_restHyps_2309_);
lean_dec_ref(v_focusHyp_2308_);
lean_del_object(v___x_2288_);
lean_dec(v_uniq_2286_);
lean_dec(v_name_2285_);
lean_dec_ref_known(v_p_2276_, 2);
lean_dec_ref(v_P_2257_);
lean_dec_ref(v_cl_2256_);
lean_dec_ref(v_l_2255_);
v_a_2402_ = lean_ctor_get(v___x_2325_, 0);
v_isSharedCheck_2409_ = !lean_is_exclusive(v___x_2325_);
if (v_isSharedCheck_2409_ == 0)
{
v___x_2404_ = v___x_2325_;
v_isShared_2405_ = v_isSharedCheck_2409_;
goto v_resetjp_2403_;
}
else
{
lean_inc(v_a_2402_);
lean_dec(v___x_2325_);
v___x_2404_ = lean_box(0);
v_isShared_2405_ = v_isSharedCheck_2409_;
goto v_resetjp_2403_;
}
v_resetjp_2403_:
{
lean_object* v___x_2407_; 
if (v_isShared_2405_ == 0)
{
v___x_2407_ = v___x_2404_;
goto v_reusejp_2406_;
}
else
{
lean_object* v_reuseFailAlloc_2408_; 
v_reuseFailAlloc_2408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2408_, 0, v_a_2402_);
v___x_2407_ = v_reuseFailAlloc_2408_;
goto v_reusejp_2406_;
}
v_reusejp_2406_:
{
return v___x_2407_;
}
}
}
}
else
{
lean_object* v_a_2410_; lean_object* v___x_2412_; uint8_t v_isShared_2413_; uint8_t v_isSharedCheck_2417_; 
lean_del_object(v___x_2314_);
lean_dec_ref(v_proof_2310_);
lean_dec_ref(v_restHyps_2309_);
lean_dec_ref(v_focusHyp_2308_);
lean_del_object(v___x_2288_);
lean_dec(v_uniq_2286_);
lean_dec(v_name_2285_);
lean_dec_ref_known(v_p_2276_, 2);
lean_dec_ref(v_P_2257_);
lean_dec_ref(v_cl_2256_);
lean_dec_ref(v_l_2255_);
lean_dec(v_uType_2254_);
v_a_2410_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2417_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2417_ == 0)
{
v___x_2412_ = v___x_2318_;
v_isShared_2413_ = v_isSharedCheck_2417_;
goto v_resetjp_2411_;
}
else
{
lean_inc(v_a_2410_);
lean_dec(v___x_2318_);
v___x_2412_ = lean_box(0);
v_isShared_2413_ = v_isSharedCheck_2417_;
goto v_resetjp_2411_;
}
v_resetjp_2411_:
{
lean_object* v___x_2415_; 
if (v_isShared_2413_ == 0)
{
v___x_2415_ = v___x_2412_;
goto v_reusejp_2414_;
}
else
{
lean_object* v_reuseFailAlloc_2416_; 
v_reuseFailAlloc_2416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2416_, 0, v_a_2410_);
v___x_2415_ = v_reuseFailAlloc_2416_;
goto v_reusejp_2414_;
}
v_reusejp_2414_:
{
return v___x_2415_;
}
}
}
}
}
else
{
lean_object* v___x_2419_; lean_object* v___x_2421_; 
lean_dec(v___x_2311_);
lean_dec_ref(v_proof_2310_);
lean_dec_ref(v_restHyps_2309_);
lean_dec_ref(v_focusHyp_2308_);
lean_del_object(v___x_2288_);
lean_dec(v_uniq_2286_);
lean_dec(v_name_2285_);
lean_dec_ref_known(v_p_2276_, 2);
lean_dec(v_arg_2259_);
lean_dec_ref(v_P_2257_);
lean_dec_ref(v_cl_2256_);
lean_dec_ref(v_l_2255_);
lean_dec(v_uType_2254_);
v___x_2419_ = lean_box(0);
if (v_isShared_2307_ == 0)
{
lean_ctor_set_tag(v___x_2306_, 0);
lean_ctor_set(v___x_2306_, 0, v___x_2419_);
v___x_2421_ = v___x_2306_;
goto v_reusejp_2420_;
}
else
{
lean_object* v_reuseFailAlloc_2422_; 
v_reuseFailAlloc_2422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2422_, 0, v___x_2419_);
v___x_2421_ = v_reuseFailAlloc_2422_;
goto v_reusejp_2420_;
}
v_reusejp_2420_:
{
return v___x_2421_;
}
}
}
}
else
{
lean_object* v___x_2424_; lean_object* v___x_2426_; 
lean_dec(v___x_2303_);
lean_del_object(v___x_2288_);
lean_dec(v_uniq_2286_);
lean_dec(v_name_2285_);
lean_dec_ref_known(v_p_2276_, 2);
lean_dec(v_arg_2259_);
lean_dec_ref(v_P_2257_);
lean_dec_ref(v_cl_2256_);
lean_dec_ref(v_l_2255_);
lean_dec(v_uType_2254_);
v___x_2424_ = lean_box(0);
if (v_isShared_2275_ == 0)
{
lean_ctor_set_tag(v___x_2274_, 0);
lean_ctor_set(v___x_2274_, 0, v___x_2424_);
v___x_2426_ = v___x_2274_;
goto v_reusejp_2425_;
}
else
{
lean_object* v_reuseFailAlloc_2427_; 
v_reuseFailAlloc_2427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2427_, 0, v___x_2424_);
v___x_2426_ = v_reuseFailAlloc_2427_;
goto v_reusejp_2425_;
}
v_reusejp_2425_:
{
return v___x_2426_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_p_2276_, 2);
lean_del_object(v___x_2274_);
lean_dec(v_val_2272_);
lean_dec(v_arg_2259_);
lean_dec_ref(v_QR_2258_);
lean_dec_ref(v_P_2257_);
lean_dec_ref(v_cl_2256_);
lean_dec_ref(v_l_2255_);
lean_dec(v_uType_2254_);
goto v___jp_2265_;
}
}
else
{
lean_dec_ref_known(v_p_2276_, 2);
lean_del_object(v___x_2274_);
lean_dec(v_val_2272_);
lean_dec(v_arg_2259_);
lean_dec_ref(v_QR_2258_);
lean_dec_ref(v_P_2257_);
lean_dec_ref(v_cl_2256_);
lean_dec_ref(v_l_2255_);
lean_dec(v_uType_2254_);
goto v___jp_2265_;
}
}
else
{
lean_dec_ref_known(v_p_2276_, 2);
lean_del_object(v___x_2274_);
lean_dec(v_val_2272_);
lean_dec(v_arg_2259_);
lean_dec_ref(v_QR_2258_);
lean_dec_ref(v_P_2257_);
lean_dec_ref(v_cl_2256_);
lean_dec_ref(v_l_2255_);
lean_dec(v_uType_2254_);
goto v___jp_2265_;
}
}
else
{
lean_dec_ref_known(v_p_2276_, 2);
lean_del_object(v___x_2274_);
lean_dec(v_val_2272_);
lean_dec(v_arg_2259_);
lean_dec_ref(v_QR_2258_);
lean_dec_ref(v_P_2257_);
lean_dec_ref(v_cl_2256_);
lean_dec_ref(v_l_2255_);
lean_dec(v_uType_2254_);
goto v___jp_2265_;
}
}
else
{
lean_dec_ref_known(v_p_2276_, 2);
lean_del_object(v___x_2274_);
lean_dec(v_val_2272_);
lean_dec(v_arg_2259_);
lean_dec_ref(v_QR_2258_);
lean_dec_ref(v_P_2257_);
lean_dec_ref(v_cl_2256_);
lean_dec_ref(v_l_2255_);
lean_dec(v_uType_2254_);
goto v___jp_2265_;
}
}
else
{
lean_dec_ref_known(v_p_2276_, 2);
lean_del_object(v___x_2274_);
lean_dec(v_val_2272_);
lean_dec(v_arg_2259_);
lean_dec_ref(v_QR_2258_);
lean_dec_ref(v_P_2257_);
lean_dec_ref(v_cl_2256_);
lean_dec_ref(v_l_2255_);
lean_dec(v_uType_2254_);
goto v___jp_2265_;
}
}
else
{
lean_dec_ref_known(v_p_2276_, 2);
lean_del_object(v___x_2274_);
lean_dec(v_val_2272_);
lean_dec(v_arg_2259_);
lean_dec_ref(v_QR_2258_);
lean_dec_ref(v_P_2257_);
lean_dec_ref(v_cl_2256_);
lean_dec_ref(v_l_2255_);
lean_dec(v_uType_2254_);
goto v___jp_2265_;
}
}
else
{
lean_dec_ref_known(v_p_2276_, 2);
lean_del_object(v___x_2274_);
lean_dec(v_val_2272_);
lean_dec(v_arg_2259_);
lean_dec_ref(v_QR_2258_);
lean_dec_ref(v_P_2257_);
lean_dec_ref(v_cl_2256_);
lean_dec_ref(v_l_2255_);
lean_dec(v_uType_2254_);
goto v___jp_2265_;
}
}
else
{
lean_dec_ref(v_p_2276_);
lean_del_object(v___x_2274_);
lean_dec(v_val_2272_);
lean_dec(v_arg_2259_);
lean_dec_ref(v_QR_2258_);
lean_dec_ref(v_P_2257_);
lean_dec_ref(v_cl_2256_);
lean_dec_ref(v_l_2255_);
lean_dec(v_uType_2254_);
goto v___jp_2265_;
}
}
}
else
{
lean_object* v___x_2431_; lean_object* v___x_2432_; 
lean_dec(v___x_2271_);
lean_dec(v_arg_2259_);
lean_dec_ref(v_QR_2258_);
lean_dec_ref(v_P_2257_);
lean_dec_ref(v_cl_2256_);
lean_dec_ref(v_l_2255_);
lean_dec(v_uType_2254_);
v___x_2431_ = lean_box(0);
v___x_2432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2432_, 0, v___x_2431_);
return v___x_2432_;
}
}
v___jp_2265_:
{
lean_object* v___x_2266_; lean_object* v___x_2267_; 
v___x_2266_ = lean_box(0);
v___x_2267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2267_, 0, v___x_2266_);
return v___x_2267_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___boxed(lean_object* v_uType_2433_, lean_object* v_l_2434_, lean_object* v_cl_2435_, lean_object* v_P_2436_, lean_object* v_QR_2437_, lean_object* v_arg_2438_, lean_object* v_a_2439_, lean_object* v_a_2440_, lean_object* v_a_2441_, lean_object* v_a_2442_, lean_object* v_a_2443_){
_start:
{
lean_object* v_res_2444_; 
v_res_2444_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg(v_uType_2433_, v_l_2434_, v_cl_2435_, v_P_2436_, v_QR_2437_, v_arg_2438_, v_a_2439_, v_a_2440_, v_a_2441_, v_a_2442_);
lean_dec(v_a_2442_);
lean_dec_ref(v_a_2441_);
lean_dec(v_a_2440_);
lean_dec_ref(v_a_2439_);
return v_res_2444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful(lean_object* v_uType_2445_, lean_object* v_l_2446_, lean_object* v_cl_2447_, lean_object* v_P_2448_, lean_object* v_QR_2449_, lean_object* v_arg_2450_, lean_object* v_a_2451_, lean_object* v_a_2452_, lean_object* v_a_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_, lean_object* v_a_2457_, lean_object* v_a_2458_){
_start:
{
lean_object* v___x_2460_; 
v___x_2460_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg(v_uType_2445_, v_l_2446_, v_cl_2447_, v_P_2448_, v_QR_2449_, v_arg_2450_, v_a_2455_, v_a_2456_, v_a_2457_, v_a_2458_);
return v___x_2460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___boxed(lean_object* v_uType_2461_, lean_object* v_l_2462_, lean_object* v_cl_2463_, lean_object* v_P_2464_, lean_object* v_QR_2465_, lean_object* v_arg_2466_, lean_object* v_a_2467_, lean_object* v_a_2468_, lean_object* v_a_2469_, lean_object* v_a_2470_, lean_object* v_a_2471_, lean_object* v_a_2472_, lean_object* v_a_2473_, lean_object* v_a_2474_, lean_object* v_a_2475_){
_start:
{
lean_object* v_res_2476_; 
v_res_2476_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful(v_uType_2461_, v_l_2462_, v_cl_2463_, v_P_2464_, v_QR_2465_, v_arg_2466_, v_a_2467_, v_a_2468_, v_a_2469_, v_a_2470_, v_a_2471_, v_a_2472_, v_a_2473_, v_a_2474_);
lean_dec(v_a_2474_);
lean_dec_ref(v_a_2473_);
lean_dec(v_a_2472_);
lean_dec_ref(v_a_2471_);
lean_dec(v_a_2470_);
lean_dec_ref(v_a_2469_);
lean_dec(v_a_2468_);
lean_dec_ref(v_a_2467_);
return v_res_2476_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__7(void){
_start:
{
lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; 
v___x_2516_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__17));
v___x_2517_ = lean_unsigned_to_nat(37u);
v___x_2518_ = lean_unsigned_to_nat(219u);
v___x_2519_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__6));
v___x_2520_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__15));
v___x_2521_ = l_mkPanicMessageWithDecl(v___x_2520_, v___x_2519_, v___x_2518_, v___x_2517_, v___x_2516_);
return v___x_2521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure(lean_object* v_uType_2522_, lean_object* v_l_2523_, lean_object* v_cl_2524_, lean_object* v_P_2525_, lean_object* v_QR_2526_, lean_object* v_arg_2527_, lean_object* v_a_2528_, lean_object* v_a_2529_, lean_object* v_a_2530_, lean_object* v_a_2531_, lean_object* v_a_2532_, lean_object* v_a_2533_, lean_object* v_a_2534_, lean_object* v_a_2535_){
_start:
{
lean_object* v___x_2540_; 
v___x_2540_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseHyp_x3f(v_QR_2526_);
if (lean_obj_tag(v___x_2540_) == 1)
{
lean_object* v_val_2541_; lean_object* v___x_2543_; uint8_t v_isShared_2544_; uint8_t v_isSharedCheck_2723_; 
v_val_2541_ = lean_ctor_get(v___x_2540_, 0);
v_isSharedCheck_2723_ = !lean_is_exclusive(v___x_2540_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2543_ = v___x_2540_;
v_isShared_2544_ = v_isSharedCheck_2723_;
goto v_resetjp_2542_;
}
else
{
lean_inc(v_val_2541_);
lean_dec(v___x_2540_);
v___x_2543_ = lean_box(0);
v_isShared_2544_ = v_isSharedCheck_2723_;
goto v_resetjp_2542_;
}
v_resetjp_2542_:
{
lean_object* v_p_2545_; 
v_p_2545_ = lean_ctor_get(v_val_2541_, 2);
lean_inc_ref(v_p_2545_);
if (lean_obj_tag(v_p_2545_) == 5)
{
lean_object* v_name_2546_; lean_object* v_uniq_2547_; lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2721_; 
v_name_2546_ = lean_ctor_get(v_val_2541_, 0);
v_uniq_2547_ = lean_ctor_get(v_val_2541_, 1);
v_isSharedCheck_2721_ = !lean_is_exclusive(v_val_2541_);
if (v_isSharedCheck_2721_ == 0)
{
lean_object* v_unused_2722_; 
v_unused_2722_ = lean_ctor_get(v_val_2541_, 2);
lean_dec(v_unused_2722_);
v___x_2549_ = v_val_2541_;
v_isShared_2550_ = v_isSharedCheck_2721_;
goto v_resetjp_2548_;
}
else
{
lean_inc(v_uniq_2547_);
lean_inc(v_name_2546_);
lean_dec(v_val_2541_);
v___x_2549_ = lean_box(0);
v_isShared_2550_ = v_isSharedCheck_2721_;
goto v_resetjp_2548_;
}
v_resetjp_2548_:
{
lean_object* v_fn_2551_; lean_object* v_arg_2552_; lean_object* v___y_2554_; 
v_fn_2551_ = lean_ctor_get(v_p_2545_, 0);
v_arg_2552_ = lean_ctor_get(v_p_2545_, 1);
lean_inc_ref(v_arg_2552_);
if (lean_obj_tag(v_fn_2551_) == 5)
{
lean_object* v_fn_2564_; 
v_fn_2564_ = lean_ctor_get(v_fn_2551_, 0);
if (lean_obj_tag(v_fn_2564_) == 5)
{
lean_object* v_fn_2565_; 
v_fn_2565_ = lean_ctor_get(v_fn_2564_, 0);
if (lean_obj_tag(v_fn_2565_) == 5)
{
lean_object* v_fn_2566_; 
v_fn_2566_ = lean_ctor_get(v_fn_2565_, 0);
if (lean_obj_tag(v_fn_2566_) == 4)
{
lean_object* v_declName_2567_; 
v_declName_2567_ = lean_ctor_get(v_fn_2566_, 0);
if (lean_obj_tag(v_declName_2567_) == 1)
{
lean_object* v_pre_2568_; 
v_pre_2568_ = lean_ctor_get(v_declName_2567_, 0);
if (lean_obj_tag(v_pre_2568_) == 1)
{
lean_object* v_pre_2569_; 
v_pre_2569_ = lean_ctor_get(v_pre_2568_, 0);
if (lean_obj_tag(v_pre_2569_) == 1)
{
lean_object* v_pre_2570_; 
v_pre_2570_ = lean_ctor_get(v_pre_2569_, 0);
if (lean_obj_tag(v_pre_2570_) == 0)
{
lean_object* v_arg_2571_; lean_object* v_str_2572_; lean_object* v_str_2573_; lean_object* v_str_2574_; lean_object* v___x_2575_; uint8_t v___x_2576_; 
v_arg_2571_ = lean_ctor_get(v_fn_2551_, 1);
lean_inc_ref(v_arg_2571_);
v_str_2572_ = lean_ctor_get(v_declName_2567_, 1);
v_str_2573_ = lean_ctor_get(v_pre_2568_, 1);
v_str_2574_ = lean_ctor_get(v_pre_2569_, 1);
v___x_2575_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_2576_ = lean_string_dec_eq(v_str_2574_, v___x_2575_);
if (v___x_2576_ == 0)
{
lean_dec_ref(v_arg_2571_);
lean_dec_ref(v_arg_2552_);
lean_del_object(v___x_2549_);
lean_dec(v_uniq_2547_);
lean_dec_ref_known(v_p_2545_, 2);
lean_dec(v_name_2546_);
lean_del_object(v___x_2543_);
lean_dec(v_arg_2527_);
lean_dec_ref(v_P_2525_);
lean_dec_ref(v_cl_2524_);
lean_dec_ref(v_l_2523_);
lean_dec(v_uType_2522_);
goto v___jp_2537_;
}
else
{
lean_object* v___x_2577_; uint8_t v___x_2578_; 
v___x_2577_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__0));
v___x_2578_ = lean_string_dec_eq(v_str_2573_, v___x_2577_);
if (v___x_2578_ == 0)
{
lean_dec_ref(v_arg_2571_);
lean_dec_ref(v_arg_2552_);
lean_del_object(v___x_2549_);
lean_dec(v_uniq_2547_);
lean_dec_ref_known(v_p_2545_, 2);
lean_dec(v_name_2546_);
lean_del_object(v___x_2543_);
lean_dec(v_arg_2527_);
lean_dec_ref(v_P_2525_);
lean_dec_ref(v_cl_2524_);
lean_dec_ref(v_l_2523_);
lean_dec(v_uType_2522_);
goto v___jp_2537_;
}
else
{
lean_object* v___x_2579_; uint8_t v___x_2580_; 
v___x_2579_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__0));
v___x_2580_ = lean_string_dec_eq(v_str_2572_, v___x_2579_);
if (v___x_2580_ == 0)
{
lean_dec_ref(v_arg_2571_);
lean_dec_ref(v_arg_2552_);
lean_del_object(v___x_2549_);
lean_dec(v_uniq_2547_);
lean_dec_ref_known(v_p_2545_, 2);
lean_dec(v_name_2546_);
lean_del_object(v___x_2543_);
lean_dec(v_arg_2527_);
lean_dec_ref(v_P_2525_);
lean_dec_ref(v_cl_2524_);
lean_dec_ref(v_l_2523_);
lean_dec(v_uType_2522_);
goto v___jp_2537_;
}
else
{
lean_object* v___x_2581_; uint8_t v___x_2582_; lean_object* v___x_2583_; 
v___x_2581_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__1);
v___x_2582_ = 0;
v___x_2583_ = l_Lean_Meta_mkFreshExprMVar(v___x_2581_, v___x_2582_, v_pre_2570_, v_a_2532_, v_a_2533_, v_a_2534_, v_a_2535_);
if (lean_obj_tag(v___x_2583_) == 0)
{
lean_object* v_a_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; 
v_a_2584_ = lean_ctor_get(v___x_2583_, 0);
lean_inc_n(v_a_2584_, 2);
lean_dec_ref_known(v___x_2583_, 1);
v___x_2585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2585_, 0, v_a_2584_);
v___x_2586_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__2));
v___x_2587_ = lean_box(0);
v___x_2588_ = l_Lean_Elab_Tactic_elabTermWithHoles(v_arg_2527_, v___x_2585_, v___x_2586_, v___x_2580_, v___x_2587_, v_a_2528_, v_a_2529_, v_a_2530_, v_a_2531_, v_a_2532_, v_a_2533_, v_a_2534_, v_a_2535_);
if (lean_obj_tag(v___x_2588_) == 0)
{
lean_object* v_a_2589_; lean_object* v_fst_2590_; lean_object* v_snd_2591_; lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2697_; 
v_a_2589_ = lean_ctor_get(v___x_2588_, 0);
lean_inc(v_a_2589_);
lean_dec_ref_known(v___x_2588_, 1);
v_fst_2590_ = lean_ctor_get(v_a_2589_, 0);
v_snd_2591_ = lean_ctor_get(v_a_2589_, 1);
v_isSharedCheck_2697_ = !lean_is_exclusive(v_a_2589_);
if (v_isSharedCheck_2697_ == 0)
{
v___x_2593_ = v_a_2589_;
v_isShared_2594_ = v_isSharedCheck_2697_;
goto v_resetjp_2592_;
}
else
{
lean_inc(v_snd_2591_);
lean_inc(v_fst_2590_);
lean_dec(v_a_2589_);
v___x_2593_ = lean_box(0);
v_isShared_2594_ = v_isSharedCheck_2697_;
goto v_resetjp_2592_;
}
v_resetjp_2592_:
{
lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2598_; 
v___x_2595_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__0));
v___x_2596_ = lean_box(0);
if (v_isShared_2594_ == 0)
{
lean_ctor_set_tag(v___x_2593_, 1);
lean_ctor_set(v___x_2593_, 1, v___x_2596_);
lean_ctor_set(v___x_2593_, 0, v_uType_2522_);
v___x_2598_ = v___x_2593_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v_uType_2522_);
lean_ctor_set(v_reuseFailAlloc_2696_, 1, v___x_2596_);
v___x_2598_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; 
lean_inc_ref(v___x_2598_);
v___x_2599_ = l_Lean_mkConst(v___x_2595_, v___x_2598_);
lean_inc(v_a_2584_);
lean_inc_ref(v_arg_2571_);
lean_inc_ref(v_cl_2524_);
lean_inc_ref(v_l_2523_);
v___x_2600_ = l_Lean_mkApp4(v___x_2599_, v_l_2523_, v_cl_2524_, v_arg_2571_, v_a_2584_);
v___x_2601_ = l_Lean_Meta_synthInstance_x3f(v___x_2600_, v___x_2587_, v_a_2532_, v_a_2533_, v_a_2534_, v_a_2535_);
if (lean_obj_tag(v___x_2601_) == 0)
{
lean_object* v_a_2602_; lean_object* v_00_u03c6_2604_; lean_object* v_h_u03c6_2605_; lean_object* v___y_2606_; lean_object* v___y_2607_; lean_object* v___y_2608_; lean_object* v___y_2609_; lean_object* v___y_2610_; 
v_a_2602_ = lean_ctor_get(v___x_2601_, 0);
lean_inc(v_a_2602_);
lean_dec_ref_known(v___x_2601_, 1);
if (lean_obj_tag(v_a_2602_) == 1)
{
lean_object* v_val_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; 
v_val_2681_ = lean_ctor_get(v_a_2602_, 0);
lean_inc(v_val_2681_);
lean_dec_ref_known(v_a_2602_, 1);
v___x_2682_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__4));
lean_inc_ref_n(v___x_2598_, 2);
v___x_2683_ = l_Lean_mkConst(v___x_2682_, v___x_2598_);
lean_inc_ref_n(v_arg_2571_, 2);
lean_inc_ref_n(v_cl_2524_, 2);
lean_inc_ref_n(v_l_2523_, 2);
v___x_2684_ = l_Lean_mkApp6(v___x_2683_, v_l_2523_, v_cl_2524_, v_a_2584_, v_arg_2571_, v_val_2681_, v_fst_2590_);
v___x_2685_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__5));
v___x_2686_ = l_Lean_mkConst(v___x_2685_, v___x_2598_);
v___x_2687_ = l_Lean_mkApp3(v___x_2686_, v_l_2523_, v_cl_2524_, v_arg_2571_);
v_00_u03c6_2604_ = v___x_2687_;
v_h_u03c6_2605_ = v___x_2684_;
v___y_2606_ = v_a_2529_;
v___y_2607_ = v_a_2532_;
v___y_2608_ = v_a_2533_;
v___y_2609_ = v_a_2534_;
v___y_2610_ = v_a_2535_;
goto v___jp_2603_;
}
else
{
lean_dec(v_a_2602_);
v_00_u03c6_2604_ = v_a_2584_;
v_h_u03c6_2605_ = v_fst_2590_;
v___y_2606_ = v_a_2529_;
v___y_2607_ = v_a_2532_;
v___y_2608_ = v_a_2533_;
v___y_2609_ = v_a_2534_;
v___y_2610_ = v_a_2535_;
goto v___jp_2603_;
}
v___jp_2603_:
{
lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; 
v___x_2611_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__2));
lean_inc_ref(v___x_2598_);
v___x_2612_ = l_Lean_mkConst(v___x_2611_, v___x_2598_);
lean_inc_ref(v_arg_2571_);
lean_inc_ref(v_cl_2524_);
lean_inc_ref(v_l_2523_);
lean_inc_ref(v_00_u03c6_2604_);
v___x_2613_ = l_Lean_mkApp4(v___x_2612_, v_00_u03c6_2604_, v_l_2523_, v_cl_2524_, v_arg_2571_);
v___x_2614_ = l_Lean_Meta_synthInstance_x3f(v___x_2613_, v___x_2587_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_);
if (lean_obj_tag(v___x_2614_) == 0)
{
lean_object* v_a_2615_; lean_object* v___x_2617_; uint8_t v_isShared_2618_; uint8_t v_isSharedCheck_2672_; 
v_a_2615_ = lean_ctor_get(v___x_2614_, 0);
v_isSharedCheck_2672_ = !lean_is_exclusive(v___x_2614_);
if (v_isSharedCheck_2672_ == 0)
{
v___x_2617_ = v___x_2614_;
v_isShared_2618_ = v_isSharedCheck_2672_;
goto v_resetjp_2616_;
}
else
{
lean_inc(v_a_2615_);
lean_dec(v___x_2614_);
v___x_2617_ = lean_box(0);
v_isShared_2618_ = v_isSharedCheck_2672_;
goto v_resetjp_2616_;
}
v_resetjp_2616_:
{
if (lean_obj_tag(v_a_2615_) == 1)
{
lean_object* v_val_2619_; lean_object* v___x_2620_; 
lean_del_object(v___x_2617_);
v_val_2619_ = lean_ctor_get(v_a_2615_, 0);
lean_inc(v_val_2619_);
lean_dec_ref_known(v_a_2615_, 1);
v___x_2620_ = l_Lean_Elab_Tactic_pushGoals___redArg(v_snd_2591_, v___y_2606_);
if (lean_obj_tag(v___x_2620_) == 0)
{
lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; 
lean_dec_ref_known(v___x_2620_, 1);
v___x_2621_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__2));
lean_inc_ref(v___x_2598_);
v___x_2622_ = l_Lean_mkConst(v___x_2621_, v___x_2598_);
lean_inc_ref(v_cl_2524_);
lean_inc_ref(v_l_2523_);
v___x_2623_ = l_Lean_mkAppB(v___x_2622_, v_l_2523_, v_cl_2524_);
v___x_2624_ = l_Lean_Meta_synthInstance(v___x_2623_, v___x_2587_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_);
if (lean_obj_tag(v___x_2624_) == 0)
{
lean_object* v_options_2625_; lean_object* v_a_2626_; lean_object* v_inheritedTraceOptions_2627_; uint8_t v_hasTrace_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; 
v_options_2625_ = lean_ctor_get(v___y_2609_, 2);
v_a_2626_ = lean_ctor_get(v___x_2624_, 0);
lean_inc(v_a_2626_);
lean_dec_ref_known(v___x_2624_, 1);
v_inheritedTraceOptions_2627_ = lean_ctor_get(v___y_2609_, 13);
v_hasTrace_2628_ = lean_ctor_get_uint8(v_options_2625_, sizeof(void*)*1);
v___x_2629_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__3));
v___x_2630_ = l_Lean_mkConst(v___x_2629_, v___x_2598_);
lean_inc_ref(v_arg_2552_);
lean_inc_ref(v_arg_2571_);
v___x_2631_ = l_Lean_mkApp9(v___x_2630_, v_l_2523_, v_cl_2524_, v_a_2626_, v_P_2525_, v_arg_2571_, v_arg_2552_, v_00_u03c6_2604_, v_val_2619_, v_h_u03c6_2605_);
if (v_hasTrace_2628_ == 0)
{
lean_dec_ref(v_arg_2571_);
lean_dec_ref_known(v_p_2545_, 2);
v___y_2554_ = v___x_2631_;
goto v___jp_2553_;
}
else
{
lean_object* v___x_2632_; lean_object* v___x_2633_; uint8_t v___x_2634_; 
v___x_2632_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_2633_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__11, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__11_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__11);
v___x_2634_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2627_, v_options_2625_, v___x_2633_);
if (v___x_2634_ == 0)
{
lean_dec_ref(v_arg_2571_);
lean_dec_ref_known(v_p_2545_, 2);
v___y_2554_ = v___x_2631_;
goto v___jp_2553_;
}
else
{
lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; 
v___x_2635_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__10, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__10_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__10);
v___x_2636_ = l_Lean_MessageData_ofExpr(v_p_2545_);
v___x_2637_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2637_, 0, v___x_2635_);
lean_ctor_set(v___x_2637_, 1, v___x_2636_);
v___x_2638_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8);
v___x_2639_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2639_, 0, v___x_2637_);
lean_ctor_set(v___x_2639_, 1, v___x_2638_);
v___x_2640_ = l_Lean_MessageData_ofExpr(v_arg_2571_);
v___x_2641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2639_);
lean_ctor_set(v___x_2641_, 1, v___x_2640_);
v___x_2642_ = lean_obj_once(&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__6, &l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__6_once, _init_l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__6);
v___x_2643_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2643_, 0, v___x_2641_);
lean_ctor_set(v___x_2643_, 1, v___x_2642_);
v___x_2644_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg(v___x_2632_, v___x_2643_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_);
if (lean_obj_tag(v___x_2644_) == 0)
{
lean_dec_ref_known(v___x_2644_, 1);
v___y_2554_ = v___x_2631_;
goto v___jp_2553_;
}
else
{
lean_object* v_a_2645_; lean_object* v___x_2647_; uint8_t v_isShared_2648_; uint8_t v_isSharedCheck_2652_; 
lean_dec_ref(v___x_2631_);
lean_dec_ref(v_arg_2552_);
lean_del_object(v___x_2549_);
lean_dec(v_uniq_2547_);
lean_dec(v_name_2546_);
lean_del_object(v___x_2543_);
v_a_2645_ = lean_ctor_get(v___x_2644_, 0);
v_isSharedCheck_2652_ = !lean_is_exclusive(v___x_2644_);
if (v_isSharedCheck_2652_ == 0)
{
v___x_2647_ = v___x_2644_;
v_isShared_2648_ = v_isSharedCheck_2652_;
goto v_resetjp_2646_;
}
else
{
lean_inc(v_a_2645_);
lean_dec(v___x_2644_);
v___x_2647_ = lean_box(0);
v_isShared_2648_ = v_isSharedCheck_2652_;
goto v_resetjp_2646_;
}
v_resetjp_2646_:
{
lean_object* v___x_2650_; 
if (v_isShared_2648_ == 0)
{
v___x_2650_ = v___x_2647_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2651_; 
v_reuseFailAlloc_2651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2651_, 0, v_a_2645_);
v___x_2650_ = v_reuseFailAlloc_2651_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
return v___x_2650_;
}
}
}
}
}
}
else
{
lean_object* v_a_2653_; lean_object* v___x_2655_; uint8_t v_isShared_2656_; uint8_t v_isSharedCheck_2660_; 
lean_dec(v_val_2619_);
lean_dec_ref(v_h_u03c6_2605_);
lean_dec_ref(v_00_u03c6_2604_);
lean_dec_ref(v___x_2598_);
lean_dec_ref(v_arg_2571_);
lean_dec_ref(v_arg_2552_);
lean_del_object(v___x_2549_);
lean_dec(v_uniq_2547_);
lean_dec_ref_known(v_p_2545_, 2);
lean_dec(v_name_2546_);
lean_del_object(v___x_2543_);
lean_dec_ref(v_P_2525_);
lean_dec_ref(v_cl_2524_);
lean_dec_ref(v_l_2523_);
v_a_2653_ = lean_ctor_get(v___x_2624_, 0);
v_isSharedCheck_2660_ = !lean_is_exclusive(v___x_2624_);
if (v_isSharedCheck_2660_ == 0)
{
v___x_2655_ = v___x_2624_;
v_isShared_2656_ = v_isSharedCheck_2660_;
goto v_resetjp_2654_;
}
else
{
lean_inc(v_a_2653_);
lean_dec(v___x_2624_);
v___x_2655_ = lean_box(0);
v_isShared_2656_ = v_isSharedCheck_2660_;
goto v_resetjp_2654_;
}
v_resetjp_2654_:
{
lean_object* v___x_2658_; 
if (v_isShared_2656_ == 0)
{
v___x_2658_ = v___x_2655_;
goto v_reusejp_2657_;
}
else
{
lean_object* v_reuseFailAlloc_2659_; 
v_reuseFailAlloc_2659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2659_, 0, v_a_2653_);
v___x_2658_ = v_reuseFailAlloc_2659_;
goto v_reusejp_2657_;
}
v_reusejp_2657_:
{
return v___x_2658_;
}
}
}
}
else
{
lean_object* v_a_2661_; lean_object* v___x_2663_; uint8_t v_isShared_2664_; uint8_t v_isSharedCheck_2668_; 
lean_dec(v_val_2619_);
lean_dec_ref(v_h_u03c6_2605_);
lean_dec_ref(v_00_u03c6_2604_);
lean_dec_ref(v___x_2598_);
lean_dec_ref(v_arg_2571_);
lean_dec_ref(v_arg_2552_);
lean_del_object(v___x_2549_);
lean_dec(v_uniq_2547_);
lean_dec_ref_known(v_p_2545_, 2);
lean_dec(v_name_2546_);
lean_del_object(v___x_2543_);
lean_dec_ref(v_P_2525_);
lean_dec_ref(v_cl_2524_);
lean_dec_ref(v_l_2523_);
v_a_2661_ = lean_ctor_get(v___x_2620_, 0);
v_isSharedCheck_2668_ = !lean_is_exclusive(v___x_2620_);
if (v_isSharedCheck_2668_ == 0)
{
v___x_2663_ = v___x_2620_;
v_isShared_2664_ = v_isSharedCheck_2668_;
goto v_resetjp_2662_;
}
else
{
lean_inc(v_a_2661_);
lean_dec(v___x_2620_);
v___x_2663_ = lean_box(0);
v_isShared_2664_ = v_isSharedCheck_2668_;
goto v_resetjp_2662_;
}
v_resetjp_2662_:
{
lean_object* v___x_2666_; 
if (v_isShared_2664_ == 0)
{
v___x_2666_ = v___x_2663_;
goto v_reusejp_2665_;
}
else
{
lean_object* v_reuseFailAlloc_2667_; 
v_reuseFailAlloc_2667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2667_, 0, v_a_2661_);
v___x_2666_ = v_reuseFailAlloc_2667_;
goto v_reusejp_2665_;
}
v_reusejp_2665_:
{
return v___x_2666_;
}
}
}
}
else
{
lean_object* v___x_2670_; 
lean_dec(v_a_2615_);
lean_dec_ref(v_h_u03c6_2605_);
lean_dec_ref(v_00_u03c6_2604_);
lean_dec_ref(v___x_2598_);
lean_dec(v_snd_2591_);
lean_dec_ref(v_arg_2571_);
lean_dec_ref(v_arg_2552_);
lean_del_object(v___x_2549_);
lean_dec(v_uniq_2547_);
lean_dec_ref_known(v_p_2545_, 2);
lean_dec(v_name_2546_);
lean_del_object(v___x_2543_);
lean_dec_ref(v_P_2525_);
lean_dec_ref(v_cl_2524_);
lean_dec_ref(v_l_2523_);
if (v_isShared_2618_ == 0)
{
lean_ctor_set(v___x_2617_, 0, v___x_2587_);
v___x_2670_ = v___x_2617_;
goto v_reusejp_2669_;
}
else
{
lean_object* v_reuseFailAlloc_2671_; 
v_reuseFailAlloc_2671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2671_, 0, v___x_2587_);
v___x_2670_ = v_reuseFailAlloc_2671_;
goto v_reusejp_2669_;
}
v_reusejp_2669_:
{
return v___x_2670_;
}
}
}
}
else
{
lean_object* v_a_2673_; lean_object* v___x_2675_; uint8_t v_isShared_2676_; uint8_t v_isSharedCheck_2680_; 
lean_dec_ref(v_h_u03c6_2605_);
lean_dec_ref(v_00_u03c6_2604_);
lean_dec_ref(v___x_2598_);
lean_dec(v_snd_2591_);
lean_dec_ref(v_arg_2571_);
lean_dec_ref(v_arg_2552_);
lean_del_object(v___x_2549_);
lean_dec(v_uniq_2547_);
lean_dec_ref_known(v_p_2545_, 2);
lean_dec(v_name_2546_);
lean_del_object(v___x_2543_);
lean_dec_ref(v_P_2525_);
lean_dec_ref(v_cl_2524_);
lean_dec_ref(v_l_2523_);
v_a_2673_ = lean_ctor_get(v___x_2614_, 0);
v_isSharedCheck_2680_ = !lean_is_exclusive(v___x_2614_);
if (v_isSharedCheck_2680_ == 0)
{
v___x_2675_ = v___x_2614_;
v_isShared_2676_ = v_isSharedCheck_2680_;
goto v_resetjp_2674_;
}
else
{
lean_inc(v_a_2673_);
lean_dec(v___x_2614_);
v___x_2675_ = lean_box(0);
v_isShared_2676_ = v_isSharedCheck_2680_;
goto v_resetjp_2674_;
}
v_resetjp_2674_:
{
lean_object* v___x_2678_; 
if (v_isShared_2676_ == 0)
{
v___x_2678_ = v___x_2675_;
goto v_reusejp_2677_;
}
else
{
lean_object* v_reuseFailAlloc_2679_; 
v_reuseFailAlloc_2679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2679_, 0, v_a_2673_);
v___x_2678_ = v_reuseFailAlloc_2679_;
goto v_reusejp_2677_;
}
v_reusejp_2677_:
{
return v___x_2678_;
}
}
}
}
}
else
{
lean_object* v_a_2688_; lean_object* v___x_2690_; uint8_t v_isShared_2691_; uint8_t v_isSharedCheck_2695_; 
lean_dec_ref(v___x_2598_);
lean_dec(v_snd_2591_);
lean_dec(v_fst_2590_);
lean_dec(v_a_2584_);
lean_dec_ref(v_arg_2571_);
lean_dec_ref(v_arg_2552_);
lean_del_object(v___x_2549_);
lean_dec(v_uniq_2547_);
lean_dec_ref_known(v_p_2545_, 2);
lean_dec(v_name_2546_);
lean_del_object(v___x_2543_);
lean_dec_ref(v_P_2525_);
lean_dec_ref(v_cl_2524_);
lean_dec_ref(v_l_2523_);
v_a_2688_ = lean_ctor_get(v___x_2601_, 0);
v_isSharedCheck_2695_ = !lean_is_exclusive(v___x_2601_);
if (v_isSharedCheck_2695_ == 0)
{
v___x_2690_ = v___x_2601_;
v_isShared_2691_ = v_isSharedCheck_2695_;
goto v_resetjp_2689_;
}
else
{
lean_inc(v_a_2688_);
lean_dec(v___x_2601_);
v___x_2690_ = lean_box(0);
v_isShared_2691_ = v_isSharedCheck_2695_;
goto v_resetjp_2689_;
}
v_resetjp_2689_:
{
lean_object* v___x_2693_; 
if (v_isShared_2691_ == 0)
{
v___x_2693_ = v___x_2690_;
goto v_reusejp_2692_;
}
else
{
lean_object* v_reuseFailAlloc_2694_; 
v_reuseFailAlloc_2694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2694_, 0, v_a_2688_);
v___x_2693_ = v_reuseFailAlloc_2694_;
goto v_reusejp_2692_;
}
v_reusejp_2692_:
{
return v___x_2693_;
}
}
}
}
}
}
else
{
lean_object* v_a_2698_; lean_object* v___x_2700_; uint8_t v_isShared_2701_; uint8_t v_isSharedCheck_2712_; 
lean_dec(v_a_2584_);
lean_dec_ref(v_arg_2571_);
lean_dec_ref(v_arg_2552_);
lean_del_object(v___x_2549_);
lean_dec(v_uniq_2547_);
lean_dec(v_name_2546_);
lean_dec_ref_known(v_p_2545_, 2);
lean_del_object(v___x_2543_);
lean_dec_ref(v_P_2525_);
lean_dec_ref(v_cl_2524_);
lean_dec_ref(v_l_2523_);
lean_dec(v_uType_2522_);
v_a_2698_ = lean_ctor_get(v___x_2588_, 0);
v_isSharedCheck_2712_ = !lean_is_exclusive(v___x_2588_);
if (v_isSharedCheck_2712_ == 0)
{
v___x_2700_ = v___x_2588_;
v_isShared_2701_ = v_isSharedCheck_2712_;
goto v_resetjp_2699_;
}
else
{
lean_inc(v_a_2698_);
lean_dec(v___x_2588_);
v___x_2700_ = lean_box(0);
v_isShared_2701_ = v_isSharedCheck_2712_;
goto v_resetjp_2699_;
}
v_resetjp_2699_:
{
uint8_t v___y_2703_; uint8_t v___x_2710_; 
v___x_2710_ = l_Lean_Exception_isInterrupt(v_a_2698_);
if (v___x_2710_ == 0)
{
uint8_t v___x_2711_; 
lean_inc(v_a_2698_);
v___x_2711_ = l_Lean_Exception_isRuntime(v_a_2698_);
v___y_2703_ = v___x_2711_;
goto v___jp_2702_;
}
else
{
v___y_2703_ = v___x_2710_;
goto v___jp_2702_;
}
v___jp_2702_:
{
if (v___y_2703_ == 0)
{
lean_object* v___x_2705_; 
lean_dec(v_a_2698_);
if (v_isShared_2701_ == 0)
{
lean_ctor_set_tag(v___x_2700_, 0);
lean_ctor_set(v___x_2700_, 0, v___x_2587_);
v___x_2705_ = v___x_2700_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2706_; 
v_reuseFailAlloc_2706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2706_, 0, v___x_2587_);
v___x_2705_ = v_reuseFailAlloc_2706_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
return v___x_2705_;
}
}
else
{
lean_object* v___x_2708_; 
if (v_isShared_2701_ == 0)
{
v___x_2708_ = v___x_2700_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v_a_2698_);
v___x_2708_ = v_reuseFailAlloc_2709_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
return v___x_2708_;
}
}
}
}
}
}
else
{
lean_object* v_a_2713_; lean_object* v___x_2715_; uint8_t v_isShared_2716_; uint8_t v_isSharedCheck_2720_; 
lean_dec_ref(v_arg_2571_);
lean_dec_ref(v_arg_2552_);
lean_del_object(v___x_2549_);
lean_dec(v_uniq_2547_);
lean_dec_ref_known(v_p_2545_, 2);
lean_dec(v_name_2546_);
lean_del_object(v___x_2543_);
lean_dec(v_arg_2527_);
lean_dec_ref(v_P_2525_);
lean_dec_ref(v_cl_2524_);
lean_dec_ref(v_l_2523_);
lean_dec(v_uType_2522_);
v_a_2713_ = lean_ctor_get(v___x_2583_, 0);
v_isSharedCheck_2720_ = !lean_is_exclusive(v___x_2583_);
if (v_isSharedCheck_2720_ == 0)
{
v___x_2715_ = v___x_2583_;
v_isShared_2716_ = v_isSharedCheck_2720_;
goto v_resetjp_2714_;
}
else
{
lean_inc(v_a_2713_);
lean_dec(v___x_2583_);
v___x_2715_ = lean_box(0);
v_isShared_2716_ = v_isSharedCheck_2720_;
goto v_resetjp_2714_;
}
v_resetjp_2714_:
{
lean_object* v___x_2718_; 
if (v_isShared_2716_ == 0)
{
v___x_2718_ = v___x_2715_;
goto v_reusejp_2717_;
}
else
{
lean_object* v_reuseFailAlloc_2719_; 
v_reuseFailAlloc_2719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2719_, 0, v_a_2713_);
v___x_2718_ = v_reuseFailAlloc_2719_;
goto v_reusejp_2717_;
}
v_reusejp_2717_:
{
return v___x_2718_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_arg_2552_);
lean_del_object(v___x_2549_);
lean_dec(v_uniq_2547_);
lean_dec_ref_known(v_p_2545_, 2);
lean_dec(v_name_2546_);
lean_del_object(v___x_2543_);
lean_dec(v_arg_2527_);
lean_dec_ref(v_P_2525_);
lean_dec_ref(v_cl_2524_);
lean_dec_ref(v_l_2523_);
lean_dec(v_uType_2522_);
goto v___jp_2537_;
}
}
else
{
lean_dec_ref(v_arg_2552_);
lean_del_object(v___x_2549_);
lean_dec(v_uniq_2547_);
lean_dec_ref_known(v_p_2545_, 2);
lean_dec(v_name_2546_);
lean_del_object(v___x_2543_);
lean_dec(v_arg_2527_);
lean_dec_ref(v_P_2525_);
lean_dec_ref(v_cl_2524_);
lean_dec_ref(v_l_2523_);
lean_dec(v_uType_2522_);
goto v___jp_2537_;
}
}
else
{
lean_dec_ref(v_arg_2552_);
lean_del_object(v___x_2549_);
lean_dec(v_uniq_2547_);
lean_dec_ref_known(v_p_2545_, 2);
lean_dec(v_name_2546_);
lean_del_object(v___x_2543_);
lean_dec(v_arg_2527_);
lean_dec_ref(v_P_2525_);
lean_dec_ref(v_cl_2524_);
lean_dec_ref(v_l_2523_);
lean_dec(v_uType_2522_);
goto v___jp_2537_;
}
}
else
{
lean_dec_ref(v_arg_2552_);
lean_del_object(v___x_2549_);
lean_dec(v_uniq_2547_);
lean_dec_ref_known(v_p_2545_, 2);
lean_dec(v_name_2546_);
lean_del_object(v___x_2543_);
lean_dec(v_arg_2527_);
lean_dec_ref(v_P_2525_);
lean_dec_ref(v_cl_2524_);
lean_dec_ref(v_l_2523_);
lean_dec(v_uType_2522_);
goto v___jp_2537_;
}
}
else
{
lean_dec_ref(v_arg_2552_);
lean_del_object(v___x_2549_);
lean_dec(v_uniq_2547_);
lean_dec_ref_known(v_p_2545_, 2);
lean_dec(v_name_2546_);
lean_del_object(v___x_2543_);
lean_dec(v_arg_2527_);
lean_dec_ref(v_P_2525_);
lean_dec_ref(v_cl_2524_);
lean_dec_ref(v_l_2523_);
lean_dec(v_uType_2522_);
goto v___jp_2537_;
}
}
else
{
lean_dec_ref(v_arg_2552_);
lean_del_object(v___x_2549_);
lean_dec(v_uniq_2547_);
lean_dec_ref_known(v_p_2545_, 2);
lean_dec(v_name_2546_);
lean_del_object(v___x_2543_);
lean_dec(v_arg_2527_);
lean_dec_ref(v_P_2525_);
lean_dec_ref(v_cl_2524_);
lean_dec_ref(v_l_2523_);
lean_dec(v_uType_2522_);
goto v___jp_2537_;
}
}
else
{
lean_dec_ref(v_arg_2552_);
lean_del_object(v___x_2549_);
lean_dec(v_uniq_2547_);
lean_dec_ref_known(v_p_2545_, 2);
lean_dec(v_name_2546_);
lean_del_object(v___x_2543_);
lean_dec(v_arg_2527_);
lean_dec_ref(v_P_2525_);
lean_dec_ref(v_cl_2524_);
lean_dec_ref(v_l_2523_);
lean_dec(v_uType_2522_);
goto v___jp_2537_;
}
}
else
{
lean_dec_ref(v_arg_2552_);
lean_del_object(v___x_2549_);
lean_dec(v_uniq_2547_);
lean_dec_ref_known(v_p_2545_, 2);
lean_dec(v_name_2546_);
lean_del_object(v___x_2543_);
lean_dec(v_arg_2527_);
lean_dec_ref(v_P_2525_);
lean_dec_ref(v_cl_2524_);
lean_dec_ref(v_l_2523_);
lean_dec(v_uType_2522_);
goto v___jp_2537_;
}
v___jp_2553_:
{
lean_object* v___x_2556_; 
if (v_isShared_2550_ == 0)
{
lean_ctor_set(v___x_2549_, 2, v_arg_2552_);
v___x_2556_ = v___x_2549_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2563_; 
v_reuseFailAlloc_2563_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2563_, 0, v_name_2546_);
lean_ctor_set(v_reuseFailAlloc_2563_, 1, v_uniq_2547_);
lean_ctor_set(v_reuseFailAlloc_2563_, 2, v_arg_2552_);
v___x_2556_ = v_reuseFailAlloc_2563_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2560_; 
v___x_2557_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_Hyp_toExpr(v___x_2556_);
v___x_2558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2558_, 0, v___x_2557_);
lean_ctor_set(v___x_2558_, 1, v___y_2554_);
if (v_isShared_2544_ == 0)
{
lean_ctor_set(v___x_2543_, 0, v___x_2558_);
v___x_2560_ = v___x_2543_;
goto v_reusejp_2559_;
}
else
{
lean_object* v_reuseFailAlloc_2562_; 
v_reuseFailAlloc_2562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2562_, 0, v___x_2558_);
v___x_2560_ = v_reuseFailAlloc_2562_;
goto v_reusejp_2559_;
}
v_reusejp_2559_:
{
lean_object* v___x_2561_; 
v___x_2561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2561_, 0, v___x_2560_);
return v___x_2561_;
}
}
}
}
}
else
{
lean_dec_ref(v_p_2545_);
lean_del_object(v___x_2543_);
lean_dec(v_val_2541_);
lean_dec(v_arg_2527_);
lean_dec_ref(v_P_2525_);
lean_dec_ref(v_cl_2524_);
lean_dec_ref(v_l_2523_);
lean_dec(v_uType_2522_);
goto v___jp_2537_;
}
}
}
else
{
lean_object* v___x_2724_; lean_object* v___x_2725_; 
lean_dec(v___x_2540_);
lean_dec(v_arg_2527_);
lean_dec_ref(v_P_2525_);
lean_dec_ref(v_cl_2524_);
lean_dec_ref(v_l_2523_);
lean_dec(v_uType_2522_);
v___x_2724_ = lean_obj_once(&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__7, &l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__7_once, _init_l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__7);
v___x_2725_ = l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0(v___x_2724_, v_a_2528_, v_a_2529_, v_a_2530_, v_a_2531_, v_a_2532_, v_a_2533_, v_a_2534_, v_a_2535_);
return v___x_2725_;
}
v___jp_2537_:
{
lean_object* v___x_2538_; lean_object* v___x_2539_; 
v___x_2538_ = lean_box(0);
v___x_2539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2539_, 0, v___x_2538_);
return v___x_2539_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___boxed(lean_object* v_uType_2726_, lean_object* v_l_2727_, lean_object* v_cl_2728_, lean_object* v_P_2729_, lean_object* v_QR_2730_, lean_object* v_arg_2731_, lean_object* v_a_2732_, lean_object* v_a_2733_, lean_object* v_a_2734_, lean_object* v_a_2735_, lean_object* v_a_2736_, lean_object* v_a_2737_, lean_object* v_a_2738_, lean_object* v_a_2739_, lean_object* v_a_2740_){
_start:
{
lean_object* v_res_2741_; 
v_res_2741_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure(v_uType_2726_, v_l_2727_, v_cl_2728_, v_P_2729_, v_QR_2730_, v_arg_2731_, v_a_2732_, v_a_2733_, v_a_2734_, v_a_2735_, v_a_2736_, v_a_2737_, v_a_2738_, v_a_2739_);
lean_dec(v_a_2739_);
lean_dec_ref(v_a_2738_);
lean_dec(v_a_2737_);
lean_dec_ref(v_a_2736_);
lean_dec(v_a_2735_);
lean_dec_ref(v_a_2734_);
lean_dec(v_a_2733_);
lean_dec_ref(v_a_2732_);
return v_res_2741_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__2(void){
_start:
{
lean_object* v___x_2747_; lean_object* v_dummy_2748_; 
v___x_2747_ = lean_box(0);
v_dummy_2748_ = l_Lean_Expr_sort___override(v___x_2747_);
return v_dummy_2748_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__5(void){
_start:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; 
v___x_2758_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__5));
v___x_2759_ = lean_unsigned_to_nat(36u);
v___x_2760_ = lean_unsigned_to_nat(245u);
v___x_2761_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__4));
v___x_2762_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__15));
v___x_2763_ = l_mkPanicMessageWithDecl(v___x_2762_, v___x_2761_, v___x_2760_, v___x_2759_, v___x_2758_);
return v___x_2763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall(lean_object* v_uType_2764_, lean_object* v_l_2765_, lean_object* v_cl_2766_, lean_object* v_P_2767_, lean_object* v_00_u03a8_2768_, lean_object* v_arg_2769_, lean_object* v_a_2770_, lean_object* v_a_2771_, lean_object* v_a_2772_, lean_object* v_a_2773_, lean_object* v_a_2774_, lean_object* v_a_2775_, lean_object* v_a_2776_, lean_object* v_a_2777_){
_start:
{
lean_object* v___x_2779_; 
v___x_2779_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseHyp_x3f(v_00_u03a8_2768_);
if (lean_obj_tag(v___x_2779_) == 1)
{
lean_object* v_val_2780_; lean_object* v___x_2782_; uint8_t v_isShared_2783_; uint8_t v_isSharedCheck_2898_; 
v_val_2780_ = lean_ctor_get(v___x_2779_, 0);
v_isSharedCheck_2898_ = !lean_is_exclusive(v___x_2779_);
if (v_isSharedCheck_2898_ == 0)
{
v___x_2782_ = v___x_2779_;
v_isShared_2783_ = v_isSharedCheck_2898_;
goto v_resetjp_2781_;
}
else
{
lean_inc(v_val_2780_);
lean_dec(v___x_2779_);
v___x_2782_ = lean_box(0);
v_isShared_2783_ = v_isSharedCheck_2898_;
goto v_resetjp_2781_;
}
v_resetjp_2781_:
{
lean_object* v_name_2784_; lean_object* v_uniq_2785_; lean_object* v_p_2786_; lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2897_; 
v_name_2784_ = lean_ctor_get(v_val_2780_, 0);
v_uniq_2785_ = lean_ctor_get(v_val_2780_, 1);
v_p_2786_ = lean_ctor_get(v_val_2780_, 2);
v_isSharedCheck_2897_ = !lean_is_exclusive(v_val_2780_);
if (v_isSharedCheck_2897_ == 0)
{
v___x_2788_ = v_val_2780_;
v_isShared_2789_ = v_isSharedCheck_2897_;
goto v_resetjp_2787_;
}
else
{
lean_inc(v_p_2786_);
lean_inc(v_uniq_2785_);
lean_inc(v_name_2784_);
lean_dec(v_val_2780_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2897_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
lean_object* v___y_2791_; lean_object* v___y_2792_; lean_object* v_f_2802_; lean_object* v___x_2803_; uint8_t v___x_2804_; 
v_f_2802_ = l_Lean_Expr_getAppFn(v_p_2786_);
v___x_2803_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__1));
v___x_2804_ = l_Lean_Expr_isConstOf(v_f_2802_, v___x_2803_);
if (v___x_2804_ == 0)
{
lean_object* v___x_2805_; lean_object* v___x_2806_; 
lean_dec_ref(v_f_2802_);
lean_del_object(v___x_2788_);
lean_dec_ref(v_p_2786_);
lean_dec(v_uniq_2785_);
lean_dec(v_name_2784_);
lean_del_object(v___x_2782_);
lean_dec(v_arg_2769_);
lean_dec_ref(v_P_2767_);
lean_dec_ref(v_cl_2766_);
lean_dec_ref(v_l_2765_);
lean_dec(v_uType_2764_);
v___x_2805_ = lean_box(0);
v___x_2806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2806_, 0, v___x_2805_);
return v___x_2806_;
}
else
{
lean_object* v_dummy_2807_; lean_object* v_nargs_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v_args_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; uint8_t v___x_2815_; 
v_dummy_2807_ = lean_obj_once(&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__2, &l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__2_once, _init_l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__2);
v_nargs_2808_ = l_Lean_Expr_getAppNumArgs(v_p_2786_);
lean_inc(v_nargs_2808_);
v___x_2809_ = lean_mk_array(v_nargs_2808_, v_dummy_2807_);
v___x_2810_ = lean_unsigned_to_nat(1u);
v___x_2811_ = lean_nat_sub(v_nargs_2808_, v___x_2810_);
lean_dec(v_nargs_2808_);
lean_inc_ref(v_p_2786_);
v_args_2812_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_p_2786_, v___x_2809_, v___x_2811_);
v___x_2813_ = lean_array_get_size(v_args_2812_);
v___x_2814_ = lean_unsigned_to_nat(4u);
v___x_2815_ = lean_nat_dec_eq(v___x_2813_, v___x_2814_);
if (v___x_2815_ == 0)
{
lean_object* v___x_2816_; lean_object* v___x_2817_; 
lean_dec_ref(v_args_2812_);
lean_dec_ref(v_f_2802_);
lean_del_object(v___x_2788_);
lean_dec_ref(v_p_2786_);
lean_dec(v_uniq_2785_);
lean_dec(v_name_2784_);
lean_del_object(v___x_2782_);
lean_dec(v_arg_2769_);
lean_dec_ref(v_P_2767_);
lean_dec_ref(v_cl_2766_);
lean_dec_ref(v_l_2765_);
lean_dec(v_uType_2764_);
v___x_2816_ = lean_box(0);
v___x_2817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2817_, 0, v___x_2816_);
return v___x_2817_;
}
else
{
lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v_00_u03b1_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; 
v___x_2818_ = l_Lean_instInhabitedExpr;
v___x_2819_ = lean_unsigned_to_nat(2u);
v_00_u03b1_2820_ = lean_array_get(v___x_2818_, v_args_2812_, v___x_2819_);
lean_inc(v_00_u03b1_2820_);
v___x_2821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2821_, 0, v_00_u03b1_2820_);
v___x_2822_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__2));
v___x_2823_ = lean_box(0);
v___x_2824_ = l_Lean_Elab_Tactic_elabTermWithHoles(v_arg_2769_, v___x_2821_, v___x_2822_, v___x_2804_, v___x_2823_, v_a_2770_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_, v_a_2775_, v_a_2776_, v_a_2777_);
if (lean_obj_tag(v___x_2824_) == 0)
{
lean_object* v_a_2825_; lean_object* v_fst_2826_; lean_object* v_snd_2827_; lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2881_; 
v_a_2825_ = lean_ctor_get(v___x_2824_, 0);
lean_inc(v_a_2825_);
lean_dec_ref_known(v___x_2824_, 1);
v_fst_2826_ = lean_ctor_get(v_a_2825_, 0);
v_snd_2827_ = lean_ctor_get(v_a_2825_, 1);
v_isSharedCheck_2881_ = !lean_is_exclusive(v_a_2825_);
if (v_isSharedCheck_2881_ == 0)
{
v___x_2829_ = v_a_2825_;
v_isShared_2830_ = v_isSharedCheck_2881_;
goto v_resetjp_2828_;
}
else
{
lean_inc(v_snd_2827_);
lean_inc(v_fst_2826_);
lean_dec(v_a_2825_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2881_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
lean_object* v___x_2831_; 
v___x_2831_ = l_Lean_Elab_Tactic_pushGoals___redArg(v_snd_2827_, v_a_2771_);
if (lean_obj_tag(v___x_2831_) == 0)
{
lean_object* v_levels_2832_; lean_object* v___x_2833_; lean_object* v_00_u03c8_2834_; lean_object* v___x_2835_; lean_object* v___y_2837_; 
lean_dec_ref_known(v___x_2831_, 1);
v_levels_2832_ = l_Lean_Expr_constLevels_x21(v_f_2802_);
lean_dec_ref(v_f_2802_);
v___x_2833_ = lean_unsigned_to_nat(3u);
v_00_u03c8_2834_ = lean_array_get(v___x_2818_, v_args_2812_, v___x_2833_);
lean_dec_ref(v_args_2812_);
v___x_2835_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__3));
if (lean_obj_tag(v_levels_2832_) == 0)
{
v___y_2837_ = v_levels_2832_;
goto v___jp_2836_;
}
else
{
lean_object* v_tail_2872_; 
v_tail_2872_ = lean_ctor_get(v_levels_2832_, 1);
lean_inc(v_tail_2872_);
lean_dec_ref_known(v_levels_2832_, 2);
v___y_2837_ = v_tail_2872_;
goto v___jp_2836_;
}
v___jp_2836_:
{
lean_object* v_options_2838_; lean_object* v_inheritedTraceOptions_2839_; uint8_t v_hasTrace_2840_; lean_object* v___x_2841_; lean_object* v___x_2843_; 
v_options_2838_ = lean_ctor_get(v_a_2776_, 2);
v_inheritedTraceOptions_2839_ = lean_ctor_get(v_a_2776_, 13);
v_hasTrace_2840_ = lean_ctor_get_uint8(v_options_2838_, sizeof(void*)*1);
v___x_2841_ = lean_box(0);
if (v_isShared_2830_ == 0)
{
lean_ctor_set_tag(v___x_2829_, 1);
lean_ctor_set(v___x_2829_, 1, v___x_2841_);
lean_ctor_set(v___x_2829_, 0, v_uType_2764_);
v___x_2843_ = v___x_2829_;
goto v_reusejp_2842_;
}
else
{
lean_object* v_reuseFailAlloc_2871_; 
v_reuseFailAlloc_2871_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2871_, 0, v_uType_2764_);
lean_ctor_set(v_reuseFailAlloc_2871_, 1, v___x_2841_);
v___x_2843_ = v_reuseFailAlloc_2871_;
goto v_reusejp_2842_;
}
v_reusejp_2842_:
{
lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; 
v___x_2844_ = l_List_appendTR___redArg(v___y_2837_, v___x_2843_);
v___x_2845_ = l_Lean_mkConst(v___x_2835_, v___x_2844_);
lean_inc_n(v_fst_2826_, 2);
lean_inc(v_00_u03c8_2834_);
v___x_2846_ = l_Lean_mkApp6(v___x_2845_, v_l_2765_, v_cl_2766_, v_P_2767_, v_00_u03b1_2820_, v_00_u03c8_2834_, v_fst_2826_);
v___x_2847_ = lean_mk_empty_array_with_capacity(v___x_2810_);
v___x_2848_ = lean_array_push(v___x_2847_, v_fst_2826_);
v___x_2849_ = l_Lean_Expr_beta(v_00_u03c8_2834_, v___x_2848_);
if (v_hasTrace_2840_ == 0)
{
lean_dec(v_fst_2826_);
lean_dec_ref(v_p_2786_);
v___y_2791_ = v___x_2849_;
v___y_2792_ = v___x_2846_;
goto v___jp_2790_;
}
else
{
lean_object* v___x_2850_; lean_object* v___x_2851_; uint8_t v___x_2852_; 
v___x_2850_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_2851_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__11, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__11_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__11);
v___x_2852_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2839_, v_options_2838_, v___x_2851_);
if (v___x_2852_ == 0)
{
lean_dec(v_fst_2826_);
lean_dec_ref(v_p_2786_);
v___y_2791_ = v___x_2849_;
v___y_2792_ = v___x_2846_;
goto v___jp_2790_;
}
else
{
lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; 
v___x_2853_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeForall___closed__3);
v___x_2854_ = l_Lean_MessageData_ofExpr(v_p_2786_);
v___x_2855_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2855_, 0, v___x_2853_);
lean_ctor_set(v___x_2855_, 1, v___x_2854_);
v___x_2856_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8);
v___x_2857_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2857_, 0, v___x_2855_);
lean_ctor_set(v___x_2857_, 1, v___x_2856_);
v___x_2858_ = l_Lean_MessageData_ofExpr(v_fst_2826_);
v___x_2859_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2859_, 0, v___x_2857_);
lean_ctor_set(v___x_2859_, 1, v___x_2858_);
v___x_2860_ = lean_obj_once(&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__6, &l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__6_once, _init_l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__6);
v___x_2861_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2861_, 0, v___x_2859_);
lean_ctor_set(v___x_2861_, 1, v___x_2860_);
v___x_2862_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__1___redArg(v___x_2850_, v___x_2861_, v_a_2774_, v_a_2775_, v_a_2776_, v_a_2777_);
if (lean_obj_tag(v___x_2862_) == 0)
{
lean_dec_ref_known(v___x_2862_, 1);
v___y_2791_ = v___x_2849_;
v___y_2792_ = v___x_2846_;
goto v___jp_2790_;
}
else
{
lean_object* v_a_2863_; lean_object* v___x_2865_; uint8_t v_isShared_2866_; uint8_t v_isSharedCheck_2870_; 
lean_dec_ref(v___x_2849_);
lean_dec_ref(v___x_2846_);
lean_del_object(v___x_2788_);
lean_dec(v_uniq_2785_);
lean_dec(v_name_2784_);
lean_del_object(v___x_2782_);
v_a_2863_ = lean_ctor_get(v___x_2862_, 0);
v_isSharedCheck_2870_ = !lean_is_exclusive(v___x_2862_);
if (v_isSharedCheck_2870_ == 0)
{
v___x_2865_ = v___x_2862_;
v_isShared_2866_ = v_isSharedCheck_2870_;
goto v_resetjp_2864_;
}
else
{
lean_inc(v_a_2863_);
lean_dec(v___x_2862_);
v___x_2865_ = lean_box(0);
v_isShared_2866_ = v_isSharedCheck_2870_;
goto v_resetjp_2864_;
}
v_resetjp_2864_:
{
lean_object* v___x_2868_; 
if (v_isShared_2866_ == 0)
{
v___x_2868_ = v___x_2865_;
goto v_reusejp_2867_;
}
else
{
lean_object* v_reuseFailAlloc_2869_; 
v_reuseFailAlloc_2869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2869_, 0, v_a_2863_);
v___x_2868_ = v_reuseFailAlloc_2869_;
goto v_reusejp_2867_;
}
v_reusejp_2867_:
{
return v___x_2868_;
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
lean_object* v_a_2873_; lean_object* v___x_2875_; uint8_t v_isShared_2876_; uint8_t v_isSharedCheck_2880_; 
lean_del_object(v___x_2829_);
lean_dec(v_fst_2826_);
lean_dec(v_00_u03b1_2820_);
lean_dec_ref(v_args_2812_);
lean_dec_ref(v_f_2802_);
lean_del_object(v___x_2788_);
lean_dec_ref(v_p_2786_);
lean_dec(v_uniq_2785_);
lean_dec(v_name_2784_);
lean_del_object(v___x_2782_);
lean_dec_ref(v_P_2767_);
lean_dec_ref(v_cl_2766_);
lean_dec_ref(v_l_2765_);
lean_dec(v_uType_2764_);
v_a_2873_ = lean_ctor_get(v___x_2831_, 0);
v_isSharedCheck_2880_ = !lean_is_exclusive(v___x_2831_);
if (v_isSharedCheck_2880_ == 0)
{
v___x_2875_ = v___x_2831_;
v_isShared_2876_ = v_isSharedCheck_2880_;
goto v_resetjp_2874_;
}
else
{
lean_inc(v_a_2873_);
lean_dec(v___x_2831_);
v___x_2875_ = lean_box(0);
v_isShared_2876_ = v_isSharedCheck_2880_;
goto v_resetjp_2874_;
}
v_resetjp_2874_:
{
lean_object* v___x_2878_; 
if (v_isShared_2876_ == 0)
{
v___x_2878_ = v___x_2875_;
goto v_reusejp_2877_;
}
else
{
lean_object* v_reuseFailAlloc_2879_; 
v_reuseFailAlloc_2879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2879_, 0, v_a_2873_);
v___x_2878_ = v_reuseFailAlloc_2879_;
goto v_reusejp_2877_;
}
v_reusejp_2877_:
{
return v___x_2878_;
}
}
}
}
}
else
{
lean_object* v_a_2882_; lean_object* v___x_2884_; uint8_t v_isShared_2885_; uint8_t v_isSharedCheck_2896_; 
lean_dec(v_00_u03b1_2820_);
lean_dec_ref(v_args_2812_);
lean_dec_ref(v_f_2802_);
lean_del_object(v___x_2788_);
lean_dec_ref(v_p_2786_);
lean_dec(v_uniq_2785_);
lean_dec(v_name_2784_);
lean_del_object(v___x_2782_);
lean_dec_ref(v_P_2767_);
lean_dec_ref(v_cl_2766_);
lean_dec_ref(v_l_2765_);
lean_dec(v_uType_2764_);
v_a_2882_ = lean_ctor_get(v___x_2824_, 0);
v_isSharedCheck_2896_ = !lean_is_exclusive(v___x_2824_);
if (v_isSharedCheck_2896_ == 0)
{
v___x_2884_ = v___x_2824_;
v_isShared_2885_ = v_isSharedCheck_2896_;
goto v_resetjp_2883_;
}
else
{
lean_inc(v_a_2882_);
lean_dec(v___x_2824_);
v___x_2884_ = lean_box(0);
v_isShared_2885_ = v_isSharedCheck_2896_;
goto v_resetjp_2883_;
}
v_resetjp_2883_:
{
uint8_t v___y_2887_; uint8_t v___x_2894_; 
v___x_2894_ = l_Lean_Exception_isInterrupt(v_a_2882_);
if (v___x_2894_ == 0)
{
uint8_t v___x_2895_; 
lean_inc(v_a_2882_);
v___x_2895_ = l_Lean_Exception_isRuntime(v_a_2882_);
v___y_2887_ = v___x_2895_;
goto v___jp_2886_;
}
else
{
v___y_2887_ = v___x_2894_;
goto v___jp_2886_;
}
v___jp_2886_:
{
if (v___y_2887_ == 0)
{
lean_object* v___x_2889_; 
lean_dec(v_a_2882_);
if (v_isShared_2885_ == 0)
{
lean_ctor_set_tag(v___x_2884_, 0);
lean_ctor_set(v___x_2884_, 0, v___x_2823_);
v___x_2889_ = v___x_2884_;
goto v_reusejp_2888_;
}
else
{
lean_object* v_reuseFailAlloc_2890_; 
v_reuseFailAlloc_2890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2890_, 0, v___x_2823_);
v___x_2889_ = v_reuseFailAlloc_2890_;
goto v_reusejp_2888_;
}
v_reusejp_2888_:
{
return v___x_2889_;
}
}
else
{
lean_object* v___x_2892_; 
if (v_isShared_2885_ == 0)
{
v___x_2892_ = v___x_2884_;
goto v_reusejp_2891_;
}
else
{
lean_object* v_reuseFailAlloc_2893_; 
v_reuseFailAlloc_2893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2893_, 0, v_a_2882_);
v___x_2892_ = v_reuseFailAlloc_2893_;
goto v_reusejp_2891_;
}
v_reusejp_2891_:
{
return v___x_2892_;
}
}
}
}
}
}
}
v___jp_2790_:
{
lean_object* v___x_2794_; 
if (v_isShared_2789_ == 0)
{
lean_ctor_set(v___x_2788_, 2, v___y_2791_);
v___x_2794_ = v___x_2788_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2801_; 
v_reuseFailAlloc_2801_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2801_, 0, v_name_2784_);
lean_ctor_set(v_reuseFailAlloc_2801_, 1, v_uniq_2785_);
lean_ctor_set(v_reuseFailAlloc_2801_, 2, v___y_2791_);
v___x_2794_ = v_reuseFailAlloc_2801_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2798_; 
v___x_2795_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_Hyp_toExpr(v___x_2794_);
v___x_2796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2796_, 0, v___x_2795_);
lean_ctor_set(v___x_2796_, 1, v___y_2792_);
if (v_isShared_2783_ == 0)
{
lean_ctor_set(v___x_2782_, 0, v___x_2796_);
v___x_2798_ = v___x_2782_;
goto v_reusejp_2797_;
}
else
{
lean_object* v_reuseFailAlloc_2800_; 
v_reuseFailAlloc_2800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2800_, 0, v___x_2796_);
v___x_2798_ = v_reuseFailAlloc_2800_;
goto v_reusejp_2797_;
}
v_reusejp_2797_:
{
lean_object* v___x_2799_; 
v___x_2799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2799_, 0, v___x_2798_);
return v___x_2799_;
}
}
}
}
}
}
else
{
lean_object* v___x_2899_; lean_object* v___x_2900_; 
lean_dec(v___x_2779_);
lean_dec(v_arg_2769_);
lean_dec_ref(v_P_2767_);
lean_dec_ref(v_cl_2766_);
lean_dec_ref(v_l_2765_);
lean_dec(v_uType_2764_);
v___x_2899_ = lean_obj_once(&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__5, &l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__5_once, _init_l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___closed__5);
v___x_2900_ = l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure_spec__0(v___x_2899_, v_a_2770_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_, v_a_2775_, v_a_2776_, v_a_2777_);
return v___x_2900_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall___boxed(lean_object* v_uType_2901_, lean_object* v_l_2902_, lean_object* v_cl_2903_, lean_object* v_P_2904_, lean_object* v_00_u03a8_2905_, lean_object* v_arg_2906_, lean_object* v_a_2907_, lean_object* v_a_2908_, lean_object* v_a_2909_, lean_object* v_a_2910_, lean_object* v_a_2911_, lean_object* v_a_2912_, lean_object* v_a_2913_, lean_object* v_a_2914_, lean_object* v_a_2915_){
_start:
{
lean_object* v_res_2916_; 
v_res_2916_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall(v_uType_2901_, v_l_2902_, v_cl_2903_, v_P_2904_, v_00_u03a8_2905_, v_arg_2906_, v_a_2907_, v_a_2908_, v_a_2909_, v_a_2910_, v_a_2911_, v_a_2912_, v_a_2913_, v_a_2914_);
lean_dec(v_a_2914_);
lean_dec_ref(v_a_2913_);
lean_dec(v_a_2912_);
lean_dec_ref(v_a_2911_);
lean_dec(v_a_2910_);
lean_dec_ref(v_a_2909_);
lean_dec(v_a_2908_);
lean_dec_ref(v_a_2907_);
return v_res_2916_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize_spec__0___lam__0(lean_object* v___x_2919_, lean_object* v___x_2920_, lean_object* v___x_2921_, lean_object* v___x_2922_, lean_object* v___x_2923_, lean_object* v___x_2924_, lean_object* v___x_2925_, lean_object* v___x_2926_, lean_object* v_snd_2927_, lean_object* v_snd_2928_, lean_object* v_hgoal_2929_){
_start:
{
lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; 
v___x_2930_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__0));
v___x_2931_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize_spec__0___lam__0___closed__0));
v___x_2932_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize_spec__0___lam__0___closed__1));
v___x_2933_ = l_Lean_Name_mkStr4(v___x_2919_, v___x_2930_, v___x_2931_, v___x_2932_);
v___x_2934_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2934_, 0, v___x_2920_);
lean_ctor_set(v___x_2934_, 1, v___x_2921_);
v___x_2935_ = l_Lean_mkConst(v___x_2933_, v___x_2934_);
v___x_2936_ = l_Lean_mkApp7(v___x_2935_, v___x_2922_, v___x_2923_, v___x_2924_, v___x_2925_, v___x_2926_, v_snd_2927_, v_hgoal_2929_);
v___x_2937_ = lean_apply_1(v_snd_2928_, v___x_2936_);
return v___x_2937_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize_spec__0(lean_object* v___y_2938_, lean_object* v___x_2939_, lean_object* v___x_2940_, lean_object* v___x_2941_, lean_object* v___x_2942_, lean_object* v___x_2943_, lean_object* v_as_2944_, size_t v_sz_2945_, size_t v_i_2946_, lean_object* v_b_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_){
_start:
{
lean_object* v_a_2958_; uint8_t v___x_2962_; 
v___x_2962_ = lean_usize_dec_lt(v_i_2946_, v_sz_2945_);
if (v___x_2962_ == 0)
{
lean_object* v___x_2963_; 
lean_dec_ref(v___x_2943_);
lean_dec(v___x_2942_);
lean_dec_ref(v___x_2941_);
lean_dec_ref(v___x_2940_);
lean_dec_ref(v___x_2939_);
lean_dec(v___y_2938_);
v___x_2963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2963_, 0, v_b_2947_);
return v___x_2963_;
}
else
{
lean_object* v_fst_2964_; lean_object* v_snd_2965_; lean_object* v___x_2967_; uint8_t v_isShared_2968_; uint8_t v_isSharedCheck_3021_; 
v_fst_2964_ = lean_ctor_get(v_b_2947_, 0);
v_snd_2965_ = lean_ctor_get(v_b_2947_, 1);
v_isSharedCheck_3021_ = !lean_is_exclusive(v_b_2947_);
if (v_isSharedCheck_3021_ == 0)
{
v___x_2967_ = v_b_2947_;
v_isShared_2968_ = v_isSharedCheck_3021_;
goto v_resetjp_2966_;
}
else
{
lean_inc(v_snd_2965_);
lean_inc(v_fst_2964_);
lean_dec(v_b_2947_);
v___x_2967_ = lean_box(0);
v_isShared_2968_ = v_isSharedCheck_3021_;
goto v_resetjp_2966_;
}
v_resetjp_2966_:
{
lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v_a_2971_; lean_object* v___y_2973_; lean_object* v___x_3016_; 
v___x_2969_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_2970_ = lean_box(0);
v_a_2971_ = lean_array_uget_borrowed(v_as_2944_, v_i_2946_);
lean_inc(v_a_2971_);
lean_inc(v_fst_2964_);
lean_inc_ref(v___x_2941_);
lean_inc_ref(v___x_2940_);
lean_inc_ref(v___x_2939_);
lean_inc(v___y_2938_);
v___x_3016_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg(v___y_2938_, v___x_2939_, v___x_2940_, v___x_2941_, v_fst_2964_, v_a_2971_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_);
if (lean_obj_tag(v___x_3016_) == 0)
{
lean_object* v_a_3017_; 
v_a_3017_ = lean_ctor_get(v___x_3016_, 0);
lean_inc(v_a_3017_);
if (lean_obj_tag(v_a_3017_) == 0)
{
lean_object* v___x_3018_; 
lean_dec_ref_known(v___x_3016_, 1);
lean_inc(v_a_2971_);
lean_inc(v_fst_2964_);
lean_inc_ref(v___x_2941_);
lean_inc_ref(v___x_2940_);
lean_inc_ref(v___x_2939_);
lean_inc(v___y_2938_);
v___x_3018_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure(v___y_2938_, v___x_2939_, v___x_2940_, v___x_2941_, v_fst_2964_, v_a_2971_, v___y_2948_, v___y_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_);
if (lean_obj_tag(v___x_3018_) == 0)
{
lean_object* v_a_3019_; 
v_a_3019_ = lean_ctor_get(v___x_3018_, 0);
lean_inc(v_a_3019_);
if (lean_obj_tag(v_a_3019_) == 0)
{
lean_object* v___x_3020_; 
lean_dec_ref_known(v___x_3018_, 1);
lean_inc(v_a_2971_);
lean_inc(v_fst_2964_);
lean_inc_ref(v___x_2941_);
lean_inc_ref(v___x_2940_);
lean_inc_ref(v___x_2939_);
lean_inc(v___y_2938_);
v___x_3020_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall(v___y_2938_, v___x_2939_, v___x_2940_, v___x_2941_, v_fst_2964_, v_a_2971_, v___y_2948_, v___y_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_);
v___y_2973_ = v___x_3020_;
goto v___jp_2972_;
}
else
{
lean_dec_ref_known(v_a_3019_, 1);
v___y_2973_ = v___x_3018_;
goto v___jp_2972_;
}
}
else
{
v___y_2973_ = v___x_3018_;
goto v___jp_2972_;
}
}
else
{
lean_dec_ref_known(v_a_3017_, 1);
v___y_2973_ = v___x_3016_;
goto v___jp_2972_;
}
}
else
{
v___y_2973_ = v___x_3016_;
goto v___jp_2972_;
}
v___jp_2972_:
{
if (lean_obj_tag(v___y_2973_) == 0)
{
lean_object* v_a_2974_; 
v_a_2974_ = lean_ctor_get(v___y_2973_, 0);
lean_inc(v_a_2974_);
lean_dec_ref_known(v___y_2973_, 1);
if (lean_obj_tag(v_a_2974_) == 0)
{
lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; 
v___x_2975_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___closed__1);
lean_inc(v_fst_2964_);
v___x_2976_ = l_Lean_MessageData_ofExpr(v_fst_2964_);
v___x_2977_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2977_, 0, v___x_2975_);
lean_ctor_set(v___x_2977_, 1, v___x_2976_);
v___x_2978_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8);
v___x_2979_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2979_, 0, v___x_2977_);
lean_ctor_set(v___x_2979_, 1, v___x_2978_);
lean_inc(v_a_2971_);
v___x_2980_ = l_Lean_MessageData_ofSyntax(v_a_2971_);
v___x_2981_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2981_, 0, v___x_2979_);
lean_ctor_set(v___x_2981_, 1, v___x_2980_);
v___x_2982_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0___redArg(v___x_2981_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_);
if (lean_obj_tag(v___x_2982_) == 0)
{
lean_object* v___x_2984_; 
lean_dec_ref_known(v___x_2982_, 1);
if (v_isShared_2968_ == 0)
{
v___x_2984_ = v___x_2967_;
goto v_reusejp_2983_;
}
else
{
lean_object* v_reuseFailAlloc_2985_; 
v_reuseFailAlloc_2985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2985_, 0, v_fst_2964_);
lean_ctor_set(v_reuseFailAlloc_2985_, 1, v_snd_2965_);
v___x_2984_ = v_reuseFailAlloc_2985_;
goto v_reusejp_2983_;
}
v_reusejp_2983_:
{
v_a_2958_ = v___x_2984_;
goto v___jp_2957_;
}
}
else
{
lean_object* v_a_2986_; lean_object* v___x_2988_; uint8_t v_isShared_2989_; uint8_t v_isSharedCheck_2993_; 
lean_del_object(v___x_2967_);
lean_dec(v_snd_2965_);
lean_dec(v_fst_2964_);
lean_dec_ref(v___x_2943_);
lean_dec(v___x_2942_);
lean_dec_ref(v___x_2941_);
lean_dec_ref(v___x_2940_);
lean_dec_ref(v___x_2939_);
lean_dec(v___y_2938_);
v_a_2986_ = lean_ctor_get(v___x_2982_, 0);
v_isSharedCheck_2993_ = !lean_is_exclusive(v___x_2982_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2988_ = v___x_2982_;
v_isShared_2989_ = v_isSharedCheck_2993_;
goto v_resetjp_2987_;
}
else
{
lean_inc(v_a_2986_);
lean_dec(v___x_2982_);
v___x_2988_ = lean_box(0);
v_isShared_2989_ = v_isSharedCheck_2993_;
goto v_resetjp_2987_;
}
v_resetjp_2987_:
{
lean_object* v___x_2991_; 
if (v_isShared_2989_ == 0)
{
v___x_2991_ = v___x_2988_;
goto v_reusejp_2990_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v_a_2986_);
v___x_2991_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2990_;
}
v_reusejp_2990_:
{
return v___x_2991_;
}
}
}
}
else
{
lean_object* v_val_2994_; lean_object* v_fst_2995_; lean_object* v_snd_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3007_; 
lean_del_object(v___x_2967_);
v_val_2994_ = lean_ctor_get(v_a_2974_, 0);
lean_inc(v_val_2994_);
lean_dec_ref_known(v_a_2974_, 1);
v_fst_2995_ = lean_ctor_get(v_val_2994_, 0);
v_snd_2996_ = lean_ctor_get(v_val_2994_, 1);
v_isSharedCheck_3007_ = !lean_is_exclusive(v_val_2994_);
if (v_isSharedCheck_3007_ == 0)
{
v___x_2998_ = v_val_2994_;
v_isShared_2999_ = v_isSharedCheck_3007_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_snd_2996_);
lean_inc(v_fst_2995_);
lean_dec(v_val_2994_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3007_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___f_3003_; lean_object* v___x_3005_; 
lean_inc_ref_n(v___x_2941_, 2);
lean_inc_ref_n(v___x_2940_, 3);
lean_inc_ref_n(v___x_2939_, 4);
lean_inc_n(v___y_2938_, 3);
v___x_3000_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkAnd_x21(v___y_2938_, v___x_2939_, v___x_2940_, v___x_2941_, v_fst_2964_);
lean_inc(v_fst_2995_);
v___x_3001_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkAnd_x21(v___y_2938_, v___x_2939_, v___x_2940_, v___x_2941_, v_fst_2995_);
v___x_3002_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder(v___y_2938_, v___x_2939_, v___x_2940_);
lean_inc_ref(v___x_2943_);
lean_inc(v___x_2942_);
v___f_3003_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize_spec__0___lam__0), 11, 10);
lean_closure_set(v___f_3003_, 0, v___x_2969_);
lean_closure_set(v___f_3003_, 1, v___x_2942_);
lean_closure_set(v___f_3003_, 2, v___x_2970_);
lean_closure_set(v___f_3003_, 3, v___x_2939_);
lean_closure_set(v___f_3003_, 4, v___x_3002_);
lean_closure_set(v___f_3003_, 5, v___x_3000_);
lean_closure_set(v___f_3003_, 6, v___x_3001_);
lean_closure_set(v___f_3003_, 7, v___x_2943_);
lean_closure_set(v___f_3003_, 8, v_snd_2996_);
lean_closure_set(v___f_3003_, 9, v_snd_2965_);
if (v_isShared_2999_ == 0)
{
lean_ctor_set(v___x_2998_, 1, v___f_3003_);
v___x_3005_ = v___x_2998_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v_fst_2995_);
lean_ctor_set(v_reuseFailAlloc_3006_, 1, v___f_3003_);
v___x_3005_ = v_reuseFailAlloc_3006_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
v_a_2958_ = v___x_3005_;
goto v___jp_2957_;
}
}
}
}
else
{
lean_object* v_a_3008_; lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3015_; 
lean_del_object(v___x_2967_);
lean_dec(v_snd_2965_);
lean_dec(v_fst_2964_);
lean_dec_ref(v___x_2943_);
lean_dec(v___x_2942_);
lean_dec_ref(v___x_2941_);
lean_dec_ref(v___x_2940_);
lean_dec_ref(v___x_2939_);
lean_dec(v___y_2938_);
v_a_3008_ = lean_ctor_get(v___y_2973_, 0);
v_isSharedCheck_3015_ = !lean_is_exclusive(v___y_2973_);
if (v_isSharedCheck_3015_ == 0)
{
v___x_3010_ = v___y_2973_;
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
else
{
lean_inc(v_a_3008_);
lean_dec(v___y_2973_);
v___x_3010_ = lean_box(0);
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
v_resetjp_3009_:
{
lean_object* v___x_3013_; 
if (v_isShared_3011_ == 0)
{
v___x_3013_ = v___x_3010_;
goto v_reusejp_3012_;
}
else
{
lean_object* v_reuseFailAlloc_3014_; 
v_reuseFailAlloc_3014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3014_, 0, v_a_3008_);
v___x_3013_ = v_reuseFailAlloc_3014_;
goto v_reusejp_3012_;
}
v_reusejp_3012_:
{
return v___x_3013_;
}
}
}
}
}
}
v___jp_2957_:
{
size_t v___x_2959_; size_t v___x_2960_; 
v___x_2959_ = ((size_t)1ULL);
v___x_2960_ = lean_usize_add(v_i_2946_, v___x_2959_);
v_i_2946_ = v___x_2960_;
v_b_2947_ = v_a_2958_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize_spec__0___boxed(lean_object** _args){
lean_object* v___y_3022_ = _args[0];
lean_object* v___x_3023_ = _args[1];
lean_object* v___x_3024_ = _args[2];
lean_object* v___x_3025_ = _args[3];
lean_object* v___x_3026_ = _args[4];
lean_object* v___x_3027_ = _args[5];
lean_object* v_as_3028_ = _args[6];
lean_object* v_sz_3029_ = _args[7];
lean_object* v_i_3030_ = _args[8];
lean_object* v_b_3031_ = _args[9];
lean_object* v___y_3032_ = _args[10];
lean_object* v___y_3033_ = _args[11];
lean_object* v___y_3034_ = _args[12];
lean_object* v___y_3035_ = _args[13];
lean_object* v___y_3036_ = _args[14];
lean_object* v___y_3037_ = _args[15];
lean_object* v___y_3038_ = _args[16];
lean_object* v___y_3039_ = _args[17];
lean_object* v___y_3040_ = _args[18];
_start:
{
size_t v_sz_boxed_3041_; size_t v_i_boxed_3042_; lean_object* v_res_3043_; 
v_sz_boxed_3041_ = lean_unbox_usize(v_sz_3029_);
lean_dec(v_sz_3029_);
v_i_boxed_3042_ = lean_unbox_usize(v_i_3030_);
lean_dec(v_i_3030_);
v_res_3043_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize_spec__0(v___y_3022_, v___x_3023_, v___x_3024_, v___x_3025_, v___x_3026_, v___x_3027_, v_as_3028_, v_sz_boxed_3041_, v_i_boxed_3042_, v_b_3031_, v___y_3032_, v___y_3033_, v___y_3034_, v___y_3035_, v___y_3036_, v___y_3037_, v___y_3038_, v___y_3039_);
lean_dec(v___y_3039_);
lean_dec_ref(v___y_3038_);
lean_dec(v___y_3037_);
lean_dec_ref(v___y_3036_);
lean_dec(v___y_3035_);
lean_dec_ref(v___y_3034_);
lean_dec(v___y_3033_);
lean_dec_ref(v___y_3032_);
lean_dec_ref(v_as_3028_);
return v_res_3043_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; 
v___x_3045_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__2));
v___x_3046_ = lean_unsigned_to_nat(33u);
v___x_3047_ = lean_unsigned_to_nat(277u);
v___x_3048_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize___lam__0___closed__0));
v___x_3049_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__15));
v___x_3050_ = l_mkPanicMessageWithDecl(v___x_3049_, v___x_3048_, v___x_3047_, v___x_3046_, v___x_3045_);
return v___x_3050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize___lam__0(lean_object* v___x_3051_, lean_object* v_snd_3052_, lean_object* v_hyp_3053_, lean_object* v___x_3054_, lean_object* v_args_3055_, lean_object* v_fst_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_, lean_object* v___y_3062_, lean_object* v___y_3063_, lean_object* v___y_3064_){
_start:
{
if (lean_obj_tag(v___x_3051_) == 1)
{
lean_object* v_val_3066_; lean_object* v_u_3067_; lean_object* v_l_3068_; lean_object* v_cl_3069_; lean_object* v_hyps_3070_; lean_object* v_target_3071_; lean_object* v___x_3073_; uint8_t v_isShared_3074_; uint8_t v_isSharedCheck_3141_; 
v_val_3066_ = lean_ctor_get(v___x_3051_, 0);
lean_inc(v_val_3066_);
lean_dec_ref_known(v___x_3051_, 1);
v_u_3067_ = lean_ctor_get(v_snd_3052_, 0);
v_l_3068_ = lean_ctor_get(v_snd_3052_, 1);
v_cl_3069_ = lean_ctor_get(v_snd_3052_, 2);
v_hyps_3070_ = lean_ctor_get(v_snd_3052_, 3);
v_target_3071_ = lean_ctor_get(v_snd_3052_, 4);
v_isSharedCheck_3141_ = !lean_is_exclusive(v_snd_3052_);
if (v_isSharedCheck_3141_ == 0)
{
v___x_3073_ = v_snd_3052_;
v_isShared_3074_ = v_isSharedCheck_3141_;
goto v_resetjp_3072_;
}
else
{
lean_inc(v_target_3071_);
lean_inc(v_hyps_3070_);
lean_inc(v_cl_3069_);
lean_inc(v_l_3068_);
lean_inc(v_u_3067_);
lean_dec(v_snd_3052_);
v___x_3073_ = lean_box(0);
v_isShared_3074_ = v_isSharedCheck_3141_;
goto v_resetjp_3072_;
}
v_resetjp_3072_:
{
lean_object* v___y_3076_; lean_object* v___x_3139_; 
v___x_3139_ = l_Lean_Level_dec(v_u_3067_);
if (lean_obj_tag(v___x_3139_) == 0)
{
lean_inc(v_u_3067_);
v___y_3076_ = v_u_3067_;
goto v___jp_3075_;
}
else
{
lean_object* v_val_3140_; 
v_val_3140_ = lean_ctor_get(v___x_3139_, 0);
lean_inc(v_val_3140_);
lean_dec_ref_known(v___x_3139_, 1);
v___y_3076_ = v_val_3140_;
goto v___jp_3075_;
}
v___jp_3075_:
{
lean_object* v_focusHyp_3077_; lean_object* v_restHyps_3078_; lean_object* v_proof_3079_; lean_object* v___x_3080_; 
v_focusHyp_3077_ = lean_ctor_get(v_val_3066_, 0);
lean_inc_ref_n(v_focusHyp_3077_, 2);
v_restHyps_3078_ = lean_ctor_get(v_val_3066_, 1);
lean_inc_ref(v_restHyps_3078_);
v_proof_3079_ = lean_ctor_get(v_val_3066_, 2);
lean_inc_ref(v_proof_3079_);
lean_dec(v_val_3066_);
v___x_3080_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseHyp_x3f(v_focusHyp_3077_);
if (lean_obj_tag(v___x_3080_) == 1)
{
lean_object* v_val_3081_; uint8_t v___x_3082_; lean_object* v___x_3083_; 
v_val_3081_ = lean_ctor_get(v___x_3080_, 0);
lean_inc(v_val_3081_);
lean_dec_ref_known(v___x_3080_, 1);
v___x_3082_ = 0;
lean_inc_ref(v_cl_3069_);
lean_inc_ref(v_l_3068_);
lean_inc(v_u_3067_);
v___x_3083_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_addHypInfo(v_hyp_3053_, v_u_3067_, v_l_3068_, v_cl_3069_, v_val_3081_, v___x_3082_, v___y_3061_, v___y_3062_, v___y_3063_, v___y_3064_);
if (lean_obj_tag(v___x_3083_) == 0)
{
lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; size_t v_sz_3096_; size_t v___x_3097_; lean_object* v___x_3098_; 
lean_dec_ref_known(v___x_3083_, 1);
v___x_3084_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0));
v___x_3085_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__3));
v___x_3086_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_3087_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__1));
v___x_3088_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_3089_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__0));
v___x_3090_ = l_Lean_Name_mkStr7(v___x_3084_, v___x_3085_, v___x_3086_, v___x_3087_, v___x_3054_, v___x_3088_, v___x_3089_);
v___x_3091_ = lean_box(0);
lean_inc_n(v___y_3076_, 2);
v___x_3092_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3092_, 0, v___y_3076_);
lean_ctor_set(v___x_3092_, 1, v___x_3091_);
v___x_3093_ = l_Lean_mkConst(v___x_3090_, v___x_3092_);
lean_inc_ref_n(v_target_3071_, 2);
lean_inc_ref(v_focusHyp_3077_);
lean_inc_ref_n(v_restHyps_3078_, 2);
lean_inc_ref_n(v_cl_3069_, 2);
lean_inc_ref_n(v_l_3068_, 2);
v___x_3094_ = lean_alloc_closure((void*)(l_Lean_mkApp8), 9, 8);
lean_closure_set(v___x_3094_, 0, v___x_3093_);
lean_closure_set(v___x_3094_, 1, v_l_3068_);
lean_closure_set(v___x_3094_, 2, v_cl_3069_);
lean_closure_set(v___x_3094_, 3, v_hyps_3070_);
lean_closure_set(v___x_3094_, 4, v_restHyps_3078_);
lean_closure_set(v___x_3094_, 5, v_focusHyp_3077_);
lean_closure_set(v___x_3094_, 6, v_target_3071_);
lean_closure_set(v___x_3094_, 7, v_proof_3079_);
v___x_3095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3095_, 0, v_focusHyp_3077_);
lean_ctor_set(v___x_3095_, 1, v___x_3094_);
v_sz_3096_ = lean_array_size(v_args_3055_);
v___x_3097_ = ((size_t)0ULL);
lean_inc(v_u_3067_);
v___x_3098_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize_spec__0(v___y_3076_, v_l_3068_, v_cl_3069_, v_restHyps_3078_, v_u_3067_, v_target_3071_, v_args_3055_, v_sz_3096_, v___x_3097_, v___x_3095_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_, v___y_3061_, v___y_3062_, v___y_3063_, v___y_3064_);
if (lean_obj_tag(v___x_3098_) == 0)
{
lean_object* v_a_3099_; lean_object* v_fst_3100_; lean_object* v_snd_3101_; lean_object* v___x_3103_; uint8_t v_isShared_3104_; uint8_t v_isSharedCheck_3128_; 
v_a_3099_ = lean_ctor_get(v___x_3098_, 0);
lean_inc(v_a_3099_);
lean_dec_ref_known(v___x_3098_, 1);
v_fst_3100_ = lean_ctor_get(v_a_3099_, 0);
v_snd_3101_ = lean_ctor_get(v_a_3099_, 1);
v_isSharedCheck_3128_ = !lean_is_exclusive(v_a_3099_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3103_ = v_a_3099_;
v_isShared_3104_ = v_isSharedCheck_3128_;
goto v_resetjp_3102_;
}
else
{
lean_inc(v_snd_3101_);
lean_inc(v_fst_3100_);
lean_dec(v_a_3099_);
v___x_3103_ = lean_box(0);
v_isShared_3104_ = v_isSharedCheck_3128_;
goto v_resetjp_3102_;
}
v_resetjp_3102_:
{
lean_object* v___x_3105_; lean_object* v___x_3107_; 
lean_inc_ref(v_cl_3069_);
lean_inc_ref(v_l_3068_);
v___x_3105_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkAnd_x21(v___y_3076_, v_l_3068_, v_cl_3069_, v_restHyps_3078_, v_fst_3100_);
if (v_isShared_3074_ == 0)
{
lean_ctor_set(v___x_3073_, 3, v___x_3105_);
v___x_3107_ = v___x_3073_;
goto v_reusejp_3106_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v_u_3067_);
lean_ctor_set(v_reuseFailAlloc_3127_, 1, v_l_3068_);
lean_ctor_set(v_reuseFailAlloc_3127_, 2, v_cl_3069_);
lean_ctor_set(v_reuseFailAlloc_3127_, 3, v___x_3105_);
lean_ctor_set(v_reuseFailAlloc_3127_, 4, v_target_3071_);
v___x_3107_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3106_;
}
v_reusejp_3106_:
{
lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; 
v___x_3108_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_toExpr(v___x_3107_);
v___x_3109_ = lean_box(0);
v___x_3110_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_3108_, v___x_3109_, v___y_3061_, v___y_3062_, v___y_3063_, v___y_3064_);
if (lean_obj_tag(v___x_3110_) == 0)
{
lean_object* v_a_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3116_; 
v_a_3111_ = lean_ctor_get(v___x_3110_, 0);
lean_inc_n(v_a_3111_, 2);
lean_dec_ref_known(v___x_3110_, 1);
v___x_3112_ = lean_apply_1(v_snd_3101_, v_a_3111_);
v___x_3113_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2___redArg(v_fst_3056_, v___x_3112_, v___y_3062_);
lean_dec_ref(v___x_3113_);
v___x_3114_ = l_Lean_Expr_mvarId_x21(v_a_3111_);
lean_dec(v_a_3111_);
if (v_isShared_3104_ == 0)
{
lean_ctor_set_tag(v___x_3103_, 1);
lean_ctor_set(v___x_3103_, 1, v___x_3091_);
lean_ctor_set(v___x_3103_, 0, v___x_3114_);
v___x_3116_ = v___x_3103_;
goto v_reusejp_3115_;
}
else
{
lean_object* v_reuseFailAlloc_3118_; 
v_reuseFailAlloc_3118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3118_, 0, v___x_3114_);
lean_ctor_set(v_reuseFailAlloc_3118_, 1, v___x_3091_);
v___x_3116_ = v_reuseFailAlloc_3118_;
goto v_reusejp_3115_;
}
v_reusejp_3115_:
{
lean_object* v___x_3117_; 
v___x_3117_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_3116_, v___y_3058_, v___y_3061_, v___y_3062_, v___y_3063_, v___y_3064_);
return v___x_3117_;
}
}
else
{
lean_object* v_a_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3126_; 
lean_del_object(v___x_3103_);
lean_dec(v_snd_3101_);
lean_dec(v_fst_3056_);
v_a_3119_ = lean_ctor_get(v___x_3110_, 0);
v_isSharedCheck_3126_ = !lean_is_exclusive(v___x_3110_);
if (v_isSharedCheck_3126_ == 0)
{
v___x_3121_ = v___x_3110_;
v_isShared_3122_ = v_isSharedCheck_3126_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_a_3119_);
lean_dec(v___x_3110_);
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
}
}
else
{
lean_object* v_a_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3136_; 
lean_dec_ref(v_restHyps_3078_);
lean_dec(v___y_3076_);
lean_del_object(v___x_3073_);
lean_dec_ref(v_target_3071_);
lean_dec_ref(v_cl_3069_);
lean_dec_ref(v_l_3068_);
lean_dec(v_u_3067_);
lean_dec(v_fst_3056_);
v_a_3129_ = lean_ctor_get(v___x_3098_, 0);
v_isSharedCheck_3136_ = !lean_is_exclusive(v___x_3098_);
if (v_isSharedCheck_3136_ == 0)
{
v___x_3131_ = v___x_3098_;
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_a_3129_);
lean_dec(v___x_3098_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
v_resetjp_3130_:
{
lean_object* v___x_3134_; 
if (v_isShared_3132_ == 0)
{
v___x_3134_ = v___x_3131_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v_a_3129_);
v___x_3134_ = v_reuseFailAlloc_3135_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
return v___x_3134_;
}
}
}
}
else
{
lean_dec_ref(v_proof_3079_);
lean_dec_ref(v_restHyps_3078_);
lean_dec_ref(v_focusHyp_3077_);
lean_dec(v___y_3076_);
lean_del_object(v___x_3073_);
lean_dec_ref(v_target_3071_);
lean_dec_ref(v_hyps_3070_);
lean_dec_ref(v_cl_3069_);
lean_dec_ref(v_l_3068_);
lean_dec(v_u_3067_);
lean_dec(v_fst_3056_);
lean_dec_ref(v___x_3054_);
return v___x_3083_;
}
}
else
{
lean_object* v___x_3137_; lean_object* v___x_3138_; 
lean_dec(v___x_3080_);
lean_dec_ref(v_proof_3079_);
lean_dec_ref(v_restHyps_3078_);
lean_dec_ref(v_focusHyp_3077_);
lean_dec(v___y_3076_);
lean_del_object(v___x_3073_);
lean_dec_ref(v_target_3071_);
lean_dec_ref(v_hyps_3070_);
lean_dec_ref(v_cl_3069_);
lean_dec_ref(v_l_3068_);
lean_dec(v_u_3067_);
lean_dec(v_fst_3056_);
lean_dec_ref(v___x_3054_);
lean_dec(v_hyp_3053_);
v___x_3137_ = lean_obj_once(&l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize___lam__0___closed__1, &l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize___lam__0___closed__1);
v___x_3138_ = l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__3(v___x_3137_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_, v___y_3061_, v___y_3062_, v___y_3063_, v___y_3064_);
return v___x_3138_;
}
}
}
}
else
{
lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; 
lean_dec(v_fst_3056_);
lean_dec_ref(v___x_3054_);
lean_dec_ref(v_snd_3052_);
lean_dec(v___x_3051_);
v___x_3142_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__5);
v___x_3143_ = l_Lean_MessageData_ofSyntax(v_hyp_3053_);
v___x_3144_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3144_, 0, v___x_3142_);
lean_ctor_set(v___x_3144_, 1, v___x_3143_);
v___x_3145_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___lam__0___closed__7);
v___x_3146_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3146_, 0, v___x_3144_);
lean_ctor_set(v___x_3146_, 1, v___x_3145_);
v___x_3147_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0___redArg(v___x_3146_, v___y_3061_, v___y_3062_, v___y_3063_, v___y_3064_);
return v___x_3147_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize___lam__0___boxed(lean_object* v___x_3148_, lean_object* v_snd_3149_, lean_object* v_hyp_3150_, lean_object* v___x_3151_, lean_object* v_args_3152_, lean_object* v_fst_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_){
_start:
{
lean_object* v_res_3163_; 
v_res_3163_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize___lam__0(v___x_3148_, v_snd_3149_, v_hyp_3150_, v___x_3151_, v_args_3152_, v_fst_3153_, v___y_3154_, v___y_3155_, v___y_3156_, v___y_3157_, v___y_3158_, v___y_3159_, v___y_3160_, v___y_3161_);
lean_dec(v___y_3161_);
lean_dec_ref(v___y_3160_);
lean_dec(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec(v___y_3157_);
lean_dec_ref(v___y_3156_);
lean_dec(v___y_3155_);
lean_dec_ref(v___y_3154_);
lean_dec_ref(v_args_3152_);
return v_res_3163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize(lean_object* v_x_3164_, lean_object* v_a_3165_, lean_object* v_a_3166_, lean_object* v_a_3167_, lean_object* v_a_3168_, lean_object* v_a_3169_, lean_object* v_a_3170_, lean_object* v_a_3171_, lean_object* v_a_3172_){
_start:
{
lean_object* v___x_3174_; lean_object* v___x_3175_; uint8_t v___x_3176_; 
v___x_3174_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_3175_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___closed__2));
lean_inc(v_x_3164_);
v___x_3176_ = l_Lean_Syntax_isOfKind(v_x_3164_, v___x_3175_);
if (v___x_3176_ == 0)
{
lean_object* v___x_3177_; 
lean_dec(v_x_3164_);
v___x_3177_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0___redArg();
return v___x_3177_;
}
else
{
lean_object* v___x_3178_; 
v___x_3178_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMainGoal___redArg(v_a_3166_, v_a_3169_, v_a_3170_, v_a_3171_, v_a_3172_);
if (lean_obj_tag(v___x_3178_) == 0)
{
lean_object* v_a_3179_; lean_object* v_fst_3180_; lean_object* v_snd_3181_; lean_object* v___x_3182_; lean_object* v_hyp_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v_args_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___y_3189_; lean_object* v___x_3190_; 
v_a_3179_ = lean_ctor_get(v___x_3178_, 0);
lean_inc(v_a_3179_);
lean_dec_ref_known(v___x_3178_, 1);
v_fst_3180_ = lean_ctor_get(v_a_3179_, 0);
lean_inc_n(v_fst_3180_, 2);
v_snd_3181_ = lean_ctor_get(v_a_3179_, 1);
lean_inc_n(v_snd_3181_, 2);
lean_dec(v_a_3179_);
v___x_3182_ = lean_unsigned_to_nat(1u);
v_hyp_3183_ = l_Lean_Syntax_getArg(v_x_3164_, v___x_3182_);
v___x_3184_ = lean_unsigned_to_nat(2u);
v___x_3185_ = l_Lean_Syntax_getArg(v_x_3164_, v___x_3184_);
lean_dec(v_x_3164_);
v_args_3186_ = l_Lean_Syntax_getArgs(v___x_3185_);
lean_dec(v___x_3185_);
v___x_3187_ = l_Lean_TSyntax_getId(v_hyp_3183_);
v___x_3188_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_focusHyp(v_snd_3181_, v___x_3187_);
lean_dec(v___x_3187_);
v___y_3189_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize___lam__0___boxed), 15, 6);
lean_closure_set(v___y_3189_, 0, v___x_3188_);
lean_closure_set(v___y_3189_, 1, v_snd_3181_);
lean_closure_set(v___y_3189_, 2, v_hyp_3183_);
lean_closure_set(v___y_3189_, 3, v___x_3174_);
lean_closure_set(v___y_3189_, 4, v_args_3186_);
lean_closure_set(v___y_3189_, 5, v_fst_3180_);
v___x_3190_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__4___redArg(v_fst_3180_, v___y_3189_, v_a_3165_, v_a_3166_, v_a_3167_, v_a_3168_, v_a_3169_, v_a_3170_, v_a_3171_, v_a_3172_);
return v___x_3190_;
}
else
{
lean_object* v_a_3191_; lean_object* v___x_3193_; uint8_t v_isShared_3194_; uint8_t v_isSharedCheck_3198_; 
lean_dec(v_x_3164_);
v_a_3191_ = lean_ctor_get(v___x_3178_, 0);
v_isSharedCheck_3198_ = !lean_is_exclusive(v___x_3178_);
if (v_isSharedCheck_3198_ == 0)
{
v___x_3193_ = v___x_3178_;
v_isShared_3194_ = v_isSharedCheck_3198_;
goto v_resetjp_3192_;
}
else
{
lean_inc(v_a_3191_);
lean_dec(v___x_3178_);
v___x_3193_ = lean_box(0);
v_isShared_3194_ = v_isSharedCheck_3198_;
goto v_resetjp_3192_;
}
v_resetjp_3192_:
{
lean_object* v___x_3196_; 
if (v_isShared_3194_ == 0)
{
v___x_3196_ = v___x_3193_;
goto v_reusejp_3195_;
}
else
{
lean_object* v_reuseFailAlloc_3197_; 
v_reuseFailAlloc_3197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3197_, 0, v_a_3191_);
v___x_3196_ = v_reuseFailAlloc_3197_;
goto v_reusejp_3195_;
}
v_reusejp_3195_:
{
return v___x_3196_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize___boxed(lean_object* v_x_3199_, lean_object* v_a_3200_, lean_object* v_a_3201_, lean_object* v_a_3202_, lean_object* v_a_3203_, lean_object* v_a_3204_, lean_object* v_a_3205_, lean_object* v_a_3206_, lean_object* v_a_3207_, lean_object* v_a_3208_){
_start:
{
lean_object* v_res_3209_; 
v_res_3209_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize(v_x_3199_, v_a_3200_, v_a_3201_, v_a_3202_, v_a_3203_, v_a_3204_, v_a_3205_, v_a_3206_, v_a_3207_);
lean_dec(v_a_3207_);
lean_dec_ref(v_a_3206_);
lean_dec(v_a_3205_);
lean_dec_ref(v_a_3204_);
lean_dec(v_a_3203_);
lean_dec_ref(v_a_3202_);
lean_dec(v_a_3201_);
lean_dec_ref(v_a_3200_);
return v_res_3209_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure_spec__0(lean_object* v___y_3210_, lean_object* v___x_3211_, lean_object* v___x_3212_, lean_object* v___x_3213_, lean_object* v___x_3214_, lean_object* v___x_3215_, lean_object* v_as_3216_, size_t v_sz_3217_, size_t v_i_3218_, lean_object* v_b_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_){
_start:
{
lean_object* v_a_3230_; uint8_t v___x_3234_; 
v___x_3234_ = lean_usize_dec_lt(v_i_3218_, v_sz_3217_);
if (v___x_3234_ == 0)
{
lean_object* v___x_3235_; 
lean_dec_ref(v___x_3215_);
lean_dec(v___x_3214_);
lean_dec_ref(v___x_3213_);
lean_dec_ref(v___x_3212_);
lean_dec_ref(v___x_3211_);
lean_dec(v___y_3210_);
v___x_3235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3235_, 0, v_b_3219_);
return v___x_3235_;
}
else
{
lean_object* v_fst_3236_; lean_object* v_snd_3237_; lean_object* v___x_3239_; uint8_t v_isShared_3240_; uint8_t v_isSharedCheck_3293_; 
v_fst_3236_ = lean_ctor_get(v_b_3219_, 0);
v_snd_3237_ = lean_ctor_get(v_b_3219_, 1);
v_isSharedCheck_3293_ = !lean_is_exclusive(v_b_3219_);
if (v_isSharedCheck_3293_ == 0)
{
v___x_3239_ = v_b_3219_;
v_isShared_3240_ = v_isSharedCheck_3293_;
goto v_resetjp_3238_;
}
else
{
lean_inc(v_snd_3237_);
lean_inc(v_fst_3236_);
lean_dec(v_b_3219_);
v___x_3239_ = lean_box(0);
v_isShared_3240_ = v_isSharedCheck_3293_;
goto v_resetjp_3238_;
}
v_resetjp_3238_:
{
lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v_a_3243_; lean_object* v___y_3245_; lean_object* v___x_3288_; 
v___x_3241_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_3242_ = lean_box(0);
v_a_3243_ = lean_array_uget_borrowed(v_as_3216_, v_i_3218_);
lean_inc(v_a_3243_);
lean_inc(v_fst_3236_);
lean_inc_ref(v___x_3213_);
lean_inc_ref(v___x_3212_);
lean_inc_ref(v___x_3211_);
lean_inc(v___y_3210_);
v___x_3288_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg(v___y_3210_, v___x_3211_, v___x_3212_, v___x_3213_, v_fst_3236_, v_a_3243_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_);
if (lean_obj_tag(v___x_3288_) == 0)
{
lean_object* v_a_3289_; 
v_a_3289_ = lean_ctor_get(v___x_3288_, 0);
lean_inc(v_a_3289_);
if (lean_obj_tag(v_a_3289_) == 0)
{
lean_object* v___x_3290_; 
lean_dec_ref_known(v___x_3288_, 1);
lean_inc(v_a_3243_);
lean_inc(v_fst_3236_);
lean_inc_ref(v___x_3213_);
lean_inc_ref(v___x_3212_);
lean_inc_ref(v___x_3211_);
lean_inc(v___y_3210_);
v___x_3290_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure(v___y_3210_, v___x_3211_, v___x_3212_, v___x_3213_, v_fst_3236_, v_a_3243_, v___y_3220_, v___y_3221_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_);
if (lean_obj_tag(v___x_3290_) == 0)
{
lean_object* v_a_3291_; 
v_a_3291_ = lean_ctor_get(v___x_3290_, 0);
lean_inc(v_a_3291_);
if (lean_obj_tag(v_a_3291_) == 0)
{
lean_object* v___x_3292_; 
lean_dec_ref_known(v___x_3290_, 1);
lean_inc(v_a_3243_);
lean_inc(v_fst_3236_);
lean_inc_ref(v___x_3213_);
lean_inc_ref(v___x_3212_);
lean_inc_ref(v___x_3211_);
lean_inc(v___y_3210_);
v___x_3292_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeForall(v___y_3210_, v___x_3211_, v___x_3212_, v___x_3213_, v_fst_3236_, v_a_3243_, v___y_3220_, v___y_3221_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_);
v___y_3245_ = v___x_3292_;
goto v___jp_3244_;
}
else
{
lean_dec_ref_known(v_a_3291_, 1);
v___y_3245_ = v___x_3290_;
goto v___jp_3244_;
}
}
else
{
v___y_3245_ = v___x_3290_;
goto v___jp_3244_;
}
}
else
{
lean_dec_ref_known(v_a_3289_, 1);
v___y_3245_ = v___x_3288_;
goto v___jp_3244_;
}
}
else
{
v___y_3245_ = v___x_3288_;
goto v___jp_3244_;
}
v___jp_3244_:
{
if (lean_obj_tag(v___y_3245_) == 0)
{
lean_object* v_a_3246_; 
v_a_3246_ = lean_ctor_get(v___y_3245_, 0);
lean_inc(v_a_3246_);
lean_dec_ref_known(v___y_3245_, 1);
if (lean_obj_tag(v_a_3246_) == 0)
{
lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; 
v___x_3247_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__1___closed__1);
lean_inc(v_fst_3236_);
v___x_3248_ = l_Lean_MessageData_ofExpr(v_fst_3236_);
v___x_3249_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3249_, 0, v___x_3247_);
lean_ctor_set(v___x_3249_, 1, v___x_3248_);
v___x_3250_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__8);
v___x_3251_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3251_, 0, v___x_3249_);
lean_ctor_set(v___x_3251_, 1, v___x_3250_);
lean_inc(v_a_3243_);
v___x_3252_ = l_Lean_MessageData_ofSyntax(v_a_3243_);
v___x_3253_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3253_, 0, v___x_3251_);
lean_ctor_set(v___x_3253_, 1, v___x_3252_);
v___x_3254_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful_spec__0___redArg(v___x_3253_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_);
if (lean_obj_tag(v___x_3254_) == 0)
{
lean_object* v___x_3256_; 
lean_dec_ref_known(v___x_3254_, 1);
if (v_isShared_3240_ == 0)
{
v___x_3256_ = v___x_3239_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3257_; 
v_reuseFailAlloc_3257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3257_, 0, v_fst_3236_);
lean_ctor_set(v_reuseFailAlloc_3257_, 1, v_snd_3237_);
v___x_3256_ = v_reuseFailAlloc_3257_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
v_a_3230_ = v___x_3256_;
goto v___jp_3229_;
}
}
else
{
lean_object* v_a_3258_; lean_object* v___x_3260_; uint8_t v_isShared_3261_; uint8_t v_isSharedCheck_3265_; 
lean_del_object(v___x_3239_);
lean_dec(v_snd_3237_);
lean_dec(v_fst_3236_);
lean_dec_ref(v___x_3215_);
lean_dec(v___x_3214_);
lean_dec_ref(v___x_3213_);
lean_dec_ref(v___x_3212_);
lean_dec_ref(v___x_3211_);
lean_dec(v___y_3210_);
v_a_3258_ = lean_ctor_get(v___x_3254_, 0);
v_isSharedCheck_3265_ = !lean_is_exclusive(v___x_3254_);
if (v_isSharedCheck_3265_ == 0)
{
v___x_3260_ = v___x_3254_;
v_isShared_3261_ = v_isSharedCheck_3265_;
goto v_resetjp_3259_;
}
else
{
lean_inc(v_a_3258_);
lean_dec(v___x_3254_);
v___x_3260_ = lean_box(0);
v_isShared_3261_ = v_isSharedCheck_3265_;
goto v_resetjp_3259_;
}
v_resetjp_3259_:
{
lean_object* v___x_3263_; 
if (v_isShared_3261_ == 0)
{
v___x_3263_ = v___x_3260_;
goto v_reusejp_3262_;
}
else
{
lean_object* v_reuseFailAlloc_3264_; 
v_reuseFailAlloc_3264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3264_, 0, v_a_3258_);
v___x_3263_ = v_reuseFailAlloc_3264_;
goto v_reusejp_3262_;
}
v_reusejp_3262_:
{
return v___x_3263_;
}
}
}
}
else
{
lean_object* v_val_3266_; lean_object* v_fst_3267_; lean_object* v_snd_3268_; lean_object* v___x_3270_; uint8_t v_isShared_3271_; uint8_t v_isSharedCheck_3279_; 
lean_del_object(v___x_3239_);
v_val_3266_ = lean_ctor_get(v_a_3246_, 0);
lean_inc(v_val_3266_);
lean_dec_ref_known(v_a_3246_, 1);
v_fst_3267_ = lean_ctor_get(v_val_3266_, 0);
v_snd_3268_ = lean_ctor_get(v_val_3266_, 1);
v_isSharedCheck_3279_ = !lean_is_exclusive(v_val_3266_);
if (v_isSharedCheck_3279_ == 0)
{
v___x_3270_ = v_val_3266_;
v_isShared_3271_ = v_isSharedCheck_3279_;
goto v_resetjp_3269_;
}
else
{
lean_inc(v_snd_3268_);
lean_inc(v_fst_3267_);
lean_dec(v_val_3266_);
v___x_3270_ = lean_box(0);
v_isShared_3271_ = v_isSharedCheck_3279_;
goto v_resetjp_3269_;
}
v_resetjp_3269_:
{
lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___f_3275_; lean_object* v___x_3277_; 
lean_inc_ref_n(v___x_3213_, 2);
lean_inc_ref_n(v___x_3212_, 3);
lean_inc_ref_n(v___x_3211_, 4);
lean_inc_n(v___y_3210_, 3);
v___x_3272_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkAnd_x21(v___y_3210_, v___x_3211_, v___x_3212_, v___x_3213_, v_fst_3236_);
lean_inc(v_fst_3267_);
v___x_3273_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkAnd_x21(v___y_3210_, v___x_3211_, v___x_3212_, v___x_3213_, v_fst_3267_);
v___x_3274_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder(v___y_3210_, v___x_3211_, v___x_3212_);
lean_inc_ref(v___x_3215_);
lean_inc(v___x_3214_);
v___f_3275_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize_spec__0___lam__0), 11, 10);
lean_closure_set(v___f_3275_, 0, v___x_3241_);
lean_closure_set(v___f_3275_, 1, v___x_3214_);
lean_closure_set(v___f_3275_, 2, v___x_3242_);
lean_closure_set(v___f_3275_, 3, v___x_3211_);
lean_closure_set(v___f_3275_, 4, v___x_3274_);
lean_closure_set(v___f_3275_, 5, v___x_3272_);
lean_closure_set(v___f_3275_, 6, v___x_3273_);
lean_closure_set(v___f_3275_, 7, v___x_3215_);
lean_closure_set(v___f_3275_, 8, v_snd_3268_);
lean_closure_set(v___f_3275_, 9, v_snd_3237_);
if (v_isShared_3271_ == 0)
{
lean_ctor_set(v___x_3270_, 1, v___f_3275_);
v___x_3277_ = v___x_3270_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3278_; 
v_reuseFailAlloc_3278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3278_, 0, v_fst_3267_);
lean_ctor_set(v_reuseFailAlloc_3278_, 1, v___f_3275_);
v___x_3277_ = v_reuseFailAlloc_3278_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
v_a_3230_ = v___x_3277_;
goto v___jp_3229_;
}
}
}
}
else
{
lean_object* v_a_3280_; lean_object* v___x_3282_; uint8_t v_isShared_3283_; uint8_t v_isSharedCheck_3287_; 
lean_del_object(v___x_3239_);
lean_dec(v_snd_3237_);
lean_dec(v_fst_3236_);
lean_dec_ref(v___x_3215_);
lean_dec(v___x_3214_);
lean_dec_ref(v___x_3213_);
lean_dec_ref(v___x_3212_);
lean_dec_ref(v___x_3211_);
lean_dec(v___y_3210_);
v_a_3280_ = lean_ctor_get(v___y_3245_, 0);
v_isSharedCheck_3287_ = !lean_is_exclusive(v___y_3245_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3282_ = v___y_3245_;
v_isShared_3283_ = v_isSharedCheck_3287_;
goto v_resetjp_3281_;
}
else
{
lean_inc(v_a_3280_);
lean_dec(v___y_3245_);
v___x_3282_ = lean_box(0);
v_isShared_3283_ = v_isSharedCheck_3287_;
goto v_resetjp_3281_;
}
v_resetjp_3281_:
{
lean_object* v___x_3285_; 
if (v_isShared_3283_ == 0)
{
v___x_3285_ = v___x_3282_;
goto v_reusejp_3284_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v_a_3280_);
v___x_3285_ = v_reuseFailAlloc_3286_;
goto v_reusejp_3284_;
}
v_reusejp_3284_:
{
return v___x_3285_;
}
}
}
}
}
}
v___jp_3229_:
{
size_t v___x_3231_; size_t v___x_3232_; 
v___x_3231_ = ((size_t)1ULL);
v___x_3232_ = lean_usize_add(v_i_3218_, v___x_3231_);
v_i_3218_ = v___x_3232_;
v_b_3219_ = v_a_3230_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure_spec__0___boxed(lean_object** _args){
lean_object* v___y_3294_ = _args[0];
lean_object* v___x_3295_ = _args[1];
lean_object* v___x_3296_ = _args[2];
lean_object* v___x_3297_ = _args[3];
lean_object* v___x_3298_ = _args[4];
lean_object* v___x_3299_ = _args[5];
lean_object* v_as_3300_ = _args[6];
lean_object* v_sz_3301_ = _args[7];
lean_object* v_i_3302_ = _args[8];
lean_object* v_b_3303_ = _args[9];
lean_object* v___y_3304_ = _args[10];
lean_object* v___y_3305_ = _args[11];
lean_object* v___y_3306_ = _args[12];
lean_object* v___y_3307_ = _args[13];
lean_object* v___y_3308_ = _args[14];
lean_object* v___y_3309_ = _args[15];
lean_object* v___y_3310_ = _args[16];
lean_object* v___y_3311_ = _args[17];
lean_object* v___y_3312_ = _args[18];
_start:
{
size_t v_sz_boxed_3313_; size_t v_i_boxed_3314_; lean_object* v_res_3315_; 
v_sz_boxed_3313_ = lean_unbox_usize(v_sz_3301_);
lean_dec(v_sz_3301_);
v_i_boxed_3314_ = lean_unbox_usize(v_i_3302_);
lean_dec(v_i_3302_);
v_res_3315_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure_spec__0(v___y_3294_, v___x_3295_, v___x_3296_, v___x_3297_, v___x_3298_, v___x_3299_, v_as_3300_, v_sz_boxed_3313_, v_i_boxed_3314_, v_b_3303_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_, v___y_3308_, v___y_3309_, v___y_3310_, v___y_3311_);
lean_dec(v___y_3311_);
lean_dec_ref(v___y_3310_);
lean_dec(v___y_3309_);
lean_dec_ref(v___y_3308_);
lean_dec(v___y_3307_);
lean_dec_ref(v___y_3306_);
lean_dec(v___y_3305_);
lean_dec_ref(v___y_3304_);
lean_dec_ref(v_as_3300_);
return v_res_3315_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; 
v___x_3317_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__3));
v___x_3318_ = lean_unsigned_to_nat(33u);
v___x_3319_ = lean_unsigned_to_nat(348u);
v___x_3320_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure___lam__0___closed__0));
v___x_3321_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpPure___closed__15));
v___x_3322_ = l_mkPanicMessageWithDecl(v___x_3321_, v___x_3320_, v___x_3319_, v___x_3318_, v___x_3317_);
return v___x_3322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure___lam__0(lean_object* v___x_3323_, lean_object* v___x_3324_, uint8_t v___x_3325_, lean_object* v_l_3326_, lean_object* v___x_3327_, lean_object* v___y_3328_, lean_object* v_cl_3329_, lean_object* v_hyp_3330_, lean_object* v_hyps_3331_, lean_object* v_target_3332_, lean_object* v_args_3333_, lean_object* v_u_3334_, lean_object* v_fst_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_){
_start:
{
lean_object* v___x_3345_; 
v___x_3345_ = l_Lean_Elab_Tactic_elabTerm(v___x_3323_, v___x_3324_, v___x_3325_, v___y_3336_, v___y_3337_, v___y_3338_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_);
if (lean_obj_tag(v___x_3345_) == 0)
{
lean_object* v_a_3346_; lean_object* v___x_3347_; 
v_a_3346_ = lean_ctor_get(v___x_3345_, 0);
lean_inc_n(v_a_3346_, 2);
lean_dec_ref_known(v___x_3345_, 1);
lean_inc(v___y_3343_);
lean_inc_ref(v___y_3342_);
lean_inc(v___y_3341_);
lean_inc_ref(v___y_3340_);
v___x_3347_ = lean_infer_type(v_a_3346_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_);
if (lean_obj_tag(v___x_3347_) == 0)
{
lean_object* v_a_3348_; lean_object* v___x_3349_; uint8_t v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; 
v_a_3348_ = lean_ctor_get(v___x_3347_, 0);
lean_inc(v_a_3348_);
lean_dec_ref_known(v___x_3347_, 1);
lean_inc_ref(v_l_3326_);
v___x_3349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3349_, 0, v_l_3326_);
v___x_3350_ = 0;
v___x_3351_ = lean_box(0);
v___x_3352_ = l_Lean_Meta_mkFreshExprMVar(v___x_3349_, v___x_3350_, v___x_3351_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_);
if (lean_obj_tag(v___x_3352_) == 0)
{
lean_object* v_a_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; 
v_a_3353_ = lean_ctor_get(v___x_3352_, 0);
lean_inc_n(v_a_3353_, 2);
lean_dec_ref_known(v___x_3352_, 1);
v___x_3354_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mSpecializeImpStateful___closed__0));
v___x_3355_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpStateful___redArg___closed__3));
v___x_3356_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_3357_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Internal_Do_ProofMode_toPartialOrder___closed__1));
v___x_3358_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mSpecializeImpPure___closed__1));
lean_inc_ref(v___x_3327_);
v___x_3359_ = l_Lean_Name_mkStr6(v___x_3354_, v___x_3355_, v___x_3356_, v___x_3357_, v___x_3327_, v___x_3358_);
v___x_3360_ = lean_box(0);
lean_inc(v___y_3328_);
v___x_3361_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3361_, 0, v___y_3328_);
lean_ctor_set(v___x_3361_, 1, v___x_3360_);
lean_inc_ref(v___x_3361_);
v___x_3362_ = l_Lean_mkConst(v___x_3359_, v___x_3361_);
lean_inc_ref(v_cl_3329_);
lean_inc_ref(v_l_3326_);
lean_inc(v_a_3348_);
v___x_3363_ = l_Lean_mkApp4(v___x_3362_, v_a_3348_, v_l_3326_, v_cl_3329_, v_a_3353_);
v___x_3364_ = lean_box(0);
v___x_3365_ = l_Lean_Meta_synthInstance(v___x_3363_, v___x_3364_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_);
if (lean_obj_tag(v___x_3365_) == 0)
{
lean_object* v_a_3366_; lean_object* v___x_3367_; lean_object* v_a_3368_; lean_object* v___x_3369_; lean_object* v_a_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; size_t v_sz_3380_; size_t v___x_3381_; lean_object* v___x_3382_; 
v_a_3366_ = lean_ctor_get(v___x_3365_, 0);
lean_inc(v_a_3366_);
lean_dec_ref_known(v___x_3365_, 1);
v___x_3367_ = l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__0___redArg(v___y_3343_);
v_a_3368_ = lean_ctor_get(v___x_3367_, 0);
lean_inc(v_a_3368_);
lean_dec_ref(v___x_3367_);
v___x_3369_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure_spec__1___redArg(v_a_3353_, v___y_3341_);
v_a_3370_ = lean_ctor_get(v___x_3369_, 0);
lean_inc(v_a_3370_);
lean_dec_ref(v___x_3369_);
v___x_3371_ = l_Lean_TSyntax_getId(v_hyp_3330_);
v___x_3372_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3372_, 0, v___x_3371_);
lean_ctor_set(v___x_3372_, 1, v_a_3368_);
lean_ctor_set(v___x_3372_, 2, v_a_3370_);
v___x_3373_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_Hyp_toExpr(v___x_3372_);
v___x_3374_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_3375_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___lam__0___closed__1));
v___x_3376_ = l_Lean_Name_mkStr7(v___x_3354_, v___x_3355_, v___x_3356_, v___x_3357_, v___x_3327_, v___x_3374_, v___x_3375_);
v___x_3377_ = l_Lean_mkConst(v___x_3376_, v___x_3361_);
lean_inc_ref_n(v_target_3332_, 2);
lean_inc_ref_n(v_hyps_3331_, 2);
lean_inc_ref(v___x_3373_);
lean_inc_ref_n(v_cl_3329_, 2);
lean_inc_ref_n(v_l_3326_, 2);
v___x_3378_ = lean_alloc_closure((void*)(l_Lean_mkApp9), 10, 9);
lean_closure_set(v___x_3378_, 0, v___x_3377_);
lean_closure_set(v___x_3378_, 1, v_l_3326_);
lean_closure_set(v___x_3378_, 2, v_cl_3329_);
lean_closure_set(v___x_3378_, 3, v_a_3348_);
lean_closure_set(v___x_3378_, 4, v___x_3373_);
lean_closure_set(v___x_3378_, 5, v_hyps_3331_);
lean_closure_set(v___x_3378_, 6, v_target_3332_);
lean_closure_set(v___x_3378_, 7, v_a_3366_);
lean_closure_set(v___x_3378_, 8, v_a_3346_);
v___x_3379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3379_, 0, v___x_3373_);
lean_ctor_set(v___x_3379_, 1, v___x_3378_);
v_sz_3380_ = lean_array_size(v_args_3333_);
v___x_3381_ = ((size_t)0ULL);
lean_inc(v_u_3334_);
lean_inc(v___y_3328_);
v___x_3382_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure_spec__0(v___y_3328_, v_l_3326_, v_cl_3329_, v_hyps_3331_, v_u_3334_, v_target_3332_, v_args_3333_, v_sz_3380_, v___x_3381_, v___x_3379_, v___y_3336_, v___y_3337_, v___y_3338_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_);
if (lean_obj_tag(v___x_3382_) == 0)
{
lean_object* v_a_3383_; lean_object* v_fst_3384_; lean_object* v_snd_3385_; lean_object* v___x_3387_; uint8_t v_isShared_3388_; uint8_t v_isSharedCheck_3414_; 
v_a_3383_ = lean_ctor_get(v___x_3382_, 0);
lean_inc(v_a_3383_);
lean_dec_ref_known(v___x_3382_, 1);
v_fst_3384_ = lean_ctor_get(v_a_3383_, 0);
v_snd_3385_ = lean_ctor_get(v_a_3383_, 1);
v_isSharedCheck_3414_ = !lean_is_exclusive(v_a_3383_);
if (v_isSharedCheck_3414_ == 0)
{
v___x_3387_ = v_a_3383_;
v_isShared_3388_ = v_isSharedCheck_3414_;
goto v_resetjp_3386_;
}
else
{
lean_inc(v_snd_3385_);
lean_inc(v_fst_3384_);
lean_dec(v_a_3383_);
v___x_3387_ = lean_box(0);
v_isShared_3388_ = v_isSharedCheck_3414_;
goto v_resetjp_3386_;
}
v_resetjp_3386_:
{
lean_object* v___x_3389_; 
lean_inc(v_fst_3384_);
v___x_3389_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseHyp_x3f(v_fst_3384_);
if (lean_obj_tag(v___x_3389_) == 1)
{
lean_object* v_val_3390_; lean_object* v___x_3391_; 
v_val_3390_ = lean_ctor_get(v___x_3389_, 0);
lean_inc(v_val_3390_);
lean_dec_ref_known(v___x_3389_, 1);
lean_inc_ref(v_cl_3329_);
lean_inc_ref(v_l_3326_);
lean_inc(v_u_3334_);
v___x_3391_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_addHypInfo(v_hyp_3330_, v_u_3334_, v_l_3326_, v_cl_3329_, v_val_3390_, v___x_3325_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_);
if (lean_obj_tag(v___x_3391_) == 0)
{
lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; 
lean_dec_ref_known(v___x_3391_, 1);
lean_inc_ref(v_cl_3329_);
lean_inc_ref(v_l_3326_);
v___x_3392_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkAnd_x21(v___y_3328_, v_l_3326_, v_cl_3329_, v_hyps_3331_, v_fst_3384_);
v___x_3393_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3393_, 0, v_u_3334_);
lean_ctor_set(v___x_3393_, 1, v_l_3326_);
lean_ctor_set(v___x_3393_, 2, v_cl_3329_);
lean_ctor_set(v___x_3393_, 3, v___x_3392_);
lean_ctor_set(v___x_3393_, 4, v_target_3332_);
v___x_3394_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_toExpr(v___x_3393_);
v___x_3395_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_3394_, v___x_3351_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_);
if (lean_obj_tag(v___x_3395_) == 0)
{
lean_object* v_a_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3401_; 
v_a_3396_ = lean_ctor_get(v___x_3395_, 0);
lean_inc_n(v_a_3396_, 2);
lean_dec_ref_known(v___x_3395_, 1);
v___x_3397_ = lean_apply_1(v_snd_3385_, v_a_3396_);
v___x_3398_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__2___redArg(v_fst_3335_, v___x_3397_, v___y_3341_);
lean_dec_ref(v___x_3398_);
v___x_3399_ = l_Lean_Expr_mvarId_x21(v_a_3396_);
lean_dec(v_a_3396_);
if (v_isShared_3388_ == 0)
{
lean_ctor_set_tag(v___x_3387_, 1);
lean_ctor_set(v___x_3387_, 1, v___x_3360_);
lean_ctor_set(v___x_3387_, 0, v___x_3399_);
v___x_3401_ = v___x_3387_;
goto v_reusejp_3400_;
}
else
{
lean_object* v_reuseFailAlloc_3403_; 
v_reuseFailAlloc_3403_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3403_, 0, v___x_3399_);
lean_ctor_set(v_reuseFailAlloc_3403_, 1, v___x_3360_);
v___x_3401_ = v_reuseFailAlloc_3403_;
goto v_reusejp_3400_;
}
v_reusejp_3400_:
{
lean_object* v___x_3402_; 
v___x_3402_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_3401_, v___y_3337_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_);
lean_dec(v___y_3343_);
lean_dec_ref(v___y_3342_);
lean_dec(v___y_3341_);
lean_dec_ref(v___y_3340_);
return v___x_3402_;
}
}
else
{
lean_object* v_a_3404_; lean_object* v___x_3406_; uint8_t v_isShared_3407_; uint8_t v_isSharedCheck_3411_; 
lean_del_object(v___x_3387_);
lean_dec(v_snd_3385_);
lean_dec(v___y_3343_);
lean_dec_ref(v___y_3342_);
lean_dec(v___y_3341_);
lean_dec_ref(v___y_3340_);
lean_dec(v_fst_3335_);
v_a_3404_ = lean_ctor_get(v___x_3395_, 0);
v_isSharedCheck_3411_ = !lean_is_exclusive(v___x_3395_);
if (v_isSharedCheck_3411_ == 0)
{
v___x_3406_ = v___x_3395_;
v_isShared_3407_ = v_isSharedCheck_3411_;
goto v_resetjp_3405_;
}
else
{
lean_inc(v_a_3404_);
lean_dec(v___x_3395_);
v___x_3406_ = lean_box(0);
v_isShared_3407_ = v_isSharedCheck_3411_;
goto v_resetjp_3405_;
}
v_resetjp_3405_:
{
lean_object* v___x_3409_; 
if (v_isShared_3407_ == 0)
{
v___x_3409_ = v___x_3406_;
goto v_reusejp_3408_;
}
else
{
lean_object* v_reuseFailAlloc_3410_; 
v_reuseFailAlloc_3410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3410_, 0, v_a_3404_);
v___x_3409_ = v_reuseFailAlloc_3410_;
goto v_reusejp_3408_;
}
v_reusejp_3408_:
{
return v___x_3409_;
}
}
}
}
else
{
lean_del_object(v___x_3387_);
lean_dec(v_snd_3385_);
lean_dec(v_fst_3384_);
lean_dec(v___y_3343_);
lean_dec_ref(v___y_3342_);
lean_dec(v___y_3341_);
lean_dec_ref(v___y_3340_);
lean_dec(v_fst_3335_);
lean_dec(v_u_3334_);
lean_dec_ref(v_target_3332_);
lean_dec_ref(v_hyps_3331_);
lean_dec_ref(v_cl_3329_);
lean_dec(v___y_3328_);
lean_dec_ref(v_l_3326_);
return v___x_3391_;
}
}
else
{
lean_object* v___x_3412_; lean_object* v___x_3413_; 
lean_dec(v___x_3389_);
lean_del_object(v___x_3387_);
lean_dec(v_snd_3385_);
lean_dec(v_fst_3384_);
lean_dec(v_fst_3335_);
lean_dec(v_u_3334_);
lean_dec_ref(v_target_3332_);
lean_dec_ref(v_hyps_3331_);
lean_dec(v_hyp_3330_);
lean_dec_ref(v_cl_3329_);
lean_dec(v___y_3328_);
lean_dec_ref(v_l_3326_);
v___x_3412_ = lean_obj_once(&l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure___lam__0___closed__1, &l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure___lam__0___closed__1);
v___x_3413_ = l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__3(v___x_3412_, v___y_3336_, v___y_3337_, v___y_3338_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_);
lean_dec(v___y_3343_);
lean_dec_ref(v___y_3342_);
lean_dec(v___y_3341_);
lean_dec_ref(v___y_3340_);
return v___x_3413_;
}
}
}
else
{
lean_object* v_a_3415_; lean_object* v___x_3417_; uint8_t v_isShared_3418_; uint8_t v_isSharedCheck_3422_; 
lean_dec(v___y_3343_);
lean_dec_ref(v___y_3342_);
lean_dec(v___y_3341_);
lean_dec_ref(v___y_3340_);
lean_dec(v_fst_3335_);
lean_dec(v_u_3334_);
lean_dec_ref(v_target_3332_);
lean_dec_ref(v_hyps_3331_);
lean_dec(v_hyp_3330_);
lean_dec_ref(v_cl_3329_);
lean_dec(v___y_3328_);
lean_dec_ref(v_l_3326_);
v_a_3415_ = lean_ctor_get(v___x_3382_, 0);
v_isSharedCheck_3422_ = !lean_is_exclusive(v___x_3382_);
if (v_isSharedCheck_3422_ == 0)
{
v___x_3417_ = v___x_3382_;
v_isShared_3418_ = v_isSharedCheck_3422_;
goto v_resetjp_3416_;
}
else
{
lean_inc(v_a_3415_);
lean_dec(v___x_3382_);
v___x_3417_ = lean_box(0);
v_isShared_3418_ = v_isSharedCheck_3422_;
goto v_resetjp_3416_;
}
v_resetjp_3416_:
{
lean_object* v___x_3420_; 
if (v_isShared_3418_ == 0)
{
v___x_3420_ = v___x_3417_;
goto v_reusejp_3419_;
}
else
{
lean_object* v_reuseFailAlloc_3421_; 
v_reuseFailAlloc_3421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3421_, 0, v_a_3415_);
v___x_3420_ = v_reuseFailAlloc_3421_;
goto v_reusejp_3419_;
}
v_reusejp_3419_:
{
return v___x_3420_;
}
}
}
}
else
{
lean_object* v_a_3423_; lean_object* v___x_3425_; uint8_t v_isShared_3426_; uint8_t v_isSharedCheck_3430_; 
lean_dec_ref_known(v___x_3361_, 2);
lean_dec(v_a_3353_);
lean_dec(v_a_3348_);
lean_dec(v_a_3346_);
lean_dec(v___y_3343_);
lean_dec_ref(v___y_3342_);
lean_dec(v___y_3341_);
lean_dec_ref(v___y_3340_);
lean_dec(v_fst_3335_);
lean_dec(v_u_3334_);
lean_dec_ref(v_target_3332_);
lean_dec_ref(v_hyps_3331_);
lean_dec(v_hyp_3330_);
lean_dec_ref(v_cl_3329_);
lean_dec(v___y_3328_);
lean_dec_ref(v___x_3327_);
lean_dec_ref(v_l_3326_);
v_a_3423_ = lean_ctor_get(v___x_3365_, 0);
v_isSharedCheck_3430_ = !lean_is_exclusive(v___x_3365_);
if (v_isSharedCheck_3430_ == 0)
{
v___x_3425_ = v___x_3365_;
v_isShared_3426_ = v_isSharedCheck_3430_;
goto v_resetjp_3424_;
}
else
{
lean_inc(v_a_3423_);
lean_dec(v___x_3365_);
v___x_3425_ = lean_box(0);
v_isShared_3426_ = v_isSharedCheck_3430_;
goto v_resetjp_3424_;
}
v_resetjp_3424_:
{
lean_object* v___x_3428_; 
if (v_isShared_3426_ == 0)
{
v___x_3428_ = v___x_3425_;
goto v_reusejp_3427_;
}
else
{
lean_object* v_reuseFailAlloc_3429_; 
v_reuseFailAlloc_3429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3429_, 0, v_a_3423_);
v___x_3428_ = v_reuseFailAlloc_3429_;
goto v_reusejp_3427_;
}
v_reusejp_3427_:
{
return v___x_3428_;
}
}
}
}
else
{
lean_object* v_a_3431_; lean_object* v___x_3433_; uint8_t v_isShared_3434_; uint8_t v_isSharedCheck_3438_; 
lean_dec(v_a_3348_);
lean_dec(v_a_3346_);
lean_dec(v___y_3343_);
lean_dec_ref(v___y_3342_);
lean_dec(v___y_3341_);
lean_dec_ref(v___y_3340_);
lean_dec(v_fst_3335_);
lean_dec(v_u_3334_);
lean_dec_ref(v_target_3332_);
lean_dec_ref(v_hyps_3331_);
lean_dec(v_hyp_3330_);
lean_dec_ref(v_cl_3329_);
lean_dec(v___y_3328_);
lean_dec_ref(v___x_3327_);
lean_dec_ref(v_l_3326_);
v_a_3431_ = lean_ctor_get(v___x_3352_, 0);
v_isSharedCheck_3438_ = !lean_is_exclusive(v___x_3352_);
if (v_isSharedCheck_3438_ == 0)
{
v___x_3433_ = v___x_3352_;
v_isShared_3434_ = v_isSharedCheck_3438_;
goto v_resetjp_3432_;
}
else
{
lean_inc(v_a_3431_);
lean_dec(v___x_3352_);
v___x_3433_ = lean_box(0);
v_isShared_3434_ = v_isSharedCheck_3438_;
goto v_resetjp_3432_;
}
v_resetjp_3432_:
{
lean_object* v___x_3436_; 
if (v_isShared_3434_ == 0)
{
v___x_3436_ = v___x_3433_;
goto v_reusejp_3435_;
}
else
{
lean_object* v_reuseFailAlloc_3437_; 
v_reuseFailAlloc_3437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3437_, 0, v_a_3431_);
v___x_3436_ = v_reuseFailAlloc_3437_;
goto v_reusejp_3435_;
}
v_reusejp_3435_:
{
return v___x_3436_;
}
}
}
}
else
{
lean_object* v_a_3439_; lean_object* v___x_3441_; uint8_t v_isShared_3442_; uint8_t v_isSharedCheck_3446_; 
lean_dec(v_a_3346_);
lean_dec(v___y_3343_);
lean_dec_ref(v___y_3342_);
lean_dec(v___y_3341_);
lean_dec_ref(v___y_3340_);
lean_dec(v_fst_3335_);
lean_dec(v_u_3334_);
lean_dec_ref(v_target_3332_);
lean_dec_ref(v_hyps_3331_);
lean_dec(v_hyp_3330_);
lean_dec_ref(v_cl_3329_);
lean_dec(v___y_3328_);
lean_dec_ref(v___x_3327_);
lean_dec_ref(v_l_3326_);
v_a_3439_ = lean_ctor_get(v___x_3347_, 0);
v_isSharedCheck_3446_ = !lean_is_exclusive(v___x_3347_);
if (v_isSharedCheck_3446_ == 0)
{
v___x_3441_ = v___x_3347_;
v_isShared_3442_ = v_isSharedCheck_3446_;
goto v_resetjp_3440_;
}
else
{
lean_inc(v_a_3439_);
lean_dec(v___x_3347_);
v___x_3441_ = lean_box(0);
v_isShared_3442_ = v_isSharedCheck_3446_;
goto v_resetjp_3440_;
}
v_resetjp_3440_:
{
lean_object* v___x_3444_; 
if (v_isShared_3442_ == 0)
{
v___x_3444_ = v___x_3441_;
goto v_reusejp_3443_;
}
else
{
lean_object* v_reuseFailAlloc_3445_; 
v_reuseFailAlloc_3445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3445_, 0, v_a_3439_);
v___x_3444_ = v_reuseFailAlloc_3445_;
goto v_reusejp_3443_;
}
v_reusejp_3443_:
{
return v___x_3444_;
}
}
}
}
else
{
lean_object* v_a_3447_; lean_object* v___x_3449_; uint8_t v_isShared_3450_; uint8_t v_isSharedCheck_3454_; 
lean_dec(v___y_3343_);
lean_dec_ref(v___y_3342_);
lean_dec(v___y_3341_);
lean_dec_ref(v___y_3340_);
lean_dec(v_fst_3335_);
lean_dec(v_u_3334_);
lean_dec_ref(v_target_3332_);
lean_dec_ref(v_hyps_3331_);
lean_dec(v_hyp_3330_);
lean_dec_ref(v_cl_3329_);
lean_dec(v___y_3328_);
lean_dec_ref(v___x_3327_);
lean_dec_ref(v_l_3326_);
v_a_3447_ = lean_ctor_get(v___x_3345_, 0);
v_isSharedCheck_3454_ = !lean_is_exclusive(v___x_3345_);
if (v_isSharedCheck_3454_ == 0)
{
v___x_3449_ = v___x_3345_;
v_isShared_3450_ = v_isSharedCheck_3454_;
goto v_resetjp_3448_;
}
else
{
lean_inc(v_a_3447_);
lean_dec(v___x_3345_);
v___x_3449_ = lean_box(0);
v_isShared_3450_ = v_isSharedCheck_3454_;
goto v_resetjp_3448_;
}
v_resetjp_3448_:
{
lean_object* v___x_3452_; 
if (v_isShared_3450_ == 0)
{
v___x_3452_ = v___x_3449_;
goto v_reusejp_3451_;
}
else
{
lean_object* v_reuseFailAlloc_3453_; 
v_reuseFailAlloc_3453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3453_, 0, v_a_3447_);
v___x_3452_ = v_reuseFailAlloc_3453_;
goto v_reusejp_3451_;
}
v_reusejp_3451_:
{
return v___x_3452_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure___lam__0___boxed(lean_object** _args){
lean_object* v___x_3455_ = _args[0];
lean_object* v___x_3456_ = _args[1];
lean_object* v___x_3457_ = _args[2];
lean_object* v_l_3458_ = _args[3];
lean_object* v___x_3459_ = _args[4];
lean_object* v___y_3460_ = _args[5];
lean_object* v_cl_3461_ = _args[6];
lean_object* v_hyp_3462_ = _args[7];
lean_object* v_hyps_3463_ = _args[8];
lean_object* v_target_3464_ = _args[9];
lean_object* v_args_3465_ = _args[10];
lean_object* v_u_3466_ = _args[11];
lean_object* v_fst_3467_ = _args[12];
lean_object* v___y_3468_ = _args[13];
lean_object* v___y_3469_ = _args[14];
lean_object* v___y_3470_ = _args[15];
lean_object* v___y_3471_ = _args[16];
lean_object* v___y_3472_ = _args[17];
lean_object* v___y_3473_ = _args[18];
lean_object* v___y_3474_ = _args[19];
lean_object* v___y_3475_ = _args[20];
lean_object* v___y_3476_ = _args[21];
_start:
{
uint8_t v___x_9373__boxed_3477_; lean_object* v_res_3478_; 
v___x_9373__boxed_3477_ = lean_unbox(v___x_3457_);
v_res_3478_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure___lam__0(v___x_3455_, v___x_3456_, v___x_9373__boxed_3477_, v_l_3458_, v___x_3459_, v___y_3460_, v_cl_3461_, v_hyp_3462_, v_hyps_3463_, v_target_3464_, v_args_3465_, v_u_3466_, v_fst_3467_, v___y_3468_, v___y_3469_, v___y_3470_, v___y_3471_, v___y_3472_, v___y_3473_, v___y_3474_, v___y_3475_);
lean_dec(v___y_3471_);
lean_dec_ref(v___y_3470_);
lean_dec(v___y_3469_);
lean_dec_ref(v___y_3468_);
lean_dec_ref(v_args_3465_);
return v_res_3478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure(lean_object* v_x_3479_, lean_object* v_a_3480_, lean_object* v_a_3481_, lean_object* v_a_3482_, lean_object* v_a_3483_, lean_object* v_a_3484_, lean_object* v_a_3485_, lean_object* v_a_3486_, lean_object* v_a_3487_){
_start:
{
lean_object* v___x_3489_; lean_object* v___x_3490_; uint8_t v___x_3491_; 
v___x_3489_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_));
v___x_3490_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__1));
lean_inc(v_x_3479_);
v___x_3491_ = l_Lean_Syntax_isOfKind(v_x_3479_, v___x_3490_);
if (v___x_3491_ == 0)
{
lean_object* v___x_3492_; 
lean_dec(v_x_3479_);
v___x_3492_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0___redArg();
return v___x_3492_;
}
else
{
lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; uint8_t v___x_3496_; 
v___x_3493_ = lean_unsigned_to_nat(1u);
v___x_3494_ = l_Lean_Syntax_getArg(v_x_3479_, v___x_3493_);
v___x_3495_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__4));
lean_inc(v___x_3494_);
v___x_3496_ = l_Lean_Syntax_isOfKind(v___x_3494_, v___x_3495_);
if (v___x_3496_ == 0)
{
lean_object* v___x_3497_; 
lean_dec(v___x_3494_);
lean_dec(v_x_3479_);
v___x_3497_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0___redArg();
return v___x_3497_;
}
else
{
lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; uint8_t v___x_3501_; 
v___x_3498_ = lean_unsigned_to_nat(0u);
v___x_3499_ = lean_unsigned_to_nat(2u);
v___x_3500_ = l_Lean_Syntax_getArg(v_x_3479_, v___x_3499_);
v___x_3501_ = l_Lean_Syntax_matchesNull(v___x_3500_, v___x_3498_);
if (v___x_3501_ == 0)
{
lean_object* v___x_3502_; 
lean_dec(v___x_3494_);
lean_dec(v_x_3479_);
v___x_3502_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__0___redArg();
return v___x_3502_;
}
else
{
lean_object* v___x_3503_; 
v___x_3503_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMainGoal___redArg(v_a_3481_, v_a_3484_, v_a_3485_, v_a_3486_, v_a_3487_);
if (lean_obj_tag(v___x_3503_) == 0)
{
lean_object* v_a_3504_; lean_object* v_snd_3505_; lean_object* v_fst_3506_; lean_object* v_u_3507_; lean_object* v_l_3508_; lean_object* v_cl_3509_; lean_object* v_hyps_3510_; lean_object* v_target_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v_hyp_3515_; lean_object* v_args_3516_; lean_object* v___y_3518_; lean_object* v___x_3524_; 
v_a_3504_ = lean_ctor_get(v___x_3503_, 0);
lean_inc(v_a_3504_);
lean_dec_ref_known(v___x_3503_, 1);
v_snd_3505_ = lean_ctor_get(v_a_3504_, 1);
lean_inc(v_snd_3505_);
v_fst_3506_ = lean_ctor_get(v_a_3504_, 0);
lean_inc(v_fst_3506_);
lean_dec(v_a_3504_);
v_u_3507_ = lean_ctor_get(v_snd_3505_, 0);
lean_inc(v_u_3507_);
v_l_3508_ = lean_ctor_get(v_snd_3505_, 1);
lean_inc_ref(v_l_3508_);
v_cl_3509_ = lean_ctor_get(v_snd_3505_, 2);
lean_inc_ref(v_cl_3509_);
v_hyps_3510_ = lean_ctor_get(v_snd_3505_, 3);
lean_inc_ref(v_hyps_3510_);
v_target_3511_ = lean_ctor_get(v_snd_3505_, 4);
lean_inc_ref(v_target_3511_);
lean_dec(v_snd_3505_);
v___x_3512_ = l_Lean_Syntax_getArg(v___x_3494_, v___x_3498_);
v___x_3513_ = l_Lean_Syntax_getArg(v___x_3494_, v___x_3493_);
lean_dec(v___x_3494_);
v___x_3514_ = lean_unsigned_to_nat(4u);
v_hyp_3515_ = l_Lean_Syntax_getArg(v_x_3479_, v___x_3514_);
lean_dec(v_x_3479_);
v_args_3516_ = l_Lean_Syntax_getArgs(v___x_3513_);
lean_dec(v___x_3513_);
v___x_3524_ = l_Lean_Level_dec(v_u_3507_);
if (lean_obj_tag(v___x_3524_) == 0)
{
lean_inc(v_u_3507_);
v___y_3518_ = v_u_3507_;
goto v___jp_3517_;
}
else
{
lean_object* v_val_3525_; 
v_val_3525_ = lean_ctor_get(v___x_3524_, 0);
lean_inc(v_val_3525_);
lean_dec_ref_known(v___x_3524_, 1);
v___y_3518_ = v_val_3525_;
goto v___jp_3517_;
}
v___jp_3517_:
{
lean_object* v___x_3519_; uint8_t v___x_3520_; lean_object* v___x_3521_; lean_object* v___f_3522_; lean_object* v___x_3523_; 
v___x_3519_ = lean_box(0);
v___x_3520_ = 0;
v___x_3521_ = lean_box(v___x_3520_);
lean_inc(v_fst_3506_);
v___f_3522_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure___lam__0___boxed), 22, 13);
lean_closure_set(v___f_3522_, 0, v___x_3512_);
lean_closure_set(v___f_3522_, 1, v___x_3519_);
lean_closure_set(v___f_3522_, 2, v___x_3521_);
lean_closure_set(v___f_3522_, 3, v_l_3508_);
lean_closure_set(v___f_3522_, 4, v___x_3489_);
lean_closure_set(v___f_3522_, 5, v___y_3518_);
lean_closure_set(v___f_3522_, 6, v_cl_3509_);
lean_closure_set(v___f_3522_, 7, v_hyp_3515_);
lean_closure_set(v___f_3522_, 8, v_hyps_3510_);
lean_closure_set(v___f_3522_, 9, v_target_3511_);
lean_closure_set(v___f_3522_, 10, v_args_3516_);
lean_closure_set(v___f_3522_, 11, v_u_3507_);
lean_closure_set(v___f_3522_, 12, v_fst_3506_);
v___x_3523_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize_spec__4___redArg(v_fst_3506_, v___f_3522_, v_a_3480_, v_a_3481_, v_a_3482_, v_a_3483_, v_a_3484_, v_a_3485_, v_a_3486_, v_a_3487_);
return v___x_3523_;
}
}
else
{
lean_object* v_a_3526_; lean_object* v___x_3528_; uint8_t v_isShared_3529_; uint8_t v_isSharedCheck_3533_; 
lean_dec(v___x_3494_);
lean_dec(v_x_3479_);
v_a_3526_ = lean_ctor_get(v___x_3503_, 0);
v_isSharedCheck_3533_ = !lean_is_exclusive(v___x_3503_);
if (v_isSharedCheck_3533_ == 0)
{
v___x_3528_ = v___x_3503_;
v_isShared_3529_ = v_isSharedCheck_3533_;
goto v_resetjp_3527_;
}
else
{
lean_inc(v_a_3526_);
lean_dec(v___x_3503_);
v___x_3528_ = lean_box(0);
v_isShared_3529_ = v_isSharedCheck_3533_;
goto v_resetjp_3527_;
}
v_resetjp_3527_:
{
lean_object* v___x_3531_; 
if (v_isShared_3529_ == 0)
{
v___x_3531_ = v___x_3528_;
goto v_reusejp_3530_;
}
else
{
lean_object* v_reuseFailAlloc_3532_; 
v_reuseFailAlloc_3532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3532_, 0, v_a_3526_);
v___x_3531_ = v_reuseFailAlloc_3532_;
goto v_reusejp_3530_;
}
v_reusejp_3530_:
{
return v___x_3531_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure___boxed(lean_object* v_x_3534_, lean_object* v_a_3535_, lean_object* v_a_3536_, lean_object* v_a_3537_, lean_object* v_a_3538_, lean_object* v_a_3539_, lean_object* v_a_3540_, lean_object* v_a_3541_, lean_object* v_a_3542_, lean_object* v_a_3543_){
_start:
{
lean_object* v_res_3544_; 
v_res_3544_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure(v_x_3534_, v_a_3535_, v_a_3536_, v_a_3537_, v_a_3538_, v_a_3539_, v_a_3540_, v_a_3541_, v_a_3542_);
lean_dec(v_a_3542_);
lean_dec_ref(v_a_3541_);
lean_dec(v_a_3540_);
lean_dec_ref(v_a_3539_);
lean_dec(v_a_3538_);
lean_dec_ref(v_a_3537_);
lean_dec(v_a_3536_);
lean_dec_ref(v_a_3535_);
return v_res_3544_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt_spec__0(lean_object* v_opts_3545_, lean_object* v_opt_3546_){
_start:
{
lean_object* v_name_3547_; lean_object* v_defValue_3548_; lean_object* v_map_3549_; lean_object* v___x_3550_; 
v_name_3547_ = lean_ctor_get(v_opt_3546_, 0);
v_defValue_3548_ = lean_ctor_get(v_opt_3546_, 1);
v_map_3549_ = lean_ctor_get(v_opts_3545_, 0);
v___x_3550_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3549_, v_name_3547_);
if (lean_obj_tag(v___x_3550_) == 0)
{
uint8_t v___x_3551_; 
v___x_3551_ = lean_unbox(v_defValue_3548_);
return v___x_3551_;
}
else
{
lean_object* v_val_3552_; 
v_val_3552_ = lean_ctor_get(v___x_3550_, 0);
lean_inc(v_val_3552_);
lean_dec_ref_known(v___x_3550_, 1);
if (lean_obj_tag(v_val_3552_) == 1)
{
uint8_t v_v_3553_; 
v_v_3553_ = lean_ctor_get_uint8(v_val_3552_, 0);
lean_dec_ref_known(v_val_3552_, 0);
return v_v_3553_;
}
else
{
uint8_t v___x_3554_; 
lean_dec(v_val_3552_);
v___x_3554_ = lean_unbox(v_defValue_3548_);
return v___x_3554_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt_spec__0___boxed(lean_object* v_opts_3555_, lean_object* v_opt_3556_){
_start:
{
uint8_t v_res_3557_; lean_object* v_r_3558_; 
v_res_3557_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt_spec__0(v_opts_3555_, v_opt_3556_);
lean_dec_ref(v_opt_3556_);
lean_dec_ref(v_opts_3555_);
v_r_3558_ = lean_box(v_res_3557_);
return v_r_3558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt(lean_object* v_stx_3559_, lean_object* v_a_3560_, lean_object* v_a_3561_, lean_object* v_a_3562_, lean_object* v_a_3563_, lean_object* v_a_3564_, lean_object* v_a_3565_, lean_object* v_a_3566_, lean_object* v_a_3567_){
_start:
{
lean_object* v_options_3569_; lean_object* v___x_3570_; uint8_t v___x_3571_; 
v_options_3569_ = lean_ctor_get(v_a_3566_, 2);
v___x_3570_ = l_new__wp__monad;
v___x_3571_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt_spec__0(v_options_3569_, v___x_3570_);
if (v___x_3571_ == 0)
{
lean_object* v___x_3572_; 
v___x_3572_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize(v_stx_3559_, v_a_3560_, v_a_3561_, v_a_3562_, v_a_3563_, v_a_3564_, v_a_3565_, v_a_3566_, v_a_3567_);
return v___x_3572_;
}
else
{
lean_object* v___x_3573_; 
v___x_3573_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMSpecialize(v_stx_3559_, v_a_3560_, v_a_3561_, v_a_3562_, v_a_3563_, v_a_3564_, v_a_3565_, v_a_3566_, v_a_3567_);
return v___x_3573_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___boxed(lean_object* v_stx_3574_, lean_object* v_a_3575_, lean_object* v_a_3576_, lean_object* v_a_3577_, lean_object* v_a_3578_, lean_object* v_a_3579_, lean_object* v_a_3580_, lean_object* v_a_3581_, lean_object* v_a_3582_, lean_object* v_a_3583_){
_start:
{
lean_object* v_res_3584_; 
v_res_3584_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt(v_stx_3574_, v_a_3575_, v_a_3576_, v_a_3577_, v_a_3578_, v_a_3579_, v_a_3580_, v_a_3581_, v_a_3582_);
lean_dec(v_a_3582_);
lean_dec_ref(v_a_3581_);
lean_dec(v_a_3580_);
lean_dec_ref(v_a_3579_);
lean_dec(v_a_3578_);
lean_dec_ref(v_a_3577_);
lean_dec(v_a_3576_);
lean_dec_ref(v_a_3575_);
return v_res_3584_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1(){
_start:
{
lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; 
v___x_3594_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3595_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecialize___closed__2));
v___x_3596_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1___closed__1));
v___x_3597_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___boxed), 10, 0);
v___x_3598_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3594_, v___x_3595_, v___x_3596_, v___x_3597_);
return v___x_3598_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1___boxed(lean_object* v_a_3599_){
_start:
{
lean_object* v_res_3600_; 
v_res_3600_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1();
return v_res_3600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt(lean_object* v_stx_3601_, lean_object* v_a_3602_, lean_object* v_a_3603_, lean_object* v_a_3604_, lean_object* v_a_3605_, lean_object* v_a_3606_, lean_object* v_a_3607_, lean_object* v_a_3608_, lean_object* v_a_3609_){
_start:
{
lean_object* v_options_3611_; lean_object* v___x_3612_; uint8_t v___x_3613_; 
v_options_3611_ = lean_ctor_get(v_a_3608_, 2);
v___x_3612_ = l_new__wp__monad;
v___x_3613_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt_spec__0(v_options_3611_, v___x_3612_);
if (v___x_3613_ == 0)
{
lean_object* v___x_3614_; 
v___x_3614_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure(v_stx_3601_, v_a_3602_, v_a_3603_, v_a_3604_, v_a_3605_, v_a_3606_, v_a_3607_, v_a_3608_, v_a_3609_);
return v___x_3614_;
}
else
{
lean_object* v___x_3615_; 
v___x_3615_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMspecializePure(v_stx_3601_, v_a_3602_, v_a_3603_, v_a_3604_, v_a_3605_, v_a_3606_, v_a_3607_, v_a_3608_, v_a_3609_);
return v___x_3615_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___boxed(lean_object* v_stx_3616_, lean_object* v_a_3617_, lean_object* v_a_3618_, lean_object* v_a_3619_, lean_object* v_a_3620_, lean_object* v_a_3621_, lean_object* v_a_3622_, lean_object* v_a_3623_, lean_object* v_a_3624_, lean_object* v_a_3625_){
_start:
{
lean_object* v_res_3626_; 
v_res_3626_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt(v_stx_3616_, v_a_3617_, v_a_3618_, v_a_3619_, v_a_3620_, v_a_3621_, v_a_3622_, v_a_3623_, v_a_3624_);
lean_dec(v_a_3624_);
lean_dec_ref(v_a_3623_);
lean_dec(v_a_3622_);
lean_dec_ref(v_a_3621_);
lean_dec(v_a_3620_);
lean_dec_ref(v_a_3619_);
lean_dec(v_a_3618_);
lean_dec_ref(v_a_3617_);
return v_res_3626_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1(){
_start:
{
lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; 
v___x_3636_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3637_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePure___closed__1));
v___x_3638_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1___closed__1));
v___x_3639_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___boxed), 10, 0);
v___x_3640_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3636_, v___x_3637_, v___x_3638_, v___x_3639_);
return v___x_3640_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1___boxed(lean_object* v_a_3641_){
_start:
{
lean_object* v_res_3642_; 
v_res_3642_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1();
return v_res_3642_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Specialize(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_ElabTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_initFn_00___x40_Lean_Elab_Tactic_Do_ProofMode_Specialize_1458348229____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMSpecializeOpt__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Specialize_0__Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMspecializePureOpt__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Specialize(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Specialize(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_ElabTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Specialize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Specialize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_ProofMode_Specialize(builtin);
}
#ifdef __cplusplus
}
#endif
