// Lean compiler output
// Module: Lean.Elab.Tactic.Do.Internal.VCGen.Utils
// Imports: public import Lean.Meta.Sym public import Std.Internal.Do public import Lean.Elab.Command public import Lean.Elab.Tactic.Basic public import Lean.Elab.Tactic.Meta public import Lean.Elab.Tactic.Simp public import Lean.Elab.Tactic.Do.Attr public meta import Lean.Elab.Tactic.Basic public meta import Lean.Elab.Tactic.Do.Attr public import Lean.Elab.Tactic.Do.Internal.VCGen.Types public import Lean.Meta.Sym.Simp.Goal
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
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Meta_Sym_shareCommonInc___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Environment_isProjectionFn(lean_object*, lean_object*);
lean_object* l_Lean_mkAppRev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceRecMatcher_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceProj_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpTelescope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_toSimpGoalResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_BackwardRule_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_intros(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_intros(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshBinderNameForTactic___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_Sym_isDefEqS(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_unfoldReducible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_MVarId_assumptionCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PartialOrder"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rel"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(179, 3, 218, 237, 219, 72, 94, 177)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(41, 174, 7, 105, 99, 77, 97, 125)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__4_value;
static const lean_array_object l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Failed to apply precondition intro rule"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Failed to intro precondition hypothesis"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_closed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_closed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_goal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_goal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_failed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_failed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_simpGoal___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_simpTelescope___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_simpGoal___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_simpGoal___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_simpGoal___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100000) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_simpGoal___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_simpGoal___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_simpGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_simpGoal___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_simpGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_simpGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsHygienic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsHygienic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_introsAndSimp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_introsAndSimp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_applyChecked___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_applyChecked___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "[mvcgen' +debug] BackwardRule "};
static const lean_object* l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__1;
static const lean_string_object l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = " failed to apply to:"};
static const lean_object* l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__3;
static const lean_string_object l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "\nbut succeeded after `unfoldReducible`-normalization to:"};
static const lean_object* l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__5;
static const lean_string_object l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 116, .m_capacity = 116, .m_length = 115, .m_data = "\nAn earlier step is missing a normalization. Re-run with `set_option pp.all true` to see the structural difference."};
static const lean_object* l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__7;
static const lean_string_object l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__8 = (const lean_object*)&l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__9;
static const lean_string_object l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "<rule constructed from expression>"};
static const lean_object* l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__10 = (const lean_object*)&l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__10_value;
static lean_once_cell_t l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__11;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_applyChecked(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_applyChecked___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Utils_0__Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Utils_0__Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Utils_0__Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Utils_0__Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Utils_0__Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Utils_0__Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Sym_assumptionCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Sym_assumptionCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Sym_assumptionCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "assumption"};
static const lean_object* l_Lean_Sym_assumptionCore___closed__0 = (const lean_object*)&l_Lean_Sym_assumptionCore___closed__0_value;
static const lean_ctor_object l_Lean_Sym_assumptionCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Sym_assumptionCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 18, 34, 73, 19, 20, 120, 164)}};
static const lean_object* l_Lean_Sym_assumptionCore___closed__1 = (const lean_object*)&l_Lean_Sym_assumptionCore___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Sym_assumptionCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Sym_assumptionCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Sym_assumption___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Sym_assumption___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Sym_assumption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Sym_assumption___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "repeatAndRfl: failed to apply "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__9;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(58, 46, 244, 208, 18, 71, 77, 162)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__11_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " to"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__12_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__13;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__14;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "left"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__16_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__15_value),LEAN_SCALAR_PTR_LITERAL(12, 252, 227, 83, 88, 185, 40, 148)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__16 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__16_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__17;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "right"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__18_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__19_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(18, 204, 165, 192, 253, 41, 237, 145)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__19 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__19_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__20;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__21_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(177, 152, 123, 219, 220, 182, 189, 250)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__21_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__22;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__0___redArg___lam__0(lean_object* v_k_1_, lean_object* v_b_2_, lean_object* v_c_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v___x_9_; 
lean_inc(v___y_7_);
lean_inc_ref(v___y_6_);
lean_inc(v___y_5_);
lean_inc_ref(v___y_4_);
v___x_9_ = lean_apply_7(v_k_1_, v_b_2_, v_c_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, lean_box(0));
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__0___redArg___lam__0___boxed(lean_object* v_k_10_, lean_object* v_b_11_, lean_object* v_c_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__0___redArg___lam__0(v_k_10_, v_b_11_, v_c_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__0___redArg(lean_object* v_type_19_, lean_object* v_k_20_, uint8_t v_cleanupAnnotations_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_){
_start:
{
lean_object* v___f_27_; uint8_t v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___f_27_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_27_, 0, v_k_20_);
v___x_28_ = 0;
v___x_29_ = lean_box(0);
v___x_30_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_28_, v___x_29_, v_type_19_, v___f_27_, v_cleanupAnnotations_21_, v___x_28_, v___y_22_, v___y_23_, v___y_24_, v___y_25_);
if (lean_obj_tag(v___x_30_) == 0)
{
lean_object* v_a_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_38_; 
v_a_31_ = lean_ctor_get(v___x_30_, 0);
v_isSharedCheck_38_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_38_ == 0)
{
v___x_33_ = v___x_30_;
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_a_31_);
lean_dec(v___x_30_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___x_36_; 
if (v_isShared_34_ == 0)
{
v___x_36_ = v___x_33_;
goto v_reusejp_35_;
}
else
{
lean_object* v_reuseFailAlloc_37_; 
v_reuseFailAlloc_37_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_37_, 0, v_a_31_);
v___x_36_ = v_reuseFailAlloc_37_;
goto v_reusejp_35_;
}
v_reusejp_35_:
{
return v___x_36_;
}
}
}
else
{
lean_object* v_a_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_46_; 
v_a_39_ = lean_ctor_get(v___x_30_, 0);
v_isSharedCheck_46_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_46_ == 0)
{
v___x_41_ = v___x_30_;
v_isShared_42_ = v_isSharedCheck_46_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_a_39_);
lean_dec(v___x_30_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_46_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v___x_44_; 
if (v_isShared_42_ == 0)
{
v___x_44_ = v___x_41_;
goto v_reusejp_43_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_a_39_);
v___x_44_ = v_reuseFailAlloc_45_;
goto v_reusejp_43_;
}
v_reusejp_43_:
{
return v___x_44_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__0___redArg___boxed(lean_object* v_type_47_, lean_object* v_k_48_, lean_object* v_cleanupAnnotations_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_55_; lean_object* v_res_56_; 
v_cleanupAnnotations_boxed_55_ = lean_unbox(v_cleanupAnnotations_49_);
v_res_56_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__0___redArg(v_type_47_, v_k_48_, v_cleanupAnnotations_boxed_55_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__0(lean_object* v_00_u03b1_57_, lean_object* v_type_58_, lean_object* v_k_59_, uint8_t v_cleanupAnnotations_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__0___redArg(v_type_58_, v_k_59_, v_cleanupAnnotations_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__0___boxed(lean_object* v_00_u03b1_67_, lean_object* v_type_68_, lean_object* v_k_69_, lean_object* v_cleanupAnnotations_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_76_; lean_object* v_res_77_; 
v_cleanupAnnotations_boxed_76_ = lean_unbox(v_cleanupAnnotations_70_);
v_res_77_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__0(v_00_u03b1_67_, v_type_68_, v_k_69_, v_cleanupAnnotations_boxed_76_, v___y_71_, v___y_72_, v___y_73_, v___y_74_);
lean_dec(v___y_74_);
lean_dec_ref(v___y_73_);
lean_dec(v___y_72_);
lean_dec_ref(v___y_71_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__1___redArg___lam__0(lean_object* v_x_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
lean_object* v___x_86_; 
lean_inc(v___y_80_);
lean_inc_ref(v___y_79_);
v___x_86_ = lean_apply_7(v_x_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_, v___y_84_, lean_box(0));
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__1___redArg___lam__0___boxed(lean_object* v_x_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__1___redArg___lam__0(v_x_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_88_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__1___redArg(lean_object* v_mvarId_96_, lean_object* v_x_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_){
_start:
{
lean_object* v___f_105_; lean_object* v___x_106_; 
lean_inc(v___y_99_);
lean_inc_ref(v___y_98_);
v___f_105_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__1___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_105_, 0, v_x_97_);
lean_closure_set(v___f_105_, 1, v___y_98_);
lean_closure_set(v___f_105_, 2, v___y_99_);
v___x_106_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_96_, v___f_105_, v___y_100_, v___y_101_, v___y_102_, v___y_103_);
if (lean_obj_tag(v___x_106_) == 0)
{
return v___x_106_;
}
else
{
lean_object* v_a_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_114_; 
v_a_107_ = lean_ctor_get(v___x_106_, 0);
v_isSharedCheck_114_ = !lean_is_exclusive(v___x_106_);
if (v_isSharedCheck_114_ == 0)
{
v___x_109_ = v___x_106_;
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_a_107_);
lean_dec(v___x_106_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v___x_112_; 
if (v_isShared_110_ == 0)
{
v___x_112_ = v___x_109_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_a_107_);
v___x_112_ = v_reuseFailAlloc_113_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
return v___x_112_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__1___redArg___boxed(lean_object* v_mvarId_115_, lean_object* v_x_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__1___redArg(v_mvarId_115_, v_x_116_, v___y_117_, v___y_118_, v___y_119_, v___y_120_, v___y_121_, v___y_122_);
lean_dec(v___y_122_);
lean_dec_ref(v___y_121_);
lean_dec(v___y_120_);
lean_dec_ref(v___y_119_);
lean_dec(v___y_118_);
lean_dec_ref(v___y_117_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__1(lean_object* v_00_u03b1_125_, lean_object* v_mvarId_126_, lean_object* v_x_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__1___redArg(v_mvarId_126_, v_x_127_, v___y_128_, v___y_129_, v___y_130_, v___y_131_, v___y_132_, v___y_133_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__1___boxed(lean_object* v_00_u03b1_136_, lean_object* v_mvarId_137_, lean_object* v_x_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__1(v_00_u03b1_136_, v_mvarId_137_, v_x_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_);
lean_dec(v___y_144_);
lean_dec_ref(v___y_143_);
lean_dec(v___y_142_);
lean_dec_ref(v___y_141_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__0(lean_object* v_arg_147_, lean_object* v_arg_148_, lean_object* v___x_149_, uint8_t v___x_150_, lean_object* v_ss_151_, lean_object* v___baseTy_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_){
_start:
{
lean_object* v_preApplied_158_; lean_object* v_rhsApplied_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v_preApplied_158_ = l_Lean_mkAppN(v_arg_147_, v_ss_151_);
v_rhsApplied_159_ = l_Lean_mkAppN(v_arg_148_, v_ss_151_);
v___x_160_ = lean_unsigned_to_nat(2u);
v___x_161_ = lean_mk_empty_array_with_capacity(v___x_160_);
v___x_162_ = lean_array_push(v___x_161_, v_preApplied_158_);
v___x_163_ = lean_array_push(v___x_162_, v_rhsApplied_159_);
v___x_164_ = l_Lean_Meta_mkAppM(v___x_149_, v___x_163_, v___y_153_, v___y_154_, v___y_155_, v___y_156_);
if (lean_obj_tag(v___x_164_) == 0)
{
lean_object* v_a_165_; uint8_t v___x_166_; uint8_t v___x_167_; lean_object* v___x_168_; 
v_a_165_ = lean_ctor_get(v___x_164_, 0);
lean_inc(v_a_165_);
lean_dec_ref_known(v___x_164_, 1);
v___x_166_ = 0;
v___x_167_ = 1;
v___x_168_ = l_Lean_Meta_mkForallFVars(v_ss_151_, v_a_165_, v___x_166_, v___x_150_, v___x_150_, v___x_167_, v___y_153_, v___y_154_, v___y_155_, v___y_156_);
return v___x_168_;
}
else
{
return v___x_164_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__0___boxed(lean_object* v_arg_169_, lean_object* v_arg_170_, lean_object* v___x_171_, lean_object* v___x_172_, lean_object* v_ss_173_, lean_object* v___baseTy_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_){
_start:
{
uint8_t v___x_5019__boxed_180_; lean_object* v_res_181_; 
v___x_5019__boxed_180_ = lean_unbox(v___x_172_);
v_res_181_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__0(v_arg_169_, v_arg_170_, v___x_171_, v___x_5019__boxed_180_, v_ss_173_, v___baseTy_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
lean_dec(v___y_178_);
lean_dec_ref(v___y_177_);
lean_dec(v___y_176_);
lean_dec_ref(v___y_175_);
lean_dec_ref(v___baseTy_174_);
lean_dec_ref(v_ss_173_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1(lean_object* v_mvarId_193_, lean_object* v_goal_194_, lean_object* v_toGoalState_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_){
_start:
{
lean_object* v___x_203_; 
lean_inc(v_mvarId_193_);
v___x_203_ = l_Lean_MVarId_getType(v_mvarId_193_, v___y_198_, v___y_199_, v___y_200_, v___y_201_);
if (lean_obj_tag(v___x_203_) == 0)
{
lean_object* v_a_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_297_; 
v_a_204_ = lean_ctor_get(v___x_203_, 0);
v_isSharedCheck_297_ = !lean_is_exclusive(v___x_203_);
if (v_isSharedCheck_297_ == 0)
{
v___x_206_ = v___x_203_;
v_isShared_207_ = v_isSharedCheck_297_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_a_204_);
lean_dec(v___x_203_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_297_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
lean_object* v___x_208_; uint8_t v___x_209_; 
v___x_208_ = l_Lean_Expr_cleanupAnnotations(v_a_204_);
v___x_209_ = l_Lean_Expr_isApp(v___x_208_);
if (v___x_209_ == 0)
{
lean_object* v___x_211_; 
lean_dec_ref(v___x_208_);
lean_dec_ref(v_toGoalState_195_);
lean_dec(v_mvarId_193_);
if (v_isShared_207_ == 0)
{
lean_ctor_set(v___x_206_, 0, v_goal_194_);
v___x_211_ = v___x_206_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v_goal_194_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
return v___x_211_;
}
}
else
{
lean_object* v_arg_213_; lean_object* v___x_214_; uint8_t v___x_215_; 
v_arg_213_ = lean_ctor_get(v___x_208_, 1);
lean_inc_ref(v_arg_213_);
v___x_214_ = l_Lean_Expr_appFnCleanup___redArg(v___x_208_);
v___x_215_ = l_Lean_Expr_isApp(v___x_214_);
if (v___x_215_ == 0)
{
lean_object* v___x_217_; 
lean_dec_ref(v___x_214_);
lean_dec_ref(v_arg_213_);
lean_dec_ref(v_toGoalState_195_);
lean_dec(v_mvarId_193_);
if (v_isShared_207_ == 0)
{
lean_ctor_set(v___x_206_, 0, v_goal_194_);
v___x_217_ = v___x_206_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v_goal_194_);
v___x_217_ = v_reuseFailAlloc_218_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
return v___x_217_;
}
}
else
{
lean_object* v_arg_219_; lean_object* v___x_220_; uint8_t v___x_221_; 
v_arg_219_ = lean_ctor_get(v___x_214_, 1);
lean_inc_ref(v_arg_219_);
v___x_220_ = l_Lean_Expr_appFnCleanup___redArg(v___x_214_);
v___x_221_ = l_Lean_Expr_isApp(v___x_220_);
if (v___x_221_ == 0)
{
lean_object* v___x_223_; 
lean_dec_ref(v___x_220_);
lean_dec_ref(v_arg_219_);
lean_dec_ref(v_arg_213_);
lean_dec_ref(v_toGoalState_195_);
lean_dec(v_mvarId_193_);
if (v_isShared_207_ == 0)
{
lean_ctor_set(v___x_206_, 0, v_goal_194_);
v___x_223_ = v___x_206_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v_goal_194_);
v___x_223_ = v_reuseFailAlloc_224_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
return v___x_223_;
}
}
else
{
lean_object* v___x_225_; uint8_t v___x_226_; 
v___x_225_ = l_Lean_Expr_appFnCleanup___redArg(v___x_220_);
v___x_226_ = l_Lean_Expr_isApp(v___x_225_);
if (v___x_226_ == 0)
{
lean_object* v___x_228_; 
lean_dec_ref(v___x_225_);
lean_dec_ref(v_arg_219_);
lean_dec_ref(v_arg_213_);
lean_dec_ref(v_toGoalState_195_);
lean_dec(v_mvarId_193_);
if (v_isShared_207_ == 0)
{
lean_ctor_set(v___x_206_, 0, v_goal_194_);
v___x_228_ = v___x_206_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v_goal_194_);
v___x_228_ = v_reuseFailAlloc_229_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
return v___x_228_;
}
}
else
{
lean_object* v_arg_230_; lean_object* v___x_231_; lean_object* v___x_232_; uint8_t v___x_233_; 
v_arg_230_ = lean_ctor_get(v___x_225_, 1);
lean_inc_ref(v_arg_230_);
v___x_231_ = l_Lean_Expr_appFnCleanup___redArg(v___x_225_);
v___x_232_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__4));
v___x_233_ = l_Lean_Expr_isConstOf(v___x_231_, v___x_232_);
lean_dec_ref(v___x_231_);
if (v___x_233_ == 0)
{
lean_object* v___x_235_; 
lean_dec_ref(v_arg_230_);
lean_dec_ref(v_arg_219_);
lean_dec_ref(v_arg_213_);
lean_dec_ref(v_toGoalState_195_);
lean_dec(v_mvarId_193_);
if (v_isShared_207_ == 0)
{
lean_ctor_set(v___x_206_, 0, v_goal_194_);
v___x_235_ = v___x_206_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_goal_194_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
else
{
uint8_t v___x_237_; 
v___x_237_ = l_Lean_Expr_isForall(v_arg_230_);
if (v___x_237_ == 0)
{
lean_object* v___x_239_; 
lean_dec_ref(v_arg_230_);
lean_dec_ref(v_arg_219_);
lean_dec_ref(v_arg_213_);
lean_dec_ref(v_toGoalState_195_);
lean_dec(v_mvarId_193_);
if (v_isShared_207_ == 0)
{
lean_ctor_set(v___x_206_, 0, v_goal_194_);
v___x_239_ = v___x_206_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v_goal_194_);
v___x_239_ = v_reuseFailAlloc_240_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
return v___x_239_;
}
}
else
{
lean_object* v___x_241_; lean_object* v___f_242_; uint8_t v___x_243_; lean_object* v___x_244_; 
lean_del_object(v___x_206_);
lean_dec_ref(v_goal_194_);
v___x_241_ = lean_box(v___x_233_);
v___f_242_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__0___boxed), 11, 4);
lean_closure_set(v___f_242_, 0, v_arg_219_);
lean_closure_set(v___f_242_, 1, v_arg_213_);
lean_closure_set(v___f_242_, 2, v___x_232_);
lean_closure_set(v___f_242_, 3, v___x_241_);
v___x_243_ = 0;
v___x_244_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__0___redArg(v_arg_230_, v___f_242_, v___x_243_, v___y_198_, v___y_199_, v___y_200_, v___y_201_);
if (lean_obj_tag(v___x_244_) == 0)
{
lean_object* v_a_245_; lean_object* v___x_246_; 
v_a_245_ = lean_ctor_get(v___x_244_, 0);
lean_inc(v_a_245_);
lean_dec_ref_known(v___x_244_, 1);
v___x_246_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_245_, v___y_197_);
if (lean_obj_tag(v___x_246_) == 0)
{
lean_object* v_a_247_; lean_object* v___x_248_; 
v_a_247_ = lean_ctor_get(v___x_246_, 0);
lean_inc(v_a_247_);
lean_dec_ref_known(v___x_246_, 1);
v___x_248_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_193_, v_a_247_, v___y_198_, v___y_199_, v___y_200_, v___y_201_);
if (lean_obj_tag(v___x_248_) == 0)
{
lean_object* v_a_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v_a_249_ = lean_ctor_get(v___x_248_, 0);
lean_inc(v_a_249_);
lean_dec_ref_known(v___x_248_, 1);
v___x_250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_250_, 0, v_toGoalState_195_);
lean_ctor_set(v___x_250_, 1, v_a_249_);
v___x_251_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__5));
lean_inc_ref(v___x_250_);
v___x_252_ = l_Lean_Meta_Grind_Goal_intros(v___x_250_, v___x_251_, v___y_196_, v___y_197_, v___y_198_, v___y_199_, v___y_200_, v___y_201_);
if (lean_obj_tag(v___x_252_) == 0)
{
lean_object* v_a_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_264_; 
v_a_253_ = lean_ctor_get(v___x_252_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_264_ == 0)
{
v___x_255_ = v___x_252_;
v_isShared_256_ = v_isSharedCheck_264_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_a_253_);
lean_dec(v___x_252_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_264_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
if (lean_obj_tag(v_a_253_) == 1)
{
lean_object* v_goal_257_; lean_object* v___x_259_; 
lean_dec_ref_known(v___x_250_, 2);
v_goal_257_ = lean_ctor_get(v_a_253_, 1);
lean_inc_ref(v_goal_257_);
lean_dec_ref_known(v_a_253_, 2);
if (v_isShared_256_ == 0)
{
lean_ctor_set(v___x_255_, 0, v_goal_257_);
v___x_259_ = v___x_255_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_goal_257_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
else
{
lean_object* v___x_262_; 
lean_dec(v_a_253_);
if (v_isShared_256_ == 0)
{
lean_ctor_set(v___x_255_, 0, v___x_250_);
v___x_262_ = v___x_255_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v___x_250_);
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
else
{
lean_object* v_a_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_272_; 
lean_dec_ref_known(v___x_250_, 2);
v_a_265_ = lean_ctor_get(v___x_252_, 0);
v_isSharedCheck_272_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_272_ == 0)
{
v___x_267_ = v___x_252_;
v_isShared_268_ = v_isSharedCheck_272_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_a_265_);
lean_dec(v___x_252_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_272_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___x_270_; 
if (v_isShared_268_ == 0)
{
v___x_270_ = v___x_267_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v_a_265_);
v___x_270_ = v_reuseFailAlloc_271_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
return v___x_270_;
}
}
}
}
else
{
lean_object* v_a_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_280_; 
lean_dec_ref(v_toGoalState_195_);
v_a_273_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_280_ == 0)
{
v___x_275_ = v___x_248_;
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_a_273_);
lean_dec(v___x_248_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_278_; 
if (v_isShared_276_ == 0)
{
v___x_278_ = v___x_275_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_a_273_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
}
else
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_288_; 
lean_dec_ref(v_toGoalState_195_);
lean_dec(v_mvarId_193_);
v_a_281_ = lean_ctor_get(v___x_246_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_246_);
if (v_isSharedCheck_288_ == 0)
{
v___x_283_ = v___x_246_;
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_246_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_284_ == 0)
{
v___x_286_ = v___x_283_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_a_281_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
else
{
lean_object* v_a_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_296_; 
lean_dec_ref(v_toGoalState_195_);
lean_dec(v_mvarId_193_);
v_a_289_ = lean_ctor_get(v___x_244_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_244_);
if (v_isSharedCheck_296_ == 0)
{
v___x_291_ = v___x_244_;
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_a_289_);
lean_dec(v___x_244_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_294_; 
if (v_isShared_292_ == 0)
{
v___x_294_ = v___x_291_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_a_289_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
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
lean_object* v_a_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_305_; 
lean_dec_ref(v_toGoalState_195_);
lean_dec_ref(v_goal_194_);
lean_dec(v_mvarId_193_);
v_a_298_ = lean_ctor_get(v___x_203_, 0);
v_isSharedCheck_305_ = !lean_is_exclusive(v___x_203_);
if (v_isSharedCheck_305_ == 0)
{
v___x_300_ = v___x_203_;
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_a_298_);
lean_dec(v___x_203_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v___x_303_; 
if (v_isShared_301_ == 0)
{
v___x_303_ = v___x_300_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v_a_298_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___boxed(lean_object* v_mvarId_306_, lean_object* v_goal_307_, lean_object* v_toGoalState_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1(v_mvarId_306_, v_goal_307_, v_toGoalState_308_, v___y_309_, v___y_310_, v___y_311_, v___y_312_, v___y_313_, v___y_314_);
lean_dec(v___y_314_);
lean_dec_ref(v___y_313_);
lean_dec(v___y_312_);
lean_dec_ref(v___y_311_);
lean_dec(v___y_310_);
lean_dec_ref(v___y_309_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs(lean_object* v_goal_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_){
_start:
{
lean_object* v_toGoalState_325_; lean_object* v_mvarId_326_; lean_object* v___f_327_; lean_object* v___x_328_; 
v_toGoalState_325_ = lean_ctor_get(v_goal_317_, 0);
lean_inc_ref(v_toGoalState_325_);
v_mvarId_326_ = lean_ctor_get(v_goal_317_, 1);
lean_inc_n(v_mvarId_326_, 2);
v___f_327_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___boxed), 10, 3);
lean_closure_set(v___f_327_, 0, v_mvarId_326_);
lean_closure_set(v___f_327_, 1, v_goal_317_);
lean_closure_set(v___f_327_, 2, v_toGoalState_325_);
v___x_328_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__1___redArg(v_mvarId_326_, v___f_327_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___boxed(lean_object* v_goal_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs(v_goal_329_, v_a_330_, v_a_331_, v_a_332_, v_a_333_, v_a_334_, v_a_335_);
lean_dec(v_a_335_);
lean_dec_ref(v_a_334_);
lean_dec(v_a_333_);
lean_dec_ref(v_a_332_);
lean_dec(v_a_331_);
lean_dec_ref(v_a_330_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre_spec__0_spec__0(lean_object* v_msgData_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_){
_start:
{
lean_object* v___x_344_; lean_object* v_env_345_; lean_object* v___x_346_; lean_object* v_mctx_347_; lean_object* v_lctx_348_; lean_object* v_options_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_344_ = lean_st_ref_get(v___y_342_);
v_env_345_ = lean_ctor_get(v___x_344_, 0);
lean_inc_ref(v_env_345_);
lean_dec(v___x_344_);
v___x_346_ = lean_st_ref_get(v___y_340_);
v_mctx_347_ = lean_ctor_get(v___x_346_, 0);
lean_inc_ref(v_mctx_347_);
lean_dec(v___x_346_);
v_lctx_348_ = lean_ctor_get(v___y_339_, 2);
v_options_349_ = lean_ctor_get(v___y_341_, 2);
lean_inc_ref(v_options_349_);
lean_inc_ref(v_lctx_348_);
v___x_350_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_350_, 0, v_env_345_);
lean_ctor_set(v___x_350_, 1, v_mctx_347_);
lean_ctor_set(v___x_350_, 2, v_lctx_348_);
lean_ctor_set(v___x_350_, 3, v_options_349_);
v___x_351_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
lean_ctor_set(v___x_351_, 1, v_msgData_338_);
v___x_352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_352_, 0, v___x_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre_spec__0_spec__0___boxed(lean_object* v_msgData_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre_spec__0_spec__0(v_msgData_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
lean_dec(v___y_355_);
lean_dec_ref(v___y_354_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre_spec__0___redArg(lean_object* v_msg_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_){
_start:
{
lean_object* v_ref_366_; lean_object* v___x_367_; lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_376_; 
v_ref_366_ = lean_ctor_get(v___y_363_, 5);
v___x_367_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre_spec__0_spec__0(v_msg_360_, v___y_361_, v___y_362_, v___y_363_, v___y_364_);
v_a_368_ = lean_ctor_get(v___x_367_, 0);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_376_ == 0)
{
v___x_370_ = v___x_367_;
v_isShared_371_ = v_isSharedCheck_376_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_367_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_376_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_372_; lean_object* v___x_374_; 
lean_inc(v_ref_366_);
v___x_372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_372_, 0, v_ref_366_);
lean_ctor_set(v___x_372_, 1, v_a_368_);
if (v_isShared_371_ == 0)
{
lean_ctor_set_tag(v___x_370_, 1);
lean_ctor_set(v___x_370_, 0, v___x_372_);
v___x_374_ = v___x_370_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v___x_372_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre_spec__0___redArg___boxed(lean_object* v_msg_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre_spec__0___redArg(v_msg_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
return v_res_383_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___closed__1(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_385_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___closed__0));
v___x_386_ = l_Lean_stringToMessageData(v___x_385_);
return v___x_386_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___closed__3(void){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_388_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___closed__2));
v___x_389_ = l_Lean_stringToMessageData(v___x_388_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0(lean_object* v_goal_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_){
_start:
{
lean_object* v___x_399_; 
v___x_399_ = l_Lean_Meta_Sym_BackwardRule_apply(v_goal_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_, v___y_397_);
if (lean_obj_tag(v___x_399_) == 0)
{
lean_object* v_a_400_; lean_object* v___y_402_; lean_object* v___y_403_; lean_object* v___y_404_; lean_object* v___y_405_; lean_object* v___y_406_; lean_object* v___y_407_; 
v_a_400_ = lean_ctor_get(v___x_399_, 0);
lean_inc(v_a_400_);
lean_dec_ref_known(v___x_399_, 1);
if (lean_obj_tag(v_a_400_) == 1)
{
lean_object* v_mvarIds_410_; 
v_mvarIds_410_ = lean_ctor_get(v_a_400_, 0);
lean_inc(v_mvarIds_410_);
lean_dec_ref_known(v_a_400_, 1);
if (lean_obj_tag(v_mvarIds_410_) == 1)
{
lean_object* v_tail_411_; 
v_tail_411_ = lean_ctor_get(v_mvarIds_410_, 1);
if (lean_obj_tag(v_tail_411_) == 0)
{
lean_object* v_head_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v_head_412_ = lean_ctor_get(v_mvarIds_410_, 0);
lean_inc(v_head_412_);
lean_dec_ref_known(v_mvarIds_410_, 2);
v___x_413_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__5));
v___x_414_ = l_Lean_Meta_Sym_intros(v_head_412_, v___x_413_, v___y_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_, v___y_397_);
if (lean_obj_tag(v___x_414_) == 0)
{
lean_object* v_a_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_425_; 
v_a_415_ = lean_ctor_get(v___x_414_, 0);
v_isSharedCheck_425_ = !lean_is_exclusive(v___x_414_);
if (v_isSharedCheck_425_ == 0)
{
v___x_417_ = v___x_414_;
v_isShared_418_ = v_isSharedCheck_425_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_a_415_);
lean_dec(v___x_414_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_425_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
if (lean_obj_tag(v_a_415_) == 1)
{
lean_object* v_mvarId_419_; lean_object* v___x_421_; 
v_mvarId_419_ = lean_ctor_get(v_a_415_, 1);
lean_inc(v_mvarId_419_);
lean_dec_ref_known(v_a_415_, 2);
if (v_isShared_418_ == 0)
{
lean_ctor_set(v___x_417_, 0, v_mvarId_419_);
v___x_421_ = v___x_417_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v_mvarId_419_);
v___x_421_ = v_reuseFailAlloc_422_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
return v___x_421_;
}
}
else
{
lean_object* v___x_423_; lean_object* v___x_424_; 
lean_del_object(v___x_417_);
lean_dec(v_a_415_);
v___x_423_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___closed__3, &l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___closed__3);
v___x_424_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre_spec__0___redArg(v___x_423_, v___y_394_, v___y_395_, v___y_396_, v___y_397_);
return v___x_424_;
}
}
}
else
{
lean_object* v_a_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_433_; 
v_a_426_ = lean_ctor_get(v___x_414_, 0);
v_isSharedCheck_433_ = !lean_is_exclusive(v___x_414_);
if (v_isSharedCheck_433_ == 0)
{
v___x_428_ = v___x_414_;
v_isShared_429_ = v_isSharedCheck_433_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_a_426_);
lean_dec(v___x_414_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_433_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v___x_431_; 
if (v_isShared_429_ == 0)
{
v___x_431_ = v___x_428_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_a_426_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
}
}
}
}
else
{
lean_dec_ref_known(v_mvarIds_410_, 2);
v___y_402_ = v___y_392_;
v___y_403_ = v___y_393_;
v___y_404_ = v___y_394_;
v___y_405_ = v___y_395_;
v___y_406_ = v___y_396_;
v___y_407_ = v___y_397_;
goto v___jp_401_;
}
}
else
{
lean_dec(v_mvarIds_410_);
v___y_402_ = v___y_392_;
v___y_403_ = v___y_393_;
v___y_404_ = v___y_394_;
v___y_405_ = v___y_395_;
v___y_406_ = v___y_396_;
v___y_407_ = v___y_397_;
goto v___jp_401_;
}
}
else
{
lean_dec(v_a_400_);
v___y_402_ = v___y_392_;
v___y_403_ = v___y_393_;
v___y_404_ = v___y_394_;
v___y_405_ = v___y_395_;
v___y_406_ = v___y_396_;
v___y_407_ = v___y_397_;
goto v___jp_401_;
}
v___jp_401_:
{
lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_408_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___closed__1);
v___x_409_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre_spec__0___redArg(v___x_408_, v___y_404_, v___y_405_, v___y_406_, v___y_407_);
return v___x_409_;
}
}
else
{
lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_441_; 
v_a_434_ = lean_ctor_get(v___x_399_, 0);
v_isSharedCheck_441_ = !lean_is_exclusive(v___x_399_);
if (v_isSharedCheck_441_ == 0)
{
v___x_436_ = v___x_399_;
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_dec(v___x_399_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_439_; 
if (v_isShared_437_ == 0)
{
v___x_439_ = v___x_436_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_a_434_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___boxed(lean_object* v_goal_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0(v_goal_442_, v___y_443_, v___y_444_, v___y_445_, v___y_446_, v___y_447_, v___y_448_, v___y_449_);
lean_dec(v___y_449_);
lean_dec_ref(v___y_448_);
lean_dec(v___y_447_);
lean_dec_ref(v___y_446_);
lean_dec(v___y_445_);
lean_dec_ref(v___y_444_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre(lean_object* v_rules_452_, uint8_t v_ofProp_453_, lean_object* v_goal_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_, lean_object* v_a_458_, lean_object* v_a_459_, lean_object* v_a_460_){
_start:
{
lean_object* v___y_463_; 
if (v_ofProp_453_ == 0)
{
lean_object* v_propPreIntro_466_; 
v_propPreIntro_466_ = lean_ctor_get(v_rules_452_, 3);
lean_inc_ref(v_propPreIntro_466_);
lean_dec_ref(v_rules_452_);
v___y_463_ = v_propPreIntro_466_;
goto v___jp_462_;
}
else
{
lean_object* v_ofPropPreIntro_467_; 
v_ofPropPreIntro_467_ = lean_ctor_get(v_rules_452_, 4);
lean_inc_ref(v_ofPropPreIntro_467_);
lean_dec_ref(v_rules_452_);
v___y_463_ = v_ofPropPreIntro_467_;
goto v___jp_462_;
}
v___jp_462_:
{
lean_object* v___f_464_; lean_object* v___x_465_; 
lean_inc(v_goal_454_);
v___f_464_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___lam__0___boxed), 9, 2);
lean_closure_set(v___f_464_, 0, v_goal_454_);
lean_closure_set(v___f_464_, 1, v___y_463_);
v___x_465_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__1___redArg(v_goal_454_, v___f_464_, v_a_455_, v_a_456_, v_a_457_, v_a_458_, v_a_459_, v_a_460_);
return v___x_465_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre___boxed(lean_object* v_rules_468_, lean_object* v_ofProp_469_, lean_object* v_goal_470_, lean_object* v_a_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_){
_start:
{
uint8_t v_ofProp_boxed_478_; lean_object* v_res_479_; 
v_ofProp_boxed_478_ = lean_unbox(v_ofProp_469_);
v_res_479_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre(v_rules_468_, v_ofProp_boxed_478_, v_goal_470_, v_a_471_, v_a_472_, v_a_473_, v_a_474_, v_a_475_, v_a_476_);
lean_dec(v_a_476_);
lean_dec_ref(v_a_475_);
lean_dec(v_a_474_);
lean_dec_ref(v_a_473_);
lean_dec(v_a_472_);
lean_dec_ref(v_a_471_);
return v_res_479_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre_spec__0(lean_object* v_00_u03b1_480_, lean_object* v_msg_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_){
_start:
{
lean_object* v___x_489_; 
v___x_489_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre_spec__0___redArg(v_msg_481_, v___y_484_, v___y_485_, v___y_486_, v___y_487_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre_spec__0___boxed(lean_object* v_00_u03b1_490_, lean_object* v_msg_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre_spec__0(v_00_u03b1_490_, v_msg_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_);
lean_dec(v___y_497_);
lean_dec_ref(v___y_496_);
lean_dec(v___y_495_);
lean_dec_ref(v___y_494_);
lean_dec(v___y_493_);
lean_dec_ref(v___y_492_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_ctorIdx(lean_object* v_x_500_){
_start:
{
switch(lean_obj_tag(v_x_500_))
{
case 0:
{
lean_object* v___x_501_; 
v___x_501_ = lean_unsigned_to_nat(0u);
return v___x_501_;
}
case 1:
{
lean_object* v___x_502_; 
v___x_502_ = lean_unsigned_to_nat(1u);
return v___x_502_;
}
default: 
{
lean_object* v___x_503_; 
v___x_503_ = lean_unsigned_to_nat(2u);
return v___x_503_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_ctorIdx___boxed(lean_object* v_x_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_ctorIdx(v_x_504_);
lean_dec(v_x_504_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_ctorElim___redArg(lean_object* v_t_506_, lean_object* v_k_507_){
_start:
{
if (lean_obj_tag(v_t_506_) == 1)
{
lean_object* v_goal_508_; lean_object* v___x_509_; 
v_goal_508_ = lean_ctor_get(v_t_506_, 0);
lean_inc(v_goal_508_);
lean_dec_ref_known(v_t_506_, 1);
v___x_509_ = lean_apply_1(v_k_507_, v_goal_508_);
return v___x_509_;
}
else
{
lean_dec(v_t_506_);
return v_k_507_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_ctorElim(lean_object* v_motive_510_, lean_object* v_ctorIdx_511_, lean_object* v_t_512_, lean_object* v_h_513_, lean_object* v_k_514_){
_start:
{
lean_object* v___x_515_; 
v___x_515_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_ctorElim___redArg(v_t_512_, v_k_514_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_ctorElim___boxed(lean_object* v_motive_516_, lean_object* v_ctorIdx_517_, lean_object* v_t_518_, lean_object* v_h_519_, lean_object* v_k_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_ctorElim(v_motive_516_, v_ctorIdx_517_, v_t_518_, v_h_519_, v_k_520_);
lean_dec(v_ctorIdx_517_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_closed_elim___redArg(lean_object* v_t_522_, lean_object* v_closed_523_){
_start:
{
lean_object* v___x_524_; 
v___x_524_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_ctorElim___redArg(v_t_522_, v_closed_523_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_closed_elim(lean_object* v_motive_525_, lean_object* v_t_526_, lean_object* v_h_527_, lean_object* v_closed_528_){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_ctorElim___redArg(v_t_526_, v_closed_528_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_goal_elim___redArg(lean_object* v_t_530_, lean_object* v_goal_531_){
_start:
{
lean_object* v___x_532_; 
v___x_532_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_ctorElim___redArg(v_t_530_, v_goal_531_);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_goal_elim(lean_object* v_motive_533_, lean_object* v_t_534_, lean_object* v_h_535_, lean_object* v_goal_536_){
_start:
{
lean_object* v___x_537_; 
v___x_537_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_ctorElim___redArg(v_t_534_, v_goal_536_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_failed_elim___redArg(lean_object* v_t_538_, lean_object* v_failed_539_){
_start:
{
lean_object* v___x_540_; 
v___x_540_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_ctorElim___redArg(v_t_538_, v_failed_539_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_failed_elim(lean_object* v_motive_541_, lean_object* v_t_542_, lean_object* v_h_543_, lean_object* v_failed_544_){
_start:
{
lean_object* v___x_545_; 
v___x_545_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SimpGoalResult_ctorElim___redArg(v_t_542_, v_failed_544_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_simpGoal___redArg(lean_object* v_goal_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_){
_start:
{
lean_object* v_simpMethods_560_; 
v_simpMethods_560_ = lean_ctor_get(v_a_551_, 3);
if (lean_obj_tag(v_simpMethods_560_) == 1)
{
lean_object* v_val_561_; lean_object* v___x_562_; 
v_val_561_ = lean_ctor_get(v_simpMethods_560_, 0);
lean_inc(v_goal_550_);
v___x_562_ = l_Lean_MVarId_getDecl(v_goal_550_, v_a_555_, v_a_556_, v_a_557_, v_a_558_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v_a_563_; lean_object* v___x_564_; lean_object* v_post_565_; lean_object* v_type_566_; lean_object* v_simpState_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v_a_563_ = lean_ctor_get(v___x_562_, 0);
lean_inc(v_a_563_);
lean_dec_ref_known(v___x_562_, 1);
v___x_564_ = lean_st_ref_get(v_a_552_);
v_post_565_ = lean_ctor_get(v_val_561_, 1);
v_type_566_ = lean_ctor_get(v_a_563_, 2);
lean_inc_ref(v_type_566_);
lean_dec(v_a_563_);
v_simpState_567_ = lean_ctor_get(v___x_564_, 5);
lean_inc_ref(v_simpState_567_);
lean_dec(v___x_564_);
v___x_568_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_simpGoal___redArg___closed__0));
lean_inc_ref(v_post_565_);
v___x_569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_569_, 0, v___x_568_);
lean_ctor_set(v___x_569_, 1, v_post_565_);
v___x_570_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_570_, 0, v_type_566_);
v___x_571_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_simpGoal___redArg___closed__1));
v___x_572_ = l_Lean_Meta_Sym_Simp_SimpM_run___redArg(v___x_570_, v___x_569_, v___x_571_, v_simpState_567_, v_a_553_, v_a_554_, v_a_555_, v_a_556_, v_a_557_, v_a_558_);
if (lean_obj_tag(v___x_572_) == 0)
{
lean_object* v_a_573_; lean_object* v_fst_574_; lean_object* v_snd_575_; lean_object* v___x_576_; lean_object* v_specBackwardRuleCache_577_; lean_object* v_splitBackwardRuleCache_578_; lean_object* v_logicBackwardRuleCache_579_; lean_object* v_invariants_580_; lean_object* v_vcs_581_; lean_object* v_jps_582_; lean_object* v_fuel_583_; lean_object* v_inlineHandledInvariants_584_; uint8_t v_dischTacFailed_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_626_; 
v_a_573_ = lean_ctor_get(v___x_572_, 0);
lean_inc(v_a_573_);
lean_dec_ref_known(v___x_572_, 1);
v_fst_574_ = lean_ctor_get(v_a_573_, 0);
lean_inc(v_fst_574_);
v_snd_575_ = lean_ctor_get(v_a_573_, 1);
lean_inc(v_snd_575_);
lean_dec(v_a_573_);
v___x_576_ = lean_st_ref_take(v_a_552_);
v_specBackwardRuleCache_577_ = lean_ctor_get(v___x_576_, 0);
v_splitBackwardRuleCache_578_ = lean_ctor_get(v___x_576_, 1);
v_logicBackwardRuleCache_579_ = lean_ctor_get(v___x_576_, 2);
v_invariants_580_ = lean_ctor_get(v___x_576_, 3);
v_vcs_581_ = lean_ctor_get(v___x_576_, 4);
v_jps_582_ = lean_ctor_get(v___x_576_, 6);
v_fuel_583_ = lean_ctor_get(v___x_576_, 7);
v_inlineHandledInvariants_584_ = lean_ctor_get(v___x_576_, 8);
v_dischTacFailed_585_ = lean_ctor_get_uint8(v___x_576_, sizeof(void*)*9);
v_isSharedCheck_626_ = !lean_is_exclusive(v___x_576_);
if (v_isSharedCheck_626_ == 0)
{
lean_object* v_unused_627_; 
v_unused_627_ = lean_ctor_get(v___x_576_, 5);
lean_dec(v_unused_627_);
v___x_587_ = v___x_576_;
v_isShared_588_ = v_isSharedCheck_626_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_inlineHandledInvariants_584_);
lean_inc(v_fuel_583_);
lean_inc(v_jps_582_);
lean_inc(v_vcs_581_);
lean_inc(v_invariants_580_);
lean_inc(v_logicBackwardRuleCache_579_);
lean_inc(v_splitBackwardRuleCache_578_);
lean_inc(v_specBackwardRuleCache_577_);
lean_dec(v___x_576_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_626_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_590_; 
if (v_isShared_588_ == 0)
{
lean_ctor_set(v___x_587_, 5, v_snd_575_);
v___x_590_ = v___x_587_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_specBackwardRuleCache_577_);
lean_ctor_set(v_reuseFailAlloc_625_, 1, v_splitBackwardRuleCache_578_);
lean_ctor_set(v_reuseFailAlloc_625_, 2, v_logicBackwardRuleCache_579_);
lean_ctor_set(v_reuseFailAlloc_625_, 3, v_invariants_580_);
lean_ctor_set(v_reuseFailAlloc_625_, 4, v_vcs_581_);
lean_ctor_set(v_reuseFailAlloc_625_, 5, v_snd_575_);
lean_ctor_set(v_reuseFailAlloc_625_, 6, v_jps_582_);
lean_ctor_set(v_reuseFailAlloc_625_, 7, v_fuel_583_);
lean_ctor_set(v_reuseFailAlloc_625_, 8, v_inlineHandledInvariants_584_);
lean_ctor_set_uint8(v_reuseFailAlloc_625_, sizeof(void*)*9, v_dischTacFailed_585_);
v___x_590_ = v_reuseFailAlloc_625_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_591_ = lean_st_ref_set(v_a_552_, v___x_590_);
lean_inc(v_goal_550_);
v___x_592_ = l_Lean_Meta_Sym_Simp_Result_toSimpGoalResult(v_fst_574_, v_goal_550_, v_a_553_, v_a_554_, v_a_555_, v_a_556_, v_a_557_, v_a_558_);
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_616_; 
v_a_593_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_616_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_616_ == 0)
{
v___x_595_ = v___x_592_;
v_isShared_596_ = v_isSharedCheck_616_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_592_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_616_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
switch(lean_obj_tag(v_a_593_))
{
case 0:
{
lean_object* v___x_597_; lean_object* v___x_599_; 
v___x_597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_597_, 0, v_goal_550_);
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 0, v___x_597_);
v___x_599_ = v___x_595_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v___x_597_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
case 1:
{
lean_object* v___x_601_; lean_object* v___x_603_; 
lean_dec(v_goal_550_);
v___x_601_ = lean_box(0);
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 0, v___x_601_);
v___x_603_ = v___x_595_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v___x_601_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
default: 
{
lean_object* v_mvarId_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_615_; 
lean_dec(v_goal_550_);
v_mvarId_605_ = lean_ctor_get(v_a_593_, 0);
v_isSharedCheck_615_ = !lean_is_exclusive(v_a_593_);
if (v_isSharedCheck_615_ == 0)
{
v___x_607_ = v_a_593_;
v_isShared_608_ = v_isSharedCheck_615_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_mvarId_605_);
lean_dec(v_a_593_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_615_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_610_; 
if (v_isShared_608_ == 0)
{
lean_ctor_set_tag(v___x_607_, 1);
v___x_610_ = v___x_607_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v_mvarId_605_);
v___x_610_ = v_reuseFailAlloc_614_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
lean_object* v___x_612_; 
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 0, v___x_610_);
v___x_612_ = v___x_595_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v___x_610_);
v___x_612_ = v_reuseFailAlloc_613_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
return v___x_612_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_624_; 
lean_dec(v_goal_550_);
v_a_617_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_624_ == 0)
{
v___x_619_ = v___x_592_;
v_isShared_620_ = v_isSharedCheck_624_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_a_617_);
lean_dec(v___x_592_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_624_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_622_; 
if (v_isShared_620_ == 0)
{
v___x_622_ = v___x_619_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v_a_617_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
}
}
}
}
else
{
lean_object* v_a_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_635_; 
lean_dec(v_goal_550_);
v_a_628_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_635_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_635_ == 0)
{
v___x_630_ = v___x_572_;
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_a_628_);
lean_dec(v___x_572_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v___x_633_; 
if (v_isShared_631_ == 0)
{
v___x_633_ = v___x_630_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_a_628_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
return v___x_633_;
}
}
}
}
else
{
lean_object* v_a_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_643_; 
lean_dec(v_goal_550_);
v_a_636_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_643_ == 0)
{
v___x_638_ = v___x_562_;
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_a_636_);
lean_dec(v___x_562_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
lean_object* v___x_641_; 
if (v_isShared_639_ == 0)
{
v___x_641_ = v___x_638_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_a_636_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
}
}
else
{
lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_644_, 0, v_goal_550_);
v___x_645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_645_, 0, v___x_644_);
return v___x_645_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_simpGoal___redArg___boxed(lean_object* v_goal_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_, lean_object* v_a_652_, lean_object* v_a_653_, lean_object* v_a_654_, lean_object* v_a_655_){
_start:
{
lean_object* v_res_656_; 
v_res_656_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_simpGoal___redArg(v_goal_646_, v_a_647_, v_a_648_, v_a_649_, v_a_650_, v_a_651_, v_a_652_, v_a_653_, v_a_654_);
lean_dec(v_a_654_);
lean_dec_ref(v_a_653_);
lean_dec(v_a_652_);
lean_dec_ref(v_a_651_);
lean_dec(v_a_650_);
lean_dec_ref(v_a_649_);
lean_dec(v_a_648_);
lean_dec_ref(v_a_647_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_simpGoal(lean_object* v_goal_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_){
_start:
{
lean_object* v___x_670_; 
v___x_670_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_simpGoal___redArg(v_goal_657_, v_a_658_, v_a_659_, v_a_663_, v_a_664_, v_a_665_, v_a_666_, v_a_667_, v_a_668_);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_simpGoal___boxed(lean_object* v_goal_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_simpGoal(v_goal_671_, v_a_672_, v_a_673_, v_a_674_, v_a_675_, v_a_676_, v_a_677_, v_a_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_);
lean_dec(v_a_682_);
lean_dec_ref(v_a_681_);
lean_dec(v_a_680_);
lean_dec_ref(v_a_679_);
lean_dec(v_a_678_);
lean_dec_ref(v_a_677_);
lean_dec(v_a_676_);
lean_dec_ref(v_a_675_);
lean_dec(v_a_674_);
lean_dec(v_a_673_);
lean_dec_ref(v_a_672_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic_spec__0___redArg___lam__0(lean_object* v_x_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_){
_start:
{
lean_object* v___x_698_; 
lean_inc(v___y_692_);
lean_inc_ref(v___y_691_);
lean_inc(v___y_690_);
lean_inc_ref(v___y_689_);
lean_inc(v___y_688_);
lean_inc(v___y_687_);
lean_inc_ref(v___y_686_);
v___x_698_ = lean_apply_12(v_x_685_, v___y_686_, v___y_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_, lean_box(0));
return v___x_698_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic_spec__0___redArg___lam__0___boxed(lean_object* v_x_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic_spec__0___redArg___lam__0(v_x_699_, v___y_700_, v___y_701_, v___y_702_, v___y_703_, v___y_704_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_);
lean_dec(v___y_706_);
lean_dec_ref(v___y_705_);
lean_dec(v___y_704_);
lean_dec_ref(v___y_703_);
lean_dec(v___y_702_);
lean_dec(v___y_701_);
lean_dec_ref(v___y_700_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic_spec__0___redArg(lean_object* v_mvarId_713_, lean_object* v_x_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_){
_start:
{
lean_object* v___f_727_; lean_object* v___x_728_; 
lean_inc(v___y_721_);
lean_inc_ref(v___y_720_);
lean_inc(v___y_719_);
lean_inc_ref(v___y_718_);
lean_inc(v___y_717_);
lean_inc(v___y_716_);
lean_inc_ref(v___y_715_);
v___f_727_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic_spec__0___redArg___lam__0___boxed), 13, 8);
lean_closure_set(v___f_727_, 0, v_x_714_);
lean_closure_set(v___f_727_, 1, v___y_715_);
lean_closure_set(v___f_727_, 2, v___y_716_);
lean_closure_set(v___f_727_, 3, v___y_717_);
lean_closure_set(v___f_727_, 4, v___y_718_);
lean_closure_set(v___f_727_, 5, v___y_719_);
lean_closure_set(v___f_727_, 6, v___y_720_);
lean_closure_set(v___f_727_, 7, v___y_721_);
v___x_728_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_713_, v___f_727_, v___y_722_, v___y_723_, v___y_724_, v___y_725_);
if (lean_obj_tag(v___x_728_) == 0)
{
return v___x_728_;
}
else
{
lean_object* v_a_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_736_; 
v_a_729_ = lean_ctor_get(v___x_728_, 0);
v_isSharedCheck_736_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_736_ == 0)
{
v___x_731_ = v___x_728_;
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_a_729_);
lean_dec(v___x_728_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_734_; 
if (v_isShared_732_ == 0)
{
v___x_734_ = v___x_731_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_a_729_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
return v___x_734_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic_spec__0___redArg___boxed(lean_object* v_mvarId_737_, lean_object* v_x_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic_spec__0___redArg(v_mvarId_737_, v_x_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_, v___y_747_, v___y_748_, v___y_749_);
lean_dec(v___y_749_);
lean_dec_ref(v___y_748_);
lean_dec(v___y_747_);
lean_dec_ref(v___y_746_);
lean_dec(v___y_745_);
lean_dec_ref(v___y_744_);
lean_dec(v___y_743_);
lean_dec_ref(v___y_742_);
lean_dec(v___y_741_);
lean_dec(v___y_740_);
lean_dec_ref(v___y_739_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic_spec__0(lean_object* v_00_u03b1_752_, lean_object* v_mvarId_753_, lean_object* v_x_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_){
_start:
{
lean_object* v___x_767_; 
v___x_767_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic_spec__0___redArg(v_mvarId_753_, v_x_754_, v___y_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_, v___y_761_, v___y_762_, v___y_763_, v___y_764_, v___y_765_);
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic_spec__0___boxed(lean_object* v_00_u03b1_768_, lean_object* v_mvarId_769_, lean_object* v_x_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_){
_start:
{
lean_object* v_res_783_; 
v_res_783_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic_spec__0(v_00_u03b1_768_, v_mvarId_769_, v_x_770_, v___y_771_, v___y_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_, v___y_778_, v___y_779_, v___y_780_, v___y_781_);
lean_dec(v___y_781_);
lean_dec_ref(v___y_780_);
lean_dec(v___y_779_);
lean_dec_ref(v___y_778_);
lean_dec(v___y_777_);
lean_dec_ref(v___y_776_);
lean_dec(v___y_775_);
lean_dec_ref(v___y_774_);
lean_dec(v___y_773_);
lean_dec(v___y_772_);
lean_dec_ref(v___y_771_);
return v_res_783_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic___lam__0(lean_object* v_goal_784_, lean_object* v_override_x3f_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_){
_start:
{
lean_object* v___x_798_; 
lean_inc(v_goal_784_);
v___x_798_ = l_Lean_MVarId_getType(v_goal_784_, v___y_793_, v___y_794_, v___y_795_, v___y_796_);
if (lean_obj_tag(v___x_798_) == 0)
{
lean_object* v_a_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_850_; 
v_a_799_ = lean_ctor_get(v___x_798_, 0);
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_798_);
if (v_isSharedCheck_850_ == 0)
{
v___x_801_ = v___x_798_;
v_isShared_802_ = v_isSharedCheck_850_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_a_799_);
lean_dec(v___x_798_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_850_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___y_804_; lean_object* v_val_842_; 
switch(lean_obj_tag(v_a_799_))
{
case 7:
{
lean_object* v_binderName_844_; 
lean_del_object(v___x_801_);
v_binderName_844_ = lean_ctor_get(v_a_799_, 0);
lean_inc(v_binderName_844_);
lean_dec_ref_known(v_a_799_, 3);
v_val_842_ = v_binderName_844_;
goto v___jp_841_;
}
case 8:
{
lean_object* v_declName_845_; 
lean_del_object(v___x_801_);
v_declName_845_ = lean_ctor_get(v_a_799_, 0);
lean_inc(v_declName_845_);
lean_dec_ref_known(v_a_799_, 4);
v_val_842_ = v_declName_845_;
goto v___jp_841_;
}
default: 
{
lean_object* v___x_846_; lean_object* v___x_848_; 
lean_dec(v_a_799_);
lean_dec(v_override_x3f_785_);
lean_dec(v_goal_784_);
v___x_846_ = lean_box(0);
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 0, v___x_846_);
v___x_848_ = v___x_801_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v___x_846_);
v___x_848_ = v_reuseFailAlloc_849_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
return v___x_848_;
}
}
}
v___jp_803_:
{
lean_object* v___x_805_; 
v___x_805_ = l_Lean_Meta_mkFreshBinderNameForTactic___redArg(v___y_804_, v___y_793_, v___y_795_, v___y_796_);
if (lean_obj_tag(v___x_805_) == 0)
{
lean_object* v_a_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v_a_806_ = lean_ctor_get(v___x_805_, 0);
lean_inc(v_a_806_);
lean_dec_ref_known(v___x_805_, 1);
v___x_807_ = lean_unsigned_to_nat(1u);
v___x_808_ = lean_mk_empty_array_with_capacity(v___x_807_);
v___x_809_ = lean_array_push(v___x_808_, v_a_806_);
v___x_810_ = l_Lean_Meta_Sym_intros(v_goal_784_, v___x_809_, v___y_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_object* v_a_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_824_; 
v_a_811_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_824_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_824_ == 0)
{
v___x_813_ = v___x_810_;
v_isShared_814_ = v_isSharedCheck_824_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_a_811_);
lean_dec(v___x_810_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_824_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
if (lean_obj_tag(v_a_811_) == 1)
{
lean_object* v_mvarId_815_; lean_object* v___x_816_; lean_object* v___x_818_; 
v_mvarId_815_ = lean_ctor_get(v_a_811_, 1);
lean_inc(v_mvarId_815_);
lean_dec_ref_known(v_a_811_, 2);
v___x_816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_816_, 0, v_mvarId_815_);
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 0, v___x_816_);
v___x_818_ = v___x_813_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v___x_816_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
else
{
lean_object* v___x_820_; lean_object* v___x_822_; 
lean_dec(v_a_811_);
v___x_820_ = lean_box(0);
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 0, v___x_820_);
v___x_822_ = v___x_813_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v___x_820_);
v___x_822_ = v_reuseFailAlloc_823_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
return v___x_822_;
}
}
}
}
else
{
lean_object* v_a_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_832_; 
v_a_825_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_832_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_832_ == 0)
{
v___x_827_ = v___x_810_;
v_isShared_828_ = v_isSharedCheck_832_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_a_825_);
lean_dec(v___x_810_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_832_;
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
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v_a_825_);
v___x_830_ = v_reuseFailAlloc_831_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
return v___x_830_;
}
}
}
}
else
{
lean_object* v_a_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_840_; 
lean_dec(v_goal_784_);
v_a_833_ = lean_ctor_get(v___x_805_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v___x_805_);
if (v_isSharedCheck_840_ == 0)
{
v___x_835_ = v___x_805_;
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_a_833_);
lean_dec(v___x_805_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_838_; 
if (v_isShared_836_ == 0)
{
v___x_838_ = v___x_835_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v_a_833_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
}
}
v___jp_841_:
{
if (lean_obj_tag(v_override_x3f_785_) == 0)
{
v___y_804_ = v_val_842_;
goto v___jp_803_;
}
else
{
lean_object* v_val_843_; 
lean_dec(v_val_842_);
v_val_843_ = lean_ctor_get(v_override_x3f_785_, 0);
lean_inc(v_val_843_);
lean_dec_ref_known(v_override_x3f_785_, 1);
v___y_804_ = v_val_843_;
goto v___jp_803_;
}
}
}
}
else
{
lean_object* v_a_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_858_; 
lean_dec(v_override_x3f_785_);
lean_dec(v_goal_784_);
v_a_851_ = lean_ctor_get(v___x_798_, 0);
v_isSharedCheck_858_ = !lean_is_exclusive(v___x_798_);
if (v_isSharedCheck_858_ == 0)
{
v___x_853_ = v___x_798_;
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_a_851_);
lean_dec(v___x_798_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_856_; 
if (v_isShared_854_ == 0)
{
v___x_856_ = v___x_853_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v_a_851_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic___lam__0___boxed(lean_object* v_goal_859_, lean_object* v_override_x3f_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic___lam__0(v_goal_859_, v_override_x3f_860_, v___y_861_, v___y_862_, v___y_863_, v___y_864_, v___y_865_, v___y_866_, v___y_867_, v___y_868_, v___y_869_, v___y_870_, v___y_871_);
lean_dec(v___y_871_);
lean_dec_ref(v___y_870_);
lean_dec(v___y_869_);
lean_dec_ref(v___y_868_);
lean_dec(v___y_867_);
lean_dec_ref(v___y_866_);
lean_dec(v___y_865_);
lean_dec_ref(v___y_864_);
lean_dec(v___y_863_);
lean_dec(v___y_862_);
lean_dec_ref(v___y_861_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic(lean_object* v_goal_874_, lean_object* v_override_x3f_875_, lean_object* v_a_876_, lean_object* v_a_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_){
_start:
{
lean_object* v___f_888_; lean_object* v___x_889_; 
lean_inc(v_goal_874_);
v___f_888_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic___lam__0___boxed), 14, 2);
lean_closure_set(v___f_888_, 0, v_goal_874_);
lean_closure_set(v___f_888_, 1, v_override_x3f_875_);
v___x_889_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic_spec__0___redArg(v_goal_874_, v___f_888_, v_a_876_, v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_, v_a_882_, v_a_883_, v_a_884_, v_a_885_, v_a_886_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic___boxed(lean_object* v_goal_890_, lean_object* v_override_x3f_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_, lean_object* v_a_895_, lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_){
_start:
{
lean_object* v_res_904_; 
v_res_904_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic(v_goal_890_, v_override_x3f_891_, v_a_892_, v_a_893_, v_a_894_, v_a_895_, v_a_896_, v_a_897_, v_a_898_, v_a_899_, v_a_900_, v_a_901_, v_a_902_);
lean_dec(v_a_902_);
lean_dec_ref(v_a_901_);
lean_dec(v_a_900_);
lean_dec_ref(v_a_899_);
lean_dec(v_a_898_);
lean_dec_ref(v_a_897_);
lean_dec(v_a_896_);
lean_dec_ref(v_a_895_);
lean_dec(v_a_894_);
lean_dec(v_a_893_);
lean_dec_ref(v_a_892_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsHygienic(lean_object* v_goal_905_, lean_object* v_overrides_906_, lean_object* v_i_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_){
_start:
{
lean_object* v___y_921_; lean_object* v___x_943_; uint8_t v___x_944_; 
v___x_943_ = lean_array_get_size(v_overrides_906_);
v___x_944_ = lean_nat_dec_lt(v_i_907_, v___x_943_);
if (v___x_944_ == 0)
{
lean_object* v___x_945_; 
v___x_945_ = lean_box(0);
v___y_921_ = v___x_945_;
goto v___jp_920_;
}
else
{
lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_946_ = lean_array_fget_borrowed(v_overrides_906_, v_i_907_);
lean_inc(v___x_946_);
v___x_947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_947_, 0, v___x_946_);
v___y_921_ = v___x_947_;
goto v___jp_920_;
}
v___jp_920_:
{
lean_object* v___x_922_; 
lean_inc(v_goal_905_);
v___x_922_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic(v_goal_905_, v___y_921_, v_a_908_, v_a_909_, v_a_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_, v_a_915_, v_a_916_, v_a_917_, v_a_918_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_934_; 
v_a_923_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_934_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_934_ == 0)
{
v___x_925_ = v___x_922_;
v_isShared_926_ = v_isSharedCheck_934_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v___x_922_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_934_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
if (lean_obj_tag(v_a_923_) == 0)
{
lean_object* v___x_928_; 
lean_dec(v_i_907_);
if (v_isShared_926_ == 0)
{
lean_ctor_set(v___x_925_, 0, v_goal_905_);
v___x_928_ = v___x_925_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_goal_905_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
else
{
lean_object* v_val_930_; lean_object* v___x_931_; lean_object* v___x_932_; 
lean_del_object(v___x_925_);
lean_dec(v_goal_905_);
v_val_930_ = lean_ctor_get(v_a_923_, 0);
lean_inc(v_val_930_);
lean_dec_ref_known(v_a_923_, 1);
v___x_931_ = lean_unsigned_to_nat(1u);
v___x_932_ = lean_nat_add(v_i_907_, v___x_931_);
lean_dec(v_i_907_);
v_goal_905_ = v_val_930_;
v_i_907_ = v___x_932_;
goto _start;
}
}
}
else
{
lean_object* v_a_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_942_; 
lean_dec(v_i_907_);
lean_dec(v_goal_905_);
v_a_935_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_942_ == 0)
{
v___x_937_ = v___x_922_;
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_a_935_);
lean_dec(v___x_922_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v___x_940_; 
if (v_isShared_938_ == 0)
{
v___x_940_ = v___x_937_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v_a_935_);
v___x_940_ = v_reuseFailAlloc_941_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
return v___x_940_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsHygienic___boxed(lean_object* v_goal_948_, lean_object* v_overrides_949_, lean_object* v_i_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_){
_start:
{
lean_object* v_res_963_; 
v_res_963_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_introsHygienic(v_goal_948_, v_overrides_949_, v_i_950_, v_a_951_, v_a_952_, v_a_953_, v_a_954_, v_a_955_, v_a_956_, v_a_957_, v_a_958_, v_a_959_, v_a_960_, v_a_961_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec_ref(v_a_956_);
lean_dec(v_a_955_);
lean_dec_ref(v_a_954_);
lean_dec(v_a_953_);
lean_dec(v_a_952_);
lean_dec_ref(v_a_951_);
lean_dec_ref(v_overrides_949_);
return v_res_963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_introsAndSimp(lean_object* v_goal_964_, lean_object* v_a_965_, lean_object* v_a_966_, lean_object* v_a_967_, lean_object* v_a_968_, lean_object* v_a_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_, lean_object* v_a_973_, lean_object* v_a_974_, lean_object* v_a_975_){
_start:
{
lean_object* v___x_977_; 
v___x_977_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_simpGoal___redArg(v_goal_964_, v_a_965_, v_a_966_, v_a_970_, v_a_971_, v_a_972_, v_a_973_, v_a_974_, v_a_975_);
if (lean_obj_tag(v___x_977_) == 0)
{
lean_object* v_a_978_; 
v_a_978_ = lean_ctor_get(v___x_977_, 0);
lean_inc(v_a_978_);
if (lean_obj_tag(v_a_978_) == 1)
{
lean_object* v_goal_979_; lean_object* v___x_980_; 
lean_dec_ref_known(v___x_977_, 1);
v_goal_979_ = lean_ctor_get(v_a_978_, 0);
lean_inc(v_goal_979_);
v___x_980_ = l_Lean_MVarId_getType(v_goal_979_, v_a_972_, v_a_973_, v_a_974_, v_a_975_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v_a_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_1016_; 
v_a_981_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_983_ = v___x_980_;
v_isShared_984_ = v_isSharedCheck_1016_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_a_981_);
lean_dec(v___x_980_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_1016_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
uint8_t v___x_985_; 
v___x_985_ = l_Lean_Expr_isForall(v_a_981_);
lean_dec(v_a_981_);
if (v___x_985_ == 0)
{
lean_object* v___x_987_; 
if (v_isShared_984_ == 0)
{
lean_ctor_set(v___x_983_, 0, v_a_978_);
v___x_987_ = v___x_983_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_a_978_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
else
{
lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_1014_; 
lean_inc(v_goal_979_);
lean_del_object(v___x_983_);
v_isSharedCheck_1014_ = !lean_is_exclusive(v_a_978_);
if (v_isSharedCheck_1014_ == 0)
{
lean_object* v_unused_1015_; 
v_unused_1015_ = lean_ctor_get(v_a_978_, 0);
lean_dec(v_unused_1015_);
v___x_990_ = v_a_978_;
v_isShared_991_ = v_isSharedCheck_1014_;
goto v_resetjp_989_;
}
else
{
lean_dec(v_a_978_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_1014_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_992_ = lean_unsigned_to_nat(0u);
v___x_993_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__5));
v___x_994_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_introsHygienic(v_goal_979_, v___x_993_, v___x_992_, v_a_965_, v_a_966_, v_a_967_, v_a_968_, v_a_969_, v_a_970_, v_a_971_, v_a_972_, v_a_973_, v_a_974_, v_a_975_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1005_; 
v_a_995_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1005_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_997_ = v___x_994_;
v_isShared_998_ = v_isSharedCheck_1005_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___x_994_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1005_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_1000_; 
if (v_isShared_991_ == 0)
{
lean_ctor_set(v___x_990_, 0, v_a_995_);
v___x_1000_ = v___x_990_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v_a_995_);
v___x_1000_ = v_reuseFailAlloc_1004_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
lean_object* v___x_1002_; 
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 0, v___x_1000_);
v___x_1002_ = v___x_997_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v___x_1000_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
}
}
else
{
lean_object* v_a_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1013_; 
lean_del_object(v___x_990_);
v_a_1006_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1013_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1013_ == 0)
{
v___x_1008_ = v___x_994_;
v_isShared_1009_ = v_isSharedCheck_1013_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_a_1006_);
lean_dec(v___x_994_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1013_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___x_1011_; 
if (v_isShared_1009_ == 0)
{
v___x_1011_ = v___x_1008_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v_a_1006_);
v___x_1011_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
return v___x_1011_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1024_; 
lean_dec_ref_known(v_a_978_, 1);
v_a_1017_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1019_ = v___x_980_;
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_980_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1022_; 
if (v_isShared_1020_ == 0)
{
v___x_1022_ = v___x_1019_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_a_1017_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
}
else
{
lean_dec(v_a_978_);
return v___x_977_;
}
}
else
{
return v___x_977_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_introsAndSimp___boxed(lean_object* v_goal_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_, lean_object* v_a_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_){
_start:
{
lean_object* v_res_1038_; 
v_res_1038_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_VCGenM_introsAndSimp(v_goal_1025_, v_a_1026_, v_a_1027_, v_a_1028_, v_a_1029_, v_a_1030_, v_a_1031_, v_a_1032_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_);
lean_dec(v_a_1036_);
lean_dec_ref(v_a_1035_);
lean_dec(v_a_1034_);
lean_dec_ref(v_a_1033_);
lean_dec(v_a_1032_);
lean_dec_ref(v_a_1031_);
lean_dec(v_a_1030_);
lean_dec_ref(v_a_1029_);
lean_dec(v_a_1028_);
lean_dec(v_a_1027_);
lean_dec_ref(v_a_1026_);
return v_res_1038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg___lam__0(lean_object* v___y_1039_, lean_object* v_mctx_1040_, lean_object* v_cache_1041_, lean_object* v_a_x3f_1042_){
_start:
{
lean_object* v___x_1044_; lean_object* v_zetaDeltaFVarIds_1045_; lean_object* v_postponed_1046_; lean_object* v_diag_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1057_; 
v___x_1044_ = lean_st_ref_take(v___y_1039_);
v_zetaDeltaFVarIds_1045_ = lean_ctor_get(v___x_1044_, 2);
v_postponed_1046_ = lean_ctor_get(v___x_1044_, 3);
v_diag_1047_ = lean_ctor_get(v___x_1044_, 4);
v_isSharedCheck_1057_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1057_ == 0)
{
lean_object* v_unused_1058_; lean_object* v_unused_1059_; 
v_unused_1058_ = lean_ctor_get(v___x_1044_, 1);
lean_dec(v_unused_1058_);
v_unused_1059_ = lean_ctor_get(v___x_1044_, 0);
lean_dec(v_unused_1059_);
v___x_1049_ = v___x_1044_;
v_isShared_1050_ = v_isSharedCheck_1057_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_diag_1047_);
lean_inc(v_postponed_1046_);
lean_inc(v_zetaDeltaFVarIds_1045_);
lean_dec(v___x_1044_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1057_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v___x_1052_; 
if (v_isShared_1050_ == 0)
{
lean_ctor_set(v___x_1049_, 1, v_cache_1041_);
lean_ctor_set(v___x_1049_, 0, v_mctx_1040_);
v___x_1052_ = v___x_1049_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v_mctx_1040_);
lean_ctor_set(v_reuseFailAlloc_1056_, 1, v_cache_1041_);
lean_ctor_set(v_reuseFailAlloc_1056_, 2, v_zetaDeltaFVarIds_1045_);
lean_ctor_set(v_reuseFailAlloc_1056_, 3, v_postponed_1046_);
lean_ctor_set(v_reuseFailAlloc_1056_, 4, v_diag_1047_);
v___x_1052_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1053_ = lean_st_ref_set(v___y_1039_, v___x_1052_);
v___x_1054_ = lean_box(0);
v___x_1055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1054_);
return v___x_1055_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg___lam__0___boxed(lean_object* v___y_1060_, lean_object* v_mctx_1061_, lean_object* v_cache_1062_, lean_object* v_a_x3f_1063_, lean_object* v___y_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg___lam__0(v___y_1060_, v_mctx_1061_, v_cache_1062_, v_a_x3f_1063_);
lean_dec(v_a_x3f_1063_);
lean_dec(v___y_1060_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg(lean_object* v_x_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_){
_start:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v_mctx_1081_; lean_object* v_cache_1082_; lean_object* v___x_1083_; 
v___x_1079_ = lean_st_ref_get(v___y_1075_);
v___x_1080_ = lean_st_ref_get(v___y_1075_);
v_mctx_1081_ = lean_ctor_get(v___x_1079_, 0);
lean_inc_ref(v_mctx_1081_);
lean_dec(v___x_1079_);
v_cache_1082_ = lean_ctor_get(v___x_1080_, 1);
lean_inc_ref(v_cache_1082_);
lean_dec(v___x_1080_);
lean_inc(v___y_1077_);
lean_inc_ref(v___y_1076_);
lean_inc(v___y_1075_);
lean_inc_ref(v___y_1074_);
lean_inc(v___y_1073_);
lean_inc_ref(v___y_1072_);
lean_inc(v___y_1071_);
lean_inc_ref(v___y_1070_);
lean_inc(v___y_1069_);
lean_inc(v___y_1068_);
lean_inc_ref(v___y_1067_);
v___x_1083_ = lean_apply_12(v_x_1066_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_, lean_box(0));
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1100_; 
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1100_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1086_ = v___x_1083_;
v_isShared_1087_ = v_isSharedCheck_1100_;
goto v_resetjp_1085_;
}
else
{
lean_inc(v_a_1084_);
lean_dec(v___x_1083_);
v___x_1086_ = lean_box(0);
v_isShared_1087_ = v_isSharedCheck_1100_;
goto v_resetjp_1085_;
}
v_resetjp_1085_:
{
lean_object* v___x_1089_; 
lean_inc(v_a_1084_);
if (v_isShared_1087_ == 0)
{
lean_ctor_set_tag(v___x_1086_, 1);
v___x_1089_ = v___x_1086_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v_a_1084_);
v___x_1089_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
lean_object* v___x_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1097_; 
v___x_1090_ = l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg___lam__0(v___y_1075_, v_mctx_1081_, v_cache_1082_, v___x_1089_);
lean_dec_ref(v___x_1089_);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1097_ == 0)
{
lean_object* v_unused_1098_; 
v_unused_1098_ = lean_ctor_get(v___x_1090_, 0);
lean_dec(v_unused_1098_);
v___x_1092_ = v___x_1090_;
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
else
{
lean_dec(v___x_1090_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1095_; 
if (v_isShared_1093_ == 0)
{
lean_ctor_set(v___x_1092_, 0, v_a_1084_);
v___x_1095_ = v___x_1092_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v_a_1084_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
return v___x_1095_;
}
}
}
}
}
else
{
lean_object* v_a_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1110_; 
v_a_1101_ = lean_ctor_get(v___x_1083_, 0);
lean_inc(v_a_1101_);
lean_dec_ref_known(v___x_1083_, 1);
v___x_1102_ = lean_box(0);
v___x_1103_ = l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg___lam__0(v___y_1075_, v_mctx_1081_, v_cache_1082_, v___x_1102_);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1103_);
if (v_isSharedCheck_1110_ == 0)
{
lean_object* v_unused_1111_; 
v_unused_1111_ = lean_ctor_get(v___x_1103_, 0);
lean_dec(v_unused_1111_);
v___x_1105_ = v___x_1103_;
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
else
{
lean_dec(v___x_1103_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1108_; 
if (v_isShared_1106_ == 0)
{
lean_ctor_set_tag(v___x_1105_, 1);
lean_ctor_set(v___x_1105_, 0, v_a_1101_);
v___x_1108_ = v___x_1105_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_a_1101_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg___boxed(lean_object* v_x_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_){
_start:
{
lean_object* v_res_1125_; 
v_res_1125_ = l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg(v_x_1112_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_);
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
return v_res_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__0(lean_object* v_00_u03b1_1126_, lean_object* v_x_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_){
_start:
{
lean_object* v___x_1140_; 
v___x_1140_ = l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg(v_x_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_);
return v___x_1140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___boxed(lean_object* v_00_u03b1_1141_, lean_object* v_x_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_){
_start:
{
lean_object* v_res_1155_; 
v_res_1155_ = l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__0(v_00_u03b1_1141_, v_x_1142_, v___y_1143_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_);
lean_dec(v___y_1153_);
lean_dec_ref(v___y_1152_);
lean_dec(v___y_1151_);
lean_dec_ref(v___y_1150_);
lean_dec(v___y_1149_);
lean_dec_ref(v___y_1148_);
lean_dec(v___y_1147_);
lean_dec_ref(v___y_1146_);
lean_dec(v___y_1145_);
lean_dec(v___y_1144_);
lean_dec_ref(v___y_1143_);
return v_res_1155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_applyChecked___lam__0(lean_object* v_a_1156_, lean_object* v___x_1157_, lean_object* v_rule_1158_, uint8_t v___x_1159_, uint8_t v_debug_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_){
_start:
{
lean_object* v___x_1173_; 
v___x_1173_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_1156_, v___x_1157_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
if (lean_obj_tag(v___x_1173_) == 0)
{
lean_object* v_a_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; 
v_a_1174_ = lean_ctor_get(v___x_1173_, 0);
lean_inc(v_a_1174_);
lean_dec_ref_known(v___x_1173_, 1);
v___x_1175_ = l_Lean_Expr_mvarId_x21(v_a_1174_);
lean_dec(v_a_1174_);
v___x_1176_ = l_Lean_Meta_Sym_BackwardRule_apply(v___x_1175_, v_rule_1158_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
if (lean_obj_tag(v___x_1176_) == 0)
{
lean_object* v_a_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1189_; 
v_a_1177_ = lean_ctor_get(v___x_1176_, 0);
v_isSharedCheck_1189_ = !lean_is_exclusive(v___x_1176_);
if (v_isSharedCheck_1189_ == 0)
{
v___x_1179_ = v___x_1176_;
v_isShared_1180_ = v_isSharedCheck_1189_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_a_1177_);
lean_dec(v___x_1176_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1189_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
if (lean_obj_tag(v_a_1177_) == 0)
{
lean_object* v___x_1181_; lean_object* v___x_1183_; 
v___x_1181_ = lean_box(v___x_1159_);
if (v_isShared_1180_ == 0)
{
lean_ctor_set(v___x_1179_, 0, v___x_1181_);
v___x_1183_ = v___x_1179_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v___x_1181_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
}
}
else
{
lean_object* v___x_1185_; lean_object* v___x_1187_; 
lean_dec_ref_known(v_a_1177_, 1);
v___x_1185_ = lean_box(v_debug_1160_);
if (v_isShared_1180_ == 0)
{
lean_ctor_set(v___x_1179_, 0, v___x_1185_);
v___x_1187_ = v___x_1179_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v___x_1185_);
v___x_1187_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
return v___x_1187_;
}
}
}
}
else
{
lean_object* v_a_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1197_; 
v_a_1190_ = lean_ctor_get(v___x_1176_, 0);
v_isSharedCheck_1197_ = !lean_is_exclusive(v___x_1176_);
if (v_isSharedCheck_1197_ == 0)
{
v___x_1192_ = v___x_1176_;
v_isShared_1193_ = v_isSharedCheck_1197_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_a_1190_);
lean_dec(v___x_1176_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1197_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v___x_1195_; 
if (v_isShared_1193_ == 0)
{
v___x_1195_ = v___x_1192_;
goto v_reusejp_1194_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v_a_1190_);
v___x_1195_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1194_;
}
v_reusejp_1194_:
{
return v___x_1195_;
}
}
}
}
else
{
lean_object* v_a_1198_; lean_object* v___x_1200_; uint8_t v_isShared_1201_; uint8_t v_isSharedCheck_1205_; 
lean_dec_ref(v_rule_1158_);
v_a_1198_ = lean_ctor_get(v___x_1173_, 0);
v_isSharedCheck_1205_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1200_ = v___x_1173_;
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
else
{
lean_inc(v_a_1198_);
lean_dec(v___x_1173_);
v___x_1200_ = lean_box(0);
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
v_resetjp_1199_:
{
lean_object* v___x_1203_; 
if (v_isShared_1201_ == 0)
{
v___x_1203_ = v___x_1200_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_a_1198_);
v___x_1203_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
return v___x_1203_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_applyChecked___lam__0___boxed(lean_object** _args){
lean_object* v_a_1206_ = _args[0];
lean_object* v___x_1207_ = _args[1];
lean_object* v_rule_1208_ = _args[2];
lean_object* v___x_1209_ = _args[3];
lean_object* v_debug_1210_ = _args[4];
lean_object* v___y_1211_ = _args[5];
lean_object* v___y_1212_ = _args[6];
lean_object* v___y_1213_ = _args[7];
lean_object* v___y_1214_ = _args[8];
lean_object* v___y_1215_ = _args[9];
lean_object* v___y_1216_ = _args[10];
lean_object* v___y_1217_ = _args[11];
lean_object* v___y_1218_ = _args[12];
lean_object* v___y_1219_ = _args[13];
lean_object* v___y_1220_ = _args[14];
lean_object* v___y_1221_ = _args[15];
lean_object* v___y_1222_ = _args[16];
_start:
{
uint8_t v___x_43401__boxed_1223_; uint8_t v_debug_boxed_1224_; lean_object* v_res_1225_; 
v___x_43401__boxed_1223_ = lean_unbox(v___x_1209_);
v_debug_boxed_1224_ = lean_unbox(v_debug_1210_);
v_res_1225_ = l_Lean_Meta_Sym_BackwardRule_applyChecked___lam__0(v_a_1206_, v___x_1207_, v_rule_1208_, v___x_43401__boxed_1223_, v_debug_boxed_1224_, v___y_1211_, v___y_1212_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_);
lean_dec(v___y_1221_);
lean_dec_ref(v___y_1220_);
lean_dec(v___y_1219_);
lean_dec_ref(v___y_1218_);
lean_dec(v___y_1217_);
lean_dec_ref(v___y_1216_);
lean_dec(v___y_1215_);
lean_dec_ref(v___y_1214_);
lean_dec(v___y_1213_);
lean_dec(v___y_1212_);
lean_dec_ref(v___y_1211_);
return v_res_1225_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__1___redArg(lean_object* v_msg_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_){
_start:
{
lean_object* v_ref_1232_; lean_object* v___x_1233_; lean_object* v_a_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1242_; 
v_ref_1232_ = lean_ctor_get(v___y_1229_, 5);
v___x_1233_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introMeetPre_spec__0_spec__0(v_msg_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_);
v_a_1234_ = lean_ctor_get(v___x_1233_, 0);
v_isSharedCheck_1242_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1242_ == 0)
{
v___x_1236_ = v___x_1233_;
v_isShared_1237_ = v_isSharedCheck_1242_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_a_1234_);
lean_dec(v___x_1233_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1242_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1238_; lean_object* v___x_1240_; 
lean_inc(v_ref_1232_);
v___x_1238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1238_, 0, v_ref_1232_);
lean_ctor_set(v___x_1238_, 1, v_a_1234_);
if (v_isShared_1237_ == 0)
{
lean_ctor_set_tag(v___x_1236_, 1);
lean_ctor_set(v___x_1236_, 0, v___x_1238_);
v___x_1240_ = v___x_1236_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1241_; 
v_reuseFailAlloc_1241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1241_, 0, v___x_1238_);
v___x_1240_ = v_reuseFailAlloc_1241_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
return v___x_1240_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__1___redArg___boxed(lean_object* v_msg_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_){
_start:
{
lean_object* v_res_1249_; 
v_res_1249_ = l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__1___redArg(v_msg_1243_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_);
lean_dec(v___y_1247_);
lean_dec_ref(v___y_1246_);
lean_dec(v___y_1245_);
lean_dec_ref(v___y_1244_);
return v_res_1249_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__1(void){
_start:
{
lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1251_ = ((lean_object*)(l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__0));
v___x_1252_ = l_Lean_stringToMessageData(v___x_1251_);
return v___x_1252_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__3(void){
_start:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1254_ = ((lean_object*)(l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__2));
v___x_1255_ = l_Lean_stringToMessageData(v___x_1254_);
return v___x_1255_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__5(void){
_start:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1257_ = ((lean_object*)(l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__4));
v___x_1258_ = l_Lean_stringToMessageData(v___x_1257_);
return v___x_1258_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__7(void){
_start:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1260_ = ((lean_object*)(l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__6));
v___x_1261_ = l_Lean_stringToMessageData(v___x_1260_);
return v___x_1261_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__9(void){
_start:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1263_ = ((lean_object*)(l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__8));
v___x_1264_ = l_Lean_stringToMessageData(v___x_1263_);
return v___x_1264_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__11(void){
_start:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1266_ = ((lean_object*)(l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__10));
v___x_1267_ = l_Lean_stringToMessageData(v___x_1266_);
return v___x_1267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_applyChecked(lean_object* v_rule_1268_, lean_object* v_goal_1269_, lean_object* v_ruleDesc_x3f_1270_, lean_object* v_a_1271_, lean_object* v_a_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_, lean_object* v_a_1275_, lean_object* v_a_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_){
_start:
{
lean_object* v___x_1283_; 
lean_inc_ref(v_rule_1268_);
lean_inc(v_goal_1269_);
v___x_1283_ = l_Lean_Meta_Sym_BackwardRule_apply(v_goal_1269_, v_rule_1268_, v_a_1276_, v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_, v_a_1281_);
if (lean_obj_tag(v___x_1283_) == 0)
{
lean_object* v_a_1284_; 
v_a_1284_ = lean_ctor_get(v___x_1283_, 0);
lean_inc(v_a_1284_);
if (lean_obj_tag(v_a_1284_) == 0)
{
uint8_t v_debug_1285_; 
v_debug_1285_ = lean_ctor_get_uint8(v_a_1271_, sizeof(void*)*7 + 3);
if (v_debug_1285_ == 0)
{
lean_dec(v_ruleDesc_x3f_1270_);
lean_dec(v_goal_1269_);
lean_dec_ref(v_rule_1268_);
return v___x_1283_;
}
else
{
lean_object* v___x_1286_; 
lean_dec_ref_known(v___x_1283_, 1);
v___x_1286_ = l_Lean_MVarId_getType(v_goal_1269_, v_a_1278_, v_a_1279_, v_a_1280_, v_a_1281_);
if (lean_obj_tag(v___x_1286_) == 0)
{
lean_object* v_a_1287_; lean_object* v___x_1288_; 
v_a_1287_ = lean_ctor_get(v___x_1286_, 0);
lean_inc_n(v_a_1287_, 2);
lean_dec_ref_known(v___x_1286_, 1);
v___x_1288_ = l_Lean_Meta_Sym_unfoldReducible(v_a_1287_, v_a_1278_, v_a_1279_, v_a_1280_, v_a_1281_);
if (lean_obj_tag(v___x_1288_) == 0)
{
lean_object* v_a_1289_; lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1351_; 
v_a_1289_ = lean_ctor_get(v___x_1288_, 0);
v_isSharedCheck_1351_ = !lean_is_exclusive(v___x_1288_);
if (v_isSharedCheck_1351_ == 0)
{
v___x_1291_ = v___x_1288_;
v_isShared_1292_ = v_isSharedCheck_1351_;
goto v_resetjp_1290_;
}
else
{
lean_inc(v_a_1289_);
lean_dec(v___x_1288_);
v___x_1291_ = lean_box(0);
v_isShared_1292_ = v_isSharedCheck_1351_;
goto v_resetjp_1290_;
}
v_resetjp_1290_:
{
uint8_t v___x_1293_; 
v___x_1293_ = lean_expr_eqv(v_a_1289_, v_a_1287_);
if (v___x_1293_ == 0)
{
lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___f_1297_; lean_object* v___x_1298_; 
lean_del_object(v___x_1291_);
v___x_1294_ = lean_box(0);
v___x_1295_ = lean_box(v___x_1293_);
v___x_1296_ = lean_box(v_debug_1285_);
lean_inc_ref(v_rule_1268_);
lean_inc(v_a_1289_);
v___f_1297_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_BackwardRule_applyChecked___lam__0___boxed), 17, 5);
lean_closure_set(v___f_1297_, 0, v_a_1289_);
lean_closure_set(v___f_1297_, 1, v___x_1294_);
lean_closure_set(v___f_1297_, 2, v_rule_1268_);
lean_closure_set(v___f_1297_, 3, v___x_1295_);
lean_closure_set(v___f_1297_, 4, v___x_1296_);
v___x_1298_ = l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg(v___f_1297_, v_a_1271_, v_a_1272_, v_a_1273_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_, v_a_1281_);
if (lean_obj_tag(v___x_1298_) == 0)
{
lean_object* v_a_1299_; lean_object* v___x_1301_; uint8_t v_isShared_1302_; uint8_t v_isSharedCheck_1339_; 
v_a_1299_ = lean_ctor_get(v___x_1298_, 0);
v_isSharedCheck_1339_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1301_ = v___x_1298_;
v_isShared_1302_ = v_isSharedCheck_1339_;
goto v_resetjp_1300_;
}
else
{
lean_inc(v_a_1299_);
lean_dec(v___x_1298_);
v___x_1301_ = lean_box(0);
v_isShared_1302_ = v_isSharedCheck_1339_;
goto v_resetjp_1300_;
}
v_resetjp_1300_:
{
lean_object* v___y_1304_; uint8_t v___x_1326_; 
v___x_1326_ = lean_unbox(v_a_1299_);
lean_dec(v_a_1299_);
if (v___x_1326_ == 0)
{
lean_object* v___x_1328_; 
lean_dec(v_a_1289_);
lean_dec(v_a_1287_);
lean_dec(v_ruleDesc_x3f_1270_);
lean_dec_ref(v_rule_1268_);
if (v_isShared_1302_ == 0)
{
lean_ctor_set(v___x_1301_, 0, v_a_1284_);
v___x_1328_ = v___x_1301_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v_a_1284_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
return v___x_1328_;
}
}
else
{
lean_del_object(v___x_1301_);
if (lean_obj_tag(v_ruleDesc_x3f_1270_) == 0)
{
lean_object* v_expr_1330_; lean_object* v___x_1331_; 
v_expr_1330_ = lean_ctor_get(v_rule_1268_, 0);
lean_inc_ref(v_expr_1330_);
lean_dec_ref(v_rule_1268_);
v___x_1331_ = l_Lean_Expr_getAppFn(v_expr_1330_);
lean_dec_ref(v_expr_1330_);
if (lean_obj_tag(v___x_1331_) == 4)
{
lean_object* v_declName_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
v_declName_1332_ = lean_ctor_get(v___x_1331_, 0);
lean_inc(v_declName_1332_);
lean_dec_ref_known(v___x_1331_, 2);
v___x_1333_ = lean_obj_once(&l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__9, &l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__9_once, _init_l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__9);
v___x_1334_ = l_Lean_MessageData_ofConstName(v_declName_1332_, v___x_1293_);
v___x_1335_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1333_);
lean_ctor_set(v___x_1335_, 1, v___x_1334_);
v___x_1336_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1336_, 0, v___x_1335_);
lean_ctor_set(v___x_1336_, 1, v___x_1333_);
v___y_1304_ = v___x_1336_;
goto v___jp_1303_;
}
else
{
lean_object* v___x_1337_; 
lean_dec_ref(v___x_1331_);
v___x_1337_ = lean_obj_once(&l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__11, &l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__11_once, _init_l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__11);
v___y_1304_ = v___x_1337_;
goto v___jp_1303_;
}
}
else
{
lean_object* v_val_1338_; 
lean_dec_ref(v_rule_1268_);
v_val_1338_ = lean_ctor_get(v_ruleDesc_x3f_1270_, 0);
lean_inc(v_val_1338_);
lean_dec_ref_known(v_ruleDesc_x3f_1270_, 1);
v___y_1304_ = v_val_1338_;
goto v___jp_1303_;
}
}
v___jp_1303_:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1325_; 
v___x_1305_ = lean_obj_once(&l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__1, &l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__1_once, _init_l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__1);
v___x_1306_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1305_);
lean_ctor_set(v___x_1306_, 1, v___y_1304_);
v___x_1307_ = lean_obj_once(&l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__3, &l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__3_once, _init_l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__3);
v___x_1308_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1306_);
lean_ctor_set(v___x_1308_, 1, v___x_1307_);
v___x_1309_ = l_Lean_indentExpr(v_a_1287_);
v___x_1310_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1308_);
lean_ctor_set(v___x_1310_, 1, v___x_1309_);
v___x_1311_ = lean_obj_once(&l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__5, &l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__5_once, _init_l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__5);
v___x_1312_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1312_, 0, v___x_1310_);
lean_ctor_set(v___x_1312_, 1, v___x_1311_);
v___x_1313_ = l_Lean_indentExpr(v_a_1289_);
v___x_1314_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1312_);
lean_ctor_set(v___x_1314_, 1, v___x_1313_);
v___x_1315_ = lean_obj_once(&l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__7, &l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__7_once, _init_l_Lean_Meta_Sym_BackwardRule_applyChecked___closed__7);
v___x_1316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1314_);
lean_ctor_set(v___x_1316_, 1, v___x_1315_);
v___x_1317_ = l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__1___redArg(v___x_1316_, v_a_1278_, v_a_1279_, v_a_1280_, v_a_1281_);
v_a_1318_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1320_ = v___x_1317_;
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v___x_1317_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1323_; 
if (v_isShared_1321_ == 0)
{
v___x_1323_ = v___x_1320_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_a_1318_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
}
}
else
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1347_; 
lean_dec(v_a_1289_);
lean_dec(v_a_1287_);
lean_dec(v_ruleDesc_x3f_1270_);
lean_dec_ref(v_rule_1268_);
v_a_1340_ = lean_ctor_get(v___x_1298_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1342_ = v___x_1298_;
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v___x_1298_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1345_; 
if (v_isShared_1343_ == 0)
{
v___x_1345_ = v___x_1342_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_a_1340_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
}
else
{
lean_object* v___x_1349_; 
lean_dec(v_a_1289_);
lean_dec(v_a_1287_);
lean_dec(v_ruleDesc_x3f_1270_);
lean_dec_ref(v_rule_1268_);
if (v_isShared_1292_ == 0)
{
lean_ctor_set(v___x_1291_, 0, v_a_1284_);
v___x_1349_ = v___x_1291_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v_a_1284_);
v___x_1349_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
return v___x_1349_;
}
}
}
}
else
{
lean_object* v_a_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1359_; 
lean_dec(v_a_1287_);
lean_dec(v_ruleDesc_x3f_1270_);
lean_dec_ref(v_rule_1268_);
v_a_1352_ = lean_ctor_get(v___x_1288_, 0);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1288_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1354_ = v___x_1288_;
v_isShared_1355_ = v_isSharedCheck_1359_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_a_1352_);
lean_dec(v___x_1288_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1359_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
lean_object* v___x_1357_; 
if (v_isShared_1355_ == 0)
{
v___x_1357_ = v___x_1354_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_a_1352_);
v___x_1357_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
return v___x_1357_;
}
}
}
}
else
{
lean_object* v_a_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1367_; 
lean_dec(v_ruleDesc_x3f_1270_);
lean_dec_ref(v_rule_1268_);
v_a_1360_ = lean_ctor_get(v___x_1286_, 0);
v_isSharedCheck_1367_ = !lean_is_exclusive(v___x_1286_);
if (v_isSharedCheck_1367_ == 0)
{
v___x_1362_ = v___x_1286_;
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_a_1360_);
lean_dec(v___x_1286_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
lean_object* v___x_1365_; 
if (v_isShared_1363_ == 0)
{
v___x_1365_ = v___x_1362_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v_a_1360_);
v___x_1365_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
return v___x_1365_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_a_1284_, 1);
lean_dec(v_ruleDesc_x3f_1270_);
lean_dec(v_goal_1269_);
lean_dec_ref(v_rule_1268_);
return v___x_1283_;
}
}
else
{
lean_dec(v_ruleDesc_x3f_1270_);
lean_dec(v_goal_1269_);
lean_dec_ref(v_rule_1268_);
return v___x_1283_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_applyChecked___boxed(lean_object* v_rule_1368_, lean_object* v_goal_1369_, lean_object* v_ruleDesc_x3f_1370_, lean_object* v_a_1371_, lean_object* v_a_1372_, lean_object* v_a_1373_, lean_object* v_a_1374_, lean_object* v_a_1375_, lean_object* v_a_1376_, lean_object* v_a_1377_, lean_object* v_a_1378_, lean_object* v_a_1379_, lean_object* v_a_1380_, lean_object* v_a_1381_, lean_object* v_a_1382_){
_start:
{
lean_object* v_res_1383_; 
v_res_1383_ = l_Lean_Meta_Sym_BackwardRule_applyChecked(v_rule_1368_, v_goal_1369_, v_ruleDesc_x3f_1370_, v_a_1371_, v_a_1372_, v_a_1373_, v_a_1374_, v_a_1375_, v_a_1376_, v_a_1377_, v_a_1378_, v_a_1379_, v_a_1380_, v_a_1381_);
lean_dec(v_a_1381_);
lean_dec_ref(v_a_1380_);
lean_dec(v_a_1379_);
lean_dec_ref(v_a_1378_);
lean_dec(v_a_1377_);
lean_dec_ref(v_a_1376_);
lean_dec(v_a_1375_);
lean_dec_ref(v_a_1374_);
lean_dec(v_a_1373_);
lean_dec(v_a_1372_);
lean_dec_ref(v_a_1371_);
return v_res_1383_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__1(lean_object* v_00_u03b1_1384_, lean_object* v_msg_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_){
_start:
{
lean_object* v___x_1398_; 
v___x_1398_ = l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__1___redArg(v_msg_1385_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
return v___x_1398_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__1___boxed(lean_object* v_00_u03b1_1399_, lean_object* v_msg_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_){
_start:
{
lean_object* v_res_1413_; 
v_res_1413_ = l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__1(v_00_u03b1_1399_, v_msg_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_);
lean_dec(v___y_1411_);
lean_dec_ref(v___y_1410_);
lean_dec(v___y_1409_);
lean_dec_ref(v___y_1408_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
lean_dec(v___y_1405_);
lean_dec_ref(v___y_1404_);
lean_dec(v___y_1403_);
lean_dec(v___y_1402_);
lean_dec_ref(v___y_1401_);
return v_res_1413_;
}
}
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Utils_0__Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f_go_spec__0___redArg(lean_object* v_declName_1414_, lean_object* v___y_1415_){
_start:
{
lean_object* v___x_1417_; lean_object* v_env_1418_; uint8_t v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; 
v___x_1417_ = lean_st_ref_get(v___y_1415_);
v_env_1418_ = lean_ctor_get(v___x_1417_, 0);
lean_inc_ref(v_env_1418_);
lean_dec(v___x_1417_);
v___x_1419_ = l_Lean_Environment_isProjectionFn(v_env_1418_, v_declName_1414_);
v___x_1420_ = lean_box(v___x_1419_);
v___x_1421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1420_);
return v___x_1421_;
}
}
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Utils_0__Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f_go_spec__0___redArg___boxed(lean_object* v_declName_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_){
_start:
{
lean_object* v_res_1425_; 
v_res_1425_ = l_Lean_isProjectionFn___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Utils_0__Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f_go_spec__0___redArg(v_declName_1422_, v___y_1423_);
lean_dec(v___y_1423_);
return v_res_1425_;
}
}
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Utils_0__Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f_go_spec__0(lean_object* v_declName_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_){
_start:
{
lean_object* v___x_1434_; 
v___x_1434_ = l_Lean_isProjectionFn___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Utils_0__Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f_go_spec__0___redArg(v_declName_1426_, v___y_1432_);
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Utils_0__Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f_go_spec__0___boxed(lean_object* v_declName_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l_Lean_isProjectionFn___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Utils_0__Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f_go_spec__0(v_declName_1435_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
lean_dec(v___y_1439_);
lean_dec_ref(v___y_1438_);
lean_dec(v___y_1437_);
lean_dec_ref(v___y_1436_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Utils_0__Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f_go(lean_object* v_lastReduction_1444_, lean_object* v_f_1445_, lean_object* v_rargs_1446_, lean_object* v_a_1447_, lean_object* v_a_1448_, lean_object* v_a_1449_, lean_object* v_a_1450_, lean_object* v_a_1451_, lean_object* v_a_1452_){
_start:
{
switch(lean_obj_tag(v_f_1445_))
{
case 10:
{
lean_object* v_expr_1454_; 
v_expr_1454_ = lean_ctor_get(v_f_1445_, 1);
lean_inc_ref(v_expr_1454_);
lean_dec_ref_known(v_f_1445_, 2);
v_f_1445_ = v_expr_1454_;
goto _start;
}
case 5:
{
lean_object* v_fn_1456_; lean_object* v_arg_1457_; lean_object* v___x_1458_; 
v_fn_1456_ = lean_ctor_get(v_f_1445_, 0);
lean_inc_ref(v_fn_1456_);
v_arg_1457_ = lean_ctor_get(v_f_1445_, 1);
lean_inc_ref(v_arg_1457_);
lean_dec_ref_known(v_f_1445_, 2);
v___x_1458_ = lean_array_push(v_rargs_1446_, v_arg_1457_);
v_f_1445_ = v_fn_1456_;
v_rargs_1446_ = v___x_1458_;
goto _start;
}
case 6:
{
lean_object* v___x_1460_; lean_object* v___x_1461_; uint8_t v___x_1462_; 
v___x_1460_ = lean_array_get_size(v_rargs_1446_);
v___x_1461_ = lean_unsigned_to_nat(0u);
v___x_1462_ = lean_nat_dec_eq(v___x_1460_, v___x_1461_);
if (v___x_1462_ == 0)
{
lean_object* v_e_x27_1463_; lean_object* v___x_1464_; 
lean_dec(v_lastReduction_1444_);
v_e_x27_1463_ = l_Lean_Expr_betaRev(v_f_1445_, v_rargs_1446_, v___x_1462_, v___x_1462_);
lean_dec_ref(v_rargs_1446_);
v___x_1464_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v_e_x27_1463_, v_a_1448_);
if (lean_obj_tag(v___x_1464_) == 0)
{
lean_object* v_a_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
v_a_1465_ = lean_ctor_get(v___x_1464_, 0);
lean_inc_n(v_a_1465_, 2);
lean_dec_ref_known(v___x_1464_, 1);
v___x_1466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1466_, 0, v_a_1465_);
v___x_1467_ = l_Lean_Expr_getAppFn(v_a_1465_);
v___x_1468_ = l_Lean_Expr_getAppNumArgs(v_a_1465_);
v___x_1469_ = lean_mk_empty_array_with_capacity(v___x_1468_);
lean_dec(v___x_1468_);
v___x_1470_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_a_1465_, v___x_1469_);
v_lastReduction_1444_ = v___x_1466_;
v_f_1445_ = v___x_1467_;
v_rargs_1446_ = v___x_1470_;
goto _start;
}
else
{
lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1479_; 
v_a_1472_ = lean_ctor_get(v___x_1464_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1464_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1474_ = v___x_1464_;
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_dec(v___x_1464_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1477_; 
if (v_isShared_1475_ == 0)
{
v___x_1477_ = v___x_1474_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v_a_1472_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
}
}
else
{
lean_object* v___x_1480_; 
lean_dec_ref_known(v_f_1445_, 3);
lean_dec_ref(v_rargs_1446_);
v___x_1480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1480_, 0, v_lastReduction_1444_);
return v___x_1480_;
}
}
case 4:
{
lean_object* v_declName_1481_; lean_object* v___x_1482_; 
v_declName_1481_ = lean_ctor_get(v_f_1445_, 0);
lean_inc(v_declName_1481_);
v___x_1482_ = l_Lean_isProjectionFn___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Utils_0__Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f_go_spec__0___redArg(v_declName_1481_, v_a_1452_);
if (lean_obj_tag(v___x_1482_) == 0)
{
lean_object* v_a_1483_; uint8_t v___x_1484_; 
v_a_1483_ = lean_ctor_get(v___x_1482_, 0);
lean_inc(v_a_1483_);
lean_dec_ref_known(v___x_1482_, 1);
v___x_1484_ = lean_unbox(v_a_1483_);
lean_dec(v_a_1483_);
if (v___x_1484_ == 0)
{
lean_object* v___x_1485_; lean_object* v___x_1486_; 
v___x_1485_ = l_Lean_mkAppRev(v_f_1445_, v_rargs_1446_);
lean_dec_ref(v_rargs_1446_);
v___x_1486_ = l_Lean_Meta_reduceRecMatcher_x3f(v___x_1485_, v_a_1449_, v_a_1450_, v_a_1451_, v_a_1452_);
lean_dec_ref(v___x_1485_);
if (lean_obj_tag(v___x_1486_) == 0)
{
lean_object* v_a_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1517_; 
v_a_1487_ = lean_ctor_get(v___x_1486_, 0);
v_isSharedCheck_1517_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1517_ == 0)
{
v___x_1489_ = v___x_1486_;
v_isShared_1490_ = v_isSharedCheck_1517_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_a_1487_);
lean_dec(v___x_1486_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1517_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
if (lean_obj_tag(v_a_1487_) == 1)
{
lean_object* v_val_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1513_; 
lean_del_object(v___x_1489_);
lean_dec(v_lastReduction_1444_);
v_val_1491_ = lean_ctor_get(v_a_1487_, 0);
v_isSharedCheck_1513_ = !lean_is_exclusive(v_a_1487_);
if (v_isSharedCheck_1513_ == 0)
{
v___x_1493_ = v_a_1487_;
v_isShared_1494_ = v_isSharedCheck_1513_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_val_1491_);
lean_dec(v_a_1487_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1513_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1495_; 
v___x_1495_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v_val_1491_, v_a_1448_);
if (lean_obj_tag(v___x_1495_) == 0)
{
lean_object* v_a_1496_; lean_object* v___x_1498_; 
v_a_1496_ = lean_ctor_get(v___x_1495_, 0);
lean_inc_n(v_a_1496_, 2);
lean_dec_ref_known(v___x_1495_, 1);
if (v_isShared_1494_ == 0)
{
lean_ctor_set(v___x_1493_, 0, v_a_1496_);
v___x_1498_ = v___x_1493_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v_a_1496_);
v___x_1498_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1499_ = l_Lean_Expr_getAppFn(v_a_1496_);
v___x_1500_ = l_Lean_Expr_getAppNumArgs(v_a_1496_);
v___x_1501_ = lean_mk_empty_array_with_capacity(v___x_1500_);
lean_dec(v___x_1500_);
v___x_1502_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_a_1496_, v___x_1501_);
v_lastReduction_1444_ = v___x_1498_;
v_f_1445_ = v___x_1499_;
v_rargs_1446_ = v___x_1502_;
goto _start;
}
}
else
{
lean_object* v_a_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1512_; 
lean_del_object(v___x_1493_);
v_a_1505_ = lean_ctor_get(v___x_1495_, 0);
v_isSharedCheck_1512_ = !lean_is_exclusive(v___x_1495_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1507_ = v___x_1495_;
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_a_1505_);
lean_dec(v___x_1495_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___x_1510_; 
if (v_isShared_1508_ == 0)
{
v___x_1510_ = v___x_1507_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v_a_1505_);
v___x_1510_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
return v___x_1510_;
}
}
}
}
}
else
{
lean_object* v___x_1515_; 
lean_dec(v_a_1487_);
if (v_isShared_1490_ == 0)
{
lean_ctor_set(v___x_1489_, 0, v_lastReduction_1444_);
v___x_1515_ = v___x_1489_;
goto v_reusejp_1514_;
}
else
{
lean_object* v_reuseFailAlloc_1516_; 
v_reuseFailAlloc_1516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1516_, 0, v_lastReduction_1444_);
v___x_1515_ = v_reuseFailAlloc_1516_;
goto v_reusejp_1514_;
}
v_reusejp_1514_:
{
return v___x_1515_;
}
}
}
}
else
{
lean_dec(v_lastReduction_1444_);
return v___x_1486_;
}
}
else
{
lean_object* v___x_1518_; uint8_t v___x_1519_; lean_object* v___x_1520_; 
v___x_1518_ = l_Lean_mkAppRev(v_f_1445_, v_rargs_1446_);
lean_dec_ref(v_rargs_1446_);
v___x_1519_ = 0;
v___x_1520_ = l_Lean_Meta_unfoldDefinition_x3f(v___x_1518_, v___x_1519_, v_a_1449_, v_a_1450_, v_a_1451_, v_a_1452_);
if (lean_obj_tag(v___x_1520_) == 0)
{
lean_object* v_a_1521_; lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1544_; 
v_a_1521_ = lean_ctor_get(v___x_1520_, 0);
v_isSharedCheck_1544_ = !lean_is_exclusive(v___x_1520_);
if (v_isSharedCheck_1544_ == 0)
{
v___x_1523_ = v___x_1520_;
v_isShared_1524_ = v_isSharedCheck_1544_;
goto v_resetjp_1522_;
}
else
{
lean_inc(v_a_1521_);
lean_dec(v___x_1520_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1544_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
if (lean_obj_tag(v_a_1521_) == 1)
{
lean_object* v_val_1525_; lean_object* v___x_1526_; 
lean_del_object(v___x_1523_);
v_val_1525_ = lean_ctor_get(v_a_1521_, 0);
lean_inc(v_val_1525_);
lean_dec_ref_known(v_a_1521_, 1);
v___x_1526_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v_val_1525_, v_a_1448_);
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_object* v_a_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; 
v_a_1527_ = lean_ctor_get(v___x_1526_, 0);
lean_inc(v_a_1527_);
lean_dec_ref_known(v___x_1526_, 1);
v___x_1528_ = l_Lean_Expr_getAppFn(v_a_1527_);
v___x_1529_ = l_Lean_Expr_getAppNumArgs(v_a_1527_);
v___x_1530_ = lean_mk_empty_array_with_capacity(v___x_1529_);
lean_dec(v___x_1529_);
v___x_1531_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_a_1527_, v___x_1530_);
v_f_1445_ = v___x_1528_;
v_rargs_1446_ = v___x_1531_;
goto _start;
}
else
{
lean_object* v_a_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1540_; 
lean_dec(v_lastReduction_1444_);
v_a_1533_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1540_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1535_ = v___x_1526_;
v_isShared_1536_ = v_isSharedCheck_1540_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_a_1533_);
lean_dec(v___x_1526_);
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
lean_object* v___x_1542_; 
lean_dec(v_a_1521_);
if (v_isShared_1524_ == 0)
{
lean_ctor_set(v___x_1523_, 0, v_lastReduction_1444_);
v___x_1542_ = v___x_1523_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v_lastReduction_1444_);
v___x_1542_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
return v___x_1542_;
}
}
}
}
else
{
lean_dec(v_lastReduction_1444_);
return v___x_1520_;
}
}
}
else
{
lean_object* v_a_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1552_; 
lean_dec_ref_known(v_f_1445_, 2);
lean_dec_ref(v_rargs_1446_);
lean_dec(v_lastReduction_1444_);
v_a_1545_ = lean_ctor_get(v___x_1482_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v___x_1482_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1547_ = v___x_1482_;
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_a_1545_);
lean_dec(v___x_1482_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1550_; 
if (v_isShared_1548_ == 0)
{
v___x_1550_ = v___x_1547_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v_a_1545_);
v___x_1550_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
return v___x_1550_;
}
}
}
}
case 11:
{
lean_object* v___x_1553_; 
v___x_1553_ = l_Lean_Meta_reduceProj_x3f(v_f_1445_, v_a_1449_, v_a_1450_, v_a_1451_, v_a_1452_);
if (lean_obj_tag(v___x_1553_) == 0)
{
lean_object* v_a_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1585_; 
v_a_1554_ = lean_ctor_get(v___x_1553_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v___x_1553_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1556_ = v___x_1553_;
v_isShared_1557_ = v_isSharedCheck_1585_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_a_1554_);
lean_dec(v___x_1553_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1585_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
if (lean_obj_tag(v_a_1554_) == 0)
{
lean_object* v___x_1559_; 
lean_dec_ref(v_rargs_1446_);
if (v_isShared_1557_ == 0)
{
lean_ctor_set(v___x_1556_, 0, v_lastReduction_1444_);
v___x_1559_ = v___x_1556_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v_lastReduction_1444_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
else
{
lean_object* v_val_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1584_; 
lean_del_object(v___x_1556_);
lean_dec(v_lastReduction_1444_);
v_val_1561_ = lean_ctor_get(v_a_1554_, 0);
v_isSharedCheck_1584_ = !lean_is_exclusive(v_a_1554_);
if (v_isSharedCheck_1584_ == 0)
{
v___x_1563_ = v_a_1554_;
v_isShared_1564_ = v_isSharedCheck_1584_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_val_1561_);
lean_dec(v_a_1554_);
v___x_1563_ = lean_box(0);
v_isShared_1564_ = v_isSharedCheck_1584_;
goto v_resetjp_1562_;
}
v_resetjp_1562_:
{
lean_object* v___x_1565_; lean_object* v___x_1566_; 
v___x_1565_ = l_Lean_mkAppRev(v_val_1561_, v_rargs_1446_);
lean_dec_ref(v_rargs_1446_);
v___x_1566_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_1565_, v_a_1448_);
if (lean_obj_tag(v___x_1566_) == 0)
{
lean_object* v_a_1567_; lean_object* v___x_1569_; 
v_a_1567_ = lean_ctor_get(v___x_1566_, 0);
lean_inc_n(v_a_1567_, 2);
lean_dec_ref_known(v___x_1566_, 1);
if (v_isShared_1564_ == 0)
{
lean_ctor_set(v___x_1563_, 0, v_a_1567_);
v___x_1569_ = v___x_1563_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1575_; 
v_reuseFailAlloc_1575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1575_, 0, v_a_1567_);
v___x_1569_ = v_reuseFailAlloc_1575_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; 
v___x_1570_ = l_Lean_Expr_getAppFn(v_a_1567_);
v___x_1571_ = l_Lean_Expr_getAppNumArgs(v_a_1567_);
v___x_1572_ = lean_mk_empty_array_with_capacity(v___x_1571_);
lean_dec(v___x_1571_);
v___x_1573_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_a_1567_, v___x_1572_);
v_lastReduction_1444_ = v___x_1569_;
v_f_1445_ = v___x_1570_;
v_rargs_1446_ = v___x_1573_;
goto _start;
}
}
else
{
lean_object* v_a_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1583_; 
lean_del_object(v___x_1563_);
v_a_1576_ = lean_ctor_get(v___x_1566_, 0);
v_isSharedCheck_1583_ = !lean_is_exclusive(v___x_1566_);
if (v_isSharedCheck_1583_ == 0)
{
v___x_1578_ = v___x_1566_;
v_isShared_1579_ = v_isSharedCheck_1583_;
goto v_resetjp_1577_;
}
else
{
lean_inc(v_a_1576_);
lean_dec(v___x_1566_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1583_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v___x_1581_; 
if (v_isShared_1579_ == 0)
{
v___x_1581_ = v___x_1578_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v_a_1576_);
v___x_1581_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
return v___x_1581_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_rargs_1446_);
lean_dec(v_lastReduction_1444_);
return v___x_1553_;
}
}
default: 
{
lean_object* v___x_1586_; 
lean_dec_ref(v_rargs_1446_);
lean_dec_ref(v_f_1445_);
v___x_1586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1586_, 0, v_lastReduction_1444_);
return v___x_1586_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Utils_0__Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f_go___boxed(lean_object* v_lastReduction_1587_, lean_object* v_f_1588_, lean_object* v_rargs_1589_, lean_object* v_a_1590_, lean_object* v_a_1591_, lean_object* v_a_1592_, lean_object* v_a_1593_, lean_object* v_a_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_){
_start:
{
lean_object* v_res_1597_; 
v_res_1597_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Utils_0__Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f_go(v_lastReduction_1587_, v_f_1588_, v_rargs_1589_, v_a_1590_, v_a_1591_, v_a_1592_, v_a_1593_, v_a_1594_, v_a_1595_);
lean_dec(v_a_1595_);
lean_dec_ref(v_a_1594_);
lean_dec(v_a_1593_);
lean_dec_ref(v_a_1592_);
lean_dec(v_a_1591_);
lean_dec_ref(v_a_1590_);
return v_res_1597_;
}
}
static uint64_t _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f___closed__0(void){
_start:
{
uint8_t v___x_1598_; uint64_t v___x_1599_; 
v___x_1598_ = 2;
v___x_1599_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_1598_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f(lean_object* v_e_1600_, lean_object* v_a_1601_, lean_object* v_a_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_, lean_object* v_a_1605_, lean_object* v_a_1606_){
_start:
{
lean_object* v___x_1608_; uint8_t v_foApprox_1609_; uint8_t v_ctxApprox_1610_; uint8_t v_quasiPatternApprox_1611_; uint8_t v_constApprox_1612_; uint8_t v_isDefEqStuckEx_1613_; uint8_t v_unificationHints_1614_; uint8_t v_proofIrrelevance_1615_; uint8_t v_assignSyntheticOpaque_1616_; uint8_t v_offsetCnstrs_1617_; uint8_t v_etaStruct_1618_; uint8_t v_univApprox_1619_; uint8_t v_iota_1620_; uint8_t v_beta_1621_; uint8_t v_proj_1622_; uint8_t v_zeta_1623_; uint8_t v_zetaDelta_1624_; uint8_t v_zetaUnused_1625_; uint8_t v_zetaHave_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1666_; 
v___x_1608_ = l_Lean_Meta_Context_config(v_a_1603_);
v_foApprox_1609_ = lean_ctor_get_uint8(v___x_1608_, 0);
v_ctxApprox_1610_ = lean_ctor_get_uint8(v___x_1608_, 1);
v_quasiPatternApprox_1611_ = lean_ctor_get_uint8(v___x_1608_, 2);
v_constApprox_1612_ = lean_ctor_get_uint8(v___x_1608_, 3);
v_isDefEqStuckEx_1613_ = lean_ctor_get_uint8(v___x_1608_, 4);
v_unificationHints_1614_ = lean_ctor_get_uint8(v___x_1608_, 5);
v_proofIrrelevance_1615_ = lean_ctor_get_uint8(v___x_1608_, 6);
v_assignSyntheticOpaque_1616_ = lean_ctor_get_uint8(v___x_1608_, 7);
v_offsetCnstrs_1617_ = lean_ctor_get_uint8(v___x_1608_, 8);
v_etaStruct_1618_ = lean_ctor_get_uint8(v___x_1608_, 10);
v_univApprox_1619_ = lean_ctor_get_uint8(v___x_1608_, 11);
v_iota_1620_ = lean_ctor_get_uint8(v___x_1608_, 12);
v_beta_1621_ = lean_ctor_get_uint8(v___x_1608_, 13);
v_proj_1622_ = lean_ctor_get_uint8(v___x_1608_, 14);
v_zeta_1623_ = lean_ctor_get_uint8(v___x_1608_, 15);
v_zetaDelta_1624_ = lean_ctor_get_uint8(v___x_1608_, 16);
v_zetaUnused_1625_ = lean_ctor_get_uint8(v___x_1608_, 17);
v_zetaHave_1626_ = lean_ctor_get_uint8(v___x_1608_, 18);
v_isSharedCheck_1666_ = !lean_is_exclusive(v___x_1608_);
if (v_isSharedCheck_1666_ == 0)
{
v___x_1628_ = v___x_1608_;
v_isShared_1629_ = v_isSharedCheck_1666_;
goto v_resetjp_1627_;
}
else
{
lean_dec(v___x_1608_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1666_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
uint8_t v_trackZetaDelta_1630_; lean_object* v_zetaDeltaSet_1631_; lean_object* v_lctx_1632_; lean_object* v_localInstances_1633_; lean_object* v_defEqCtx_x3f_1634_; lean_object* v_synthPendingDepth_1635_; lean_object* v_canUnfold_x3f_1636_; uint8_t v_univApprox_1637_; uint8_t v_inTypeClassResolution_1638_; uint8_t v_cacheInferType_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; uint8_t v___x_1642_; lean_object* v_config_1644_; 
v_trackZetaDelta_1630_ = lean_ctor_get_uint8(v_a_1603_, sizeof(void*)*7);
v_zetaDeltaSet_1631_ = lean_ctor_get(v_a_1603_, 1);
v_lctx_1632_ = lean_ctor_get(v_a_1603_, 2);
v_localInstances_1633_ = lean_ctor_get(v_a_1603_, 3);
v_defEqCtx_x3f_1634_ = lean_ctor_get(v_a_1603_, 4);
v_synthPendingDepth_1635_ = lean_ctor_get(v_a_1603_, 5);
v_canUnfold_x3f_1636_ = lean_ctor_get(v_a_1603_, 6);
v_univApprox_1637_ = lean_ctor_get_uint8(v_a_1603_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1638_ = lean_ctor_get_uint8(v_a_1603_, sizeof(void*)*7 + 2);
v_cacheInferType_1639_ = lean_ctor_get_uint8(v_a_1603_, sizeof(void*)*7 + 3);
v___x_1640_ = l_Lean_Expr_getAppFn(v_e_1600_);
v___x_1641_ = l_Lean_Expr_getAppNumArgs(v_e_1600_);
v___x_1642_ = 2;
if (v_isShared_1629_ == 0)
{
v_config_1644_ = v___x_1628_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, 0, v_foApprox_1609_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, 1, v_ctxApprox_1610_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, 2, v_quasiPatternApprox_1611_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, 3, v_constApprox_1612_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, 4, v_isDefEqStuckEx_1613_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, 5, v_unificationHints_1614_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, 6, v_proofIrrelevance_1615_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, 7, v_assignSyntheticOpaque_1616_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, 8, v_offsetCnstrs_1617_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, 10, v_etaStruct_1618_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, 11, v_univApprox_1619_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, 12, v_iota_1620_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, 13, v_beta_1621_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, 14, v_proj_1622_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, 15, v_zeta_1623_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, 16, v_zetaDelta_1624_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, 17, v_zetaUnused_1625_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, 18, v_zetaHave_1626_);
v_config_1644_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
uint64_t v___x_1645_; uint64_t v___x_1646_; uint64_t v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; uint64_t v___x_1651_; uint64_t v___x_1652_; uint64_t v_key_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; 
lean_ctor_set_uint8(v_config_1644_, 9, v___x_1642_);
v___x_1645_ = l_Lean_Meta_Context_configKey(v_a_1603_);
v___x_1646_ = 3ULL;
v___x_1647_ = lean_uint64_shift_right(v___x_1645_, v___x_1646_);
v___x_1648_ = lean_box(0);
v___x_1649_ = lean_mk_empty_array_with_capacity(v___x_1641_);
lean_dec(v___x_1641_);
v___x_1650_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_e_1600_, v___x_1649_);
v___x_1651_ = lean_uint64_shift_left(v___x_1647_, v___x_1646_);
v___x_1652_ = lean_uint64_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f___closed__0, &l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f___closed__0_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f___closed__0);
v_key_1653_ = lean_uint64_lor(v___x_1651_, v___x_1652_);
v___x_1654_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1654_, 0, v_config_1644_);
lean_ctor_set_uint64(v___x_1654_, sizeof(void*)*1, v_key_1653_);
lean_inc(v_canUnfold_x3f_1636_);
lean_inc(v_synthPendingDepth_1635_);
lean_inc(v_defEqCtx_x3f_1634_);
lean_inc_ref(v_localInstances_1633_);
lean_inc_ref(v_lctx_1632_);
lean_inc(v_zetaDeltaSet_1631_);
v___x_1655_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1655_, 0, v___x_1654_);
lean_ctor_set(v___x_1655_, 1, v_zetaDeltaSet_1631_);
lean_ctor_set(v___x_1655_, 2, v_lctx_1632_);
lean_ctor_set(v___x_1655_, 3, v_localInstances_1633_);
lean_ctor_set(v___x_1655_, 4, v_defEqCtx_x3f_1634_);
lean_ctor_set(v___x_1655_, 5, v_synthPendingDepth_1635_);
lean_ctor_set(v___x_1655_, 6, v_canUnfold_x3f_1636_);
lean_ctor_set_uint8(v___x_1655_, sizeof(void*)*7, v_trackZetaDelta_1630_);
lean_ctor_set_uint8(v___x_1655_, sizeof(void*)*7 + 1, v_univApprox_1637_);
lean_ctor_set_uint8(v___x_1655_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1638_);
lean_ctor_set_uint8(v___x_1655_, sizeof(void*)*7 + 3, v_cacheInferType_1639_);
v___x_1656_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Utils_0__Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f_go(v___x_1648_, v___x_1640_, v___x_1650_, v_a_1601_, v_a_1602_, v___x_1655_, v_a_1604_, v_a_1605_, v_a_1606_);
lean_dec_ref_known(v___x_1655_, 7);
if (lean_obj_tag(v___x_1656_) == 0)
{
lean_object* v_a_1657_; lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1664_; 
v_a_1657_ = lean_ctor_get(v___x_1656_, 0);
v_isSharedCheck_1664_ = !lean_is_exclusive(v___x_1656_);
if (v_isSharedCheck_1664_ == 0)
{
v___x_1659_ = v___x_1656_;
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
else
{
lean_inc(v_a_1657_);
lean_dec(v___x_1656_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1662_; 
if (v_isShared_1660_ == 0)
{
v___x_1662_ = v___x_1659_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v_a_1657_);
v___x_1662_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
return v___x_1662_;
}
}
}
else
{
return v___x_1656_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f___boxed(lean_object* v_e_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_){
_start:
{
lean_object* v_res_1675_; 
v_res_1675_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f(v_e_1667_, v_a_1668_, v_a_1669_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_);
lean_dec(v_a_1673_);
lean_dec_ref(v_a_1672_);
lean_dec(v_a_1671_);
lean_dec_ref(v_a_1670_);
lean_dec(v_a_1669_);
lean_dec_ref(v_a_1668_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead(lean_object* v_e_1676_, lean_object* v_a_1677_, lean_object* v_a_1678_, lean_object* v_a_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_){
_start:
{
lean_object* v___x_1684_; 
lean_inc_ref(v_e_1676_);
v___x_1684_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f(v_e_1676_, v_a_1677_, v_a_1678_, v_a_1679_, v_a_1680_, v_a_1681_, v_a_1682_);
if (lean_obj_tag(v___x_1684_) == 0)
{
lean_object* v_a_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1696_; 
v_a_1685_ = lean_ctor_get(v___x_1684_, 0);
v_isSharedCheck_1696_ = !lean_is_exclusive(v___x_1684_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1687_ = v___x_1684_;
v_isShared_1688_ = v_isSharedCheck_1696_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_a_1685_);
lean_dec(v___x_1684_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1696_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
if (lean_obj_tag(v_a_1685_) == 0)
{
lean_object* v___x_1690_; 
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 0, v_e_1676_);
v___x_1690_ = v___x_1687_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v_e_1676_);
v___x_1690_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
return v___x_1690_;
}
}
else
{
lean_object* v_val_1692_; lean_object* v___x_1694_; 
lean_dec_ref(v_e_1676_);
v_val_1692_ = lean_ctor_get(v_a_1685_, 0);
lean_inc(v_val_1692_);
lean_dec_ref_known(v_a_1685_, 1);
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 0, v_val_1692_);
v___x_1694_ = v___x_1687_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v_val_1692_);
v___x_1694_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
return v___x_1694_;
}
}
}
}
else
{
lean_object* v_a_1697_; lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1704_; 
lean_dec_ref(v_e_1676_);
v_a_1697_ = lean_ctor_get(v___x_1684_, 0);
v_isSharedCheck_1704_ = !lean_is_exclusive(v___x_1684_);
if (v_isSharedCheck_1704_ == 0)
{
v___x_1699_ = v___x_1684_;
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
else
{
lean_inc(v_a_1697_);
lean_dec(v___x_1684_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
lean_object* v___x_1702_; 
if (v_isShared_1700_ == 0)
{
v___x_1702_ = v___x_1699_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v_a_1697_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
return v___x_1702_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead___boxed(lean_object* v_e_1705_, lean_object* v_a_1706_, lean_object* v_a_1707_, lean_object* v_a_1708_, lean_object* v_a_1709_, lean_object* v_a_1710_, lean_object* v_a_1711_, lean_object* v_a_1712_){
_start:
{
lean_object* v_res_1713_; 
v_res_1713_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead(v_e_1705_, v_a_1706_, v_a_1707_, v_a_1708_, v_a_1709_, v_a_1710_, v_a_1711_);
lean_dec(v_a_1711_);
lean_dec_ref(v_a_1710_);
lean_dec(v_a_1709_);
lean_dec_ref(v_a_1708_);
lean_dec(v_a_1707_);
lean_dec_ref(v_a_1706_);
return v_res_1713_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_type_1714_, lean_object* v_as_1715_, lean_object* v_i_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_){
_start:
{
lean_object* v_zero_1724_; uint8_t v_isZero_1725_; 
v_zero_1724_ = lean_unsigned_to_nat(0u);
v_isZero_1725_ = lean_nat_dec_eq(v_i_1716_, v_zero_1724_);
if (v_isZero_1725_ == 1)
{
lean_object* v___x_1726_; lean_object* v___x_1727_; 
lean_dec(v_i_1716_);
lean_dec_ref(v_type_1714_);
v___x_1726_ = lean_box(0);
v___x_1727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1727_, 0, v___x_1726_);
return v___x_1727_;
}
else
{
lean_object* v_one_1728_; lean_object* v_n_1729_; lean_object* v___x_1730_; 
v_one_1728_ = lean_unsigned_to_nat(1u);
v_n_1729_ = lean_nat_sub(v_i_1716_, v_one_1728_);
lean_dec(v_i_1716_);
v___x_1730_ = lean_array_fget(v_as_1715_, v_n_1729_);
if (lean_obj_tag(v___x_1730_) == 0)
{
v_i_1716_ = v_n_1729_;
goto _start;
}
else
{
lean_object* v_val_1732_; lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1764_; 
v_val_1732_ = lean_ctor_get(v___x_1730_, 0);
v_isSharedCheck_1764_ = !lean_is_exclusive(v___x_1730_);
if (v_isSharedCheck_1764_ == 0)
{
v___x_1734_ = v___x_1730_;
v_isShared_1735_ = v_isSharedCheck_1764_;
goto v_resetjp_1733_;
}
else
{
lean_inc(v_val_1732_);
lean_dec(v___x_1730_);
v___x_1734_ = lean_box(0);
v_isShared_1735_ = v_isSharedCheck_1764_;
goto v_resetjp_1733_;
}
v_resetjp_1733_:
{
uint8_t v___x_1736_; 
v___x_1736_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1732_);
if (v___x_1736_ == 0)
{
uint8_t v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1737_ = 1;
v___x_1738_ = l_Lean_LocalDecl_type(v_val_1732_);
v___x_1739_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__5));
lean_inc_ref(v_type_1714_);
v___x_1740_ = l_Lean_Meta_Sym_isDefEqS(v_type_1714_, v___x_1738_, v___x_1737_, v___x_1737_, v___x_1739_, v___x_1739_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_);
if (lean_obj_tag(v___x_1740_) == 0)
{
lean_object* v_a_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1754_; 
v_a_1741_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1754_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1754_ == 0)
{
v___x_1743_ = v___x_1740_;
v_isShared_1744_ = v_isSharedCheck_1754_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_a_1741_);
lean_dec(v___x_1740_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1754_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
uint8_t v___x_1745_; 
v___x_1745_ = lean_unbox(v_a_1741_);
lean_dec(v_a_1741_);
if (v___x_1745_ == 0)
{
lean_del_object(v___x_1743_);
lean_del_object(v___x_1734_);
lean_dec(v_val_1732_);
v_i_1716_ = v_n_1729_;
goto _start;
}
else
{
lean_object* v___x_1747_; lean_object* v___x_1749_; 
lean_dec(v_n_1729_);
lean_dec_ref(v_type_1714_);
v___x_1747_ = l_Lean_LocalDecl_fvarId(v_val_1732_);
lean_dec(v_val_1732_);
if (v_isShared_1735_ == 0)
{
lean_ctor_set(v___x_1734_, 0, v___x_1747_);
v___x_1749_ = v___x_1734_;
goto v_reusejp_1748_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v___x_1747_);
v___x_1749_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1748_;
}
v_reusejp_1748_:
{
lean_object* v___x_1751_; 
if (v_isShared_1744_ == 0)
{
lean_ctor_set(v___x_1743_, 0, v___x_1749_);
v___x_1751_ = v___x_1743_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v___x_1749_);
v___x_1751_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
return v___x_1751_;
}
}
}
}
}
else
{
lean_object* v_a_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1762_; 
lean_del_object(v___x_1734_);
lean_dec(v_val_1732_);
lean_dec(v_n_1729_);
lean_dec_ref(v_type_1714_);
v_a_1755_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1762_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1762_ == 0)
{
v___x_1757_ = v___x_1740_;
v_isShared_1758_ = v_isSharedCheck_1762_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_a_1755_);
lean_dec(v___x_1740_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1762_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
lean_object* v___x_1760_; 
if (v_isShared_1758_ == 0)
{
v___x_1760_ = v___x_1757_;
goto v_reusejp_1759_;
}
else
{
lean_object* v_reuseFailAlloc_1761_; 
v_reuseFailAlloc_1761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1761_, 0, v_a_1755_);
v___x_1760_ = v_reuseFailAlloc_1761_;
goto v_reusejp_1759_;
}
v_reusejp_1759_:
{
return v___x_1760_;
}
}
}
}
else
{
lean_del_object(v___x_1734_);
lean_dec(v_val_1732_);
v_i_1716_ = v_n_1729_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_type_1765_, lean_object* v_as_1766_, lean_object* v_i_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_){
_start:
{
lean_object* v_res_1775_; 
v_res_1775_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__1___redArg(v_type_1765_, v_as_1766_, v_i_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_, v___y_1773_);
lean_dec(v___y_1773_);
lean_dec_ref(v___y_1772_);
lean_dec(v___y_1771_);
lean_dec_ref(v___y_1770_);
lean_dec(v___y_1769_);
lean_dec_ref(v___y_1768_);
lean_dec_ref(v_as_1766_);
return v_res_1775_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__2_spec__3___redArg(lean_object* v_type_1776_, lean_object* v_as_1777_, lean_object* v_i_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_){
_start:
{
lean_object* v_zero_1786_; uint8_t v_isZero_1787_; 
v_zero_1786_ = lean_unsigned_to_nat(0u);
v_isZero_1787_ = lean_nat_dec_eq(v_i_1778_, v_zero_1786_);
if (v_isZero_1787_ == 1)
{
lean_object* v___x_1788_; lean_object* v___x_1789_; 
lean_dec(v_i_1778_);
lean_dec_ref(v_type_1776_);
v___x_1788_ = lean_box(0);
v___x_1789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1789_, 0, v___x_1788_);
return v___x_1789_;
}
else
{
lean_object* v_one_1790_; lean_object* v_n_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
v_one_1790_ = lean_unsigned_to_nat(1u);
v_n_1791_ = lean_nat_sub(v_i_1778_, v_one_1790_);
lean_dec(v_i_1778_);
v___x_1792_ = lean_array_fget_borrowed(v_as_1777_, v_n_1791_);
lean_inc_ref(v_type_1776_);
v___x_1793_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__2(v_type_1776_, v___x_1792_, v___y_1779_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_);
if (lean_obj_tag(v___x_1793_) == 0)
{
lean_object* v_a_1794_; 
v_a_1794_ = lean_ctor_get(v___x_1793_, 0);
lean_inc(v_a_1794_);
if (lean_obj_tag(v_a_1794_) == 0)
{
lean_dec_ref_known(v___x_1793_, 1);
v_i_1778_ = v_n_1791_;
goto _start;
}
else
{
lean_dec_ref_known(v_a_1794_, 1);
lean_dec(v_n_1791_);
lean_dec_ref(v_type_1776_);
return v___x_1793_;
}
}
else
{
lean_dec(v_n_1791_);
lean_dec_ref(v_type_1776_);
return v___x_1793_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__2(lean_object* v_type_1796_, lean_object* v_x_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_){
_start:
{
if (lean_obj_tag(v_x_1797_) == 0)
{
lean_object* v_cs_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; 
v_cs_1805_ = lean_ctor_get(v_x_1797_, 0);
v___x_1806_ = lean_array_get_size(v_cs_1805_);
v___x_1807_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__2_spec__3___redArg(v_type_1796_, v_cs_1805_, v___x_1806_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_);
return v___x_1807_;
}
else
{
lean_object* v_vs_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; 
v_vs_1808_ = lean_ctor_get(v_x_1797_, 0);
v___x_1809_ = lean_array_get_size(v_vs_1808_);
v___x_1810_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__1___redArg(v_type_1796_, v_vs_1808_, v___x_1809_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_);
return v___x_1810_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__2___boxed(lean_object* v_type_1811_, lean_object* v_x_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_){
_start:
{
lean_object* v_res_1820_; 
v_res_1820_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__2(v_type_1811_, v_x_1812_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_);
lean_dec(v___y_1818_);
lean_dec_ref(v___y_1817_);
lean_dec(v___y_1816_);
lean_dec_ref(v___y_1815_);
lean_dec(v___y_1814_);
lean_dec_ref(v___y_1813_);
lean_dec_ref(v_x_1812_);
return v_res_1820_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__2_spec__3___redArg___boxed(lean_object* v_type_1821_, lean_object* v_as_1822_, lean_object* v_i_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_){
_start:
{
lean_object* v_res_1831_; 
v_res_1831_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__2_spec__3___redArg(v_type_1821_, v_as_1822_, v_i_1823_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_);
lean_dec(v___y_1829_);
lean_dec_ref(v___y_1828_);
lean_dec(v___y_1827_);
lean_dec_ref(v___y_1826_);
lean_dec(v___y_1825_);
lean_dec_ref(v___y_1824_);
lean_dec_ref(v_as_1822_);
return v_res_1831_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0(lean_object* v_type_1832_, lean_object* v_t_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_){
_start:
{
lean_object* v_root_1841_; lean_object* v_tail_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; 
v_root_1841_ = lean_ctor_get(v_t_1833_, 0);
v_tail_1842_ = lean_ctor_get(v_t_1833_, 1);
v___x_1843_ = lean_array_get_size(v_tail_1842_);
lean_inc_ref(v_type_1832_);
v___x_1844_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__1___redArg(v_type_1832_, v_tail_1842_, v___x_1843_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_);
if (lean_obj_tag(v___x_1844_) == 0)
{
lean_object* v_a_1845_; 
v_a_1845_ = lean_ctor_get(v___x_1844_, 0);
lean_inc(v_a_1845_);
if (lean_obj_tag(v_a_1845_) == 0)
{
lean_object* v___x_1846_; 
lean_dec_ref_known(v___x_1844_, 1);
v___x_1846_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__2(v_type_1832_, v_root_1841_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_);
return v___x_1846_;
}
else
{
lean_dec_ref_known(v_a_1845_, 1);
lean_dec_ref(v_type_1832_);
return v___x_1844_;
}
}
else
{
lean_dec_ref(v_type_1832_);
return v___x_1844_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0___boxed(lean_object* v_type_1847_, lean_object* v_t_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_){
_start:
{
lean_object* v_res_1856_; 
v_res_1856_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0(v_type_1847_, v_t_1848_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_);
lean_dec(v___y_1854_);
lean_dec_ref(v___y_1853_);
lean_dec(v___y_1852_);
lean_dec_ref(v___y_1851_);
lean_dec(v___y_1850_);
lean_dec_ref(v___y_1849_);
lean_dec_ref(v_t_1848_);
return v_res_1856_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0(lean_object* v_type_1857_, lean_object* v_lctx_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_){
_start:
{
lean_object* v_decls_1866_; lean_object* v___x_1867_; 
v_decls_1866_ = lean_ctor_get(v_lctx_1858_, 1);
v___x_1867_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0(v_type_1857_, v_decls_1866_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_);
return v___x_1867_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0___boxed(lean_object* v_type_1868_, lean_object* v_lctx_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_){
_start:
{
lean_object* v_res_1877_; 
v_res_1877_ = l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0(v_type_1868_, v_lctx_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_);
lean_dec(v___y_1875_);
lean_dec_ref(v___y_1874_);
lean_dec(v___y_1873_);
lean_dec_ref(v___y_1872_);
lean_dec(v___y_1871_);
lean_dec_ref(v___y_1870_);
lean_dec_ref(v_lctx_1869_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f(lean_object* v_type_1878_, lean_object* v_a_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_){
_start:
{
lean_object* v_lctx_1886_; lean_object* v___x_1887_; 
v_lctx_1886_ = lean_ctor_get(v_a_1881_, 2);
v___x_1887_ = l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0(v_type_1878_, v_lctx_1886_, v_a_1879_, v_a_1880_, v_a_1881_, v_a_1882_, v_a_1883_, v_a_1884_);
return v___x_1887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f___boxed(lean_object* v_type_1888_, lean_object* v_a_1889_, lean_object* v_a_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_){
_start:
{
lean_object* v_res_1896_; 
v_res_1896_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f(v_type_1888_, v_a_1889_, v_a_1890_, v_a_1891_, v_a_1892_, v_a_1893_, v_a_1894_);
lean_dec(v_a_1894_);
lean_dec_ref(v_a_1893_);
lean_dec(v_a_1892_);
lean_dec_ref(v_a_1891_);
lean_dec(v_a_1890_);
lean_dec_ref(v_a_1889_);
return v_res_1896_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__1(lean_object* v_type_1897_, lean_object* v_as_1898_, lean_object* v_i_1899_, lean_object* v_a_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_){
_start:
{
lean_object* v___x_1908_; 
v___x_1908_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__1___redArg(v_type_1897_, v_as_1898_, v_i_1899_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_type_1909_, lean_object* v_as_1910_, lean_object* v_i_1911_, lean_object* v_a_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_){
_start:
{
lean_object* v_res_1920_; 
v_res_1920_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__1(v_type_1909_, v_as_1910_, v_i_1911_, v_a_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_, v___y_1918_);
lean_dec(v___y_1918_);
lean_dec_ref(v___y_1917_);
lean_dec(v___y_1916_);
lean_dec_ref(v___y_1915_);
lean_dec(v___y_1914_);
lean_dec_ref(v___y_1913_);
lean_dec_ref(v_as_1910_);
return v_res_1920_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__2_spec__3(lean_object* v_type_1921_, lean_object* v_as_1922_, lean_object* v_i_1923_, lean_object* v_a_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_){
_start:
{
lean_object* v___x_1932_; 
v___x_1932_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__2_spec__3___redArg(v_type_1921_, v_as_1922_, v_i_1923_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_);
return v___x_1932_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_type_1933_, lean_object* v_as_1934_, lean_object* v_i_1935_, lean_object* v_a_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_){
_start:
{
lean_object* v_res_1944_; 
v_res_1944_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f_spec__0_spec__0_spec__2_spec__3(v_type_1933_, v_as_1934_, v_i_1935_, v_a_1936_, v___y_1937_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_);
lean_dec(v___y_1942_);
lean_dec_ref(v___y_1941_);
lean_dec(v___y_1940_);
lean_dec_ref(v___y_1939_);
lean_dec(v___y_1938_);
lean_dec_ref(v___y_1937_);
lean_dec_ref(v_as_1934_);
return v_res_1944_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_1945_, lean_object* v_x_1946_, lean_object* v_x_1947_, lean_object* v_x_1948_){
_start:
{
lean_object* v_ks_1949_; lean_object* v_vs_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1974_; 
v_ks_1949_ = lean_ctor_get(v_x_1945_, 0);
v_vs_1950_ = lean_ctor_get(v_x_1945_, 1);
v_isSharedCheck_1974_ = !lean_is_exclusive(v_x_1945_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1952_ = v_x_1945_;
v_isShared_1953_ = v_isSharedCheck_1974_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_vs_1950_);
lean_inc(v_ks_1949_);
lean_dec(v_x_1945_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1974_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1954_; uint8_t v___x_1955_; 
v___x_1954_ = lean_array_get_size(v_ks_1949_);
v___x_1955_ = lean_nat_dec_lt(v_x_1946_, v___x_1954_);
if (v___x_1955_ == 0)
{
lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1959_; 
lean_dec(v_x_1946_);
v___x_1956_ = lean_array_push(v_ks_1949_, v_x_1947_);
v___x_1957_ = lean_array_push(v_vs_1950_, v_x_1948_);
if (v_isShared_1953_ == 0)
{
lean_ctor_set(v___x_1952_, 1, v___x_1957_);
lean_ctor_set(v___x_1952_, 0, v___x_1956_);
v___x_1959_ = v___x_1952_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v___x_1956_);
lean_ctor_set(v_reuseFailAlloc_1960_, 1, v___x_1957_);
v___x_1959_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
return v___x_1959_;
}
}
else
{
lean_object* v_k_x27_1961_; uint8_t v___x_1962_; 
v_k_x27_1961_ = lean_array_fget_borrowed(v_ks_1949_, v_x_1946_);
v___x_1962_ = l_Lean_instBEqMVarId_beq(v_x_1947_, v_k_x27_1961_);
if (v___x_1962_ == 0)
{
lean_object* v___x_1964_; 
if (v_isShared_1953_ == 0)
{
v___x_1964_ = v___x_1952_;
goto v_reusejp_1963_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v_ks_1949_);
lean_ctor_set(v_reuseFailAlloc_1968_, 1, v_vs_1950_);
v___x_1964_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1963_;
}
v_reusejp_1963_:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; 
v___x_1965_ = lean_unsigned_to_nat(1u);
v___x_1966_ = lean_nat_add(v_x_1946_, v___x_1965_);
lean_dec(v_x_1946_);
v_x_1945_ = v___x_1964_;
v_x_1946_ = v___x_1966_;
goto _start;
}
}
else
{
lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1972_; 
v___x_1969_ = lean_array_fset(v_ks_1949_, v_x_1946_, v_x_1947_);
v___x_1970_ = lean_array_fset(v_vs_1950_, v_x_1946_, v_x_1948_);
lean_dec(v_x_1946_);
if (v_isShared_1953_ == 0)
{
lean_ctor_set(v___x_1952_, 1, v___x_1970_);
lean_ctor_set(v___x_1952_, 0, v___x_1969_);
v___x_1972_ = v___x_1952_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v___x_1969_);
lean_ctor_set(v_reuseFailAlloc_1973_, 1, v___x_1970_);
v___x_1972_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
return v___x_1972_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_n_1975_, lean_object* v_k_1976_, lean_object* v_v_1977_){
_start:
{
lean_object* v___x_1978_; lean_object* v___x_1979_; 
v___x_1978_ = lean_unsigned_to_nat(0u);
v___x_1979_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_n_1975_, v___x_1978_, v_k_1976_, v_v_1977_);
return v___x_1979_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
size_t v___x_1980_; size_t v___x_1981_; size_t v___x_1982_; 
v___x_1980_ = ((size_t)5ULL);
v___x_1981_ = ((size_t)1ULL);
v___x_1982_ = lean_usize_shift_left(v___x_1981_, v___x_1980_);
return v___x_1982_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_1983_; size_t v___x_1984_; size_t v___x_1985_; 
v___x_1983_ = ((size_t)1ULL);
v___x_1984_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_1985_ = lean_usize_sub(v___x_1984_, v___x_1983_);
return v___x_1985_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_1986_; 
v___x_1986_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1986_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg(lean_object* v_x_1987_, size_t v_x_1988_, size_t v_x_1989_, lean_object* v_x_1990_, lean_object* v_x_1991_){
_start:
{
if (lean_obj_tag(v_x_1987_) == 0)
{
lean_object* v_es_1992_; size_t v___x_1993_; size_t v___x_1994_; size_t v___x_1995_; size_t v___x_1996_; lean_object* v_j_1997_; lean_object* v___x_1998_; uint8_t v___x_1999_; 
v_es_1992_ = lean_ctor_get(v_x_1987_, 0);
v___x_1993_ = ((size_t)5ULL);
v___x_1994_ = ((size_t)1ULL);
v___x_1995_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_1996_ = lean_usize_land(v_x_1988_, v___x_1995_);
v_j_1997_ = lean_usize_to_nat(v___x_1996_);
v___x_1998_ = lean_array_get_size(v_es_1992_);
v___x_1999_ = lean_nat_dec_lt(v_j_1997_, v___x_1998_);
if (v___x_1999_ == 0)
{
lean_dec(v_j_1997_);
lean_dec(v_x_1991_);
lean_dec(v_x_1990_);
return v_x_1987_;
}
else
{
lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2036_; 
lean_inc_ref(v_es_1992_);
v_isSharedCheck_2036_ = !lean_is_exclusive(v_x_1987_);
if (v_isSharedCheck_2036_ == 0)
{
lean_object* v_unused_2037_; 
v_unused_2037_ = lean_ctor_get(v_x_1987_, 0);
lean_dec(v_unused_2037_);
v___x_2001_ = v_x_1987_;
v_isShared_2002_ = v_isSharedCheck_2036_;
goto v_resetjp_2000_;
}
else
{
lean_dec(v_x_1987_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2036_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
lean_object* v_v_2003_; lean_object* v___x_2004_; lean_object* v_xs_x27_2005_; lean_object* v___y_2007_; 
v_v_2003_ = lean_array_fget(v_es_1992_, v_j_1997_);
v___x_2004_ = lean_box(0);
v_xs_x27_2005_ = lean_array_fset(v_es_1992_, v_j_1997_, v___x_2004_);
switch(lean_obj_tag(v_v_2003_))
{
case 0:
{
lean_object* v_key_2012_; lean_object* v_val_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2023_; 
v_key_2012_ = lean_ctor_get(v_v_2003_, 0);
v_val_2013_ = lean_ctor_get(v_v_2003_, 1);
v_isSharedCheck_2023_ = !lean_is_exclusive(v_v_2003_);
if (v_isSharedCheck_2023_ == 0)
{
v___x_2015_ = v_v_2003_;
v_isShared_2016_ = v_isSharedCheck_2023_;
goto v_resetjp_2014_;
}
else
{
lean_inc(v_val_2013_);
lean_inc(v_key_2012_);
lean_dec(v_v_2003_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2023_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
uint8_t v___x_2017_; 
v___x_2017_ = l_Lean_instBEqMVarId_beq(v_x_1990_, v_key_2012_);
if (v___x_2017_ == 0)
{
lean_object* v___x_2018_; lean_object* v___x_2019_; 
lean_del_object(v___x_2015_);
v___x_2018_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2012_, v_val_2013_, v_x_1990_, v_x_1991_);
v___x_2019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2019_, 0, v___x_2018_);
v___y_2007_ = v___x_2019_;
goto v___jp_2006_;
}
else
{
lean_object* v___x_2021_; 
lean_dec(v_val_2013_);
lean_dec(v_key_2012_);
if (v_isShared_2016_ == 0)
{
lean_ctor_set(v___x_2015_, 1, v_x_1991_);
lean_ctor_set(v___x_2015_, 0, v_x_1990_);
v___x_2021_ = v___x_2015_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v_x_1990_);
lean_ctor_set(v_reuseFailAlloc_2022_, 1, v_x_1991_);
v___x_2021_ = v_reuseFailAlloc_2022_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
v___y_2007_ = v___x_2021_;
goto v___jp_2006_;
}
}
}
}
case 1:
{
lean_object* v_node_2024_; lean_object* v___x_2026_; uint8_t v_isShared_2027_; uint8_t v_isSharedCheck_2034_; 
v_node_2024_ = lean_ctor_get(v_v_2003_, 0);
v_isSharedCheck_2034_ = !lean_is_exclusive(v_v_2003_);
if (v_isSharedCheck_2034_ == 0)
{
v___x_2026_ = v_v_2003_;
v_isShared_2027_ = v_isSharedCheck_2034_;
goto v_resetjp_2025_;
}
else
{
lean_inc(v_node_2024_);
lean_dec(v_v_2003_);
v___x_2026_ = lean_box(0);
v_isShared_2027_ = v_isSharedCheck_2034_;
goto v_resetjp_2025_;
}
v_resetjp_2025_:
{
size_t v___x_2028_; size_t v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2032_; 
v___x_2028_ = lean_usize_shift_right(v_x_1988_, v___x_1993_);
v___x_2029_ = lean_usize_add(v_x_1989_, v___x_1994_);
v___x_2030_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg(v_node_2024_, v___x_2028_, v___x_2029_, v_x_1990_, v_x_1991_);
if (v_isShared_2027_ == 0)
{
lean_ctor_set(v___x_2026_, 0, v___x_2030_);
v___x_2032_ = v___x_2026_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2033_; 
v_reuseFailAlloc_2033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2033_, 0, v___x_2030_);
v___x_2032_ = v_reuseFailAlloc_2033_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
v___y_2007_ = v___x_2032_;
goto v___jp_2006_;
}
}
}
default: 
{
lean_object* v___x_2035_; 
v___x_2035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2035_, 0, v_x_1990_);
lean_ctor_set(v___x_2035_, 1, v_x_1991_);
v___y_2007_ = v___x_2035_;
goto v___jp_2006_;
}
}
v___jp_2006_:
{
lean_object* v___x_2008_; lean_object* v___x_2010_; 
v___x_2008_ = lean_array_fset(v_xs_x27_2005_, v_j_1997_, v___y_2007_);
lean_dec(v_j_1997_);
if (v_isShared_2002_ == 0)
{
lean_ctor_set(v___x_2001_, 0, v___x_2008_);
v___x_2010_ = v___x_2001_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2011_; 
v_reuseFailAlloc_2011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2011_, 0, v___x_2008_);
v___x_2010_ = v_reuseFailAlloc_2011_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
return v___x_2010_;
}
}
}
}
}
else
{
lean_object* v_ks_2038_; lean_object* v_vs_2039_; lean_object* v___x_2041_; uint8_t v_isShared_2042_; uint8_t v_isSharedCheck_2059_; 
v_ks_2038_ = lean_ctor_get(v_x_1987_, 0);
v_vs_2039_ = lean_ctor_get(v_x_1987_, 1);
v_isSharedCheck_2059_ = !lean_is_exclusive(v_x_1987_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2041_ = v_x_1987_;
v_isShared_2042_ = v_isSharedCheck_2059_;
goto v_resetjp_2040_;
}
else
{
lean_inc(v_vs_2039_);
lean_inc(v_ks_2038_);
lean_dec(v_x_1987_);
v___x_2041_ = lean_box(0);
v_isShared_2042_ = v_isSharedCheck_2059_;
goto v_resetjp_2040_;
}
v_resetjp_2040_:
{
lean_object* v___x_2044_; 
if (v_isShared_2042_ == 0)
{
v___x_2044_ = v___x_2041_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2058_, 0, v_ks_2038_);
lean_ctor_set(v_reuseFailAlloc_2058_, 1, v_vs_2039_);
v___x_2044_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
lean_object* v_newNode_2045_; uint8_t v___y_2047_; size_t v___x_2053_; uint8_t v___x_2054_; 
v_newNode_2045_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__2___redArg(v___x_2044_, v_x_1990_, v_x_1991_);
v___x_2053_ = ((size_t)7ULL);
v___x_2054_ = lean_usize_dec_le(v___x_2053_, v_x_1989_);
if (v___x_2054_ == 0)
{
lean_object* v___x_2055_; lean_object* v___x_2056_; uint8_t v___x_2057_; 
v___x_2055_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2045_);
v___x_2056_ = lean_unsigned_to_nat(4u);
v___x_2057_ = lean_nat_dec_lt(v___x_2055_, v___x_2056_);
lean_dec(v___x_2055_);
v___y_2047_ = v___x_2057_;
goto v___jp_2046_;
}
else
{
v___y_2047_ = v___x_2054_;
goto v___jp_2046_;
}
v___jp_2046_:
{
if (v___y_2047_ == 0)
{
lean_object* v_ks_2048_; lean_object* v_vs_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; 
v_ks_2048_ = lean_ctor_get(v_newNode_2045_, 0);
lean_inc_ref(v_ks_2048_);
v_vs_2049_ = lean_ctor_get(v_newNode_2045_, 1);
lean_inc_ref(v_vs_2049_);
lean_dec_ref(v_newNode_2045_);
v___x_2050_ = lean_unsigned_to_nat(0u);
v___x_2051_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg___closed__2);
v___x_2052_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__3___redArg(v_x_1989_, v_ks_2048_, v_vs_2049_, v___x_2050_, v___x_2051_);
lean_dec_ref(v_vs_2049_);
lean_dec_ref(v_ks_2048_);
return v___x_2052_;
}
else
{
return v_newNode_2045_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__3___redArg(size_t v_depth_2060_, lean_object* v_keys_2061_, lean_object* v_vals_2062_, lean_object* v_i_2063_, lean_object* v_entries_2064_){
_start:
{
lean_object* v___x_2065_; uint8_t v___x_2066_; 
v___x_2065_ = lean_array_get_size(v_keys_2061_);
v___x_2066_ = lean_nat_dec_lt(v_i_2063_, v___x_2065_);
if (v___x_2066_ == 0)
{
lean_dec(v_i_2063_);
return v_entries_2064_;
}
else
{
lean_object* v_k_2067_; lean_object* v_v_2068_; uint64_t v___x_2069_; size_t v_h_2070_; size_t v___x_2071_; lean_object* v___x_2072_; size_t v___x_2073_; size_t v___x_2074_; size_t v___x_2075_; size_t v_h_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; 
v_k_2067_ = lean_array_fget_borrowed(v_keys_2061_, v_i_2063_);
v_v_2068_ = lean_array_fget_borrowed(v_vals_2062_, v_i_2063_);
v___x_2069_ = l_Lean_instHashableMVarId_hash(v_k_2067_);
v_h_2070_ = lean_uint64_to_usize(v___x_2069_);
v___x_2071_ = ((size_t)5ULL);
v___x_2072_ = lean_unsigned_to_nat(1u);
v___x_2073_ = ((size_t)1ULL);
v___x_2074_ = lean_usize_sub(v_depth_2060_, v___x_2073_);
v___x_2075_ = lean_usize_mul(v___x_2071_, v___x_2074_);
v_h_2076_ = lean_usize_shift_right(v_h_2070_, v___x_2075_);
v___x_2077_ = lean_nat_add(v_i_2063_, v___x_2072_);
lean_dec(v_i_2063_);
lean_inc(v_v_2068_);
lean_inc(v_k_2067_);
v___x_2078_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg(v_entries_2064_, v_h_2076_, v_depth_2060_, v_k_2067_, v_v_2068_);
v_i_2063_ = v___x_2077_;
v_entries_2064_ = v___x_2078_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_depth_2080_, lean_object* v_keys_2081_, lean_object* v_vals_2082_, lean_object* v_i_2083_, lean_object* v_entries_2084_){
_start:
{
size_t v_depth_boxed_2085_; lean_object* v_res_2086_; 
v_depth_boxed_2085_ = lean_unbox_usize(v_depth_2080_);
lean_dec(v_depth_2080_);
v_res_2086_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_boxed_2085_, v_keys_2081_, v_vals_2082_, v_i_2083_, v_entries_2084_);
lean_dec_ref(v_vals_2082_);
lean_dec_ref(v_keys_2081_);
return v_res_2086_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_2087_, lean_object* v_x_2088_, lean_object* v_x_2089_, lean_object* v_x_2090_, lean_object* v_x_2091_){
_start:
{
size_t v_x_1946__boxed_2092_; size_t v_x_1947__boxed_2093_; lean_object* v_res_2094_; 
v_x_1946__boxed_2092_ = lean_unbox_usize(v_x_2088_);
lean_dec(v_x_2088_);
v_x_1947__boxed_2093_ = lean_unbox_usize(v_x_2089_);
lean_dec(v_x_2089_);
v_res_2094_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg(v_x_2087_, v_x_1946__boxed_2092_, v_x_1947__boxed_2093_, v_x_2090_, v_x_2091_);
return v_res_2094_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0___redArg(lean_object* v_x_2095_, lean_object* v_x_2096_, lean_object* v_x_2097_){
_start:
{
uint64_t v___x_2098_; size_t v___x_2099_; size_t v___x_2100_; lean_object* v___x_2101_; 
v___x_2098_ = l_Lean_instHashableMVarId_hash(v_x_2096_);
v___x_2099_ = lean_uint64_to_usize(v___x_2098_);
v___x_2100_ = ((size_t)1ULL);
v___x_2101_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg(v_x_2095_, v___x_2099_, v___x_2100_, v_x_2096_, v_x_2097_);
return v___x_2101_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0___redArg(lean_object* v_mvarId_2102_, lean_object* v_val_2103_, lean_object* v___y_2104_){
_start:
{
lean_object* v___x_2106_; lean_object* v_mctx_2107_; lean_object* v_cache_2108_; lean_object* v_zetaDeltaFVarIds_2109_; lean_object* v_postponed_2110_; lean_object* v_diag_2111_; lean_object* v___x_2113_; uint8_t v_isShared_2114_; uint8_t v_isSharedCheck_2139_; 
v___x_2106_ = lean_st_ref_take(v___y_2104_);
v_mctx_2107_ = lean_ctor_get(v___x_2106_, 0);
v_cache_2108_ = lean_ctor_get(v___x_2106_, 1);
v_zetaDeltaFVarIds_2109_ = lean_ctor_get(v___x_2106_, 2);
v_postponed_2110_ = lean_ctor_get(v___x_2106_, 3);
v_diag_2111_ = lean_ctor_get(v___x_2106_, 4);
v_isSharedCheck_2139_ = !lean_is_exclusive(v___x_2106_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2113_ = v___x_2106_;
v_isShared_2114_ = v_isSharedCheck_2139_;
goto v_resetjp_2112_;
}
else
{
lean_inc(v_diag_2111_);
lean_inc(v_postponed_2110_);
lean_inc(v_zetaDeltaFVarIds_2109_);
lean_inc(v_cache_2108_);
lean_inc(v_mctx_2107_);
lean_dec(v___x_2106_);
v___x_2113_ = lean_box(0);
v_isShared_2114_ = v_isSharedCheck_2139_;
goto v_resetjp_2112_;
}
v_resetjp_2112_:
{
lean_object* v_depth_2115_; lean_object* v_levelAssignDepth_2116_; lean_object* v_lmvarCounter_2117_; lean_object* v_mvarCounter_2118_; lean_object* v_lDecls_2119_; lean_object* v_decls_2120_; lean_object* v_userNames_2121_; lean_object* v_lAssignment_2122_; lean_object* v_eAssignment_2123_; lean_object* v_dAssignment_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2138_; 
v_depth_2115_ = lean_ctor_get(v_mctx_2107_, 0);
v_levelAssignDepth_2116_ = lean_ctor_get(v_mctx_2107_, 1);
v_lmvarCounter_2117_ = lean_ctor_get(v_mctx_2107_, 2);
v_mvarCounter_2118_ = lean_ctor_get(v_mctx_2107_, 3);
v_lDecls_2119_ = lean_ctor_get(v_mctx_2107_, 4);
v_decls_2120_ = lean_ctor_get(v_mctx_2107_, 5);
v_userNames_2121_ = lean_ctor_get(v_mctx_2107_, 6);
v_lAssignment_2122_ = lean_ctor_get(v_mctx_2107_, 7);
v_eAssignment_2123_ = lean_ctor_get(v_mctx_2107_, 8);
v_dAssignment_2124_ = lean_ctor_get(v_mctx_2107_, 9);
v_isSharedCheck_2138_ = !lean_is_exclusive(v_mctx_2107_);
if (v_isSharedCheck_2138_ == 0)
{
v___x_2126_ = v_mctx_2107_;
v_isShared_2127_ = v_isSharedCheck_2138_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_dAssignment_2124_);
lean_inc(v_eAssignment_2123_);
lean_inc(v_lAssignment_2122_);
lean_inc(v_userNames_2121_);
lean_inc(v_decls_2120_);
lean_inc(v_lDecls_2119_);
lean_inc(v_mvarCounter_2118_);
lean_inc(v_lmvarCounter_2117_);
lean_inc(v_levelAssignDepth_2116_);
lean_inc(v_depth_2115_);
lean_dec(v_mctx_2107_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2138_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___x_2128_; lean_object* v___x_2130_; 
v___x_2128_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0___redArg(v_eAssignment_2123_, v_mvarId_2102_, v_val_2103_);
if (v_isShared_2127_ == 0)
{
lean_ctor_set(v___x_2126_, 8, v___x_2128_);
v___x_2130_ = v___x_2126_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2137_; 
v_reuseFailAlloc_2137_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2137_, 0, v_depth_2115_);
lean_ctor_set(v_reuseFailAlloc_2137_, 1, v_levelAssignDepth_2116_);
lean_ctor_set(v_reuseFailAlloc_2137_, 2, v_lmvarCounter_2117_);
lean_ctor_set(v_reuseFailAlloc_2137_, 3, v_mvarCounter_2118_);
lean_ctor_set(v_reuseFailAlloc_2137_, 4, v_lDecls_2119_);
lean_ctor_set(v_reuseFailAlloc_2137_, 5, v_decls_2120_);
lean_ctor_set(v_reuseFailAlloc_2137_, 6, v_userNames_2121_);
lean_ctor_set(v_reuseFailAlloc_2137_, 7, v_lAssignment_2122_);
lean_ctor_set(v_reuseFailAlloc_2137_, 8, v___x_2128_);
lean_ctor_set(v_reuseFailAlloc_2137_, 9, v_dAssignment_2124_);
v___x_2130_ = v_reuseFailAlloc_2137_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
lean_object* v___x_2132_; 
if (v_isShared_2114_ == 0)
{
lean_ctor_set(v___x_2113_, 0, v___x_2130_);
v___x_2132_ = v___x_2113_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v___x_2130_);
lean_ctor_set(v_reuseFailAlloc_2136_, 1, v_cache_2108_);
lean_ctor_set(v_reuseFailAlloc_2136_, 2, v_zetaDeltaFVarIds_2109_);
lean_ctor_set(v_reuseFailAlloc_2136_, 3, v_postponed_2110_);
lean_ctor_set(v_reuseFailAlloc_2136_, 4, v_diag_2111_);
v___x_2132_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; 
v___x_2133_ = lean_st_ref_set(v___y_2104_, v___x_2132_);
v___x_2134_ = lean_box(0);
v___x_2135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2135_, 0, v___x_2134_);
return v___x_2135_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0___redArg___boxed(lean_object* v_mvarId_2140_, lean_object* v_val_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_){
_start:
{
lean_object* v_res_2144_; 
v_res_2144_ = l_Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0___redArg(v_mvarId_2140_, v_val_2141_, v___y_2142_);
lean_dec(v___y_2142_);
return v_res_2144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Sym_assumptionCore___lam__0(lean_object* v_mvarId_2145_, lean_object* v___x_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_){
_start:
{
lean_object* v___x_2154_; 
lean_inc(v_mvarId_2145_);
v___x_2154_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_2145_, v___x_2146_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_);
if (lean_obj_tag(v___x_2154_) == 0)
{
lean_object* v___x_2155_; 
lean_dec_ref_known(v___x_2154_, 1);
lean_inc(v_mvarId_2145_);
v___x_2155_ = l_Lean_MVarId_getType(v_mvarId_2145_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_);
if (lean_obj_tag(v___x_2155_) == 0)
{
lean_object* v_a_2156_; lean_object* v___x_2157_; 
v_a_2156_ = lean_ctor_get(v___x_2155_, 0);
lean_inc(v_a_2156_);
lean_dec_ref_known(v___x_2155_, 1);
v___x_2157_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_findLocalDeclWithType_x3f(v_a_2156_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_);
if (lean_obj_tag(v___x_2157_) == 0)
{
lean_object* v_a_2158_; lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2180_; 
v_a_2158_ = lean_ctor_get(v___x_2157_, 0);
v_isSharedCheck_2180_ = !lean_is_exclusive(v___x_2157_);
if (v_isSharedCheck_2180_ == 0)
{
v___x_2160_ = v___x_2157_;
v_isShared_2161_ = v_isSharedCheck_2180_;
goto v_resetjp_2159_;
}
else
{
lean_inc(v_a_2158_);
lean_dec(v___x_2157_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2180_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
if (lean_obj_tag(v_a_2158_) == 0)
{
uint8_t v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2165_; 
lean_dec(v_mvarId_2145_);
v___x_2162_ = 0;
v___x_2163_ = lean_box(v___x_2162_);
if (v_isShared_2161_ == 0)
{
lean_ctor_set(v___x_2160_, 0, v___x_2163_);
v___x_2165_ = v___x_2160_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v___x_2163_);
v___x_2165_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
return v___x_2165_;
}
}
else
{
lean_object* v_val_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2178_; 
lean_del_object(v___x_2160_);
v_val_2167_ = lean_ctor_get(v_a_2158_, 0);
lean_inc(v_val_2167_);
lean_dec_ref_known(v_a_2158_, 1);
v___x_2168_ = l_Lean_mkFVar(v_val_2167_);
v___x_2169_ = l_Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0___redArg(v_mvarId_2145_, v___x_2168_, v___y_2150_);
v_isSharedCheck_2178_ = !lean_is_exclusive(v___x_2169_);
if (v_isSharedCheck_2178_ == 0)
{
lean_object* v_unused_2179_; 
v_unused_2179_ = lean_ctor_get(v___x_2169_, 0);
lean_dec(v_unused_2179_);
v___x_2171_ = v___x_2169_;
v_isShared_2172_ = v_isSharedCheck_2178_;
goto v_resetjp_2170_;
}
else
{
lean_dec(v___x_2169_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2178_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
uint8_t v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2176_; 
v___x_2173_ = 1;
v___x_2174_ = lean_box(v___x_2173_);
if (v_isShared_2172_ == 0)
{
lean_ctor_set(v___x_2171_, 0, v___x_2174_);
v___x_2176_ = v___x_2171_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v___x_2174_);
v___x_2176_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
return v___x_2176_;
}
}
}
}
}
else
{
lean_object* v_a_2181_; lean_object* v___x_2183_; uint8_t v_isShared_2184_; uint8_t v_isSharedCheck_2188_; 
lean_dec(v_mvarId_2145_);
v_a_2181_ = lean_ctor_get(v___x_2157_, 0);
v_isSharedCheck_2188_ = !lean_is_exclusive(v___x_2157_);
if (v_isSharedCheck_2188_ == 0)
{
v___x_2183_ = v___x_2157_;
v_isShared_2184_ = v_isSharedCheck_2188_;
goto v_resetjp_2182_;
}
else
{
lean_inc(v_a_2181_);
lean_dec(v___x_2157_);
v___x_2183_ = lean_box(0);
v_isShared_2184_ = v_isSharedCheck_2188_;
goto v_resetjp_2182_;
}
v_resetjp_2182_:
{
lean_object* v___x_2186_; 
if (v_isShared_2184_ == 0)
{
v___x_2186_ = v___x_2183_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v_a_2181_);
v___x_2186_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
return v___x_2186_;
}
}
}
}
else
{
lean_object* v_a_2189_; lean_object* v___x_2191_; uint8_t v_isShared_2192_; uint8_t v_isSharedCheck_2196_; 
lean_dec(v_mvarId_2145_);
v_a_2189_ = lean_ctor_get(v___x_2155_, 0);
v_isSharedCheck_2196_ = !lean_is_exclusive(v___x_2155_);
if (v_isSharedCheck_2196_ == 0)
{
v___x_2191_ = v___x_2155_;
v_isShared_2192_ = v_isSharedCheck_2196_;
goto v_resetjp_2190_;
}
else
{
lean_inc(v_a_2189_);
lean_dec(v___x_2155_);
v___x_2191_ = lean_box(0);
v_isShared_2192_ = v_isSharedCheck_2196_;
goto v_resetjp_2190_;
}
v_resetjp_2190_:
{
lean_object* v___x_2194_; 
if (v_isShared_2192_ == 0)
{
v___x_2194_ = v___x_2191_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v_a_2189_);
v___x_2194_ = v_reuseFailAlloc_2195_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
return v___x_2194_;
}
}
}
}
else
{
lean_object* v_a_2197_; lean_object* v___x_2199_; uint8_t v_isShared_2200_; uint8_t v_isSharedCheck_2204_; 
lean_dec(v_mvarId_2145_);
v_a_2197_ = lean_ctor_get(v___x_2154_, 0);
v_isSharedCheck_2204_ = !lean_is_exclusive(v___x_2154_);
if (v_isSharedCheck_2204_ == 0)
{
v___x_2199_ = v___x_2154_;
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
else
{
lean_inc(v_a_2197_);
lean_dec(v___x_2154_);
v___x_2199_ = lean_box(0);
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
v_resetjp_2198_:
{
lean_object* v___x_2202_; 
if (v_isShared_2200_ == 0)
{
v___x_2202_ = v___x_2199_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v_a_2197_);
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
LEAN_EXPORT lean_object* l_Lean_Sym_assumptionCore___lam__0___boxed(lean_object* v_mvarId_2205_, lean_object* v___x_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_){
_start:
{
lean_object* v_res_2214_; 
v_res_2214_ = l_Lean_Sym_assumptionCore___lam__0(v_mvarId_2205_, v___x_2206_, v___y_2207_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_);
lean_dec(v___y_2212_);
lean_dec_ref(v___y_2211_);
lean_dec(v___y_2210_);
lean_dec_ref(v___y_2209_);
lean_dec(v___y_2208_);
lean_dec_ref(v___y_2207_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Sym_assumptionCore(lean_object* v_mvarId_2218_, lean_object* v_a_2219_, lean_object* v_a_2220_, lean_object* v_a_2221_, lean_object* v_a_2222_, lean_object* v_a_2223_, lean_object* v_a_2224_){
_start:
{
lean_object* v___x_2226_; lean_object* v___f_2227_; lean_object* v___x_2228_; 
v___x_2226_ = ((lean_object*)(l_Lean_Sym_assumptionCore___closed__1));
lean_inc(v_mvarId_2218_);
v___f_2227_ = lean_alloc_closure((void*)(l_Lean_Sym_assumptionCore___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2227_, 0, v_mvarId_2218_);
lean_closure_set(v___f_2227_, 1, v___x_2226_);
v___x_2228_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs_spec__1___redArg(v_mvarId_2218_, v___f_2227_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_, v_a_2224_);
return v___x_2228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Sym_assumptionCore___boxed(lean_object* v_mvarId_2229_, lean_object* v_a_2230_, lean_object* v_a_2231_, lean_object* v_a_2232_, lean_object* v_a_2233_, lean_object* v_a_2234_, lean_object* v_a_2235_, lean_object* v_a_2236_){
_start:
{
lean_object* v_res_2237_; 
v_res_2237_ = l_Lean_Sym_assumptionCore(v_mvarId_2229_, v_a_2230_, v_a_2231_, v_a_2232_, v_a_2233_, v_a_2234_, v_a_2235_);
lean_dec(v_a_2235_);
lean_dec_ref(v_a_2234_);
lean_dec(v_a_2233_);
lean_dec_ref(v_a_2232_);
lean_dec(v_a_2231_);
lean_dec_ref(v_a_2230_);
return v_res_2237_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0(lean_object* v_mvarId_2238_, lean_object* v_val_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_){
_start:
{
lean_object* v___x_2247_; 
v___x_2247_ = l_Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0___redArg(v_mvarId_2238_, v_val_2239_, v___y_2243_);
return v___x_2247_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0___boxed(lean_object* v_mvarId_2248_, lean_object* v_val_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_){
_start:
{
lean_object* v_res_2257_; 
v_res_2257_ = l_Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0(v_mvarId_2248_, v_val_2249_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_);
lean_dec(v___y_2255_);
lean_dec_ref(v___y_2254_);
lean_dec(v___y_2253_);
lean_dec_ref(v___y_2252_);
lean_dec(v___y_2251_);
lean_dec_ref(v___y_2250_);
return v_res_2257_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0(lean_object* v_00_u03b2_2258_, lean_object* v_x_2259_, lean_object* v_x_2260_, lean_object* v_x_2261_){
_start:
{
lean_object* v___x_2262_; 
v___x_2262_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0___redArg(v_x_2259_, v_x_2260_, v_x_2261_);
return v___x_2262_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2263_, lean_object* v_x_2264_, size_t v_x_2265_, size_t v_x_2266_, lean_object* v_x_2267_, lean_object* v_x_2268_){
_start:
{
lean_object* v___x_2269_; 
v___x_2269_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___redArg(v_x_2264_, v_x_2265_, v_x_2266_, v_x_2267_, v_x_2268_);
return v___x_2269_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2270_, lean_object* v_x_2271_, lean_object* v_x_2272_, lean_object* v_x_2273_, lean_object* v_x_2274_, lean_object* v_x_2275_){
_start:
{
size_t v_x_2344__boxed_2276_; size_t v_x_2345__boxed_2277_; lean_object* v_res_2278_; 
v_x_2344__boxed_2276_ = lean_unbox_usize(v_x_2272_);
lean_dec(v_x_2272_);
v_x_2345__boxed_2277_ = lean_unbox_usize(v_x_2273_);
lean_dec(v_x_2273_);
v_res_2278_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1(v_00_u03b2_2270_, v_x_2271_, v_x_2344__boxed_2276_, v_x_2345__boxed_2277_, v_x_2274_, v_x_2275_);
return v_res_2278_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2279_, lean_object* v_n_2280_, lean_object* v_k_2281_, lean_object* v_v_2282_){
_start:
{
lean_object* v___x_2283_; 
v___x_2283_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__2___redArg(v_n_2280_, v_k_2281_, v_v_2282_);
return v___x_2283_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_2284_, size_t v_depth_2285_, lean_object* v_keys_2286_, lean_object* v_vals_2287_, lean_object* v_heq_2288_, lean_object* v_i_2289_, lean_object* v_entries_2290_){
_start:
{
lean_object* v___x_2291_; 
v___x_2291_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_2285_, v_keys_2286_, v_vals_2287_, v_i_2289_, v_entries_2290_);
return v___x_2291_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_2292_, lean_object* v_depth_2293_, lean_object* v_keys_2294_, lean_object* v_vals_2295_, lean_object* v_heq_2296_, lean_object* v_i_2297_, lean_object* v_entries_2298_){
_start:
{
size_t v_depth_boxed_2299_; lean_object* v_res_2300_; 
v_depth_boxed_2299_ = lean_unbox_usize(v_depth_2293_);
lean_dec(v_depth_2293_);
v_res_2300_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_2292_, v_depth_boxed_2299_, v_keys_2294_, v_vals_2295_, v_heq_2296_, v_i_2297_, v_entries_2298_);
lean_dec_ref(v_vals_2295_);
lean_dec_ref(v_keys_2294_);
return v_res_2300_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_2301_, lean_object* v_x_2302_, lean_object* v_x_2303_, lean_object* v_x_2304_, lean_object* v_x_2305_){
_start:
{
lean_object* v___x_2306_; 
v___x_2306_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_x_2302_, v_x_2303_, v_x_2304_, v_x_2305_);
return v___x_2306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Sym_assumption___redArg(lean_object* v_mvarId_2307_, lean_object* v_a_2308_, lean_object* v_a_2309_, lean_object* v_a_2310_, lean_object* v_a_2311_){
_start:
{
lean_object* v___x_2313_; 
lean_inc(v_mvarId_2307_);
v___x_2313_ = l_Lean_MVarId_assumptionCore(v_mvarId_2307_, v_a_2308_, v_a_2309_, v_a_2310_, v_a_2311_);
if (lean_obj_tag(v___x_2313_) == 0)
{
lean_object* v_a_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2326_; 
v_a_2314_ = lean_ctor_get(v___x_2313_, 0);
v_isSharedCheck_2326_ = !lean_is_exclusive(v___x_2313_);
if (v_isSharedCheck_2326_ == 0)
{
v___x_2316_ = v___x_2313_;
v_isShared_2317_ = v_isSharedCheck_2326_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_a_2314_);
lean_dec(v___x_2313_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2326_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
uint8_t v___x_2318_; 
v___x_2318_ = lean_unbox(v_a_2314_);
lean_dec(v_a_2314_);
if (v___x_2318_ == 0)
{
lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; 
lean_del_object(v___x_2316_);
v___x_2319_ = ((lean_object*)(l_Lean_Sym_assumptionCore___closed__1));
v___x_2320_ = lean_box(0);
v___x_2321_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2319_, v_mvarId_2307_, v___x_2320_, v_a_2308_, v_a_2309_, v_a_2310_, v_a_2311_);
return v___x_2321_;
}
else
{
lean_object* v___x_2322_; lean_object* v___x_2324_; 
lean_dec(v_mvarId_2307_);
v___x_2322_ = lean_box(0);
if (v_isShared_2317_ == 0)
{
lean_ctor_set(v___x_2316_, 0, v___x_2322_);
v___x_2324_ = v___x_2316_;
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
lean_object* v_a_2327_; lean_object* v___x_2329_; uint8_t v_isShared_2330_; uint8_t v_isSharedCheck_2334_; 
lean_dec(v_mvarId_2307_);
v_a_2327_ = lean_ctor_get(v___x_2313_, 0);
v_isSharedCheck_2334_ = !lean_is_exclusive(v___x_2313_);
if (v_isSharedCheck_2334_ == 0)
{
v___x_2329_ = v___x_2313_;
v_isShared_2330_ = v_isSharedCheck_2334_;
goto v_resetjp_2328_;
}
else
{
lean_inc(v_a_2327_);
lean_dec(v___x_2313_);
v___x_2329_ = lean_box(0);
v_isShared_2330_ = v_isSharedCheck_2334_;
goto v_resetjp_2328_;
}
v_resetjp_2328_:
{
lean_object* v___x_2332_; 
if (v_isShared_2330_ == 0)
{
v___x_2332_ = v___x_2329_;
goto v_reusejp_2331_;
}
else
{
lean_object* v_reuseFailAlloc_2333_; 
v_reuseFailAlloc_2333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2333_, 0, v_a_2327_);
v___x_2332_ = v_reuseFailAlloc_2333_;
goto v_reusejp_2331_;
}
v_reusejp_2331_:
{
return v___x_2332_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Sym_assumption___redArg___boxed(lean_object* v_mvarId_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_){
_start:
{
lean_object* v_res_2341_; 
v_res_2341_ = l_Lean_Sym_assumption___redArg(v_mvarId_2335_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
lean_dec(v_a_2339_);
lean_dec_ref(v_a_2338_);
lean_dec(v_a_2337_);
lean_dec_ref(v_a_2336_);
return v_res_2341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Sym_assumption(lean_object* v_mvarId_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_, lean_object* v_a_2345_, lean_object* v_a_2346_, lean_object* v_a_2347_, lean_object* v_a_2348_){
_start:
{
lean_object* v___x_2350_; 
v___x_2350_ = l_Lean_Sym_assumption___redArg(v_mvarId_2342_, v_a_2345_, v_a_2346_, v_a_2347_, v_a_2348_);
return v___x_2350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Sym_assumption___boxed(lean_object* v_mvarId_2351_, lean_object* v_a_2352_, lean_object* v_a_2353_, lean_object* v_a_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_, lean_object* v_a_2357_, lean_object* v_a_2358_){
_start:
{
lean_object* v_res_2359_; 
v_res_2359_ = l_Lean_Sym_assumption(v_mvarId_2351_, v_a_2352_, v_a_2353_, v_a_2354_, v_a_2355_, v_a_2356_, v_a_2357_);
lean_dec(v_a_2357_);
lean_dec_ref(v_a_2356_);
lean_dec(v_a_2355_);
lean_dec_ref(v_a_2354_);
lean_dec(v_a_2353_);
lean_dec_ref(v_a_2352_);
return v_res_2359_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0___redArg(lean_object* v_e_2360_, lean_object* v___y_2361_){
_start:
{
uint8_t v___x_2363_; 
v___x_2363_ = l_Lean_Expr_hasMVar(v_e_2360_);
if (v___x_2363_ == 0)
{
lean_object* v___x_2364_; 
v___x_2364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2364_, 0, v_e_2360_);
return v___x_2364_;
}
else
{
lean_object* v___x_2365_; lean_object* v_mctx_2366_; lean_object* v___x_2367_; lean_object* v_fst_2368_; lean_object* v_snd_2369_; lean_object* v___x_2370_; lean_object* v_cache_2371_; lean_object* v_zetaDeltaFVarIds_2372_; lean_object* v_postponed_2373_; lean_object* v_diag_2374_; lean_object* v___x_2376_; uint8_t v_isShared_2377_; uint8_t v_isSharedCheck_2383_; 
v___x_2365_ = lean_st_ref_get(v___y_2361_);
v_mctx_2366_ = lean_ctor_get(v___x_2365_, 0);
lean_inc_ref(v_mctx_2366_);
lean_dec(v___x_2365_);
v___x_2367_ = l_Lean_instantiateMVarsCore(v_mctx_2366_, v_e_2360_);
v_fst_2368_ = lean_ctor_get(v___x_2367_, 0);
lean_inc(v_fst_2368_);
v_snd_2369_ = lean_ctor_get(v___x_2367_, 1);
lean_inc(v_snd_2369_);
lean_dec_ref(v___x_2367_);
v___x_2370_ = lean_st_ref_take(v___y_2361_);
v_cache_2371_ = lean_ctor_get(v___x_2370_, 1);
v_zetaDeltaFVarIds_2372_ = lean_ctor_get(v___x_2370_, 2);
v_postponed_2373_ = lean_ctor_get(v___x_2370_, 3);
v_diag_2374_ = lean_ctor_get(v___x_2370_, 4);
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2370_);
if (v_isSharedCheck_2383_ == 0)
{
lean_object* v_unused_2384_; 
v_unused_2384_ = lean_ctor_get(v___x_2370_, 0);
lean_dec(v_unused_2384_);
v___x_2376_ = v___x_2370_;
v_isShared_2377_ = v_isSharedCheck_2383_;
goto v_resetjp_2375_;
}
else
{
lean_inc(v_diag_2374_);
lean_inc(v_postponed_2373_);
lean_inc(v_zetaDeltaFVarIds_2372_);
lean_inc(v_cache_2371_);
lean_dec(v___x_2370_);
v___x_2376_ = lean_box(0);
v_isShared_2377_ = v_isSharedCheck_2383_;
goto v_resetjp_2375_;
}
v_resetjp_2375_:
{
lean_object* v___x_2379_; 
if (v_isShared_2377_ == 0)
{
lean_ctor_set(v___x_2376_, 0, v_snd_2369_);
v___x_2379_ = v___x_2376_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v_snd_2369_);
lean_ctor_set(v_reuseFailAlloc_2382_, 1, v_cache_2371_);
lean_ctor_set(v_reuseFailAlloc_2382_, 2, v_zetaDeltaFVarIds_2372_);
lean_ctor_set(v_reuseFailAlloc_2382_, 3, v_postponed_2373_);
lean_ctor_set(v_reuseFailAlloc_2382_, 4, v_diag_2374_);
v___x_2379_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
lean_object* v___x_2380_; lean_object* v___x_2381_; 
v___x_2380_ = lean_st_ref_set(v___y_2361_, v___x_2379_);
v___x_2381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2381_, 0, v_fst_2368_);
return v___x_2381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0___redArg___boxed(lean_object* v_e_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_){
_start:
{
lean_object* v_res_2388_; 
v_res_2388_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0___redArg(v_e_2385_, v___y_2386_);
lean_dec(v___y_2386_);
return v_res_2388_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0(lean_object* v_e_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_){
_start:
{
lean_object* v___x_2402_; 
v___x_2402_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0___redArg(v_e_2389_, v___y_2398_);
return v___x_2402_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0___boxed(lean_object* v_e_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_){
_start:
{
lean_object* v_res_2416_; 
v_res_2416_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0(v_e_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_);
lean_dec(v___y_2414_);
lean_dec_ref(v___y_2413_);
lean_dec(v___y_2412_);
lean_dec_ref(v___y_2411_);
lean_dec(v___y_2410_);
lean_dec_ref(v___y_2409_);
lean_dec(v___y_2408_);
lean_dec_ref(v___y_2407_);
lean_dec(v___y_2406_);
lean_dec(v___y_2405_);
lean_dec_ref(v___y_2404_);
return v_res_2416_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___redArg(lean_object* v_mvarId_2417_, lean_object* v_val_2418_, lean_object* v___y_2419_){
_start:
{
lean_object* v___x_2421_; lean_object* v_mctx_2422_; lean_object* v_cache_2423_; lean_object* v_zetaDeltaFVarIds_2424_; lean_object* v_postponed_2425_; lean_object* v_diag_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2454_; 
v___x_2421_ = lean_st_ref_take(v___y_2419_);
v_mctx_2422_ = lean_ctor_get(v___x_2421_, 0);
v_cache_2423_ = lean_ctor_get(v___x_2421_, 1);
v_zetaDeltaFVarIds_2424_ = lean_ctor_get(v___x_2421_, 2);
v_postponed_2425_ = lean_ctor_get(v___x_2421_, 3);
v_diag_2426_ = lean_ctor_get(v___x_2421_, 4);
v_isSharedCheck_2454_ = !lean_is_exclusive(v___x_2421_);
if (v_isSharedCheck_2454_ == 0)
{
v___x_2428_ = v___x_2421_;
v_isShared_2429_ = v_isSharedCheck_2454_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_diag_2426_);
lean_inc(v_postponed_2425_);
lean_inc(v_zetaDeltaFVarIds_2424_);
lean_inc(v_cache_2423_);
lean_inc(v_mctx_2422_);
lean_dec(v___x_2421_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2454_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v_depth_2430_; lean_object* v_levelAssignDepth_2431_; lean_object* v_lmvarCounter_2432_; lean_object* v_mvarCounter_2433_; lean_object* v_lDecls_2434_; lean_object* v_decls_2435_; lean_object* v_userNames_2436_; lean_object* v_lAssignment_2437_; lean_object* v_eAssignment_2438_; lean_object* v_dAssignment_2439_; lean_object* v___x_2441_; uint8_t v_isShared_2442_; uint8_t v_isSharedCheck_2453_; 
v_depth_2430_ = lean_ctor_get(v_mctx_2422_, 0);
v_levelAssignDepth_2431_ = lean_ctor_get(v_mctx_2422_, 1);
v_lmvarCounter_2432_ = lean_ctor_get(v_mctx_2422_, 2);
v_mvarCounter_2433_ = lean_ctor_get(v_mctx_2422_, 3);
v_lDecls_2434_ = lean_ctor_get(v_mctx_2422_, 4);
v_decls_2435_ = lean_ctor_get(v_mctx_2422_, 5);
v_userNames_2436_ = lean_ctor_get(v_mctx_2422_, 6);
v_lAssignment_2437_ = lean_ctor_get(v_mctx_2422_, 7);
v_eAssignment_2438_ = lean_ctor_get(v_mctx_2422_, 8);
v_dAssignment_2439_ = lean_ctor_get(v_mctx_2422_, 9);
v_isSharedCheck_2453_ = !lean_is_exclusive(v_mctx_2422_);
if (v_isSharedCheck_2453_ == 0)
{
v___x_2441_ = v_mctx_2422_;
v_isShared_2442_ = v_isSharedCheck_2453_;
goto v_resetjp_2440_;
}
else
{
lean_inc(v_dAssignment_2439_);
lean_inc(v_eAssignment_2438_);
lean_inc(v_lAssignment_2437_);
lean_inc(v_userNames_2436_);
lean_inc(v_decls_2435_);
lean_inc(v_lDecls_2434_);
lean_inc(v_mvarCounter_2433_);
lean_inc(v_lmvarCounter_2432_);
lean_inc(v_levelAssignDepth_2431_);
lean_inc(v_depth_2430_);
lean_dec(v_mctx_2422_);
v___x_2441_ = lean_box(0);
v_isShared_2442_ = v_isSharedCheck_2453_;
goto v_resetjp_2440_;
}
v_resetjp_2440_:
{
lean_object* v___x_2443_; lean_object* v___x_2445_; 
v___x_2443_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Sym_assumptionCore_spec__0_spec__0___redArg(v_eAssignment_2438_, v_mvarId_2417_, v_val_2418_);
if (v_isShared_2442_ == 0)
{
lean_ctor_set(v___x_2441_, 8, v___x_2443_);
v___x_2445_ = v___x_2441_;
goto v_reusejp_2444_;
}
else
{
lean_object* v_reuseFailAlloc_2452_; 
v_reuseFailAlloc_2452_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2452_, 0, v_depth_2430_);
lean_ctor_set(v_reuseFailAlloc_2452_, 1, v_levelAssignDepth_2431_);
lean_ctor_set(v_reuseFailAlloc_2452_, 2, v_lmvarCounter_2432_);
lean_ctor_set(v_reuseFailAlloc_2452_, 3, v_mvarCounter_2433_);
lean_ctor_set(v_reuseFailAlloc_2452_, 4, v_lDecls_2434_);
lean_ctor_set(v_reuseFailAlloc_2452_, 5, v_decls_2435_);
lean_ctor_set(v_reuseFailAlloc_2452_, 6, v_userNames_2436_);
lean_ctor_set(v_reuseFailAlloc_2452_, 7, v_lAssignment_2437_);
lean_ctor_set(v_reuseFailAlloc_2452_, 8, v___x_2443_);
lean_ctor_set(v_reuseFailAlloc_2452_, 9, v_dAssignment_2439_);
v___x_2445_ = v_reuseFailAlloc_2452_;
goto v_reusejp_2444_;
}
v_reusejp_2444_:
{
lean_object* v___x_2447_; 
if (v_isShared_2429_ == 0)
{
lean_ctor_set(v___x_2428_, 0, v___x_2445_);
v___x_2447_ = v___x_2428_;
goto v_reusejp_2446_;
}
else
{
lean_object* v_reuseFailAlloc_2451_; 
v_reuseFailAlloc_2451_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2451_, 0, v___x_2445_);
lean_ctor_set(v_reuseFailAlloc_2451_, 1, v_cache_2423_);
lean_ctor_set(v_reuseFailAlloc_2451_, 2, v_zetaDeltaFVarIds_2424_);
lean_ctor_set(v_reuseFailAlloc_2451_, 3, v_postponed_2425_);
lean_ctor_set(v_reuseFailAlloc_2451_, 4, v_diag_2426_);
v___x_2447_ = v_reuseFailAlloc_2451_;
goto v_reusejp_2446_;
}
v_reusejp_2446_:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; 
v___x_2448_ = lean_st_ref_set(v___y_2419_, v___x_2447_);
v___x_2449_ = lean_box(0);
v___x_2450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2450_, 0, v___x_2449_);
return v___x_2450_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___redArg___boxed(lean_object* v_mvarId_2455_, lean_object* v_val_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_){
_start:
{
lean_object* v_res_2459_; 
v_res_2459_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___redArg(v_mvarId_2455_, v_val_2456_, v___y_2457_);
lean_dec(v___y_2457_);
return v_res_2459_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__9(void){
_start:
{
lean_object* v___x_2474_; lean_object* v___x_2475_; 
v___x_2474_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__8));
v___x_2475_ = l_Lean_stringToMessageData(v___x_2474_);
return v___x_2475_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__13(void){
_start:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; 
v___x_2481_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__12));
v___x_2482_ = l_Lean_stringToMessageData(v___x_2481_);
return v___x_2482_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__14(void){
_start:
{
lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; 
v___x_2483_ = lean_box(0);
v___x_2484_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__3));
v___x_2485_ = l_Lean_mkConst(v___x_2484_, v___x_2483_);
return v___x_2485_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__17(void){
_start:
{
lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; 
v___x_2490_ = lean_box(0);
v___x_2491_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__16));
v___x_2492_ = l_Lean_mkConst(v___x_2491_, v___x_2490_);
return v___x_2492_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__20(void){
_start:
{
lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; 
v___x_2497_ = lean_box(0);
v___x_2498_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__19));
v___x_2499_ = l_Lean_mkConst(v___x_2498_, v___x_2497_);
return v___x_2499_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__22(void){
_start:
{
lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; 
v___x_2503_ = lean_box(0);
v___x_2504_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__21));
v___x_2505_ = l_Lean_mkConst(v___x_2504_, v___x_2503_);
return v___x_2505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0(lean_object* v_goal_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_){
_start:
{
lean_object* v___x_2519_; 
lean_inc(v_goal_2506_);
v___x_2519_ = l_Lean_MVarId_getType(v_goal_2506_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
if (lean_obj_tag(v___x_2519_) == 0)
{
lean_object* v_a_2520_; lean_object* v___x_2521_; 
v_a_2520_ = lean_ctor_get(v___x_2519_, 0);
lean_inc(v_a_2520_);
lean_dec_ref_known(v___x_2519_, 1);
v___x_2521_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0___redArg(v_a_2520_, v___y_2515_);
if (lean_obj_tag(v___x_2521_) == 0)
{
lean_object* v_a_2522_; lean_object* v___x_2524_; uint8_t v_isShared_2525_; uint8_t v_isSharedCheck_2826_; 
v_a_2522_ = lean_ctor_get(v___x_2521_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v___x_2521_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2524_ = v___x_2521_;
v_isShared_2525_ = v_isSharedCheck_2826_;
goto v_resetjp_2523_;
}
else
{
lean_inc(v_a_2522_);
lean_dec(v___x_2521_);
v___x_2524_ = lean_box(0);
v_isShared_2525_ = v_isSharedCheck_2826_;
goto v_resetjp_2523_;
}
v_resetjp_2523_:
{
lean_object* v___x_2526_; uint8_t v___x_2527_; 
v___x_2526_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__1));
v___x_2527_ = l_Lean_Expr_isAppOf(v_a_2522_, v___x_2526_);
if (v___x_2527_ == 0)
{
lean_object* v___x_2528_; uint8_t v___x_2529_; 
v___x_2528_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__3));
v___x_2529_ = l_Lean_Expr_isAppOf(v_a_2522_, v___x_2528_);
if (v___x_2529_ == 0)
{
lean_object* v___x_2530_; lean_object* v___x_2531_; uint8_t v___x_2532_; 
v___x_2530_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__5));
v___x_2531_ = lean_unsigned_to_nat(3u);
v___x_2532_ = l_Lean_Expr_isAppOfArity(v_a_2522_, v___x_2530_, v___x_2531_);
if (v___x_2532_ == 0)
{
lean_object* v___x_2533_; lean_object* v___x_2535_; 
lean_dec(v_a_2522_);
v___x_2533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2533_, 0, v_goal_2506_);
if (v_isShared_2525_ == 0)
{
lean_ctor_set(v___x_2524_, 0, v___x_2533_);
v___x_2535_ = v___x_2524_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v___x_2533_);
v___x_2535_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
return v___x_2535_;
}
}
else
{
lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; 
lean_del_object(v___x_2524_);
v___x_2537_ = l_Lean_Expr_appFn_x21(v_a_2522_);
v___x_2538_ = l_Lean_Expr_appArg_x21(v___x_2537_);
v___x_2539_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead(v___x_2538_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
if (lean_obj_tag(v___x_2539_) == 0)
{
lean_object* v_a_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; 
v_a_2540_ = lean_ctor_get(v___x_2539_, 0);
lean_inc(v_a_2540_);
lean_dec_ref_known(v___x_2539_, 1);
v___x_2541_ = l_Lean_Expr_appArg_x21(v_a_2522_);
lean_dec(v_a_2522_);
v___x_2542_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead(v___x_2541_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
if (lean_obj_tag(v___x_2542_) == 0)
{
lean_object* v_a_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; 
v_a_2543_ = lean_ctor_get(v___x_2542_, 0);
lean_inc(v_a_2543_);
lean_dec_ref_known(v___x_2542_, 1);
v___x_2544_ = l_Lean_Expr_appFn_x21(v___x_2537_);
lean_dec_ref(v___x_2537_);
v___x_2545_ = l_Lean_Expr_appArg_x21(v___x_2544_);
lean_dec_ref(v___x_2544_);
lean_inc_ref(v___x_2545_);
v___x_2546_ = l_Lean_Meta_getLevel(v___x_2545_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
if (lean_obj_tag(v___x_2546_) == 0)
{
lean_object* v_a_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; 
v_a_2547_ = lean_ctor_get(v___x_2546_, 0);
lean_inc(v_a_2547_);
lean_dec_ref_known(v___x_2546_, 1);
v___x_2548_ = lean_box(0);
v___x_2549_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2549_, 0, v_a_2547_);
lean_ctor_set(v___x_2549_, 1, v___x_2548_);
v___x_2550_ = l_Lean_mkConst(v___x_2530_, v___x_2549_);
lean_inc(v_a_2543_);
lean_inc(v_a_2540_);
lean_inc_ref(v___x_2545_);
v___x_2551_ = l_Lean_mkApp3(v___x_2550_, v___x_2545_, v_a_2540_, v_a_2543_);
v___x_2552_ = l_Lean_MVarId_replaceTargetDefEq(v_goal_2506_, v___x_2551_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
if (lean_obj_tag(v___x_2552_) == 0)
{
lean_object* v_a_2553_; lean_object* v___x_2555_; uint8_t v_isShared_2556_; uint8_t v_isSharedCheck_2648_; 
v_a_2553_ = lean_ctor_get(v___x_2552_, 0);
v_isSharedCheck_2648_ = !lean_is_exclusive(v___x_2552_);
if (v_isSharedCheck_2648_ == 0)
{
v___x_2555_ = v___x_2552_;
v_isShared_2556_ = v_isSharedCheck_2648_;
goto v_resetjp_2554_;
}
else
{
lean_inc(v_a_2553_);
lean_dec(v___x_2552_);
v___x_2555_ = lean_box(0);
v_isShared_2556_ = v_isSharedCheck_2648_;
goto v_resetjp_2554_;
}
v_resetjp_2554_:
{
uint8_t v_a_2558_; lean_object* v___x_2595_; uint8_t v_foApprox_2596_; uint8_t v_ctxApprox_2597_; uint8_t v_quasiPatternApprox_2598_; uint8_t v_constApprox_2599_; uint8_t v_isDefEqStuckEx_2600_; uint8_t v_unificationHints_2601_; uint8_t v_proofIrrelevance_2602_; uint8_t v_offsetCnstrs_2603_; uint8_t v_transparency_2604_; uint8_t v_etaStruct_2605_; uint8_t v_univApprox_2606_; uint8_t v_iota_2607_; uint8_t v_beta_2608_; uint8_t v_proj_2609_; uint8_t v_zeta_2610_; uint8_t v_zetaDelta_2611_; uint8_t v_zetaUnused_2612_; uint8_t v_zetaHave_2613_; lean_object* v___x_2615_; uint8_t v_isShared_2616_; uint8_t v_isSharedCheck_2647_; 
v___x_2595_ = l_Lean_Meta_Context_config(v___y_2514_);
v_foApprox_2596_ = lean_ctor_get_uint8(v___x_2595_, 0);
v_ctxApprox_2597_ = lean_ctor_get_uint8(v___x_2595_, 1);
v_quasiPatternApprox_2598_ = lean_ctor_get_uint8(v___x_2595_, 2);
v_constApprox_2599_ = lean_ctor_get_uint8(v___x_2595_, 3);
v_isDefEqStuckEx_2600_ = lean_ctor_get_uint8(v___x_2595_, 4);
v_unificationHints_2601_ = lean_ctor_get_uint8(v___x_2595_, 5);
v_proofIrrelevance_2602_ = lean_ctor_get_uint8(v___x_2595_, 6);
v_offsetCnstrs_2603_ = lean_ctor_get_uint8(v___x_2595_, 8);
v_transparency_2604_ = lean_ctor_get_uint8(v___x_2595_, 9);
v_etaStruct_2605_ = lean_ctor_get_uint8(v___x_2595_, 10);
v_univApprox_2606_ = lean_ctor_get_uint8(v___x_2595_, 11);
v_iota_2607_ = lean_ctor_get_uint8(v___x_2595_, 12);
v_beta_2608_ = lean_ctor_get_uint8(v___x_2595_, 13);
v_proj_2609_ = lean_ctor_get_uint8(v___x_2595_, 14);
v_zeta_2610_ = lean_ctor_get_uint8(v___x_2595_, 15);
v_zetaDelta_2611_ = lean_ctor_get_uint8(v___x_2595_, 16);
v_zetaUnused_2612_ = lean_ctor_get_uint8(v___x_2595_, 17);
v_zetaHave_2613_ = lean_ctor_get_uint8(v___x_2595_, 18);
v_isSharedCheck_2647_ = !lean_is_exclusive(v___x_2595_);
if (v_isSharedCheck_2647_ == 0)
{
v___x_2615_ = v___x_2595_;
v_isShared_2616_ = v_isSharedCheck_2647_;
goto v_resetjp_2614_;
}
else
{
lean_dec(v___x_2595_);
v___x_2615_ = lean_box(0);
v_isShared_2616_ = v_isSharedCheck_2647_;
goto v_resetjp_2614_;
}
v___jp_2557_:
{
if (v_a_2558_ == 0)
{
lean_object* v___x_2559_; lean_object* v___x_2561_; 
lean_dec_ref(v___x_2545_);
lean_dec(v_a_2540_);
v___x_2559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2559_, 0, v_a_2553_);
if (v_isShared_2556_ == 0)
{
lean_ctor_set(v___x_2555_, 0, v___x_2559_);
v___x_2561_ = v___x_2555_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2562_; 
v_reuseFailAlloc_2562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2562_, 0, v___x_2559_);
v___x_2561_ = v_reuseFailAlloc_2562_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
return v___x_2561_;
}
}
else
{
lean_object* v___x_2563_; 
lean_del_object(v___x_2555_);
lean_inc_ref(v___x_2545_);
v___x_2563_ = l_Lean_Meta_getLevel(v___x_2545_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
if (lean_obj_tag(v___x_2563_) == 0)
{
lean_object* v_a_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; 
v_a_2564_ = lean_ctor_get(v___x_2563_, 0);
lean_inc(v_a_2564_);
lean_dec_ref_known(v___x_2563_, 1);
v___x_2565_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__7));
v___x_2566_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2566_, 0, v_a_2564_);
lean_ctor_set(v___x_2566_, 1, v___x_2548_);
v___x_2567_ = l_Lean_mkConst(v___x_2565_, v___x_2566_);
v___x_2568_ = l_Lean_mkAppB(v___x_2567_, v___x_2545_, v_a_2540_);
v___x_2569_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___redArg(v_a_2553_, v___x_2568_, v___y_2515_);
if (lean_obj_tag(v___x_2569_) == 0)
{
lean_object* v___x_2571_; uint8_t v_isShared_2572_; uint8_t v_isSharedCheck_2577_; 
v_isSharedCheck_2577_ = !lean_is_exclusive(v___x_2569_);
if (v_isSharedCheck_2577_ == 0)
{
lean_object* v_unused_2578_; 
v_unused_2578_ = lean_ctor_get(v___x_2569_, 0);
lean_dec(v_unused_2578_);
v___x_2571_ = v___x_2569_;
v_isShared_2572_ = v_isSharedCheck_2577_;
goto v_resetjp_2570_;
}
else
{
lean_dec(v___x_2569_);
v___x_2571_ = lean_box(0);
v_isShared_2572_ = v_isSharedCheck_2577_;
goto v_resetjp_2570_;
}
v_resetjp_2570_:
{
lean_object* v___x_2573_; lean_object* v___x_2575_; 
v___x_2573_ = lean_box(0);
if (v_isShared_2572_ == 0)
{
lean_ctor_set(v___x_2571_, 0, v___x_2573_);
v___x_2575_ = v___x_2571_;
goto v_reusejp_2574_;
}
else
{
lean_object* v_reuseFailAlloc_2576_; 
v_reuseFailAlloc_2576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2576_, 0, v___x_2573_);
v___x_2575_ = v_reuseFailAlloc_2576_;
goto v_reusejp_2574_;
}
v_reusejp_2574_:
{
return v___x_2575_;
}
}
}
else
{
lean_object* v_a_2579_; lean_object* v___x_2581_; uint8_t v_isShared_2582_; uint8_t v_isSharedCheck_2586_; 
v_a_2579_ = lean_ctor_get(v___x_2569_, 0);
v_isSharedCheck_2586_ = !lean_is_exclusive(v___x_2569_);
if (v_isSharedCheck_2586_ == 0)
{
v___x_2581_ = v___x_2569_;
v_isShared_2582_ = v_isSharedCheck_2586_;
goto v_resetjp_2580_;
}
else
{
lean_inc(v_a_2579_);
lean_dec(v___x_2569_);
v___x_2581_ = lean_box(0);
v_isShared_2582_ = v_isSharedCheck_2586_;
goto v_resetjp_2580_;
}
v_resetjp_2580_:
{
lean_object* v___x_2584_; 
if (v_isShared_2582_ == 0)
{
v___x_2584_ = v___x_2581_;
goto v_reusejp_2583_;
}
else
{
lean_object* v_reuseFailAlloc_2585_; 
v_reuseFailAlloc_2585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2585_, 0, v_a_2579_);
v___x_2584_ = v_reuseFailAlloc_2585_;
goto v_reusejp_2583_;
}
v_reusejp_2583_:
{
return v___x_2584_;
}
}
}
}
else
{
lean_object* v_a_2587_; lean_object* v___x_2589_; uint8_t v_isShared_2590_; uint8_t v_isSharedCheck_2594_; 
lean_dec(v_a_2553_);
lean_dec_ref(v___x_2545_);
lean_dec(v_a_2540_);
v_a_2587_ = lean_ctor_get(v___x_2563_, 0);
v_isSharedCheck_2594_ = !lean_is_exclusive(v___x_2563_);
if (v_isSharedCheck_2594_ == 0)
{
v___x_2589_ = v___x_2563_;
v_isShared_2590_ = v_isSharedCheck_2594_;
goto v_resetjp_2588_;
}
else
{
lean_inc(v_a_2587_);
lean_dec(v___x_2563_);
v___x_2589_ = lean_box(0);
v_isShared_2590_ = v_isSharedCheck_2594_;
goto v_resetjp_2588_;
}
v_resetjp_2588_:
{
lean_object* v___x_2592_; 
if (v_isShared_2590_ == 0)
{
v___x_2592_ = v___x_2589_;
goto v_reusejp_2591_;
}
else
{
lean_object* v_reuseFailAlloc_2593_; 
v_reuseFailAlloc_2593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2593_, 0, v_a_2587_);
v___x_2592_ = v_reuseFailAlloc_2593_;
goto v_reusejp_2591_;
}
v_reusejp_2591_:
{
return v___x_2592_;
}
}
}
}
}
v_resetjp_2614_:
{
uint8_t v_trackZetaDelta_2617_; lean_object* v_zetaDeltaSet_2618_; lean_object* v_lctx_2619_; lean_object* v_localInstances_2620_; lean_object* v_defEqCtx_x3f_2621_; lean_object* v_synthPendingDepth_2622_; lean_object* v_canUnfold_x3f_2623_; uint8_t v_univApprox_2624_; uint8_t v_inTypeClassResolution_2625_; uint8_t v_cacheInferType_2626_; lean_object* v___x_2628_; 
v_trackZetaDelta_2617_ = lean_ctor_get_uint8(v___y_2514_, sizeof(void*)*7);
v_zetaDeltaSet_2618_ = lean_ctor_get(v___y_2514_, 1);
v_lctx_2619_ = lean_ctor_get(v___y_2514_, 2);
v_localInstances_2620_ = lean_ctor_get(v___y_2514_, 3);
v_defEqCtx_x3f_2621_ = lean_ctor_get(v___y_2514_, 4);
v_synthPendingDepth_2622_ = lean_ctor_get(v___y_2514_, 5);
v_canUnfold_x3f_2623_ = lean_ctor_get(v___y_2514_, 6);
v_univApprox_2624_ = lean_ctor_get_uint8(v___y_2514_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2625_ = lean_ctor_get_uint8(v___y_2514_, sizeof(void*)*7 + 2);
v_cacheInferType_2626_ = lean_ctor_get_uint8(v___y_2514_, sizeof(void*)*7 + 3);
if (v_isShared_2616_ == 0)
{
v___x_2628_ = v___x_2615_;
goto v_reusejp_2627_;
}
else
{
lean_object* v_reuseFailAlloc_2646_; 
v_reuseFailAlloc_2646_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_2646_, 0, v_foApprox_2596_);
lean_ctor_set_uint8(v_reuseFailAlloc_2646_, 1, v_ctxApprox_2597_);
lean_ctor_set_uint8(v_reuseFailAlloc_2646_, 2, v_quasiPatternApprox_2598_);
lean_ctor_set_uint8(v_reuseFailAlloc_2646_, 3, v_constApprox_2599_);
lean_ctor_set_uint8(v_reuseFailAlloc_2646_, 4, v_isDefEqStuckEx_2600_);
lean_ctor_set_uint8(v_reuseFailAlloc_2646_, 5, v_unificationHints_2601_);
lean_ctor_set_uint8(v_reuseFailAlloc_2646_, 6, v_proofIrrelevance_2602_);
lean_ctor_set_uint8(v_reuseFailAlloc_2646_, 8, v_offsetCnstrs_2603_);
lean_ctor_set_uint8(v_reuseFailAlloc_2646_, 9, v_transparency_2604_);
lean_ctor_set_uint8(v_reuseFailAlloc_2646_, 10, v_etaStruct_2605_);
lean_ctor_set_uint8(v_reuseFailAlloc_2646_, 11, v_univApprox_2606_);
lean_ctor_set_uint8(v_reuseFailAlloc_2646_, 12, v_iota_2607_);
lean_ctor_set_uint8(v_reuseFailAlloc_2646_, 13, v_beta_2608_);
lean_ctor_set_uint8(v_reuseFailAlloc_2646_, 14, v_proj_2609_);
lean_ctor_set_uint8(v_reuseFailAlloc_2646_, 15, v_zeta_2610_);
lean_ctor_set_uint8(v_reuseFailAlloc_2646_, 16, v_zetaDelta_2611_);
lean_ctor_set_uint8(v_reuseFailAlloc_2646_, 17, v_zetaUnused_2612_);
lean_ctor_set_uint8(v_reuseFailAlloc_2646_, 18, v_zetaHave_2613_);
v___x_2628_ = v_reuseFailAlloc_2646_;
goto v_reusejp_2627_;
}
v_reusejp_2627_:
{
uint64_t v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; 
lean_ctor_set_uint8(v___x_2628_, 7, v___x_2532_);
v___x_2629_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2628_);
v___x_2630_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_introsExcessArgs___lam__1___closed__5));
v___x_2631_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2631_, 0, v___x_2628_);
lean_ctor_set_uint64(v___x_2631_, sizeof(void*)*1, v___x_2629_);
lean_inc(v_canUnfold_x3f_2623_);
lean_inc(v_synthPendingDepth_2622_);
lean_inc(v_defEqCtx_x3f_2621_);
lean_inc_ref(v_localInstances_2620_);
lean_inc_ref(v_lctx_2619_);
lean_inc(v_zetaDeltaSet_2618_);
v___x_2632_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2632_, 0, v___x_2631_);
lean_ctor_set(v___x_2632_, 1, v_zetaDeltaSet_2618_);
lean_ctor_set(v___x_2632_, 2, v_lctx_2619_);
lean_ctor_set(v___x_2632_, 3, v_localInstances_2620_);
lean_ctor_set(v___x_2632_, 4, v_defEqCtx_x3f_2621_);
lean_ctor_set(v___x_2632_, 5, v_synthPendingDepth_2622_);
lean_ctor_set(v___x_2632_, 6, v_canUnfold_x3f_2623_);
lean_ctor_set_uint8(v___x_2632_, sizeof(void*)*7, v_trackZetaDelta_2617_);
lean_ctor_set_uint8(v___x_2632_, sizeof(void*)*7 + 1, v_univApprox_2624_);
lean_ctor_set_uint8(v___x_2632_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2625_);
lean_ctor_set_uint8(v___x_2632_, sizeof(void*)*7 + 3, v_cacheInferType_2626_);
lean_inc(v_a_2540_);
v___x_2633_ = l_Lean_Meta_Sym_isDefEqS(v_a_2540_, v_a_2543_, v___x_2532_, v___x_2532_, v___x_2630_, v___x_2630_, v___y_2512_, v___y_2513_, v___x_2632_, v___y_2515_, v___y_2516_, v___y_2517_);
lean_dec_ref_known(v___x_2632_, 7);
if (lean_obj_tag(v___x_2633_) == 0)
{
lean_object* v_a_2634_; uint8_t v___x_2635_; 
v_a_2634_ = lean_ctor_get(v___x_2633_, 0);
lean_inc(v_a_2634_);
lean_dec_ref_known(v___x_2633_, 1);
v___x_2635_ = lean_unbox(v_a_2634_);
lean_dec(v_a_2634_);
v_a_2558_ = v___x_2635_;
goto v___jp_2557_;
}
else
{
if (lean_obj_tag(v___x_2633_) == 0)
{
lean_object* v_a_2636_; uint8_t v___x_2637_; 
v_a_2636_ = lean_ctor_get(v___x_2633_, 0);
lean_inc(v_a_2636_);
lean_dec_ref_known(v___x_2633_, 1);
v___x_2637_ = lean_unbox(v_a_2636_);
lean_dec(v_a_2636_);
v_a_2558_ = v___x_2637_;
goto v___jp_2557_;
}
else
{
lean_object* v_a_2638_; lean_object* v___x_2640_; uint8_t v_isShared_2641_; uint8_t v_isSharedCheck_2645_; 
lean_del_object(v___x_2555_);
lean_dec(v_a_2553_);
lean_dec_ref(v___x_2545_);
lean_dec(v_a_2540_);
v_a_2638_ = lean_ctor_get(v___x_2633_, 0);
v_isSharedCheck_2645_ = !lean_is_exclusive(v___x_2633_);
if (v_isSharedCheck_2645_ == 0)
{
v___x_2640_ = v___x_2633_;
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
else
{
lean_inc(v_a_2638_);
lean_dec(v___x_2633_);
v___x_2640_ = lean_box(0);
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
v_resetjp_2639_:
{
lean_object* v___x_2643_; 
if (v_isShared_2641_ == 0)
{
v___x_2643_ = v___x_2640_;
goto v_reusejp_2642_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v_a_2638_);
v___x_2643_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2642_;
}
v_reusejp_2642_:
{
return v___x_2643_;
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
lean_object* v_a_2649_; lean_object* v___x_2651_; uint8_t v_isShared_2652_; uint8_t v_isSharedCheck_2656_; 
lean_dec_ref(v___x_2545_);
lean_dec(v_a_2543_);
lean_dec(v_a_2540_);
v_a_2649_ = lean_ctor_get(v___x_2552_, 0);
v_isSharedCheck_2656_ = !lean_is_exclusive(v___x_2552_);
if (v_isSharedCheck_2656_ == 0)
{
v___x_2651_ = v___x_2552_;
v_isShared_2652_ = v_isSharedCheck_2656_;
goto v_resetjp_2650_;
}
else
{
lean_inc(v_a_2649_);
lean_dec(v___x_2552_);
v___x_2651_ = lean_box(0);
v_isShared_2652_ = v_isSharedCheck_2656_;
goto v_resetjp_2650_;
}
v_resetjp_2650_:
{
lean_object* v___x_2654_; 
if (v_isShared_2652_ == 0)
{
v___x_2654_ = v___x_2651_;
goto v_reusejp_2653_;
}
else
{
lean_object* v_reuseFailAlloc_2655_; 
v_reuseFailAlloc_2655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2655_, 0, v_a_2649_);
v___x_2654_ = v_reuseFailAlloc_2655_;
goto v_reusejp_2653_;
}
v_reusejp_2653_:
{
return v___x_2654_;
}
}
}
}
else
{
lean_object* v_a_2657_; lean_object* v___x_2659_; uint8_t v_isShared_2660_; uint8_t v_isSharedCheck_2664_; 
lean_dec_ref(v___x_2545_);
lean_dec(v_a_2543_);
lean_dec(v_a_2540_);
lean_dec(v_goal_2506_);
v_a_2657_ = lean_ctor_get(v___x_2546_, 0);
v_isSharedCheck_2664_ = !lean_is_exclusive(v___x_2546_);
if (v_isSharedCheck_2664_ == 0)
{
v___x_2659_ = v___x_2546_;
v_isShared_2660_ = v_isSharedCheck_2664_;
goto v_resetjp_2658_;
}
else
{
lean_inc(v_a_2657_);
lean_dec(v___x_2546_);
v___x_2659_ = lean_box(0);
v_isShared_2660_ = v_isSharedCheck_2664_;
goto v_resetjp_2658_;
}
v_resetjp_2658_:
{
lean_object* v___x_2662_; 
if (v_isShared_2660_ == 0)
{
v___x_2662_ = v___x_2659_;
goto v_reusejp_2661_;
}
else
{
lean_object* v_reuseFailAlloc_2663_; 
v_reuseFailAlloc_2663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2663_, 0, v_a_2657_);
v___x_2662_ = v_reuseFailAlloc_2663_;
goto v_reusejp_2661_;
}
v_reusejp_2661_:
{
return v___x_2662_;
}
}
}
}
else
{
lean_object* v_a_2665_; lean_object* v___x_2667_; uint8_t v_isShared_2668_; uint8_t v_isSharedCheck_2672_; 
lean_dec(v_a_2540_);
lean_dec_ref(v___x_2537_);
lean_dec(v_goal_2506_);
v_a_2665_ = lean_ctor_get(v___x_2542_, 0);
v_isSharedCheck_2672_ = !lean_is_exclusive(v___x_2542_);
if (v_isSharedCheck_2672_ == 0)
{
v___x_2667_ = v___x_2542_;
v_isShared_2668_ = v_isSharedCheck_2672_;
goto v_resetjp_2666_;
}
else
{
lean_inc(v_a_2665_);
lean_dec(v___x_2542_);
v___x_2667_ = lean_box(0);
v_isShared_2668_ = v_isSharedCheck_2672_;
goto v_resetjp_2666_;
}
v_resetjp_2666_:
{
lean_object* v___x_2670_; 
if (v_isShared_2668_ == 0)
{
v___x_2670_ = v___x_2667_;
goto v_reusejp_2669_;
}
else
{
lean_object* v_reuseFailAlloc_2671_; 
v_reuseFailAlloc_2671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2671_, 0, v_a_2665_);
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
lean_dec_ref(v___x_2537_);
lean_dec(v_a_2522_);
lean_dec(v_goal_2506_);
v_a_2673_ = lean_ctor_get(v___x_2539_, 0);
v_isSharedCheck_2680_ = !lean_is_exclusive(v___x_2539_);
if (v_isSharedCheck_2680_ == 0)
{
v___x_2675_ = v___x_2539_;
v_isShared_2676_ = v_isSharedCheck_2680_;
goto v_resetjp_2674_;
}
else
{
lean_inc(v_a_2673_);
lean_dec(v___x_2539_);
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
lean_object* v_andIntroRule_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; 
lean_del_object(v___x_2524_);
v_andIntroRule_2681_ = lean_ctor_get(v___y_2507_, 2);
v___x_2682_ = lean_box(0);
lean_inc_ref(v_andIntroRule_2681_);
v___x_2683_ = l_Lean_Meta_Sym_BackwardRule_applyChecked(v_andIntroRule_2681_, v_goal_2506_, v___x_2682_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
if (lean_obj_tag(v___x_2683_) == 0)
{
lean_object* v_a_2684_; lean_object* v___y_2686_; lean_object* v___y_2687_; lean_object* v___y_2688_; lean_object* v___y_2689_; 
v_a_2684_ = lean_ctor_get(v___x_2683_, 0);
lean_inc(v_a_2684_);
lean_dec_ref_known(v___x_2683_, 1);
if (lean_obj_tag(v_a_2684_) == 1)
{
lean_object* v_mvarIds_2699_; lean_object* v___x_2701_; uint8_t v_isShared_2702_; uint8_t v_isSharedCheck_2798_; 
v_mvarIds_2699_ = lean_ctor_get(v_a_2684_, 0);
v_isSharedCheck_2798_ = !lean_is_exclusive(v_a_2684_);
if (v_isSharedCheck_2798_ == 0)
{
v___x_2701_ = v_a_2684_;
v_isShared_2702_ = v_isSharedCheck_2798_;
goto v_resetjp_2700_;
}
else
{
lean_inc(v_mvarIds_2699_);
lean_dec(v_a_2684_);
v___x_2701_ = lean_box(0);
v_isShared_2702_ = v_isSharedCheck_2798_;
goto v_resetjp_2700_;
}
v_resetjp_2700_:
{
if (lean_obj_tag(v_mvarIds_2699_) == 1)
{
lean_object* v_tail_2703_; 
v_tail_2703_ = lean_ctor_get(v_mvarIds_2699_, 1);
lean_inc(v_tail_2703_);
if (lean_obj_tag(v_tail_2703_) == 1)
{
lean_object* v_tail_2704_; 
v_tail_2704_ = lean_ctor_get(v_tail_2703_, 1);
if (lean_obj_tag(v_tail_2704_) == 0)
{
lean_object* v_head_2705_; lean_object* v_head_2706_; lean_object* v___x_2707_; 
lean_dec(v_a_2522_);
v_head_2705_ = lean_ctor_get(v_mvarIds_2699_, 0);
lean_inc(v_head_2705_);
lean_dec_ref_known(v_mvarIds_2699_, 2);
v_head_2706_ = lean_ctor_get(v_tail_2703_, 0);
lean_inc(v_head_2706_);
lean_dec_ref_known(v_tail_2703_, 2);
v___x_2707_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl(v_head_2705_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
if (lean_obj_tag(v___x_2707_) == 0)
{
lean_object* v_a_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2797_; 
v_a_2708_ = lean_ctor_get(v___x_2707_, 0);
v_isSharedCheck_2797_ = !lean_is_exclusive(v___x_2707_);
if (v_isSharedCheck_2797_ == 0)
{
v___x_2710_ = v___x_2707_;
v_isShared_2711_ = v_isSharedCheck_2797_;
goto v_resetjp_2709_;
}
else
{
lean_inc(v_a_2708_);
lean_dec(v___x_2707_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2797_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v___x_2712_; 
v___x_2712_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl(v_head_2706_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
if (lean_obj_tag(v___x_2712_) == 0)
{
lean_object* v_a_2713_; lean_object* v_g_2715_; 
v_a_2713_ = lean_ctor_get(v___x_2712_, 0);
lean_inc(v_a_2713_);
if (lean_obj_tag(v_a_2708_) == 0)
{
if (lean_obj_tag(v_a_2713_) == 0)
{
lean_del_object(v___x_2710_);
lean_del_object(v___x_2701_);
return v___x_2712_;
}
else
{
lean_object* v_val_2722_; 
lean_dec_ref_known(v___x_2712_, 1);
v_val_2722_ = lean_ctor_get(v_a_2713_, 0);
lean_inc(v_val_2722_);
lean_dec_ref_known(v_a_2713_, 1);
v_g_2715_ = v_val_2722_;
goto v___jp_2714_;
}
}
else
{
lean_dec_ref_known(v___x_2712_, 1);
if (lean_obj_tag(v_a_2713_) == 0)
{
lean_object* v_val_2723_; 
v_val_2723_ = lean_ctor_get(v_a_2708_, 0);
lean_inc(v_val_2723_);
lean_dec_ref_known(v_a_2708_, 1);
v_g_2715_ = v_val_2723_;
goto v___jp_2714_;
}
else
{
lean_object* v_val_2724_; lean_object* v_val_2725_; lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2796_; 
lean_del_object(v___x_2710_);
lean_del_object(v___x_2701_);
v_val_2724_ = lean_ctor_get(v_a_2708_, 0);
lean_inc(v_val_2724_);
lean_dec_ref_known(v_a_2708_, 1);
v_val_2725_ = lean_ctor_get(v_a_2713_, 0);
v_isSharedCheck_2796_ = !lean_is_exclusive(v_a_2713_);
if (v_isSharedCheck_2796_ == 0)
{
v___x_2727_ = v_a_2713_;
v_isShared_2728_ = v_isSharedCheck_2796_;
goto v_resetjp_2726_;
}
else
{
lean_inc(v_val_2725_);
lean_dec(v_a_2713_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2796_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
lean_object* v___x_2729_; 
lean_inc(v_val_2724_);
v___x_2729_ = l_Lean_MVarId_getType(v_val_2724_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
if (lean_obj_tag(v___x_2729_) == 0)
{
lean_object* v_a_2730_; lean_object* v___x_2731_; 
v_a_2730_ = lean_ctor_get(v___x_2729_, 0);
lean_inc(v_a_2730_);
lean_dec_ref_known(v___x_2729_, 1);
lean_inc(v_val_2725_);
v___x_2731_ = l_Lean_MVarId_getType(v_val_2725_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
if (lean_obj_tag(v___x_2731_) == 0)
{
lean_object* v_a_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; 
v_a_2732_ = lean_ctor_get(v___x_2731_, 0);
lean_inc_n(v_a_2732_, 2);
lean_dec_ref_known(v___x_2731_, 1);
v___x_2733_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__14, &l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__14_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__14);
lean_inc(v_a_2730_);
v___x_2734_ = l_Lean_mkAppB(v___x_2733_, v_a_2730_, v_a_2732_);
v___x_2735_ = lean_box(0);
v___x_2736_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_2734_, v___x_2735_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
if (lean_obj_tag(v___x_2736_) == 0)
{
lean_object* v_a_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; 
v_a_2737_ = lean_ctor_get(v___x_2736_, 0);
lean_inc_n(v_a_2737_, 2);
lean_dec_ref_known(v___x_2736_, 1);
v___x_2738_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__17, &l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__17);
lean_inc(v_a_2732_);
lean_inc(v_a_2730_);
v___x_2739_ = l_Lean_mkApp3(v___x_2738_, v_a_2730_, v_a_2732_, v_a_2737_);
v___x_2740_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___redArg(v_val_2724_, v___x_2739_, v___y_2515_);
if (lean_obj_tag(v___x_2740_) == 0)
{
lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; 
lean_dec_ref_known(v___x_2740_, 1);
v___x_2741_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__20, &l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__20_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__20);
lean_inc(v_a_2737_);
v___x_2742_ = l_Lean_mkApp3(v___x_2741_, v_a_2730_, v_a_2732_, v_a_2737_);
v___x_2743_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___redArg(v_val_2725_, v___x_2742_, v___y_2515_);
if (lean_obj_tag(v___x_2743_) == 0)
{
lean_object* v___x_2745_; uint8_t v_isShared_2746_; uint8_t v_isSharedCheck_2754_; 
v_isSharedCheck_2754_ = !lean_is_exclusive(v___x_2743_);
if (v_isSharedCheck_2754_ == 0)
{
lean_object* v_unused_2755_; 
v_unused_2755_ = lean_ctor_get(v___x_2743_, 0);
lean_dec(v_unused_2755_);
v___x_2745_ = v___x_2743_;
v_isShared_2746_ = v_isSharedCheck_2754_;
goto v_resetjp_2744_;
}
else
{
lean_dec(v___x_2743_);
v___x_2745_ = lean_box(0);
v_isShared_2746_ = v_isSharedCheck_2754_;
goto v_resetjp_2744_;
}
v_resetjp_2744_:
{
lean_object* v___x_2747_; lean_object* v___x_2749_; 
v___x_2747_ = l_Lean_Expr_mvarId_x21(v_a_2737_);
lean_dec(v_a_2737_);
if (v_isShared_2728_ == 0)
{
lean_ctor_set(v___x_2727_, 0, v___x_2747_);
v___x_2749_ = v___x_2727_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2753_; 
v_reuseFailAlloc_2753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2753_, 0, v___x_2747_);
v___x_2749_ = v_reuseFailAlloc_2753_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
lean_object* v___x_2751_; 
if (v_isShared_2746_ == 0)
{
lean_ctor_set(v___x_2745_, 0, v___x_2749_);
v___x_2751_ = v___x_2745_;
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
}
}
else
{
lean_object* v_a_2756_; lean_object* v___x_2758_; uint8_t v_isShared_2759_; uint8_t v_isSharedCheck_2763_; 
lean_dec(v_a_2737_);
lean_del_object(v___x_2727_);
v_a_2756_ = lean_ctor_get(v___x_2743_, 0);
v_isSharedCheck_2763_ = !lean_is_exclusive(v___x_2743_);
if (v_isSharedCheck_2763_ == 0)
{
v___x_2758_ = v___x_2743_;
v_isShared_2759_ = v_isSharedCheck_2763_;
goto v_resetjp_2757_;
}
else
{
lean_inc(v_a_2756_);
lean_dec(v___x_2743_);
v___x_2758_ = lean_box(0);
v_isShared_2759_ = v_isSharedCheck_2763_;
goto v_resetjp_2757_;
}
v_resetjp_2757_:
{
lean_object* v___x_2761_; 
if (v_isShared_2759_ == 0)
{
v___x_2761_ = v___x_2758_;
goto v_reusejp_2760_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v_a_2756_);
v___x_2761_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2760_;
}
v_reusejp_2760_:
{
return v___x_2761_;
}
}
}
}
else
{
lean_object* v_a_2764_; lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2771_; 
lean_dec(v_a_2737_);
lean_dec(v_a_2732_);
lean_dec(v_a_2730_);
lean_del_object(v___x_2727_);
lean_dec(v_val_2725_);
v_a_2764_ = lean_ctor_get(v___x_2740_, 0);
v_isSharedCheck_2771_ = !lean_is_exclusive(v___x_2740_);
if (v_isSharedCheck_2771_ == 0)
{
v___x_2766_ = v___x_2740_;
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
else
{
lean_inc(v_a_2764_);
lean_dec(v___x_2740_);
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
else
{
lean_object* v_a_2772_; lean_object* v___x_2774_; uint8_t v_isShared_2775_; uint8_t v_isSharedCheck_2779_; 
lean_dec(v_a_2732_);
lean_dec(v_a_2730_);
lean_del_object(v___x_2727_);
lean_dec(v_val_2725_);
lean_dec(v_val_2724_);
v_a_2772_ = lean_ctor_get(v___x_2736_, 0);
v_isSharedCheck_2779_ = !lean_is_exclusive(v___x_2736_);
if (v_isSharedCheck_2779_ == 0)
{
v___x_2774_ = v___x_2736_;
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
else
{
lean_inc(v_a_2772_);
lean_dec(v___x_2736_);
v___x_2774_ = lean_box(0);
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
v_resetjp_2773_:
{
lean_object* v___x_2777_; 
if (v_isShared_2775_ == 0)
{
v___x_2777_ = v___x_2774_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v_a_2772_);
v___x_2777_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
return v___x_2777_;
}
}
}
}
else
{
lean_object* v_a_2780_; lean_object* v___x_2782_; uint8_t v_isShared_2783_; uint8_t v_isSharedCheck_2787_; 
lean_dec(v_a_2730_);
lean_del_object(v___x_2727_);
lean_dec(v_val_2725_);
lean_dec(v_val_2724_);
v_a_2780_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2787_ == 0)
{
v___x_2782_ = v___x_2731_;
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
else
{
lean_inc(v_a_2780_);
lean_dec(v___x_2731_);
v___x_2782_ = lean_box(0);
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
v_resetjp_2781_:
{
lean_object* v___x_2785_; 
if (v_isShared_2783_ == 0)
{
v___x_2785_ = v___x_2782_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2786_; 
v_reuseFailAlloc_2786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2786_, 0, v_a_2780_);
v___x_2785_ = v_reuseFailAlloc_2786_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
return v___x_2785_;
}
}
}
}
else
{
lean_object* v_a_2788_; lean_object* v___x_2790_; uint8_t v_isShared_2791_; uint8_t v_isSharedCheck_2795_; 
lean_del_object(v___x_2727_);
lean_dec(v_val_2725_);
lean_dec(v_val_2724_);
v_a_2788_ = lean_ctor_get(v___x_2729_, 0);
v_isSharedCheck_2795_ = !lean_is_exclusive(v___x_2729_);
if (v_isSharedCheck_2795_ == 0)
{
v___x_2790_ = v___x_2729_;
v_isShared_2791_ = v_isSharedCheck_2795_;
goto v_resetjp_2789_;
}
else
{
lean_inc(v_a_2788_);
lean_dec(v___x_2729_);
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
}
v___jp_2714_:
{
lean_object* v___x_2717_; 
if (v_isShared_2702_ == 0)
{
lean_ctor_set(v___x_2701_, 0, v_g_2715_);
v___x_2717_ = v___x_2701_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2721_; 
v_reuseFailAlloc_2721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2721_, 0, v_g_2715_);
v___x_2717_ = v_reuseFailAlloc_2721_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
lean_object* v___x_2719_; 
if (v_isShared_2711_ == 0)
{
lean_ctor_set(v___x_2710_, 0, v___x_2717_);
v___x_2719_ = v___x_2710_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v___x_2717_);
v___x_2719_ = v_reuseFailAlloc_2720_;
goto v_reusejp_2718_;
}
v_reusejp_2718_:
{
return v___x_2719_;
}
}
}
}
else
{
lean_del_object(v___x_2710_);
lean_dec(v_a_2708_);
lean_del_object(v___x_2701_);
return v___x_2712_;
}
}
}
else
{
lean_dec(v_head_2706_);
lean_del_object(v___x_2701_);
return v___x_2707_;
}
}
else
{
lean_dec_ref_known(v_tail_2703_, 2);
lean_dec_ref_known(v_mvarIds_2699_, 2);
lean_del_object(v___x_2701_);
v___y_2686_ = v___y_2514_;
v___y_2687_ = v___y_2515_;
v___y_2688_ = v___y_2516_;
v___y_2689_ = v___y_2517_;
goto v___jp_2685_;
}
}
else
{
lean_dec(v_tail_2703_);
lean_dec_ref_known(v_mvarIds_2699_, 2);
lean_del_object(v___x_2701_);
v___y_2686_ = v___y_2514_;
v___y_2687_ = v___y_2515_;
v___y_2688_ = v___y_2516_;
v___y_2689_ = v___y_2517_;
goto v___jp_2685_;
}
}
else
{
lean_del_object(v___x_2701_);
lean_dec(v_mvarIds_2699_);
v___y_2686_ = v___y_2514_;
v___y_2687_ = v___y_2515_;
v___y_2688_ = v___y_2516_;
v___y_2689_ = v___y_2517_;
goto v___jp_2685_;
}
}
}
else
{
lean_dec(v_a_2684_);
v___y_2686_ = v___y_2514_;
v___y_2687_ = v___y_2515_;
v___y_2688_ = v___y_2516_;
v___y_2689_ = v___y_2517_;
goto v___jp_2685_;
}
v___jp_2685_:
{
lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; 
v___x_2690_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__9, &l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__9_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__9);
v___x_2691_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__11));
v___x_2692_ = l_Lean_MessageData_ofConstName(v___x_2691_, v___x_2527_);
v___x_2693_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2693_, 0, v___x_2690_);
lean_ctor_set(v___x_2693_, 1, v___x_2692_);
v___x_2694_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__13, &l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__13_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__13);
v___x_2695_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2695_, 0, v___x_2693_);
lean_ctor_set(v___x_2695_, 1, v___x_2694_);
v___x_2696_ = l_Lean_indentExpr(v_a_2522_);
v___x_2697_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2697_, 0, v___x_2695_);
lean_ctor_set(v___x_2697_, 1, v___x_2696_);
v___x_2698_ = l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_applyChecked_spec__1___redArg(v___x_2697_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_);
return v___x_2698_;
}
}
else
{
lean_object* v_a_2799_; lean_object* v___x_2801_; uint8_t v_isShared_2802_; uint8_t v_isSharedCheck_2806_; 
lean_dec(v_a_2522_);
v_a_2799_ = lean_ctor_get(v___x_2683_, 0);
v_isSharedCheck_2806_ = !lean_is_exclusive(v___x_2683_);
if (v_isSharedCheck_2806_ == 0)
{
v___x_2801_ = v___x_2683_;
v_isShared_2802_ = v_isSharedCheck_2806_;
goto v_resetjp_2800_;
}
else
{
lean_inc(v_a_2799_);
lean_dec(v___x_2683_);
v___x_2801_ = lean_box(0);
v_isShared_2802_ = v_isSharedCheck_2806_;
goto v_resetjp_2800_;
}
v_resetjp_2800_:
{
lean_object* v___x_2804_; 
if (v_isShared_2802_ == 0)
{
v___x_2804_ = v___x_2801_;
goto v_reusejp_2803_;
}
else
{
lean_object* v_reuseFailAlloc_2805_; 
v_reuseFailAlloc_2805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2805_, 0, v_a_2799_);
v___x_2804_ = v_reuseFailAlloc_2805_;
goto v_reusejp_2803_;
}
v_reusejp_2803_:
{
return v___x_2804_;
}
}
}
}
}
else
{
lean_object* v___x_2807_; lean_object* v___x_2808_; 
lean_del_object(v___x_2524_);
lean_dec(v_a_2522_);
v___x_2807_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__22, &l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__22_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__22);
v___x_2808_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___redArg(v_goal_2506_, v___x_2807_, v___y_2515_);
if (lean_obj_tag(v___x_2808_) == 0)
{
lean_object* v___x_2810_; uint8_t v_isShared_2811_; uint8_t v_isSharedCheck_2816_; 
v_isSharedCheck_2816_ = !lean_is_exclusive(v___x_2808_);
if (v_isSharedCheck_2816_ == 0)
{
lean_object* v_unused_2817_; 
v_unused_2817_ = lean_ctor_get(v___x_2808_, 0);
lean_dec(v_unused_2817_);
v___x_2810_ = v___x_2808_;
v_isShared_2811_ = v_isSharedCheck_2816_;
goto v_resetjp_2809_;
}
else
{
lean_dec(v___x_2808_);
v___x_2810_ = lean_box(0);
v_isShared_2811_ = v_isSharedCheck_2816_;
goto v_resetjp_2809_;
}
v_resetjp_2809_:
{
lean_object* v___x_2812_; lean_object* v___x_2814_; 
v___x_2812_ = lean_box(0);
if (v_isShared_2811_ == 0)
{
lean_ctor_set(v___x_2810_, 0, v___x_2812_);
v___x_2814_ = v___x_2810_;
goto v_reusejp_2813_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v___x_2812_);
v___x_2814_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2813_;
}
v_reusejp_2813_:
{
return v___x_2814_;
}
}
}
else
{
lean_object* v_a_2818_; lean_object* v___x_2820_; uint8_t v_isShared_2821_; uint8_t v_isSharedCheck_2825_; 
v_a_2818_ = lean_ctor_get(v___x_2808_, 0);
v_isSharedCheck_2825_ = !lean_is_exclusive(v___x_2808_);
if (v_isSharedCheck_2825_ == 0)
{
v___x_2820_ = v___x_2808_;
v_isShared_2821_ = v_isSharedCheck_2825_;
goto v_resetjp_2819_;
}
else
{
lean_inc(v_a_2818_);
lean_dec(v___x_2808_);
v___x_2820_ = lean_box(0);
v_isShared_2821_ = v_isSharedCheck_2825_;
goto v_resetjp_2819_;
}
v_resetjp_2819_:
{
lean_object* v___x_2823_; 
if (v_isShared_2821_ == 0)
{
v___x_2823_ = v___x_2820_;
goto v_reusejp_2822_;
}
else
{
lean_object* v_reuseFailAlloc_2824_; 
v_reuseFailAlloc_2824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2824_, 0, v_a_2818_);
v___x_2823_ = v_reuseFailAlloc_2824_;
goto v_reusejp_2822_;
}
v_reusejp_2822_:
{
return v___x_2823_;
}
}
}
}
}
}
else
{
lean_object* v_a_2827_; lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2834_; 
lean_dec(v_goal_2506_);
v_a_2827_ = lean_ctor_get(v___x_2521_, 0);
v_isSharedCheck_2834_ = !lean_is_exclusive(v___x_2521_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2829_ = v___x_2521_;
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
else
{
lean_inc(v_a_2827_);
lean_dec(v___x_2521_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
lean_object* v___x_2832_; 
if (v_isShared_2830_ == 0)
{
v___x_2832_ = v___x_2829_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v_a_2827_);
v___x_2832_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
return v___x_2832_;
}
}
}
}
else
{
lean_object* v_a_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2842_; 
lean_dec(v_goal_2506_);
v_a_2835_ = lean_ctor_get(v___x_2519_, 0);
v_isSharedCheck_2842_ = !lean_is_exclusive(v___x_2519_);
if (v_isSharedCheck_2842_ == 0)
{
v___x_2837_ = v___x_2519_;
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_a_2835_);
lean_dec(v___x_2519_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
lean_object* v___x_2840_; 
if (v_isShared_2838_ == 0)
{
v___x_2840_ = v___x_2837_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v_a_2835_);
v___x_2840_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
return v___x_2840_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___boxed(lean_object* v_goal_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_){
_start:
{
lean_object* v_res_2856_; 
v_res_2856_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0(v_goal_2843_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_);
lean_dec(v___y_2854_);
lean_dec_ref(v___y_2853_);
lean_dec(v___y_2852_);
lean_dec_ref(v___y_2851_);
lean_dec(v___y_2850_);
lean_dec_ref(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec_ref(v___y_2847_);
lean_dec(v___y_2846_);
lean_dec(v___y_2845_);
lean_dec_ref(v___y_2844_);
return v_res_2856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl(lean_object* v_goal_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_, lean_object* v_a_2862_, lean_object* v_a_2863_, lean_object* v_a_2864_, lean_object* v_a_2865_, lean_object* v_a_2866_, lean_object* v_a_2867_, lean_object* v_a_2868_){
_start:
{
lean_object* v___f_2870_; lean_object* v___x_2871_; 
lean_inc(v_goal_2857_);
v___f_2870_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___boxed), 13, 1);
lean_closure_set(v___f_2870_, 0, v_goal_2857_);
v___x_2871_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_introOneHygienic_spec__0___redArg(v_goal_2857_, v___f_2870_, v_a_2858_, v_a_2859_, v_a_2860_, v_a_2861_, v_a_2862_, v_a_2863_, v_a_2864_, v_a_2865_, v_a_2866_, v_a_2867_, v_a_2868_);
return v___x_2871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___boxed(lean_object* v_goal_2872_, lean_object* v_a_2873_, lean_object* v_a_2874_, lean_object* v_a_2875_, lean_object* v_a_2876_, lean_object* v_a_2877_, lean_object* v_a_2878_, lean_object* v_a_2879_, lean_object* v_a_2880_, lean_object* v_a_2881_, lean_object* v_a_2882_, lean_object* v_a_2883_, lean_object* v_a_2884_){
_start:
{
lean_object* v_res_2885_; 
v_res_2885_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl(v_goal_2872_, v_a_2873_, v_a_2874_, v_a_2875_, v_a_2876_, v_a_2877_, v_a_2878_, v_a_2879_, v_a_2880_, v_a_2881_, v_a_2882_, v_a_2883_);
lean_dec(v_a_2883_);
lean_dec_ref(v_a_2882_);
lean_dec(v_a_2881_);
lean_dec_ref(v_a_2880_);
lean_dec(v_a_2879_);
lean_dec_ref(v_a_2878_);
lean_dec(v_a_2877_);
lean_dec_ref(v_a_2876_);
lean_dec(v_a_2875_);
lean_dec(v_a_2874_);
lean_dec_ref(v_a_2873_);
return v_res_2885_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1(lean_object* v_mvarId_2886_, lean_object* v_val_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_){
_start:
{
lean_object* v___x_2900_; 
v___x_2900_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___redArg(v_mvarId_2886_, v_val_2887_, v___y_2896_);
return v___x_2900_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___boxed(lean_object* v_mvarId_2901_, lean_object* v_val_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_){
_start:
{
lean_object* v_res_2915_; 
v_res_2915_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1(v_mvarId_2901_, v_val_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_);
lean_dec(v___y_2913_);
lean_dec_ref(v___y_2912_);
lean_dec(v___y_2911_);
lean_dec_ref(v___y_2910_);
lean_dec(v___y_2909_);
lean_dec_ref(v___y_2908_);
lean_dec(v___y_2907_);
lean_dec_ref(v___y_2906_);
lean_dec(v___y_2905_);
lean_dec(v___y_2904_);
lean_dec_ref(v___y_2903_);
return v_res_2915_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_Do(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Attr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Goal(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Utils(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
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
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Goal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Attr(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Utils(uint8_t builtin) {
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
lean_object* initialize_Lean_Meta_Sym(uint8_t builtin);
lean_object* initialize_Std_Internal_Do(uint8_t builtin);
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Attr(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Attr(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Goal(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Utils(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
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
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Goal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Utils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Utils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Utils(builtin);
}
#ifdef __cplusplus
}
#endif
