// Lean compiler output
// Module: Lean.Elab.Tactic.Do.ProofMode.Pure
// Imports: public import Lean.Elab.Tactic.Do.ProofMode.MGoal import Lean.Elab.Tactic.Meta import Lean.Elab.Tactic.Do.ProofMode.Basic import Lean.Elab.Tactic.Do.ProofMode.Focus import Lean.Meta.Tactic.Rfl
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
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_dec(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
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
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_setType___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_applyRfl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_length(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHypWithInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_FocusResult_restGoal(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_FocusResult_rewriteHyps(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_runTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkAnd_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_addLocalVarInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_FocusResult_restGoal(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_addLocalVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_getFreshHypName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_focusHypWithInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_FocusResult_rewriteHyps(lean_object*, lean_object*, lean_object*);
extern lean_object* l_new__wp__monad;
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Pure"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "thm"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__8___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "IsPure"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_value),LEAN_SCALAR_PTR_LITERAL(167, 48, 44, 122, 88, 53, 63, 251)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__4_value),LEAN_SCALAR_PTR_LITERAL(237, 27, 197, 114, 200, 2, 153, 253)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_mkFreshLevelMVar___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mpure"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__2_value),LEAN_SCALAR_PTR_LITERAL(99, 40, 78, 170, 57, 132, 109, 163)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_value),LEAN_SCALAR_PTR_LITERAL(167, 48, 44, 122, 88, 53, 63, 251)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(125, 186, 166, 18, 114, 151, 126, 123)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(246, 69, 55, 193, 136, 208, 207, 117)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "mpureIntro"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(100, 145, 131, 67, 32, 11, 101, 202)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ULift"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "down"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(14, 162, 24, 1, 186, 170, 9, 57)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(8, 0, 133, 161, 22, 18, 91, 229)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pure"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(83, 183, 133, 62, 214, 202, 136, 98)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_applyRflAndAndIntro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__0 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_applyRflAndAndIntro___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__1 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__1_value;
static const lean_string_object l_Lean_MVarId_applyRflAndAndIntro___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__2 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__2_value;
static const lean_ctor_object l_Lean_MVarId_applyRflAndAndIntro___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__3 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__3_value;
static const lean_ctor_object l_Lean_MVarId_applyRflAndAndIntro___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_ctor_object l_Lean_MVarId_applyRflAndAndIntro___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(58, 46, 244, 208, 18, 71, 77, 162)}};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__4 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__4_value;
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__5;
static const lean_ctor_object l_Lean_MVarId_applyRflAndAndIntro___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_ctor_object l_Lean_MVarId_applyRflAndAndIntro___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(177, 152, 123, 219, 220, 182, 189, 250)}};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__6 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__6_value;
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__7;
static const lean_string_object l_Lean_MVarId_applyRflAndAndIntro___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__8 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__8_value;
static const lean_string_object l_Lean_MVarId_applyRflAndAndIntro___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "spec"};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__9 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__9_value;
static const lean_ctor_object l_Lean_MVarId_applyRflAndAndIntro___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__8_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_Lean_MVarId_applyRflAndAndIntro___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__10_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_value),LEAN_SCALAR_PTR_LITERAL(180, 190, 140, 210, 253, 78, 130, 238)}};
static const lean_ctor_object l_Lean_MVarId_applyRflAndAndIntro___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__10_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 104, 229, 54, 179, 197, 12, 87)}};
static const lean_ctor_object l_Lean_MVarId_applyRflAndAndIntro___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__10_value_aux_2),((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__9_value),LEAN_SCALAR_PTR_LITERAL(155, 14, 123, 28, 194, 252, 167, 244)}};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__10 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__10_value;
static const lean_string_object l_Lean_MVarId_applyRflAndAndIntro___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__11 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__11_value;
static const lean_ctor_object l_Lean_MVarId_applyRflAndAndIntro___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__11_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__12 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__12_value;
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__13;
static const lean_string_object l_Lean_MVarId_applyRflAndAndIntro___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "pure Prop: "};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__14 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__14_value;
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__15;
LEAN_EXPORT lean_object* l_Lean_MVarId_applyRflAndAndIntro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyRflAndAndIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___closed__0 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "discharged: "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "discharge\? "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__10_value)} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___boxed, .m_arity = 8, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__0_value),((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__10_value)} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "pureRflAndAndIntro: "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "tacticTrivial"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 113, 211, 1, 53, 106, 100, 38)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "trivial"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__2_value;
static const lean_array_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_countFunctionTypes_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_countFunctionTypes_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_countFunctionTypes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_countFunctionTypes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_countFunctionTypes_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_countFunctionTypes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__7___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "CompleteLattice"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__1_value),LEAN_SCALAR_PTR_LITERAL(237, 11, 99, 181, 146, 193, 255, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__2_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__2_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_value),LEAN_SCALAR_PTR_LITERAL(84, 59, 209, 245, 191, 85, 47, 162)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__2_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__4_value),LEAN_SCALAR_PTR_LITERAL(210, 28, 152, 207, 194, 33, 121, 214)}};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure_spec__0___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__1_value),LEAN_SCALAR_PTR_LITERAL(237, 11, 99, 181, 146, 193, 255, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_value),LEAN_SCALAR_PTR_LITERAL(84, 59, 209, 245, 191, 85, 47, 162)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(66, 190, 199, 195, 96, 142, 243, 151)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_5),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 174, 81, 150, 33, 109, 72, 168)}};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ofProp"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 140, 127, 117, 148, 144, 166, 107)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(51, 160, 150, 32, 134, 96, 114, 42)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_applyRflAndAndIntro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_applyRflAndAndIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___boxed, .m_arity = 8, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__0_value),((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__10_value)} };
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureTrivial___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureTrivial___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureTrivial___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureTrivial___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureTrivial___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureTrivial___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureTrivial(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureTrivial___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ProofMode"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabMPureOpt"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__2_value_aux_0),((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__8_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__2_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(255, 74, 68, 148, 0, 14, 81, 75)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__2_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(216, 67, 188, 231, 91, 135, 208, 82)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "elabMPureIntroOpt"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1___closed__1_value_aux_0),((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__8_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1___closed__1_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(255, 74, 68, 148, 0, 14, 81, 75)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1___closed__1_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(55, 142, 123, 40, 238, 243, 251, 169)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__0(lean_object* v___y_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_){
_start:
{
lean_object* v_lctx_6_; lean_object* v___x_7_; 
v_lctx_6_ = lean_ctor_get(v___y_1_, 2);
lean_inc_ref(v_lctx_6_);
v___x_7_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7_, 0, v_lctx_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__0___boxed(lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__0(v___y_8_, v___y_9_, v___y_10_, v___y_11_);
lean_dec(v___y_11_);
lean_dec_ref(v___y_10_);
lean_dec(v___y_9_);
lean_dec_ref(v___y_8_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__1(lean_object* v_name_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName(v_name_14_, v___y_17_, v___y_18_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__1___boxed(lean_object* v_name_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__1(v_name_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_);
lean_dec(v___y_25_);
lean_dec_ref(v___y_24_);
lean_dec(v___y_23_);
lean_dec_ref(v___y_22_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2(lean_object* v_fst_30_, lean_object* v___x_31_, lean_object* v___x_32_, lean_object* v___x_33_, lean_object* v___x_34_, lean_object* v___x_35_, lean_object* v_00_u03c3s_36_, lean_object* v_hyp_37_, lean_object* v_00_u03c6_38_, lean_object* v_inst_39_, lean_object* v_u_40_, lean_object* v_fst_41_, lean_object* v_toPure_42_, lean_object* v_prf_43_){
_start:
{
lean_object* v_u_44_; lean_object* v_00_u03c3s_45_; lean_object* v_hyps_46_; lean_object* v_target_47_; lean_object* v___x_49_; uint8_t v_isShared_50_; uint8_t v_isSharedCheck_63_; 
v_u_44_ = lean_ctor_get(v_fst_30_, 0);
v_00_u03c3s_45_ = lean_ctor_get(v_fst_30_, 1);
v_hyps_46_ = lean_ctor_get(v_fst_30_, 2);
v_target_47_ = lean_ctor_get(v_fst_30_, 3);
v_isSharedCheck_63_ = !lean_is_exclusive(v_fst_30_);
if (v_isSharedCheck_63_ == 0)
{
v___x_49_ = v_fst_30_;
v_isShared_50_ = v_isSharedCheck_63_;
goto v_resetjp_48_;
}
else
{
lean_inc(v_target_47_);
lean_inc(v_hyps_46_);
lean_inc(v_00_u03c3s_45_);
lean_inc(v_u_44_);
lean_dec(v_fst_30_);
v___x_49_ = lean_box(0);
v_isShared_50_ = v_isSharedCheck_63_;
goto v_resetjp_48_;
}
v_resetjp_48_:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v_prf_55_; lean_object* v___x_56_; lean_object* v_goal_58_; 
v___x_51_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0));
v___x_52_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__1));
v___x_53_ = l_Lean_Name_mkStr6(v___x_31_, v___x_32_, v___x_33_, v___x_34_, v___x_51_, v___x_52_);
v___x_54_ = l_Lean_mkConst(v___x_53_, v___x_35_);
lean_inc_ref(v_target_47_);
lean_inc_ref(v_hyp_37_);
lean_inc_ref(v_hyps_46_);
lean_inc_ref(v_00_u03c3s_36_);
v_prf_55_ = l_Lean_mkApp7(v___x_54_, v_00_u03c3s_36_, v_hyps_46_, v_hyp_37_, v_target_47_, v_00_u03c6_38_, v_inst_39_, v_prf_43_);
v___x_56_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_u_40_, v_00_u03c3s_36_, v_hyps_46_, v_hyp_37_);
if (v_isShared_50_ == 0)
{
lean_ctor_set(v___x_49_, 2, v___x_56_);
v_goal_58_ = v___x_49_;
goto v_reusejp_57_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v_u_44_);
lean_ctor_set(v_reuseFailAlloc_62_, 1, v_00_u03c3s_45_);
lean_ctor_set(v_reuseFailAlloc_62_, 2, v___x_56_);
lean_ctor_set(v_reuseFailAlloc_62_, 3, v_target_47_);
v_goal_58_ = v_reuseFailAlloc_62_;
goto v_reusejp_57_;
}
v_reusejp_57_:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_59_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_59_, 0, v_goal_58_);
lean_ctor_set(v___x_59_, 1, v_prf_55_);
v___x_60_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_60_, 0, v_fst_41_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
v___x_61_ = lean_apply_2(v_toPure_42_, lean_box(0), v___x_60_);
return v___x_61_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__3(lean_object* v___x_64_, lean_object* v___x_65_, lean_object* v___x_66_, lean_object* v___x_67_, lean_object* v___x_68_, lean_object* v_00_u03c3s_69_, lean_object* v_hyp_70_, lean_object* v_00_u03c6_71_, lean_object* v_inst_72_, lean_object* v_u_73_, lean_object* v_toPure_74_, lean_object* v_h_75_, uint8_t v___x_76_, lean_object* v_inst_77_, lean_object* v_toBind_78_, lean_object* v_____x_79_){
_start:
{
lean_object* v_snd_80_; lean_object* v_fst_81_; lean_object* v_fst_82_; lean_object* v_snd_83_; lean_object* v___f_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; uint8_t v___x_88_; uint8_t v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v_snd_80_ = lean_ctor_get(v_____x_79_, 1);
lean_inc(v_snd_80_);
v_fst_81_ = lean_ctor_get(v_____x_79_, 0);
lean_inc(v_fst_81_);
lean_dec_ref(v_____x_79_);
v_fst_82_ = lean_ctor_get(v_snd_80_, 0);
lean_inc(v_fst_82_);
v_snd_83_ = lean_ctor_get(v_snd_80_, 1);
lean_inc(v_snd_83_);
lean_dec(v_snd_80_);
v___f_84_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2), 14, 13);
lean_closure_set(v___f_84_, 0, v_fst_82_);
lean_closure_set(v___f_84_, 1, v___x_64_);
lean_closure_set(v___f_84_, 2, v___x_65_);
lean_closure_set(v___f_84_, 3, v___x_66_);
lean_closure_set(v___f_84_, 4, v___x_67_);
lean_closure_set(v___f_84_, 5, v___x_68_);
lean_closure_set(v___f_84_, 6, v_00_u03c3s_69_);
lean_closure_set(v___f_84_, 7, v_hyp_70_);
lean_closure_set(v___f_84_, 8, v_00_u03c6_71_);
lean_closure_set(v___f_84_, 9, v_inst_72_);
lean_closure_set(v___f_84_, 10, v_u_73_);
lean_closure_set(v___f_84_, 11, v_fst_81_);
lean_closure_set(v___f_84_, 12, v_toPure_74_);
v___x_85_ = lean_unsigned_to_nat(1u);
v___x_86_ = lean_mk_empty_array_with_capacity(v___x_85_);
v___x_87_ = lean_array_push(v___x_86_, v_h_75_);
v___x_88_ = 1;
v___x_89_ = 1;
v___x_90_ = lean_box(v___x_76_);
v___x_91_ = lean_box(v___x_88_);
v___x_92_ = lean_box(v___x_76_);
v___x_93_ = lean_box(v___x_88_);
v___x_94_ = lean_box(v___x_89_);
v___x_95_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_95_, 0, v___x_87_);
lean_closure_set(v___x_95_, 1, v_snd_83_);
lean_closure_set(v___x_95_, 2, v___x_90_);
lean_closure_set(v___x_95_, 3, v___x_91_);
lean_closure_set(v___x_95_, 4, v___x_92_);
lean_closure_set(v___x_95_, 5, v___x_93_);
lean_closure_set(v___x_95_, 6, v___x_94_);
v___x_96_ = lean_apply_2(v_inst_77_, lean_box(0), v___x_95_);
v___x_97_ = lean_apply_4(v_toBind_78_, lean_box(0), lean_box(0), v___x_96_, v___f_84_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__3___boxed(lean_object* v___x_98_, lean_object* v___x_99_, lean_object* v___x_100_, lean_object* v___x_101_, lean_object* v___x_102_, lean_object* v_00_u03c3s_103_, lean_object* v_hyp_104_, lean_object* v_00_u03c6_105_, lean_object* v_inst_106_, lean_object* v_u_107_, lean_object* v_toPure_108_, lean_object* v_h_109_, lean_object* v___x_110_, lean_object* v_inst_111_, lean_object* v_toBind_112_, lean_object* v_____x_113_){
_start:
{
uint8_t v___x_486__boxed_114_; lean_object* v_res_115_; 
v___x_486__boxed_114_ = lean_unbox(v___x_110_);
v_res_115_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__3(v___x_98_, v___x_99_, v___x_100_, v___x_101_, v___x_102_, v_00_u03c3s_103_, v_hyp_104_, v_00_u03c6_105_, v_inst_106_, v_u_107_, v_toPure_108_, v_h_109_, v___x_486__boxed_114_, v_inst_111_, v_toBind_112_, v_____x_113_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__4(lean_object* v_k_116_, lean_object* v_00_u03c6_117_, lean_object* v_h_118_, lean_object* v_toBind_119_, lean_object* v___f_120_, lean_object* v_____r_121_){
_start:
{
lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_122_ = lean_apply_2(v_k_116_, v_00_u03c6_117_, v_h_118_);
v___x_123_ = lean_apply_4(v_toBind_119_, lean_box(0), lean_box(0), v___x_122_, v___f_120_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__5(lean_object* v_00_u03c6_124_, lean_object* v___x_125_, lean_object* v___x_126_, lean_object* v___x_127_, lean_object* v___x_128_, lean_object* v___x_129_, lean_object* v_00_u03c3s_130_, lean_object* v_hyp_131_, lean_object* v_inst_132_, lean_object* v_u_133_, lean_object* v_toPure_134_, lean_object* v_h_135_, lean_object* v_inst_136_, lean_object* v_toBind_137_, lean_object* v_k_138_, lean_object* v_snd_139_, lean_object* v_____do__lift_140_){
_start:
{
lean_object* v___x_141_; uint8_t v___x_142_; lean_object* v___x_143_; lean_object* v___f_144_; lean_object* v___f_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
lean_inc_ref_n(v_00_u03c6_124_, 2);
v___x_141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_141_, 0, v_00_u03c6_124_);
v___x_142_ = 0;
v___x_143_ = lean_box(v___x_142_);
lean_inc_n(v_toBind_137_, 2);
lean_inc(v_inst_136_);
lean_inc_ref_n(v_h_135_, 2);
v___f_144_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__3___boxed), 16, 15);
lean_closure_set(v___f_144_, 0, v___x_125_);
lean_closure_set(v___f_144_, 1, v___x_126_);
lean_closure_set(v___f_144_, 2, v___x_127_);
lean_closure_set(v___f_144_, 3, v___x_128_);
lean_closure_set(v___f_144_, 4, v___x_129_);
lean_closure_set(v___f_144_, 5, v_00_u03c3s_130_);
lean_closure_set(v___f_144_, 6, v_hyp_131_);
lean_closure_set(v___f_144_, 7, v_00_u03c6_124_);
lean_closure_set(v___f_144_, 8, v_inst_132_);
lean_closure_set(v___f_144_, 9, v_u_133_);
lean_closure_set(v___f_144_, 10, v_toPure_134_);
lean_closure_set(v___f_144_, 11, v_h_135_);
lean_closure_set(v___f_144_, 12, v___x_143_);
lean_closure_set(v___f_144_, 13, v_inst_136_);
lean_closure_set(v___f_144_, 14, v_toBind_137_);
v___f_145_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__4), 6, 5);
lean_closure_set(v___f_145_, 0, v_k_138_);
lean_closure_set(v___f_145_, 1, v_00_u03c6_124_);
lean_closure_set(v___f_145_, 2, v_h_135_);
lean_closure_set(v___f_145_, 3, v_toBind_137_);
lean_closure_set(v___f_145_, 4, v___f_144_);
v___x_146_ = lean_box(v___x_142_);
v___x_147_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___boxed), 10, 5);
lean_closure_set(v___x_147_, 0, v_snd_139_);
lean_closure_set(v___x_147_, 1, v_____do__lift_140_);
lean_closure_set(v___x_147_, 2, v_h_135_);
lean_closure_set(v___x_147_, 3, v___x_141_);
lean_closure_set(v___x_147_, 4, v___x_146_);
v___x_148_ = lean_apply_2(v_inst_136_, lean_box(0), v___x_147_);
v___x_149_ = lean_apply_4(v_toBind_137_, lean_box(0), lean_box(0), v___x_148_, v___f_145_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__5___boxed(lean_object** _args){
lean_object* v_00_u03c6_150_ = _args[0];
lean_object* v___x_151_ = _args[1];
lean_object* v___x_152_ = _args[2];
lean_object* v___x_153_ = _args[3];
lean_object* v___x_154_ = _args[4];
lean_object* v___x_155_ = _args[5];
lean_object* v_00_u03c3s_156_ = _args[6];
lean_object* v_hyp_157_ = _args[7];
lean_object* v_inst_158_ = _args[8];
lean_object* v_u_159_ = _args[9];
lean_object* v_toPure_160_ = _args[10];
lean_object* v_h_161_ = _args[11];
lean_object* v_inst_162_ = _args[12];
lean_object* v_toBind_163_ = _args[13];
lean_object* v_k_164_ = _args[14];
lean_object* v_snd_165_ = _args[15];
lean_object* v_____do__lift_166_ = _args[16];
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__5(v_00_u03c6_150_, v___x_151_, v___x_152_, v___x_153_, v___x_154_, v___x_155_, v_00_u03c3s_156_, v_hyp_157_, v_inst_158_, v_u_159_, v_toPure_160_, v_h_161_, v_inst_162_, v_toBind_163_, v_k_164_, v_snd_165_, v_____do__lift_166_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__6(lean_object* v_00_u03c6_168_, lean_object* v___x_169_, lean_object* v___x_170_, lean_object* v___x_171_, lean_object* v___x_172_, lean_object* v___x_173_, lean_object* v_00_u03c3s_174_, lean_object* v_hyp_175_, lean_object* v_inst_176_, lean_object* v_u_177_, lean_object* v_toPure_178_, lean_object* v_inst_179_, lean_object* v_toBind_180_, lean_object* v_k_181_, lean_object* v_snd_182_, lean_object* v___f_183_, lean_object* v_h_184_){
_start:
{
lean_object* v___f_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
lean_inc(v_toBind_180_);
lean_inc(v_inst_179_);
v___f_185_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__5___boxed), 17, 16);
lean_closure_set(v___f_185_, 0, v_00_u03c6_168_);
lean_closure_set(v___f_185_, 1, v___x_169_);
lean_closure_set(v___f_185_, 2, v___x_170_);
lean_closure_set(v___f_185_, 3, v___x_171_);
lean_closure_set(v___f_185_, 4, v___x_172_);
lean_closure_set(v___f_185_, 5, v___x_173_);
lean_closure_set(v___f_185_, 6, v_00_u03c3s_174_);
lean_closure_set(v___f_185_, 7, v_hyp_175_);
lean_closure_set(v___f_185_, 8, v_inst_176_);
lean_closure_set(v___f_185_, 9, v_u_177_);
lean_closure_set(v___f_185_, 10, v_toPure_178_);
lean_closure_set(v___f_185_, 11, v_h_184_);
lean_closure_set(v___f_185_, 12, v_inst_179_);
lean_closure_set(v___f_185_, 13, v_toBind_180_);
lean_closure_set(v___f_185_, 14, v_k_181_);
lean_closure_set(v___f_185_, 15, v_snd_182_);
v___x_186_ = lean_apply_2(v_inst_179_, lean_box(0), v___f_183_);
v___x_187_ = lean_apply_4(v_toBind_180_, lean_box(0), lean_box(0), v___x_186_, v___f_185_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_00_u03c6_188_ = _args[0];
lean_object* v___x_189_ = _args[1];
lean_object* v___x_190_ = _args[2];
lean_object* v___x_191_ = _args[3];
lean_object* v___x_192_ = _args[4];
lean_object* v___x_193_ = _args[5];
lean_object* v_00_u03c3s_194_ = _args[6];
lean_object* v_hyp_195_ = _args[7];
lean_object* v_inst_196_ = _args[8];
lean_object* v_u_197_ = _args[9];
lean_object* v_toPure_198_ = _args[10];
lean_object* v_inst_199_ = _args[11];
lean_object* v_toBind_200_ = _args[12];
lean_object* v_k_201_ = _args[13];
lean_object* v_snd_202_ = _args[14];
lean_object* v___f_203_ = _args[15];
lean_object* v_h_204_ = _args[16];
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__6(v_00_u03c6_188_, v___x_189_, v___x_190_, v___x_191_, v___x_192_, v___x_193_, v_00_u03c3s_194_, v_hyp_195_, v_inst_196_, v_u_197_, v_toPure_198_, v_inst_199_, v_toBind_200_, v_k_201_, v_snd_202_, v___f_203_, v_h_204_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__7(lean_object* v_00_u03c6_206_, lean_object* v___x_207_, lean_object* v___x_208_, lean_object* v___x_209_, lean_object* v___x_210_, lean_object* v___x_211_, lean_object* v_00_u03c3s_212_, lean_object* v_hyp_213_, lean_object* v_inst_214_, lean_object* v_u_215_, lean_object* v_toPure_216_, lean_object* v_inst_217_, lean_object* v_toBind_218_, lean_object* v_k_219_, lean_object* v___f_220_, lean_object* v_inst_221_, lean_object* v_inst_222_, lean_object* v_____x_223_){
_start:
{
lean_object* v_fst_224_; lean_object* v_snd_225_; lean_object* v___f_226_; lean_object* v___x_227_; 
v_fst_224_ = lean_ctor_get(v_____x_223_, 0);
lean_inc(v_fst_224_);
v_snd_225_ = lean_ctor_get(v_____x_223_, 1);
lean_inc(v_snd_225_);
lean_dec_ref(v_____x_223_);
lean_inc_ref(v_00_u03c6_206_);
v___f_226_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__6___boxed), 17, 16);
lean_closure_set(v___f_226_, 0, v_00_u03c6_206_);
lean_closure_set(v___f_226_, 1, v___x_207_);
lean_closure_set(v___f_226_, 2, v___x_208_);
lean_closure_set(v___f_226_, 3, v___x_209_);
lean_closure_set(v___f_226_, 4, v___x_210_);
lean_closure_set(v___f_226_, 5, v___x_211_);
lean_closure_set(v___f_226_, 6, v_00_u03c3s_212_);
lean_closure_set(v___f_226_, 7, v_hyp_213_);
lean_closure_set(v___f_226_, 8, v_inst_214_);
lean_closure_set(v___f_226_, 9, v_u_215_);
lean_closure_set(v___f_226_, 10, v_toPure_216_);
lean_closure_set(v___f_226_, 11, v_inst_217_);
lean_closure_set(v___f_226_, 12, v_toBind_218_);
lean_closure_set(v___f_226_, 13, v_k_219_);
lean_closure_set(v___f_226_, 14, v_snd_225_);
lean_closure_set(v___f_226_, 15, v___f_220_);
v___x_227_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_221_, v_inst_222_, v_fst_224_, v_00_u03c6_206_, v___f_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__7___boxed(lean_object** _args){
lean_object* v_00_u03c6_228_ = _args[0];
lean_object* v___x_229_ = _args[1];
lean_object* v___x_230_ = _args[2];
lean_object* v___x_231_ = _args[3];
lean_object* v___x_232_ = _args[4];
lean_object* v___x_233_ = _args[5];
lean_object* v_00_u03c3s_234_ = _args[6];
lean_object* v_hyp_235_ = _args[7];
lean_object* v_inst_236_ = _args[8];
lean_object* v_u_237_ = _args[9];
lean_object* v_toPure_238_ = _args[10];
lean_object* v_inst_239_ = _args[11];
lean_object* v_toBind_240_ = _args[12];
lean_object* v_k_241_ = _args[13];
lean_object* v___f_242_ = _args[14];
lean_object* v_inst_243_ = _args[15];
lean_object* v_inst_244_ = _args[16];
lean_object* v_____x_245_ = _args[17];
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__7(v_00_u03c6_228_, v___x_229_, v___x_230_, v___x_231_, v___x_232_, v___x_233_, v_00_u03c3s_234_, v_hyp_235_, v_inst_236_, v_u_237_, v_toPure_238_, v_inst_239_, v_toBind_240_, v_k_241_, v___f_242_, v_inst_243_, v_inst_244_, v_____x_245_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__8(lean_object* v_00_u03c6_247_, lean_object* v___x_248_, lean_object* v___x_249_, lean_object* v___x_250_, lean_object* v___x_251_, lean_object* v___x_252_, lean_object* v_00_u03c3s_253_, lean_object* v_hyp_254_, lean_object* v_u_255_, lean_object* v_toPure_256_, lean_object* v_inst_257_, lean_object* v_toBind_258_, lean_object* v_k_259_, lean_object* v___f_260_, lean_object* v_inst_261_, lean_object* v_inst_262_, lean_object* v___f_263_, lean_object* v_inst_264_){
_start:
{
lean_object* v___f_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
lean_inc(v_toBind_258_);
lean_inc(v_inst_257_);
v___f_265_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__7___boxed), 18, 17);
lean_closure_set(v___f_265_, 0, v_00_u03c6_247_);
lean_closure_set(v___f_265_, 1, v___x_248_);
lean_closure_set(v___f_265_, 2, v___x_249_);
lean_closure_set(v___f_265_, 3, v___x_250_);
lean_closure_set(v___f_265_, 4, v___x_251_);
lean_closure_set(v___f_265_, 5, v___x_252_);
lean_closure_set(v___f_265_, 6, v_00_u03c3s_253_);
lean_closure_set(v___f_265_, 7, v_hyp_254_);
lean_closure_set(v___f_265_, 8, v_inst_264_);
lean_closure_set(v___f_265_, 9, v_u_255_);
lean_closure_set(v___f_265_, 10, v_toPure_256_);
lean_closure_set(v___f_265_, 11, v_inst_257_);
lean_closure_set(v___f_265_, 12, v_toBind_258_);
lean_closure_set(v___f_265_, 13, v_k_259_);
lean_closure_set(v___f_265_, 14, v___f_260_);
lean_closure_set(v___f_265_, 15, v_inst_261_);
lean_closure_set(v___f_265_, 16, v_inst_262_);
v___x_266_ = lean_apply_2(v_inst_257_, lean_box(0), v___f_263_);
v___x_267_ = lean_apply_4(v_toBind_258_, lean_box(0), lean_box(0), v___x_266_, v___f_265_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__8___boxed(lean_object** _args){
lean_object* v_00_u03c6_268_ = _args[0];
lean_object* v___x_269_ = _args[1];
lean_object* v___x_270_ = _args[2];
lean_object* v___x_271_ = _args[3];
lean_object* v___x_272_ = _args[4];
lean_object* v___x_273_ = _args[5];
lean_object* v_00_u03c3s_274_ = _args[6];
lean_object* v_hyp_275_ = _args[7];
lean_object* v_u_276_ = _args[8];
lean_object* v_toPure_277_ = _args[9];
lean_object* v_inst_278_ = _args[10];
lean_object* v_toBind_279_ = _args[11];
lean_object* v_k_280_ = _args[12];
lean_object* v___f_281_ = _args[13];
lean_object* v_inst_282_ = _args[14];
lean_object* v_inst_283_ = _args[15];
lean_object* v___f_284_ = _args[16];
lean_object* v_inst_285_ = _args[17];
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__8(v_00_u03c6_268_, v___x_269_, v___x_270_, v___x_271_, v___x_272_, v___x_273_, v_00_u03c3s_274_, v_hyp_275_, v_u_276_, v_toPure_277_, v_inst_278_, v_toBind_279_, v_k_280_, v___f_281_, v_inst_282_, v_inst_283_, v___f_284_, v_inst_285_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9(lean_object* v_u_298_, lean_object* v_00_u03c3s_299_, lean_object* v_hyp_300_, lean_object* v_toPure_301_, lean_object* v_inst_302_, lean_object* v_toBind_303_, lean_object* v_k_304_, lean_object* v___f_305_, lean_object* v_inst_306_, lean_object* v_inst_307_, lean_object* v___f_308_, lean_object* v_00_u03c6_309_){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___f_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_310_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0));
v___x_311_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1));
v___x_312_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2));
v___x_313_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3));
v___x_314_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5));
v___x_315_ = lean_box(0);
lean_inc(v_u_298_);
v___x_316_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_316_, 0, v_u_298_);
lean_ctor_set(v___x_316_, 1, v___x_315_);
lean_inc(v_toBind_303_);
lean_inc(v_inst_302_);
lean_inc_ref(v_hyp_300_);
lean_inc_ref(v_00_u03c3s_299_);
lean_inc_ref(v___x_316_);
lean_inc_ref(v_00_u03c6_309_);
v___f_317_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__8___boxed), 18, 17);
lean_closure_set(v___f_317_, 0, v_00_u03c6_309_);
lean_closure_set(v___f_317_, 1, v___x_310_);
lean_closure_set(v___f_317_, 2, v___x_311_);
lean_closure_set(v___f_317_, 3, v___x_312_);
lean_closure_set(v___f_317_, 4, v___x_313_);
lean_closure_set(v___f_317_, 5, v___x_316_);
lean_closure_set(v___f_317_, 6, v_00_u03c3s_299_);
lean_closure_set(v___f_317_, 7, v_hyp_300_);
lean_closure_set(v___f_317_, 8, v_u_298_);
lean_closure_set(v___f_317_, 9, v_toPure_301_);
lean_closure_set(v___f_317_, 10, v_inst_302_);
lean_closure_set(v___f_317_, 11, v_toBind_303_);
lean_closure_set(v___f_317_, 12, v_k_304_);
lean_closure_set(v___f_317_, 13, v___f_305_);
lean_closure_set(v___f_317_, 14, v_inst_306_);
lean_closure_set(v___f_317_, 15, v_inst_307_);
lean_closure_set(v___f_317_, 16, v___f_308_);
v___x_318_ = l_Lean_mkConst(v___x_314_, v___x_316_);
v___x_319_ = l_Lean_mkApp3(v___x_318_, v_00_u03c3s_299_, v_hyp_300_, v_00_u03c6_309_);
v___x_320_ = lean_box(0);
v___x_321_ = lean_alloc_closure((void*)(l_Lean_Meta_synthInstance___boxed), 7, 2);
lean_closure_set(v___x_321_, 0, v___x_319_);
lean_closure_set(v___x_321_, 1, v___x_320_);
v___x_322_ = lean_apply_2(v_inst_302_, lean_box(0), v___x_321_);
v___x_323_ = lean_apply_4(v_toBind_303_, lean_box(0), lean_box(0), v___x_322_, v___f_317_);
return v___x_323_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__0(void){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_324_ = lean_box(0);
v___x_325_ = l_Lean_mkSort(v___x_324_);
return v___x_325_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1(void){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_326_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__0);
v___x_327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_327_, 0, v___x_326_);
return v___x_327_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2(void){
_start:
{
lean_object* v___x_328_; uint8_t v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_328_ = lean_box(0);
v___x_329_ = 0;
v___x_330_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1);
v___x_331_ = lean_box(v___x_329_);
v___x_332_ = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshExprMVar___boxed), 8, 3);
lean_closure_set(v___x_332_, 0, v___x_330_);
lean_closure_set(v___x_332_, 1, v___x_331_);
lean_closure_set(v___x_332_, 2, v___x_328_);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10(lean_object* v_00_u03c3s_333_, lean_object* v_hyp_334_, lean_object* v_toPure_335_, lean_object* v_inst_336_, lean_object* v_toBind_337_, lean_object* v_k_338_, lean_object* v___f_339_, lean_object* v_inst_340_, lean_object* v_inst_341_, lean_object* v___f_342_, lean_object* v_u_343_){
_start:
{
lean_object* v___f_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
lean_inc(v_toBind_337_);
lean_inc(v_inst_336_);
v___f_344_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9), 12, 11);
lean_closure_set(v___f_344_, 0, v_u_343_);
lean_closure_set(v___f_344_, 1, v_00_u03c3s_333_);
lean_closure_set(v___f_344_, 2, v_hyp_334_);
lean_closure_set(v___f_344_, 3, v_toPure_335_);
lean_closure_set(v___f_344_, 4, v_inst_336_);
lean_closure_set(v___f_344_, 5, v_toBind_337_);
lean_closure_set(v___f_344_, 6, v_k_338_);
lean_closure_set(v___f_344_, 7, v___f_339_);
lean_closure_set(v___f_344_, 8, v_inst_340_);
lean_closure_set(v___f_344_, 9, v_inst_341_);
lean_closure_set(v___f_344_, 10, v___f_342_);
v___x_345_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2);
v___x_346_ = lean_apply_2(v_inst_336_, lean_box(0), v___x_345_);
v___x_347_ = lean_apply_4(v_toBind_337_, lean_box(0), lean_box(0), v___x_346_, v___f_344_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg(lean_object* v_inst_350_, lean_object* v_inst_351_, lean_object* v_inst_352_, lean_object* v_00_u03c3s_353_, lean_object* v_hyp_354_, lean_object* v_name_355_, lean_object* v_k_356_){
_start:
{
lean_object* v_toApplicative_357_; lean_object* v_toBind_358_; lean_object* v_toPure_359_; lean_object* v___f_360_; lean_object* v___f_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___f_364_; lean_object* v___x_365_; 
v_toApplicative_357_ = lean_ctor_get(v_inst_350_, 0);
v_toBind_358_ = lean_ctor_get(v_inst_350_, 1);
lean_inc_n(v_toBind_358_, 2);
v_toPure_359_ = lean_ctor_get(v_toApplicative_357_, 1);
lean_inc(v_toPure_359_);
v___f_360_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__0));
v___f_361_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_361_, 0, v_name_355_);
v___x_362_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__1));
lean_inc(v_inst_352_);
v___x_363_ = lean_apply_2(v_inst_352_, lean_box(0), v___x_362_);
v___f_364_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10), 11, 10);
lean_closure_set(v___f_364_, 0, v_00_u03c3s_353_);
lean_closure_set(v___f_364_, 1, v_hyp_354_);
lean_closure_set(v___f_364_, 2, v_toPure_359_);
lean_closure_set(v___f_364_, 3, v_inst_352_);
lean_closure_set(v___f_364_, 4, v_toBind_358_);
lean_closure_set(v___f_364_, 5, v_k_356_);
lean_closure_set(v___f_364_, 6, v___f_360_);
lean_closure_set(v___f_364_, 7, v_inst_351_);
lean_closure_set(v___f_364_, 8, v_inst_350_);
lean_closure_set(v___f_364_, 9, v___f_361_);
v___x_365_ = lean_apply_4(v_toBind_358_, lean_box(0), lean_box(0), v___x_363_, v___f_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore(lean_object* v_m_366_, lean_object* v_00_u03b1_367_, lean_object* v_inst_368_, lean_object* v_inst_369_, lean_object* v_inst_370_, lean_object* v_00_u03c3s_371_, lean_object* v_hyp_372_, lean_object* v_name_373_, lean_object* v_k_374_){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg(v_inst_368_, v_inst_369_, v_inst_370_, v_00_u03c3s_371_, v_hyp_372_, v_name_373_, v_k_374_);
return v___x_375_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_376_ = lean_box(0);
v___x_377_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_378_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_378_, 0, v___x_377_);
lean_ctor_set(v___x_378_, 1, v___x_376_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg(){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_380_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___closed__0);
v___x_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_381_, 0, v___x_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___boxed(lean_object* v___y_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg();
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0(lean_object* v_00_u03b1_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg();
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___boxed(lean_object* v_00_u03b1_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0(v_00_u03b1_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_);
lean_dec(v___y_403_);
lean_dec_ref(v___y_402_);
lean_dec(v___y_401_);
lean_dec_ref(v___y_400_);
lean_dec(v___y_399_);
lean_dec_ref(v___y_398_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___lam__0(lean_object* v_x_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_){
_start:
{
lean_object* v___x_416_; 
lean_inc(v___y_410_);
lean_inc_ref(v___y_409_);
lean_inc(v___y_408_);
lean_inc_ref(v___y_407_);
v___x_416_ = lean_apply_9(v_x_406_, v___y_407_, v___y_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_, v___y_414_, lean_box(0));
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___lam__0___boxed(lean_object* v_x_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___lam__0(v_x_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
lean_dec(v___y_419_);
lean_dec_ref(v___y_418_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg(lean_object* v_mvarId_428_, lean_object* v_x_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_){
_start:
{
lean_object* v___f_439_; lean_object* v___x_440_; 
lean_inc(v___y_433_);
lean_inc_ref(v___y_432_);
lean_inc(v___y_431_);
lean_inc_ref(v___y_430_);
v___f_439_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_439_, 0, v_x_429_);
lean_closure_set(v___f_439_, 1, v___y_430_);
lean_closure_set(v___f_439_, 2, v___y_431_);
lean_closure_set(v___f_439_, 3, v___y_432_);
lean_closure_set(v___f_439_, 4, v___y_433_);
v___x_440_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_428_, v___f_439_, v___y_434_, v___y_435_, v___y_436_, v___y_437_);
if (lean_obj_tag(v___x_440_) == 0)
{
return v___x_440_;
}
else
{
lean_object* v_a_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_448_; 
v_a_441_ = lean_ctor_get(v___x_440_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v___x_440_);
if (v_isSharedCheck_448_ == 0)
{
v___x_443_ = v___x_440_;
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_a_441_);
lean_dec(v___x_440_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_446_; 
if (v_isShared_444_ == 0)
{
v___x_446_ = v___x_443_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v_a_441_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___boxed(lean_object* v_mvarId_449_, lean_object* v_x_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg(v_mvarId_449_, v_x_450_, v___y_451_, v___y_452_, v___y_453_, v___y_454_, v___y_455_, v___y_456_, v___y_457_, v___y_458_);
lean_dec(v___y_458_);
lean_dec_ref(v___y_457_);
lean_dec(v___y_456_);
lean_dec_ref(v___y_455_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
lean_dec(v___y_452_);
lean_dec_ref(v___y_451_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3(lean_object* v_00_u03b1_461_, lean_object* v_mvarId_462_, lean_object* v_x_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_){
_start:
{
lean_object* v___x_473_; 
v___x_473_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg(v_mvarId_462_, v_x_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___boxed(lean_object* v_00_u03b1_474_, lean_object* v_mvarId_475_, lean_object* v_x_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3(v_00_u03b1_474_, v_mvarId_475_, v_x_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
lean_dec(v___y_484_);
lean_dec_ref(v___y_483_);
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
lean_dec(v___y_480_);
lean_dec_ref(v___y_479_);
lean_dec(v___y_478_);
lean_dec_ref(v___y_477_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__0(lean_object* v_a_487_, lean_object* v_snd_488_, lean_object* v_x_489_, lean_object* v_x_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_500_ = l_Lean_Elab_Tactic_Do_ProofMode_FocusResult_restGoal(v_a_487_, v_snd_488_);
lean_inc_ref(v___x_500_);
v___x_501_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v___x_500_);
v___x_502_ = lean_box(0);
v___x_503_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_501_, v___x_502_, v___y_495_, v___y_496_, v___y_497_, v___y_498_);
if (lean_obj_tag(v___x_503_) == 0)
{
lean_object* v_a_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_513_; 
v_a_504_ = lean_ctor_get(v___x_503_, 0);
v_isSharedCheck_513_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_513_ == 0)
{
v___x_506_ = v___x_503_;
v_isShared_507_ = v_isSharedCheck_513_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_a_504_);
lean_dec(v___x_503_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_513_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_511_; 
lean_inc(v_a_504_);
v___x_508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_508_, 0, v___x_500_);
lean_ctor_set(v___x_508_, 1, v_a_504_);
v___x_509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_509_, 0, v_a_504_);
lean_ctor_set(v___x_509_, 1, v___x_508_);
if (v_isShared_507_ == 0)
{
lean_ctor_set(v___x_506_, 0, v___x_509_);
v___x_511_ = v___x_506_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v___x_509_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
return v___x_511_;
}
}
}
else
{
lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_521_; 
lean_dec_ref(v___x_500_);
v_a_514_ = lean_ctor_get(v___x_503_, 0);
v_isSharedCheck_521_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_521_ == 0)
{
v___x_516_ = v___x_503_;
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_dec(v___x_503_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_519_; 
if (v_isShared_517_ == 0)
{
v___x_519_ = v___x_516_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v_a_514_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
return v___x_519_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__0___boxed(lean_object* v_a_522_, lean_object* v_snd_523_, lean_object* v_x_524_, lean_object* v_x_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_){
_start:
{
lean_object* v_res_535_; 
v_res_535_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__0(v_a_522_, v_snd_523_, v_x_524_, v_x_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_, v___y_533_);
lean_dec(v___y_533_);
lean_dec_ref(v___y_532_);
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
lean_dec(v___y_529_);
lean_dec_ref(v___y_528_);
lean_dec(v___y_527_);
lean_dec_ref(v___y_526_);
lean_dec_ref(v_x_525_);
lean_dec_ref(v_x_524_);
lean_dec_ref(v_a_522_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___lam__0(lean_object* v_k_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v_b_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_){
_start:
{
lean_object* v___x_547_; 
lean_inc(v___y_545_);
lean_inc_ref(v___y_544_);
lean_inc(v___y_543_);
lean_inc_ref(v___y_542_);
lean_inc(v___y_540_);
lean_inc_ref(v___y_539_);
lean_inc(v___y_538_);
lean_inc_ref(v___y_537_);
v___x_547_ = lean_apply_10(v_k_536_, v_b_541_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, lean_box(0));
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___lam__0___boxed(lean_object* v_k_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v_b_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___lam__0(v_k_548_, v___y_549_, v___y_550_, v___y_551_, v___y_552_, v_b_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_);
lean_dec(v___y_557_);
lean_dec_ref(v___y_556_);
lean_dec(v___y_555_);
lean_dec_ref(v___y_554_);
lean_dec(v___y_552_);
lean_dec_ref(v___y_551_);
lean_dec(v___y_550_);
lean_dec_ref(v___y_549_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg(lean_object* v_name_560_, uint8_t v_bi_561_, lean_object* v_type_562_, lean_object* v_k_563_, uint8_t v_kind_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_){
_start:
{
lean_object* v___f_574_; lean_object* v___x_575_; 
lean_inc(v___y_568_);
lean_inc_ref(v___y_567_);
lean_inc(v___y_566_);
lean_inc_ref(v___y_565_);
v___f_574_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_574_, 0, v_k_563_);
lean_closure_set(v___f_574_, 1, v___y_565_);
lean_closure_set(v___f_574_, 2, v___y_566_);
lean_closure_set(v___f_574_, 3, v___y_567_);
lean_closure_set(v___f_574_, 4, v___y_568_);
v___x_575_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_560_, v_bi_561_, v_type_562_, v___f_574_, v_kind_564_, v___y_569_, v___y_570_, v___y_571_, v___y_572_);
if (lean_obj_tag(v___x_575_) == 0)
{
return v___x_575_;
}
else
{
lean_object* v_a_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_583_; 
v_a_576_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_583_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_583_ == 0)
{
v___x_578_ = v___x_575_;
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_a_576_);
lean_dec(v___x_575_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_581_; 
if (v_isShared_579_ == 0)
{
v___x_581_ = v___x_578_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_a_576_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
return v___x_581_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_name_584_, lean_object* v_bi_585_, lean_object* v_type_586_, lean_object* v_k_587_, lean_object* v_kind_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_){
_start:
{
uint8_t v_bi_boxed_598_; uint8_t v_kind_boxed_599_; lean_object* v_res_600_; 
v_bi_boxed_598_ = lean_unbox(v_bi_585_);
v_kind_boxed_599_ = lean_unbox(v_kind_588_);
v_res_600_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg(v_name_584_, v_bi_boxed_598_, v_type_586_, v_k_587_, v_kind_boxed_599_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_);
lean_dec(v___y_596_);
lean_dec_ref(v___y_595_);
lean_dec(v___y_594_);
lean_dec_ref(v___y_593_);
lean_dec(v___y_592_);
lean_dec_ref(v___y_591_);
lean_dec(v___y_590_);
lean_dec_ref(v___y_589_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___redArg(lean_object* v_name_601_, lean_object* v_type_602_, lean_object* v_k_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_){
_start:
{
uint8_t v___x_613_; uint8_t v___x_614_; lean_object* v___x_615_; 
v___x_613_ = 0;
v___x_614_ = 0;
v___x_615_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg(v_name_601_, v___x_613_, v_type_602_, v_k_603_, v___x_614_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_, v___y_610_, v___y_611_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___redArg___boxed(lean_object* v_name_616_, lean_object* v_type_617_, lean_object* v_k_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_){
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___redArg(v_name_616_, v_type_617_, v_k_618_, v___y_619_, v___y_620_, v___y_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_);
lean_dec(v___y_626_);
lean_dec_ref(v___y_625_);
lean_dec(v___y_624_);
lean_dec_ref(v___y_623_);
lean_dec(v___y_622_);
lean_dec_ref(v___y_621_);
lean_dec(v___y_620_);
lean_dec_ref(v___y_619_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___lam__0(lean_object* v_a_629_, lean_object* v_snd_630_, lean_object* v_k_631_, lean_object* v___x_632_, lean_object* v___x_633_, lean_object* v___x_634_, lean_object* v___x_635_, lean_object* v___x_636_, lean_object* v_00_u03c3s_637_, lean_object* v_hyp_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_h_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_){
_start:
{
lean_object* v_lctx_651_; lean_object* v___x_652_; uint8_t v___x_653_; lean_object* v___x_654_; 
v_lctx_651_ = lean_ctor_get(v___y_646_, 2);
lean_inc_ref(v_a_629_);
v___x_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_652_, 0, v_a_629_);
v___x_653_ = 0;
lean_inc_ref(v_h_641_);
lean_inc_ref(v_lctx_651_);
v___x_654_ = l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo(v_snd_630_, v_lctx_651_, v_h_641_, v___x_652_, v___x_653_, v___y_646_, v___y_647_, v___y_648_, v___y_649_);
if (lean_obj_tag(v___x_654_) == 0)
{
lean_object* v___x_655_; 
lean_dec_ref_known(v___x_654_, 1);
lean_inc(v___y_649_);
lean_inc_ref(v___y_648_);
lean_inc(v___y_647_);
lean_inc_ref(v___y_646_);
lean_inc(v___y_645_);
lean_inc_ref(v___y_644_);
lean_inc(v___y_643_);
lean_inc_ref(v___y_642_);
lean_inc_ref(v_h_641_);
lean_inc_ref(v_a_629_);
v___x_655_ = lean_apply_11(v_k_631_, v_a_629_, v_h_641_, v___y_642_, v___y_643_, v___y_644_, v___y_645_, v___y_646_, v___y_647_, v___y_648_, v___y_649_, lean_box(0));
if (lean_obj_tag(v___x_655_) == 0)
{
lean_object* v_a_656_; lean_object* v_snd_657_; lean_object* v_fst_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_713_; 
v_a_656_ = lean_ctor_get(v___x_655_, 0);
lean_inc(v_a_656_);
lean_dec_ref_known(v___x_655_, 1);
v_snd_657_ = lean_ctor_get(v_a_656_, 1);
v_fst_658_ = lean_ctor_get(v_a_656_, 0);
v_isSharedCheck_713_ = !lean_is_exclusive(v_a_656_);
if (v_isSharedCheck_713_ == 0)
{
v___x_660_ = v_a_656_;
v_isShared_661_ = v_isSharedCheck_713_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_snd_657_);
lean_inc(v_fst_658_);
lean_dec(v_a_656_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_713_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v_fst_662_; lean_object* v_snd_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_712_; 
v_fst_662_ = lean_ctor_get(v_snd_657_, 0);
v_snd_663_ = lean_ctor_get(v_snd_657_, 1);
v_isSharedCheck_712_ = !lean_is_exclusive(v_snd_657_);
if (v_isSharedCheck_712_ == 0)
{
v___x_665_ = v_snd_657_;
v_isShared_666_ = v_isSharedCheck_712_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_snd_663_);
lean_inc(v_fst_662_);
lean_dec(v_snd_657_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_712_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; uint8_t v___x_670_; uint8_t v___x_671_; lean_object* v___x_672_; 
v___x_667_ = lean_unsigned_to_nat(1u);
v___x_668_ = lean_mk_empty_array_with_capacity(v___x_667_);
v___x_669_ = lean_array_push(v___x_668_, v_h_641_);
v___x_670_ = 1;
v___x_671_ = 1;
v___x_672_ = l_Lean_Meta_mkLambdaFVars(v___x_669_, v_snd_663_, v___x_653_, v___x_670_, v___x_653_, v___x_670_, v___x_671_, v___y_646_, v___y_647_, v___y_648_, v___y_649_);
lean_dec_ref(v___x_669_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_703_; 
v_a_673_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_703_ == 0)
{
v___x_675_ = v___x_672_;
v_isShared_676_ = v_isSharedCheck_703_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_a_673_);
lean_dec(v___x_672_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_703_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v_u_677_; lean_object* v_00_u03c3s_678_; lean_object* v_hyps_679_; lean_object* v_target_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_702_; 
v_u_677_ = lean_ctor_get(v_fst_662_, 0);
v_00_u03c3s_678_ = lean_ctor_get(v_fst_662_, 1);
v_hyps_679_ = lean_ctor_get(v_fst_662_, 2);
v_target_680_ = lean_ctor_get(v_fst_662_, 3);
v_isSharedCheck_702_ = !lean_is_exclusive(v_fst_662_);
if (v_isSharedCheck_702_ == 0)
{
v___x_682_ = v_fst_662_;
v_isShared_683_ = v_isSharedCheck_702_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_target_680_);
lean_inc(v_hyps_679_);
lean_inc(v_00_u03c3s_678_);
lean_inc(v_u_677_);
lean_dec(v_fst_662_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_702_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v_prf_688_; lean_object* v___x_689_; lean_object* v_goal_691_; 
v___x_684_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0));
v___x_685_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__1));
v___x_686_ = l_Lean_Name_mkStr6(v___x_632_, v___x_633_, v___x_634_, v___x_635_, v___x_684_, v___x_685_);
v___x_687_ = l_Lean_mkConst(v___x_686_, v___x_636_);
lean_inc_ref(v_target_680_);
lean_inc_ref(v_hyp_638_);
lean_inc_ref(v_hyps_679_);
lean_inc_ref(v_00_u03c3s_637_);
v_prf_688_ = l_Lean_mkApp7(v___x_687_, v_00_u03c3s_637_, v_hyps_679_, v_hyp_638_, v_target_680_, v_a_629_, v_a_639_, v_a_673_);
v___x_689_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_a_640_, v_00_u03c3s_637_, v_hyps_679_, v_hyp_638_);
if (v_isShared_683_ == 0)
{
lean_ctor_set(v___x_682_, 2, v___x_689_);
v_goal_691_ = v___x_682_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_u_677_);
lean_ctor_set(v_reuseFailAlloc_701_, 1, v_00_u03c3s_678_);
lean_ctor_set(v_reuseFailAlloc_701_, 2, v___x_689_);
lean_ctor_set(v_reuseFailAlloc_701_, 3, v_target_680_);
v_goal_691_ = v_reuseFailAlloc_701_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
lean_object* v___x_693_; 
if (v_isShared_666_ == 0)
{
lean_ctor_set(v___x_665_, 1, v_prf_688_);
lean_ctor_set(v___x_665_, 0, v_goal_691_);
v___x_693_ = v___x_665_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_goal_691_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v_prf_688_);
v___x_693_ = v_reuseFailAlloc_700_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
lean_object* v___x_695_; 
if (v_isShared_661_ == 0)
{
lean_ctor_set(v___x_660_, 1, v___x_693_);
v___x_695_ = v___x_660_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_fst_658_);
lean_ctor_set(v_reuseFailAlloc_699_, 1, v___x_693_);
v___x_695_ = v_reuseFailAlloc_699_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
lean_object* v___x_697_; 
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 0, v___x_695_);
v___x_697_ = v___x_675_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v___x_695_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_711_; 
lean_del_object(v___x_665_);
lean_dec(v_fst_662_);
lean_del_object(v___x_660_);
lean_dec(v_fst_658_);
lean_dec(v_a_640_);
lean_dec_ref(v_a_639_);
lean_dec_ref(v_hyp_638_);
lean_dec_ref(v_00_u03c3s_637_);
lean_dec(v___x_636_);
lean_dec_ref(v___x_635_);
lean_dec_ref(v___x_634_);
lean_dec_ref(v___x_633_);
lean_dec_ref(v___x_632_);
lean_dec_ref(v_a_629_);
v_a_704_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_711_ == 0)
{
v___x_706_ = v___x_672_;
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_a_704_);
lean_dec(v___x_672_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_709_; 
if (v_isShared_707_ == 0)
{
v___x_709_ = v___x_706_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v_a_704_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_h_641_);
lean_dec(v_a_640_);
lean_dec_ref(v_a_639_);
lean_dec_ref(v_hyp_638_);
lean_dec_ref(v_00_u03c3s_637_);
lean_dec(v___x_636_);
lean_dec_ref(v___x_635_);
lean_dec_ref(v___x_634_);
lean_dec_ref(v___x_633_);
lean_dec_ref(v___x_632_);
lean_dec_ref(v_a_629_);
return v___x_655_;
}
}
else
{
lean_object* v_a_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_721_; 
lean_dec_ref(v_h_641_);
lean_dec(v_a_640_);
lean_dec_ref(v_a_639_);
lean_dec_ref(v_hyp_638_);
lean_dec_ref(v_00_u03c3s_637_);
lean_dec(v___x_636_);
lean_dec_ref(v___x_635_);
lean_dec_ref(v___x_634_);
lean_dec_ref(v___x_633_);
lean_dec_ref(v___x_632_);
lean_dec_ref(v_k_631_);
lean_dec_ref(v_a_629_);
v_a_714_ = lean_ctor_get(v___x_654_, 0);
v_isSharedCheck_721_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_721_ == 0)
{
v___x_716_ = v___x_654_;
v_isShared_717_ = v_isSharedCheck_721_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_a_714_);
lean_dec(v___x_654_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_721_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v___x_719_; 
if (v_isShared_717_ == 0)
{
v___x_719_ = v___x_716_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v_a_714_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
return v___x_719_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___lam__0___boxed(lean_object** _args){
lean_object* v_a_722_ = _args[0];
lean_object* v_snd_723_ = _args[1];
lean_object* v_k_724_ = _args[2];
lean_object* v___x_725_ = _args[3];
lean_object* v___x_726_ = _args[4];
lean_object* v___x_727_ = _args[5];
lean_object* v___x_728_ = _args[6];
lean_object* v___x_729_ = _args[7];
lean_object* v_00_u03c3s_730_ = _args[8];
lean_object* v_hyp_731_ = _args[9];
lean_object* v_a_732_ = _args[10];
lean_object* v_a_733_ = _args[11];
lean_object* v_h_734_ = _args[12];
lean_object* v___y_735_ = _args[13];
lean_object* v___y_736_ = _args[14];
lean_object* v___y_737_ = _args[15];
lean_object* v___y_738_ = _args[16];
lean_object* v___y_739_ = _args[17];
lean_object* v___y_740_ = _args[18];
lean_object* v___y_741_ = _args[19];
lean_object* v___y_742_ = _args[20];
lean_object* v___y_743_ = _args[21];
_start:
{
lean_object* v_res_744_; 
v_res_744_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___lam__0(v_a_722_, v_snd_723_, v_k_724_, v___x_725_, v___x_726_, v___x_727_, v___x_728_, v___x_729_, v_00_u03c3s_730_, v_hyp_731_, v_a_732_, v_a_733_, v_h_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_);
lean_dec(v___y_742_);
lean_dec_ref(v___y_741_);
lean_dec(v___y_740_);
lean_dec_ref(v___y_739_);
lean_dec(v___y_738_);
lean_dec_ref(v___y_737_);
lean_dec(v___y_736_);
lean_dec_ref(v___y_735_);
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg(lean_object* v_00_u03c3s_745_, lean_object* v_hyp_746_, lean_object* v_name_747_, lean_object* v_k_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_){
_start:
{
lean_object* v___x_758_; 
v___x_758_ = l_Lean_Meta_mkFreshLevelMVar(v___y_753_, v___y_754_, v___y_755_, v___y_756_);
if (lean_obj_tag(v___x_758_) == 0)
{
lean_object* v_a_759_; lean_object* v___x_760_; uint8_t v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v_a_759_ = lean_ctor_get(v___x_758_, 0);
lean_inc(v_a_759_);
lean_dec_ref_known(v___x_758_, 1);
v___x_760_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1);
v___x_761_ = 0;
v___x_762_ = lean_box(0);
v___x_763_ = l_Lean_Meta_mkFreshExprMVar(v___x_760_, v___x_761_, v___x_762_, v___y_753_, v___y_754_, v___y_755_, v___y_756_);
if (lean_obj_tag(v___x_763_) == 0)
{
lean_object* v_a_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; 
v_a_764_ = lean_ctor_get(v___x_763_, 0);
lean_inc_n(v_a_764_, 2);
lean_dec_ref_known(v___x_763_, 1);
v___x_765_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0));
v___x_766_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1));
v___x_767_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2));
v___x_768_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3));
v___x_769_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5));
v___x_770_ = lean_box(0);
lean_inc(v_a_759_);
v___x_771_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_771_, 0, v_a_759_);
lean_ctor_set(v___x_771_, 1, v___x_770_);
lean_inc_ref(v___x_771_);
v___x_772_ = l_Lean_mkConst(v___x_769_, v___x_771_);
lean_inc_ref(v_hyp_746_);
lean_inc_ref(v_00_u03c3s_745_);
v___x_773_ = l_Lean_mkApp3(v___x_772_, v_00_u03c3s_745_, v_hyp_746_, v_a_764_);
v___x_774_ = lean_box(0);
v___x_775_ = l_Lean_Meta_synthInstance(v___x_773_, v___x_774_, v___y_753_, v___y_754_, v___y_755_, v___y_756_);
if (lean_obj_tag(v___x_775_) == 0)
{
lean_object* v_a_776_; lean_object* v___x_777_; 
v_a_776_ = lean_ctor_get(v___x_775_, 0);
lean_inc(v_a_776_);
lean_dec_ref_known(v___x_775_, 1);
v___x_777_ = l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName(v_name_747_, v___y_755_, v___y_756_);
if (lean_obj_tag(v___x_777_) == 0)
{
lean_object* v_a_778_; lean_object* v_fst_779_; lean_object* v_snd_780_; lean_object* v___f_781_; lean_object* v___x_782_; 
v_a_778_ = lean_ctor_get(v___x_777_, 0);
lean_inc(v_a_778_);
lean_dec_ref_known(v___x_777_, 1);
v_fst_779_ = lean_ctor_get(v_a_778_, 0);
lean_inc(v_fst_779_);
v_snd_780_ = lean_ctor_get(v_a_778_, 1);
lean_inc(v_snd_780_);
lean_dec(v_a_778_);
lean_inc(v_a_764_);
v___f_781_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___lam__0___boxed), 22, 12);
lean_closure_set(v___f_781_, 0, v_a_764_);
lean_closure_set(v___f_781_, 1, v_snd_780_);
lean_closure_set(v___f_781_, 2, v_k_748_);
lean_closure_set(v___f_781_, 3, v___x_765_);
lean_closure_set(v___f_781_, 4, v___x_766_);
lean_closure_set(v___f_781_, 5, v___x_767_);
lean_closure_set(v___f_781_, 6, v___x_768_);
lean_closure_set(v___f_781_, 7, v___x_771_);
lean_closure_set(v___f_781_, 8, v_00_u03c3s_745_);
lean_closure_set(v___f_781_, 9, v_hyp_746_);
lean_closure_set(v___f_781_, 10, v_a_776_);
lean_closure_set(v___f_781_, 11, v_a_759_);
v___x_782_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___redArg(v_fst_779_, v_a_764_, v___f_781_, v___y_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_, v___y_755_, v___y_756_);
return v___x_782_;
}
else
{
lean_object* v_a_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_790_; 
lean_dec(v_a_776_);
lean_dec_ref_known(v___x_771_, 2);
lean_dec(v_a_764_);
lean_dec(v_a_759_);
lean_dec_ref(v_k_748_);
lean_dec_ref(v_hyp_746_);
lean_dec_ref(v_00_u03c3s_745_);
v_a_783_ = lean_ctor_get(v___x_777_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_790_ == 0)
{
v___x_785_ = v___x_777_;
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_a_783_);
lean_dec(v___x_777_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_788_; 
if (v_isShared_786_ == 0)
{
v___x_788_ = v___x_785_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_a_783_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
}
}
else
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_798_; 
lean_dec_ref_known(v___x_771_, 2);
lean_dec(v_a_764_);
lean_dec(v_a_759_);
lean_dec_ref(v_k_748_);
lean_dec(v_name_747_);
lean_dec_ref(v_hyp_746_);
lean_dec_ref(v_00_u03c3s_745_);
v_a_791_ = lean_ctor_get(v___x_775_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_775_);
if (v_isSharedCheck_798_ == 0)
{
v___x_793_ = v___x_775_;
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_775_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___x_796_; 
if (v_isShared_794_ == 0)
{
v___x_796_ = v___x_793_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_a_791_);
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
else
{
lean_object* v_a_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_806_; 
lean_dec(v_a_759_);
lean_dec_ref(v_k_748_);
lean_dec(v_name_747_);
lean_dec_ref(v_hyp_746_);
lean_dec_ref(v_00_u03c3s_745_);
v_a_799_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_806_ == 0)
{
v___x_801_ = v___x_763_;
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_a_799_);
lean_dec(v___x_763_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_804_; 
if (v_isShared_802_ == 0)
{
v___x_804_ = v___x_801_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_a_799_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
lean_dec_ref(v_k_748_);
lean_dec(v_name_747_);
lean_dec_ref(v_hyp_746_);
lean_dec_ref(v_00_u03c3s_745_);
v_a_807_ = lean_ctor_get(v___x_758_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_758_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_758_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_758_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___boxed(lean_object* v_00_u03c3s_815_, lean_object* v_hyp_816_, lean_object* v_name_817_, lean_object* v_k_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_){
_start:
{
lean_object* v_res_828_; 
v_res_828_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg(v_00_u03c3s_815_, v_hyp_816_, v_name_817_, v_k_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_, v___y_825_, v___y_826_);
lean_dec(v___y_826_);
lean_dec_ref(v___y_825_);
lean_dec(v___y_824_);
lean_dec_ref(v___y_823_);
lean_dec(v___y_822_);
lean_dec_ref(v___y_821_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
return v_res_828_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7_spec__8___redArg(lean_object* v_x_829_, lean_object* v_x_830_, lean_object* v_x_831_, lean_object* v_x_832_){
_start:
{
lean_object* v_ks_833_; lean_object* v_vs_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_858_; 
v_ks_833_ = lean_ctor_get(v_x_829_, 0);
v_vs_834_ = lean_ctor_get(v_x_829_, 1);
v_isSharedCheck_858_ = !lean_is_exclusive(v_x_829_);
if (v_isSharedCheck_858_ == 0)
{
v___x_836_ = v_x_829_;
v_isShared_837_ = v_isSharedCheck_858_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_vs_834_);
lean_inc(v_ks_833_);
lean_dec(v_x_829_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_858_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
lean_object* v___x_838_; uint8_t v___x_839_; 
v___x_838_ = lean_array_get_size(v_ks_833_);
v___x_839_ = lean_nat_dec_lt(v_x_830_, v___x_838_);
if (v___x_839_ == 0)
{
lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_843_; 
lean_dec(v_x_830_);
v___x_840_ = lean_array_push(v_ks_833_, v_x_831_);
v___x_841_ = lean_array_push(v_vs_834_, v_x_832_);
if (v_isShared_837_ == 0)
{
lean_ctor_set(v___x_836_, 1, v___x_841_);
lean_ctor_set(v___x_836_, 0, v___x_840_);
v___x_843_ = v___x_836_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v___x_840_);
lean_ctor_set(v_reuseFailAlloc_844_, 1, v___x_841_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
return v___x_843_;
}
}
else
{
lean_object* v_k_x27_845_; uint8_t v___x_846_; 
v_k_x27_845_ = lean_array_fget_borrowed(v_ks_833_, v_x_830_);
v___x_846_ = l_Lean_instBEqMVarId_beq(v_x_831_, v_k_x27_845_);
if (v___x_846_ == 0)
{
lean_object* v___x_848_; 
if (v_isShared_837_ == 0)
{
v___x_848_ = v___x_836_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v_ks_833_);
lean_ctor_set(v_reuseFailAlloc_852_, 1, v_vs_834_);
v___x_848_ = v_reuseFailAlloc_852_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_849_ = lean_unsigned_to_nat(1u);
v___x_850_ = lean_nat_add(v_x_830_, v___x_849_);
lean_dec(v_x_830_);
v_x_829_ = v___x_848_;
v_x_830_ = v___x_850_;
goto _start;
}
}
else
{
lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_856_; 
v___x_853_ = lean_array_fset(v_ks_833_, v_x_830_, v_x_831_);
v___x_854_ = lean_array_fset(v_vs_834_, v_x_830_, v_x_832_);
lean_dec(v_x_830_);
if (v_isShared_837_ == 0)
{
lean_ctor_set(v___x_836_, 1, v___x_854_);
lean_ctor_set(v___x_836_, 0, v___x_853_);
v___x_856_ = v___x_836_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v___x_853_);
lean_ctor_set(v_reuseFailAlloc_857_, 1, v___x_854_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
return v___x_856_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7___redArg(lean_object* v_n_859_, lean_object* v_k_860_, lean_object* v_v_861_){
_start:
{
lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_862_ = lean_unsigned_to_nat(0u);
v___x_863_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7_spec__8___redArg(v_n_859_, v___x_862_, v_k_860_, v_v_861_);
return v___x_863_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__0(void){
_start:
{
size_t v___x_864_; size_t v___x_865_; size_t v___x_866_; 
v___x_864_ = ((size_t)5ULL);
v___x_865_ = ((size_t)1ULL);
v___x_866_ = lean_usize_shift_left(v___x_865_, v___x_864_);
return v___x_866_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__1(void){
_start:
{
size_t v___x_867_; size_t v___x_868_; size_t v___x_869_; 
v___x_867_ = ((size_t)1ULL);
v___x_868_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__0);
v___x_869_ = lean_usize_sub(v___x_868_, v___x_867_);
return v___x_869_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_870_; 
v___x_870_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg(lean_object* v_x_871_, size_t v_x_872_, size_t v_x_873_, lean_object* v_x_874_, lean_object* v_x_875_){
_start:
{
if (lean_obj_tag(v_x_871_) == 0)
{
lean_object* v_es_876_; size_t v___x_877_; size_t v___x_878_; size_t v___x_879_; size_t v___x_880_; lean_object* v_j_881_; lean_object* v___x_882_; uint8_t v___x_883_; 
v_es_876_ = lean_ctor_get(v_x_871_, 0);
v___x_877_ = ((size_t)5ULL);
v___x_878_ = ((size_t)1ULL);
v___x_879_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__1);
v___x_880_ = lean_usize_land(v_x_872_, v___x_879_);
v_j_881_ = lean_usize_to_nat(v___x_880_);
v___x_882_ = lean_array_get_size(v_es_876_);
v___x_883_ = lean_nat_dec_lt(v_j_881_, v___x_882_);
if (v___x_883_ == 0)
{
lean_dec(v_j_881_);
lean_dec(v_x_875_);
lean_dec(v_x_874_);
return v_x_871_;
}
else
{
lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_920_; 
lean_inc_ref(v_es_876_);
v_isSharedCheck_920_ = !lean_is_exclusive(v_x_871_);
if (v_isSharedCheck_920_ == 0)
{
lean_object* v_unused_921_; 
v_unused_921_ = lean_ctor_get(v_x_871_, 0);
lean_dec(v_unused_921_);
v___x_885_ = v_x_871_;
v_isShared_886_ = v_isSharedCheck_920_;
goto v_resetjp_884_;
}
else
{
lean_dec(v_x_871_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_920_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v_v_887_; lean_object* v___x_888_; lean_object* v_xs_x27_889_; lean_object* v___y_891_; 
v_v_887_ = lean_array_fget(v_es_876_, v_j_881_);
v___x_888_ = lean_box(0);
v_xs_x27_889_ = lean_array_fset(v_es_876_, v_j_881_, v___x_888_);
switch(lean_obj_tag(v_v_887_))
{
case 0:
{
lean_object* v_key_896_; lean_object* v_val_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_907_; 
v_key_896_ = lean_ctor_get(v_v_887_, 0);
v_val_897_ = lean_ctor_get(v_v_887_, 1);
v_isSharedCheck_907_ = !lean_is_exclusive(v_v_887_);
if (v_isSharedCheck_907_ == 0)
{
v___x_899_ = v_v_887_;
v_isShared_900_ = v_isSharedCheck_907_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_val_897_);
lean_inc(v_key_896_);
lean_dec(v_v_887_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_907_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
uint8_t v___x_901_; 
v___x_901_ = l_Lean_instBEqMVarId_beq(v_x_874_, v_key_896_);
if (v___x_901_ == 0)
{
lean_object* v___x_902_; lean_object* v___x_903_; 
lean_del_object(v___x_899_);
v___x_902_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_896_, v_val_897_, v_x_874_, v_x_875_);
v___x_903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_903_, 0, v___x_902_);
v___y_891_ = v___x_903_;
goto v___jp_890_;
}
else
{
lean_object* v___x_905_; 
lean_dec(v_val_897_);
lean_dec(v_key_896_);
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 1, v_x_875_);
lean_ctor_set(v___x_899_, 0, v_x_874_);
v___x_905_ = v___x_899_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_x_874_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v_x_875_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
v___y_891_ = v___x_905_;
goto v___jp_890_;
}
}
}
}
case 1:
{
lean_object* v_node_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_918_; 
v_node_908_ = lean_ctor_get(v_v_887_, 0);
v_isSharedCheck_918_ = !lean_is_exclusive(v_v_887_);
if (v_isSharedCheck_918_ == 0)
{
v___x_910_ = v_v_887_;
v_isShared_911_ = v_isSharedCheck_918_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_node_908_);
lean_dec(v_v_887_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_918_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
size_t v___x_912_; size_t v___x_913_; lean_object* v___x_914_; lean_object* v___x_916_; 
v___x_912_ = lean_usize_shift_right(v_x_872_, v___x_877_);
v___x_913_ = lean_usize_add(v_x_873_, v___x_878_);
v___x_914_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg(v_node_908_, v___x_912_, v___x_913_, v_x_874_, v_x_875_);
if (v_isShared_911_ == 0)
{
lean_ctor_set(v___x_910_, 0, v___x_914_);
v___x_916_ = v___x_910_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v___x_914_);
v___x_916_ = v_reuseFailAlloc_917_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
v___y_891_ = v___x_916_;
goto v___jp_890_;
}
}
}
default: 
{
lean_object* v___x_919_; 
v___x_919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_919_, 0, v_x_874_);
lean_ctor_set(v___x_919_, 1, v_x_875_);
v___y_891_ = v___x_919_;
goto v___jp_890_;
}
}
v___jp_890_:
{
lean_object* v___x_892_; lean_object* v___x_894_; 
v___x_892_ = lean_array_fset(v_xs_x27_889_, v_j_881_, v___y_891_);
lean_dec(v_j_881_);
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 0, v___x_892_);
v___x_894_ = v___x_885_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v___x_892_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
}
}
else
{
lean_object* v_ks_922_; lean_object* v_vs_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_943_; 
v_ks_922_ = lean_ctor_get(v_x_871_, 0);
v_vs_923_ = lean_ctor_get(v_x_871_, 1);
v_isSharedCheck_943_ = !lean_is_exclusive(v_x_871_);
if (v_isSharedCheck_943_ == 0)
{
v___x_925_ = v_x_871_;
v_isShared_926_ = v_isSharedCheck_943_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_vs_923_);
lean_inc(v_ks_922_);
lean_dec(v_x_871_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_943_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_928_; 
if (v_isShared_926_ == 0)
{
v___x_928_ = v___x_925_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_ks_922_);
lean_ctor_set(v_reuseFailAlloc_942_, 1, v_vs_923_);
v___x_928_ = v_reuseFailAlloc_942_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
lean_object* v_newNode_929_; uint8_t v___y_931_; size_t v___x_937_; uint8_t v___x_938_; 
v_newNode_929_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7___redArg(v___x_928_, v_x_874_, v_x_875_);
v___x_937_ = ((size_t)7ULL);
v___x_938_ = lean_usize_dec_le(v___x_937_, v_x_873_);
if (v___x_938_ == 0)
{
lean_object* v___x_939_; lean_object* v___x_940_; uint8_t v___x_941_; 
v___x_939_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_929_);
v___x_940_ = lean_unsigned_to_nat(4u);
v___x_941_ = lean_nat_dec_lt(v___x_939_, v___x_940_);
lean_dec(v___x_939_);
v___y_931_ = v___x_941_;
goto v___jp_930_;
}
else
{
v___y_931_ = v___x_938_;
goto v___jp_930_;
}
v___jp_930_:
{
if (v___y_931_ == 0)
{
lean_object* v_ks_932_; lean_object* v_vs_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; 
v_ks_932_ = lean_ctor_get(v_newNode_929_, 0);
lean_inc_ref(v_ks_932_);
v_vs_933_ = lean_ctor_get(v_newNode_929_, 1);
lean_inc_ref(v_vs_933_);
lean_dec_ref(v_newNode_929_);
v___x_934_ = lean_unsigned_to_nat(0u);
v___x_935_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__2);
v___x_936_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___redArg(v_x_873_, v_ks_932_, v_vs_933_, v___x_934_, v___x_935_);
lean_dec_ref(v_vs_933_);
lean_dec_ref(v_ks_932_);
return v___x_936_;
}
else
{
return v_newNode_929_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___redArg(size_t v_depth_944_, lean_object* v_keys_945_, lean_object* v_vals_946_, lean_object* v_i_947_, lean_object* v_entries_948_){
_start:
{
lean_object* v___x_949_; uint8_t v___x_950_; 
v___x_949_ = lean_array_get_size(v_keys_945_);
v___x_950_ = lean_nat_dec_lt(v_i_947_, v___x_949_);
if (v___x_950_ == 0)
{
lean_dec(v_i_947_);
return v_entries_948_;
}
else
{
lean_object* v_k_951_; lean_object* v_v_952_; uint64_t v___x_953_; size_t v_h_954_; size_t v___x_955_; lean_object* v___x_956_; size_t v___x_957_; size_t v___x_958_; size_t v___x_959_; size_t v_h_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v_k_951_ = lean_array_fget_borrowed(v_keys_945_, v_i_947_);
v_v_952_ = lean_array_fget_borrowed(v_vals_946_, v_i_947_);
v___x_953_ = l_Lean_instHashableMVarId_hash(v_k_951_);
v_h_954_ = lean_uint64_to_usize(v___x_953_);
v___x_955_ = ((size_t)5ULL);
v___x_956_ = lean_unsigned_to_nat(1u);
v___x_957_ = ((size_t)1ULL);
v___x_958_ = lean_usize_sub(v_depth_944_, v___x_957_);
v___x_959_ = lean_usize_mul(v___x_955_, v___x_958_);
v_h_960_ = lean_usize_shift_right(v_h_954_, v___x_959_);
v___x_961_ = lean_nat_add(v_i_947_, v___x_956_);
lean_dec(v_i_947_);
lean_inc(v_v_952_);
lean_inc(v_k_951_);
v___x_962_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg(v_entries_948_, v_h_960_, v_depth_944_, v_k_951_, v_v_952_);
v_i_947_ = v___x_961_;
v_entries_948_ = v___x_962_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___redArg___boxed(lean_object* v_depth_964_, lean_object* v_keys_965_, lean_object* v_vals_966_, lean_object* v_i_967_, lean_object* v_entries_968_){
_start:
{
size_t v_depth_boxed_969_; lean_object* v_res_970_; 
v_depth_boxed_969_ = lean_unbox_usize(v_depth_964_);
lean_dec(v_depth_964_);
v_res_970_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___redArg(v_depth_boxed_969_, v_keys_965_, v_vals_966_, v_i_967_, v_entries_968_);
lean_dec_ref(v_vals_966_);
lean_dec_ref(v_keys_965_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___boxed(lean_object* v_x_971_, lean_object* v_x_972_, lean_object* v_x_973_, lean_object* v_x_974_, lean_object* v_x_975_){
_start:
{
size_t v_x_10390__boxed_976_; size_t v_x_10391__boxed_977_; lean_object* v_res_978_; 
v_x_10390__boxed_976_ = lean_unbox_usize(v_x_972_);
lean_dec(v_x_972_);
v_x_10391__boxed_977_ = lean_unbox_usize(v_x_973_);
lean_dec(v_x_973_);
v_res_978_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg(v_x_971_, v_x_10390__boxed_976_, v_x_10391__boxed_977_, v_x_974_, v_x_975_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3___redArg(lean_object* v_x_979_, lean_object* v_x_980_, lean_object* v_x_981_){
_start:
{
uint64_t v___x_982_; size_t v___x_983_; size_t v___x_984_; lean_object* v___x_985_; 
v___x_982_ = l_Lean_instHashableMVarId_hash(v_x_980_);
v___x_983_ = lean_uint64_to_usize(v___x_982_);
v___x_984_ = ((size_t)1ULL);
v___x_985_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg(v_x_979_, v___x_983_, v___x_984_, v_x_980_, v_x_981_);
return v___x_985_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg(lean_object* v_mvarId_986_, lean_object* v_val_987_, lean_object* v___y_988_){
_start:
{
lean_object* v___x_990_; lean_object* v_mctx_991_; lean_object* v_cache_992_; lean_object* v_zetaDeltaFVarIds_993_; lean_object* v_postponed_994_; lean_object* v_diag_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1023_; 
v___x_990_ = lean_st_ref_take(v___y_988_);
v_mctx_991_ = lean_ctor_get(v___x_990_, 0);
v_cache_992_ = lean_ctor_get(v___x_990_, 1);
v_zetaDeltaFVarIds_993_ = lean_ctor_get(v___x_990_, 2);
v_postponed_994_ = lean_ctor_get(v___x_990_, 3);
v_diag_995_ = lean_ctor_get(v___x_990_, 4);
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_997_ = v___x_990_;
v_isShared_998_ = v_isSharedCheck_1023_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_diag_995_);
lean_inc(v_postponed_994_);
lean_inc(v_zetaDeltaFVarIds_993_);
lean_inc(v_cache_992_);
lean_inc(v_mctx_991_);
lean_dec(v___x_990_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1023_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v_depth_999_; lean_object* v_levelAssignDepth_1000_; lean_object* v_lmvarCounter_1001_; lean_object* v_mvarCounter_1002_; lean_object* v_lDecls_1003_; lean_object* v_decls_1004_; lean_object* v_userNames_1005_; lean_object* v_lAssignment_1006_; lean_object* v_eAssignment_1007_; lean_object* v_dAssignment_1008_; lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1022_; 
v_depth_999_ = lean_ctor_get(v_mctx_991_, 0);
v_levelAssignDepth_1000_ = lean_ctor_get(v_mctx_991_, 1);
v_lmvarCounter_1001_ = lean_ctor_get(v_mctx_991_, 2);
v_mvarCounter_1002_ = lean_ctor_get(v_mctx_991_, 3);
v_lDecls_1003_ = lean_ctor_get(v_mctx_991_, 4);
v_decls_1004_ = lean_ctor_get(v_mctx_991_, 5);
v_userNames_1005_ = lean_ctor_get(v_mctx_991_, 6);
v_lAssignment_1006_ = lean_ctor_get(v_mctx_991_, 7);
v_eAssignment_1007_ = lean_ctor_get(v_mctx_991_, 8);
v_dAssignment_1008_ = lean_ctor_get(v_mctx_991_, 9);
v_isSharedCheck_1022_ = !lean_is_exclusive(v_mctx_991_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1010_ = v_mctx_991_;
v_isShared_1011_ = v_isSharedCheck_1022_;
goto v_resetjp_1009_;
}
else
{
lean_inc(v_dAssignment_1008_);
lean_inc(v_eAssignment_1007_);
lean_inc(v_lAssignment_1006_);
lean_inc(v_userNames_1005_);
lean_inc(v_decls_1004_);
lean_inc(v_lDecls_1003_);
lean_inc(v_mvarCounter_1002_);
lean_inc(v_lmvarCounter_1001_);
lean_inc(v_levelAssignDepth_1000_);
lean_inc(v_depth_999_);
lean_dec(v_mctx_991_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1022_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
lean_object* v___x_1012_; lean_object* v___x_1014_; 
v___x_1012_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3___redArg(v_eAssignment_1007_, v_mvarId_986_, v_val_987_);
if (v_isShared_1011_ == 0)
{
lean_ctor_set(v___x_1010_, 8, v___x_1012_);
v___x_1014_ = v___x_1010_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_depth_999_);
lean_ctor_set(v_reuseFailAlloc_1021_, 1, v_levelAssignDepth_1000_);
lean_ctor_set(v_reuseFailAlloc_1021_, 2, v_lmvarCounter_1001_);
lean_ctor_set(v_reuseFailAlloc_1021_, 3, v_mvarCounter_1002_);
lean_ctor_set(v_reuseFailAlloc_1021_, 4, v_lDecls_1003_);
lean_ctor_set(v_reuseFailAlloc_1021_, 5, v_decls_1004_);
lean_ctor_set(v_reuseFailAlloc_1021_, 6, v_userNames_1005_);
lean_ctor_set(v_reuseFailAlloc_1021_, 7, v_lAssignment_1006_);
lean_ctor_set(v_reuseFailAlloc_1021_, 8, v___x_1012_);
lean_ctor_set(v_reuseFailAlloc_1021_, 9, v_dAssignment_1008_);
v___x_1014_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
lean_object* v___x_1016_; 
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 0, v___x_1014_);
v___x_1016_ = v___x_997_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v___x_1014_);
lean_ctor_set(v_reuseFailAlloc_1020_, 1, v_cache_992_);
lean_ctor_set(v_reuseFailAlloc_1020_, 2, v_zetaDeltaFVarIds_993_);
lean_ctor_set(v_reuseFailAlloc_1020_, 3, v_postponed_994_);
lean_ctor_set(v_reuseFailAlloc_1020_, 4, v_diag_995_);
v___x_1016_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1017_ = lean_st_ref_set(v___y_988_, v___x_1016_);
v___x_1018_ = lean_box(0);
v___x_1019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1019_, 0, v___x_1018_);
return v___x_1019_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg___boxed(lean_object* v_mvarId_1024_, lean_object* v_val_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_){
_start:
{
lean_object* v_res_1028_; 
v_res_1028_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg(v_mvarId_1024_, v_val_1025_, v___y_1026_);
lean_dec(v___y_1026_);
return v_res_1028_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1(lean_object* v_snd_1030_, lean_object* v_hyp_1031_, lean_object* v___x_1032_, lean_object* v_fst_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_){
_start:
{
lean_object* v___x_1043_; 
lean_inc(v_hyp_1031_);
lean_inc_ref(v_snd_1030_);
v___x_1043_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHypWithInfo(v_snd_1030_, v_hyp_1031_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_);
if (lean_obj_tag(v___x_1043_) == 0)
{
lean_object* v_a_1044_; lean_object* v_ref_1045_; lean_object* v_00_u03c3s_1046_; lean_object* v_focusHyp_1047_; lean_object* v___f_1048_; uint8_t v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; 
v_a_1044_ = lean_ctor_get(v___x_1043_, 0);
lean_inc_n(v_a_1044_, 2);
lean_dec_ref_known(v___x_1043_, 1);
v_ref_1045_ = lean_ctor_get(v___y_1040_, 5);
v_00_u03c3s_1046_ = lean_ctor_get(v_snd_1030_, 1);
v_focusHyp_1047_ = lean_ctor_get(v_a_1044_, 0);
lean_inc_ref(v_snd_1030_);
v___f_1048_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__0___boxed), 13, 2);
lean_closure_set(v___f_1048_, 0, v_a_1044_);
lean_closure_set(v___f_1048_, 1, v_snd_1030_);
v___x_1049_ = 0;
v___x_1050_ = l_Lean_SourceInfo_fromRef(v_ref_1045_, v___x_1049_);
v___x_1051_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___closed__0));
v___x_1052_ = l_Lean_Name_mkStr2(v___x_1032_, v___x_1051_);
v___x_1053_ = l_Lean_Syntax_node1(v___x_1050_, v___x_1052_, v_hyp_1031_);
lean_inc_ref(v_focusHyp_1047_);
lean_inc_ref(v_00_u03c3s_1046_);
v___x_1054_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg(v_00_u03c3s_1046_, v_focusHyp_1047_, v___x_1053_, v___f_1048_, v___y_1034_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_);
if (lean_obj_tag(v___x_1054_) == 0)
{
lean_object* v_a_1055_; lean_object* v_snd_1056_; lean_object* v_fst_1057_; lean_object* v_snd_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1070_; 
v_a_1055_ = lean_ctor_get(v___x_1054_, 0);
lean_inc(v_a_1055_);
lean_dec_ref_known(v___x_1054_, 1);
v_snd_1056_ = lean_ctor_get(v_a_1055_, 1);
lean_inc(v_snd_1056_);
v_fst_1057_ = lean_ctor_get(v_a_1055_, 0);
lean_inc(v_fst_1057_);
lean_dec(v_a_1055_);
v_snd_1058_ = lean_ctor_get(v_snd_1056_, 1);
v_isSharedCheck_1070_ = !lean_is_exclusive(v_snd_1056_);
if (v_isSharedCheck_1070_ == 0)
{
lean_object* v_unused_1071_; 
v_unused_1071_ = lean_ctor_get(v_snd_1056_, 0);
lean_dec(v_unused_1071_);
v___x_1060_ = v_snd_1056_;
v_isShared_1061_ = v_isSharedCheck_1070_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_snd_1058_);
lean_dec(v_snd_1056_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1070_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1067_; 
v___x_1062_ = l_Lean_Elab_Tactic_Do_ProofMode_FocusResult_rewriteHyps(v_a_1044_, v_snd_1030_, v_snd_1058_);
v___x_1063_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg(v_fst_1033_, v___x_1062_, v___y_1039_);
lean_dec_ref(v___x_1063_);
v___x_1064_ = l_Lean_Expr_mvarId_x21(v_fst_1057_);
lean_dec(v_fst_1057_);
v___x_1065_ = lean_box(0);
if (v_isShared_1061_ == 0)
{
lean_ctor_set_tag(v___x_1060_, 1);
lean_ctor_set(v___x_1060_, 1, v___x_1065_);
lean_ctor_set(v___x_1060_, 0, v___x_1064_);
v___x_1067_ = v___x_1060_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v___x_1064_);
lean_ctor_set(v_reuseFailAlloc_1069_, 1, v___x_1065_);
v___x_1067_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
lean_object* v___x_1068_; 
v___x_1068_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_1067_, v___y_1035_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_);
return v___x_1068_;
}
}
}
else
{
lean_object* v_a_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1079_; 
lean_dec(v_a_1044_);
lean_dec(v_fst_1033_);
lean_dec_ref(v_snd_1030_);
v_a_1072_ = lean_ctor_get(v___x_1054_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_1054_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1074_ = v___x_1054_;
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_a_1072_);
lean_dec(v___x_1054_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v___x_1077_; 
if (v_isShared_1075_ == 0)
{
v___x_1077_ = v___x_1074_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_a_1072_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
}
else
{
lean_object* v_a_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1087_; 
lean_dec(v_fst_1033_);
lean_dec_ref(v___x_1032_);
lean_dec(v_hyp_1031_);
lean_dec_ref(v_snd_1030_);
v_a_1080_ = lean_ctor_get(v___x_1043_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_1043_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1082_ = v___x_1043_;
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_a_1080_);
lean_dec(v___x_1043_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1085_; 
if (v_isShared_1083_ == 0)
{
v___x_1085_ = v___x_1082_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_a_1080_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___boxed(lean_object* v_snd_1088_, lean_object* v_hyp_1089_, lean_object* v___x_1090_, lean_object* v_fst_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1(v_snd_1088_, v_hyp_1089_, v___x_1090_, v_fst_1091_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_);
lean_dec(v___y_1099_);
lean_dec_ref(v___y_1098_);
lean_dec(v___y_1097_);
lean_dec_ref(v___y_1096_);
lean_dec(v___y_1095_);
lean_dec_ref(v___y_1094_);
lean_dec(v___y_1093_);
lean_dec_ref(v___y_1092_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure(lean_object* v_x_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_){
_start:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; uint8_t v___x_1122_; 
v___x_1120_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0));
v___x_1121_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3));
lean_inc(v_x_1110_);
v___x_1122_ = l_Lean_Syntax_isOfKind(v_x_1110_, v___x_1121_);
if (v___x_1122_ == 0)
{
lean_object* v___x_1123_; 
lean_dec(v_x_1110_);
v___x_1123_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg();
return v___x_1123_;
}
else
{
lean_object* v___x_1124_; 
v___x_1124_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(v_a_1112_, v_a_1115_, v_a_1116_, v_a_1117_, v_a_1118_);
if (lean_obj_tag(v___x_1124_) == 0)
{
lean_object* v_a_1125_; lean_object* v_fst_1126_; lean_object* v_snd_1127_; lean_object* v___x_1128_; lean_object* v_hyp_1129_; lean_object* v___f_1130_; lean_object* v___x_1131_; 
v_a_1125_ = lean_ctor_get(v___x_1124_, 0);
lean_inc(v_a_1125_);
lean_dec_ref_known(v___x_1124_, 1);
v_fst_1126_ = lean_ctor_get(v_a_1125_, 0);
lean_inc_n(v_fst_1126_, 2);
v_snd_1127_ = lean_ctor_get(v_a_1125_, 1);
lean_inc(v_snd_1127_);
lean_dec(v_a_1125_);
v___x_1128_ = lean_unsigned_to_nat(1u);
v_hyp_1129_ = l_Lean_Syntax_getArg(v_x_1110_, v___x_1128_);
lean_dec(v_x_1110_);
v___f_1130_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___boxed), 13, 4);
lean_closure_set(v___f_1130_, 0, v_snd_1127_);
lean_closure_set(v___f_1130_, 1, v_hyp_1129_);
lean_closure_set(v___f_1130_, 2, v___x_1120_);
lean_closure_set(v___f_1130_, 3, v_fst_1126_);
v___x_1131_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg(v_fst_1126_, v___f_1130_, v_a_1111_, v_a_1112_, v_a_1113_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_, v_a_1118_);
return v___x_1131_;
}
else
{
lean_object* v_a_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1139_; 
lean_dec(v_x_1110_);
v_a_1132_ = lean_ctor_get(v___x_1124_, 0);
v_isSharedCheck_1139_ = !lean_is_exclusive(v___x_1124_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1134_ = v___x_1124_;
v_isShared_1135_ = v_isSharedCheck_1139_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_a_1132_);
lean_dec(v___x_1124_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1139_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
lean_object* v___x_1137_; 
if (v_isShared_1135_ == 0)
{
v___x_1137_ = v___x_1134_;
goto v_reusejp_1136_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v_a_1132_);
v___x_1137_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1136_;
}
v_reusejp_1136_:
{
return v___x_1137_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___boxed(lean_object* v_x_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_){
_start:
{
lean_object* v_res_1150_; 
v_res_1150_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMPure(v_x_1140_, v_a_1141_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_, v_a_1148_);
lean_dec(v_a_1148_);
lean_dec_ref(v_a_1147_);
lean_dec(v_a_1146_);
lean_dec_ref(v_a_1145_);
lean_dec(v_a_1144_);
lean_dec_ref(v_a_1143_);
lean_dec(v_a_1142_);
lean_dec_ref(v_a_1141_);
return v_res_1150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1(lean_object* v_00_u03b1_1151_, lean_object* v_00_u03c3s_1152_, lean_object* v_hyp_1153_, lean_object* v_name_1154_, lean_object* v_k_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_){
_start:
{
lean_object* v___x_1165_; 
v___x_1165_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg(v_00_u03c3s_1152_, v_hyp_1153_, v_name_1154_, v_k_1155_, v___y_1156_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_);
return v___x_1165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___boxed(lean_object* v_00_u03b1_1166_, lean_object* v_00_u03c3s_1167_, lean_object* v_hyp_1168_, lean_object* v_name_1169_, lean_object* v_k_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_){
_start:
{
lean_object* v_res_1180_; 
v_res_1180_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1(v_00_u03b1_1166_, v_00_u03c3s_1167_, v_hyp_1168_, v_name_1169_, v_k_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_, v___y_1178_);
lean_dec(v___y_1178_);
lean_dec_ref(v___y_1177_);
lean_dec(v___y_1176_);
lean_dec_ref(v___y_1175_);
lean_dec(v___y_1174_);
lean_dec_ref(v___y_1173_);
lean_dec(v___y_1172_);
lean_dec_ref(v___y_1171_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2(lean_object* v_mvarId_1181_, lean_object* v_val_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
lean_object* v___x_1192_; 
v___x_1192_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg(v_mvarId_1181_, v_val_1182_, v___y_1188_);
return v___x_1192_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___boxed(lean_object* v_mvarId_1193_, lean_object* v_val_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_){
_start:
{
lean_object* v_res_1204_; 
v_res_1204_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2(v_mvarId_1193_, v_val_1194_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_);
lean_dec(v___y_1202_);
lean_dec_ref(v___y_1201_);
lean_dec(v___y_1200_);
lean_dec_ref(v___y_1199_);
lean_dec(v___y_1198_);
lean_dec_ref(v___y_1197_);
lean_dec(v___y_1196_);
lean_dec_ref(v___y_1195_);
return v_res_1204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3(lean_object* v_00_u03b1_1205_, lean_object* v_name_1206_, uint8_t v_bi_1207_, lean_object* v_type_1208_, lean_object* v_k_1209_, uint8_t v_kind_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_){
_start:
{
lean_object* v___x_1220_; 
v___x_1220_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg(v_name_1206_, v_bi_1207_, v_type_1208_, v_k_1209_, v_kind_1210_, v___y_1211_, v___y_1212_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_);
return v___x_1220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b1_1221_, lean_object* v_name_1222_, lean_object* v_bi_1223_, lean_object* v_type_1224_, lean_object* v_k_1225_, lean_object* v_kind_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_){
_start:
{
uint8_t v_bi_boxed_1236_; uint8_t v_kind_boxed_1237_; lean_object* v_res_1238_; 
v_bi_boxed_1236_ = lean_unbox(v_bi_1223_);
v_kind_boxed_1237_ = lean_unbox(v_kind_1226_);
v_res_1238_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3(v_00_u03b1_1221_, v_name_1222_, v_bi_boxed_1236_, v_type_1224_, v_k_1225_, v_kind_boxed_1237_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_);
lean_dec(v___y_1234_);
lean_dec_ref(v___y_1233_);
lean_dec(v___y_1232_);
lean_dec_ref(v___y_1231_);
lean_dec(v___y_1230_);
lean_dec_ref(v___y_1229_);
lean_dec(v___y_1228_);
lean_dec_ref(v___y_1227_);
return v_res_1238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1(lean_object* v_00_u03b1_1239_, lean_object* v_name_1240_, lean_object* v_type_1241_, lean_object* v_k_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_){
_start:
{
lean_object* v___x_1252_; 
v___x_1252_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___redArg(v_name_1240_, v_type_1241_, v_k_1242_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_);
return v___x_1252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___boxed(lean_object* v_00_u03b1_1253_, lean_object* v_name_1254_, lean_object* v_type_1255_, lean_object* v_k_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_){
_start:
{
lean_object* v_res_1266_; 
v_res_1266_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1(v_00_u03b1_1253_, v_name_1254_, v_type_1255_, v_k_1256_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_);
lean_dec(v___y_1264_);
lean_dec_ref(v___y_1263_);
lean_dec(v___y_1262_);
lean_dec_ref(v___y_1261_);
lean_dec(v___y_1260_);
lean_dec_ref(v___y_1259_);
lean_dec(v___y_1258_);
lean_dec_ref(v___y_1257_);
return v_res_1266_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3(lean_object* v_00_u03b2_1267_, lean_object* v_x_1268_, lean_object* v_x_1269_, lean_object* v_x_1270_){
_start:
{
lean_object* v___x_1271_; 
v___x_1271_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3___redArg(v_x_1268_, v_x_1269_, v_x_1270_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6(lean_object* v_00_u03b2_1272_, lean_object* v_x_1273_, size_t v_x_1274_, size_t v_x_1275_, lean_object* v_x_1276_, lean_object* v_x_1277_){
_start:
{
lean_object* v___x_1278_; 
v___x_1278_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg(v_x_1273_, v_x_1274_, v_x_1275_, v_x_1276_, v_x_1277_);
return v___x_1278_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___boxed(lean_object* v_00_u03b2_1279_, lean_object* v_x_1280_, lean_object* v_x_1281_, lean_object* v_x_1282_, lean_object* v_x_1283_, lean_object* v_x_1284_){
_start:
{
size_t v_x_10929__boxed_1285_; size_t v_x_10930__boxed_1286_; lean_object* v_res_1287_; 
v_x_10929__boxed_1285_ = lean_unbox_usize(v_x_1281_);
lean_dec(v_x_1281_);
v_x_10930__boxed_1286_ = lean_unbox_usize(v_x_1282_);
lean_dec(v_x_1282_);
v_res_1287_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6(v_00_u03b2_1279_, v_x_1280_, v_x_10929__boxed_1285_, v_x_10930__boxed_1286_, v_x_1283_, v_x_1284_);
return v_res_1287_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7(lean_object* v_00_u03b2_1288_, lean_object* v_n_1289_, lean_object* v_k_1290_, lean_object* v_v_1291_){
_start:
{
lean_object* v___x_1292_; 
v___x_1292_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7___redArg(v_n_1289_, v_k_1290_, v_v_1291_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8(lean_object* v_00_u03b2_1293_, size_t v_depth_1294_, lean_object* v_keys_1295_, lean_object* v_vals_1296_, lean_object* v_heq_1297_, lean_object* v_i_1298_, lean_object* v_entries_1299_){
_start:
{
lean_object* v___x_1300_; 
v___x_1300_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___redArg(v_depth_1294_, v_keys_1295_, v_vals_1296_, v_i_1298_, v_entries_1299_);
return v___x_1300_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___boxed(lean_object* v_00_u03b2_1301_, lean_object* v_depth_1302_, lean_object* v_keys_1303_, lean_object* v_vals_1304_, lean_object* v_heq_1305_, lean_object* v_i_1306_, lean_object* v_entries_1307_){
_start:
{
size_t v_depth_boxed_1308_; lean_object* v_res_1309_; 
v_depth_boxed_1308_ = lean_unbox_usize(v_depth_1302_);
lean_dec(v_depth_1302_);
v_res_1309_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8(v_00_u03b2_1301_, v_depth_boxed_1308_, v_keys_1303_, v_vals_1304_, v_heq_1305_, v_i_1306_, v_entries_1307_);
lean_dec_ref(v_vals_1304_);
lean_dec_ref(v_keys_1303_);
return v_res_1309_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7_spec__8(lean_object* v_00_u03b2_1310_, lean_object* v_x_1311_, lean_object* v_x_1312_, lean_object* v_x_1313_, lean_object* v_x_1314_){
_start:
{
lean_object* v___x_1315_; 
v___x_1315_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7_spec__8___redArg(v_x_1311_, v_x_1312_, v_x_1313_, v_x_1314_);
return v___x_1315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0(lean_object* v___x_1317_, lean_object* v___x_1318_, lean_object* v___x_1319_, lean_object* v___x_1320_, lean_object* v___x_1321_, lean_object* v_00_u03c3s_1322_, lean_object* v_hyps_1323_, lean_object* v_target_1324_, lean_object* v_00_u03c6_1325_, lean_object* v_inst_1326_, lean_object* v_toPure_1327_, lean_object* v_____x_1328_){
_start:
{
lean_object* v_fst_1329_; lean_object* v_snd_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1343_; 
v_fst_1329_ = lean_ctor_get(v_____x_1328_, 0);
v_snd_1330_ = lean_ctor_get(v_____x_1328_, 1);
v_isSharedCheck_1343_ = !lean_is_exclusive(v_____x_1328_);
if (v_isSharedCheck_1343_ == 0)
{
v___x_1332_ = v_____x_1328_;
v_isShared_1333_ = v_isSharedCheck_1343_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_snd_1330_);
lean_inc(v_fst_1329_);
lean_dec(v_____x_1328_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1343_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v_prf_1338_; lean_object* v___x_1340_; 
v___x_1334_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0));
v___x_1335_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0));
v___x_1336_ = l_Lean_Name_mkStr6(v___x_1317_, v___x_1318_, v___x_1319_, v___x_1320_, v___x_1334_, v___x_1335_);
v___x_1337_ = l_Lean_mkConst(v___x_1336_, v___x_1321_);
v_prf_1338_ = l_Lean_mkApp6(v___x_1337_, v_00_u03c3s_1322_, v_hyps_1323_, v_target_1324_, v_00_u03c6_1325_, v_inst_1326_, v_snd_1330_);
if (v_isShared_1333_ == 0)
{
lean_ctor_set(v___x_1332_, 1, v_prf_1338_);
v___x_1340_ = v___x_1332_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v_fst_1329_);
lean_ctor_set(v_reuseFailAlloc_1342_, 1, v_prf_1338_);
v___x_1340_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
lean_object* v___x_1341_; 
v___x_1341_ = lean_apply_2(v_toPure_1327_, lean_box(0), v___x_1340_);
return v___x_1341_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__1(lean_object* v___x_1344_, lean_object* v___x_1345_, lean_object* v___x_1346_, lean_object* v___x_1347_, lean_object* v___x_1348_, lean_object* v_00_u03c3s_1349_, lean_object* v_hyps_1350_, lean_object* v_target_1351_, lean_object* v_00_u03c6_1352_, lean_object* v_toPure_1353_, lean_object* v_k_1354_, lean_object* v_toBind_1355_, lean_object* v_inst_1356_){
_start:
{
lean_object* v___f_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; 
lean_inc_ref(v_00_u03c6_1352_);
v___f_1357_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0), 12, 11);
lean_closure_set(v___f_1357_, 0, v___x_1344_);
lean_closure_set(v___f_1357_, 1, v___x_1345_);
lean_closure_set(v___f_1357_, 2, v___x_1346_);
lean_closure_set(v___f_1357_, 3, v___x_1347_);
lean_closure_set(v___f_1357_, 4, v___x_1348_);
lean_closure_set(v___f_1357_, 5, v_00_u03c3s_1349_);
lean_closure_set(v___f_1357_, 6, v_hyps_1350_);
lean_closure_set(v___f_1357_, 7, v_target_1351_);
lean_closure_set(v___f_1357_, 8, v_00_u03c6_1352_);
lean_closure_set(v___f_1357_, 9, v_inst_1356_);
lean_closure_set(v___f_1357_, 10, v_toPure_1353_);
v___x_1358_ = lean_apply_1(v_k_1354_, v_00_u03c6_1352_);
v___x_1359_ = lean_apply_4(v_toBind_1355_, lean_box(0), lean_box(0), v___x_1358_, v___f_1357_);
return v___x_1359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__2(lean_object* v_goal_1360_, lean_object* v_toPure_1361_, lean_object* v_k_1362_, lean_object* v_toBind_1363_, lean_object* v_inst_1364_, lean_object* v_00_u03c6_1365_){
_start:
{
lean_object* v_u_1366_; lean_object* v_00_u03c3s_1367_; lean_object* v_hyps_1368_; lean_object* v_target_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___f_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; 
v_u_1366_ = lean_ctor_get(v_goal_1360_, 0);
lean_inc(v_u_1366_);
v_00_u03c3s_1367_ = lean_ctor_get(v_goal_1360_, 1);
lean_inc_ref_n(v_00_u03c3s_1367_, 2);
v_hyps_1368_ = lean_ctor_get(v_goal_1360_, 2);
lean_inc_ref(v_hyps_1368_);
v_target_1369_ = lean_ctor_get(v_goal_1360_, 3);
lean_inc_ref_n(v_target_1369_, 2);
lean_dec_ref(v_goal_1360_);
v___x_1370_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0));
v___x_1371_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1));
v___x_1372_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2));
v___x_1373_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3));
v___x_1374_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5));
v___x_1375_ = lean_box(0);
v___x_1376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1376_, 0, v_u_1366_);
lean_ctor_set(v___x_1376_, 1, v___x_1375_);
lean_inc(v_toBind_1363_);
lean_inc_ref(v_00_u03c6_1365_);
lean_inc_ref(v___x_1376_);
v___f_1377_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__1), 13, 12);
lean_closure_set(v___f_1377_, 0, v___x_1370_);
lean_closure_set(v___f_1377_, 1, v___x_1371_);
lean_closure_set(v___f_1377_, 2, v___x_1372_);
lean_closure_set(v___f_1377_, 3, v___x_1373_);
lean_closure_set(v___f_1377_, 4, v___x_1376_);
lean_closure_set(v___f_1377_, 5, v_00_u03c3s_1367_);
lean_closure_set(v___f_1377_, 6, v_hyps_1368_);
lean_closure_set(v___f_1377_, 7, v_target_1369_);
lean_closure_set(v___f_1377_, 8, v_00_u03c6_1365_);
lean_closure_set(v___f_1377_, 9, v_toPure_1361_);
lean_closure_set(v___f_1377_, 10, v_k_1362_);
lean_closure_set(v___f_1377_, 11, v_toBind_1363_);
v___x_1378_ = l_Lean_mkConst(v___x_1374_, v___x_1376_);
v___x_1379_ = l_Lean_mkApp3(v___x_1378_, v_00_u03c3s_1367_, v_target_1369_, v_00_u03c6_1365_);
v___x_1380_ = lean_box(0);
v___x_1381_ = lean_alloc_closure((void*)(l_Lean_Meta_synthInstance___boxed), 7, 2);
lean_closure_set(v___x_1381_, 0, v___x_1379_);
lean_closure_set(v___x_1381_, 1, v___x_1380_);
v___x_1382_ = lean_apply_2(v_inst_1364_, lean_box(0), v___x_1381_);
v___x_1383_ = lean_apply_4(v_toBind_1363_, lean_box(0), lean_box(0), v___x_1382_, v___f_1377_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg(lean_object* v_inst_1384_, lean_object* v_inst_1385_, lean_object* v_goal_1386_, lean_object* v_k_1387_){
_start:
{
lean_object* v_toApplicative_1388_; lean_object* v_toBind_1389_; lean_object* v_toPure_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___f_1393_; lean_object* v___x_1394_; 
v_toApplicative_1388_ = lean_ctor_get(v_inst_1384_, 0);
lean_inc_ref(v_toApplicative_1388_);
v_toBind_1389_ = lean_ctor_get(v_inst_1384_, 1);
lean_inc_n(v_toBind_1389_, 2);
lean_dec_ref(v_inst_1384_);
v_toPure_1390_ = lean_ctor_get(v_toApplicative_1388_, 1);
lean_inc(v_toPure_1390_);
lean_dec_ref(v_toApplicative_1388_);
v___x_1391_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2);
lean_inc(v_inst_1385_);
v___x_1392_ = lean_apply_2(v_inst_1385_, lean_box(0), v___x_1391_);
v___f_1393_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__2), 6, 5);
lean_closure_set(v___f_1393_, 0, v_goal_1386_);
lean_closure_set(v___f_1393_, 1, v_toPure_1390_);
lean_closure_set(v___f_1393_, 2, v_k_1387_);
lean_closure_set(v___f_1393_, 3, v_toBind_1389_);
lean_closure_set(v___f_1393_, 4, v_inst_1385_);
v___x_1394_ = lean_apply_4(v_toBind_1389_, lean_box(0), lean_box(0), v___x_1392_, v___f_1393_);
return v___x_1394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore(lean_object* v_m_1395_, lean_object* v_00_u03b1_1396_, lean_object* v_inst_1397_, lean_object* v_inst_1398_, lean_object* v_goal_1399_, lean_object* v_k_1400_){
_start:
{
lean_object* v___x_1401_; 
v___x_1401_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg(v_inst_1397_, v_inst_1398_, v_goal_1399_, v_k_1400_);
return v___x_1401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg(lean_object* v_goal_1409_, lean_object* v_k_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_){
_start:
{
lean_object* v___x_1420_; uint8_t v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; 
v___x_1420_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1);
v___x_1421_ = 0;
v___x_1422_ = lean_box(0);
v___x_1423_ = l_Lean_Meta_mkFreshExprMVar(v___x_1420_, v___x_1421_, v___x_1422_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_);
if (lean_obj_tag(v___x_1423_) == 0)
{
lean_object* v_a_1424_; lean_object* v_u_1425_; lean_object* v_00_u03c3s_1426_; lean_object* v_hyps_1427_; lean_object* v_target_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; 
v_a_1424_ = lean_ctor_get(v___x_1423_, 0);
lean_inc_n(v_a_1424_, 2);
lean_dec_ref_known(v___x_1423_, 1);
v_u_1425_ = lean_ctor_get(v_goal_1409_, 0);
lean_inc(v_u_1425_);
v_00_u03c3s_1426_ = lean_ctor_get(v_goal_1409_, 1);
lean_inc_ref_n(v_00_u03c3s_1426_, 2);
v_hyps_1427_ = lean_ctor_get(v_goal_1409_, 2);
lean_inc_ref(v_hyps_1427_);
v_target_1428_ = lean_ctor_get(v_goal_1409_, 3);
lean_inc_ref_n(v_target_1428_, 2);
lean_dec_ref(v_goal_1409_);
v___x_1429_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5));
v___x_1430_ = lean_box(0);
v___x_1431_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1431_, 0, v_u_1425_);
lean_ctor_set(v___x_1431_, 1, v___x_1430_);
lean_inc_ref(v___x_1431_);
v___x_1432_ = l_Lean_mkConst(v___x_1429_, v___x_1431_);
v___x_1433_ = l_Lean_mkApp3(v___x_1432_, v_00_u03c3s_1426_, v_target_1428_, v_a_1424_);
v___x_1434_ = lean_box(0);
v___x_1435_ = l_Lean_Meta_synthInstance(v___x_1433_, v___x_1434_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_);
if (lean_obj_tag(v___x_1435_) == 0)
{
lean_object* v_a_1436_; lean_object* v___x_1437_; 
v_a_1436_ = lean_ctor_get(v___x_1435_, 0);
lean_inc(v_a_1436_);
lean_dec_ref_known(v___x_1435_, 1);
lean_inc(v___y_1418_);
lean_inc_ref(v___y_1417_);
lean_inc(v___y_1416_);
lean_inc_ref(v___y_1415_);
lean_inc(v___y_1414_);
lean_inc_ref(v___y_1413_);
lean_inc(v___y_1412_);
lean_inc_ref(v___y_1411_);
lean_inc(v_a_1424_);
v___x_1437_ = lean_apply_10(v_k_1410_, v_a_1424_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_, lean_box(0));
if (lean_obj_tag(v___x_1437_) == 0)
{
lean_object* v_a_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1457_; 
v_a_1438_ = lean_ctor_get(v___x_1437_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1437_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1440_ = v___x_1437_;
v_isShared_1441_ = v_isSharedCheck_1457_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_a_1438_);
lean_dec(v___x_1437_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1457_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v_fst_1442_; lean_object* v_snd_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1456_; 
v_fst_1442_ = lean_ctor_get(v_a_1438_, 0);
v_snd_1443_ = lean_ctor_get(v_a_1438_, 1);
v_isSharedCheck_1456_ = !lean_is_exclusive(v_a_1438_);
if (v_isSharedCheck_1456_ == 0)
{
v___x_1445_ = v_a_1438_;
v_isShared_1446_ = v_isSharedCheck_1456_;
goto v_resetjp_1444_;
}
else
{
lean_inc(v_snd_1443_);
lean_inc(v_fst_1442_);
lean_dec(v_a_1438_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1456_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v_prf_1449_; lean_object* v___x_1451_; 
v___x_1447_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0));
v___x_1448_ = l_Lean_mkConst(v___x_1447_, v___x_1431_);
v_prf_1449_ = l_Lean_mkApp6(v___x_1448_, v_00_u03c3s_1426_, v_hyps_1427_, v_target_1428_, v_a_1424_, v_a_1436_, v_snd_1443_);
if (v_isShared_1446_ == 0)
{
lean_ctor_set(v___x_1445_, 1, v_prf_1449_);
v___x_1451_ = v___x_1445_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v_fst_1442_);
lean_ctor_set(v_reuseFailAlloc_1455_, 1, v_prf_1449_);
v___x_1451_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
lean_object* v___x_1453_; 
if (v_isShared_1441_ == 0)
{
lean_ctor_set(v___x_1440_, 0, v___x_1451_);
v___x_1453_ = v___x_1440_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v___x_1451_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
}
}
else
{
lean_dec(v_a_1436_);
lean_dec_ref_known(v___x_1431_, 2);
lean_dec_ref(v_target_1428_);
lean_dec_ref(v_hyps_1427_);
lean_dec_ref(v_00_u03c3s_1426_);
lean_dec(v_a_1424_);
return v___x_1437_;
}
}
else
{
lean_object* v_a_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1465_; 
lean_dec_ref_known(v___x_1431_, 2);
lean_dec_ref(v_target_1428_);
lean_dec_ref(v_hyps_1427_);
lean_dec_ref(v_00_u03c3s_1426_);
lean_dec(v_a_1424_);
lean_dec_ref(v_k_1410_);
v_a_1458_ = lean_ctor_get(v___x_1435_, 0);
v_isSharedCheck_1465_ = !lean_is_exclusive(v___x_1435_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1460_ = v___x_1435_;
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_a_1458_);
lean_dec(v___x_1435_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v___x_1463_; 
if (v_isShared_1461_ == 0)
{
v___x_1463_ = v___x_1460_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v_a_1458_);
v___x_1463_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
return v___x_1463_;
}
}
}
}
else
{
lean_object* v_a_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1473_; 
lean_dec_ref(v_k_1410_);
lean_dec_ref(v_goal_1409_);
v_a_1466_ = lean_ctor_get(v___x_1423_, 0);
v_isSharedCheck_1473_ = !lean_is_exclusive(v___x_1423_);
if (v_isSharedCheck_1473_ == 0)
{
v___x_1468_ = v___x_1423_;
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_a_1466_);
lean_dec(v___x_1423_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___x_1471_; 
if (v_isShared_1469_ == 0)
{
v___x_1471_ = v___x_1468_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v_a_1466_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___boxed(lean_object* v_goal_1474_, lean_object* v_k_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_){
_start:
{
lean_object* v_res_1485_; 
v_res_1485_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg(v_goal_1474_, v_k_1475_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_);
lean_dec(v___y_1483_);
lean_dec_ref(v___y_1482_);
lean_dec(v___y_1481_);
lean_dec_ref(v___y_1480_);
lean_dec(v___y_1479_);
lean_dec_ref(v___y_1478_);
lean_dec(v___y_1477_);
lean_dec_ref(v___y_1476_);
return v_res_1485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0(lean_object* v_00_u03b1_1486_, lean_object* v_goal_1487_, lean_object* v_k_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_){
_start:
{
lean_object* v___x_1498_; 
v___x_1498_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg(v_goal_1487_, v_k_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_);
return v___x_1498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___boxed(lean_object* v_00_u03b1_1499_, lean_object* v_goal_1500_, lean_object* v_k_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
lean_object* v_res_1511_; 
v_res_1511_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0(v_00_u03b1_1499_, v_goal_1500_, v_k_1501_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_);
lean_dec(v___y_1509_);
lean_dec_ref(v___y_1508_);
lean_dec(v___y_1507_);
lean_dec_ref(v___y_1506_);
lean_dec(v___y_1505_);
lean_dec_ref(v___y_1504_);
lean_dec(v___y_1503_);
lean_dec_ref(v___y_1502_);
return v_res_1511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__0(lean_object* v_fst_1512_, lean_object* v_00_u03c6_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
lean_object* v___x_1523_; 
v___x_1523_ = l_Lean_MVarId_getTag(v_fst_1512_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
if (lean_obj_tag(v___x_1523_) == 0)
{
lean_object* v_a_1524_; lean_object* v___x_1525_; 
v_a_1524_ = lean_ctor_get(v___x_1523_, 0);
lean_inc(v_a_1524_);
lean_dec_ref_known(v___x_1523_, 1);
v___x_1525_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_00_u03c6_1513_, v_a_1524_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
if (lean_obj_tag(v___x_1525_) == 0)
{
lean_object* v_a_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1535_; 
v_a_1526_ = lean_ctor_get(v___x_1525_, 0);
v_isSharedCheck_1535_ = !lean_is_exclusive(v___x_1525_);
if (v_isSharedCheck_1535_ == 0)
{
v___x_1528_ = v___x_1525_;
v_isShared_1529_ = v_isSharedCheck_1535_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_a_1526_);
lean_dec(v___x_1525_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1535_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1533_; 
v___x_1530_ = l_Lean_Expr_mvarId_x21(v_a_1526_);
v___x_1531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1531_, 0, v___x_1530_);
lean_ctor_set(v___x_1531_, 1, v_a_1526_);
if (v_isShared_1529_ == 0)
{
lean_ctor_set(v___x_1528_, 0, v___x_1531_);
v___x_1533_ = v___x_1528_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v___x_1531_);
v___x_1533_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
return v___x_1533_;
}
}
}
else
{
lean_object* v_a_1536_; lean_object* v___x_1538_; uint8_t v_isShared_1539_; uint8_t v_isSharedCheck_1543_; 
v_a_1536_ = lean_ctor_get(v___x_1525_, 0);
v_isSharedCheck_1543_ = !lean_is_exclusive(v___x_1525_);
if (v_isSharedCheck_1543_ == 0)
{
v___x_1538_ = v___x_1525_;
v_isShared_1539_ = v_isSharedCheck_1543_;
goto v_resetjp_1537_;
}
else
{
lean_inc(v_a_1536_);
lean_dec(v___x_1525_);
v___x_1538_ = lean_box(0);
v_isShared_1539_ = v_isSharedCheck_1543_;
goto v_resetjp_1537_;
}
v_resetjp_1537_:
{
lean_object* v___x_1541_; 
if (v_isShared_1539_ == 0)
{
v___x_1541_ = v___x_1538_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v_a_1536_);
v___x_1541_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
return v___x_1541_;
}
}
}
}
else
{
lean_object* v_a_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1551_; 
lean_dec_ref(v_00_u03c6_1513_);
v_a_1544_ = lean_ctor_get(v___x_1523_, 0);
v_isSharedCheck_1551_ = !lean_is_exclusive(v___x_1523_);
if (v_isSharedCheck_1551_ == 0)
{
v___x_1546_ = v___x_1523_;
v_isShared_1547_ = v_isSharedCheck_1551_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_a_1544_);
lean_dec(v___x_1523_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1551_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v___x_1549_; 
if (v_isShared_1547_ == 0)
{
v___x_1549_ = v___x_1546_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v_a_1544_);
v___x_1549_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
return v___x_1549_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__0___boxed(lean_object* v_fst_1552_, lean_object* v_00_u03c6_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__0(v_fst_1552_, v_00_u03c6_1553_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_);
lean_dec(v___y_1561_);
lean_dec_ref(v___y_1560_);
lean_dec(v___y_1559_);
lean_dec_ref(v___y_1558_);
lean_dec(v___y_1557_);
lean_dec_ref(v___y_1556_);
lean_dec(v___y_1555_);
lean_dec_ref(v___y_1554_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__1(lean_object* v_snd_1564_, lean_object* v___f_1565_, lean_object* v_fst_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_){
_start:
{
lean_object* v___x_1576_; 
v___x_1576_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg(v_snd_1564_, v___f_1565_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_);
if (lean_obj_tag(v___x_1576_) == 0)
{
lean_object* v_a_1577_; lean_object* v_fst_1578_; lean_object* v_snd_1579_; lean_object* v___x_1581_; uint8_t v_isShared_1582_; uint8_t v_isSharedCheck_1589_; 
v_a_1577_ = lean_ctor_get(v___x_1576_, 0);
lean_inc(v_a_1577_);
lean_dec_ref_known(v___x_1576_, 1);
v_fst_1578_ = lean_ctor_get(v_a_1577_, 0);
v_snd_1579_ = lean_ctor_get(v_a_1577_, 1);
v_isSharedCheck_1589_ = !lean_is_exclusive(v_a_1577_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1581_ = v_a_1577_;
v_isShared_1582_ = v_isSharedCheck_1589_;
goto v_resetjp_1580_;
}
else
{
lean_inc(v_snd_1579_);
lean_inc(v_fst_1578_);
lean_dec(v_a_1577_);
v___x_1581_ = lean_box(0);
v_isShared_1582_ = v_isSharedCheck_1589_;
goto v_resetjp_1580_;
}
v_resetjp_1580_:
{
lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1586_; 
v___x_1583_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg(v_fst_1566_, v_snd_1579_, v___y_1572_);
lean_dec_ref(v___x_1583_);
v___x_1584_ = lean_box(0);
if (v_isShared_1582_ == 0)
{
lean_ctor_set_tag(v___x_1581_, 1);
lean_ctor_set(v___x_1581_, 1, v___x_1584_);
v___x_1586_ = v___x_1581_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_fst_1578_);
lean_ctor_set(v_reuseFailAlloc_1588_, 1, v___x_1584_);
v___x_1586_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
lean_object* v___x_1587_; 
v___x_1587_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_1586_, v___y_1568_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_);
return v___x_1587_;
}
}
}
else
{
lean_object* v_a_1590_; lean_object* v___x_1592_; uint8_t v_isShared_1593_; uint8_t v_isSharedCheck_1597_; 
lean_dec(v_fst_1566_);
v_a_1590_ = lean_ctor_get(v___x_1576_, 0);
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1576_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1592_ = v___x_1576_;
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
else
{
lean_inc(v_a_1590_);
lean_dec(v___x_1576_);
v___x_1592_ = lean_box(0);
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
v_resetjp_1591_:
{
lean_object* v___x_1595_; 
if (v_isShared_1593_ == 0)
{
v___x_1595_ = v___x_1592_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v_a_1590_);
v___x_1595_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
return v___x_1595_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__1___boxed(lean_object* v_snd_1598_, lean_object* v___f_1599_, lean_object* v_fst_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_){
_start:
{
lean_object* v_res_1610_; 
v_res_1610_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__1(v_snd_1598_, v___f_1599_, v_fst_1600_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_);
lean_dec(v___y_1608_);
lean_dec_ref(v___y_1607_);
lean_dec(v___y_1606_);
lean_dec_ref(v___y_1605_);
lean_dec(v___y_1604_);
lean_dec_ref(v___y_1603_);
lean_dec(v___y_1602_);
lean_dec_ref(v___y_1601_);
return v_res_1610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro(lean_object* v_x_1617_, lean_object* v_a_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_, lean_object* v_a_1621_, lean_object* v_a_1622_, lean_object* v_a_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_){
_start:
{
lean_object* v___x_1627_; uint8_t v___x_1628_; 
v___x_1627_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1));
v___x_1628_ = l_Lean_Syntax_isOfKind(v_x_1617_, v___x_1627_);
if (v___x_1628_ == 0)
{
lean_object* v___x_1629_; 
v___x_1629_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg();
return v___x_1629_;
}
else
{
lean_object* v___x_1630_; 
v___x_1630_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(v_a_1619_, v_a_1622_, v_a_1623_, v_a_1624_, v_a_1625_);
if (lean_obj_tag(v___x_1630_) == 0)
{
lean_object* v_a_1631_; lean_object* v_fst_1632_; lean_object* v_snd_1633_; lean_object* v___f_1634_; lean_object* v___f_1635_; lean_object* v___x_1636_; 
v_a_1631_ = lean_ctor_get(v___x_1630_, 0);
lean_inc(v_a_1631_);
lean_dec_ref_known(v___x_1630_, 1);
v_fst_1632_ = lean_ctor_get(v_a_1631_, 0);
lean_inc_n(v_fst_1632_, 3);
v_snd_1633_ = lean_ctor_get(v_a_1631_, 1);
lean_inc(v_snd_1633_);
lean_dec(v_a_1631_);
v___f_1634_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__0___boxed), 11, 1);
lean_closure_set(v___f_1634_, 0, v_fst_1632_);
v___f_1635_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__1___boxed), 12, 3);
lean_closure_set(v___f_1635_, 0, v_snd_1633_);
lean_closure_set(v___f_1635_, 1, v___f_1634_);
lean_closure_set(v___f_1635_, 2, v_fst_1632_);
v___x_1636_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg(v_fst_1632_, v___f_1635_, v_a_1618_, v_a_1619_, v_a_1620_, v_a_1621_, v_a_1622_, v_a_1623_, v_a_1624_, v_a_1625_);
return v___x_1636_;
}
else
{
lean_object* v_a_1637_; lean_object* v___x_1639_; uint8_t v_isShared_1640_; uint8_t v_isSharedCheck_1644_; 
v_a_1637_ = lean_ctor_get(v___x_1630_, 0);
v_isSharedCheck_1644_ = !lean_is_exclusive(v___x_1630_);
if (v_isSharedCheck_1644_ == 0)
{
v___x_1639_ = v___x_1630_;
v_isShared_1640_ = v_isSharedCheck_1644_;
goto v_resetjp_1638_;
}
else
{
lean_inc(v_a_1637_);
lean_dec(v___x_1630_);
v___x_1639_ = lean_box(0);
v_isShared_1640_ = v_isSharedCheck_1644_;
goto v_resetjp_1638_;
}
v_resetjp_1638_:
{
lean_object* v___x_1642_; 
if (v_isShared_1640_ == 0)
{
v___x_1642_ = v___x_1639_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v_a_1637_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___boxed(lean_object* v_x_1645_, lean_object* v_a_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_, lean_object* v_a_1654_){
_start:
{
lean_object* v_res_1655_; 
v_res_1655_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro(v_x_1645_, v_a_1646_, v_a_1647_, v_a_1648_, v_a_1649_, v_a_1650_, v_a_1651_, v_a_1652_, v_a_1653_);
lean_dec(v_a_1653_);
lean_dec_ref(v_a_1652_);
lean_dec(v_a_1651_);
lean_dec_ref(v_a_1650_);
lean_dec(v_a_1649_);
lean_dec_ref(v_a_1648_);
lean_dec(v_a_1647_);
lean_dec_ref(v_a_1646_);
return v_res_1655_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__5(void){
_start:
{
lean_object* v___x_1667_; lean_object* v_dummy_1668_; 
v___x_1667_ = lean_box(0);
v_dummy_1668_ = l_Lean_Expr_sort___override(v___x_1667_);
return v_dummy_1668_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp(lean_object* v_e_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_){
_start:
{
lean_object* v___x_1675_; 
v___x_1675_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1669_, v_a_1671_);
if (lean_obj_tag(v___x_1675_) == 0)
{
lean_object* v_a_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1735_; 
v_a_1676_ = lean_ctor_get(v___x_1675_, 0);
v_isSharedCheck_1735_ = !lean_is_exclusive(v___x_1675_);
if (v_isSharedCheck_1735_ == 0)
{
v___x_1678_ = v___x_1675_;
v_isShared_1679_ = v_isSharedCheck_1735_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_a_1676_);
lean_dec(v___x_1675_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1735_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1680_; lean_object* v___x_1681_; uint8_t v___x_1682_; 
v___x_1680_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__2));
v___x_1681_ = lean_unsigned_to_nat(2u);
v___x_1682_ = l_Lean_Expr_isAppOfArity(v_a_1676_, v___x_1680_, v___x_1681_);
if (v___x_1682_ == 0)
{
lean_object* v___x_1683_; lean_object* v___x_1685_; 
lean_dec(v_a_1676_);
v___x_1683_ = lean_box(0);
if (v_isShared_1679_ == 0)
{
lean_ctor_set(v___x_1678_, 0, v___x_1683_);
v___x_1685_ = v___x_1678_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1686_; 
v_reuseFailAlloc_1686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1686_, 0, v___x_1683_);
v___x_1685_ = v_reuseFailAlloc_1686_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
return v___x_1685_;
}
}
else
{
lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; uint8_t v___x_1690_; 
v___x_1687_ = l_Lean_Expr_appArg_x21(v_a_1676_);
lean_dec(v_a_1676_);
v___x_1688_ = l_Lean_Expr_getAppFn(v___x_1687_);
v___x_1689_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4));
v___x_1690_ = l_Lean_Expr_isConstOf(v___x_1688_, v___x_1689_);
lean_dec_ref(v___x_1688_);
if (v___x_1690_ == 0)
{
lean_object* v___x_1691_; lean_object* v___x_1693_; 
lean_dec_ref(v___x_1687_);
v___x_1691_ = lean_box(0);
if (v_isShared_1679_ == 0)
{
lean_ctor_set(v___x_1678_, 0, v___x_1691_);
v___x_1693_ = v___x_1678_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v___x_1691_);
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
lean_object* v_dummy_1695_; lean_object* v_nargs_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; uint8_t v___x_1702_; 
v_dummy_1695_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__5, &l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__5_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__5);
v_nargs_1696_ = l_Lean_Expr_getAppNumArgs(v___x_1687_);
lean_inc(v_nargs_1696_);
v___x_1697_ = lean_mk_array(v_nargs_1696_, v_dummy_1695_);
v___x_1698_ = lean_unsigned_to_nat(1u);
v___x_1699_ = lean_nat_sub(v_nargs_1696_, v___x_1698_);
lean_dec(v_nargs_1696_);
v___x_1700_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_1687_, v___x_1697_, v___x_1699_);
v___x_1701_ = lean_array_get_size(v___x_1700_);
v___x_1702_ = lean_nat_dec_lt(v___x_1701_, v___x_1681_);
if (v___x_1702_ == 0)
{
lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; 
lean_del_object(v___x_1678_);
v___x_1703_ = l_Lean_instInhabitedExpr;
v___x_1704_ = lean_unsigned_to_nat(0u);
v___x_1705_ = lean_array_get(v___x_1703_, v___x_1700_, v___x_1704_);
v___x_1706_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_length(v___x_1705_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_);
if (lean_obj_tag(v___x_1706_) == 0)
{
lean_object* v_a_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1722_; 
v_a_1707_ = lean_ctor_get(v___x_1706_, 0);
v_isSharedCheck_1722_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1722_ == 0)
{
v___x_1709_ = v___x_1706_;
v_isShared_1710_ = v_isSharedCheck_1722_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_a_1707_);
lean_dec(v___x_1706_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1722_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v___x_1711_; uint8_t v___x_1712_; 
v___x_1711_ = lean_nat_sub(v___x_1701_, v___x_1681_);
v___x_1712_ = lean_nat_dec_eq(v_a_1707_, v___x_1711_);
lean_dec(v___x_1711_);
lean_dec(v_a_1707_);
if (v___x_1712_ == 0)
{
lean_object* v___x_1713_; lean_object* v___x_1715_; 
lean_dec_ref(v___x_1700_);
v___x_1713_ = lean_box(0);
if (v_isShared_1710_ == 0)
{
lean_ctor_set(v___x_1709_, 0, v___x_1713_);
v___x_1715_ = v___x_1709_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v___x_1713_);
v___x_1715_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
return v___x_1715_;
}
}
else
{
lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1720_; 
v___x_1717_ = lean_array_get(v___x_1703_, v___x_1700_, v___x_1698_);
lean_dec_ref(v___x_1700_);
v___x_1718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1718_, 0, v___x_1717_);
if (v_isShared_1710_ == 0)
{
lean_ctor_set(v___x_1709_, 0, v___x_1718_);
v___x_1720_ = v___x_1709_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1721_; 
v_reuseFailAlloc_1721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1721_, 0, v___x_1718_);
v___x_1720_ = v_reuseFailAlloc_1721_;
goto v_reusejp_1719_;
}
v_reusejp_1719_:
{
return v___x_1720_;
}
}
}
}
else
{
lean_object* v_a_1723_; lean_object* v___x_1725_; uint8_t v_isShared_1726_; uint8_t v_isSharedCheck_1730_; 
lean_dec_ref(v___x_1700_);
v_a_1723_ = lean_ctor_get(v___x_1706_, 0);
v_isSharedCheck_1730_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1730_ == 0)
{
v___x_1725_ = v___x_1706_;
v_isShared_1726_ = v_isSharedCheck_1730_;
goto v_resetjp_1724_;
}
else
{
lean_inc(v_a_1723_);
lean_dec(v___x_1706_);
v___x_1725_ = lean_box(0);
v_isShared_1726_ = v_isSharedCheck_1730_;
goto v_resetjp_1724_;
}
v_resetjp_1724_:
{
lean_object* v___x_1728_; 
if (v_isShared_1726_ == 0)
{
v___x_1728_ = v___x_1725_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v_a_1723_);
v___x_1728_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
return v___x_1728_;
}
}
}
}
else
{
lean_object* v___x_1731_; lean_object* v___x_1733_; 
lean_dec_ref(v___x_1700_);
v___x_1731_ = lean_box(0);
if (v_isShared_1679_ == 0)
{
lean_ctor_set(v___x_1678_, 0, v___x_1731_);
v___x_1733_ = v___x_1678_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1734_; 
v_reuseFailAlloc_1734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1734_, 0, v___x_1731_);
v___x_1733_ = v_reuseFailAlloc_1734_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
return v___x_1733_;
}
}
}
}
}
}
else
{
lean_object* v_a_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1743_; 
v_a_1736_ = lean_ctor_get(v___x_1675_, 0);
v_isSharedCheck_1743_ = !lean_is_exclusive(v___x_1675_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1738_ = v___x_1675_;
v_isShared_1739_ = v_isSharedCheck_1743_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_a_1736_);
lean_dec(v___x_1675_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1743_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v___x_1741_; 
if (v_isShared_1739_ == 0)
{
v___x_1741_ = v___x_1738_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v_a_1736_);
v___x_1741_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
return v___x_1741_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___boxed(lean_object* v_e_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_, lean_object* v_a_1747_, lean_object* v_a_1748_, lean_object* v_a_1749_){
_start:
{
lean_object* v_res_1750_; 
v_res_1750_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp(v_e_1744_, v_a_1745_, v_a_1746_, v_a_1747_, v_a_1748_);
lean_dec(v_a_1748_);
lean_dec_ref(v_a_1747_);
lean_dec(v_a_1746_);
lean_dec_ref(v_a_1745_);
return v_res_1750_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1_spec__1(lean_object* v_msgData_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_){
_start:
{
lean_object* v___x_1757_; lean_object* v_env_1758_; lean_object* v___x_1759_; lean_object* v_mctx_1760_; lean_object* v_lctx_1761_; lean_object* v_options_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; 
v___x_1757_ = lean_st_ref_get(v___y_1755_);
v_env_1758_ = lean_ctor_get(v___x_1757_, 0);
lean_inc_ref(v_env_1758_);
lean_dec(v___x_1757_);
v___x_1759_ = lean_st_ref_get(v___y_1753_);
v_mctx_1760_ = lean_ctor_get(v___x_1759_, 0);
lean_inc_ref(v_mctx_1760_);
lean_dec(v___x_1759_);
v_lctx_1761_ = lean_ctor_get(v___y_1752_, 2);
v_options_1762_ = lean_ctor_get(v___y_1754_, 2);
lean_inc_ref(v_options_1762_);
lean_inc_ref(v_lctx_1761_);
v___x_1763_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1763_, 0, v_env_1758_);
lean_ctor_set(v___x_1763_, 1, v_mctx_1760_);
lean_ctor_set(v___x_1763_, 2, v_lctx_1761_);
lean_ctor_set(v___x_1763_, 3, v_options_1762_);
v___x_1764_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1764_, 0, v___x_1763_);
lean_ctor_set(v___x_1764_, 1, v_msgData_1751_);
v___x_1765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1764_);
return v___x_1765_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1_spec__1___boxed(lean_object* v_msgData_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_){
_start:
{
lean_object* v_res_1772_; 
v_res_1772_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1_spec__1(v_msgData_1766_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_);
lean_dec(v___y_1770_);
lean_dec_ref(v___y_1769_);
lean_dec(v___y_1768_);
lean_dec_ref(v___y_1767_);
return v_res_1772_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1773_; double v___x_1774_; 
v___x_1773_ = lean_unsigned_to_nat(0u);
v___x_1774_ = lean_float_of_nat(v___x_1773_);
return v___x_1774_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1(lean_object* v_cls_1778_, lean_object* v_msg_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_){
_start:
{
lean_object* v_ref_1785_; lean_object* v___x_1786_; lean_object* v_a_1787_; lean_object* v___x_1789_; uint8_t v_isShared_1790_; uint8_t v_isSharedCheck_1831_; 
v_ref_1785_ = lean_ctor_get(v___y_1782_, 5);
v___x_1786_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1_spec__1(v_msg_1779_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_);
v_a_1787_ = lean_ctor_get(v___x_1786_, 0);
v_isSharedCheck_1831_ = !lean_is_exclusive(v___x_1786_);
if (v_isSharedCheck_1831_ == 0)
{
v___x_1789_ = v___x_1786_;
v_isShared_1790_ = v_isSharedCheck_1831_;
goto v_resetjp_1788_;
}
else
{
lean_inc(v_a_1787_);
lean_dec(v___x_1786_);
v___x_1789_ = lean_box(0);
v_isShared_1790_ = v_isSharedCheck_1831_;
goto v_resetjp_1788_;
}
v_resetjp_1788_:
{
lean_object* v___x_1791_; lean_object* v_traceState_1792_; lean_object* v_env_1793_; lean_object* v_nextMacroScope_1794_; lean_object* v_ngen_1795_; lean_object* v_auxDeclNGen_1796_; lean_object* v_cache_1797_; lean_object* v_messages_1798_; lean_object* v_infoState_1799_; lean_object* v_snapshotTasks_1800_; lean_object* v___x_1802_; uint8_t v_isShared_1803_; uint8_t v_isSharedCheck_1830_; 
v___x_1791_ = lean_st_ref_take(v___y_1783_);
v_traceState_1792_ = lean_ctor_get(v___x_1791_, 4);
v_env_1793_ = lean_ctor_get(v___x_1791_, 0);
v_nextMacroScope_1794_ = lean_ctor_get(v___x_1791_, 1);
v_ngen_1795_ = lean_ctor_get(v___x_1791_, 2);
v_auxDeclNGen_1796_ = lean_ctor_get(v___x_1791_, 3);
v_cache_1797_ = lean_ctor_get(v___x_1791_, 5);
v_messages_1798_ = lean_ctor_get(v___x_1791_, 6);
v_infoState_1799_ = lean_ctor_get(v___x_1791_, 7);
v_snapshotTasks_1800_ = lean_ctor_get(v___x_1791_, 8);
v_isSharedCheck_1830_ = !lean_is_exclusive(v___x_1791_);
if (v_isSharedCheck_1830_ == 0)
{
v___x_1802_ = v___x_1791_;
v_isShared_1803_ = v_isSharedCheck_1830_;
goto v_resetjp_1801_;
}
else
{
lean_inc(v_snapshotTasks_1800_);
lean_inc(v_infoState_1799_);
lean_inc(v_messages_1798_);
lean_inc(v_cache_1797_);
lean_inc(v_traceState_1792_);
lean_inc(v_auxDeclNGen_1796_);
lean_inc(v_ngen_1795_);
lean_inc(v_nextMacroScope_1794_);
lean_inc(v_env_1793_);
lean_dec(v___x_1791_);
v___x_1802_ = lean_box(0);
v_isShared_1803_ = v_isSharedCheck_1830_;
goto v_resetjp_1801_;
}
v_resetjp_1801_:
{
uint64_t v_tid_1804_; lean_object* v_traces_1805_; lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1829_; 
v_tid_1804_ = lean_ctor_get_uint64(v_traceState_1792_, sizeof(void*)*1);
v_traces_1805_ = lean_ctor_get(v_traceState_1792_, 0);
v_isSharedCheck_1829_ = !lean_is_exclusive(v_traceState_1792_);
if (v_isSharedCheck_1829_ == 0)
{
v___x_1807_ = v_traceState_1792_;
v_isShared_1808_ = v_isSharedCheck_1829_;
goto v_resetjp_1806_;
}
else
{
lean_inc(v_traces_1805_);
lean_dec(v_traceState_1792_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1829_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
lean_object* v___x_1809_; double v___x_1810_; uint8_t v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1819_; 
v___x_1809_ = lean_box(0);
v___x_1810_ = lean_float_once(&l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0, &l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0);
v___x_1811_ = 0;
v___x_1812_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__1));
v___x_1813_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1813_, 0, v_cls_1778_);
lean_ctor_set(v___x_1813_, 1, v___x_1809_);
lean_ctor_set(v___x_1813_, 2, v___x_1812_);
lean_ctor_set_float(v___x_1813_, sizeof(void*)*3, v___x_1810_);
lean_ctor_set_float(v___x_1813_, sizeof(void*)*3 + 8, v___x_1810_);
lean_ctor_set_uint8(v___x_1813_, sizeof(void*)*3 + 16, v___x_1811_);
v___x_1814_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__2));
v___x_1815_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1815_, 0, v___x_1813_);
lean_ctor_set(v___x_1815_, 1, v_a_1787_);
lean_ctor_set(v___x_1815_, 2, v___x_1814_);
lean_inc(v_ref_1785_);
v___x_1816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1816_, 0, v_ref_1785_);
lean_ctor_set(v___x_1816_, 1, v___x_1815_);
v___x_1817_ = l_Lean_PersistentArray_push___redArg(v_traces_1805_, v___x_1816_);
if (v_isShared_1808_ == 0)
{
lean_ctor_set(v___x_1807_, 0, v___x_1817_);
v___x_1819_ = v___x_1807_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1828_; 
v_reuseFailAlloc_1828_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1828_, 0, v___x_1817_);
lean_ctor_set_uint64(v_reuseFailAlloc_1828_, sizeof(void*)*1, v_tid_1804_);
v___x_1819_ = v_reuseFailAlloc_1828_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
lean_object* v___x_1821_; 
if (v_isShared_1803_ == 0)
{
lean_ctor_set(v___x_1802_, 4, v___x_1819_);
v___x_1821_ = v___x_1802_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_env_1793_);
lean_ctor_set(v_reuseFailAlloc_1827_, 1, v_nextMacroScope_1794_);
lean_ctor_set(v_reuseFailAlloc_1827_, 2, v_ngen_1795_);
lean_ctor_set(v_reuseFailAlloc_1827_, 3, v_auxDeclNGen_1796_);
lean_ctor_set(v_reuseFailAlloc_1827_, 4, v___x_1819_);
lean_ctor_set(v_reuseFailAlloc_1827_, 5, v_cache_1797_);
lean_ctor_set(v_reuseFailAlloc_1827_, 6, v_messages_1798_);
lean_ctor_set(v_reuseFailAlloc_1827_, 7, v_infoState_1799_);
lean_ctor_set(v_reuseFailAlloc_1827_, 8, v_snapshotTasks_1800_);
v___x_1821_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1825_; 
v___x_1822_ = lean_st_ref_set(v___y_1783_, v___x_1821_);
v___x_1823_ = lean_box(0);
if (v_isShared_1790_ == 0)
{
lean_ctor_set(v___x_1789_, 0, v___x_1823_);
v___x_1825_ = v___x_1789_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v___x_1823_);
v___x_1825_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
return v___x_1825_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___boxed(lean_object* v_cls_1832_, lean_object* v_msg_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_){
_start:
{
lean_object* v_res_1839_; 
v_res_1839_ = l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1(v_cls_1832_, v_msg_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_);
lean_dec(v___y_1837_);
lean_dec_ref(v___y_1836_);
lean_dec(v___y_1835_);
lean_dec_ref(v___y_1834_);
return v_res_1839_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg(lean_object* v_mvarId_1840_, lean_object* v_val_1841_, lean_object* v___y_1842_){
_start:
{
lean_object* v___x_1844_; lean_object* v_mctx_1845_; lean_object* v_cache_1846_; lean_object* v_zetaDeltaFVarIds_1847_; lean_object* v_postponed_1848_; lean_object* v_diag_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1877_; 
v___x_1844_ = lean_st_ref_take(v___y_1842_);
v_mctx_1845_ = lean_ctor_get(v___x_1844_, 0);
v_cache_1846_ = lean_ctor_get(v___x_1844_, 1);
v_zetaDeltaFVarIds_1847_ = lean_ctor_get(v___x_1844_, 2);
v_postponed_1848_ = lean_ctor_get(v___x_1844_, 3);
v_diag_1849_ = lean_ctor_get(v___x_1844_, 4);
v_isSharedCheck_1877_ = !lean_is_exclusive(v___x_1844_);
if (v_isSharedCheck_1877_ == 0)
{
v___x_1851_ = v___x_1844_;
v_isShared_1852_ = v_isSharedCheck_1877_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_diag_1849_);
lean_inc(v_postponed_1848_);
lean_inc(v_zetaDeltaFVarIds_1847_);
lean_inc(v_cache_1846_);
lean_inc(v_mctx_1845_);
lean_dec(v___x_1844_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1877_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v_depth_1853_; lean_object* v_levelAssignDepth_1854_; lean_object* v_lmvarCounter_1855_; lean_object* v_mvarCounter_1856_; lean_object* v_lDecls_1857_; lean_object* v_decls_1858_; lean_object* v_userNames_1859_; lean_object* v_lAssignment_1860_; lean_object* v_eAssignment_1861_; lean_object* v_dAssignment_1862_; lean_object* v___x_1864_; uint8_t v_isShared_1865_; uint8_t v_isSharedCheck_1876_; 
v_depth_1853_ = lean_ctor_get(v_mctx_1845_, 0);
v_levelAssignDepth_1854_ = lean_ctor_get(v_mctx_1845_, 1);
v_lmvarCounter_1855_ = lean_ctor_get(v_mctx_1845_, 2);
v_mvarCounter_1856_ = lean_ctor_get(v_mctx_1845_, 3);
v_lDecls_1857_ = lean_ctor_get(v_mctx_1845_, 4);
v_decls_1858_ = lean_ctor_get(v_mctx_1845_, 5);
v_userNames_1859_ = lean_ctor_get(v_mctx_1845_, 6);
v_lAssignment_1860_ = lean_ctor_get(v_mctx_1845_, 7);
v_eAssignment_1861_ = lean_ctor_get(v_mctx_1845_, 8);
v_dAssignment_1862_ = lean_ctor_get(v_mctx_1845_, 9);
v_isSharedCheck_1876_ = !lean_is_exclusive(v_mctx_1845_);
if (v_isSharedCheck_1876_ == 0)
{
v___x_1864_ = v_mctx_1845_;
v_isShared_1865_ = v_isSharedCheck_1876_;
goto v_resetjp_1863_;
}
else
{
lean_inc(v_dAssignment_1862_);
lean_inc(v_eAssignment_1861_);
lean_inc(v_lAssignment_1860_);
lean_inc(v_userNames_1859_);
lean_inc(v_decls_1858_);
lean_inc(v_lDecls_1857_);
lean_inc(v_mvarCounter_1856_);
lean_inc(v_lmvarCounter_1855_);
lean_inc(v_levelAssignDepth_1854_);
lean_inc(v_depth_1853_);
lean_dec(v_mctx_1845_);
v___x_1864_ = lean_box(0);
v_isShared_1865_ = v_isSharedCheck_1876_;
goto v_resetjp_1863_;
}
v_resetjp_1863_:
{
lean_object* v___x_1866_; lean_object* v___x_1868_; 
v___x_1866_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3___redArg(v_eAssignment_1861_, v_mvarId_1840_, v_val_1841_);
if (v_isShared_1865_ == 0)
{
lean_ctor_set(v___x_1864_, 8, v___x_1866_);
v___x_1868_ = v___x_1864_;
goto v_reusejp_1867_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v_depth_1853_);
lean_ctor_set(v_reuseFailAlloc_1875_, 1, v_levelAssignDepth_1854_);
lean_ctor_set(v_reuseFailAlloc_1875_, 2, v_lmvarCounter_1855_);
lean_ctor_set(v_reuseFailAlloc_1875_, 3, v_mvarCounter_1856_);
lean_ctor_set(v_reuseFailAlloc_1875_, 4, v_lDecls_1857_);
lean_ctor_set(v_reuseFailAlloc_1875_, 5, v_decls_1858_);
lean_ctor_set(v_reuseFailAlloc_1875_, 6, v_userNames_1859_);
lean_ctor_set(v_reuseFailAlloc_1875_, 7, v_lAssignment_1860_);
lean_ctor_set(v_reuseFailAlloc_1875_, 8, v___x_1866_);
lean_ctor_set(v_reuseFailAlloc_1875_, 9, v_dAssignment_1862_);
v___x_1868_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1867_;
}
v_reusejp_1867_:
{
lean_object* v___x_1870_; 
if (v_isShared_1852_ == 0)
{
lean_ctor_set(v___x_1851_, 0, v___x_1868_);
v___x_1870_ = v___x_1851_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v___x_1868_);
lean_ctor_set(v_reuseFailAlloc_1874_, 1, v_cache_1846_);
lean_ctor_set(v_reuseFailAlloc_1874_, 2, v_zetaDeltaFVarIds_1847_);
lean_ctor_set(v_reuseFailAlloc_1874_, 3, v_postponed_1848_);
lean_ctor_set(v_reuseFailAlloc_1874_, 4, v_diag_1849_);
v___x_1870_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___x_1871_ = lean_st_ref_set(v___y_1842_, v___x_1870_);
v___x_1872_ = lean_box(0);
v___x_1873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1873_, 0, v___x_1872_);
return v___x_1873_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg___boxed(lean_object* v_mvarId_1878_, lean_object* v_val_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_){
_start:
{
lean_object* v_res_1882_; 
v_res_1882_ = l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg(v_mvarId_1878_, v_val_1879_, v___y_1880_);
lean_dec(v___y_1880_);
return v_res_1882_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__5(void){
_start:
{
lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; 
v___x_1892_ = lean_box(0);
v___x_1893_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__4));
v___x_1894_ = l_Lean_mkConst(v___x_1893_, v___x_1892_);
return v___x_1894_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__7(void){
_start:
{
lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; 
v___x_1898_ = lean_box(0);
v___x_1899_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__6));
v___x_1900_ = l_Lean_mkConst(v___x_1899_, v___x_1898_);
return v___x_1900_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__13(void){
_start:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; 
v___x_1911_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__10));
v___x_1912_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__12));
v___x_1913_ = l_Lean_Name_append(v___x_1912_, v___x_1911_);
return v___x_1913_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__15(void){
_start:
{
lean_object* v___x_1915_; lean_object* v___x_1916_; 
v___x_1915_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__14));
v___x_1916_ = l_Lean_stringToMessageData(v___x_1915_);
return v___x_1916_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyRflAndAndIntro(lean_object* v_mvar_1917_, lean_object* v_a_1918_, lean_object* v_a_1919_, lean_object* v_a_1920_, lean_object* v_a_1921_){
_start:
{
lean_object* v___y_1924_; lean_object* v___y_1925_; lean_object* v___y_1926_; lean_object* v___y_1927_; lean_object* v___y_1928_; lean_object* v_a_1973_; lean_object* v___y_1985_; lean_object* v___x_2006_; 
lean_inc(v_mvar_1917_);
v___x_2006_ = l_Lean_MVarId_getType(v_mvar_1917_, v_a_1918_, v_a_1919_, v_a_1920_, v_a_1921_);
if (lean_obj_tag(v___x_2006_) == 0)
{
lean_object* v_a_2007_; lean_object* v___x_2008_; 
v_a_2007_ = lean_ctor_get(v___x_2006_, 0);
lean_inc(v_a_2007_);
lean_dec_ref_known(v___x_2006_, 1);
v___x_2008_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_2007_, v_a_1919_);
v___y_1985_ = v___x_2008_;
goto v___jp_1984_;
}
else
{
v___y_1985_ = v___x_2006_;
goto v___jp_1984_;
}
v___jp_1923_:
{
lean_object* v___x_1929_; uint8_t v___x_1930_; 
v___x_1929_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__1));
v___x_1930_ = l_Lean_Expr_isAppOf(v___y_1924_, v___x_1929_);
if (v___x_1930_ == 0)
{
lean_object* v___x_1931_; lean_object* v___x_1932_; uint8_t v___x_1933_; 
v___x_1931_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__3));
v___x_1932_ = lean_unsigned_to_nat(2u);
v___x_1933_ = l_Lean_Expr_isAppOfArity(v___y_1924_, v___x_1931_, v___x_1932_);
if (v___x_1933_ == 0)
{
lean_object* v___x_1934_; 
lean_inc(v_mvar_1917_);
v___x_1934_ = l_Lean_MVarId_setType___redArg(v_mvar_1917_, v___y_1924_, v___y_1926_);
if (lean_obj_tag(v___x_1934_) == 0)
{
lean_object* v___x_1935_; 
lean_dec_ref_known(v___x_1934_, 1);
v___x_1935_ = l_Lean_MVarId_applyRfl(v_mvar_1917_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_);
return v___x_1935_;
}
else
{
lean_dec(v_mvar_1917_);
return v___x_1934_;
}
}
else
{
lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; uint8_t v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1936_ = l_Lean_Expr_appFn_x21(v___y_1924_);
v___x_1937_ = l_Lean_Expr_appArg_x21(v___x_1936_);
lean_dec_ref(v___x_1936_);
lean_inc_ref(v___x_1937_);
v___x_1938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1938_, 0, v___x_1937_);
v___x_1939_ = 0;
v___x_1940_ = lean_box(0);
v___x_1941_ = l_Lean_Meta_mkFreshExprMVar(v___x_1938_, v___x_1939_, v___x_1940_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_);
if (lean_obj_tag(v___x_1941_) == 0)
{
lean_object* v_a_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; 
v_a_1942_ = lean_ctor_get(v___x_1941_, 0);
lean_inc(v_a_1942_);
lean_dec_ref_known(v___x_1941_, 1);
v___x_1943_ = l_Lean_Expr_appArg_x21(v___y_1924_);
lean_dec_ref(v___y_1924_);
lean_inc_ref(v___x_1943_);
v___x_1944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1944_, 0, v___x_1943_);
v___x_1945_ = l_Lean_Meta_mkFreshExprMVar(v___x_1944_, v___x_1939_, v___x_1940_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_);
if (lean_obj_tag(v___x_1945_) == 0)
{
lean_object* v_a_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; 
v_a_1946_ = lean_ctor_get(v___x_1945_, 0);
lean_inc(v_a_1946_);
lean_dec_ref_known(v___x_1945_, 1);
v___x_1947_ = l_Lean_Expr_mvarId_x21(v_a_1942_);
v___x_1948_ = l_Lean_MVarId_applyRflAndAndIntro(v___x_1947_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_);
if (lean_obj_tag(v___x_1948_) == 0)
{
lean_object* v___x_1949_; lean_object* v___x_1950_; 
lean_dec_ref_known(v___x_1948_, 1);
v___x_1949_ = l_Lean_Expr_mvarId_x21(v_a_1946_);
v___x_1950_ = l_Lean_MVarId_applyRflAndAndIntro(v___x_1949_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_);
if (lean_obj_tag(v___x_1950_) == 0)
{
lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
lean_dec_ref_known(v___x_1950_, 1);
v___x_1951_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__5, &l_Lean_MVarId_applyRflAndAndIntro___closed__5_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__5);
v___x_1952_ = l_Lean_mkApp4(v___x_1951_, v___x_1937_, v___x_1943_, v_a_1942_, v_a_1946_);
v___x_1953_ = l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg(v_mvar_1917_, v___x_1952_, v___y_1926_);
return v___x_1953_;
}
else
{
lean_dec(v_a_1946_);
lean_dec_ref(v___x_1943_);
lean_dec(v_a_1942_);
lean_dec_ref(v___x_1937_);
lean_dec(v_mvar_1917_);
return v___x_1950_;
}
}
else
{
lean_dec(v_a_1946_);
lean_dec_ref(v___x_1943_);
lean_dec(v_a_1942_);
lean_dec_ref(v___x_1937_);
lean_dec(v_mvar_1917_);
return v___x_1948_;
}
}
else
{
lean_object* v_a_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1961_; 
lean_dec_ref(v___x_1943_);
lean_dec(v_a_1942_);
lean_dec_ref(v___x_1937_);
lean_dec(v_mvar_1917_);
v_a_1954_ = lean_ctor_get(v___x_1945_, 0);
v_isSharedCheck_1961_ = !lean_is_exclusive(v___x_1945_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1956_ = v___x_1945_;
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_a_1954_);
lean_dec(v___x_1945_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1959_; 
if (v_isShared_1957_ == 0)
{
v___x_1959_ = v___x_1956_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v_a_1954_);
v___x_1959_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
return v___x_1959_;
}
}
}
}
else
{
lean_object* v_a_1962_; lean_object* v___x_1964_; uint8_t v_isShared_1965_; uint8_t v_isSharedCheck_1969_; 
lean_dec_ref(v___x_1937_);
lean_dec_ref(v___y_1924_);
lean_dec(v_mvar_1917_);
v_a_1962_ = lean_ctor_get(v___x_1941_, 0);
v_isSharedCheck_1969_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_1969_ == 0)
{
v___x_1964_ = v___x_1941_;
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
else
{
lean_inc(v_a_1962_);
lean_dec(v___x_1941_);
v___x_1964_ = lean_box(0);
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
v_resetjp_1963_:
{
lean_object* v___x_1967_; 
if (v_isShared_1965_ == 0)
{
v___x_1967_ = v___x_1964_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v_a_1962_);
v___x_1967_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
return v___x_1967_;
}
}
}
}
}
else
{
lean_object* v___x_1970_; lean_object* v___x_1971_; 
lean_dec_ref(v___y_1924_);
v___x_1970_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__7, &l_Lean_MVarId_applyRflAndAndIntro___closed__7_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__7);
v___x_1971_ = l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg(v_mvar_1917_, v___x_1970_, v___y_1926_);
return v___x_1971_;
}
}
v___jp_1972_:
{
lean_object* v_options_1974_; uint8_t v_hasTrace_1975_; 
v_options_1974_ = lean_ctor_get(v_a_1920_, 2);
v_hasTrace_1975_ = lean_ctor_get_uint8(v_options_1974_, sizeof(void*)*1);
if (v_hasTrace_1975_ == 0)
{
v___y_1924_ = v_a_1973_;
v___y_1925_ = v_a_1918_;
v___y_1926_ = v_a_1919_;
v___y_1927_ = v_a_1920_;
v___y_1928_ = v_a_1921_;
goto v___jp_1923_;
}
else
{
lean_object* v_inheritedTraceOptions_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; uint8_t v___x_1979_; 
v_inheritedTraceOptions_1976_ = lean_ctor_get(v_a_1920_, 13);
v___x_1977_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__10));
v___x_1978_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__13, &l_Lean_MVarId_applyRflAndAndIntro___closed__13_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__13);
v___x_1979_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1976_, v_options_1974_, v___x_1978_);
if (v___x_1979_ == 0)
{
v___y_1924_ = v_a_1973_;
v___y_1925_ = v_a_1918_;
v___y_1926_ = v_a_1919_;
v___y_1927_ = v_a_1920_;
v___y_1928_ = v_a_1921_;
goto v___jp_1923_;
}
else
{
lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; 
v___x_1980_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__15, &l_Lean_MVarId_applyRflAndAndIntro___closed__15_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__15);
lean_inc_ref(v_a_1973_);
v___x_1981_ = l_Lean_MessageData_ofExpr(v_a_1973_);
v___x_1982_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1982_, 0, v___x_1980_);
lean_ctor_set(v___x_1982_, 1, v___x_1981_);
v___x_1983_ = l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1(v___x_1977_, v___x_1982_, v_a_1918_, v_a_1919_, v_a_1920_, v_a_1921_);
if (lean_obj_tag(v___x_1983_) == 0)
{
lean_dec_ref_known(v___x_1983_, 1);
v___y_1924_ = v_a_1973_;
v___y_1925_ = v_a_1918_;
v___y_1926_ = v_a_1919_;
v___y_1927_ = v_a_1920_;
v___y_1928_ = v_a_1921_;
goto v___jp_1923_;
}
else
{
lean_dec_ref(v_a_1973_);
lean_dec(v_mvar_1917_);
return v___x_1983_;
}
}
}
}
v___jp_1984_:
{
if (lean_obj_tag(v___y_1985_) == 0)
{
lean_object* v_a_1986_; lean_object* v___x_1987_; 
v_a_1986_ = lean_ctor_get(v___y_1985_, 0);
lean_inc_n(v_a_1986_, 2);
lean_dec_ref_known(v___y_1985_, 1);
v___x_1987_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp(v_a_1986_, v_a_1918_, v_a_1919_, v_a_1920_, v_a_1921_);
if (lean_obj_tag(v___x_1987_) == 0)
{
lean_object* v_a_1988_; 
v_a_1988_ = lean_ctor_get(v___x_1987_, 0);
lean_inc(v_a_1988_);
lean_dec_ref_known(v___x_1987_, 1);
if (lean_obj_tag(v_a_1988_) == 0)
{
v_a_1973_ = v_a_1986_;
goto v___jp_1972_;
}
else
{
lean_object* v_val_1989_; 
lean_dec(v_a_1986_);
v_val_1989_ = lean_ctor_get(v_a_1988_, 0);
lean_inc(v_val_1989_);
lean_dec_ref_known(v_a_1988_, 1);
v_a_1973_ = v_val_1989_;
goto v___jp_1972_;
}
}
else
{
lean_object* v_a_1990_; lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_1997_; 
lean_dec(v_a_1986_);
lean_dec(v_mvar_1917_);
v_a_1990_ = lean_ctor_get(v___x_1987_, 0);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1987_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1992_ = v___x_1987_;
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
else
{
lean_inc(v_a_1990_);
lean_dec(v___x_1987_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
lean_object* v___x_1995_; 
if (v_isShared_1993_ == 0)
{
v___x_1995_ = v___x_1992_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v_a_1990_);
v___x_1995_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
return v___x_1995_;
}
}
}
}
else
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2005_; 
lean_dec(v_mvar_1917_);
v_a_1998_ = lean_ctor_get(v___y_1985_, 0);
v_isSharedCheck_2005_ = !lean_is_exclusive(v___y_1985_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_2000_ = v___y_1985_;
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v___y_1985_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2003_; 
if (v_isShared_2001_ == 0)
{
v___x_2003_ = v___x_2000_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v_a_1998_);
v___x_2003_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
return v___x_2003_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyRflAndAndIntro___boxed(lean_object* v_mvar_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_, lean_object* v_a_2012_, lean_object* v_a_2013_, lean_object* v_a_2014_){
_start:
{
lean_object* v_res_2015_; 
v_res_2015_ = l_Lean_MVarId_applyRflAndAndIntro(v_mvar_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_);
lean_dec(v_a_2013_);
lean_dec_ref(v_a_2012_);
lean_dec(v_a_2011_);
lean_dec_ref(v_a_2010_);
return v_res_2015_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0(lean_object* v_mvarId_2016_, lean_object* v_val_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_){
_start:
{
lean_object* v___x_2023_; 
v___x_2023_ = l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg(v_mvarId_2016_, v_val_2017_, v___y_2019_);
return v___x_2023_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___boxed(lean_object* v_mvarId_2024_, lean_object* v_val_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_){
_start:
{
lean_object* v_res_2031_; 
v_res_2031_ = l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0(v_mvarId_2024_, v_val_2025_, v___y_2026_, v___y_2027_, v___y_2028_, v___y_2029_);
lean_dec(v___y_2029_);
lean_dec_ref(v___y_2028_);
lean_dec(v___y_2027_);
lean_dec_ref(v___y_2026_);
return v_res_2031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg(lean_object* v_goal_2032_, lean_object* v_k_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_){
_start:
{
lean_object* v___x_2039_; uint8_t v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; 
v___x_2039_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1);
v___x_2040_ = 0;
v___x_2041_ = lean_box(0);
v___x_2042_ = l_Lean_Meta_mkFreshExprMVar(v___x_2039_, v___x_2040_, v___x_2041_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_);
if (lean_obj_tag(v___x_2042_) == 0)
{
lean_object* v_a_2043_; lean_object* v_u_2044_; lean_object* v_00_u03c3s_2045_; lean_object* v_hyps_2046_; lean_object* v_target_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; 
v_a_2043_ = lean_ctor_get(v___x_2042_, 0);
lean_inc_n(v_a_2043_, 2);
lean_dec_ref_known(v___x_2042_, 1);
v_u_2044_ = lean_ctor_get(v_goal_2032_, 0);
lean_inc(v_u_2044_);
v_00_u03c3s_2045_ = lean_ctor_get(v_goal_2032_, 1);
lean_inc_ref_n(v_00_u03c3s_2045_, 2);
v_hyps_2046_ = lean_ctor_get(v_goal_2032_, 2);
lean_inc_ref(v_hyps_2046_);
v_target_2047_ = lean_ctor_get(v_goal_2032_, 3);
lean_inc_ref_n(v_target_2047_, 2);
lean_dec_ref(v_goal_2032_);
v___x_2048_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5));
v___x_2049_ = lean_box(0);
v___x_2050_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2050_, 0, v_u_2044_);
lean_ctor_set(v___x_2050_, 1, v___x_2049_);
lean_inc_ref(v___x_2050_);
v___x_2051_ = l_Lean_mkConst(v___x_2048_, v___x_2050_);
v___x_2052_ = l_Lean_mkApp3(v___x_2051_, v_00_u03c3s_2045_, v_target_2047_, v_a_2043_);
v___x_2053_ = lean_box(0);
v___x_2054_ = l_Lean_Meta_synthInstance(v___x_2052_, v___x_2053_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_);
if (lean_obj_tag(v___x_2054_) == 0)
{
lean_object* v_a_2055_; lean_object* v___x_2056_; 
v_a_2055_ = lean_ctor_get(v___x_2054_, 0);
lean_inc(v_a_2055_);
lean_dec_ref_known(v___x_2054_, 1);
lean_inc(v___y_2037_);
lean_inc_ref(v___y_2036_);
lean_inc(v___y_2035_);
lean_inc_ref(v___y_2034_);
lean_inc(v_a_2043_);
v___x_2056_ = lean_apply_6(v_k_2033_, v_a_2043_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_, lean_box(0));
if (lean_obj_tag(v___x_2056_) == 0)
{
lean_object* v_a_2057_; 
v_a_2057_ = lean_ctor_get(v___x_2056_, 0);
lean_inc(v_a_2057_);
if (lean_obj_tag(v_a_2057_) == 0)
{
lean_dec(v_a_2055_);
lean_dec_ref_known(v___x_2050_, 2);
lean_dec_ref(v_target_2047_);
lean_dec_ref(v_hyps_2046_);
lean_dec_ref(v_00_u03c3s_2045_);
lean_dec(v_a_2043_);
return v___x_2056_;
}
else
{
lean_object* v___x_2059_; uint8_t v_isShared_2060_; uint8_t v_isSharedCheck_2084_; 
v_isSharedCheck_2084_ = !lean_is_exclusive(v___x_2056_);
if (v_isSharedCheck_2084_ == 0)
{
lean_object* v_unused_2085_; 
v_unused_2085_ = lean_ctor_get(v___x_2056_, 0);
lean_dec(v_unused_2085_);
v___x_2059_ = v___x_2056_;
v_isShared_2060_ = v_isSharedCheck_2084_;
goto v_resetjp_2058_;
}
else
{
lean_dec(v___x_2056_);
v___x_2059_ = lean_box(0);
v_isShared_2060_ = v_isSharedCheck_2084_;
goto v_resetjp_2058_;
}
v_resetjp_2058_:
{
lean_object* v_val_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2083_; 
v_val_2061_ = lean_ctor_get(v_a_2057_, 0);
v_isSharedCheck_2083_ = !lean_is_exclusive(v_a_2057_);
if (v_isSharedCheck_2083_ == 0)
{
v___x_2063_ = v_a_2057_;
v_isShared_2064_ = v_isSharedCheck_2083_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_val_2061_);
lean_dec(v_a_2057_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2083_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v_fst_2065_; lean_object* v_snd_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2082_; 
v_fst_2065_ = lean_ctor_get(v_val_2061_, 0);
v_snd_2066_ = lean_ctor_get(v_val_2061_, 1);
v_isSharedCheck_2082_ = !lean_is_exclusive(v_val_2061_);
if (v_isSharedCheck_2082_ == 0)
{
v___x_2068_ = v_val_2061_;
v_isShared_2069_ = v_isSharedCheck_2082_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_snd_2066_);
lean_inc(v_fst_2065_);
lean_dec(v_val_2061_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2082_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v_prf_2072_; lean_object* v___x_2074_; 
v___x_2070_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0));
v___x_2071_ = l_Lean_mkConst(v___x_2070_, v___x_2050_);
v_prf_2072_ = l_Lean_mkApp6(v___x_2071_, v_00_u03c3s_2045_, v_hyps_2046_, v_target_2047_, v_a_2043_, v_a_2055_, v_snd_2066_);
if (v_isShared_2069_ == 0)
{
lean_ctor_set(v___x_2068_, 1, v_prf_2072_);
v___x_2074_ = v___x_2068_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v_fst_2065_);
lean_ctor_set(v_reuseFailAlloc_2081_, 1, v_prf_2072_);
v___x_2074_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
lean_object* v___x_2076_; 
if (v_isShared_2064_ == 0)
{
lean_ctor_set(v___x_2063_, 0, v___x_2074_);
v___x_2076_ = v___x_2063_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v___x_2074_);
v___x_2076_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
lean_object* v___x_2078_; 
if (v_isShared_2060_ == 0)
{
lean_ctor_set(v___x_2059_, 0, v___x_2076_);
v___x_2078_ = v___x_2059_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v___x_2076_);
v___x_2078_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
return v___x_2078_;
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
lean_dec(v_a_2055_);
lean_dec_ref_known(v___x_2050_, 2);
lean_dec_ref(v_target_2047_);
lean_dec_ref(v_hyps_2046_);
lean_dec_ref(v_00_u03c3s_2045_);
lean_dec(v_a_2043_);
return v___x_2056_;
}
}
else
{
lean_object* v_a_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2093_; 
lean_dec_ref_known(v___x_2050_, 2);
lean_dec_ref(v_target_2047_);
lean_dec_ref(v_hyps_2046_);
lean_dec_ref(v_00_u03c3s_2045_);
lean_dec(v_a_2043_);
lean_dec_ref(v_k_2033_);
v_a_2086_ = lean_ctor_get(v___x_2054_, 0);
v_isSharedCheck_2093_ = !lean_is_exclusive(v___x_2054_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2088_ = v___x_2054_;
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_a_2086_);
lean_dec(v___x_2054_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2091_; 
if (v_isShared_2089_ == 0)
{
v___x_2091_ = v___x_2088_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_a_2086_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
return v___x_2091_;
}
}
}
}
else
{
lean_object* v_a_2094_; lean_object* v___x_2096_; uint8_t v_isShared_2097_; uint8_t v_isSharedCheck_2101_; 
lean_dec_ref(v_k_2033_);
lean_dec_ref(v_goal_2032_);
v_a_2094_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2101_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2101_ == 0)
{
v___x_2096_ = v___x_2042_;
v_isShared_2097_ = v_isSharedCheck_2101_;
goto v_resetjp_2095_;
}
else
{
lean_inc(v_a_2094_);
lean_dec(v___x_2042_);
v___x_2096_ = lean_box(0);
v_isShared_2097_ = v_isSharedCheck_2101_;
goto v_resetjp_2095_;
}
v_resetjp_2095_:
{
lean_object* v___x_2099_; 
if (v_isShared_2097_ == 0)
{
v___x_2099_ = v___x_2096_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2100_; 
v_reuseFailAlloc_2100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2100_, 0, v_a_2094_);
v___x_2099_ = v_reuseFailAlloc_2100_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
return v___x_2099_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg___boxed(lean_object* v_goal_2102_, lean_object* v_k_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_){
_start:
{
lean_object* v_res_2109_; 
v_res_2109_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg(v_goal_2102_, v_k_2103_, v___y_2104_, v___y_2105_, v___y_2106_, v___y_2107_);
lean_dec(v___y_2107_);
lean_dec_ref(v___y_2106_);
lean_dec(v___y_2105_);
lean_dec_ref(v___y_2104_);
return v_res_2109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1(lean_object* v_00_u03b1_2110_, lean_object* v_goal_2111_, lean_object* v_k_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_){
_start:
{
lean_object* v___x_2118_; 
v___x_2118_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg(v_goal_2111_, v_k_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_);
return v___x_2118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___boxed(lean_object* v_00_u03b1_2119_, lean_object* v_goal_2120_, lean_object* v_k_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_){
_start:
{
lean_object* v_res_2127_; 
v_res_2127_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1(v_00_u03b1_2119_, v_goal_2120_, v_k_2121_, v___y_2122_, v___y_2123_, v___y_2124_, v___y_2125_);
lean_dec(v___y_2125_);
lean_dec_ref(v___y_2124_);
lean_dec(v___y_2123_);
lean_dec_ref(v___y_2122_);
return v_res_2127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__0(lean_object* v_cls_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_){
_start:
{
lean_object* v_options_2134_; uint8_t v_hasTrace_2135_; 
v_options_2134_ = lean_ctor_get(v___y_2131_, 2);
v_hasTrace_2135_ = lean_ctor_get_uint8(v_options_2134_, sizeof(void*)*1);
if (v_hasTrace_2135_ == 0)
{
lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; 
lean_dec(v_cls_2128_);
v___x_2136_ = lean_box(v_hasTrace_2135_);
v___x_2137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2137_, 0, v___x_2136_);
v___x_2138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2137_);
return v___x_2138_;
}
else
{
lean_object* v_inheritedTraceOptions_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; uint8_t v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; 
v_inheritedTraceOptions_2139_ = lean_ctor_get(v___y_2131_, 13);
v___x_2140_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__12));
v___x_2141_ = l_Lean_Name_append(v___x_2140_, v_cls_2128_);
v___x_2142_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2139_, v_options_2134_, v___x_2141_);
lean_dec(v___x_2141_);
v___x_2143_ = lean_box(v___x_2142_);
v___x_2144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2144_, 0, v___x_2143_);
v___x_2145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2145_, 0, v___x_2144_);
return v___x_2145_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__0___boxed(lean_object* v_cls_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_){
_start:
{
lean_object* v_res_2152_; 
v_res_2152_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__0(v_cls_2146_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_);
lean_dec(v___y_2150_);
lean_dec_ref(v___y_2149_);
lean_dec(v___y_2148_);
lean_dec_ref(v___y_2147_);
return v_res_2152_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(lean_object* v_cls_2155_, lean_object* v_msg_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_){
_start:
{
lean_object* v_ref_2162_; lean_object* v___x_2163_; lean_object* v_a_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2208_; 
v_ref_2162_ = lean_ctor_get(v___y_2159_, 5);
v___x_2163_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1_spec__1(v_msg_2156_, v___y_2157_, v___y_2158_, v___y_2159_, v___y_2160_);
v_a_2164_ = lean_ctor_get(v___x_2163_, 0);
v_isSharedCheck_2208_ = !lean_is_exclusive(v___x_2163_);
if (v_isSharedCheck_2208_ == 0)
{
v___x_2166_ = v___x_2163_;
v_isShared_2167_ = v_isSharedCheck_2208_;
goto v_resetjp_2165_;
}
else
{
lean_inc(v_a_2164_);
lean_dec(v___x_2163_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2208_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v___x_2168_; lean_object* v_traceState_2169_; lean_object* v_env_2170_; lean_object* v_nextMacroScope_2171_; lean_object* v_ngen_2172_; lean_object* v_auxDeclNGen_2173_; lean_object* v_cache_2174_; lean_object* v_messages_2175_; lean_object* v_infoState_2176_; lean_object* v_snapshotTasks_2177_; lean_object* v___x_2179_; uint8_t v_isShared_2180_; uint8_t v_isSharedCheck_2207_; 
v___x_2168_ = lean_st_ref_take(v___y_2160_);
v_traceState_2169_ = lean_ctor_get(v___x_2168_, 4);
v_env_2170_ = lean_ctor_get(v___x_2168_, 0);
v_nextMacroScope_2171_ = lean_ctor_get(v___x_2168_, 1);
v_ngen_2172_ = lean_ctor_get(v___x_2168_, 2);
v_auxDeclNGen_2173_ = lean_ctor_get(v___x_2168_, 3);
v_cache_2174_ = lean_ctor_get(v___x_2168_, 5);
v_messages_2175_ = lean_ctor_get(v___x_2168_, 6);
v_infoState_2176_ = lean_ctor_get(v___x_2168_, 7);
v_snapshotTasks_2177_ = lean_ctor_get(v___x_2168_, 8);
v_isSharedCheck_2207_ = !lean_is_exclusive(v___x_2168_);
if (v_isSharedCheck_2207_ == 0)
{
v___x_2179_ = v___x_2168_;
v_isShared_2180_ = v_isSharedCheck_2207_;
goto v_resetjp_2178_;
}
else
{
lean_inc(v_snapshotTasks_2177_);
lean_inc(v_infoState_2176_);
lean_inc(v_messages_2175_);
lean_inc(v_cache_2174_);
lean_inc(v_traceState_2169_);
lean_inc(v_auxDeclNGen_2173_);
lean_inc(v_ngen_2172_);
lean_inc(v_nextMacroScope_2171_);
lean_inc(v_env_2170_);
lean_dec(v___x_2168_);
v___x_2179_ = lean_box(0);
v_isShared_2180_ = v_isSharedCheck_2207_;
goto v_resetjp_2178_;
}
v_resetjp_2178_:
{
uint64_t v_tid_2181_; lean_object* v_traces_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2206_; 
v_tid_2181_ = lean_ctor_get_uint64(v_traceState_2169_, sizeof(void*)*1);
v_traces_2182_ = lean_ctor_get(v_traceState_2169_, 0);
v_isSharedCheck_2206_ = !lean_is_exclusive(v_traceState_2169_);
if (v_isSharedCheck_2206_ == 0)
{
v___x_2184_ = v_traceState_2169_;
v_isShared_2185_ = v_isSharedCheck_2206_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_traces_2182_);
lean_dec(v_traceState_2169_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2206_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2186_; double v___x_2187_; uint8_t v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2196_; 
v___x_2186_ = lean_box(0);
v___x_2187_ = lean_float_once(&l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0, &l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0);
v___x_2188_ = 0;
v___x_2189_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__1));
v___x_2190_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2190_, 0, v_cls_2155_);
lean_ctor_set(v___x_2190_, 1, v___x_2186_);
lean_ctor_set(v___x_2190_, 2, v___x_2189_);
lean_ctor_set_float(v___x_2190_, sizeof(void*)*3, v___x_2187_);
lean_ctor_set_float(v___x_2190_, sizeof(void*)*3 + 8, v___x_2187_);
lean_ctor_set_uint8(v___x_2190_, sizeof(void*)*3 + 16, v___x_2188_);
v___x_2191_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__2));
v___x_2192_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2192_, 0, v___x_2190_);
lean_ctor_set(v___x_2192_, 1, v_a_2164_);
lean_ctor_set(v___x_2192_, 2, v___x_2191_);
lean_inc(v_ref_2162_);
v___x_2193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2193_, 0, v_ref_2162_);
lean_ctor_set(v___x_2193_, 1, v___x_2192_);
v___x_2194_ = l_Lean_PersistentArray_push___redArg(v_traces_2182_, v___x_2193_);
if (v_isShared_2185_ == 0)
{
lean_ctor_set(v___x_2184_, 0, v___x_2194_);
v___x_2196_ = v___x_2184_;
goto v_reusejp_2195_;
}
else
{
lean_object* v_reuseFailAlloc_2205_; 
v_reuseFailAlloc_2205_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2205_, 0, v___x_2194_);
lean_ctor_set_uint64(v_reuseFailAlloc_2205_, sizeof(void*)*1, v_tid_2181_);
v___x_2196_ = v_reuseFailAlloc_2205_;
goto v_reusejp_2195_;
}
v_reusejp_2195_:
{
lean_object* v___x_2198_; 
if (v_isShared_2180_ == 0)
{
lean_ctor_set(v___x_2179_, 4, v___x_2196_);
v___x_2198_ = v___x_2179_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v_env_2170_);
lean_ctor_set(v_reuseFailAlloc_2204_, 1, v_nextMacroScope_2171_);
lean_ctor_set(v_reuseFailAlloc_2204_, 2, v_ngen_2172_);
lean_ctor_set(v_reuseFailAlloc_2204_, 3, v_auxDeclNGen_2173_);
lean_ctor_set(v_reuseFailAlloc_2204_, 4, v___x_2196_);
lean_ctor_set(v_reuseFailAlloc_2204_, 5, v_cache_2174_);
lean_ctor_set(v_reuseFailAlloc_2204_, 6, v_messages_2175_);
lean_ctor_set(v_reuseFailAlloc_2204_, 7, v_infoState_2176_);
lean_ctor_set(v_reuseFailAlloc_2204_, 8, v_snapshotTasks_2177_);
v___x_2198_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2202_; 
v___x_2199_ = lean_st_ref_set(v___y_2160_, v___x_2198_);
v___x_2200_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___closed__0));
if (v_isShared_2167_ == 0)
{
lean_ctor_set(v___x_2166_, 0, v___x_2200_);
v___x_2202_ = v___x_2166_;
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
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___boxed(lean_object* v_cls_2209_, lean_object* v_msg_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_){
_start:
{
lean_object* v_res_2216_; 
v_res_2216_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(v_cls_2209_, v_msg_2210_, v___y_2211_, v___y_2212_, v___y_2213_, v___y_2214_);
lean_dec(v___y_2214_);
lean_dec_ref(v___y_2213_);
lean_dec(v___y_2212_);
lean_dec_ref(v___y_2211_);
return v_res_2216_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2218_; lean_object* v___x_2219_; 
v___x_2218_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__0));
v___x_2219_ = l_Lean_stringToMessageData(v___x_2218_);
return v___x_2219_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__3(void){
_start:
{
lean_object* v___x_2221_; lean_object* v___x_2222_; 
v___x_2221_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__2));
v___x_2222_ = l_Lean_stringToMessageData(v___x_2221_);
return v___x_2222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1(lean_object* v___f_2223_, lean_object* v_cls_2224_, lean_object* v_00_u03c6_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_){
_start:
{
lean_object* v___y_2232_; lean_object* v___y_2238_; lean_object* v___y_2239_; lean_object* v___y_2240_; lean_object* v___y_2241_; lean_object* v___x_2283_; 
lean_inc(v___y_2229_);
lean_inc_ref(v___y_2228_);
lean_inc(v___y_2227_);
lean_inc_ref(v___y_2226_);
v___x_2283_ = lean_apply_5(v___f_2223_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_, lean_box(0));
if (lean_obj_tag(v___x_2283_) == 0)
{
lean_object* v_a_2284_; lean_object* v___x_2286_; uint8_t v_isShared_2287_; uint8_t v_isSharedCheck_2306_; 
v_a_2284_ = lean_ctor_get(v___x_2283_, 0);
v_isSharedCheck_2306_ = !lean_is_exclusive(v___x_2283_);
if (v_isSharedCheck_2306_ == 0)
{
v___x_2286_ = v___x_2283_;
v_isShared_2287_ = v_isSharedCheck_2306_;
goto v_resetjp_2285_;
}
else
{
lean_inc(v_a_2284_);
lean_dec(v___x_2283_);
v___x_2286_ = lean_box(0);
v_isShared_2287_ = v_isSharedCheck_2306_;
goto v_resetjp_2285_;
}
v_resetjp_2285_:
{
if (lean_obj_tag(v_a_2284_) == 0)
{
lean_object* v___x_2288_; lean_object* v___x_2290_; 
lean_dec_ref(v_00_u03c6_2225_);
lean_dec(v_cls_2224_);
v___x_2288_ = lean_box(0);
if (v_isShared_2287_ == 0)
{
lean_ctor_set(v___x_2286_, 0, v___x_2288_);
v___x_2290_ = v___x_2286_;
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
lean_object* v_val_2292_; uint8_t v___x_2293_; 
lean_del_object(v___x_2286_);
v_val_2292_ = lean_ctor_get(v_a_2284_, 0);
lean_inc(v_val_2292_);
lean_dec_ref_known(v_a_2284_, 1);
v___x_2293_ = lean_unbox(v_val_2292_);
lean_dec(v_val_2292_);
if (v___x_2293_ == 0)
{
v___y_2238_ = v___y_2226_;
v___y_2239_ = v___y_2227_;
v___y_2240_ = v___y_2228_;
v___y_2241_ = v___y_2229_;
goto v___jp_2237_;
}
else
{
lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; 
v___x_2294_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__3);
lean_inc_ref(v_00_u03c6_2225_);
v___x_2295_ = l_Lean_MessageData_ofExpr(v_00_u03c6_2225_);
v___x_2296_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2296_, 0, v___x_2294_);
lean_ctor_set(v___x_2296_, 1, v___x_2295_);
lean_inc(v_cls_2224_);
v___x_2297_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(v_cls_2224_, v___x_2296_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_);
if (lean_obj_tag(v___x_2297_) == 0)
{
lean_dec_ref_known(v___x_2297_, 1);
v___y_2238_ = v___y_2226_;
v___y_2239_ = v___y_2227_;
v___y_2240_ = v___y_2228_;
v___y_2241_ = v___y_2229_;
goto v___jp_2237_;
}
else
{
lean_object* v_a_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2305_; 
lean_dec_ref(v_00_u03c6_2225_);
lean_dec(v_cls_2224_);
v_a_2298_ = lean_ctor_get(v___x_2297_, 0);
v_isSharedCheck_2305_ = !lean_is_exclusive(v___x_2297_);
if (v_isSharedCheck_2305_ == 0)
{
v___x_2300_ = v___x_2297_;
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_a_2298_);
lean_dec(v___x_2297_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v___x_2303_; 
if (v_isShared_2301_ == 0)
{
v___x_2303_ = v___x_2300_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2304_; 
v_reuseFailAlloc_2304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2304_, 0, v_a_2298_);
v___x_2303_ = v_reuseFailAlloc_2304_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
return v___x_2303_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2307_; lean_object* v___x_2309_; uint8_t v_isShared_2310_; uint8_t v_isSharedCheck_2314_; 
lean_dec_ref(v_00_u03c6_2225_);
lean_dec(v_cls_2224_);
v_a_2307_ = lean_ctor_get(v___x_2283_, 0);
v_isSharedCheck_2314_ = !lean_is_exclusive(v___x_2283_);
if (v_isSharedCheck_2314_ == 0)
{
v___x_2309_ = v___x_2283_;
v_isShared_2310_ = v_isSharedCheck_2314_;
goto v_resetjp_2308_;
}
else
{
lean_inc(v_a_2307_);
lean_dec(v___x_2283_);
v___x_2309_ = lean_box(0);
v_isShared_2310_ = v_isSharedCheck_2314_;
goto v_resetjp_2308_;
}
v_resetjp_2308_:
{
lean_object* v___x_2312_; 
if (v_isShared_2310_ == 0)
{
v___x_2312_ = v___x_2309_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v_a_2307_);
v___x_2312_ = v_reuseFailAlloc_2313_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
return v___x_2312_;
}
}
}
v___jp_2231_:
{
lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; 
v___x_2233_ = lean_box(0);
v___x_2234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2234_, 0, v___x_2233_);
lean_ctor_set(v___x_2234_, 1, v___y_2232_);
v___x_2235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2235_, 0, v___x_2234_);
v___x_2236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2236_, 0, v___x_2235_);
return v___x_2236_;
}
v___jp_2237_:
{
lean_object* v___x_2242_; uint8_t v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; 
lean_inc_ref(v_00_u03c6_2225_);
v___x_2242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2242_, 0, v_00_u03c6_2225_);
v___x_2243_ = 0;
v___x_2244_ = lean_box(0);
v___x_2245_ = l_Lean_Meta_mkFreshExprMVar(v___x_2242_, v___x_2243_, v___x_2244_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_);
if (lean_obj_tag(v___x_2245_) == 0)
{
lean_object* v_a_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v_a_2246_ = lean_ctor_get(v___x_2245_, 0);
lean_inc(v_a_2246_);
lean_dec_ref_known(v___x_2245_, 1);
v___x_2247_ = l_Lean_Expr_mvarId_x21(v_a_2246_);
v___x_2248_ = l_Lean_MVarId_applyRflAndAndIntro(v___x_2247_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_);
if (lean_obj_tag(v___x_2248_) == 0)
{
lean_object* v_options_2249_; uint8_t v_hasTrace_2250_; 
lean_dec_ref_known(v___x_2248_, 1);
v_options_2249_ = lean_ctor_get(v___y_2240_, 2);
v_hasTrace_2250_ = lean_ctor_get_uint8(v_options_2249_, sizeof(void*)*1);
if (v_hasTrace_2250_ == 0)
{
lean_dec_ref(v_00_u03c6_2225_);
lean_dec(v_cls_2224_);
v___y_2232_ = v_a_2246_;
goto v___jp_2231_;
}
else
{
lean_object* v_inheritedTraceOptions_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; uint8_t v___x_2254_; 
v_inheritedTraceOptions_2251_ = lean_ctor_get(v___y_2240_, 13);
v___x_2252_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__12));
lean_inc(v_cls_2224_);
v___x_2253_ = l_Lean_Name_append(v___x_2252_, v_cls_2224_);
v___x_2254_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2251_, v_options_2249_, v___x_2253_);
lean_dec(v___x_2253_);
if (v___x_2254_ == 0)
{
lean_dec_ref(v_00_u03c6_2225_);
lean_dec(v_cls_2224_);
v___y_2232_ = v_a_2246_;
goto v___jp_2231_;
}
else
{
lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; 
v___x_2255_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__1);
v___x_2256_ = l_Lean_MessageData_ofExpr(v_00_u03c6_2225_);
v___x_2257_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2257_, 0, v___x_2255_);
lean_ctor_set(v___x_2257_, 1, v___x_2256_);
v___x_2258_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(v_cls_2224_, v___x_2257_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_);
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_dec_ref_known(v___x_2258_, 1);
v___y_2232_ = v_a_2246_;
goto v___jp_2231_;
}
else
{
lean_object* v_a_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2266_; 
lean_dec(v_a_2246_);
v_a_2259_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2266_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2266_ == 0)
{
v___x_2261_ = v___x_2258_;
v_isShared_2262_ = v_isSharedCheck_2266_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_a_2259_);
lean_dec(v___x_2258_);
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
else
{
lean_object* v_a_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2274_; 
lean_dec(v_a_2246_);
lean_dec_ref(v_00_u03c6_2225_);
lean_dec(v_cls_2224_);
v_a_2267_ = lean_ctor_get(v___x_2248_, 0);
v_isSharedCheck_2274_ = !lean_is_exclusive(v___x_2248_);
if (v_isSharedCheck_2274_ == 0)
{
v___x_2269_ = v___x_2248_;
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
else
{
lean_inc(v_a_2267_);
lean_dec(v___x_2248_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
lean_object* v___x_2272_; 
if (v_isShared_2270_ == 0)
{
v___x_2272_ = v___x_2269_;
goto v_reusejp_2271_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v_a_2267_);
v___x_2272_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2271_;
}
v_reusejp_2271_:
{
return v___x_2272_;
}
}
}
}
else
{
lean_object* v_a_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2282_; 
lean_dec_ref(v_00_u03c6_2225_);
lean_dec(v_cls_2224_);
v_a_2275_ = lean_ctor_get(v___x_2245_, 0);
v_isSharedCheck_2282_ = !lean_is_exclusive(v___x_2245_);
if (v_isSharedCheck_2282_ == 0)
{
v___x_2277_ = v___x_2245_;
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_a_2275_);
lean_dec(v___x_2245_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___boxed(lean_object* v___f_2315_, lean_object* v_cls_2316_, lean_object* v_00_u03c6_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_){
_start:
{
lean_object* v_res_2323_; 
v_res_2323_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1(v___f_2315_, v_cls_2316_, v_00_u03c6_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_);
lean_dec(v___y_2321_);
lean_dec_ref(v___y_2320_);
lean_dec(v___y_2319_);
lean_dec_ref(v___y_2318_);
return v_res_2323_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__3(void){
_start:
{
lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2330_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__2));
v___x_2331_ = l_Lean_stringToMessageData(v___x_2330_);
return v___x_2331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro(lean_object* v_goal_2332_, lean_object* v_a_2333_, lean_object* v_a_2334_, lean_object* v_a_2335_, lean_object* v_a_2336_){
_start:
{
lean_object* v___y_2342_; uint8_t v___y_2343_; lean_object* v_cls_2345_; lean_object* v___x_2346_; lean_object* v_a_2347_; lean_object* v_val_2348_; lean_object* v___f_2349_; lean_object* v___y_2351_; lean_object* v___y_2352_; lean_object* v___y_2353_; lean_object* v___y_2354_; uint8_t v___x_2376_; 
v_cls_2345_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__10));
v___x_2346_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__0(v_cls_2345_, v_a_2333_, v_a_2334_, v_a_2335_, v_a_2336_);
v_a_2347_ = lean_ctor_get(v___x_2346_, 0);
lean_inc(v_a_2347_);
lean_dec_ref(v___x_2346_);
v_val_2348_ = lean_ctor_get(v_a_2347_, 0);
lean_inc(v_val_2348_);
lean_dec(v_a_2347_);
v___f_2349_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__1));
v___x_2376_ = lean_unbox(v_val_2348_);
lean_dec(v_val_2348_);
if (v___x_2376_ == 0)
{
v___y_2351_ = v_a_2333_;
v___y_2352_ = v_a_2334_;
v___y_2353_ = v_a_2335_;
v___y_2354_ = v_a_2336_;
goto v___jp_2350_;
}
else
{
lean_object* v_target_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; 
v_target_2377_ = lean_ctor_get(v_goal_2332_, 3);
v___x_2378_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__3);
lean_inc_ref(v_target_2377_);
v___x_2379_ = l_Lean_MessageData_ofExpr(v_target_2377_);
v___x_2380_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2380_, 0, v___x_2378_);
lean_ctor_set(v___x_2380_, 1, v___x_2379_);
v___x_2381_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(v_cls_2345_, v___x_2380_, v_a_2333_, v_a_2334_, v_a_2335_, v_a_2336_);
if (lean_obj_tag(v___x_2381_) == 0)
{
lean_dec_ref_known(v___x_2381_, 1);
v___y_2351_ = v_a_2333_;
v___y_2352_ = v_a_2334_;
v___y_2353_ = v_a_2335_;
v___y_2354_ = v_a_2336_;
goto v___jp_2350_;
}
else
{
lean_object* v_a_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2389_; 
lean_dec_ref(v_goal_2332_);
v_a_2382_ = lean_ctor_get(v___x_2381_, 0);
v_isSharedCheck_2389_ = !lean_is_exclusive(v___x_2381_);
if (v_isSharedCheck_2389_ == 0)
{
v___x_2384_ = v___x_2381_;
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_a_2382_);
lean_dec(v___x_2381_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v___x_2387_; 
if (v_isShared_2385_ == 0)
{
v___x_2387_ = v___x_2384_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v_a_2382_);
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
v___jp_2338_:
{
lean_object* v___x_2339_; lean_object* v___x_2340_; 
v___x_2339_ = lean_box(0);
v___x_2340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2340_, 0, v___x_2339_);
return v___x_2340_;
}
v___jp_2341_:
{
if (v___y_2343_ == 0)
{
lean_dec_ref(v___y_2342_);
goto v___jp_2338_;
}
else
{
lean_object* v___x_2344_; 
v___x_2344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2344_, 0, v___y_2342_);
return v___x_2344_;
}
}
v___jp_2350_:
{
lean_object* v___x_2355_; 
v___x_2355_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg(v_goal_2332_, v___f_2349_, v___y_2351_, v___y_2352_, v___y_2353_, v___y_2354_);
if (lean_obj_tag(v___x_2355_) == 0)
{
lean_object* v_a_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2372_; 
v_a_2356_ = lean_ctor_get(v___x_2355_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v___x_2355_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2358_ = v___x_2355_;
v_isShared_2359_ = v_isSharedCheck_2372_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_a_2356_);
lean_dec(v___x_2355_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2372_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
if (lean_obj_tag(v_a_2356_) == 0)
{
lean_del_object(v___x_2358_);
goto v___jp_2338_;
}
else
{
lean_object* v_val_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2371_; 
v_val_2360_ = lean_ctor_get(v_a_2356_, 0);
v_isSharedCheck_2371_ = !lean_is_exclusive(v_a_2356_);
if (v_isSharedCheck_2371_ == 0)
{
v___x_2362_ = v_a_2356_;
v_isShared_2363_ = v_isSharedCheck_2371_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_val_2360_);
lean_dec(v_a_2356_);
v___x_2362_ = lean_box(0);
v_isShared_2363_ = v_isSharedCheck_2371_;
goto v_resetjp_2361_;
}
v_resetjp_2361_:
{
lean_object* v_snd_2364_; lean_object* v___x_2366_; 
v_snd_2364_ = lean_ctor_get(v_val_2360_, 1);
lean_inc(v_snd_2364_);
lean_dec(v_val_2360_);
if (v_isShared_2363_ == 0)
{
lean_ctor_set(v___x_2362_, 0, v_snd_2364_);
v___x_2366_ = v___x_2362_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2370_; 
v_reuseFailAlloc_2370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2370_, 0, v_snd_2364_);
v___x_2366_ = v_reuseFailAlloc_2370_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
lean_object* v___x_2368_; 
if (v_isShared_2359_ == 0)
{
lean_ctor_set(v___x_2358_, 0, v___x_2366_);
v___x_2368_ = v___x_2358_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v___x_2366_);
v___x_2368_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
return v___x_2368_;
}
}
}
}
}
}
else
{
lean_object* v_a_2373_; uint8_t v___x_2374_; 
v_a_2373_ = lean_ctor_get(v___x_2355_, 0);
lean_inc(v_a_2373_);
lean_dec_ref_known(v___x_2355_, 1);
v___x_2374_ = l_Lean_Exception_isInterrupt(v_a_2373_);
if (v___x_2374_ == 0)
{
uint8_t v___x_2375_; 
lean_inc(v_a_2373_);
v___x_2375_ = l_Lean_Exception_isRuntime(v_a_2373_);
v___y_2342_ = v_a_2373_;
v___y_2343_ = v___x_2375_;
goto v___jp_2341_;
}
else
{
v___y_2342_ = v_a_2373_;
v___y_2343_ = v___x_2374_;
goto v___jp_2341_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___boxed(lean_object* v_goal_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_){
_start:
{
lean_object* v_res_2396_; 
v_res_2396_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro(v_goal_2390_, v_a_2391_, v_a_2392_, v_a_2393_, v_a_2394_);
lean_dec(v_a_2394_);
lean_dec_ref(v_a_2393_);
lean_dec(v_a_2392_);
lean_dec_ref(v_a_2391_);
return v_res_2396_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__0(uint8_t v___y_2397_, lean_object* v_x_2398_){
_start:
{
return v___y_2397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__0___boxed(lean_object* v___y_2399_, lean_object* v_x_2400_){
_start:
{
uint8_t v___y_9301__boxed_2401_; uint8_t v_res_2402_; lean_object* v_r_2403_; 
v___y_9301__boxed_2401_ = lean_unbox(v___y_2399_);
v_res_2402_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__0(v___y_9301__boxed_2401_, v_x_2400_);
lean_dec(v_x_2400_);
v_r_2403_ = lean_box(v_res_2402_);
return v_r_2403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1(lean_object* v_00_u03c6_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_){
_start:
{
lean_object* v___x_2422_; uint8_t v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; 
v___x_2422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2422_, 0, v_00_u03c6_2416_);
v___x_2423_ = 0;
v___x_2424_ = lean_box(0);
v___x_2425_ = l_Lean_Meta_mkFreshExprMVar(v___x_2422_, v___x_2423_, v___x_2424_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_);
if (lean_obj_tag(v___x_2425_) == 0)
{
lean_object* v_a_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2484_; 
v_a_2426_ = lean_ctor_get(v___x_2425_, 0);
v_isSharedCheck_2484_ = !lean_is_exclusive(v___x_2425_);
if (v_isSharedCheck_2484_ == 0)
{
v___x_2428_ = v___x_2425_;
v_isShared_2429_ = v_isSharedCheck_2484_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_a_2426_);
lean_dec(v___x_2425_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2484_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2437_; lean_object* v___x_2438_; 
v___x_2437_ = l_Lean_Expr_mvarId_x21(v_a_2426_);
lean_inc(v___x_2437_);
v___x_2438_ = l_Lean_MVarId_applyRflAndAndIntro(v___x_2437_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_);
if (lean_obj_tag(v___x_2438_) == 0)
{
lean_dec_ref_known(v___x_2438_, 1);
lean_dec(v___x_2437_);
goto v___jp_2430_;
}
else
{
lean_object* v_a_2439_; lean_object* v___x_2441_; uint8_t v_isShared_2442_; uint8_t v_isSharedCheck_2483_; 
v_a_2439_ = lean_ctor_get(v___x_2438_, 0);
v_isSharedCheck_2483_ = !lean_is_exclusive(v___x_2438_);
if (v_isSharedCheck_2483_ == 0)
{
v___x_2441_ = v___x_2438_;
v_isShared_2442_ = v_isSharedCheck_2483_;
goto v_resetjp_2440_;
}
else
{
lean_inc(v_a_2439_);
lean_dec(v___x_2438_);
v___x_2441_ = lean_box(0);
v_isShared_2442_ = v_isSharedCheck_2483_;
goto v_resetjp_2440_;
}
v_resetjp_2440_:
{
uint8_t v___y_2444_; uint8_t v___x_2481_; 
v___x_2481_ = l_Lean_Exception_isInterrupt(v_a_2439_);
if (v___x_2481_ == 0)
{
uint8_t v___x_2482_; 
lean_inc(v_a_2439_);
v___x_2482_ = l_Lean_Exception_isRuntime(v_a_2439_);
v___y_2444_ = v___x_2482_;
goto v___jp_2443_;
}
else
{
v___y_2444_ = v___x_2481_;
goto v___jp_2443_;
}
v___jp_2443_:
{
if (v___y_2444_ == 0)
{
lean_object* v_ref_2445_; lean_object* v___x_2446_; lean_object* v___f_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; uint8_t v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; 
lean_del_object(v___x_2441_);
lean_dec(v_a_2439_);
v_ref_2445_ = lean_ctor_get(v___y_2419_, 5);
v___x_2446_ = lean_box(v___y_2444_);
v___f_2447_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2447_, 0, v___x_2446_);
v___x_2448_ = l_Lean_SourceInfo_fromRef(v_ref_2445_, v___y_2444_);
v___x_2449_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1));
v___x_2450_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__2));
lean_inc(v___x_2448_);
v___x_2451_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2451_, 0, v___x_2448_);
lean_ctor_set(v___x_2451_, 1, v___x_2450_);
v___x_2452_ = l_Lean_Syntax_node1(v___x_2448_, v___x_2449_, v___x_2451_);
v___x_2453_ = lean_box(0);
v___x_2454_ = lean_box(0);
v___x_2455_ = 1;
v___x_2456_ = lean_box(1);
v___x_2457_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__3));
v___x_2458_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v___x_2458_, 0, v___x_2453_);
lean_ctor_set(v___x_2458_, 1, v___x_2454_);
lean_ctor_set(v___x_2458_, 2, v___x_2453_);
lean_ctor_set(v___x_2458_, 3, v___f_2447_);
lean_ctor_set(v___x_2458_, 4, v___x_2456_);
lean_ctor_set(v___x_2458_, 5, v___x_2456_);
lean_ctor_set(v___x_2458_, 6, v___x_2453_);
lean_ctor_set(v___x_2458_, 7, v___x_2457_);
lean_ctor_set_uint8(v___x_2458_, sizeof(void*)*8, v___x_2455_);
lean_ctor_set_uint8(v___x_2458_, sizeof(void*)*8 + 1, v___x_2455_);
lean_ctor_set_uint8(v___x_2458_, sizeof(void*)*8 + 2, v___x_2455_);
lean_ctor_set_uint8(v___x_2458_, sizeof(void*)*8 + 3, v___x_2455_);
lean_ctor_set_uint8(v___x_2458_, sizeof(void*)*8 + 4, v___y_2444_);
lean_ctor_set_uint8(v___x_2458_, sizeof(void*)*8 + 5, v___y_2444_);
lean_ctor_set_uint8(v___x_2458_, sizeof(void*)*8 + 6, v___y_2444_);
lean_ctor_set_uint8(v___x_2458_, sizeof(void*)*8 + 7, v___y_2444_);
lean_ctor_set_uint8(v___x_2458_, sizeof(void*)*8 + 8, v___x_2455_);
lean_ctor_set_uint8(v___x_2458_, sizeof(void*)*8 + 9, v___y_2444_);
lean_ctor_set_uint8(v___x_2458_, sizeof(void*)*8 + 10, v___x_2455_);
v___x_2459_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__4));
v___x_2460_ = l_Lean_Elab_runTactic(v___x_2437_, v___x_2452_, v___x_2458_, v___x_2459_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_);
if (lean_obj_tag(v___x_2460_) == 0)
{
lean_object* v_a_2461_; lean_object* v___x_2463_; uint8_t v_isShared_2464_; uint8_t v_isSharedCheck_2469_; 
v_a_2461_ = lean_ctor_get(v___x_2460_, 0);
v_isSharedCheck_2469_ = !lean_is_exclusive(v___x_2460_);
if (v_isSharedCheck_2469_ == 0)
{
v___x_2463_ = v___x_2460_;
v_isShared_2464_ = v_isSharedCheck_2469_;
goto v_resetjp_2462_;
}
else
{
lean_inc(v_a_2461_);
lean_dec(v___x_2460_);
v___x_2463_ = lean_box(0);
v_isShared_2464_ = v_isSharedCheck_2469_;
goto v_resetjp_2462_;
}
v_resetjp_2462_:
{
lean_object* v_fst_2465_; 
v_fst_2465_ = lean_ctor_get(v_a_2461_, 0);
lean_inc(v_fst_2465_);
lean_dec(v_a_2461_);
if (lean_obj_tag(v_fst_2465_) == 0)
{
lean_del_object(v___x_2463_);
goto v___jp_2430_;
}
else
{
lean_object* v___x_2467_; 
lean_dec(v_fst_2465_);
lean_del_object(v___x_2428_);
lean_dec(v_a_2426_);
if (v_isShared_2464_ == 0)
{
lean_ctor_set(v___x_2463_, 0, v___x_2453_);
v___x_2467_ = v___x_2463_;
goto v_reusejp_2466_;
}
else
{
lean_object* v_reuseFailAlloc_2468_; 
v_reuseFailAlloc_2468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2468_, 0, v___x_2453_);
v___x_2467_ = v_reuseFailAlloc_2468_;
goto v_reusejp_2466_;
}
v_reusejp_2466_:
{
return v___x_2467_;
}
}
}
}
else
{
lean_object* v_a_2470_; lean_object* v___x_2472_; uint8_t v_isShared_2473_; uint8_t v_isSharedCheck_2477_; 
lean_del_object(v___x_2428_);
lean_dec(v_a_2426_);
v_a_2470_ = lean_ctor_get(v___x_2460_, 0);
v_isSharedCheck_2477_ = !lean_is_exclusive(v___x_2460_);
if (v_isSharedCheck_2477_ == 0)
{
v___x_2472_ = v___x_2460_;
v_isShared_2473_ = v_isSharedCheck_2477_;
goto v_resetjp_2471_;
}
else
{
lean_inc(v_a_2470_);
lean_dec(v___x_2460_);
v___x_2472_ = lean_box(0);
v_isShared_2473_ = v_isSharedCheck_2477_;
goto v_resetjp_2471_;
}
v_resetjp_2471_:
{
lean_object* v___x_2475_; 
if (v_isShared_2473_ == 0)
{
v___x_2475_ = v___x_2472_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v_a_2470_);
v___x_2475_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
return v___x_2475_;
}
}
}
}
else
{
lean_object* v___x_2479_; 
lean_dec(v___x_2437_);
lean_del_object(v___x_2428_);
lean_dec(v_a_2426_);
if (v_isShared_2442_ == 0)
{
v___x_2479_ = v___x_2441_;
goto v_reusejp_2478_;
}
else
{
lean_object* v_reuseFailAlloc_2480_; 
v_reuseFailAlloc_2480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2480_, 0, v_a_2439_);
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
v___jp_2430_:
{
lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2435_; 
v___x_2431_ = lean_box(0);
v___x_2432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2432_, 0, v___x_2431_);
lean_ctor_set(v___x_2432_, 1, v_a_2426_);
v___x_2433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2433_, 0, v___x_2432_);
if (v_isShared_2429_ == 0)
{
lean_ctor_set(v___x_2428_, 0, v___x_2433_);
v___x_2435_ = v___x_2428_;
goto v_reusejp_2434_;
}
else
{
lean_object* v_reuseFailAlloc_2436_; 
v_reuseFailAlloc_2436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2436_, 0, v___x_2433_);
v___x_2435_ = v_reuseFailAlloc_2436_;
goto v_reusejp_2434_;
}
v_reusejp_2434_:
{
return v___x_2435_;
}
}
}
}
else
{
lean_object* v_a_2485_; lean_object* v___x_2487_; uint8_t v_isShared_2488_; uint8_t v_isSharedCheck_2492_; 
v_a_2485_ = lean_ctor_get(v___x_2425_, 0);
v_isSharedCheck_2492_ = !lean_is_exclusive(v___x_2425_);
if (v_isSharedCheck_2492_ == 0)
{
v___x_2487_ = v___x_2425_;
v_isShared_2488_ = v_isSharedCheck_2492_;
goto v_resetjp_2486_;
}
else
{
lean_inc(v_a_2485_);
lean_dec(v___x_2425_);
v___x_2487_ = lean_box(0);
v_isShared_2488_ = v_isSharedCheck_2492_;
goto v_resetjp_2486_;
}
v_resetjp_2486_:
{
lean_object* v___x_2490_; 
if (v_isShared_2488_ == 0)
{
v___x_2490_ = v___x_2487_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v_a_2485_);
v___x_2490_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
return v___x_2490_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___boxed(lean_object* v_00_u03c6_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_){
_start:
{
lean_object* v_res_2499_; 
v_res_2499_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1(v_00_u03c6_2493_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_);
lean_dec(v___y_2497_);
lean_dec_ref(v___y_2496_);
lean_dec(v___y_2495_);
lean_dec_ref(v___y_2494_);
return v_res_2499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial(lean_object* v_goal_2501_, lean_object* v_a_2502_, lean_object* v_a_2503_, lean_object* v_a_2504_, lean_object* v_a_2505_){
_start:
{
lean_object* v___f_2510_; lean_object* v___x_2511_; 
v___f_2510_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___closed__0));
v___x_2511_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg(v_goal_2501_, v___f_2510_, v_a_2502_, v_a_2503_, v_a_2504_, v_a_2505_);
if (lean_obj_tag(v___x_2511_) == 0)
{
lean_object* v_a_2512_; lean_object* v___x_2514_; uint8_t v_isShared_2515_; uint8_t v_isSharedCheck_2528_; 
v_a_2512_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2528_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2528_ == 0)
{
v___x_2514_ = v___x_2511_;
v_isShared_2515_ = v_isSharedCheck_2528_;
goto v_resetjp_2513_;
}
else
{
lean_inc(v_a_2512_);
lean_dec(v___x_2511_);
v___x_2514_ = lean_box(0);
v_isShared_2515_ = v_isSharedCheck_2528_;
goto v_resetjp_2513_;
}
v_resetjp_2513_:
{
if (lean_obj_tag(v_a_2512_) == 0)
{
lean_del_object(v___x_2514_);
goto v___jp_2507_;
}
else
{
lean_object* v_val_2516_; lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2527_; 
v_val_2516_ = lean_ctor_get(v_a_2512_, 0);
v_isSharedCheck_2527_ = !lean_is_exclusive(v_a_2512_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2518_ = v_a_2512_;
v_isShared_2519_ = v_isSharedCheck_2527_;
goto v_resetjp_2517_;
}
else
{
lean_inc(v_val_2516_);
lean_dec(v_a_2512_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2527_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v_snd_2520_; lean_object* v___x_2522_; 
v_snd_2520_ = lean_ctor_get(v_val_2516_, 1);
lean_inc(v_snd_2520_);
lean_dec(v_val_2516_);
if (v_isShared_2519_ == 0)
{
lean_ctor_set(v___x_2518_, 0, v_snd_2520_);
v___x_2522_ = v___x_2518_;
goto v_reusejp_2521_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v_snd_2520_);
v___x_2522_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2521_;
}
v_reusejp_2521_:
{
lean_object* v___x_2524_; 
if (v_isShared_2515_ == 0)
{
lean_ctor_set(v___x_2514_, 0, v___x_2522_);
v___x_2524_ = v___x_2514_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2525_; 
v_reuseFailAlloc_2525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2525_, 0, v___x_2522_);
v___x_2524_ = v_reuseFailAlloc_2525_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
return v___x_2524_;
}
}
}
}
}
}
else
{
lean_object* v_a_2529_; lean_object* v___x_2531_; uint8_t v_isShared_2532_; uint8_t v_isSharedCheck_2540_; 
v_a_2529_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2540_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2540_ == 0)
{
v___x_2531_ = v___x_2511_;
v_isShared_2532_ = v_isSharedCheck_2540_;
goto v_resetjp_2530_;
}
else
{
lean_inc(v_a_2529_);
lean_dec(v___x_2511_);
v___x_2531_ = lean_box(0);
v_isShared_2532_ = v_isSharedCheck_2540_;
goto v_resetjp_2530_;
}
v_resetjp_2530_:
{
uint8_t v___y_2534_; uint8_t v___x_2538_; 
v___x_2538_ = l_Lean_Exception_isInterrupt(v_a_2529_);
if (v___x_2538_ == 0)
{
uint8_t v___x_2539_; 
lean_inc(v_a_2529_);
v___x_2539_ = l_Lean_Exception_isRuntime(v_a_2529_);
v___y_2534_ = v___x_2539_;
goto v___jp_2533_;
}
else
{
v___y_2534_ = v___x_2538_;
goto v___jp_2533_;
}
v___jp_2533_:
{
if (v___y_2534_ == 0)
{
lean_del_object(v___x_2531_);
lean_dec(v_a_2529_);
goto v___jp_2507_;
}
else
{
lean_object* v___x_2536_; 
if (v_isShared_2532_ == 0)
{
v___x_2536_ = v___x_2531_;
goto v_reusejp_2535_;
}
else
{
lean_object* v_reuseFailAlloc_2537_; 
v_reuseFailAlloc_2537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2537_, 0, v_a_2529_);
v___x_2536_ = v_reuseFailAlloc_2537_;
goto v_reusejp_2535_;
}
v_reusejp_2535_:
{
return v___x_2536_;
}
}
}
}
}
v___jp_2507_:
{
lean_object* v___x_2508_; lean_object* v___x_2509_; 
v___x_2508_ = lean_box(0);
v___x_2509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2509_, 0, v___x_2508_);
return v___x_2509_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___boxed(lean_object* v_goal_2541_, lean_object* v_a_2542_, lean_object* v_a_2543_, lean_object* v_a_2544_, lean_object* v_a_2545_, lean_object* v_a_2546_){
_start:
{
lean_object* v_res_2547_; 
v_res_2547_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial(v_goal_2541_, v_a_2542_, v_a_2543_, v_a_2544_, v_a_2545_);
lean_dec(v_a_2545_);
lean_dec_ref(v_a_2544_);
lean_dec(v_a_2543_);
lean_dec_ref(v_a_2542_);
return v_res_2547_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_countFunctionTypes_spec__0___redArg(lean_object* v_a_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_){
_start:
{
lean_object* v_fst_2554_; lean_object* v_snd_2555_; lean_object* v___x_2557_; uint8_t v_isShared_2558_; uint8_t v_isSharedCheck_2586_; 
v_fst_2554_ = lean_ctor_get(v_a_2548_, 0);
v_snd_2555_ = lean_ctor_get(v_a_2548_, 1);
v_isSharedCheck_2586_ = !lean_is_exclusive(v_a_2548_);
if (v_isSharedCheck_2586_ == 0)
{
v___x_2557_ = v_a_2548_;
v_isShared_2558_ = v_isSharedCheck_2586_;
goto v_resetjp_2556_;
}
else
{
lean_inc(v_snd_2555_);
lean_inc(v_fst_2554_);
lean_dec(v_a_2548_);
v___x_2557_ = lean_box(0);
v_isShared_2558_ = v_isSharedCheck_2586_;
goto v_resetjp_2556_;
}
v_resetjp_2556_:
{
lean_object* v___x_2559_; 
lean_inc(v_fst_2554_);
v___x_2559_ = l_Lean_Meta_whnfR(v_fst_2554_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_);
if (lean_obj_tag(v___x_2559_) == 0)
{
lean_object* v_a_2560_; lean_object* v___x_2562_; uint8_t v_isShared_2563_; uint8_t v_isSharedCheck_2577_; 
v_a_2560_ = lean_ctor_get(v___x_2559_, 0);
v_isSharedCheck_2577_ = !lean_is_exclusive(v___x_2559_);
if (v_isSharedCheck_2577_ == 0)
{
v___x_2562_ = v___x_2559_;
v_isShared_2563_ = v_isSharedCheck_2577_;
goto v_resetjp_2561_;
}
else
{
lean_inc(v_a_2560_);
lean_dec(v___x_2559_);
v___x_2562_ = lean_box(0);
v_isShared_2563_ = v_isSharedCheck_2577_;
goto v_resetjp_2561_;
}
v_resetjp_2561_:
{
if (lean_obj_tag(v_a_2560_) == 7)
{
lean_object* v_body_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2568_; 
lean_del_object(v___x_2562_);
lean_dec(v_fst_2554_);
v_body_2564_ = lean_ctor_get(v_a_2560_, 2);
lean_inc_ref(v_body_2564_);
lean_dec_ref_known(v_a_2560_, 3);
v___x_2565_ = lean_unsigned_to_nat(1u);
v___x_2566_ = lean_nat_add(v_snd_2555_, v___x_2565_);
lean_dec(v_snd_2555_);
if (v_isShared_2558_ == 0)
{
lean_ctor_set(v___x_2557_, 1, v___x_2566_);
lean_ctor_set(v___x_2557_, 0, v_body_2564_);
v___x_2568_ = v___x_2557_;
goto v_reusejp_2567_;
}
else
{
lean_object* v_reuseFailAlloc_2570_; 
v_reuseFailAlloc_2570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2570_, 0, v_body_2564_);
lean_ctor_set(v_reuseFailAlloc_2570_, 1, v___x_2566_);
v___x_2568_ = v_reuseFailAlloc_2570_;
goto v_reusejp_2567_;
}
v_reusejp_2567_:
{
v_a_2548_ = v___x_2568_;
goto _start;
}
}
else
{
lean_object* v___x_2572_; 
lean_dec(v_a_2560_);
if (v_isShared_2558_ == 0)
{
v___x_2572_ = v___x_2557_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2576_; 
v_reuseFailAlloc_2576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2576_, 0, v_fst_2554_);
lean_ctor_set(v_reuseFailAlloc_2576_, 1, v_snd_2555_);
v___x_2572_ = v_reuseFailAlloc_2576_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
lean_object* v___x_2574_; 
if (v_isShared_2563_ == 0)
{
lean_ctor_set(v___x_2562_, 0, v___x_2572_);
v___x_2574_ = v___x_2562_;
goto v_reusejp_2573_;
}
else
{
lean_object* v_reuseFailAlloc_2575_; 
v_reuseFailAlloc_2575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2575_, 0, v___x_2572_);
v___x_2574_ = v_reuseFailAlloc_2575_;
goto v_reusejp_2573_;
}
v_reusejp_2573_:
{
return v___x_2574_;
}
}
}
}
}
else
{
lean_object* v_a_2578_; lean_object* v___x_2580_; uint8_t v_isShared_2581_; uint8_t v_isSharedCheck_2585_; 
lean_del_object(v___x_2557_);
lean_dec(v_snd_2555_);
lean_dec(v_fst_2554_);
v_a_2578_ = lean_ctor_get(v___x_2559_, 0);
v_isSharedCheck_2585_ = !lean_is_exclusive(v___x_2559_);
if (v_isSharedCheck_2585_ == 0)
{
v___x_2580_ = v___x_2559_;
v_isShared_2581_ = v_isSharedCheck_2585_;
goto v_resetjp_2579_;
}
else
{
lean_inc(v_a_2578_);
lean_dec(v___x_2559_);
v___x_2580_ = lean_box(0);
v_isShared_2581_ = v_isSharedCheck_2585_;
goto v_resetjp_2579_;
}
v_resetjp_2579_:
{
lean_object* v___x_2583_; 
if (v_isShared_2581_ == 0)
{
v___x_2583_ = v___x_2580_;
goto v_reusejp_2582_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v_a_2578_);
v___x_2583_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2582_;
}
v_reusejp_2582_:
{
return v___x_2583_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_countFunctionTypes_spec__0___redArg___boxed(lean_object* v_a_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_){
_start:
{
lean_object* v_res_2593_; 
v_res_2593_ = l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_countFunctionTypes_spec__0___redArg(v_a_2587_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_);
lean_dec(v___y_2591_);
lean_dec_ref(v___y_2590_);
lean_dec(v___y_2589_);
lean_dec_ref(v___y_2588_);
return v_res_2593_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_countFunctionTypes(lean_object* v_l_2594_, lean_object* v_a_2595_, lean_object* v_a_2596_, lean_object* v_a_2597_, lean_object* v_a_2598_){
_start:
{
lean_object* v_n_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; 
v_n_2600_ = lean_unsigned_to_nat(0u);
v___x_2601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2601_, 0, v_l_2594_);
lean_ctor_set(v___x_2601_, 1, v_n_2600_);
v___x_2602_ = l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_countFunctionTypes_spec__0___redArg(v___x_2601_, v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_);
if (lean_obj_tag(v___x_2602_) == 0)
{
lean_object* v_a_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2611_; 
v_a_2603_ = lean_ctor_get(v___x_2602_, 0);
v_isSharedCheck_2611_ = !lean_is_exclusive(v___x_2602_);
if (v_isSharedCheck_2611_ == 0)
{
v___x_2605_ = v___x_2602_;
v_isShared_2606_ = v_isSharedCheck_2611_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_a_2603_);
lean_dec(v___x_2602_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_2611_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
lean_object* v_snd_2607_; lean_object* v___x_2609_; 
v_snd_2607_ = lean_ctor_get(v_a_2603_, 1);
lean_inc(v_snd_2607_);
lean_dec(v_a_2603_);
if (v_isShared_2606_ == 0)
{
lean_ctor_set(v___x_2605_, 0, v_snd_2607_);
v___x_2609_ = v___x_2605_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v_snd_2607_);
v___x_2609_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
return v___x_2609_;
}
}
}
else
{
lean_object* v_a_2612_; lean_object* v___x_2614_; uint8_t v_isShared_2615_; uint8_t v_isSharedCheck_2619_; 
v_a_2612_ = lean_ctor_get(v___x_2602_, 0);
v_isSharedCheck_2619_ = !lean_is_exclusive(v___x_2602_);
if (v_isSharedCheck_2619_ == 0)
{
v___x_2614_ = v___x_2602_;
v_isShared_2615_ = v_isSharedCheck_2619_;
goto v_resetjp_2613_;
}
else
{
lean_inc(v_a_2612_);
lean_dec(v___x_2602_);
v___x_2614_ = lean_box(0);
v_isShared_2615_ = v_isSharedCheck_2619_;
goto v_resetjp_2613_;
}
v_resetjp_2613_:
{
lean_object* v___x_2617_; 
if (v_isShared_2615_ == 0)
{
v___x_2617_ = v___x_2614_;
goto v_reusejp_2616_;
}
else
{
lean_object* v_reuseFailAlloc_2618_; 
v_reuseFailAlloc_2618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2618_, 0, v_a_2612_);
v___x_2617_ = v_reuseFailAlloc_2618_;
goto v_reusejp_2616_;
}
v_reusejp_2616_:
{
return v___x_2617_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_countFunctionTypes___boxed(lean_object* v_l_2620_, lean_object* v_a_2621_, lean_object* v_a_2622_, lean_object* v_a_2623_, lean_object* v_a_2624_, lean_object* v_a_2625_){
_start:
{
lean_object* v_res_2626_; 
v_res_2626_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_countFunctionTypes(v_l_2620_, v_a_2621_, v_a_2622_, v_a_2623_, v_a_2624_);
lean_dec(v_a_2624_);
lean_dec_ref(v_a_2623_);
lean_dec(v_a_2622_);
lean_dec_ref(v_a_2621_);
return v_res_2626_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_countFunctionTypes_spec__0(lean_object* v_inst_2627_, lean_object* v_a_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_){
_start:
{
lean_object* v___x_2634_; 
v___x_2634_ = l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_countFunctionTypes_spec__0___redArg(v_a_2628_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_);
return v___x_2634_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_countFunctionTypes_spec__0___boxed(lean_object* v_inst_2635_, lean_object* v_a_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_){
_start:
{
lean_object* v_res_2642_; 
v_res_2642_ = l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_countFunctionTypes_spec__0(v_inst_2635_, v_a_2636_, v___y_2637_, v___y_2638_, v___y_2639_, v___y_2640_);
lean_dec(v___y_2640_);
lean_dec_ref(v___y_2639_);
lean_dec(v___y_2638_);
lean_dec_ref(v___y_2637_);
return v_res_2642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__1(lean_object* v_name_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_){
_start:
{
lean_object* v___x_2649_; 
v___x_2649_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_getFreshHypName(v_name_2643_, v___y_2646_, v___y_2647_);
return v___x_2649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__1___boxed(lean_object* v_name_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_){
_start:
{
lean_object* v_res_2656_; 
v_res_2656_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__1(v_name_2650_, v___y_2651_, v___y_2652_, v___y_2653_, v___y_2654_);
lean_dec(v___y_2654_);
lean_dec_ref(v___y_2653_);
lean_dec(v___y_2652_);
lean_dec_ref(v___y_2651_);
return v_res_2656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__0(lean_object* v_fst_2657_, lean_object* v___x_2658_, lean_object* v___x_2659_, lean_object* v___x_2660_, lean_object* v___x_2661_, lean_object* v___x_2662_, lean_object* v___x_2663_, lean_object* v_l_2664_, lean_object* v_cl_2665_, lean_object* v_hyp_2666_, lean_object* v_00_u03c6_2667_, lean_object* v_inst_2668_, lean_object* v_fst_2669_, lean_object* v_toPure_2670_, lean_object* v_prf_2671_){
_start:
{
lean_object* v_u_2672_; lean_object* v_l_2673_; lean_object* v_cl_2674_; lean_object* v_hyps_2675_; lean_object* v_target_2676_; lean_object* v___x_2678_; uint8_t v_isShared_2679_; uint8_t v_isSharedCheck_2696_; 
v_u_2672_ = lean_ctor_get(v_fst_2657_, 0);
v_l_2673_ = lean_ctor_get(v_fst_2657_, 1);
v_cl_2674_ = lean_ctor_get(v_fst_2657_, 2);
v_hyps_2675_ = lean_ctor_get(v_fst_2657_, 3);
v_target_2676_ = lean_ctor_get(v_fst_2657_, 4);
v_isSharedCheck_2696_ = !lean_is_exclusive(v_fst_2657_);
if (v_isSharedCheck_2696_ == 0)
{
v___x_2678_ = v_fst_2657_;
v_isShared_2679_ = v_isSharedCheck_2696_;
goto v_resetjp_2677_;
}
else
{
lean_inc(v_target_2676_);
lean_inc(v_hyps_2675_);
lean_inc(v_cl_2674_);
lean_inc(v_l_2673_);
lean_inc(v_u_2672_);
lean_dec(v_fst_2657_);
v___x_2678_ = lean_box(0);
v_isShared_2679_ = v_isSharedCheck_2696_;
goto v_resetjp_2677_;
}
v_resetjp_2677_:
{
lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v_prf_2684_; lean_object* v___y_2686_; lean_object* v___x_2694_; 
v___x_2680_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0));
v___x_2681_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__1));
v___x_2682_ = l_Lean_Name_mkStr7(v___x_2658_, v___x_2659_, v___x_2660_, v___x_2661_, v___x_2662_, v___x_2680_, v___x_2681_);
v___x_2683_ = l_Lean_mkConst(v___x_2682_, v___x_2663_);
lean_inc_ref(v_target_2676_);
lean_inc_ref(v_hyp_2666_);
lean_inc_ref(v_hyps_2675_);
lean_inc_ref(v_cl_2665_);
lean_inc_ref(v_l_2664_);
v_prf_2684_ = l_Lean_mkApp8(v___x_2683_, v_l_2664_, v_cl_2665_, v_hyps_2675_, v_hyp_2666_, v_target_2676_, v_00_u03c6_2667_, v_inst_2668_, v_prf_2671_);
v___x_2694_ = l_Lean_Level_dec(v_u_2672_);
if (lean_obj_tag(v___x_2694_) == 0)
{
lean_inc(v_u_2672_);
v___y_2686_ = v_u_2672_;
goto v___jp_2685_;
}
else
{
lean_object* v_val_2695_; 
v_val_2695_ = lean_ctor_get(v___x_2694_, 0);
lean_inc(v_val_2695_);
lean_dec_ref_known(v___x_2694_, 1);
v___y_2686_ = v_val_2695_;
goto v___jp_2685_;
}
v___jp_2685_:
{
lean_object* v___x_2687_; lean_object* v_goal_2689_; 
v___x_2687_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkAnd_x21(v___y_2686_, v_l_2664_, v_cl_2665_, v_hyps_2675_, v_hyp_2666_);
if (v_isShared_2679_ == 0)
{
lean_ctor_set(v___x_2678_, 3, v___x_2687_);
v_goal_2689_ = v___x_2678_;
goto v_reusejp_2688_;
}
else
{
lean_object* v_reuseFailAlloc_2693_; 
v_reuseFailAlloc_2693_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2693_, 0, v_u_2672_);
lean_ctor_set(v_reuseFailAlloc_2693_, 1, v_l_2673_);
lean_ctor_set(v_reuseFailAlloc_2693_, 2, v_cl_2674_);
lean_ctor_set(v_reuseFailAlloc_2693_, 3, v___x_2687_);
lean_ctor_set(v_reuseFailAlloc_2693_, 4, v_target_2676_);
v_goal_2689_ = v_reuseFailAlloc_2693_;
goto v_reusejp_2688_;
}
v_reusejp_2688_:
{
lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; 
v___x_2690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2690_, 0, v_goal_2689_);
lean_ctor_set(v___x_2690_, 1, v_prf_2684_);
v___x_2691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2691_, 0, v_fst_2669_);
lean_ctor_set(v___x_2691_, 1, v___x_2690_);
v___x_2692_ = lean_apply_2(v_toPure_2670_, lean_box(0), v___x_2691_);
return v___x_2692_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__2(lean_object* v___x_2697_, lean_object* v___x_2698_, lean_object* v___x_2699_, lean_object* v___x_2700_, lean_object* v___x_2701_, lean_object* v___x_2702_, lean_object* v_l_2703_, lean_object* v_cl_2704_, lean_object* v_hyp_2705_, lean_object* v_00_u03c6_2706_, lean_object* v_inst_2707_, lean_object* v_toPure_2708_, lean_object* v_h_2709_, uint8_t v___x_2710_, lean_object* v_inst_2711_, lean_object* v_toBind_2712_, lean_object* v_____x_2713_){
_start:
{
lean_object* v_snd_2714_; lean_object* v_fst_2715_; lean_object* v_fst_2716_; lean_object* v_snd_2717_; lean_object* v___f_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; uint8_t v___x_2722_; uint8_t v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; 
v_snd_2714_ = lean_ctor_get(v_____x_2713_, 1);
lean_inc(v_snd_2714_);
v_fst_2715_ = lean_ctor_get(v_____x_2713_, 0);
lean_inc(v_fst_2715_);
lean_dec_ref(v_____x_2713_);
v_fst_2716_ = lean_ctor_get(v_snd_2714_, 0);
lean_inc(v_fst_2716_);
v_snd_2717_ = lean_ctor_get(v_snd_2714_, 1);
lean_inc(v_snd_2717_);
lean_dec(v_snd_2714_);
v___f_2718_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__0), 15, 14);
lean_closure_set(v___f_2718_, 0, v_fst_2716_);
lean_closure_set(v___f_2718_, 1, v___x_2697_);
lean_closure_set(v___f_2718_, 2, v___x_2698_);
lean_closure_set(v___f_2718_, 3, v___x_2699_);
lean_closure_set(v___f_2718_, 4, v___x_2700_);
lean_closure_set(v___f_2718_, 5, v___x_2701_);
lean_closure_set(v___f_2718_, 6, v___x_2702_);
lean_closure_set(v___f_2718_, 7, v_l_2703_);
lean_closure_set(v___f_2718_, 8, v_cl_2704_);
lean_closure_set(v___f_2718_, 9, v_hyp_2705_);
lean_closure_set(v___f_2718_, 10, v_00_u03c6_2706_);
lean_closure_set(v___f_2718_, 11, v_inst_2707_);
lean_closure_set(v___f_2718_, 12, v_fst_2715_);
lean_closure_set(v___f_2718_, 13, v_toPure_2708_);
v___x_2719_ = lean_unsigned_to_nat(1u);
v___x_2720_ = lean_mk_empty_array_with_capacity(v___x_2719_);
v___x_2721_ = lean_array_push(v___x_2720_, v_h_2709_);
v___x_2722_ = 1;
v___x_2723_ = 1;
v___x_2724_ = lean_box(v___x_2710_);
v___x_2725_ = lean_box(v___x_2722_);
v___x_2726_ = lean_box(v___x_2710_);
v___x_2727_ = lean_box(v___x_2722_);
v___x_2728_ = lean_box(v___x_2723_);
v___x_2729_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_2729_, 0, v___x_2721_);
lean_closure_set(v___x_2729_, 1, v_snd_2717_);
lean_closure_set(v___x_2729_, 2, v___x_2724_);
lean_closure_set(v___x_2729_, 3, v___x_2725_);
lean_closure_set(v___x_2729_, 4, v___x_2726_);
lean_closure_set(v___x_2729_, 5, v___x_2727_);
lean_closure_set(v___x_2729_, 6, v___x_2728_);
v___x_2730_ = lean_apply_2(v_inst_2711_, lean_box(0), v___x_2729_);
v___x_2731_ = lean_apply_4(v_toBind_2712_, lean_box(0), lean_box(0), v___x_2730_, v___f_2718_);
return v___x_2731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__2___boxed(lean_object** _args){
lean_object* v___x_2732_ = _args[0];
lean_object* v___x_2733_ = _args[1];
lean_object* v___x_2734_ = _args[2];
lean_object* v___x_2735_ = _args[3];
lean_object* v___x_2736_ = _args[4];
lean_object* v___x_2737_ = _args[5];
lean_object* v_l_2738_ = _args[6];
lean_object* v_cl_2739_ = _args[7];
lean_object* v_hyp_2740_ = _args[8];
lean_object* v_00_u03c6_2741_ = _args[9];
lean_object* v_inst_2742_ = _args[10];
lean_object* v_toPure_2743_ = _args[11];
lean_object* v_h_2744_ = _args[12];
lean_object* v___x_2745_ = _args[13];
lean_object* v_inst_2746_ = _args[14];
lean_object* v_toBind_2747_ = _args[15];
lean_object* v_____x_2748_ = _args[16];
_start:
{
uint8_t v___x_507__boxed_2749_; lean_object* v_res_2750_; 
v___x_507__boxed_2749_ = lean_unbox(v___x_2745_);
v_res_2750_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__2(v___x_2732_, v___x_2733_, v___x_2734_, v___x_2735_, v___x_2736_, v___x_2737_, v_l_2738_, v_cl_2739_, v_hyp_2740_, v_00_u03c6_2741_, v_inst_2742_, v_toPure_2743_, v_h_2744_, v___x_507__boxed_2749_, v_inst_2746_, v_toBind_2747_, v_____x_2748_);
return v_res_2750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__3(lean_object* v_k_2751_, lean_object* v_00_u03c6_2752_, lean_object* v_h_2753_, lean_object* v_toBind_2754_, lean_object* v___f_2755_, lean_object* v_____r_2756_){
_start:
{
lean_object* v___x_2757_; lean_object* v___x_2758_; 
v___x_2757_ = lean_apply_2(v_k_2751_, v_00_u03c6_2752_, v_h_2753_);
v___x_2758_ = lean_apply_4(v_toBind_2754_, lean_box(0), lean_box(0), v___x_2757_, v___f_2755_);
return v___x_2758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__4(lean_object* v_00_u03c6_2759_, lean_object* v___x_2760_, lean_object* v___x_2761_, lean_object* v___x_2762_, lean_object* v___x_2763_, lean_object* v___x_2764_, lean_object* v___x_2765_, lean_object* v_l_2766_, lean_object* v_cl_2767_, lean_object* v_hyp_2768_, lean_object* v_inst_2769_, lean_object* v_toPure_2770_, lean_object* v_h_2771_, lean_object* v_inst_2772_, lean_object* v_toBind_2773_, lean_object* v_k_2774_, lean_object* v_snd_2775_, lean_object* v_____do__lift_2776_){
_start:
{
lean_object* v___x_2777_; uint8_t v___x_2778_; lean_object* v___x_2779_; lean_object* v___f_2780_; lean_object* v___f_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; 
lean_inc_ref_n(v_00_u03c6_2759_, 2);
v___x_2777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2777_, 0, v_00_u03c6_2759_);
v___x_2778_ = 0;
v___x_2779_ = lean_box(v___x_2778_);
lean_inc_n(v_toBind_2773_, 2);
lean_inc(v_inst_2772_);
lean_inc_ref_n(v_h_2771_, 2);
v___f_2780_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__2___boxed), 17, 16);
lean_closure_set(v___f_2780_, 0, v___x_2760_);
lean_closure_set(v___f_2780_, 1, v___x_2761_);
lean_closure_set(v___f_2780_, 2, v___x_2762_);
lean_closure_set(v___f_2780_, 3, v___x_2763_);
lean_closure_set(v___f_2780_, 4, v___x_2764_);
lean_closure_set(v___f_2780_, 5, v___x_2765_);
lean_closure_set(v___f_2780_, 6, v_l_2766_);
lean_closure_set(v___f_2780_, 7, v_cl_2767_);
lean_closure_set(v___f_2780_, 8, v_hyp_2768_);
lean_closure_set(v___f_2780_, 9, v_00_u03c6_2759_);
lean_closure_set(v___f_2780_, 10, v_inst_2769_);
lean_closure_set(v___f_2780_, 11, v_toPure_2770_);
lean_closure_set(v___f_2780_, 12, v_h_2771_);
lean_closure_set(v___f_2780_, 13, v___x_2779_);
lean_closure_set(v___f_2780_, 14, v_inst_2772_);
lean_closure_set(v___f_2780_, 15, v_toBind_2773_);
v___f_2781_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__3), 6, 5);
lean_closure_set(v___f_2781_, 0, v_k_2774_);
lean_closure_set(v___f_2781_, 1, v_00_u03c6_2759_);
lean_closure_set(v___f_2781_, 2, v_h_2771_);
lean_closure_set(v___f_2781_, 3, v_toBind_2773_);
lean_closure_set(v___f_2781_, 4, v___f_2780_);
v___x_2782_ = lean_box(v___x_2778_);
v___x_2783_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_addLocalVarInfo___boxed), 10, 5);
lean_closure_set(v___x_2783_, 0, v_snd_2775_);
lean_closure_set(v___x_2783_, 1, v_____do__lift_2776_);
lean_closure_set(v___x_2783_, 2, v_h_2771_);
lean_closure_set(v___x_2783_, 3, v___x_2777_);
lean_closure_set(v___x_2783_, 4, v___x_2782_);
v___x_2784_ = lean_apply_2(v_inst_2772_, lean_box(0), v___x_2783_);
v___x_2785_ = lean_apply_4(v_toBind_2773_, lean_box(0), lean_box(0), v___x_2784_, v___f_2781_);
return v___x_2785_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__4___boxed(lean_object** _args){
lean_object* v_00_u03c6_2786_ = _args[0];
lean_object* v___x_2787_ = _args[1];
lean_object* v___x_2788_ = _args[2];
lean_object* v___x_2789_ = _args[3];
lean_object* v___x_2790_ = _args[4];
lean_object* v___x_2791_ = _args[5];
lean_object* v___x_2792_ = _args[6];
lean_object* v_l_2793_ = _args[7];
lean_object* v_cl_2794_ = _args[8];
lean_object* v_hyp_2795_ = _args[9];
lean_object* v_inst_2796_ = _args[10];
lean_object* v_toPure_2797_ = _args[11];
lean_object* v_h_2798_ = _args[12];
lean_object* v_inst_2799_ = _args[13];
lean_object* v_toBind_2800_ = _args[14];
lean_object* v_k_2801_ = _args[15];
lean_object* v_snd_2802_ = _args[16];
lean_object* v_____do__lift_2803_ = _args[17];
_start:
{
lean_object* v_res_2804_; 
v_res_2804_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__4(v_00_u03c6_2786_, v___x_2787_, v___x_2788_, v___x_2789_, v___x_2790_, v___x_2791_, v___x_2792_, v_l_2793_, v_cl_2794_, v_hyp_2795_, v_inst_2796_, v_toPure_2797_, v_h_2798_, v_inst_2799_, v_toBind_2800_, v_k_2801_, v_snd_2802_, v_____do__lift_2803_);
return v_res_2804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__5(lean_object* v_00_u03c6_2805_, lean_object* v___x_2806_, lean_object* v___x_2807_, lean_object* v___x_2808_, lean_object* v___x_2809_, lean_object* v___x_2810_, lean_object* v___x_2811_, lean_object* v_l_2812_, lean_object* v_cl_2813_, lean_object* v_hyp_2814_, lean_object* v_inst_2815_, lean_object* v_toPure_2816_, lean_object* v_inst_2817_, lean_object* v_toBind_2818_, lean_object* v_k_2819_, lean_object* v_snd_2820_, lean_object* v___f_2821_, lean_object* v_h_2822_){
_start:
{
lean_object* v___f_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; 
lean_inc(v_toBind_2818_);
lean_inc(v_inst_2817_);
v___f_2823_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__4___boxed), 18, 17);
lean_closure_set(v___f_2823_, 0, v_00_u03c6_2805_);
lean_closure_set(v___f_2823_, 1, v___x_2806_);
lean_closure_set(v___f_2823_, 2, v___x_2807_);
lean_closure_set(v___f_2823_, 3, v___x_2808_);
lean_closure_set(v___f_2823_, 4, v___x_2809_);
lean_closure_set(v___f_2823_, 5, v___x_2810_);
lean_closure_set(v___f_2823_, 6, v___x_2811_);
lean_closure_set(v___f_2823_, 7, v_l_2812_);
lean_closure_set(v___f_2823_, 8, v_cl_2813_);
lean_closure_set(v___f_2823_, 9, v_hyp_2814_);
lean_closure_set(v___f_2823_, 10, v_inst_2815_);
lean_closure_set(v___f_2823_, 11, v_toPure_2816_);
lean_closure_set(v___f_2823_, 12, v_h_2822_);
lean_closure_set(v___f_2823_, 13, v_inst_2817_);
lean_closure_set(v___f_2823_, 14, v_toBind_2818_);
lean_closure_set(v___f_2823_, 15, v_k_2819_);
lean_closure_set(v___f_2823_, 16, v_snd_2820_);
v___x_2824_ = lean_apply_2(v_inst_2817_, lean_box(0), v___f_2821_);
v___x_2825_ = lean_apply_4(v_toBind_2818_, lean_box(0), lean_box(0), v___x_2824_, v___f_2823_);
return v___x_2825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__5___boxed(lean_object** _args){
lean_object* v_00_u03c6_2826_ = _args[0];
lean_object* v___x_2827_ = _args[1];
lean_object* v___x_2828_ = _args[2];
lean_object* v___x_2829_ = _args[3];
lean_object* v___x_2830_ = _args[4];
lean_object* v___x_2831_ = _args[5];
lean_object* v___x_2832_ = _args[6];
lean_object* v_l_2833_ = _args[7];
lean_object* v_cl_2834_ = _args[8];
lean_object* v_hyp_2835_ = _args[9];
lean_object* v_inst_2836_ = _args[10];
lean_object* v_toPure_2837_ = _args[11];
lean_object* v_inst_2838_ = _args[12];
lean_object* v_toBind_2839_ = _args[13];
lean_object* v_k_2840_ = _args[14];
lean_object* v_snd_2841_ = _args[15];
lean_object* v___f_2842_ = _args[16];
lean_object* v_h_2843_ = _args[17];
_start:
{
lean_object* v_res_2844_; 
v_res_2844_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__5(v_00_u03c6_2826_, v___x_2827_, v___x_2828_, v___x_2829_, v___x_2830_, v___x_2831_, v___x_2832_, v_l_2833_, v_cl_2834_, v_hyp_2835_, v_inst_2836_, v_toPure_2837_, v_inst_2838_, v_toBind_2839_, v_k_2840_, v_snd_2841_, v___f_2842_, v_h_2843_);
return v_res_2844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__6(lean_object* v_00_u03c6_2845_, lean_object* v___x_2846_, lean_object* v___x_2847_, lean_object* v___x_2848_, lean_object* v___x_2849_, lean_object* v___x_2850_, lean_object* v___x_2851_, lean_object* v_l_2852_, lean_object* v_cl_2853_, lean_object* v_hyp_2854_, lean_object* v_inst_2855_, lean_object* v_toPure_2856_, lean_object* v_inst_2857_, lean_object* v_toBind_2858_, lean_object* v_k_2859_, lean_object* v___f_2860_, lean_object* v_inst_2861_, lean_object* v_inst_2862_, lean_object* v_____x_2863_){
_start:
{
lean_object* v_fst_2864_; lean_object* v_snd_2865_; lean_object* v___f_2866_; lean_object* v___x_2867_; 
v_fst_2864_ = lean_ctor_get(v_____x_2863_, 0);
lean_inc(v_fst_2864_);
v_snd_2865_ = lean_ctor_get(v_____x_2863_, 1);
lean_inc(v_snd_2865_);
lean_dec_ref(v_____x_2863_);
lean_inc_ref(v_00_u03c6_2845_);
v___f_2866_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__5___boxed), 18, 17);
lean_closure_set(v___f_2866_, 0, v_00_u03c6_2845_);
lean_closure_set(v___f_2866_, 1, v___x_2846_);
lean_closure_set(v___f_2866_, 2, v___x_2847_);
lean_closure_set(v___f_2866_, 3, v___x_2848_);
lean_closure_set(v___f_2866_, 4, v___x_2849_);
lean_closure_set(v___f_2866_, 5, v___x_2850_);
lean_closure_set(v___f_2866_, 6, v___x_2851_);
lean_closure_set(v___f_2866_, 7, v_l_2852_);
lean_closure_set(v___f_2866_, 8, v_cl_2853_);
lean_closure_set(v___f_2866_, 9, v_hyp_2854_);
lean_closure_set(v___f_2866_, 10, v_inst_2855_);
lean_closure_set(v___f_2866_, 11, v_toPure_2856_);
lean_closure_set(v___f_2866_, 12, v_inst_2857_);
lean_closure_set(v___f_2866_, 13, v_toBind_2858_);
lean_closure_set(v___f_2866_, 14, v_k_2859_);
lean_closure_set(v___f_2866_, 15, v_snd_2865_);
lean_closure_set(v___f_2866_, 16, v___f_2860_);
v___x_2867_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_2861_, v_inst_2862_, v_fst_2864_, v_00_u03c6_2845_, v___f_2866_);
return v___x_2867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_00_u03c6_2868_ = _args[0];
lean_object* v___x_2869_ = _args[1];
lean_object* v___x_2870_ = _args[2];
lean_object* v___x_2871_ = _args[3];
lean_object* v___x_2872_ = _args[4];
lean_object* v___x_2873_ = _args[5];
lean_object* v___x_2874_ = _args[6];
lean_object* v_l_2875_ = _args[7];
lean_object* v_cl_2876_ = _args[8];
lean_object* v_hyp_2877_ = _args[9];
lean_object* v_inst_2878_ = _args[10];
lean_object* v_toPure_2879_ = _args[11];
lean_object* v_inst_2880_ = _args[12];
lean_object* v_toBind_2881_ = _args[13];
lean_object* v_k_2882_ = _args[14];
lean_object* v___f_2883_ = _args[15];
lean_object* v_inst_2884_ = _args[16];
lean_object* v_inst_2885_ = _args[17];
lean_object* v_____x_2886_ = _args[18];
_start:
{
lean_object* v_res_2887_; 
v_res_2887_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__6(v_00_u03c6_2868_, v___x_2869_, v___x_2870_, v___x_2871_, v___x_2872_, v___x_2873_, v___x_2874_, v_l_2875_, v_cl_2876_, v_hyp_2877_, v_inst_2878_, v_toPure_2879_, v_inst_2880_, v_toBind_2881_, v_k_2882_, v___f_2883_, v_inst_2884_, v_inst_2885_, v_____x_2886_);
return v_res_2887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__7(lean_object* v_00_u03c6_2888_, lean_object* v___x_2889_, lean_object* v___x_2890_, lean_object* v___x_2891_, lean_object* v___x_2892_, lean_object* v___x_2893_, lean_object* v___x_2894_, lean_object* v_l_2895_, lean_object* v_cl_2896_, lean_object* v_hyp_2897_, lean_object* v_toPure_2898_, lean_object* v_inst_2899_, lean_object* v_toBind_2900_, lean_object* v_k_2901_, lean_object* v___f_2902_, lean_object* v_inst_2903_, lean_object* v_inst_2904_, lean_object* v___f_2905_, lean_object* v_inst_2906_){
_start:
{
lean_object* v___f_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; 
lean_inc(v_toBind_2900_);
lean_inc(v_inst_2899_);
v___f_2907_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__6___boxed), 19, 18);
lean_closure_set(v___f_2907_, 0, v_00_u03c6_2888_);
lean_closure_set(v___f_2907_, 1, v___x_2889_);
lean_closure_set(v___f_2907_, 2, v___x_2890_);
lean_closure_set(v___f_2907_, 3, v___x_2891_);
lean_closure_set(v___f_2907_, 4, v___x_2892_);
lean_closure_set(v___f_2907_, 5, v___x_2893_);
lean_closure_set(v___f_2907_, 6, v___x_2894_);
lean_closure_set(v___f_2907_, 7, v_l_2895_);
lean_closure_set(v___f_2907_, 8, v_cl_2896_);
lean_closure_set(v___f_2907_, 9, v_hyp_2897_);
lean_closure_set(v___f_2907_, 10, v_inst_2906_);
lean_closure_set(v___f_2907_, 11, v_toPure_2898_);
lean_closure_set(v___f_2907_, 12, v_inst_2899_);
lean_closure_set(v___f_2907_, 13, v_toBind_2900_);
lean_closure_set(v___f_2907_, 14, v_k_2901_);
lean_closure_set(v___f_2907_, 15, v___f_2902_);
lean_closure_set(v___f_2907_, 16, v_inst_2903_);
lean_closure_set(v___f_2907_, 17, v_inst_2904_);
v___x_2908_ = lean_apply_2(v_inst_2899_, lean_box(0), v___f_2905_);
v___x_2909_ = lean_apply_4(v_toBind_2900_, lean_box(0), lean_box(0), v___x_2908_, v___f_2907_);
return v___x_2909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__7___boxed(lean_object** _args){
lean_object* v_00_u03c6_2910_ = _args[0];
lean_object* v___x_2911_ = _args[1];
lean_object* v___x_2912_ = _args[2];
lean_object* v___x_2913_ = _args[3];
lean_object* v___x_2914_ = _args[4];
lean_object* v___x_2915_ = _args[5];
lean_object* v___x_2916_ = _args[6];
lean_object* v_l_2917_ = _args[7];
lean_object* v_cl_2918_ = _args[8];
lean_object* v_hyp_2919_ = _args[9];
lean_object* v_toPure_2920_ = _args[10];
lean_object* v_inst_2921_ = _args[11];
lean_object* v_toBind_2922_ = _args[12];
lean_object* v_k_2923_ = _args[13];
lean_object* v___f_2924_ = _args[14];
lean_object* v_inst_2925_ = _args[15];
lean_object* v_inst_2926_ = _args[16];
lean_object* v___f_2927_ = _args[17];
lean_object* v_inst_2928_ = _args[18];
_start:
{
lean_object* v_res_2929_; 
v_res_2929_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__7(v_00_u03c6_2910_, v___x_2911_, v___x_2912_, v___x_2913_, v___x_2914_, v___x_2915_, v___x_2916_, v_l_2917_, v_cl_2918_, v_hyp_2919_, v_toPure_2920_, v_inst_2921_, v_toBind_2922_, v_k_2923_, v___f_2924_, v_inst_2925_, v_inst_2926_, v___f_2927_, v_inst_2928_);
return v_res_2929_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8(lean_object* v_u_2939_, lean_object* v_l_2940_, lean_object* v_cl_2941_, lean_object* v_hyp_2942_, lean_object* v_toPure_2943_, lean_object* v_inst_2944_, lean_object* v_toBind_2945_, lean_object* v_k_2946_, lean_object* v___f_2947_, lean_object* v_inst_2948_, lean_object* v_inst_2949_, lean_object* v___f_2950_, lean_object* v_00_u03c6_2951_){
_start:
{
lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___f_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; 
v___x_2952_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0));
v___x_2953_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__0));
v___x_2954_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1));
v___x_2955_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__1));
v___x_2956_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3));
v___x_2957_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__2));
v___x_2958_ = lean_box(0);
v___x_2959_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2959_, 0, v_u_2939_);
lean_ctor_set(v___x_2959_, 1, v___x_2958_);
lean_inc(v_toBind_2945_);
lean_inc(v_inst_2944_);
lean_inc_ref(v_hyp_2942_);
lean_inc_ref(v_cl_2941_);
lean_inc_ref(v_l_2940_);
lean_inc_ref(v___x_2959_);
lean_inc_ref(v_00_u03c6_2951_);
v___f_2960_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__7___boxed), 19, 18);
lean_closure_set(v___f_2960_, 0, v_00_u03c6_2951_);
lean_closure_set(v___f_2960_, 1, v___x_2952_);
lean_closure_set(v___f_2960_, 2, v___x_2953_);
lean_closure_set(v___f_2960_, 3, v___x_2954_);
lean_closure_set(v___f_2960_, 4, v___x_2955_);
lean_closure_set(v___f_2960_, 5, v___x_2956_);
lean_closure_set(v___f_2960_, 6, v___x_2959_);
lean_closure_set(v___f_2960_, 7, v_l_2940_);
lean_closure_set(v___f_2960_, 8, v_cl_2941_);
lean_closure_set(v___f_2960_, 9, v_hyp_2942_);
lean_closure_set(v___f_2960_, 10, v_toPure_2943_);
lean_closure_set(v___f_2960_, 11, v_inst_2944_);
lean_closure_set(v___f_2960_, 12, v_toBind_2945_);
lean_closure_set(v___f_2960_, 13, v_k_2946_);
lean_closure_set(v___f_2960_, 14, v___f_2947_);
lean_closure_set(v___f_2960_, 15, v_inst_2948_);
lean_closure_set(v___f_2960_, 16, v_inst_2949_);
lean_closure_set(v___f_2960_, 17, v___f_2950_);
v___x_2961_ = l_Lean_mkConst(v___x_2957_, v___x_2959_);
v___x_2962_ = l_Lean_mkApp4(v___x_2961_, v_l_2940_, v_cl_2941_, v_hyp_2942_, v_00_u03c6_2951_);
v___x_2963_ = lean_box(0);
v___x_2964_ = lean_alloc_closure((void*)(l_Lean_Meta_synthInstance___boxed), 7, 2);
lean_closure_set(v___x_2964_, 0, v___x_2962_);
lean_closure_set(v___x_2964_, 1, v___x_2963_);
v___x_2965_ = lean_apply_2(v_inst_2944_, lean_box(0), v___x_2964_);
v___x_2966_ = lean_apply_4(v_toBind_2945_, lean_box(0), lean_box(0), v___x_2965_, v___f_2960_);
return v___x_2966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__9(lean_object* v_l_2967_, lean_object* v_cl_2968_, lean_object* v_hyp_2969_, lean_object* v_toPure_2970_, lean_object* v_inst_2971_, lean_object* v_toBind_2972_, lean_object* v_k_2973_, lean_object* v___f_2974_, lean_object* v_inst_2975_, lean_object* v_inst_2976_, lean_object* v___f_2977_, lean_object* v_u_2978_){
_start:
{
lean_object* v___f_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; 
lean_inc(v_toBind_2972_);
lean_inc(v_inst_2971_);
v___f_2979_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8), 13, 12);
lean_closure_set(v___f_2979_, 0, v_u_2978_);
lean_closure_set(v___f_2979_, 1, v_l_2967_);
lean_closure_set(v___f_2979_, 2, v_cl_2968_);
lean_closure_set(v___f_2979_, 3, v_hyp_2969_);
lean_closure_set(v___f_2979_, 4, v_toPure_2970_);
lean_closure_set(v___f_2979_, 5, v_inst_2971_);
lean_closure_set(v___f_2979_, 6, v_toBind_2972_);
lean_closure_set(v___f_2979_, 7, v_k_2973_);
lean_closure_set(v___f_2979_, 8, v___f_2974_);
lean_closure_set(v___f_2979_, 9, v_inst_2975_);
lean_closure_set(v___f_2979_, 10, v_inst_2976_);
lean_closure_set(v___f_2979_, 11, v___f_2977_);
v___x_2980_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2);
v___x_2981_ = lean_apply_2(v_inst_2971_, lean_box(0), v___x_2980_);
v___x_2982_ = lean_apply_4(v_toBind_2972_, lean_box(0), lean_box(0), v___x_2981_, v___f_2979_);
return v___x_2982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg(lean_object* v_inst_2983_, lean_object* v_inst_2984_, lean_object* v_inst_2985_, lean_object* v_l_2986_, lean_object* v_cl_2987_, lean_object* v_hyp_2988_, lean_object* v_name_2989_, lean_object* v_k_2990_){
_start:
{
lean_object* v_toApplicative_2991_; lean_object* v_toBind_2992_; lean_object* v_toPure_2993_; lean_object* v___f_2994_; lean_object* v___f_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___f_2998_; lean_object* v___x_2999_; 
v_toApplicative_2991_ = lean_ctor_get(v_inst_2983_, 0);
v_toBind_2992_ = lean_ctor_get(v_inst_2983_, 1);
lean_inc_n(v_toBind_2992_, 2);
v_toPure_2993_ = lean_ctor_get(v_toApplicative_2991_, 1);
lean_inc(v_toPure_2993_);
v___f_2994_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__0));
v___f_2995_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2995_, 0, v_name_2989_);
v___x_2996_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__1));
lean_inc(v_inst_2985_);
v___x_2997_ = lean_apply_2(v_inst_2985_, lean_box(0), v___x_2996_);
v___f_2998_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__9), 12, 11);
lean_closure_set(v___f_2998_, 0, v_l_2986_);
lean_closure_set(v___f_2998_, 1, v_cl_2987_);
lean_closure_set(v___f_2998_, 2, v_hyp_2988_);
lean_closure_set(v___f_2998_, 3, v_toPure_2993_);
lean_closure_set(v___f_2998_, 4, v_inst_2985_);
lean_closure_set(v___f_2998_, 5, v_toBind_2992_);
lean_closure_set(v___f_2998_, 6, v_k_2990_);
lean_closure_set(v___f_2998_, 7, v___f_2994_);
lean_closure_set(v___f_2998_, 8, v_inst_2984_);
lean_closure_set(v___f_2998_, 9, v_inst_2983_);
lean_closure_set(v___f_2998_, 10, v___f_2995_);
v___x_2999_ = lean_apply_4(v_toBind_2992_, lean_box(0), lean_box(0), v___x_2997_, v___f_2998_);
return v___x_2999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore(lean_object* v_m_3000_, lean_object* v_00_u03b1_3001_, lean_object* v_inst_3002_, lean_object* v_inst_3003_, lean_object* v_inst_3004_, lean_object* v_l_3005_, lean_object* v_cl_3006_, lean_object* v_hyp_3007_, lean_object* v_name_3008_, lean_object* v_k_3009_){
_start:
{
lean_object* v___x_3010_; 
v___x_3010_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg(v_inst_3002_, v_inst_3003_, v_inst_3004_, v_l_3005_, v_cl_3006_, v_hyp_3007_, v_name_3008_, v_k_3009_);
return v___x_3010_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure___lam__0(lean_object* v_a_3011_, lean_object* v_snd_3012_, lean_object* v_x_3013_, lean_object* v_x_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_){
_start:
{
lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; 
v___x_3024_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_FocusResult_restGoal(v_a_3011_, v_snd_3012_);
lean_inc_ref(v___x_3024_);
v___x_3025_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_toExpr(v___x_3024_);
v___x_3026_ = lean_box(0);
v___x_3027_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_3025_, v___x_3026_, v___y_3019_, v___y_3020_, v___y_3021_, v___y_3022_);
if (lean_obj_tag(v___x_3027_) == 0)
{
lean_object* v_a_3028_; lean_object* v___x_3030_; uint8_t v_isShared_3031_; uint8_t v_isSharedCheck_3037_; 
v_a_3028_ = lean_ctor_get(v___x_3027_, 0);
v_isSharedCheck_3037_ = !lean_is_exclusive(v___x_3027_);
if (v_isSharedCheck_3037_ == 0)
{
v___x_3030_ = v___x_3027_;
v_isShared_3031_ = v_isSharedCheck_3037_;
goto v_resetjp_3029_;
}
else
{
lean_inc(v_a_3028_);
lean_dec(v___x_3027_);
v___x_3030_ = lean_box(0);
v_isShared_3031_ = v_isSharedCheck_3037_;
goto v_resetjp_3029_;
}
v_resetjp_3029_:
{
lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3035_; 
lean_inc(v_a_3028_);
v___x_3032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3032_, 0, v___x_3024_);
lean_ctor_set(v___x_3032_, 1, v_a_3028_);
v___x_3033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3033_, 0, v_a_3028_);
lean_ctor_set(v___x_3033_, 1, v___x_3032_);
if (v_isShared_3031_ == 0)
{
lean_ctor_set(v___x_3030_, 0, v___x_3033_);
v___x_3035_ = v___x_3030_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3036_; 
v_reuseFailAlloc_3036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3036_, 0, v___x_3033_);
v___x_3035_ = v_reuseFailAlloc_3036_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
return v___x_3035_;
}
}
}
else
{
lean_object* v_a_3038_; lean_object* v___x_3040_; uint8_t v_isShared_3041_; uint8_t v_isSharedCheck_3045_; 
lean_dec_ref(v___x_3024_);
v_a_3038_ = lean_ctor_get(v___x_3027_, 0);
v_isSharedCheck_3045_ = !lean_is_exclusive(v___x_3027_);
if (v_isSharedCheck_3045_ == 0)
{
v___x_3040_ = v___x_3027_;
v_isShared_3041_ = v_isSharedCheck_3045_;
goto v_resetjp_3039_;
}
else
{
lean_inc(v_a_3038_);
lean_dec(v___x_3027_);
v___x_3040_ = lean_box(0);
v_isShared_3041_ = v_isSharedCheck_3045_;
goto v_resetjp_3039_;
}
v_resetjp_3039_:
{
lean_object* v___x_3043_; 
if (v_isShared_3041_ == 0)
{
v___x_3043_ = v___x_3040_;
goto v_reusejp_3042_;
}
else
{
lean_object* v_reuseFailAlloc_3044_; 
v_reuseFailAlloc_3044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3044_, 0, v_a_3038_);
v___x_3043_ = v_reuseFailAlloc_3044_;
goto v_reusejp_3042_;
}
v_reusejp_3042_:
{
return v___x_3043_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure___lam__0___boxed(lean_object* v_a_3046_, lean_object* v_snd_3047_, lean_object* v_x_3048_, lean_object* v_x_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_){
_start:
{
lean_object* v_res_3059_; 
v_res_3059_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure___lam__0(v_a_3046_, v_snd_3047_, v_x_3048_, v_x_3049_, v___y_3050_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_);
lean_dec(v___y_3057_);
lean_dec_ref(v___y_3056_);
lean_dec(v___y_3055_);
lean_dec_ref(v___y_3054_);
lean_dec(v___y_3053_);
lean_dec_ref(v___y_3052_);
lean_dec(v___y_3051_);
lean_dec_ref(v___y_3050_);
lean_dec_ref(v_x_3049_);
lean_dec_ref(v_x_3048_);
lean_dec_ref(v_a_3046_);
return v_res_3059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure_spec__0___redArg___lam__0(lean_object* v_a_3060_, lean_object* v_snd_3061_, lean_object* v_k_3062_, lean_object* v___x_3063_, lean_object* v___x_3064_, lean_object* v___x_3065_, lean_object* v___x_3066_, lean_object* v___x_3067_, lean_object* v___x_3068_, lean_object* v_l_3069_, lean_object* v_cl_3070_, lean_object* v_hyp_3071_, lean_object* v_a_3072_, lean_object* v_h_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_){
_start:
{
lean_object* v_lctx_3083_; lean_object* v___x_3084_; uint8_t v___x_3085_; lean_object* v___x_3086_; 
v_lctx_3083_ = lean_ctor_get(v___y_3078_, 2);
lean_inc_ref(v_a_3060_);
v___x_3084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3084_, 0, v_a_3060_);
v___x_3085_ = 0;
lean_inc_ref(v_h_3073_);
lean_inc_ref(v_lctx_3083_);
v___x_3086_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_addLocalVarInfo(v_snd_3061_, v_lctx_3083_, v_h_3073_, v___x_3084_, v___x_3085_, v___y_3078_, v___y_3079_, v___y_3080_, v___y_3081_);
if (lean_obj_tag(v___x_3086_) == 0)
{
lean_object* v___x_3087_; 
lean_dec_ref_known(v___x_3086_, 1);
lean_inc(v___y_3081_);
lean_inc_ref(v___y_3080_);
lean_inc(v___y_3079_);
lean_inc_ref(v___y_3078_);
lean_inc(v___y_3077_);
lean_inc_ref(v___y_3076_);
lean_inc(v___y_3075_);
lean_inc_ref(v___y_3074_);
lean_inc_ref(v_h_3073_);
lean_inc_ref(v_a_3060_);
v___x_3087_ = lean_apply_11(v_k_3062_, v_a_3060_, v_h_3073_, v___y_3074_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_, v___y_3079_, v___y_3080_, v___y_3081_, lean_box(0));
if (lean_obj_tag(v___x_3087_) == 0)
{
lean_object* v_a_3088_; lean_object* v_snd_3089_; lean_object* v_fst_3090_; lean_object* v___x_3092_; uint8_t v_isShared_3093_; uint8_t v_isSharedCheck_3150_; 
v_a_3088_ = lean_ctor_get(v___x_3087_, 0);
lean_inc(v_a_3088_);
lean_dec_ref_known(v___x_3087_, 1);
v_snd_3089_ = lean_ctor_get(v_a_3088_, 1);
v_fst_3090_ = lean_ctor_get(v_a_3088_, 0);
v_isSharedCheck_3150_ = !lean_is_exclusive(v_a_3088_);
if (v_isSharedCheck_3150_ == 0)
{
v___x_3092_ = v_a_3088_;
v_isShared_3093_ = v_isSharedCheck_3150_;
goto v_resetjp_3091_;
}
else
{
lean_inc(v_snd_3089_);
lean_inc(v_fst_3090_);
lean_dec(v_a_3088_);
v___x_3092_ = lean_box(0);
v_isShared_3093_ = v_isSharedCheck_3150_;
goto v_resetjp_3091_;
}
v_resetjp_3091_:
{
lean_object* v_fst_3094_; lean_object* v_snd_3095_; lean_object* v___x_3097_; uint8_t v_isShared_3098_; uint8_t v_isSharedCheck_3149_; 
v_fst_3094_ = lean_ctor_get(v_snd_3089_, 0);
v_snd_3095_ = lean_ctor_get(v_snd_3089_, 1);
v_isSharedCheck_3149_ = !lean_is_exclusive(v_snd_3089_);
if (v_isSharedCheck_3149_ == 0)
{
v___x_3097_ = v_snd_3089_;
v_isShared_3098_ = v_isSharedCheck_3149_;
goto v_resetjp_3096_;
}
else
{
lean_inc(v_snd_3095_);
lean_inc(v_fst_3094_);
lean_dec(v_snd_3089_);
v___x_3097_ = lean_box(0);
v_isShared_3098_ = v_isSharedCheck_3149_;
goto v_resetjp_3096_;
}
v_resetjp_3096_:
{
lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; uint8_t v___x_3102_; uint8_t v___x_3103_; lean_object* v___x_3104_; 
v___x_3099_ = lean_unsigned_to_nat(1u);
v___x_3100_ = lean_mk_empty_array_with_capacity(v___x_3099_);
v___x_3101_ = lean_array_push(v___x_3100_, v_h_3073_);
v___x_3102_ = 1;
v___x_3103_ = 1;
v___x_3104_ = l_Lean_Meta_mkLambdaFVars(v___x_3101_, v_snd_3095_, v___x_3085_, v___x_3102_, v___x_3085_, v___x_3102_, v___x_3103_, v___y_3078_, v___y_3079_, v___y_3080_, v___y_3081_);
lean_dec_ref(v___x_3101_);
if (lean_obj_tag(v___x_3104_) == 0)
{
lean_object* v_a_3105_; lean_object* v___x_3107_; uint8_t v_isShared_3108_; uint8_t v_isSharedCheck_3140_; 
v_a_3105_ = lean_ctor_get(v___x_3104_, 0);
v_isSharedCheck_3140_ = !lean_is_exclusive(v___x_3104_);
if (v_isSharedCheck_3140_ == 0)
{
v___x_3107_ = v___x_3104_;
v_isShared_3108_ = v_isSharedCheck_3140_;
goto v_resetjp_3106_;
}
else
{
lean_inc(v_a_3105_);
lean_dec(v___x_3104_);
v___x_3107_ = lean_box(0);
v_isShared_3108_ = v_isSharedCheck_3140_;
goto v_resetjp_3106_;
}
v_resetjp_3106_:
{
lean_object* v_u_3109_; lean_object* v_l_3110_; lean_object* v_cl_3111_; lean_object* v_hyps_3112_; lean_object* v_target_3113_; lean_object* v___x_3115_; uint8_t v_isShared_3116_; uint8_t v_isSharedCheck_3139_; 
v_u_3109_ = lean_ctor_get(v_fst_3094_, 0);
v_l_3110_ = lean_ctor_get(v_fst_3094_, 1);
v_cl_3111_ = lean_ctor_get(v_fst_3094_, 2);
v_hyps_3112_ = lean_ctor_get(v_fst_3094_, 3);
v_target_3113_ = lean_ctor_get(v_fst_3094_, 4);
v_isSharedCheck_3139_ = !lean_is_exclusive(v_fst_3094_);
if (v_isSharedCheck_3139_ == 0)
{
v___x_3115_ = v_fst_3094_;
v_isShared_3116_ = v_isSharedCheck_3139_;
goto v_resetjp_3114_;
}
else
{
lean_inc(v_target_3113_);
lean_inc(v_hyps_3112_);
lean_inc(v_cl_3111_);
lean_inc(v_l_3110_);
lean_inc(v_u_3109_);
lean_dec(v_fst_3094_);
v___x_3115_ = lean_box(0);
v_isShared_3116_ = v_isSharedCheck_3139_;
goto v_resetjp_3114_;
}
v_resetjp_3114_:
{
lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v_prf_3121_; lean_object* v___y_3123_; lean_object* v___x_3137_; 
v___x_3117_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0));
v___x_3118_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__1));
v___x_3119_ = l_Lean_Name_mkStr7(v___x_3063_, v___x_3064_, v___x_3065_, v___x_3066_, v___x_3067_, v___x_3117_, v___x_3118_);
v___x_3120_ = l_Lean_mkConst(v___x_3119_, v___x_3068_);
lean_inc_ref(v_target_3113_);
lean_inc_ref(v_hyp_3071_);
lean_inc_ref(v_hyps_3112_);
lean_inc_ref(v_cl_3070_);
lean_inc_ref(v_l_3069_);
v_prf_3121_ = l_Lean_mkApp8(v___x_3120_, v_l_3069_, v_cl_3070_, v_hyps_3112_, v_hyp_3071_, v_target_3113_, v_a_3060_, v_a_3072_, v_a_3105_);
v___x_3137_ = l_Lean_Level_dec(v_u_3109_);
if (lean_obj_tag(v___x_3137_) == 0)
{
lean_inc(v_u_3109_);
v___y_3123_ = v_u_3109_;
goto v___jp_3122_;
}
else
{
lean_object* v_val_3138_; 
v_val_3138_ = lean_ctor_get(v___x_3137_, 0);
lean_inc(v_val_3138_);
lean_dec_ref_known(v___x_3137_, 1);
v___y_3123_ = v_val_3138_;
goto v___jp_3122_;
}
v___jp_3122_:
{
lean_object* v___x_3124_; lean_object* v_goal_3126_; 
v___x_3124_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkAnd_x21(v___y_3123_, v_l_3069_, v_cl_3070_, v_hyps_3112_, v_hyp_3071_);
if (v_isShared_3116_ == 0)
{
lean_ctor_set(v___x_3115_, 3, v___x_3124_);
v_goal_3126_ = v___x_3115_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v_u_3109_);
lean_ctor_set(v_reuseFailAlloc_3136_, 1, v_l_3110_);
lean_ctor_set(v_reuseFailAlloc_3136_, 2, v_cl_3111_);
lean_ctor_set(v_reuseFailAlloc_3136_, 3, v___x_3124_);
lean_ctor_set(v_reuseFailAlloc_3136_, 4, v_target_3113_);
v_goal_3126_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
lean_object* v___x_3128_; 
if (v_isShared_3098_ == 0)
{
lean_ctor_set(v___x_3097_, 1, v_prf_3121_);
lean_ctor_set(v___x_3097_, 0, v_goal_3126_);
v___x_3128_ = v___x_3097_;
goto v_reusejp_3127_;
}
else
{
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v_goal_3126_);
lean_ctor_set(v_reuseFailAlloc_3135_, 1, v_prf_3121_);
v___x_3128_ = v_reuseFailAlloc_3135_;
goto v_reusejp_3127_;
}
v_reusejp_3127_:
{
lean_object* v___x_3130_; 
if (v_isShared_3093_ == 0)
{
lean_ctor_set(v___x_3092_, 1, v___x_3128_);
v___x_3130_ = v___x_3092_;
goto v_reusejp_3129_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v_fst_3090_);
lean_ctor_set(v_reuseFailAlloc_3134_, 1, v___x_3128_);
v___x_3130_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3129_;
}
v_reusejp_3129_:
{
lean_object* v___x_3132_; 
if (v_isShared_3108_ == 0)
{
lean_ctor_set(v___x_3107_, 0, v___x_3130_);
v___x_3132_ = v___x_3107_;
goto v_reusejp_3131_;
}
else
{
lean_object* v_reuseFailAlloc_3133_; 
v_reuseFailAlloc_3133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3133_, 0, v___x_3130_);
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
}
}
}
else
{
lean_object* v_a_3141_; lean_object* v___x_3143_; uint8_t v_isShared_3144_; uint8_t v_isSharedCheck_3148_; 
lean_del_object(v___x_3097_);
lean_dec(v_fst_3094_);
lean_del_object(v___x_3092_);
lean_dec(v_fst_3090_);
lean_dec_ref(v_a_3072_);
lean_dec_ref(v_hyp_3071_);
lean_dec_ref(v_cl_3070_);
lean_dec_ref(v_l_3069_);
lean_dec(v___x_3068_);
lean_dec_ref(v___x_3067_);
lean_dec_ref(v___x_3066_);
lean_dec_ref(v___x_3065_);
lean_dec_ref(v___x_3064_);
lean_dec_ref(v___x_3063_);
lean_dec_ref(v_a_3060_);
v_a_3141_ = lean_ctor_get(v___x_3104_, 0);
v_isSharedCheck_3148_ = !lean_is_exclusive(v___x_3104_);
if (v_isSharedCheck_3148_ == 0)
{
v___x_3143_ = v___x_3104_;
v_isShared_3144_ = v_isSharedCheck_3148_;
goto v_resetjp_3142_;
}
else
{
lean_inc(v_a_3141_);
lean_dec(v___x_3104_);
v___x_3143_ = lean_box(0);
v_isShared_3144_ = v_isSharedCheck_3148_;
goto v_resetjp_3142_;
}
v_resetjp_3142_:
{
lean_object* v___x_3146_; 
if (v_isShared_3144_ == 0)
{
v___x_3146_ = v___x_3143_;
goto v_reusejp_3145_;
}
else
{
lean_object* v_reuseFailAlloc_3147_; 
v_reuseFailAlloc_3147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3147_, 0, v_a_3141_);
v___x_3146_ = v_reuseFailAlloc_3147_;
goto v_reusejp_3145_;
}
v_reusejp_3145_:
{
return v___x_3146_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_h_3073_);
lean_dec_ref(v_a_3072_);
lean_dec_ref(v_hyp_3071_);
lean_dec_ref(v_cl_3070_);
lean_dec_ref(v_l_3069_);
lean_dec(v___x_3068_);
lean_dec_ref(v___x_3067_);
lean_dec_ref(v___x_3066_);
lean_dec_ref(v___x_3065_);
lean_dec_ref(v___x_3064_);
lean_dec_ref(v___x_3063_);
lean_dec_ref(v_a_3060_);
return v___x_3087_;
}
}
else
{
lean_object* v_a_3151_; lean_object* v___x_3153_; uint8_t v_isShared_3154_; uint8_t v_isSharedCheck_3158_; 
lean_dec_ref(v_h_3073_);
lean_dec_ref(v_a_3072_);
lean_dec_ref(v_hyp_3071_);
lean_dec_ref(v_cl_3070_);
lean_dec_ref(v_l_3069_);
lean_dec(v___x_3068_);
lean_dec_ref(v___x_3067_);
lean_dec_ref(v___x_3066_);
lean_dec_ref(v___x_3065_);
lean_dec_ref(v___x_3064_);
lean_dec_ref(v___x_3063_);
lean_dec_ref(v_k_3062_);
lean_dec_ref(v_a_3060_);
v_a_3151_ = lean_ctor_get(v___x_3086_, 0);
v_isSharedCheck_3158_ = !lean_is_exclusive(v___x_3086_);
if (v_isSharedCheck_3158_ == 0)
{
v___x_3153_ = v___x_3086_;
v_isShared_3154_ = v_isSharedCheck_3158_;
goto v_resetjp_3152_;
}
else
{
lean_inc(v_a_3151_);
lean_dec(v___x_3086_);
v___x_3153_ = lean_box(0);
v_isShared_3154_ = v_isSharedCheck_3158_;
goto v_resetjp_3152_;
}
v_resetjp_3152_:
{
lean_object* v___x_3156_; 
if (v_isShared_3154_ == 0)
{
v___x_3156_ = v___x_3153_;
goto v_reusejp_3155_;
}
else
{
lean_object* v_reuseFailAlloc_3157_; 
v_reuseFailAlloc_3157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3157_, 0, v_a_3151_);
v___x_3156_ = v_reuseFailAlloc_3157_;
goto v_reusejp_3155_;
}
v_reusejp_3155_:
{
return v___x_3156_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure_spec__0___redArg___lam__0___boxed(lean_object** _args){
lean_object* v_a_3159_ = _args[0];
lean_object* v_snd_3160_ = _args[1];
lean_object* v_k_3161_ = _args[2];
lean_object* v___x_3162_ = _args[3];
lean_object* v___x_3163_ = _args[4];
lean_object* v___x_3164_ = _args[5];
lean_object* v___x_3165_ = _args[6];
lean_object* v___x_3166_ = _args[7];
lean_object* v___x_3167_ = _args[8];
lean_object* v_l_3168_ = _args[9];
lean_object* v_cl_3169_ = _args[10];
lean_object* v_hyp_3170_ = _args[11];
lean_object* v_a_3171_ = _args[12];
lean_object* v_h_3172_ = _args[13];
lean_object* v___y_3173_ = _args[14];
lean_object* v___y_3174_ = _args[15];
lean_object* v___y_3175_ = _args[16];
lean_object* v___y_3176_ = _args[17];
lean_object* v___y_3177_ = _args[18];
lean_object* v___y_3178_ = _args[19];
lean_object* v___y_3179_ = _args[20];
lean_object* v___y_3180_ = _args[21];
lean_object* v___y_3181_ = _args[22];
_start:
{
lean_object* v_res_3182_; 
v_res_3182_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure_spec__0___redArg___lam__0(v_a_3159_, v_snd_3160_, v_k_3161_, v___x_3162_, v___x_3163_, v___x_3164_, v___x_3165_, v___x_3166_, v___x_3167_, v_l_3168_, v_cl_3169_, v_hyp_3170_, v_a_3171_, v_h_3172_, v___y_3173_, v___y_3174_, v___y_3175_, v___y_3176_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_);
lean_dec(v___y_3180_);
lean_dec_ref(v___y_3179_);
lean_dec(v___y_3178_);
lean_dec_ref(v___y_3177_);
lean_dec(v___y_3176_);
lean_dec_ref(v___y_3175_);
lean_dec(v___y_3174_);
lean_dec_ref(v___y_3173_);
return v_res_3182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure_spec__0___redArg(lean_object* v_l_3183_, lean_object* v_cl_3184_, lean_object* v_hyp_3185_, lean_object* v_name_3186_, lean_object* v_k_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_){
_start:
{
lean_object* v___x_3197_; 
v___x_3197_ = l_Lean_Meta_mkFreshLevelMVar(v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_);
if (lean_obj_tag(v___x_3197_) == 0)
{
lean_object* v_a_3198_; lean_object* v___x_3199_; uint8_t v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; 
v_a_3198_ = lean_ctor_get(v___x_3197_, 0);
lean_inc(v_a_3198_);
lean_dec_ref_known(v___x_3197_, 1);
v___x_3199_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1);
v___x_3200_ = 0;
v___x_3201_ = lean_box(0);
v___x_3202_ = l_Lean_Meta_mkFreshExprMVar(v___x_3199_, v___x_3200_, v___x_3201_, v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_);
if (lean_obj_tag(v___x_3202_) == 0)
{
lean_object* v_a_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; 
v_a_3203_ = lean_ctor_get(v___x_3202_, 0);
lean_inc_n(v_a_3203_, 2);
lean_dec_ref_known(v___x_3202_, 1);
v___x_3204_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0));
v___x_3205_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__0));
v___x_3206_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1));
v___x_3207_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__1));
v___x_3208_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3));
v___x_3209_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__2));
v___x_3210_ = lean_box(0);
v___x_3211_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3211_, 0, v_a_3198_);
lean_ctor_set(v___x_3211_, 1, v___x_3210_);
lean_inc_ref(v___x_3211_);
v___x_3212_ = l_Lean_mkConst(v___x_3209_, v___x_3211_);
lean_inc_ref(v_hyp_3185_);
lean_inc_ref(v_cl_3184_);
lean_inc_ref(v_l_3183_);
v___x_3213_ = l_Lean_mkApp4(v___x_3212_, v_l_3183_, v_cl_3184_, v_hyp_3185_, v_a_3203_);
v___x_3214_ = lean_box(0);
v___x_3215_ = l_Lean_Meta_synthInstance(v___x_3213_, v___x_3214_, v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_);
if (lean_obj_tag(v___x_3215_) == 0)
{
lean_object* v_a_3216_; lean_object* v___x_3217_; 
v_a_3216_ = lean_ctor_get(v___x_3215_, 0);
lean_inc(v_a_3216_);
lean_dec_ref_known(v___x_3215_, 1);
v___x_3217_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_getFreshHypName(v_name_3186_, v___y_3194_, v___y_3195_);
if (lean_obj_tag(v___x_3217_) == 0)
{
lean_object* v_a_3218_; lean_object* v_fst_3219_; lean_object* v_snd_3220_; lean_object* v___f_3221_; lean_object* v___x_3222_; 
v_a_3218_ = lean_ctor_get(v___x_3217_, 0);
lean_inc(v_a_3218_);
lean_dec_ref_known(v___x_3217_, 1);
v_fst_3219_ = lean_ctor_get(v_a_3218_, 0);
lean_inc(v_fst_3219_);
v_snd_3220_ = lean_ctor_get(v_a_3218_, 1);
lean_inc(v_snd_3220_);
lean_dec(v_a_3218_);
lean_inc(v_a_3203_);
v___f_3221_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure_spec__0___redArg___lam__0___boxed), 23, 13);
lean_closure_set(v___f_3221_, 0, v_a_3203_);
lean_closure_set(v___f_3221_, 1, v_snd_3220_);
lean_closure_set(v___f_3221_, 2, v_k_3187_);
lean_closure_set(v___f_3221_, 3, v___x_3204_);
lean_closure_set(v___f_3221_, 4, v___x_3205_);
lean_closure_set(v___f_3221_, 5, v___x_3206_);
lean_closure_set(v___f_3221_, 6, v___x_3207_);
lean_closure_set(v___f_3221_, 7, v___x_3208_);
lean_closure_set(v___f_3221_, 8, v___x_3211_);
lean_closure_set(v___f_3221_, 9, v_l_3183_);
lean_closure_set(v___f_3221_, 10, v_cl_3184_);
lean_closure_set(v___f_3221_, 11, v_hyp_3185_);
lean_closure_set(v___f_3221_, 12, v_a_3216_);
v___x_3222_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___redArg(v_fst_3219_, v_a_3203_, v___f_3221_, v___y_3188_, v___y_3189_, v___y_3190_, v___y_3191_, v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_);
return v___x_3222_;
}
else
{
lean_object* v_a_3223_; lean_object* v___x_3225_; uint8_t v_isShared_3226_; uint8_t v_isSharedCheck_3230_; 
lean_dec(v_a_3216_);
lean_dec_ref_known(v___x_3211_, 2);
lean_dec(v_a_3203_);
lean_dec_ref(v_k_3187_);
lean_dec_ref(v_hyp_3185_);
lean_dec_ref(v_cl_3184_);
lean_dec_ref(v_l_3183_);
v_a_3223_ = lean_ctor_get(v___x_3217_, 0);
v_isSharedCheck_3230_ = !lean_is_exclusive(v___x_3217_);
if (v_isSharedCheck_3230_ == 0)
{
v___x_3225_ = v___x_3217_;
v_isShared_3226_ = v_isSharedCheck_3230_;
goto v_resetjp_3224_;
}
else
{
lean_inc(v_a_3223_);
lean_dec(v___x_3217_);
v___x_3225_ = lean_box(0);
v_isShared_3226_ = v_isSharedCheck_3230_;
goto v_resetjp_3224_;
}
v_resetjp_3224_:
{
lean_object* v___x_3228_; 
if (v_isShared_3226_ == 0)
{
v___x_3228_ = v___x_3225_;
goto v_reusejp_3227_;
}
else
{
lean_object* v_reuseFailAlloc_3229_; 
v_reuseFailAlloc_3229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3229_, 0, v_a_3223_);
v___x_3228_ = v_reuseFailAlloc_3229_;
goto v_reusejp_3227_;
}
v_reusejp_3227_:
{
return v___x_3228_;
}
}
}
}
else
{
lean_object* v_a_3231_; lean_object* v___x_3233_; uint8_t v_isShared_3234_; uint8_t v_isSharedCheck_3238_; 
lean_dec_ref_known(v___x_3211_, 2);
lean_dec(v_a_3203_);
lean_dec_ref(v_k_3187_);
lean_dec(v_name_3186_);
lean_dec_ref(v_hyp_3185_);
lean_dec_ref(v_cl_3184_);
lean_dec_ref(v_l_3183_);
v_a_3231_ = lean_ctor_get(v___x_3215_, 0);
v_isSharedCheck_3238_ = !lean_is_exclusive(v___x_3215_);
if (v_isSharedCheck_3238_ == 0)
{
v___x_3233_ = v___x_3215_;
v_isShared_3234_ = v_isSharedCheck_3238_;
goto v_resetjp_3232_;
}
else
{
lean_inc(v_a_3231_);
lean_dec(v___x_3215_);
v___x_3233_ = lean_box(0);
v_isShared_3234_ = v_isSharedCheck_3238_;
goto v_resetjp_3232_;
}
v_resetjp_3232_:
{
lean_object* v___x_3236_; 
if (v_isShared_3234_ == 0)
{
v___x_3236_ = v___x_3233_;
goto v_reusejp_3235_;
}
else
{
lean_object* v_reuseFailAlloc_3237_; 
v_reuseFailAlloc_3237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3237_, 0, v_a_3231_);
v___x_3236_ = v_reuseFailAlloc_3237_;
goto v_reusejp_3235_;
}
v_reusejp_3235_:
{
return v___x_3236_;
}
}
}
}
else
{
lean_object* v_a_3239_; lean_object* v___x_3241_; uint8_t v_isShared_3242_; uint8_t v_isSharedCheck_3246_; 
lean_dec(v_a_3198_);
lean_dec_ref(v_k_3187_);
lean_dec(v_name_3186_);
lean_dec_ref(v_hyp_3185_);
lean_dec_ref(v_cl_3184_);
lean_dec_ref(v_l_3183_);
v_a_3239_ = lean_ctor_get(v___x_3202_, 0);
v_isSharedCheck_3246_ = !lean_is_exclusive(v___x_3202_);
if (v_isSharedCheck_3246_ == 0)
{
v___x_3241_ = v___x_3202_;
v_isShared_3242_ = v_isSharedCheck_3246_;
goto v_resetjp_3240_;
}
else
{
lean_inc(v_a_3239_);
lean_dec(v___x_3202_);
v___x_3241_ = lean_box(0);
v_isShared_3242_ = v_isSharedCheck_3246_;
goto v_resetjp_3240_;
}
v_resetjp_3240_:
{
lean_object* v___x_3244_; 
if (v_isShared_3242_ == 0)
{
v___x_3244_ = v___x_3241_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v_a_3239_);
v___x_3244_ = v_reuseFailAlloc_3245_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
return v___x_3244_;
}
}
}
}
else
{
lean_object* v_a_3247_; lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3254_; 
lean_dec_ref(v_k_3187_);
lean_dec(v_name_3186_);
lean_dec_ref(v_hyp_3185_);
lean_dec_ref(v_cl_3184_);
lean_dec_ref(v_l_3183_);
v_a_3247_ = lean_ctor_get(v___x_3197_, 0);
v_isSharedCheck_3254_ = !lean_is_exclusive(v___x_3197_);
if (v_isSharedCheck_3254_ == 0)
{
v___x_3249_ = v___x_3197_;
v_isShared_3250_ = v_isSharedCheck_3254_;
goto v_resetjp_3248_;
}
else
{
lean_inc(v_a_3247_);
lean_dec(v___x_3197_);
v___x_3249_ = lean_box(0);
v_isShared_3250_ = v_isSharedCheck_3254_;
goto v_resetjp_3248_;
}
v_resetjp_3248_:
{
lean_object* v___x_3252_; 
if (v_isShared_3250_ == 0)
{
v___x_3252_ = v___x_3249_;
goto v_reusejp_3251_;
}
else
{
lean_object* v_reuseFailAlloc_3253_; 
v_reuseFailAlloc_3253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3253_, 0, v_a_3247_);
v___x_3252_ = v_reuseFailAlloc_3253_;
goto v_reusejp_3251_;
}
v_reusejp_3251_:
{
return v___x_3252_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure_spec__0___redArg___boxed(lean_object* v_l_3255_, lean_object* v_cl_3256_, lean_object* v_hyp_3257_, lean_object* v_name_3258_, lean_object* v_k_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_){
_start:
{
lean_object* v_res_3269_; 
v_res_3269_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure_spec__0___redArg(v_l_3255_, v_cl_3256_, v_hyp_3257_, v_name_3258_, v_k_3259_, v___y_3260_, v___y_3261_, v___y_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_, v___y_3267_);
lean_dec(v___y_3267_);
lean_dec_ref(v___y_3266_);
lean_dec(v___y_3265_);
lean_dec_ref(v___y_3264_);
lean_dec(v___y_3263_);
lean_dec_ref(v___y_3262_);
lean_dec(v___y_3261_);
lean_dec_ref(v___y_3260_);
return v_res_3269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure___lam__1(lean_object* v_snd_3270_, lean_object* v_hyp_3271_, lean_object* v___x_3272_, lean_object* v_fst_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_){
_start:
{
lean_object* v___x_3283_; 
lean_inc(v_hyp_3271_);
lean_inc_ref(v_snd_3270_);
v___x_3283_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_focusHypWithInfo(v_snd_3270_, v_hyp_3271_, v___y_3278_, v___y_3279_, v___y_3280_, v___y_3281_);
if (lean_obj_tag(v___x_3283_) == 0)
{
lean_object* v_a_3284_; lean_object* v_ref_3285_; lean_object* v_l_3286_; lean_object* v_cl_3287_; lean_object* v_focusHyp_3288_; lean_object* v___f_3289_; uint8_t v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; 
v_a_3284_ = lean_ctor_get(v___x_3283_, 0);
lean_inc_n(v_a_3284_, 2);
lean_dec_ref_known(v___x_3283_, 1);
v_ref_3285_ = lean_ctor_get(v___y_3280_, 5);
v_l_3286_ = lean_ctor_get(v_snd_3270_, 1);
v_cl_3287_ = lean_ctor_get(v_snd_3270_, 2);
v_focusHyp_3288_ = lean_ctor_get(v_a_3284_, 0);
lean_inc_ref(v_snd_3270_);
v___f_3289_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure___lam__0___boxed), 13, 2);
lean_closure_set(v___f_3289_, 0, v_a_3284_);
lean_closure_set(v___f_3289_, 1, v_snd_3270_);
v___x_3290_ = 0;
v___x_3291_ = l_Lean_SourceInfo_fromRef(v_ref_3285_, v___x_3290_);
v___x_3292_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___closed__0));
v___x_3293_ = l_Lean_Name_mkStr2(v___x_3272_, v___x_3292_);
v___x_3294_ = l_Lean_Syntax_node1(v___x_3291_, v___x_3293_, v_hyp_3271_);
lean_inc_ref(v_focusHyp_3288_);
lean_inc_ref(v_cl_3287_);
lean_inc_ref(v_l_3286_);
v___x_3295_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure_spec__0___redArg(v_l_3286_, v_cl_3287_, v_focusHyp_3288_, v___x_3294_, v___f_3289_, v___y_3274_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_, v___y_3279_, v___y_3280_, v___y_3281_);
if (lean_obj_tag(v___x_3295_) == 0)
{
lean_object* v_a_3296_; lean_object* v_snd_3297_; lean_object* v_fst_3298_; lean_object* v_snd_3299_; lean_object* v___x_3301_; uint8_t v_isShared_3302_; uint8_t v_isSharedCheck_3311_; 
v_a_3296_ = lean_ctor_get(v___x_3295_, 0);
lean_inc(v_a_3296_);
lean_dec_ref_known(v___x_3295_, 1);
v_snd_3297_ = lean_ctor_get(v_a_3296_, 1);
lean_inc(v_snd_3297_);
v_fst_3298_ = lean_ctor_get(v_a_3296_, 0);
lean_inc(v_fst_3298_);
lean_dec(v_a_3296_);
v_snd_3299_ = lean_ctor_get(v_snd_3297_, 1);
v_isSharedCheck_3311_ = !lean_is_exclusive(v_snd_3297_);
if (v_isSharedCheck_3311_ == 0)
{
lean_object* v_unused_3312_; 
v_unused_3312_ = lean_ctor_get(v_snd_3297_, 0);
lean_dec(v_unused_3312_);
v___x_3301_ = v_snd_3297_;
v_isShared_3302_ = v_isSharedCheck_3311_;
goto v_resetjp_3300_;
}
else
{
lean_inc(v_snd_3299_);
lean_dec(v_snd_3297_);
v___x_3301_ = lean_box(0);
v_isShared_3302_ = v_isSharedCheck_3311_;
goto v_resetjp_3300_;
}
v_resetjp_3300_:
{
lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3308_; 
v___x_3303_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_FocusResult_rewriteHyps(v_a_3284_, v_snd_3270_, v_snd_3299_);
v___x_3304_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg(v_fst_3273_, v___x_3303_, v___y_3279_);
lean_dec_ref(v___x_3304_);
v___x_3305_ = l_Lean_Expr_mvarId_x21(v_fst_3298_);
lean_dec(v_fst_3298_);
v___x_3306_ = lean_box(0);
if (v_isShared_3302_ == 0)
{
lean_ctor_set_tag(v___x_3301_, 1);
lean_ctor_set(v___x_3301_, 1, v___x_3306_);
lean_ctor_set(v___x_3301_, 0, v___x_3305_);
v___x_3308_ = v___x_3301_;
goto v_reusejp_3307_;
}
else
{
lean_object* v_reuseFailAlloc_3310_; 
v_reuseFailAlloc_3310_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3310_, 0, v___x_3305_);
lean_ctor_set(v_reuseFailAlloc_3310_, 1, v___x_3306_);
v___x_3308_ = v_reuseFailAlloc_3310_;
goto v_reusejp_3307_;
}
v_reusejp_3307_:
{
lean_object* v___x_3309_; 
v___x_3309_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_3308_, v___y_3275_, v___y_3278_, v___y_3279_, v___y_3280_, v___y_3281_);
return v___x_3309_;
}
}
}
else
{
lean_object* v_a_3313_; lean_object* v___x_3315_; uint8_t v_isShared_3316_; uint8_t v_isSharedCheck_3320_; 
lean_dec(v_a_3284_);
lean_dec(v_fst_3273_);
lean_dec_ref(v_snd_3270_);
v_a_3313_ = lean_ctor_get(v___x_3295_, 0);
v_isSharedCheck_3320_ = !lean_is_exclusive(v___x_3295_);
if (v_isSharedCheck_3320_ == 0)
{
v___x_3315_ = v___x_3295_;
v_isShared_3316_ = v_isSharedCheck_3320_;
goto v_resetjp_3314_;
}
else
{
lean_inc(v_a_3313_);
lean_dec(v___x_3295_);
v___x_3315_ = lean_box(0);
v_isShared_3316_ = v_isSharedCheck_3320_;
goto v_resetjp_3314_;
}
v_resetjp_3314_:
{
lean_object* v___x_3318_; 
if (v_isShared_3316_ == 0)
{
v___x_3318_ = v___x_3315_;
goto v_reusejp_3317_;
}
else
{
lean_object* v_reuseFailAlloc_3319_; 
v_reuseFailAlloc_3319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3319_, 0, v_a_3313_);
v___x_3318_ = v_reuseFailAlloc_3319_;
goto v_reusejp_3317_;
}
v_reusejp_3317_:
{
return v___x_3318_;
}
}
}
}
else
{
lean_object* v_a_3321_; lean_object* v___x_3323_; uint8_t v_isShared_3324_; uint8_t v_isSharedCheck_3328_; 
lean_dec(v_fst_3273_);
lean_dec_ref(v___x_3272_);
lean_dec(v_hyp_3271_);
lean_dec_ref(v_snd_3270_);
v_a_3321_ = lean_ctor_get(v___x_3283_, 0);
v_isSharedCheck_3328_ = !lean_is_exclusive(v___x_3283_);
if (v_isSharedCheck_3328_ == 0)
{
v___x_3323_ = v___x_3283_;
v_isShared_3324_ = v_isSharedCheck_3328_;
goto v_resetjp_3322_;
}
else
{
lean_inc(v_a_3321_);
lean_dec(v___x_3283_);
v___x_3323_ = lean_box(0);
v_isShared_3324_ = v_isSharedCheck_3328_;
goto v_resetjp_3322_;
}
v_resetjp_3322_:
{
lean_object* v___x_3326_; 
if (v_isShared_3324_ == 0)
{
v___x_3326_ = v___x_3323_;
goto v_reusejp_3325_;
}
else
{
lean_object* v_reuseFailAlloc_3327_; 
v_reuseFailAlloc_3327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3327_, 0, v_a_3321_);
v___x_3326_ = v_reuseFailAlloc_3327_;
goto v_reusejp_3325_;
}
v_reusejp_3325_:
{
return v___x_3326_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure___lam__1___boxed(lean_object* v_snd_3329_, lean_object* v_hyp_3330_, lean_object* v___x_3331_, lean_object* v_fst_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_){
_start:
{
lean_object* v_res_3342_; 
v_res_3342_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure___lam__1(v_snd_3329_, v_hyp_3330_, v___x_3331_, v_fst_3332_, v___y_3333_, v___y_3334_, v___y_3335_, v___y_3336_, v___y_3337_, v___y_3338_, v___y_3339_, v___y_3340_);
lean_dec(v___y_3340_);
lean_dec_ref(v___y_3339_);
lean_dec(v___y_3338_);
lean_dec_ref(v___y_3337_);
lean_dec(v___y_3336_);
lean_dec_ref(v___y_3335_);
lean_dec(v___y_3334_);
lean_dec_ref(v___y_3333_);
return v_res_3342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure(lean_object* v_x_3343_, lean_object* v_a_3344_, lean_object* v_a_3345_, lean_object* v_a_3346_, lean_object* v_a_3347_, lean_object* v_a_3348_, lean_object* v_a_3349_, lean_object* v_a_3350_, lean_object* v_a_3351_){
_start:
{
lean_object* v___x_3353_; lean_object* v___x_3354_; uint8_t v___x_3355_; 
v___x_3353_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0));
v___x_3354_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3));
lean_inc(v_x_3343_);
v___x_3355_ = l_Lean_Syntax_isOfKind(v_x_3343_, v___x_3354_);
if (v___x_3355_ == 0)
{
lean_object* v___x_3356_; 
lean_dec(v_x_3343_);
v___x_3356_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg();
return v___x_3356_;
}
else
{
lean_object* v___x_3357_; 
v___x_3357_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMainGoal___redArg(v_a_3345_, v_a_3348_, v_a_3349_, v_a_3350_, v_a_3351_);
if (lean_obj_tag(v___x_3357_) == 0)
{
lean_object* v_a_3358_; lean_object* v_fst_3359_; lean_object* v_snd_3360_; lean_object* v___x_3361_; lean_object* v_hyp_3362_; lean_object* v___f_3363_; lean_object* v___x_3364_; 
v_a_3358_ = lean_ctor_get(v___x_3357_, 0);
lean_inc(v_a_3358_);
lean_dec_ref_known(v___x_3357_, 1);
v_fst_3359_ = lean_ctor_get(v_a_3358_, 0);
lean_inc_n(v_fst_3359_, 2);
v_snd_3360_ = lean_ctor_get(v_a_3358_, 1);
lean_inc(v_snd_3360_);
lean_dec(v_a_3358_);
v___x_3361_ = lean_unsigned_to_nat(1u);
v_hyp_3362_ = l_Lean_Syntax_getArg(v_x_3343_, v___x_3361_);
lean_dec(v_x_3343_);
v___f_3363_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure___lam__1___boxed), 13, 4);
lean_closure_set(v___f_3363_, 0, v_snd_3360_);
lean_closure_set(v___f_3363_, 1, v_hyp_3362_);
lean_closure_set(v___f_3363_, 2, v___x_3353_);
lean_closure_set(v___f_3363_, 3, v_fst_3359_);
v___x_3364_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg(v_fst_3359_, v___f_3363_, v_a_3344_, v_a_3345_, v_a_3346_, v_a_3347_, v_a_3348_, v_a_3349_, v_a_3350_, v_a_3351_);
return v___x_3364_;
}
else
{
lean_object* v_a_3365_; lean_object* v___x_3367_; uint8_t v_isShared_3368_; uint8_t v_isSharedCheck_3372_; 
lean_dec(v_x_3343_);
v_a_3365_ = lean_ctor_get(v___x_3357_, 0);
v_isSharedCheck_3372_ = !lean_is_exclusive(v___x_3357_);
if (v_isSharedCheck_3372_ == 0)
{
v___x_3367_ = v___x_3357_;
v_isShared_3368_ = v_isSharedCheck_3372_;
goto v_resetjp_3366_;
}
else
{
lean_inc(v_a_3365_);
lean_dec(v___x_3357_);
v___x_3367_ = lean_box(0);
v_isShared_3368_ = v_isSharedCheck_3372_;
goto v_resetjp_3366_;
}
v_resetjp_3366_:
{
lean_object* v___x_3370_; 
if (v_isShared_3368_ == 0)
{
v___x_3370_ = v___x_3367_;
goto v_reusejp_3369_;
}
else
{
lean_object* v_reuseFailAlloc_3371_; 
v_reuseFailAlloc_3371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3371_, 0, v_a_3365_);
v___x_3370_ = v_reuseFailAlloc_3371_;
goto v_reusejp_3369_;
}
v_reusejp_3369_:
{
return v___x_3370_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure___boxed(lean_object* v_x_3373_, lean_object* v_a_3374_, lean_object* v_a_3375_, lean_object* v_a_3376_, lean_object* v_a_3377_, lean_object* v_a_3378_, lean_object* v_a_3379_, lean_object* v_a_3380_, lean_object* v_a_3381_, lean_object* v_a_3382_){
_start:
{
lean_object* v_res_3383_; 
v_res_3383_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure(v_x_3373_, v_a_3374_, v_a_3375_, v_a_3376_, v_a_3377_, v_a_3378_, v_a_3379_, v_a_3380_, v_a_3381_);
lean_dec(v_a_3381_);
lean_dec_ref(v_a_3380_);
lean_dec(v_a_3379_);
lean_dec_ref(v_a_3378_);
lean_dec(v_a_3377_);
lean_dec_ref(v_a_3376_);
lean_dec(v_a_3375_);
lean_dec_ref(v_a_3374_);
return v_res_3383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure_spec__0(lean_object* v_00_u03b1_3384_, lean_object* v_l_3385_, lean_object* v_cl_3386_, lean_object* v_hyp_3387_, lean_object* v_name_3388_, lean_object* v_k_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_){
_start:
{
lean_object* v___x_3399_; 
v___x_3399_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure_spec__0___redArg(v_l_3385_, v_cl_3386_, v_hyp_3387_, v_name_3388_, v_k_3389_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_, v___y_3395_, v___y_3396_, v___y_3397_);
return v___x_3399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure_spec__0___boxed(lean_object* v_00_u03b1_3400_, lean_object* v_l_3401_, lean_object* v_cl_3402_, lean_object* v_hyp_3403_, lean_object* v_name_3404_, lean_object* v_k_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_){
_start:
{
lean_object* v_res_3415_; 
v_res_3415_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure_spec__0(v_00_u03b1_3400_, v_l_3401_, v_cl_3402_, v_hyp_3403_, v_name_3404_, v_k_3405_, v___y_3406_, v___y_3407_, v___y_3408_, v___y_3409_, v___y_3410_, v___y_3411_, v___y_3412_, v___y_3413_);
lean_dec(v___y_3413_);
lean_dec_ref(v___y_3412_);
lean_dec(v___y_3411_);
lean_dec_ref(v___y_3410_);
lean_dec(v___y_3409_);
lean_dec_ref(v___y_3408_);
lean_dec(v___y_3407_);
lean_dec_ref(v___y_3406_);
return v_res_3415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___redArg___lam__0(lean_object* v___x_3416_, lean_object* v___x_3417_, lean_object* v___x_3418_, lean_object* v___x_3419_, lean_object* v___x_3420_, lean_object* v___x_3421_, lean_object* v_l_3422_, lean_object* v_cl_3423_, lean_object* v_hyps_3424_, lean_object* v_target_3425_, lean_object* v_00_u03c6_3426_, lean_object* v_inst_3427_, lean_object* v_toPure_3428_, lean_object* v_____x_3429_){
_start:
{
lean_object* v_fst_3430_; lean_object* v_snd_3431_; lean_object* v___x_3433_; uint8_t v_isShared_3434_; uint8_t v_isSharedCheck_3444_; 
v_fst_3430_ = lean_ctor_get(v_____x_3429_, 0);
v_snd_3431_ = lean_ctor_get(v_____x_3429_, 1);
v_isSharedCheck_3444_ = !lean_is_exclusive(v_____x_3429_);
if (v_isSharedCheck_3444_ == 0)
{
v___x_3433_ = v_____x_3429_;
v_isShared_3434_ = v_isSharedCheck_3444_;
goto v_resetjp_3432_;
}
else
{
lean_inc(v_snd_3431_);
lean_inc(v_fst_3430_);
lean_dec(v_____x_3429_);
v___x_3433_ = lean_box(0);
v_isShared_3434_ = v_isSharedCheck_3444_;
goto v_resetjp_3432_;
}
v_resetjp_3432_:
{
lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v_prf_3439_; lean_object* v___x_3441_; 
v___x_3435_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0));
v___x_3436_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0));
v___x_3437_ = l_Lean_Name_mkStr7(v___x_3416_, v___x_3417_, v___x_3418_, v___x_3419_, v___x_3420_, v___x_3435_, v___x_3436_);
v___x_3438_ = l_Lean_mkConst(v___x_3437_, v___x_3421_);
v_prf_3439_ = l_Lean_mkApp7(v___x_3438_, v_l_3422_, v_cl_3423_, v_hyps_3424_, v_target_3425_, v_00_u03c6_3426_, v_inst_3427_, v_snd_3431_);
if (v_isShared_3434_ == 0)
{
lean_ctor_set(v___x_3433_, 1, v_prf_3439_);
v___x_3441_ = v___x_3433_;
goto v_reusejp_3440_;
}
else
{
lean_object* v_reuseFailAlloc_3443_; 
v_reuseFailAlloc_3443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3443_, 0, v_fst_3430_);
lean_ctor_set(v_reuseFailAlloc_3443_, 1, v_prf_3439_);
v___x_3441_ = v_reuseFailAlloc_3443_;
goto v_reusejp_3440_;
}
v_reusejp_3440_:
{
lean_object* v___x_3442_; 
v___x_3442_ = lean_apply_2(v_toPure_3428_, lean_box(0), v___x_3441_);
return v___x_3442_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___redArg___lam__1(lean_object* v___x_3445_, lean_object* v___x_3446_, lean_object* v___x_3447_, lean_object* v___x_3448_, lean_object* v___x_3449_, lean_object* v___x_3450_, lean_object* v_l_3451_, lean_object* v_cl_3452_, lean_object* v_hyps_3453_, lean_object* v_target_3454_, lean_object* v_00_u03c6_3455_, lean_object* v_toPure_3456_, lean_object* v_k_3457_, lean_object* v_toBind_3458_, lean_object* v_inst_3459_){
_start:
{
lean_object* v___f_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; 
lean_inc_ref(v_00_u03c6_3455_);
v___f_3460_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___redArg___lam__0), 14, 13);
lean_closure_set(v___f_3460_, 0, v___x_3445_);
lean_closure_set(v___f_3460_, 1, v___x_3446_);
lean_closure_set(v___f_3460_, 2, v___x_3447_);
lean_closure_set(v___f_3460_, 3, v___x_3448_);
lean_closure_set(v___f_3460_, 4, v___x_3449_);
lean_closure_set(v___f_3460_, 5, v___x_3450_);
lean_closure_set(v___f_3460_, 6, v_l_3451_);
lean_closure_set(v___f_3460_, 7, v_cl_3452_);
lean_closure_set(v___f_3460_, 8, v_hyps_3453_);
lean_closure_set(v___f_3460_, 9, v_target_3454_);
lean_closure_set(v___f_3460_, 10, v_00_u03c6_3455_);
lean_closure_set(v___f_3460_, 11, v_inst_3459_);
lean_closure_set(v___f_3460_, 12, v_toPure_3456_);
v___x_3461_ = lean_apply_1(v_k_3457_, v_00_u03c6_3455_);
v___x_3462_ = lean_apply_4(v_toBind_3458_, lean_box(0), lean_box(0), v___x_3461_, v___f_3460_);
return v___x_3462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___redArg___lam__2(lean_object* v_goal_3463_, lean_object* v_toPure_3464_, lean_object* v_k_3465_, lean_object* v_toBind_3466_, lean_object* v_inst_3467_, lean_object* v_00_u03c6_3468_){
_start:
{
lean_object* v_u_3469_; lean_object* v_l_3470_; lean_object* v_cl_3471_; lean_object* v_hyps_3472_; lean_object* v_target_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___y_3481_; lean_object* v___x_3491_; 
v_u_3469_ = lean_ctor_get(v_goal_3463_, 0);
lean_inc(v_u_3469_);
v_l_3470_ = lean_ctor_get(v_goal_3463_, 1);
lean_inc_ref(v_l_3470_);
v_cl_3471_ = lean_ctor_get(v_goal_3463_, 2);
lean_inc_ref(v_cl_3471_);
v_hyps_3472_ = lean_ctor_get(v_goal_3463_, 3);
lean_inc_ref(v_hyps_3472_);
v_target_3473_ = lean_ctor_get(v_goal_3463_, 4);
lean_inc_ref(v_target_3473_);
lean_dec_ref(v_goal_3463_);
v___x_3474_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0));
v___x_3475_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__0));
v___x_3476_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1));
v___x_3477_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__1));
v___x_3478_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3));
v___x_3479_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__2));
v___x_3491_ = l_Lean_Level_dec(v_u_3469_);
if (lean_obj_tag(v___x_3491_) == 0)
{
v___y_3481_ = v_u_3469_;
goto v___jp_3480_;
}
else
{
lean_object* v_val_3492_; 
lean_dec(v_u_3469_);
v_val_3492_ = lean_ctor_get(v___x_3491_, 0);
lean_inc(v_val_3492_);
lean_dec_ref_known(v___x_3491_, 1);
v___y_3481_ = v_val_3492_;
goto v___jp_3480_;
}
v___jp_3480_:
{
lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___f_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; 
v___x_3482_ = lean_box(0);
v___x_3483_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3483_, 0, v___y_3481_);
lean_ctor_set(v___x_3483_, 1, v___x_3482_);
lean_inc_ref(v___x_3483_);
v___x_3484_ = l_Lean_mkConst(v___x_3479_, v___x_3483_);
lean_inc(v_toBind_3466_);
lean_inc_ref(v_00_u03c6_3468_);
lean_inc_ref(v_target_3473_);
lean_inc_ref(v_cl_3471_);
lean_inc_ref(v_l_3470_);
v___f_3485_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___redArg___lam__1), 15, 14);
lean_closure_set(v___f_3485_, 0, v___x_3474_);
lean_closure_set(v___f_3485_, 1, v___x_3475_);
lean_closure_set(v___f_3485_, 2, v___x_3476_);
lean_closure_set(v___f_3485_, 3, v___x_3477_);
lean_closure_set(v___f_3485_, 4, v___x_3478_);
lean_closure_set(v___f_3485_, 5, v___x_3483_);
lean_closure_set(v___f_3485_, 6, v_l_3470_);
lean_closure_set(v___f_3485_, 7, v_cl_3471_);
lean_closure_set(v___f_3485_, 8, v_hyps_3472_);
lean_closure_set(v___f_3485_, 9, v_target_3473_);
lean_closure_set(v___f_3485_, 10, v_00_u03c6_3468_);
lean_closure_set(v___f_3485_, 11, v_toPure_3464_);
lean_closure_set(v___f_3485_, 12, v_k_3465_);
lean_closure_set(v___f_3485_, 13, v_toBind_3466_);
v___x_3486_ = l_Lean_mkApp4(v___x_3484_, v_l_3470_, v_cl_3471_, v_target_3473_, v_00_u03c6_3468_);
v___x_3487_ = lean_box(0);
v___x_3488_ = lean_alloc_closure((void*)(l_Lean_Meta_synthInstance___boxed), 7, 2);
lean_closure_set(v___x_3488_, 0, v___x_3486_);
lean_closure_set(v___x_3488_, 1, v___x_3487_);
v___x_3489_ = lean_apply_2(v_inst_3467_, lean_box(0), v___x_3488_);
v___x_3490_ = lean_apply_4(v_toBind_3466_, lean_box(0), lean_box(0), v___x_3489_, v___f_3485_);
return v___x_3490_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___redArg(lean_object* v_inst_3493_, lean_object* v_inst_3494_, lean_object* v_goal_3495_, lean_object* v_k_3496_){
_start:
{
lean_object* v_toApplicative_3497_; lean_object* v_toBind_3498_; lean_object* v_toPure_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___f_3502_; lean_object* v___x_3503_; 
v_toApplicative_3497_ = lean_ctor_get(v_inst_3493_, 0);
lean_inc_ref(v_toApplicative_3497_);
v_toBind_3498_ = lean_ctor_get(v_inst_3493_, 1);
lean_inc_n(v_toBind_3498_, 2);
lean_dec_ref(v_inst_3493_);
v_toPure_3499_ = lean_ctor_get(v_toApplicative_3497_, 1);
lean_inc(v_toPure_3499_);
lean_dec_ref(v_toApplicative_3497_);
v___x_3500_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2);
lean_inc(v_inst_3494_);
v___x_3501_ = lean_apply_2(v_inst_3494_, lean_box(0), v___x_3500_);
v___f_3502_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___redArg___lam__2), 6, 5);
lean_closure_set(v___f_3502_, 0, v_goal_3495_);
lean_closure_set(v___f_3502_, 1, v_toPure_3499_);
lean_closure_set(v___f_3502_, 2, v_k_3496_);
lean_closure_set(v___f_3502_, 3, v_toBind_3498_);
lean_closure_set(v___f_3502_, 4, v_inst_3494_);
v___x_3503_ = lean_apply_4(v_toBind_3498_, lean_box(0), lean_box(0), v___x_3501_, v___f_3502_);
return v___x_3503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore(lean_object* v_m_3504_, lean_object* v_00_u03b1_3505_, lean_object* v_inst_3506_, lean_object* v_inst_3507_, lean_object* v_goal_3508_, lean_object* v_k_3509_){
_start:
{
lean_object* v___x_3510_; 
v___x_3510_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___redArg(v_inst_3506_, v_inst_3507_, v_goal_3508_, v_k_3509_);
return v___x_3510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg(lean_object* v_goal_3519_, lean_object* v_k_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_, lean_object* v___y_3528_){
_start:
{
lean_object* v___x_3530_; uint8_t v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; 
v___x_3530_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1);
v___x_3531_ = 0;
v___x_3532_ = lean_box(0);
v___x_3533_ = l_Lean_Meta_mkFreshExprMVar(v___x_3530_, v___x_3531_, v___x_3532_, v___y_3525_, v___y_3526_, v___y_3527_, v___y_3528_);
if (lean_obj_tag(v___x_3533_) == 0)
{
lean_object* v_a_3534_; lean_object* v_u_3535_; lean_object* v_l_3536_; lean_object* v_cl_3537_; lean_object* v_hyps_3538_; lean_object* v_target_3539_; lean_object* v___x_3540_; lean_object* v___y_3542_; lean_object* v___x_3579_; 
v_a_3534_ = lean_ctor_get(v___x_3533_, 0);
lean_inc(v_a_3534_);
lean_dec_ref_known(v___x_3533_, 1);
v_u_3535_ = lean_ctor_get(v_goal_3519_, 0);
lean_inc(v_u_3535_);
v_l_3536_ = lean_ctor_get(v_goal_3519_, 1);
lean_inc_ref(v_l_3536_);
v_cl_3537_ = lean_ctor_get(v_goal_3519_, 2);
lean_inc_ref(v_cl_3537_);
v_hyps_3538_ = lean_ctor_get(v_goal_3519_, 3);
lean_inc_ref(v_hyps_3538_);
v_target_3539_ = lean_ctor_get(v_goal_3519_, 4);
lean_inc_ref(v_target_3539_);
lean_dec_ref(v_goal_3519_);
v___x_3540_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__2));
v___x_3579_ = l_Lean_Level_dec(v_u_3535_);
if (lean_obj_tag(v___x_3579_) == 0)
{
v___y_3542_ = v_u_3535_;
goto v___jp_3541_;
}
else
{
lean_object* v_val_3580_; 
lean_dec(v_u_3535_);
v_val_3580_ = lean_ctor_get(v___x_3579_, 0);
lean_inc(v_val_3580_);
lean_dec_ref_known(v___x_3579_, 1);
v___y_3542_ = v_val_3580_;
goto v___jp_3541_;
}
v___jp_3541_:
{
lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; 
v___x_3543_ = lean_box(0);
v___x_3544_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3544_, 0, v___y_3542_);
lean_ctor_set(v___x_3544_, 1, v___x_3543_);
lean_inc_ref(v___x_3544_);
v___x_3545_ = l_Lean_mkConst(v___x_3540_, v___x_3544_);
lean_inc(v_a_3534_);
lean_inc_ref(v_target_3539_);
lean_inc_ref(v_cl_3537_);
lean_inc_ref(v_l_3536_);
v___x_3546_ = l_Lean_mkApp4(v___x_3545_, v_l_3536_, v_cl_3537_, v_target_3539_, v_a_3534_);
v___x_3547_ = lean_box(0);
v___x_3548_ = l_Lean_Meta_synthInstance(v___x_3546_, v___x_3547_, v___y_3525_, v___y_3526_, v___y_3527_, v___y_3528_);
if (lean_obj_tag(v___x_3548_) == 0)
{
lean_object* v_a_3549_; lean_object* v___x_3550_; 
v_a_3549_ = lean_ctor_get(v___x_3548_, 0);
lean_inc(v_a_3549_);
lean_dec_ref_known(v___x_3548_, 1);
lean_inc(v___y_3528_);
lean_inc_ref(v___y_3527_);
lean_inc(v___y_3526_);
lean_inc_ref(v___y_3525_);
lean_inc(v___y_3524_);
lean_inc_ref(v___y_3523_);
lean_inc(v___y_3522_);
lean_inc_ref(v___y_3521_);
lean_inc(v_a_3534_);
v___x_3550_ = lean_apply_10(v_k_3520_, v_a_3534_, v___y_3521_, v___y_3522_, v___y_3523_, v___y_3524_, v___y_3525_, v___y_3526_, v___y_3527_, v___y_3528_, lean_box(0));
if (lean_obj_tag(v___x_3550_) == 0)
{
lean_object* v_a_3551_; lean_object* v___x_3553_; uint8_t v_isShared_3554_; uint8_t v_isSharedCheck_3570_; 
v_a_3551_ = lean_ctor_get(v___x_3550_, 0);
v_isSharedCheck_3570_ = !lean_is_exclusive(v___x_3550_);
if (v_isSharedCheck_3570_ == 0)
{
v___x_3553_ = v___x_3550_;
v_isShared_3554_ = v_isSharedCheck_3570_;
goto v_resetjp_3552_;
}
else
{
lean_inc(v_a_3551_);
lean_dec(v___x_3550_);
v___x_3553_ = lean_box(0);
v_isShared_3554_ = v_isSharedCheck_3570_;
goto v_resetjp_3552_;
}
v_resetjp_3552_:
{
lean_object* v_fst_3555_; lean_object* v_snd_3556_; lean_object* v___x_3558_; uint8_t v_isShared_3559_; uint8_t v_isSharedCheck_3569_; 
v_fst_3555_ = lean_ctor_get(v_a_3551_, 0);
v_snd_3556_ = lean_ctor_get(v_a_3551_, 1);
v_isSharedCheck_3569_ = !lean_is_exclusive(v_a_3551_);
if (v_isSharedCheck_3569_ == 0)
{
v___x_3558_ = v_a_3551_;
v_isShared_3559_ = v_isSharedCheck_3569_;
goto v_resetjp_3557_;
}
else
{
lean_inc(v_snd_3556_);
lean_inc(v_fst_3555_);
lean_dec(v_a_3551_);
v___x_3558_ = lean_box(0);
v_isShared_3559_ = v_isSharedCheck_3569_;
goto v_resetjp_3557_;
}
v_resetjp_3557_:
{
lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v_prf_3562_; lean_object* v___x_3564_; 
v___x_3560_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0));
v___x_3561_ = l_Lean_mkConst(v___x_3560_, v___x_3544_);
v_prf_3562_ = l_Lean_mkApp7(v___x_3561_, v_l_3536_, v_cl_3537_, v_hyps_3538_, v_target_3539_, v_a_3534_, v_a_3549_, v_snd_3556_);
if (v_isShared_3559_ == 0)
{
lean_ctor_set(v___x_3558_, 1, v_prf_3562_);
v___x_3564_ = v___x_3558_;
goto v_reusejp_3563_;
}
else
{
lean_object* v_reuseFailAlloc_3568_; 
v_reuseFailAlloc_3568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3568_, 0, v_fst_3555_);
lean_ctor_set(v_reuseFailAlloc_3568_, 1, v_prf_3562_);
v___x_3564_ = v_reuseFailAlloc_3568_;
goto v_reusejp_3563_;
}
v_reusejp_3563_:
{
lean_object* v___x_3566_; 
if (v_isShared_3554_ == 0)
{
lean_ctor_set(v___x_3553_, 0, v___x_3564_);
v___x_3566_ = v___x_3553_;
goto v_reusejp_3565_;
}
else
{
lean_object* v_reuseFailAlloc_3567_; 
v_reuseFailAlloc_3567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3567_, 0, v___x_3564_);
v___x_3566_ = v_reuseFailAlloc_3567_;
goto v_reusejp_3565_;
}
v_reusejp_3565_:
{
return v___x_3566_;
}
}
}
}
}
else
{
lean_dec(v_a_3549_);
lean_dec_ref_known(v___x_3544_, 2);
lean_dec_ref(v_target_3539_);
lean_dec_ref(v_hyps_3538_);
lean_dec_ref(v_cl_3537_);
lean_dec_ref(v_l_3536_);
lean_dec(v_a_3534_);
return v___x_3550_;
}
}
else
{
lean_object* v_a_3571_; lean_object* v___x_3573_; uint8_t v_isShared_3574_; uint8_t v_isSharedCheck_3578_; 
lean_dec_ref_known(v___x_3544_, 2);
lean_dec_ref(v_target_3539_);
lean_dec_ref(v_hyps_3538_);
lean_dec_ref(v_cl_3537_);
lean_dec_ref(v_l_3536_);
lean_dec(v_a_3534_);
lean_dec_ref(v_k_3520_);
v_a_3571_ = lean_ctor_get(v___x_3548_, 0);
v_isSharedCheck_3578_ = !lean_is_exclusive(v___x_3548_);
if (v_isSharedCheck_3578_ == 0)
{
v___x_3573_ = v___x_3548_;
v_isShared_3574_ = v_isSharedCheck_3578_;
goto v_resetjp_3572_;
}
else
{
lean_inc(v_a_3571_);
lean_dec(v___x_3548_);
v___x_3573_ = lean_box(0);
v_isShared_3574_ = v_isSharedCheck_3578_;
goto v_resetjp_3572_;
}
v_resetjp_3572_:
{
lean_object* v___x_3576_; 
if (v_isShared_3574_ == 0)
{
v___x_3576_ = v___x_3573_;
goto v_reusejp_3575_;
}
else
{
lean_object* v_reuseFailAlloc_3577_; 
v_reuseFailAlloc_3577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3577_, 0, v_a_3571_);
v___x_3576_ = v_reuseFailAlloc_3577_;
goto v_reusejp_3575_;
}
v_reusejp_3575_:
{
return v___x_3576_;
}
}
}
}
}
else
{
lean_object* v_a_3581_; lean_object* v___x_3583_; uint8_t v_isShared_3584_; uint8_t v_isSharedCheck_3588_; 
lean_dec_ref(v_k_3520_);
lean_dec_ref(v_goal_3519_);
v_a_3581_ = lean_ctor_get(v___x_3533_, 0);
v_isSharedCheck_3588_ = !lean_is_exclusive(v___x_3533_);
if (v_isSharedCheck_3588_ == 0)
{
v___x_3583_ = v___x_3533_;
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
else
{
lean_inc(v_a_3581_);
lean_dec(v___x_3533_);
v___x_3583_ = lean_box(0);
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
v_resetjp_3582_:
{
lean_object* v___x_3586_; 
if (v_isShared_3584_ == 0)
{
v___x_3586_ = v___x_3583_;
goto v_reusejp_3585_;
}
else
{
lean_object* v_reuseFailAlloc_3587_; 
v_reuseFailAlloc_3587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3587_, 0, v_a_3581_);
v___x_3586_ = v_reuseFailAlloc_3587_;
goto v_reusejp_3585_;
}
v_reusejp_3585_:
{
return v___x_3586_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg___boxed(lean_object* v_goal_3589_, lean_object* v_k_3590_, lean_object* v___y_3591_, lean_object* v___y_3592_, lean_object* v___y_3593_, lean_object* v___y_3594_, lean_object* v___y_3595_, lean_object* v___y_3596_, lean_object* v___y_3597_, lean_object* v___y_3598_, lean_object* v___y_3599_){
_start:
{
lean_object* v_res_3600_; 
v_res_3600_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg(v_goal_3589_, v_k_3590_, v___y_3591_, v___y_3592_, v___y_3593_, v___y_3594_, v___y_3595_, v___y_3596_, v___y_3597_, v___y_3598_);
lean_dec(v___y_3598_);
lean_dec_ref(v___y_3597_);
lean_dec(v___y_3596_);
lean_dec_ref(v___y_3595_);
lean_dec(v___y_3594_);
lean_dec_ref(v___y_3593_);
lean_dec(v___y_3592_);
lean_dec_ref(v___y_3591_);
return v_res_3600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0(lean_object* v_00_u03b1_3601_, lean_object* v_goal_3602_, lean_object* v_k_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_, lean_object* v___y_3608_, lean_object* v___y_3609_, lean_object* v___y_3610_, lean_object* v___y_3611_){
_start:
{
lean_object* v___x_3613_; 
v___x_3613_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg(v_goal_3602_, v_k_3603_, v___y_3604_, v___y_3605_, v___y_3606_, v___y_3607_, v___y_3608_, v___y_3609_, v___y_3610_, v___y_3611_);
return v___x_3613_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___boxed(lean_object* v_00_u03b1_3614_, lean_object* v_goal_3615_, lean_object* v_k_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_, lean_object* v___y_3625_){
_start:
{
lean_object* v_res_3626_; 
v_res_3626_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0(v_00_u03b1_3614_, v_goal_3615_, v_k_3616_, v___y_3617_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_, v___y_3622_, v___y_3623_, v___y_3624_);
lean_dec(v___y_3624_);
lean_dec_ref(v___y_3623_);
lean_dec(v___y_3622_);
lean_dec_ref(v___y_3621_);
lean_dec(v___y_3620_);
lean_dec_ref(v___y_3619_);
lean_dec(v___y_3618_);
lean_dec_ref(v___y_3617_);
return v_res_3626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro___lam__1(lean_object* v_snd_3627_, lean_object* v___f_3628_, lean_object* v_fst_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_, lean_object* v___y_3634_, lean_object* v___y_3635_, lean_object* v___y_3636_, lean_object* v___y_3637_){
_start:
{
lean_object* v___x_3639_; 
v___x_3639_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg(v_snd_3627_, v___f_3628_, v___y_3630_, v___y_3631_, v___y_3632_, v___y_3633_, v___y_3634_, v___y_3635_, v___y_3636_, v___y_3637_);
if (lean_obj_tag(v___x_3639_) == 0)
{
lean_object* v_a_3640_; lean_object* v_fst_3641_; lean_object* v_snd_3642_; lean_object* v___x_3644_; uint8_t v_isShared_3645_; uint8_t v_isSharedCheck_3652_; 
v_a_3640_ = lean_ctor_get(v___x_3639_, 0);
lean_inc(v_a_3640_);
lean_dec_ref_known(v___x_3639_, 1);
v_fst_3641_ = lean_ctor_get(v_a_3640_, 0);
v_snd_3642_ = lean_ctor_get(v_a_3640_, 1);
v_isSharedCheck_3652_ = !lean_is_exclusive(v_a_3640_);
if (v_isSharedCheck_3652_ == 0)
{
v___x_3644_ = v_a_3640_;
v_isShared_3645_ = v_isSharedCheck_3652_;
goto v_resetjp_3643_;
}
else
{
lean_inc(v_snd_3642_);
lean_inc(v_fst_3641_);
lean_dec(v_a_3640_);
v___x_3644_ = lean_box(0);
v_isShared_3645_ = v_isSharedCheck_3652_;
goto v_resetjp_3643_;
}
v_resetjp_3643_:
{
lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3649_; 
v___x_3646_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg(v_fst_3629_, v_snd_3642_, v___y_3635_);
lean_dec_ref(v___x_3646_);
v___x_3647_ = lean_box(0);
if (v_isShared_3645_ == 0)
{
lean_ctor_set_tag(v___x_3644_, 1);
lean_ctor_set(v___x_3644_, 1, v___x_3647_);
v___x_3649_ = v___x_3644_;
goto v_reusejp_3648_;
}
else
{
lean_object* v_reuseFailAlloc_3651_; 
v_reuseFailAlloc_3651_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3651_, 0, v_fst_3641_);
lean_ctor_set(v_reuseFailAlloc_3651_, 1, v___x_3647_);
v___x_3649_ = v_reuseFailAlloc_3651_;
goto v_reusejp_3648_;
}
v_reusejp_3648_:
{
lean_object* v___x_3650_; 
v___x_3650_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_3649_, v___y_3631_, v___y_3634_, v___y_3635_, v___y_3636_, v___y_3637_);
return v___x_3650_;
}
}
}
else
{
lean_object* v_a_3653_; lean_object* v___x_3655_; uint8_t v_isShared_3656_; uint8_t v_isSharedCheck_3660_; 
lean_dec(v_fst_3629_);
v_a_3653_ = lean_ctor_get(v___x_3639_, 0);
v_isSharedCheck_3660_ = !lean_is_exclusive(v___x_3639_);
if (v_isSharedCheck_3660_ == 0)
{
v___x_3655_ = v___x_3639_;
v_isShared_3656_ = v_isSharedCheck_3660_;
goto v_resetjp_3654_;
}
else
{
lean_inc(v_a_3653_);
lean_dec(v___x_3639_);
v___x_3655_ = lean_box(0);
v_isShared_3656_ = v_isSharedCheck_3660_;
goto v_resetjp_3654_;
}
v_resetjp_3654_:
{
lean_object* v___x_3658_; 
if (v_isShared_3656_ == 0)
{
v___x_3658_ = v___x_3655_;
goto v_reusejp_3657_;
}
else
{
lean_object* v_reuseFailAlloc_3659_; 
v_reuseFailAlloc_3659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3659_, 0, v_a_3653_);
v___x_3658_ = v_reuseFailAlloc_3659_;
goto v_reusejp_3657_;
}
v_reusejp_3657_:
{
return v___x_3658_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro___lam__1___boxed(lean_object* v_snd_3661_, lean_object* v___f_3662_, lean_object* v_fst_3663_, lean_object* v___y_3664_, lean_object* v___y_3665_, lean_object* v___y_3666_, lean_object* v___y_3667_, lean_object* v___y_3668_, lean_object* v___y_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_){
_start:
{
lean_object* v_res_3673_; 
v_res_3673_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro___lam__1(v_snd_3661_, v___f_3662_, v_fst_3663_, v___y_3664_, v___y_3665_, v___y_3666_, v___y_3667_, v___y_3668_, v___y_3669_, v___y_3670_, v___y_3671_);
lean_dec(v___y_3671_);
lean_dec_ref(v___y_3670_);
lean_dec(v___y_3669_);
lean_dec_ref(v___y_3668_);
lean_dec(v___y_3667_);
lean_dec_ref(v___y_3666_);
lean_dec(v___y_3665_);
lean_dec_ref(v___y_3664_);
return v_res_3673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro(lean_object* v_x_3674_, lean_object* v_a_3675_, lean_object* v_a_3676_, lean_object* v_a_3677_, lean_object* v_a_3678_, lean_object* v_a_3679_, lean_object* v_a_3680_, lean_object* v_a_3681_, lean_object* v_a_3682_){
_start:
{
lean_object* v___x_3684_; uint8_t v___x_3685_; 
v___x_3684_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1));
v___x_3685_ = l_Lean_Syntax_isOfKind(v_x_3674_, v___x_3684_);
if (v___x_3685_ == 0)
{
lean_object* v___x_3686_; 
v___x_3686_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg();
return v___x_3686_;
}
else
{
lean_object* v___x_3687_; 
v___x_3687_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMainGoal___redArg(v_a_3676_, v_a_3679_, v_a_3680_, v_a_3681_, v_a_3682_);
if (lean_obj_tag(v___x_3687_) == 0)
{
lean_object* v_a_3688_; lean_object* v_fst_3689_; lean_object* v_snd_3690_; lean_object* v___f_3691_; lean_object* v___f_3692_; lean_object* v___x_3693_; 
v_a_3688_ = lean_ctor_get(v___x_3687_, 0);
lean_inc(v_a_3688_);
lean_dec_ref_known(v___x_3687_, 1);
v_fst_3689_ = lean_ctor_get(v_a_3688_, 0);
lean_inc_n(v_fst_3689_, 3);
v_snd_3690_ = lean_ctor_get(v_a_3688_, 1);
lean_inc(v_snd_3690_);
lean_dec(v_a_3688_);
v___f_3691_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__0___boxed), 11, 1);
lean_closure_set(v___f_3691_, 0, v_fst_3689_);
v___f_3692_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro___lam__1___boxed), 12, 3);
lean_closure_set(v___f_3692_, 0, v_snd_3690_);
lean_closure_set(v___f_3692_, 1, v___f_3691_);
lean_closure_set(v___f_3692_, 2, v_fst_3689_);
v___x_3693_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg(v_fst_3689_, v___f_3692_, v_a_3675_, v_a_3676_, v_a_3677_, v_a_3678_, v_a_3679_, v_a_3680_, v_a_3681_, v_a_3682_);
return v___x_3693_;
}
else
{
lean_object* v_a_3694_; lean_object* v___x_3696_; uint8_t v_isShared_3697_; uint8_t v_isSharedCheck_3701_; 
v_a_3694_ = lean_ctor_get(v___x_3687_, 0);
v_isSharedCheck_3701_ = !lean_is_exclusive(v___x_3687_);
if (v_isSharedCheck_3701_ == 0)
{
v___x_3696_ = v___x_3687_;
v_isShared_3697_ = v_isSharedCheck_3701_;
goto v_resetjp_3695_;
}
else
{
lean_inc(v_a_3694_);
lean_dec(v___x_3687_);
v___x_3696_ = lean_box(0);
v_isShared_3697_ = v_isSharedCheck_3701_;
goto v_resetjp_3695_;
}
v_resetjp_3695_:
{
lean_object* v___x_3699_; 
if (v_isShared_3697_ == 0)
{
v___x_3699_ = v___x_3696_;
goto v_reusejp_3698_;
}
else
{
lean_object* v_reuseFailAlloc_3700_; 
v_reuseFailAlloc_3700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3700_, 0, v_a_3694_);
v___x_3699_ = v_reuseFailAlloc_3700_;
goto v_reusejp_3698_;
}
v_reusejp_3698_:
{
return v___x_3699_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro___boxed(lean_object* v_x_3702_, lean_object* v_a_3703_, lean_object* v_a_3704_, lean_object* v_a_3705_, lean_object* v_a_3706_, lean_object* v_a_3707_, lean_object* v_a_3708_, lean_object* v_a_3709_, lean_object* v_a_3710_, lean_object* v_a_3711_){
_start:
{
lean_object* v_res_3712_; 
v_res_3712_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro(v_x_3702_, v_a_3703_, v_a_3704_, v_a_3705_, v_a_3706_, v_a_3707_, v_a_3708_, v_a_3709_, v_a_3710_);
lean_dec(v_a_3710_);
lean_dec_ref(v_a_3709_);
lean_dec(v_a_3708_);
lean_dec_ref(v_a_3707_);
lean_dec(v_a_3706_);
lean_dec_ref(v_a_3705_);
lean_dec(v_a_3704_);
lean_dec_ref(v_a_3703_);
return v_res_3712_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg(lean_object* v_e_3720_, lean_object* v_a_3721_){
_start:
{
lean_object* v___x_3723_; 
v___x_3723_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_3720_, v_a_3721_);
if (lean_obj_tag(v___x_3723_) == 0)
{
lean_object* v_a_3724_; lean_object* v___x_3726_; uint8_t v_isShared_3727_; uint8_t v_isSharedCheck_3755_; 
v_a_3724_ = lean_ctor_get(v___x_3723_, 0);
v_isSharedCheck_3755_ = !lean_is_exclusive(v___x_3723_);
if (v_isSharedCheck_3755_ == 0)
{
v___x_3726_ = v___x_3723_;
v_isShared_3727_ = v_isSharedCheck_3755_;
goto v_resetjp_3725_;
}
else
{
lean_inc(v_a_3724_);
lean_dec(v___x_3723_);
v___x_3726_ = lean_box(0);
v_isShared_3727_ = v_isSharedCheck_3755_;
goto v_resetjp_3725_;
}
v_resetjp_3725_:
{
lean_object* v___x_3728_; lean_object* v___x_3729_; uint8_t v___x_3730_; 
v___x_3728_ = l_Lean_Expr_getAppFn(v_a_3724_);
v___x_3729_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg___closed__2));
v___x_3730_ = l_Lean_Expr_isConstOf(v___x_3728_, v___x_3729_);
lean_dec_ref(v___x_3728_);
if (v___x_3730_ == 0)
{
lean_object* v___x_3731_; lean_object* v___x_3733_; 
lean_dec(v_a_3724_);
v___x_3731_ = lean_box(0);
if (v_isShared_3727_ == 0)
{
lean_ctor_set(v___x_3726_, 0, v___x_3731_);
v___x_3733_ = v___x_3726_;
goto v_reusejp_3732_;
}
else
{
lean_object* v_reuseFailAlloc_3734_; 
v_reuseFailAlloc_3734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3734_, 0, v___x_3731_);
v___x_3733_ = v_reuseFailAlloc_3734_;
goto v_reusejp_3732_;
}
v_reusejp_3732_:
{
return v___x_3733_;
}
}
else
{
lean_object* v_dummy_3735_; lean_object* v_nargs_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; uint8_t v___x_3743_; 
v_dummy_3735_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__5, &l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__5_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__5);
v_nargs_3736_ = l_Lean_Expr_getAppNumArgs(v_a_3724_);
lean_inc(v_nargs_3736_);
v___x_3737_ = lean_mk_array(v_nargs_3736_, v_dummy_3735_);
v___x_3738_ = lean_unsigned_to_nat(1u);
v___x_3739_ = lean_nat_sub(v_nargs_3736_, v___x_3738_);
lean_dec(v_nargs_3736_);
v___x_3740_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_3724_, v___x_3737_, v___x_3739_);
v___x_3741_ = lean_array_get_size(v___x_3740_);
v___x_3742_ = lean_unsigned_to_nat(3u);
v___x_3743_ = lean_nat_dec_lt(v___x_3741_, v___x_3742_);
if (v___x_3743_ == 0)
{
lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3749_; 
v___x_3744_ = l_Lean_instInhabitedExpr;
v___x_3745_ = lean_unsigned_to_nat(2u);
v___x_3746_ = lean_array_get(v___x_3744_, v___x_3740_, v___x_3745_);
lean_dec_ref(v___x_3740_);
v___x_3747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3747_, 0, v___x_3746_);
if (v_isShared_3727_ == 0)
{
lean_ctor_set(v___x_3726_, 0, v___x_3747_);
v___x_3749_ = v___x_3726_;
goto v_reusejp_3748_;
}
else
{
lean_object* v_reuseFailAlloc_3750_; 
v_reuseFailAlloc_3750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3750_, 0, v___x_3747_);
v___x_3749_ = v_reuseFailAlloc_3750_;
goto v_reusejp_3748_;
}
v_reusejp_3748_:
{
return v___x_3749_;
}
}
else
{
lean_object* v___x_3751_; lean_object* v___x_3753_; 
lean_dec_ref(v___x_3740_);
v___x_3751_ = lean_box(0);
if (v_isShared_3727_ == 0)
{
lean_ctor_set(v___x_3726_, 0, v___x_3751_);
v___x_3753_ = v___x_3726_;
goto v_reusejp_3752_;
}
else
{
lean_object* v_reuseFailAlloc_3754_; 
v_reuseFailAlloc_3754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3754_, 0, v___x_3751_);
v___x_3753_ = v_reuseFailAlloc_3754_;
goto v_reusejp_3752_;
}
v_reusejp_3752_:
{
return v___x_3753_;
}
}
}
}
}
else
{
lean_object* v_a_3756_; lean_object* v___x_3758_; uint8_t v_isShared_3759_; uint8_t v_isSharedCheck_3763_; 
v_a_3756_ = lean_ctor_get(v___x_3723_, 0);
v_isSharedCheck_3763_ = !lean_is_exclusive(v___x_3723_);
if (v_isSharedCheck_3763_ == 0)
{
v___x_3758_ = v___x_3723_;
v_isShared_3759_ = v_isSharedCheck_3763_;
goto v_resetjp_3757_;
}
else
{
lean_inc(v_a_3756_);
lean_dec(v___x_3723_);
v___x_3758_ = lean_box(0);
v_isShared_3759_ = v_isSharedCheck_3763_;
goto v_resetjp_3757_;
}
v_resetjp_3757_:
{
lean_object* v___x_3761_; 
if (v_isShared_3759_ == 0)
{
v___x_3761_ = v___x_3758_;
goto v_reusejp_3760_;
}
else
{
lean_object* v_reuseFailAlloc_3762_; 
v_reuseFailAlloc_3762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3762_, 0, v_a_3756_);
v___x_3761_ = v_reuseFailAlloc_3762_;
goto v_reusejp_3760_;
}
v_reusejp_3760_:
{
return v___x_3761_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg___boxed(lean_object* v_e_3764_, lean_object* v_a_3765_, lean_object* v_a_3766_){
_start:
{
lean_object* v_res_3767_; 
v_res_3767_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg(v_e_3764_, v_a_3765_);
lean_dec(v_a_3765_);
return v_res_3767_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp(lean_object* v_e_3768_, lean_object* v_a_3769_, lean_object* v_a_3770_, lean_object* v_a_3771_, lean_object* v_a_3772_){
_start:
{
lean_object* v___x_3774_; 
v___x_3774_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg(v_e_3768_, v_a_3770_);
return v___x_3774_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___boxed(lean_object* v_e_3775_, lean_object* v_a_3776_, lean_object* v_a_3777_, lean_object* v_a_3778_, lean_object* v_a_3779_, lean_object* v_a_3780_){
_start:
{
lean_object* v_res_3781_; 
v_res_3781_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp(v_e_3775_, v_a_3776_, v_a_3777_, v_a_3778_, v_a_3779_);
lean_dec(v_a_3779_);
lean_dec_ref(v_a_3778_);
lean_dec(v_a_3777_);
lean_dec_ref(v_a_3776_);
return v_res_3781_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_applyRflAndAndIntro(lean_object* v_mvar_3782_, lean_object* v_a_3783_, lean_object* v_a_3784_, lean_object* v_a_3785_, lean_object* v_a_3786_){
_start:
{
lean_object* v___y_3789_; lean_object* v___y_3790_; lean_object* v___y_3791_; lean_object* v___y_3792_; lean_object* v___y_3793_; lean_object* v_a_3838_; lean_object* v___y_3850_; lean_object* v___x_3871_; 
lean_inc(v_mvar_3782_);
v___x_3871_ = l_Lean_MVarId_getType(v_mvar_3782_, v_a_3783_, v_a_3784_, v_a_3785_, v_a_3786_);
if (lean_obj_tag(v___x_3871_) == 0)
{
lean_object* v_a_3872_; lean_object* v___x_3873_; 
v_a_3872_ = lean_ctor_get(v___x_3871_, 0);
lean_inc(v_a_3872_);
lean_dec_ref_known(v___x_3871_, 1);
v___x_3873_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_3872_, v_a_3784_);
v___y_3850_ = v___x_3873_;
goto v___jp_3849_;
}
else
{
v___y_3850_ = v___x_3871_;
goto v___jp_3849_;
}
v___jp_3788_:
{
lean_object* v___x_3794_; uint8_t v___x_3795_; 
v___x_3794_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__1));
v___x_3795_ = l_Lean_Expr_isAppOf(v___y_3789_, v___x_3794_);
if (v___x_3795_ == 0)
{
lean_object* v___x_3796_; lean_object* v___x_3797_; uint8_t v___x_3798_; 
v___x_3796_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__3));
v___x_3797_ = lean_unsigned_to_nat(2u);
v___x_3798_ = l_Lean_Expr_isAppOfArity(v___y_3789_, v___x_3796_, v___x_3797_);
if (v___x_3798_ == 0)
{
lean_object* v___x_3799_; 
lean_inc(v_mvar_3782_);
v___x_3799_ = l_Lean_MVarId_setType___redArg(v_mvar_3782_, v___y_3789_, v___y_3791_);
if (lean_obj_tag(v___x_3799_) == 0)
{
lean_object* v___x_3800_; 
lean_dec_ref_known(v___x_3799_, 1);
v___x_3800_ = l_Lean_MVarId_applyRfl(v_mvar_3782_, v___y_3790_, v___y_3791_, v___y_3792_, v___y_3793_);
return v___x_3800_;
}
else
{
lean_dec(v_mvar_3782_);
return v___x_3799_;
}
}
else
{
lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; uint8_t v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; 
v___x_3801_ = l_Lean_Expr_appFn_x21(v___y_3789_);
v___x_3802_ = l_Lean_Expr_appArg_x21(v___x_3801_);
lean_dec_ref(v___x_3801_);
lean_inc_ref(v___x_3802_);
v___x_3803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3803_, 0, v___x_3802_);
v___x_3804_ = 0;
v___x_3805_ = lean_box(0);
v___x_3806_ = l_Lean_Meta_mkFreshExprMVar(v___x_3803_, v___x_3804_, v___x_3805_, v___y_3790_, v___y_3791_, v___y_3792_, v___y_3793_);
if (lean_obj_tag(v___x_3806_) == 0)
{
lean_object* v_a_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; 
v_a_3807_ = lean_ctor_get(v___x_3806_, 0);
lean_inc(v_a_3807_);
lean_dec_ref_known(v___x_3806_, 1);
v___x_3808_ = l_Lean_Expr_appArg_x21(v___y_3789_);
lean_dec_ref(v___y_3789_);
lean_inc_ref(v___x_3808_);
v___x_3809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3809_, 0, v___x_3808_);
v___x_3810_ = l_Lean_Meta_mkFreshExprMVar(v___x_3809_, v___x_3804_, v___x_3805_, v___y_3790_, v___y_3791_, v___y_3792_, v___y_3793_);
if (lean_obj_tag(v___x_3810_) == 0)
{
lean_object* v_a_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; 
v_a_3811_ = lean_ctor_get(v___x_3810_, 0);
lean_inc(v_a_3811_);
lean_dec_ref_known(v___x_3810_, 1);
v___x_3812_ = l_Lean_Expr_mvarId_x21(v_a_3807_);
v___x_3813_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_applyRflAndAndIntro(v___x_3812_, v___y_3790_, v___y_3791_, v___y_3792_, v___y_3793_);
if (lean_obj_tag(v___x_3813_) == 0)
{
lean_object* v___x_3814_; lean_object* v___x_3815_; 
lean_dec_ref_known(v___x_3813_, 1);
v___x_3814_ = l_Lean_Expr_mvarId_x21(v_a_3811_);
v___x_3815_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_applyRflAndAndIntro(v___x_3814_, v___y_3790_, v___y_3791_, v___y_3792_, v___y_3793_);
if (lean_obj_tag(v___x_3815_) == 0)
{
lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; 
lean_dec_ref_known(v___x_3815_, 1);
v___x_3816_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__5, &l_Lean_MVarId_applyRflAndAndIntro___closed__5_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__5);
v___x_3817_ = l_Lean_mkApp4(v___x_3816_, v___x_3802_, v___x_3808_, v_a_3807_, v_a_3811_);
v___x_3818_ = l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg(v_mvar_3782_, v___x_3817_, v___y_3791_);
return v___x_3818_;
}
else
{
lean_dec(v_a_3811_);
lean_dec_ref(v___x_3808_);
lean_dec(v_a_3807_);
lean_dec_ref(v___x_3802_);
lean_dec(v_mvar_3782_);
return v___x_3815_;
}
}
else
{
lean_dec(v_a_3811_);
lean_dec_ref(v___x_3808_);
lean_dec(v_a_3807_);
lean_dec_ref(v___x_3802_);
lean_dec(v_mvar_3782_);
return v___x_3813_;
}
}
else
{
lean_object* v_a_3819_; lean_object* v___x_3821_; uint8_t v_isShared_3822_; uint8_t v_isSharedCheck_3826_; 
lean_dec_ref(v___x_3808_);
lean_dec(v_a_3807_);
lean_dec_ref(v___x_3802_);
lean_dec(v_mvar_3782_);
v_a_3819_ = lean_ctor_get(v___x_3810_, 0);
v_isSharedCheck_3826_ = !lean_is_exclusive(v___x_3810_);
if (v_isSharedCheck_3826_ == 0)
{
v___x_3821_ = v___x_3810_;
v_isShared_3822_ = v_isSharedCheck_3826_;
goto v_resetjp_3820_;
}
else
{
lean_inc(v_a_3819_);
lean_dec(v___x_3810_);
v___x_3821_ = lean_box(0);
v_isShared_3822_ = v_isSharedCheck_3826_;
goto v_resetjp_3820_;
}
v_resetjp_3820_:
{
lean_object* v___x_3824_; 
if (v_isShared_3822_ == 0)
{
v___x_3824_ = v___x_3821_;
goto v_reusejp_3823_;
}
else
{
lean_object* v_reuseFailAlloc_3825_; 
v_reuseFailAlloc_3825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3825_, 0, v_a_3819_);
v___x_3824_ = v_reuseFailAlloc_3825_;
goto v_reusejp_3823_;
}
v_reusejp_3823_:
{
return v___x_3824_;
}
}
}
}
else
{
lean_object* v_a_3827_; lean_object* v___x_3829_; uint8_t v_isShared_3830_; uint8_t v_isSharedCheck_3834_; 
lean_dec_ref(v___x_3802_);
lean_dec_ref(v___y_3789_);
lean_dec(v_mvar_3782_);
v_a_3827_ = lean_ctor_get(v___x_3806_, 0);
v_isSharedCheck_3834_ = !lean_is_exclusive(v___x_3806_);
if (v_isSharedCheck_3834_ == 0)
{
v___x_3829_ = v___x_3806_;
v_isShared_3830_ = v_isSharedCheck_3834_;
goto v_resetjp_3828_;
}
else
{
lean_inc(v_a_3827_);
lean_dec(v___x_3806_);
v___x_3829_ = lean_box(0);
v_isShared_3830_ = v_isSharedCheck_3834_;
goto v_resetjp_3828_;
}
v_resetjp_3828_:
{
lean_object* v___x_3832_; 
if (v_isShared_3830_ == 0)
{
v___x_3832_ = v___x_3829_;
goto v_reusejp_3831_;
}
else
{
lean_object* v_reuseFailAlloc_3833_; 
v_reuseFailAlloc_3833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3833_, 0, v_a_3827_);
v___x_3832_ = v_reuseFailAlloc_3833_;
goto v_reusejp_3831_;
}
v_reusejp_3831_:
{
return v___x_3832_;
}
}
}
}
}
else
{
lean_object* v___x_3835_; lean_object* v___x_3836_; 
lean_dec_ref(v___y_3789_);
v___x_3835_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__7, &l_Lean_MVarId_applyRflAndAndIntro___closed__7_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__7);
v___x_3836_ = l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg(v_mvar_3782_, v___x_3835_, v___y_3791_);
return v___x_3836_;
}
}
v___jp_3837_:
{
lean_object* v_options_3839_; uint8_t v_hasTrace_3840_; 
v_options_3839_ = lean_ctor_get(v_a_3785_, 2);
v_hasTrace_3840_ = lean_ctor_get_uint8(v_options_3839_, sizeof(void*)*1);
if (v_hasTrace_3840_ == 0)
{
v___y_3789_ = v_a_3838_;
v___y_3790_ = v_a_3783_;
v___y_3791_ = v_a_3784_;
v___y_3792_ = v_a_3785_;
v___y_3793_ = v_a_3786_;
goto v___jp_3788_;
}
else
{
lean_object* v_inheritedTraceOptions_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; uint8_t v___x_3844_; 
v_inheritedTraceOptions_3841_ = lean_ctor_get(v_a_3785_, 13);
v___x_3842_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__10));
v___x_3843_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__13, &l_Lean_MVarId_applyRflAndAndIntro___closed__13_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__13);
v___x_3844_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3841_, v_options_3839_, v___x_3843_);
if (v___x_3844_ == 0)
{
v___y_3789_ = v_a_3838_;
v___y_3790_ = v_a_3783_;
v___y_3791_ = v_a_3784_;
v___y_3792_ = v_a_3785_;
v___y_3793_ = v_a_3786_;
goto v___jp_3788_;
}
else
{
lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; 
v___x_3845_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__15, &l_Lean_MVarId_applyRflAndAndIntro___closed__15_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__15);
lean_inc_ref(v_a_3838_);
v___x_3846_ = l_Lean_MessageData_ofExpr(v_a_3838_);
v___x_3847_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3847_, 0, v___x_3845_);
lean_ctor_set(v___x_3847_, 1, v___x_3846_);
v___x_3848_ = l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1(v___x_3842_, v___x_3847_, v_a_3783_, v_a_3784_, v_a_3785_, v_a_3786_);
if (lean_obj_tag(v___x_3848_) == 0)
{
lean_dec_ref_known(v___x_3848_, 1);
v___y_3789_ = v_a_3838_;
v___y_3790_ = v_a_3783_;
v___y_3791_ = v_a_3784_;
v___y_3792_ = v_a_3785_;
v___y_3793_ = v_a_3786_;
goto v___jp_3788_;
}
else
{
lean_dec_ref(v_a_3838_);
lean_dec(v_mvar_3782_);
return v___x_3848_;
}
}
}
}
v___jp_3849_:
{
if (lean_obj_tag(v___y_3850_) == 0)
{
lean_object* v_a_3851_; lean_object* v___x_3852_; 
v_a_3851_ = lean_ctor_get(v___y_3850_, 0);
lean_inc_n(v_a_3851_, 2);
lean_dec_ref_known(v___y_3850_, 1);
v___x_3852_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Internal_Do_ProofMode_extractPureProp___redArg(v_a_3851_, v_a_3784_);
if (lean_obj_tag(v___x_3852_) == 0)
{
lean_object* v_a_3853_; 
v_a_3853_ = lean_ctor_get(v___x_3852_, 0);
lean_inc(v_a_3853_);
lean_dec_ref_known(v___x_3852_, 1);
if (lean_obj_tag(v_a_3853_) == 0)
{
v_a_3838_ = v_a_3851_;
goto v___jp_3837_;
}
else
{
lean_object* v_val_3854_; 
lean_dec(v_a_3851_);
v_val_3854_ = lean_ctor_get(v_a_3853_, 0);
lean_inc(v_val_3854_);
lean_dec_ref_known(v_a_3853_, 1);
v_a_3838_ = v_val_3854_;
goto v___jp_3837_;
}
}
else
{
lean_object* v_a_3855_; lean_object* v___x_3857_; uint8_t v_isShared_3858_; uint8_t v_isSharedCheck_3862_; 
lean_dec(v_a_3851_);
lean_dec(v_mvar_3782_);
v_a_3855_ = lean_ctor_get(v___x_3852_, 0);
v_isSharedCheck_3862_ = !lean_is_exclusive(v___x_3852_);
if (v_isSharedCheck_3862_ == 0)
{
v___x_3857_ = v___x_3852_;
v_isShared_3858_ = v_isSharedCheck_3862_;
goto v_resetjp_3856_;
}
else
{
lean_inc(v_a_3855_);
lean_dec(v___x_3852_);
v___x_3857_ = lean_box(0);
v_isShared_3858_ = v_isSharedCheck_3862_;
goto v_resetjp_3856_;
}
v_resetjp_3856_:
{
lean_object* v___x_3860_; 
if (v_isShared_3858_ == 0)
{
v___x_3860_ = v___x_3857_;
goto v_reusejp_3859_;
}
else
{
lean_object* v_reuseFailAlloc_3861_; 
v_reuseFailAlloc_3861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3861_, 0, v_a_3855_);
v___x_3860_ = v_reuseFailAlloc_3861_;
goto v_reusejp_3859_;
}
v_reusejp_3859_:
{
return v___x_3860_;
}
}
}
}
else
{
lean_object* v_a_3863_; lean_object* v___x_3865_; uint8_t v_isShared_3866_; uint8_t v_isSharedCheck_3870_; 
lean_dec(v_mvar_3782_);
v_a_3863_ = lean_ctor_get(v___y_3850_, 0);
v_isSharedCheck_3870_ = !lean_is_exclusive(v___y_3850_);
if (v_isSharedCheck_3870_ == 0)
{
v___x_3865_ = v___y_3850_;
v_isShared_3866_ = v_isSharedCheck_3870_;
goto v_resetjp_3864_;
}
else
{
lean_inc(v_a_3863_);
lean_dec(v___y_3850_);
v___x_3865_ = lean_box(0);
v_isShared_3866_ = v_isSharedCheck_3870_;
goto v_resetjp_3864_;
}
v_resetjp_3864_:
{
lean_object* v___x_3868_; 
if (v_isShared_3866_ == 0)
{
v___x_3868_ = v___x_3865_;
goto v_reusejp_3867_;
}
else
{
lean_object* v_reuseFailAlloc_3869_; 
v_reuseFailAlloc_3869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3869_, 0, v_a_3863_);
v___x_3868_ = v_reuseFailAlloc_3869_;
goto v_reusejp_3867_;
}
v_reusejp_3867_:
{
return v___x_3868_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_applyRflAndAndIntro___boxed(lean_object* v_mvar_3874_, lean_object* v_a_3875_, lean_object* v_a_3876_, lean_object* v_a_3877_, lean_object* v_a_3878_, lean_object* v_a_3879_){
_start:
{
lean_object* v_res_3880_; 
v_res_3880_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_applyRflAndAndIntro(v_mvar_3874_, v_a_3875_, v_a_3876_, v_a_3877_, v_a_3878_);
lean_dec(v_a_3878_);
lean_dec_ref(v_a_3877_);
lean_dec(v_a_3876_);
lean_dec_ref(v_a_3875_);
return v_res_3880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___redArg(lean_object* v_goal_3881_, lean_object* v_k_3882_, lean_object* v___y_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_){
_start:
{
lean_object* v___x_3888_; uint8_t v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; 
v___x_3888_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1);
v___x_3889_ = 0;
v___x_3890_ = lean_box(0);
v___x_3891_ = l_Lean_Meta_mkFreshExprMVar(v___x_3888_, v___x_3889_, v___x_3890_, v___y_3883_, v___y_3884_, v___y_3885_, v___y_3886_);
if (lean_obj_tag(v___x_3891_) == 0)
{
lean_object* v_a_3892_; lean_object* v_u_3893_; lean_object* v_l_3894_; lean_object* v_cl_3895_; lean_object* v_hyps_3896_; lean_object* v_target_3897_; lean_object* v___x_3898_; lean_object* v___y_3900_; lean_object* v___x_3946_; 
v_a_3892_ = lean_ctor_get(v___x_3891_, 0);
lean_inc(v_a_3892_);
lean_dec_ref_known(v___x_3891_, 1);
v_u_3893_ = lean_ctor_get(v_goal_3881_, 0);
lean_inc(v_u_3893_);
v_l_3894_ = lean_ctor_get(v_goal_3881_, 1);
lean_inc_ref(v_l_3894_);
v_cl_3895_ = lean_ctor_get(v_goal_3881_, 2);
lean_inc_ref(v_cl_3895_);
v_hyps_3896_ = lean_ctor_get(v_goal_3881_, 3);
lean_inc_ref(v_hyps_3896_);
v_target_3897_ = lean_ctor_get(v_goal_3881_, 4);
lean_inc_ref(v_target_3897_);
lean_dec_ref(v_goal_3881_);
v___x_3898_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureCore___redArg___lam__8___closed__2));
v___x_3946_ = l_Lean_Level_dec(v_u_3893_);
if (lean_obj_tag(v___x_3946_) == 0)
{
v___y_3900_ = v_u_3893_;
goto v___jp_3899_;
}
else
{
lean_object* v_val_3947_; 
lean_dec(v_u_3893_);
v_val_3947_ = lean_ctor_get(v___x_3946_, 0);
lean_inc(v_val_3947_);
lean_dec_ref_known(v___x_3946_, 1);
v___y_3900_ = v_val_3947_;
goto v___jp_3899_;
}
v___jp_3899_:
{
lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; 
v___x_3901_ = lean_box(0);
v___x_3902_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3902_, 0, v___y_3900_);
lean_ctor_set(v___x_3902_, 1, v___x_3901_);
lean_inc_ref(v___x_3902_);
v___x_3903_ = l_Lean_mkConst(v___x_3898_, v___x_3902_);
lean_inc(v_a_3892_);
lean_inc_ref(v_target_3897_);
lean_inc_ref(v_cl_3895_);
lean_inc_ref(v_l_3894_);
v___x_3904_ = l_Lean_mkApp4(v___x_3903_, v_l_3894_, v_cl_3895_, v_target_3897_, v_a_3892_);
v___x_3905_ = lean_box(0);
v___x_3906_ = l_Lean_Meta_synthInstance(v___x_3904_, v___x_3905_, v___y_3883_, v___y_3884_, v___y_3885_, v___y_3886_);
if (lean_obj_tag(v___x_3906_) == 0)
{
lean_object* v_a_3907_; lean_object* v___x_3908_; 
v_a_3907_ = lean_ctor_get(v___x_3906_, 0);
lean_inc(v_a_3907_);
lean_dec_ref_known(v___x_3906_, 1);
lean_inc(v___y_3886_);
lean_inc_ref(v___y_3885_);
lean_inc(v___y_3884_);
lean_inc_ref(v___y_3883_);
lean_inc(v_a_3892_);
v___x_3908_ = lean_apply_6(v_k_3882_, v_a_3892_, v___y_3883_, v___y_3884_, v___y_3885_, v___y_3886_, lean_box(0));
if (lean_obj_tag(v___x_3908_) == 0)
{
lean_object* v_a_3909_; 
v_a_3909_ = lean_ctor_get(v___x_3908_, 0);
lean_inc(v_a_3909_);
if (lean_obj_tag(v_a_3909_) == 0)
{
lean_dec(v_a_3907_);
lean_dec_ref_known(v___x_3902_, 2);
lean_dec_ref(v_target_3897_);
lean_dec_ref(v_hyps_3896_);
lean_dec_ref(v_cl_3895_);
lean_dec_ref(v_l_3894_);
lean_dec(v_a_3892_);
return v___x_3908_;
}
else
{
lean_object* v___x_3911_; uint8_t v_isShared_3912_; uint8_t v_isSharedCheck_3936_; 
v_isSharedCheck_3936_ = !lean_is_exclusive(v___x_3908_);
if (v_isSharedCheck_3936_ == 0)
{
lean_object* v_unused_3937_; 
v_unused_3937_ = lean_ctor_get(v___x_3908_, 0);
lean_dec(v_unused_3937_);
v___x_3911_ = v___x_3908_;
v_isShared_3912_ = v_isSharedCheck_3936_;
goto v_resetjp_3910_;
}
else
{
lean_dec(v___x_3908_);
v___x_3911_ = lean_box(0);
v_isShared_3912_ = v_isSharedCheck_3936_;
goto v_resetjp_3910_;
}
v_resetjp_3910_:
{
lean_object* v_val_3913_; lean_object* v___x_3915_; uint8_t v_isShared_3916_; uint8_t v_isSharedCheck_3935_; 
v_val_3913_ = lean_ctor_get(v_a_3909_, 0);
v_isSharedCheck_3935_ = !lean_is_exclusive(v_a_3909_);
if (v_isSharedCheck_3935_ == 0)
{
v___x_3915_ = v_a_3909_;
v_isShared_3916_ = v_isSharedCheck_3935_;
goto v_resetjp_3914_;
}
else
{
lean_inc(v_val_3913_);
lean_dec(v_a_3909_);
v___x_3915_ = lean_box(0);
v_isShared_3916_ = v_isSharedCheck_3935_;
goto v_resetjp_3914_;
}
v_resetjp_3914_:
{
lean_object* v_fst_3917_; lean_object* v_snd_3918_; lean_object* v___x_3920_; uint8_t v_isShared_3921_; uint8_t v_isSharedCheck_3934_; 
v_fst_3917_ = lean_ctor_get(v_val_3913_, 0);
v_snd_3918_ = lean_ctor_get(v_val_3913_, 1);
v_isSharedCheck_3934_ = !lean_is_exclusive(v_val_3913_);
if (v_isSharedCheck_3934_ == 0)
{
v___x_3920_ = v_val_3913_;
v_isShared_3921_ = v_isSharedCheck_3934_;
goto v_resetjp_3919_;
}
else
{
lean_inc(v_snd_3918_);
lean_inc(v_fst_3917_);
lean_dec(v_val_3913_);
v___x_3920_ = lean_box(0);
v_isShared_3921_ = v_isSharedCheck_3934_;
goto v_resetjp_3919_;
}
v_resetjp_3919_:
{
lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v_prf_3924_; lean_object* v___x_3926_; 
v___x_3922_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0));
v___x_3923_ = l_Lean_mkConst(v___x_3922_, v___x_3902_);
v_prf_3924_ = l_Lean_mkApp7(v___x_3923_, v_l_3894_, v_cl_3895_, v_hyps_3896_, v_target_3897_, v_a_3892_, v_a_3907_, v_snd_3918_);
if (v_isShared_3921_ == 0)
{
lean_ctor_set(v___x_3920_, 1, v_prf_3924_);
v___x_3926_ = v___x_3920_;
goto v_reusejp_3925_;
}
else
{
lean_object* v_reuseFailAlloc_3933_; 
v_reuseFailAlloc_3933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3933_, 0, v_fst_3917_);
lean_ctor_set(v_reuseFailAlloc_3933_, 1, v_prf_3924_);
v___x_3926_ = v_reuseFailAlloc_3933_;
goto v_reusejp_3925_;
}
v_reusejp_3925_:
{
lean_object* v___x_3928_; 
if (v_isShared_3916_ == 0)
{
lean_ctor_set(v___x_3915_, 0, v___x_3926_);
v___x_3928_ = v___x_3915_;
goto v_reusejp_3927_;
}
else
{
lean_object* v_reuseFailAlloc_3932_; 
v_reuseFailAlloc_3932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3932_, 0, v___x_3926_);
v___x_3928_ = v_reuseFailAlloc_3932_;
goto v_reusejp_3927_;
}
v_reusejp_3927_:
{
lean_object* v___x_3930_; 
if (v_isShared_3912_ == 0)
{
lean_ctor_set(v___x_3911_, 0, v___x_3928_);
v___x_3930_ = v___x_3911_;
goto v_reusejp_3929_;
}
else
{
lean_object* v_reuseFailAlloc_3931_; 
v_reuseFailAlloc_3931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3931_, 0, v___x_3928_);
v___x_3930_ = v_reuseFailAlloc_3931_;
goto v_reusejp_3929_;
}
v_reusejp_3929_:
{
return v___x_3930_;
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
lean_dec(v_a_3907_);
lean_dec_ref_known(v___x_3902_, 2);
lean_dec_ref(v_target_3897_);
lean_dec_ref(v_hyps_3896_);
lean_dec_ref(v_cl_3895_);
lean_dec_ref(v_l_3894_);
lean_dec(v_a_3892_);
return v___x_3908_;
}
}
else
{
lean_object* v_a_3938_; lean_object* v___x_3940_; uint8_t v_isShared_3941_; uint8_t v_isSharedCheck_3945_; 
lean_dec_ref_known(v___x_3902_, 2);
lean_dec_ref(v_target_3897_);
lean_dec_ref(v_hyps_3896_);
lean_dec_ref(v_cl_3895_);
lean_dec_ref(v_l_3894_);
lean_dec(v_a_3892_);
lean_dec_ref(v_k_3882_);
v_a_3938_ = lean_ctor_get(v___x_3906_, 0);
v_isSharedCheck_3945_ = !lean_is_exclusive(v___x_3906_);
if (v_isSharedCheck_3945_ == 0)
{
v___x_3940_ = v___x_3906_;
v_isShared_3941_ = v_isSharedCheck_3945_;
goto v_resetjp_3939_;
}
else
{
lean_inc(v_a_3938_);
lean_dec(v___x_3906_);
v___x_3940_ = lean_box(0);
v_isShared_3941_ = v_isSharedCheck_3945_;
goto v_resetjp_3939_;
}
v_resetjp_3939_:
{
lean_object* v___x_3943_; 
if (v_isShared_3941_ == 0)
{
v___x_3943_ = v___x_3940_;
goto v_reusejp_3942_;
}
else
{
lean_object* v_reuseFailAlloc_3944_; 
v_reuseFailAlloc_3944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3944_, 0, v_a_3938_);
v___x_3943_ = v_reuseFailAlloc_3944_;
goto v_reusejp_3942_;
}
v_reusejp_3942_:
{
return v___x_3943_;
}
}
}
}
}
else
{
lean_object* v_a_3948_; lean_object* v___x_3950_; uint8_t v_isShared_3951_; uint8_t v_isSharedCheck_3955_; 
lean_dec_ref(v_k_3882_);
lean_dec_ref(v_goal_3881_);
v_a_3948_ = lean_ctor_get(v___x_3891_, 0);
v_isSharedCheck_3955_ = !lean_is_exclusive(v___x_3891_);
if (v_isSharedCheck_3955_ == 0)
{
v___x_3950_ = v___x_3891_;
v_isShared_3951_ = v_isSharedCheck_3955_;
goto v_resetjp_3949_;
}
else
{
lean_inc(v_a_3948_);
lean_dec(v___x_3891_);
v___x_3950_ = lean_box(0);
v_isShared_3951_ = v_isSharedCheck_3955_;
goto v_resetjp_3949_;
}
v_resetjp_3949_:
{
lean_object* v___x_3953_; 
if (v_isShared_3951_ == 0)
{
v___x_3953_ = v___x_3950_;
goto v_reusejp_3952_;
}
else
{
lean_object* v_reuseFailAlloc_3954_; 
v_reuseFailAlloc_3954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3954_, 0, v_a_3948_);
v___x_3953_ = v_reuseFailAlloc_3954_;
goto v_reusejp_3952_;
}
v_reusejp_3952_:
{
return v___x_3953_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___redArg___boxed(lean_object* v_goal_3956_, lean_object* v_k_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_){
_start:
{
lean_object* v_res_3963_; 
v_res_3963_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___redArg(v_goal_3956_, v_k_3957_, v___y_3958_, v___y_3959_, v___y_3960_, v___y_3961_);
lean_dec(v___y_3961_);
lean_dec_ref(v___y_3960_);
lean_dec(v___y_3959_);
lean_dec_ref(v___y_3958_);
return v_res_3963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(lean_object* v_00_u03b1_3964_, lean_object* v_goal_3965_, lean_object* v_k_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_){
_start:
{
lean_object* v___x_3972_; 
v___x_3972_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___redArg(v_goal_3965_, v_k_3966_, v___y_3967_, v___y_3968_, v___y_3969_, v___y_3970_);
return v___x_3972_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___boxed(lean_object* v_00_u03b1_3973_, lean_object* v_goal_3974_, lean_object* v_k_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_){
_start:
{
lean_object* v_res_3981_; 
v_res_3981_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(v_00_u03b1_3973_, v_goal_3974_, v_k_3975_, v___y_3976_, v___y_3977_, v___y_3978_, v___y_3979_);
lean_dec(v___y_3979_);
lean_dec_ref(v___y_3978_);
lean_dec(v___y_3977_);
lean_dec_ref(v___y_3976_);
return v_res_3981_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1(lean_object* v___f_3982_, lean_object* v_cls_3983_, lean_object* v_00_u03c6_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_){
_start:
{
lean_object* v___y_3991_; lean_object* v___y_3997_; lean_object* v___y_3998_; lean_object* v___y_3999_; lean_object* v___y_4000_; lean_object* v___x_4042_; 
lean_inc(v___y_3988_);
lean_inc_ref(v___y_3987_);
lean_inc(v___y_3986_);
lean_inc_ref(v___y_3985_);
v___x_4042_ = lean_apply_5(v___f_3982_, v___y_3985_, v___y_3986_, v___y_3987_, v___y_3988_, lean_box(0));
if (lean_obj_tag(v___x_4042_) == 0)
{
lean_object* v_a_4043_; lean_object* v___x_4045_; uint8_t v_isShared_4046_; uint8_t v_isSharedCheck_4065_; 
v_a_4043_ = lean_ctor_get(v___x_4042_, 0);
v_isSharedCheck_4065_ = !lean_is_exclusive(v___x_4042_);
if (v_isSharedCheck_4065_ == 0)
{
v___x_4045_ = v___x_4042_;
v_isShared_4046_ = v_isSharedCheck_4065_;
goto v_resetjp_4044_;
}
else
{
lean_inc(v_a_4043_);
lean_dec(v___x_4042_);
v___x_4045_ = lean_box(0);
v_isShared_4046_ = v_isSharedCheck_4065_;
goto v_resetjp_4044_;
}
v_resetjp_4044_:
{
if (lean_obj_tag(v_a_4043_) == 0)
{
lean_object* v___x_4047_; lean_object* v___x_4049_; 
lean_dec_ref(v_00_u03c6_3984_);
lean_dec(v_cls_3983_);
v___x_4047_ = lean_box(0);
if (v_isShared_4046_ == 0)
{
lean_ctor_set(v___x_4045_, 0, v___x_4047_);
v___x_4049_ = v___x_4045_;
goto v_reusejp_4048_;
}
else
{
lean_object* v_reuseFailAlloc_4050_; 
v_reuseFailAlloc_4050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4050_, 0, v___x_4047_);
v___x_4049_ = v_reuseFailAlloc_4050_;
goto v_reusejp_4048_;
}
v_reusejp_4048_:
{
return v___x_4049_;
}
}
else
{
lean_object* v_val_4051_; uint8_t v___x_4052_; 
lean_del_object(v___x_4045_);
v_val_4051_ = lean_ctor_get(v_a_4043_, 0);
lean_inc(v_val_4051_);
lean_dec_ref_known(v_a_4043_, 1);
v___x_4052_ = lean_unbox(v_val_4051_);
lean_dec(v_val_4051_);
if (v___x_4052_ == 0)
{
v___y_3997_ = v___y_3985_;
v___y_3998_ = v___y_3986_;
v___y_3999_ = v___y_3987_;
v___y_4000_ = v___y_3988_;
goto v___jp_3996_;
}
else
{
lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; 
v___x_4053_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__3);
lean_inc_ref(v_00_u03c6_3984_);
v___x_4054_ = l_Lean_MessageData_ofExpr(v_00_u03c6_3984_);
v___x_4055_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4055_, 0, v___x_4053_);
lean_ctor_set(v___x_4055_, 1, v___x_4054_);
lean_inc(v_cls_3983_);
v___x_4056_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(v_cls_3983_, v___x_4055_, v___y_3985_, v___y_3986_, v___y_3987_, v___y_3988_);
if (lean_obj_tag(v___x_4056_) == 0)
{
lean_dec_ref_known(v___x_4056_, 1);
v___y_3997_ = v___y_3985_;
v___y_3998_ = v___y_3986_;
v___y_3999_ = v___y_3987_;
v___y_4000_ = v___y_3988_;
goto v___jp_3996_;
}
else
{
lean_object* v_a_4057_; lean_object* v___x_4059_; uint8_t v_isShared_4060_; uint8_t v_isSharedCheck_4064_; 
lean_dec_ref(v_00_u03c6_3984_);
lean_dec(v_cls_3983_);
v_a_4057_ = lean_ctor_get(v___x_4056_, 0);
v_isSharedCheck_4064_ = !lean_is_exclusive(v___x_4056_);
if (v_isSharedCheck_4064_ == 0)
{
v___x_4059_ = v___x_4056_;
v_isShared_4060_ = v_isSharedCheck_4064_;
goto v_resetjp_4058_;
}
else
{
lean_inc(v_a_4057_);
lean_dec(v___x_4056_);
v___x_4059_ = lean_box(0);
v_isShared_4060_ = v_isSharedCheck_4064_;
goto v_resetjp_4058_;
}
v_resetjp_4058_:
{
lean_object* v___x_4062_; 
if (v_isShared_4060_ == 0)
{
v___x_4062_ = v___x_4059_;
goto v_reusejp_4061_;
}
else
{
lean_object* v_reuseFailAlloc_4063_; 
v_reuseFailAlloc_4063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4063_, 0, v_a_4057_);
v___x_4062_ = v_reuseFailAlloc_4063_;
goto v_reusejp_4061_;
}
v_reusejp_4061_:
{
return v___x_4062_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4066_; lean_object* v___x_4068_; uint8_t v_isShared_4069_; uint8_t v_isSharedCheck_4073_; 
lean_dec_ref(v_00_u03c6_3984_);
lean_dec(v_cls_3983_);
v_a_4066_ = lean_ctor_get(v___x_4042_, 0);
v_isSharedCheck_4073_ = !lean_is_exclusive(v___x_4042_);
if (v_isSharedCheck_4073_ == 0)
{
v___x_4068_ = v___x_4042_;
v_isShared_4069_ = v_isSharedCheck_4073_;
goto v_resetjp_4067_;
}
else
{
lean_inc(v_a_4066_);
lean_dec(v___x_4042_);
v___x_4068_ = lean_box(0);
v_isShared_4069_ = v_isSharedCheck_4073_;
goto v_resetjp_4067_;
}
v_resetjp_4067_:
{
lean_object* v___x_4071_; 
if (v_isShared_4069_ == 0)
{
v___x_4071_ = v___x_4068_;
goto v_reusejp_4070_;
}
else
{
lean_object* v_reuseFailAlloc_4072_; 
v_reuseFailAlloc_4072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4072_, 0, v_a_4066_);
v___x_4071_ = v_reuseFailAlloc_4072_;
goto v_reusejp_4070_;
}
v_reusejp_4070_:
{
return v___x_4071_;
}
}
}
v___jp_3990_:
{
lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; 
v___x_3992_ = lean_box(0);
v___x_3993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3993_, 0, v___x_3992_);
lean_ctor_set(v___x_3993_, 1, v___y_3991_);
v___x_3994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3994_, 0, v___x_3993_);
v___x_3995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3995_, 0, v___x_3994_);
return v___x_3995_;
}
v___jp_3996_:
{
lean_object* v___x_4001_; uint8_t v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; 
lean_inc_ref(v_00_u03c6_3984_);
v___x_4001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4001_, 0, v_00_u03c6_3984_);
v___x_4002_ = 0;
v___x_4003_ = lean_box(0);
v___x_4004_ = l_Lean_Meta_mkFreshExprMVar(v___x_4001_, v___x_4002_, v___x_4003_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_);
if (lean_obj_tag(v___x_4004_) == 0)
{
lean_object* v_a_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; 
v_a_4005_ = lean_ctor_get(v___x_4004_, 0);
lean_inc(v_a_4005_);
lean_dec_ref_known(v___x_4004_, 1);
v___x_4006_ = l_Lean_Expr_mvarId_x21(v_a_4005_);
v___x_4007_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_applyRflAndAndIntro(v___x_4006_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_);
if (lean_obj_tag(v___x_4007_) == 0)
{
lean_object* v_options_4008_; uint8_t v_hasTrace_4009_; 
lean_dec_ref_known(v___x_4007_, 1);
v_options_4008_ = lean_ctor_get(v___y_3999_, 2);
v_hasTrace_4009_ = lean_ctor_get_uint8(v_options_4008_, sizeof(void*)*1);
if (v_hasTrace_4009_ == 0)
{
lean_dec_ref(v_00_u03c6_3984_);
lean_dec(v_cls_3983_);
v___y_3991_ = v_a_4005_;
goto v___jp_3990_;
}
else
{
lean_object* v_inheritedTraceOptions_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; uint8_t v___x_4013_; 
v_inheritedTraceOptions_4010_ = lean_ctor_get(v___y_3999_, 13);
v___x_4011_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__12));
lean_inc(v_cls_3983_);
v___x_4012_ = l_Lean_Name_append(v___x_4011_, v_cls_3983_);
v___x_4013_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4010_, v_options_4008_, v___x_4012_);
lean_dec(v___x_4012_);
if (v___x_4013_ == 0)
{
lean_dec_ref(v_00_u03c6_3984_);
lean_dec(v_cls_3983_);
v___y_3991_ = v_a_4005_;
goto v___jp_3990_;
}
else
{
lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; 
v___x_4014_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__1);
v___x_4015_ = l_Lean_MessageData_ofExpr(v_00_u03c6_3984_);
v___x_4016_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4016_, 0, v___x_4014_);
lean_ctor_set(v___x_4016_, 1, v___x_4015_);
v___x_4017_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(v_cls_3983_, v___x_4016_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_);
if (lean_obj_tag(v___x_4017_) == 0)
{
lean_dec_ref_known(v___x_4017_, 1);
v___y_3991_ = v_a_4005_;
goto v___jp_3990_;
}
else
{
lean_object* v_a_4018_; lean_object* v___x_4020_; uint8_t v_isShared_4021_; uint8_t v_isSharedCheck_4025_; 
lean_dec(v_a_4005_);
v_a_4018_ = lean_ctor_get(v___x_4017_, 0);
v_isSharedCheck_4025_ = !lean_is_exclusive(v___x_4017_);
if (v_isSharedCheck_4025_ == 0)
{
v___x_4020_ = v___x_4017_;
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
else
{
lean_inc(v_a_4018_);
lean_dec(v___x_4017_);
v___x_4020_ = lean_box(0);
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
v_resetjp_4019_:
{
lean_object* v___x_4023_; 
if (v_isShared_4021_ == 0)
{
v___x_4023_ = v___x_4020_;
goto v_reusejp_4022_;
}
else
{
lean_object* v_reuseFailAlloc_4024_; 
v_reuseFailAlloc_4024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4024_, 0, v_a_4018_);
v___x_4023_ = v_reuseFailAlloc_4024_;
goto v_reusejp_4022_;
}
v_reusejp_4022_:
{
return v___x_4023_;
}
}
}
}
}
}
else
{
lean_object* v_a_4026_; lean_object* v___x_4028_; uint8_t v_isShared_4029_; uint8_t v_isSharedCheck_4033_; 
lean_dec(v_a_4005_);
lean_dec_ref(v_00_u03c6_3984_);
lean_dec(v_cls_3983_);
v_a_4026_ = lean_ctor_get(v___x_4007_, 0);
v_isSharedCheck_4033_ = !lean_is_exclusive(v___x_4007_);
if (v_isSharedCheck_4033_ == 0)
{
v___x_4028_ = v___x_4007_;
v_isShared_4029_ = v_isSharedCheck_4033_;
goto v_resetjp_4027_;
}
else
{
lean_inc(v_a_4026_);
lean_dec(v___x_4007_);
v___x_4028_ = lean_box(0);
v_isShared_4029_ = v_isSharedCheck_4033_;
goto v_resetjp_4027_;
}
v_resetjp_4027_:
{
lean_object* v___x_4031_; 
if (v_isShared_4029_ == 0)
{
v___x_4031_ = v___x_4028_;
goto v_reusejp_4030_;
}
else
{
lean_object* v_reuseFailAlloc_4032_; 
v_reuseFailAlloc_4032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4032_, 0, v_a_4026_);
v___x_4031_ = v_reuseFailAlloc_4032_;
goto v_reusejp_4030_;
}
v_reusejp_4030_:
{
return v___x_4031_;
}
}
}
}
else
{
lean_object* v_a_4034_; lean_object* v___x_4036_; uint8_t v_isShared_4037_; uint8_t v_isSharedCheck_4041_; 
lean_dec_ref(v_00_u03c6_3984_);
lean_dec(v_cls_3983_);
v_a_4034_ = lean_ctor_get(v___x_4004_, 0);
v_isSharedCheck_4041_ = !lean_is_exclusive(v___x_4004_);
if (v_isSharedCheck_4041_ == 0)
{
v___x_4036_ = v___x_4004_;
v_isShared_4037_ = v_isSharedCheck_4041_;
goto v_resetjp_4035_;
}
else
{
lean_inc(v_a_4034_);
lean_dec(v___x_4004_);
v___x_4036_ = lean_box(0);
v_isShared_4037_ = v_isSharedCheck_4041_;
goto v_resetjp_4035_;
}
v_resetjp_4035_:
{
lean_object* v___x_4039_; 
if (v_isShared_4037_ == 0)
{
v___x_4039_ = v___x_4036_;
goto v_reusejp_4038_;
}
else
{
lean_object* v_reuseFailAlloc_4040_; 
v_reuseFailAlloc_4040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4040_, 0, v_a_4034_);
v___x_4039_ = v_reuseFailAlloc_4040_;
goto v_reusejp_4038_;
}
v_reusejp_4038_:
{
return v___x_4039_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___boxed(lean_object* v___f_4074_, lean_object* v_cls_4075_, lean_object* v_00_u03c6_4076_, lean_object* v___y_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_){
_start:
{
lean_object* v_res_4082_; 
v_res_4082_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1(v___f_4074_, v_cls_4075_, v_00_u03c6_4076_, v___y_4077_, v___y_4078_, v___y_4079_, v___y_4080_);
lean_dec(v___y_4080_);
lean_dec_ref(v___y_4079_);
lean_dec(v___y_4078_);
lean_dec_ref(v___y_4077_);
return v_res_4082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro(lean_object* v_goal_4086_, lean_object* v_a_4087_, lean_object* v_a_4088_, lean_object* v_a_4089_, lean_object* v_a_4090_){
_start:
{
lean_object* v___y_4096_; uint8_t v___y_4097_; lean_object* v_cls_4099_; lean_object* v___x_4100_; lean_object* v_a_4101_; lean_object* v_val_4102_; lean_object* v___f_4103_; lean_object* v___y_4105_; lean_object* v___y_4106_; lean_object* v___y_4107_; lean_object* v___y_4108_; uint8_t v___x_4130_; 
v_cls_4099_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__10));
v___x_4100_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__0(v_cls_4099_, v_a_4087_, v_a_4088_, v_a_4089_, v_a_4090_);
v_a_4101_ = lean_ctor_get(v___x_4100_, 0);
lean_inc(v_a_4101_);
lean_dec_ref(v___x_4100_);
v_val_4102_ = lean_ctor_get(v_a_4101_, 0);
lean_inc(v_val_4102_);
lean_dec(v_a_4101_);
v___f_4103_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__0));
v___x_4130_ = lean_unbox(v_val_4102_);
lean_dec(v_val_4102_);
if (v___x_4130_ == 0)
{
v___y_4105_ = v_a_4087_;
v___y_4106_ = v_a_4088_;
v___y_4107_ = v_a_4089_;
v___y_4108_ = v_a_4090_;
goto v___jp_4104_;
}
else
{
lean_object* v_target_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; 
v_target_4131_ = lean_ctor_get(v_goal_4086_, 4);
v___x_4132_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__3);
lean_inc_ref(v_target_4131_);
v___x_4133_ = l_Lean_MessageData_ofExpr(v_target_4131_);
v___x_4134_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4134_, 0, v___x_4132_);
lean_ctor_set(v___x_4134_, 1, v___x_4133_);
v___x_4135_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(v_cls_4099_, v___x_4134_, v_a_4087_, v_a_4088_, v_a_4089_, v_a_4090_);
if (lean_obj_tag(v___x_4135_) == 0)
{
lean_dec_ref_known(v___x_4135_, 1);
v___y_4105_ = v_a_4087_;
v___y_4106_ = v_a_4088_;
v___y_4107_ = v_a_4089_;
v___y_4108_ = v_a_4090_;
goto v___jp_4104_;
}
else
{
lean_object* v_a_4136_; lean_object* v___x_4138_; uint8_t v_isShared_4139_; uint8_t v_isSharedCheck_4143_; 
lean_dec_ref(v_goal_4086_);
v_a_4136_ = lean_ctor_get(v___x_4135_, 0);
v_isSharedCheck_4143_ = !lean_is_exclusive(v___x_4135_);
if (v_isSharedCheck_4143_ == 0)
{
v___x_4138_ = v___x_4135_;
v_isShared_4139_ = v_isSharedCheck_4143_;
goto v_resetjp_4137_;
}
else
{
lean_inc(v_a_4136_);
lean_dec(v___x_4135_);
v___x_4138_ = lean_box(0);
v_isShared_4139_ = v_isSharedCheck_4143_;
goto v_resetjp_4137_;
}
v_resetjp_4137_:
{
lean_object* v___x_4141_; 
if (v_isShared_4139_ == 0)
{
v___x_4141_ = v___x_4138_;
goto v_reusejp_4140_;
}
else
{
lean_object* v_reuseFailAlloc_4142_; 
v_reuseFailAlloc_4142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4142_, 0, v_a_4136_);
v___x_4141_ = v_reuseFailAlloc_4142_;
goto v_reusejp_4140_;
}
v_reusejp_4140_:
{
return v___x_4141_;
}
}
}
}
v___jp_4092_:
{
lean_object* v___x_4093_; lean_object* v___x_4094_; 
v___x_4093_ = lean_box(0);
v___x_4094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4094_, 0, v___x_4093_);
return v___x_4094_;
}
v___jp_4095_:
{
if (v___y_4097_ == 0)
{
lean_dec_ref(v___y_4096_);
goto v___jp_4092_;
}
else
{
lean_object* v___x_4098_; 
v___x_4098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4098_, 0, v___y_4096_);
return v___x_4098_;
}
}
v___jp_4104_:
{
lean_object* v___x_4109_; 
v___x_4109_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___redArg(v_goal_4086_, v___f_4103_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_);
if (lean_obj_tag(v___x_4109_) == 0)
{
lean_object* v_a_4110_; lean_object* v___x_4112_; uint8_t v_isShared_4113_; uint8_t v_isSharedCheck_4126_; 
v_a_4110_ = lean_ctor_get(v___x_4109_, 0);
v_isSharedCheck_4126_ = !lean_is_exclusive(v___x_4109_);
if (v_isSharedCheck_4126_ == 0)
{
v___x_4112_ = v___x_4109_;
v_isShared_4113_ = v_isSharedCheck_4126_;
goto v_resetjp_4111_;
}
else
{
lean_inc(v_a_4110_);
lean_dec(v___x_4109_);
v___x_4112_ = lean_box(0);
v_isShared_4113_ = v_isSharedCheck_4126_;
goto v_resetjp_4111_;
}
v_resetjp_4111_:
{
if (lean_obj_tag(v_a_4110_) == 0)
{
lean_del_object(v___x_4112_);
goto v___jp_4092_;
}
else
{
lean_object* v_val_4114_; lean_object* v___x_4116_; uint8_t v_isShared_4117_; uint8_t v_isSharedCheck_4125_; 
v_val_4114_ = lean_ctor_get(v_a_4110_, 0);
v_isSharedCheck_4125_ = !lean_is_exclusive(v_a_4110_);
if (v_isSharedCheck_4125_ == 0)
{
v___x_4116_ = v_a_4110_;
v_isShared_4117_ = v_isSharedCheck_4125_;
goto v_resetjp_4115_;
}
else
{
lean_inc(v_val_4114_);
lean_dec(v_a_4110_);
v___x_4116_ = lean_box(0);
v_isShared_4117_ = v_isSharedCheck_4125_;
goto v_resetjp_4115_;
}
v_resetjp_4115_:
{
lean_object* v_snd_4118_; lean_object* v___x_4120_; 
v_snd_4118_ = lean_ctor_get(v_val_4114_, 1);
lean_inc(v_snd_4118_);
lean_dec(v_val_4114_);
if (v_isShared_4117_ == 0)
{
lean_ctor_set(v___x_4116_, 0, v_snd_4118_);
v___x_4120_ = v___x_4116_;
goto v_reusejp_4119_;
}
else
{
lean_object* v_reuseFailAlloc_4124_; 
v_reuseFailAlloc_4124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4124_, 0, v_snd_4118_);
v___x_4120_ = v_reuseFailAlloc_4124_;
goto v_reusejp_4119_;
}
v_reusejp_4119_:
{
lean_object* v___x_4122_; 
if (v_isShared_4113_ == 0)
{
lean_ctor_set(v___x_4112_, 0, v___x_4120_);
v___x_4122_ = v___x_4112_;
goto v_reusejp_4121_;
}
else
{
lean_object* v_reuseFailAlloc_4123_; 
v_reuseFailAlloc_4123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4123_, 0, v___x_4120_);
v___x_4122_ = v_reuseFailAlloc_4123_;
goto v_reusejp_4121_;
}
v_reusejp_4121_:
{
return v___x_4122_;
}
}
}
}
}
}
else
{
lean_object* v_a_4127_; uint8_t v___x_4128_; 
v_a_4127_ = lean_ctor_get(v___x_4109_, 0);
lean_inc(v_a_4127_);
lean_dec_ref_known(v___x_4109_, 1);
v___x_4128_ = l_Lean_Exception_isInterrupt(v_a_4127_);
if (v___x_4128_ == 0)
{
uint8_t v___x_4129_; 
lean_inc(v_a_4127_);
v___x_4129_ = l_Lean_Exception_isRuntime(v_a_4127_);
v___y_4096_ = v_a_4127_;
v___y_4097_ = v___x_4129_;
goto v___jp_4095_;
}
else
{
v___y_4096_ = v_a_4127_;
v___y_4097_ = v___x_4128_;
goto v___jp_4095_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro___boxed(lean_object* v_goal_4144_, lean_object* v_a_4145_, lean_object* v_a_4146_, lean_object* v_a_4147_, lean_object* v_a_4148_, lean_object* v_a_4149_){
_start:
{
lean_object* v_res_4150_; 
v_res_4150_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro(v_goal_4144_, v_a_4145_, v_a_4146_, v_a_4147_, v_a_4148_);
lean_dec(v_a_4148_);
lean_dec_ref(v_a_4147_);
lean_dec(v_a_4146_);
lean_dec_ref(v_a_4145_);
return v_res_4150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureTrivial___lam__1(lean_object* v_00_u03c6_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_, lean_object* v___y_4155_){
_start:
{
lean_object* v___x_4157_; uint8_t v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; 
v___x_4157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4157_, 0, v_00_u03c6_4151_);
v___x_4158_ = 0;
v___x_4159_ = lean_box(0);
v___x_4160_ = l_Lean_Meta_mkFreshExprMVar(v___x_4157_, v___x_4158_, v___x_4159_, v___y_4152_, v___y_4153_, v___y_4154_, v___y_4155_);
if (lean_obj_tag(v___x_4160_) == 0)
{
lean_object* v_a_4161_; lean_object* v___x_4163_; uint8_t v_isShared_4164_; uint8_t v_isSharedCheck_4219_; 
v_a_4161_ = lean_ctor_get(v___x_4160_, 0);
v_isSharedCheck_4219_ = !lean_is_exclusive(v___x_4160_);
if (v_isSharedCheck_4219_ == 0)
{
v___x_4163_ = v___x_4160_;
v_isShared_4164_ = v_isSharedCheck_4219_;
goto v_resetjp_4162_;
}
else
{
lean_inc(v_a_4161_);
lean_dec(v___x_4160_);
v___x_4163_ = lean_box(0);
v_isShared_4164_ = v_isSharedCheck_4219_;
goto v_resetjp_4162_;
}
v_resetjp_4162_:
{
lean_object* v___x_4172_; lean_object* v___x_4173_; 
v___x_4172_ = l_Lean_Expr_mvarId_x21(v_a_4161_);
lean_inc(v___x_4172_);
v___x_4173_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_applyRflAndAndIntro(v___x_4172_, v___y_4152_, v___y_4153_, v___y_4154_, v___y_4155_);
if (lean_obj_tag(v___x_4173_) == 0)
{
lean_dec_ref_known(v___x_4173_, 1);
lean_dec(v___x_4172_);
goto v___jp_4165_;
}
else
{
lean_object* v_a_4174_; lean_object* v___x_4176_; uint8_t v_isShared_4177_; uint8_t v_isSharedCheck_4218_; 
v_a_4174_ = lean_ctor_get(v___x_4173_, 0);
v_isSharedCheck_4218_ = !lean_is_exclusive(v___x_4173_);
if (v_isSharedCheck_4218_ == 0)
{
v___x_4176_ = v___x_4173_;
v_isShared_4177_ = v_isSharedCheck_4218_;
goto v_resetjp_4175_;
}
else
{
lean_inc(v_a_4174_);
lean_dec(v___x_4173_);
v___x_4176_ = lean_box(0);
v_isShared_4177_ = v_isSharedCheck_4218_;
goto v_resetjp_4175_;
}
v_resetjp_4175_:
{
uint8_t v___y_4179_; uint8_t v___x_4216_; 
v___x_4216_ = l_Lean_Exception_isInterrupt(v_a_4174_);
if (v___x_4216_ == 0)
{
uint8_t v___x_4217_; 
lean_inc(v_a_4174_);
v___x_4217_ = l_Lean_Exception_isRuntime(v_a_4174_);
v___y_4179_ = v___x_4217_;
goto v___jp_4178_;
}
else
{
v___y_4179_ = v___x_4216_;
goto v___jp_4178_;
}
v___jp_4178_:
{
if (v___y_4179_ == 0)
{
lean_object* v_ref_4180_; lean_object* v___x_4181_; lean_object* v___f_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; uint8_t v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; 
lean_del_object(v___x_4176_);
lean_dec(v_a_4174_);
v_ref_4180_ = lean_ctor_get(v___y_4154_, 5);
v___x_4181_ = lean_box(v___y_4179_);
v___f_4182_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4182_, 0, v___x_4181_);
v___x_4183_ = l_Lean_SourceInfo_fromRef(v_ref_4180_, v___y_4179_);
v___x_4184_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1));
v___x_4185_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__2));
lean_inc(v___x_4183_);
v___x_4186_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4186_, 0, v___x_4183_);
lean_ctor_set(v___x_4186_, 1, v___x_4185_);
v___x_4187_ = l_Lean_Syntax_node1(v___x_4183_, v___x_4184_, v___x_4186_);
v___x_4188_ = lean_box(0);
v___x_4189_ = lean_box(0);
v___x_4190_ = 1;
v___x_4191_ = lean_box(1);
v___x_4192_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__3));
v___x_4193_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v___x_4193_, 0, v___x_4188_);
lean_ctor_set(v___x_4193_, 1, v___x_4189_);
lean_ctor_set(v___x_4193_, 2, v___x_4188_);
lean_ctor_set(v___x_4193_, 3, v___f_4182_);
lean_ctor_set(v___x_4193_, 4, v___x_4191_);
lean_ctor_set(v___x_4193_, 5, v___x_4191_);
lean_ctor_set(v___x_4193_, 6, v___x_4188_);
lean_ctor_set(v___x_4193_, 7, v___x_4192_);
lean_ctor_set_uint8(v___x_4193_, sizeof(void*)*8, v___x_4190_);
lean_ctor_set_uint8(v___x_4193_, sizeof(void*)*8 + 1, v___x_4190_);
lean_ctor_set_uint8(v___x_4193_, sizeof(void*)*8 + 2, v___x_4190_);
lean_ctor_set_uint8(v___x_4193_, sizeof(void*)*8 + 3, v___x_4190_);
lean_ctor_set_uint8(v___x_4193_, sizeof(void*)*8 + 4, v___y_4179_);
lean_ctor_set_uint8(v___x_4193_, sizeof(void*)*8 + 5, v___y_4179_);
lean_ctor_set_uint8(v___x_4193_, sizeof(void*)*8 + 6, v___y_4179_);
lean_ctor_set_uint8(v___x_4193_, sizeof(void*)*8 + 7, v___y_4179_);
lean_ctor_set_uint8(v___x_4193_, sizeof(void*)*8 + 8, v___x_4190_);
lean_ctor_set_uint8(v___x_4193_, sizeof(void*)*8 + 9, v___y_4179_);
lean_ctor_set_uint8(v___x_4193_, sizeof(void*)*8 + 10, v___x_4190_);
v___x_4194_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__4));
v___x_4195_ = l_Lean_Elab_runTactic(v___x_4172_, v___x_4187_, v___x_4193_, v___x_4194_, v___y_4152_, v___y_4153_, v___y_4154_, v___y_4155_);
if (lean_obj_tag(v___x_4195_) == 0)
{
lean_object* v_a_4196_; lean_object* v___x_4198_; uint8_t v_isShared_4199_; uint8_t v_isSharedCheck_4204_; 
v_a_4196_ = lean_ctor_get(v___x_4195_, 0);
v_isSharedCheck_4204_ = !lean_is_exclusive(v___x_4195_);
if (v_isSharedCheck_4204_ == 0)
{
v___x_4198_ = v___x_4195_;
v_isShared_4199_ = v_isSharedCheck_4204_;
goto v_resetjp_4197_;
}
else
{
lean_inc(v_a_4196_);
lean_dec(v___x_4195_);
v___x_4198_ = lean_box(0);
v_isShared_4199_ = v_isSharedCheck_4204_;
goto v_resetjp_4197_;
}
v_resetjp_4197_:
{
lean_object* v_fst_4200_; 
v_fst_4200_ = lean_ctor_get(v_a_4196_, 0);
lean_inc(v_fst_4200_);
lean_dec(v_a_4196_);
if (lean_obj_tag(v_fst_4200_) == 0)
{
lean_del_object(v___x_4198_);
goto v___jp_4165_;
}
else
{
lean_object* v___x_4202_; 
lean_dec(v_fst_4200_);
lean_del_object(v___x_4163_);
lean_dec(v_a_4161_);
if (v_isShared_4199_ == 0)
{
lean_ctor_set(v___x_4198_, 0, v___x_4188_);
v___x_4202_ = v___x_4198_;
goto v_reusejp_4201_;
}
else
{
lean_object* v_reuseFailAlloc_4203_; 
v_reuseFailAlloc_4203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4203_, 0, v___x_4188_);
v___x_4202_ = v_reuseFailAlloc_4203_;
goto v_reusejp_4201_;
}
v_reusejp_4201_:
{
return v___x_4202_;
}
}
}
}
else
{
lean_object* v_a_4205_; lean_object* v___x_4207_; uint8_t v_isShared_4208_; uint8_t v_isSharedCheck_4212_; 
lean_del_object(v___x_4163_);
lean_dec(v_a_4161_);
v_a_4205_ = lean_ctor_get(v___x_4195_, 0);
v_isSharedCheck_4212_ = !lean_is_exclusive(v___x_4195_);
if (v_isSharedCheck_4212_ == 0)
{
v___x_4207_ = v___x_4195_;
v_isShared_4208_ = v_isSharedCheck_4212_;
goto v_resetjp_4206_;
}
else
{
lean_inc(v_a_4205_);
lean_dec(v___x_4195_);
v___x_4207_ = lean_box(0);
v_isShared_4208_ = v_isSharedCheck_4212_;
goto v_resetjp_4206_;
}
v_resetjp_4206_:
{
lean_object* v___x_4210_; 
if (v_isShared_4208_ == 0)
{
v___x_4210_ = v___x_4207_;
goto v_reusejp_4209_;
}
else
{
lean_object* v_reuseFailAlloc_4211_; 
v_reuseFailAlloc_4211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4211_, 0, v_a_4205_);
v___x_4210_ = v_reuseFailAlloc_4211_;
goto v_reusejp_4209_;
}
v_reusejp_4209_:
{
return v___x_4210_;
}
}
}
}
else
{
lean_object* v___x_4214_; 
lean_dec(v___x_4172_);
lean_del_object(v___x_4163_);
lean_dec(v_a_4161_);
if (v_isShared_4177_ == 0)
{
v___x_4214_ = v___x_4176_;
goto v_reusejp_4213_;
}
else
{
lean_object* v_reuseFailAlloc_4215_; 
v_reuseFailAlloc_4215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4215_, 0, v_a_4174_);
v___x_4214_ = v_reuseFailAlloc_4215_;
goto v_reusejp_4213_;
}
v_reusejp_4213_:
{
return v___x_4214_;
}
}
}
}
}
v___jp_4165_:
{
lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4170_; 
v___x_4166_ = lean_box(0);
v___x_4167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4167_, 0, v___x_4166_);
lean_ctor_set(v___x_4167_, 1, v_a_4161_);
v___x_4168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4168_, 0, v___x_4167_);
if (v_isShared_4164_ == 0)
{
lean_ctor_set(v___x_4163_, 0, v___x_4168_);
v___x_4170_ = v___x_4163_;
goto v_reusejp_4169_;
}
else
{
lean_object* v_reuseFailAlloc_4171_; 
v_reuseFailAlloc_4171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4171_, 0, v___x_4168_);
v___x_4170_ = v_reuseFailAlloc_4171_;
goto v_reusejp_4169_;
}
v_reusejp_4169_:
{
return v___x_4170_;
}
}
}
}
else
{
lean_object* v_a_4220_; lean_object* v___x_4222_; uint8_t v_isShared_4223_; uint8_t v_isSharedCheck_4227_; 
v_a_4220_ = lean_ctor_get(v___x_4160_, 0);
v_isSharedCheck_4227_ = !lean_is_exclusive(v___x_4160_);
if (v_isSharedCheck_4227_ == 0)
{
v___x_4222_ = v___x_4160_;
v_isShared_4223_ = v_isSharedCheck_4227_;
goto v_resetjp_4221_;
}
else
{
lean_inc(v_a_4220_);
lean_dec(v___x_4160_);
v___x_4222_ = lean_box(0);
v_isShared_4223_ = v_isSharedCheck_4227_;
goto v_resetjp_4221_;
}
v_resetjp_4221_:
{
lean_object* v___x_4225_; 
if (v_isShared_4223_ == 0)
{
v___x_4225_ = v___x_4222_;
goto v_reusejp_4224_;
}
else
{
lean_object* v_reuseFailAlloc_4226_; 
v_reuseFailAlloc_4226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4226_, 0, v_a_4220_);
v___x_4225_ = v_reuseFailAlloc_4226_;
goto v_reusejp_4224_;
}
v_reusejp_4224_:
{
return v___x_4225_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureTrivial___lam__1___boxed(lean_object* v_00_u03c6_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_){
_start:
{
lean_object* v_res_4234_; 
v_res_4234_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureTrivial___lam__1(v_00_u03c6_4228_, v___y_4229_, v___y_4230_, v___y_4231_, v___y_4232_);
lean_dec(v___y_4232_);
lean_dec_ref(v___y_4231_);
lean_dec(v___y_4230_);
lean_dec_ref(v___y_4229_);
return v_res_4234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureTrivial(lean_object* v_goal_4236_, lean_object* v_a_4237_, lean_object* v_a_4238_, lean_object* v_a_4239_, lean_object* v_a_4240_){
_start:
{
lean_object* v___f_4245_; lean_object* v___x_4246_; 
v___f_4245_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureTrivial___closed__0));
v___x_4246_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___redArg(v_goal_4236_, v___f_4245_, v_a_4237_, v_a_4238_, v_a_4239_, v_a_4240_);
if (lean_obj_tag(v___x_4246_) == 0)
{
lean_object* v_a_4247_; lean_object* v___x_4249_; uint8_t v_isShared_4250_; uint8_t v_isSharedCheck_4263_; 
v_a_4247_ = lean_ctor_get(v___x_4246_, 0);
v_isSharedCheck_4263_ = !lean_is_exclusive(v___x_4246_);
if (v_isSharedCheck_4263_ == 0)
{
v___x_4249_ = v___x_4246_;
v_isShared_4250_ = v_isSharedCheck_4263_;
goto v_resetjp_4248_;
}
else
{
lean_inc(v_a_4247_);
lean_dec(v___x_4246_);
v___x_4249_ = lean_box(0);
v_isShared_4250_ = v_isSharedCheck_4263_;
goto v_resetjp_4248_;
}
v_resetjp_4248_:
{
if (lean_obj_tag(v_a_4247_) == 0)
{
lean_del_object(v___x_4249_);
goto v___jp_4242_;
}
else
{
lean_object* v_val_4251_; lean_object* v___x_4253_; uint8_t v_isShared_4254_; uint8_t v_isSharedCheck_4262_; 
v_val_4251_ = lean_ctor_get(v_a_4247_, 0);
v_isSharedCheck_4262_ = !lean_is_exclusive(v_a_4247_);
if (v_isSharedCheck_4262_ == 0)
{
v___x_4253_ = v_a_4247_;
v_isShared_4254_ = v_isSharedCheck_4262_;
goto v_resetjp_4252_;
}
else
{
lean_inc(v_val_4251_);
lean_dec(v_a_4247_);
v___x_4253_ = lean_box(0);
v_isShared_4254_ = v_isSharedCheck_4262_;
goto v_resetjp_4252_;
}
v_resetjp_4252_:
{
lean_object* v_snd_4255_; lean_object* v___x_4257_; 
v_snd_4255_ = lean_ctor_get(v_val_4251_, 1);
lean_inc(v_snd_4255_);
lean_dec(v_val_4251_);
if (v_isShared_4254_ == 0)
{
lean_ctor_set(v___x_4253_, 0, v_snd_4255_);
v___x_4257_ = v___x_4253_;
goto v_reusejp_4256_;
}
else
{
lean_object* v_reuseFailAlloc_4261_; 
v_reuseFailAlloc_4261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4261_, 0, v_snd_4255_);
v___x_4257_ = v_reuseFailAlloc_4261_;
goto v_reusejp_4256_;
}
v_reusejp_4256_:
{
lean_object* v___x_4259_; 
if (v_isShared_4250_ == 0)
{
lean_ctor_set(v___x_4249_, 0, v___x_4257_);
v___x_4259_ = v___x_4249_;
goto v_reusejp_4258_;
}
else
{
lean_object* v_reuseFailAlloc_4260_; 
v_reuseFailAlloc_4260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4260_, 0, v___x_4257_);
v___x_4259_ = v_reuseFailAlloc_4260_;
goto v_reusejp_4258_;
}
v_reusejp_4258_:
{
return v___x_4259_;
}
}
}
}
}
}
else
{
lean_object* v_a_4264_; lean_object* v___x_4266_; uint8_t v_isShared_4267_; uint8_t v_isSharedCheck_4275_; 
v_a_4264_ = lean_ctor_get(v___x_4246_, 0);
v_isSharedCheck_4275_ = !lean_is_exclusive(v___x_4246_);
if (v_isSharedCheck_4275_ == 0)
{
v___x_4266_ = v___x_4246_;
v_isShared_4267_ = v_isSharedCheck_4275_;
goto v_resetjp_4265_;
}
else
{
lean_inc(v_a_4264_);
lean_dec(v___x_4246_);
v___x_4266_ = lean_box(0);
v_isShared_4267_ = v_isSharedCheck_4275_;
goto v_resetjp_4265_;
}
v_resetjp_4265_:
{
uint8_t v___y_4269_; uint8_t v___x_4273_; 
v___x_4273_ = l_Lean_Exception_isInterrupt(v_a_4264_);
if (v___x_4273_ == 0)
{
uint8_t v___x_4274_; 
lean_inc(v_a_4264_);
v___x_4274_ = l_Lean_Exception_isRuntime(v_a_4264_);
v___y_4269_ = v___x_4274_;
goto v___jp_4268_;
}
else
{
v___y_4269_ = v___x_4273_;
goto v___jp_4268_;
}
v___jp_4268_:
{
if (v___y_4269_ == 0)
{
lean_del_object(v___x_4266_);
lean_dec(v_a_4264_);
goto v___jp_4242_;
}
else
{
lean_object* v___x_4271_; 
if (v_isShared_4267_ == 0)
{
v___x_4271_ = v___x_4266_;
goto v_reusejp_4270_;
}
else
{
lean_object* v_reuseFailAlloc_4272_; 
v_reuseFailAlloc_4272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4272_, 0, v_a_4264_);
v___x_4271_ = v_reuseFailAlloc_4272_;
goto v_reusejp_4270_;
}
v_reusejp_4270_:
{
return v___x_4271_;
}
}
}
}
}
v___jp_4242_:
{
lean_object* v___x_4243_; lean_object* v___x_4244_; 
v___x_4243_ = lean_box(0);
v___x_4244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4244_, 0, v___x_4243_);
return v___x_4244_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureTrivial___boxed(lean_object* v_goal_4276_, lean_object* v_a_4277_, lean_object* v_a_4278_, lean_object* v_a_4279_, lean_object* v_a_4280_, lean_object* v_a_4281_){
_start:
{
lean_object* v_res_4282_; 
v_res_4282_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_pureTrivial(v_goal_4276_, v_a_4277_, v_a_4278_, v_a_4279_, v_a_4280_);
lean_dec(v_a_4280_);
lean_dec_ref(v_a_4279_);
lean_dec(v_a_4278_);
lean_dec_ref(v_a_4277_);
return v_res_4282_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt_spec__0(lean_object* v_opts_4283_, lean_object* v_opt_4284_){
_start:
{
lean_object* v_name_4285_; lean_object* v_defValue_4286_; lean_object* v_map_4287_; lean_object* v___x_4288_; 
v_name_4285_ = lean_ctor_get(v_opt_4284_, 0);
v_defValue_4286_ = lean_ctor_get(v_opt_4284_, 1);
v_map_4287_ = lean_ctor_get(v_opts_4283_, 0);
v___x_4288_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4287_, v_name_4285_);
if (lean_obj_tag(v___x_4288_) == 0)
{
uint8_t v___x_4289_; 
v___x_4289_ = lean_unbox(v_defValue_4286_);
return v___x_4289_;
}
else
{
lean_object* v_val_4290_; 
v_val_4290_ = lean_ctor_get(v___x_4288_, 0);
lean_inc(v_val_4290_);
lean_dec_ref_known(v___x_4288_, 1);
if (lean_obj_tag(v_val_4290_) == 1)
{
uint8_t v_v_4291_; 
v_v_4291_ = lean_ctor_get_uint8(v_val_4290_, 0);
lean_dec_ref_known(v_val_4290_, 0);
return v_v_4291_;
}
else
{
uint8_t v___x_4292_; 
lean_dec(v_val_4290_);
v___x_4292_ = lean_unbox(v_defValue_4286_);
return v___x_4292_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt_spec__0___boxed(lean_object* v_opts_4293_, lean_object* v_opt_4294_){
_start:
{
uint8_t v_res_4295_; lean_object* v_r_4296_; 
v_res_4295_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt_spec__0(v_opts_4293_, v_opt_4294_);
lean_dec_ref(v_opt_4294_);
lean_dec_ref(v_opts_4293_);
v_r_4296_ = lean_box(v_res_4295_);
return v_r_4296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt(lean_object* v_stx_4297_, lean_object* v_a_4298_, lean_object* v_a_4299_, lean_object* v_a_4300_, lean_object* v_a_4301_, lean_object* v_a_4302_, lean_object* v_a_4303_, lean_object* v_a_4304_, lean_object* v_a_4305_){
_start:
{
lean_object* v_options_4307_; lean_object* v___x_4308_; uint8_t v___x_4309_; 
v_options_4307_ = lean_ctor_get(v_a_4304_, 2);
v___x_4308_ = l_new__wp__monad;
v___x_4309_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt_spec__0(v_options_4307_, v___x_4308_);
if (v___x_4309_ == 0)
{
lean_object* v___x_4310_; 
v___x_4310_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMPure(v_stx_4297_, v_a_4298_, v_a_4299_, v_a_4300_, v_a_4301_, v_a_4302_, v_a_4303_, v_a_4304_, v_a_4305_);
return v___x_4310_;
}
else
{
lean_object* v___x_4311_; 
v___x_4311_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPure(v_stx_4297_, v_a_4298_, v_a_4299_, v_a_4300_, v_a_4301_, v_a_4302_, v_a_4303_, v_a_4304_, v_a_4305_);
return v___x_4311_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___boxed(lean_object* v_stx_4312_, lean_object* v_a_4313_, lean_object* v_a_4314_, lean_object* v_a_4315_, lean_object* v_a_4316_, lean_object* v_a_4317_, lean_object* v_a_4318_, lean_object* v_a_4319_, lean_object* v_a_4320_, lean_object* v_a_4321_){
_start:
{
lean_object* v_res_4322_; 
v_res_4322_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt(v_stx_4312_, v_a_4313_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_, v_a_4318_, v_a_4319_, v_a_4320_);
lean_dec(v_a_4320_);
lean_dec_ref(v_a_4319_);
lean_dec(v_a_4318_);
lean_dec_ref(v_a_4317_);
lean_dec(v_a_4316_);
lean_dec_ref(v_a_4315_);
lean_dec(v_a_4314_);
lean_dec_ref(v_a_4313_);
return v_res_4322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1(){
_start:
{
lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; lean_object* v___x_4337_; 
v___x_4333_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_4334_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3));
v___x_4335_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___closed__2));
v___x_4336_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___boxed), 10, 0);
v___x_4337_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4333_, v___x_4334_, v___x_4335_, v___x_4336_);
return v___x_4337_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1___boxed(lean_object* v_a_4338_){
_start:
{
lean_object* v_res_4339_; 
v_res_4339_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1();
return v_res_4339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt(lean_object* v_stx_4340_, lean_object* v_a_4341_, lean_object* v_a_4342_, lean_object* v_a_4343_, lean_object* v_a_4344_, lean_object* v_a_4345_, lean_object* v_a_4346_, lean_object* v_a_4347_, lean_object* v_a_4348_){
_start:
{
lean_object* v_options_4350_; lean_object* v___x_4351_; uint8_t v___x_4352_; 
v_options_4350_ = lean_ctor_get(v_a_4347_, 2);
v___x_4351_ = l_new__wp__monad;
v___x_4352_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt_spec__0(v_options_4350_, v___x_4351_);
if (v___x_4352_ == 0)
{
lean_object* v___x_4353_; 
v___x_4353_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro(v_stx_4340_, v_a_4341_, v_a_4342_, v_a_4343_, v_a_4344_, v_a_4345_, v_a_4346_, v_a_4347_, v_a_4348_);
return v___x_4353_;
}
else
{
lean_object* v___x_4354_; 
v___x_4354_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMPureIntro(v_stx_4340_, v_a_4341_, v_a_4342_, v_a_4343_, v_a_4344_, v_a_4345_, v_a_4346_, v_a_4347_, v_a_4348_);
return v___x_4354_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___boxed(lean_object* v_stx_4355_, lean_object* v_a_4356_, lean_object* v_a_4357_, lean_object* v_a_4358_, lean_object* v_a_4359_, lean_object* v_a_4360_, lean_object* v_a_4361_, lean_object* v_a_4362_, lean_object* v_a_4363_, lean_object* v_a_4364_){
_start:
{
lean_object* v_res_4365_; 
v_res_4365_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt(v_stx_4355_, v_a_4356_, v_a_4357_, v_a_4358_, v_a_4359_, v_a_4360_, v_a_4361_, v_a_4362_, v_a_4363_);
lean_dec(v_a_4363_);
lean_dec_ref(v_a_4362_);
lean_dec(v_a_4361_);
lean_dec_ref(v_a_4360_);
lean_dec(v_a_4359_);
lean_dec_ref(v_a_4358_);
lean_dec(v_a_4357_);
lean_dec_ref(v_a_4356_);
return v_res_4365_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1(){
_start:
{
lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; 
v___x_4375_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_4376_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1));
v___x_4377_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1___closed__1));
v___x_4378_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___boxed), 10, 0);
v___x_4379_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4375_, v___x_4376_, v___x_4377_, v___x_4378_);
return v___x_4379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1___boxed(lean_object* v_a_4380_){
_start:
{
lean_object* v_res_4381_; 
v_res_4381_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1();
return v_res_4381_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Rfl(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Pure(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Rfl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureOpt__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntroOpt__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Pure(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Rfl(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Pure(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Rfl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Pure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Pure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_ProofMode_Pure(builtin);
}
#ifdef __cplusplus
}
#endif
